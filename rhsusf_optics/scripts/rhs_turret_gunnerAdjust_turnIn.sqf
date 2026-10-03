/*
	rhsusf_fnc_turret_gunnerAdjust_turnIn
*/

params["_vehicle","_unit"];

private _gunner  = gunner _vehicle;

// Run code only for AI gunner
if(!(_unit isEqualTo _gunner))exitWith{};

private _defaultValue = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "AnimationSources" >> "GunnerAdjust_source" >> "initPhase");
_vehicle animateSource ["GunnerAdjust_source",_defaultValue];
missionNamespace setVariable ["rhs_gunnerAdjust_state",nil];