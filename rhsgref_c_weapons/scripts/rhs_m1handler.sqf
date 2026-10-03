/*
RHS_fnc_m1Handler
*/
params ["_unit", "_weapon", "", "", "", "", "_projectile", ""];
private _camPos = positionCameraToWorld [0,0,0];

if ((_camPos distance _unit) <= 50) then
{
	if((_unit ammo _weapon) isEqualTo 0) then
	{
		// Get basic data
		private _pos		= getPosASLVisual _projectile;
		private _vector		= _unit weaponDirection _weapon;
		private _vector_dir	= _unit vectorModelToWorld  [0.4,0.0,2.1];

		// Create spent clip
		private _particle = "#particlesource" createVehicleLocal [0,0,0];
		_particle setdir getdir _unit;
		_particle setposasl _pos;
		_particle setParticleParams [["rhsgref\addons\rhsgref_c_weapons\data\m1clip_empty.p3d", 1, 0, 1], "", "SpaceObject", 1, 60, [-0.0, -0.1, 0.0], _vector_dir, 0.6, 12, 1.7, 0, [1], [[1, 1, 1, 1]], [1], 0, 0, "", "", _particle,0,true,0.3,[[0,0,0,0]],_vector];
		_particle setParticleRandom [0,[0,0,0],[0,0,0],2.3,0,[0,0,0,0],0,0,0,0];
		_particle setDropInterval 1;

		if ((_unit isEqualTo player) && (cameraView == "INTERNAL")) then
		{
			playSound "RHSGREF_garandPing";
		} else
		{
			_particle say3D "RHSGREF_garandPing";
		};
		// delete particle
		_particle spawn {sleep 0.5;deleteVehicle _this};
	};
};
