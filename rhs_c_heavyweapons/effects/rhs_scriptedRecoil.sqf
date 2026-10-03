/*
	rhs_fnc_scriptedRecoil
*/

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner","_force","_selection"];

if(!local _unit)exitWith{};
	
_unit addForce [(_unit weaponDirection _muzzle) vectorMultiply -_force,_unit selectionPosition _selection];