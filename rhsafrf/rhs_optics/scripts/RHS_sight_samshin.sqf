/*
Samshin-1 simulation for Ka-52 helicopter
rhs_fnc_sight_Samshin

a: reyhard
*/


if(isNull (uiNamespace getVariable ["RHS_Samshin_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_Samshin_Ctrl",_this select 0];

	[] spawn
	{
		disableSerialization;
		//UI initialization
		private _c		= uiNamespace getVariable "RHS_Samshin_Ctrl";
		private _cd		= _c displayCtrl 1; 	//actual distance
		private _ca		= _c displayCtrl 2; 	//turret indicator arrow
		private _ch		= _c displayCtrl 3; 	//horizontal turret indicator
		private _cht	= _c displayCtrl 4; 	//horizontal turret indicator - text
		private _cv		= _c displayCtrl 5; 	//vertical turret indicator
		private _ctg	= _c displayCtrl 6; 	//TG - indicator of ground lock
		private _cta	= _c displayCtrl 7; 	//TA - indicator of target lock
		private _cc		= _c displayCtrl 8; 	//gunner cross
		private _td		= _c displayCtrl 9; 	//time to target
		private _cvt	= _c displayCtrl 10; 	//vertical turret indicator
		private _zoom	= _c displayCtrl 154; 	//current zoom
		private _dist	= _c displayCtrl 198; 	//distance to target

		//Custom keys initialization
		rhs_key_lase_tgt_GLB	= (profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB	= (profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);

		//Common variables initialization
		private _p				= call rhs_fnc_findPlayer;
		private _v				= vehicle _p;
		private _correctV		= 1;
		private _zoomH			= 1.3;
		private _oldDistance	= "";
		private _change			= true;
		private _checkRange		= true;
		private _trackingMode	= false;
		private _limits			= [
			[70,-70,13,-80],	//vikhr limits
			[10,-2,3,-37]		//2a42 limits
		];
		rhs_laserReady = true;
		rhs_trackActive = true;

		// fire on move for 2a42
		private _fireMove = _v addEventHandler ["fired",{if(_this select 1 == "rhs_weap_2a42")then{_this call rhs_fnc_fireOnMove}}];

		//Black & White post processing effect
		private _RHS_TVBW_ppEffect = ppEffectCreate ["colorCorrections", 1500];
		_RHS_TVBW_ppEffect ppEffectAdjust [1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1], false];
		_RHS_TVBW_ppEffect ppEffectCommit 0;

		//Hide controls that should be invisible on start up
		{
			_x ctrlSetTextColor [1,1,1,0];
		}foreach [_ctg,_cta];
		_gunMaxH=0;_gunMaxV=0;_gunMinH=0;_gunMinV=0;

		//Main loop
		while{not(isNull _cc)}do
		{
			//let's do camera operations only when zoomed in
			if(cameraView isEqualTo "GUNNER")then{

				private _gunHorizontal	= -deg( _v animationPhase "MainTurret");
				private _gunVertical	= deg( _v animationPhase "MainGun");
				private _lockPos = AGLtoASL (positionCameraToWorld [0,0,4210]);

				_RHS_TVBW_ppEffect ppEffectEnable true;
				_distance			= (ctrlText _dist);
				_currentZoom		= parseNumber (ctrlText _zoom);
				_currentDistance	= parseNumber (_distance);

				//Rotating turret indicator (left bottom corner) & setting text for horizontal rotation indicator (top)
				_ca ctrlSetAngle [_gunHorizontal,0.5,0.5];
				_ca ctrlCommit 0.1;
				_cht ctrlSetText format["%1",floor(_gunHorizontal)];
				_cvt ctrlSetText format["%1",floor(_gunVertical*10)/10];
				//horizontal indicator
				if(_gunHorizontal>0)then{
					_ch ctrlSetPosition [27.1 *   (0.01875 * Safezoneh),3.24 * (0.025 * SafezoneH),(_gunHorizontal*0.155) *   (0.01875 * SafezoneH),0.6 *   (0.025 * SafezoneH)];
				}else{
					_ch ctrlSetPosition [ (_gunHorizontal*0.155 + 27.1) *   (0.01875 * Safezoneh),3.24 * (0.025 * SafezoneH),(abs(_gunHorizontal)*0.155) *   (0.01875 * SafezoneH),0.6 *   (0.025 * SafezoneH)];
				};
				//vertical indicator, dynamic scalling change
				_correctV = _gunVertical;
				if(abs(_gunVertical)>10)then{
					_correctV=10+abs(10-abs(_gunVertical))/2;
				};
				if(abs(_correctV)>15)then{
					_correctV=15+abs(15-abs(_correctV))/2;
				};
				if(_gunVertical>0)then{
					_cv ctrlSetPosition [ 50.7 *   (0.01875 * Safezoneh),(-(_correctV)*0.5394 + 16.04) * (0.025 * SafezoneH),0.6 *   (0.01875 * SafezoneH),(abs(_correctV)*0.5394) *   (0.025 * SafezoneH)];
				}else{
					_cv ctrlSetPosition [50.7 *   (0.01875 * Safezoneh),16.04 * (0.025 * SafezoneH),0.6 *   (0.01875 * SafezoneH),(abs(_correctV)*0.5394) *   (0.025 * SafezoneH)];
				};
				_cv ctrlCommit 0;
				_ch ctrlCommit 0;


				//gun limits handler - hidding cross beyond those
				if(currentWeapon _v == "rhs_weap_Vikhr_Launcher")then{
					_gunMaxH = (_limits # 0) # 0;
					_gunMinH = (_limits # 0) # 1;
					_gunMaxV = (_limits # 0) # 2;
					_gunMinV = (_limits # 0) # 3;
				}else{
					_gunMaxH = (_limits # 1) # 0;
					_gunMinH = (_limits # 1) # 1;
					_gunMaxV = (_limits # 1) # 2;
					_gunMinV = (_limits # 1) # 3;
				};
				if(_gunHorizontal > _gunMaxH OR _gunHorizontal < _gunMinH OR _gunVertical > _gunMaxV OR _gunVertical < _gunMinV)then{
					_cc ctrlSetTextColor [1,1,1,0];
				}else{
					_cc ctrlSetTextColor [1,1,1,1];
				};

				//synchronizing vision mode with pip monitor for both players
				if(currentVisionMode _p isEqualTo 2 and {_change})then
				{
					_v setVariable ["rhs_ka52_mode",currentVisionMode _p,true];
					_change=false;
				}else{
					if(currentVisionMode _p isEqualTo 0 AND {not(_change)})then{
						_v setVariable ["rhs_ka52_mode",currentVisionMode _p,true];
						_change=true;
					};
				};

				//lrf distance handler
				if(!rhs_laserReady && _checkRange)then{
					_checkRange = false;
					if(_currentDistance isEqualTo 0)then{
							_distance="";
					}else{
						_distance= format["%1",(floor ((parseNumber (ctrlText _dist))/100))/10];
					};
					_cd ctrlSetText _distance;
					//set distance on mfd
					_v setUserMFDText [1,_distance];

					// 2a42 gun elevation
					[_v,parseNumber (ctrlText _dist)] call rhs_fnc_sight_samshin_elev;

					//auto track initalization
					[_v,"RHS_Samshin_Ctrl","AllVehicles"] spawn rhs_fnc_autoTrack;

					// Call laser target function
					[_v, _currentDistance] call RHS_fnc_laserTarget;
				};
				if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_laserReady})then{

					rhs_laserReady=false;
					_checkRange = true;
					[] spawn
					{
						sleep 0.5;
						rhs_laserReady = true;
					};
				};

				//functions for connected with last vision mode - ground & vehicle lock possible
				if(_currentZoom isEqualTo 22)then{

					//fix for rapid screen movement when changing from view without directionStabilization
					//activated only once
					if(_zoomH != _currentZoom)then
					{
						_zoomH = _currentZoom;
						_v lockCameraTo [_lockPos,[0]];
						sleep 0.01;
						_v lockCameraTo [objNull,[0]];
						_v setVariable ["rhs_ka52_zoom",_currentZoom,true];
						rhs_trackActive = true;
						//systemChat format["zmiana %1",_zoomH];
					};
					//hidding & unhiding track controls
					if(_v getVariable ["rhs_tracking",false])then
					{
						if(!(_trackingMode))then{
							_ctg ctrlSetTextColor [1,1,1,0];
							_cta ctrlSetTextColor [1,1,1,1];
							_v animate ["mfd_right_gun_tg",1];
							_v animate ["mfd_right_gun_ta",0];
							_trackingMode = true;
							//systemChat "sledzenie celu";
						};

						//automatic distance changing  during auto track. only on change
						if(_distance != _oldDistance)then{
							if(_currentDistance isEqualTo 0)then{
									_distance = "";
							}else{
								_distance = format["%1",(floor ((parseNumber (ctrlText _dist))/100))/10];
							};
							_cd ctrlSetText _distance;
							_oldDistance = _distance;
							//set distance on mfd
							_v setUserMFDText [1,_distance];

							//adjust gun elevation if autocannon is selected
							if(currentWeapon _v == "rhs_weap_2a42")then{
								// 2a42 gun elevation
								[_v,parseNumber (ctrlText _dist)] call rhs_fnc_sight_samshin_elev;
							};

						};
					}else{
						if(_trackingMode)then{
							_ctg ctrlSetTextColor [1,1,1,1];
							_cta ctrlSetTextColor [1,1,1,0];
							_v animate ["mfd_right_gun_tg",0];
							_v animate ["mfd_right_gun_ta",1];
							_trackingMode = false;
							//systemChat "sledzenie gruntu";
						};
					};
				}else{
					if(_currentZoom isEqualTo 15)then{
						if(_zoomH != _currentZoom)then{
							_zoomH = _currentZoom;

							//hide terrain lock control
							_ctg ctrlSetTextColor [1,1,1,0];
							_cta ctrlSetTextColor [1,1,1,0];
							_v animate ["mfd_right_gun_tg",1];
							_v animate ["mfd_right_gun_ta",1];
							//change monitor texture & sync zoom level
							_v setObjectTextureGlobal [5,"rhsafrf\addons\rhs_a2port_air\Ka52\Data\rhs_ka52_samshin.paa"];
							_v setVariable ["rhs_ka52_zoom",_currentZoom,true];
							rhs_trackActive = false;
							_trackingMode = true;

							//systemChat format["zmiana %1",_zoomH];
						};
					};
					if(_currentZoom isEqualTo 3)then{
						if(_zoomH != _currentZoom)then{
							_zoomH=_currentZoom;
							//change monitor texture & sync zoom level
							_v setObjectTextureGlobal [5,"rhsafrf\addons\rhs_a2port_air\Ka52\Data\rhs_ka52_samshin_wfov.paa"];
							_v setVariable ["rhs_ka52_zoom",_currentZoom,true];
							//systemChat format["zmiana %1",_zoomH];
						};
					};
				};
				inputAction rhs_key_dmp_lead_GLB;
				//hintSilent format["zoom: %1 \ndistance: %2 \ndmp: %3 \nvertical: %4",_currentZoom ,(ctrlText _dist),inputAction rhs_key_dmp_lead_GLB,_gunVertical];
			}else{
				_RHS_TVBW_ppEffect ppEffectEnable false;
			};
			sleep 0.01;

		};

		//deinitialization
		ppEffectDestroy [_RHS_TVBW_ppEffect];
		_RHS_TVBW_ppEffect ppEffectEnable false;
		_V removeEventHandler ["fired",_fireMove];
		uiNameSpace setVariable ["RHS_Samshin_Ctrl",displayNull];
		rhs_laserReady = nil;
	};

};