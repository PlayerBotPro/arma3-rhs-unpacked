/*
	rhs_AH64_AI_laserTarget.sqf - rhs_fnc_AH64_AI_fire
	Handles engagment of ground target with laser guided missiles.
	If helicopter has no

	a: reyhard
*/

params["_vehicle","_weapon","_muzzle","","","","","_gunner"];

// Check if target is vehicle (or if any target is present at all)
private _target = assignedTarget _vehicle;
private _distance = _vehicle distance _target;
//diag_log format["Start of AI script. Currently assigned target: %1",_target];

// Exit if target is too close
if(_distance < 500)exitWith{};

if(!(_target isKindOf "LandVehicle"))exitWith
{
	// Disengage laser
	if(isLaserOn _gunner)then
	{
		_gunner forceWeaponFire ["rhs_weap_laserDesignator_AI","rhs_weap_laserDesignator_AI"];
	};
	_vehicle selectWeapon "rhs_weap_M230";
};

// Check if vehicle have radar guided missiles
private _radarGuidedMissiles = [];
private _laserGuidedMissiles = [];

{
	if(_x # 1 > 0)then
	{
		if((_x # 0) isKindOf ["rhs_mag_AGM114L",configFile >> "CfgMagazines"])then{_radarGuidedMissiles pushBack (_x # 0)};
		if((_x # 0) isKindOf ["rhs_mag_AGM114K",configFile >> "CfgMagazines"])then{_laserGuidedMissiles pushBack (_x # 0)};
	};
}foreach (magazinesAmmo _vehicle);

//diag_log format["Missiles found: Radar %1, Laser %2",_radarGuidedMissiles,_laserGuidedMissiles];

// Exit if there are radar guided missiles or there are no laser guided missiles available
if(!(_radarGuidedMissiles isEqualTo []) or (_laserGuidedMissiles isEqualTo []))exitWith
{
	if(!(_radarGuidedMissiles isEqualTo []))then
	{
		private _launcher	= getText (configFile >> "CfgMagazines" >> (_radarGuidedMissiles # 0) >> "pylonWeapon");
		_vehicle selectWeapon _launcher;
	};
	_vehicle removeWeapon _weapon;
	[_vehicle,_weapon] spawn
	{
		params["_vehicle","_weapon"];
		sleep 15;
		_vehicle addMagazine "rhs_laserfcsmag";
		_vehicle addWeapon _weapon;
	};
};

// Find proper weapon
private _launcher	= getText (configFile >> "CfgMagazines" >> (_laserGuidedMissiles # 0) >> "pylonWeapon");
private _mode		= (getArray (configFile >> "CfgWeapons" >> _launcher >> "modes") ) # 0;
//diag_log format["Launcher found: %1, Mode: %2, Gunner: %3",_launcher,_mode,_gunner];

// Add event handler which disables laser designator after missile hits the target
_vehicle addEventHandler ["fired",{
	_this + [_thisEventHandler] spawn
	{
		params["_vehicle","","","","","","_missile","_gunner","_eventHandler"];
		waitUntil {!alive _missile};

		_gunner forceWeaponFire ["rhs_weap_laserDesignator_AI","rhs_weap_laserDesignator_AI"];
		_vehicle selectWeapon "rhs_weap_fcs_ah64";
		_vehicle removeEventHandler ["fired",_eventHandler];
	};
}];

// Fire missile
_gunner doWatch _target;
_gunner forceWeaponFire [_launcher,_mode];
