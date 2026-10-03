/*
	Boost to reload speed for tanks with human loaders. Reduces reload time by 60% if loader is present

	M256 reload time - 17 seconds
	reload action is triggered after 2 seconds ( 0.88235294118 of reload phase)

	at 0.26 phase around 4.5 seconds will remain to complete reload

	i: Weapon EH Fired input

	a: reyhard
*/


params ["_vehicle","","_muzzle"];

// loader of tank
private _loader = _vehicle turretUnit [0,1];
// loader is present and not turned out
if((alive _loader) AND not(isTurnedOut _loader))then
{
	private _pfh = "rhs_pfh_tankLoader_" + str _vehicle;
	[_pfh, "onEachFrame", {
		params["_vehicle","_muzzle","_loader","_pfh","_time"];
		// delay reload adjustments - otherwise recoil animation is not going to work
		if(time >= _time)exitWith
		{
			_fatigue = (getFatigue _loader) max 0.01;

			_vehicle setWeaponReloadingTime [gunner _vehicle,_muzzle,0.26+((speed _vehicle max 0.01)/160)+(_fatigue/1.5)];
			_loader setFatigue (_fatigue*1.4 + 0.22);

			[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
	}, [_vehicle,_muzzle,_loader,_pfh,time+2]] call BIS_fnc_addStackedEventHandler;
};