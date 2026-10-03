/*
handling of surefire/anpeq combo

binded to next Countermeasure key (default ctrl+c)

author: reyhard
*/

call rhs_fnc_anpeq15_rail;

//systemChat "init combo handler";
rhs_key_acc_int_glb=(profileNamespace getVariable ["rhs_key_acc_int","nextCM"]);

//exit if handler is already running
if(not( isNull (uiNameSpace getVariable ["rhs_accCombo_ctrl",displayNull]))) exitWith{};

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_handler_acc_combo",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_handler_acc_combo"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_handler_acc_combo",-1])];
};

uiNameSpace setVariable ["rhs_accCombo_ctrl",_this select 0];
//systemChat "adding combo handler";

_id = (findDisplay 46) displayAddEventHandler ["KeyDown", {

	_handled = false;
	//remove EH
	if( isNull (uiNamespace getVariable "rhs_accCombo_ctrl") )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_handler_acc_combo"];
		uiNameSpace setVariable ["rhs_handler_acc_combo",nil];
		uiNameSpace setVariable ["rhs_accCombo_ctrl",displayNull];
		//systemChat "removing EH";
	};

	private _p = call rhs_fnc_findPlayer;
	private _acc = (primaryWeaponItems _p) select 1;

	//proper key detected
	if(inputAction rhs_key_acc_int_glb > 0)then{
		if(currentWeapon _p isEqualTo primaryWeapon _p) then
		{
			_p addPrimaryWeaponItem (getText (configFile >> "cfgWeapons" >> _acc >> "rhs_acc_combo"));
			hint format["%1", (getText (configFile >> "cfgWeapons" >> _acc >> "rhs_acc_combo_text"))];
			_handled = true;
		};
	};
	_handled
}];

uiNameSpace setVariable ["rhs_handler_acc_combo",_id];