/*
loading disposable launchers for players

*/

params[["_unit",call rhs_fnc_findPlayer]];

if(!(_unit isEqualType objNull))then{_unit = call rhs_fnc_findPlayer};

private _magazine = (getArray (configFile >> "cfgWeapons" >> secondaryWeapon _unit >> "magazines")) # 0;
_unit removeMagazines _m;

if(secondaryWeaponMagazine _unit isNotEqualTo [])exitWith{};

_unit addSecondaryWeaponItem _magazine;