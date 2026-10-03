/*
*************************************************************************
RAVEN A CAMERA AND POSITION CONTROLS - THESE ARE CALLED BY mavCameraOn2.sqf
*************************************************************************
*/

private ["_id","_worldpos","_marker","_gridPos","_markertime","_markerCutText","_handled","_accessedGCS","_mavVisionMode","_cameraFOVLevel","_mavCurrentHeight","_radiusMultiplier"];

_handled = false;
_accessedGCS = player getVariable "nameOfAccessedGCS";
// _linkedRaven = _accessedGCS getVariable "nameOfFlyingRaven";

#define DIK_A               0x1E
#define DIK_B               0x30
#define DIK_C               0x2E
#define DIK_D               0x20
#define DIK_E               0x12
#define DIK_F               0x21
#define DIK_G               0x22
#define DIK_H               0x23
#define DIK_I               0x17
#define DIK_J               0x24
#define DIK_K               0x25
#define DIK_L               0x26
#define DIK_M               0x32
#define DIK_N               0x31
#define DIK_O               0x18
#define DIK_P               0x19
#define DIK_Q               0x10
#define DIK_R               0x13
#define DIK_S               0x1F
#define DIK_T               0x14
#define DIK_U               0x16
#define DIK_V               0x2F
#define DIK_W               0x11
#define DIK_X               0x2D
#define DIK_Y               0x15
#define DIK_Z               0x2C
#define DIK_NUMPAD0         0x52
#define DIK_NUMPAD1         0x4F
#define DIK_NUMPAD2         0x50
#define DIK_NUMPAD3         0x51
#define DIK_NUMPAD4         0x4B
#define DIK_NUMPAD5         0x4C
#define DIK_NUMPAD6         0x4D
#define DIK_NUMPAD7         0x47
#define DIK_NUMPAD8         0x48
#define DIK_NUMPAD9         0x49
#define DIK_SUBTRACT        0x4A    /* - on numeric keypad */
#define DIK_ADD             0x4E    /* + on numeric keypad */
#define DIK_NUMPADENTER     0x9C    /* Enter on numeric keypad */

