/*
*******************************************************************************
RAVEN DROP SCRIPT - THIS IS CALLED WHEN THE PLAYER DROPS THE RAVEN ONTO THE GROUND
*******************************************************************************
*/

private ["_caller","_staticRaven","_EHkilledIdx","_vel","_dir","_speed"];
_caller = _this select 1;
_staticRaven = _caller getVariable "nameOfAttachedStaticRaven";


_staticRaven attachTo [_caller, [0,1,0],"righthand"];
_staticRaven setDir (getDir _caller -45);

sleep 0.2;
// _caller playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";

// WAIT UNTIL HAND EXTENDED
// waitUntil {animationState _caller == "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"};


detach _staticRaven;
_vel = velocity _caller;
_dir = direction _caller;
_speed = 3; // "Added speed"
_staticRaven setVelocity [(_vel select 0)+((sin _dir)*_speed),(_vel select 1) + ((cos _dir)*_speed),(_vel select 2)];
//_caller action ["TakeMagazine", _caller, ""];

// _staticRaven setVelocity [velocity _caller select 0, velocity _caller select 1,velocity _caller select 2];

_caller setVariable ["staticRavenAttached",nil,false];
_caller setVariable ["nameOfAttachedStaticRaven",nil,false];

_caller removeAction mavBaseStationActionName_00;
_caller removeAction mavBaseStationActionName_001;

// REMOVE KILLED EVENT HANDLER IF YOU DROP THE MAV
_EHkilledIdx = _staticRaven getVariable "dropMAVWhenKilledEventHandlerID";
_caller removeEventHandler ["killed",_EHkilledIdx];




