/*
	rhs_fnc_a29_MFD_start - MFD damage indicators startup
	a: reyhard
*/
params ["_vehicle", "_engineState"];

//systemChat format["%1",_this];
if(
	!_engineState OR
	!(call rhs_fnc_findPlayer in _vehicle) OR
	(_vehicle animationSourcePhase "rpm" > 0.1)
)exitWith{};

_vehicle spawn
{
	_this setUserMFDValue [14,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,0.5];
	sleep 2;
	_this setUserMFDValue [14,
		_this getHitPointDamage "HitLAileron",
		_this getHitPointDamage "HitRAileron",
		_this getHitPointDamage "HitLCElevator",
		_this getHitPointDamage "HitRElevator",
		_this getHitPointDamage "HitLCRudder",
		_this getHitPointDamage "HitFuel",
		_this getHitPointDamage "HitFuel2",
		_this getHitPointDamage "HitEngine",
		_this getHitPointDamage "Hit_Optic_FLIR"
	];
};