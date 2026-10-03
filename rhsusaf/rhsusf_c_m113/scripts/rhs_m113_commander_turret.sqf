/*
	rhs_fnc_m113_commander_turret
	turn out rotation sync for m113 gunner
*/
params ["_vehicle", "_action"];
private _player = call rhs_fnc_findPlayer;

switch _action do
{
	case "USE_WEAPON": 
	{
		_player action ['moveToTurret', _vehicle, [0]];
		[_vehicle,[0],false] call rhs_fnc_setTurretLock;
		[_vehicle,[1],true] call rhs_fnc_setTurretLock;
	};
	case "LEAVE_WEAPON": 
	{
		_player action ['moveToTurret', _vehicle, [1]];
		[_vehicle,[0],true] call rhs_fnc_setTurretLock;
		[_vehicle,[1],false] call rhs_fnc_setTurretLock;
	};
};