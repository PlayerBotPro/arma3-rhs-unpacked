/*
BRDM-2 reload sequence handler
i: EH "Reloaded" input

a: reyhard
*/
params["_v","_w","_m","_new","_old"];

private _damageGun		= _v getHitPointDamage "HitGun";
private _damageTurret	= _v getHitPointDamage "HitTurret";

[_v,[["hitTurret",1],["hitGun",1]]] remoteExecCall ["rhs_fnc_setDamageState",_v];

_v setVariable ["rhs_brdm_atgm_inProgress",true,true];

_v allowDamage true;

sleep 1.5;

private _rotate = -(_v animationPhase "mainTurret");
_v animate ["mainTurret_fix",_rotate];
_v animate ["maingun_fix",-(_v animationPhase "maingun")];

_timeout = time + 5;
waitUntil {(_v animationPhase "mainTurret_fix" == _rotate) or (time > _timeout)};

sleep 0.5;

_v animateSource ["atgm_hide",1];

sleep 18;
_v animateSource ["atgm_hide",0];
sleep 9;

[_v,[["hitTurret",_damageTurret],["hitGun",_damageGun]]] remoteExecCall ["rhs_fnc_setDamageState",_v];
_v animate ["mainTurret_fix",0];
_v animate ["maingun_fix",0];

_v setVariable ["rhs_brdm_atgm_inProgress",false,true];