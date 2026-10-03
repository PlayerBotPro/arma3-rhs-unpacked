/*
*****************************************************************************************************************
MINICAM ON SCRIPT - THIS IS ACTIVATED FROM THE GCS AND DISPLAYS A CAMERA SIMILAR TO WHAT IS DISPLAYED ON THE FULL CAMERA
*****************************************************************************************************************
*/

private ["_staticGCS","_caller","_microAirVehicle","_mavCurrentTarget","_cameraSource","_cameraTarget","_cameraViewer","_attachedRavenFollowingSphere"];
_staticGCS = _this select 0;
_caller = _this select 1;

if !(isPipEnabled) then
{
         _staticGCS say ["button_large",1];
         sleep 0.2;
         _staticGCS say ["zoom_fail",1];

         hint parseText "<t color='#FF0000' size='1.3' shadow='0'>-MINICAM ERROR-</t><br/><t size = '0.9'>PIP DISABLED<br/>PLEASE ENABLE</t>";

} else
{

         hint "";
         // WITHOUT THIS CHECK TO PREVENT THE CAMERA FROM BEING TURNED ON MORE THAN ONCE, THE PIP CRASHES AND CAN'T BE RESTARTED
         if (isNil{_caller getVariable "miniCamOn"}) then
         {

                  _staticGCS say ["button_large",1];
                  sleep 0.2;
                  _staticGCS say ["zoom_in",1];

                  _microAirVehicle = _staticGCS getVariable "nameOfFlyingRaven";
                  _mavCurrentTarget = _staticGCS getVariable "mavCurrentTarget";

                  _attachedRavenFollowingSphere = "Sign_Sphere10cm_F" createVehicleLocal (visiblePosition _microAirVehicle);
                  hideObject _attachedRavenFollowingSphere;

                  _cameraSource = _attachedRavenFollowingSphere;
                  _cameraTarget = _mavCurrentTarget;
                  _cameraViewer = player;

                  // WAIT UNTIL THE LAST MINICAM FEED HAS FIZZLED OUT
                  waitUntil {(isNil "BIS_liveFeed")};

/*
Parameters:
      _this select 0: OBJECT or ARRAY - Live feed source
      _this select 1: OBJECT or ARRAY - Live feed target
      _this select 2: OBJECT - Player that will see the feed
      _this select 3 (Optional): NUMBER - Live feed effects (-1: reset, 0: normal (default), 1: night vision, 2: thermal imaging)
*/


                  // START THE CAMERA
                  [_cameraSource,_cameraTarget,_cameraViewer] call BIS_fnc_liveFeed;

                  // SET THE CAMERA SOURCE
                  // Wait for a live feed to exist
                  waitUntil {!(isNil "BIS_liveFeed")};
                  waitUntil {camCommitted BIS_liveFeed};

                  [[_cameraSource, [0, 0, 0]]] call BIS_fnc_liveFeedSetSource;


                  // SET THE CAMERA TARGET
                  _cameraTarget call BIS_fnc_liveFeedSetTarget;

                  BIS_liveFeed camPrepareFov (_staticGCS getVariable "cameraFOVLevel");
                  _attachedRavenFollowingSphere setPosASL [visiblePositionASL _microAirVehicle select 0, visiblePositionASL _microAirVehicle select 1, visiblePositionASL _microAirVehicle select 2];
                  _attachedRavenFollowingSphere setVelocity (velocity _microAirVehicle);
                  BIS_liveFeed camPreparePos visiblePositionASL _attachedRavenFollowingSphere;
                  BIS_liveFeed camCommitPrepared 0;
                  detach BIS_liveFeed;

/*
Parameters for BIS_fnc_PIP:
   _this select 0: STRING - render target
   _this select 1: OBJECT or ARRAY - camera or camera params in format [position,target]
   _this select 2: OBJECT - helicopter to which action is added (to memory point "action_screen1")
   _this select 3 (Optional): BOOL - true to replace existing PIP on same target (default: true)

   Returns:
   OBJECT - camera

*/
                  //null = [_cameraTargetString,_attachedRavenFollowingSphere,_staticGCS] call BIS_fnc_PIP;


                  _caller setVariable ["miniCamOn",1,false];
                  _caller setVariable ["miniCamMode",0,false];

                  for "_i" from 0 to 1 step 0 do
                  {
                           _attachedRavenFollowingSphere setPosASL [visiblePositionASL _microAirVehicle select 0, visiblePositionASL _microAirVehicle select 1, visiblePositionASL _microAirVehicle select 2];
                           _attachedRavenFollowingSphere setVelocity (velocity _microAirVehicle);

                           BIS_liveFeed camPreparePos visiblePositionASL _attachedRavenFollowingSphere;
                           BIS_liveFeed camCommitPrepared 1;

                           // if (_staticGCS distance _caller > 3) then {[_staticGCS,_caller] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\miniCam\miniCam_OFF.sqf";};


                           sleep 0.5;
                           if ((isNil{_caller getVariable "miniCamOn"}) or !(alive _caller) ) exitWith
                           {
                                    deleteVehicle _attachedRavenFollowingSphere;
                                    _caller setVariable ["miniCamOn",nil,false];
                           };

                  };

         } else
         {
                  _staticGCS say ["zoom_fail",1];
                  hint "MiniCam already On";
         };

};
