/*
**************************************************************************************************
FUNCTION - FOV LEVEL - THIS IS CALLED FROM mavCameraOn2.sqf
THIS FUNCTION CREATES THE FOV LEVEL DISPLAY
**************************************************************************************************
*/

private ["_cameraFOVLevel","_currentCameraFOVLevel","_staticGCS"];
_staticGCS = _this select 0;
_currentCameraFOVLevel = _staticGCS getVariable "cameraFOVLevel";
switch (_currentCameraFOVLevel) do
{      
         case 0.03:{_cameraFOVLevel = "255mm"};
         case 0.1:{_cameraFOVLevel = "210mm"};
         case 0.2:{_cameraFOVLevel = "150mm"};
         case 0.3:{_cameraFOVLevel = "135mm"};
         case 0.4:{_cameraFOVLevel = "110mm"};
         case 0.5:{_cameraFOVLevel = "85mm"};
         case 0.6:{_cameraFOVLevel = "70mm"};
         case 0.7:{_cameraFOVLevel = "55mm"};
         case 0.8:{_cameraFOVLevel = "45mm"};
         case 0.9:{_cameraFOVLevel = "35mm"};
         case 1:{_cameraFOVLevel = "24mm"};
};
_cameraFOVLevel

