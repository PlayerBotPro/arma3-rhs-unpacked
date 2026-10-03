
	class RocketBase;
	class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
	class M_Titan_AA : MissileBase
	{
		class Components;
	};
	class Missile_AA_04_F: MissileBase //Falchion
	{
		class Components;
	};

// AAMs

	class rhs_ammo_Sidewinder_AA: Missile_AA_04_F
	{
		model				= "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
		proxyShape			= "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
		hit					= 150;
		indirectHit			= 90;
		indirectHitRange	= 14;
		proximityExplosionDistance = 19;

		maneuvrability		= 30;
		simulationStep		= 0.001;
		airLock				= 2;
		irLock				= 1;
		cost				= 1500;
		maxSpeed			= 1029;
		timeToLive			= 35;
		sideAirFriction		= 0.2;
		trackOversteer		= 0.95;
		trackLead			= 0.75;
		initTime			= 0;
		thrustTime			= 3;
		thrust				= 390;
		fuseDistance		= 300;
		explosionAngle		= 60;
		CraterEffects		= "AAMissileCrater";
		explosionEffects	= "AAMissileExplosion";
		effectsMissile		= "rhs_missile3";
		whistleDist			= 20;
		cmImmunity			= 0.96;

		//Missile sensors definition
		missileLockMaxDistance	= 8000;
		missileLockMinDistance	= 300;
		missileLockMaxSpeed		= 555; //Track Rate 16.5 deg/s. tan(16.5) * MaxDist/2 = 573 m/s
		missileLockCone			= 180;
		missileKeepLockedCone	= 180; //High off-boresight capability claimed to be up to 90 deg away from boresight, so should be 180 deg total.
		weaponLockSystem		= CM_Lock_IR + CM_Missile;

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{

					class IRSensorComponent : SensorTemplateIR
					{
						SENS_RANGES_WVR(8000,8000)
						typeRecognitionDistance = -1; // distance how far the target type gets recognized
						angleRangeHorizontal = 120;     // sensor azimuth coverage in degrees
						angleRangeVertical = 120;       // sensor elevation coverage in degrees
						groundNoiseDistanceCoef = 0.03;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = -1;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = 0;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 555;
						minTrackableATL = 20;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class rhs_ammo_aim9: rhs_ammo_Sidewinder_AA
	{
	};
	class rhs_ammo_aim9m: rhs_ammo_Sidewinder_AA
	{
		model		= "\a3\Weapons_F_EPC\Ammo\Missile_AA_04_fly_F.p3d";
		proxyShape	= "\a3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";


		maneuvrability			= 30;
		cmImmunity				= 0.9;
		missileLockCone			= 90;
		missileKeepLockedCone	= 90;
	};
	class rhs_ammo_aim9m_ah64: rhs_ammo_aim9m
	{
		weaponType = bomb;
	};
	class rhs_ammo_aim9x: rhs_ammo_Sidewinder_AA
	{
	};
	class rhs_ammo_aim9x_ah64: rhs_ammo_aim9x
	{
		weaponType = bomb;
	};

	class rhs_ammo_aim120: rhs_ammo_Sidewinder_AA
	{
		proxyShape	= "\A3\Weapons_F\Ammo\Missile_AA_02_F.p3d";
		model		= "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";

		cmimmunity					= 0.92;
		timeToLive 					= 120;
		inittime					= 0.5;
		cost						= 1000;
		hit							= 230; //WDU - 41 / B 18 kg BF
		indirecthit					= 140;
		indirecthitrange			= 16;
		proximityExplosionDistance	= 25;
		maverickWeaponIndexOffset	= 0;
		airFriction 				= 0.014;
		sideAirFriction				= 0.23;
		trackOversteer				= 0.9;
		trackLead					= 1;
		thrustTime					= 5;
		thrust						= 260;
		maxSpeed					= 1300; //M4 max speed (4900 km/h)

		//Missile sensors definition
		missileLockMaxDistance = 22000;
		missileLockMinDistance = 2000;
		missileLockMaxSpeed = 833;
		//No hard data could be found, a lot of ambiguity here. Lock cone mostly limited by carrier's radar cone
		//During the most of its flight time, the missile receives coordinates from the fighter,
		//so its lock holding isn't affected by its own radar cone that much
		missileLockCone = 60;
		missileKeepLockedCone = 90;
		weaponLockSystem = CM_Lock_Radar + CM_Missile;
		autoSeekTarget			= 1;
		lockSeekRadius 			= 1000;

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						SENS_RANGES_BVR(30000,30000)
						typeRecognitionDistance = -1; // distance how far the target type gets recognized
						angleRangeHorizontal = 60;     // sensor azimuth coverage in degrees
						angleRangeVertical = 60;       // sensor elevation coverage in degrees
						groundNoiseDistanceCoef = 0.1;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = 200;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 12;        // A minimum tracking speed of F-15C radar lol
						maxSpeedThreshold = 42;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 1;
						minTrackableSpeed = 12;      // A minimum tracking speed of F-15C radar lol
						maxTrackableSpeed = 833;
						minTrackableATL = 70;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};
	class rhs_ammo_aim120d : rhs_ammo_aim120
	{
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AIM120D";
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AIM120D_fly.p3d";

		//Missile sensors definition
		missileLockMaxDistance = 28000;
		missileLockMinDistance = 2000;
		missileLockMaxSpeed = 3000;
		//No hard data could be found, a lot of ambiguity here. Lock cone mostly limited by carrier's radar cone
		//During the most of its flight time, the missile receives coordinates from the fighter,
		//so its lock holding isn't affected by its own radar cone that much
		missileLockCone = 60;
		missileKeepLockedCone = 90;
		thrustTime			= 9;
		thrust				= 260;
		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						SENS_RANGES_BVR(30000,30000)
						typeRecognitionDistance = -1; // distance how far the target type gets recognized
						angleRangeHorizontal = 60;     // sensor azimuth coverage in degrees
						angleRangeVertical = 60;       // sensor elevation coverage in degrees
						groundNoiseDistanceCoef = 0.1;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = 200;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 12;        // A minimum tracking speed of F-15C radar lol
						maxSpeedThreshold = 42;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 1;
						minTrackableSpeed = 12;      // A minimum tracking speed of F-15C radar lol
						maxTrackableSpeed = 833;
						minTrackableATL = 70;
						maxTrackableATL = 1e+010;
					};
				};
			};
		};
	};

