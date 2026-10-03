private ["_v","_w","_p"];

_v = _this select 0;
_w = _this select 1;

if !((_v ammo _w) isEqualTo 1)then{
	_p = _this select 6;
	_p setpos  (_v modelToWorld (_v selectionPosition "rocket_1"));
};
