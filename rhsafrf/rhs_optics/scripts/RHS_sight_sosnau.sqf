	/*
	Sprut essa thermal sight simulation

	a: reyhard
	*/

if(isnull (uiNamespace getVariable ["RHS_Sosna_Ctrl",displayNull]) )then
{
	uiNameSpace setVariable ["RHS_Sosna_Ctrl",_this # 0];


	(_this param [1,false]) spawn
	{
		params[
			["_isCommander",false]
		];
		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "RHS_Sosna_Ctrl";

		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);
		rhs_key_nxt_rnd_GLB=(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]);
		rhs_key_mode_chng_GLB=(profileNamespace getVariable ["rhs_key_mode_chng","SwimDown"]);

		_v = vehicle (call rhs_fnc_findPlayer);

		_hide = true;
		_change=true;
		_load=true;
		_view=true;
		_k=0;
		_t=0;
		private _lockPos = [0,0,0];

		//range settings
		rhs_1v528_r100 = _v getVariable ["rhs_1v528_r100",0];
		rhs_1v528_r1000 =_v getVariable ["rhs_1v528_r1000",-1];
		//angle sensor
		rhs_1v528_dk =true;
		rhs_laserReady = true;
		rhs_trackActive = false;
		//next ammo
		rhs_loadType=_v getVariable ["rhs_loadType",1];
		//auto loader mode - default sequential loading on
		_rhs_loadMode=_v getVariable ["rhs_loadMode",1];

		//film grain effect
		_RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1400];
		_RHS_TV_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
		_RHS_TV_ppEffect ppEffectCommit 0;

		//sight
		_g = _c displayCtrl 1;
		//gun ready text
		_l = _c displayCtrl 2;
		//current ammo text
		_a = (_c displayCtrl 3);
		//range finder text
		_r = (_c displayCtrl 4);
		//mode text
		_mt = (_c displayCtrl 5);
		//mode ssu
		_ms = (_c displayCtrl 6);
		//range finder value
		_s = (_c displayCtrl 151);
		//curent zoom
		_z = (_c displayCtrl 180);
		//curent mode
		_mode = (_c displayCtrl 154);
		//loader switch
		_loaderSwitch = (_c displayCtrl 312);
		//loader mode switch
		_loaderModeSwitch = (_c displayCtrl 313);

		//ti auto target text
		_ti7 = (_c displayCtrl 21);
		//ti auto target status
		_ti8 = (_c displayCtrl 22);

		//different precalculated controls positions
		_gP1=[-8.35 *   (0.01875 *    Safezoneh),-11.1*   (0.025 *    SafezoneH),70 *   (0.01875 * SafezoneH),70.0 *   (0.025 * SafezoneH)];
		_gP2=[9.15 *   (0.01875 *    Safezoneh),4.5*   (0.025 *    SafezoneH),35 *   (0.01875 * SafezoneH),35.0 *   (0.025 * SafezoneH)];
		_lP=[15.14 *   (0.01875 *    Safezoneh),30.14*   (0.025 *    SafezoneH),1.6 *   (0.01875 * SafezoneH),1.0 *   (0.025 * SafezoneH)];

		_sMode1="rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_narrow.paa";
		_sMode2="rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_narrow_ready.paa";
		_sModeC=_sMode2;

		//default is 1
		if(_rhs_loadMode isEqualTo 0)then
		{
			_loaderModeSwitch ctrlSetModel "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_off.p3d";
		};
		_v1=[[0,1],([-67,-97,-125,-155] select rhs_loadType)] call BIS_fnc_rotateVector2D;
		_loaderSwitch ctrlSetModelDirAndUp [[0,-1,0],[_v1 select 0, 0, _v1 select 1]];

		//fire on the move callculations
		_fireMove = _v addEventHandler ["fired",{_this call rhs_fnc_fireOnMove}];

		//blocking manual reload for player
		inGameUISetEventHandler ["Action", "(_this + ['RHS_Sosna_Ctrl',0]) call rhs_fnc_autoloader_ui_eh;"];

		_mags = [_v] call rhs_fnc_ammoIndexing;

		while{not(isNull _a)}do
		{
			//hintSilent format["%1",_isCommander];
			_lockPos = AGLtoASL (positionCameraToWorld [0,0,4210]);
			sleep 0.01;

			if(_view AND {cameraView =="Gunner"} AND {(call rhs_fnc_findPlayer) == gunner _v})then{
				_RHS_TV_ppEffect ppEffectEnable true;
				_view=false;
			}else{
				if(not(_view) AND {cameraView !="Gunner"} OR {(call rhs_fnc_findPlayer) != gunner _v})then{_RHS_TV_ppEffect ppEffectEnable false;_view = true};
			};
			//view change
			_currentMode = ctrlText _mode;
			//handling of different view modes
			if(_hide AND {(_currentMode  isEqualTo "TI1")})then
			{
				//hide controls
				{_x ctrlSetTextColor [0,0,0,0];_x ctrlSetBackgroundColor [0,0,0,0]}foreach [_mt,_a,_l,_r,_ti7,_ti8];
				_ms ctrlSetTextColor [1,1,1,1];_ms ctrlSetBackgroundColor [0,0,0,1];
				_g ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
				_hide=false;
			}else{
				if(_currentMode  isEqualTo "TI2" AND {not(_hide)})then
				{
					//unhide controls
					{_x  ctrlSetTextColor [1,1,1,1];_x ctrlSetBackgroundColor [0,0,0,1]}foreach [_mt,_a,_l,_r,_ti7,_ti8];
					_ms ctrlSetTextColor [1,1,1,0];_ms ctrlSetBackgroundColor [1,1,1,0];
					_g ctrlSetText _sModeC;
					_hide=true;
					_change=true;
					_g ctrlSetPosition _gP2;
					_g ctrlCommit 0;
				}else{
					if(_change AND {_currentMode  isEqualTo "TI3"})then{
						_g ctrlSetPosition _gP1;
						_g ctrlCommit 0;
						_change=false;
						_hide=false;
					};
				};
			};

			if(_currentMode isEqualTo "AUTOTRACK")then{
				if( !(_v getVariable ["rhs_tracking",false]) && !(rhs_trackActive))then
				{
					_v lockCameraTo [_lockPos,[0]];
					sleep 0.01;
					_v lockCameraTo [objNull,[0]];
					_ti8 ctrlSetText "ГОТ";rhs_trackActive=true
				};
			}else{_ti8 ctrlSetText "ВЫКЛ";rhs_trackActive=false};


			//ready light & autoloader
			if(((    (_v animationPhase "reload_handler" != 0) OR (_v animationPhase "reload_handler_magazine" != 0) OR (_v doorPhase "recoil_source" !=0) ) )  AND {_load})then{
				_load=false;
				_l ctrlSetPosition [0,0,0,0];
				_l ctrlCommit 0;
				_sModeC=_sMode1;
				if((_currentMode  != "TI1"))then{_g ctrlSetText _sMode1};
				[rhs_loadType,_v,_mags,_rhs_loadMode] spawn rhs_fnc_autoloader;
			}else{
				if(not(_load) AND {(_v animationPhase "reload_handler" == 0) AND (_v animationPhase "reload_handler_magazine" == 0)  AND (_v doorPhase "recoil_source" ==0)} AND {(currentWeapon _v) == (_mags select 0)} )then
				{
					_load=true;
					sleep 1;
					_l ctrlSetPosition _lP;
					_l ctrlCommit 0;
					_sModeC=_sMode2;
					if((_currentMode  != "TI1"))then{_g ctrlSetText _sMode2};
				};
			};
			if(!_isCommander)then{
				//autoloader mode switch
				_rhs_loadMode=[_loaderModeSwitch,_rhs_loadMode] call rhs_fnc_autoloaderSwitch;

				//autoloader ammo switch
				[_loaderSwitch,0] call rhs_fnc_ammoSwitch;

				//launch balistic computer
				["RHS_Sosna_Ctrl",_v,1] call rhs_fnc_openBallisticMenu
			};


			//lasing target
			//you cannot lase target in non auto mode. see balistic computer
			if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_1v528_r1000==-1} AND {rhs_laserReady})then
			{
				_t=parseNumber ctrlText _s;
				if(_t > 200 && _t < 5000)then
				{
					sleep 0.5;
					if(!_isCommander)then
					{
						[_v,_t,"RHS_Sosna_Ctrl",1] call rhs_fnc_sight_1g42_setElev
					}else{
						// set visible distance text
						if(_t>=1000)then{
							_r ctrlSetText format["%1",_t];
						}else{
							if(_t>100)then{_r ctrlSetText format["0%1",_t]}else{
								_r ctrlSetText format["00%1",_t];
							};
						};
					};
					[_v,"RHS_Sosna_Ctrl"] spawn rhs_fnc_autoTrack;
				}else{
					playSound ["RHS_Error",TRUE];
					_r ctrlSetText "----";
				};
				// Call laser target function
				[_v, _t] call RHS_fnc_laserTarget;

				rhs_laserReady=false;

				[] spawn
				{
					sleep 3.5;
					rhs_laserReady = true;
				};
			};
		};
		_v animate["lead",0];
		rhs_trackActive=false;
		ppEffectDestroy _RHS_TV_ppEffect;
		uiNameSpace setVariable ["RHS_Sosna_Ctrl",displayNull];
		inGameUISetEventHandler ["Action", ""];
		_V removeEventHandler ["fired",_fireMove];
		//saving settings, useful when changing between seats
		{
			_v setVariable [_x select 0,_x select 1];
		}foreach [
			["rhs_1v528_r100",rhs_1v528_r100],
			["rhs_1v528_r1000",rhs_1v528_r1000],
			["rhs_loadType",rhs_loadType],
			["rhs_loadMode",_rhs_loadMode]
		];
	};
};