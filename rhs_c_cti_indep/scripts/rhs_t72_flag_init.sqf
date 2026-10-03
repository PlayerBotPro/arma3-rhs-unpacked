params["_tank"];

if(is3DEN)exitWith{};

// Flag disabled via parameter
if(_tank getVariable ["rhs_t72_disableFlag",false])exitWith{};

if(local _tank)then{

	private _f= "rhs_Flag_chdkz" createVehicle [0,0,0];
	_f attachTo [_tank,[1,-3,1]];
	_tank setVariable ["RHS_T72indep_flag", _f, true];
};

_tank addEventHandler ["Killed", {
	detach ((_this select 0) getVariable ["RHS_T72indep_flag", objNull]);
	deleteVehicle ((_this select 0) getVariable ["RHS_T72indep_flag", objNull]);
}];
_tank addEventHandler ["Deleted", {
	deleteVehicle ((_this select 0) getVariable ["RHS_T72indep_flag", objNull]);
}];