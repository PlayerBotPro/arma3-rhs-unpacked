#include "defs.hpp"
params["_vehicle"];

while {alive _vehicle} do {
	sleep 10;
	if (
		(!isNull(assignedTarget _vehicle)) &&
		{(alive gunner _vehicle) && (!isPlayer (gunner _vehicle))} &&
		{!isNil((magazines _vehicle) select 0)}
	) then {
		[_vehicle, getPosASL (assignedTarget _vehicle)] call rhs_fnc_tu95_AI_launch;
	};
};