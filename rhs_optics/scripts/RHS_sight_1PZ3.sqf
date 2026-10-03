
if(not( isNull (uiNameSpace getVariable ["RHS_1PZ3_Ctrl",displayNull]))) exitWith{};

	uiNameSpace setVariable ["RHS_1PZ3_Ctrl",_this select 0];

[] spawn {
	private["_v","_t"];

	disableSerialization;

	_c = (uiNamespace getVariable "RHS_1PZ3_Ctrl" displayCtrl 1);
	_p=call rhs_fnc_findPlayer;
	_v = vehicle _p;

	rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
	rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);

	while{not(isNull _c)}do{
		waitUntil {sleep 0.01;inputAction rhs_key_rng_up_GLB>0 OR inputAction rhs_key_rng_dwn_GLB>0 OR ((call rhs_fnc_findPlayer)!=gunner _v AND (call rhs_fnc_findPlayer)!=driver _v)};
		_t=(ctrLPosition _c) select 1;
		if(inputAction rhs_key_rng_up_GLB>0 AND _t<=(3.35 *   (0.025 * SafezoneH)))then{
			_c ctrlSetPosition [(ctrLPosition _c) # 0,_t+0.002];
		};
		if(inputAction rhs_key_rng_dwn_GLB>0 AND _t>=(-2.95 *   (0.025 * SafezoneH)))then{
			_c ctrlSetPosition [(ctrLPosition _c) # 0,_t-0.002];
		};
		_c ctrlCommit 0.005;
		sleep 0.01;
	};
};


// loop handling different optics mode, weapon changing & transition fade effect
["rhs_1PZ3_handler", "onEachFrame", {
	params["_v","_mode_old","_time"];

	// refresh rate 0.01s
	if(time > _time)then{
		// update time tick
		_this set [2,time+0.01];

		// get opticsDisplayName value & check for changes
		private _mode = ctrlText (uiNamespace getVariable "RHS_1PZ3_Ctrl" displayCtrl 154);
		// check if mode was changed
		if(_mode!=_mode_old)then{

			// deinitialization part
			if(  ctrlText ( (uiNamespace getVariable "RHS_1PZ3_Ctrl")  displayCtrl 1000) != "RHS_1PZ3" )exitWith{
				// remove event handlers & deinitalize variables
				["rhs_1PZ3_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
				uiNameSpace setVariable ["RHS_1PZ3_Ctrl",displayNull];

				//systemChat "removing EH";
			};

			private _sight = (uiNamespace getVariable "RHS_1PZ3_Ctrl" displayCtrl 1);
			private _bar = (uiNamespace getVariable "RHS_1PZ3_Ctrl" displayCtrl 2);

			private _v = vehicle (call rhs_fnc_findPlayer);
			_this set [0,_v];

			switch(_mode)do{
				case "AA1": {
					{_x ctrlSetTextColor [0.7,0.074,0.02,1]; }foreach [_sight,_bar];
					if(_v animationSourcePhase "changeViewCommander" != 0)then{
						_v animateSource ["changeViewCommander",0,true];
						// fade effect to simulate changing optical devices
						titleCut ["", "black in", 2];
					};
				};
				case "AA2": {
					{_x ctrlSetTextColor [0.7,0.074,0.02,1]; }foreach [_sight,_bar];
					if(_v animationSourcePhase "changeViewCommander" != 0)then{
						_v animateSource ["changeViewCommander",0,true];
						// fade effect to simulate changing optical devices
						titleCut ["", "black in", 2];
					};
				};
				case "NIGHT";
				case "DAY" : {
					{_x ctrlSetTextColor [0.7,0.074,0.02,0]; }foreach [_sight,_bar];
					if(_v animationSourcePhase "changeViewCommander" != 1)then{
						_v animateSource ["changeViewCommander",1,true];
						// fade effect to simulate changing optical devices
						titleCut ["", "black in", 2];
					};
				};
			};
			// update mode param
			_this set [1,_mode];
		};
	};
},["","",time]] call BIS_fnc_addStackedEventHandler;