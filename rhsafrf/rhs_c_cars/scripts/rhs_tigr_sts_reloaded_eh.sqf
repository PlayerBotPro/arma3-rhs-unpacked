/*
	removing spent magazines from interior
	a: reyhard
*/

params["_v","","","","_m"];


if((_m select 0) isEqualTo "rhs_mag_762x54mm_100")then{
	_v setMagazineTurretAmmo ["rhs_proxy_pkm_18_mag", count (magazines _v), [-1]];
}else{
	_v setMagazineTurretAmmo ["rhs_proxy_ags30_12_mag",  (_v magazineTurretAmmo ["rhs_proxy_ags30_12_mag", [-1]]) -1, [-1]];
};

