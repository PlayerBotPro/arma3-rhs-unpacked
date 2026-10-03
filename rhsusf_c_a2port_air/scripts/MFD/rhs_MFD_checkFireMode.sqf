/*
	rhs_fnc_MFD_checkFireMode
	a: reyhard
*/

params["_unit","_vehicle"];

private _currentTurret 	= [-1];
if((_unit isEqualTo (gunner _vehicle)) OR (isManualFire _vehicle))then{_currentTurret = [0]};
private _weaponState 	= weaponState [_vehicle,_currentTurret];
private _currentWeapon	= _weaponState # 0;
private _currentMuzzle	= _weaponState # 1;
private _currentMode	= _weaponState # 2;
private _weaponCfg		= configFile >> "cfgWeapons" >> _currentWeapon;
private _muzzles		= getArray (_weaponCfg >> "muzzles");
private _modes			= getArray (_weaponCfg >> "modes");
private _modeIndex 		= 0;

// Just single muzzle
if(count _muzzles isEqualTo 1)then
{
	_modeIndex = _modes find _currentMode;
}else{
	private _muzzleIndex = _muzzles find _currentMuzzle;
	// Determine which muzzle is current 
	if(_muzzleIndex > 0)then
	{
		_modeIndex = (count _modes) + _muzzleIndex;
	}else{
		_modeIndex = _modes find _currentMode;
	};
};

_modeIndex