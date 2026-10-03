class R_80mm_HE;
class M_Titan_AT;
class rhs_ammo_atgmCore_base;
class rhs_ammo_atgmBase_base : M_Titan_AT
{
	class EventHandlers;
};
class rhs_ammo_base_penetrator;
class rhs_ammo_cluster_penetrator;
class Missile_AA_04_F: MissileBase //Falchion
{
	class Components;
};
class Missile_AGM_02_F: MissileBase
{
	class Components;
};
class Missile_AGM_01_F: Missile_AGM_02_F //Sharur aka KH-25
{
	class Components;
};


//S-8KOM
class rhs_ammo_s8 : R_80mm_HE
{
	AIAmmoUsageFlags	= "64+128+512";
	cost				= 100;
	initTime			= 0.02;
	sideAirFriction		= 0.003;
	proxyShape			= \A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d;
	model 				= \A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d;

	effectsMissile		= "RHS_Rocket_Fired";
	effectsMissileInit	= "RHS_Rocket_Init";
	soundFly[]			= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};

	HEAT_MACRO(rhs_ammo_s8_penetrator)
	missileLockMaxDistance	= 4000;
	missileLockMinDistance	= 700;
};
class rhs_ammo_s8_penetrator : rhs_ammo_base_penetrator
{
	submunitionConeType[]	= {"randomcenter", 5};
	RHA(400,1000)
};

class rhs_ammo_s8DF : rhs_ammo_s8
{
	AIAmmoUsageFlags		= "64+128";
	cost					= 100;
	submunitionAmmo			= "";
	hit						= 210;
	indirectHit				= 85;
	indirectHitRange		= 20;
	explosive				= 1;
	allowAgainstInfantry	= 1;
	CfgAmmo_CamShakeExplode(110,5);
	CfgAmmo_CamShakeHit(110);
	explosionEffects = "RHS_FAE_Explosion";
};
// S-8T (Tandem)
class rhs_ammo_s8t : rhs_ammo_s8
{
	AIAmmoUsageFlags = "64+128+512";
	HEAT_MACRO(rhs_ammo_s8t_penetrator)

	indirectHit = 40;
	indirectHitRange = 7;
	craterEffects = "ATRocketCrater";
	explosionEffects = "ATRocketExplosion";
};
class rhs_ammo_s8t_penetrator : rhs_ammo_base_penetrator
{
	warheadName	= TandemHEAT;
	submunitionConeType[]	= {"randomcenter", 5};
	RHA(400,1000)
};


class rhs_ammo_s13b : rhs_ammo_s8
{
	proxyShape	= \rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13_gasket;
	model		= \rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13b_fly;
	hit						= 470;
	indirectHit				= 240;
	indirectHitRange		= 10;
	dangerRadiusHit			= 1250;
	suppressionRadiusHit	= 120;
	sideAirFriction			= 0.001;
	thrusttime 				= 0.6;
	CfgAmmo_CamShakeExplode(122,15)
	CfgAmmo_CamShakeHit(122);
	CfgAmmo_CamShakeFire(122);
	CfgAmmo_CamShakePlayerFire(2);
	SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet","RocketsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
};
class rhs_ammo_s13of : rhs_ammo_s13b
{
	submunitionAmmo		= "";
	model				= \rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13of_fly;
	hit					= 270;
	indirectHit			= 120;
	indirectHitRange	= 25;
};
class rhs_ammo_s13D : rhs_ammo_s13b
{
	model					= \rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13d_fly;
	AIAmmoUsageFlags		= "64+128";
	cost					= 100;
	submunitionAmmo			= "";
	hit						= 210;
	indirectHit				= 175;
	indirectHitRange		= 15;
	explosive				= 1;
	allowAgainstInfantry	= 1;
	CfgAmmo_CamShakeExplode(110,5);
	CfgAmmo_CamShakeHit(110);
	explosionEffects = "RHS_FAE_Explosion";
};
class rhs_ammo_s13DF : rhs_ammo_s13D
{
	model				= \rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13df_fly;
	hit					= 260;
	indirectHit			= 205;
	indirectHitRange	= 20;
};
class rhs_ammo_s13t : rhs_ammo_s13b
{
	AIAmmoUsageFlags = "64+128+512";
	HEAT_MACRO(rhs_ammo_s13t_penetrator)

	model 				= \rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13t_fly;

	indirectHit			= 30;
	indirectHitRange	= 7;
	craterEffects		= "ATRocketCrater";
	explosionEffects	= "ATRocketExplosion";
};
class rhs_ammo_s13t_penetrator : rhs_ammo_base_penetrator
{
	warheadName	= TandemHEAT;
	submunitionConeType[]	= {"randomcenter", 5};
	RHA(600,1000)
};

class rhs_ammo_s5 : rhs_ammo_s8
{
	submunitionAmmo			= "";
	proxyShape				= \rhsafrf\addons\rhs_airweapons\s5_rockets\rhs_r_s5m1;
	model					= \rhsafrf\addons\rhs_airweapons\s5_rockets\rhs_r_s5m1_fly;
	hit						= 220;
	indirectHit				= 20;
	indirectHitRange		= 9;

