/*
**************************************************************************************************
FUNCTION - DISTANCE DISPLAY - THIS IS CALLED FROM mavCameraOn2.sqf
THIS FUNCTION MEASURES THE DISTANCE OF THE GCS AND THE RAVEN FROM THE TARGET IN IMPERIAL OR METRIC
**************************************************************************************************
*/

private ["_microAirVehicle","_caller","_mavTargetVisibleSphere","_staticGCS","_mavCallerDistance","_mavCallerDistanceUnits","_mavTargetDistanceUnits","_mavTargetDistance","_results"];
_microAirVehicle = _this select 0;
_caller = _this select 1;
_mavTargetVisibleSphere = _this select 2;
_staticGCS = _this select 3;

_mavCallerDistance = round (_microAirVehicle distance _caller);
_mavTargetDistance = round (_microAirVehicle distance _mavTargetVisibleSphere);

if (isNil{_staticGCS getVariable "GCSUnits"}) then
{
         // METRIC DISTANCE
         _mavCallerDistanceUnits = "m";
         _mavTargetDistanceUnits = "m";
         if (_mavCallerDistance >= 1000) then
         {
                  _mavCallerDistance = (round (_mavCallerDistance / 100)) / 10;
                  _mavCallerDistanceUnits = "km";
         };
} else
{
         // IMPERIAL DISTANCE
         // CONVERT METERS TO FEET
         _mavCallerDistance = round (_mavCallerDistance * 3.28084);
         _mavTargetDistance = round (_mavTargetDistance * 3.28084);
         _mavCallerDistanceUnits = "ft";
         _mavTargetDistanceUnits = "ft";
         
         if (_mavCallerDistance >= 5280) then
         {
                  _mavCallerDistance = (round (_mavCallerDistance / 528)) / 10;
                  _mavCallerDistanceUnits = "mi";
         };
         
};
_results = [_mavCallerDistance,_mavCallerDistanceUnits,_mavTargetDistance,_mavTargetDistanceUnits];
_results

