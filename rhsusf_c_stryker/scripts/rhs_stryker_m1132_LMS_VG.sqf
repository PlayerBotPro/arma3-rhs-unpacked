/*
	rhs_fnc_stryker_m1132_LMS_VG

	a: reyhard
*/
params["_vehicle","_phase"];

if(_phase isEqualTo 1)then{
	if(!("rhsusf_weap_laneMarkerSystem" in (_vehicle weaponsTurret [-1])))then
	{
		_vehicle addWeaponTurret ['rhsusf_weap_laneMarkerSystem',[-1]];
	};
}else{
	_vehicle removeWeapon 'rhsusf_weap_laneMarkerSystem';
}
