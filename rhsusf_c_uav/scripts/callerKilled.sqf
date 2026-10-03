
private ["_nameOfGCS","_staticRaven","_caller","_EHkilledIdx0","_EHkilledIdx1"];
_caller = _this;
_staticRaven = _caller getVariable "nameOfAttachedStaticRaven";
_nameOfGCS = _staticRaven getVariable "nameOfGCS";

detach _nameOfGCS;

detach _staticRaven;

// REMOVE MAV KILLED EVENT HANDLER IF YOU ARE KILLED
_EHkilledIdx0 = _staticRaven getVariable "dropMAVWhenKilledEventHandlerID";
_caller removeEventHandler ["killed",_EHkilledIdx0];


// REMOVE KILLED EVENT HANDLER IF YOU DROP THE GCS
_EHkilledIdx1 = _nameOfGCS getVariable "dropGCSWhenKilledEventHandlerID";
_caller removeEventHandler ["killed", _EHkilledIdx1];

_caller setVariable ["staticGCSAttached",nil,false];
_caller setVariable ["nameOfAttachedGCS",nil,false];

_caller setVariable ["staticRavenAttached",nil,false];
_caller setVariable ["nameOfAttachedStaticRaven",nil,false];

