/*
	hatch handler
	a: reyhard
*/

params["_v","_m"];

private _p = (call rhs_fnc_findPlayer);

if(_m == 0)then{
	if(!(isTurnedOut _p))then{
		[_v,['hatchG',1]] remoteExecCall ['animateDoor'];
	};
	_p action ['moveToTurret', _v, [0,0]];
	[_v,[0],true] call rhs_fnc_setTurretLock;
}else{
	_p action ['moveToTurret', _v, [0]];
	[_v,[0],false] call rhs_fnc_setTurretLock;
	if(_v doorPhase 'hatchG' >0)then{
		[_v,['hatchG',0]] remoteExecCall ['animateDoor'];
	};
};

titleCut ["", "black in", 2];
