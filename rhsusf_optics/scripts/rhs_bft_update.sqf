/*
	RHSUSF_fnc_BFT_Update
	Update BFT animation & MFD sources
	a: reyhard
*/
params["_vehicle"];

// Refresh MFD every 0.1s
private _timeTick = _vehicle getVariable ["RHS_BFT_time",0];
if(_timeTick > time)exitWith{};
_vehicle setVariable ["RHS_BFT_time",time + 0.1];

	// Update scale
private _scale = (_vehicle animationSourcePhase "BFT_Map_Scale");
_vehicle setUserMFDValue [0,worldSize*_scale];
// Update position
private _vehPos = getPosVisual _vehicle;
private _vehDir = getDirVisual _vehicle;
private _pos =+ _vehPos;
_pos resize 2;
_pos = _pos apply {((round _x)/worldSize)/_scale*1000};
// Animate animation sources only when there is some change in order to save some network traffic when vehicle stand still
if(_pos # 0 != (_vehicle animationSourcePhase "BFT_Map_Move_X"))then{_vehicle animateSource ["BFT_Map_Move_X",(_pos # 0),true]};
if(_pos # 1 != (_vehicle animationSourcePhase "BFT_Map_Move_Y"))then{_vehicle animateSource ["BFT_Map_Move_Y",(_pos # 1),true]};

// Update MFD waypoints
private _grp				= group effectiveCommander _vehicle;
private _speed				= speed _vehicle;
private _waypointsList 		= waypoints _grp;
private _currentWP			= currentWaypoint _grp;
private _currentWP_Pos		= waypointPosition [_grp, _currentWP];
private _currentWP_Distance	= _currentWP_Pos distance2d _vehicle;

_vehicle setUserMFDValue [12,
	count _waypointsList
];

// Get local _variables
private _scaleFactor = 1/_scale;
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