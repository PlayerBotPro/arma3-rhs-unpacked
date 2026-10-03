/*
	rhs_fnc_an94_fired

	a: reyhard
*/
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

// Locality check
if(!local _unit)exitWith{};

// Exit if only one bullet is left in magazine
if((_unit ammo _muzzle) isEqualTo 1)exitWith{};

private _cfg = configFile >> "CfgWeapons" >> _weapon;
private _isFullAuto = (_mode isKindOf ["FullAuto",_cfg]);
if(_isFullAuto || (_mode isKindOf ["Burst",_cfg]))then
{
	private _lastFired = _unit getVariable ["rhs_an94_lastFired",0];
	if(_lastFired + 0.12 < time)then{
		if(_isFullAuto)then{_unit setWeaponReloadingTime [_unit,_muzzle,0.33]};
		_unit setUnitRecoilCoefficient 0.0;
	}else{
		_unit setUnitRecoilCoefficient 1;
	};
	_unit setVariable ["rhs_an94_lastFired",time];
};

// debug unlimited ammo
_unit setAmmo [_muzzle,30];