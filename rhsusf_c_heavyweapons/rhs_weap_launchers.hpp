	class missiles_titan;
	class rhs_weap_TOW_Launcher: missiles_titan
	{
		holdsterAnimValue = 1;
		autoReload = 0;
		textureType = "semi";
		scope=1;
		displayName="BGM-71 TOW Launcher";
		canLock=0;
		cursor="rocket";
		minRange=10;
		minRangeProbab=0.5;
		midRange=1450;
		midRangeProbab=1;
		maxRange=3750;
		maxRangeProbab=0.6;
		reloadTime=2;
		magazineReloadTime=90;
		magazines[]=
		{
			"rhs_mag_2Rnd_TOW",
			"rhs_mag_2Rnd_TOWB",
			"rhs_mag_2Rnd_ITOW",
			"rhs_mag_2Rnd_TOW2",
			"rhs_mag_2Rnd_TOW2A",
			"rhs_mag_2Rnd_TOW2B",
			"rhs_mag_2Rnd_TOW2B_AERO",
			"rhs_mag_2Rnd_TOW2BB"
		};
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		modes[]= {"this"};
		sounds[] = {"StandardSound"};
		weaponLockSystem	= CM_Lock_Visual;
	};
	class rhs_weap_TOW_Launcher_static: missiles_titan
	{
		canLock=0;
		autoReload=0;
		minRange=10;
		minRangeProbab=0.5;
		midRange=1450;
		midRangeProbab=1;
		maxRange=3750;
		maxRangeProbab=0.8;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		magazineReloadTime=15;
		textureType = "semi";
		displayName="BGM-71 TOW Launcher";
		magazines[]=
		{
			"rhs_mag_TOW",
			"rhs_mag_TOWB",
			"rhs_mag_ITOW",
			"rhs_mag_TOW2",
			"rhs_mag_TOW2A",
			"rhs_mag_TOW2b",
			"rhs_mag_TOW2b_aero",
			"rhs_mag_TOW2bb"
		};
		modes[]= {"this"};
		sounds[] = {"StandardSound"};
	};

	class rockets_230mm_GAT;
	class rhs_weap_mlrs: rockets_230mm_GAT
	{
		displayname = "MLRS";
		magazines[] =
		{
			rhs_mag_m26_6,
			rhs_mag_m26a1_6,
			rhs_mag_xm29_6
		};

		modes[] =
		{
			Mode_1,
			Mode_2,
			Mode_3,
			Mode_4,
			Mode_5,
			Mode_6,
			Mode_7,
			Mode_8,
			Mode_9,
			Mode_10,
			Mode_11,
			Mode_12,
			Mode_13,
			Mode_14,
			Mode_15,
			Mode_16
		};
		class Close;
		class Mode_base: Close
		{
			reloadTime	= 1.8;
			artilleryDispersion = 1.2;
		};
		#define MODE_MACRO(numb,charge,rangeMin,rangeMax)\
		class Mode_##numb##: Mode_base\
		{\
			displayName = ##rangeMin##m-##rangeMax##m;\
			artilleryCharge = ##charge##;\
			minRange=rangeMin;minRangeProbab=0.15;\
			midRange=__EVAL(rangeMin + (rangeMax - rangeMin)*0.5);midRangeProbab=0.65;\
			maxRange=rangeMax;maxRangeProbab=0.05;\
		};
		MODE_MACRO(1,0.1350,1000,1300)
		MODE_MACRO(2,0.1530,1300,1700)
		MODE_MACRO(3,0.1750,1700,2200)
		MODE_MACRO(4,0.2000,2200,2900)
		MODE_MACRO(5,0.2280,2900,3800)
		MODE_MACRO(6,0.2610,3800,5000)
		MODE_MACRO(7,0.3000,5000,6600)
		MODE_MACRO(8,0.3410,6600,8500)
		MODE_MACRO(9,0.3880,8500,11000)
		MODE_MACRO(10,0.440,11000,14000)
		MODE_MACRO(11,0.495,14000,18000)
		MODE_MACRO(12,0.560,18000,23000)
		MODE_MACRO(13,0.639,23000,30000)
		MODE_MACRO(14,0.740,30000,40000)
		MODE_MACRO(15,0.842,40000,52000)
		MODE_MACRO(16,0.960,52000,67000)
		MODE_MACRO(17,1.960,62000,67000)
		MODE_MACRO(18,0.960,52000,67000)
		MODE_MACRO(19,0.960,52000,67000)
		MODE_MACRO(20,0.960,52000,67000)

		class EventHandlers
		{
			class RHS_EH
			{
				fired = "_this call rhsusf_fnc_effectFiredMLRS";
			};
		};
	};
	class rhs_weap_mlrs_m26: rockets_230mm_GAT
	{
		magazines[] =
		{
			rhs_mag_m26_6
		};
		modes[] =
		{
			Mode_1,
			Mode_2,
			Mode_3,
			Mode_4,
			Mode_5,
			Mode_6,
			Mode_7,
			Mode_8,
			Mode_9,
			Mode_10,
			Mode_11,
			Mode_12,
			Mode_13
		};
	};
	class rhs_weap_mlrs_m26a1: rockets_230mm_GAT
	{
		magazines[] =
		{
			rhs_mag_m26a1_6,
			rhs_mag_xm29_6
		};
		modes[] =
		{
			Mode_1,
			Mode_2,
			Mode_3,
			Mode_4,
			Mode_5,
			Mode_6,
			Mode_7,
			Mode_8,
			Mode_9,
			Mode_10,
			Mode_11,
			Mode_12,
			Mode_13,
			Mode_14
		};
	};
	class rhs_weap_mlrs_guided: rhs_weap_mlrs
	{
		displayname = "GMLRS";
		magazines[] =
		{
			rhs_mag_m30_6,
			rhs_mag_m31_6
		};

		modes[] =
		{
			Mode_1,
			Mode_2,
			Mode_3,
			Mode_4,
			Mode_5,
			Mode_6,
			Mode_7,
			Mode_8,
			Mode_9,
			Mode_10,
			Mode_11,
			Mode_12,
			Mode_13,
			Mode_14,
			Mode_15,
			Mode_16
		};
		class Mode_base: Mode_base
		{
			// GPS guided
			artilleryDispersion = 0.3;
		};
		MODE_MACRO(1,0.1350,1000,1300)
		MODE_MACRO(2,0.1530,1300,1700)
		MODE_MACRO(3,0.1750,1700,2200)
		MODE_MACRO(4,0.2000,2200,2900)
		MODE_MACRO(5,0.2280,2900,3800)
		MODE_MACRO(6,0.2610,3800,5000)
		MODE_MACRO(7,0.3000,5000,6600)
		MODE_MACRO(8,0.3410,6600,8500)
		MODE_MACRO(9,0.3880,8500,11000)
		MODE_MACRO(10,0.440,11000,14000)
		MODE_MACRO(11,0.495,14000,18000)
		MODE_MACRO(12,0.560,18000,23000)
		MODE_MACRO(13,0.639,23000,30000)
		MODE_MACRO(14,0.740,30000,40000)
		MODE_MACRO(15,0.842,40000,52000)
		MODE_MACRO(16,0.960,52000,67000)
	};
	class rhs_weap_atacms: rhs_weap_mlrs
	{
		displayname = "ATacMS";
		magazines[] =
		{
			rhs_mag_mgm140a_1
		};
	};
	class rhs_weap_atacms_guided: rhs_weap_mlrs_guided
	{
		displayname = "ATacMS (ER)";
		magazines[] =
		{
			rhs_mag_mgm140b_1,
			rhs_mag_mgm164_block2_1,
			rhs_mag_mgm164_block4_1,
			rhs_mag_mgm168_block4_1
		};
	};