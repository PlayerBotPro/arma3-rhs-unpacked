/*
	handling hatch animation during turnout

	a: reyhard
*/


//systemChat "init";
if(not( isNull (uiNameSpace getVariable ["rhs_hatch_handler_ctrl",displayNull]))) exitWith{};

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_hatch_handler_eh",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_hatch_handler_eh"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_hatch_handler_eh",-1])];
};

uiNameSpace setVariable ["rhs_hatch_handler_ctrl",_this select 0];

//systemChat "adding event handlers";
inGameUISetEventHandler ["Action", "_this call rhsusf_fnc_hatch_control_ui_eh;"];

_id =  (findDisplay 46) displayAddEventHandler ["KeyUp", {
	private _handled = false;
	if(inputAction "turnIn" > 0 )then{
		[0] call rhsusf_fnc_turretAction;

		//systemChat "key detected - turn in";
	};
	//proper key detected
	if(inputAction "turnOut" > 0 )then{
		[1] call rhsusf_fnc_turretAction;

		//systemChat "key detected - turn out";
	};

	//remove EH
	if( isNull ( (uiNamespace getVariable "rhs_hatch_handler_ctrl") displayCtrl 59999) )exitWith{
		private _p = call rhsusf_fnc_findPlayer;

		// ui is destroyed when player is in turned out FFV mode, so we will check, if he is still in vehicle.
		// turned out units can't switch seats yet they still may get out of vehicle
		// only flaw in current solution is swapping seats through teamswitch/zeus - EH might be not deleted
		if(!(isNull (objectParent _p)) AND (currentMuzzle _p == (weaponState _p select 1)) )exitWith{
			//systemChat "player is in FFV 2";
		};
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_hatch_handler_eh"];
		uiNameSpace setVariable ["rhs_hatch_handler_eh",nil];
		uiNameSpace setVariable ["rhs_hatch_handler_ctrl",displayNull];
		inGameUISetEventHandler ["Action", ""];
		//systemChat "removing EH";
	};

	_handled;
}];

uiNameSpace setVariable ["rhs_hatch_handler_eh",_id];
