/*
	rhs_su25_AI_laserTarget.sqf - rhs_fnc_su25_AI_fire
	Handles engagment of ground target with laser guided missiles.
	a: reyhard
*/

params["_vehicle","_weapon","_muzzle","","","","","_gunner"];

// Check if target is vehicle (or if any target is present at all)
private _target = assignedTarget _vehicle;
private _distance = _vehicle distance _target;
diag_log format["Start of AI script. Currently assigned target: %1",_target];

// Exit if target is too close
if(_distance < 500)exitWith{};

if(!(_target isKindOf "LandVehicle"))exitWith
{
	// Disengage laser
	if(isLaserOn _gunner)then
	{
		_gunner forceWeaponFire ["rhs_weap_klen_ps","rhs_weap_klen_ps"];
	};
};

// Check if vehicle have laser guided missiles
private _laserGuidedMissiles = [];
{
	if(_x # 1 > 0)then
	{
		private _ammoCfg		= getText (configFile >> "CfgMagazines" >> _x # 0 >> "ammo");
		private _hasLaserSensor	= isClass (configFile >> "CfgAmmo" >> _ammoCfg >> "Components" >> "SensorsManagerComponent" >> "Components" >> "LaserSensorComponent");
		if(_hasLaserSensor)then{_laserGuidedMissiles pushBack (_x # 0)};
	};
}foreach (magazinesAmmo _vehicle);

diag_log format["Missiles found: Laser %1",_laserGuidedMissiles];

// Exit if there are no laser guided missiles available
if(_laserGuidedMissiles isEqualTo [])exitWith
{
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
diag_log format["Launcher found: %1, Mode: %2, Gunner: %3",_launcher,_mode,_gunner];

// Add event handler which disables laser designator after missile hits the target
_vehicle addEventHandler ["fired",{
	_this + [_thisEventHandler] spawn
	{
		params["_vehicle","","","","","","_missile","_gunner","_eventHandler"];
		waitUntil {!alive _missile};

		_gunner forceWeaponFire ["rhs_weap_klen_ps","rhs_weap_klen_ps"];
		_vehicle setPilotCameraTarget objNull;
		_vehicle selectWeapon "rhs_weap_fcs_su25";
		_vehicle removeEventHandler ["fired",_eventHandler];
	};
}];

// Fire missile
_vehicle setPilotCameraTarget _target;
_gunner forceWeaponFire [_launcher,_mode];
