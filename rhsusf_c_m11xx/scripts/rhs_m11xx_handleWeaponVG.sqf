/*
	M11xx LVOSS handling
	rhs_fnc_m11xx_handleWeaponVG

	a: reyhard
*/
params["_vehicle","_phase"];

if(_phase isEqualTo 0)then{
	if(!("rhsusf_weap_M7" in (_vehicle weaponsTurret [1])))then
	{
		_vehicle addMagazine 'rhsusf_mag_L8A3_16';
		_vehicle addWeapon 'rhsusf_weap_M7';
	};
}else{
	if(!("rhsusf_weap_M7" in (_vehicle weaponsTurret [1])))then
	{
		_vehicle removeWeapon 'rhsusf_weap_M7';
		_vehicle removeMagazine 'rhsusf_mag_L8A3_16';
	};
}
