class CfgAmmo
{
	class ShellBase;
	class BulletBase;
	class F_40mm_White;
	class F_40mm_Green;
	class F_40mm_Red;
	class MissileBase;
	class rhs_ammo_base_penetrator;

	/*
	st.3 hardness - 120HB
	RHA hardness - 300HB
	ratio: 2.5
	*/

	///! Rifle bullets
	class B_556x45_Ball;
	//7N6 - standard round
	/*
	7N6 round
	6mm st.3 steel at 200m = 2.4mm RHA
	speed at 200m - 740m/s
	*/
	class rhs_B_545x39_Ball: B_556x45_Ball
	{
		cartridge = "RHS_Cartridge_545x39";
		hit = 9;
		typicalSpeed = 915;
		airFriction = -0.0016564;
		RHA(2.4,740)
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 7;
		nvgOnly = 0;
	};
	/*
	7n6 round
	6mm st.3 steel at 300m = 2.4mm RHA
	speed at 300m - 690m/s
	The 7N10 and 7N6(M) cartridges have practically identical external ballistic characteristics, meaning they can share identical sighting lines and optics on firearms
	*/
	class rhs_B_545x39_7N6_Ball: rhs_B_545x39_Ball
	{
		hit = 9.3;
		typicalSpeed = 880;
		airFriction = -0.001139;
		RHA(2.4,690)
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
	};
	/*
	7n10 round
	16mm st.3 steel at 300m = 6.4mm RHA
	speed at 300m - 690m/s
	*/
	class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball
	{
		hit = 9.5;
		typicalSpeed = 880;
		airFriction = -0.001139;
		RHA(6.4,690)
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
		warheadName = AP_Level_1;
	};
	/*
	7n22 round
	24mm st.3 steel at 250m = 9.6mm RHA
	speed at 250m - 681m/s
	*/
	class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball
	{
		hit = 10.1;
		typicalSpeed = 890;
		airFriction = -0.00085;
		RHA(9.6,681)
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
		warheadName = AP_Level_2;
	};
	/*
	7n24 round
	16mm st.3 steel at 300m = 6.4mm RHA
	speed at 300m - 700m/s
	*/
	class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball
	{
		hit = 11.8;
		typicalSpeed = 890;
		airFriction = -0.00085;
		caliber = 1.49;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
		warheadName = AP_Level_3;
	};
	/*
	7U1 subsonic
	Heavier bullet, effective up to 400m
	5.2g @ 303m/s
	*/
	class rhs_B_545x39_7U1_Ball : rhs_B_545x39_Ball
	{
		hit = 3.86;
		airFriction = -0.0006754;
		typicalSpeed = 303;
		visibleFire = 1.5;
		audibleFire = 3;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};

