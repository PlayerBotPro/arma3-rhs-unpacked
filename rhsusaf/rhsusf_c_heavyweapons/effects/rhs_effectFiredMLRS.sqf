/*
	MLRS Fire VFX
	rhsusf_fnc_effectFiredMLRS
	BIS_fnc_effectFiredCruiseMLRS

	a: reyhard
*/
params["_vehicle","","","","","","_missile"];

// Get muzzle positions & vector between them
private _particlePos = _vehicle modelToWorldVisualWorld (_vehicle selectionPosition "konec hlavne");
private _particleDir = _vehicle modelToWorldVisualWorld (_vehicle selectionPosition "usti hlavne");
private _particleVector = (_particleDir vectorFromTo _particlePos) vectorMultiply 14;

// Create particle missile effect & attach it to missile
private _particle = "#particlesource" createVehicleLocal _particlePos;
_particle setPosASL _particlePos;

// Set particle effects parameters
_particle setParticleCircle [0, [0, 0, 0]];
_particle setParticleRandom [0, [0, 0, 0], [4, 4, 4], 53, 0.25, [0, 0, 0, 1], 2, 2];
_particle setParticleParams [["\a3\Data_f\ParticleEffects\Universal\smoke.p3d", 1, 0, 0], "", "Billboard", 1, 12.95, [0, -2, 0], [0, 0, 0], 0, 1.375, 1, 0.2, [1, 12, 16, 24], [[1, 1, 1, 0.1], [1, 1, 1, 0]], [1], 0, 0, "", "", _missile];
_particle setDropInterval 0.001;

// Spawn new loop where suspension is allowed
[_particle,_missile] spawn
{
	params["_particle","_missile"];

	// doesn't work with shot shell
	//_particle attachTo [_missile,[0,0,0]];
	// Define boot time (7 seconds)
	private _boostTime = time + 7;
	while{time < _boostTime}do
	{
		_particle setPosASL (getPosASLVisual _missile);
		private _directionParams = linearConversion [0,3,_boostTime-time,4,7,true];
		_particle setParticleRandom [0, [0, 0, 0], [_directionParams, _directionParams, 0], 53, 0.25, [0, 0, 0, 1], 2, 2];
	};
	// Delete particle
	deleteVehicle _particle;
};

// Rear dust & clouds
private _particles = [];

if(particlesQuality >= 2)then
{
	private _particle = "#particlesource" createVehicleLocal _particlePos;
	_particle setPosASL _particlePos;
	_particle setParticleClass "RHS_MLRSFired1";
	_particle setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 13,0], "", "Billboard", 1, 45, [0, -4, 0], _particleVector, 0, 1.22, 1, 0.4, [1, 12], [[0.5,0.5,0.5,0.22],[0.5,0.5,0.5,0.12],[0.5,0.5,0.5,0.1],[0.5,0.5,0.5,0.09],[0.5,0.5,0.5,0.01]], [1000], 0, 0, "", "", objNull];
	_particles pushBack _particle;


	private _particle = "#particlesource" createVehicleLocal _particlePos;
	_particle setPosASL _particlePos;
	_particle setParticleClass "rhs_CircleDustTank";
	_particle setParticleCircle [0.5,[4,4,0]];
	_particle setDropInterval 0.0001;
	_particles pushBack _particle
};
if(particlesQuality >= 1)then
{
	private _particle = "#particlesource" createVehicleLocal _particlePos;
	_particle setPosASL _particlePos;
	_particle setParticleClass "RHS_MLRSFired1M";
	_particle setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 13,0], "", "Billboard", 1, 18, [0, -4, 0], _particleVector, 0, 1.22, 1, 0.4, [1, 12], [[0.5,0.5,0.5,0.22],[0.5,0.5,0.5,0.12],[0.5,0.5,0.5,0.08],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.01]], [1000], 0, 0, "", "", objNull];
	_particles pushBack _particle;

	private _particle = "#particlesource" createVehicleLocal _particlePos;
	_particle setPosASL _particlePos;
	_particle setParticleClass "rhs_CircleDustTank";
	_particle setParticleCircle [0.5,[3,3,0]];
	_particles pushBack _particle
};
if(particlesQuality >= 0)then
{
	private _particle = "#particlesource" createVehicleLocal _particlePos;
	_particle setPosASL _particlePos;
	_particle setParticleClass "RHS_MLRSFired1L";
	_particle setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 13,0], "", "Billboard", 1, 8, [0, -4, 0], _particleVector, 0, 1.22, 1, 0.4, [1, 12], [[0.5,0.5,0.5,0.22],[0.5,0.5,0.5,0.12],[0.5,0.5,0.5,0.08],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.01]], [1000], 0, 0, "", "", objNull];
	_particles pushBack _particle;

	private _particle = "#particlesource" createVehicleLocal _particlePos;
	_particle setPosASL _particlePos;
	_particle setParticleClass "rhs_CircleDustTankL";
	_particles pushBack _particle
};

// Delete particles
_particles spawn
{
	sleep 0.1;
	{deleteVehicle _x}foreach _this
};