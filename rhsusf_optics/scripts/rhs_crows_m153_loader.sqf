/*
	rhsusf_fnc_crows_m153_loader
	a: reyhard
*/
disableSerialization;

uiNameSpace setVariable ["RHS_CROWS_M153_Ctrl",_this # 0];

((_this # 0) displayctrl 6001) ctrladdeventhandler ["draw",{_this call rhsusf_fnc_crows_m153_handler}];