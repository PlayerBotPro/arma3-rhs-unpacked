/*
*************************************************************************
RAVEN B CAMERA AND POSITION CONTROLS - THESE ARE CALLED BY mavCameraOn2.sqf
*************************************************************************
*/

private ["_id","_worldpos","_marker","_gridPos","_markerCutText","_handled","_accessedGCS","_mavVisionMode","_cameraFOVLevel","_mavCurrentHeight","_radiusMultiplier","_xSpherePos","_ySpherePos","_nearestObjectToSphere","_markertime","_newMarkerText","_mavTargetVisibleSphere","_mavCurrentTargetSphere","_ravenLaser","_zSpherePosS","_zSpherePosT","_microAirVehicle","_dikCode","_shift","_compassSize","_mavCurrentHeightText","_mavCurrentHeightFeet","_instructions"];

_handled = false;
_accessedGCS = player getVariable "nameOfAccessedGCS";

// KEY CODES
#include "\rhsusf\addons\rhsusf_c_uav\raven_keys.hpp"


//_ctrl = _this select 0;
_dikCode = _this select 1;
_shift = _this select 2;
//_ctrlKey = _this select 3;
//_alt = _this select 4;


// BEGIN KEY SWITCH
switch (_dikCode) do
{
// CHANGES VISION MODE - DEFAULT = DIK_N
         case VISION_MODE:
         {
                  _mavVisionMode = _accessedGCS getVariable "mavVisionMode";
                  switch (_mavVisionMode) do
                  {
                           case 0 : {camUseNVG true;_mavVisionMode = 1;cutText ['NV','PLAIN DOWN',0]};
                           case 1 : {camUseNVG false;true setCamUseTi 0;_mavVisionMode = 2;cutText ['FLIR WHOT','PLAIN DOWN',0]};
                           case 2 : {false setCamUseTi 0;true setCamUseTi 1;_mavVisionMode = 3;cutText ['FLIR BHOT','PLAIN DOWN',0]};
                           case 3 : {false setCamUseTi 1;_mavVisionMode = 0;cutText ['DTV','PLAIN DOWN',0]};
                  };
                  _accessedGCS setVariable ["mavVisionMode",_mavVisionMode,false];
                  rhsusf_Logic1 say "button_large";
         };

// SETS MARKER ON MAP - DEFAULT = DIK_M
         case MAP_MARKERADD:
         {
                  _id = 1;
                  while {getMarkerType format ['_user_defined_rhsusf_MARKER_%1',_id] != ''} do
                  {
                           _id = _id + 1;
                  };
                  _worldpos = position (_accessedGCS getVariable "mavCurrentTarget");  // screentoworld [0.5,0.5];
                  _marker = createMarkerLocal [format ['_user_defined_rhsusf_MARKER_%1',_id],_worldpos];
                  _gridPos = _worldpos call BIS_fnc_PosToGrid;
                  _newMarkerText = format['NEW MARKER SET AT GRID %1',_gridPos];
                  cutText [_newMarkerText,'PLAIN DOWN',0];
                  _marker setMarkerTypeLocal 'mil_destroy';
                  _marker setMarkerColorLocal 'colorred';
                  _marker setMarkerSizeLocal [0.5,0.5];
                  _markertime = [daytime] call bis_fnc_timetostring;

                  _marker setMarkerTextLocal format ['RQ-11 %1: %2',_id,_markertime];
                  _markerCutText = format ['MAP MARK CREATED AT %1',_gridPos];

                  cutText [_markerCutText,'PLAIN DOWN',0];
                  rhsusf_Logic1 say "button_large";
         };

// TURNS OFF CAMERA - DEFAULT = DIK_G
         case CAMERA_EXIT:
         {
                  _accessedGCS setVariable ["mavCameraOn",0,false];
                  rhsusf_Logic1 say "button_large";
         };

// comment '--- KEYPAD PLUS--- ZOOM IN - DEFAULT = DIK_ADD (NUMPAD PLUS)
         case ZOOM_ADD:
         {
                  _cameraFOVLevel = _accessedGCS getVariable "cameraFOVLevel";
                  _compassSize = _accessedGCS getVariable "compassSize";
                  switch (_cameraFOVLevel) do
                  {
                           case 1 : {_cameraFOVLevel = 0.9;_compassSize = 11;cutText ['ZOOM = 35mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.9 : {_cameraFOVLevel = 0.8;_compassSize = 10;cutText ['ZOOM = 45mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.8 : {_cameraFOVLevel = 0.7;_compassSize = 8;cutText ['ZOOM = 55mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.7 : {_cameraFOVLevel = 0.6;_compassSize = 7;cutText ['ZOOM = 70mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.6 : {_cameraFOVLevel = 0.5;_compassSize = 6;cutText ['ZOOM = 85mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.5 : {_cameraFOVLevel = 0.4;_compassSize = 5;cutText ['ZOOM = 110mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.4 : {_cameraFOVLevel = 0.3;_compassSize = 4;cutText ['ZOOM = 135mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.3 : {_cameraFOVLevel = 0.2;_compassSize = 3;cutText ['ZOOM = 150mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.2 : {_cameraFOVLevel = 0.1;_compassSize = 2;cutText ['ZOOM = 210mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.1 : {_cameraFOVLevel = 0.03;_compassSize = 1;cutText ['ZOOM = 255mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_in"};
                           case 0.03 : {cutText ['ZOOM LIMIT = 255mm','PLAIN DOWN',0]};
                  };
                  _accessedGCS setVariable ["cameraFOVLevel",_cameraFOVLevel,false];
                  _accessedGCS setVariable ["compassSize",_compassSize,false];

         };

// ZOOM OUT - DEFAULT = DIK_SUBTRACT (NUMPAD MINUS)
         case ZOOM_SUBTRACT:
         {
                  _cameraFOVLevel =_accessedGCS getVariable "cameraFOVLevel";
                  _compassSize = _accessedGCS getVariable "compassSize";
                  switch (_cameraFOVLevel) do
                  {
                           case 1 : {cutText ['ZOOM LIMIT = 24mm','PLAIN DOWN',0]};
                           case 0.9 : {_cameraFOVLevel = 1;_compassSize = 12;cutText ['ZOOM = 24mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                           case 0.8 : {_cameraFOVLevel = 0.9;_compassSize = 11;cutText ['ZOOM = 35mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                           case 0.7 : {_cameraFOVLevel = 0.8;_compassSize = 10;cutText ['ZOOM = 45mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                           case 0.6 : {_cameraFOVLevel = 0.7;_compassSize = 8;cutText ['ZOOM = 55mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                           case 0.5 : {_cameraFOVLevel = 0.6;_compassSize = 7;cutText ['ZOOM = 70mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                           case 0.4 : {_cameraFOVLevel = 0.5;_compassSize = 6;cutText ['ZOOM = 85mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                           case 0.3 : {_cameraFOVLevel = 0.4;_compassSize = 5;cutText ['ZOOM = 110mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                           case 0.2 : {_cameraFOVLevel = 0.3;_compassSize = 4;cutText ['ZOOM = 135mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                           case 0.1 : {_cameraFOVLevel = 0.2;_compassSize = 3;cutText ['ZOOM = 150mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                           case 0.03 : {_cameraFOVLevel = 0.1;_compassSize = 2;cutText ['ZOOM = 210mm','PLAIN DOWN',0];rhsusf_Logic1 say "zoom_out"};
                  };
                  _accessedGCS setVariable ["cameraFOVLevel",_cameraFOVLevel,false];
                  _accessedGCS setVariable ["compassSize",_compassSize,false];

         };

// RAISES ALTITUDE - DEFAULT = DIK_W
         case ALTITUDE_RAISE:
         {
                  _mavCurrentHeight = _accessedGCS getVariable "mavCurrentHeight";

                  if (isNil{_accessedGCS getVariable "GCSUnits"}) then
                  {
                           // METRIC DISPLAY
                           if (_mavCurrentHeight < 300) then
                           {
                              _mavCurrentHeight = _mavCurrentHeight + 10;
                              _mavCurrentHeightText = format ["RAISING ALTITUDE TO %1m",_mavCurrentHeight];
                              cutText [_mavCurrentHeightText,'PLAIN DOWN',0];
                              rhsusf_Logic1 say "button_small";
                           } else
                           {
                              cutText ['MAX ALTITUDE IS 300m','PLAIN DOWN',0];
                           };

                  } else
                  {

                           // IMPERIAL DISPLAY
                           if (_mavCurrentHeight < 300) then
                           {
                              _mavCurrentHeight = _mavCurrentHeight + 10;
                              _mavCurrentHeightFeet = round (_mavCurrentHeight * 3.2808);
                              _mavCurrentHeightText = format ["RAISING ALTITUDE TO %1ft",_mavCurrentHeightFeet];
                              cutText [_mavCurrentHeightText,'PLAIN DOWN',0];
                              rhsusf_Logic1 say "button_small";
                           } else
                           {
                              cutText ['MAX ALTITUDE IS 985ft','PLAIN DOWN',0];
                           };

                  };
                  _accessedGCS setVariable ["mavCurrentHeight",_mavCurrentHeight,false];
         };

// LOWERS ALTITUDE - DEFAULT = DIK_S
         case ALTITUDE_LOWER:
         {
                  _mavCurrentHeight = _accessedGCS getVariable "mavCurrentHeight";

                  if (isNil{_accessedGCS getVariable "GCSUnits"}) then
                  {
                           // METRIC DISPLAY
                           if (_mavCurrentHeight > 30) then
                           {
                              _mavCurrentHeight = _mavCurrentHeight - 10;
                              _mavCurrentHeightText = format ["LOWERING ALTITUDE TO %1m",_mavCurrentHeight];
                              cutText [_mavCurrentHeightText,'PLAIN DOWN',0];
                              rhsusf_Logic1 say "button_small";
                           } else
                           {
                              cutText ['MINIMUM ALTITUDE IS 30m','PLAIN DOWN',0];
                           };

                  } else
                  {

                           // IMPERIAL DISPLAY
                           if (_mavCurrentHeight > 30) then
                           {
                              _mavCurrentHeight = _mavCurrentHeight - 10;
                              _mavCurrentHeightFeet = round (_mavCurrentHeight * 3.2808);
                              _mavCurrentHeightText = format ["LOWERING ALTITUDE TO %1ft",_mavCurrentHeightFeet];
                              cutText [_mavCurrentHeightText,'PLAIN DOWN',0];
                              rhsusf_Logic1 say "button_small";
                           } else
                           {
                              cutText ['MAX ALTITUDE IS 98ft','PLAIN DOWN',0];
                           };

                  };
                  _accessedGCS setVariable ["mavCurrentHeight",_mavCurrentHeight,false];
         };

// DECREASE RADIUS - DEFAULT = DIK_A
         case RADIUS_DECREASE:
         {
                  _radiusMultiplier = _accessedGCS getVariable "radiusMultiplier";

                  if (isNil{_accessedGCS getVariable "GCSUnits"}) then
                  {
                           // METRIC DISPLAY
                           switch (_radiusMultiplier) do
                           {
                                    case 1.5 : {_radiusMultiplier = 1.5;cutText ['MINIMUM TARGET RADIUS IS 80m','PLAIN DOWN',0]};
                                    case 2.5 : {_radiusMultiplier = 1.5;cutText ['DECREASING TARGET RADIUS TO 80m','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 3.5 : {_radiusMultiplier = 2.5;cutText ['DECREASING TARGET RADIUS TO 140m','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 4.5 : {_radiusMultiplier = 3.5;cutText ['DECREASING TARGET RADIUS TO 195m','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                           };
                  } else
                  {
                           // IMPERIAL DISPLAY
                           switch (_radiusMultiplier) do
                           {
                                    case 1.5 : {_radiusMultiplier = 1.5;cutText ['MINIMUM TARGET RADIUS IS 262ft','PLAIN DOWN',0]};
                                    case 2.5 : {_radiusMultiplier = 1.5;cutText ['DECREASING TARGET RADIUS TO 262ft','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 3.5 : {_radiusMultiplier = 2.5;cutText ['DECREASING TARGET RADIUS TO 460ft','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 4.5 : {_radiusMultiplier = 3.5;cutText ['DECREASING TARGET RADIUS TO 640ft','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                           };

                  };
                  _accessedGCS setVariable ["radiusMultiplier",_radiusMultiplier,false];
         };

// INCREASES TARGET RADIUS
         case RADIUS_INCREASE:
         {
                  _radiusMultiplier = _accessedGCS getVariable "radiusMultiplier";

                  if (isNil{_accessedGCS getVariable "GCSUnits"}) then
                  {
                           // METRIC DISPLAY
                           switch (_radiusMultiplier) do
                           {
                                    case 1.5 : {_radiusMultiplier = 2.5;cutText ['INCREASING TARGET RADIUS TO 140m','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 2.5 : {_radiusMultiplier = 3.5;cutText ['INCREASING TARGET RADIUS TO 195m','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 3.5 : {_radiusMultiplier = 4.5;cutText ['INCREASING TARGET RADIUS TO 250m','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 4.5 : {_radiusMultiplier = 4.5;cutText ['MAXIMUM TARGET RADIUS IS 250m','PLAIN DOWN',0]};
                           };
                  } else
                  {
                           // IMPERIAL DISPLAY
                           switch (_radiusMultiplier) do
                           {
                                    case 1.5 : {_radiusMultiplier = 2.5;cutText ['INCREASING TARGET RADIUS TO 460ft','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 2.5 : {_radiusMultiplier = 3.5;cutText ['INCREASING TARGET RADIUS TO 640ft','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 3.5 : {_radiusMultiplier = 4.5;cutText ['INCREASING TARGET RADIUS TO 820ft','PLAIN DOWN',0];rhsusf_Logic1 say "button_small"};
                                    case 4.5 : {_radiusMultiplier = 4.5;cutText ['MAXIMUM TARGET RADIUS IS 820ft','PLAIN DOWN',0]};
                           };

                  };
                  _accessedGCS setVariable ["radiusMultiplier",_radiusMultiplier,false];
         };

// LOCK OR UNLOCK ONTO NEAREST OBJECT - DIK_NUMPAD0
         case TARGET_LOCK:
         {

                  // GET NEAREST OBJECT
                  _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                  _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";
                  _nearestObjectToSphere = nearestObject[_mavTargetVisibleSphere,"AllVehicles"];
                  // _nearestObjectType = typeOf _nearestObjectToSphere;
                  // _nameOfThingToLockOnto = (getText (configFile >> "cfgVehicles" >> (_nearestObjectType) >> "displayname"));
                  rhsusf_Logic1 say "button_large";

                  if (isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
                  {
                           // LOCK ON
                           if ((_mavTargetVisibleSphere distance _nearestObjectToSphere) <=8) then
                           {
                                    // _maxPoints = boundingBoxReal _nearestObjectToSphere select 1;
                                    // _maxZ = _maxPoints select 1;
                                    _mavTargetVisibleSphere attachTo [_nearestObjectToSphere,[0,0,0]];
                                    _mavCurrentTargetSphere attachTo [_nearestObjectToSphere,[0,0,0]];
                                    _mavTargetVisibleSphere setVariable ["sphereAttached",1,false];
                                    // _lockedString = format ["TARGET LOCKED: %1",_nameOfThingToLockOnto];
                                    // cutText [_lockedString, 'PLAIN DOWN',0];
                                    cutText ["TARGET LOCKED", 'PLAIN DOWN',0];
                                    rhsusf_Logic1 say "target_locked";

                                    if (isNil{_mavCurrentTargetSphere getVariable "lockTrackerRunning"}) then
                                    {
                                             [_mavTargetVisibleSphere,_mavCurrentTargetSphere,_accessedGCS] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\lockedUnitTracker.sqf";
                                    };

                                    // IF TRACKED THING IS A UNIT AND THAT UNIT IS DISMOUNTED THEN TRACK THAT UNIT TO SEE IF THEY GET INTO A VEHICLE
                                    if ((vehicle _nearestObjectToSphere == _nearestObjectToSphere)  and (_nearestObjectToSphere isKindOf "man") and (isNil{_mavCurrentTargetSphere getVariable "vehicleTrackerRunning"})) then
                                    {
                                             [_nearestObjectToSphere,_mavTargetVisibleSphere,_mavCurrentTargetSphere] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\lockedUnitVehicleTracker.sqf";
                                    };
                           };
                  } else
                  {
                           // UNLOCK
                           detach _mavTargetVisibleSphere;
                           detach _mavCurrentTargetSphere;
                           _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];
                           cutText ["TARGET UNLOCKED", 'PLAIN DOWN',0];
                           rhsusf_Logic1 say "target_unlocked";
                  };
         };


// TURN INSTRUCTIONS ON AND OFF
         case INSTRUCTIONS:
         {

         rhsusf_Logic1 say "button_large";
         if (isNil{_accessedGCS getVariable "instructionsOn"}) then
            {
                  _accessedGCS setVariable ["instructionsOn",1,false];

                  _instructions =
                  "<br />"+
                  "[<t underline='true'>RQ-11 B CONTROLS</t>]"
                  +"<br />"
                  +"<br />"+ "KEYBOARD"
                  +"<br />"+ "· [A][D] · RADIUS"
                  +"<br />"+ "· [W][S] · ALTITUDE"
                  +"<br />"+ "· [M] · MARKER"
                  +"<br />"+ "· [N] · VISION"
                  +"<br />"+ "· [G] · EXIT"
                  +"<br />"
                  +"<br />"+ "NUMPAD"
                  +"<br />"+ "· [+][-] · ZOOM"
                  +"<br />"+ "· [8,2,4,6] · TARGET POSITION"
                  +"<br />"+ "· [7,1] · TARGET HEIGHT"
                  +"<br />"+ "· [5] · TARGET RESET"
                  +"<br />"+ "· [SHIFT 5] · HOME"
                  +"<br />"+ "· [0] · TARGET LOCK"
                  +"<br />"+ "· [.] · TACTICAL LASER"
                  +"<br />"+ "· [ENTER] · LASER DESG"
                  ;

                  ((uiNamespace getVariable "d_rhsusf_RQ11_display") displayCtrl 2020667) ctrlSetStructuredText parseText _instructions;
                  // ((uiNamespace getVariable "d_rhsusf_RQ11_display") displayCtrl 2020667) ctrlSetBackgroundColor [0,0,0,0.632];
            } else
            {
                  _accessedGCS setVariable ["instructionsOn",nil,false];
                  _instructions = "";
                  ((uiNamespace getVariable "d_rhsusf_RQ11_display") displayCtrl 2020667) ctrlSetStructuredText parseText _instructions;
                  // ((uiNamespace getVariable "d_rhsusf_RQ11_display") displayCtrl 2020667) ctrlSetBackgroundColor [0,0,0,0];
            };
         };

// TACTICAL LASER ON AND OFF - DEFAULT = DIK_DECIMAL
         case TACTICAL_LASER:
         {
                  rhsusf_Logic1 say "button_large";
                  _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                  _microAirVehicle = _accessedGCS getVariable "nameOfFlyingRaven";
                  _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";
                  if (isNil{_accessedGCS getVariable "TacticalLaserVisible"}) then
                  {

                           if (surfaceIsWater visiblePositionASL _mavCurrentTargetSphere) then
                           {
                                    if ((visiblePositionASL _mavCurrentTargetSphere select 2 <=1) or !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"})) then
                                    {
                                             // TURN ON LASER
                                             _accessedGCS setVariable ["TacticalLaserVisible",1,false];
                                             [_accessedGCS,_microAirVehicle] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\laserPointer.sqf";
                                             cutText ['TACTICAL LASER ON','PLAIN DOWN',0];
                                             rhsusf_Logic1 say "tacticalLaser_on";
                                    } else
                                    {
                                             cutText ["RESET HEIGHT","PLAIN DOWN",0];
                                    } ;
                           } else
                           {

                                    if ((visiblePosition _mavCurrentTargetSphere select 2 <=1) or !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"})) then
                                    {
                                             // TURN ON LASER
                                             _accessedGCS setVariable ["TacticalLaserVisible",1,false];
                                             [_accessedGCS,_microAirVehicle] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\laserPointer.sqf";
                                             cutText ['TACTICAL LASER ON','PLAIN DOWN',0];
                                             rhsusf_Logic1 say "tacticalLaser_on";
                                    } else
                                    {
                                             cutText ["RESET HEIGHT","PLAIN DOWN",0];
                                    };

                           };

                  } else
                  {
                           // TURN OFF LASER
                           _accessedGCS setVariable ["TacticalLaserVisible",nil,false];
                           [_accessedGCS,_microAirVehicle] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\laserPointer.sqf";
                           cutText ['TACTICAL LASER OFF','PLAIN DOWN',0];
                           rhsusf_Logic1 say "laser_off";

                  };
         };

// LASER DESIGNATOR ON AND OFF - DEFAULT = DIK_NUMPADENTER
         case LASER_DESIGNATOR:
         {
                  rhsusf_Logic1 say "button_large";
                  _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                  _microAirVehicle = _accessedGCS getVariable "nameOfFlyingRaven";
                  _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";
                  if (isNil{_accessedGCS getVariable "LaserDesignatorName"}) then
                  {

                           if (surfaceIsWater visiblePositionASL _mavCurrentTargetSphere) then
                           {
                                    if ((visiblePositionASL _mavCurrentTargetSphere select 2 <=1) or !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"})) then
                                    {
                                             // TURN ON LASER
                                             _ravenLaser = createVehicle ["LaserTargetW",visiblePositionASL _mavCurrentTargetSphere,[], 0, "NONE"];
                                             _ravenLaser attachTo [_mavCurrentTargetSphere,[0,0,0]];
                                             _accessedGCS setVariable ["LaserDesignatorName",_ravenLaser,false];
                                             cutText ['LASER DESIGNATOR ON','PLAIN DOWN',0];
                                             rhsusf_Logic1 say "laser_on";
                                    } else
                                    {
                                             cutText ["RESET HEIGHT","PLAIN DOWN",0];
                                    } ;
                           } else
                           {

                                    if ((visiblePosition _mavCurrentTargetSphere select 2 <=1) or !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"})) then
                                    {
                                             // TURN ON LASER
                                             _ravenLaser = createVehicle ["LaserTargetW",visiblePositionASL _mavCurrentTargetSphere,[], 0, "NONE"];
                                             _ravenLaser attachTo [_mavCurrentTargetSphere,[0,0,0]];
                                             _accessedGCS setVariable ["LaserDesignatorName",_ravenLaser,false];
                                             cutText ['LASER DESIGNATOR ON','PLAIN DOWN',0];
                                             rhsusf_Logic1 say "laser_on";
                                    } else
                                    {
                                             cutText ["RESET HEIGHT","PLAIN DOWN",0];
                                    };

                           };

                  } else
                  {
                           // TURN OFF LASER
                           _ravenLaser = _accessedGCS getVariable "LaserDesignatorName";
                           deleteVehicle _ravenLaser;
                           _accessedGCS setVariable ["LaserDesignatorName",nil,false];
                           cutText ['LASER DESIGNATOR OFF','PLAIN DOWN',0];
                           rhsusf_Logic1 say "laser_off";

                  };
         };

// -----------------------------------------------BEGIN ARROW KEYS------------------------------------------------------

// MOVE TARGET NORTH - DEFAULT = DIK_NUMPAD8
         case TARGET_NORTH:
         {
                  _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                  _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";

                  if !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
                  {
                           detach _mavTargetVisibleSphere;
                           detach _mavCurrentTargetSphere;
                           _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];
                  };

                  _cameraFOVLevel = _accessedGCS getVariable "cameraFOVLevel";
                  _xSpherePos = visiblePositionASL _mavTargetVisibleSphere select 0;
                  _ySpherePos = visiblePositionASL _mavTargetVisibleSphere select 1;
                  _ySpherePos = _ySpherePos + _cameraFOVLevel;  // USED TO BE PLUS 1
                  _zSpherePosS = visiblePositionASL _mavTargetVisibleSphere select 2;
                  _zSpherePosT = visiblePosition _mavTargetVisibleSphere select 2;

                  if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                  {
                           _mavTargetVisibleSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                           _mavCurrentTargetSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                  } else
                  {
                           _mavTargetVisibleSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                           _mavCurrentTargetSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                  };

                  // cutText ['SLEWING NORTH', 'PLAIN DOWN',0];

         };

// MOVE TARGET SOUTH - DEFAULT = DIK_NUMPAD2
         case TARGET_SOUTH:
         {
                  _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                  _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";

                  if !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
                  {
                           detach _mavTargetVisibleSphere;
                           detach _mavCurrentTargetSphere;
                           _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];
                  };

                  _cameraFOVLevel = _accessedGCS getVariable "cameraFOVLevel";
                  _xSpherePos = visiblePositionASL _mavTargetVisibleSphere select 0;
                  _ySpherePos = visiblePositionASL _mavTargetVisibleSphere select 1;
                  _ySpherePos = _ySpherePos - _cameraFOVLevel; // USED TO BE MINUS 1
                  _zSpherePosS = visiblePositionASL _mavTargetVisibleSphere select 2;
                  _zSpherePosT = visiblePosition _mavTargetVisibleSphere select 2;

                  if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                  {
                           _mavTargetVisibleSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                           _mavCurrentTargetSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                  } else
                  {
                           _mavTargetVisibleSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                           _mavCurrentTargetSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                  };

                  // cutText ['SLEWING SOUTH', 'PLAIN DOWN',0];

         };

// MOVE TARGET WEST - DEFAULT = DIK_NUMPAD4
         case TARGET_WEST:
         {
                  _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                  _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";

                  if !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
                  {
                           detach _mavTargetVisibleSphere;
                           detach _mavCurrentTargetSphere;
                           _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];
                  };

                  _cameraFOVLevel = _accessedGCS getVariable "cameraFOVLevel";
                  _xSpherePos = visiblePositionASL _mavTargetVisibleSphere select 0;
                  _ySpherePos = visiblePositionASL _mavTargetVisibleSphere select 1;
                  _xSpherePos = _xSpherePos - _cameraFOVLevel; // USED TO BE MINUS 1
                  _zSpherePosS = visiblePositionASL _mavTargetVisibleSphere select 2;
                  _zSpherePosT = visiblePosition _mavTargetVisibleSphere select 2;

                  if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                  {
                           _mavTargetVisibleSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                           _mavCurrentTargetSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                  } else
                  {
                           _mavTargetVisibleSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                           _mavCurrentTargetSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                  };

                  // cutText ['SLEWING WEST', 'PLAIN DOWN',0];
         };

// MOVE TARGET EAST - DEFAULT = DIK_NUMPAD6
         case TARGET_EAST:
         {
                  _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                  _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";

                  if !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
                  {
                           detach _mavTargetVisibleSphere;
                           detach _mavCurrentTargetSphere;
                           _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];
                  };

                  _cameraFOVLevel = _accessedGCS getVariable "cameraFOVLevel";
                  _xSpherePos = visiblePositionASL _mavTargetVisibleSphere select 0;
                  _ySpherePos = visiblePositionASL _mavTargetVisibleSphere select 1;
                  _xSpherePos = _xSpherePos + _cameraFOVLevel; // USED TO BE PLUS 1
                  _zSpherePosS = visiblePositionASL _mavTargetVisibleSphere select 2;
                  _zSpherePosT = visiblePosition _mavTargetVisibleSphere select 2;

                  if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                  {
                           _mavTargetVisibleSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                           _mavCurrentTargetSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                  } else
                  {
                           _mavTargetVisibleSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                           _mavCurrentTargetSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                  };

                  // cutText ['SLEWING EAST', 'PLAIN DOWN',0];
         };

// comment '-----------------------------------------------END ARROW KEYS--------------------------------------------------------';

// BEGIN ELEVATION KEYS---------------------------------------------------------------------------------------------------------->

// MOVE TARGET UP - DEFAULT = DIK_NUMPAD7
         case TARGET_RAISE:
         {

                  if (!(isNil{_accessedGCS getVariable "LaserDesignatorName"}) or !(isNil{_accessedGCS getVariable "TacticalLaserVisible"})) then
                  {
                           cutText ["DEACTIVATE LASER","PLAIN DOWN",0];
                  } else
                  {

                           _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                           _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";

                           if !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
                           {
                                    detach _mavTargetVisibleSphere;
                                    detach _mavCurrentTargetSphere;
                                    _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];

                           };

                           _cameraFOVLevel = _accessedGCS getVariable "cameraFOVLevel";
                           _xSpherePos = visiblePositionASL _mavTargetVisibleSphere select 0;
                           _ySpherePos = visiblePositionASL _mavTargetVisibleSphere select 1;
                           _zSpherePosS = visiblePositionASL _mavTargetVisibleSphere select 2;
                           _zSpherePosT = visiblePosition _mavTargetVisibleSphere select 2;
                           _zSpherePosS = _zSpherePosS + _cameraFOVLevel; // USED TO BE PLUS 1
                           _zSpherePosT = _zSpherePosT + _cameraFOVLevel; // USED TO BE PLUS 1

                           if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                           {
                                    _mavTargetVisibleSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                                    _mavCurrentTargetSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                           } else
                           {
                                    _mavTargetVisibleSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                                    _mavCurrentTargetSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                           };

                           cutText ['RAISING TARGET HEIGHT', 'PLAIN DOWN',0];
                  };

         };

// MOVE TARGET DOWN - DEFAULT = DIK_NUMPAD1
         case TARGET_LOWER:
         {

                  if (!(isNil{_accessedGCS getVariable "LaserDesignatorName"}) or !(isNil{_accessedGCS getVariable "TacticalLaserVisible"})) then
                  {
                           cutText ["DEACTIVATE LASER","PLAIN DOWN",0];
                  } else
                  {

                           _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                           _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";

                           if !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
                           {
                                    detach _mavTargetVisibleSphere;
                                    detach _mavCurrentTargetSphere;
                                    _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];

                           };

                           _cameraFOVLevel = _accessedGCS getVariable "cameraFOVLevel";
                           _xSpherePos = visiblePositionASL _mavTargetVisibleSphere select 0;
                           _ySpherePos = visiblePositionASL _mavTargetVisibleSphere select 1;
                           _zSpherePosS = visiblePositionASL _mavTargetVisibleSphere select 2;
                           _zSpherePosT = visiblePosition _mavTargetVisibleSphere select 2;
                           _zSpherePosS = _zSpherePosS - _cameraFOVLevel; // USED TO BE MINUS 1
                           _zSpherePosT = _zSpherePosT - _cameraFOVLevel; // USED TO BE MINUS 1

                           if ((visiblePositionASL _mavTargetVisibleSphere select 2) <= 0) then {_zSpherePosS = 0};
                           if ((visiblePosition _mavTargetVisibleSphere select 2) <= 0) then {_zSpherePosT = 0};

                           if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                           {
                                    _mavTargetVisibleSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                                    _mavCurrentTargetSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                           } else
                           {
                                    _mavTargetVisibleSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                                    _mavCurrentTargetSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                           };

                           cutText ['LOWERING TARGET HEIGHT', 'PLAIN DOWN',0];
                  };

         };

// RESET TARGET HEIGHT - SHIFT CLICKING THIS WILL RETURN TARGET TO GCS - DEFAULT = DIK_NUMPAD5
         case TARGET_RESET:
         {

                 rhsusf_Logic1 say "button_large";


                  _mavCurrentTargetSphere = _accessedGCS getVariable "mavCurrentTarget";
                  _mavTargetVisibleSphere = _accessedGCS getVariable "mavTargetVisibleSphere";

                  if !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
                  {
                           detach _mavTargetVisibleSphere;
                           detach _mavCurrentTargetSphere;
                           _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];

                  };

                  if (_shift) then
                  {

                        // MOVE TARGET SPHERE TO RIGHT NEXT TO GCS
                           _xSpherePos = visiblePositionASL _accessedGCS select 0;
                           _ySpherePos = visiblePositionASL _accessedGCS select 1;
                           _ySpherePos = _ySpherePos - 1;

                           if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                           {
                                    _mavTargetVisibleSphere setPosASL [_xSpherePos,_ySpherePos,0];
                                    _mavCurrentTargetSphere setPosASL [_xSpherePos,_ySpherePos,0];
                           } else
                           {
                                    _mavTargetVisibleSphere setPosATL [_xSpherePos,_ySpherePos,0];
                                    _mavCurrentTargetSphere setPosATL [_xSpherePos,_ySpherePos,0];
                           };

                           cutText ['TARGET RESET TO GCS', 'PLAIN DOWN',0];

                  } else
                  {

                        _xSpherePos = visiblePositionASL _mavTargetVisibleSphere select 0;
                        _ySpherePos = visiblePositionASL _mavTargetVisibleSphere select 1;
                        _zSpherePosS = visiblePositionASL _mavTargetVisibleSphere select 2;
                        _zSpherePosT = visiblePosition _mavTargetVisibleSphere select 2;
                        _zSpherePosS = 0;
                        _zSpherePosT = 0;

                        if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                        {
                                 _mavTargetVisibleSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                                 _mavCurrentTargetSphere setPosASL [_xSpherePos,_ySpherePos,_zSpherePosS];
                        } else
                        {
                                 _mavTargetVisibleSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                                 _mavCurrentTargetSphere setPosATL [_xSpherePos,_ySpherePos,_zSpherePosT];
                        };

                        cutText ['TARGET HEIGHT RESET', 'PLAIN DOWN',0];
               };

         };

// END UP AND DOWN KEYS------------------------------------------------------------------------------------------------------------<





};
_handled

