params[
	"_group",
	"_pos",
	["_arg",-1],
	["_parachuteType","rhs_d6_Parachute",["string"]],
	["_delay",-1,[0]]
];

_radius = waypointCompletionRadius [_group,currentWaypoint _group];
if(_radius == 0)then{_radius = 300};

_group move _pos;

private _v = vehicle (leader _group);

while{alive _v && _v distance2d _pos >_radius}do{
	sleep 1;
	//systemChat format["%1 %2",_v distance2d _pos,_radius ];
};

//[_v] execVM "infParadrop.sqf";
[_v,_delay,_parachuteType] spawn rhs_fnc_infantryParadrop;