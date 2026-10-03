/*
***********************************************************
RAVEN PICKED UP SCRIPT - THIS IS RUN WHEN YOU PICK UP THE RAVEN
***********************************************************
*/

private ["_caller","_staticRaven","_monitorDir","_monitorAngle","_monitorPitch","_vecdx","_vecdy","_vecdz","_vecux","_vecuy","_vecuz","_EHkilledIdx"];
_staticRaven = _this select 0;
_caller = _this select 1;

// _caller playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";

// WAIT UNTIL HAND EXTENDED
// waitUntil {animationState _caller == "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"};


// IF STROBE SCRIPT IS RUNNING, TURN IT OFF
if (!isNil{_staticRaven getVariable "mavStrobeOn"}) then
{
      // TURNS OFF STROBE
      null = [_staticRaven,_staticRaven,_staticRaven,0] execVM "\rhsusf\addons\rhsusf_c_uav\scripts\mavStrobeOnOff.sqf";
};

// DROP THE MAV WHEN KILLED
_EHkilledIdx = player addEventHandler ["killed", {null = (_this select 0) execVM "\rhsusf\addons\rhsusf_c_uav\scripts\callerKilled.sqf"}];
_staticRaven setVariable ["dropMAVWhenKilledEventHandlerID",_EHkilledIdx,false];

_staticRaven attachTo [_caller, [0.05,-0.35,-0.5],"head_axis"];
_staticRaven attachTo [_caller, [0.05,-0.35,-0.5],"head_axis"];

_monitorDir = 75;
_monitorAngle = 65;
_monitorPitch = 30;

_vecdx = (sin(_monitorDir)) * (cos(_monitorAngle));
_vecdy = (cos(_monitorDir)) * (cos(_monitorAngle));
_vecdz = sin(_monitorAngle);

_vecux = (cos(_monitorDir)) * (cos(_monitorAngle)) * (sin(_monitorPitch));
_vecuy = (sin(_monitorDir)) * (cos(_monitorAngle)) * (sin(_monitorPitch));
_vecuz = (cos(_monitorAngle)) * (cos(_monitorPitch));

_staticRaven setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ];
_staticRaven setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ];


_caller setVariable ["nameOfAttachedStaticRaven",_staticRaven,true];

// THIS IS SO YOU CAN'T PICK UP MORE THAN ONE RAVEN AT A TIME
_caller setVariable ["staticRavenAttached",1,true];

mavBaseStationActionName_00 = _caller addAction ["Launch RQ-11 Raven", "\rhsusf\addons\rhsusf_c_uav\scripts\mavLaunch.sqf", [], 0, false, true, "", " (_target == _this)"];
mavBaseStationActionName_001 = _caller addAction ["Drop RQ-11 Raven", "\rhsusf\addons\rhsusf_c_uav\scripts\mavDrop.sqf", [], 0, false, true, "", "(_target == _this)"];

// _caller action ["TakeMagazine", _caller, ""];

while {(_caller getVariable "staticRavenAttached") == 1} do
{
         if !(vehicle _caller == _caller) then
         {
		// HIDE THE STATIC RAVEN
		_staticRaven hideObject true;
         } else
         {
		// UNHIDE THE STATIC RAVEN
		_staticRaven hideObject false;
         };
         sleep 1;
};




