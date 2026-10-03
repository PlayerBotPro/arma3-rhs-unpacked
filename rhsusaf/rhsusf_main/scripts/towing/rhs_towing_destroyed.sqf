/*
	rhs_fnc_towing_destroyed

	a: reyhard
*/
params["_fakeVehicle","_killer"];

//systemChat format["killer %1 %2",_killer,_killer == _fakeVehicle];
{
	// If vehicle was destroyed in result of collison, then we simply detach original object & leave it unscratched
	if(_killer isEqualTo _fakeVehicle)then{_x allowDamage false;_x spawn {sleep 2;_this allowDamage true};};

	// Unhide & detach object
	[_x,false] remoteExecCall ["hideObjectGlobal",2];
	detach _x;
	
}foreach (attachedObjects _fakeVehicle);

if(!local _fakeVehicle)exitWith{};
	private _towedVehicle = _fakeVehicle getVariable ["rhs_towing_towedVehicle",objNull];
_towedVehicle setVariable ["rhs_towing_towingVehicle",nil,true];
_towedVehicle setVariable ["rhs_towing_fakeVehicle",nil,true];
{ropeDestroy (_fakeVehicle getVariable [_x,objNull])}foreach ["rhs_towing_rope1","rhs_towing_rope2","rhs_towing_rope3"];
deleteVehicle _fakeVehicle;
