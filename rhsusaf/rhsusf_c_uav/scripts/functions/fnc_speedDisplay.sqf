/*
**************************************************************************************************
FUNCTION - SPEED DISPLAY - THIS IS CALLED FROM mavCameraOn2.sqf
THIS FUNCTION MEASURES THE SPEED OF AN OBJECT IN IMPERIAL OR METRIC
**************************************************************************************************
*/

private ["_mavCallerSpeedUnits","_mavCallerSpeed","_staticGCS","_object","_speedResults"];
_staticGCS = _this select 0;
_object = _this select 1;

_mavCallerSpeed = round speed _object;
_mavCallerSpeedUnits = "kph";

/*
if (isNil{_staticGCS getVariable "GCSUnits"}) then
{
         //METRIC SPEED IN KPH
         _mavCallerSpeedUnits = "kph";
} else
{
         // IMPERIAL SPEED IN MPH
         _mavCallerSpeed = round (_mavCallerSpeed * 0.621371);
         _mavCallerSpeedUnits = "mph";
};
*/

_speedResults = [_mavCallerSpeed,_mavCallerSpeedUnits];
_speedResults


