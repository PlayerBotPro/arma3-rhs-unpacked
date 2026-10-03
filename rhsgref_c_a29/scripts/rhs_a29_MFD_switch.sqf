/*
rhs_fnc_a29_mfd_switch
a: reyhard
*/

params
[
	"_vehicle",
	"_mfd",
	["_init",false,[true]]		// Initialize screens if _init is true
];

private _unit				= call rhs_fnc_findPlayer;
private _mfdTextureIndex	= -1;
private _mfdCheck 			= [4,5];
private _emptyScreen 		= "";

// Driver
if((driver _vehicle) isEqualTo _unit)then
{
	switch(_mfd)do
	{
		case 4: {_mfdTextureIndex = 4;};
		case 5: {_mfdTextureIndex = 5;};
	};
}else{
// Gunner
	switch(_mfd)do
	{
		case 4: {_mfdTextureIndex = 6;_mfd = 6;};
		case 5: {_mfdTextureIndex = 7;_mfd = 7;};
	};
	_mfdCheck = [6,7];
};

private _destroyCam =
{
	params["_vehicle"];

	_videoFeedCam = _vehicle getVariable ["rhs_a29_cam",objNull];
	_videoFeedCam cameraeffect ["terminate","back"];
	camDestroy _videoFeedCam;
	_videoFeedCam setVariable ["rhs_a29_cam",nil];
	// Remove Event Handlers
	(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable ["rhs_a29_videoKey_eh",-1]];
	["rhs_a29_videoFeed_pfh", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};

private _addNavigationKeys =
{
	// Add range key event handler - shared one with navigation page
	_id = (findDisplay 46) displayAddEventHandler ["KeyUp",
	{
		if(cameraView isEqualTo "INTERNAL")then
		{
			if(inputAction "NextModeRightVehicleDisplay" > 0)then
			{
				private _player		= call rhs_fnc_findPlayer;
				private _vehicle	= vehicle _player;

				// Nav Range
				private _mfd = getUserMFDValue _vehicle # 9;
				private _ranges = [1,2,4,6,8,10,12,16,24];
				_value = (_ranges + _ranges) # ((_ranges find _mfd) + 1);
				_vehicle setUserMFDvalue [9,_value];

				// Sensor range
				private _mfd = getUserMFDValue _vehicle # 25;
				private _ranges = [2000,4000,8000,12000,16000,18000,24000,32000];
				_value = (_ranges + _ranges) # ((_ranges find _mfd) + 1);
				_vehicle setUserMFDvalue [25,_value];
			};
			if(inputAction "NextModeLeftVehicleDisplay" > 0)then
			{
				private _player		= call rhs_fnc_findPlayer;
				private _vehicle	= vehicle _player;

				// Nav Range
				private _mfd = getUserMFDValue _vehicle # 9;
				private _ranges = [1,2,4,6,8,10,12,16,24];
				reverse _ranges;
				_value = (_ranges + _ranges) # ((_ranges find _mfd) + 1);
				_vehicle setUserMFDvalue [9,_value];

				// Sensor range
				private _mfd = getUserMFDValue _vehicle # 25;
				private _ranges = [2000,4000,8000,12000,16000,18000,24000,32000];
				reverse _ranges;
				_value = (_ranges + _ranges) # ((_ranges find _mfd) + 1);
				_vehicle setUserMFDvalue [25,_value];
			};
		};
	}];
	uiNameSpace setVariable ["rhs_a29_navigationKey_eh",_id];
};
private _removeNavigationKeys =
{
	// Check if EH already exist. If yes, then remove it
	if( not ( (uiNameSpace getVariable ["rhs_a29_navigationKey_eh",-1]) isEqualTo -1))then
	{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_a29_navigationKey_eh"];
	};
};
private _canRemoveKeys =
{
	if(
		(( _mfdValues # (_mfdCheck # 0) != 1) && ( _mfdValues # (_mfdCheck # 0) != 4)) &&
		(( _mfdValues # (_mfdCheck # 1) != 1) && ( _mfdValues # (_mfdCheck # 1) != 4))
	)then
	{
		call _removeNavigationKeys;
	};
};


// If _init is true, then next mode will be equal to current mode
private _nextMode =  ([[1,2,3,4,0],[0,1,2,3,4]] select _init) # ((getUserMFDvalue _vehicle) # _mfd);
_vehicle setUserMFDvalue [_mfd,_nextMode];
private _mfdValues = getUserMFDvalue _vehicle;

switch(_nextMode)do
{
	// Engine page
	case 0:
	{
		// Add loop
		["rhs_a29_enginePage_pfh", "onEachFrame", {

			params["_time","_vehicle","_vehicleDirPrev"];

			if(time >= _time)then
			{
				_this set [0,time+0.05];

				if(cameraView isEqualTo "INTERNAL")then
				{
					// Get Data
					private _vehicleBrake = _vehicle animationSourcePhase "speedbrake";
					// Update MFD value
					_vehicle setUserMFDvalue [8,_vehicleBrake];

					// Update parameter
					_this set [2,_vehicleDir];
				};
			};
		},[0,_vehicle,0]] call BIS_fnc_addStackedEventHandler;
		// Check if nav keys should be removed
		call _canRemoveKeys;
	};
	// Navigation page
	case 1:
	{
		// Deinitalization of flight page
		if(
			( _mfdValues # (_mfdCheck # 0) != 0) &&
			( _mfdValues # (_mfdCheck # 1) != 0)
		)then
		{
			["rhs_a29_enginePage_pfh", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};

		// Add loop
		["rhs_a29_navigationPage_pfh", "onEachFrame", {

			params["_time","_vehicle","_group"];

			if(time >= _time)then
			{
				_this set [0,time+0.1];

				if((isengineon _vehicle) && {cameraView isEqualTo "INTERNAL"})then
				{
					private _waypointsList = waypoints _group;
					// Get MFD scale - default value for A29 is 12 and we have to multiple it by 1000 so it's representing 12km
					private _mfdScale = ((getUserMFDValue _vehicle) # 9) * 1000;
					// 0.43 is size of outer ring - it's bit different from 0.57 in CIRCLE_BIG macro due to x/y ratio of screen
					private _scaleFactor = (0.43 *worldSize)/_mfdScale;
					// Get local _variables
					private _vehPos = getPosVisual _vehicle;
					private _vehDir = getDirVisual _vehicle;
					private _i = 0;
					{

						private _pos = waypointPosition _x;
						_pos = [_pos vectorDiff _vehPos,_vehDir] call BIS_fnc_rotateVector2D;
						_pos = _pos apply {((round _x)/worldSize)*_scaleFactor + 1};

						_vehicle setUserMFDvalue [26+_i,_pos # 0];
						_vehicle setUserMFDvalue [27+_i,_pos # 1];
						_i = _i + 2;
					}foreach _waypointsList;

					// Custom waypoint (created with Lshift+LMB)
					_customWP = customWaypointPosition;
					if(_customWP isEqualTo [])then
					{
						_vehicle setUserMFDvalue [46,0,0];
					}else{
						private _pos = _customWP;
						_pos = [_pos vectorDiff _vehPos,_vehDir] call BIS_fnc_rotateVector2D;
						_pos = _pos apply {((round _x)/worldSize)*_scaleFactor + 1};

						_vehicle setUserMFDvalue [46,_pos # 0];
						_vehicle setUserMFDvalue [47,_pos # 1];
					};
				};
			};
		},[0,_vehicle,group (driver _vehicle)]] call BIS_fnc_addStackedEventHandler;

		// Called navigation keys functions
		call _removeNavigationKeys;
		[] spawn _addNavigationKeys;
	};
	// Weapons page
	case 2:
	{
		// Deinitalization of navigation page
		if(
			( _mfdValues # (_mfdCheck # 0) != 1) &&
			( _mfdValues # (_mfdCheck # 1) != 1)
		)then
		{
			["rhs_a29_navigationPage_pfh", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
		// Check if nav keys should be removed
		call _canRemoveKeys;
	};
	// FLIR page
	case 3:
	{
		// Exit if picture in picture is disabled
		if(!isPipEnabled)exitWith{};
		// Todo - move to separate files as sort of modules
		// Apply texture - aspect ratio seems to be broken - need to use UVanim
		_vehicle setObjectTexture [_mfdTextureIndex,"#(argb,512,512,1)r2t(rhs_a29_videoFeed,1.33)"];

		// Try to retrieve existing cam
		_videoFeedCam = _vehicle getVariable ["rhs_a29_cam",objNull];
		// If it doesn't exist, create a new one
		if(_videoFeedCam isEqualTo objNull)then
		{
			// Create R2T window
			_videoFeedCam = "camera" camCreate [0,0,0];
			_videoFeedCam cameraeffect ["terminate","back"];
			_videoFeedCam cameraEffect ["Internal", "Back", "rhs_a29_videoFeed"];
			_videoFeedCam attachTo [_vehicle, [0,0,0], "TGPPos"];
			_videoFeedCam camSetFov (0.7/1);
		};

		_vehicle setVariable ["rhs_a29_cam",_videoFeedCam];
		_vehicle setUserMFDtext [0,"DTV"];

		// Set BW view mode of R2T camera
		"rhs_a29_videoFeed" setPiPEffect [3, 1,1,1,0.1,[1,1,1,0],[1,1,1,0.4],[0.55,0.15,0.55,1]];

		// Check if EH already exist. If yes, then remove it
		if( not ( (uiNameSpace getVariable ["rhs_a29_videoKey_eh",-1]) isEqualTo -1))then
		{
			(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_a29_videoKey_eh"];
		};

		// Add key event handler
		_id = (findDisplay 46) displayAddEventHandler ["KeyUp",
		{
			// Perform actions only in internal view
			if(cameraView isEqualTo "INTERNAL")then
			{
				// Change zoom
				if(inputAction "zeroingUp" > 0)then
				{
					private _player		= call rhs_fnc_findPlayer;
					private _vehicle	= vehicle _player;
					private _videoFeedCam = _vehicle getVariable ["rhs_a29_cam",objNull];
					private _zoom		= (getUserMFDvalue _vehicle) # 24;
					switch(_zoom)do
					{
						case 1:  { _zoom = 4; };
						case 4:  { _zoom = 8; };
						case 8:  { _zoom = 18; };
						case 18: { _zoom = 30; };
					};
					_videoFeedCam camSetFov (0.7/_zoom);
					_vehicle setUserMFDvalue [24,_zoom];
				};
				if(inputAction "zeroingDown" > 0)then
				{
					private _player		= call rhs_fnc_findPlayer;
					private _vehicle	= vehicle _player;
					private _videoFeedCam = _vehicle getVariable ["rhs_a29_cam",objNull];
					private _zoom		= (getUserMFDvalue _vehicle) # 24;
					switch(_zoom)do
					{
						case 30:  { _zoom = 18; };
						case 18: { _zoom = 8; };
						case 8:  { _zoom = 4; };
						case 4:  { _zoom = 1; };
					};
					_videoFeedCam camSetFov (0.7/_zoom);
					_vehicle setUserMFDvalue [24,_zoom];
				};
				// Change view mode
				if(inputAction "TransportNightVision" > 0)then
				{
					private _player		= call rhs_fnc_findPlayer;
					private _vehicle	= vehicle _player;
					private _mode		= (getUserMFDtext _vehicle) # 0;
					if(_mode isEqualTo "DTV")then
					{
						"rhs_a29_videoFeed" setPiPEffect [2];
						_vehicle setUserMFDtext [0,"FLIR"];
					}else{
						"rhs_a29_videoFeed" setPiPEffect [3, 1,1,1,0.1,[1,1,1,0],[1,1,1,0.4],[0.55,0.15,0.55,1]];
						_vehicle setUserMFDtext [0,"DTV"];
					};
				};
			};
		}];
		uiNameSpace setVariable ["rhs_a29_videoKey_eh",_id];

		// Add loop
		["rhs_a29_videoFeed_pfh", "onEachFrame", {
			params["_vehicle","_videoFeedCam","_unit","_prevMode","_prevZoom","_camRestart"];

			// Adjust R2T camera
			if(cameraView isEqualTo "INTERNAL")then
			{
				_vehicle setUserMFDValue [23, deg(_vehicle animationSourcePhase "MainGun")];
				// Adjust camera vector
				_dir =
					(_vehicle selectionPosition "TGPPos")
						vectorFromTo
					(_vehicle selectionPosition "TGPDir");
				_videoFeedCam setVectorDirAndUp [
					_dir,
					_dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0]
				];
			};

			// Check for camera changes
			if(cameraView isEqualTo "GUNNER")then
			{
				private _mode = currentVisionMode _unit;
				private _getZoom = {
					(
					[0.5,0.5]
					distance2D
					worldToScreen
					positionCameraToWorld
					[0,3,4]
					) * (
					getResolution
					select 5
					) / 2
				};
				private _zoom = (round(call _getZoom)) max 1;
				if(_mode != _prevMode)then
				{
					if(_mode isEqualTo 2)then
					{
						"rhs_a29_videoFeed" setPiPEffect [2];
						_vehicle setUserMFDtext [0,"FLIR"];
					}else{
						"rhs_a29_videoFeed" setPiPEffect [3, 1,1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1]];
						_vehicle setUserMFDtext [0,"DTV"];
					};
					_this set [3,_mode];
				};
				if(_zoom != _prevZoom)then
				{
					_videoFeedCam camSetFov (0.2/_zoom);
					_this set [4,_zoom];
					_vehicle setUserMFDvalue [24,_zoom];
				};
			};
		},[_vehicle,_videoFeedCam,_unit,0,0,false]] call BIS_fnc_addStackedEventHandler;

		// Check if nav keys should be removed
		call _canRemoveKeys;
	};
	// RWR Page
	case 4:
	{
		_vehicle setObjectTexture [_mfdTextureIndex,_emptyScreen];
		private _textures = getObjectTextures _vehicle;
		// Deinitalization of FLIR view
		if(
			( _textures # (_mfdCheck # 0) isEqualTo _emptyScreen) &&
			( _textures # (_mfdCheck # 1) isEqualTo _emptyScreen)
		)then
		{
			[_vehicle] call _destroyCam;
		};

		// Called navigation keys functions
		call _removeNavigationKeys;
		[] spawn _addNavigationKeys;
	};
};