	initTime 				= 0.02;		// Время выстрела - 0,018 - 0,021 с
	thrusttime 				= 0.675; 	// Время работы двигателя - 0,55 - 0,92 с
	timetolive 				= 12.5; 	// Время самоликвидации - 10 - 15 с
	sideAirFriction			= 0.004;

	missileLockMaxDistance	= 1800;
	CfgAmmo_CamShakeExplode(57,10);
	CfgAmmo_CamShakeHit(57);
	CfgAmmo_CamShakeFire(57);
	CfgAmmo_CamShakePlayerFire(2);
};
class rhs_ammo_s5m1 : rhs_ammo_s5
{
	hit					= 200;
	indirectHit			= 40;
	indirectHitRange	= 12;
};
class rhs_ammo_s5k1 : rhs_ammo_s5
{
	AIAmmoUsageFlags = "64+128+512";
	HEAT_MACRO(rhs_ammo_s5k1_penetrator)

	indirectHit = 40;
	indirectHitRange = 7;

	craterEffects = "ATRocketCrater";
	explosionEffects = "ATRocketExplosion";
};
class rhs_ammo_s5k1_penetrator : rhs_ammo_base_penetrator
{
	submunitionConeType[]	= {"randomcenter", 5};
	RHA(130,1000)
};
// ko = kumulativnaya oskolchnaya [heat/frag]
class rhs_ammo_s5ko : rhs_ammo_s5
{
	AIAmmoUsageFlags = "64+128+512";
	HEAT_MACRO(rhs_ammo_s5ko_penetrator)
};
class rhs_ammo_s5ko_penetrator : rhs_ammo_base_penetrator
{
	submunitionConeType[]	= {"randomcenter", 5};
	RHA(172,1000)
};

class rhs_ammo_s5_ub16 : rhs_ammo_s5
{
};
class rhs_ammo_s5_ub32 : rhs_ammo_s5_ub16
{
};

// S-24 rockets

class rhs_ammo_s24_base: rhs_ammo_s13b
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_s24_fly;
	proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_s24;
	hit						= 700;
	indirectHit				= 140;
	indirectHitRange		= 30;
	dangerRadiusHit			= 1250;
	suppressionRadiusHit	= 150;
	sideAirFriction			= 0.055;
	maxspeed				= 430;

	CfgAmmo_CamShakeExplode(240,50);
	CfgAmmo_CamShakeHit(240);
	CfgAmmo_CamShakeFire(240);
	CfgAmmo_CamShakePlayerFire(2);

	SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet","BombsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
};
class rhs_ammo_s24: rhs_ammo_s24_base
{
	effectsMissile	= "RHS_Rocket_Fired";
	// todo: replace effect -  беспламенная, принята на вооружение в 1975 г.
	// https://forums.eagle.ru/showpost.php?p=2466776&postcount=3
};
class rhs_ammo_s24b: rhs_ammo_s24_base
{
};

// S-25 rockets
// http://upload.wikimedia.org/wikipedia/commons/thumb/1/10/C-25_missile.jpg/300px-C-25_missile.jpg
class rhs_ammo_s25_base: rhs_ammo_s24_base
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_s25of_fly;
	proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_s25of;
	hit						= 700;
	indirectHit				= 160;
	indirectHitRange		= 30;
	sideAirFriction			= 0.045;
	maxspeed				= 700;

	CfgAmmo_CamShakeExplode(340,70);
	CfgAmmo_CamShakeHit(340);
	CfgAmmo_CamShakeFire(340);
	CfgAmmo_CamShakePlayerFire(2);
};
class rhs_ammo_s25o: rhs_ammo_s25_base
{
	proximityExplosionDistance = 10; // Взрыватель: радиовзрыватель РВ-25 «Дятел», высота подрыва 5-10 м
	// might be need to replace with submunition?
};
class rhs_ammo_s25of: rhs_ammo_s25_base
{
	//model					= \rhsafrf\addons\rhs_airweapons\rhs_m_s25o_fly;
	//proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_s25o;

	hit						= 650;
	indirectHit				= 150;
	indirectHitRange		= 35;
};
class rhs_ammo_s25l: rhs_ammo_s25_base
{
	//model					= \rhsafrf\addons\rhs_airweapons\rhs_m_s25l_fly;
	//proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_s25l;

	maxControlRange 		= 7000;
	missileLockMaxDistance 	= 7000;
	missileLockMinDistance	= 1000;
	weaponLockSystem		= CM_Lock_Laser + CM_Missile;
	class Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class LaserSensorComponent : SensorTemplateLaser
				{
					SENS_RANGES_BVR(7000,7000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
			};
		};
	};
};
class rhs_ammo_s25ld: rhs_ammo_s25l
{
	maxControlRange 		= 10000;
	missileLockMaxDistance 	= 10000;
	class Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class LaserSensorComponent : SensorTemplateLaser
				{
					SENS_RANGES_BVR(10000,10000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
			};
		};
	};
};

