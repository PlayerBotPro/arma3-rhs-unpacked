/*
	Mapclick waypoint manager

	i:      
		units:	Array 		- leader selected units, same as groupSelectedUnits (same as _units param)
		pos: 	Array 		- world Position3D of the click in format [x,y,0] (same as _pos param)
		alt: 	Boolean 	- true if Alt key was pressed (same as _alt param)
		shift: 	Boolean 	- true if Shift key was pressed (same as _shift param)
	o:
		none

	a: reyhard
*/
params["_units","_pos","_alt","_shift"];

private _vehicle    = vehicle (call rhs_fnc_findPlayer);
private _group		= group (call rhs_fnc_findPlayer);

// If waypoint managment checkbox is on, then try to do some magic on map click
if( _vehicle getVariable ["RHS_WP_Manage",false])then
{
	// Store last map click position 
	_vehicle setVariable ["RHS_WP_LastClick",_pos];
	//systemChat format["mapclick %1, %2",time,call RHS_fnc_wp_find];

	// If waypoint was found withing 300m range then create context menu, otherwise add waypoint
	if( (call RHS_fnc_wp_find) isEqualTo [grpNull,-1] ) then
	{
		//systemChat "add waypoint";
		_group addWaypoint [_pos,0];
	}else{
		//systemChat "change waypoint";
		
		disableSerialization;
		private _wpCtrlGrp =  (findDisplay 12 ctrlCreate ["RHS_WP_Control_Group", 20001]);
		_wpCtrlGrp ctrlSetPosition getMousePosition;
		_wpCtrlGrp ctrlCommit 0;
	};
};