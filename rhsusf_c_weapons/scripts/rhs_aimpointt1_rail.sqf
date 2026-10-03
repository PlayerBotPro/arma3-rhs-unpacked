/*
handling of Aimpoint T1 front rail offset


author: reyhard, edited by da12thmonkey
*/

private _p = call rhs_fnc_findPlayer;
private _w = primaryWeapon _p;
private _acc = (primaryWeaponItems _p) select 2;

private _i = getNumber (configFile >> "cfgWeapons" >> _w >> "rhsusf_acc_T1");
private _b = getText (configFile >> "cfgWeapons" >> _acc >> "rhs_T1_base");
//systemChat format ["%1 %2", _i,_b];
switch(_i)do{
	case 0: {
				if(_acc != _b)then{
					_p addPrimaryWeaponItem _b;
				};
			};
	case 1: {
				private _b = format["%1_ak",_b];
				//systemChat format ["new b: %1", _b];
				if(_acc != _b)then{
					_p addPrimaryWeaponItem _b;
				};
			};
};