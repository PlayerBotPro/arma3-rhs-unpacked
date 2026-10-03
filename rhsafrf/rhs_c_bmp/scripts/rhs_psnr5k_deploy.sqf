params["_vehicle"];

// Get data
private _animationState		= _vehicle animationSourcePhase "PSzNR_5_s";
private _animationStateBool	= _animationState isEqualTo 0;

// Animate radar
_vehicle animateSource ["PSzNR_5_s",abs(_animationState -1)];

// Enable/disable sensors
{
	_vehicle enableVehicleSensor [_x,_animationStateBool];
}foreach ["ActiveRadarSensorComponent","ManSensorComponent"];