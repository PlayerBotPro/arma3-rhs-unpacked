/*
	BM21 Fire VFX
	rhs_fnc_bm21_fired

	a: reyhard
*/
params["_vehicle","","","","","","_missile"];

private _missileDir = getDir _missile;
//systemChat format["%1",_missiledir];
// Get muzzle positions & vector between them
private _particlePos = getposaslvisual _missile;
private _particleVector = ((vectorDir _missile) vectorMultiply -9);
_particleVector = [_particleVector # 0,_particleVector # 1,(_particleVector # 2)/5];
//systemChat format["vec %1",_particleVector];

private _particles = [];

// Fire
private _particle = "#particlesource" createVehicleLocal _particlePos;
_particle setPosASL _particlePos;
_particle setParticleCircle [0.1, [0, 0, 0]];
_particle setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 1, [0, 0, 0, 0], 0, 0];
_particle setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 0, 32], "", "Billboard", 0.1, 0.15, [0, 0, 0], _particleVector, 0, 1.23, 1, 0, [0.5, 1], [[1, 1, 1, 0.1]], [0.5], 1, 0, "", "", _particle, 0, false, 0, [[1000,1000,1000,1000]]];
_particle setDropInterval 0.0001;
_particles pushBack _particle;
// Flash
_particle = "#lightpoint" createVehicleLocal _particlePos;
_particle setPosASL _particlePos;
_particle setLightBrightness 1;
_particle setLightAmbient [0.8, 0.6, 0.2];
_particle setLightColor [1, 0.5, 0.2];
_particles pushBack _particle;

// Rear dust & clouds
if(particlesQuality >= 2)then
{
	private _particle = "#particlesource" createVehicleLocal _particlePos;
	_particle setPosASL _particlePos;
	_particle setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 13,0], "", "Billboard", 1, 45, [0, 0, 0], _particleVector, 0, 1.27, 1, 0.4, [1, 12], [[0.5,0.5,0.5,0.22],[0.5,0.5,0.5,0.12],[0.5,0.5,0.5,0.1],[0.5,0.5,0.5,0.09],[0.5,0.5,0.5,0.01]], [1000], 0, 0, "", "", _particle,0,true,0.1];
	_particle setDropInterval 0.153;
	_particle setParticleRandom [0, [0.5, 0.5, 0.5], [3.5, 3.5, 1.5], 10, 0.1, [0, 0, 0, 0], 0.1, 0.1,0,0.5];
	_particles pushBack _particle;


	private _particle = "#particlesource" createVehicleLocal _particlePos;
	_particle setPosASL _particlePos;
	_particle setParticleClass "rhs_CircleDustTank";
	_particle setParticleCircle [0.5,[4,4,0]];
	_particle setDropInterval 0.01;
	_particles pushBack _particle
};
if(particlesQuality >= 1)then
{
	private _particle = "#particlesource" createVehicleLocal _particlePos;
	_particle setPosASL _particlePos;
	_particle setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 13,0], "", "Billboard", 1, 10, [0, 0, 0], _particleVector, 0, 1.27, 1, 0.4, [1, 12], [[0.5,0.5,0.5,0.22],[0.5,0.5,0.5,0.12],[0.5,0.5,0.5,0.08],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.01]], [1000], 0, 0, "", "", _particle,0,true,0.1];
	_particle setParticleRandom [0, [0.5, 0.5, 0.5], [3.5, 3.5, 1.5], 10, 0.1, [0, 0, 0, 0], 0.1, 0.1,0,0.5];
	_particle setDropInterval 0.01;
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
	_particle setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 13,0], "", "Billboard", 1, 4, [0, 0, 0], _particleVector, 0, 1.27, 1, 0.4, [1, 12], [[0.5,0.5,0.5,0.22],[0.5,0.5,0.5,0.12],[0.5,0.5,0.5,0.08],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.01]], [1000], 0, 0, "", "", _particle,0,true,0.1];
	_particle setParticleRandom [0, [0.5, 0.5, 0.5], [3.5, 3.5, 1.5], 10, 0.1, [0, 0, 0, 0], 0.1, 0.1,0,0.5];
	_particle setDropInterval 0.015;
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