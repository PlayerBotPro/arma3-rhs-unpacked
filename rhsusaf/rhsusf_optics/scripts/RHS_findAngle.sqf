/*

distance
angle
speed
timeToLive
air friction
step simulation
*/


private ["_d", "_s", "_aF", "_t", "_sS", "_a", "_p", "_v", "_vM"];

_d  = _this select 0;
_m  = _this select 1;
_a  = _this select 2;
_v  = _this select 3;
//generic target height used
_h  = _this select 4;

[_v,_d] call rhsusf_fnc_gunOffset;

if(_d==0)exitWith{};

_w  = currentWeapon _v;
_s  = getNumber (configFile >> "CfgMagazines" >> _m >> "initSpeed");
_sW = getNumber (configFile >> "CfgWeapons" >> _w >> "initSpeed");
_t  = getNumber (configFile >> "CfgAmmo" >> _a >> "timeToLive");
_aF = getNumber (configFile >> "CfgAmmo" >> _a >> "airFriction");
_sS = getNumber (configFile >> "CfgAmmo" >> _a >> "simulationStep");

//calculating speed if new initSpeed in cfgWeapons is present
if(_sW>0)then{
	_s=_sw;
}else{
	if(_sW<0)then{
		_s=_s*(abs(_sW));
	};
};


_angle1 = 0;
_angle2 = 30;

_f1 = ([_d,0,_s,_t,_aF,_sS,_h]) call rhsusf_fnc_calcBalistic;
//if(_f1>0)then{_angle1=_t;}else{_angle2=_t};

/*
need interpolation for shells with high simulationStep

*/
//diag_log format["%1, %2, %3, %4, %5,%6,%7",_d,_angle2,_s,_t,_aF,_sS,_h];
//player globalChat format["%1",_f1];

//if ((abs _f1) <= 0.1) exitWith {0};
while {( abs(_f1 select 1) ) > 0.1} do
{
	_f2 = ([_d,_angle2,_s,_t,_aF,_sS,_h]) call rhsusf_fnc_calcBalistic;

	_temp = _angle2-(_f2 select 1)*(_angle2-_angle1)/( (_f2 select 1)-(_f1 select 1) );

	_angle1 = _angle2;
	_angle2 = _temp;

	_f1 = _f2;
};
//player globalChat format["%1, h: %2 _deg: %3, angle1=%4",_f1,_h,_deg, _angle1];

_angle1