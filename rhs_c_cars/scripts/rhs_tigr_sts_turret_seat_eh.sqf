/*
	a: reyhard
	seat switch handler for tigr sts gun handling
*/

params["_v","_u",["_u2",objNull]];

if(_u == _v turretUnit [0])then{ [_v,_u,[0]] call rhs_fnc_tigr_sts_turret};
if(_u == _v turretUnit [1])then{ [_v,_u,[1]] call rhs_fnc_tigr_sts_turret};
if(not( isNull _u2))then{
	if(_u2 == _v turretUnit [0])then{ [_v,_u2,[0]] call rhs_fnc_tigr_sts_turret};
	if(_u2 == _v turretUnit [1])then{ [_v,_u2,[1]] call rhs_fnc_tigr_sts_turret};
};