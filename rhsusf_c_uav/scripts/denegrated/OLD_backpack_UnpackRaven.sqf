/*
****************************************************************
UNPACK RAVEN SCRIPT - THIS IS ASSEMBLES THE RAVEN FROM THE BACKPACK
****************************************************************
*/

private ["_rq11_body","_rq11_tail","_rq11_paddle","_rq11_rotor","_rq11_wing_m","_rq11_wing_lr","_rq11_camera","_ravenStatic","_blanket","_rq11_rotor2","_rq11_paddle2","_rq11_camera2","_rq11_camera3","_backpackRavenBatteryLevel","_bodyRavenBatteryLevel","_staticGCS","_assignedCode","_typeOfBackpack","_caller","_backpackLocation","_backpack"];
// _ravenBackpack = _this select 0;  // removed because the game does not recognize a backpack on the ground by its type but rather by the generic groundContainer or something
_backpack = cursorTarget;
_caller = _this select 1;
_typeOfBackpack = _this select 3;

// REMOVE AFTER TESTING
// if (_typeOfBackpack == 0) then {hint "Raven A Backpack"};
// if (_typeOfBackpack == 1) then {hint "Raven B Backpack"};

_blanket = createVehicle ["carpet_empty", position cursorTarget,[],0,"NONE"];
waitUntil {!isNull _blanket};
_backpackLocation = [getPosASL cursorTarget select 0, getPosASL cursorTarget select 1, getPosASL cursorTarget select 2];

// DELETE THE BACKPACK
// deleteVehicle cursorTarget;
deleteVehicle _backpack;


_blanket setPosASL [_backpackLocation select 0, _backpackLocation select 1, _backpackLocation select 2];
//_blanket setVelocity [0,0,-0.1];


// GET RAVEN BATTERY LEVEL FROM PLAYER AND TRANSFER TO BLANKET
if !(isNil{_caller getVariable "ravenBatteryLevel"}) then
{
         _backpackRavenBatteryLevel = _caller getVariable "ravenBatteryLevel";
         _blanket setVariable ["ravenBatteryLevel",_backpackRavenBatteryLevel,true];
} else
{
         _blanket setVariable ["ravenBatteryLevel",100,true];
};


//====================CREATE ALL OF THE PARTS AND ATTACH THEM TO THE BLANKET

// CREATE RAVEN BODY AND ATTACH TO BLANKET
_rq11_body = createVehicle ["rq11_body", position _blanket,[],0,"NONE"];
waitUntil {!isNull _rq11_body};
_rq11_body attachTo [_blanket, [-0.1,-0.1,0.1]];



// GET RAVEN BATTERY LEVEL FROM BACKPACK AND TRANSFER TO BODY
_backpackRavenBatteryLevel = _blanket getVariable "ravenBatteryLevel";
_rq11_body setVariable ["ravenBatteryLevel",_backpackRavenBatteryLevel,true];


// CREATE THE GROUND CONTROL STATION
_staticGCS = createVehicle ["rhsusf_RQ11MONITOR", position _blanket,[],1,"NONE"];
waitUntil {!isNull _staticGCS};
_staticGCS attachTo [_blanket,[0.4,0.2,0.1]];
detach _staticGCS;

