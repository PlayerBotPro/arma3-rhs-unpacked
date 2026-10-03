/*
a: reyhard
execution:
[[(_this select 0),true/false],'rhs_fnc_m1_hatch',(_this select 0)] call BIS_fnc_MP;

locking commander seat while M2 is used
script should fix potential issues with lock locality.

*/
params["_v","","","_t"];


if(_t isEqualTo [1])then{
	[_v,[0],false] call rhs_fnc_setTurretLock;
	_v animateDoor ["hatch_gunner",0];
};
if(_t isEqualTo [2])then{
	[_v,[0,0],false] call rhs_fnc_setTurretLock;
	_v animateDoor ["hatch_commander",0];
};