// 9k114 Shturm
// basic variant depicts 9M114M (HEAT) variant
class rhs_ammo_9m114 : rhs_ammo_atgmBase_base
{
	HEAT_MACRO(rhs_ammo_9m114_penetrator)
	lockType					= 0;
	cost						= 100;
	hit							= 400;
	indirecthit					= 26;
	indirecthitrange			= 4.6;
	maneuvrability				= 13;
	manualcontrol				= 1;
	maxcontrolrange				= 5000;
	maxspeed					= 345;
	sideairfriction				= 0.3;
	thrust						= 172;
	thrusttime					= 3.5;
	timetolive					= 15;
	tracklead					= 0.95;
	trackoversteer				= 0.95;
	whistledist					= 3;
	model						= "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
	proxyShape					="\rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m114";
	maverickWeaponIndexOffset	= 30;

	// Radio guided, but uses a LR
	rhs_saclos			= 2;
	// The missile flies above the gunner's line of sight to the target. With the range of the target determined by the laser rangefinder, the missile descends onto the target just before impact.
	// This is done primarily to clear obstacles, instead of achieving a top-attack, and can be switched off
	rhs_ballisticMode	= 1;
	rhs_guideMode		= "RADIO";
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m114_penetrator: rhs_ammo_base_penetrator
{
	hit = 300;
	RHA(560,1000)
};
class rhs_ammo_9m114m : rhs_ammo_9m114
{
};
class rhs_ammo_9m114f : rhs_ammo_9m114
{
	AIAmmoUsageFlags		= "64+128";
	allowAgainstInfantry	= 1;
	cost					= 100;
	submunitionAmmo			= "";
	hit						= 210;
	indirectHit				= 175;
	indirectHitRange		= 15;
	explosive				= 1;
	CfgAmmo_CamShakeExplode(110,40);
	CfgAmmo_CamShakeHit(110);
	explosionEffects = "RHS_FAE_Explosion";
};
class rhs_ammo_9m114m1 : rhs_ammo_9m114
{
	maxcontrolrange			= 6000;
};
class rhs_ammo_9m114m2 : rhs_ammo_9m114
{
	maxcontrolrange			= 7000;
};
// 9M120 Ataka (Tandem)
class rhs_ammo_9m120 : rhs_ammo_atgmBase_base
{
	HEAT_MACRO(rhs_ammo_9m120_penetrator)
	lockType					= 0;
	cost						= 180;
	hit 						= 350;
	indirecthit					= 26;
	indirecthitrange			= 4.6;
	maneuvrability				= 13;
	manualcontrol				= 1;
	maxcontrolrange				= 6000;
	maxspeed					= 550;
	sideairfriction				= 0.3;
	thrust						= 172;
	thrusttime					= 3.5;
	timetolive					= 25;
	tracklead					= 0;
	trackoversteer				= 1;
	whistledist					= 3;
	model						= "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
	proxyShape					= "\rhsafrf\addons\rhs_airweapons\rhs_m_9m120";
	maverickWeaponIndexOffset	= 30;

	// Radio guided, but uses a LR
	rhs_saclos			= 2;
	rhs_ballisticMode	= 0;
	rhs_guideMode		= "RADIO";
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m120_penetrator: rhs_ammo_base_penetrator
{
	warheadName	= TandemHEAT;
	RHA(800,1000)
};
// 9M120M - Modernized anti-tank variant
class rhs_ammo_9m120m : rhs_ammo_9m120
{
	HEAT_MACRO(rhs_ammo_9m120m_penetrator)
	maxcontrolrange = 8000;
};
class rhs_ammo_9m120m_penetrator: rhs_ammo_base_penetrator
{
	warheadName	= TandemHEAT;
	hit = 290;
	RHA(950,1000)
};
// 9M120F - Thermobaric Variant
class rhs_ammo_9m120f : rhs_ammo_9m120
{
	AIAmmoUsageFlags		= "64+128";
	allowAgainstInfantry	= 1;
	cost					= 100;
	submunitionAmmo			= "";
	hit						= 210;
	indirectHit				= 175;
	indirectHitRange		= 15;
	explosive				= 1;
	CfgAmmo_CamShakeExplode(110,40);
	CfgAmmo_CamShakeHit(110);
	explosionEffects = "RHS_FAE_Explosion";
};
// 9M120O - Proxmity fuse variant
class rhs_ammo_9m120o : rhs_ammo_9m120
{
	AIAmmoUsageFlags		= "64+128";
	allowAgainstInfantry	= 1;
	cost					= 100;
	hit						= 210;
	indirectHit				= 175;
	indirectHitRange		= 15;
	explosive				= 1;
	proximityExplosionDistance = 12;

