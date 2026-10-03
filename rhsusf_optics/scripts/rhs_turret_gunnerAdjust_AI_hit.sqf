/*
	rhsusf_fnc_turret_gunnerAdjust_AI_hit
*/

params["_vehicle"];

private _gunner  = gunner _vehicle;

// Run code only for AI gunner
if(_gunner call rhs_fnc_isPlayer)exitWith{};

if(behaviour _gunner == "COMBAT")then{
	_vehicle animateSource ["GunnerAdjust_source",0.55];
};