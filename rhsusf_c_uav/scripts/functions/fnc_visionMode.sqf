/*
**************************************************************************************************
FUNCTION - VISION MODE - THIS IS CALLED FROM mavCameraOn2.sqf
THIS FUNCTION CREATES THE VISION MODE DISPLAY
**************************************************************************************************
*/

private ["_currentVisionMode","_mavVisionMode","_staticGCS"];
_staticGCS = _this select 0;
_mavVisionMode = _staticGCS getVariable "mavVisionMode";
switch (_mavVisionMode) do
{
         case 0:{_currentVisionMode = "DTV"};
         case 1:{_currentVisionMode = "NV"};
         case 2:{_currentVisionMode = "FLIR W"};
         case 3:{_currentVisionMode = "FLIR B"};
};
_currentVisionMode
