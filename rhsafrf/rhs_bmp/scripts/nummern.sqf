//Script based on DKM Script
private ["_nr","_i"];

_this = _this select 0;
_nr = (((getpos _this select 0) + (getpos _this select 1)*3)Mod 1000)-1;
_nr = _nr - (_nr Mod 1);
_i = _nr Mod 10;
_this setobjecttexture [0, format ["\RHS_BMP1\num\0%1.paa", _i]];
_i = ((_nr - _i)/10) Mod 10;
_this setobjecttexture [1, format ["\RHS_BMP1\num\0%1.paa", _i]] ;
_i = (_nr - _nr Mod 100)/100;
_this setobjecttexture [2, format ["\RHS_BMP1\num\0%1.paa", _i]];