/*
	rhs_fnc_setDamageState

	Sets turret damage state no mater if damage is disabled (via allowDamage false) or not
	a: reyhard
*/

params ["_vehicle", "_damageArray"];

private _damageState = isDamageAllowed _vehicle;
_vehicle allowDamage true;

{
	_vehicle setHitPointDamage [_x # 0, _x # 1];
}forEach _damageArray;

_vehicle allowDamage _damageState;