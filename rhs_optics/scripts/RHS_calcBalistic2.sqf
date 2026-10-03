/*
distance
angle
speed
max interations
air friction
step simulation
weapon angle
*/
params["_d","_a","_s","_m","_aF","_sS","_w"];
private _p = [0,0,0];
private _pp = _p;
private _pT=
[
	(cos _w),
	(sin _w),
	0
] vectorMultiply _d;
private _v=
[
	(cos _a),
	(sin _a),
	0
] vectorMultiply _s;
//diag_log format ["%1", _v];

for "_i" from 1 to _m do
{
	_pp = _p;
	_vM = (vectorMagnitude _v)* _aF;

	_p= _p vectorAdd (_v vectorMultiply (_sS*0.5));
	_v=_v vectorAdd (
	[
		((_v select 0) * _vM),
		((_v select 1) * _vM - 9.81),
		0
	] vectorMultiply _sS);
	_p= _p vectorAdd (_v vectorMultiply (_sS*0.5));

	if ( (_p select 0) > (_pT select 0)) exitWith {};

};

_c = ((_pT select 0) - (_pp select 0)) / ((_p select 0) - (_pp select 0));
_p = ((_pp select 1) + ((_p select 1) - (_pp select 1)) * _c) - (_pt select 1);

_p