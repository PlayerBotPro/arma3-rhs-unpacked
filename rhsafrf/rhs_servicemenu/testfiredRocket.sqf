params ["_unit","_weapon","","","_ammo","_mag","_pro"];

if (_weapon != "rhs_weap_s8_test") exitWith {};

_rockets = _unit getVariable "RHS_Air_RocketPods";

_number = (_unit getVariable ["RHS_Air_RocketNumber", 0]) % (count(_rockets));
_unit setVariable ["RHS_Air_RocketNumber", _number + 1];

_pos = _unit modelToWorld (_unit selectionPosition ["rlp_" + str (_rockets select _number), "memory"]);
_pro setPos _pos;


/*
deleteVehicle _pro;

_rockets = [];
{
	if (_x == "rhs_mag_b8m1_single") then {
		_rockets pushBack (_forEachIndex + 1);
	};
} forEach (magazines _unit);

_number = (_unit getVariable ["RHS_RocketNumber", 0]) % (count(_rockets));
//systemChat str _number;
_unit setVariable ["RHS_RocketNumber", _number + 1];

_speed = getNumber(configFile >> "cfgMagazines" >> _mag >> "initSpeed");
_speed = _speed + speed _unit / 3.6;
_vec = vectorDir _unit;
_up = vectorUp _unit;
_vel = _vec vectorMultiply _speed;

_pos = _unit modelToWorld (_unit selectionPosition ["rlp_" + str (_rockets select _number), "memory"]);
_pro = createVehicle ["rhs_ammo_s8", _pos, [], 0, "CAN_COLLIDE"];
_pro setVectorDirAndUp [_vec, _up];
_pro setVelocity _vel;
*/