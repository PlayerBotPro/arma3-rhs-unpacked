/*
Created by Vadim Shchemelinin aka badger
2010 St.Petersburg

Script for T80 by RHS

_habarScr = [this,type,setting,config] execVM "bgr_t80_habar.sqf";
type = 0  -  all off
type = 1  -  all on
type = 2  -  random
type = 3  -  castom
*/
if (!isServer) exitWith {};
params["_t80",["_type",2],["_setting",[]]];

switch (_type) do {
   case 0: {
      _setting = [1,1,1,1];
   };
   case 1: {
      _setting = [0,0,0,0];
   };
   case 3: {
      if (count _setting < 5) then {
         _setting = [1,1,1,1];
      };
      _setting = [(1-(_setting select 0)),
               (1-(_setting select 1)),
               (1-(_setting select 2)),
               (1-(_setting select 3))];
   };
   default {
      _setting = [(floor (random 2)),
               (floor (random 2)),
               (floor (random 2)),
               (floor (random 2))];
   };
};
_t80 setVariable ["habar_set", _setting, true];
_t80 animate ["log_unhide",(_setting select 0),true];
_t80 animate ["sideskirt_unhide",(_setting select 1),true];
_t80 animate ["fbskirt_unhide",(_setting select 2),true];
_t80 animate ["ftskirt_unhide",(_setting select 3),true];


//set attributes if in eden editor
if(is3DEN)then{
   //initializing after 1st frame
   _t80 spawn {
      if(time isEqualTo 0)exitWith{};
      //diag_log format["set ed time: %1,frame %2 %3",time,diag_frameNo,is3DEN];
      private _attributeList = getArray (configFile >> "CfgVehicles" >> typeOf _this >> "rhs_randomizedHabar" );
      {
         _this set3DENAttribute [_x,_this animationPhase _x];
      }foreach _attributeList;
   };
};