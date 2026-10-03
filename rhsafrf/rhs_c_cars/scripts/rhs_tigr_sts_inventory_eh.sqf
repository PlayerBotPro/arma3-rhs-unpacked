/*
	Name: 		RHS_fnc_tigr_sts_inventory_eh
	
	Desc:		Tigr STS inventory event handler for RPG-26 animations
	
	Param(s):	0 - Unit
	
	Returns:	nil
	
	Author:		Jiaan "Bakerman"
*/

params ["_unit"];
for "_i" from (({_x == "rhs_weap_rpg26"} count (weaponCargo _unit)) + 1) to 4 do {
	if (_unit animationPhase (format["RPG_%1_hide", _i]) == 0) then {
		_unit animate [format["RPG_%1_hide", _i], 1];
	};
};