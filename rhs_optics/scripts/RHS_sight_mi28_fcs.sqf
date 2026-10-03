/*
Mi-28  OPS-28 'TOR' Fire Control Systems

a: reyhard
*/


if(isNull (uiNamespace getVariable ["RHS_mi28_fcs_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_mi28_fcs_Ctrl",_this select 0];
	[] spawn
	{
		disableSerialization;
		//UI initialization
		private _c = uiNamespace getVariable "RHS_mi28_fcs_Ctrl";
		private _cd = _c displayCtrl 1; 		//actual distance
		private _td = _c displayCtrl 2; 		//time to target
		private _ca = _c displayCtrl 3; 		//turret indicator arrow
		private _ch = _c displayCtrl 4; 		//horizontal turret indicator
		private _cv = _c displayCtrl 5; 		//vertical turret indicator
		private _cas = _c displayCtrl 6; 		//AS - indicator of target lock
		private _cps = _c displayCtrl 7; 		//PS - indicator of ground lock
		private _tvk = _c displayCtrl 8; 		//TVK - TV Channel
		private _tpk = _c displayCtrl 9; 		//TPK - Thermal Channel
		private _tsl = _c displayCtrl 10; 		//TSL - TOES-521 Channel
		private _cc = _c displayCtrl 11; 		//gunner cross
		private _zoom = _c displayCtrl 180; 	//current zoom
		private _dist = _c displayCtrl 151; 	//distance to target
		private _mode = _c displayCtrl 154; 	//current zoom

		//Custom keys initialization
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);

		//Common variables initialization
		private _p = call rhs_fnc_findPlayer;
		private _v = vehicle _p;
		private _correctV = 1;
		private _zoomH = 1.3;
		private _oldDistance = "";
		private _change = true;
		private _trackingMode = false;
		private _lockPos = [0,0,0];
		rhs_laserReady = true;
		rhs_trackActive = true;

		// fire on move for 2a42
		_fireMove = _v addEventHandler ["fired",{if(_this select 1 == "rhs_weap_2a42")then{_this call rhs_fnc_fireOnMove}}];

		//Black & White post processing effect
		private _RHS_TVBW_ppEffect = ppEffectCreate ["colorCorrections", 1500];
		_RHS_TVBW_ppEffect ppEffectAdjust [1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1], false];
		_RHS_TVBW_ppEffect ppEffectCommit 0;

		//Hide controls that should be invisible on start up
		{
			_x ctrlSetTextColor [1,1,1,0];
		}foreach [_cas,_cps,_tsl,_tpk];

		//Main loop
		while{not(isNull _cc)}do
		{

			//let's do camera operations only when zoomed in
			if(cameraView isEqualTo "GUNNER")then{

				private _gunHorizontal =-deg( _v animationSourcePhase "MainTurret");
				private _gunVertical = deg( _v animationSourcePhase "MainGun");
				_lockPos = AGLtoASL (positionCameraToWorld [0,0,4210]);

				_RHS_TVBW_ppEffect ppEffectEnable true;
				_currentZoom=parseNumber (ctrlText _zoom);
				_currentMode=parseNumber (ctrlText _mode);
				_currentDistance=parseNumber (ctrlText _dist);

				//Rotating turret indicator (left bottom corner) & setting text for horizontal rotation indicator (top)
				_ca ctrlSetAngle [_gunHorizontal,0.5,0.5];
				_ca ctrlCommit 0.1;
				//horizontal indicator
				_ch_pos = ctrlPosition _ch;
				_cv_pos = ctrlPosition _cv;

				_ch ctrlSetPosition [((_gunHorizontal*0.14283333333)+26.15) *   (0.01875 * Safezoneh),_ch_pos select 1,_ch_pos select 2,_ch_pos select 3];
				_cv ctrlSetPosition [_cv_pos select 0,((_gunVertical*-0.155)+19.11) * (0.025 * SafezoneH),_cv_pos select 2,_cv_pos select 3];
				_cv ctrlCommit 0;
				_ch ctrlCommit 0;

				//synchronizing vision mode with pip monitor for both players
				if(currentVisionMode _p isEqualTo 2 and {_change})then
				{
					_tvk ctrlSetTextColor [1,1,1,0];
					_tpk ctrlSetTextColor [1,1,1,1];
					_v setVariable ["rhs_mi28_mode",currentVisionMode _p,true];
					_change=false;
				}else{
					if(currentVisionMode _p isEqualTo 0 AND {not(_change)})then{
						_tvk ctrlSetTextColor [1,1,1,0];
						_tpk ctrlSetTextColor [1,1,1,1];
						_v setVariable ["rhs_mi28_mode",currentVisionMode _p,true];
						_change=true;
					};
				};

				//lrf distance handler
				if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_laserReady})then{
					_distance= (ctrlText _dist);
					if(_currentDistance isEqualTo 0)then{
							_distance="";
					}else{
						_distance= format["%1",(floor ((parseNumber (ctrlText _dist))/100))/10];
					};
					_cd ctrlSetText _distance;
					//set distance on mfd
					_distance = _distance splitString ".";
					/*{
						_v setObjectTextureGlobal [7-_forEachIndex,format["\rhsafrf\addons\rhs_optics\scripts\digi_numb\rhs_digi_%1.paa",_distance param [_forEachIndex,0]]];
					}foreach [1,2];*/

					// 2a42 gun elevation
					[_v,parseNumber (ctrlText _dist)] call rhs_fnc_sight_samshin_elev;

					//auto track initalization
					[_v,"RHS_mi28_fcs_Ctrl","AllVehicles"] spawn rhs_fnc_autoTrack;

					// Call laser target function
					[_v, _currentDistance] call RHS_fnc_laserTarget;

					rhs_laserReady=false;
					[] spawn
					{
						sleep 0.5;
						rhs_laserReady = true;
					};
				};

				//functions for connected with last vision mode - ground & vehicle lock possible
				if(_currentMode isEqualTo 3)then{

					//fix for rapid screen movement when changing from view without directionStabilization
					//activated only once
					if(_zoomH != _currentZoom)then{
						_zoomH=_currentZoom;
						_v lockCameraTo [_lockPos,[0]];
						sleep 0.01;
						_v lockCameraTo [objNull,[0]];
						_v setVariable ["rhs_mi28_zoom",_currentZoom*2.34,true];
						rhs_trackActive = true;
						//systemChat format["zmiana %1",_zoomH];
					};
					//hidding & unhiding track controls
					if(_v getVariable ["rhs_tracking",false])then{
						if(!(_trackingMode))then{
							_cc ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_cross_autotrack.paa";
							//_v animate ["mfd_right_gun_tg",1];
							//_v animate ["mfd_right_gun_ta",1];
							_trackingMode=true;
							//systemChat "sledzenie celu";
						};

						//automatic distance changing  during auto track. only on change
						_distance= (ctrlText _dist);
						if(_distance != _oldDistance)then{
							if(_currentDistance isEqualTo 0)then{
									_distance="";
							}else{
								_distance= format["%1",(floor ((parseNumber (ctrlText _dist))/100))/10];
							};
							_cd ctrlSetText _distance;
							_oldDistance = _distance;
							//set distance on mfd
							_distance = _distance splitString ".";
							/*{
								_v setObjectTextureGlobal [7-_forEachIndex,format["\rhsafrf\addons\rhs_optics\scripts\digi_numb\rhs_digi_%1.paa",_distance param [_forEachIndex,0]]];
							}foreach [1,2];*/

							//adjust gun elevation if autocannon is selected
							if(currentWeapon _v == "rhs_weap_2a42")then{
								// 2a42 gun elevation
								[_v,parseNumber (ctrlText _dist)] call rhs_fnc_sight_samshin_elev;
							};

						};
					}else{
						if(_trackingMode)then{
							_cc ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_cross.paa";
							_cas ctrlSetTextColor [1,1,1,1];
							_cps ctrlSetTextColor [1,1,1,1];
							//_v animate ["mfd_right_gun_tg",0];
							//_v animate ["mfd_right_gun_ta",1];
							_trackingMode=false;
							//systemChat "sledzenie gruntu";
						};
					};
				}else{
					if(_currentMode isEqualTo 2)then{
						if(_zoomH != _currentZoom)then{
							_zoomH=_currentZoom;

							//hide terrain lock control
							_cas ctrlSetTextColor [1,1,1,0];
							_cps ctrlSetTextColor [1,1,1,0];
							//_v animate ["mfd_right_gun_tg",1];
							//_v animate ["mfd_right_gun_ta",1];
							//change monitor texture & sync zoom level
							//_v setObjectTextureGlobal [5,"rhsafrf\addons\rhs_a2port_air\mi28\Data\rhs_mi28_mi28_fcs.paa"];
							_v setVariable ["rhs_mi28_zoom",_currentZoom*2.34,true];
							rhs_trackActive = false;
							_trackingMode=true;

							//systemChat format["zmiana %1",_zoomH];
						};
					};
					if(_currentMode isEqualTo 1)then{
						if(_zoomH != _currentZoom)then{
							_zoomH=_currentZoom;
							//change monitor texture & sync zoom level
							//_v setObjectTextureGlobal [5,"rhsafrf\addons\rhs_a2port_air\mi28\Data\rhs_mi28_mi28_fcs_wfov.paa"];
							_v setVariable ["rhs_mi28_zoom",_currentZoom*2.34,true];
							//systemChat format["zmiana %1",_zoomH];
						};
					};
				};
				inputAction rhs_key_dmp_lead_GLB;
				//hintSilent format["zoom: %1 \ndistance: %2 \ndmp: %3 \nvertical: %4\nmode: %5",_currentZoom ,(ctrlText _dist),inputAction rhs_key_dmp_lead_GLB,_gunVertical,ctrlText _mode];
			}else{
				_RHS_TVBW_ppEffect ppEffectEnable false;
			};
			sleep 0.001;

		};

		//deinitialization
		_RHS_TVBW_ppEffect ppEffectEnable false;
		_V removeEventHandler ["fired",_fireMove];
		uiNameSpace setVariable ["RHS_mi28_fcs_Ctrl",displayNull];
		rhs_laserReady = nil;
	};

};