	simulation				= shotMissile;
	triggerDistance			= 5; // It is equipped with a proximity fuse to destroy aircraft, and detonates its fragmentation warhead when less than four meters from the target.
	submunitionAmmo			= "rhs_ammo_spall";
	submunitionConeType[]	= {"poissondisc", 100};
	submunitionConeAngle	= 360;
};
// 9M127 - Vikhr
// https://ru.wikipedia.org/wiki/%D0%92%D0%B8%D1%85%D1%80%D1%8C_(%D0%9F%D0%A2%D0%A0%D0%9A)
// Время полета:
//    На максимальную дальность: 28 с
//    На дальность 8 000 м: 23 с
//    На дальность 6 000 м: 14 с
class rhs_ammo_9m127 : rhs_ammo_9m120
{
	HEAT_MACRO(rhs_ammo_9m127_penetrator)
	proxyShape					= \rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m127;
	indirecthit					= 86;
	indirecthitrange			= 9.6;
	cmImmunity					= 0.9;
	maverickWeaponIndexOffset	= 0;
	airlock						= 1;
	airFriction					= 0.075;
	thrust						= 342;
	thrusttime					= 3.0;
	maxspeed					= 600;
	maxcontrolrange				= 10000;
	trackoversteer				= 1;
	trackLead					= 1;
	lockType					= 0;
	manualcontrol				= 0;
	maneuvrability				= 16;
	weaponLockSystem			= CM_Lock_Visual + CM_Lock_Laser;
	rhs_guideMode				= "BEAMRIDER";
};
class rhs_ammo_9m127_penetrator: rhs_ammo_base_penetrator
{
	warheadName	= TandemHEAT;
	hit = 290;
	RHA(1050,1000)
	// https://dfnc.ru/katalog-vooruzhenij/protivotankovye-raketnye-kompleksy/9k121m-vihr-m/
};
class rhs_ammo_9m127m : rhs_ammo_9m127
{
};
class rhs_ammo_r27_base : Missile_AA_04_F
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_m_r27r_fly;
	proxyShape			= \rhsafrf\addons\rhs_airweapons\rhs_m_r27r;

	hit					= 180;
	indirecthit			= 170;
	indirecthitrange	= 19;
	proximityExplosionDistance = 29;

	// Fragments handling
	submunitionConeType[]		= {"randomcenter", 30};
	submunitionConeAngle 		= 65;
	submunitionAmmo				= rhs_ammo_he_fragments;
	submunitionDirectionType	= SubmunitionTargetDirection;
	submunitionInitialOffset[]	= {0,0,0.0};
	submunitionParentSpeedCoef	= 0;
	submunitionInitSpeed		= 1500;
	triggerOnImpact 			= true;
	deleteParentWhenTriggered	= false;

	irlock				= 1;
	maxspeed			= 850;
	maxcontrolrange		= 20000;
	maneuvrability		= 14;
	airFriction 		= 0.014;
	sideAirFriction		= 0.18;
	simulationstep		= 0.001;
	initTime			= 0.1;
	thrust				= 340;
	thrusttime			= 5;
	timetolive			= 120;
};
class rhs_ammo_r27r : rhs_ammo_r27_base
{
	cmimmunity				= 0.885;
	weaponLockSystem		= CM_Lock_Radar + CM_Missile;
	missileLockCone			= 60;
	missileLockMaxDistance	= 16000;
	missileLockMinDistance	= 2000;
	missileLockMaxSpeed		= 972;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					SENS_RANGES_BVR(16000,14000)
					typeRecognitionDistance = -1;
					angleRangeHorizontal	= 45;
					angleRangeVertical		= 45;
					groundNoiseDistanceCoef	= 0.1;
					aimDown					= 0;
					minSpeedThreshold		= 30;
					maxSpeedThreshold		= 40;
				};
			};
		};
	};
};
class rhs_ammo_r27er : rhs_ammo_r27r
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_r27er_fly;
	proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_r27er;
	missileLockMaxDistance	= 20000;
	timetolive				= 80;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					SENS_RANGES_BVR(20000,14000)
					typeRecognitionDistance = -1;
					angleRangeHorizontal	= 45;
					angleRangeVertical		= 45;
					groundNoiseDistanceCoef	= 0.1;
					aimDown					= 0;
					minSpeedThreshold		= 30;
					maxSpeedThreshold		= 40;
				};
			};
		};
	};
};
class rhs_ammo_r27t : rhs_ammo_r27_base
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_r27t_fly;
	proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_r27t;
	weaponLockSystem		= CM_Lock_IR + CM_Missile;
	missileLockCone			= 15;
	missileLockMaxDistance	= 22000;
	missileLockMinDistance	= 1700;
	missileLockMaxSpeed		= 700;
	timetolive				= 55;
	autoSeekTarget			= 1;
	lockSeekRadius 			= 1000;
	trackLead				= 0.5;

	flightProfiles[] = {Direct, LoalDistance};
	class Direct {};
	class LoalDistance
	{
		lockSeekDistanceFromParent = 2000.0;
	};

	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					SENS_RANGES_WVR(4000,3500)
					typeRecognitionDistance = -1;
					angleRangeHorizontal	= 15;
					angleRangeVertical		= 15;
					maxTrackableSpeed		= 1200;
					aimDown					= 0;
				};
			};
		};
	};
};
class rhs_ammo_r27et : rhs_ammo_r27t
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_r27et_fly;
	proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_r27et;
	timetolive				= 70;
	missileLockMaxDistance	= 26000;
};

