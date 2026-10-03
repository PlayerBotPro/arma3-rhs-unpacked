/*
	rhs_fnc_t15_destroyed
*/
params["_vehicle"];

_aps_vehicles = missionNamespace getVariable ["rhs_aps_vehicles",[]];
missionNamespace setVariable ["rhs_aps_vehicles",_aps_vehicles - [_vehicle]];
systemChat "T15 Track: Destroyed";