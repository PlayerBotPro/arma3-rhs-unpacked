/*
****************************************************************
MINICAM OFF SCRIPT - THIS IS TURNS OFF THE GCS MINICAM DISPLAY
****************************************************************
*/

private ["_caller","_staticGCS"];
_staticGCS = _this select 0;
_caller = _this select 1;

_staticGCS say ["button_large",1];
miniCamOff = _caller call BIS_fnc_liveFeedTerminate;
monitorCamOff = _staticGCS call BIS_fnc_liveFeedTerminate;
_caller setVariable ["miniCamOn",nil,false];
_caller setVariable ["miniCamMode",nil,false];
_staticGCS say ["zoom_fail",1];