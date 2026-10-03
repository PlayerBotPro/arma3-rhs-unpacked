params ["_unit"];
if (_unit getVariable ["RHS_needsBoltSnapHandler",true]) then {
	_unit addAction ["", {
		params ["_unit"]; [_unit] spawn RHS_fnc_openBolt;
	 }, "", 0, false, false, "DefaultAction","((vehicle _target) == _target) && {(getText (configFile/'CfgWeapons'/(currentWeapon _target)/'RHS_boltSnapSound')) != ''} && {(_target ammo (currentWeapon _target)) > 0} && {!(weaponLowered _target)}"];
	 _unit setVariable ["RHS_needsBoltSnapHandler",false];
};




// Testing

params ["player"];
if (player getVariable ["RHS_needsBoltSnapHandler",true]) then {
	player addAction ["", {
		params ["player"]; [player] spawn RHS_fnc_openBolt;
	 }, "", 0, false, false, "DefaultAction","((vehicle _target) == _target) && {(getText (configFile/'CfgWeapons'/(currentWeapon _target)/'RHS_boltSnapSound')) != ''} && {(_target ammo (currentWeapon _target)) > 0} && {!(weaponLowered _target)}"];
	 player setVariable ["RHS_needsBoltSnapHandler",false];
};



