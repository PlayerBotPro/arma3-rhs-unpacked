/*
*************************************************************************
RAVEN PICK UP GCS SCRIPT - THIS IS SCRIPT IS RUN WHEN YOU PICK UP THE RAVEN
*************************************************************************
*/

private ["_staticGCS","_caller","_monitorDir","_monitorAngle","_monitorPitch","_vecdx","_vecdy","_vecdz","_vecux","_vecuy","_vecuz","_EHkilledIdx"];
_staticGCS = _this select 0;
_caller = _this select 1;

//_caller playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";

// WAIT UNTIL HAND EXTENDED
//waitUntil {animationState _caller == "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"};
_caller action ["TakeMagazine", _caller, []];

// THIS ATTACHES THE GCS TO THE CALLER'S BODY
_staticGCS attachTo [_caller, [-0.3,0.15,0],"pelvis"]; //head_axis
_staticGCS attachTo [_caller, [-0.3,0.15,0],"pelvis"]; //head_axis

// THIS TWEAKS THE ANGLE AND POSITION OF THE GCS ON YOUR LEFT HIP
_monitorDir = 105;
_monitorAngle = 0;
_monitorPitch = -85;

_vecdx = (sin(_monitorDir)) * (cos(_monitorAngle));
_vecdy = (cos(_monitorDir)) * (cos(_monitorAngle));
_vecdz = sin(_monitorAngle);

_vecux = (cos(_monitorDir)) * (cos(_monitorAngle)) * (sin(_monitorPitch));
_vecuy = (sin(_monitorDir)) * (cos(_monitorAngle)) * (sin(_monitorPitch));
_vecuz = (cos(_monitorAngle)) * (cos(_monitorPitch));

_staticGCS setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ];
_staticGCS setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ];

// THIS WILL MAKE YOU DROP THE GCS WHEN YOU ARE KILLED OR DIE
_EHkilledIdx = player addEventHandler ["killed", {null = (_this select 0) execVM "\rhsusf\addons\rhsusf_c_uav\scripts\callerKilled.sqf"}];
_staticGCS setVariable ["dropGCSWhenKilledEventHandlerID",_EHkilledIdx,false];

// THIS IS USED BY A BUNCH OF OTHER SCRIPTS
_caller setVariable ["nameOfAttachedGCS",_staticGCS,false];

// THIS WILL PREVENT YOU FROM PICKING UP MORE THAN ONE GCS AT A TIME
_caller setVariable ["staticGCSAttached",1,false];



// THIS ADDS THE ACTION TO ALLOW YOU TO DROP THE GCS
dropGCSActionName_001 = _caller addAction ["Drop GCS", "\rhsusf\addons\rhsusf_c_uav\scripts\GCS\GCSdrop.sqf", [], 0, false, true, "", "!(isNil{_this getVariable 'staticGCSAttached'}) and (_target == _this)"];


// IF THE GCS IS ATTACHED TO YOU AND YOU GET INTO A VEHICLE, YOU DROP THE GCS
while {(_caller getVariable "staticGCSAttached") == 1} do
{
         if !(vehicle _caller == _caller) then
         {
                  // HIDE THE GCS
                  _staticGCS hideObject true;
         } else
         {
	       // UNHIDE THE GCS
	       _staticGCS hideObject false;
         };
         sleep 1;
};


