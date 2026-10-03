scriptName "rhs_902a_effects";

if not ("OBJECT" == typeName _this) exitWith {diag_log format ["ERROR! Can't launch smoke. Tank not a object! %1",_this];};

private ["_tank"];
_tank = _this;
if not ("OBJECT" == typeName _tank) exitWith {};
private ["_vector","_shells","_qty","_vel","_useTDir","_angle","_dir"];
_vector = vectorDir _tank;
_shells = [];
_qty     = getNumber (configFile >> "CfgVehicles" >> typeOf _tank >> "smokeLauncherGrenadeCount");
_vel     = getNumber (configFile >> "CfgVehicles" >> typeOf _tank >> "smokeLauncherVelocity");
_useTDir = getNumber (configFile >> "CfgVehicles" >> typeOf _tank >> "smokeLauncherOnTurret");
_angle   = getNumber (configFile >> "CfgVehicles" >> typeOf _tank >> "smokeLauncherAngle");
_elevt   = getNumber (configFile >> "CfgVehicles" >> typeOf _tank >> "smokeLauncherElevation");
_dir = direction _tank;
if ((1 == _useTDir) && (0 < count weapons _tank)) then
{
	_dir = _tank weaponDirection ((weapons _tank) select 0);
	_dir = (((_dir select 0) atan2 (_dir select 1)) + 360) % 360;
};
private ["_deltaDir","_arc","_initDist","_logic"];
_deltaDir = _angle / _qty;
_arc = _deltaDir * (_qty - 1);
_initDist = (((boundingBox _tank) select 1) select 2) - (((boundingBox _tank) select 0) select 2);
_logic = "logic" createVehicleLocal (getPos _tank);
_logic setDir _dir;
private ["_i"];
for "_i" from 0 to (_qty - 1) do
{
	private ["_Hdir","_vH","_vV","_Gvel","_pH","_pV"];
	_Hdir = (_i * _deltaDir) - _arc / 2;
	_vH = ((_vel - random 3) + 1) * cos _elevt;
	_vV = ((_vel - random 3) + 1) * sin _elevt;
	_Gvel = [_vH * sin (_Hdir + _dir), _vH * cos (_Hdir + _dir), _vV];
	_pH = _initDist * cos _elevt;
	_pV = _initDist * sin _elevt;
	private ["_shell"];
	_shell = "SmokeShellVehicle" createVehicleLocal (
		_tank modelToWorld [_pH * sin _Hdir, _pH * cos _Hdir, _pV]
	);
	_shell setVelocity _Gvel;
	_shell setVectorDir _Gvel;
	_shells = _shells + [_shell];
};
deleteVehicle _logic;
{
	[_x, [1,1,1,1]] spawn
	{
		private ["_sh","_col","_c1","_c2","_c3"];
		_sh  = _this select 0;
		_col = _this select 1;
		_c1 = _col select 0;
		_c2 = _col select 1;
		_c3 = _col select 2;
		// ?????? ?????????? ???????
		private ["_zapal"];
		_zapal = "#particlesource" createVehicleLocal getpos _sh;
		_zapal setParticleRandom [0.03,[0.3,0.3,0.3],[1,1,1],0,0.2,[0,0,0,0],0,0,360];
		_zapal setParticleParams [
			["\a3\data_f\ParticleEffects\Universal\Universal", 16, 13, 3, 0],
			"",				// Animation name
			"Billboard",	// Type of particle (either "Billboard" or "SpaceObject")
			1,				// The period of calling the "OnTimer" event (in sec).
			0.1,			// Life time of the particle (in sec).
			[0, 0, 0],		// Position - Either 3D coordinate (x, y, z) or name of the selection
			[0, 0, 0],		// MoveVelocity - 3D vector (x, y, z)
			1,				// RotationVelocity - Float number which determines number of rotations in one second. 
			0.01,			// Weight - Weight of the particle (kg).
			0.01,			// Volume - Volume of the particle (m^3). 
			0.05,			// Rubbing - Float number without dimension which determines the impact of the density of the environment on this particle.
			[0.1, 1],		// Size - Size of the particle in time to render (m). 
			[				// Color - Colour of the particle in time to render (RGBA). 
				[0.8, 0.6, 0.2, -1.00],
				[0.8, 0.6, 0.2, -0.10],
				[0.0, 0.0, 0.0,  0.00],
				[0.8, 0.6, 0.2, -0.01]
			],
			[1000],			// AnimationPhase 
			0.1,			// RandomDirectionPeriod - Period of change of the velocity vector (s). 
			0.1,			// RandomDirectionIntensity - Each MoveVelocity component will be changed with random value from interval <0, RandomDirectionIntensity>. 
			"",				// OnTimer - Name of the script to run every period determined by TimerPeriod property. 
			"",				// BeforeDestroy - Name of the script to run right before destroying the particle. 
			_sh				// Object - Object to bind this particle to. 
		];
		_zapal setDropInterval 0.001;
		[_zapal] spawn {private ["_zp"]; _zp = _this select 0; sleep 4; deleteVehicle _zp;};
		// ??????? ??? ???????????? ?????? ? ??????
		private ["_flash"];
		_flash = "#lightpoint" createVehicleLocal getPos _sh;
		_flash setLightBrightness 0.1;
		_flash setLightAmbient[0.8, 0.6, 0.2];
		_flash setLightColor[1, 0.5, 0.2];
		_flash lightAttachObject [_sh, [0,0,0]];
		[_flash] spawn
		{
			private ["_fl","_ii"];
			_fl = _this select 0;
			for "_ii" from 1 to  6 do {sleep 0.02; _fl setLightBrightness (0.01 + (_ii / 30));};
			for "_ii" from 0 to 10 do {sleep 0.02; _fl setLightBrightness (0.1 - (_ii / 100));};
			deleteVehicle _fl;
		};
		// ?????? ???? ??? ???????
		private ["_sled"];
		[_sh] spawn
		{
			private ["_sled","_shl"];
			_shl = _this select 0;
			_sled = "#particlesource" createVehicleLocal getPos _shl;
			_sled setDropInterval 0.02;
			_sled setParticleParams [["\Ca\Data\Cl_basic.p3d",1,0,1],"","Billboard",1,5,[0,0,0],[0,0,0],0,10,7.9,0.075,[5,10,15,20],[[1,1,1,1],[1,1,1,0.5],[1,1,1,0]],[0],1,0,"","",_shl];
			_sled setParticleRandom [4,[3,3,3],[0.1,0.1,0.1],0,0.25,[0,0,0,0],0,0];
			sleep 4;
			deleteVehicle _sled;
		};
		// ???????? ???
		private ["_smoke"];
		_smoke = "#particlesource" createVehicleLocal getPos _sh;
		_smoke setParticleParams [["\a3\data_f\ParticleEffects\Universal\Universal",16,12,8,0],"","Billboard",1,3,[0,0,0],[0,0,0.5],0,1.277,1,0.025,[0.5,8,12,15],[[_c1,_c2,_c3,1],[_c1,_c2,_c3,1],[_c1,_c2,_c3,1],[_c1,_c2,_c3,0]],[0.2],1,0.04,"","",_sh];
		_smoke setParticleRandom [2,[0.3,0.3,0.3],[1.5,1.5,1],0,0.2,[0,0,0,0.1],0,0,360];
		_smoke setDropInterval 0.1;
		sleep (55 + random 3);
		deleteVehicle _smoke;
	};
} foreach _shells;
true 