/*
Gripod system

a: reyhard
*/

params["_p","_gripod"];

private _t = primaryWeapon _p;
private _gt = (getText (configFile >> "cfgWeapons" >> _gripod >> "rhs_grip_type"));
private _w = (getText (configFile >> "cfgWeapons" >> _t >> _gt));

// exit if weapon is missing replacement param
if(_w isEqualTo "")exitWith{
	//systemChat "no weapon found";
};
// exit if weapon is already changed
if(_w isEqualTo _t)exitWith{
	//systemChat "no change required";
};

private _i = primaryWeaponItems _p;
private _a = _p ammo _t;
private _m = currentMagazine _p;

_p addWeapon _w;
// If there is free, comatibile magazine, game tries to automatically add it to weapon
if(! ((primaryWeaponMagazine _p) isEqualTo []))then
{
	_p addMagazine [(primaryWeaponMagazine _p) # 0,_p ammo _w];
};
_p addPrimaryWeaponItem _m;
{_p addPrimaryWeaponItem _x}foreach _i;
_p selectWeapon _w;

_p setAmmo [(primaryWeapon _p), _a];

_p setVariable ["rhs_gripod_acc",_gripod];