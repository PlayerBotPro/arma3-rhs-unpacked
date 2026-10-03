/*
	rhs_fnc_zu23_pack
*/
params["_vehicle","_phase"];

if(_phase isEqualTo 1)then{
	{_x action ["Eject", _vehicle];unassignVehicle _x}foreach (crew _vehicle);
	[_vehicle,true] remoteExecCall ["lock", _vehicle];
	_vehicle animateSource ["Unfold",1];
	_vehicle animateSource ["mainTurretT_source",-(_vehicle animationPhase "mainTurret")];
	_vehicle animateSource ["mainGunT_source",-(_vehicle animationPhase "mainGun")+rad(20)];
}else{
	[_vehicle,false] remoteExecCall ["lock", _vehicle];
	_vehicle animateSource ["mainGunT_source",0];
	_vehicle animateSource ["mainTurretT_source",0];
	_vehicle animateSource ["Unfold",0];
};