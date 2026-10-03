#include "../basicdefines_A3.hpp"

class CfgAmmo
{
	class BulletBase;
	class RocketBase;
	class GrenadeHand_stone;
	class F_40mm_White;
	class F_40mm_Green;
	class F_40mm_Red;
	class G_40mm_HE;
	class MissileCore;
	class MissileBase : MissileCore
	{
		class Components;
	};

	///! Rifle bullets
/*
MK 248 MOD 1 .300 (14.26 g)
*/
	class B_762x54_Ball;
	class rhsusf_B_300winmag: B_762x54_Ball
	{
		hit = 18.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.0007034;
		caliber = 0.79;
		cartridge = "";
		rhs_cartridge = "\A3\Weapons_F_Mark\Ammo\cartridge_338_LM";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		typicalSpeed = 869;
	};

	class B_127x99_Ball;
	/*
		M33 45.58g @ 838.2ms
	*/
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
		hit = 25.3075;
		indirectHit = 0.0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.000617;
		// 8.12mm RHA at 500m
		RHA(10.12,658)
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 3;
		typicalSpeed = 838.2;
	};
	class rhsusf_ammo_127x99_mk211 : rhsusf_ammo_127x99_M33_Ball
	{
		hit						= 24.80845;
		indirectHit				= 4;
		indirectHitRange		= 2.76;
		explosive				= 0.4;
		// 11mm @ 45 deg at 1000m
		RHA(15,486)

		craterEffects			= "ATMissileCrater";
		explosionEffects		= "RHS_ExploSmallAmmoExplosion";
		explosionSoundEffect	= "DefaultExplosion";
		/*class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};*/
	};

	class B_556x45_Ball;
	class rhs_ammo_556x45_M855A1_Ball : B_556x45_Ball
	{
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge		= "RHS_Cartridge_556x45_m855";
		hit				= 9;
		typicalSpeed	= 960; //value for 20 inch barrel (calculated from M16)
		airFriction		= -0.000772;
		caliber			= 0.65;
		deflecting		= 21;
		visibleFire		= 3;
		audibleFire		= 7;
	};
	class rhs_ammo_556x45_M855A1_Ball_Red : rhs_ammo_556x45_M855A1_Ball
	{
		nvgOnly			= 0;
		tracerStartTime	= 0.073;
		tracerEndTime	= 1;
	};
	class rhs_ammo_556x45_M855A1_Ball_Green : rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class rhs_ammo_556x45_M855A1_Ball_Yellow : rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class rhs_ammo_556x45_M855A1_Ball_Orange : rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
	};

	class rhs_ammo_556x45_M855_Ball : B_556x45_Ball
	{
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge		= "RHS_Cartridge_556x45_m855";
		hit				= 9;
		typicalSpeed	= 948.8424;
		airFriction		= -0.00076;
		caliber			= 0.44;
		deflecting		= 21;
		visibleFire		= 3;
		audibleFire		= 7;
	};
	class rhs_ammo_556x45_M855_Ball_Red : rhs_ammo_556x45_M855_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge		= "RHS_Cartridge_556x45_m855";
		nvgOnly = 0;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	};
	class rhs_ammo_556x45_M855_Ball_Green : rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class rhs_ammo_556x45_M855_Ball_Yellow : rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class rhs_ammo_556x45_M855_Ball_Orange : rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
	};

	class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball
	{
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit				= 9.55;
		typicalSpeed	= 950;
		airFriction		= -0.00076;
		caliber			= 0.64;
		deflecting		= 17;
		visibleFire		= 3;
		audibleFire		= 5.5;
		tracerStartTime	= 0.073;
		tracerEndTime	= 1;
	};
	class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball
	{
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit				= 10.3;
		typicalSpeed	= 838.2;
		airFriction		= -0.00066;
		caliber			= 0.677;
		deflecting		= 15;
		visibleFire		= 2.5;
		audibleFire		= 5;
		tracerStartTime	= 0.073;
		tracerEndTime	= 1.15;
	};
	class rhs_ammo_556x45_M193_Ball : B_556x45_Ball
	{
		RHA(7.8,974)
		hit				= 9.3; //Increased as it has better soft target effects than M855
		typicalSpeed	= 974; //value for 20 inch barrel (calculated from M16)
		airFriction		= -0.000770;
		deflecting		= 28;
		visibleFire		= 3;
		audibleFire		= 7;
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class rhs_ammo_556x45_M196_Ball_Red : rhs_ammo_556x45_M193_Ball
	{
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly			= 0;
		tracerStartTime	= 0.073;
		tracerEndTime	= 1;
	};
	class rhs_ammo_556x45_M995_AP : B_556x45_Ball
	{
		RHA(12,921)
		hit				= 8.6;
		typicalSpeed	= 1024;
		airFriction		= -0.000770;
		deflecting		= 21;
		visibleFire		= 3;
		audibleFire		= 7;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	//http://www.gunshopfinder.com/springfield-m1a-ballistics.html
	//http://www.inetres.com/gp/military/infantry/rifle/762mm_ammo.html
	//worth to note that army is currently upgrading to M80A1
	class rhs_ammo_556x45_blank : B_556x45_Ball
	{
		hit							= 6; // need to be at least 1 to be transmited over network
		cost						= 0.1;
		submunitionAmmo				= rhs_ammo_blank;
		submunitionDirectionType	= SubmunitionModelDirection;
		triggerTime					= 0.001;
		simulationStep				= 0.001;
		soundSetBulletFly[]			= {};
		soundSetSonicCrack[]		= {};
	};
	class rhs_ammo_blank : B_556x45_Ball
	{
		hit				= 0;
		timeToLive		= 0.01;
		simulationStep	= 0.01;
		model			= "\A3\weapons_f\empty";
	};
	// Add M80, M61, M62, M63, M82. (Orange tracers for USMC).

	//- M240 MG

	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		//Ball
		//9.5 g
		hit = 11.55;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;

		//4mm at 300m
		caliber = 0.45;

		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1.2;
		tracerStartTime = 0.045; // seconds
		tracerEndTime = 1.5; // seconds

		airFriction = -0.0006814;
		typicalSpeed = 838;
	};
	// M61  AP used against light vehicles (mainly by CAAT platoons)
	class rhs_ammo_762x51_M61_AP: rhs_ammo_762x51_M80_Ball
	{
		hit = 12.55;
		//4mm at 300m
		caliber = 0.79;
	};
	// M62 tracer / signal
	class rhs_ammo_762x51_M62_tracer: rhs_ammo_762x51_M80_Ball
	{
		hit = 11;
		typicalSpeed = 817;
	};
	// M80A1EPR ball standard
	class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball
	{
		hit = 10.5;
		caliber = 0.55;
		airFriction = -0.0007114;
		typicalSpeed = 930;
	};
	// M82 training
	class rhs_ammo_762x51_M82_blank: rhs_ammo_556x45_blank
	{
		hit = 7;
	};

	//- Sniper rifles / Marksmen

	class rhs_ammo_762x51_M118_Special_Ball: rhs_ammo_762x51_M80_Ball
	{
		//Full Metal Jacket Boat Tail
		//11.2 g
		caliber = 0.52; //5mm at 300m
		typicalSpeed = 805; //786 according to PEO Ammunition systems: https://apps.dtic.mil/dtic/tr/fulltext/u2/a567897.pdf
		airFriction = -0.0007474;
		cartridge = "";
		rhs_cartridge = "\A3\weapons_f\ammo\cartridge_762";
	};
	class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball
	{
		//8.2 g
		//18mm at 100m
		RHA(18, 850)
		typicalSpeed = 910;
		cartridge = "";
		rhs_cartridge = "\A3\weapons_f\ammo\cartridge_762";
	};
	class rhs_ammo_762x51_Mk316_Special_Ball: rhs_ammo_762x51_M118_Special_Ball
	{
		//Hollow Point Boat Tail
		//11.3 g
		visibleFire = 16;
	};

	//- Shotgun5

	class B_12Gauge_Pellets;
	// 40mm
	class rhs_ammo_m576_buckshot: B_12Gauge_Pellets
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0.6;
		cartridge = "";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};

	// 12Ga
	// 00 Buck
	class rhs_ammo_12g_00buckshot: B_12Gauge_Pellets
	{
		hit						= 20; // for AI
		simulation				= shotSubmunitions;
		simulationStep			= 0.0001;
		triggerTime				= 0.0001;
		triggerSpeedCoef[]		= {0.84,1.0};
		submunitionAmmo			= rhs_ammo_12g_00buckshot_pellet;
		submunitionConeType[]	= {"poissondisccenter", 9};
		submunitionConeAngle	= 0.95;
		cartridge				= "";
		model					= "\A3\weapons_f\empty";
		rhs_cartridge			= "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_buckshot";
	};
	class rhs_ammo_12g_00buckshot_pellet: BulletBase
	{
		hit = 4.75;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.24;

		typicalSpeed = 403.86;
		airFriction = -0.00634;

		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class rhs_ammo_doomsday_buckshot: rhs_ammo_m576_buckshot
	{
		hit = 9;
		indirectHit = 9;
		indirectHitRange = 0.6;
	};

	class B_12Gauge_Slug;
	// 437 Grain slug
	class rhs_ammo_12g_slug: B_12Gauge_Slug
	{
		hit = 34.51;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.3048;
		cartridge = "";
		rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_slug";

		typicalSpeed = 475.49;
		airFriction = -0.002042;

	};

	// HE FRAG
	class rhs_ammo_12g_FRAG : B_12Gauge_Slug
	{
		hit = 6;
		indirectHit = 1.143;
		indirectHitRange = 1.972;
		caliber = 0.2;
		cartridge = "";
		rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_hefrag";

		typicalSpeed = 150;
		airFriction = -0.0069;

		timeToLive = 5;

		deflecting = 0;
		explosive = 1;

		explosionEffects = "RHSUSF_12gExplosion";
		CraterEffects = "";

		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 15;
		suppressionRadiusHit = 14;

		soundHit1[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_1", 1.6, 1, 1200 };
		soundHit3[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_3", 1.6, 1, 1200 };
		soundHit4[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_4", 1.6, 1, 1200 };
		soundHit6[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_6", 1.6, 1, 1200 };
		multiSoundHit[] = { "soundHit1", 0.25, "soundHit3", 0.25, "soundHit4", 0.25, "soundHit6", 0.25 };
		explosionSoundEffect = "DefaultExplosion";

		class CamShakeExplode
		{
			power = "(9*0.2)";
			duration = "((round (9^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((1 + 9^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 9;
			duration = "((round (9^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};

	// HE AP ~ 10mm RHA EPF
	class rhs_ammo_12g_HE : rhs_ammo_12g_FRAG
	{
		HEAT_MACRO(rhs_ammo_12gHEAP_penetrator)

		hit = 1.575;
		indirectHit = 1.143;
		indirectHitRange = 0.986;
		caliber = 0.1;
		rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_heer";

		typicalSpeed = 150;
		airFriction = -0.0074;

		deflecting = 0;
	};
	class rhs_ammo_12gHEAP_penetrator : BulletBase
	{
		hit = 10;
		indirectHit = 0;
		deflecting = 0;
		typicalSpeed = 1000;
		RHA(13, 1000)
		cartridge = "";

		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
	};

	/// Pistol Rounds
	class rhs_ammo_45ACP_MHP: BulletBase
	{
		scope = 2;
		hit = 5.146859392;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 2.680965147;
		deflecting = 30;
		visibleFire = 5;
		audibleFire = 9;
		typicalSpeed = 280;
		airFriction = -0.0018;
	};
	class rhs_ammo_45ACP_MHPT_Orange: rhs_ammo_45ACP_MHP
	{
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
	};

	class rhs_ammo_9x19_FMJ: BulletBase
	{
		hit = 4.945778;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.674;
		deflecting = 29;
		visibleFire = 1.5;
		audibleFire = 3;
		typicalSpeed = 390.1;
		airFriction = -0.0027667;
	};
	class rhs_ammo_9x19_JHP: BulletBase
	{
		hit = 6.9426537;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.415;
		deflecting = 25;
		visibleFire = 1;
		audibleFire = 2.5;
		cost = 1;
		typicalSpeed = 301.8;
		airFriction = -0.001095;
	};

	// 4.6x30mm
	// Author: spartan0536
	// https://forums.bistudio.com/topic/163694-arma-iii-ballistics-overhaul/
	class rhs_ammo_46x30_FMJ : rhs_ammo_556x45_M855A1_Ball
	{
		hit = 5.5;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		caliber = 0.649;
		visibleFire = 2;
		audibleFire = 5;
		typicalSpeed = 619.9632;
		airFriction = -0.0027667;
		deflecting = 21;
	};
	class rhs_ammo_46x30_JHP : rhs_ammo_46x30_FMJ
	{
		caliber = 0.464;
		typicalSpeed = 699.8208;
		airfriction = -0.0034830077;
		hit = 7.4;
		deflecting = 25;
	};
	class rhs_ammo_46x30_AP : rhs_ammo_46x30_FMJ
	{
		caliber = 0.927;
		typicalSpeed = 734.8728;
		airfriction = -0.0026624051;
		hit = 9.6;
	};


	///! Rockets
//heat
	class rhsusf_ammo_basic_penetrator;
	class rhs_ammo_M136_rocket : RocketBase
	{
		HEAT_MACRO(rhs_ammo_M136_penetrator)

		model="\rhsusf\addons\rhsusf_weapons2\M136\at4_rocket";
		hit = 235;
		indirectHit = 11;
		indirectHitRange = 4.1;
		cost = 200;
		explosive = 0.65;
		caliber = 0.8;

		//airFriction = -0.00009;
		airFriction = 0.00000000000000000000000000000000000000000000000000000001; // i guess arma reads it as zero anyway
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 219;
		initTime = 0.1;
		thrustTime = 0.00;
		thrust = 10;
		fuseDistance = 5;

		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 12;

		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";

		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
	class rhs_ammo_M136_penetrator : rhsusf_ammo_basic_penetrator
	{
		//hit = 335;
		RHA(400,1000)
	};
	class rhs_ammo_M136_hp_rocket : rhs_ammo_M136_rocket
	{
		HEAT_MACRO(rhs_ammo_M136_hp_penetrator)

		hit = 245;
	};
	class rhs_ammo_M136_hp_penetrator : rhs_ammo_M136_penetrator
	{
		//hit = 245;
		RHA(550,1000)
	};

	class rhs_ammo_M136_hedp_rocket : rhs_ammo_M136_rocket
	{
		HEAT_MACRO(rhs_ammo_M136_hedp_penetrator)

		hit = 235;
		indirectHit = 31;
		indirectHitRange = 6.1;
		cost = 200;
		explosive = 0.65;
	};
	class rhs_ammo_M136_hedp_penetrator : rhs_ammo_M136_penetrator
	{
		hit = 235;
		RHA(150,1000)
	};

	// M72A7
	class rhs_ammo_m72a7_rocket : rhs_ammo_M136_hedp_rocket
	{
		HEAT_MACRO(rhs_ammo_M136_hedp_penetrator)

		hit = 145;
		indirectHit = 19;
	};

	class M_Titan_AA : MissileBase
	{
		class Components;
	};
	class rhs_ammo_fim92_missile : M_Titan_AA
	{
		model				= "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		hit					= 60;
		indirectHit			= 55;
		indirectHitRange	= 8; //3kg high explosive, hit-to-kill impact fuse
		proximityExplosionDistance = 10;
		maneuvrability		= 34;
		simulationStep		= 0.001; // for high speed and maneuverability we need extremely small step
		trackOversteer		= 0.95;
		trackLead			= 0.6;
		airLock				= 2;
		irLock				= 1;
		cost				= 1000;
		timeToLive			= 15; // 17 +/- 2
		sideairfriction		= 0.08;
		maxSpeed			= 750; // m/s
		initTime			= 0.25;
		thrustTime			= 4.9;
		thrust				= 325;
		fuseDistance		= 50;
		explosive			= 1;
		audibleFire			= 32;
		whistleDist			= 16;
		cmImmunity			= 0.95;
		maxcontrolrange		= 7000;

		CraterEffects			= "AAMissileCrater";
		effectsMissile			= "RHS_FIM92_Fired";
		effectsMissileInit		= "RocketBackEffectsRPG";

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

		//Missile sensors definition
		missileLockMaxDistance	= 6500;
		missileLockMinDistance	= 300;
		missileLockMaxSpeed		= 333;
		missileLockCone			= 12;
		missileKeepLockedCone	= 70; //Need to play with it for a while
		weaponLockSystem		= CM_Lock_IR + CM_Missile;

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						SENS_RANGES_WVR(6500,1000)
						typeRecognitionDistance = -1; // distance how far the target type gets recognized
						angleRangeHorizontal = 35;     // sensor azimuth coverage in degrees
						angleRangeVertical = 35;       // sensor elevation coverage in degrees
						groundNoiseDistanceCoef = 0.02;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = 40;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = -1;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 330;
						minTrackableATL = 20;
						maxTrackableATL = 4000;
					};
				};
			};
		};
	};
	class rhs_ammo_fim92_ah64: rhs_ammo_fim92_missile
	{
		weaponType = bomb;
	};

	// http://www.ewp.rpi.edu/hartford/~gutiee/SPR/Zhang-FinalReport.pdf
	class rhs_ammo_M_fgm148_AT: MissileBase
	{
		afMax = 200;
		aiAmmoUsageFlags = 128 + 512;
		audibleFire = 32;
		caliber = 1;

		warheadName	= TandemHEAT;
		HEAT_MACRO(rhs_ammo_M_fgm148_AT_penetrator)

		model = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_missile";

		//hit = 850;
		hit					= 350;
		indirectHit			= 40;
		indirectHitRange	= 4;
		explosive			= 0.65;

		flightProfiles[] 	= {Direct, TopDown, Cruise};
		class Direct {};
		class TopDown
		{
			ascendHeight	= 160.0;
			descendDistance	= 200.0;
			minDistance		= 150.0;
			ascendAngle		= 45.0;
		};
		class Cruise
		{
			preferredFlightAltitude	= 60;
			lockDistanceToTarget	= 1000;
		};

		irLock					= 1;
		laserLock				= 1;
		nvLock					= 0;
		airLock					= 1;
		autoSeekTarget			= 0;
		allowAgainstInfantry	= 0;

		airFriction		= 0.2;
		sideAirFriction	= 0.35;
		trackOversteer	= 1.4;
		trackLead		= 1;
		maxSpeed		= 460;
		maneuvrability	= 32;
		manualControl	= 0;
		maxControlRange	= 4000;

		fuseDistance	= 30; //Distance until armed (Not working?)
		thrust			= 75;
		thrustTime		= 4.2;
		initTime		= 0.5; //Time till engine start after launch

		timeToLive		= 60;
		whistleDist		= 4;
		deflecting		= 0;
		simulationStep	= 0.001;
		cmImmunity		= 0.9;
		cost			= 1000;

		effectsMissile		= "missile2";
		effectsMissileInit	= "RocketBackEffectsRPG";
		effectsSmoke		= "SmokeShellWhite";

		//Missile sensors definition
		missileLockMaxDistance	= 3000;
		missileLockMinDistance	= 100;
		missileLockMaxSpeed		= 41;
		missileLockCone			= 10;
		weaponLockSystem		= CM_Lock_IR + CM_Missile;

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget      // ranges for targets with sky background
						{
							minRange = 500;         //minimum possible range in meters
							maxRange = 3000;       //maximum possible range in meters
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget      // ranges for targets with ground background
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance	= -1; // distance how far the target type gets recognized
						angleRangeHorizontal	= 20;     // sensor azimuth coverage in degrees
						angleRangeVertical		= 20;       // sensor elevation coverage in degrees
						groundNoiseDistanceCoef	= 0;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance	= 0;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minTrackableSpeed		= 0;
						maxTrackableSpeed		= 37;
						minTrackableATL			= 0;
						//maxTrackableATL		= 100;
						minSpeedThreshold		= 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold		= 1;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough		= 0.95;
						aimDown					= 25;				// The sensor will look 25 degrees downwards from animDirection
					};
				};
			};
		};
	};
	class rhs_ammo_M_fgm148_AT_penetrator : rhsusf_ammo_basic_penetrator
	{
		warheadName	= TandemHEAT;
		hit = 380;
		RHA(760,1000)
	};

	//- SRAW
	/*
	https://embed.gyazo.com/3b26f9618fe2fcdbcad0b7cf3fa9de10.png
	https://embed.gyazo.com/72edf2937c1e0801ea023fe55afe5211.png
	https://embed.gyazo.com/37af43a38234265668764310de639bf3.png
	*/
	class M_NLAW_AT_F;
	class rhs_ammo_M_fgm172a_AT : M_NLAW_AT_F
	{
		HEAT_MACRO(rhs_ammo_M_fgm148_AT_penetrator)

		model = "\rhsusf\addons\rhsusf_weapons2\sraw\fgm-172a";

		maxSpeed = 260;
		thrustTime = 1;
		thrust = 320;
		initTime = 0.25;
		fuseDistance = 17;
		timeToLive = 15;
		airFriction = 0.6;
		sideAirFriction = 0.1;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 4;
		simulationStep = 0.002;

		irLock = 0;
		laserLock = 0;
		nvLock = 0;
		airLock = 0;

		aiAmmoUsageFlags = "128 + 512";


		/*
		model = "\rhsusf\addons\rhsusf_weapons2\sraw\fgm-172a";

		//hit = 850;
		hit = 300;
		indirectHit = 40;
		indirectHitRange = 4;
		explosive = 0.65;

		irLock = 0;
		laserLock = 0;
		nvLock = 0;
		airLock = 0;
		lockSeekRadius = 0;
		autoSeekTarget = 0;
		//lockType = [0];
		allowAgainstInfantry = 0;

		maxSpeed = 260;
		airFriction = 0.4;
		sideAirFriction = 0.1;
		trackOversteer = 1;
		trackLead = 1;
		manualControl = 0;
		maneuvrability = 32;
		maxControlRange = 600;

		aiAmmoUsageFlags = "128 + 512";

		fuseDistance = 17; //Distance until armed (Not working?)
		thrust = 500;
		thrustTime = 2;
		initTime = 0.25; //Time till engine start after launch

		timeToLive = 10;
		whistleDist = 4;
		deflecting = 0;
		simulationStep = 0.002;
		cmImmunity = 0.9;
		cost = 10000;
		*/
	};

	class rhs_ammo_M_fgm172b_MPV: rhs_ammo_M_fgm172a_AT
	{
		HEAT_MACRO(rhs_ammo_M_fgm148_AT_penetrator)

		model = "\rhsusf\addons\rhsusf_weapons2\sraw\fgm-172b";

		fuseDistance = 25;
		aiAmmoUsageFlags = "64 + 128";

		//hit = 850;
		hit = 200;
		indirectHit = 100;
		indirectHitRange = 10;
		explosive = 0.65;

		allowAgainstInfantry = 1;
		cost = 1000;
	};

	//- SMAW
	class rhs_ammo_smaw_HEAA: RocketBase
	{
		HEAT_MACRO(rhs_ammo_smaw_HEAA_penetrator)

		EffectFly = "ArtilleryTrails";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_04",db20,1,1200};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6",db15,1,35};

		model = "rhsusf\addons\rhsusf_weapons2\smaw\rocket_smaw.p3d";
		hit = 260;
		indirectHit = 11;
		indirectHitRange = 3.1;
		explosive = 0.65;
		cost = 800;
		airFriction = 0.010;
		sideAirFriction = 0.00;
		maxSpeed = 220;
		initTime = 0.01;
		thrustTime = 10;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_backblast";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	class rhs_ammo_smaw_HEAA_penetrator : rhsusf_ammo_basic_penetrator
	{
		RHA(590, 1000)
	};

	class rhs_ammo_smaw_HEDP: RocketBase
	{

		HEAT_MACRO(rhs_ammo_smaw_HEDP_penetrator)

		EffectFly = "ArtilleryTrails";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_04",db20,1,1200};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6",db15,1,35};

		model = "rhsusf\addons\rhsusf_weapons2\smaw\rocket_smaw.p3d";
		hit = 150;
		indirectHit = 51;
		indirectHitRange = 6.7;
		explosive = 0.65;
		cost = 500;
		airFriction = 0.010;
		sideAirFriction = 0.0;
		maxSpeed = 220;
		initTime = 0.01;
		thrustTime = 10;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_backblast";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	class rhs_ammo_smaw_HEDP_penetrator : rhs_ammo_M136_penetrator
	{
		hit = 235;
		RHA(250, 1000)
	};


	class rhs_ammo_smaw_SR : RocketBase
	{
		explosive = 0.0;

		soundHit[] = {"\a3\sounds_f\weapons\hits\plastic_4.wss",db-3,1,20};

		audibleFire = 3.0;

		caliber = 0.01;

		model = "rhsusf\addons\rhsusf_weapons2\smaw\tracer_smaw.p3d";
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 500;
		airFriction = 0.000;
		sideAirFriction = 0.02;
		maxSpeed = 220;
		initTime = 0.5;
		thrustTime = 0.0;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_cartrige";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(5^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	//MAAWS
	// FFV751
	class rhs_ammo_maaws_HEAT: RocketBase
	{
		HEAT_MACRO(rhs_ammo_maaws_HEAT_penetrator)
		explosive = 0.65;

		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};

		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 270;
		indirectHit = 15;
		indirectHitRange = 3.1;
		caliber = 0.8;
		cost = 800;
		airFriction = 0.010;
		sideAirFriction = 0.00;
		maxSpeed = 290;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};

		visibleFire = 15;
		audibleFire = 20;
		warheadName	= TandemHEAT;
	};
	class rhs_ammo_maaws_HEAT_penetrator : rhsusf_ammo_basic_penetrator
	{
		RHA(590, 1000)
		warheadName	= TandemHEAT;
	};
	class rhs_ammo_maaws_HEDP: RocketBase
	{
		HEAT_MACRO(rhs_ammo_maaws_HEDP_penetrator)
		explosive = 0.65;

		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};

		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 250;
		indirectHit = 45;
		indirectHitRange = 5.1;
		cost = 500;
		airFriction = 0.010;
		sideAirFriction = 0.00;
		maxSpeed = 230;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};

		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_HEDP_penetrator : rhs_ammo_M136_penetrator
	{
		//hit = 235;
		RHA(175, 1000)
	};
	class rhs_ammo_maaws_HE: RocketBase
	{
		/*tf47_zeroing = "1";
		tf47_event = "tf47_launchers_fnc_airburst"; To be completed at a later date
		tf47_airburstMin = 50;
		tf47_airburstMax = 1500;
		tf47_airburstVar = "tf47_AirburstRange";
		*/
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};

		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 75;
		indirectHit = 65;
		indirectHitRange = 11;
		cost = 300;
		airFriction = 0.010;
		sideAirFriction = 0.00;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "MortarExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};

		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_SMOKE: RocketBase
	{

		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};

		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 2;
		cost = 300;
		airFriction = 0.010;
		sideAirFriction = 0.00;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExplosionEffects";
		effectsSmoke = "SmokeShellWhite";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};

		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_ILLUM: RocketBase
	{
		//tf47_zeroing = "1";
		//tf47_event = "tf47_launchers_fnc_flare";
		//tf47_ammoSpeed = 255;

		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};

		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 1;
		cost = 300;
		airFriction = 0.010;
		sideAirFriction = 0.00;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExplosionEffects";
		effectFlare = "FlareShell";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};

		visibleFire = 15;
		audibleFire = 20;
	};

	///! Explosives

	class PipeBombBase;
	class rhsusf_m112_ammo: PipeBombBase
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 3;
		model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_e";
		mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_d";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_5",3.1622777,1,1500};
		defaultMagazine = "rhsusf_m112_mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
	};
	class rhsusf_m112_ammo_scripted: rhsusf_m112_ammo{};

	class rhsusf_m112x4_ammo: PipeBombBase
	{
		hit = 3000;
		indirectHit = 3000;
		indirectHitRange = 5;
		model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x4_e";
		mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x4_d";
		defaultMagazine = "rhsusf_m112x4_mag";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_2",3.1622777,1,1500};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
	};
	class rhsusf_m112x4_ammo_scripted: rhsusf_m112x4_ammo{};


	///! Mines

	class MineBase;
	class APERSMine_Range_Ammo;
	class rhsusf_mine_m19_ammo: MineBase
	{
		hit = 2200;
		indirectHit = 1850;
		indirectHitRange = 1.5;
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m19_e";
		mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m19_e";
		icon = "iconExplosiveAP";

		defaultMagazine = "rhs_mine_M19_mag";

		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2",3.1622777,1,2000};
		SoundSetExplosion[] = {"ATmine_Exp_SoundSet","ATmine_Tail_SoundSet","Explosion_Debris_SoundSet"};

		explosionEffects = "ATMineExplosion";
		CraterEffects = "ATMineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		//mineTrigger = "RangeTriggerShort";
		mineTrigger = "rhs_M19_Trigger";

		deleteParentWhenTriggered 		= false;
		submunitionAmmo[]				= {"rhsusf_mine_m19_penetrator", 1};
		submunitionConeAngle[]			= {0, 4};
		submunitionConeAngleHorizontal	= 720;
		submunitionAutoleveling			= 1;
		submunitionConeType[]			= {"randomupcone", 1};
		submunitionInitSpeed			= 100;
	};
	class rhsusf_mine_m19_penetrator: rhsusf_ammo_basic_penetrator
	{
		hit = 240;
		typicalspeed = 100;
		RHA(200,100)
	};
	class rhsusf_mine_m14_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 3;
		indirectHit = 30;
		indirectHitRange = 0.2;
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m14_e";
		mineModelDisabled = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m14_d";
		icon = "iconExplosiveAP";

		defaultMagazine = "rhsusf_mine_m14_mag";

		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2",3.1622777,1,2000};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 3;
		mineTrigger = "RangeTriggerShort";
	};
	class rhsusf_mine_m49a1_3m_ammo: APERSMine_Range_Ammo
	{
		hit						= 1;
		indirectHit				= 0;
		indirectHitRange		= 0;
		minimumSafeZone			= 0;
		minDamageForCamShakeHit	= 1.55;
		mineInconspicuousness	= 35;
		mineTrigger				= "rhs_m49a1_3m_trigger";

		CraterEffects		= "";
		explosionEffects	= "";
		rhs_flare_used		= "rhsusf_mine_m49a1_used";
		rhs_flare_offset[]	= {0,0,0.3};

		CfgAmmo_CamShakeBallistic(0);
		CfgAmmo_CamShakeHit(0);

		model				= \rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_a_e;
		mineModelDisabled	= \rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_d;
		defaultMagazine		= rhsusf_mine_m49a1_3m_mag;

		SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1",1.25893,1,100};
		SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2",1.25893,1,100};
		SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3",1.25893,1,100};
		multiSoundHit[] = {"SmokeShellSoundHit1",0.25,"SmokeShellSoundHit2",0.25,"SmokeShellSoundHit3",0.5};

		SoundSetExplosion[] = {};
		whistleDist = 8;
		cost = 200;
		class Eventhandlers
		{
			class RHS_FlareExplosion
			{
				AmmoHit = "_this remoteExec ['rhs_fnc_tripwireFlare_m49a1']";
			};
		};
	};
	class rhsusf_mine_m49a1_6m_ammo: rhsusf_mine_m49a1_3m_ammo
	{
		model			= \rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_b_e;
		defaultMagazine	= rhsusf_mine_m49a1_6m_mag;
		mineTrigger		= "rhs_m49a1_6m_trigger";
	};
	class rhsusf_mine_m49a1_10m_ammo: rhsusf_mine_m49a1_3m_ammo
	{
		model			= \rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_c_e;
		defaultMagazine	= rhsusf_mine_m49a1_10m_mag;
		mineTrigger		= "rhs_m49a1_10m_trigger";
	};

	///! 40mm Grenades

	// Explosives
	class rhsusf_40mm_HE: G_40mm_HE
	{
		aiAmmoUsageFlags = "64 + 256";
		hit = 60;
		indirectHit = 5;
		indirectHitRange = 10.7;
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhsusf_40mm_HEDP : rhsusf_40mm_HE
	{
		aiAmmoUsageFlags = "64 + 128 + 256";
		hit = 95;
		indirectHit = 5;
		indirectHitRange = 3.6;
		model = "\A3\weapons_f\ammo\UGL_slug";

		HEAT_MACRO(rhs_ammo_40mmHEDP_penetrator)
	};
	class rhs_ammo_40mmHEDP_penetrator: rhs_ammo_12gHEAP_penetrator
	{
		hit = 90;
		RHA(50, 1000)
	};
	class rhs_ammo_m397: rhsusf_40mm_HE
	{
		//100% is not working :P1
		deflecting = 90;
		class HitEffects {
			hitMetal		= "RHS_m397_hit";
			hitMetalPlate	= "RHS_m397_hit";
			hitBuilding		= "RHS_m397_hit";
			hitConcrete		= "RHS_m397_hit";
			hitGroundSoft	= "RHS_m397_hit";
			hitGroundHard	= "RHS_m397_hit";
			default_mat		= "RHS_m397_hit";
			hitFoliage		= "RHS_m397_hit";
			hitGlass		= "RHS_m397_hit";
			hitGlassArmored	= "RHS_m397_hit";
			hitWood			= "RHS_m397_hit";
			hitPlastic		= "RHS_m397_hit";
			hitRubber		= "RHS_m397_hit";
			hitMan			= "RHS_m397_hit";
			hitWater		= "RHS_m397_hit";
			hitVirtual		= "RHS_m397_hit";
		};
		typicalspeed = 75;
		deleteParentWhenTriggered		= true;
		submunitionAmmo					= rhs_ammo_m397_explosion;
		submunitionDirectionType		= SubmunitionModelDirection;
		submunitionParentSpeedCoef		= 0.001;
	};
	class rhs_ammo_m397_explosion: rhsusf_40mm_HE
	{
		explosionTime = 0.0001;
		fuseDistance = 0;
	};

	// Flashbang
	class rhsusf_40mm_FLASHBANG: rhsusf_40mm_HE
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;
		fuseDistance=2;
		explosionTime = 3;
		ExplosionEffects = "RHSUSF_flashbang_10";
	};

	// Prac
	class rhsusf_40mm_Practice: BulletBase
	{
		hit = 1;
		indirectHit = 0;
		explosive = 0;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001;
		fuseDistance = 0;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 0.5;
		CraterEffects = "";
		explosionEffects = "";
		explosionSoundEffect = "";
		simulation = "shotShell";
		model = "\A3\weapons_f\ammo\UGL_slug";

		class HitEffects
		{
			hitMetal = "RHSUSF_40mmPracticePuff";
			hitMetalPlate = "RHSUSF_40mmPracticePuff";
			hitBuilding = "RHSUSF_40mmPracticePuff";
			hitConcrete = "RHSUSF_40mmPracticePuff";
			hitGroundSoft = "RHSUSF_40mmPracticePuff";
			hitGroundHard = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_green = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_Dead = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_Green_big = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_Palm = "RHSUSF_40mmPracticePuff";
			Hit_Foliage_Pine = "RHSUSF_40mmPracticePuff";
			hitFoliage = "RHSUSF_40mmPracticePuff";
			hitGlass = "RHSUSF_40mmPracticePuff";
			hitGlassArmored = "RHSUSF_40mmPracticePuff";
			hitWood = "RHSUSF_40mmPracticePuff";
			hitPlastic = "RHSUSF_40mmPracticePuff";
			hitRubber = "RHSUSF_40mmPracticePuff";
			hitMan = "RHSUSF_40mmPracticePuff";
			hitWater = "ImpactEffectsWater";
		};

		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(0^0.25)";
			duration = "((round (0^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((0^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};

	// Flares
	class rhsusf_40mm_white : F_40mm_White
	{
		brightness		= 500; // def 12
		timeToLive		= 44; // def 25 (burn time + triggerTime)
		triggerTime		= 4; // def 3
		affectedByWind	= 1;
		intensity		= 1000000;
		model			= "\A3\weapons_f\ammo\UGL_slug";
		flareSize		= 20;
	};

	class rhsusf_40mm_red : F_40mm_Red
	{
		brightness		= 25; // def 12
		timeToLive		= 44; // def 25 (burn time + triggerTime)
		triggerTime		= 4; // def 3
		affectedByWind	= 1;
		intensity		= 1000000;
		model			= "\A3\weapons_f\ammo\UGL_slug";
		flareSize		= 20;
		effectFlare		= "RHSUSF_FlareShell_Red";
	};

	class rhsusf_40mm_green : F_40mm_Green
	{
		brightness		= 25; // def 12
		timeToLive		= 44; // def 25 (burn time + triggerTime)
		triggerTime		= 4; // def 3
		affectedByWind	= 1;
		intensity		= 1000000;
		model			= "\A3\weapons_f\ammo\UGL_slug";
		flareSize		= 20;
		effectFlare		= "RHSUSF_FlareShell_Green";
	};
///////////////////////////
/////40mm Star Cluster/////
///M585, M663, M664 etc.///
///////////////////////////
	class rhsusf_40mm_clusterflare: BulletBase
	{
		simulation = "shotSubmunitions";
		hit = 1;
		indirectHit = 0;
		explosive = 0;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 0.5;
		CraterEffects = "";
		explosionEffects = "";
		explosionSoundEffect = "";
		model = "\A3\weapons_f\ammo\UGL_slug";

		triggerTime = 4;
		submunitionConeType[] = {"randomcenter", 5};
		triggerSpeedCoef[] = {0.1,0.4};
		submunitionConeAngle = 20;
	};

	class rhsusf_40mm_clusterflare_white: rhsusf_40mm_clusterflare
	{
		submunitionAmmo = "rhsusf_40mm_subflare_white";
	};
	class rhsusf_40mm_clusterflare_red: rhsusf_40mm_clusterflare
	{
		submunitionAmmo = "rhsusf_40mm_subflare_red";
	};
	class rhsusf_40mm_clusterflare_green: rhsusf_40mm_clusterflare
	{
		submunitionAmmo = "rhsusf_40mm_subflare_green";
	};

	class rhsusf_40mm_subflare_white : F_40mm_White
	{
		intensity			= 50000;
		flareSize			= 5;
		flareAirFriction	= 0;
		timeToLive			= 6; // def 25 (burn time + triggerTime)
		triggerTime			= 0; // def 3
		effectFlare			= "RHSUSF_FlareShell_White2";
	};
	class rhsusf_40mm_subflare_red : F_40mm_Red
	{
		intensity			= 50000;
		flareSize			= 5;
		flareAirFriction	= 0;
		timeToLive			= 6; // def 25 (burn time + triggerTime)
		triggerTime			= 0; // def 3
		effectFlare			= "RHSUSF_FlareShell_Red2";
	};
	class rhsusf_40mm_subflare_green : F_40mm_Green
	{
		intensity			= 50000;
		flareSize			= 5;
		flareAirFriction	= 0;
		timeToLive			= 6; // def 25 (burn time + triggerTime)
		triggerTime			= 0; // def 3
		effectFlare			= "RHSUSF_FlareShell_Green2";
	};
///////////////////////////
////End Star Clusters////
///////////////////////////

	// Smoke
	class SmokeShellYellow;
	class SmokeShell;
	class SmokeShellGreen;
	class SmokeShellRed;
	class rhs_40mm_smoke_white: SmokeShell
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhs_40mm_smoke_red: SmokeShellRed
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhs_40mm_smoke_green: SmokeShellGreen
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhs_40mm_smoke_yellow: SmokeShellYellow
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
	};

	class rhs_40mm_m714_white: SmokeShell
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};
	class rhs_40mm_m713_red: SmokeShellRed
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};
	class rhs_40mm_m715_green: SmokeShellGreen
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};
	class rhs_40mm_m716_yellow: SmokeShellYellow
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};

	class GrenadeHand;
	class rhs_ammo_m67: GrenadeHand
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m67\m67_frag";
	};


	class rhs_ammo_m69: GrenadeHand_stone
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m69\m69_practice";
	};

	class rhs_ammo_m84: GrenadeHand
	{
		model				= "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m84\m84_flash";
		hit					= 0.1;
		indirectHit			= 0.1;
		indirectHitRange	= 8;
		ExplosionEffects	= "RHSUSF_flashbang_15";
		craterEffects		= "RHSUSF_flashbang_Crater";
		explosionTime		= 1.5;
		cost				= 10;
	};

	class rhs_ammo_an_m14_th3: SmokeShell
	{
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		cost = 150;
		timeToLive = 25;
		effectsSmoke = "RHS_Incendenary_Grenade";
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\an-m14_th3\an-m14_th3";
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1",0.12589253,1,16.5};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2",0.12589253,1,16.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1",0.5,"SmokeShellSoundLoop2",0.5};
		aiAmmoUsageFlags = "1 + 2 + 64";
	};
	class rhs_ammo_an_m14_th3_droplet : rhs_ammo_12gHEAP_penetrator
	{
		hit = 80;
		indirectHit = 20;
		indirectHitRange = 0.4;
		explosive = 0.5;
		deflecting = 0;
		RHA(12.7, 1000)

		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = { "", 1, 1 };
		hitArmorInt[] = {};
		hitMetalInt[] = {};
		hitGroundSoft[] = {};
		hitGroundHard[] = {};
		hitMan[] = {};
		hitArmor[] = {};
		hitBuilding[] = {};
		hitFoliage[] = {};
		hitWood[] = {};
		hitGlass[] = {};
		hitGlassArmored[] = {};
		hitConcrete[] = {};
		hitRubber[] = {};
		hitPlastic[] = {};
		hitDefault[] = {};
		hitMetal[] = {};
		hitMetalplate[] = {};
		hitWater[] = {};
		bulletFly[] = {};
		class HitEffects
		{
			hitMetal = "";
			hitMetalPlate = "";
			hitBuilding = "";
			hitConcrete = "";
			hitGroundSoft = "";
			hitGroundHard = "";
			Hit_Foliage_green = "";
			Hit_Foliage_Dead = "";
			Hit_Foliage_Green_big = "";
			Hit_Foliage_Palm = "";
			Hit_Foliage_Pine = "";
			hitFoliage = "";
			hitGlass = "";
			hitGlassArmored = "";
			hitWood = "";
			hitPlastic = "";
			hitRubber = "";
			hitMan = "";
			hitWater = "";
			default_mat = "";
		};
	};

	class rhs_ammo_m7a3_cs: GrenadeHand
	{
		hit					= 0.1;
		indirectHit			= 0.1;
		indirectHitRange	= 8;
		ExplosionEffects	= "RHSUSF_flashbang_15";
		explosionTime		= 1.5;
		cost				= 10;
		model				= "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m7a3_cs\m7a3_cs";
	};

	class rhs_ammo_mk3a2: GrenadeHand
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\mk3a2\mk3a2";
	};

	class rhs_ammo_an_m8hc: SmokeShell
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\an-m8hc\an-m8hc";
	};
	class rhs_ammo_m18_green: SmokeShell
	{
		smokeColor[] = {0.2125,0.6258,0.4891,1};
		model = "rhsusf\addons\rhsusf_weapons\grenades_thrown\m18\m18_smoke";
	};

	class rhs_ammo_m18_purple: rhs_ammo_m18_green
	{
		smokeColor[] = {0.4341,0.1388,0.4144,1};
		model = "rhsusf\addons\rhsusf_weapons\grenades_thrown\m18\m18_smoke_purple";
	};

	class rhs_ammo_m18_red: rhs_ammo_m18_green
	{
		smokeColor[] = {0.8438,0.1383,0.1353,1};
		model = "rhsusf\addons\rhsusf_weapons\grenades_thrown\m18\m18_smoke_red";
	};

	class rhs_ammo_m18_yellow: rhs_ammo_m18_green
	{
		smokeColor[] = {0.9883,0.8606,0.0719,1};
		model = "rhsusf\addons\rhsusf_weapons\grenades_thrown\m18\m18_smoke_yellow";
	};

};