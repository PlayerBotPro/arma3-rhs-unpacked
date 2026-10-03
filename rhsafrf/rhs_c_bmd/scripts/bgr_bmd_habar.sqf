/*
Created by Vadim Shchemelinin aka badger
2010 St.Petersburg

Script for BMD-2 by RHS

_habarScr = [this,type,setting,config] execVM "bgr_bmd_habar.sqf";
type = 0  -  all off
type = 1  -  all on
type = 2  -  random
type = 3  -  castom

setting = [#,#,#,#,#,#,"left"] //ONLY IF type = 3 !!!
[1,0,0,0,1,0,"back"]
1 -
0 -
(  ,  )
"back" -
"left" -
"none" -

config = true - running from config

Example for config init:
_habarScr = [_this,2,true] execVM "bgr_bmd_habar.sqf";

Example for mission init or mission script:
_habarScr = [this] execVM "bgr_bmd_habar.sqf";	//random
or:
_habarScr = [this,1] execVM "bgr_bmd_habar.sqf";	//all ON
or:
_habarScr = [this,3,[1,0,0,0,1,0,"back"]] execVM "bgr_bmd_habar.sqf";
*/
if (!isServer) exitWith {};

params["_bmd",["_type",2],["_setting",[]]];
_str = "none";

switch (_type) do {
	case 0: {
		_setting = [1,1,1,1,1,1,"none"];
	};
	case 1: {
		if ((random 10) > 5) then {
			_str = "left";
		} else {
			_str = "back";
		};
		_setting = [0,0,0,0,0,0,_str];
	};
	case 3: {
		if (count _setting < 7) then {
			_setting = [1,1,1,1,1,1,"none"];
		};
		_setting = [(1-(_setting select 0)),
					(1-(_setting select 1)),
					(1-(_setting select 2)),
					(1-(_setting select 3)),
					(1-(_setting select 4)),
					(1-(_setting select 5)),
					_setting select 6];
	};
	default {
		if ((random 10) > 6.66) then {
			_str = "back";
		} else {
			if ((random 10) > 5) then {
				_str = "left";
			} else {
				_str = "none";
			};
		};
		_setting = [(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					_str];
	};
};

_bmd setVariable ["habar_set", _setting, true];
{_bmd animate [_x,(_setting select _forEachIndex),true]}foreach ["crate_l1_unhide","crate_l2_unhide","crate_l3_unhide","crate_r1_unhide","crate_r2_unhide","crate_r3_unhide"];

switch (_setting select 6) do {
	case "back": {
		_bmd animate ["wood_1_unhide",0,true];
		_bmd animate ["wood_2_unhide",1,true];
	};
	case "left": {
		_bmd animate ["wood_1_unhide",1,true];
		_bmd animate ["wood_2_unhide",0,true];
	};
	default {
		_bmd animate ["wood_1_unhide",1,true];
		_bmd animate ["wood_2_unhide",1,true];
	};
};


//set attributes if in eden editor
if(is3DEN)then{
	//initializing after 1st frame
	_bmd spawn {
		if(time isEqualTo 0)exitWith{};
		//diag_log format["set ed time: %1,frame %2 %3",time,diag_frameNo,is3DEN];
		private _attributeList = getArray (configFile >> "CfgVehicles" >> typeOf _this >> "rhs_randomizedHabar" );
		{
			_this set3DENAttribute [_x,_this animationPhase _x];
		}foreach _attributeList;
	};
};