// AGMs

	class Missile_AGM_02_F: MissileBase
	{
		class Components;
		class Eventhandlers;
	};
	// AGM114L
	class rhs_ammo_Hellfire_AT: Missile_AGM_02_F
	{
		HEAT_MACRO(rhs_ammo_Hellfire_AT_penetrator)

		model						="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
		proxyShape					="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";

		cost						= 300;
		hit							= 400;
		indirectHit					= 20;
		indirectHitRange			= 5;

		irLock						= 1;
		laserLock					= 0;
		airLock						= 0;

		maxSpeed					= 425;
		simulationStep				= 0.005;
		airFriction					= 0.03;
		sideAirFriction				= 0.15;
		initTime					= 0;
		thrustTime					= 3;
		thrust						= 199;
		fuseDistance				= 5;
		manualControl 				= 0;
		maxControlRange				= 8000;
		trackOversteer				= 1;
		trackLead					= 0.2;
		maneuvrability				= 21;
		timeToLive					= 70;
		whistleDist					= 4;

		effectsMissileInit			= "MissileDAR1";
		effectsMissile				= "rhs_missile2";

		//Missile sensors definition
		missileLockMaxDistance	= 8000;
		missileLockMinDistance	= 200;
		missileLockMaxSpeed		= 56;
		missileLockCone			= 90;
		missileKeepLockedCone	= 90;
		lockSeekRadius			= 2000;
		autoSeekTarget 			= 1;
		weaponLockSystem		= "2 + 16";
		maneuvDependsOnSpeedCoef = 0.018;

		flightProfiles[]	= {TopDown,LoalDistance,Cruise};
		class Direct{};
		class TopDown
		{
			ascendAngle		= 39;
			ascendHeight	= 360;
			minDistance		= 600;
			descendDistance	= 3000;
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 1000;
		};
		class Cruise
		{
			preferredFlightAltitude  = 500;
			lockDistanceToTarget = 500;
		};

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent : SensorTemplateActiveRadar
					{
						SENS_RANGES_BVR(8000,8000)
						typeRecognitionDistance = -1; // distance how far the target type gets recognized
						angleRangeHorizontal = 90;     // sensor azimuth coverage in degrees
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = -1;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 56;
						minTrackableATL = -1;
						maxTrackableATL = 1000;
					};
				};
			};
		};
		class Eventhandlers: Eventhandlers
		{
			class RHS_EH
			{
				fired = "_this call rhs_fnc_agm114_helper";
			};
		};
	};

	class rhsusf_ammo_basic_penetrator;
	class rhs_ammo_cluster_penetrator;

	class rhs_ammo_Hellfire_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		warheadName	= TandemHEAT;
		hit=310;
		RHA(1000,1000)
	};

	class RHS_ammo_AGM_114L: rhs_ammo_Hellfire_AT
	{
		activeSensorAlwaysOn = 0;
		missileLockCone			= 90;
		missileKeepLockedCone	= 90;
		flightProfiles[]	= {TopDown,LoalDistance};
		class TopDown
		{
			ascendAngle		= 26.5;
			ascendHeight	= 850;
			minDistance		= 1000;
			descendDistance	= 1200;
		};
	};

	class RHS_ammo_AGM_114K: rhs_ammo_Hellfire_AT
	{
		model				= \rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly;
		proxyShape			= \rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K;
		indirectHit			= 35;
		indirectHitRange	= 8;

		cost				= 250;

		airLock				= 0;
		irLock				= 1;
		laserLock			= 1;

		muzzleEffect = "";
		effectsMissileInit = "MissileDAR1"; //MissileDAR1 RocketBackEffectsRPG-good
		effectsMissile = "rhs_missile2";
		whistleDist = 4;
		aiAmmoUsageFlags = "64+128 + 512";

		//Missile sensors definition
		missileLockMaxDistance		= 8000;
		missileLockMinDistance		= 400;
		missileLockMaxSpeed			= 56;
		missileLockCone				= 40;
		missileKeepLockedCone		= 40;
		missileManualControlCone	= 40;
		weaponLockSystem			= "4 + 16";
		lockSeekRadius				= 1000;
		weaponType 					= "missileAA";

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(7000,7000)
						angleRangeHorizontal = 30;
						angleRangeVertical = 50;
						typeRecognitionDistance = -1;
						maxGroundNoiseDistance = 0;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						maxFogSeeThrough = 0.3;allowsMarking= 1;
					};
					/*class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(8000,8000)
						minTrackableSpeed = 0;
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 35;
						angleRangeVertical = 35;allowsMarking= 0;
					};*/
				};
			};
		};
	};
	// HE
	class RHS_ammo_AGM_114M: RHS_ammo_AGM_114K
	{
		submunitionAmmo = "";
		indirectHit = 140;
		indirectHitRange = 11;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 120;
		//sideAirFriction = 0.001;
		class CamShakeExplode
		{
			power = "(122*0.2)";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((10 + 122^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 122;
			duration = "((round (122^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(122^0.25)";
			duration = "((round (122^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((122^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet","RocketsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
	};
	// Thermobaric
	class RHS_ammo_AGM_114N: RHS_ammo_AGM_114M
	{
		AIAmmoUsageFlags = "64+128";
		cost=100;
		hit = 210;
		indirectHit = 85;
		indirectHitRange = 20;
		explosive = 1;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(110*0.2)";
			duration = "((round (110^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 110^0.5)*8)";
		};
		explosionEffects = "RHS_FAE_Explosion";
	};

	class RHS_Ammo_DAGR: MissileBase
	{
		maverickWeaponIndexOffset	= 80;
		model						="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_DAGR_fly";
		proxyShape					="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_DAGR";

		// same values as rhs_ammo_Hydra_HE_Heli
		hit							= 220;
		indirectHit					= 50;
		indirectHitRange			= 10;

		cost						= 100;
		maxSpeed					= 720;
		irLock						= 0;
		airLock						= 0;
		laserLock					= 1;
		maxControlRange				= 8000;
		trackOversteer				= 1;
		trackLead					= 1;
		maneuvrability				= 14; //8
		timeToLive					= 20;
		simulationStep				= 0.01;
		airFriction					= 0.1;
		sideAirFriction				= 0.3; //0.16
		initTime					= 0.002;
		thrustTime					= 1.57; //1.07
		thrust						= 825;
		fuseDistance				= 50;
		whistleDist					= 4;
		muzzleEffect				= "";
		effectsMissileInit			= "MissileDAR1"; //MissileDAR1 / RocketBackEffectsStaticRPG
		effectsMissile				= "rhs_missile1"; //missile2
		explosionEffects			= "ATMissileExplosion";
		weaponLockSystem			= 4;
		manualControl				= 1;
		aiAmmoUsageFlags			= "64 + 128+512";
		autoSeekTarget				= 1;
		lockSeekRadius				= 1000;

		//Missile sensors definition
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 1000;
		missileLockMaxSpeed = 56;
		missileLockCone = 25;
		missileKeepLockedCone = 25;

		flightProfiles[] = {Direct,LoalDistance};
		class Direct{};
		class LoalDistance
		{
			lockSeekDistanceFromParent = 200;
		};

		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(5000,5000)
						maxTrackableSpeed = 55;
						angleRangeHorizontal = 14;
						angleRangeVertical = 14;
						maxGroundNoiseDistance = 0;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						maxFogSeeThrough = 0.3;
					};
				};
			};
		};
		CfgAmmo_CamShakeExplode(122,15)
		CfgAmmo_CamShakeHit(122);
		CfgAmmo_CamShakeFire(122);
		CfgAmmo_CamShakePlayerFire(2);
	};

	class rhs_ammo_agm65: rhs_ammo_Hellfire_AT
	{
		HEAT_MACRO(rhs_ammo_agm65_penetrator)

		model		="\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_m_agm65_fly.p3d";
		proxyShape	="\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_m_agm65.p3d";

		cost				= 1000;
		hit					= 400;
		indirectHit			= 250;
		indirectHitRange	= 10.5;

		whistleDist			= 8;
		simulationStep		= 0.002;
		airLock				= 0;
		irLock				= 0;
		laserLock			= 0;
		cmimmunity			= 0.8;
		manualControl		= 1;
		maxControlRange		= 11000;
		maneuvrability		= 14;
		trackOversteer		= 1;
		flightProfiles[] = {Direct};

		maxSpeed			= 320;
		timeToLive			= 45;
		airFriction			= 0.07;
		sideAirFriction		= 0.08;
		trackLead			= 1;
		initTime			= 0.15;
		thrustTime			= 2;
		thrust				= 246;
		fuseDistance		= 500;

		CraterEffects		= "ATRocketCrater";
		explosionEffects	= "ATRocketExplosion";
		effectsMissileInit	= "PylonBackEffects";
		muzzleEffect		= "";

		class Hiteffects
		{
			hitWater="ImpactEffectsSmall";
		};
		weaponLockSystem = "0 + 16";
		maverickWeaponIndexOffset=50;

		missileLockCone = 60;
		missileLockMaxDistance = 4000;
		missileLockMinDistance = 100;
	};

	class rhs_ammo_agm65_penetrator: rhsusf_ammo_basic_penetrator
	{
		hit=320;
		RHA(1100,1000)
	};
