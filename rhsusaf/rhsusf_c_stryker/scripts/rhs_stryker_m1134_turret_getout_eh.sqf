/*
a: reyhard


*/

params["_v"];

// If all turrets are locked then attempt to unlock them till they are open again
if((isnull (_v turretUnit [1]))  && (isnull (_v turretUnit [2])) &&  (_v lockedTurret [1])  )then{
	[_v,[1],false] call rhs_fnc_setTurretLock;
};