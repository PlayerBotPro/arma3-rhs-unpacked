/*
tkn4s simulation for t80u/t90 tanks

a: reyhard
*/
if(isNull (uiNamespace getVariable ["RHS_TKN4s_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_TKN4s_Ctrl",_this select 0];

	[] spawn
	{
		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "RHS_TKN4s_Ctrl";

		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);

		_currentType=-1;
		_view=true;
		rhs_laserReady=true;

		_t=0;

		//film grain effect
		_RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1400];
		_RHS_TV_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
		_RHS_TV_ppEffect ppEffectCommit 0;

		//emergency sight
		_g = _c displayCtrl 1;
		//gun ready light
		_l = _c displayCtrl 2;
		//current ammo text
		_a = (_c displayCtrl 3);
		//range finder text
		_r = (_c displayCtrl 4);
		//nvg static part
		_nv1 = (_c displayCtrl 5);
		//nvg moving part
		_nv2 = (_c displayCtrl 6);
		//current zoom
		_z = (_c displayCtrl 180);
		//range finder value
		_s = (_c displayCtrl 151);
		//curent mode
		_mode = (_c displayCtrl 154);

		_texture="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
		_nvTextures=
		[
			"rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa",
			"rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_k_static.paa",
			"rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_o_static.paa"
		];
		_sightColor=
		[
			[_g,[1,1,1,1]],
			[_l,[1,1,1,1]],
			[_a,[1,0,0,1]],
			[_r,[1,0,0,1]]
		];

		_v = vehicle (call rhs_fnc_findPlayer);
		_mag=currentMagazine _v;
		_ammo=(getText (configFile >> "CfgMagazines" >> _mag >> "ammo" ));
		switch(true) do {
			case (_ammo isKindOf "rhs_ammo_3bm_base"): {_a ctrlSetText "6";};
			case (_ammo isKindOf "rhs_ammo_3bk_base"): {_a ctrlSetText "H";};
			case (_ammo isKindOf "rhs_ammo_3of_base"): {_a ctrlSetText "0";};
			case (_ammo isKindOf "MissileCore"): {_a ctrlSetText "U";};
		};

		while{not(isNull _g)}do
		{
			sleep 0.01;

			_currentMode = ctrlText _mode;
			//view change
			//night vision mode
			if( _currentMode == "NIGHT")then{

				//hide controls
				if(_currentType!=3)then{
					{(_x select 0) ctrlSetTextColor [0,0,0,0]}foreach _sightColor;
					{_x  ctrlSetTextColor [0.5,1,1,1]}foreach [_nv1,_nv2];
					_currentType=3;
				};
				//sight adjustments
				_nvt=(ctrLPosition _nv2) select 1;
				if(inputAction rhs_key_rng_up_GLB>0 AND {_nvt<=(11.55 *   (0.025 * SafezoneH))})then{
						_nv2 ctrlSetPosition [(ctrLPosition _nv2) select 0,_nvt+0.002];
						_nv2 ctrlCommit 0.005;
						sleep 0.005;
				};
				if(inputAction rhs_key_rng_dwn_GLB>0 AND {_nvt>=(5.55 *   (0.025 * SafezoneH))})then{
						_nv2 ctrlSetPosition [(ctrLPosition _nv2) select 0,_nvt-0.002];
						_nv2 ctrlCommit 0.005;
						sleep 0.005;
				};
				//nvg recticle change
				if(inputAction "nightVision" > 0)then{
					sleep 0.1;
					if(inputAction "nightVision" == 0)then
					{
						_ctn=ctrlText _nv1;
						switch(_ctn)do
						{
							case (_nvTextures select 0) : {_nv1 ctrlSetText (_nvTextures select 1)};
							case (_nvTextures select 1) : {_nv1 ctrlSetText (_nvTextures select 2)};
							case (_nvTextures select 2) : {_nv1 ctrlSetText (_nvTextures select 0)};
							case default {};
						};
					};
				};

				//film grain handler
				if(_view AND {cameraView =="Gunner"})then{
					_RHS_TV_ppEffect ppEffectEnable true;
					_view=false;
				}else{
					if(not(_view) AND {cameraView !="Gunner"})then{_RHS_TV_ppEffect ppEffectEnable false;_view = true;};
				};
				if( (call rhs_fnc_findPlayer) != commander _v)then{_RHS_TV_ppEffect ppEffectEnable false}else{if(!_view)then{_RHS_TV_ppEffect ppEffectEnable true}};

			}else{
				//periscope mode hiding recticle
				if(_currentType!=1 AND {_currentMode  == "DAY"})then
				{
					//unhide controls
					{(_x select 0) ctrlSetTextColor (_x select 1)}foreach _sightColor;
					_g ctrlSetTextColor [0.5,1,1,0];
					{_x  ctrlSetTextColor [0.5,1,1,0]}foreach [_nv1,_nv2];
					_currentType=1;
				}else{

					if(_currentMode == "AA" and {_currentType!=0})then
					{
						{(_x select 0) ctrlSetTextColor [0,0,0,0]}foreach _sightColor;
						_currentType=0;
					};
					if(_currentMode == "DAYZOOM" and {_currentType != 2})then
					{
						{(_x select 0) ctrlSetTextColor (_x select 1)}foreach _sightColor;
						{_x  ctrlSetTextColor [0.5,1,1,0]}foreach [_nv1,_nv2];
						_RHS_TV_ppEffect ppEffectEnable false;_view = true;
						_currentType=2;
					};
				};

				//current ammo type indicator
				if(_mag != (currentMagazine _v) )then{
					_mag=currentMagazine _v;
					_ammo=(getText (configFile >> "CfgMagazines" >> _mag >> "ammo" ));
					switch(true) do {
						case (_ammo isKindOf "rhs_ammo_3bm_base"): {_a ctrlSetText "6";};
						case (_ammo isKindOf "rhs_ammo_3bk_base"): {_a ctrlSetText "H";};
						case (_ammo isKindOf "rhs_ammo_3of_base"): {_a ctrlSetText "0";};
						case (_ammo isKindOf "MissileCore"): {_a ctrlSetText "U";};
					};
				};


				//day light mode
				//ready light
				if( (_v animationPhase "reload_handler" != 0) OR (_v animationPhase "reload_handler_magazine" != 0) OR (_v doorPhase "recoil_source" !=0) AND {ctrlText _l != ""})then
				{
						_l ctrlSetText "";
						//autoloader
				}else{
					if((_v animationPhase "reload_handler" == 0) OR (_v animationPhase "reload_handler_magazine" == 0) OR (_v doorPhase "recoil_source" ==0))then{_l ctrlSetText _texture};
				};

				//lasing target
				//you cannot lase target in non auto mode. see balistic computer
				if(inputAction rhs_key_lase_tgt_GLB > 0 AND rhs_laserReady)then
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
		};
		ppEffectDestroy _RHS_TV_ppEffect;
		uiNameSpace setVariable ["RHS_tkn4s_Ctrl",displayNull];
	};
};