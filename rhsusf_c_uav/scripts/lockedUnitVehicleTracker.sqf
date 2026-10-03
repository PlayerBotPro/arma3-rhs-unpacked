/*
*********************************************************************************************************
LOCKED UNIT VEHICLE TRACKER  SCRIPT - THIS IS CALLED BY ravenBKeysPressed.sqf
THIS SCRIPT TRACKS IF A LOCKED GROUND UNIT ENTERS A VEHICLE
*********************************************************************************************************
*/
private ["_vehicleType","_nameOfvehicleType","_lockedString","_lockedUnit","_mavTargetVisibleSphere","_mavCurrentTargetSphere"];
_lockedUnit = _this select 0;
_mavTargetVisibleSphere = _this select 1;
_mavCurrentTargetSphere = _this select 2;

if (isNil{_mavCurrentTargetSphere getVariable "vehicleTrackerRunning"}) then
{
         _mavCurrentTargetSphere setVariable ["vehicleTrackerRunning",1,true];

         while {(_mavTargetVisibleSphere getVariable "sphereAttached") == 1} do
         {
                  sleep 1;
                  // IF THE LOCKED UNIT GETS INTO A VEHICLE, LOCK TO VEHICLE
                  if !(vehicle _lockedUnit == _lockedUnit) exitWith
                  {
                           // LOCK TO VEHICLE
                           _mavTargetVisibleSphere attachTo [vehicle _lockedUnit,[0,0,0]];
                           _mavCurrentTargetSphere attachTo [vehicle _lockedUnit,[0,0,0]];
                           _vehicleType = typeOf (vehicle _lockedUnit);
                           _nameOfvehicleType = (getText (configFile >> "cfgVehicles" >> (_vehicleType) >> "displayname"));
                           _lockedString = format ["TARGET LOCKED: %1",_nameOfvehicleType];
                           cutText [_lockedString, 'PLAIN DOWN',0];
                           rhsusf_Logic1 say "target_locked";
                  };
         };

         _mavCurrentTargetSphere setVariable ["vehicleTrackerRunning",nil,true];
};