//Laser seeker
	class rhs_ammo_agm65e: rhs_ammo_agm65
	{
		manualControl 			= 0;
		laserLock				= 1;
		weaponLockSystem		= "4 + 16";
		missileLockMaxDistance	= 20000;
		model					= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65e_fly.p3d";
		proxyShape				= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65e.p3d";

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(10000,10000)
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						typeRecognitionDistance = -1;
						maxFogSeeThrough = 0.3;
					};
				};
			};
		};
	};
//TV seeker with magnification
	class rhs_ammo_agm65b: rhs_ammo_agm65
	{
		weaponLockSystem		= "1 + 16";
		missileLockMaxDistance = 4000;
		model					="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65b_fly.p3d";
		proxyShape				="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65b.p3d";

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						minTrackableSpeed		= 0;
						maxTrackableSpeed		= 15;
						minTrackableATL			= -1;
						maxTrackableATL			= 1000;
						nightRangeCoef			= 0.0; //Can't be used at night
						angleRangeHorizontal	= 120;
						angleRangeVertical		= 120;
					};
				};
			};
		};
	};
//CCD seeker
	class rhs_ammo_agm65h: rhs_ammo_agm65
	{
		weaponLockSystem		= "1 + 16";
		missileLockMaxDistance = 10000;
		model					="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65h_fly.p3d";
		proxyShape				="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65h.p3d";

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 2000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 2000;
							maxRange = 20000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						minTrackableSpeed = 0;
						maxTrackableSpeed = 30;
						minTrackableATL = -1;
						maxTrackableATL = 1000;
						nightRangeCoef = 0.2; //better low-light capability
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
				};
			};
		};
	};
//IIR seeker
	class rhs_ammo_agm65d: rhs_ammo_agm65
	{
		manualControl			= 0;
		missileLockMaxDistance = 11000;
		irLock=1;
		weaponLockSystem = "2 + 16";
		model					="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65d_fly.p3d";
		proxyShape				="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65d.p3d";

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 20000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						minTrackableSpeed = 0;
						maxTrackableSpeed = 30;
						minTrackableATL = -1;
						maxTrackableATL = 1000;
						//"keyhole" seeker
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
				};
			};
		};
	};
//IIR seeker, optimised for anti-ship
	class rhs_ammo_agm65f: rhs_ammo_agm65d
	{
		model="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65f_fly.p3d";
		proxyShape="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65f.p3d";
		missileLockMaxDistance = 16000;
		class Components : Components
		{
			class SensorsManagerComponent : SensorsManagerComponent
			{
				class Components : Components
				{
					class IRSensorComponent : IRSensorComponent
					{
						class AirTarget : AirTarget
						{
							minRange = 16000;
							maxRange = 24000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget: GroundTarget{};
						maxTrackableSpeed = 15;
					};
				};
			};
		};
	};