class rhs_ammo_r60_base : Missile_AA_04_F
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_m_r60_fly;
	proxyShape			= \rhsafrf\addons\rhs_airweapons\rhs_m_r60;

	hit					= 180;
	indirecthit			= 50;
	indirecthitrange	= 9;
	proximityExplosionDistance = 12;

	// Fragments handling
	submunitionConeType[]		= {"randomcenter", 30};
	submunitionConeAngle 		= 65;
	submunitionAmmo				= rhs_ammo_he_fragments;
	submunitionDirectionType	= SubmunitionTargetDirection;
	submunitionInitialOffset[]	= {0,0,0.0};
	submunitionParentSpeedCoef	= 0;
	submunitionInitSpeed		= 1500;
	triggerOnImpact 			= true;
	deleteParentWhenTriggered	= false;

	irlock				= 1;
	maxspeed			= 850;
	maxcontrolrange		= 7000;
	maneuvrability		= 34;
	sideAirFriction		= 0.18;
	simulationstep		= 0.001;
	initTime			= 0.1;
	thrust				= 340;
	thrusttime			= 3;
	timetolive			= 18;
	weaponLockSystem	= CM_Lock_IR + CM_Missile;
};
class rhs_ammo_r60 : rhs_ammo_r60_base
{
	missileLockCone			= 24;
	missileKeepLockedCone	= 40;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					SENS_RANGES_WVR(5000,4500)
					angleRangeHorizontal	= 24;
					angleRangeVertical		= 24;
					maxTrackableSpeed		= 835;
					aimDown					= 0;
				};
			};
		};
	};
};
class rhs_ammo_r60m : rhs_ammo_r60_base
{
	hit						= 180;
	indirecthit				= 80;
	indirecthitrange		= 9;
	maxcontrolrange			= 10000;
	missileLockCone			= 34;
	missileKeepLockedCone	= 60;
	timetolive				= 23;

	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					SENS_RANGES_WVR(8000,8500)
					angleRangeHorizontal	= 40;
					angleRangeVertical		= 40;
					maxTrackableSpeed		= 835;
					aimDown					= 0;
				};
			};
		};
	};
};
class rhs_ammo_r73 : Missile_AA_04_F
{
	//airlock=2;
	//lockType=0;
	model				= \rhsafrf\addons\rhs_airweapons\rhs_m_r73_fly;
	proxyShape			= \rhsafrf\addons\rhs_airweapons\rhs_m_r73;
	cost				= 800;
	effectsmissile		= missile3;
	cratereffects		= AAMissileCrater;
	explosioneffects	= AAMissileExplosion;
	soundFly[]			=  {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};

	hit					= 150;
	indirecthit			= 90;
	indirecthitrange	= 9;

	initTime			= 0.1;
	irlock				= 1;
	maneuvrability		= 28;
	maxcontrolrange		= 20000;
	maxspeed			= 850; //it was in km/h, duh
	sideAirFriction		= 0.18;
	simulationstep		= 0.001;
	thrust				= 340;
	thrusttime			= 5;
	timetolive			= 20;

	// Fragments handling
	submunitionConeType[]		= {"randomcenter", 30};
	submunitionConeAngle 		= 65;
	submunitionAmmo				= rhs_ammo_he_fragments;
	submunitionDirectionType	= SubmunitionTargetDirection;
	submunitionInitialOffset[]	= {0,0,0.0};
	submunitionParentSpeedCoef	= 0;
	submunitionInitSpeed		= 1500;
	triggerOnImpact 			= true;
	deleteParentWhenTriggered	= false;

	//locking

	weaponLockSystem		= CM_Lock_Visual + CM_Lock_IR + CM_Missile;
	missileLockCone			= 50;
	missileKeepLockedCone	= 90;
	missileLockMaxDistance	= 8000;
	missileLockMinDistance	= 300;
	missileLockMaxSpeed		= 700;

	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					SENS_RANGES_WVR(8000,4500)
					angleRangeHorizontal	= 90;
					angleRangeVertical		= 90;
					maxTrackableSpeed		= 835;
					aimDown					= 0;
				};
			};
		};
	};
};

// R-73M
class rhs_ammo_r73m : rhs_ammo_r73
{
	model					= "\rhsafrf\addons\rhs_airweapons\rhs_m_r74_fly";
	proxyShape				= "\rhsafrf\addons\rhs_airweapons\rhs_m_r74";
	cmimmunity				= 0.92;

	missileLockCone			= 60;	//Improved model with ±60° off-boresight
	missileKeepLockedCone	= 120;
};

// R-74 (izdeliye 740)
class rhs_ammo_r74 : rhs_ammo_r73m
{
	model					= "\rhsafrf\addons\rhs_airweapons\rhs_m_r74_fly";
	proxyShape				= "\rhsafrf\addons\rhs_airweapons\rhs_m_r74";
	cost					= 900;
	hit						= 190;
	maneuvrability			= 47;
	indirecthit				= 135;
	inittime				= 0.5;
};

// R-74M2 aka K-74M2, KMD or РВВ-МД
class rhs_ammo_r74m2 : rhs_ammo_r74
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_r74m2_fly;
	proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_r74m2;
	maneuvrability			= 47;
	inittime				= 0.5;
	cmimmunity				= 0.92;

	missileLockCone			= 150;	//Improved model with ±75° off-boresight
	missileKeepLockedCone	= 150;
	missileLockMaxDistance	= 8000;
	missileLockMinDistance	= 150;
	missileLockMaxSpeed		= 700;
};

