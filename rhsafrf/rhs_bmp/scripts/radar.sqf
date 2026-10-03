#include "defs.hpp"
_veh = _this select 0;

_maxRange = 3000;
_cone = 30;


_filterAllObjects = {
	_weapvector = _veh weaponDirection (currentMuzzle player);
	_ppos =  getPosASL vehicle(player);
	_cdir = (360+((_weapvector select 0)atan2(_weapvector select 1)))%360;
	_allObjects = (allMissionObjects "LandVehicle")+(allMissionObjects "CAManBase")+(allMissionObjects "Plane")+(allMissionObjects "Helicopter")+(allMissionObjects "Ship")+(allMissionObjects "WarfareBBaseStructure");
	_filteredObjects = [];
	{
		_tpos = getPosASL _x;
		_ndir = (360+((_tpos select 0) - (_ppos select 0))atan2((_tpos select 1) - (_ppos select 1)))%360;
		if (((_veh distance _x)<_maxRange)&&abs(_cdir-_ndir)%180<_cone) then {
			_filteredObjects = _filteredObjects + [_x];
		};
	} forEach _allObjects;
	_filteredObjects
};
_role = str(assignedVehicleRole player);
GVAR(radar_enabled) = true;
_nextScanTime = time;
while {(_role == str(assignedVehicleRole player))&&alive(player)&&GVAR(radar_enabled)} do {
	_objects = if (time>=_nextScanTime) then {
		_nextScanTime = time;(call _filterAllObjects)
	}else{_objects};
	_ppos =  getPosASL vehicle(player);
	{
		_tpos = getPosASL _x;
		_dist = _veh distance _x;
		_line = switch true do {
			case (_dist>2000): {2};
			case (_dist>1000): {1};
			default {0};
		};
	} forEach _objects;
};
