private ["_vehicle","_damage"];

_vehicle = _this select 0;

_damage = _this select 2;

hint format["result: %1", getdammage _vehicle];