// R-77 aka РВВ-АЕ (Р-77)
// http://www.missiles.ru/PR_AAM-5-GEN_MAKS-2009.htm
class rhs_ammo_r77 : rhs_ammo_r73
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_m_r77_fly;
	proxyShape			= \rhsafrf\addons\rhs_airweapons\rhs_m_r77;
	inittime			= 0.5;
	cost				= 900;
	hit					= 270;
	indirecthit			= 150;
	indirecthitrange	= 12;
	proximityExplosionDistance = 20;
	maxspeed			= 1111;
	timetolive			= 120;
	airFriction 		= 0.014;
	sideairfriction		= 0.5;

	cmimmunity				= 0.89;
	weaponLockSystem		= CM_Lock_Radar + CM_Missile;
	missileLockCone			= 60;
	missileKeepLockedCone	= 90;
	missileLockMaxDistance	= 22000;
	missileLockMinDistance	= 2000;
	missileLockMaxSpeed		= 972;
	autoSeekTarget			= 1;
	lockSeekRadius 			= 1000;

	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					SENS_RANGES_BVR(25000,25000)
					typeRecognitionDistance = -1;
					angleRangeHorizontal	= 45;
					angleRangeVertical		= 45;
					groundNoiseDistanceCoef	= 0.1;
					aimDown					= 0;
					minSpeedThreshold		= 30;
					maxSpeedThreshold		= 40;
				};
			};
		};
	};
};

// R-77M aka РВВ-СД
class rhs_ammo_r77m : rhs_ammo_r77
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_r77m_fly;
	proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_r77m;
	cost					= 1000;
	hit						= 330;
	indirecthit				= 80;
	missileLockMaxSpeed		= 1000;
	missileKeepLockedCone	= 120;
	cmimmunity				= 0.94;
};


// Kh-25 Karen
class rhs_ammo_kh25_base : Missile_AGM_01_F
{
	HEAT_MACRO(rhs_ammo_kh25_penetrator)

	hit						= 530;	// // warhead mass - 90-140kg
	indirectHit				= 85;
	indirectHitRange		= 8;

	maxspeed 				= 870;
	inittime				= 0.8;
	thrust					= 350;
	thrusttime				= 2;
	timetolive				= 30;

	missileLockCone			= 30;
	missileKeepLockedCone	= 30;
	missileLockMaxDistance 	= 10000;
	missileLockMinDistance	= 2000;
	missileLockMaxSpeed		= 55;
	cameraViewAvailable 	= false;

	effectsMissile			= "RHS_Rocket_Fired";
	CfgAmmo_CamShakeExplode(510,90);
	CfgAmmo_CamShakeHit(510);
};
// Kh-25 - original laser-guided variant
class rhs_ammo_kh25 : rhs_ammo_kh25_base
{
	maxspeed 				= 850;

	missileLockMaxDistance 	= 7000;
	weaponLockSystem		= CM_Lock_Laser + CM_Missile;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class LaserSensorComponent : SensorTemplateLaser
				{
					SENS_RANGES_BVR(7000,7000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
			};
		};
	};
};
// Kh-25ML -semi-active laser guidance with tandem warhead that can penetrate 1 metre (39 in) of concrete
class rhs_ammo_kh25ml : rhs_ammo_kh25_base
{
	weaponLockSystem		= CM_Lock_Laser + CM_Missile;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class NVSensorComponent : SensorTemplateNV
				{
					SENS_RANGES_WVR(10000,10000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
				class LaserSensorComponent : SensorTemplateLaser
				{
					SENS_RANGES_BVR(8000,8000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
			};
		};
	};
};
// Kh-25MA – active radar guidance
class rhs_ammo_kh25ma : rhs_ammo_kh25_base
{
	weaponLockSystem		= CM_Lock_Radar + CM_Missile;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class RadarSensorComponent : SensorTemplateActiveRadar
				{
					SENS_RANGES_BVR(10000,5000)
					angleRangeHorizontal = 60;
					angleRangeVertical = 60;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
					maxSpeedThreshold = -1;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
					maxFogSeeThrough = 0.8;
					minTrackableSpeed = 0;
					maxTrackableSpeed = 56;
					minTrackableATL = -1;
					maxTrackableATL = 40;
				};
			};
		};
	};
};
// Kh-25MT – TV guidance
class rhs_ammo_kh25mt : rhs_ammo_kh25_base
{
	maxspeed 				= 870;

	missileLockCone			= 45;
	missileKeepLockedCone	= 45;
	missileLockMaxDistance 	= 10000;
	missileLockMinDistance	= 1500;
	weaponLockSystem		= CM_Lock_Visual + CM_Missile;
	cameraViewAvailable 	= true;
	rhs_tv_guidance 		= "BW";
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class VisualSensorComponent : SensorTemplateVisual
				{
					SENS_RANGES_WVR(8000,8000)
					maxTrackableSpeed = 35;
					nightRangeCoef = 0.8;
					angleRangeHorizontal = 45;
					angleRangeVertical = 45;
				};
			};
		};
	};
};
// Kh-25MTP – infra-red guidance variant of Kh-25MT
class rhs_ammo_kh25mtp : rhs_ammo_kh25_base
{
	weaponLockSystem		= CM_Lock_IR + CM_Missile;
	cameraViewAvailable 	= true;
	rhs_tv_guidance 		= "TI";
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent : SensorTemplateIR
				{
					SENS_RANGES_WVR(9000,9000)
					maxTrackableSpeed = 55;
					angleRangeHorizontal = 30;
					angleRangeVertical = 30;
				};
			};
		};
	};
};
// Kh-25MP - modular anti-radiation variant
class rhs_ammo_kh25mp : rhs_ammo_kh25_base
{
	maxspeed 				= 920;

