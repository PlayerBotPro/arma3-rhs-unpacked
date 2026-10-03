/*

	rhs_fnc_m113_commander_turret_getout
	a: reyhard
*/

params["_v"];

// If all turrets are locked then attempt to unlock them till they are open again
if((isnull (_v turretUnit [0]))  && (isnull (_v turretUnit [1])) &&  (_v lockedTurret [0]))then{
	[_v,[0],false] call rhs_fnc_setTurretLock;
};