/*
	M2 Bradley TOW/Stringer selection
	rhs_fnc_m2_handleWeaponVG

	a: reyhard
*/
params["_vehicle","_phase"];

if(_phase isEqualTo 1)then{
	if(!("rhs_weap_TOW_Launcher" in (_vehicle weaponsTurret [0])))then
	{
		_vehicle addMagazine 'rhs_mag_2Rnd_TOW2A';
		_vehicle addMagazine 'rhs_mag_2Rnd_TOW2A';
		_vehicle addWeapon 'rhs_weap_TOW_Launcher';
		_vehicle removeMagazine 'Rhs_mag_4Rnd_stinger';
		_vehicle removeWeapon 'Rhs_weap_stinger_Launcher';
	};
}else{
	if(!("Rhs_weap_stinger_Launcher" in (_vehicle weaponsTurret [0])))then
	{
		_vehicle removeWeapon 'rhs_weap_TOW_Launcher';
		_vehicle removeMagazine 'rhs_mag_2Rnd_TOW2A';
		_vehicle removeMagazine 'rhs_mag_2Rnd_TOW2A';
		_vehicle addMagazine 'Rhs_mag_4Rnd_stinger';
		_vehicle addWeapon 'Rhs_weap_stinger_Launcher';
	};
}
