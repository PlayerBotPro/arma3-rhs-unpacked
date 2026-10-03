/*
**************************************************************************************************
FUNCTION - FOV LEVEL - THIS IS CALLED FROM mavCameraOn2.sqf
THIS FUNCTION CREATES THE ALTITUDE DISPLAY IN IMPERIAL OR METRIC
**************************************************************************************************
*/

private ["_results","_object","_objAltAGL","_objAltASL","_objCallerAltUnits"];
// _staticGCS = _this select 0;
_object = _this select 1;

_objAltAGL = round (visiblePosition _object select 2);
_objAltASL = round (visiblePositionASL _object select 2);
_objCallerAltUnits = "m";

/*
if !(isNil{_staticGCS getVariable "GCSUnits"}) then
{
         // CONVERT TO FEET
         _objAltAGL = round (_objAltAGL * 3.28084);
         _objAltASL = round (_objAltASL * 3.28084);
         _objCallerAltUnits = "ft";
};
*/
_results = [_objAltAGL,_objAltASL,_objCallerAltUnits];
_results


