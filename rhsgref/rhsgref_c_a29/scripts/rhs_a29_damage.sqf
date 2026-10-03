/*
	rhs_fnc_a29_damage
	a: reyhard
*/
params ["_vehicle", "_selection", "_damage", "_hitIndex", "_hitPoint", "_shooter", "_projectile"];

// Only apply those changes to vehicle where player is
// local is not used since for player gunner vehicle might be non local
if(! ((call rhs_fnc_findPlayer) in _vehicle))exitWith{};

private _hitpointIndex =
[
	"hitlaileron",
	"hitraileron",
	"hitlcelevator",
	"hitrelevator",
	"hitlcrudder",
	"hitfuel",
	"hitfuel2",
	"hitengine",
	"hit_optic_flir"
] find _hitpoint;

if(_hitpointIndex >= 0)then{_vehicle setUserMFDValue [14+_hitpointIndex,_damage]};