	/*
	rhs_fnc_reloadShotgun

	a: reyhard
*/
params
[
	"_unit",
	"_weapon",
	"_muzzle",
	["_newMag",["",0]],
	["_oldMag",["",0]]
];

//systemChat format["%1 %2",_newMag,_oldMag];

// Exit if magazine is unloaded
if(_newMag isEqualTo "")exitWith{};
if(_oldMag isEqualTo "")then{_oldMag = ["",0]};

private _newMagType		= _newMag # 0;
private _oldMagType		= _oldMag # 0;
private _newMagCount	= _newMag # 1;
private _oldMagCount	= _oldMag # 1;
private _exit			= false;
private _maxAmmoCount	= getNumber (configFile >> "CfgMagazines" >> _newMagType >> "count");
private _loadFrom 		= _oldMagCount;

// Loading same magazine
if(_newMagType isEqualTo _oldMagType)then
{
	// Exit if there is nothing to load
	if(_oldMagCount isEqualTo _maxAmmoCount)exitWith{_exit = true};

	private _combined = (_newMagCount + _oldMagCount);
	// Update end magazine state
	_newMagCount = _combined min _maxAmmoCount;

	if(_combined > _maxAmmoCount)then
	{
		_oldMagCount = _combined - _maxAmmoCount;
	}else
	{
		_oldMagCount = 0;
	};
	_unit addWeaponItem [_weapon,[_newMag # 0,_oldMag # 1,_muzzle],true];
	//systemChat format["%1 %2 %3 %4",_oldMagCount,_newMagCount,_maxAmmoCount,_combined];
}else{
// Loading different magazine
	// Load new mag type to weapon
	_unit addWeaponItem [_weapon,[_newMag # 0,0,_muzzle],true];
	// Start loading from 0 - in futre unloading could be introduced
	_loadFrom = 0;
};

// Handling of exit from other scope
if(_exit)exitWith
{
	_unit addMagazine [_newMagType, _newMagCount];
	_unit addWeaponItem [_oldMagType, _oldMagCount];
	_unit playactionNow  "RHS_GestureReloadM590_end";
};

// Start custom reload animation
_unit playactionNow  "RHS_GestureReloadM590_start";

// Interrupting default animation leads to removing both old magazine. Because of that, we need to readd it to inventory
if(_oldMagCount > 0)then{_unit addMagazine [_oldMagType, _oldMagCount]};

sleep 0.2;
// Play looped animation only if loading more than 1 round
if(!(_oldMagCount + 1 isEqualTo _newMagCount))then{_unit playactionNow  "RHS_GestureReloadM590_addShell"};

// Add fake magazine to fake, hidden muzzle
_unit addPrimaryWeaponItem "rhs_mag_fakeMuzzle1";
_unit setAmmo ["RHS_ReloadAction",0];
_unit setWeaponReloadingTime [_unit, "RHS_ReloadAction", 0];
sleep 0.04;
for "_i" from _loadFrom+1 to _newMagCount do
{
	// Play end animation if it's the last round to load
	if(_i isEqualTo _newMagCount)then{_unit playactionNow  "RHS_GestureReloadM590_end";sleep 0.15;};
	sleep 0.28;
	_unit setWeaponReloadingTime [_unit, "RHS_ReloadAction", 1];
	_unit setAmmo ["RHS_ReloadAction",1];
	// Play sound
	playSound3D ["rhsusf\addons\rhsusf_c_weapons\sounds\m590_rechamber.wss", player, false,( _unit modelToWorldVisualWorld (_unit selectionPosition "leftHand")), 2.5, random[0.94,1,1.1], 20];
	sleep 0.46;
	_unit setWeaponReloadingTime [_unit, "RHS_ReloadAction", 1];
	_unit setAmmo ["RHS_ReloadAction",0];
	// Increase ammo count
	_unit setAmmo [_muzzle,_i];
};

// If weapon was empty before, trigger bolt action script again
if(_oldMagCount isEqualTo 0)then
{
	private _ammo = getText (configFile >> "CfgMagazines" >> _newMag # 0 >> "ammo");
	[_unit,_weapon,_weapon,_ammo] call rhs_fnc_boltAction;
};