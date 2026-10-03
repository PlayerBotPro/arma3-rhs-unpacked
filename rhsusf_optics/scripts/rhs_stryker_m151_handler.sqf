/*
	rhsusf_fnc_stryker_m151_handler

	a: reyhard
*/
params["_ctrl"];

disableserialization;
// define all controls
private _display		= ctrlparent _ctrl;
private _opticMode		= toLower (ctrlText (_display displayCtrl 154));
private _zeroing		= (ctrlText (_display displayCtrl 168));
private _zeroingText	= _display displayCtrl 1000;
private _ctrlGroup 		= _display displayCtrl 170;

//hintSilent format["time2: %1\n%2\n%3",time,_this,_ctrlGroup];

// Update Text
_zeroingText ctrlSetText _zeroing;
cameraon setUserMFDtext [1,_opticMode];