/*
	rhsusf_fnc_stryker_unitInfo_m1134
	a: reyhard
*/
disableSerialization;

((_this # 0) displayctrl 10101) ctrlShow false;

((_this # 0) displayctrl 7001) ctrladdeventhandler ["draw",
{
	params["_ctrl"];
	private _display		= ctrlparent _ctrl;
	private _turretLock	= _display displayCtrl 10101;
	_turretLock ctrlShow ((cameraon animationSourcePhase "Mast_Folded") > 0);
}];