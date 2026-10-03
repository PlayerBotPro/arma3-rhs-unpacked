/*
	CTD in eden workaround
	preloading ejection seat

	i:
		_seat - type of ejection seat to preload

	a: reyhard
*/
params["_seat"];

// get array of already preloaded items
private _array = uiNamespace getVariable ["rhs_seat_preload",[]];

// proceed if seat wasn't preloaded yet
if (! (_seat in _array) ) then
{
	// update array
	uiNamespace setVariable ["rhs_seat_preload",_array + [_seat]];
	// create seat & delete it after 1 second
	private _test = _seat createVehicleLocal [1110,1110,1110];
	deleteVehicle _test;
};