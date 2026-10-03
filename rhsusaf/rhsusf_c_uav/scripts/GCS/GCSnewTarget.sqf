/*
**************************************************************************************************
RAVEN NEW TARGET SCRIPT - THIS IS CALLED FROM THE GCS AND SELECTS A NEW TARGET FOR THE RAVEN TO LOOK AT
**************************************************************************************************
*/

private ["_rangeMarker","_staticGCS"];
_staticGCS = _this select 0;
player setVariable ["nameOfNewTargetGCS",_staticGCS,false];

//_mavCurrentTarget = _staticGCS getVariable "mavCurrentTarget";
//mavCurrentTarget = _mavCurrentTarget;
//_mavCurrentTargetMarker = _staticGCS getVariable "mavCurrentTargetMarker";
//mavCurrentTargetMarker = _mavCurrentTargetMarker;

_staticGCS say ["button_small",1];

if (!isNil{_staticGCS getVariable "birdRecall"}) then
{
         hint parseText "<t color='#FF0000' size='1.8' shadow='0'>-ERROR-</t><br/>RAVEN IS AUTOLANDING";
} else
{
         openMap true;
         
         if !(shownMap) then
         {
                  _staticGCS say ["zoom_fail",1];
                  sleep 1;
                  hint parseText "<t color='#FF0000' size='1.8' shadow='0'>-MAP ERROR-</t><br/>MAP NOT FOUND";
                  onMapSingleClick {};
                  true;
         } else
         {
                  _staticGCS say ["addTime",1];
                  
                  // CREATE RANGE MARKER
                  _rangeMarker = createMarkerLocal ["rangeMarker",position _staticGCS];
                  _rangeMarker setMarkerShapeLocal "ELLIPSE";
                  _rangeMarker setMarkerSizeLocal [8000,8000];
                  _rangeMarker setMarkerBrushLocal "border";
                  _rangeMarker setMarkerColorLocal "ColorBlack";
                  
                  onMapSingleClick
                  {
                           
                           if ((player distance _pos) >= 8000) then
                           {
                                    hint parseText "<t color='#FF0000' size='1.8' shadow='0'>-RANGE ERROR-</t><br/>MAX RANGE = 8km<br/>CHOOSE NEW TARGET";
                                    _staticGCS = player getVariable "nameOfNewTargetGCS";
                                    _staticGCS say ["button_large",1];
                                    _staticGCS say ["zoom_fail",1];
                           } else
                           {
                                    
                                    
                                    
                                    _staticGCS = player getVariable "nameOfNewTargetGCS";
                                    _staticGCS say ["button_large",1];
                                    _staticGCS say ["zoom_in",1];
                                    
                                    _mavCurrentTargetSphere = _staticGCS getVariable "mavCurrentTarget";
                                    _mavTargetVisibleSphere = _staticGCS getVariable "mavTargetVisibleSphere";
                                    
                                    if !(isNil{_mavTargetVisibleSphere getVariable "sphereAttached"}) then
                                    {
                                             detach _mavTargetVisibleSphere;
                                             detach _mavCurrentTargetSphere;
                                             _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];
                                             
                                    };
                                    
                                    
                                    _xSpherePos = _pos select 0;
                                    _ySpherePos = _pos select 1;
                                    
                                    if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                                    {
                                             //mavCurrentTarget setPosASL _pos;
                                             _mavTargetVisibleSphere setPosASL [_xSpherePos,_ySpherePos,0];
                                             _mavCurrentTargetSphere setPosASL [_xSpherePos,_ySpherePos,0];
                                    } else
                                    {
                                             //mavCurrentTarget setPosATL _pos;
                                             _mavTargetVisibleSphere setPosATL [_xSpherePos,_ySpherePos,0];
                                             _mavCurrentTargetSphere setPosATL [_xSpherePos,_ySpherePos,0];
                                    };
                                    
                                    
                                    hint format ["NEW RQ-11 TARGET AT GRID %1",_pos call BIS_fnc_PosToGrid];
                                    
                                    deleteMarkerLocal "rangeMarker";
                                    
                                    if !(isNil{player getVariable "miniCamOn"}) then
                                    {
                                             BIS_liveFeed camPrepareTarget _mavCurrentTargetSphere;
                                             BIS_liveFeed camCommitPrepared 1;
                                    };
                                    
                                    onMapSingleClick {};
                                    true;
                           };  
                  };
         };
};

