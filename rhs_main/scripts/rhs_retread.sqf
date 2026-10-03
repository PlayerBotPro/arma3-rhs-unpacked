/*
	Name: 		RHS_fnc_retread
	
	Desc:		Retreading function for wheeled vehicles
	
	Param(s):	vehicle object
				user object
				action scalar
				wheel hitpoint string
	
	Returns:	nil
	
	Author:		Jiaan "Bakerman", original by Vadim Shchemelinin aka badger
	
	Example:	_this spawn RHS_fnc_retread
*/

params ["_vehicle","_user","_action","_selection"];
	
// Start
_user setVariable ["RHS_Retreading", true];
hint localize "STR_RHS_BTR70_retread_delimsa_start";

// Vars
private _fail = false;
private _userPos = getPos _user;
private _vehiclePos = getPos _vehicle;

// Play first animation
// Fail if player or vehicle moved or died
_user playMove 'rhs_snorkel_mount';
for "_i" from 0 to 16 do {
	sleep 1;
	if (_userPos distance (getPos _user) > 2 || {isNull _user} || {isNull _vehicle} || {_vehiclePos distance (getPos _vehicle) > 2}) exitWith {
		_fail = true;
	};
};
if (_fail) exitWith {
	hint "Failed";
	if (!isNull _user) then {
		_user playMove '';
		_user setVariable ["RHS_Retreading", false];
	};
};

// Play second animation
// Fail if player or vehicle moved or died
_user playMove 'AinvPknlMstpSlayWrflDnon_medic';
for "_i" from 0 to 4 do {
	sleep 1;
	if (_userPos distance (getPos _user) > 2 || {isNull _user} || {isNull _vehicle} || {_vehiclePos distance (getPos _vehicle) > 2}) exitWith {
		_fail = true;
	};
};
if (_fail) exitWith {
	hint "Failed";
	if (!isNull _user) then {
		_user playMove '';
		_user setVariable ["RHS_Retreading", false];
	};
};

// Remove action
private _actionVariable = format["RHS_Retread_Action_%1",_selection];
_vehicle removeAction (_vehicle getVariable [_actionVariable, -1]);
_vehicle setVariable [_actionVariable, -1];

// Hide spare
[_vehicle,["UseSpare", 1]] remoteExecCall ["setHitPointDamage", _vehicle];

// Fix wheel
[_vehicle,[_selection, 0]] remoteExecCall ["setHit", _vehicle];

// Finished
_user setVariable ["RHS_Retreading", false];
hint localize "STR_RHS_BTR70_retread_finish";