/*
if vehicle is bmd or btr then unload it crew from "turret" positions
hooked to danger fsm
*/
params["_u"];

private _v = vehicle _u;

if(behaviour _u != "COMBAT")exitWith{};
if((_v getVariable "Unload") == 1)exitWith{};

private _turrets = [];

// get turrets list to search for
switch(true)do{
	case (	_v isKindOf "rhs_bmd_base" OR
			_v isKindOf "rhs_bmd4_vdv" ) : 		{_turrets = [[0,0],[1],[2],[3],[4]] };
	case (	_v isKindOf "rhs_bmp3tank_base" ) : {_turrets = [[0,0],[1],[2]] };
	case (	_v isKindOf "rhs_bmp1tank_base" OR
			_v isKindOf "rhs_btr_base" ) : 		{_turrets = [[0,0]] };
	default {};
};

if(_turrets isEqualTo [])exitWith{};

//systemChat "unload";
_v setUnloadInCombat [true, true];

_v setVariable ["Unload",1];
//40 seconds delay
_v spawn {sleep 40;_this setVariable ["Unload",0];_this setUnloadInCombat [true,false];};