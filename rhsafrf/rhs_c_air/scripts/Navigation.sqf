params ["_Plane"];

private _EmptyObject = "Land_HelipadEmpty_F" createVehicleLocal getpos _Plane;
private _WPPosWorldOld = [0,0,0];

private _DistanceWp = worldSize / 10;

private _mapEventHandler = nil;

if(isNil "RHS_WP_Managment_Disabled")then
{
	// Create button for toggling on/off 
	(findDisplay 12 ctrlCreate ["RHS_WP_Control_Checbkox",20002]);	

	// Add stackable map event handler for adding waypoints
	_mapEventHandler = addMissionEventHandler ["MapSingleClick", {_this call rhs_fnc_wp_manager}];
};
//-----------------------------------------------START LOOP--------------------------------------------
while {((call rhs_fnc_findPlayer) in _Plane)} do
{

	//-----------------------------------------------Check player & engine---------------------------------
	private _Pilot = driver _Plane;
	if (isengineon _plane && {cameraView isEqualTo "INTERNAL"} && {_plane animationPhase "display2_switch" != 0}) then
	{

		//-----------------------------------------------EMPTY OBJECT POSITION AND VECTOR----------------------
		_EmptyObject setposASL [(getpos _Plane select 0), (getpos _Plane select 1), 0];
		_EmptyObject setVectorDirAndUp [[0,1,0],[0,0,1]];
		_EmptyObject setDir (getdir _Plane);

		//-----------------------------------------------WAIPOINT POSITION IN WORLD----------------------------
		private _WPindex = currentWaypoint (group _pilot);
		private _WPPosWorld = (waypointPosition [(group _Pilot),_WPindex]);

		//-----------------------------------------------FIND FAKE WAYPOINTS-----------------------------------
		if (format ["%1",_WPPosWorld] == "[0,0,0]") then {
			if (_plane animationPhase "display2_select_wp" != 0) then {
				_plane animate ["Display2_wp1_m",0];
				_plane animate ["display2_select_wp",0];
				_plane setObjectTexture [10, "\rhsafrf\addons\rhs_c_air\scripts\data\empty_co.paa"];
			};
		}
		else
		{
			//-----------------------------------------------START WAYPOINT ANIMATIONS----------------------------
			_plane animate ["display2_select_wp",1];
			//hint "find waypoints";

			//-----------------------------------------------CHECK WAYPOINT TYPE----------------------------------
			if (format ["%1",_WPPosWorld] != format ["%1",_WPPosWorldOld]) then {
				//hint "new waypoint!";
				_WPPosWorldOld = _WPPosWorld;
				_WPType = switch (waypointType [(group _pilot),_WPindex]) do {
					case "DESTROY": {_plane setObjectTexture [10, "\rhsafrf\addons\rhs_c_air\scripts\data\WP_destroy_ca.paa"];};
					case "MOVE": {_plane setObjectTexture [10, "\rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"];};
					case "GETOUT": {_plane setObjectTexture [10, "\rhsafrf\addons\rhs_c_air\scripts\data\WP_landing_ca.paa"];};
					case "UNLOAD": {_plane setObjectTexture [10, "\rhsafrf\addons\rhs_c_air\scripts\data\WP_landing_ca.paa"];};
				};
			};

			//-----------------------------------------------MATH-------------------------------------------------
			private _WPPos = _EmptyObject worldToModel _WPPosWorld;
			private _VectorCos = [0,1,0] vectorcos [_WPPos select 0,_WPPos select 1,0];
			private _VectorDirection = (acos _VectorCos);
			if (_plane distance _WPPosWorld > _DistanceWp) then {
					_plane animate ["Display2_wp1_m",abs(1/_VectorCos)];
				}
			else
				{
					_Distance2WP = _plane distance _WPPosWorld;
					_plane animate ["Display2_wp1_m",abs(_Distance2WP/_DistanceWp)];
				};
			if ((_WPPos select 0) < 0) then {
			_VectorDirection = -(_VectorDirection);
			};
			_plane animate ["Display2_wp1_rot",_VectorDirection];
			_plane animate ["Display2_wp2_rot",-rad (_VectorDirection)];

			//hintsilent format ["Waypoint index = %1\n Position waypoint = %2\n Vector cos=%3\n Vector direction = %4",_WPindex, _WPPos, _VectorCos, _VectorDirection];
		};
	};
	sleep 0.1;
};

// Remove map event handler
if(isNil "RHS_WP_Managment_Disabled")then
{
	removeMissionEventHandler ["MapSingleClick", _mapEventHandler];
	ctrlDelete ((findDisplay 12) displayCtrl 20001);
	ctrlDelete ((findDisplay 12) displayCtrl 20002);
};

exit;