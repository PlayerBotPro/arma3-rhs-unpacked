/*
****************************************************************
RAVEN LAUNCH SCRIPT -
-THIS ADDS A FUNCTIONS MODULE
-THIS DETACHES THE STATIC RAVEN, DELETES IT AND REPLACES IT WITH THE FLYING RAVEN ATTACHED TO YOUR HAND
-THIS THROWS THE RAVEN FORWARD AND DETACHES IT FROM YOUR HAND
-THIS ADDS ACTIONS TO THE GCS TO USE THE CAMERA AND AUTOLAND AND SELECT A NEW TARGET AND RUN THE MINICAM
-THIS STARTS THE MARKER TRACKER SCRIPT
-THIS STARTS THE BATTERY RUNDOWN SCRIPT
-THIS TURNS ON THE RAVEN ENGINE SOUND SCRIPT
-THIS GETS THE RAVEN FLYING IN A CIRCLE THAT CAN BE MODIFIED BY THE KEYS
-THIS WAITS FOR THE AUTOLANDING VARIABLE TO BE ACTIVATED
-AFTER AUTOLANDING IS ACTIVATED, THIS LANDS THE FLYING RAVEN AND REPLACES IT WITH THE STATIC RAVEN
-THIS DEACTIVATES THE LASER AND THE MINICAM
-THIS TURNS OFF THE RAVEN SOUND SCRIPT
-THIS ACTIVATES THE STROBE SCRIPT
-THIS REMOVES THE ACTIONS FROM THE GCS

****************************************************************
*/
private ["_caller","_microAirVehicle","_dir","_vel","_speed","_mavCurrentHeight","_microAirVehicleStatic","_staticRaven","_ravenBatteryLevel","_staticRavenBatteryLevel","_nameOfGCS","_groupLogic","_radiusMultiplier","_mavTargetSphere","_EHkilledIdx","_vecdx","_vecdy","_vecdz","_vecux","_vecuy","_vecuz","_mavTargetVisibleSphere","_xSpherePos","_ySpherePos","_assignedCode","_actionCameraFeedCode","_actionNewTargetCode","_ravenLaser"];
_caller = _this select 1;
// _groupCaller = (group _caller);
_staticRaven = _caller getVariable "nameOfAttachedStaticRaven";
_nameOfGCS = _staticRaven getVariable "nameOfGCS";


