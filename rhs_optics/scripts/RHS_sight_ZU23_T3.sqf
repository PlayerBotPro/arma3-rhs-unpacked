/*
	rhs_fnc_sight_zu23_t3

	a: reyhard
*/

//systemChat "init";
uiNameSpace setVariable ["RHS_ZU23_T3_Ctrl",_this select 0];

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_zu23_t3_keyEH",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_zu23_t3_keyEH"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_9s475_keyEH",-1])];
};

disableSerialization;
private _c			= uiNamespace getVariable "RHS_ZU23_T3_Ctrl";
//angle indicator
private _opticModel	= _c displayCtrl 901;
//current zoom
private _mode		= _c displayCtrl 154;

// Sync zoom with p3d
private _phase		= (cameraOn animationSourcePhase "Elevation");
_opticModel ctrlAnimateModel ["Elevation",round _phase];

// loop handling different optics mode, weapon changing & transition fade effect
["rhs_zu23_t3_handler", "onEachFrame", {
	params["_tick","_mode","_opticModel","_previousMode"];

	//remove EH
	if( isNull ( (uiNamespace getVariable "RHS_ZU23_T3_Ctrl") displayCtrl 154) )exitWith
	{
		([] call BIS_fnc_displayMission) displayRemoveEventHandler ['KeyDown', uiNameSpace getVariable "rhs_zu23_t3_keyEH"];
		["rhs_zu23_t3_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		uiNameSpace setVariable ["RHS_ZU23_T3_Ctrl",displayNull];
		//systemChat "removing EH";
	};

	//hintSilent format["%1",ctrlText _mode];
	// Perform action only in optics mode
	if(cameraView isEqualTo "GUNNER")then
	{
		// Check if optic mode was changed
		private _currentMode = ctrlText _mode;
		if(_currentMode != _previousMode)then
		{
			switch(_currentMode)do
			{
				case "T3": 
				{	
					_opticModel ctrlShow true;
					//systemChat "mode optic";
				};
				default 
				{
					_opticModel ctrlShow false;
				};
			};
			// Update previous indicator
			_this set [3,_currentMode];
		};
	}else{
		_this set [3,""];
		_opticModel ctrlShow false;
	};
},[time,_mode,_opticModel,""]] call BIS_fnc_addStackedEventHandler;

//systemChat "adding event handler";

rhs_key_rng_up_GLB		= (profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
rhs_key_rng_dwn_GLB		= (profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);

_id = ([] call BIS_fnc_displayMission) displayAddEventHandler ["KeyDown", {

	private _handle=false;

	// Small function for handling reticle movement
	private _moveReticle = 
	{
		params["_dir"];

		private _c			= uiNamespace getVariable "RHS_ZU23_T3_Ctrl";
		private _opticModel	= _c displayCtrl 901;
		private _phase		= (cameraOn animationSourcePhase "Elevation") + _dir;
		if(_phase >= 0 && _phase <= 20)then
		{
			_opticModel ctrlAnimateModel ["Elevation",round _phase];
			cameraOn animateSource ["Elevation",round _phase];
		};
		//hintSilent format["dir %1",_phase];
	};

	// Reticle range adjustments
	switch(true) do {
		case (inputAction rhs_key_rng_up_GLB > 0): { [1] call _moveReticle;};
		case (inputAction rhs_key_rng_dwn_GLB > 0): { [-1] call _moveReticle; };
	};
	_handle;
}];

uiNameSpace setVariable ["rhs_zu23_t3_keyEH",_id];