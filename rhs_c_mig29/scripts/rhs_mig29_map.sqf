/*
	GPS panel script & map managment script



	WP managment can be disabled in mission by typing 'RHS_WP_Managment_Disabled = true';

	a: reyhard
*/

private _vehicle = vehicle (call rhs_fnc_findPlayer);

// Set proper map picture
_vehicle setObjectTexture [20, getText (configFile >> "CfgWorlds" >> worldName >> "pictureMap")];

private _mapEventHandler = nil;

if(isNil "RHS_WP_Managment_Disabled")then
{
	// Create button for toggling on/off
	(findDisplay 12 ctrlCreate ["RHS_WP_Control_Checbkox",20002]);

	// Add stackable map event handler for adding waypoints
	_mapEventHandler = addMissionEventHandler ["MapSingleClick", {_this call rhs_fnc_wp_manager}];
};

// Main Loop
while{ not(isNull ( (uiNamespace getVariable "rhs_spo15_ctrl") displayCtrl 8655)) }do
//while{ player in _vehicle }do
{
	private _group			= group (driver _vehicle);
	private _waypointsList	= [];

	// Update position only in cockpit view when engine is turned on
	if ((isengineon _vehicle) && {cameraView isEqualTo "INTERNAL"}) then
	{
		//hint format[ "updated map %1",time];

		// Change coordinates to 0-1 range
		private _pos = getpos _vehicle;
		_pos resize 2;
		_pos = _pos apply {(round _x)/worldSize};

		// Update plane position on MFD
		_vehicle setUserMFDvalue [4,_pos select 0];
		_vehicle setUserMFDvalue [5,_pos select 1];

		// Update waypoints on MFD
		if(!(_waypointsList isEqualTo (waypoints _group)) OR visibleMap)then
		{
			_waypointsList = waypoints _group;

			private _i = 0;
			{
				private _pos = waypointPosition _x;
				_pos = _pos apply {(round _x)/worldSize};

				_vehicle setUserMFDvalue [6+_i,_pos select 0];
				_vehicle setUserMFDvalue [7+_i,_pos select 1];
				_i = _i + 2;
			}foreach _waypointsList;
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

