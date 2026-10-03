/*
	rhs_fnc_stryker_m1127_turret
	turn out rotation sync for m1127 gunner
*/
params ["_vehicle", "_action"];
private _player = call rhs_fnc_findPlayer;

private _currentTurret = [-1];
switch true do
{
	case (_player isEqualTo (_vehicle turretUnit [0])): {_currentTurret = [0]};
	case (_player isEqualTo (_vehicle turretUnit [1])): {_currentTurret = [1]};
	case (_player isEqualTo (_vehicle turretUnit [2])): {_currentTurret = [2]};
};

// Invalid turret somehow?
if(_currentTurret isEqualTo [-1])exitWith{};

switch _action do
{
	case "USE_M2": 
	{
		_player action ['moveToTurret', _vehicle, [1]];
		[_vehicle,[0],true] call rhs_fnc_setTurretLock;
	};
	case "USE_LRAS3": 
	{
		_player action ['moveToTurret', _vehicle, [2]];
		[_vehicle,[0],true] call rhs_fnc_setTurretLock;
	};
	case "SWITCH_WEAPON": 
	{
		_player action ['moveToTurret', _vehicle, [[0,2,1] # (_currentTurret # 0)]];
	};
	case "LEAVE_WEAPON": 
	{
		_player action ['moveToTurret', _vehicle, [0]];
		[_vehicle,[0],false] call rhs_fnc_setTurretLock;
	};
};