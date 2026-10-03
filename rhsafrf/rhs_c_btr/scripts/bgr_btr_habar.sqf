/*
Created by Vadim Shchemelinin aka badger
2010 St.Petersburg

Script for BTR-70 by RHS

_habarScr = [this,type,setting,config] execVM "bgr_btr_habar.sqf";
type = 0  -  all off
type = 1  -  all on
type = 2  -  random
type = 3  -  castom
*/
if (!isServer) exitWith {};

params["_btr",["_type",2],["_setting",[]]];
private _str = "none";

switch (_type) do {
	case 0: {
		_setting = [1,1,1,1,1,1,1,1,1,1,"none"];
	};
	case 1: {
		_setting = [0,0,0,0,0,0,0,0,0,0,"both"];
	};
	case 3: {
		if (count _setting < 11) then {
			_setting = [1,1,1,1,1,1,1,1,1,1,"none"];
		};
		_setting = [(1-(_setting select 0)),
					(1-(_setting select 1)),
					(1-(_setting select 2)),
					(1-(_setting select 3)),
					(1-(_setting select 4)),
					(1-(_setting select 5)),
					(1-(_setting select 6)),
					(1-(_setting select 7)),
					(1-(_setting select 8)),
					(1-(_setting select 9)),
					_setting select 10];
	};
	default {
		private _r = (random 10);
		_str = "both";
		if (_r < 7.5) then {_str = "back";};
		if (_r < 5) then {_str = "front";};
		if (_r < 2.5) then {_str = "none";};
		_setting = [(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					(floor (random 2)),
					_str];
	};
};
_btr setVariable ["habar_set", _setting, true];
{_btr animate [_x,(_setting select _forEachIndex),true]}foreach ["crate_l1_unhide","crate_l2_unhide","crate_l3_unhide","crate_l4_unhide","crate_r1_unhide","crate_r2_unhide","crate_r3_unhide","crate_r4_unhide","water_1_unhide","water_2_unhide"];

switch (_setting select 10) do {
	case "front": {
		_btr animate ["wheel_1_unhide",0,true];
		_btr animate ["wheel_2_unhide",1,true];
	};
	case "back": {
		_btr animate ["wheel_1_unhide",1,true];
		_btr animate ["wheel_2_unhide",0,true];
	};
	case "both": {
		_btr animate ["wheel_1_unhide",0,true];
		_btr animate ["wheel_2_unhide",0,true];
	};
	default {
		_btr animate ["wheel_1_unhide",1,true];
		_btr animate ["wheel_2_unhide",1,true];
	};
};

//set attributes if in eden editor
if(is3DEN)then{
	//initializing after 1st frame
	_btr spawn {
		if(time isEqualTo 0)exitWith{};
		//diag_log format["set ed time: %1,frame %2 %3",time,diag_frameNo,is3DEN];
		private _attributeList = getArray (configFile >> "CfgVehicles" >> typeOf _this >> "rhs_randomizedHabar" );
		{
			_this set3DENAttribute [_x,_this animationPhase _x];
		}foreach _attributeList;
	};
};