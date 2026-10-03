/*
	rhs_fnc_tripwireFlare_m49a1
*/
params["_object","","","_pos","","","_ammo"];

// Data read from ammo config
private _flareCfg 		= configFile >> "CfgAmmo" >> (_ammo # 4);
private _flareUsedType	= getText (_flareCfg >> "rhs_flare_used");
private _flareOffset	= getArray (_flareCfg >> "rhs_flare_offset");

//systemChat format["test %1",_flareCfg];

private _vehicle = _flareUsedType createVehicleLocal [0,0,0];
private _pos = (_pos vectorAdd [0.03,+0.1,-(_pos select 2)]);
_vehicle setpos _pos;

private _posParticle = (_pos vectorAdd _flareOffset);

//_signal = "rhs_40mm_red_instant" createVehicleLocal [0,0,0];
//_signal attachTo [_vehicle,[0,0,0.3]];

_lightSource = "#lightpoint" createVehicleLocal _posParticle;
_lightSource setLightColor [1,0.6,0];
_lightSource setLightIntensity 15690;
_lightSource setLightAmbient [1,0.6,0];
_lightSource setLightUseFlare true;
_lightSource setLightDayLight true;
_lightSource setLightAttenuation [0,1,0,40];

// Crate and fire smoke cap particle
// https://www.youtube.com/watch?v=xW0aKBIFKJ8
_particle = "#particlesource" createVehicleLocal _posParticle;
_particle setParticleClass "RHS_tank_Catridge";
_particle setParticleParams
[
	["rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_cap", 1, 0, 1], //shape name
	"", //animation name
	"SpaceObject", //type
	1, 20, //timer period & life time
	[0, 0, 0], //position
	[random[-5,0,5],random[-5,0,5],random[5,8,12]], //moveVelocity
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

_particle = "#particlesource" createVehicleLocal _posParticle;
_particle setParticleClass "RHS_tank_Catridge";
_particle setParticleParams
[
	["rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_spoon", 1, 0, 1], //shape name
	"", //animation name
	"SpaceObject", //type
	1, 20, //timer period & life time
	[0, 0, 0], //position
	[random[-5,0,5],random[-5,0,5],random[5,8,12]], //moveVelocity
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


private _particle1 = "#particlesource" createVehicleLocal _posParticle;
_particle1 setParticleCircle [0, [0, 0, 0]];
_particle1 setParticleRandom [2, [0.25, 0.25, 0], [0.375, 0.375, 0.4], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
private _particle1_params = [["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 12, 8], "", "Billboard", 1, 6, [0, 0, 0], [0, 0, 1.45], 0, 10, 7.7, 0.675, [0, 0.2, 1, 4], [[1, 1, 1, 0.1], [1, 1, 1, 0.1], [1, 1, 1, 0.1]], [0.08], 1, 0, "", "", _particle1];
_particle1 setParticleParams _particle1_params;
_particle1 setDropInterval 0.05;

private _particle2 = "#particlesource" createVehicleLocal _posParticle;
_particle2 setParticleCircle [0, [0, 0, 0]];
_particle2 setParticleRandom [0, [0.1, 0.1, 0], [0.275, 0.275, 0.6], 0, 0.25, [0, 0, 0, 0.1], 0, 1];
private _particle2_params = [["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 12, 8], "", "Billboard", 1, 2, [0, 0, 0], [0, 0, 3.75], 0, 10, 7.9, 3.475, [0.3, 1, 1, 1, 0.2], [[1, 1, 1, 0.4], [0.25, 0.25, 0.25, 0.3], [0.5, 0.5, 0.5, 0.1]], [0.38], 1, 0, "", "", _particle2];
_particle2 setParticleParams _particle2_params;
_particle2 setDropInterval 0.01;

private _particle3 = "#particlesource" createVehicleLocal _posParticle;
_particle3 setParticleCircle [0, [0, 0, 0]];
_particle3 setParticleRandom [0, [0, 0, 0], [0.1, 0.1, 0.5], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
private _particle3_params = [["\a3\Data_f\ParticleEffects\Universal\SparksDot.p3d", 8, 1, 8], "", "SpaceObject", 1, 0.2, [0, 0, 0], [0, 0, 1.05], 0, 10, 7.9, 0.075, [0.1, 0.1, 0.1], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _particle3];
_particle3 setParticleParams _particle3_params;
_particle3 setDropInterval 0.03;

private _particle4 = "#particlesource" createVehicleLocal _posParticle;
_particle4 setParticleCircle [0, [0, 0, 0]];
_particle4 setParticleRandom [0, [0, 0, 0.2], [0.175, 0.175, 1], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
private _particle4_params = [["\a3\Data_f\ParticleEffects\Universal\SparksBall.p3d", 8, 1, 8], "", "SpaceObject", 1, 0.15, [0, 0, 0], [0, 0, 1], 0, 10, 7.9, 0.075, [1, 0.2], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _particle4];
_particle4 setParticleParams _particle4_params;
_particle4 setDropInterval 0.05;

private _flareLoop = objNull;
// Run it only on server
if(isServer)then
{
	_flareLoop = createSoundSource ["SoundFlareLoop_F",[0,0,0],[],0];
	_flareLoop setPos _pos;
};
sleep 50;
{deleteVehicle _x}foreach [_particle1,_particle2,_particle3,_particle4,_lightSource];

if(isServer)then
{
	deleteVehicle _flareLoop;
};