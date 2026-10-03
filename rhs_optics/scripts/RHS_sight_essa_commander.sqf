	/*
	Sprut essa thermal sight simulation

	a: reyhard
	*/

if(isnull (uiNamespace getVariable ["RHS_essa_com_Ctrl",displayNull]) )then
{
	uiNameSpace setVariable ["RHS_essa_com_Ctrl",_this select 0];


	[] spawn
	{
		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "RHS_essa_com_Ctrl";
		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);

		_hide = true;
		_change=true;
		_load=true;
		_view=true;
		_k=0;
		_t=0;
		//laser
		rhs_laserReady = true;

		//film grain effect
		_RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1405];
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

		//different precalculated controls positions
		_gP1=[-8.35 *   (0.01875 *    Safezoneh),-11.1*   (0.025 *    SafezoneH),70 *   (0.01875 * SafezoneH),70.0 *   (0.025 * SafezoneH)];
		_gP2=[9.15 *   (0.01875 *    Safezoneh),4.5*   (0.025 *    SafezoneH),35 *   (0.01875 * SafezoneH),35.0 *   (0.025 * SafezoneH)];
		_lP=[15.14 *   (0.01875 *    Safezoneh),30.14*   (0.025 *    SafezoneH),1.6 *   (0.01875 * SafezoneH),1.0 *   (0.025 * SafezoneH)];

		_sMode1="rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_narrow.paa";
		_sMode2="rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_narrow_ready.paa";
		_sModeC=_sMode2;


		_v = vehicle (call rhs_fnc_findPlayer);

		_mag=currentMagazine _v;
		_ammo=(getText (configFile >> "CfgMagazines" >> _mag >> "ammo" ));

		if(_ammo isKindOf "rhs_ammo_3ubr6")then
		{
			//APBC - 2A72
			_a ctrlSetText "Б";
		}else{
			if(_ammo isKindOf "rhs_ammo_3uor6")then
			{
				//HE - 2A72
				_a ctrlSetText "УО";

			}else{
				if(_ammo isKindOf "rhs_ammo_3of_base")then
				{
					//HEF - 2A70
					_a ctrlSetText "О";

				}else{
					if(_ammo isKindOf "MissileCore")then
					{
						_a ctrlSetText "У";
					}else{
						if(currentMagazine _v == "rhs_mag_762x54mm_250")then
						{
							_a ctrlSetText "П";
						};
					};
				};
			};
		};

		while{not(isNull _a)}do
		{
			sleep 0.01;

			if(_view AND {cameraView =="Gunner"} AND {(call rhs_fnc_findPlayer) == commander _v})then{
				_RHS_TV_ppEffect ppEffectEnable true;
				_view=false;
			}else{
				if(not(_view) AND {cameraView !="Gunner"} OR {(call rhs_fnc_findPlayer) != commander _v})then{_RHS_TV_ppEffect ppEffectEnable false;_view = true};
			};

			//view change
			_currentMode=ctrlText _mode;
			//handling of different view modes
			if(_hide AND {(_currentMode  isEqualTo "DAY3")})then
			{
				//hide controls
				{_x ctrlSetTextColor [0,0,0,0];_x ctrlSetBackgroundColor [0,0,0,0]}foreach [_mt,_a,_l,_r];
				_ms ctrlSetTextColor [1,1,1,1];_ms ctrlSetBackgroundColor [0,0,0,1];
				_g ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
				_hide=false;
			}else{
				if(_currentMode  isEqualTo "DAY12" AND {not(_hide)})then
				{
					//unhide controls
					{_x  ctrlSetTextColor [1,1,1,1];_x ctrlSetBackgroundColor [0,0,0,1]}foreach [_mt,_a,_l,_r];
					_ms ctrlSetTextColor [1,1,1,0];_ms ctrlSetBackgroundColor [1,1,1,0];
					_g ctrlSetText _sModeC;
					_hide=true;
					_change=true;
					_g ctrlSetPosition _gP2;
					_g ctrlCommit 0;
				}else{
					if(_change AND {_currentMode  isEqualTo "day24"})then{
						_g ctrlSetPosition _gP1;
						_g ctrlCommit 0;
						_change=false;
						_hide=false;
					};
				};
			};


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

			//current ammo type indicator
			if(_mag != (currentMagazine _v) )then
			{
				_mag=currentMagazine _v;
				_ammo=(getText (configFile >> "CfgMagazines" >> _mag >> "ammo" ));
				switch(true) do {
					case (_ammo isKindOf "rhs_ammo_3ubr6"): {_a ctrlSetText "Б";};		//APBC - 2A72
					case (_ammo isKindOf "rhs_ammo_3uor6"): {_a ctrlSetText "УО";}; 	//HE - 2A72
					case (_ammo isKindOf "rhs_ammo_3of_base"): {_a ctrlSetText "О";};  	//HEF - 2A70
					case (_ammo isKindOf "MissileCore"): {_a ctrlSetText "У";};			//ATGM - 2A70
					case (_mag == "rhs_mag_762x54mm_250"): {_a ctrlSetText "П";};
				};
			};



			//lasing target
			//you cannot lase target in non auto mode. see balistic computer
			if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_laserReady})then
			{
				_t=parseNumber ctrlText _s;
				if(_t > 400)then
				{
					if(_t>=1000)then{
						_r ctrlSetText format["%1",_t];
					}else{
						if(_t>100)then{_r ctrlSetText format["0%1",_t]}else{
							_r ctrlSetText format["00%1",_t];
						};
					};
				}else{
				//error, minimal range not reached. play beep sound & zero displays
					playSound ["RHS_Error",TRUE];
					_r ctrlSetText "----";
				};

				rhs_laserReady=false;

				[] spawn
				{
					sleep 3.5;
					rhs_laserReady = true;
				};
			};
		};
		_v animate["lead",0];
		ppEffectDestroy _RHS_TV_ppEffect;
		uiNameSpace setVariable ["RHS_essa_com_Ctrl",displayNull];
	};
};