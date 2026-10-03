// Input
params ["_v"];

// Exit if vehicle is not local
if (!local _v) exitWith {};

// Disable sensors
{
	_v enableVehicleSensor [_x,false];
}foreach ["ActiveRadarSensorComponent","ManSensorComponent"];