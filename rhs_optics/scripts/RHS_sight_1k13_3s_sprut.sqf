/*
tkn4s simulation for t80u/t90 tanks

a: reyhard
*/
if(isNull (uiNamespace getVariable ["RHS_FCS_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_FCS_Ctrl",_this select 0];

	[] spawn
	{
		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "RHS_FCS_Ctrl";

		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);

		_hide = true;
		_hideAll=true;
		_view=true;

		_t=0;

		rhs_laserReady = true;

		//film grain effect
		_RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1405];
		_RHS_TV_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
		_RHS_TV_ppEffect ppEffectCommit 0;

		//current ammo text
		_a = (_c displayCtrl 3);
		//range finder text
		_r = (_c displayCtrl 4);
		//current zoom
		_z = (_c displayCtrl 180);
		//range finder value
		_s = (_c displayCtrl 151);

		_sightColor=
		[
			[_a,[1,0,0,1]],
			[_r,[1,0,0,1]]
		];

		_p=call rhs_fnc_findPlayer;
		_v = vehicle _p;

		_mag=currentMagazine _v;
		_ammo=(getText (configFile >> "CfgMagazines" >> _mag >> "ammo" ));
		switch(true) do {
			case (_ammo isKindOf "rhs_ammo_3bm_base"): {_a ctrlSetText "6";};
			case (_ammo isKindOf "rhs_ammo_3bk_base"): {_a ctrlSetText "H";};
			case (_ammo isKindOf "rhs_ammo_3of_base"): {_a ctrlSetText "0";};
			case (_ammo isKindOf "MissileCore"): {_a ctrlSetText "U";};
		};

		while{not(isNull _a)}do
		{
			sleep 0.01;
			_p=call rhs_fnc_findPlayer;

			//view change
			//night vision mode
			//change control colour to nvg one
			//periscope mode hiding recticle
			if(_hide AND {currentVisionMode _p == 1})then
			{
				//hide controls
				{(_x select 0) ctrlSetTextColor [0.32,1,0.31,1]}foreach _sightColor;
				_hide=false;

				//film grain handler
				if(_view AND {cameraView =="Gunner"})then{
					_RHS_TV_ppEffect ppEffectEnable true;
					_view=false;
				}else{
					if(not(_view) AND {cameraView !="Gunner"})then{_RHS_TV_ppEffect ppEffectEnable false;_view = true};
				};

			}else{
				if(currentVisionMode _p!= 1 AND {not(_hide)})then{
					//unhide controls
					{(_x select 0) ctrlSetTextColor (_x select 1)}foreach _sightColor;
					_hide=true;
					_RHS_TV_ppEffect ppEffectEnable false;_view=true;
				};
			};


			//current ammo type indicator
			if(_mag != (currentMagazine _v) )then
			{
				_mag=currentMagazine _v;
				_ammo=(getText (configFile >> "CfgMagazines" >> _mag >> "ammo" ));
				switch(true) do {
					case (_ammo isKindOf "rhs_ammo_3bm_base"): {_a ctrlSetText "6";};
					case (_ammo isKindOf "rhs_ammo_3bk_base"): {_a ctrlSetText "H";};
					case (_ammo isKindOf "rhs_ammo_3of_base"): {_a ctrlSetText "0";};
					case (_ammo isKindOf "MissileCore"): {_a ctrlSetText "U";};
					//case (_mag == "rhs_mag_762x54mm_250"): {_a ctrlSetText "П";};
				};
			};


			//day light mode

			//lasing target
			//you cannot lase target in non auto mode. see balistic computer
			if(inputAction rhs_key_lase_tgt_GLB > 0 && rhs_laserReady)then
			{
				_t=parseNumber ctrlText _s;
				sleep 0.5;
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
					playSound "RHS_Error";
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
		ppEffectDestroy _RHS_TV_ppEffect;
		uiNameSpace setVariable ["RHS_FCS_Ctrl",displayNull];
	};
};