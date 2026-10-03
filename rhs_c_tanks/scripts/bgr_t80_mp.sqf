/*
Created by Vadim Shchemelinin aka badger
2010 St.Petersburg

edit by reyhard

Script for T-80 by RHS
*/

params["_t80"];

//actions
_FordingScr = _t80 addAction [localize "STR_RHS_T80_snorkel_on", "\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_snorkel.sqf", [1], 1, false, true, "",
	"(not isEngineOn _target)&&(driver _target == _this)&&(_target animationPhase 'snorkel_unhide' < 0.5)"];

_FordingScr = _t80 addAction [localize "STR_RHS_T80_snorkel_off", "\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_snorkel.sqf", [0], 1, false, true, "",
	"(not isEngineOn _target)&&(driver _target == _this)&&(_target animationPhase 'snorkel_hide' < 0.5)"];
