/*
	rhs_fnc_stryker_seatSwitched

	Turn in units if they turned out - workaround for FFV turrets bug

	a: reyhard
*/
params ["_vehicle", "_unit"];

if(isTurnedOut _unit)then
{
	_unit action ["turnin",_vehicle];
};