switch (_this select 1) do
{
         // comment '--- N --- CHANGES VISION MODE';
         case DIK_N:
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
         };

         // comment '--- M --- SETS MARKER ON MAP';
         case DIK_M:
         {
                  _id = 1;
                  while {getMarkerType format ['_user_defined_rhsusf_MARKER_%1',_id] != ''} do
                  {
                           _id = _id + 1;
                  };
                  _worldpos = screentoworld [0.5,0.5];
                  _marker = createMarkerLocal [format ['_user_defined_rhsusf_MARKER_%1',_id],_worldpos];
                  _gridPos = _worldpos call BIS_fnc_PosToGrid;
                  hint format ['NEW MARKER SET AT GRID %1',_gridPos];
                  _marker setMarkerTypeLocal 'mil_destroy';
                  _marker setMarkerColorLocal 'colorred';
                  _marker setMarkerSizeLocal [0.5,0.5];
                  _markertime = [daytime] call bis_fnc_timetostring;

                  _marker setMarkerTextLocal format ['RQ-11 %1: %2',_id,_markertime];
                  _markerCutText = format ['MAP MARK CREATED AT %1',_gridPos];

                  cutText [_markerCutText,'PLAIN DOWN',0]
         };

         // comment '--- G --- TURNS OFF CAMERA';
         case DIK_G:
         {
                  _accessedGCS setVariable ["mavCameraOn",0,false];
         };


         // comment '--- NUMPAD PLUS--- ZOOM IN';
         case DIK_ADD:
         {
                  _cameraFOVLevel = _accessedGCS getVariable "cameraFOVLevel";
                  switch (_cameraFOVLevel) do
                  {
                           case 1 : {_cameraFOVLevel = 0.9;cutText ['ZOOM = 35mm','PLAIN DOWN',0]};
                           case 0.9 : {_cameraFOVLevel = 0.8;cutText ['ZOOM = 45mm','PLAIN DOWN',0]};
                           case 0.8 : {_cameraFOVLevel = 0.7;cutText ['ZOOM = 55mm','PLAIN DOWN',0]};
                           case 0.7 : {_cameraFOVLevel = 0.6;cutText ['ZOOM = 70mm','PLAIN DOWN',0]};
                           case 0.6 : {_cameraFOVLevel = 0.5;cutText ['ZOOM = 85mm','PLAIN DOWN',0]};
                           case 0.5 : {_cameraFOVLevel = 0.4;cutText ['ZOOM = 110mm','PLAIN DOWN',0]};
                           case 0.4 : {_cameraFOVLevel = 0.3;cutText ['ZOOM = 135mm','PLAIN DOWN',0]};
                           case 0.3 : {_cameraFOVLevel = 0.2;cutText ['ZOOM = 150mm','PLAIN DOWN',0]};
                           case 0.2 : {_cameraFOVLevel = 0.1;cutText ['ZOOM = 210mm','PLAIN DOWN',0]};
                           case 0.1 : {_cameraFOVLevel = 0.03;cutText ['ZOOM = 255mm','PLAIN DOWN',0]};
                           case 0.03 : {cutText ['ZOOM LIMIT = 255mm','PLAIN DOWN',0]};
                  };
                  _accessedGCS setVariable ["cameraFOVLevel",_cameraFOVLevel,false];
         };

         // comment '--- NUMPAD MINUS---- ZOOM OUT';
         case DIK_SUBTRACT:
         {
                  _cameraFOVLevel =_accessedGCS getVariable "cameraFOVLevel";
                  switch (_cameraFOVLevel) do
                  {
                           case 1 : {cutText ['ZOOM LIMIT = 24mm','PLAIN DOWN',0]};
                           case 0.9 : {_cameraFOVLevel = 1;cutText ['ZOOM = 24mm','PLAIN DOWN',0]};
                           case 0.8 : {_cameraFOVLevel = 0.9;cutText ['ZOOM = 35mm','PLAIN DOWN',0]};
                           case 0.7 : {_cameraFOVLevel = 0.8;cutText ['ZOOM = 45mm','PLAIN DOWN',0]};
                           case 0.6 : {_cameraFOVLevel = 0.7;cutText ['ZOOM = 55mm','PLAIN DOWN',0]};
                           case 0.5 : {_cameraFOVLevel = 0.6;cutText ['ZOOM = 70mm','PLAIN DOWN',0]};
                           case 0.4 : {_cameraFOVLevel = 0.5;cutText ['ZOOM = 85mm','PLAIN DOWN',0]};
                           case 0.3 : {_cameraFOVLevel = 0.4;cutText ['ZOOM = 110mm','PLAIN DOWN',0]};
                           case 0.2 : {_cameraFOVLevel = 0.3;cutText ['ZOOM = 135mm','PLAIN DOWN',0]};
                           case 0.1 : {_cameraFOVLevel = 0.2;cutText ['ZOOM = 150mm','PLAIN DOWN',0]};
                           case 0.03 : {_cameraFOVLevel = 0.1;cutText ['ZOOM = 210mm','PLAIN DOWN',0]};
                  };
                  _accessedGCS setVariable ["cameraFOVLevel",_cameraFOVLevel,false];
         };


         // comment '--- W --- RAISES ALTITUDE';
         case DIK_W:
         {
                  _mavCurrentHeight = _accessedGCS getVariable "mavCurrentHeight";
                  switch (_mavCurrentHeight) do
                  {
                           case 30 : {_mavCurrentHeight = 40;cutText ['RAISING ALTITUDE TO 40m','PLAIN DOWN',0]};
                           case 40 : {_mavCurrentHeight = 50;cutText ['RAISING ALTITUDE TO 50m','PLAIN DOWN',0]};
                           case 50 : {_mavCurrentHeight = 60;cutText ['RAISING ALTITUDE TO 60m','PLAIN DOWN',0]};
                           case 60 : {_mavCurrentHeight = 70;cutText ['RAISING ALTITUDE TO 70m','PLAIN DOWN',0]};
                           case 70 : {_mavCurrentHeight = 80;cutText ['RAISING ALTITUDE TO 80m','PLAIN DOWN',0]};
                           case 80 : {_mavCurrentHeight = 90;cutText ['RAISING ALTITUDE TO 90m','PLAIN DOWN',0]};
                           case 90 : {_mavCurrentHeight = 100;cutText ['RAISING ALTITUDE TO 100m','PLAIN DOWN',0]};
                           case 100 : {_mavCurrentHeight = 110;cutText ['RAISING ALTITUDE TO 110m','PLAIN DOWN',0]};
                           case 110 : {_mavCurrentHeight = 120;cutText ['RAISING ALTITUDE TO 120m','PLAIN DOWN',0]};
                           case 120 : {_mavCurrentHeight = 130;cutText ['RAISING ALTITUDE TO 130m','PLAIN DOWN',0]};
                           case 130 : {_mavCurrentHeight = 140;cutText ['RAISING ALTITUDE TO 140m','PLAIN DOWN',0]};
                           case 140 : {_mavCurrentHeight = 150;cutText ['RAISING ALTITUDE TO 150m','PLAIN DOWN',0]};
                           case 150 : {_mavCurrentHeight = 150;cutText ['MAX ALTITUDE IS 150m','PLAIN DOWN',0]};
                  };
                  _accessedGCS setVariable ["mavCurrentHeight",_mavCurrentHeight,false];
         };

         // comment '--- S --- LOWERS ALTITUDE';
         case DIK_S:
         {
                  _mavCurrentHeight = _accessedGCS getVariable "mavCurrentHeight";
                  switch (_mavCurrentHeight) do
                  {
                           case 30 : {_mavCurrentHeight = 30;cutText ['MINIMUM ALTITUDE IS 30m','PLAIN DOWN',0]};
                           case 40 : {_mavCurrentHeight = 30;cutText ['LOWERING ALTITUDE TO 30m','PLAIN DOWN',0]};
                           case 50 : {_mavCurrentHeight = 40;cutText ['LOWERING ALTITUDE TO 40m','PLAIN DOWN',0]};
                           case 60 : {_mavCurrentHeight = 50;cutText ['LOWERING ALTITUDE TO 50m','PLAIN DOWN',0]};
                           case 70 : {_mavCurrentHeight = 60;cutText ['LOWERING ALTITUDE TO 60m','PLAIN DOWN',0]};
                           case 80 : {_mavCurrentHeight = 70;cutText ['LOWERING ALTITUDE TO 70m','PLAIN DOWN',0]};
                           case 90 : {_mavCurrentHeight = 80;cutText ['LOWERING ALTITUDE TO 80m','PLAIN DOWN',0]};
                           case 100 : {_mavCurrentHeight = 90;cutText ['LOWERING ALTITUDE TO 90m','PLAIN DOWN',0]};
                           case 110 : {_mavCurrentHeight = 100;cutText ['LOWERING ALTITUDE TO 100m','PLAIN DOWN',0]};
                           case 120 : {_mavCurrentHeight = 110;cutText ['LOWERING ALTITUDE TO 110m','PLAIN DOWN',0]};
                           case 130 : {_mavCurrentHeight = 120;cutText ['LOWERING ALTITUDE TO 120m','PLAIN DOWN',0]};
                           case 140 : {_mavCurrentHeight = 130;cutText ['LOWERING ALTITUDE TO 130m','PLAIN DOWN',0]};
                           case 150 : {_mavCurrentHeight = 140;cutText ['LOWERING ALTITUDE TO 140m','PLAIN DOWN',0]};
                  };
                  _accessedGCS setVariable ["mavCurrentHeight",_mavCurrentHeight,false];
         };

         // comment '--- A --- DECREASES TARGET RADIUS';
         case DIK_A:
         {
                  _radiusMultiplier = _accessedGCS getVariable "radiusMultiplier";
                  switch (_radiusMultiplier) do
                  {
                           case 1.5 : {_radiusMultiplier = 1.5;cutText ['MINIMUM TARGET RADIUS IS 80m','PLAIN DOWN',0]};
                           case 2.5 : {_radiusMultiplier = 1.5;cutText ['DECREASING TARGET RADIUS TO 80m','PLAIN DOWN',0]};
                           case 3.5 : {_radiusMultiplier = 2.5;cutText ['DECREASING TARGET RADIUS TO 140m','PLAIN DOWN',0]};
                           case 4.5 : {_radiusMultiplier = 3.5;cutText ['DECREASING TARGET RADIUS TO 195m','PLAIN DOWN',0]};
                  };
                  _accessedGCS setVariable ["radiusMultiplier",_radiusMultiplier,false];
         };

         // comment '--- D --- INCREASES TARGET RADIUS';
         case DIK_D:
         {
                  _radiusMultiplier = _accessedGCS getVariable "radiusMultiplier";
                  switch (_radiusMultiplier) do
                  {
                           case 1.5 : {_radiusMultiplier = 2.5;cutText ['INCREASING TARGET RADIUS TO 140m','PLAIN DOWN',0]};
                           case 2.5 : {_radiusMultiplier = 3.5;cutText ['INCREASING TARGET RADIUS TO 195m','PLAIN DOWN',0]};
                           case 3.5 : {_radiusMultiplier = 4.5;cutText ['INCREASING TARGET RADIUS TO 250m','PLAIN DOWN',0]};
                           case 4.5 : {_radiusMultiplier = 4.5;cutText ['MAXIMUM TARGET RADIUS IS 250m','PLAIN DOWN',0]};
                  };
                  _accessedGCS setVariable ["radiusMultiplier",_radiusMultiplier,false];
         };

         // comment '--- U --- CHANGE UNITS BETWEEN METRIC AND IMPERIAL';
         case DIK_U:
         {
                  if (isNil{_accessedGCS getVariable "GCSUnits"}) then
                  {
                           // SET UNITS TO IMPERIAL
                           _accessedGCS setVariable ["GCSUnits",1,true];
                           cutText ['UNITS: IMPERIAL','PLAIN DOWN',0];
                  } else
                  {
                           // SET UNITS TO METRIC
                           _accessedGCS setVariable ["GCSUnits",nil,true];
                           cutText ['UNITS: METRIC','PLAIN DOWN',0];
                  };
         };

         // comment '-----------------------------------------------BEGIN ARROW KEYS------------------------------------------------------';


         // comment '-----------------------------------------------END ARROW KEYS--------------------------------------------------------';



};
_handled

