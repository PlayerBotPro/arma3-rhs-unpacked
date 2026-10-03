private ["_vehicle"];

_vehicle = _this select 0;


_vehicle addEventHandler ["getout",{_this execVM "\blx_M1117\script\getout.sqf"}];

//_vehicle addEventHandler ["hit",{_this execVM "\blx_M1117\script\hit.sqf"}];