/*
	BMD-1 & BMP-1 1PN22M handler
	Following script is responsible for changing optic position based on current mode

	a: reyhard
*/


//script is fired only once & is destroyed together with display

if(not( isNull (uiNameSpace getVariable ["RHS_1PN22M_Ctrl",displayNull]))) exitWith{};

uiNameSpace setVariable ["RHS_1PN22M_Ctrl",_this select 0];

// loop handling different optics mode, weapon changing & transition fade effect
["rhs_1PN22M_handler", "onEachFrame", {
	params["_v","_mode_old","_time"];

	// refresh rate 0.01s
	if(time > _time)then{
		// update time tick
		_this set [2,time+0.01];

		// get opticsDisplayName value & check for changes
		private _mode = ctrlText (uiNamespace getVariable "RHS_1PN22M_Ctrl" displayCtrl 154);
		// check if mode was changed
		if(_mode!=_mode_old)then{

			// deinitialization part
			if(  ctrlText ( (uiNamespace getVariable "RHS_1PN22M_Ctrl")  displayCtrl 1000) != "RHS_1PN22M" )exitWith{
				// remove event handlers & deinitalize variables
				["rhs_1PN22M_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
				uiNameSpace setVariable ["RHS_1PN22M_Ctrl",displayNull];

				//systemChat "removing EH";
			};

			private _v = vehicle (call rhs_fnc_findPlayer);
			_this set [0,_v];

			switch(_mode)do{
				case "PERISCOPE": {
					if(_v animationSourcePhase "changeView" != 0)then{
						_v animateSource ["changeView",0,true];
						// fade effect to simulate changing optical devices
						titleCut ["", "black in", 2];
					};
				};
				case "DAY";
				case "NIGHT" : {
					if(_v animationSourcePhase "changeView" != 1)then{
						_v animateSource ["changeView",1,true];
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
