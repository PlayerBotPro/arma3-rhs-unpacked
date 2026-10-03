/*
	rhs_fnc_burstLimiterShots
	a: reyhard
*/
params ["_unit","_weapon","_muzzle","_mode", "", "", "", "_gunner"];

// exit if script is already running
if(_unit getVariable ["rhs_weaponLimiter",false])exitWith{};

// set flag, so script is only executed once
_unit setVariable ["rhs_weaponLimiter",true];

// get current muzzle limit
private _limit = [configFile >> "cfgWeapons" >> _weapon >> _mode,"rhs_burstLimiter",10] call BIS_fnc_returnConfigEntry;

// per frame handler checking "fire" input
["rhs_weaponLimiter_EF", "onEachFrame", {
	params["_unit","_weapon","_muzzle","_gunner","_limit","_limitEnd","_cooldown","_cooldownTime"];

	if(inputAction "DefaultAction" isEqualTo 1)then
	{
		if((_unit ammo _weapon) <= _limitEnd)then
		{
			_unit setWeaponReloadingTime [_gunner,_muzzle,1];
		};
		// 10 rounds equals to 1 second of cooldown
		private _cooldown = linearConversion [_limitEnd+_limit,_limitEnd,(_unit ammo _weapon),0,_limit/10];
		_this set [6,time+_cooldown];
		_this set [7,_cooldown];
	}else{
		// Cooldown simulation
		if(time<_cooldown)then
		{
			_unit setWeaponReloadingTime [_gunner,_muzzle,linearConversion [_cooldown,_cooldown-_cooldownTime,time,0,1,true] ];
		}else{
			_unit setVariable ["rhs_weaponLimiter",false];
			["rhs_weaponLimiter_EF", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
	};
}, [_unit,_weapon,_muzzle,_gunner,_limit,(_unit ammo _weapon) - _limit+1,0]] call BIS_fnc_addStackedEventHandler;