#define MUZZLE_FACTOR 9
	class Laserbatteries;
	class rhs_LaserMag: Laserbatteries
	{
		scope = 1;
		ammo="rhs_laserbeam";
	};
	class rhs_LaserFCSMag: Laserbatteries
	{
		scope = 1;
		ammo="rhs_laserbeam_FCS";
		count = 99;
		initSpeed = 600;
		maxLeadSpeed=150;
	};
	class rhs_LaserMag_ai: Laserbatteries
	{
		scope = 1;
		initSpeed	= 96000;
		maxLeadSpeed = 1500;
		ammo		= "rhs_laserbeam_ai";
	};

#define MAX_SHELLS_COUNT 40
#define MAX_SHELLS(classname) \
class classname##_max : classname\
{\
	count = MAX_SHELLS_COUNT;\
};

#define M1(name,speed,countN,typeN,k) class rhs_mag_##name##: rhs_mag_##k## \
	{\
		displayName = ##name## ##typeN##;\
		displayNameShort = ##name##;\
		ammo = rhs_ammo_##name##;\
		count = countN;\
		initSpeed = speed;\
	};

	class rhs_mag_M1069: VehicleMagazine
	{
		scope = 2;
		displayName = "XM1069 HE-FRAG";
		displayNameShort = "M1069";
		ammo = "rhs_ammo_M1069";
		muzzleImpulseFactor[] = {MUZZLE_FACTOR*0.1,MUZZLE_FACTOR};
		count = 8;
		initSpeed = 1410;
		maxLeadSpeed = 20;
		nameSound = "heat";
		tracersEvery = 1;
		rhs_magazineIndex=3;
	};
 //XM1069 updated designation is M1147, but allowing for backward compatibility in missions
	class rhs_mag_M1147: rhs_mag_M1069
	{
		displayName = "M1147 HE-FRAG";
		displayNameShort = "M1147";
		ammo = "rhs_ammo_M1147";
	};
	class rhs_mag_M416: rhs_mag_M1069
	{
		displayName = "M416 Smoke";
		displayNameShort = "M416";
		ammo = "rhs_ammo_M416";
		initSpeed = 732;
		rhs_magazineIndex=-1;
	};
	//http://www.dtic.mil/ndia/2008gun_missile/6351LevineBrian.pdf
	class rhs_mag_M1028: rhs_mag_M1069
	{
		displayName = "M1028 Canister";
		displayNameShort = "M1028";
		ammo = "rhs_ammo_M1028";
		initSpeed = 1410; //+/- 10m/s
		rhs_magazineIndex=3;
	};

	class rhs_mag_M829: rhs_mag_M1069
	{
		displayName = "M829 APFSDS-T";
		displayNameShort = "M829";
		ammo = "rhs_ammo_M829";
		count = 28;
		initSpeed = 1670;
		nameSound = "sabot";
		rhs_magazineIndex=1;
	};

	M1(M829A1,1575,28,APFSDS-T,M829)
	M1(M829A2,1680,28,APFSDS-T,M829)
	M1(M829A3,1555,28,APFSDS-T,M829)
	M1(M829A4,1650,28,APFSDS-T,M829)


	class rhs_mag_M830: rhs_mag_M1069
	{
		displayName = "M830 HEAT-FS";
		displayNameShort = "M830";
		ammo = "rhs_ammo_M830";
		initSpeed = 915;
		maxLeadSpeed=20;
		rhs_magazineIndex=2;
	};
	M1(M830A1,1440,8,MPAT,M830)
	

	// Loadout macros
	MAX_SHELLS(rhs_mag_M829A4)
	MAX_SHELLS(rhs_mag_M829A3)
	MAX_SHELLS(rhs_mag_M829A2)
	MAX_SHELLS(rhs_mag_M829A1)
	MAX_SHELLS(rhs_mag_M829)
	MAX_SHELLS(rhs_mag_M830)
	MAX_SHELLS(rhs_mag_M830A1)
	MAX_SHELLS(rhs_mag_M1069)
	MAX_SHELLS(rhs_mag_M1147)
	MAX_SHELLS(rhs_mag_M1028)
	MAX_SHELLS(rhs_mag_M416)

	//105mm M68 cannon (Abrams 55 rounds, M60 57 rounds, M60A1/A3, 63 rounds)
	/* class rhs_mag_M392: rhs_mag_M829
	{
		displayName = "M392 APDS-T";
		displayNameShort = "M392";
		ammo = "rhs_ammo_M392";
		count = 35;
		initSpeed = 1478;
		nameSound = "sabot";
		rhs_magazineIndex=1;
	}; */

	//bradley
	class 60Rnd_30mm_APFSDS_shells_Tracer_RED;
	class rhs_mag_70Rnd_25mm_M242_APFSDS: 60Rnd_30mm_APFSDS_shells_Tracer_RED
	{
		ammo = "RHS_ammo_M919_APFSDS";
		count = 70;
		displayname = "25x137mm M919 APFSDS-T";
		displaynameshort = "M919 APFSDS-T";
		initspeed = 1385;
	};
	class rhs_mag_70Rnd_25mm_M242_M791: 60Rnd_30mm_APFSDS_shells_Tracer_RED
	{
		ammo = "RHS_ammo_M791_APDS";
		count = 70;
		displayname = "25x137mm M791 APDS-T";
		displaynameshort = "M791 APDS-T";
		initspeed = 1345;
	};
	class 140Rnd_30mm_MP_shells_Tracer_RED;
	class rhs_mag_230Rnd_25mm_M242_HEI: 140Rnd_30mm_MP_shells_Tracer_RED
	{
		scope = 2;
		ammo = "RHS_ammo_M792_HEI";

		count = 230;
		displayname = "25x137mm M792 HEI-T";
		displaynameshort = "M792 HEI-T";

		initspeed = 1100;
		lastroundstracer = 4;
		maxleadspeed = 100;
		namesound = "cannon";
		tracersevery = 1;
	};

	/*
		The M1 and IPM1 had a 4500 round coax ready round ammo box. With the introduction of the M256 cannon, the
		ready round ammo box size for the M1A1 and M1A2 series tanks was reduced to 4000 rounds due to it having 
		less space because of the larger breach of the 120mm cannon. However, full 4000 round belts were not 
		generally used because the M240 was incapable of reliably pulling an ammo belt with that ammount of 
		weight behind it. Instead, tankers usually loaded multiple belts that ran from 1000-2000 rounds, and 
		reloaded the coax as needed.
		
		Early M1 7.62x51mm ready round ammo box: https://catalog.archives.gov/OpaAPI/media/6344689/content/arcmedia/stillpix/330-cfd/1982/DF-SN-82-07241.jpeg
	*/
	class rhs_mag_1100Rnd_762x51_M240: VehicleMagazine
	{
		scope			= 2;
		ammo			= "rhs_ammo_762x51_M80A1EPR_Ball";
		displayname		= "7.62x51mm EPR";
		displaynameshort= "M80A1 EPR";
		namesound		= "mgun";
		initspeed		= 930;
		maxleadspeed	= 100;
		count			= 1100;
		tracersevery	= 5;
	};
	class rhs_mag_762x51_M240_1200: rhs_mag_1100Rnd_762x51_M240
	{
		count = 1200;
	};
	class rhs_mag_762x51_M240: rhs_mag_1100Rnd_762x51_M240
	{
		count				= 100;
		initSpeed			= 910;
		lastRoundsTracer	= 0;
	};
	class rhs_mag_762x51_M240_200: rhs_mag_762x51_M240
	{
		count = 200;
	};
	class rhs_mag_762x51_M240_200_M80: rhs_mag_762x51_M240
	{
		ammo = "rhs_ammo_762x51_M80_Ball";
		displayname		= "7.62x51mm Ball";
		displaynameshort= "M80 Ball";
		initspeed		= 838;

		count = 200;
	};
	class rhs_mag_762x51_m80a1_4000: rhs_mag_1100Rnd_762x51_M240
	{
		count	= 4000;
		weight	= __EVAL(4000*0.021);
	};

	class 32Rnd_155mm_Mo_shells;
	class RHS_mag_m1_he_12: 32Rnd_155mm_Mo_shells
	{
		scope = 2;
		count = 12;
		displayname = "HE-FRAG M1";
		displaynameshort = "HE-FRAG";
		nameSound = "heat";
		ammo = "rhs_ammo_m1_he";
		muzzleImpulseFactor[] = {0.1,0.1};
	};
	class rhs_mag_m314_ilum_4: RHS_mag_m1_he_12
	{
		count = 4;
		displayname = "Illumination M314";
		displaynameshort = "Illumination";
		ammo = "rhs_ammo_m314_ilum";
	};

	class rhs_mag_m60a2_smoke_4: RHS_mag_m1_he_12
	{
		count = 4;
		displayname = "Smoke M60A2";
		displaynameshort = "Smoke";
		ammo = "rhs_ammo_m60a2_smoke";
	};

	//air stuff
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class rhs_mag_1000Rnd_30x173 : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo="rhs_ammo_PGU14B_API";
		tracersEvery=0;
		muzzleImpulseFactor[] = {0.1,0.4};
	};
	class rhs_mag_1000Rnd_30x173_mixed : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo="rhs_ammo_30x173mm_GAU8_mixed";
		tracersEvery=0;
		muzzleImpulseFactor[] = {0.1,0.4};
	};
	class rhs_mag_1150Rnd_30x173 : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		count = 1150;
		ammo="rhs_ammo_PGU14B_API";
		tracersEvery=0;
		muzzleImpulseFactor[] = {0.1,0.5};
	};
	class rhs_mag_1150Rnd_30x173_mixed : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		count = 1150;
		ammo="rhs_ammo_30x173mm_GAU8_mixed";
		tracersEvery=0;
		muzzleImpulseFactor[] = {0.1,0.5};
	};

	class rhs_mag_M197_750: VehicleMagazine
	{
		scope=2;
		displayname = "20x102mm PGU-28/B SAPHEI";
		displaynameshort = "SAPHEI";
		ammo="rhs_ammo_20mm_AP";
		count=750;
		initSpeed=1036;
		maxLeadSpeed=200;
		tracersEvery=0;
		nameSound="cannon";
	};

	class rhs_mag_M301_500: VehicleMagazine
	{
		scope=2;
		displayname = "20x102mm M1031/1032 SAPHEI-T";
		displaynameshort = "SAPHEI-T";
		ammo="rhs_ammo_20mm_AP";
		count=500;
		initSpeed=1036;
		maxLeadSpeed=200;
		tracersEvery=0;
		nameSound="cannon";
	};

	class rhs_mag_30x113mm_M789_HEDP_1200: VehicleMagazine
	{
		scope=1;
		displayName="30x113mm M789 HEDP-T";
		ammo="rhs_ammo_30x113mm_M789_HEDP";
		count=1200;
		initSpeed=805;
		tracersEvery=0;
		maxLeadSpeed=500;
		nameSound="cannon";
		airLock=1;
		weight=419;
	};
	class rhs_mag_30x113mm_M789_HEDP_laser_1200: rhs_mag_30x113mm_M789_HEDP_1200
	{
		ammo="rhs_ammo_30x113mm_M789_HEDP_laser";
		weight=419;
	};
	class RHS_48Rnd_40mm_MK19: VehicleMagazine
	{
		scope = 2;
		displayName = "Mk. 19 40mm M384 HE";
		ammo = "rhs_ammo_mk19m3_M384";
		count = 48;
		initSpeed = 240;
		maxLeadSpeed = 100;
		nameSound = "grenadelauncher";
		displaynameshort = "M384 HE";
		muzzleImpulseFactor[] = {2,2};
	};
	class RHS_48Rnd_40mm_MK19_M430I: RHS_48Rnd_40mm_MK19
	{
		displayName = "Mk. 19 40mm M430I HEDP";
		displaynameshort = "M430I HEDP";
		ammo = "rhs_ammo_mk19m3_M430I";
	};
	class RHS_48Rnd_40mm_MK19_M430A1: RHS_48Rnd_40mm_MK19
	{
		displayName = "Mk. 19 40mm M430A1 HEDP";
		displaynameshort = "M430A1 HEDP";
		ammo = "rhs_ammo_mk19m3_M430A1";
	};
	class RHS_48Rnd_40mm_MK19_M1001: RHS_48Rnd_40mm_MK19
	{
		displayName = "Mk. 19 40mm M1001 Canister";
		displaynameshort = "M1001 Canister";
		ammo = "rhs_ammo_mk19m3_M1001";
	};
	class RHS_96Rnd_40mm_MK19 : RHS_48Rnd_40mm_MK19
	{
		count = 96;
	};
	class RHS_96Rnd_40mm_MK19_M430I : RHS_48Rnd_40mm_MK19_M430I
	{
		count = 96;
	};
	class RHS_96Rnd_40mm_MK19_M430A1 : RHS_48Rnd_40mm_MK19_M430A1
	{
		count = 96;
	};
	class RHS_96Rnd_40mm_MK19_M1001 : RHS_48Rnd_40mm_MK19_M1001
	{
		count = 96;
	};


	//M2 Ball no longer used. Need M33 Ball and M8 API ammo...
	class rhs_mag_100rnd_127x99_mag: VehicleMagazine
	{
		scope = 2;
		ammo = "rhs_ammo_127x99_Ball";
		initSpeed = 880;
		maxLeadSpeed = 200;
		tracersEvery = 5;
		nameSound = "mgun";

		count = 100;
		displayName = "12.7mm M2 HMG Belt";
		descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 100<br />Used in: Mounted M2";
		displaynameshort = "M2 Ball";
	};
	class rhs_mag_100rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag
	{
		ammo = "rhs_ammo_127x99_Ball_Tracer_Red";
		displayName = "12.7mm M2 HMG Tracer (Red) Belt";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 100<br />Used in: Mounted M2";
		//displaynameshort = "M2 Ball (Red Tracers)";
	};
	class rhs_mag_100rnd_127x99_mag_Tracer_Green: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		ammo = "rhs_ammo_127x99_Ball_Tracer_Green";
		displayName = "12.7mm M2 HMG Tracer (Green) Belt";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Green<br/>Rounds: 100<br />Used in: Mounted M2";
		//displaynameshort = "M2 Ball (Green Tracers)";
	};
	class rhs_mag_100rnd_127x99_mag_Tracer_Yellow: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		ammo = "rhs_ammo_127x99_Ball_Tracer_Yellow";
		displayName = "12.7mm M2 HMG Tracer (Yellow) Belt";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Yellow<br/>Rounds: 100<br />Used in: Mounted M2";
		//displaynameshort = "M2 Ball (Yellow Tracers)";
	};
	class rhs_mag_100rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_mag
	{
		ammo = "rhs_ammo_127x99_SLAP";
		displayName = "12.7mm SLAP M2 HMG Belt";
		descriptionShort = "Caliber: 12.7x99 mm SLAP <br/>Rounds: 100<br />Used in: Mounted M2";
		displaynameshort = "M903 SLAP";
		initSpeed = 1210;
	};
	class rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag
	{
		ammo = "rhs_ammo_127x99_SLAP_Tracer_Red";
		displayName = "12.7mm SLAP M2 HMG Tracer (Red) Belt";
		descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 100<br />Used in: Mounted M2";
		//displaynameshort = "M903 SLAP (Red Tracers)";
	};
	class rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green: rhs_mag_100rnd_127x99_SLAP_mag
	{
		ammo = "rhs_ammo_127x99_SLAP_Tracer_Green";
		displayName = "12.7mm SLAP M2 HMG Tracer (Green) Belt";
		descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Green<br/>Rounds: 100<br />Used in: Mounted M2";
		//displaynameshort = "M903 SLAP (Green Tracers)";
	};
	class rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow: rhs_mag_100rnd_127x99_SLAP_mag
	{
		ammo = "rhs_ammo_127x99_SLAP_Tracer_Yellow";
		displayName = "12.7mm SLAP M2 HMG Tracer (Yellow) Belt";
		descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Yellow<br/>Rounds: 100<br />Used in: Mounted M2";
		//displaynameshort = "M903 SLAP (Yellow Tracers)";
	};
	class rhs_mag_200rnd_127x99_mag: rhs_mag_100rnd_127x99_mag
	{
		scope = 2;
		count = 200;
		descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 200<br />Used in: Mounted M2";
	};
	class rhs_mag_200rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		scope = 2;
		count = 200;
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 200<br />Used in: Mounted M2";
	};
	class rhs_mag_200rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_SLAP_mag
	{
		scope = 2;
		count = 200;
		descriptionShort = "Caliber: 12.7x99 mm SLAP<br/>Rounds: 200<br />Used in: Mounted M2";
	};
	class rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red
	{
		scope = 2;
		count = 200;
		descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 200<br />Used in: Mounted M2";
	};
	class rhs_mag_300rnd_127x99_mag: rhs_mag_100rnd_127x99_mag
	{
		scope = 2;
		count = 300;
		descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_300rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		scope = 2;
		count = 300;
		tracersEvery = 1;
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_300rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_SLAP_mag
	{
		scope = 2;
		count = 300;
		descriptionShort = "Caliber: 12.7x99 mm SLAP<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_300rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red
	{
		scope = 2;
		count = 300;
		tracersEvery = 1;
		descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_mag: rhs_mag_100rnd_127x99_mag
	{
		scope = 2;
		count = 400;
		descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		scope = 2;
		count = 400;
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_SLAP_mag
	{
		scope = 2;
		count = 400;
		descriptionShort = "Caliber: 12.7x99 mm SLAP<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red
	{
		scope = 2;
		count = 400;
		descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_mag_AI: rhs_mag_400rnd_127x99_mag
	{
		ammo = rhs_ammo_127x99_Ball_AI;
	};
	class rhs_mag_400rnd_127x99_mag_Tracer_Red_AI: rhs_mag_400rnd_127x99_mag_Tracer_Red
	{
		ammo = rhs_ammo_127x99_Ball_Tracer_Red_AI;
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_AI: rhs_mag_400rnd_127x99_SLAP_mag
	{
		ammo = rhs_ammo_127x99_SLAP_AI;
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_AI: rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red
	{
		ammo = rhs_ammo_127x99_SLAP_Tracer_Red_AI;
	};
	class rhs_mag_400rnd_127x99_mag_Plane: rhs_mag_400rnd_127x99_mag
	{
		ammo = rhs_ammo_127x99_Ball_Plane;
	};
	class rhs_mag_400rnd_127x99_mag_Tracer_Red_Plane: rhs_mag_400rnd_127x99_mag_Tracer_Red
	{
		ammo = rhs_ammo_127x99_Ball_Tracer_Red_Plane;
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_Plane: rhs_mag_400rnd_127x99_SLAP_mag
	{
		ammo = rhs_ammo_127x99_SLAP_Plane;
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_Plane: rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red
	{
		ammo = rhs_ammo_127x99_SLAP_Tracer_Red_Plane;
	};
	class 8Rnd_82mm_Mo_shells;
	class rhs_1Rnd_m821_HE : 8Rnd_82mm_Mo_shells
	{
		author = "RHS";
		displayName = "81mm M821 HE Mortar Shell";
		displayNameShort = "$STR_A3_cfgmagazines_8rnd_82mm_mo_shells_dns";
		count = 1;
		ammo = "rhs_m821_he";
		initSpeed = 200;
	};
	class rhs_12Rnd_m821_HE : rhs_1Rnd_m821_HE
	{
		count = 12;
	};


	// 155mm artillery ammo

	class rhs_mag_155mm_m795_28 : 32Rnd_155mm_Mo_shells
	{
		initSpeed			= 810;
		displayNameShort	= $STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns;
		scope				= public;
		displayName			= $STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells0;
		ammo				= Sh_155mm_AMOS;
		count				= 32;
		nameSound			= "heat";
		muzzleImpulseFactor[] = {7.0,22.0};
	};

	class rhs_mag_155mm_m825a1_2: rhs_mag_155mm_m795_28
	{
		count				= 2;
		ammo				= Smoke_120mm_AMOS_White;
		displayName			= $STR_A3_CfgMagazines_10Rnd_120mm_Mo_smoke0;
		displayNameShort	= $STR_A3_CfgMagazines_SmokeShell_dns;
	};
	class rhs_mag_155mm_485_2: rhs_mag_155mm_m825a1_2
	{
		ammo				= rhs_ammo_m485_ilum;
		displayName			= "Illumination";
		displayNameShort	= "Illumination";
	};


	/*class rhs_mag_155mm_2: 6Rnd_155mm_Mo_smoke
	{
		count				= 2;
		ammo				= Sh_155mm_AMOS_guided;
		displayName			= $STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided0;
		displayNameShort	= $STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided0;
	};*/

	class rhs_mag_155mm_m712_2: rhs_mag_155mm_m825a1_2
	{
		ammo				= Sh_155mm_AMOS_LG;
		displayName			= $STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0;
		displayNameShort	= $STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0;
	};

	class rhs_mag_155mm_m731_1: rhs_mag_155mm_m825a1_2
	{
		count				= 1;
		ammo				= Mine_155mm_AMOS_range;
		displayName			= $STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0;
		displayNameShort	= $STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0;
	};
	class rhs_mag_155mm_raams_1: rhs_mag_155mm_m731_1
	{
		ammo				= AT_Mine_155mm_AMOS_range;
		displayName			= $STR_A3_at_mine_cluster_0;
		displayNameShort	= $STR_A3_at_mine_cluster_0;
	};
	class rhs_mag_155mm_m864_3: rhs_mag_155mm_m825a1_2
	{
		count				= 3;
		ammo				= Cluster_155mm_AMOS;
		displayName			= $STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0;
		displayNameShort	= $STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0;
	};