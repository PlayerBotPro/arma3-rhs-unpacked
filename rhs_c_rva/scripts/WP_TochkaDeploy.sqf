params["_group","_pos","",["_arg",-1]];

//get waypoint data
private _waypoint = [_group,currentWaypoint _group];
private _condition = compile ((waypointStatements _waypoint) select 0);
private _radius = waypointCompletionRadius _waypoint;
//default completion radius is 10
if(_radius == 0)then{_radius = 10};
private _v = vehicle (leader _group);

//assign order to move
_group move _pos;

if( not((typeOf _v) isKindOf "OTR21_Base"))exitWith{diag_log "no tochka found"};

//wait till reaching distance
while{alive _v && (_v distance2d _pos >_radius)}do{
	sleep 1;
	//systemChat format["%1 %2",_v distance2d _pos,_pos ];
};
//wait till condition is met
waitUntil {sleep 1;(call _condition)};

if(alive _v)then{[_v,1] spawn rhs_fnc_ss21_AI_prepare };
//systemChat "preparing tochka";
sleep 15;