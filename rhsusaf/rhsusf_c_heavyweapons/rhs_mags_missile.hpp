	
	//Bradley magazines
	
	class rhs_mag_2Rnd_TOW: VehicleMagazine
	{
		scope=2;
		ammo = "rhs_ammo_TOW_AT";
		displayname = "BGM-71A TOW";
		displaynameshort = "BGM-71A";
		nameSound="missiles";
		count=2;
		initSpeed=55.71;
		maxleadspeed = 130;
		rhs_magazineIndex=4;
	};
	
	class rhs_mag_2Rnd_TOWB: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo = "rhs_ammo_TOWB_AT";
		displayname = "BGM-71B TOW";
		displaynameshort = "BGM-71B";
	};
	
	class rhs_mag_2Rnd_ITOW: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo = "rhs_ammo_ITOW_AT";
		displayname = "BGM-71C ITOW";
		displaynameshort = "BGM-71C";
	};
	
	class rhs_mag_2Rnd_TOW2: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo = "rhs_ammo_TOW2_AT";
		displayname = "BGM-71D TOW-2";
		displaynameshort = "BGM-71D";
	};
	
	class rhs_mag_2Rnd_TOW2A: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo = "rhs_ammo_TOW2A_AT";
		displayname = "BGM-71E TOW-2A";
		displaynameshort = "BGM-71E";
	};
	
	class rhs_mag_2Rnd_TOW2B: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo = "rhs_ammo_TOW2B_AT";
		displayname = "BGM-71F TOW-2B";
		displaynameshort = "BGM-71F";
	};
	
	class rhs_mag_2Rnd_TOW2B_AERO: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo = "rhs_ammo_TOW2B_AERO_AT";
		displayname = "BGM-71F-3 TOW-2B AERO";
		displaynameshort = "BGM-71F-3";
	};
	
	class rhs_mag_2Rnd_TOW2BB: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo = "rhs_ammo_TOW2_BB";
		displayname = "BGM-71H Bunker Buster";
		displaynameshort = "BGM-71H";
	};
	
	//M220 and M41 TOW launcher magazines
	
	class rhs_mag_TOW: rhs_mag_2Rnd_TOW
	{
		count=1;
	};
	
	class rhs_mag_TOWB: rhs_mag_2Rnd_TOWB
	{
		count=1;
	};
	
	class rhs_mag_ITOW: rhs_mag_2Rnd_ITOW
	{
		count=1;
	};
	
	class rhs_mag_TOW2: rhs_mag_2Rnd_TOW2
	{
		count=1;
		ammo = "rhs_ammo_TOW2_AT_static";
	};
	
	class rhs_mag_TOW2a: rhs_mag_2Rnd_TOW2A
	{
		count=1;
	};
	
	class rhs_mag_TOW2b: rhs_mag_2Rnd_TOW2B
	{
		count=1;
	};
	
	class rhs_mag_TOW2b_aero: rhs_mag_2Rnd_TOW2B_AERO
	{
		count=1;
	};
	
	class rhs_mag_TOW2bb: rhs_mag_2Rnd_TOW2BB
	{
		count=1;
	};


	class rhs_mag_m26_6: VehicleMagazine
	{
		scope				= 2;
		displayName			= "M26";
		displayNameShort	= "Cluster";
		descriptionShort	= "227mm rocket, ×161 M77 DPICM";
		ammo				= rhs_ammo_m26_rocket;
		nameSound			= rockets;
		initSpeed			= 650;
		count				= 6;

		model 				= rhsusf\addons\rhsusf_himars\M142_MLRS_Pod;

		hardpoints[]		= {"RHS_HP_MLRS"};
		pylonWeapon 		= rhs_weap_mlrs;
	};
	class rhs_mag_m26a1_6: rhs_mag_m26_6
	{
		displayName			= "M26A1";
		descriptionShort	= "227mm rocket, ×130 M85 DPICM";
		ammo				= rhs_ammo_m26a1_rocket;
		initSpeed			= 850;
	};
	class rhs_mag_m30_6: rhs_mag_m26a1_6
	{
		displayName			= "M30";
		descriptionShort	= "227mm rocket, GPS/INS, ×101 M85 DPICM";
		ammo				= rhs_ammo_m30_rocket;
		hardpoints[]		= {"RHS_HP_GMLRS"};
		pylonWeapon 		= rhs_weap_mlrs_guided;
	};
	class rhs_mag_m31_6: rhs_mag_m30_6
	{
		displayName			= "M31";
		displayNameShort	= "Unitary HE";
		descriptionShort	= "227mm rocket, GPS/INS, 200lb HE warhead";
		ammo				= rhs_ammo_m31_rocket;
	};
	class rhs_mag_mgm140a_1: rhs_mag_m30_6
	{
		displayName			= "MGM-140A (M39)";
		displayNameShort	= "Cluster";
		descriptionShort	= "ATacMS Block I, ×234 M74 APAM";
		ammo				= rhs_ammo_mgm140a_rocket;
		count 				= 1;

		model 				= rhsusf\addons\rhsusf_himars\M142_ATACMS_Pod;
		hardpoints[]		= {"RHS_HP_ATACMS"};
		pylonWeapon 		= rhs_weap_atacms;
	};
	class rhs_mag_mgm140b_1: rhs_mag_mgm140a_1
	{
		displayName			= "MGM-140B (M39A1)";
		descriptionShort	= "ATacMS Block IA, GPS/INS, ×69 M74 APAM";
		ammo				= rhs_ammo_mgm140b_rocket;
		pylonWeapon 		= rhs_weap_atacms_guided;
	};
	class rhs_mag_mgm164_block2_1: rhs_mag_mgm140a_1
	{
		hardpoints[]		= {};
		displayName			= "MGM-164A";
		displayNameShort	= "Cluster, Guided HEAT";
		descriptionShort	= "ATacMS Block II, GPS/INS, ×13 Guided BAT";
		ammo				= rhs_ammo_mgm164_block2_rocket;
	};
	class rhs_mag_mgm164_block4_1: rhs_mag_mgm140a_1
	{
		hardpoints[]		= {};
		displayName			= "MGM-168";
		displayNameShort	= "Unitary HE";
		descriptionShort	= "ATacMS Block IVA, GPS/INS, 500lb HE warhead";
		ammo				= rhs_ammo_mgm164_block4_rocket;
		pylonWeapon 		= rhs_weap_atacms_guided;
	};
	class rhs_mag_mgm168_block4_1: rhs_mag_mgm164_block4_1
	{
		hardpoints[]		= {"RHS_HP_ATACMS"};
	};