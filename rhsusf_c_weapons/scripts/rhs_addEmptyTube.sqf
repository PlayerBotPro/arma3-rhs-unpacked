/*
	rhs_fnc_addEmptyTube

	a: reyhard
*/

params["_unit","_weapon"];

// exit on non local units
if(!(local _unit))exitWith{};

private _replacementMagazine = [configFile >> "CfgMagazines" >> (secondaryWeaponMagazine _unit) # 0 >> "rhs_addEmptyTube" ,""] call BIS_fnc_returnConfigEntry;
if(_replacementMagazine isEqualTo "")exitWith{};

_unit addSecondaryWeaponItem _replacementMagazine;
_unit setAmmo [_weapon, 0];