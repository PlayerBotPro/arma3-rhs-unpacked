/*
	rhs_fnc_m113_commander_turret_turnout
	turn out rotation sync for m113 gunner
*/
params ["_vehicle", "_unit", "_turret","_turnOut","_turretHandle","_sync"];
private _player = call rhs_fnc_findPlayer;
if(!(_turret isEqualTo _turretHandle))exitWith {};
	
if(_turnOut)then
{
	if(_sync)then{_vehicle animateSource ["Gunner_In_Rotate",0]};
	if((_vehicle animationSourcePhase "Hide_Turret_Armor_Side") isEqualTo 1)then{_vehicle spawn {_this animateDoor ["hatchGunner",0]}};
}else{
	if(_sync)then{_vehicle animateSource ["Gunner_In_Rotate",-(_vehicle animationSourcePhase "MainTurret")]};
	if((_vehicle animationSourcePhase "Hide_Turret_Armor_Side") isEqualTo 1)then{_vehicle spawn {sleep 0.8;_this animateDoor ["hatchGunner",1]}};
};
