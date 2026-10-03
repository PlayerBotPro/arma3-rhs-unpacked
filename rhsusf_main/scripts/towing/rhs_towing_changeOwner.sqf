/*
	rhs_fnc_towing_changeOwner
*/
(_this # 0) params["_id","_time","_scale","_vehicle","_towing","_COM","_towingPoint","_active","_boostCoef"];


private _newOwner = owner _towing;
//hint format["%1 %2",_towing,_vehicle];

// Change network ownership of towed vehicle
_vehicle setOwner _newOwner;
(_vehicle getVariable ["rhs_towing_towedVehicle",objNull]) setOwner _newOwner;
_towing spawn {sleep 0.5;{[[_x,1,0.1]] remoteExec ["ropeUnwind",_this] }foreach ropes _this};

//systemChat format["changing locality %1 %2 %3 %4",_vehicle getVariable ["rhs_towing_towedVehicle",objNull], _towing,_vehicle,_newOwner];

// Add on each frame handler to new owner of the vehicle
[_id, "onEachFrame", "rhs_fnc_towing_pushHelper",_this # 0] remoteExecCall ["BIS_fnc_addStackedEventHandler",_newOwner];
