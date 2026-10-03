/*
*********************************************************************************************************
LOCAL MARKER TRACKER  SCRIPT - THIS TRACKS THE POSITION OF THE MAV AND THE TARGET AND THE GCS LOCALLY ON THE MAP
THIS SCRIPT IS CALLED BY mavLaunch.sqf
*********************************************************************************************************
*/

private ["_markerTextString","_markerNameMAV","_microAirVehicle","_nameOfGCS","_assignedCode","_mavCurrentTarget","_markerNameMavTarget","_randomNumberMAV","_randomNumberTarget","_randomNumberGCS","_markerNameGCS"];

_nameOfGCS = _this select 0;
_microAirVehicle = _nameOfGCS getVariable "nameOfFlyingRaven";
_assignedCode = _nameOfGCS getVariable "assignedCode";

// CREATE MARKER NAME FOR MAV
_randomNumberMAV = round (random 999999);
_markerNameMAV = format ["%1_mavMarker",_randomNumberMAV];


createMarkerLocal [_markerNameMAV, position _microAirVehicle];
_markerNameMAV setMarkerTypeLocal "b_uav";
_markerNameMAV setMarkerColorLocal "ColorGreen";


// CREATE MARKER TO TRACK THE TARGET SPHERE
_randomNumberTarget = round (random 999999);
_markerNameMavTarget = format ["%1_mavMarkerTarget",_randomNumberTarget];
_nameOfGCS setVariable ["mavCurrentTargetMarker",_markerNameMavTarget,true];
_mavCurrentTarget = _nameOfGCS getVariable "mavCurrentTarget";
createMarkerLocal [_markerNameMavTarget, position _mavCurrentTarget];
_markerNameMavTarget setMarkerTypeLocal 'selector_selectable';
_markerNameMavTarget setMarkerColorLocal "ColorBlack";

// _mavCurrentTargetMarker = _nameOfGCS getVariable "mavCurrentTargetMarker";

// CREATE MARKER TO TRACK THE GCS
_randomNumberGCS = round (random 999999);
_markerNameGCS = format ["%1_mavMarkerTarget",_randomNumberGCS];
createMarkerLocal [_markerNameGCS, position _nameOfGCS];
_markerNameGCS setMarkerTypeLocal 'selector_selectable';
_markerNameGCS setMarkerColorLocal "ColorGreen";

if (typeOf _microAirVehicle == "rhsusf_RQ11RAVEN") then
{
         while {alive _microAirVehicle} do
         {

                  if (isNil{_nameOfGCS getVariable "GCSUnits"}) then
                  {
                           _markerTextString = format ["RQ-11A (%1 m) [%2]",_nameOfGCS getVariable "mavCurrentHeight", _assignedCode];
                  } else
                  {
                           _markerTextString = format ["RQ-11A (%1 ft) [%2]",round((_nameOfGCS getVariable "mavCurrentHeight") * 3.28084), _assignedCode];
                  };
                  _markerTextString = _markerTextString;
                  _markerNameMAV setMarkerTextLocal _markerTextString;
                  _markerNameMAV setMarkerDirLocal getDir _microAirVehicle;
                  _markerNameMAV setMarkerPosLocal position _microAirVehicle;
                  _markerNameMavTarget setMarkerPosLocal position _mavCurrentTarget;
                  _markerNameGCS setMarkerPosLocal position _nameOfGCS;

                  sleep 2;
                  if !(isNil{_nameOfGCS getVariable "resetMarkers"}) exitWith {};
         };
} else
{
         while {alive _microAirVehicle} do
         {

                  if (isNil{_nameOfGCS getVariable "GCSUnits"}) then
                  {
                           _markerTextString = format ["RQ-11B (%1 m) [%2]",_nameOfGCS getVariable "mavCurrentHeight", _assignedCode];
                  } else
                  {
                           _markerTextString = format ["RQ-11B (%1 ft) [%2]",round((_nameOfGCS getVariable "mavCurrentHeight") * 3.28084), _assignedCode];
                  };
                  _markerTextString = _markerTextString;
                  _markerNameMAV setMarkerTextLocal _markerTextString;
                  _markerNameMAV setMarkerDirLocal getDir _microAirVehicle;
                  _markerNameMAV setMarkerPosLocal position _microAirVehicle;
                  _markerNameMavTarget setMarkerPosLocal position _mavCurrentTarget;
                  _markerNameGCS setMarkerPosLocal position _nameOfGCS;

                  sleep 2;
                  if !(isNil{_nameOfGCS getVariable "resetMarkers"}) exitWith {};
         };
};
deleteMarkerLocal _markerNameMavTarget;
deleteMarkerLocal _markerNameMAV;
deleteMarkerLocal _markerNameGCS;
_nameOfGCS setVariable ["resetMarkers",nil,true];


