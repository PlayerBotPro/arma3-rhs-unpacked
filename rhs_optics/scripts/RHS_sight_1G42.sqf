/*
1g42 simulation for t80b/a tanks

a: reyhard
*/

if(isNull (uiNamespace getVariable ["RHS_1g42_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_1G42_Ctrl",_this select 0];

	[] spawn
	{
		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "RHS_1G42_Ctrl";

		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);
		rhs_key_nxt_rnd_GLB=(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]);
		rhs_key_mode_chng_GLB=(profileNamespace getVariable ["rhs_key_mode_chng","SwimDown"]);

		_p=call rhs_fnc_findPlayer;
		_v = vehicle _p;

		_hide = true;
		_hideAll=true;
		_view = true;
		_k=0;
		_t=0;
		//range settings
		rhs_1v528_r100 = _v getVariable ["rhs_1v528_r100",0];
		rhs_1v528_r1000 =_v getVariable ["rhs_1v528_r1000",-1];
		//angle sensor
		rhs_1v528_dk =true;
		rhs_laserReady = true;
		//next ammo
		rhs_loadType=_v getVariable ["rhs_loadType",1];
		//auto loader mode - default sequential loading on
		_rhs_loadMode=_v getVariable ["rhs_loadMode",1];

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
		//loader switch
		_loaderSwitch = (_c displayCtrl 312);
		//loader mode switch
		_loaderModeSwitch = (_c displayCtrl 313);

		//default is 1
		if(_rhs_loadMode isEqualTo 0)then
		{
			_loaderModeSwitch ctrlSetModel "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_off.p3d";
		};
		//private _anglePool=[74,25,47,0];
		//private _anglePool=[-67,-97,-125,-155];
		_v1=[[0,1],([74,25,47,0] select rhs_loadType)] call BIS_fnc_rotateVector2D;
		_loaderSwitch ctrlSetModelDirAndUp [[0,-1,0],[_v1 select 0, 0, _v1 select 1]];

		_texture="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42_readylight_ca.paa";
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

		//fire on the move callculations
		_fireMove = _v addEventHandler ["fired",{_this call rhs_fnc_fireOnMove}];

		//blocking manual reload for player
		inGameUISetEventHandler ["Action", "(_this + ['RHS_1G42_Ctrl',1]) call rhs_fnc_autoloader_ui_eh;"];

		_mags = [_v] call rhs_fnc_ammoIndexing;

		while{not(isNull _g)}do
		{
			_p=call rhs_fnc_findPlayer;
			sleep 0.01;

			//view change
			//night vision mode
			_currentMode=ctrlText _mode;
			if(_currentMode  isEqualTo "NIGHT")then{

				//hide controls
				if(_hide)then{
					{(_x select 0) ctrlSetTextColor [0,0,0,0]}foreach _sightColor;
					{_x  ctrlSetTextColor [0.5,1,1,1]}foreach [_nv1,_nv2];
					_hide=false;
					_hideAll=true;
				};

				//film grain handler
				if(_view AND {cameraView =="Gunner"})then{
					_RHS_TV_ppEffect ppEffectEnable true;
					_view=false;
				}else{
					if(not(_view) AND {cameraView !="Gunner"})then{_RHS_TV_ppEffect ppEffectEnable false;_view = true};
				};


				//sight adjustments
				_nvt=(ctrLPosition _nv2) select 1;
				if(inputAction rhs_key_rng_up_GLB>0 AND {_nvt<=(11.55 *   (0.025 * SafezoneH))})then{
						_nv2 ctrlSetPosition [(ctrLPosition _nv2) select 0,_nvt+0.002];
						_nv2 ctrlCommit 0.005;
						sleep 0.005;
				};
				if(inputAction rhs_key_rng_dwn_GLB >0 AND {_nvt>=(5.55 *   (0.025 * SafezoneH))})then{
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

			}else{
				//periscope mode
				if(_currentMode isEqualTo "PERISCOPE")then
				{
					if(_hideAll)then
					{
						//unhide controls
						{(_x select 0) ctrlSetTextColor [0.5,1,1,0]}foreach _sightColor;
						{_x  ctrlSetTextColor [0.5,1,1,0]}foreach [_nv1,_nv2];
						_RHS_TV_ppEffect ppEffectEnable false;_view = true;
						_hideAll=false;
						_hide=true;
					};
				}else{
				//day light mode


					//lasing target
					//you cannot lase target in non auto mode. see balistic computer
					if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_1v528_r1000==-1} AND {rhs_laserReady})then
					{
						_t=parseNumber ctrlText _s;
						if(_t > 400 && _t < 4000)then
						{
							sleep 0.5;
							[_v,_t,"RHS_1G42_Ctrl"] call rhs_fnc_sight_1g42_setElev;
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

					//ammo change

					if(not(_hideAll))then
					{
						//unhide controls
						{(_x select 0) ctrlSetTextColor (_x select 1)}foreach _sightColor;
						{_x  ctrlSetTextColor [0.5,1,1,0]}foreach [_nv1,_nv2];
						_hide=true;
						_hideAll=true;
					};
				};
			};

			//ready light & autoloader
			if( ((_v animationPhase "reload_handler" != 0) OR (_v animationPhase "reload_handler_magazine" != 0) OR (_v doorPhase "recoil_source" !=0) )  AND {(currentWeapon _v) == (_mags select 0)} AND {ctrlText _l != ""})then{
				_l ctrlSetText "";
				//autoloader
				[rhs_loadType,_v,_mags,_rhs_loadMode] spawn rhs_fnc_autoloader;
			}else{
				if((_v animationPhase "reload_handler" == 0) AND (_v animationPhase "reload_handler_magazine" == 0)  AND (_v doorPhase "recoil_source" ==0) AND {(currentWeapon _v) == (_mags select 0)} )then{_l ctrlSetText _texture};
			};

			//autoloader mode switch
			_rhs_loadMode=[_loaderModeSwitch,_rhs_loadMode] call rhs_fnc_autoloaderSwitch;

			//autoloader ammo switch
			[_loaderSwitch,1] call rhs_fnc_ammoSwitch;

			//launch balistic computer
			["RHS_1G42_Ctrl",_v] call rhs_fnc_openBallisticMenu;
		};

		_v animate["lead",0];
		ppEffectDestroy _RHS_TV_ppEffect;
		uiNameSpace setVariable ["RHS_1g42_Ctrl",displayNull];
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