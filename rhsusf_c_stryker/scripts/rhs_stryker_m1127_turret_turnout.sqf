/*
	rhs_fnc_stryker_m1127_turret_turnout
	turn out rotation sync for m1127 gunner
*/
params ["_vehicle", "_unit", "_turret","_turnOut"];
private _player = call rhs_fnc_findPlayer;

if(!(_turret isEqualTo [0]))exitWith {};
	
if(_turnOut)then
{
	_vehicle animateSource ["Gunner_Rotate",(_vehicle animationSourcePhase "Weapon_Turret") + (_vehicle animationSourcePhase "LRAS3_Turret")];
}else{
	_vehicle animateSource ["Gunner_Rotate",0];
};
