/*
	Name: 		RHSUSF_fnc_effectFiredSmokeLauncher
	
	Desc:		Muzzle effect for vehicle smoke launchers
	
	Param(s):	std fired event output
	
	Returns:	null
	
	Author:		Jiaan "Bakerman"
*/

// Input
params ["_unit","_launcher","","","_ammo","_mag","","_gunner",["_mask",["smoke","","_dir"],[[]]]];

// Private variables
private ["_curnt"];

// Ammo count
private _count = getNumber (configFile >> "cfgMagazines" >> _mag >> "count");
if (_launcher in (_gunner weaponsTurret [-1])) then {
	_curnt = _count - (_gunner magazineTurretAmmo [_mag, [-1]]);
} else {
	_curnt = _count - (_gunner ammo _launcher);
};
if (_curnt == 0) then { _curnt = _count; };

// Shell speed
private _speed = getNumber (configFile >> "cfgMagazines" >> _mag >> "initSpeed");

// Position & Vector
private _posBeg = _unit modelToWorldVisual (_unit selectionPosition [format ["%1%2%3", _mask # 0,_curnt,_mask # 1], "Memory"]);
private _posEnd = _unit modelToWorldVisual (_unit selectionPosition [format ["%1%2%3", _mask # 0,_curnt,_mask # 2], "Memory"]);
private _vector = _posBeg vectorFromTo _posEnd;

// Get launch position and velocity for shell
private _launchPos = _posEnd;
private _launchVel = _vector vectorMultiply _speed;

// Has smoke cap?
private _smokeCap = getNumber (configFile >> "cfgVehicles" >> typeOf _unit >> "rhs_hasSmokeCap");
if(_smokeCap isEqualTo 1)then
{
	// Crate and fire smoke cap particle
	private _particle = "#particlesource" createVehicleLocal _posBeg;
	_particle setParticleClass "RHS_tank_Catridge";
	_particle setParticleParams
	[
		["rhsusf\addons\rhsusf_heavyweapons\galix\rhs_smokecap", 1, 0, 1], //shape name
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
};

// Exit if turret is not local
if !(_unit turretLocal [0]) exitWith {};

// Create and fire shell from launcher
private _shell = createVehicle [getText(configFile >> "cfgAmmo" >> _ammo >> "rhs_smokeShell"), _launchPos, [], 0, "CAN_COLLIDE"];
_shell setVectorUp _vector;
_shell setVelocity _launchVel;