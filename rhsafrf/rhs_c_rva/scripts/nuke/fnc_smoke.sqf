#define __flame_particleArray(scale,lifetime,alpha) [["\a3\data_f\ParticleEffects\Universal\Universal", 16, 4, 18],"","Billboard",1,30*lifetime,[0, 0, 0],[0, 0, 0],3,0.7,1,0.03,[40*scale, 30*scale, 20*scale],[[1,1,1, 0.5*alpha],[1,1,1, 0.4*alpha], [1,1,1, 0.2*alpha], [1,1,1, 0.1*alpha],[1,1,1, 0*alpha]],[-.5,-.1,0],1,0,"","",_core];
#define __hat_particleArray(scale,lifetime,alpha) [["\a3\data_f\ParticleEffects\Universal\Universal", 16, 7, 48],"","Billboard",1,60*lifetime,[0, 0, 0],[0, 0, 0],3,0.7,1,0.03,[40*scale, 50*scale, 50*scale],[[1,1,1, 0],[1,1,1, 1*alpha], [1,1,1, 1*alpha], [1,1,1, 0.2*alpha],[1,1,1, 0]],[-.5,-.1,0],1,0,"","",_core];
#define __cone_particleArray(scale,lifetime,alpha) [["\a3\data_f\ParticleEffects\Universal\Universal",16, 7, 48],"","Billboard",1,100*lifetime,[0, 0, 0],[0, 0, 0],3,1.45-0.75*alpha,1,0.03,[20*scale, 15*scale, 15*scale],[[1,1,1, 0.3*alpha],[1,1,1, 0.3*alpha],[1,1,1, 0.6*alpha], [1,1,1, 0.4*alpha], [1,1,1, 0.2*alpha],[1,1,1, 0.1*alpha],[1,1,1, 0]],[.1],1,0,"","",_core];
#define __smoke_particleArray(scale,lifetime,alpha) [["\a3\data_f\ParticleEffects\Universal\Universal", 16, 7, 48],"","Billboard",1,10*lifetime,[0, 0, 0],[0, 0, 0],3,1.25,1,0,[30*scale, 25*scale, 20*scale, 15*scale],[[1,1,1, 0],[1,1,1, 0.3*alpha],[1,1,1, 0.6*alpha], [1,1,1, 0.8*alpha], [1,1,1, 1*alpha],[1,1,1, 1*alpha],[1,1,1, 0]],[.1],1,0,"","",_core];
params["_pos","_yield","_radius"];

if(!hasInterface)exitWith{};
sleep 4;
_core = "logic" createVehicleLocal [0,0,0];
_core setposATL _pos;
_timefactor = 0.03*_yield^0.5;
_effectSize = 0.1*_yield^0.3;

playSound3D ["rhsafrf\addons\rhs_c_rva\scripts\nuke\boom.ogg", player, false, _pos, 1, 1, _radius*5];

//_core say ["nuclear_boom", _radius*5];

_hat = "#particlesource" createVehicleLocal [0,0,0];
_hat setposATL _pos;
_hat setParticleParams __hat_particleArray(_effectSize,_timefactor,1);
_hat setParticleCircle [30*_effectSize, [0,0,10]];
_hat setDropInterval 0.0002;
_hat setParticleRandom [10*_timefactor, [30*_effectSize, 30*_effectSize, 2*_effectSize],[0,0,0],0,0,[0,0,0,0],0,0];

_flame = "#particlesource" createVehicleLocal [0,0,0];
_flame setposATL _pos;
_flame setParticleParams __flame_particleArray(_effectSize,_timefactor,1);
_flame setParticleCircle [70*_effectSize, [0,0,0]];
_flame setDropInterval 0.0002;
_flame setParticleRandom [10*_timefactor, [10*_effectSize, 10*_effectSize, 2*_effectSize],[0,0,0],0,0,[0,0,0,0],0,0];

_orb = "#particlesource" createVehicleLocal [0,0,0];
_orb setposATL _pos;
_orb setParticleParams __hat_particleArray(_effectSize,_timefactor,1);
_orb setParticleCircle [70*_effectSize, [0,0,0]];
_orb setDropInterval 0.0002;
_orb setParticleRandom [10*_timefactor, [10*_effectSize, 10*_effectSize, 2*_effectSize],[0,0,0],0,0,[0,0,0,0],0,0];

_cone = "#particlesource" createVehicleLocal [0,0,0];
_cone setposATL _pos;
_cone setParticleParams __cone_particleArray(_effectSize,_timefactor,1);
_cone setParticleCircle [100*(_effectSize^.5), [0, -100*(_effectSize^.5), 0]];
_cone setDropInterval 0.01;
_cone setParticleRandom [10*_timefactor, [10*_effectSize, 10*_effectSize, 2*_effectSize],[0,0,10],0,0,[0,0,0,0],0,0];

_smoke = "#particlesource" createVehicleLocal [0,0,0];
_smoke setposATL _pos;
_smoke setParticleParams __smoke_particleArray(1,_effectSize,1);
_smoke setParticleCircle [300*_effectSize, [0, -30, 0]];
_smoke setDropInterval 0.003;
//_smoke setParticleRandom [20*_timefactor, [20*_effectSize, 20*_effectSize, 2*_effectSize],[0,0,0],0,0,[0,0,0,0],0,0];

sleep .1;
deleteVehicle _flame;
deleteVehicle _hat;
deleteVehicle _orb;

sleep 5*_timefactor;
_step = 1/(30*_timefactor);
for [{_i=1},{_i >= .5},{_i = _i - _step}] do {
	_cone setParticleParams __cone_particleArray(_effectSize,2*_i,_i);
	_cone setParticleCircle [150*(_effectSize^.5), [0, -100*(_effectSize^.5)*_i, 0]];
	_smoke setParticleParams __smoke_particleArray(_effectSize,_effectSize,_i);
	sleep 1;
};
deleteVehicle _smoke;
for [{_i=0.5},{_i >= 0},{_i = _i - _step}] do {
	_cone setParticleParams __cone_particleArray(_effectSize,2*_i,_i);
	_cone setParticleCircle [150*(_effectSize^.5), [0, -100*(_effectSize^.5)*_i, 0]];
	sleep 1;
};
deleteVehicle _cone;
deleteVehicle _core;