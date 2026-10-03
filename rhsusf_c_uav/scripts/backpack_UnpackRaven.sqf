/*
****************************************************************
UNPACK RAVEN SCRIPT - THIS IS ASSEMBLES THE RAVEN FROM THE BACKPACK
****************************************************************
*/

private ["_body","_tail","_paddle","_rotor","_wingMiddle","_wingEnds","_camera","_ravenStatic","_backpackRavenBatteryLevel","_staticGCS","_assignedCode","_caller","_backpackLocation","_backpack","_blanketWithParts"];
// _ravenBackpack = _this select 0;  // removed because the game does not recognize a backpack on the ground by its type but rather by the generic groundContainer or something
_backpack = cursorTarget;
// hint format ["%1",typeOf (_this select 0)];
_caller = _this select 1;
// _typeOfBackpack = _this select 3;

// REMOVE AFTER TESTING
// if (_typeOfBackpack == 0) then {hint "Raven A Backpack"};
// if (_typeOfBackpack == 1) then {hint "Raven B Backpack"};

// DELETE THE BACKPACK
_backpackLocation = [visiblePositionASL cursorTarget select 0, visiblePositionASL cursorTarget select 1, visiblePositionASL cursorTarget select 2];
deleteVehicle _backpack;

// CREATE THE BLANKET WITH PARTS
_blanketWithParts = createVehicle ["rq11b_zerlegt", position cursorTarget,[],0,"NONE"];
waitUntil {alive _blanketWithParts};
_blanketWithParts setPosASL [_backpackLocation select 0, _backpackLocation select 1, _backpackLocation select 2];
_blanketWithParts setDir getDir player;

// CREATE THE GROUND CONTROL STATION
_staticGCS = createVehicle ["rhsusf_RQ11MONITOR", position _blanketWithParts,[],1,"CAN_COLLIDE"];
waitUntil {alive _staticGCS};
for "_i" from 1 to 2 do
	{
		_staticGCS attachTo [_blanketWithParts,[0.4,0.2,0.1]];
		_staticGCS attachTo [_blanketWithParts,[0.4,0.2,0.1]];
	};
sleep 0.5;

/*
// CREATE THE BLANKET EMPTY
_blanket = createVehicle ["carpet_empty", position _blanketWithParts,[],0,"NONE"];
_blanket setPosASL [_backpackLocation select 0, _backpackLocation select 1, _backpackLocation select 2];
detach _staticGCS;
_staticGCS attachTo [_blanket,[0.4,0.2,0.1]];
*/

// -----------------------------------------------------------------------ASSEMBLY PROCESS START

/*
_blanket = createVehicle ["carpet_empty", position player,[],3,"CAN_COLLIDE"];
waitUntil {alive _blanket};
_blanket setDir getDir player;
_blanket setVelocity [0,0,-0.1];
*/

_body = createVehicle ["rq11_body", position player,[],0,"CAN_COLLIDE"];
waitUntil {alive _body};
_body attachTo [_blanketWithParts,[0,0,0.4]];
_body attachTo [_blanketWithParts,[0,0,0.4]];
_blanketWithParts say "button_small";
sleep 0.5;

_camera = createVehicle ["rq11b_camera",position player,[],0,"CAN_COLLIDE"];
waitUntil {alive _camera};
_camera attachTo [_blanketWithParts,[-0.26,0,0.38]];
_camera attachTo [_blanketWithParts,[-0.26,0,0.38]];
_blanketWithParts say "button_small";
sleep 0.5;

_tail = createVehicle ["rq11_tail",position player,[],0,"CAN_COLLIDE"];
waitUntil {alive _tail};
_tail attachTo [_body,[0.39,0,0.011]];
_tail attachTo [_body,[0.39,0,0.011]];
_blanketWithParts say "button_small";
sleep 0.5;


_rotor = createVehicle ["rq11_rotor",position player,[],0,"CAN_COLLIDE"];
waitUntil {alive _rotor};
_rotor attachTo [_body,[0.03,0,0.1]];
_rotor attachTo [_body,[0.03,0,0.1]];
_blanketWithParts say "button_small";
sleep 0.5;


_wingMiddle = createVehicle ["rq11_wing_m",position player,[],0,"CAN_COLLIDE"];
waitUntil {alive _wingMiddle};
_wingMiddle attachTo [_body,[0,0,0.098]];
_wingMiddle attachTo [_body,[0,0,0.098]];
_blanketWithParts say "button_small";
sleep 0.5;


