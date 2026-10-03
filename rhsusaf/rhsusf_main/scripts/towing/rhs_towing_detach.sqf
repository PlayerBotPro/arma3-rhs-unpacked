/*
	rhs_fnc_towing_detach

	a: reyhard
*/
params["_vehicle"];

private _towedVehicle = _vehicle getVariable ["rhs_towing_towedVehicle",objNull];

// Handle situation when towing vehicle is passed as an argument
if(_towedVehicle isEqualTo objNull)then{
	_towedVehicle = _vehicle;
	_vehicle = _towedVehicle getVariable ["rhs_towing_fakeVehicle",objNull];
};

// Vehicle doesn't exist
if(_vehicle isEqualTo objNull)exitWith{};

{ropeDestroy (_vehicle getVariable [_x,objNull])}foreach ["rhs_towing_rope1","rhs_towing_rope2","rhs_towing_rope3"];

[_vehicle,_towedVehicle] spawn
{
	params["_vehicle","_towedVehicle"];

	sleep 1;

	private _animationList = getArray (configOf _vehicle >> "RHS_TowingSystem" >> "Cargo" >> "rhs_animationsOnDetach");
	for "_i" from 0 to ((count _animationList)-1)  step 2 do
	{
		_towedVehicle animateSource [_animationList # _i, _animationList # (_i + 1)];
	};
	deleteVehicle _vehicle;
	[_towedVehicle,false] remoteExecCall ["hideObjectGlobal",2];
	_towedVehicle setVariable ["rhs_towing_towingVehicle",nil,true];
	_towedVehicle setVariable ["rhs_towing_fakeVehicle",nil,true];
};