	weaponLockSystem		= CM_Missile;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class AntiRadiationSensorComponent : SensorTemplateAntiRadiation
				{
					SENS_RANGES_WVR(10000,10000)
					maxTrackableSpeed = 55;
					angleRangeHorizontal = 30;
					angleRangeVertical = 30;
				};
			};
		};
	};
};
class rhs_ammo_kh25_penetrator: rhs_ammo_base_penetrator
{
	hit			 = 310;
	typicalSpeed = 800;
	RHA(900,1000)
};

// Kh-29 Kedge
class rhs_ammo_kh29_base : Missile_AGM_02_F
{
	HEAT_MACRO(rhs_ammo_kh29_penetrator)

	model						= \rhsafrf\addons\rhs_a2port_air\data\rhs_m_kh29_fly;
	proxyShape					= \rhsafrf\addons\rhs_a2port_air\data\rhs_m_kh29;
	maverickWeaponIndexOffset	= 0;

	hit							= 1330; // warhead mass - 317kg
	indirecthit					= 300;
	indirecthitrange			= 17;

	cratereffects				= "BombCrater";
	effectsMissile				= "RHS_Rocket_Fired";
	explosioneffects			= "BombExplosion";

	maxspeed					= 720;
	maneuvrability				= 10;
	maxcontrolrange				= 10000;
	sideairfriction				= 0.1;
	simulationstep				= 0.001;
	inittime					= 0.8;
	thrust						= 350;
	thrusttime					= 2;
	timetolive					= 30;
	tracklead					= 0.95;
	trackoversteer				= 50;
	whistledist					= 18;

	irlock						= 1;
	laserlock					= 1;
	lockType					= 0;
	weaponLockSystem			= CM_Lock_Laser + CM_Missile;
	lockSeekRadius				= 120;
	missileLockCone				= 30;
	missileKeepLockedCone		= 30;
	missileLockMaxDistance		= 9000;
	missileLockMinDistance		= 1500;
	missileLockMaxSpeed			= 55;

	cameraViewAvailable 		= false;

	CfgAmmo_CamShakeExplode(900,125);
	CfgAmmo_CamShakeHit(900);

	SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet","BombsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
};
// Kh-29L - uses semi-active laser seeker and has a range of 8–10 km
class rhs_ammo_kh29l : rhs_ammo_kh29_base
{
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class LaserSensorComponent : SensorTemplateLaser
				{
					SENS_RANGES_BVR(10000,10000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
			};
		};
	};
};
// Kh-29ML - upgraded version of the Kh-29L
class rhs_ammo_kh29ml : rhs_ammo_kh29_base
{
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class NVSensorComponent : SensorTemplateNV
				{
					SENS_RANGES_WVR(8000,8000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
				class LaserSensorComponent : SensorTemplateLaser
				{
					SENS_RANGES_BVR(10000,10000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
			};
		};
	};
};
// Kh-29T - TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit
class rhs_ammo_kh29t : rhs_ammo_kh29_base
{
	missileLockCone			= 45;
	missileKeepLockedCone	= 45;
	missileLockMaxDistance	= 9000;
	missileLockMinDistance	= 1500;
	weaponLockSystem		= CM_Lock_Visual + CM_Missile;
	cameraViewAvailable 	= true;
	rhs_tv_guidance 		= "BW";
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class VisualSensorComponent : SensorTemplateVisual
				{
					SENS_RANGES_WVR(9000,9000)
					maxTrackableSpeed = 35;
					nightRangeCoef = 0.1;
					maxFogSeeThrough= 0.1;
					angleRangeHorizontal = 45;
					angleRangeVertical = 45;
				};
			};
		};
	};
};
// Kh-29MP - third generation guidance variant with active radar homing, makes it a fire-and-forget weapon. It has a large 250 kg warhead with 12 km range
class rhs_ammo_kh29mp : rhs_ammo_kh29_base
{
	weaponLockSystem		= CM_Lock_Radar + CM_Missile;
	missileLockCone			= 60;
	missileKeepLockedCone	= 60;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class RadarSensorComponent : SensorTemplateActiveRadar
				{
					SENS_RANGES_BVR(10000,5000)
					angleRangeHorizontal = 60;
					angleRangeVertical = 60;
				};
			};
		};
	};
};
// Kh-29D - fourth guidance variant (fire-and-forget) of the Kh-29TE, using imaging infrared
class rhs_ammo_kh29d : rhs_ammo_kh29_base
{
	weaponLockSystem		= CM_Lock_IR + CM_Missile;
	rhs_tv_guidance 		= "TI";
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent : SensorTemplateIR
				{
					SENS_RANGES_WVR(9000,9000)
					maxTrackableSpeed = 55;
					angleRangeHorizontal = 30;
					angleRangeVertical = 30;
				};
			};
		};
	};
};
class rhs_ammo_kh29_penetrator: rhs_ammo_base_penetrator
{
	hit			 = 310;
	typicalSpeed = 800;
	RHA(500,1000)
};

