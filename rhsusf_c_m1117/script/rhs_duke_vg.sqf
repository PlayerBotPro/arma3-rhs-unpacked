/*
	DUKE IED - Virtual Garage action
	rhs_fnc_duke_vg

	a: reyhard
*/
params["_vehicle","_phase",["_turret",[-1]]];

if(_phase isEqualTo 1)then{
	_vehicle removeWeaponTurret ['rhsusf_weap_duke',_turret];
}else{
	if(!("rhsusf_weap_duke" in (_vehicle weaponsTurret  _turret)))then{
		_vehicle addWeaponTurret ['rhsusf_weap_duke',_turret];
	};
};