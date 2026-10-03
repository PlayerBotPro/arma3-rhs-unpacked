private _version = 1.0;


params ["_unit"];
if (_unit getVariable ["L_needsBoltSnapHandler",true]) then {
	_unit addAction ["", {
		params ["_unit"]; [_unit] spawn L_fnc_openBolt;
	 }, "", 0, false, false, "DefaultAction","((vehicle _target) == _target) && {(getText (configFile/'CfgWeapons'/(currentWeapon _target)/'L_boltSnapSound')) != ''} && {(_target ammo (currentWeapon _target)) > 0} && {!(weaponLowered _target)}"];
	 _target setVariable ["L_needsBoltSnapHandler",false];
};
