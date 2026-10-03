/*
	rhsusf_fnc_matv_unitInfo
	a: reyhard
*/
disableSerialization;

((_this # 0) displayctrl 7001) ctrladdeventhandler ["draw",
{
	// Exit if camera is not internal
	if(!(cameraView isEqualTo "INTERNAL"))exitWith{};

	private _vehicle = vehicle (call rhs_fnc_findPlayer);
	// Exit if vehicle is not local - it might not work when driver is AI but I guess it's necessary optimization
	_vehicle setUserMFDValue [2,_vehicle animationSourcePhase "gear"];
	if(!local _vehicle)exitWith{};

	[_vehicle] call rhsusf_fnc_bft_update;
	private _lastPos = _vehicle getVariable ["rhs_vehicle_lastPos",[0,0,0]];
	private _travelDist = _vehicle distance _lastPos;
	// Update every 1/100 of mile
	if(_travelDist > 160.9344)then{
		_vehicle setUserMFDValue [1,(getUserMFDValue _vehicle # 1)+_travelDist*0.000621371192];
		_vehicle setVariable ["rhs_vehicle_lastPos",getpos _vehicle,true];
	}
	 
}];