	//7T3 tracer mag
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime			= 0.07;
		tracerEndTime			= 1;
	};

	class B_762x51_Ball;
	// 57-N-323S
	/*
		21.8g @ 828m/s
		6mm ST3 @ 520m = 2.4mm RHAe @ 469.02m/s
	*/
	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		cartridge		= "RHS_Cartridge_762x54r";
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_green";
		hit				= 11.47;
		typicalSpeed	= 828;
		airFriction		= -0.0010922;
		RHA(2.4, 469)
		deflecting		= 15;
		visibleFire		= 4;
		audibleFire		= 7;
		tracerStartTime	= 0.07;
		tracerEndTime	= 3;
	};
	// T-46 / 7T2
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime			= 0.07;
		tracerEndTime			= 3;
	};
	class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball
	{
		hit = 11.59;
		typicalSpeed = 823;
		airFriction = -0.000756;
		caliber = 0.9;
	};
	/*
		7N13 (AP sub)
		Blue band
		9.4g @ 828m/s
		10mm @ 200m (tested on 2P armor plate?)
	*/
	class rhs_B_762x54_7N13_Ball : rhs_B_762x54_Ball
	{
		hit				= 12.95;
		RHA(10, 665)
	};
	/*
		7N14 (AP SVD)
		9.4g @ 823m/s
		9mm @ 300m (tested on 2P armor plate?)
	*/
	class rhs_B_762x54_7N14_Ball: rhs_B_762x54_Ball
	{
		hit = 13.61;
		typicalSpeed = 823;
		airFriction = -0.000756;
		RHA(9, 656)
	};
	/*
		7BZ-3 (API)
		Black tip
		10.39g @ 808m/s
		10mm @ 200m (tested on 2P armor plate?)
	*/
	class rhs_B_762x54_7BZ3_Ball : rhs_B_762x54_Ball
	{
		hit				= 15.47;
		typicalSpeed	= 808;
		RHA(10, 649)
		warheadName = API_Level_2;
	};
	/*
	7N26 (AP)
	9.9g @ 835
	10mm @ 300m (tested on 2P armor plate?)
	*/
	class rhs_B_762x54_7N26_Ball : rhs_B_762x54_Ball
	{
		hit				= 14.47;
		typicalSpeed	= 835;
		RHA(10, 601)
		warheadName = AP_Level_3;
	};

	//AK47 series
	//57-N-231
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		cartridge 		= "FxCartridge_762x39";
		hit				= 8.5;
		typicalSpeed	= 718;
		airFriction		= -0.0016519;
		caliber			= 0.55;
		deflecting		= 15;
		visibleFire		= 3;
		audibleFire		= 6;
	};
	/*After 1989, the regular (PS) Russian bullets started to be manufactured with a steel core with a higher carbon concentration and subjected to heat treatment. This change improved their penetration by 1.5-2 times. It is not possible to externally distinguish these bullets from the earlier, softer PS ones except by year of fabrication.*/
	class rhs_B_762x39_Ball_89 : rhs_B_762x39_Ball
	{
		hit				= 9.8;
		RHA(10,718)
	};

	class rhs_B_762x39_Tracer : rhs_B_762x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime			= 0.05;
		tracerEndTime			= 3;
	};

	/*
	57-N-231U
	Heavier bullet, effective up to 400m
	12.5g @ 293 m/s
	*/
	class rhs_B_762x39_U_Ball : rhs_B_762x39_Ball
	{
		hit = 5.79;
		RHA(2, 293)
		typicalSpeed = 293;
		airFriction = -0.001152804;
		visibleFire = 1.5;
		audibleFire = 3;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};

	/*
	9x39mm SP-5 7N8
	FMJ
	16.8g @ 295 m/s
	+SSh-1 Level 1 @ 400m / 240.02m/s
	Forms airpocket in the tip, increases tumble & soft damage
	*/
	class rhs_B_9x39_SP5 : rhs_B_762x39_Ball
	{
		cartridge = "FxCartridge_9mm";
		hit = 9.5;
		typicalSpeed = 295;
		airFriction = -0.00052;
		visibleFire = 1.25;
		audibleFire = 2.5;
		suppressionRadiusBulletClose = 3;
		suppressionRadiusHit = 5;
		deflecting = 21;
		RHA(0.8, 240)
	};

	/*
	9x39mm SP-6 7N9
	AP with subcaliber core
	15,6g @ 280 m/s
	+4mm st3 / 1.6mm RHA @ 400m / 240m/s
	+8mm st3 / 3.2mm RHA with kill @ 100m / 280m/s
	10mm st3 / 4mm RHA @ 100m / 280m/s
	*/
	class rhs_B_9x39_SP6 : rhs_B_9x39_SP5
	{
		hit = 11.3;
		indirectHit = 0;
		indirectHitRange = 0;
		deflecting = 5;
		RHA(4, 280)
	};


	// GP-25
	class G_40mm_HE;
	class rhs_g_vog25: G_40mm_HE
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25";
		airfriction = -0.0012;
		typicalspeed = 76.5;
		warheadName = HEAT;
	};
	class rhs_g_vog25p: rhs_g_vog25
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25p";
		// angle - sin(90) == 1
		deflecting = 90;
		//simulation = "shotGrenade";
		//explosionTime = 5;
		class HitEffects {
			hitMetal		= "RHS_vog25p_hit";
			hitMetalPlate	= "RHS_vog25p_hit";
			hitBuilding		= "RHS_vog25p_hit";
			hitConcrete		= "RHS_vog25p_hit";
			hitGroundSoft	= "RHS_vog25p_hit";
			hitGroundHard	= "RHS_vog25p_hit";
			default_mat		= "RHS_vog25p_hit";
			hitFoliage		= "RHS_vog25p_hit";
			hitGlass		= "RHS_vog25p_hit";
			hitGlassArmored	= "RHS_vog25p_hit";
			hitWood			= "RHS_vog25p_hit";
			hitPlastic		= "RHS_vog25p_hit";
			hitRubber		= "RHS_vog25p_hit";
			hitMan			= "RHS_vog25p_hit";
			hitWater		= "RHS_vog25p_hit";
			hitVirtual		= "RHS_vog25p_hit";
		};
		typicalspeed = 75;
		deleteParentWhenTriggered		= true;
		submunitionAmmo					= rhs_g_vog25p_explosion;
		submunitionDirectionType		= SubmunitionModelDirection;
		submunitionParentSpeedCoef		= 0.001;
		//triggerTime = 3;
		//triggerSpeedCoef = 1;
	};
	class rhs_g_vog25p_explosion: rhs_g_vog25
	{
		explosionTime = 0.0001;
		fuseDistance = 0;
	};
	class rhs_g_vg40tb: rhs_g_vog25
	{
		hit = 40;
		indirectHit = 25;
		indirectHitRange = 4;
		typicalspeed = 70;
		ExplosionEffects = "RHS_Thermobaric_Explosion";
		CraterEffects = "RHS_Thermobaric_Crater_Small";
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";

		// Spall handling
		submunitionConeAngle[]			= {120, 220};
		submunitionConeAngleHorizontal	= 720;
		submunitionAutoleveling			= 1;
		submunitionConeType[]			= {"randomupcone", 10};
		submunitionAmmo					= rhs_ammo_thermobaric_wave;
		submunitionDirectionType		= SubmunitionModelDirection;
		submunitionInitialOffset[]		= {0,0.2,-0.4};
		submunitionParentSpeedCoef		= 0;
		submunitionInitSpeed			= 200;
		deleteParentWhenTriggered		= false;
		triggerTime						= -1;
		triggerOnImpact					= 1;
	};
	class rhs_g_vg40sz: rhs_g_vog25
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;
		fuseDistance=2;
		explosionTime = 3;
		ExplosionEffects = "RHS_flashbang_10";
	};
	class rhs_g_gdm40 : rhs_g_vog25
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		hit = 2;
		indirectHit = 12;
		indirectHitRange = 2;
		typicalspeed = 55;

		explosionEffects = "RHS_GDM40Effect";
		CraterEffects = "";

		soundHit1[] = { "rhsafrf\addons\rhs_sounds\smoke\GDM40_1.wss", 5, 1, 1500 };
		soundHit2[] = { "rhsafrf\addons\rhs_sounds\smoke\GDM40_2.wss", 5, 1, 1500 };
		multiSoundHit[] = { "soundHit1", 0.5, "soundHit2", 0.5 };

		aiAmmoUsageFlags = 4;
		coefGravity = 1.6;

		fuseDistance = 0;

		explosionTime = 0.8;
		timeToLive = 1;
	};
	class rhs_g_vg40md : rhs_g_gdm40
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		explosionTime = -1;
		timeToLive = 25;
		coefGravity = 1;
	};
	class rhs_g_vg40md_white : rhs_g_vog25
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 70;
		cost = 100;
		simulation = "shotSmokeX";
		explosive = 0;
		deflecting = 8;
		explosionTime = 2;
		timeToLive = 30;
		fuseDistance = 0;
		soundHit[] = { "", 0, 1 };
		SmokeShellSoundHit1[] = { "A3\Sounds_F\weapons\smokeshell\smoke_1", 1.2589254, 1, 100 };
		SmokeShellSoundHit2[] = { "A3\Sounds_F\weapons\smokeshell\smoke_2", 1.2589254, 1, 100 };
		SmokeShellSoundHit3[] = { "A3\Sounds_F\weapons\smokeshell\smoke_3", 1.2589254, 1, 100 };
		SmokeShellSoundLoop1[] = { "A3\Sounds_F\weapons\smokeshell\smoke_loop1", 0.12589253, 1, 70 };
		SmokeShellSoundLoop2[] = { "A3\Sounds_F\weapons\smokeshell\smoke_loop2", 0.12589253, 1, 70 };
		grenadeFireSound[] = { "SmokeShellSoundHit1", 0.25, "SmokeShellSoundHit2", 0.25, "SmokeShellSoundHit3", 0.5 };
		grenadeBurningSound[] = { "SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5 };
		aiAmmoUsageFlags = "4 + 2";
		smokeColor[] = { 1, 1, 1, 1 };
		effectsSmoke = "SmokeShellWhiteEffect";
		whistleDist = 0;

		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
	};
	class rhs_g_vg40md_green : rhs_g_vg40md_white
	{
		smokeColor[] = { 0.2125, 0.6258, 0.48909998, 1 };
		effectsSmoke = "SmokeShellGreenEffect";
	};
	class rhs_g_vg40md_red : rhs_g_vg40md_white
	{
		smokeColor[] = { 0.8438, 0.1383, 0.1353, 1 };
		effectsSmoke = "SmokeShellRedEffect";
	};


	///! Mines
	class MineCore;
	class MineBase: MineCore
	{
		class EventHandlers;
	};
	class PipeBombBase;
	class DirectionalBombBase;
	class APERSMine_Range_Ammo: MineBase {};

	class rhs_mine_pmn2_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 20;
		indirectHit = 25;
		indirectHitRange = 4;
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_pmn2";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons\mines\rhs_pmn2";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhs_mine_pmn2_mag";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_1",3.1622777,1,1500};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1",0.56234133,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,50};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "RangeTriggerShort";
	};

	class rhs_mine_tm62m_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 2200;
		indirectHit = 1850;
		indirectHitRange = 2;
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_tm62m";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons\mines\rhs_tm62m";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhs_mine_tm62m_mag";
		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2",3.1622777,1,2000};
		SoundSetExplosion[] = {"ATmine_Exp_SoundSet","ATmine_Tail_SoundSet","Explosion_Debris_SoundSet"};
		explosionEffects = "ATMineExplosion";
		CraterEffects = "ATMineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "rhs_tm62Trigger";
		/*class Eventhandlers
		{
			fired = "systemChat format['fired %1',_this]";
			AmmoHit = "systemChat format['%1',_this]";
		};*/

		deleteParentWhenTriggered 		= false;
		submunitionAmmo[]				= {"rhs_mine_tm62m_penetrator", 1};
		submunitionConeAngle[]			= {0, 4};
		submunitionConeAngleHorizontal	= 720;
		submunitionAutoleveling			= 1;
		submunitionConeType[]			= {"randomupcone", 1};
		submunitionInitSpeed			= 100;
	};
	class rhs_mine_tm62m_penetrator: rhs_ammo_base_penetrator
	{
		hit = 240;
		typicalspeed = 100;
		RHA(200,100)
	};

	class rhs_mine_msk40p_white_ammo: APERSMine_Range_Ammo
	{
		hit						= 1;
		indirectHit				= 0;
		indirectHitRange		= 0;
		minimumSafeZone			= 0;
		minDamageForCamShakeHit	= 1.55;
		mineInconspicuousness	= 35;
		mineTrigger				= "rhs_msk40p_trigger";

		CraterEffects		= "IEDMineSmallLandCrater";
		explosionEffects	= "rhs_msk40p_effect";
		rhs_flare_type		= "rhs_mine_msk40p_white_flare";
		rhs_flare_used		= "rhs_mine_msk40p_white_used";
		rhs_flare_offset[]	= {0,0,0.35};

		CfgAmmo_CamShakeBallistic(0);
		CfgAmmo_CamShakeHit(0);

		model				= \rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_white_e;
		mineModelDisabled	= \rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_white_d;
		defaultMagazine		= rhs_mine_msk40p_white_mag;

		soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine",3.1622777,1,1500};

		SoundSetExplosion[] =
		{
			"TrainingMine_Exp_SoundSet",
			"TrainingMine_Report_SoundSet"
		};
		whistleDist = 8;
		cost = 200;
		class Eventhandlers: Eventhandlers
		{
			class RHS_FlareExplosion
			{
				AmmoHit = "_this remoteExec ['rhs_fnc_tripwireFlare_msk40p']";
			};
		};
	};

	class rhs_mine_msk40p_red_ammo: rhs_mine_msk40p_white_ammo
	{
		rhs_flare_type		= "rhs_mine_msk40p_red_flare";
		rhs_flare_used		= "rhs_mine_msk40p_red_used";

		model				= rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_red_e;
		mineModelDisabled	= rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_red_d;
		defaultMagazine		= rhs_mine_msk40p_red_mag;
	};
	class rhs_mine_msk40p_green_ammo: rhs_mine_msk40p_white_ammo
	{
		rhs_flare_type		= "rhs_mine_msk40p_green_flare";
		rhs_flare_used		= "rhs_mine_msk40p_green_used";

		model				= rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_green_e;
		mineModelDisabled	= rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_green_d;
		defaultMagazine		= rhs_mine_msk40p_green_mag;
	};
	class rhs_mine_msk40p_blue_ammo: rhs_mine_msk40p_white_ammo
	{
		rhs_flare_type		= "rhs_mine_msk40p_blue_flare";
		rhs_flare_used		= "rhs_mine_msk40p_blue_used";

		model				= rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_blue_e;
		mineModelDisabled	= rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_blue_d;
		defaultMagazine		= rhs_mine_msk40p_blue_mag;
	};
	class rhs_mine_sm320_white_ammo: rhs_mine_msk40p_white_ammo
	{
		mineInconspicuousness	= 45; // smaler and less visible
		mineTrigger				= "rhs_sm320_trigger";

		rhs_flare_type		= "rhs_mine_sm320_white_flare";
		rhs_flare_used		= "rhs_mine_sm320_white_used";
		rhs_flare_offset[]	= {0,0,0.22};

		model				= rhsafrf\addons\rhs_weapons\mines\rhs_sm320_e;
		mineModelDisabled	= rhsafrf\addons\rhs_weapons\mines\rhs_sm320_white_d;
		defaultMagazine		= rhs_mine_sm320_white_mag;
	};
	class rhs_mine_sm320_red_ammo: rhs_mine_sm320_white_ammo
	{
		rhs_flare_type		= "rhs_mine_sm320_red_flare";
		rhs_flare_used		= "rhs_mine_sm320_red_used";
		mineModelDisabled	= rhsafrf\addons\rhs_weapons\mines\rhs_sm320_red_d;
		defaultMagazine		= rhs_mine_sm320_red_mag;
	};
	class rhs_mine_sm320_green_ammo: rhs_mine_sm320_white_ammo
	{
		rhs_flare_type		= "rhs_mine_sm320_green_flare";
		rhs_flare_used		= "rhs_mine_sm320_green_used";
		mineModelDisabled	= rhsafrf\addons\rhs_weapons\mines\rhs_sm320_green_d;
		defaultMagazine		= rhs_mine_sm320_green_mag;
	};

	class rhs_mine_msk40p_white_flare : F_40mm_White
	{
		effectFlare = "rhs_msk40p_flare_effect";
		brightness = 25;
		timeToLive = 5;
		triggerTime = 0.0;
		airFriction = -0.00001;
		flareAirFriction = -0.05;
		intensity = 50000;
	};
	class rhs_mine_msk40p_red_flare : rhs_mine_msk40p_white_flare
	{
		lightColor[] = {0.5,0.25,0.25,0};
	};
	class rhs_mine_msk40p_green_flare : rhs_mine_msk40p_white_flare
	{
		lightColor[] = {0.25,0.5,0.25,0};
	};
	class rhs_mine_msk40p_blue_flare : rhs_mine_msk40p_white_flare
	{
		lightColor[] = {0.1183,0.1867,1,0};
	};
	class rhs_mine_sm320_white_flare : rhs_mine_msk40p_white_flare
	{
		timeToLive = 3;
		flareAirFriction = -0.25;
	};
	class rhs_mine_sm320_red_flare : rhs_mine_sm320_white_flare
	{
		lightColor[] = {0.5,0.25,0.25,0};
	};
	class rhs_mine_sm320_green_flare : rhs_mine_sm320_white_flare
	{
		lightColor[] = {0.25,0.5,0.25,0};
	};
	class rhs_mine_ozm72_a_ammo: APERSMine_Range_Ammo
	{
		AIAmmoUsageFlags	= "16";
		hit					= 15;
		indirectHit			= 15;
		indirectHitRange	= 10;

		model					= "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_a_e";
		mineModelDisabled		= "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_a_d";
		icon					= "iconExplosiveAP";
		defaultMagazine			= "rhs_mine_ozm72_a_mag";

		soundTrigger[]			= {"A3\Sounds_F\weapons\mines\mech_trigger_2",3.1622777,1,50};
		soundActivation[]		= {"A3\Sounds_F\weapons\mines\mech_activate_mine_1",0.56234133,1,30};
		soundDeactivation[]		= {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,30};
		soundHit[]				= {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine",3.1622777,1,1500};

		explosionEffects		= "";
		CraterEffects			= "";

		deleteParentWhenTriggered = true;
		submunitionAmmo[]				= {"rhs_mine_ozm72_explo_ammo", 1};
		submunitionConeAngle[]			= {0, 10};
		submunitionConeAngleHorizontal	= 720;
		submunitionAutoleveling			= 1;
		submunitionConeType[]			= {"randomupcone", 1};
		submunitionInitSpeed			= 60;

		whistleDist				= 8;
		cost					= 200;
		mineInconspicuousness	= 30;
		mineTrigger				= "rhs_ozm72_a_Trigger";
	};
	class rhs_mine_ozm72_b_ammo: rhs_mine_ozm72_a_ammo
	{
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_b_e";
		mineModelDisabled	= "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_b_d";
		defaultMagazine		= "rhs_mine_ozm72_b_mag";
		mineTrigger			= "rhs_ozm72_b_Trigger";
	};
	class rhs_mine_ozm72_c_ammo: rhs_mine_ozm72_a_ammo
	{
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_c_e";
		mineModelDisabled	= "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_c_d";
		icon				= "iconExplosiveAPDirectional";
		defaultMagazine		= "rhs_mine_ozm72_c_mag";
		cost				= 400;
		mineTrigger			= "RemoteTrigger";
	};
	class rhs_mine_ozm72_explo_ammo: ShellBase
	{
		explosionTime 		= 0.05;
		hit					= 15;
		indirectHit			= 15;
		indirectHitRange	= 10;
	};

	class rhs_ec75_ammo: PipeBombBase
	{
		hit = 200;
		indirectHit = 200;
		indirectHitRange = 1;
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_d";
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",3.1622777,1,1500};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",1.4125376,1,20};
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		defaultMagazine = "rhs_ec75_mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
	};
	class rhs_ec75_sand_ammo: rhs_ec75_ammo
	{
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_d";
		defaultMagazine = "rhs_ec75_sand_mag";
	};
	class rhs_ec200_ammo: rhs_ec75_ammo
	{
		hit = 400;
		indirectHit = 400;
		indirectHitRange = 3;
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_d";
		defaultMagazine = "rhs_ec200_mag";
	};
	class rhs_ec200_sand_ammo: rhs_ec200_ammo
	{
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_d";
		defaultMagazine = "rhs_ec200_sand_mag";
	};
	class rhs_ec400_ammo: rhs_ec75_ammo
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 5;
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_d";
		defaultMagazine = "rhs_ec400_mag";
	};
	class rhs_ec400_sand_ammo: rhs_ec400_ammo
	{
		model = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_e";
		mineModelDisabled = "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_d";
		defaultMagazine = "rhs_ec400_sand_mag";
	};

	///! RPG Rockets
	class RocketBase;


	class R_PG32V_F: RocketBase {};
	class rhs_rpg26_rocket : R_PG32V_F
	{
		AIAmmoUsageFlags = "128+256+512";
		model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26_projectile";

		warheadName = HEAT;
		HEAT_MACRO(rhs_rpg26_penetrator)

		hit					= 200;
		indirectHit			= 10;
		indirectHitRange	= 3.5;
		caliber				= 0.8;
		cost = 200;
		//airFriction = -0.00009;
		airFriction = 0.00000000000000000000000000000000000000000000000000000001;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 144;
		initTime = 0.15;
		thrustTime = 0.5;
		thrust = 10;
		fuseDistance = 5;
		explosive = 0.35;

		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 12;

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
	class rhs_rpg26_penetrator : rhs_ammo_base_penetrator
	{
		RHA(440,1000)
	};
	class rhs_rpg18_rocket : rhs_rpg26_rocket
	{
		HEAT_MACRO(rhs_rpg18_penetrator)
		airFriction = 0.7;
		hit = 180;
		maxSpeed = 115;
		timeToLive = 6;
	};
	class rhs_rpg18_penetrator : rhs_ammo_base_penetrator
	{
		//hit = 380;
		RHA(300,1000)
	};

	class rhs_rpg7v2_pg7vl : rhs_rpg26_rocket
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vl";

		HEAT_MACRO(rhs_rpg7v2_pg7vl_penetrator)

		hit = 220;
		indirectHit = 20;
		indirectHitRange = 4;
		cost = 200;
		airfriction = 0.6;
		sideAirFriction = 0.13;
		simulationStep = 0.01;
		maxSpeed = 295;
		initTime = 0.1;
		thrustTime = 0.5;
		thrust = 180;
		fuseDistance = 5;

		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 6;

		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		airLock = 1;

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
		class EventHandlers;
	};
	class rhs_rpg7v2_pg7vl_penetrator : rhs_ammo_base_penetrator
	{
		//hit = 480;
		RHA(540,1000)
	};

	// PG-7V, VM & VS share same reticle
	class rhs_rpg7v2_pg7v : rhs_rpg7v2_pg7vl
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7v";

		airfriction = 0.82;
		sideAirFriction = 0.2105;
		thrustTime = 0.69;
		thrust = 195;

		HEAT_MACRO(rhs_rpg7v2_pg7v_penetrator)
	};
	class rhs_rpg7v2_pg7v_penetrator : rhs_ammo_base_penetrator
	{
		RHA(260,1000)
	};
	// PG-7VM & VS share same ballistic
	class rhs_rpg7v2_pg7vm : rhs_rpg7v2_pg7v
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vm";

		airfriction = 0.87;
		sideAirFriction = 0.175; // higher drop due to higher mass
		//thrust = 165;

		HEAT_MACRO(rhs_rpg7v2_pg7vm_penetrator)
	};
	class rhs_rpg7v2_pg7vm_penetrator : rhs_ammo_base_penetrator
	{
		RHA(300,1000)
	};
	class rhs_rpg7v2_pg7vs : rhs_rpg7v2_pg7vm
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vs";
		HEAT_MACRO(rhs_rpg7v2_pg7vm_penetrator)
	};
	class rhs_rpg7v2_pg7vs_penetrator : rhs_ammo_base_penetrator
	{
		RHA(400,1000)
	};

	// PG-7VR (Tandem)
	class rhs_rpg7v2_pg7vr : rhs_rpg7v2_pg7vl
	{
		AIAmmoUsageFlags = "128+512"; //dont waste so precious ammo on helicopters
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vr";

		warheadName	= TandemHEAT;
		HEAT_MACRO(rhs_rpg7v2_pg7vr_penetrator)

		hit = 230;
		indirectHit = 20;
		indirectHitRange = 3.8;

		cost = 300;

		maxSpeed = 110;
		initTime = 0.15;
		airfriction = 0.9;
		sideAirFriction = 0.1;
		thrust = 120;
		fuseDistance = 5;

		timeToLive = 6;
		airLock = 1;
	};
	class rhs_rpg7v2_pg7vr_penetrator : rhs_ammo_base_penetrator
	{
		warheadName	= TandemHEAT;
		RHA(620,1000)
	};

	class rhs_rpg7v2_tbg7v : rhs_rpg7v2_pg7vl
	{
		warheadName = HE;
		AIAmmoUsageFlags = "64+128+256";

		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\tbg7v";

		hit = 120;
		indirectHit = 60;
		indirectHitRange = 12;
		cost = 100;
		maxSpeed = 110;
		initTime = 0.15;
		airfriction = 0.55;
		sideAirFriction = 0.055;
		thrust = 120;
		explosive = 1;
		allowAgainstInfantry = 1;

		timeToLive = 60;

		CraterEffects = "ArtyShellCrater";
		//ExplosionEffects = "MortarExplosion";
		explosionEffects = "RHS_FAE_Explosion";

		CfgAmmo_CamShakeExplode(110,18);
		CfgAmmo_CamShakeHit(110);
		CfgAmmo_CamShakeFire(110);
		CfgAmmo_CamShakePlayerFire(5);

		// Spall handling
		submunitionConeAngle[]			= {120, 220};
		submunitionConeAngleHorizontal	= 720;
		submunitionAutoleveling			= 1;
		submunitionConeType[]			= {"randomupcone", 15};
		submunitionAmmo					= rhs_ammo_thermobaric_wave;
		submunitionDirectionType		= SubmunitionModelDirection;
		submunitionInitialOffset[]		= {0,0,-0.4};
		submunitionParentSpeedCoef		= 0;
		submunitionInitSpeed			= 200;
		deleteParentWhenTriggered		= false;
		triggerTime						= -1;
		triggerOnImpact					= 1;
	};

	class rhs_rpg7v2_og7v : rhs_rpg7v2_pg7vl
	{
		warheadName = HE;
		AIAmmoUsageFlags = "64+128+256";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\og7v";

		submunitionAmmo	= "";

		hit = 75;
		indirectHit = 20;
		indirectHitRange = 15;
		cost = 100;

		initTime = 0.0;
		thrust = 0;
		thrustTime = 0;
		airfriction = 0.25;
		sideAirFriction = 0.009;
		fuseDistance = 5;
		explosive = 1;
		allowAgainstInfantry = 1;

		timeToLive = 60;

		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";

		CfgAmmo_CamShakeExplode(120,18);
		CfgAmmo_CamShakeHit(120);
		CfgAmmo_CamShakeFire(120);
		CfgAmmo_CamShakePlayerFire(3);
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.5,25};
	};

	class rhs_rpg7v2_type63_airburst : rhs_rpg7v2_og7v
	{
		warheadName = HE;
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\Type69";

		hit = 55;
		indirectHit = 16;
		indirectHitRange = 12;
		cost = 100;

		airfriction = 0.6;
		sideAirFriction = 0.1;
		maxSpeed = 295;
		initTime = 0.1;
		thrustTime = 0.5;
		thrust = 180;

		timeToLive = 8;

		deflecting=0.999999;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
		class EventHandlers: EventHandlers
		{
			class RHS_Airburst
			{
				fired = "_this call RHS_fnc_rpg_airburst";
			};
		};
	};
	class rhs_rshg2_rocket : rhs_rpg7v2_tbg7v
	{
		warheadName = HE;
		AIAmmoUsageFlags = "64+128";
		hit = 80;
		indirectHit = 50;
		indirectHitRange = 10;
		caliber = 1;

		airFriction = 0.75;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		timeToLive = 20;

		effectsMissileInit = "RocketBackEffectsNLAW";

		maxSpeed = 144;

		initTime = 0.01;
		thrustTime = 0.10;
		thrust = 50;

		model = "\rhsafrf\addons\rhs_weapons\rpg26\rshg2_projectile";

		// Spall handling
		submunitionConeAngle[]			= {120, 220};
		submunitionConeAngleHorizontal	= 720;
		submunitionAutoleveling			= 1;
		submunitionConeType[]			= {"randomupcone", 15};
		submunitionAmmo					= rhs_ammo_thermobaric_wave;
		submunitionDirectionType		= SubmunitionModelDirection;
		submunitionInitialOffset[]		= {0,0,-0.4};
		submunitionParentSpeedCoef		= 0;
		submunitionInitSpeed			= 200;
		deleteParentWhenTriggered		= false;
		triggerTime						= -1;
		triggerOnImpact					= 1;
	};
	class M_Titan_AA : MissileBase
	{
		class Components;
	};
	class rhs_ammo_9k32: M_Titan_AA
	{
		model				= "\rhsafrf\addons\rhs_heavyweapons\igla\igla_fly";
		proxyShape			= "\rhsafrf\addons\rhs_heavyweapons\igla\igla_missile";
		airlock				= 2;
		cmimmunity			= 0.8;
		cost				= 750;
		fusedistance		= 50;
		proximityExplosionDistance = 11;
		hit					= 40; //1,1 kg warhead
		indirecthit			= 31;
		indirecthitrange	= 5;
		inittime			= 0.25;
		irlock				= 1;
		maneuvrability		= 30;
		maxspeed			= 580;
		simulationstep		= 0.001;
		thrust				= 220;
		thrusttime			= 5.5;
		timetolive			= 15;
		tracklead			= 0.5;
		trackoversteer		= 0.93;
		whistledist			= 16;
		sideairfriction		= 0.08;
		effectsMissile		= "RHS_9k32_Fired";

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
		missileLockMaxDistance	= 4000;
		missileLockMinDistance	= 300;
		missileLockMaxSpeed		= 333;
		missileLockCone			= 15;
		missileKeepLockedCone	= 60; //Need to play with it for a while
		weaponLockSystem		= CM_Lock_IR + CM_Missile;

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						SENS_RANGES_WVR(4000,1000)
						typeRecognitionDistance = -1; // distance how far the target type gets recognized
						angleRangeHorizontal = 35;     // sensor azimuth coverage in degrees
						angleRangeVertical = 35;       // sensor elevation coverage in degrees
						groundNoiseDistanceCoef = 0.03;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = 50;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = -1;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 180;
						minTrackableATL = 25;
						maxTrackableATL = 4100;
						aimDown = 10;
					};
				};
			};
		};
	};
	class rhs_ammo_9k38: rhs_ammo_9k32
	{
		cmimmunity		= 0.9;
		maxspeed		= 800;
		maneuvrability	= 34;
		trackoversteer	= 0.95;
		sideairfriction	= 0.072;
		trackLead		= 0.56;

		//Missile sensors definition
		missileLockMaxDistance	= 4800;
		missileLockMinDistance	= 300;
		missileLockMaxSpeed		= 333;
		missileLockCone			= 12;
		missileKeepLockedCone	= 70; //Need to play with it for a while

		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						SENS_RANGES_WVR(4800,1000)
						typeRecognitionDistance = -1; // distance how far the target type gets recognized
						angleRangeHorizontal = 35;     // sensor azimuth coverage in degrees
						angleRangeVertical = 35;       // sensor elevation coverage in degrees
						groundNoiseDistanceCoef = 0.02;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = 40;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = -1;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 0.8;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 333;
						minTrackableATL = 20;
						maxTrackableATL = 3900;
					};
				};
			};
		};
	};

	//pistol
	class B_9x21_Ball;
	class rhs_B_9x19_7N21 : B_9x21_Ball
	{
		hit = 5.97;
		typicalSpeed = 393.192;
		airFriction = -0.0017671455;
		caliber = 0.838;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_B_9x19_7N31 : rhs_B_9x19_7N21
	{
		hit = 8.97;
		typicalSpeed = 460;
		airFriction = -0.0017671455;
		caliber = 0.952;
		deflecting = 17;
	};

	class rhs_B_9x18_57N181S : B_9x21_Ball
	{
		hit = 5.07;
		typicalSpeed = 272;
		airFriction = -0.0017671455;
		caliber = 0.838;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};

	class rhs_B_9x21_7N28 : B_9x21_Ball
	{
		hit = 7.07;
		typicalSpeed = 390;
		airFriction = -0.0017671455;
		deflecting = 17;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};

	class rhs_B_9x21_7N29 : B_9x21_Ball
	{
		hit = 9.47;
		typicalSpeed = 410;
		airFriction = -0.0017671455;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};

	class rhs_B_9x21_7BT3 : B_9x21_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		hit = 9.07;
		typicalSpeed = 400;
		airFriction = -0.0017671455;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
		nvgOnly = 0;
	};

	//barreled grenades

	class rhs_40mm_white : F_40mm_White
	{
		brightness = 25; // def 12
		timeToLive = 60; // def 25
		intensity = 1000000;
		affectedByWind = 1;
		flareSize = 20;
	};

	class rhs_40mm_red : F_40mm_Red
	{
		brightness = 25; // def 12
		timeToLive = 60; // def 25
		intensity = 1000000;
		affectedByWind = 1;
		flareSize = 20;
		effectFlare = "RHS_FlareShell_Red";
	};


	class rhs_40mm_green : F_40mm_Green
	{
		brightness = 25; // def 12
		timeToLive = 60; // def 25
		intensity = 1000000;
		affectedByWind = 1;
		flareSize = 20;
		effectFlare = "RHS_FlareShell_Green";
	};

	class GrenadeHand;
	class rhs_ammo_rgd5: GrenadeHand
	{
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\frag_rgd5";
		explosionTime = 4;
	};
	// RGN Impact Grenade
	class rhs_ammo_rgn : rhs_ammo_rgd5
	{
		model = "\rhsafrf\addons\rhs_weapons2\rgno\rgn_thrown";
		indirectHitRange		= 4;
		timeToLive				= 4;
		rhs_submunition			= "rhs_ammo_rgn_impact";
		rhs_fuseTime[]			= {1,1.3,1.8};
		rhs_selfDestructTime[]	= {3.2,3.6,4.2};
	};
	class rhs_ammo_rgn_impact : rhs_ammo_rgn
	{
		rhs_submunition = "rhs_ammo_rgn_exp";
		explosionTime = -1; // when -1 grenade explodes on impact
	};
	class rhs_ammo_rgn_exp : rhs_ammo_rgn
	{
		simulation = "shotShell";
		explosionTime = 0.001;
	};

	// RGO Impact Grenade
	class rhs_ammo_rgo : rhs_ammo_rgn
	{
		model			= "\rhsafrf\addons\rhs_weapons2\rgno\rgo_thrown";
		rhs_submunition = "rhs_ammo_rgo_impact";
		indirectHitRange = 8;
	};
	class rhs_ammo_rgo_impact : rhs_ammo_rgo
	{
		rhs_submunition = "rhs_ammo_rgo_exp";
		explosionTime = -1; // when -1 grenade explodes on impact
	};
	class rhs_ammo_rgo_exp : rhs_ammo_rgo
	{
		simulation = "shotShell";
		explosionTime = 0.001;
	};

	class SmokeShell;
	class rhs_ammo_rdg2_white: SmokeShell
	{
		model = "\rhsafrf\addons\rhs_weapons\grenades\rdg2_white";
		effectsSmoke = "RHS_SmokeShell";
	};
	class rhs_ammo_rdg2_black: rhs_ammo_rdg2_white
	{
		smokeColor[] = {0,0,0,1};
		model = "\rhsafrf\addons\rhs_weapons\grenades\rdg2_black";
		effectsSmoke = "RHS_SmokeShell";
	};

	class rhs_ammo_nspn_yellow: rhs_ammo_rdg2_white
	{
		AIAmmoUsageFlags = "1+4";
		smokeColor[] = {0.9883,0.8606,0.0719,1};
		lightColor[] = {0.5,0.5,0.25,0};
		//effectsSmoke = "RHS_SmokeShellLight_yellow";
		effectsSmoke = "EmptyEffect";
		effectFlare = "CounterMeasureFlare";
		model = "\rhsafrf\addons\rhs_weapons\grenades\smk_nsp_n";
		useFlare = 1;
		size=1;
		flareSize = 2;
		timeToLive = 35;
		intensity = 80000;
		brightness = 12;
		deflecting = 20;
		triggerTime = 3;
		triggerSpeedCoef = 1;
		simulation = "shotIlluminating";
	};
	class rhs_ammo_nspn_red: rhs_ammo_nspn_yellow
	{
		smokeColor[] = {0.8438,0.1383,0.1353,1};
		lightColor[] = {0.5,0.25,0.25,0};
		//effectsSmoke = "RHS_SmokeShellLight_red";
	};
	class rhs_ammo_nspn_green: rhs_ammo_nspn_yellow
	{
		smokeColor[] = {0.2125,0.6258,0.4891,1};
		lightColor[] = {0.25,0.5,0.25,0};
		//effectsSmoke = "RHS_SmokeShellLight_green";
	};

	class rhs_ammo_nspd: rhs_ammo_rdg2_white
	{
		smokeColor[] = {0.6697,0.2275,0.10053,1};
		timeToLive = 35;
		model = "\rhsafrf\addons\rhs_weapons\grenades\smk_nsp_d";
	};
	class rhs_ammo_fakel: GrenadeHand
	{
		hit					= 0.1;
		indirectHit			= 1;
		indirectHitRange	= 8;
		ExplosionEffects	= "RHS_flashbang_20";
		craterEffects		= "RHS_flashbang_Crater";
		explosionTime		= 2.5;
		cost				= 10;
		model				= "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_fakel_s";
	};
	class rhs_ammo_fakels: rhs_ammo_fakel
	{
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 10;
		ExplosionEffects = "RHS_flashbang_10";
		explosionTime = 3;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_fakel";
	};
	class rhs_ammo_zarya2: rhs_ammo_fakels
	{
		ExplosionEffects = "RHS_flashbang_15";
		explosionTime = 4;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_zarya";
	};
	class rhs_ammo_plamyam: rhs_ammo_fakels
	{
		ExplosionEffects = "RHS_flashbang_15";
		explosionTime = 1.5;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_plamyaM";
	};
};