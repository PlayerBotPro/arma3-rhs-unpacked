/*
	rhs_fnc_m1165_turret
	M1165 turret actions
*/
params ["_vehicle", "_action"];
private _player = call rhs_fnc_findPlayer;

private _currentTurret = [-1];
switch true do
{
	case (_player isEqualTo (_vehicle turretUnit [0])): {_currentTurret = [0]};
	case (_player isEqualTo (_vehicle turretUnit [2])): {_currentTurret = [1]};
};

// Invalid turret somehow?
if(_currentTurret isEqualTo [-1])exitWith{};

switch _action do
{
	case "SWITCH_WEAPON": 
	{
		2 cutText ["", "BLACK IN"];
		_player action ['moveToTurret', _vehicle, [[2,0] # (_currentTurret # 0)]];
		[_vehicle,[[2,0] # (_currentTurret # 0)],false] call rhs_fnc_setTurretLock;
		[_vehicle,[[0,2] # (_currentTurret # 0)],true] call rhs_fnc_setTurretLock;
	};
};