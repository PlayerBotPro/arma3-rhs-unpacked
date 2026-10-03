/*

distance
angle
speed
timeToLive
air friction
step simulation
*/
params["_d","_m","_a","_v","_h",["_c",2]];

[_v,_d,_c] call rhs_fnc_gunOffset;

if(_d==0)exitWith{};

private _w  = currentWeapon _v;
private _s  = getNumber (configFile >> "CfgMagazines" >> _m >> "initSpeed");
private _sW = getNumber (configFile >> "CfgWeapons" >> _w >> "initSpeed");
private _t  = getNumber (configFile >> "CfgAmmo" >> _a >> "timeToLive");
private _aF = getNumber (configFile >> "CfgAmmo" >> _a >> "airFriction");
private _sS = getNumber (configFile >> "CfgAmmo" >> _a >> "simulationStep");
private _maxIT = ((floor (_t / _sS)) + 1);

//calculating speed if new initSpeed in cfgWeapons is present
if(_sW>0)then{
	_s=_sw;
}else{
	if(_sW<0)then{
		_s=_s*(abs(_sW));
	};
};

private _angle1 = 0;
private _angle2 = 30;

_f1 = ([_d,0,_s,_maxIT,_aF,_sS,_h]) call rhs_fnc_calcBalistic;

while { abs(_f1) > 0.1} do
{
	_f2 = ([_d,_angle2,_s,_maxIT,_aF,_sS,_h]) call rhs_fnc_calcBalistic;

	_temp = _angle2-_f2*(_angle2-_angle1)/(_f2-_f1 );

	_angle1 = _angle2;
	_angle2 = _temp;

	_f1 = _f2;
};
//player globalChat format["%1, h: %2 _deg: %3, angle1=%4",_f1,_h,_deg, _angle1];

_angle1