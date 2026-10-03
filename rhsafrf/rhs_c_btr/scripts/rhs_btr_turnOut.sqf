/*
	hatch handler
	a: reyhard
*/

params["_v","_h","_t","_m"];

private _p = (call rhs_fnc_findPlayer);

titleCut ["", "black in", 7];

if(_m isEqualTo 0)then{
	[_v,[_h,1]] remoteExecCall ['animateDoor'];
	sleep 0.5;
	_p action ['moveToTurret', _v, _t select 1];
	[_v,_t # 0, true] call rhs_fnc_setTurretLock;
}else{
	_p action ['moveToTurret', _v, _t select 0];
	[_v,_t # 0, false] call rhs_fnc_setTurretLock;
	[_v,[_h,0]] remoteExecCall ['animateDoor'];
};
