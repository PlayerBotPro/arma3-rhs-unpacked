/*
	rhs_fnc_stryker_turnActions

	Handler for turn in/out actions - play additional animations

	a: reyhard
*/
params ["_vehicle", "_unit", "_turret","_turnOut"];

if(_turret isEqualTo [-1] )exitWith
{
	if(_turnOut)then{
		waitUntil {animationState _unit == "RHS_Stryker_M1126_Driver_out";};
		sleep 0.1;
		_unit switchmove "RHS_Stryker_M1126_Driver_turnout";
	};
};

private _cfgTurret = (configFile >> "CfgVehicles" >> typeOf _vehicle >> "Turrets") select (_turret # 0);

// Check if action is enabled
if( (getNumber (_cfgTurret >> "rhs_hatch_control")) isEqualTo 0)exitWith{};

private _hatch = getText (_cfgTurret >> "enabledByAnimationSource");

if(_turnOut)then
{
	_vehicle enablePersonTurret [_turret,true];
	_vehicle animateDoor [_hatch,1];
	sleep 0.01;
	_unit playMove "vehicle_turnout_2_Idle";
}else{
	_actionIn = getText (_cfgTurret >> "gunnerInAction");
	_vehicle enablePersonTurret [_turret,false];
	_unit switchmove "vehicle_turnout_2_Idle";
	sleep 0.1;
	_unit switchAction _actionIn;
	sleep 0.15;

	_vehicle animateDoor [_hatch,0];
};
