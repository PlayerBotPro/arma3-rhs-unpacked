/*
	rhsusf_fnc_turret_gunnerAdjust_AI_Engine
*/

params["_vehicle"];

private _gunner  = gunner _vehicle;

// Run code only for AI gunner
if(_gunner call rhs_fnc_isPlayer)exitWith{};

if(behaviour _gunner != "COMBAT")then
{
	private _defaultValue = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "AnimationSources" >> "GunnerAdjust_source" >> "initPhase");
	_vehicle animateSource ["GunnerAdjust_source",_defaultValue];
};