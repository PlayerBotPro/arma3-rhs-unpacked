/*
	rhs_fnc_agm114_helper
*/

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if(!local _projectile)exitWith{}; 

private _pfh = "rhs_pfh_agm114_helper_" + str _projectile;

[_pfh, "onEachFrame", {
	params["_projectile","_pfh"];

	if(!alive _projectile)exitWith{
		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};

	private _target = missileTarget _projectile;
	if(!(_target isEqualTo objNull)  )then
	{
		if(_projectile distance _target < 200)then
		{
			if(speed _projectile > 600)then
			{
				// Slow down the missile to fight default ugly missile physics
				_projectile setVelocity (velocity _projectile vectorMultiply 0.98);
			};
		};
	};
	//hintSilent format["speed %1\ntarget: %2",speed _projectile,missileTarget _projectile];

}, [_projectile,_pfh]] call BIS_fnc_addStackedEventHandler;
 