/*
	rhs_firedFCS_Mi24.sqf - rhs_fnc_firedFCS_Mi24
	Handles engagment of ground target with laser guided missiles.
	If helicopter has no

	a: reyhard
*/

params["_vehicle","_weapon","_muzzle","","","","","_gunner"];

// Check if target is vehicle (or if any target is present at all)
private _target = assignedTarget _vehicle;
private _distance = _vehicle distance _target;
//diag_log format["DEBUG: Start of AI script. Currently assigned target: %1",_target];

_vehicle removeWeapon _weapon;
[_vehicle,_weapon] spawn
{
	params["_vehicle","_weapon"];
	sleep 10;
	_vehicle addMagazine "rhs_laserfcsmag";
	_vehicle addWeapon _weapon;
};

// Exit if target is too close
if(_distance < 500)exitWith{};

if(!(_target isKindOf "LandVehicle"))exitWith
{
	//_vehicle selectWeapon "rhs_weap_yakB";
};

if(!isPlayer (driver _vehicle))then
{

};

// Find available ATGMs
private _manualGuidedMissiles = [];
{
	if(_x # 1 > 0)then
	{
		if((getText (configFile >> "CfgMagazines" >> _x # 0 >> "ammo")) isKindOf ["rhs_ammo_atgmBase_base",configFile >> "CfgAmmo"])then{_manualGuidedMissiles pushBack (_x # 0)};
	};
}foreach (magazinesAmmo _vehicle);

//diag_log format["DEBUG: Missiles found: Manual %1",_manualGuidedMissiles];

if(_manualGuidedMissiles isEqualTo [])exitWith{};

// Find proper weapon
private _launcher	= getText (configFile >> "CfgMagazines" >> (_manualGuidedMissiles # 0) >> "pylonWeapon");
private _mode		= (getArray (configFile >> "CfgWeapons" >> _launcher >> "modes") ) # 0;
//diag_log format["DEBUG: Launcher found: %1, Mode: %2, Gunner: %3",_launcher,_mode,_gunner];

// Fire missile
_gunner doWatch _target;
_gunner doTarget _target;
//_gunner forceWeaponFire [_launcher,_mode];
[_vehicle,_launcher] spawn
{
	params ["_vehicle","_launcher"];

	for "_i" from 0 to 10 do
	{
		_vehicle selectWeaponTurret [_launcher,[0]];
		sleep 0.1;
	};
	[_vehicle,_launcher,[0]] call bis_fnc_fire;
};