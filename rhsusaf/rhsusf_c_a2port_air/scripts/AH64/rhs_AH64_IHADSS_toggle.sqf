/*
	rhs_fnc_ah64_ihadss_toggle
	a: reyhard
*/

params["_vehicle"];

private _c			= uiNamespace getVariable "RHS_AH64_Main_Ctrl";
private _ihadss 	= _c displayCtrl 411;
private _mode 		= abs( ((getUserMFDvalue this) # 3) - 1);

_ihadss ctrlShow (_mode isEqualTo 1);

switch(getResolution # 4)do
{
	case (4/3): 	{_ihadss ctrlAnimateModel ["pnvs_4_3",1]};
	case (16/9): 	{_ihadss ctrlAnimateModel ["pnvs_16_9",1]};
	case (16/10): 	{_ihadss ctrlAnimateModel ["pnvs_16_10",1]};
	case (21/9): 	{_ihadss ctrlAnimateModel ["pnvs_21_9",1]};
	case (12/3): 	{_ihadss ctrlAnimateModel ["pnvs_12_3",1]};
	case (16/3): 	{_ihadss ctrlAnimateModel ["pnvs_16_3",1]};
	case (24/5): 	{_ihadss ctrlAnimateModel ["pnvs_24_5",1]};
	default
	{
		_ihadss ctrlAnimateModel ["pnvs_16_9",1];
	};
};

_vehicle setUserMFDvalue [3,_mode];

if(_mode isEqualTo 1)then
{
	// Add IHADSS actions

	// Add loop
	["rhs_ah64_ihadss_pfh", "onEachFrame", 
	{
		params["_ihadss"];
		
		_ihadss ctrlShow (cameraView isEqualTo "INTERNAL");

	},[_ihadss]] call BIS_fnc_addStackedEventHandler;


	// Do nothing if PiP is disabled
	if(!isPipEnabled)exitWith{};

	// Check if EH already exist. If yes, then remove it
	if( not ( (uiNameSpace getVariable ["rhs_ah64d_pnvs_eh",-1]) isEqualTo -1))then
	{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_ah64d_pnvs_eh"];
	};

	// Add key event handler
	_id = (findDisplay 46) displayAddEventHandler ["KeyUp",
	{
		// Perform actions only in internal view
		if(cameraView isEqualTo "INTERNAL")then
		{
			// Change zoom
			if(inputAction "nightvision" > 0)then
			{
				private _p			= call rhs_fnc_findPlayer;
				private _vehicle	= vehicle _p;
				private _videoFeedCam = _vehicle getVariable ["rhs_ah64_pnvscam",objNull];

				// Create new R2T source if none exist, otherwise terminate PNVS mode
				if(_videoFeedCam isEqualTo objNull)then
				{
					disableSerialization;

					private _c			= uiNamespace getVariable "RHS_AH64_Main_Ctrl";
					private _ihadss 	= _c displayCtrl 411;

					// Switch optics mode
					_ihadss ctrlAnimateModel ["IHADSS_Mode",1];

					// Create R2T window
					_videoFeedCam = "camera" camCreate [0,0,0];
					_videoFeedCam cameraEffect ["Internal", "Back", "rhs_r2t_pnvs"];
					_videoFeedCam attachTo [_vehicle, [0,0,0], "pnvs_pos"];

					_vehicle setVariable ["rhs_ah64_pnvscam",_videoFeedCam];
					_vehicle setUserMFDtext [0,"DTV"];
					_vehicle setUserMFDvalue [19,1];

					// Set TI view mode of R2T camera
					"rhs_r2t_pnvs" setPiPEffect [2];

					// Add loop
					["rhs_ah64_pnvsfeed_pfh", "onEachFrame", {
						params["_vehicle","_videoFeedCam","_camRestart"];

						// Destroy r2t camera on damage
						if(
							 ((_vehicle getHitPointDamage "Hit_Optic_PNVS")  isEqualTo 1) OR
							 ((_vehicle getHitPointDamage "HitAvionics")  isEqualTo 1)
						)exitWith
						{
							// Stop R2T operations after PNVS or cockpit instruments are destroyed
							if(!_camRestart)then
							{
								_videoFeedCam cameraeffect ["terminate","back","rhs_r2t_pnvs"];
								_this set [2,true];
							};
						};
						// Adjust R2T camera
						if(cameraView isEqualTo "INTERNAL")then
						{
							// Restart camera
							if(_camRestart)then
							{
								_videoFeedCam cameraeffect ["terminate","back","rhs_r2t_pnvs"];
								_videoFeedCam cameraEffect ["internal", "Back", "rhs_r2t_pnvs"];
								"rhs_r2t_pnvs" setPiPEffect [2];
								_this set [2,false];
							};

							// Adjust pilot camera target
							_vehicle setPilotCameraTarget AGLtoASL (positionCameraToWorld [0,0,-1+(screenToWorld [0.5,0.5] distance _vehicle)]);

							// Adjust zoom
							_videoFeedCam camSetFov (0.3/(([0.5,0.5] distance2D worldToScreen positionCameraToWorld [0,3,4]) * (getResolution # 5) / 2));

							// Adjust camera vector
							_dir = getPilotCameraDirection _vehicle;
							_videoFeedCam setVectorDirAndUp [
								_dir,
								_dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0]
							];
						}else
						{
							// Stop R2T operations when not in cockpit view
							if(!_camRestart)then
							{
								_videoFeedCam cameraeffect ["terminate","back","rhs_r2t_pnvs"];
								_this set [2,true];
							};
						};

					},[_vehicle,_videoFeedCam,false]] call BIS_fnc_addStackedEventHandler;
				}else
				{
					_videoFeedCam cameraeffect ["terminate","back","rhs_r2t_pnvs"];
					deleteVehicle _videoFeedCam;

					// Restart PNVS MFD value
					_vehicle setUserMFDvalue [19,0];

					// Unlock camera
					_vehicle setPilotCameraTarget objNull;

					disableSerialization;

					private _c			= uiNamespace getVariable "RHS_AH64_Main_Ctrl";
					private _ihadss 	= _c displayCtrl 411;
					//systemChat "change ihads";

					// Switch optics mode
					_ihadss ctrlAnimateModel ["IHADSS_Mode",0];
					// Remove R2T Each frame action
					["rhs_ah64_pnvsfeed_pfh", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
				};
			};
		};
	}];
	uiNameSpace setVariable ["rhs_ah64d_pnvs_eh",_id];
}else
{
	// Remove IHADSS actions
	["rhs_ah64_pnvsfeed_pfh", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	["rhs_ah64_ihadss_pfh", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	if( not ( (uiNameSpace getVariable ["rhs_ah64d_pnvs_eh",-1]) isEqualTo -1))then
	{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable ["rhs_ah64d_pnvs_eh",-1]];

		// Restart PNVS MFD value
		_vehicle setUserMFDvalue [19,0];

		// Deinitialize PNVS
		private _videoFeedCam = _vehicle getVariable ["rhs_ah64_pnvscam",objNull];
		_videoFeedCam cameraeffect ["terminate","back","rhs_r2t_pnvs"];
		_vehicle setPilotCameraTarget objNull;
		deleteVehicle _videoFeedCam;
		disableSerialization;

		private _c			= uiNamespace getVariable "RHS_AH64_Main_Ctrl";
		private _ihadss 	= _c displayCtrl 411;
		//systemChat "change ihads";

		// Switch optics mode
		_ihadss ctrlAnimateModel ["IHADSS_Mode",0];
	};
};

