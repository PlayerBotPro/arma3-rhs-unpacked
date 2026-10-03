/*
	rhsusf_fnc_stryker_unitInfo
	a: reyhard
*/
disableSerialization;

//uiNameSpace setVariable ["RHS_Stryker_UnitInfo_Ctrl",_this # 0];

((_this # 0) displayctrl 7001) ctrladdeventhandler ["draw",
{
	// Exit if camera is not internal
	if(!(cameraView isEqualTo "INTERNAL"))exitWith{};

	private _vehicle = vehicle (call rhs_fnc_findPlayer);
	// Exit if vehicle is not local - it might not work when driver is AI but I guess it's necessary optimization
	if(!local _vehicle)exitWith{};

	[_vehicle] call rhsusf_fnc_bft_update;
}];