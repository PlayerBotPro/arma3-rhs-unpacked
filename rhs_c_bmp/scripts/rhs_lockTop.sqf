/*
	disable all top (external) positions on designated vehicle

	i:
		_v - vehicle
		_p - lock status [bool]
	o:
		none

	a: reyhard
*/

params["_v","_p"];

private _arr = getArray (configFile >> "cfgVehicles" >> typeOf _v >> "rhs_topPositions");

_v setVariable ["rhs_topPositionsLocked",true,true];

{_v lockCargo [_x-1,_p] }foreach _arr;