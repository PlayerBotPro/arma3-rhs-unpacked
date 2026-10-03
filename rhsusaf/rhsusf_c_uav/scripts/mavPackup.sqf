/*
****************************************************************************
PACK UP RAVEN SCRIPT - THIS SCRIPT DISASSEMBLES THE RAVEN INTO THE BACKPACK
****************************************************************************
*/

private ["_staticRaven","_staticRavenBatteryLevel","_staticGCS","_caller","_body","_tail","_paddle","_rotor","_wingMiddle","_wingEnds","_camera","_blanket"];
_staticRaven = _this select 0;
_caller = _this select 1;
_staticGCS = _staticRaven getVariable "nameOfGCS";
// _backpackLocation = [getPosASL _staticRaven select 0, getPosASL _staticRaven select 1, getPosASL _staticRaven select 2];

if (!isNil{_caller getVariable "staticGCSAttached"}) then
{
         hint parseText "<t color='#FF0000' size='1.8' shadow='0' >-ERROR-</t><br/>DROP THE GCS<br/>BEFORE PACKING THE RAVEN";
} else
{

         // CREATE BACKPACK DEPENDING ON STATIC RAVEN TYPE
         if (typeOf _staticRaven == "rhsusf_RQ11RAVEN_STATIC") then
         {
                  // _ravenBackpack = createVehicle ["B_rhsusf_BACKPACK",position _staticRaven, [],0,"NONE"];
                  _caller addBackpack "B_rhsusf_BACKPACK";
         } else
         {
                  // _ravenBackpack = createVehicle ["B_rhsusf_B_BACKPACK",position _staticRaven, [],0,"NONE"];
                  _caller addBackpack "B_rhsusf_B_BACKPACK";
         };

         // GET STATIC RAVEN BATTERY LEVEL AND TRANSFER TO PLAYER
         _staticRavenBatteryLevel = _staticRaven getVariable "ravenBatteryLevel";
         _caller setVariable ["ravenBatteryLevel",_staticRavenBatteryLevel,true];
         sleep 0.2;

         // -----------------------------------------------------------------------DISASSEMBLY PROCESS START


         _blanket = createVehicle ["carpet_empty", position _staticRaven,[],3,"CAN_COLLIDE"];
         waitUntil {alive _blanket};

         _blanket setPosATL [visiblePosition _staticRaven select 0, visiblePosition _staticRaven select 1,visiblePosition _staticRaven select 2];
         _blanket setDir (getDir _staticRaven +90);



         _body = createVehicle ["rq11_body", position player,[],0,"CAN_COLLIDE"];
         waitUntil {alive _body};
         _body attachTo [_blanket,[0,0,0.4]];
         _body attachTo [_blanket,[0,0,0.4]];


         _camera = createVehicle ["rq11b_camera",position player,[],0,"CAN_COLLIDE"];
         waitUntil {alive _camera};
         _camera attachTo [_blanket,[-0.26,0,0.38]];
         _camera attachTo [_blanket,[-0.26,0,0.38]];


         _tail = createVehicle ["rq11_tail",position player,[],0,"CAN_COLLIDE"];
         waitUntil {alive _tail};
         _tail attachTo [_body,[0.39,0,0.011]];
         _tail attachTo [_body,[0.39,0,0.011]];



         _rotor = createVehicle ["rq11_rotor",position player,[],0,"CAN_COLLIDE"];
         waitUntil {alive _rotor};
         _rotor attachTo [_body,[0.03,0,0.1]];
         _rotor attachTo [_body,[0.03,0,0.1]];



         _wingMiddle = createVehicle ["rq11_wing_m",position player,[],0,"CAN_COLLIDE"];
         waitUntil {alive _wingMiddle};
         _wingMiddle attachTo [_body,[0,0,0.098]];
         _wingMiddle attachTo [_body,[0,0,0.098]];



         _wingEnds = createVehicle ["rq11_wing_lr",position player,[],0,"CAN_COLLIDE"];
         waitUntil {alive _wingEnds};
         _wingEnds attachTo [_body,[0,0,0.13]];
         _wingEnds attachTo [_body,[0,0,0.13]];



         _paddle = createVehicle ["rq11_paddle",position player,[],0,"CAN_COLLIDE"];
         waitUntil {alive _paddle};
         _paddle attachTo [_body,[0.6,0,-0.065]];
         _paddle attachTo [_body,[0.6,0,-0.065]];

/*
         _ravenStatic = createVehicle ["rhsusf_RQ11RAVEN_B_STATIC",position _body,[],0,"NONE"];
         waitUntil {alive _ravenStatic};
         _ravenStatic setPos [getPos _body select 0, getPos _body select 1, getPos _body select 2];
         _ravenStatic setDir (getDir _body -90);
*/


         deleteVehicle _staticGCS;
         deleteVehicle _staticRaven;

         sleep 0.5;
         _blanket say "button_small";
         deleteVehicle _paddle;

         sleep 0.5;
         _blanket say "button_small";
         deleteVehicle _wingEnds;

         sleep 0.5;
         _blanket say "button_small";
         deleteVehicle _wingMiddle;

         sleep 0.5;
         _blanket say "button_small";
         deleteVehicle _rotor;

         sleep 0.5;
         _blanket say "button_small";
         deleteVehicle _tail;

         sleep 0.5;
         _blanket say "button_small";
         deleteVehicle _camera;

         sleep 0.5;
         _blanket say "button_small";
         deleteVehicle _body;

         sleep 0.5;
         deleteVehicle _blanket;

         // -----------------------------------------------------------------------DISASSEMBLY PROCESS END



};



