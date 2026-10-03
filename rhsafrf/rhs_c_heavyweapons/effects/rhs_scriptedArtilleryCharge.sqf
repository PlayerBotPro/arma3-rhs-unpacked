/*
	rhs_fnc_scriptedArtilleryCharge
*/

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner","_force","_selection"];

if(!local _unit)exitWith{};
	
private _cfg		= configFile >> "CfgWeapons" >> _weapon >> _mode;
private _chargeCoef	= [_cfg,"artilleryCharge",1] call BIS_fnc_returnConfigEntry;

_projectile setVelocity ((velocity _projectile) vectorMultiply _chargeCoef);