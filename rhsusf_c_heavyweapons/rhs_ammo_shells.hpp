
	class Sh_120mm_APFSDS;
	class Sh_120mm_HE;
	class B_30mm_APFSDS_Tracer_Red;
	class B_30mm_HE;
	class F_40mm_White;
	class SubmunitionBase;
	class Laserbeam;
	class rhs_Laserbeam : Laserbeam
	{
		hit = 0;
		cost = 1000000;
	};
	class Sh_125mm_APFSDS;
	class rhsusf_ammo_basic_penetrator : Sh_125mm_APFSDS
	{
		RHA(100, 1000)
		warheadName					= HEAT;
		hit							= 290;
		indirectHit					= 0;
		indirectHitRange			= 0;
		explosive					= 0;
		typicalSpeed				= 1000;
		deflecting					= 0;
		deflectionDirDistribution	= 0;
		penetrationDirDistribution	= 0;

		//dah, key to fix destruction of few vehicles in row was combining short timeToLive with correct simulationStep - previously timeToLive was below simulationStep...
		//'jet stream' travels ~3m after hit. lower values caused problems on greater distances (?)
		timeToLive		= 0.010; // 10 meter max potential life, in practice this goes down to 5m
		simulationStep	= 0.0005;
		airFriction		= -0.5;
		whistleOnFire	= 0;
		whistleDist		= 0;

		// Spall handling
		submunitionConeType[]		= {"randomcenter", 30};
		submunitionAmmo				= rhs_ammo_spall;
		submunitionDirectionType	= SubmunitionModelDirection;
		submunitionInitialOffset[]	= {0,0,-0.4};
		submunitionParentSpeedCoef	= 0;
		submunitionInitSpeed		= 200;
		deleteParentWhenTriggered	= false;
		triggerTime					= 0.003;

		model			= "\A3\Weapons_f\empty";

		// Need dummy soundset - otherwise hitXXX sounds would be played
		SoundSetExplosion[] = {Silence_SoundSet};
	};
	class rhsusf_ammo_reduced_penetrator : rhsusf_ammo_basic_penetrator
	{
		submunitionConeType[]		= {"randomcenter", 10};
	};
	class rhs_ammo_cluster_penetrator : Sh_125mm_APFSDS
	{
		RHA(100, 1000)
		warheadName			= HEAT;
		hit					= 150;
		indirectHit			= 0;
		indirectHitRange	= 0;
		explosive			= 0;
		deflecting			= 0;
		typicalSpeed		= 1000;

		simulationStep	= 0.0005;
		airFriction		= -0.5;
		whistleOnFire	= 0;
		whistleDist		= 0;

		// Spall handling
		submunitionConeType[]		= {"randomcenter", 4};
		submunitionAmmo				= rhs_ammo_spall;
		submunitionDirectionType	= SubmunitionModelDirection;
		submunitionInitialOffset[]	= {0,0,-0.4};
		submunitionParentSpeedCoef	= 0;
		submunitionInitSpeed		= 200;
		deleteParentWhenTriggered	= false;
		triggerTime					= 0.003;

		model			= "\A3\Weapons_f\empty";
		
		// Need dummy soundset - otherwise hitXXX sounds would be played
		SoundSetExplosion[] = {Silence_SoundSet};
	};
	class rhs_ammo_ap_penetrator: Sh_125mm_APFSDS
	{
		warheadName			= AP;

		model			= "\A3\Weapons_f\empty";

		indirectHit			= 11;
		indirectHitRange	= 0.35;

		timetolive 		= 5;
		simulationStep	= 0.0005;
		airFriction		= -0.08;

		// Spall handling
		submunitionConeType[]		= {"randomcenter", 30};
		submunitionAmmo				= rhs_ammo_spall;
		submunitionDirectionType	= SubmunitionModelDirection;
		submunitionInitialOffset[]	= {0,0,-0.4};
		submunitionParentSpeedCoef	= 0;
		submunitionInitSpeed		= 200;
		deleteParentWhenTriggered	= false;
		triggerTime					= 0.002;
		soundVehiclePlateInt1[] 	= {"rhsusf\addons\rhsusf_c_heavyweapons\sounds\Inhit.wav", 4.23872, 1, 100};

		hitArmorInt[] =
		{
			soundVehiclePlateInt1, 1
		};
		hitDefaultInt[] =
		{
			soundVehiclePlateInt1, 1
		};
		hitMetalInt[] =
		{
			soundVehiclePlateInt1, 1
		};
		hitMetalPlateInt[] =
		{
			soundVehiclePlateInt1, 1
		};
		/*multiSoundHitInt[] =
		{
			soundVehiclePlateInt1, 1
		};*/
		SoundSetExplosion[] = {};
	};
	class rhs_laserbeam_fcs : BulletBase
	{
		simulation = "shotSubmunitions";
		hit = 145;
		indirectHit = 1;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.00000001;
		triggerTime = 0.001;
		triggerSpeedCoef = 0.001;
		submunitionConeAngle = 0;
		submunitionCount = 1;
		submunitionAmmo = "rhs_fakeAmmo";
		airLock = 1;
		aiAmmoUsageFlags = "64+32+128+256+512";
	};
	class rhs_laserbeam_ai: Laserbeam
	{
		simulationStep = 0.1;
		cost = 5000;
		airFriction = -0.00000001;
		timeToLive = 20;
		maxSpeed = 350;
		airLock = 1;
		irLock = 1;
		aiAmmoUsageFlags = "64+32+128+256+512";
	};
	class rhs_fakeAmmo : BulletBase
	{
		model			= "\A3\Weapons_f\empty";
		tracerScale		= 0;
		tracerStartTime	= 0;
		tracerEndTime	= 0;
		whistleOnFire	= 0;
		whistleDist		= 0;

		muzzleEffect		= "";

		explosive			= 0;
		caliber				= 0;

		hit					= 0;
		indirectHit			= 0;
		indirectHitRange	= 0;

		typicalspeed		= 1;
		timeToLive			= 0.002;
		simulationStep		= 0.001;
	};
	class rhs_ammo_spall: BulletBase
	{
		RHA(30,200)
		hit							= 20;
		indirectHit					= 0;
		indirectHitRange			= 0.15;
		typicalSpeed				= 50;
		airfriction					= -0.00001;
		deflecting					= 90;
		deflectionSlowDown			= 2;
		deflectionDirDistribution	= 1;
		penetrationDirDistribution	= 1;
		timeToLive					= 0.5;
	};
	class rhs_ammo_thermobaric_wave: rhs_ammo_spall
	{
		RHA(20,200)
		hit					= 5;
		indirectHit			= 20;
		indirectHitRange	= 2.15;
		typicalSpeed		= 200;
		explosive			= 0.8;
		timeToLive 			= 0.3;
		ExplosionEffects 	= "";
		CraterEffects 		= "";
		deflectionSlowDown	= 0.2;
	};
	class rhs_ammo_he_fragments: BulletBase
	{
		RHA(20,1500)
		hit					= 40;
		indirectHit			= 3;
		indirectHitRange	= 1.15;
		typicalSpeed		= 1500;
		deflecting 			= 9;
		timeToLive 			= 0.5;
		warheadName 		= "HE";
	};
	class rhs_ammo_flechettes: BulletBase
	{
		hit = 4;
		indirectHit = 0;
		indirectHitRange = 0.15;
		typicalSpeed = 200;

		deflecting = 50;
	};
	class rhs_ammo_flechettes_m1028: rhs_ammo_flechettes
	{
		hit = 7;
		indirectHit = 4.2;
		indirectHitRange = 1.75;
		typicalSpeed = 1000;
		airFriction = -0.00045;
	};

	//120mm Ammo
	class rhs_ammo_M1069: Sh_120mm_HE
	{
		hit = 350;
		indirectHit = 45;
		indirectHitRange = 7;
		typicalSpeed = 1000;
		explosive = 0.8;
		cost = 200;
		airFriction = -0.00045;
		caliber = 12;
		timeToLive = 15;
		whistleDist = 14;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.6;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class rhs_ammo_M1147: rhs_ammo_M1069{};	//XM1069 updated designation is M1147, but allowing for backward compatibility in missions
	class rhs_ammo_M416: rhs_ammo_M1069
	{
		RHA(220,900)
		airFriction = -0.00000000000045;
	};
	class rhs_ammo_M1028: rhs_ammo_M1069
	{
		simulation = "shotSubmunitions";
		submunitionAmmo="rhs_ammo_flechettes_m1028";
		//real life round has 1150 tungusten balls
		submunitionConeType[]=
		{
			"randomcenter",
			143
		};
		submunitionConeAngle="0.009 * 120";
		triggerTime=0.01;
	};
	class rhs_ammo_M829: Sh_120mm_APFSDS //1985
	{
		model 				= "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		cost 				= 500;

		deflecting			= 6; //15
		airFriction			= -4e-005;
		simulationStep 		= 0.01;
		timeToLive			= 15;

		whistleOnFire		= 1;
		whistleDist			= 14;
		tracerScale			= 2;
		tracerStartTime		= 0.1;
		tracerEndTime		= 2.6; //M13 tracer has a minimum 2.5 second burn time

		effectFly 			= "RHS_120mm_Sabot_Eject";

		AP_PENETRATION_MACRO(rhs_ammo_M829_penetrator)
	};
	class rhs_ammo_M829_penetrator: rhs_ammo_ap_penetrator
	{
		hit					= 250;
		typicalSpeed		= 1670;
		deflecting			= 6; //15
		RHA(611, 1670) //RHA(550,1418)
	};
	class rhs_ammo_M829A1: rhs_ammo_M829 //1988
	{
		AP_PENETRATION_MACRO(rhs_ammo_M829A1_penetrator)
	};
	class rhs_ammo_M829A1_penetrator: rhs_ammo_M829_penetrator
	{
		hit					= 240;
		typicalSpeed		= 1575;
		RHA(647, 1575) //RHA(650,1575)
	};
	class rhs_ammo_M829A2: rhs_ammo_M829 //1993
	{
		AP_PENETRATION_MACRO(rhs_ammo_M829A2_penetrator)
	};
	class rhs_ammo_M829A2_penetrator: rhs_ammo_M829_penetrator
	{
		hit					= 240;
		typicalSpeed		= 1680;
		RHA(769, 1680) //RHA(750,1680)
	};
	class rhs_ammo_M829A3: rhs_ammo_M829 //2003
	{
		AP_PENETRATION_MACRO(rhs_ammo_M829A3_penetrator)
		model 				= "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow"; //Uses TR998 gold tracer
		tracerEndTime		= 3.6; //TR998 tracer has a minimum 3.5 second burn time
	};
	class rhs_ammo_M829A3_penetrator: rhs_ammo_M829_penetrator
	{
		hit					= 250;
		typicalSpeed		= 1555;
		RHA(812, 1555) //RHA(850,1555)
	};
	class rhs_ammo_M829A4: rhs_ammo_M829A3 //2015
	{
		AP_PENETRATION_MACRO(rhs_ammo_M829A4_penetrator)
	};
	class rhs_ammo_M829A4_penetrator: rhs_ammo_M829_penetrator
	{
		hit					= 250;
		typicalSpeed		= 1650;
		RHA(895, 1650) //Based on speculated ~10% increase in penetration
	};
	class rhs_ammo_M830: Sh_120mm_APFSDS
	{
		warheadName			= HEAT;
		airLock				=1;
		explosive			= 0.5;
		caliber				= 0.5;
		cost				= 1;
		hit					= 250;
		indirectHit			= 11;
		indirectHitRange	= 4.15;
		typicalSpeed		= 1140;
		tracerStartTime		= 0.1;
		tracerEndTime		= 2.6;
		aiAmmoUsageFlags	= "32+64+128+256+512";

		deflecting = 0;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		HEAT_MACRO(rhs_ammo_M830_penetrator)
	};
	class rhs_ammo_M830_penetrator: rhsusf_ammo_basic_penetrator
	{
		RHA(600,1000)
	};
	class rhs_ammo_M830A1: rhs_ammo_M830
	{
		explosive = 0.8;
		indirectHit = 24;
		indirectHitRange = 3.15;
		HEAT_MACRO(rhs_ammo_M830A1_penetrator)
	};
	class rhs_ammo_M830A1_penetrator: rhsusf_ammo_basic_penetrator
	{
		RHA(450,1000)
	};
	//M908 HE-OR-T (M13 tracer, 1410 m/s, 2.3 lbs of comp A3 explosive)
	
	//105mm Ammo
	/*Sabot:
		M392 - 270mm, 1478 m/s (APDS-T) M13 red tracer (2.5-second burn time) (UK manufactured)
		M392A1 - Same??? (US manufactured) (Little info available. Not in US ordinace manuals, only test reports...)
		M392A2 - Same??? (US manufactured)
		M728 - 300mm, 1426.5 m/s (APDS-T) M13 red tracer (2.5-second burn time)
		M735 - 410mm, 1501 m/s (APFSDS-T) M13 red tracer (2.5-second burn time)
		M774 - 440mm, 1508 m/s (APFSDS-T) M13 red tracer (2.5-second burn time)
		M833 - 490mm, 1493 m/s (APFSDS-T) M13 red tracer (2.5-second burn time)
		M900 - 600mm, 1505 m/s (APFSDS-T) M13 red tracer (2.5-second burn time) (only used in M68A1 on Abrams, and M68A1E4 on Stryker MGS)
	*/
	class rhs_ammo_M392: rhs_ammo_M829 //1961
	{
		AP_PENETRATION_MACRO(rhs_ammo_M392_penetrator)
	};
	class rhs_ammo_M392_penetrator: rhs_ammo_M829_penetrator
	{
		hit					= 240;
		typicalSpeed		= 1478;
		RHA(270, 1478)
	};
	class rhs_ammo_M728: rhs_ammo_M392 //1974
	{
		AP_PENETRATION_MACRO(rhs_ammo_M728_penetrator)
	};
	class rhs_ammo_M728_penetrator: rhs_ammo_M392_penetrator
	{
		hit					= 240;
		typicalSpeed		= 1426.5;
		RHA(300, 1426.5)
	};
	class rhs_ammo_M735: rhs_ammo_M392 //1978
	{
		AP_PENETRATION_MACRO(rhs_ammo_M735_penetrator)
	};
	class rhs_ammo_M735_penetrator: rhs_ammo_M392_penetrator
	{
		hit					= 240;
		typicalSpeed		= 1501;
		RHA(410, 1501)
	};
	class rhs_ammo_M774: rhs_ammo_M392 //1980
	{
		AP_PENETRATION_MACRO(rhs_ammo_M774_penetrator)
	};
	class rhs_ammo_M774_penetrator: rhs_ammo_M392_penetrator
	{
		hit					= 240;
		typicalSpeed		= 1508;
		RHA(440, 1508)
	};
	class rhs_ammo_M833: rhs_ammo_M392 //1983
	{
		AP_PENETRATION_MACRO(rhs_ammo_M833_penetrator)
	};
	class rhs_ammo_M833_penetrator: rhs_ammo_M392_penetrator
	{
		hit					= 240;
		typicalSpeed		= 1493;
		RHA(490, 1493)
	};
	class rhs_ammo_M900: rhs_ammo_M392 //1989
	{
		AP_PENETRATION_MACRO(rhs_ammo_M900_penetrator)
	};
	class rhs_ammo_M900_penetrator: rhs_ammo_M392_penetrator
	{
		hit					= 240;
		typicalSpeed		= 1505;
		RHA(600, 1505) //600-650
	};	
	/*HEAT:
		M456 - 390mm, 1174 m/s (HEAT-T) M13 red tracer (2.5-second burn time)
		M456A1 - (Same stats as M456) (Different case liner)
		M456A2 - 430mm, 1174 m/s (HEAT-T) M13 red tracer (2.5-second burn time)
	*/
	class rhs_ammo_M456: rhs_ammo_M830 //1960? (1966 for M456A1)
	{
		explosive = 0.5;
		indirectHit = 11;
		indirectHitRange = 3.15;
		HEAT_MACRO(rhs_ammo_M456_penetrator)
	};
	class rhs_ammo_M456_penetrator: rhsusf_ammo_basic_penetrator
	{
		RHA(390,1000)
	};
	class rhs_ammo_M456A2: rhs_ammo_M456 //1980
	{
		HEAT_MACRO(rhs_ammo_M456A2_penetrator)
	};
	class rhs_ammo_M456A2_penetrator: rhsusf_ammo_basic_penetrator
	{
		RHA(430,1000)
	};
	/*APERS
		M494 - ?mm, 821 m/s (APERS-T (Flechette)) (APFSDS-T) M13 red tracer (2.5-second burn time)
	*/
	class rhs_ammo_M494: rhs_ammo_M1028 //1972
	{
		typicalSpeed = 821;
		simulation = "shotSubmunitions";
		submunitionAmmo="rhs_ammo_flechettes_m1028";
		//unknown number of flechettes...
		submunitionConeType[]=
		{
			"randomcenter",
			125
		};
		submunitionConeAngle="0.009 * 120";
		triggerTime=0.01;
	};	
	/*HEP/HESH
		M393 - 300mm, ??? m/s (HEP-T) M12 orange tracer (6-second burn time)
		M393A1 - 300mm, 731.5 m/s (HEP-T) M12 orange tracer (6-second burn time)
		M393A2 - Same as m393A1 with different fuze
		M393A3 - 300mm, 750 m/s (HEP-T) M12 orange tracer (6-second burn time)
	*/	
	class rhs_ammo_M393: rhs_ammo_M1069
	{
		hit = 350;
		indirectHit = 40;
		indirectHitRange = 8;
		typicalSpeed = 731;
		tracerStartTime = 0.1;
		tracerEndTime = 6.1;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
		
		HEAT_MACRO(rhs_ammo_M393_penetrator)
	};
	class rhs_ammo_M393_penetrator: rhsusf_ammo_basic_penetrator //Maybe create seperate HEP/HESH penetrator with more spall?
	{
		hit = 20;
		RHA(300,1000)
	};
	class rhs_ammo_M393A3: rhs_ammo_M393
	{
		typicalSpeed = 750;
	};
	/*Smoke
		M416 - 0mm, 730 m/s (WP-T) M12 orange tracer (6-second burn time)
	*/
	//M416 class already defined above, but it's high explosive ???
	
	//25mm Ammo
	class RHS_ammo_M791_APDS: B_30mm_APFSDS_Tracer_Red
	{
		hit = 90;
		RHA(65,1345)
		typicalspeed = 1345;
		maxSpeed = 1345;
		airfriction = -0.0002;
		tracerEndTime = 3.1;
	};
	class RHS_ammo_M919_APFSDS: B_30mm_APFSDS_Tracer_Red
	{
		hit = 90;
		RHA(95,1420) //95mm at 2km
		typicalspeed = 1385;
		maxSpeed = 1385;
		airfriction = -0.0002;
		tracerEndTime = 3.1;
	};
	class RHS_ammo_M792_HEI: B_30mm_HE
	{
		//self destruct after around 3km
		//http://www.inetres.com/gp/military/cv/weapon/M242.html
		//Time of Flight (seconds)
		//1,000 meters 1.2s
		//1,500 meters 2.2s
		//2,000 meters 3.6s
		//2,500 meters 5.3s

		timeToLive = 7.5;
		//explosionTime=7.4;
		airfriction = -0.00056;
		typicalspeed = 1100;
		maxSpeed = 1100;
		model="\rhsusf\addons\rhsusf_heavyweapons\data\tracer\rhs_tracer_25mm_red.p3d";
		tracerScale = 1.5;
	};
	
	//40mm High-velocity Ammo
	class G_40mm_HE;
	//HE
	class rhs_ammo_mk19m3_M384: G_40mm_HE
	{
		hit=40;
		airFriction = -0.0008;
		timetolive = 40;
	};
	//HEDP
	//can penetrate about 2.0 in (51 mm) of hardened steel at 0 degrees obliquity at any range.
	class rhs_ammo_mk19m3_M430I: rhs_ammo_mk19m3_M384
	{
		hit=35;
		HEAT_MACRO(rhs_ammo_mk19m3_M430I_penetrator)
	};
	class rhs_ammo_mk19m3_M430I_penetrator: rhsusf_ammo_reduced_penetrator
	{
		hit=90;
		RHA(50,1000)
	};
	class rhs_ammo_mk19m3_M430A1: rhs_ammo_mk19m3_M430I {
		hit=35;
		HEAT_MACRO(rhs_ammo_mk19m3_M430A1_penetrator)
	};
	class rhs_ammo_mk19m3_M430A1_penetrator: rhsusf_ammo_reduced_penetrator
	{
		hit=90;
		//76mm of armor penetration according to Mk.19 technical and HBCT gunnery manuals
		RHA(76,1000)
	};
	//canister
	class rhs_ammo_mk19m3_M1001: rhs_ammo_mk19m3_M384
	{
		simulation = "shotSubmunitions";
		submunitionAmmo="rhs_ammo_flechettes";
		//real life round has 113 flechettes
		submunitionConeType[]=
		{
			"randomcenter",
			56
		};
		submunitionConeAngle="0.009 * 160";
		triggerTime=0.01;
	};

////////////////////////
/// Artillery Shells ///
////////////////////////

	class Sh_82mm_AMOS;
	class Sh_155mm_AMOS;
	class Smoke_120mm_AMOS_White;
	class Flare_82mm_AMOS_White;
// 81mm Mortar
	class rhs_m821_he: Sh_82mm_AMOS
	{
		model = "\rhsusf\addons\rhsusf_m252\rhs_m821_he";
	};
// 105mm Arty
	class rhs_ammo_m1_he : Sh_155mm_AMOS
	{
		cost = 100;
		artilleryLock = 1;
		hit = 110;
		indirectHit = 75;
		indirectHitRange = 21;
		timetolive = 220;
		class CamShakeExplode
		{
			power = "(105*0.2)*10";
			duration = "((round (105^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30 + 105^0.5))";
		};
		class CamShakeHit
		{
			power = 105 * 10;
			duration = "((round (105^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(105^0.25)*10";
			duration = "((round (105^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((105^0.5))";
		};
	};

	class rhs_ammo_m314_ilum : SubmunitionBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = { "", 0, 1 };
		CraterEffects = "";
		whistleDist = 0;
		timeToLive = 90;
		aimAboveTarget[] = {300, 360, 400, 500, 640, 720, 800};
		aimAboveDefault = 3;

		submunitionAmmo[] = {"rhs_ammo_flare_m314",1};
	};
	class rhs_ammo_flare_M314: F_40mm_White
	{
		triggerTime					= 0;
		model						= "rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_r_m257_drogue";
		brightness					= 4000;
		lightColor[]				= {100, 100, 100, 100};
		timeToLive					= 60;
		intensity					= 40000;
		flareSize					= 60;
		flareMaxDistance			= 3000;
		affectedByWind				= 1;
	};

	class rhs_ammo_m60a2_smoke : Smoke_120mm_AMOS_White
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = { "", 0, 1 };
		CraterEffects = "";
		whistleDist = 0;
	};
