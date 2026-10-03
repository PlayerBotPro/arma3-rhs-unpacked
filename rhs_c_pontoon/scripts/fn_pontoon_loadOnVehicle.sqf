/*
rhs_fnc_pontoon_loadOnVehicle

a: reyhard
*/

params["_pontoon"];

// Fail safe, pontoon is not folded
if(_pontoon animationSourcePhase "fold_source" isEqualTo 0)exitWith{};

private _player = call rhs_fnc_findPlayer;

// Find all nearby vehicles

private _vehiclesList = nearestObjects [position _pontoon,["LandVehicle","Air"],30];

if(_vehiclesList isEqualTo [])exitWith{hint "No vehicle detected in 30 meters radius"};

// Sort vehicles by distance
_vehiclesList = _vehiclesList apply { [_x distance _pontoon, _x]};
_vehiclesList sort true;

// Go through list of all nearby vehicles and try to load pontoon on each one. If action succeed, then break the loop
private _found = false;
{
	if((_x # 1) setVehicleCargo _pontoon)exitWith{_found = true;};
} forEach _vehiclesList;

if(!_found)then{hint "Unable to find suitable vehicle in 30 meters radius"};
