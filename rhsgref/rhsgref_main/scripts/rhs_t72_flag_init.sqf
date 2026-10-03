private ["_tank","_class","_decal","_params","_f","_h","_habartype"];

_tank = _this select 0;

if(local _tank)then{

	_f= "rhs_Flag_chdkz" createVehicle [0,0,0];
	_f attachTo [_tank,[1,-3,1]];
	_tank setVariable ["RHS_T72indep_flag", _f, true];
	// Zeus backup
	[_tank,_f] spawn
	{
		while {not(isNull  (_this select 0))} do {
			sleep 15;
		};
		detach (_this select 1);
		deleteVehicle (_this select 1);
	};
};

_tank addEventHandler ["Killed", {
	detach ((_this select 0) getVariable ["RHS_T72indep_flag", objNull]);
	deleteVehicle ((_this select 0) getVariable ["RHS_T72indep_flag", objNull]);
}];