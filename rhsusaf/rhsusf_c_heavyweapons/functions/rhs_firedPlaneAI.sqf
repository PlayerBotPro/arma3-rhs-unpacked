/*
	rhs_firedPlaneAI.sqf - rhs_fnc_firedPlaneAI
	AI ammo reload script
	Script handles reloading of different shells depending on curret target (retrived with assignedTarget) & it's distance
	Triggered by firing "FCS" weapon, which is invisible for player

	i:
		_v - vehicle that fired
		_w - weapon which was fired - to be replaced with FCS weapons after hooking this script to weapon EH
		_lrf - does vehicle have laser range finder? default false
		_skipAmmo - handle only LRF marking, default false
	a: reyhard
*/

params["_v","_w",["_lrf",false]];

if(!local _v)exitWith{};

private _target = assignedTarget _v;
// check if there is valid target
if(_target isEqualTo objNull)exitWith{};

// temporiarily remove FCS weapons
_v removeMagazineTurret ["rhs_laserfcsmag",[0]];

[_v,_w] spawn
{
	params["_v","_w"];
	sleep 1.5;
	_v removeWeaponTurret [_w,[0]];
	_v removeWeaponTurret ["rhs_weap_laserDesignator_AI",[0]];
	sleep 30;
	_v addMagazineTurret ["rhs_laserfcsmag",[0]];
	_v addWeaponTurret [_w,[0]];
	_v addWeaponTurret ["rhs_weap_laserDesignator_AI",[0]];
	_v selectWeaponTurret ["rhs_weap_laserDesignator_AI",[0]];
};