// 155mm Arty
	class rhs_ammo_m485_ilum : SubmunitionBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = { "", 0, 1 };
		CraterEffects = "";
		whistleDist = 0;
		timeToLive = 180;
		aimAboveTarget[] = {360, 400, 500, 640, 720, 800, 850};
		aimAboveDefault = 3;

		submunitionAmmo[] = {"rhs_ammo_flare_m485",1};
	};
	class rhs_ammo_flare_m485: F_40mm_White
	{
		triggerTime					= 0;
		model						= "rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_r_m257_drogue";
		brightness					= 10000;
		lightColor[]				= {100, 100, 100, 100};
		timeToLive					= 120;
		intensity					= 100000;
		flareSize					= 90;
		flareMaxDistance			= 3000;
		affectedByWind				= 1;
	};

	class Gatling_30mm_HE_Plane_CAS_01_F;

	class rhs_ammo_30x173mm_GAU8_mixed: SubmunitionBase
	{
		// values for AI - they are not used since ammo is transformed to a mix later
		hit					= 180;
		indirectHit			= 4;
		indirectHitRange	= 8;
		caliber				= 5;
		explosive			= 0.4;

		airlock = 1;

		deflecting		= 5;
		airFriction		= -0.00036;
		typicalSpeed	= 960;

		visibleFire		= 32;
		audibleFire		= 250;
		visibleFireTime	= 3;

		fuseDistance = 10;

		dangerRadiusBulletClose			= 20;
		dangerRadiusHit					= 60;
		suppressionRadiusBulletClose	= 12;
		suppressionRadiusHit			= 24;

		cost					= 20;
		allowAgainstInfantry	= 1;
		aiAmmoUsageFlags		= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;

		weaponType = "cannon";
		simulation = "shotSubmunitions";
		triggerTime=0.01;
		submunitionAmmo[] = {"rhs_ammo_PGU14B_API",0.8,"rhs_ammo_PGU13B_HE",0.2};
		model = "\A3\Weapons_f\empty";

		CfgAmmo_CamShakeExplode(30,5);
		CfgAmmo_CamShakeHit(30);
		CfgAmmo_CamShakeFire(30);
		CfgAmmo_CamShakePlayerFire(30);
	};
	class rhs_ammo_PGU13B_HE: Gatling_30mm_HE_Plane_CAS_01_F
	{
		hit = 80;
		explosive = 0.9;
		timeToLive=10; //default 6
	};
	class rhs_ammo_PGU14B_API: B_30mm_APFSDS_Tracer_Red
	{
		hit = 120;
		explosive = 0;
		typicalSpeed = 860;
		airFriction = -0.00036;
		timeToLive=10; //default 6
		caliber=6; //default 5
		tracerEndTime = 10;
	};
	class B_20mm;
	class rhs_ammo_30x113mm_M789_HEDP: B_30mm_HE
	{
		allowagainstinfantry=1;
		hit=37;
		indirectHit=15;
		indirectHitRange=3;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=2;
		tracerStartTime=0.1;
		tracerEndTime=4;
		explosive=0.4;
		caliber=2.0;
		airFriction=-0.00078;
		timeToLive = 12;
		HEAT_MACRO(rhs_ammo_30x113mm_M789_HEDP_penetrator)
	};
	class rhs_ammo_30x113mm_M789_HEDP_laser: rhs_ammo_30x113mm_M789_HEDP
	{
		laserLock=1;
	};
	class rhs_ammo_30x113mm_M789_HEDP_penetrator: rhsusf_ammo_basic_penetrator
	{
		hit						= 90;
		submunitionConeType[]	= {"randomcenter", 4};
		RHA(25,1000)
	};
	class rhs_ammo_20mm_AP: B_20mm
	{
		hit=45;
		indirectHit=10;
		indirectHitRange=2;
		visibleFire=28;
		audibleFire=28;
		visibleFireTime=3;
		cost=25;
		airLock=1;
		explosive=0.30000001;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1.8;
		tracerStartTime=0.1;
		tracerEndTime=3.5;
		airFriction=-0.00076999998;
		caliber=2.3299999;
		timeToLive = 12;
	};
	class B_127x99_Ball;
	class rhs_ammo_127x99_Ball: B_127x99_Ball
	{
		RHA(31,880)
		//caliber = 1.43;
		CfgAmmo_CamShakeFire(1);
		CfgAmmo_CamShakePlayerFire(1);

	};
	class rhs_ammo_127x99_Ball_Tracer_Red: rhs_ammo_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerEndTime=3;
	};
	class rhs_ammo_127x99_Ball_Tracer_Green: rhs_ammo_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerEndTime=3;
	};
	class rhs_ammo_127x99_Ball_Tracer_Yellow: rhs_ammo_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerEndTime=3;
	};
	class B_127x99_SLAP;
	class rhs_ammo_127x99_SLAP: B_127x99_SLAP
	{
		RHA(51,1210)
		//caliber = 1.86;
		CfgAmmo_CamShakeFire(1);
		CfgAmmo_CamShakePlayerFire(1);
	};
	class rhs_ammo_127x99_SLAP_Tracer_Red: rhs_ammo_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerEndTime=3;
	};
	class rhs_ammo_127x99_SLAP_Tracer_Green: rhs_ammo_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerEndTime=3;
	};
	class rhs_ammo_127x99_SLAP_Tracer_Yellow: rhs_ammo_127x99_SLAP
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerEndTime=3;
	};

	// Variants with increased camShake
	class rhs_ammo_127x99_Ball_Plane: rhs_ammo_127x99_Ball
	{
		CfgAmmo_CamShakeFire(6);
		CfgAmmo_CamShakePlayerFire(6);

	};
	class rhs_ammo_127x99_Ball_Tracer_Red_Plane: rhs_ammo_127x99_Ball_Tracer_Red
	{
		CfgAmmo_CamShakeFire(6);
		CfgAmmo_CamShakePlayerFire(6);
	};
	class rhs_ammo_127x99_SLAP_Plane: rhs_ammo_127x99_SLAP
	{
		CfgAmmo_CamShakeFire(6);
		CfgAmmo_CamShakePlayerFire(6);

	};
	class rhs_ammo_127x99_SLAP_Tracer_Red_Plane: rhs_ammo_127x99_SLAP_Tracer_Red
	{
		CfgAmmo_CamShakeFire(6);
		CfgAmmo_CamShakePlayerFire(6);
	};

	// Variants with irLock & laser lock for AI
	class rhs_ammo_127x99_Ball_AI: rhs_ammo_127x99_Ball
	{
		irLock				= 1;
		laserLock			= 1;
		airLock				= 1;
		nvLock				= 1;
		aiAmmoUsageFlags	= __EVAL(64+128+256);

	};
	class rhs_ammo_127x99_Ball_Tracer_Red_AI: rhs_ammo_127x99_Ball_Tracer_Red
	{
		irLock				= 1;
		laserLock			= 1;
		airLock				= 1;
		nvLock				= 1;
		aiAmmoUsageFlags	= __EVAL(64+128+256);
	};
	class rhs_ammo_127x99_SLAP_AI: rhs_ammo_127x99_SLAP
	{
		irLock				= 1;
		laserLock			= 1;
		airLock				= 1;
		nvLock				= 1;
		aiAmmoUsageFlags	= __EVAL(64+128+256);

	};
	class rhs_ammo_127x99_SLAP_Tracer_Red_AI: rhs_ammo_127x99_SLAP_Tracer_Red
	{
		irLock				= 1;
		laserLock			= 1;
		airLock				= 1;
		nvLock				= 1;
		aiAmmoUsageFlags	= __EVAL(64+128+256);
	};