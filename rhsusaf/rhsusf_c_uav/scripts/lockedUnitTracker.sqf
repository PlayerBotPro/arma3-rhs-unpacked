/*
*********************************************************************************************************
LOCKED VEHICLE TRACKING  SCRIPT - THIS IS CALLED BY ravenBKeysPressed.sqf
THIS TRACKS A LOCKED VEHICLE AND IF THE LINE BETWEEN THE VEHICLE AND THE RAVEN IS BROKEN, THE LOCK IS BROKEN
*********************************************************************************************************
*/

private ["_mavTargetVisibleSphere","_mavCurrentTargetSphere","_staticGCS","_microAirVehicle","_ravenLaser"];
// _lockedUnit = _this select 0;
_mavTargetVisibleSphere = _this select 0;
_mavCurrentTargetSphere = _this select 1;
_staticGCS = _this select 2;
_microAirVehicle = _staticGCS getVariable "nameOfFlyingRaven";

if (isNil{_mavCurrentTargetSphere getVariable "lockTrackerRunning"}) then
{
         _mavCurrentTargetSphere setVariable ["lockTrackerRunning",1,false];

         while {(_mavTargetVisibleSphere getVariable "sphereAttached") == 1} do
         {
                  sleep 1;

                  if (lineIntersects [(visiblePositionASL _mavCurrentTargetSphere),(visiblePositionASL _microAirVehicle),_mavCurrentTargetSphere,_microAirVehicle]) then
                  {
                           // IF THE LINE INTERSECTS, WAIT THREE SECONDS FOR THE INTERSECTION TO CLEAR
                           cutText ["WAITING FOR RELOCK...", 'PLAIN DOWN',0];
                           rhsusf_Logic1 say "antiTamper";
                           sleep 3;

                           // IF AFTER 3 SECONDS THE INTERSECTION STILL HAS NOT CLEARED...
                           if (lineIntersects [(visiblePositionASL _mavCurrentTargetSphere),(visiblePositionASL _microAirVehicle),_mavCurrentTargetSphere,_microAirVehicle]) then
                           {
                                    // UNLOCK
                                    detach _mavTargetVisibleSphere;
                                    detach _mavCurrentTargetSphere;
                                    _mavTargetVisibleSphere setVariable ["sphereAttached",nil,false];
                                    cutText ["TARGET LOCK FAILED", 'PLAIN DOWN',0];
                                    rhsusf_Logic1 say "target_unlocked";

                                    // TURN OFF LASERS IF ON
                                    // DEACTIVATE LASER DESIGNATOR IF ACTIVATED
                                    if (!isNil{_staticGCS getVariable "LaserDesignatorName"}) then
                                       {
                                          _ravenLaser = _staticGCS getVariable "LaserDesignatorName";
                                          deleteVehicle _ravenLaser;
                                          _staticGCS setVariable ["LaserDesignatorName",nil,false];
                                       };

                                    // DEACTIVATE TACTICAL LASER IF ON
                                    if !(isNil{_staticGCS getVariable "TacticalLaserVisible"}) then
                                       {
                                          _staticGCS setVariable ["TacticalLaserVisible",nil,false];
                                          [_staticGCS,_microAirVehicle] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\laserPointer.sqf";
                                       };

                           } else
                           {
                                    // LOCK RESTORED
                                    cutText ["RELOCKED", 'PLAIN DOWN',0];
                                    rhsusf_Logic1 say "target_locked";
                           };
                  };


         };
         _mavCurrentTargetSphere setVariable ["lockTrackerRunning",nil,false];
};