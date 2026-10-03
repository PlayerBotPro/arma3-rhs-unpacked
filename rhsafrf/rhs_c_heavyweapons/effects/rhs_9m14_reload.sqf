/*
	Maljutka reload anim handler for BMP1 or BMD1

	i: EH reloaded
	o: none

	a: reyhard
*/

params["_v","_w"];

_v spawn {
	private _damage = isDamageAllowed _this;
	private _damageGun = _this getHitPointDamage "HitGun";
	_this allowDamage true;
	[_this,["hitGun",1]] remoteExecCall ["setHitPointDamage",_this];
	_this animate ["MainGun_fix",rad(26)];
	sleep 3.9;

	_this animateSource ["maljutka_reload",1,2];
	_this animateSource ["maljutka_reload_fins",1];

	sleep 4;
	_this animate ["maljutka_hide",0,true];
	_this animateSource ["maljutka_reload",0.38,1.5];
	sleep 3.36;
	_this animateSource ["maljutka_reload_fins",0];
	sleep 0.6;
	_this animateSource ["maljutka_reload",0,1.2];
	sleep 1;
	[_this,["hitGun",_damageGun]] remoteExecCall ["setHitPointDamage",_this];
	_this allowDamage _damage;
	sleep 0.1;
	_this animate ["maingun_fix",0,1.3];
};