/*
// **********************************************************



// CREATE TAIL AND ATTACH
_rq11_tail = createVehicle ["rq11_tail", position _blanket,[],1,"NONE"];
waitUntil {!isNull _rq11_tail};
_rq11_tail attachTo [_blanket,[0,0.05,0.1]];
detach _rq11_tail;

// CREATE PADDLE AND ATTACH
_rq11_paddle = createVehicle ["rq11_paddle", position _blanket,[],1,"NONE"];
waitUntil {!isNull _rq11_paddle};
_rq11_paddle attachTo [_blanket,[0.4,-0.20,-0.01]];
_rq11_paddle setDir 45;
detach _rq11_paddle;

// CREATE PROP AND ATTACH
_rq11_rotor = createVehicle ["rq11_rotor", position _blanket,[],1,"NONE"];
waitUntil {!isNull _rq11_rotor};
_rq11_rotor attachTo [_blanket,[0,0.20,0.1]];
detach _rq11_rotor;

//CREATE TOP MIDDLE WING AND ATTACH
_rq11_wing_m = createVehicle ["rq11_wing_m", position _blanket,[],1,"NONE"];
waitUntil {!isNull _rq11_wing_m};
_rq11_wing_m attachTo [_blanket,[-0.2,-0.55,0.02]];
detach _rq11_wing_m;
_rq11_wing_m setDir (getDir _blanket -90);



// CREATE WING ENDS AND ATTACH
_rq11_wing_lr = createVehicle ["rq11_wing_lr", position _blanket,[],1,"NONE"];
waitUntil {!isNull _rq11_wing_lr};
_rq11_wing_lr attachTo [_blanket,[0.00,0.55,0.05]];
detach _rq11_wing_lr;
_rq11_wing_lr setDir (getDir _blanket -90);


// CREATE CAMERA AND ATTACH
if (_typeOfBackpack == 0) then
{
         // CREATE RQ-11A CAMERA
         _rq11_camera = createVehicle ["rq11_camera", position _blanket,[],1,"NONE"];
         waitUntil {!isNull _rq11_camera};
         _rq11_camera attachTo [_blanket,[-0.5,-0.25,0.05]];

} else
{
         // CREATE RQ-11B CAMERA
         _rq11_camera = createVehicle ["rq11b_camera", position _blanket,[],1,"NONE"];
         waitUntil {!isNull _rq11_camera};
         _rq11_camera attachTo [_blanket,[-0.5,-0.25,0.05]];

};

// deleteVehicle _ravenBackpack;

//==============EXTRA PARTS
// CREATE PROP AND ATTACH
_rq11_rotor2 = createVehicle ["rq11_rotor", position _blanket,[],1,"NONE"];
waitUntil {!isNull _rq11_rotor2};
_rq11_rotor2 attachTo [_blanket,[0,0.14,0.1]];
_rq11_rotor2 setDir 180;
detach _rq11_rotor2;


// CREATE PADDLE AND ATTACH
_rq11_paddle2 = createVehicle ["rq11_paddle", position _blanket,[],1,"NONE"];
waitUntil {!isNull _rq11_paddle2};
_rq11_paddle2 attachTo [_blanket,[0.2,-0.20,-0.01]];
_rq11_paddle2 setDir 45;
detach _rq11_paddle2;



if (typeOf _rq11_camera == "rq11_camera") then
{
         // CREATE CAMERA AND ATTACH
         _rq11_camera2 = createVehicle ["rq11_camera", position _blanket,[],1,"NONE"];
         waitUntil {!isNull _rq11_camera2};
         _rq11_camera2 attachTo [_blanket,[-0.5,-0.05,0.05]];
         detach _rq11_camera2;


         // CREATE CAMERA AND ATTACH
         _rq11_camera3 = createVehicle ["rq11_camera", position _blanket,[],1,"NONE"];
         waitUntil {!isNull _rq11_camera3};
         _rq11_camera3 attachTo [_blanket,[-0.5,-0.15,0.05]];
         detach _rq11_camera3;

} else
{
         // CREATE CAMERA AND ATTACH
         _rq11_camera2 = createVehicle ["rq11b_camera", position _blanket,[],1,"NONE"];
         waitUntil {!isNull _rq11_camera2};
         _rq11_camera2 attachTo [_blanket,[-0.5,-0.05,0.05]];
         detach _rq11_camera2;


         // CREATE CAMERA AND ATTACH
         _rq11_camera3 = createVehicle ["rq11b_camera", position _blanket,[],1,"NONE"];
         waitUntil {!isNull _rq11_camera3};
         _rq11_camera3 attachTo [_blanket,[-0.5,-0.15,0.05]];
         detach _rq11_camera3;

};




//=====================ASSEMBLE THE RAVEN TOGETHER=====================

sleep 1;


// CREATE RAVEN BODY AND ATTACH TO BLANKET
_rq11_body attachTo [_blanket, [0,0,0.2]];
_rq11_body setDir getDir _blanket;
sleep 1.2;


// CREATE TAIL AND ATTACH
_rq11_tail attachTo [_rq11_body,[0.39,0,0.011]];
_rq11_body say ["addTime",1];
sleep 1.2;

// CREATE PADDLE AND ATTACH
_rq11_paddle attachTo [_rq11_body,[0.615,0,-0.07]];
_rq11_body say ["addTime",1];
sleep 1.2;

// CREATE PROP AND ATTACH
_rq11_rotor attachTo [_rq11_body,[0.01,0,0.080]];
_rq11_body say ["addTime",1];
sleep 1.2;

//CREATE TOP MIDDLE WING AND ATTACH
_rq11_wing_m attachTo [_rq11_body,[-0.020,0,0.1]];
_rq11_body say ["addTime",1];
sleep 1.2;

// CREATE WING ENDS AND ATTACH
_rq11_wing_lr attachTo [_rq11_body,[-0.020,0,0.132]];
_rq11_body say ["addTime",1];
sleep 1.2;

// CREATE CAMERA AND ATTACH
_rq11_camera attachTo [_rq11_body,[-0.262,0,-0.020]];
_rq11_body say ["addTime",1];
sleep 1.2;

deleteVehicle _rq11_tail;
deleteVehicle _rq11_paddle;
deleteVehicle _rq11_rotor;
deleteVehicle _rq11_wing_m;
deleteVehicle _rq11_wing_lr;
deleteVehicle _rq11_rotor2;
deleteVehicle _rq11_paddle2;
deleteVehicle _rq11_camera2;
deleteVehicle _rq11_camera3;

*/

if (typeOf _rq11_camera == "rq11_camera") then
{
         _ravenStatic = createVehicle ["rhsusf_RQ11RAVEN_STATIC",position _rq11_body, [],0,"NONE"];

} else
{
         _ravenStatic = createVehicle ["rhsusf_RQ11RAVEN_B_STATIC",position _rq11_body, [],0,"NONE"];

};
_ravenStatic setPosASL [getPosASL _rq11_body select 0, getPosASL _rq11_body select 1, getPosASL _rq11_body select 2];
_ravenStatic setDir (getDir _rq11_body) - 90;


deleteVehicle _rq11_camera;

// GET RAVEN BATTERY LEVEL FROM BODY AND TRANSFER TO STATIC RAVEN
_bodyRavenBatteryLevel = _rq11_body getVariable "ravenBatteryLevel";
_ravenStatic setVariable ["ravenBatteryLevel",_bodyRavenBatteryLevel,true];

deleteVehicle _rq11_body;
deleteVehicle _blanket;




// ADD NAME OF GCS TO STATIC RAVEN
_ravenStatic setVariable ["nameOfGCS",_staticGCS,true];

// ADD NAME OF STATIC RAVEN TO GCS
_staticGCS setVariable ["nameOfRaven",_ravenStatic,true];

// CREATE CODE FOR RAVEN AND GCS
_assignedCode = round (random 999);
_staticGCS setVariable ["assignedCode",_assignedCode,true];
_ravenStatic setVariable ["assignedCode",_assignedCode,true];



hint "RQ-11 Raven assembled and ready to fly.\n\nUse GCS to control it after launch.";

