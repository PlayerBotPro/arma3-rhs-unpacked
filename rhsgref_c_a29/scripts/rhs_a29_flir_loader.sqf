/*
	rhs_fnc_a29_flir_loader
	a: reyhard
*/
disableSerialization;

uiNameSpace setVariable ["RHS_a29_flir_Ctrl",_this # 0];

// Add camera handler
((_this # 0) displayctrl 6001) ctrladdeventhandler ["draw",{_this call rhs_fnc_a29_flir_handler}];

// Create postprocessing effects
private _RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1400];
_RHS_TV_ppEffect ppEffectAdjust [0.25,1,1,0.45,1, false];
_RHS_TV_ppEffect ppEffectCommit 0;
private _RHS_TVBW_ppEffect = ppEffectCreate ["colorCorrections", 1500];
_RHS_TVBW_ppEffect ppEffectAdjust [1,1,0,[1,1,1,0],[1,1,1,0.4],[0.55,0.15,0.55,1]];
_RHS_TVBW_ppEffect ppEffectCommit 0;

["rhs_a29_camera_handler", "onEachFrame", {
	params["_RHS_TV_ppEffect","_RHS_TVBW_ppEffect","_cameraStatus","_lastMode"];

	// deinitialization part
	if(  ctrlText ( (uiNamespace getVariable "RHS_a29_flir_Ctrl")  displayCtrl 1000) != "RHS_A29_FLIRCAM" )exitWith
	{
		ppEffectDestroy _RHS_TV_ppEffect;
		ppEffectDestroy _RHS_TVBW_ppEffect;
		["rhs_a29_camera_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};

	// Handle BW post processing
	_cameraViewIsGunner = (cameraView == "gunner");
	if(_cameraStatus isEqualTo _cameraViewIsGunner)then
	{
		{_x ppEffectEnable (_cameraViewIsGunner)}foreach [_RHS_TV_ppEffect,_RHS_TVBW_ppEffect];
	};
	_this set [2,_cameraViewIsGunner];

	// Handle camera quirk fix
	if(_cameraViewIsGunner)then
	{
		_currentMode = ctrlText ((uiNamespace getVariable "RHS_a29_flir_Ctrl") displayCtrl 154);
		if(_lastMode != _currentMode && {_lastMode isEqualTo "FREE 1x"})then
		{
			cameraOn lockCameraTo [AGLtoASL (positionCameraToWorld [0,0,5000]),[0]];
			cameraOn spawn {sleep 0.1;_this lockCameraTo [objNull,[0]]};
		};
		_this set [3,_currentMode];
	};

},[_RHS_TV_ppEffect,_RHS_TVBW_ppEffect,true]] call BIS_fnc_addStackedEventHandler;