if (isNil{_staticRaven getVariable "nameOfGCS"}) then
{
         hint parseText "<t color='#FF0000' size='1.8' shadow='0' shadowColor='#ff0000'>-SYNC ERROR-</t><br/>GCS NOT FOUND";
} else
{
         // REMOVE KILLED EVENT HANDLER IF YOU LAUNCH THE MAV
         _EHkilledIdx = _staticRaven getVariable "dropMAVWhenKilledEventHandlerID";
         _caller removeEventHandler ["killed",_EHkilledIdx];


         //========================INITIALIZE GLOBAL VARIABLES=====================

         // INITIALIZES NVG GLOBAL VARIABLE TO FALSE
         // mavVisionMode = 0;
         _nameOfGCS setVariable ["mavVisionMode",0,true];

         // INITIALIZES THE MAV CAMERA STATE TO OFF
         // mavCameraOn = 0;
         _nameOfGCS setVariable ["mavCameraOn",0,true];

         // INITIALIZES CAMERA FOV -- The default zoom level is 0.7, 0.01 is the nearest and 2 the furthest zoom value
         // cameraFOVLevel = 1;
         _nameOfGCS setVariable ["cameraFOVLevel",1,true];

         // INITIALIZES THE CURRENT TARGET AS NOTHING
         // mavCurrentTarget = 0;
         _nameOfGCS setVariable ["mavCurrentTarget",0,true];

         // INITIALIZES STARTING HEIGHT AS 30
         // mavCurrentHeight = 30;
         _nameOfGCS setVariable ["mavCurrentHeight",30,true];

         // INITIALIZES STARTING RADIUS MULTIPLIER AT 1.5
         // radiusMultiplier = 1.5;
         _nameOfGCS setVariable ["radiusMultiplier",1.5,true];

         // INITIALIZES ENGINE SOUND FOR MAV
         // mavSoundOn = 0;
         _nameOfGCS setVariable ["mavSoundOn",0,true];

         // INITIALIZES THE SCANNER AS OFF - THIS CREATES MAP ICONS
         // mavScannerOn = 0;
         _nameOfGCS setVariable ["mavScannerOn",0,true];

         // SET STARTING COMPASS SIZE
         _nameOfGCS setVariable ["compassSize",4,true];



         if (isNil{_staticRaven getVariable "ravenBatteryLevel"}) then {_staticRaven setVariable ["ravenBatteryLevel",100,true]};
         _staticRavenBatteryLevel = _staticRaven getVariable "ravenBatteryLevel";
         _nameOfGCS setVariable ["ravenBatteryLevel",_staticRavenBatteryLevel,true];
         // _groupCaller setVariable ["ravenBatteryLevel",_staticRavenBatteryLevel,true];

         if ((_staticRaven getVariable "ravenBatteryLevel") <= 0) then
         {
                  hint parseText "<t color='#FF0000' size='1.8' shadow='0' shadowColor='#ff0000'>-BATTERY ERROR-</t><br/>BATTERY LEVEL TOO LOW<br/>PLEASE RECHARGE";
         }
         else
         {
                  if (!isNil{_staticRaven getVariable 'batteryChargerIsRunning'}) then
                  {
                           hint parseText "<t color='#FF0000' size='1.8' shadow='0' shadowColor='#ff0000'>-BATTERY ERROR-</t><br/>RAVEN CHARGING<br/>PLEASE WAIT...";
                  }
                  else
                  {

                           // DELETE LAUNCH OR DROP ADDACTIONS FROM PLAYER
                           _caller removeAction mavBaseStationActionName_00;
                           _caller removeAction mavBaseStationActionName_001;

                           // ADD ADDACTIONS TO GCS
                           _nameOfGCS setVariable ["miniCamMode",-1,true];
                           _assignedCode = _nameOfGCS getVariable "assignedCode";
                           _actionCameraFeedCode = format ["   CAMERA FEED (%1)",_assignedCode];
                           _actionNewTargetCode = format ["   NEW TARGET (%1)",_assignedCode];

                           mavBaseStationActionName_01 = _nameOfGCS addAction ["[RQ-11 MENU]", "", [], 0, false, false, "", "_this == player"];
                           mavBaseStationActionName_02 = _nameOfGCS addAction [_actionCameraFeedCode, "\rhsusf\addons\rhsusf_c_uav\scripts\GCS\GCScameraOn2.sqf", (1), 0, false, true, "", "_this == player"];
                           mavBaseStationActionName_03 = _nameOfGCS addAction [_actionNewTargetCode, "\rhsusf\addons\rhsusf_c_uav\scripts\GCS\GCSnewTarget.sqf", [], 0, false, true, "", "_this == player"];
                           mavBaseStationActionName_04 = _nameOfGCS addAction ["   RESET MARKERS", "\rhsusf\addons\rhsusf_c_uav\scripts\GCS\GCSmapResetTrackingMarkers.sqf", [], 0, false, true, "", "_this == player"];
                           mavBaseStationActionName_05 = _nameOfGCS addAction ["   AUTOLAND", "\rhsusf\addons\rhsusf_c_uav\scripts\GCS\GCSmavRecall.sqf", [], 0, false, true, "", "_this == player"];

                           mavBaseStationActionName_06 = _nameOfGCS addAction ["[RQ-11 MINICAM MENU]", "", [], 0, false, false, "", "_this == player"];
                           mavBaseStationActionName_07 = _nameOfGCS addAction ["   MINICAM: ON", "\rhsusf\addons\rhsusf_c_uav\scripts\miniCam\miniCam_ON.sqf", [], 0, false, true, "", "(isNil{_this getVariable ""miniCamOn""}) and (_this == player)"];
                           mavBaseStationActionName_08 = _nameOfGCS addAction ["   MINICAM: MODE", "\rhsusf\addons\rhsusf_c_uav\scripts\miniCam\miniCam_MODE.sqf", [], 0, false, true, "", "(!(isNil{_this getVariable ""miniCamOn""})) and (_this == player)"];
                           mavBaseStationActionName_09 = _nameOfGCS addAction ["   MINICAM: OFF", "\rhsusf\addons\rhsusf_c_uav\scripts\miniCam\miniCam_OFF.sqf", [], 0, false, true, "", "(!(isNil{_this getVariable ""miniCamOn""})) and (_this == player)"];





                           /*
                           mavBaseStationActionName_01 = _nameOfGCS addAction [("<t color=""#9998CB"">" + ("[RQ-11 MENU]") + "</t>"), "", [], 0, false, false, "", "(!isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];
                           mavBaseStationActionName_02 = _nameOfGCS addAction [("<t color=""#9998CB"">" + ("  GCS - Side Camera") + "</t>"), "\rhsusf\addons\rhsusf_c_uav\scripts\mavCameraOn2.sqf", (1), 0, false, true, "", "(!isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];
                           mavBaseStationActionName_03 = _nameOfGCS addAction [("<t color=""#9998CB"">" + ("  GCS - New Target") + "</t>"), "\rhsusf\addons\rhsusf_c_uav\scripts\mavNewTarget.sqf", [], 0, false, true, "", "(!isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];
                           mavBaseStationActionName_04 = _nameOfGCS addAction [("<t color=""#9998CB"">" + ("  AutoLand RQ-11") + "</t>"), "\rhsusf\addons\rhsusf_c_uav\scripts\mavRecall.sqf", [], 0, false, true, "", "(!isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];
                           */

                           // CREATE MAV
                           if (typeOf _staticRaven == "rhsusf_RQ11RAVEN_STATIC") then
                           {
                                    _microAirVehicle = createVehicle ["rhsusf_RQ11RAVEN",(position _caller),[],0,"NONE"];
                           } else
                           {
                                    _microAirVehicle = createVehicle ["rhsusf_RQ11_B_RAVEN",(position _caller),[],0,"NONE"];
                           };

                           // THIS LINE IS SO THAT YOU CAN NOT PICK UP AND LAUNCH ANOTHER MAV WHILE ONE IS IN THE AIR
                           _caller setVariable ["nameOfMAV",_microAirVehicle,false];

                           // DELETE STATIC RAVEN
                           deleteVehicle _staticRaven;

                           // ATTACH FLYING RAVEN TO BACK WHILE WAITING FOR THROWING ANIMATION TO START
                           _microAirVehicle attachTo [_caller, [0.05,-0.35,-0.5],"head_axis"];

                           _vecdx = 0.40821789367673483758718001833829;
                           _vecdy = 0.10938165494661501208217518701705;
                           _vecdz = 0.90630778703664996324255265675432;

                           _vecux = 0.05469082747330750604108759350853;
                           _vecuy = 0.20410894683836741879359000916915;
                           _vecuz = 0.36599815077066680806321205753969;

                           _microAirVehicle setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ];

                           // ADD NAME OF FLYING RAVEN TO GCS
                           _nameOfGCS setVariable ["nameOfFlyingRaven", _microAirVehicle, true];

                           _caller setVariable ["staticRavenAttached",nil,false];
                           _caller setVariable ["nameOfAttachedStaticRaven",nil,false];


                           // CREATE TARGET FOR MAV TO TRACK
                           _mavTargetSphere = "Sign_Sphere25cm_F" createVehicle (visiblePosition _nameOfGCS);
                           [_mavTargetSphere] remoteExecCall ["hideObject",0];
                           _nameOfGCS setVariable ["mavCurrentTarget",_mavTargetSphere,true];

                           // CREATE TARGET FOR MAV CAMERA TO TRACK WHEN IN CAMERA VIEW
                           _mavTargetVisibleSphere = "Sign_Sphere25cm_F" createVehicleLocal (visiblePosition _nameOfGCS);
                           hideObject _mavTargetVisibleSphere;
                           _nameOfGCS setVariable ["mavTargetVisibleSphere",_mavTargetVisibleSphere,true];


                           // SET INITIAL TARGET FOR MAV CAMERA TO LOOK AT
                           _microAirVehicle camSetTarget _mavTargetSphere;
                           _microAirVehicle camCommand "airborne";


                           // START TO THROW THE RAVEN BY PLAYING A THROW MOVE
                           _caller playmove "AwopPercMstpSgthWnonDnon_throw";

                           // WAIT FOR THE THROWING ANIMATION TO START (THE PLAYER HAS TO SLING WEAPONS AND STAND UP AND STUFF)
                           waitUntil {animationState _caller == "AwopPercMstpSgthWnonDnon_start"};

                           // ATTACH MAV TO RIGHT HAND
                           _microAirVehicle attachTo [_caller, [0,0,0.01],"RightHand"];

                           // THIS WILL LEVEL OUT THE PITCH AND BANK AND SET IT TO FACING THE SAME DIRECTION AS THE OBJECT IT IS ATTACHED TO
                           _microAirVehicle setDir 0;

                           // PLAY PROP START UP SOUND
                           _microAirVehicle say ["button_large",1];
                           [[_microAirVehicle, "prop_startup02"],"rhs_fnc_sayGlobal"] call BIS_fnc_MP;

                           // WAIT FOR THROW ANIMATION TO START TO END
                           waitUntil {animationState _caller == "AwopPercMstpSgthWnonDnon_end"};

                           // RELEASE THE RAVEN AFTER THROWING ANIMATION IS COMPLETE
                           detach _microAirVehicle;


                           // START TRACKING ON THE MAP LOCALLY
                           null = [_nameOfGCS,_nameOfGCS] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\mavMarkerTracker.sqf";

                           // TURNS ON ENGINE SOUND
                           _nameOfGCS setVariable ["mavSoundOn",1,true];
                           null = [_nameOfGCS,_microAirVehicle] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\mavSoundOn.sqf";

                           // START-CONTINUE BURNING UP THE BATTERY LEVEL
                           null = [_microAirVehicle,_nameOfGCS] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\mavBatteryCounter.sqf";

                           // THROW THE RAVEN IN THE DIRECTION OF THE THROWING ANIMATION (FORWARD FROM PLAYER'S ARM)
                           _dir = getDir _caller;
                           _microAirVehicle setDir _dir;

                           _speed = 18;

                           _vel = velocity _microAirVehicle;

                           _microAirVehicle setVelocity
                           [
                                    (_vel select 0)+((sin _dir)*_speed),
                                    (_vel select 1)+((cos _dir)*_speed),
                                    2
                           ];


                           // SET INITIAL HEIGHT FOR RAVEN
                           _nameOfGCS setVariable ["mavCurrentHeight",30,true];

                           // START SETTING POSITIONS FOR THE RAVEN TO FLY TO
                           for "_i" from 0 to 1 step 0 do
                           {

                                    // NW
                                    _mavCurrentHeight = _nameOfGCS getVariable "mavCurrentHeight";
                                    _radiusMultiplier = _nameOfGCS getVariable "radiusMultiplier";
                                    _microAirVehicle camSetTarget (_nameOfGCS getVariable "mavCurrentTarget");
                                    _microAirVehicle camSetRelPos [(39 * _radiusMultiplier), (39 * _radiusMultiplier), _mavCurrentHeight];
                                    if ((!isNil{_nameOfGCS getVariable "birdRecall"}) or (!alive _caller) or (_nameOfGCS getVariable "ravenBatteryLevel" <=0)) exitWith {};
                                    sleep (3 * _radiusMultiplier);

                                    // NORTH
                                    _mavCurrentHeight = _nameOfGCS getVariable "mavCurrentHeight";
                                    _radiusMultiplier = _nameOfGCS getVariable "radiusMultiplier";
                                    _microAirVehicle camSetTarget (_nameOfGCS getVariable "mavCurrentTarget");
                                    _microAirVehicle camSetRelPos [0, (55 * _radiusMultiplier), _mavCurrentHeight];
                                    if ((!isNil{_nameOfGCS getVariable "birdRecall"}) or (!alive _caller) or (_nameOfGCS getVariable "ravenBatteryLevel" <=0)) exitWith {};
                                    sleep (3 * _radiusMultiplier);

                                    // SW
                                    _mavCurrentHeight = _nameOfGCS getVariable "mavCurrentHeight";
                                    _radiusMultiplier = _nameOfGCS getVariable "radiusMultiplier";
                                    _microAirVehicle camSetTarget (_nameOfGCS getVariable "mavCurrentTarget");
                                    _microAirVehicle camSetRelPos [(-39 * _radiusMultiplier), (39 * _radiusMultiplier), _mavCurrentHeight];
                                    if ((!isNil{_nameOfGCS getVariable "birdRecall"}) or (!alive _caller) or (_nameOfGCS getVariable "ravenBatteryLevel" <=0)) exitWith {};
                                    sleep (3 * _radiusMultiplier);

                                    // SOUTH
                                    _mavCurrentHeight = _nameOfGCS getVariable "mavCurrentHeight";
                                    _radiusMultiplier = _nameOfGCS getVariable "radiusMultiplier";
                                    _microAirVehicle camSetTarget (_nameOfGCS getVariable "mavCurrentTarget");
                                    _microAirVehicle camSetRelPos [(-55 * _radiusMultiplier), 0, _mavCurrentHeight];
                                    if ((!isNil{_nameOfGCS getVariable "birdRecall"}) or (!alive _caller) or (_nameOfGCS getVariable "ravenBatteryLevel" <=0)) exitWith {};
                                    sleep (3 * _radiusMultiplier);

                                    // SE
                                    _mavCurrentHeight = _nameOfGCS getVariable "mavCurrentHeight";
                                    _radiusMultiplier = _nameOfGCS getVariable "radiusMultiplier";
                                    _microAirVehicle camSetTarget (_nameOfGCS getVariable "mavCurrentTarget");
                                    _microAirVehicle camSetRelPos [(-39 * _radiusMultiplier), (-39 * _radiusMultiplier), _mavCurrentHeight];
                                    if ((!isNil{_nameOfGCS getVariable "birdRecall"}) or (!alive _caller) or (_nameOfGCS getVariable "ravenBatteryLevel" <=0)) exitWith {};
                                    sleep (3 * _radiusMultiplier);

                                    // EAST
                                    _mavCurrentHeight = _nameOfGCS getVariable "mavCurrentHeight";
                                    _radiusMultiplier = _nameOfGCS getVariable "radiusMultiplier";
                                    _microAirVehicle camSetTarget (_nameOfGCS getVariable "mavCurrentTarget");
                                    _microAirVehicle camSetRelPos [0, (-55 * _radiusMultiplier), _mavCurrentHeight];
                                    if ((!isNil{_nameOfGCS getVariable "birdRecall"}) or (!alive _caller) or (_nameOfGCS getVariable "ravenBatteryLevel" <=0)) exitWith {};
                                    sleep (3 * _radiusMultiplier);

                                    // NE
                                    _mavCurrentHeight = _nameOfGCS getVariable "mavCurrentHeight";
                                    _radiusMultiplier = _nameOfGCS getVariable "radiusMultiplier";
                                    _microAirVehicle camSetTarget (_nameOfGCS getVariable "mavCurrentTarget");
                                    _microAirVehicle camSetRelPos [(39 * _radiusMultiplier), (-39 * _radiusMultiplier), _mavCurrentHeight];
                                    if ((!isNil{_nameOfGCS getVariable "birdRecall"}) or (!alive _caller) or (_nameOfGCS getVariable "ravenBatteryLevel" <=0)) exitWith {};
                                    sleep (3 * _radiusMultiplier);

                                    // NORTH
                                    _mavCurrentHeight = _nameOfGCS getVariable "mavCurrentHeight";
                                    _radiusMultiplier = _nameOfGCS getVariable "radiusMultiplier";
                                    _microAirVehicle camSetTarget (_nameOfGCS getVariable "mavCurrentTarget");
                                    _microAirVehicle camSetRelPos [(55 * _radiusMultiplier), 0, _mavCurrentHeight];
                                    if ((!isNil{_nameOfGCS getVariable "birdRecall"}) or (!alive _caller) or (_nameOfGCS getVariable "ravenBatteryLevel" <=0)) exitWith {};
                                    sleep (3 * _radiusMultiplier);


                           };


                           //**************PUT TARGET SPHERE NEXT TO GCS******

                           // IF LOCKED THEN UNLOCK
                           if !(isNil{_mavTargetSphere getVariable "sphereAttached"}) then
                           {
                                    detach _mavTargetSphere;
                                    _mavTargetSphere setVariable ["sphereAttached",nil,false];
                           };

                           // MOVE TARGET SPHERE TO RIGHT NEXT TO GCS
                           _xSpherePos = visiblePositionASL _nameOfGCS select 0;
                           _ySpherePos = visiblePositionASL _nameOfGCS select 1;
                           _ySpherePos = _ySpherePos - 1;

                           if (surfaceIsWater [_xSpherePos,_ySpherePos]) then
                           {
                                    _mavTargetSphere setPosASL [_xSpherePos,_ySpherePos,0];
                           } else
                           {
                                    _mavTargetSphere setPosATL [_xSpherePos,_ySpherePos,0];
                           };


                           // IF MINICAM IS ON THEN CHANGE ITS TARGET
                           if !(isNil{player getVariable "miniCamOn"}) then
                           {
                                    BIS_liveFeed camPrepareTarget _mavTargetSphere;
                                    BIS_liveFeed camCommitPrepared 1;
                           };

                           // SET CAMERA TARGET TO TARGET SPHERE'S NEW POSITION
                           _microAirVehicle camSetTarget _nameOfGCS;
                           _microAirVehicle camSetRelPos [0, 5,5]; // [0, 3,3];

                           // WAIT UNTIL RAVEN IS CLOSE TO GCS BEFORE LANDING
                           waituntil
                           {
                                 sleep 0.1;
                                 // hintSilent format ["MAV POSITION ATL: %1 SPEED: %2",_microAirVehicle distance _nameOfGCS, speed _microAirVehicle];
                                 (_microAirVehicle distance _nameOfGCS) < 14;
                           };

                           // TURN OFF ENGINE SOUND
                           _nameOfGCS setVariable ["mavSoundOn",0,true];


                           /*
                           // FOR TESTING PURPOSES ONLY TO TRACK DISTANCE  OF RAVEN FROM GCS
                           waitUntil
                           {
                                    sleep 0.1;
                                    _mavGetPosATL = getPosATL _microAirVehicle select 2;
                                    // hintSilent format ["MAV POSITION ATL: %1",_mavGetPosATL];
                                    (_mavGetPosATL) <= 0.1;
                           };
                           */

                           // CREATE THE STATIC RAVEN AND SET ITS POSITION
                           if (typeOf _microAirVehicle == "rhsusf_RQ11RAVEN") then
                           {
                                    _microAirVehicleStatic = createVehicle ["rhsusf_RQ11RAVEN_STATIC",position _microAirVehicle,[],0,"NONE"];
                           } else
                           {
                                    _microAirVehicleStatic = createVehicle ["rhsusf_RQ11RAVEN_B_STATIC",position _microAirVehicle,[],0,"NONE"];
                           };
                           _microAirVehicleStatic setPosASL [visiblePositionASL _microAirVehicle select 0, visiblePositionASL _microAirVehicle select 1, visiblePositionASL _microAirVehicle select 2];
                           _microAirVehicleStatic setDir getDir _microAirVehicle;
                           _microAirVehicleStatic setVelocity (velocity _microAirVehicle);

                           // TURN OFF MINICAM
                           [_nameOfGCS,_caller] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\miniCam\miniCam_OFF.sqf";

                           // DEACTIVATE LASER DESIGNATOR IF ACTIVATED
                           if (!isNil{_nameOfGCS getVariable "LaserDesignatorName"}) then
                              {
                                 _ravenLaser = _nameOfGCS getVariable "LaserDesignatorName";
                                 deleteVehicle _ravenLaser;
                                 _nameOfGCS setVariable ["LaserDesignatorName",nil,false];
                              };

                           // DEACTIVATE TACTICAL LASER IF ON
                           if !(isNil{_nameOfGCS getVariable "TacticalLaserVisible"}) then
                              {
                                 _nameOfGCS setVariable ["TacticalLaserVisible",nil,false];
                                 [_nameOfGCS,_microAirVehicle] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\laserPointer.sqf";
                              };

                           // DELETE FLYING RAVEN
                           deleteVehicle _microAirVehicle;
                           deleteVehicle _mavTargetSphere;
                           deleteVehicle _mavTargetVisibleSphere;

                           // PLAY SOUND WHEN STATIC RAVEN IS CREATED AND ENGINE IS CUT OFF - REPLACE THIS WITH WHIR DOWN ENGINE SOUND
                           [[_microAirVehicle, "prop_end"],"rhs_fnc_sayGlobal"] call BIS_fnc_MP;

                           // ASSIGN BATTERY LEVEL TO STATIC RAVEN
                           _ravenBatteryLevel = _nameOfGCS getVariable "ravenBatteryLevel";
                           _assignedCode = _nameOfGCS getVariable "assignedCode";
                           _microAirVehicleStatic setVariable ["ravenBatteryLevel",_ravenBatteryLevel,true];
                           _microAirVehicleStatic setVariable ["assignedCode",_assignedCode,true];
                           _nameOfGCS setVariable ["ravenBatteryLevel",nil,true];

                           // ASSIGN NAME OF GCS TO _microAirVehicleStatic
                           _microAirVehicleStatic setVariable ["nameOfGCS",_nameOfGCS, true];

                           // ALERT THE PLAYER'S SIDE WHERE THE RAVEN LANDED
                           _caller sideChat format ["RQ-11 LANDED AT GRID %1",(position _microAirVehicleStatic) call BIS_fnc_PosToGrid];

                           // PLAY SOUND TO ALERT PLAYER THAT THE RAVEN HAS LANDED
                           // [[_caller],"watchBeep_off"] call CBA_fnc_globalSay;


                           // AFTER LANDING - REMOVE ADDACTIONS FROM GCS
                           _nameOfGCS removeAction mavBaseStationActionName_01;
                           _nameOfGCS removeAction mavBaseStationActionName_02;
                           _nameOfGCS removeAction mavBaseStationActionName_03;
                           _nameOfGCS removeAction mavBaseStationActionName_04;
                           _nameOfGCS removeAction mavBaseStationActionName_05;
                           _nameOfGCS removeAction mavBaseStationActionName_06;
                           _nameOfGCS removeAction mavBaseStationActionName_07;
                           _nameOfGCS removeAction mavBaseStationActionName_08;
                           _nameOfGCS removeAction mavBaseStationActionName_09;

                           sleep 0.1;

                           // TURNS ON STROBE AFTER LANDING
                           null = [_microAirVehicleStatic,_microAirVehicleStatic,_microAirVehicleStatic,1] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\mavStrobeOnOff.sqf";

                           _caller setVariable ["nameOfMAV",nil,true];
                           _nameOfGCS setVariable ["birdRecall",nil,true];

                  };
         };

};
