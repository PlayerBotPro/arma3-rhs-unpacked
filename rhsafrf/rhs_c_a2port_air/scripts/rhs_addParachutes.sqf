/*
	rhs_fnc_addParachutes
	Another AI ejection workaround. Apparently there is code in engine (planeOrHeli.cpp) which prevents AI from ejecting if they don't have a parachute so they are stuck in get out sequence without triggering get out EH

	_vehicle - vehicle

	a: reyhard
*/

params["_vehicle"];

{
	// Run only for local, non player units without backpack
	if(
		(local _x) && 
		!(_x call rhs_fnc_isPlayer) &&
		(backpack _x == "") &&
		((_vehicle getCargoIndex _x) isEqualTo -1)
	)then
	{
		_x addBackpack "B_Parachute";
	};
}foreach (crew _vehicle);