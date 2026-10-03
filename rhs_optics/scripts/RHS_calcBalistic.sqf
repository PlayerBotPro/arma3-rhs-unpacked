/*
distance
angle
speed
timeToLive
air friction
step simulation
*/
params["_d","_a","_s","_m","_aF","_sS","_h"];
private _p =[0,_h,0];
private _v=
[
	(cos _a),
	(sin _a),
	0
] vectorMultiply _s;
//diag_log format ["%1", _v];

for "_i" from 1 to _m do
{
	_vM = (vectorMagnitude _v)* _aF;

	_v=_v vectorAdd (
	[
		((_v select 0) * _vM),
		((_v select 1) * _vM - 9.81),
		0
	] vectorMultiply _sS);
	_p= _p vectorAdd (_v vectorMultiply _sS);

	if ( (_p select 0) > _d) exitWith {};
};

(_p select 1)