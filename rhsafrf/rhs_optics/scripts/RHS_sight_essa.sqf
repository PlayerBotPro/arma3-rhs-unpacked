	/*
	Sprut essa thermal sight simulation

	a: reyhard
	*/

if(isnull (uiNamespace getVariable ["RHS_essa_Ctrl",displayNull]) )then
{
	uiNameSpace setVariable ["RHS_essa_Ctrl",_this select 0];


	[] spawn
	{
		disableSerialization;
		private _c = uiNamespace getVariable "RHS_essa_Ctrl";

		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);

		private _v = vehicle (call rhs_fnc_findPlayer);

		private _hide = true;
		private _change=true;
		private _load=true;
		private _view=true;
		private _k=0;
		private _t=0;
		private _lockPos = [0,0,0];

		//range settings
		rhs_1v528_r100 = _v getVariable ["rhs_1v528_r100",0];
		rhs_1v528_r1000 =_v getVariable ["rhs_1v528_r1000",-1];
		//angle sensor
		rhs_1v528_dk =true;
		//laser
		rhs_laserReady = true;
		rhs_trackActive = false;

		//film grain effect
		private _RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1400];
		_RHS_TV_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
		_RHS_TV_ppEffect ppEffectCommit 0;

		//sight
		private _g = _c displayCtrl 1;
		//gun ready text
		private _l = _c displayCtrl 2;
		//current ammo text
		private _a = (_c displayCtrl 3);
		//range finder text
		private _r = (_c displayCtrl 4);
		//mode text
		private _mt = (_c displayCtrl 5);
		//mode ssu
		private _ms = (_c displayCtrl 6);
		//range finder value
		private _s = (_c displayCtrl 151);
		//curent zoom
		private _z = (_c displayCtrl 180);
		//curent mode
		private _mode = (_c displayCtrl 154);
		//ti auto target text
		private _ti7 = (_c displayCtrl 21);
		//ti auto target status
		private _ti8 = (_c displayCtrl 22);

		//different precalculated controls positions
		_gP1=[-8.35 *   (0.01875 *    Safezoneh),-11.11*   (0.025 *    SafezoneH),70 *   (0.01875 * SafezoneH),70.0 *   (0.025 * SafezoneH)];
		_gP2=[9.15 *   (0.01875 *    Safezoneh),4.5*   (0.025 *    SafezoneH),35 *   (0.01875 * SafezoneH),35.0 *   (0.025 * SafezoneH)];
		_lP=[15.14 *   (0.01875 *    Safezoneh),30.14*   (0.025 *    SafezoneH),1.6 *   (0.01875 * SafezoneH),1.0 *   (0.025 * SafezoneH)];

		_sMode1="rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_narrow.paa";
		_sMode2="rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_narrow_ready.paa";
		_sModeC=_sMode2;

		//fire on the move callculations
		_fireMove = _v addEventHandler ["fired",{_this call rhs_fnc_fireOnMove}];



		while{not(isNull _a)}do
		{
			_lockPos = AGLtoASL (positionCameraToWorld [0,0,4210]);
			sleep 0.01;
			_p=(call rhs_fnc_findPlayer);
			if(_view AND {cameraView =="Gunner"} AND {_p == gunner _v})then{
				_RHS_TV_ppEffect ppEffectEnable true;
				_view=false;
			}else{
				if(not(_view) AND {cameraView !="Gunner"} OR {_p != gunner _v})then{_RHS_TV_ppEffect ppEffectEnable false;_view = true};
			};
			//view change
			_currentMode=(ctrlText _mode);
			//handling of different view modes
			if(_hide AND {(_currentMode isEqualTo "DAY3")})then
			{
				//hide controls
				{_x ctrlSetTextColor [0,0,0,0];_x ctrlSetBackgroundColor [0,0,0,0]}foreach [_mt,_a,_l,_r,_ti7,_ti8];
				_ms ctrlSetTextColor [1,1,1,1];_ms ctrlSetBackgroundColor [0,0,0,1];
				_g ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
				_hide=false;
			}else{
				if(_currentMode  isEqualTo "DAY12" AND {not(_hide)})then
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
					if(_change AND {_currentMode  isEqualTo "DAY24"})then{
						_g ctrlSetPosition _gP1;
						_g ctrlCommit 0;
						_change=false;
						_hide=false;
					};
				};
			};

			if(_currentMode  isEqualTo "AUTOTRACK")then{
				if( !(_v getVariable ["rhs_tracking",false]) && !(rhs_trackActive))then
				{
					_v lockCameraTo [_lockPos,[0]];
					sleep 0.01;
					_v lockCameraTo [objNull,[0]];
					_ti8 ctrlSetText "ГОТ";rhs_trackActive=true
				};
			}else{_ti8 ctrlSetText "ВЫКЛ";rhs_trackActive=false};


			//ready light & autoloader
			if(((_v animationPhase "Recoil" != 0) OR (_v animationPhase "Recoil2" != 0)) AND {_load})then{
				_load=false;
				_l ctrlSetPosition [0,0,0,0];
				_l ctrlCommit 0;
				_sModeC=_sMode1;
				if((_currentMode  != "DAY3"))then{_g ctrlSetText _sMode1};
			}else{
				if(not(_load) AND {_v animationPhase "Recoil" == 0} AND {_v animationPhase "Recoil2" == 0})then
				{
					_load=true;
					sleep 1;
					_l ctrlSetPosition _lP;
					_l ctrlCommit 0;
					_sModeC=_sMode2;
					if((_currentMode  != "DAY3"))then{_g ctrlSetText _sMode2};
				};
			};


			//day light mode

			//launch balistic computer
			["RHS_essa_Ctrl",_v,1] call rhs_fnc_openBallisticMenu;

			//lasing target
			//you cannot lase target in non auto mode. see balistic computer
			if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_1v528_r1000==-1} AND {rhs_laserReady})then
			{
				_t=parseNumber ctrlText _s;
				if(_t > 200 && _t < 5000)then
				{
					sleep 0.5;
					[_v,_t,"RHS_essa_Ctrl",1] call rhs_fnc_sight_essa_elev;
					[_v,"RHS_essa_Ctrl"] spawn rhs_fnc_autoTrack;
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
		uiNameSpace setVariable ["RHS_essa_Ctrl",displayNull];
		_V removeEventHandler ["fired",_fireMove];
		//saving settings, useful when changing between seats
		{
			_v setVariable [_x select 0,_x select 1];
		}foreach [
			["rhs_1v528_r100",rhs_1v528_r100],
			["rhs_1v528_r1000",rhs_1v528_r1000]
		];
	};
};