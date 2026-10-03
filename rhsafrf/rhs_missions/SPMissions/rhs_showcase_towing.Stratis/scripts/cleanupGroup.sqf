params["_group"];

{
	{deleteVehicle _x}foreach (attachedObjects _x);
	{deleteVehicle _x}foreach (attachedObjects vehicle _x);
	deleteVehicle (vehicle _x);
	deleteVehicle _x;
}foreach units _group;