_wingEnds = createVehicle ["rq11_wing_lr",position player,[],0,"CAN_COLLIDE"];
waitUntil {alive _wingEnds};
_wingEnds attachTo [_body,[0,0,0.13]];
_wingEnds attachTo [_body,[0,0,0.13]];
_blanketWithParts say "button_small";
sleep 0.5;


_paddle = createVehicle ["rq11_paddle",position player,[],0,"CAN_COLLIDE"];
waitUntil {alive _paddle};
_paddle attachTo [_body,[0.6,0,-0.065]];
_paddle attachTo [_body,[0.6,0,-0.065]];
_blanketWithParts say "button_small";
sleep 0.5;

_ravenStatic = createVehicle ["rhsusf_RQ11RAVEN_B_STATIC",position player,[],0,"CAN_COLLIDE"];
waitUntil {alive _ravenStatic};
// DO IT AGAIN TWICE TO GET AROUND THIS BUG
for "_i" from 1 to 2 do
	{
		_ravenStatic attachTo [_blanketWithParts,[0.25,0,0.45]];
		_ravenStatic setdir - 90;
	};
_blanketWithParts say "button_small";



/*

for "_i" from 1 to 2 do {
notepad attachto [desk1,[0,0,0.4]];
notepad setVectorDirAndUp [[1,0,0],[0,0,1]];
};

*/

//_ravenStatic setPos [getPos _body select 0, getPos _body select 1, getPos _body select 2];
//_ravenStatic setDir (getDir _body -90);


deleteVehicle _body;
deleteVehicle _camera;
deleteVehicle _tail;
deleteVehicle _rotor;
deleteVehicle _wingMiddle;
deleteVehicle _wingEnds;
deleteVehicle _paddle;

// NONE OF THIS STRAIGHTENS OUT THE RAVEN  - WTF
/*
hint "90";
_ravenStatic setDir 90;

sleep 1;
hint "180";
_ravenStatic setDir 180;

sleep 1;
hint "270";
_ravenStatic setDir 270;

sleep 1;
hint "-90";
_ravenStatic setDir -90;

sleep 1;
hint "getDir _body +90";
_ravenStatic setDir (getDir _body +90);
*/

// -----------------------------------------------------------------------ASSEMBLY PROCESS END

sleep 0.5;

// DELETE BLANKET WITH PARTS
deleteVehicle _blanketWithParts;

/*
// CREATE THE STATIC RAVEN AND ADD VARIABLES TO IT
if (_typeOfBackpack == 0) then
{
         _ravenStatic = createVehicle ["rhsusf_RQ11RAVEN_STATIC",position _blanket, [],0,"NONE"];
         _ravenStatic attachTo [_blanket,[0,0,0.1]];
} else
{
         _ravenStatic = createVehicle ["rhsusf_RQ11RAVEN_B_STATIC",position _blanket, [],0,"NONE"];
         _ravenStatic attachTo [_blanket,[0,0,0.1]];
};
_ravenStatic setPosASL [getPosASL _blanket select 0, getPosASL _blanket select 1, getPosASL _blanket select 2];
_ravenStatic setDir (getDir _blanket) - 90;
*/

// GET RAVEN BATTERY LEVEL FROM PLAYER AND TRANSFER TO STATIC RAVEN
if !(isNil{_caller getVariable "ravenBatteryLevel"}) then
{
         _backpackRavenBatteryLevel = _caller getVariable "ravenBatteryLevel";
         _ravenStatic setVariable ["ravenBatteryLevel",_backpackRavenBatteryLevel,true];
} else
{
         _ravenStatic setVariable ["ravenBatteryLevel",100,true];
};
sleep 0.5;


// ADD NAME OF GCS TO STATIC RAVEN
_ravenStatic setVariable ["nameOfGCS",_staticGCS,true];

// ADD NAME OF STATIC RAVEN TO GCS
_staticGCS setVariable ["nameOfRaven",_ravenStatic,true];

// CREATE CODE FOR RAVEN AND GCS
_assignedCode = round (random 999);
_staticGCS setVariable ["assignedCode",_assignedCode,true];
_ravenStatic setVariable ["assignedCode",_assignedCode,true];



// hint "RQ-11 Raven assembled and ready to fly.\n\nUse GCS to control it after launch.";

