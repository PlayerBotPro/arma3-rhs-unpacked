
	class M_Titan_AT: MissileBase {
		class Components;
	};
	//TOW SERIES MISSILES

	//BGM-71A
	class rhs_ammo_TOW_AT: M_Titan_AT
	{
		HEAT_MACRO(rhs_ammo_TOW_AT_penetrator)

		hit = 480;
		indirectHit = 12;
		indirectHitRange = 4.2;

		cost = 800;
		canlock	= 0;
		irLock = 1;

		trackOversteer = 0.8;
		trackLead = 0.9;

		timeToLive = 30; //Makes it to about 3700 meters at 22 seconds and explodes (hard coded max TTL?)

		// https://fas.org/man/dod-101/sys/land/tow.htm
		maneuvrability = 10;
		simulationStep = 0.005;
		airFriction = 0.14;
		sideAirFriction = 0.75;

		lockType			= 1;
		manualControl		= 1;
		maxControlRange		= 3000;
		manualControlOffset	= 150;
		missileManualControlCone = 45;
		autoSeekTarget = 1;
		lockSeekRadius = 1;

		initTime	= 0.151;
		thrustTime	= 1.45;
		thrust		= 165;
		maxSpeed	= 296;

		deflecting = 0;
		fuseDistance = 5;
		effectsMissile = "RHS_Missile2";
		whistleDist = 2;

		weaponLockSystem = 1;
		rhs_saclos = 1;
		rhs_ballisticMode = 0;
		rhs_guideMode = "WIRE";

		flightProfiles[] = {Direct};
		class Direct{};

		model="\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2BB";//Placeholder
		soundFly[] = {"rhsusf\addons\rhsusf_heavyweapons\Sounds\TOW",1.1,0.7,550};
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(5000,5000)
						maxTrackableSpeed = 35;
						nightRangeCoef = 0.8;
						angleRangeHorizontal = 5;
						angleRangeVertical = 5;
					};
				};
			};
		};
	};

	//BGM-71B (improved range)
	class rhs_ammo_TOWB_AT: rhs_ammo_TOW_AT
	{
		HEAT_MACRO(rhs_ammo_TOW_AT_penetrator)

		maxControlRange = 3750;
	};

	class rhs_ammo_TOW_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		RHA(430,1000)
	};

	//BGM-71C (standoff probe added)
	class rhs_ammo_ITOW_AT: rhs_ammo_TOWB_AT
	{
		HEAT_MACRO(rhs_ammo_ITOW_AT_penetrator)

		model="\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2A";//Placeholder
	};

	class rhs_ammo_ITOW_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		RHA(630,1000)
	};

	//TOW-2 SERIES MISSILES

	//BGM-71D (larger warhead)
	class rhs_ammo_TOW2_AT: rhs_ammo_TOWB_AT
	{
		HEAT_MACRO(rhs_ammo_TOW2_AT_penetrator)

		model="\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2A";
		hit = 450;
		indirectHit = 20;
		indirectHitRange = 4;
		maxSpeed = 329;
		thrust = 210; //30% more thrust
		whistleDist = 4;

		rhs_ballisticMode = 0;
	};
	class rhs_ammo_TOW2_AT_static: rhs_ammo_TOW2_AT
	{
		initTime=0.15;
	};
	class rhs_ammo_TOW2_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		RHA(900,1000)
	};

	//BGM-71E (TOW-2 with tandem warhead in standoff probe)
	class rhs_ammo_TOW2A_AT: rhs_ammo_TOW2_AT
	{
		warheadName	= TandemHEAT;
		HEAT_MACRO(rhs_ammo_TOW2A_AT_penetrator)
	};

	class rhs_ammo_TOW2A_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		warheadName	= TandemHEAT;
		RHA(900,1000)
	};

	//BGM-71F (top down attack)
	class rhs_ammo_TOW2B_AT: rhs_ammo_TOW2A_AT
	{
		HEAT_MACRO(rhs_ammo_TOW2B_AT_penetrator)

		model="\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2B";
		rhs_ballisticMode = 2;
	};

	//PLACEHOLDER
	//BGM-71F-3 TOW-2B AERO. Improved range TOW-2B (4000-4500m depending on source)
	class rhs_ammo_TOW2B_AERO_AT: rhs_ammo_TOW2B_AT
	{
		model="\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2BAERO";

		maxControlRange = 4000;
	};

	class rhs_ammo_TOW2B_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		warheadName	= TandemHEAT;
		RHA(300,1000)
	};

	//BGM-71H Bunker Buster TOW. (thermobaric warhead?)
	//Might need to bump range up to 4000m (might be radio guided only, so longer range)
	//Warhead size > 6kg
	class rhs_ammo_TOW2_BB: rhs_ammo_TOW2_AT
	{
		AIAmmoUsageFlags	= "64+128+256";
		submunitionAmmo		= "rhs_ammo_TOW2_BB_penetrator";

		model				= "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2BB";
		hit					= 120;
		indirectHit			= 30;	// initial explosion on splash
		indirectHitRange	= 6;
		cost				= 100;

		explosive = 1;
		allowAgainstInfantry = 1;

		deleteParentWhenTriggered = 1;
	};
	class rhs_ammo_TOW2_BB_penetrator: rhsusf_ammo_basic_penetrator
	{
		RHA(200,1000)
		simulationStep				= 0.0001;
		timeToLive					= 0.01;
		triggerTime					= 0.0015;
		deleteParentWhenTriggered	= 1;
		submunitionAmmo				= "rhs_ammo_TOW2_BB_explosive";
		submunitionConeType[]		= {"randomcenter", 1};

	};
	class rhs_ammo_TOW2_BB_explosive: rhs_ammo_TOW2_AT
	{
		hit					= 120;
		indirectHit			= 100;
		indirectHitRange	= 12;
		explosive			= 1;

		CraterEffects		= "ArtyShellCrater";
		explosionEffects	= "MortarExplosion";

		CfgAmmo_CamShakeExplode(110,18);
		CfgAmmo_CamShakeHit(110);
		CfgAmmo_CamShakeFire(110);
		CfgAmmo_CamShakePlayerFire(5);


		// Spall handling
		submunitionConeType[]		= {"randomcenter", 15};
		submunitionConeAngle 		= 120;
		submunitionAmmo				= rhs_ammo_thermobaric_wave;
		submunitionDirectionType	= SubmunitionModelDirection;
		submunitionInitialOffset[]	= {0,0,-0.4};
		submunitionParentSpeedCoef	= 0;
		submunitionInitSpeed		= 200;
		deleteParentWhenTriggered	= false;
		triggerTime					= 0.003;
	};

	class R_230mm_HE;
	class R_230mm_fly;
	class rhs_ammo_m26_rocket: R_230mm_HE
	{
		model					= \rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M26_rocket_fly.p3d;

		triggerDistance			= 250;
		triggerSpeedCoef[]		= {0.5,1};
		submunitionConeAngle	= 19;
		submunitionConeType[]	= {"randomcenter",161}; // 644/4
		submunitionAmmo[]		= {"rhs_ammo_m77_submunition",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
	};
	class rhs_ammo_m26a1_rocket: rhs_ammo_m26_rocket
	{
		submunitionAmmo[]		= {"rhs_ammo_m85_submunition",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
		submunitionConeType[]	= {"randomcenter",130}; //518/4
	};
	class rhs_ammo_m30_rocket: rhs_ammo_m26_rocket
	{
		model					= \rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M30_rocket_fly.p3d;
		submunitionAmmo[]		= {"rhs_ammo_m85_submunition",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
		submunitionConeType[]	= {"randomcenter",101}; // 404/4
	};
	class rhs_ammo_m31_rocket: R_230mm_HE
	{
		model					= \rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M30_rocket_fly.p3d;
		submunitionAmmo			= "rhs_ammo_m31_rocket_deploy";
	};
	class rhs_ammo_m31_rocket_deploy: R_230mm_fly
	{
		model					= \rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M30_rocket.p3d;
	};
	class rhs_ammo_ATACMS_rocket_base: R_230mm_HE
	{
		model					= \rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_MGM140_rocket.p3d;
	};
	class rhs_ammo_mgm140a_rocket: rhs_ammo_ATACMS_rocket_base
	{
		triggerDistance			= 400;
		triggerSpeedCoef[]		= {0.5,1};
		submunitionConeAngle	= 19;
		submunitionConeType[]	= {"randomcenter",234}; // 950/4
		submunitionAmmo[]		= {"rhs_ammo_m74_submunition",0.93,"rhs_ammo_m74_deploy",0.07};
	};
	class rhs_ammo_mgm140b_rocket: rhs_ammo_ATACMS_rocket_base
	{
		triggerDistance			= 250;
		submunitionConeType[]	= {"randomcenter",69}; // 275/4
	};
	class rhs_ammo_mgm164_block4_rocket: rhs_ammo_ATACMS_rocket_base
	{
		submunitionAmmo			= "rhs_ammo_mgm164_block4_rocket_deploy";
	};
	class rhs_ammo_mgm164_block4_rocket_deploy: R_230mm_fly
	{
		// 500lb unitary HE warhead - values copied from Mk.82 etc. 500lb bomb
		hit						= 5000;
		indirectHit				= 1150;
		indirectHitRange		= 12;
		explosionEffects		= "BombExplosion";
		model					= \rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_MGM140_rocket.p3d;
	};

	class Mo_cluster_AP;
	class ShotDeployBase;
	class APERSMine_Range_Ammo;

	class rhs_ammo_m74_submunition: Mo_cluster_AP
	{
		hit						= 8;
		indirectHit				= 8;
		indirectHitRange		= 6;
		model					= "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
	};
	class rhs_ammo_m74_deploy: ShotDeployBase
	{
		model					= "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
		submunitionAmmo			= rhs_ammo_uxo_m74;
	};
	class rhs_ammo_uxo_m74: APERSMine_Range_Ammo
	{
		hit						= 8;
		indirectHit				= 8;
		indirectHitRange		= 6;
		icon					= "iconExplosiveUXO";
		model					= "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO1_F";
		mineModelDisabled		= "\A3\Weapons_F\empty.p3d";
		defaultMagazine			= "";
		mineTrigger				= RangeTriggerShort;
		mineCanBeReactivated	= 0;
		mineFloating			= 1e7;
	};
	class rhs_ammo_m77_submunition: rhs_ammo_m74_submunition
	{
		hit						= 35;
		indirectHit				= 25;
		indirectHitRange		= 8;
		model					= "\A3\weapons_f\ammo\shell";
	};
	class rhs_ammo_m85_submunition: rhs_ammo_m77_submunition
	{

	};
	class rhs_ammo_BAT_submunition: rhs_ammo_m77_submunition
	{

	};