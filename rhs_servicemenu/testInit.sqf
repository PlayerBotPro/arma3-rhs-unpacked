params ["_unit"];

if (!local _unit) exitWith {};

private ["_rockets","_rocketCount"];
_rockets = [];
_rocketCount = 0;
{
	if (_x == "rhs_mag_b8m1_single") then {
		_rockets pushBack (_forEachIndex + 1);
		_rocketCount = _rocketCount + 20;
	} else {
		if (_x find "rhs_mag_s8" != -1) then {
			_unit removeMagazine _x;
		};
	};
	
} forEach (magazines _unit);

// Set unit number of rocket pods
_unit setVariable ["RHS_Air_RocketPods", _rockets, true];

// Set ammo in relation to number of rocket pods
_unit addMagazine format["rhs_mag_s8_%1_test", _rocketCount];