// Exit if module is disabled
if !(missionNamespace getVariable ["RHS_Retread_Enabled", true]) exitWith {};

// Input
params ["_vehicle","_selection","_damage"];

// Selection string to lower case
_selection = toLower _selection;

// Exit if wheel wasn't damaged
if (_selection find "wheel_" != 0) exitWith {};

// Exit if wheel is not ruined
if (_damage < 0.7) exitWith {};

// Exit if retreading has been disabled
if !(_vehicle getVariable ["RHS_Retread_Enabled", true]) exitWith {};

// Exit if spare has been hidden, used or destroyed
if (_vehicle animationPhase "spare_destruct" > 0.9 || _vehicle animationPhase "spare_use" > 0.9 || _vehicle animationPhase "spare_hide" > 0.9) exitWith {};

// Exit if action is already on vehicle
private _actionVariable = format["RHS_Retread_Action_%1",_selection];
if (_vehicle getVariable [_actionVariable, -1] != -1) exitWith {};

// Get action title
private _actionTitle = switch _selection do {
	case "wheel_1_1_steering" : { localize "STR_RHS_BTR70_retread_L1" };
	case "wheel_1_3_steering" : { localize "STR_RHS_BTR70_retread_L2" };
	case "wheel_1_2_steering" : { localize "STR_RHS_BTR70_retread_L4" };
	case "wheel_2_1_steering" : { localize "STR_RHS_BTR70_retread_P1" };
	case "wheel_2_3_steering" : { localize "STR_RHS_BTR70_retread_P2" };
	case "wheel_2_2_steering" : { localize "STR_RHS_BTR70_retread_P4" };
	default { "Change Wheel" };
};

// Add action
private _action = _vehicle addAction [_actionTitle, RHS_FNC_RETREAD, _selection, 1, true, true, "", "",2,false,format["%1_damper",_selection select [0,9]]];

// Add variable to vehicle
_vehicle setVariable [_actionVariable, _action];