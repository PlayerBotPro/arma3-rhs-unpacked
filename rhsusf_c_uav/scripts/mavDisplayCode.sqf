/*
****************************************************************************************************
RAVEN AND GCS DISPLAY CODE SCRIPT - THIS IS CALLED WHEN THE PLAYER CLICKS ON THE RAVEN OR GCS TO DISPLAY ITS EMBEDDED CODE
****************************************************************************************************
*/

private ["_MAVorGCS","_assignedCode","_codeDisplayText"];
_MAVorGCS = _this select 0;

_MAVorGCS say ["button_large",1];

_assignedCode = _MAVorGCS getVariable "assignedCode";

_codeDisplayText = format ["ASSIGNED CODE: %1 %",_assignedCode];
2020999 cutText [_codeDisplayText,"PLAIN DOWN",0];