// Kh-38
// http://www.missiles.ru/PR_AAM-5-GEN_MAKS-2009.htm
class rhs_ammo_kh38m_base : Missile_AGM_02_F
{
	HEAT_MACRO(rhs_ammo_kh38m_penetrator)

	model						= \rhsafrf\addons\rhs_airweapons\rhs_m_kh38m_fly;
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_kh38m;

	hit							= 830;	// warhead mass - 250kg
	indirectHit					= 105;
	indirectHitRange			= 10;

	maxspeed 					= 748;	//2.2 mach

	CfgAmmo_CamShakeExplode(510,110);
	CfgAmmo_CamShakeHit(510);
};
// Kh-38MLE - inertial, laser guidance
class rhs_ammo_kh38mle: rhs_ammo_kh38m_base
{
	weaponLockSystem		= CM_Lock_Laser + CM_Missile;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class NVSensorComponent : SensorTemplateNV
				{
					SENS_RANGES_WVR(8000,8000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
				class LaserSensorComponent : SensorTemplateLaser
				{
					SENS_RANGES_BVR(8000,8000)
					maxTrackableSpeed = 30;
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
				};
			};
		};
	};
};
class rhs_ammo_kh38mle_ext: rhs_ammo_kh38mle
{
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_kh38m_ext;
};
// Kh-38MAE - inertial, active radar homing
class rhs_ammo_kh38mae : rhs_ammo_kh38m_base
{
	model						= \rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae_fly;
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae;

	weaponLockSystem		= CM_Lock_Radar + CM_Missile;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class RadarSensorComponent : SensorTemplateActiveRadar
				{
					SENS_RANGES_BVR(10000,5000)
					angleRangeHorizontal = 60;
					angleRangeVertical = 60;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
					maxSpeedThreshold = -1;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
					maxFogSeeThrough = 0.8;
					minTrackableSpeed = 0;
					maxTrackableSpeed = 56;
					minTrackableATL = -1;
					maxTrackableATL = 40;
				};
			};
		};
	};
};
class rhs_ammo_kh38mae_ext: rhs_ammo_kh38mae
{
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae_ext;
};
// Kh-38MTE - inertial, infrared guidance
class rhs_ammo_kh38mte : rhs_ammo_kh38m_base
{
	model						= \rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte_fly;
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte;

	weaponLockSystem		= CM_Lock_IR + CM_Missile;
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent : SensorTemplateIR
				{
					SENS_RANGES_WVR(6000,6000)
					maxTrackableSpeed = 55;
					angleRangeHorizontal = 30;
					angleRangeVertical = 30;
				};
			};
		};
	};
};
class rhs_ammo_kh38mte_ext: rhs_ammo_kh38mte
{
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte_ext;
};
class rhs_ammo_kh38m_penetrator: rhs_ammo_base_penetrator
{
	hit			 = 310;
	typicalSpeed = 800;
	RHA(1100,1000)
};

// Kh-55SM
// Nuclear warhead
class rhs_ammo_kh55sm : rhs_ammo_kh29l
{
	submunitionAmmo		= "";

	model		= \rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm_fly;
	proxyShape	= \rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm;

	CraterEffects		= "RHS_HeavyBombCrater";
	explosionEffects	= "RHS_HeavyBombExplosion";
	effectsMissile		= "missile5";

	hit					= 9920;
	indirecthit			= 1300;
	indirecthitrange	= 56;

	inittime			= 6;
	maneuvrability		= 10;
	maxcontrolrange		= 350000;
	maxspeed			= 255;
	sideairfriction		= 0.001;
	simulationstep		= 0.001;
	thrust				= 20;
	thrusttime			= __EVAL(60*3); // 3 minutes
	timetolive			= __EVAL(60*15); // 15 minutes
	tracklead			= 0.95;
	trackoversteer		= 50;
	whistledist			= 25;

	weaponLockSystem	= CM_Missile;
	lockType			= 0;
	irlock				= 1;
	laserlock			= 1;

	soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",2.5,1.5,10800};

	SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet","BombsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};

	RHS_yield		= 50000;
	RHS_FuseRange	= 100;
	RHS_WarheadType	= "NUKE";

	CfgAmmo_CamShakeExplode(700,225);
	CfgAmmo_CamShakeHit(700);
};

class rhs_ammo_kh55sm_nocamo : rhs_ammo_kh55sm
{
	model		= \rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm2_fly;
	proxyShape	= \rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm2;
};

// Kh-55Sh aka Kh-555 or Kh-55SE
// Conventional warhead
class rhs_ammo_kh55sh : rhs_ammo_kh55sm
{
	RHS_WarheadType	= "EXPLOSIVE";
	RHS_FuseRange	= 0; // explode on impact
};
class rhs_ammo_kh55sh_nocamo : rhs_ammo_kh55sm_nocamo
{
	RHS_WarheadType = "EXPLOSIVE";
};