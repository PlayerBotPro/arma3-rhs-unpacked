params["_v"];

// Check speed - don't detach vehicles if speed is above 10m/s
if(speed _v > 10)exitWith{};

// Don't detach vehicle which are already transported with ViV
{
	if(not(_x isKindOf 'Man'))then{detach _x};
}foreach ((attachedObjects _v) - (getVehicleCargo _v));