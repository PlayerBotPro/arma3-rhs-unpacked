class CfgAmmo
{
	class BulletBase;
    ///PISTOL ammo
	class B_9x21_Ball;
    class rhs_ammo_9x17 : B_9x21_Ball
	{
		hit = 4.87;
		typicalSpeed = 272;
		airFriction = -0.0017671455;
		caliber = 0.338;
		deflecting = 37;
		visibleFire = 1.8;
		audibleFire = 3.65;
	};

	class rhs_ammo_762x25_Ball: BulletBase
	{
		hit = 4.945778;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.774;
		deflecting = 29;
		visibleFire = 1.5;
		audibleFire = 3;
		cost = 100;
		typicalSpeed = 390.1;
		airFriction = -0.0027667;
	};
	class rhs_ammo_8mm_mhp: BulletBase
 	{
 		scope = 2;
  		hit = 3.431326274;
  		indirectHit = 0;
  		indirectHitRange = 0;
  		suppressionRadiusBulletClose = 2;
  		cartridge = "FxCartridge_9mm";
  		//model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
  		caliber = 0.533333333;
  		deflecting = 30;
  		visibleFire = 5;
  		audibleFire = 9;
 		cost = 100;
  		typicalSpeed = 290;
  		airFriction = -0.0018;
 	};

	///! Rifle bullets

	class rhs_ammo_792x57_Ball: BulletBase
	{
		//Ball
		//9.5 g
		hit					= 11.55;
		indirectHit			= 0;
		indirectHitRange	= 0;
		cartridge			= "FxCartridge_762";
		visibleFire			= 22;
		audibleFire			= 18;
		visibleFireTime		= 3;
		cost				= 1.2;
		airLock				= 1;

		//4mm at 300m
		caliber = 0.45;

		model			= "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale		= 1.2;
		tracerStartTime	= 0.045; // seconds
		tracerEndTime	= 1.5; // seconds

		airFriction		= -0.0006814;
		typicalSpeed	= 838;
	};

	class rhs_ammo_75x55_Ball: BulletBase
	{
		//Ball
		//9.5 g
		hit              = 11.55;
		indirectHit      = 0;
		indirectHitRange = 0;
		cartridge        = "FxCartridge_762";
		visibleFire      = 22;
		audibleFire      = 18;
		visibleFireTime  = 3;
		cost             = 1.2;
		airLock          = 1;

		//4mm at 300m
		caliber          = 0.45;

		model            = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale      = 1.2;
		tracerStartTime  = 0.045; // seconds
		tracerEndTime    = 1.5; // seconds

		airFriction      = -0.0006814;
		typicalSpeed     = 838;
	};

	//Cal .30 Ball, M2
	class rhs_ammo_762x63_M2B_ball: BulletBase
	{
		hit              = 13.75;
		indirectHit      = 0;
		indirectHitRange = 0;
		cartridge        = "FxCartridge_762";
		visibleFire      = 22;
		audibleFire      = 18;
		visibleFireTime  = 3;
		cost             = 1.2;
		airLock          = 1;
		model            = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber          = 0.45;
		airFriction      = -0.0006814;
		typicalSpeed     = 838;
	};
	//Cal .30 Tracer, M1
	class rhs_ammo_762x63_M1T_tracer: BulletBase
	{
		hit              = 13.75;
		indirectHit      = 0;
		indirectHitRange = 0;
		cartridge        = "FxCartridge_762";
		visibleFire      = 22;
		audibleFire      = 18;
		visibleFireTime  = 3;
		cost             = 1.2;
		airLock          = 1;
		caliber          = 0.45;
		model            = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale      = 0.6;
		tracerStartTime  = 0.045;
		tracerEndTime    = 1.5;
		airFriction      = -0.0006814;
		typicalSpeed     = 838;
	};
	//7.92x33mm S.m.E -- Ball with iron core
	class rhs_ammo_792x33_SmE_ball : BulletBase
	{
		hit              = 7.5;
		indirectHit      = 0;
		indirectHitRange = 0;
		cartridge        = "FxCartridge_762";
		visibleFire      = 22;
		audibleFire      = 18;
		visibleFireTime  = 3;
		cost             = 1.2;
		airLock          = 1;
		model            = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		caliber          = 0.44;
		tracerScale      = 1.2;
		tracerStartTime  = 0.045;
		tracerEndTime    = 1.5;
		airFriction      = -0.00101;
		typicalSpeed     = 685;
	};


	///Grenades
	class GrenadeHand;
	class SmokeShell;
	class rhs_ammo_f1: GrenadeHand
	{
		model = "\rhsgref\addons\rhsgref_weapons\grenades\throw\frag_f1";
		explosionTime = 4;
	};

	// RKG-3EM Throw object
	class rhsgref_ammo_rkg3em : GrenadeHand
	{
		model					= "\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em.p3d";
		rhs_submunition			= "rhsgref_ammo_rkg3em_fly";
		rhs_submunition_uxo		= "rhsgref_ammo_rkg3em_uxo";
		rhs_fuseTime[]			= {0.3,0.35,0.4};
		simulationStep			= 0.001;
		explosionTime			= -1;
		timeToLive				= 5;
		explosionEffects		= "";
		CraterEffects			= "";
		SoundSetExplosion[]		= {};
		multiSoundHit[]			= {};
		hit						= 0.1;
		indirectHit				= 0;
	};
	class rhsgref_ammo_rkg3em_uxo : SmokeShell
	{
		model					= "\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em.p3d";
		smokeColor[]			= {0,0,0,0};
		explosionTime			= 0.001;
		grenadeFireSound[]		= {};
		grenadeBurningSound[]	= {};
	};
	class rhsgref_ammo_rkg3em_fly : GrenadeHand
	{
		rhs_submunition		= "rhsgref_ammo_rkg3em_explosion";
		hit					= 180;
		indirectHit			= 12;
		indirectHitRange	= 3;
		
		model				= "\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em_thrown.p3d";
		explosionTime		= -1;
		SoundSetExplosion[]	= {};
	};
	// RKG-3EM Explosion
	class rhsgref_ammo_rkg3em_explosion : BulletBase
	{
		hit						= 140;
		indirectHit				= 8;
		indirectHitRange		= 3;
		simulationStep			= 0.00001;
		simulation				= shotShell;
		deflecting				= 0;
		explosive				= 1;
		timeToLive				= 1;
		explosionTime			= 0;
		explosionSoundEffect	= "DefaultExplosion";
		CraterEffects			= "GrenadeCrater";
		explosionEffects		= "GrenadeExplosion";
		HEAT_MACRO(rhsgref_ammo_rkg3em_penetrator)
	};
	class rhs_ammo_3bk12_penetrator;
	class rhsgref_ammo_rkg3em_penetrator : rhs_ammo_3bk12_penetrator
	{
		// 220mm is under 30 degrees
		// under 0 deg it is effectively 440mm
		RHA(440, 1000)
	};

	// Model 1939 Egg Hand Grenades
	//Model 1939 Early (Concussive)
	class rhs_grenade_m1939e_ammo: GrenadeHand
	{
		model              = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39early_proj";
		defaultMagazine    = "rhs_grenade_m1939e_mag";
		explosionTime      = 4.5;
	};
	//Model 1939 Late (Concussive)
	class rhs_grenade_m1939l_ammo: rhs_grenade_m1939e_ammo
	{
		model           = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39late_proj";
		defaultMagazine = "rhs_grenade_m1939l_mag";
	};
	//Model 1939 Early (Fragmentation)
	class rhs_grenade_m1939e_f_ammo: rhs_grenade_m1939e_ammo
	{
		model           = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39early_f_proj";
		defaultMagazine = "rhs_grenade_m1939e_f_mag";
	};
	//Model 1939 Late (Fragmentation)
	class rhs_grenade_m1939l_f_ammo: rhs_grenade_m1939e_ammo
	{
		model           = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39late_f_proj";
		defaultMagazine = "rhs_grenade_m1939l_f_mag";
	};

	//Nb. Hgr. 39
	class rhs_grenade_nbhgr39_ammo: SmokeShell
	{
		model              = "\rhsgref\addons\rhsgref_weapons2\grenades\NM39\thrown\nm39_early_proj";
		explosionTime      = 7.0;
	};
	//Nb. Hgr. 39B
	class rhs_grenade_nbhgr39B_ammo: rhs_grenade_nbhgr39_ammo
	{
		model         = "\rhsgref\addons\rhsgref_weapons2\grenades\NM39\thrown\nm39_late_proj";
	};

	//St. Hgr. 24
	class rhs_grenade_sthgr24_ammo: GrenadeHand
	{
		model                  = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_proj";
		explosionTime          = 5.0;
	};
	//St. Hgr. 24 Frag Heer
	class rhs_grenade_sthgr24_heerfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model         = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_heer_proj";
	};
	//St. Hgr. 24 Frag SS
	class rhs_grenade_sthgr24_ssfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model         = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_ss_proj";
	};
	//St. Hgr. 24 x7 Bundle
	class rhs_grenade_sthgr24_x7bundle_ammo: GrenadeHand
	{
		model                  = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_bundle_proj";
		explosionTime          = 5.0;
		hit                    = 56;
		indirectHit            = 56;
		IndirecthitRange       = 7;
	};

	//St. Hgr. 43
	class rhs_grenade_sthgr43_ammo: rhs_grenade_sthgr24_ammo
	{
		model         = "\rhsgref\addons\rhsgref_weapons2\grenades\M43\thrown\m43_proj";
		explosionTime = 4.5;
	};
	//St. Hgr. 43 Frag Heer
	class rhs_grenade_sthgr43_heerfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model         = "\rhsgref\addons\rhsgref_weapons2\grenades\M43\thrown\m43_heer_proj";
		explosionTime = 4.5;
	};
	//St. Hgr. 43 Frag SS
	class rhs_grenade_sthgr43_ssfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model         = "\rhsgref\addons\rhsgref_weapons2\grenades\M43\thrown\m43_ss_proj";
		explosionTime = 4.5;
	};

	//Mk. II
	class rhs_grenade_mkii_ammo: GrenadeHand
	{
		model                = "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\mk_ii_proj";
		explosionTime        = 4.5;
	};
	//Mk. III A1
	class rhs_grenade_mkiiia1_ammo: GrenadeHand
	{
		model                = "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\mk_iii_proj";
		explosionTime        = 4.5;
	};
	//M8 Smoke Grenade
	class rhs_grenade_anm8_ammo: SmokeShell
	{
		smokeColor[] = {1, 1, 1, 1};
		model        = "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\M8_proj";
	};
	//M15 Bursting WP Smoke Grenade
	class rhs_grenade_m15_ammo: GrenadeHand
	{
		model 				= "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\M15_proj";
		explosionTime		= 4.5;
		hit 				= 2;
		indirectHit 		= 2;
		indirectHitRange 	= 2;
		explosionEffects	= "RHS_GDM40Effect";
	};
	//Mk. I Illumination
	class rhs_grenade_mki_ammo: SmokeShell
	{
		AIAmmoUsageFlags = "1+4";
		smokeColor[]     = {1, 1, 1, 0.5};
		lightColor[]     = {0.5, 0.5, 0.5, 0.5};
		effectsSmoke     = "EmptyEffect";
		effectFlare      = "CounterMeasureFlare";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\mk_i_proj";
		intensity        = 55000;
		brightness       = 12;
		size             = 1;
		useFlare         = 1;
		flareSize        = 2;
		timeToLive       = 30;
		triggerTime      = 5;
		triggerSpeedCoef = 1;
		deflecting       = 10;
		simulation       = "shotIlluminating";
	};

	class rhs_grenade_vog17_ammo: GrenadeHand
	{
		model			= "\rhsgref\addons\rhsgref_weapons3\grenades\khattabkas\throw\khattabka_vog17_proj.p3d";
		explosionTime		= 4;
		hit			= 8;
		indirectHit		= 4;
		indirectHitRange	= 3.328;
	};
	class rhs_grenade_vog25_ammo: GrenadeHand
	{
		model			= "\rhsgref\addons\rhsgref_weapons3\grenades\khattabkas\throw\khattabka_vog25_proj.p3d";
		explosionTime		= 4;
		hit			= 8;
		indirectHit		= 8;
		indirectHitRange	= 6;
	};

	///! RPG Rockets
	class RocketBase;
	class R_PG32V_F: RocketBase {};
	class rhs_ammo_rpg75_rocket : R_PG32V_F
	{
		AIAmmoUsageFlags = "128+256+512";
		model = "rhsgref\addons\rhsgref_weapons2\rpg75\rhs_rpg75_projectile";

		HEAT_MACRO(rhs_ammo_rpg75_penetrator)

		cost = 100;

		hit					= 200;
		indirectHit			= 10;
		indirectHitRange	= 1;
		explosive			= 0.35;
		caliber				= 0.1;

		airFriction		= 0.64;
		sideAirFriction	= 0.00001;
		simulationStep	= 0.01;
		maxSpeed		= 189;
		// no rocket motor
		initTime		= 0.0;
		thrustTime		= 0.0;
		thrust			= 0;

		fuseDistance = 5;

		visibleFire	= 28;
		audibleFire	= 16;
		whistleDist	= 4;
		timeToLive	= 6; // Time of flight to autodestruction: 3 - 6 second

		CraterEffects		= "ATRocketCrater";
		explosionEffects	= "ATRocketExplosion";
		effectsMissileInit	= "RocketBackEffectsNLAW";
		effectsMissile		= "missile3";

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
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
	};
	class rhs_ammo_rpg75_penetrator : rhs_ammo_3bk12_penetrator
	{
		RHA(330,1000)
	};
	class rhs_ammo_panzerfaust60_rocket : R_PG32V_F
	{
		AIAmmoUsageFlags = "128+256+512";
		model = "rhsgref\addons\rhsgref_weapons2\pzf\rhs_pzf60_projectile";

		HEAT_MACRO(rhs_ammo_panzerfaust60_penetrator)

		cost = 60;

		hit					= 200;
		indirectHit			= 10;
		indirectHitRange	= 1;
		explosive			= 0.35;
		caliber				= 0.1;

		airFriction		= 0.6;
		sideAirFriction	= 0.2;
		simulationStep	= 0.001;
		maxSpeed		= 189;
		// no rocket motor
		initTime		= 0.0;
		thrustTime		= 0.0;
		thrust			= 0;

		fuseDistance = 5;

		visibleFire	= 28;
		audibleFire	= 16;
		whistleDist	= 4;
		timeToLive	= 6; // Time of flight to autodestruction: 3 - 6 second

		CraterEffects		= "ATRocketCrater";
		explosionEffects	= "ATRocketExplosion";
		effectsMissileInit	= "RocketBackEffectsNLAW";
		effectsMissile		= "missile3";

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
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
	};
	class rhs_ammo_panzerfaust60_penetrator : rhs_ammo_3bk12_penetrator
	{
		RHA(200,1000)
		// Increased spall effect
		submunitionConeType[]	= {"randomcenter", 45};
	};

	//Mines
	//AP Bounding Mines
	class ShellBase;
	class APERSBoundingMine_Range_Ammo;
	class APERSMine_Range_Ammo;
	class rhs_mine_bounding_trigger_base: APERSMine_Range_Ammo
	{
		soundHit1[] 		= {};
		soundHit2[] 		= {};
		multiSoundHit[] 	= {};
		soundTrigger[] 		= {};
		SoundSetExplosion[] = {};
		soundActivation[] 	= {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Placement_01",0.398107,1,20};
		soundDeactivation[]	= {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_01",1.41254,1,20};
		explosionEffects 	= "";
		CraterEffects 		= "";

		deleteParentWhenTriggered 		= true;
		submunitionConeAngle[]      	= {0, 10};
		submunitionConeAngleHorizontal  = 720;
		submunitionAutoleveling      	= 1;
		submunitionConeType[]      		= {"randomupcone", 1};
		submunitionInitSpeed      		= 5;
		mineJumpEffects					= "MineJumpEffect";

		CfgAmmo_CamShakeBallistic(0);
		CfgAmmo_CamShakeHit(0);

		hit              	= 0;
		indirectHit       	= 0;
		indirectHitRange  	= 0;
	};

	//S-Mine 35 Bounding AP with S.Mi.Z.35 Pressure Fuze
	class rhs_mine_smine35_press_ammo: APERSBoundingMine_Range_Ammo
	{
		model             		= "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_PROJ_PRESS";
		mineModelDisabled 		= "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_PRESS";
		defaultMagazine   		= "rhs_mine_smine35_press_mag";
		cost              		= 200;
		/* hit               	= 95; // gram / 1.9 = hit
		indirectHit       		= 25;
		indirectHitRange  		= 6; */
		mineBoundingDist  		= 1.25;
		mineBoundingTime  		= 0.5;
		mineDiveSpeed     		= 1;
		minePlaceDist     		= 0.5;
		//mineTrigger       		= "rhsgref_pressure_trigger";
	};
	//S-Mine 35 Bounding AP with W Adapter (x1 S.Mi.Z.35 Pressure Fuze, x2 Z.Z.42 Trip Fuze)
	class rhs_mine_smine35_trip_ammo: rhs_mine_bounding_trigger_base
	{
		model                 	= "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_HELPER_TRIP";
		mineModelDisabled     	= "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_TRIP";
		defaultMagazine       	= "rhs_mine_smine35_trip_mag";
		cost              		= 200;
		mineTrigger           	= "rhsgref_sMine_tripwire_trigger";
		minePlaceDist     		= 0.5;

		submunitionAmmo[]       = {"rhs_mine_smine35_trip_explo_ammo", 1};
		submunitionInitSpeed    = 4;
	};
	class rhs_mine_smine35_trip_explo_ammo: ShellBase
	{
		SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet","M6slamMine_Tail_SoundSet","Explosion_Debris_SoundSet"};

		model             	= "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_SUBMUNITION_TRIP";

		explosionTime     	= 0.3125; //	4m/s * 0.3125s = ~1.25m
		hit          		= 20;
		indirectHit      	= 20;
		indirectHitRange  	= 20;
	};

	//S-Mine 44 Bounding AP with S.Mi.Z.44 Dual-Trip Wire Fuze
	class rhs_mine_smine44_trip_ammo: rhs_mine_smine35_trip_ammo
	{
		model                 	= "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_HELPER_TRIP";
		mineModelDisabled     	= "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_TRIP";
		defaultMagazine       	= "rhs_mine_smine44_trip_mag";

		submunitionAmmo[]       = {"rhs_mine_smine44_trip_explo_ammo", 1};
	};
	class rhs_mine_smine44_trip_explo_ammo: rhs_mine_smine35_trip_explo_ammo
	{
		model             	= "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_SUBMUNITION_TRIP";

		explosionTime     	= 0.25; //	4m/s * 0.25s = ~1m
		hit          		= 20;
		indirectHit      	= 20;
		indirectHitRange  	= 20;
	};
	//S-Mine 44 Bounding AP with S.Mi.Z.35 Pressure Fuze
	class rhs_mine_smine44_press_ammo: APERSBoundingMine_Range_Ammo
	{
		model                 	= "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_PROJ_PRESS";
		mineModelDisabled     	= "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_PRESS";
		defaultMagazine       	= "rhs_mine_smine44_press_mag";
		mineTrigger           	= "rhsgref_pressure_trigger";
		cost              		= 200;
		mineBoundingDist 		= 0.9144;
		mineBoundingTime 		= 0.5;
		mineDiveSpeed    		= 1;
		minePlaceDist    		= 0.5;
	};


	//M2A3B Bounding AP with M6 Combination Fuze -- Pressure
	class rhs_mine_m2a3b_press_ammo: rhs_mine_bounding_trigger_base
	{
		model             	= "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_PRESSURE";
		mineModelDisabled 	= "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_DISABLED";
		defaultMagazine   	= "rhs_mine_m2a3b_press_mag";
		cost              	= 200;
		/* hit              = 80; // gram / 1.9 = hit
		indirectHit       	= 25;
		indirectHitRange  	= 3; */
		minePlaceDist     	= 0.5;
		mineTrigger       	= "rhsgref_pressure_trigger";

		soundActivation[] 	= {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Placement_01",1,1,20};
		soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Deactivate_01",1.99526,1,20};
		soundTrigger[] 		= {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Trigger_01",3.98107,1,20};

		//Submunition implementation
		deleteParentWhenTriggered 		= true;
		submunitionAmmo[]        		= {"rhs_mine_m2a3b_explo_ammo", 1};
		submunitionConeAngle[]      	= {0, 10};
		submunitionConeAngleHorizontal  = 720;
		submunitionAutoleveling      	= 1;
		submunitionConeType[]      		= {"randomupcone", 1};
		submunitionInitSpeed      		= 5;
		explosionEffects 				= "BoundingMineExplosion";
	};
	//M2A3B Bounding AP with M6 Combination Fuze -- Tripwire
	class rhs_mine_m2a3b_trip_ammo: rhs_mine_m2a3b_press_ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_TRIPWIRE";
		defaultMagazine   = "rhs_mine_m2a3b_trip_mag";
		mineTrigger       = "rhsgref_M2A3_tripwire_trigger";
	};
	//Submunition
	class rhs_mine_m2a3b_explo_ammo: ShellBase
	{
		SoundSetExplosion[] = {"M6slamMine_Exp_SoundSet","M6slamMine_Tail_SoundSet","Explosion_Debris_SoundSet"};

		model             	= "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_SUBMUNITION";

		explosionTime     	= 0.4; //	5m/s * 0.4s = ~2m
		hit          		= 15;
		indirectHit      	= 15;
		indirectHitRange  	= 10;
	};

	///AP PRESSURE MINES
	//Glasmine 43
	class rhs_mine_glasmine43_hz_ammo: APERSMine_Range_Ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_DISABLED";
		defaultMagazine   = "rhs_mine_glasmine43_hz_mag";
		cost              = 200;
		/* hit               = 105; // gram / 1.9 = hit
		indirectHit       = 25;
		IndirecthitRange  = 2; */
		mineTrigger       = "rhsgref_pressure_trigger";
	};

	class rhs_mine_glasmine43_bz_ammo: rhs_mine_glasmine43_hz_ammo
	{
		model               = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		mineModelDisabled   = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_DISABLED";
		defaultMagazine     = "rhs_mine_glasmine43_bz_mag";
	};

	//A200
	class rhs_mine_a200_bz_ammo: APERSMine_Range_Ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_BZ_HELPER";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DISABLED";
		defaultMagazine   = "rhs_mine_a200_bz_mag";
		cost              = 200;
		/* hit               = 105; // gram / 1.9 = hit
		indirectHit       = 25;
		IndirecthitRange  = 2; */
		mineTrigger       = "rhsgref_pressure_trigger";
	};
	class rhs_mine_a200_dz35_ammo: rhs_mine_a200_bz_ammo
	{
		model               = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DZ35_HELPER";
		mineModelDisabled   = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DISABLED";
		defaultMagazine     = "rhs_mine_a200_dz35_mag";
	};

	//M3 AP with M7 Combination Fuze -- Pressure
	class rhs_mine_M3_pressure_ammo: APERSMine_Range_Ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_DISABLED";
		defaultMagazine   = "rhs_mine_m3_pressure_mag";
		cost              = 200;
		/* hit               = 215; // gram / 1.9 = hit
		indirectHit       = 25;
		indirectHitRange  = 4; */
		hit               = 20;
		indirectHit       = 20;
		IndirecthitRange  = 10;
		mineTrigger       = "rhsgref_pressure_trigger";
	};

	//Mk II AP with M6 Combination Fuze -- Pressure
	class rhs_mine_Mk2_pressure_ammo: APERSMine_Range_Ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_DISABLED";
		defaultMagazine   = "rhs_mine_mk2_pressure_mag";
		cost              = 200;
		/* hit               = 30; // gram / 1.9 = hit
		indirectHit       = 25;
		IndirecthitRange  = 2; */
		hit               = 8;
		indirectHit       = 8;
		IndirecthitRange  = 6;
		mineTrigger       = "rhsgref_pressure_trigger";
	};

	//M7A2 AP with M602 Combination Fuze -- Pressure
	class rhs_mine_M7A2_ammo: APERSMine_Range_Ammo
	{
		model			  = "\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_HELPER_SURFACE";
		//model			    = "\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_HELPER_BELOW"; //Alt underground version, used with scripted WW mine system
		//model             = "\westwall\addons\ww_main\common\mine_defuse_helper";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_DISABLED";
		defaultMagazine   = "rhs_mine_M7A2_mag";
		cost              = 200;
		hit               = 852; // gram / 1.9 = hit
		indirectHit       = 852;
		indirectHitRange  = 3;
		mineTrigger       = "rhsgref_pressure_trigger";
	};


	/// AP TRIP MINES
	//Stockmine 43 with Z.Z.42 Fuze
	class APERSTripMine_Wire_Ammo;
	class rhs_mine_stockmine43_2m_ammo: APERSTripMine_Wire_Ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_2M";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_DISABLED_2M";
		defaultMagazine   = "rhs_mine_stockmine43_2m_mag";
		cost              = 200;
		/* hit               = 52; // gram / 1.9 = hit
		indirectHit       = 25;
		IndirecthitRange  = 2; */
		hit               = 8;
		indirectHit       = 8;
		indirectHitRange  = 4;
		mineTrigger       = "rhsgref_StMi43_2m_tripwire_trigger";
	};
	class rhs_mine_stockmine43_4m_ammo: rhs_mine_stockmine43_2m_ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_4M";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_DISABLED_4M";
		defaultMagazine   = "rhs_mine_stockmine43_4m_mag";
		mineTrigger       = "rhsgref_StMi43_4m_tripwire_trigger";
	};

	//M3 AP with M7 Combination Fuze -- Tripwire
	class rhs_mine_M3_tripwire_ammo: rhs_mine_M3_pressure_ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_DISABLED";
		defaultMagazine   = "rhs_mine_M3_tripwire_mag";
		mineTrigger       = "rhsgref_Mk2_tripwire_trigger";
	};

	//Mk II AP with M6 Combination Fuze -- Tripwire
	class rhs_mine_Mk2_tripwire_ammo: rhs_mine_Mk2_pressure_ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_DISABLED";
		defaultMagazine   = "rhs_mine_Mk2_tripwire_mag";
		mineTrigger       = "rhsgref_Mk2_tripwire_trigger";
	};


	//! AT Mines
	//Tellermine 43
	class ATMine_Range_Ammo;
	class rhs_mine_TM43_ammo: ATMine_Range_Ammo
	{
		model             = "\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43_proj";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43";
		defaultMagazine   = "rhs_mine_TM43_mag";
	};


	//! EXPLOSIVE CHARGES
	class DemoCharge_Remote_Ammo;
	class rhs_charge_tnt_x2_ammo: GrenadeHand
	{
		model				= "\rhsgref\addons\rhsgref_weapons2\mines\TNT_BLOCK_x2\TNT_BLOCK_x2_HELPER";
		explosionTime		= 4.5;
		hit					= 210;
		indirectHit			= 170;
		IndirecthitRange	= 3;
		defaultMagazine		= "rhs_charge_tnt_x2_mag";
	};
	class rhs_charge_sb3kg_ammo: GrenadeHand
	{
		model				= "\rhsgref\addons\rhsgref_weapons2\grenades\Sprengbuechse3kg\SB3kg_proj";
		explosionTime		= 5;
		hit					= 210;
		indirectHit			= 300;
		IndirecthitRange	= 10;
		defaultMagazine		= "rhs_charge_sb3kg_mag";
	};
	class rhs_charge_M2tet_x2_ammo: DemoCharge_Remote_Ammo
	{
		model				= "\rhsgref\addons\rhsgref_weapons2\mines\M2_TETRYTOL_x2\M2TET_x2_HELPER";
		mineModelDisabled	= "\rhsgref\addons\rhsgref_weapons2\mines\M2_TETRYTOL_x2\M2TET_x2_ITEM";
		//mineTrigger		= "TimeTrigger"; //Not working
		defaultMagazine		= "rhs_charge_M2tet_x2_mag";
	};
	/* class rhs_charge_sb3kg_ammo: DemoCharge_Remote_Ammo
	{
		model = "\rhsgref\addons\rhsgref_weapons2\grenades\Sprengbuechse3kg\SB3kg_proj";
		mineModelDisabled = "\rhsgref\addons\rhsgref_weapons2\grenades\Sprengbuechse3kg\SB3kg";
		//mineTrigger = "TimeTrigger";
	}; */
};