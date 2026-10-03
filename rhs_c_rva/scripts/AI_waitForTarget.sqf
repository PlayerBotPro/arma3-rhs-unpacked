#include "defs.hpp"
params["_tochka"];

while {alive _tochka} do {
	sleep 10;
	if (
		(!isNull(assignedTarget _tochka)) &&
		{(alive gunner _tochka) &&
		(!isPlayer(gunner _tochka))} &&
		{!isNil((magazines _tochka) select 0)}
	) then {
		[_tochka, getPosASL (assignedTarget _tochka)] call rhs_fnc_ss21_AI_launch;
	};
};