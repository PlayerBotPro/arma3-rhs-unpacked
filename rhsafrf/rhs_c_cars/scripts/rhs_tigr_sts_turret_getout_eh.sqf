/*
a: reyhard


*/

params["_v"];

// if both turret are locked perform loop with 0.5s interval till pkm turret is opened at least
if( (_v lockedTurret [0]) && (_v lockedTurret [1]) )then{
	[_v,[0],false] call rhs_fnc_setTurretLock;
};