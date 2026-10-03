/*
	rhs_fnc_a29_mainLoop
	a: reyhard
*/

disableSerialization;

uiNameSpace setVariable ["RHS_A29_Main_Ctrl",_this # 0];

private _c			= uiNamespace getVariable "RHS_A29_Main_Ctrl";

// Initialize MFD screens
private _unit		= call rhs_fnc_findPlayer;
private _vehicle	= vehicle _unit;
[_vehicle,4,true] call rhs_fnc_a29_mfd_switch;
[_vehicle,5,true] call rhs_fnc_a29_mfd_switch;

private _mapEventHandler = nil;

if(isNil "RHS_WP_Managment_Disabled")then
{
	// Create button for toggling on/off
	(findDisplay 12 ctrlCreate ["RHS_WP_Control_Checbkox",20002]);

	// Add stackable map event handler for adding waypoints
	_mapEventHandler = addMissionEventHandler ["MapSingleClick", {_this call rhs_fnc_wp_manager}];
};

// loop handling different optics mode, weapon changing & transition fade effect
["rhs_a29_mainLoop", "onEachFrame", {

	params["_tick","_startTime","_mapEventHandler"];
	//hintSilent format["running for %1s",round(time-_startTime)];

	//remove EH
	if( isNull ( (uiNamespace getVariable "RHS_A29_Main_Ctrl") displayCtrl 8551))exitWith
	{
		["rhs_a29_mainLoop", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		uiNameSpace setVariable ["RHS_A29_Main_Ctrl",displayNull];
		//systemChat "removing EH";// Remove map event handler
		if(isNil "RHS_WP_Managment_Disabled")then
		{
			removeMissionEventHandler ["MapSingleClick", _mapEventHandler];
			ctrlDelete ((findDisplay 12) displayCtrl 20001);
			ctrlDelete ((findDisplay 12) displayCtrl 20002);
		};
	};

	// Define common variables -
	private _unit		= call rhs_fnc_findPlayer;
	private _vehicle	= vehicle _unit;
	private _grp		= group _unit;

	// Geting out from vehicle
	if(!(alive _vehicle))exitWith{};

	// Geting out from vehicle
	if(isNull objectParent _unit)exitWith{};

	// Calculate checks only when in cockpit mode
	if(cameraView isEqualTo "INTERNAL")then
	{
		if(time >= _tick)then
		{
			_this set [0,time+0.1];

			private _MFDValues = getUserMFDvalue _vehicle;

			private _speed				= speed _vehicle;
			private _currentWP			= currentWaypoint _grp;
			private _currentWP_Pos		= waypointPosition [_grp, _currentWP];
			private _currentWP_Distance	= _currentWP_Pos distance2d _vehicle;

			_vehicle setUserMFDValue [12, 
				count waypoints _grp,
				_vehicle animationSourcePhase "cabin"
			];

			if(_currentWP_Distance > 40)then
			{
				private _dirToWP = _vehicle getDir _currentWP_Pos;
				// Bearing to next waypoint
				_vehicle setUserMFDValue [10,_dirToWP];
				// Relative direction to next waypoint
				_vehicle setUserMFDValue [11,(getDir _vehicle) - _dirToWP];
				// Calculate time to WP only if speed is higher than 5m/s
				if(speed _vehicle >= 5)then
				{
					// Calculate time to WP
					private _timeToWaypoint = (_currentWP_Distance/_speed)/360;
					private _minutesToWaypoint = round(linearConversion [0,1,_timeToWaypoint-(floor _timeToWaypoint),0,60,true]);
					if(_minutesToWaypoint < 10)then
					{
						_minutesToWaypoint = format["0%1",_minutesToWaypoint];
					};
					_vehicle setUserMFDText [1,format["%1:%2",(floor _timeToWaypoint),_minutesToWaypoint]];
				}else
				{
					_vehicle setUserMFDText [1,"--:--"];
				};
			};
		};
	};

	// Damage functions
	private _tadsDamage		= _vehicle getHitPointDamage "Hit_Optic_FLIR";

	if(_tadsDamage isEqualTo 1)then
	{
		_vehicle enableVehicleSensor ["IRSensorComponent",false];
		_vehicle enableVehicleSensor ["VisualSensorComponent",false];
	};
},[time,time,_mapEventHandler]] call BIS_fnc_addStackedEventHandler;
/*