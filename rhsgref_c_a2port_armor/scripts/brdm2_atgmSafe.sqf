/*
rhs_fnc_brdm2_atgmSafe
BRDM-2 ATGM fold sequnce handler
i:
	_v - vehicle
	_m - mode, 0 (open) or 1 (close)

a: reyhard
*/
params["_v","_m",["_damage",true],["_forced",false]];


_v setVariable ["rhs_brdm_atgm_inProgress",true,true];

// Prevent weapon firing during sequence
private _pfh = "rhs_brdm_atgm_fold_" + str(_v);	
[_pfh, "onEachFrame", {
	params["_vehicle","_pfh"];


	if( !(alive _vehicle) )exitWith{
		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};
	_vehicle setWeaponReloadingTime [gunner _vehicle, currentMuzzle (gunner _vehicle), 0.5];

}, [_v,_pfh]] call BIS_fnc_addStackedEventHandler;

// If forced, store launcher state
if(_forced)then
{
	_v setVariable ["rhs_brdm_atgm_state",_m,true];
};

if(_m isEqualTo 1)then{

	if(_damage)then
	{
		_v setVariable ["rhs_brdm_atgm_damage_gun", _v getHitPointDamage "HitGun",true];
		_v setVariable ["rhs_brdm_atgm_damage_turret", _v getHitPointDamage "HitTurret",true];
		[_v,[["hitTurret",1],["hitGun",1]]] remoteExecCall ["rhs_fnc_setDamageState",_v];
	};

	sleep 1.5;
	_rotate=-(_v animationPhase "mainTurret");
	_v animate ["mainTurret_fix",_rotate];
	_v animate ["maingun_fix",-(_v animationPhase "maingun")-rad(10)];

	waitUntil {_v animationPhase "mainTurret_fix" == _rotate};

	sleep 0.5;
	_v animateSource ["atgm_hide",1];
	sleep 5;
	_v animate ["maingun_fix",-(_v animationPhase "maingun")];
	_v removeWeapon "rhs_weap_9P148";
	[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;

}else{
	_v animateSource ["atgm_hide",0];
	_v addWeapon "rhs_weap_9P148";
	sleep 9;

	if(_damage)then
	{
		[_v,[["hitTurret",_v getVariable ["rhs_brdm_atgm_damage_turret",0]],["hitGun",_v getVariable ["rhs_brdm_atgm_damage_gun",0]]]] remoteExecCall ["rhs_fnc_setDamageState",_v];
	};
	_v animate ["mainTurret_fix",0];
	_v animate ["maingun_fix",0];
	[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};


_v setVariable ["rhs_brdm_atgm_inProgress",false,true];