/*
	rhs_fnc_stryker_m1134_turret
*/
params ["_vehicle", "_action"];
private _player = call rhs_fnc_findPlayer;

// Invalid turret somehow?
if(_currentTurret isEqualTo [-1])exitWith{};

switch _action do
{
	case "USE_WEAPON": 
	{
		_player action ['moveToTurret', _vehicle, [2]];
		[_vehicle,[1],true] call rhs_fnc_setTurretLock;
	};
	case "LEAVE_WEAPON": 
	{
		_player action ['moveToTurret', _vehicle, [1]];
		[_vehicle,[1],false] call rhs_fnc_setTurretLock;
	};
};