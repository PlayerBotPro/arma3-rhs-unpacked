/*
swap acc to properly handle ironsights in secondary mode

a: reyhard
*/

private _p = call rhs_fnc_findplayer;
private _i = (getText (configFile >> "cfgWeapons" >> currentWeapon _p >> format["rhs_%1_type",_this select 1]));
if(_i isEqualTo "")exitWith{};
if(currentWeapon _p isEqualTo primaryWeapon _p)then{
	//systemChat format["start rhs_%1_type %2",_this select 1,_i];
	if( ((primaryWeaponItems _p) select 2)  != _i)then{
		_p addPrimaryWeaponItem _i;
	};
}else{
	//systemChat format["start rhs_%1_type %2",_this select 1,_i];
	if( ((secondaryWeaponItems _p) select 2)  != _i)then{
		_p addSecondaryWeaponItem _i;
	};
};