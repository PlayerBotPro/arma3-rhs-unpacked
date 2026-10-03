params["_group","_pos","",["_arg",-1]];

_radius = waypointCompletionRadius [_group,currentWaypoint _group];
if(_radius == 0)then{_radius = 300};

_group move _pos;

private _v = vehicle (leader _group);
private _fnc = getText (configFile >> "cfgVehicles" >> typeOf _v >> "rhs_paraScript");

if(_fnc isEqualTo "")exitWith{diag_log "didn't found proper function to execute"};

while{alive _v && _v distance2d _pos >_radius}do{
	sleep 1;
	//systemChat format["%1 %2",_v distance2d _pos,_radius ];
};

[_v,-1] spawn (call compile  _fnc);