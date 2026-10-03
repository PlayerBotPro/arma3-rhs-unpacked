/*
************************************************************************************************
MINICAM MODE SCRIPT - THIS IS CHANGES THE MINICAM MODE FROM DTV TO NV TO FLIR WHOT AND BACK TO DTV
************************************************************************************************
*/

private ["_staticGCS","_modeNumber","_caller"];
_staticGCS = _this select 0;
_caller = _this select 1;


_modeNumber = _caller getVariable "miniCamMode";
_modeNumber = _modeNumber + 1;
if (_modeNumber == 3) then {_modeNumber = 0};
_caller setVariable ["miniCamMode",_modeNumber,false];

_staticGCS say ["button_small",1];
miniCamOn = [_modeNumber] call BIS_fnc_liveFeedEffects;
sleep 0.2;
_staticGCS say ["zoom_out",1];