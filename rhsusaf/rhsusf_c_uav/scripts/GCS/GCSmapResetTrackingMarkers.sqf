/*
*********************************************************************************************************
MAP MARKER RESET  SCRIPT - THIS IS CALLED FROM THE GCS - THIS IS A WORKAROUND FOR THE PREDICTED PROBLEM OF SOME
NEW USER TAKING OVER CONTROL OF THE RAVEN AND NOT SEEING ANY OF THE MAP MARKERS BECAUSE THAT SCRIPT IS BEING
RUN ON THE ORIGINAL LAUNCHER'S COMPUTER
*********************************************************************************************************
*/
private ["_nameOfGCS"];
_nameOfGCS = _this select 0;
_nameOfGCS setVariable ["resetMarkers",1,true];

sleep 5;

null = [_nameOfGCS,_nameOfGCS] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\mavMarkerTracker.sqf";