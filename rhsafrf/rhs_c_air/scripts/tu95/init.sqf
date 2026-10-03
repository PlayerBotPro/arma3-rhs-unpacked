#include "defs.hpp"
#include "defs_ui.hpp"
params["_vehicle"];

if (local _vehicle) then {
	_target = [0,0,0];
	vehset(target,_target);
	_vehicle spawn rhs_fnc_tu95_AI_waitForTarget;
};


