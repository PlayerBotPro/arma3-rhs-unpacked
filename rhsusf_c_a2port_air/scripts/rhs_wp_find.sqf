/*
	Find & return waypoint in 300m radius from last map click
	
	i: none
	o: waypoint [in waypoint format]
	
	a: reyhard
*/
private _return		= [];
private _vehicle	= vehicle (call rhs_fnc_findPlayer);
private _group		= group (call rhs_fnc_findPlayer);
private _pos		= _vehicle getVariable ["RHS_WP_LastClick",[0,0,0]];

// find a waypoint in 300m range from mapclick
{
	if((waypointPosition _x) distance _pos < 300)exitWith{
		_return = _x;
		//systemChat "found";
	};
}foreach (waypoints _group);
_return