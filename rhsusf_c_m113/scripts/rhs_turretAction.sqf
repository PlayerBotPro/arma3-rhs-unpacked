/*

Animate hatch upon proper key detection

params:
	_phase - phase of animation to perform. 1 - open hatch, 0 close hatch

a: reyhard
*/
params["_phase","_vehicle","_unit","_turret"];

// exit if switched to driver seat
if(_unit isEqualTo driver _vehicle)exitWith{};

if(!alive _unit)exitWith{};


// get turret config
private _turretCfg = (configFile >> "cfgVehicles" >> typeOf _vehicle >> "Turrets") select (_turret select 0);

// this turret is not supposed to be controled by script
if((getNumber (_turretCfg >> "rhs_hatch_control")) isEqualTo 0)exitWith{};

// check if turret share FFV hatch with other units
private _checkFailed = false;
private _depend = getArray (_turretCfg >> "rhs_hatch_control_depeneds");
{
	if(_vehicle animationPhase _x isEqualTo 1)exitWith{
		_checkFailed=true;
	};
}foreach _depend;

if(_checkFailed)exitWith{
	//systemChat "second unit is turned out";
};
//systemChat "animating";

_vehicle animateDoor [getText (_turretCfg >> "enabledByAnimationSource"),_phase];