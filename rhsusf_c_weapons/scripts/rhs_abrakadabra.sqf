/*
	Switching between mods of different accesories
	a: reyhard
*/

rhs_key_opt_int_GLB=(profileNamespace getVariable ["rhs_key_opt_int","opticsMode"]);

//systemChat "init combo handler";

//exit if handler is already running
if(not( isNull (uiNameSpace getVariable ["rhs_acc_interaction_ctrl",displayNull]))) exitWith{};

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_handler_acc_interaction",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_handler_acc_interaction"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_handler_acc_interaction",-1])];
};

uiNameSpace setVariable ["rhs_acc_interaction_ctrl",_this select 0];

//systemChat "adding combo handler";

_id = (findDisplay 46) displayAddEventHandler ["KeyDown", {

	_handled = false;
	//remove EH
	if( isNull (uiNamespace getVariable "rhs_acc_interaction_ctrl") )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_handler_acc_interaction"];
		uiNameSpace setVariable ["rhs_handler_acc_interaction",nil];
		uiNameSpace setVariable ["rhs_acc_interaction_ctrl",displayNull];
		//systemChat "removing EH";
	};

	//proper key detected
	if(inputAction rhs_key_opt_int_GLB > 0)then{
		private _p = call rhs_fnc_findPlayer;
		private _acc = (primaryWeaponItems _p) select 2;
		if((currentWeapon _p isEqualTo primaryWeapon _p) && (isNull objectParent _p))then{
			_p addPrimaryWeaponItem (getText (configFile >> "cfgWeapons" >> _acc >> "rhs_accessory_next"));
			_handled = true;
			//systemChat "key detected";
		};
	};
	_handled
}];

uiNameSpace setVariable ["rhs_handler_acc_interaction",_id];
