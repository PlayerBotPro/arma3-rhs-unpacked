/*
	rhs_fnc_firedPylon
	
	Fix for missile initial direction when pylon with guided munition is mounted on turret

	a: reyhard
*/
params ["_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

private _weaponDir = _vehicle weaponDirection _weapon;

_projectile setVelocity (_weaponDir vectorMultiply 100);
