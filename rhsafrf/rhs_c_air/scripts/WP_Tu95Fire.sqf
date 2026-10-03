params["_group","_pos","",["_arg",-1]];

private _waypoint = [_group,currentWaypoint _group];
private _condition = compile ((waypointStatements _waypoint) select 0);

private _v = vehicle (leader _group);

//systemChat "wp init";
if( not((typeOf _v) isKindOf "RHS_TU95MS_base"))exitWith{diag_log "no tochka found"};

//wait till condition is met
waitUntil {sleep 1;(call _condition)};
//systemChat "attempting to fire tochka";

if(alive _v)then{
	[_v,ATLtoASL _pos] call rhs_fnc_tu95_AI_launch;
};