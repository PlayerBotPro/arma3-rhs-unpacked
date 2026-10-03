/*
tkn4s simulation for t80u/t90 tanks

a: reyhard
*/
if(isNull (uiNamespace getVariable ["RHS_essa_Ctrl",displayNull]))then
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

		private _p = call rhs_fnc_findPlayer;
		private _v = vehicle _p;

		private _hide = true;
		private _hideAll=true;
		private _view=true;

		private _t=0;
		//range settings
		rhs_1v528_r100 = _v getVariable ["rhs_1v528_r100",0];
		rhs_1v528_r1000 =_v getVariable ["rhs_1v528_r1000",-1];
		//angle sensor
		rhs_1v528_dk =true;
		//laser
		rhs_laserReady = true;

		//film grain effect
		_RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1405];
		_RHS_TV_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
		_RHS_TV_ppEffect ppEffectCommit 0;

		//current ammo text
		private _a = (_c displayCtrl 3);
		//range finder text
		private _r = (_c displayCtrl 4);
		//range finder value
		private _s = (_c displayCtrl 151);

		private _sightColor=
		[
			[_a,[1,0,0,1]],
			[_r,[1,0,0,1]]
		];

		//fire on the move callculations
		_fireMove = _v addEventHandler ["fired",{_this call rhs_fnc_fireOnMove}];


		while{not(isNull _a)}do
		{
			sleep 0.01;

			//view change
			//night vision mode
			//change control colour to nvg one
			//periscope mode hiding recticle
			if(_hide AND {currentVisionMode player == 1})then
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
				if(currentVisionMode player!= 1 AND {not(_hide)})then{
					//unhide controls
					{(_x select 0) ctrlSetTextColor (_x select 1)}foreach _sightColor;
					_hide=true;
					_RHS_TV_ppEffect ppEffectEnable false;_view=true;
				};
			};


			//day light mode

			//lasing target
			//you cannot lase target in non auto mode. see balistic computer
			if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_1v528_r1000==-1} AND {rhs_laserReady})then
			{
				_t=parseNumber ctrlText _s;
				if(_t > 400 && _t < 4000)then
				{
					sleep 0.5;
					[_v,_t,"RHS_essa_Ctrl"] call rhs_fnc_sight_essa_elev;
				}else{
					playSound "RHS_Error";
					_r ctrlSetText "----";
				};

				rhs_laserReady=false;

				// Call laser target function
				[_v, _t] call RHS_fnc_laserTarget;

				[] spawn
				{
					sleep 3.5;
					rhs_laserReady = true;
				};
			};

			//launch balistic computer
			["RHS_essa_Ctrl",_v] call rhs_fnc_openBallisticMenu;

		};
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