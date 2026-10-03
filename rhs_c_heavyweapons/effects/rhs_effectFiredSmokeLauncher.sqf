/*
	Name: 		RHS_fnc_effectFiredSmokeLauncher
	
	Desc:		Muzzle effect for vehicle smoke launchers
	
	Param(s):	std fired event output
	
	Returns:	null
	
	Author:		Jiaan "Bakerman"
*/

private [ "_count", "_curnt", "_speed", "_posBeg", "_posEnd", "_vector", "_launchPos", "_launchVel", "_particle"];

// Input
params ["_unit","_launcher","","","_ammo","_mag"];

// Ammo count
_count = getNumber (configFile >> "cfgMagazines" >> _mag >> "count");

// Fix for 'ammo' command not returning correct value on driver weapon
if (_launcher in (_unit weaponsTurret [-1])) then {
	_curnt = _count - (_unit magazineTurretAmmo [_mag, [-1]]);
} else {
	_curnt = _count - (_unit ammo _launcher);
};
if (_curnt == 0) then { _curnt = _count; };

// Shell speed
_speed = getNumber (configFile >> "cfgMagazines" >> _mag >> "initSpeed");

// Position & Vector
_posBeg = _unit modelToWorldVisual (_unit selectionPosition [format ["smoke%1", _curnt], "Memory"]);
_posEnd = _unit modelToWorldVisual (_unit selectionPosition [format ["smoke%1_dir", _curnt], "Memory"]);
_vector = _posBeg vectorFromTo _posEnd;

// Get launch position and velocity for shell
_launchPos = _posBeg vectorAdd _vector;
_launchVel = _vector vectorMultiply _speed;

// Fire shells where main turret is local
if (_unit turretLocal [0]) then {
	// Create and fire shell from launcher
	private _shell = createVehicle [getText(configFile >> "cfgAmmo" >> _ammo >> "rhs_smokeShell"), _launchPos, [], 0, "CAN_COLLIDE"];
	_shell setVectorUp _vector;
	_shell setVelocity _launchVel;
};

// Crate and fire smoke cap particle
_particle = "#particlesource" createVehicleLocal _posBeg;
_particle setParticleClass "RHS_tank_Catridge";
_particle setParticleParams
[
	["rhsafrf\addons\rhs_heavyweapons\3d17\rhs_smokecap", 1, 0, 1], //shape name
	"", //animation name
	"SpaceObject", //type
	1, 20, //timer period & life time
	[0, 0, 0], //position
	(velocity _unit) vectorAdd (_vector vectorMultiply (6 + random 18)), //moveVelocity
	3 + random 3, 99, 1, 0.15, //rotation velocity, weight, volume, rubbing
	[1], //size
	[[1,1,1,1]], //color
	[0], //animationPhase (animation speed in config)
	0.3, //randomdirection period
	1, //random direction intensity
	"", //onTimer
	"", //before destroy
	_particle, //object
	0, //angle
	true, //on surface
	0.15 //bounce on surface
];
_particle setDropInterval 10;
_particle spawn {
	sleep 1;
	deleteVehicle _this;
};