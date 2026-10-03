
private ["_caller","_staticGCS","_EHkilledIdx","_vel","_dir","_speed"];
_caller = _this select 1;
_staticGCS = _caller getVariable "nameOfAttachedGCS";


_caller removeAction dropGCSActionName_001;

_staticGCS attachTo [_caller, [0,1,0],"righthand"];
_staticGCS setDir 0;

sleep 0.2;
// _caller playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
// _caller action ["TakeMagazine", _caller, ""];

// WAIT UNTIL HAND EXTENDED
// waitUntil {animationState _caller == "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"};


detach _staticGCS;
_vel = velocity _caller;
_dir = direction _caller;
_speed = 3; // "Added speed"
_staticGCS setVelocity [(_vel select 0)+((sin _dir)*_speed),(_vel select 1) + ((cos _dir)*_speed),(_vel select 2)];

// _staticGCS setVelocity [0,0,-0.3];



_caller setVariable ["staticGCSAttached",nil,false];
_caller setVariable ["nameOfAttachedGCS",nil,false];


// REMOVE KILLED EVENT HANDLER IF YOU DROP THE GCS
_EHkilledIdx = _staticGCS getVariable "dropGCSWhenKilledEventHandlerID";
_caller removeEventHandler ["killed", _EHkilledIdx];



