/*
	remove vehicle velocity from
*/

params ["_u","","","","","","_p"];

if(not isPlayer _u)exitWith{};

_p setVelocity ( (velocity _p) vectorDiff (velocity vehicle _u));