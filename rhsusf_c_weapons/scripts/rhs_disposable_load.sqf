/*
loading disposable launchers for players

*/

private ["_p","_t","_wn1","_wn2","_i","_t"];

_p = call rhs_fnc_findPlayer;

_m = (getArray (configFile >> "cfgWeapons" >> secondaryWeapon _p >> "magazines")) select 0;

_p removeMagazines _m;
_p addMagazine _m;
_p removeSecondaryWeaponItem _m;