	class rhs_infantry_msv_base : SoldierGB
	{
		dlc = "RHS_AFRF";

		scope = 0;
		category = "Men";

		AUTHOR_MACRO

		side = 0;
		faction = "rhs_faction_msv";
		vehicleClass = "rhs_vehclass_infantry_flora";
		editorSubcategory = "rhs_EdSubcat_infantry_flora";
		displayName= "$STR_RHS_INF_RIFLEMAN";

		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Euro"
		};

		//faceType = "Man_A3";
		genericNames="RussianMen";

		//portrait = "\rhsafrf\addons\rhs_infantry\data\portraits\combarhead_rhs_common_soldier_ca";
		portrait = "";
		picture = "";
		icon = "iconMan";

		accuracy = 1.6; // 2.3
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 10;
		canCarryBackPack = 1;

		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";

		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "rhs_uniform_flora";

		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;

		cost = 100000;

		//HITPOINTS_CHARACTER_SIMULATION

		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry\data\flora.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat",

				"rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat",

				A3_Injury
			};
		};

		selectionClan = "";

		selectionbodywound = "body_injury";
		selectionlarmwound = "l_arm_injury";
		selectionlarmwound1 = "l_arm_injury";
		selectionlarmwound2 = "hl";
		selectionllegwound = "l_leg_injury";
		selectionllegwound1 = "l_leg_injury";
		selectionllegwound2 = "hl";
		selectionrarmwound = "r_arm_injury";
		selectionrarmwound1 = "r_arm_injury";
		selectionrarmwound2 = "hl";
		selectionRLegWound = "r_leg_injury";
		selectionRLegWound1 = "r_leg_injury";
		selectionrlegwound2 = "hl";

		weapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rsp30_red",DefaultManWeapons}; //rhs_weap_ak74m_folded
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rsp30_red",DefaultManWeapons}; //rhs_weap_ak74m_folded
		magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_nspn_red"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_nspn_red"
		};

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};

		linkedItems[] = {"rhs_6b27m",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m",Standard_Equipment};

		hiddenSelections[] = {"camo1","camo2","camob"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_co.paa"
		};
		class EventHandlers: EventHandlers {
			class RHS_NVG_Check {
				init = "_this call rhs_fnc_nvgHandler";
			};
		};
	};

	//- Rifleman Variants

	class rhs_msv_rifleman : rhs_infantry_msv_base
	{
		EdPrev(rhs_msv_rifleman)
		scope = 2;
		AUTHOR_MACRO
		displayName = "$STR_RHS_INF_RIFLEMAN";

		HEADGEAR_MACRO(MSV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_dtk",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk",DefaultManWeapons};

		magazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn)
		};
		respawnMagazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn)
		};

	};

	class rhs_msv_LAT : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_LAT)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_LAT";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";

		cost = 180000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";

		linkedItems[] = {"rhs_6b27m_green","rhs_6b23_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6b23_6sh92_vog",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_plummag_dtk","rhs_weap_rpg26",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_ak74m_plummag_dtk","rhs_weap_rpg26",DefaultManWeapons};

		magazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn),
			"rhs_rpg26_mag"
		};
		respawnMagazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn),
			"rhs_rpg26_mag"
		};

		secondaryAmmoCoef = 0.5;
	};
	class rhs_msv_RShG2 : rhs_msv_LAT
	{
		EdPrev(rhs_msv_RShG2)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_RShG2";

		weapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rshg2",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rshg2",DefaultManWeapons};

		magazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn),
			"rhs_rshg2_mag"
		};
		respawnMagazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn),
			"rhs_rshg2_mag"
		};

		secondaryAmmoCoef = 0.5;
	};

	class rhs_msv_grenadier : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_grenadier)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_GRENADIER";

		cost = 130000;
		threat[] = {1,0.3,0.1};

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_6sh92_vog",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_gp25_dtk",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk",DefaultManWeapons};

		magazines[] = {
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_10(rhs_VOG25)
		};
		respawnMagazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_10(rhs_VOG25)
		};
	};

	// - Support Roles

	class rhs_msv_arifleman : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_arifleman)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_ARIFLEMAN_2";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";

		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";

		weapons[] = {"rhs_weap_pkp",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_pkp",DefaultManWeapons};

		magazines[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgn"
		};
		respawnMagazines[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgn"
		};

		backpack="rhs_sidorMG";

		secondaryAmmoCoef = 0.5;
	};

	class rhs_msv_arifleman_rpk : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_arifleman_rpk)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_ARIFLEMAN";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";

		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";

		weapons[] = {"rhs_weap_rpk74m",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_rpk74m",DefaultManWeapons};

		magazines[] =
		{
			mag_8(rhs_45Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn)
		};
		respawnMagazines[] =
		{
			mag_8(rhs_45Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn)
		};

		secondaryAmmoCoef = 0.5;
	};

	class rhs_msv_machinegunner : rhs_msv_arifleman
	{
		EdPrev(rhs_msv_machinegunner)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_MACHINEGUNNER";

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23",Standard_Equipment};

		weapons[] = {"rhs_weap_pkm",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_pkm",DefaultManWeapons};
	};

	class rhs_msv_machinegunner_assistant : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_machinegunner_assistant)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";

		cost = 110000;
		camouflage = 1.5;

		linkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92",Standard_Equipment};

		backpack="rhs_sidorMG";
	};

	class rhs_msv_grenadier_rpg : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_grenadier_rpg)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_GRENADIER_RPG";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";

		cost = 160000;
		threat[] = {1,0.5,0.2};
		icon = "iconManAT";

		linkedItems[] = {"rhs_6b27m_green","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6b23_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_plummag_dtk",DefaultManWeapons,"rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"rhs_weap_ak74m_plummag_dtk",DefaultManWeapons,"rhs_weap_rpg7_pgo"};

		magazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn),
			"rhs_rpg7_PG7VL_mag"
		};
		respawnMagazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_rgn),
			"rhs_rpg7_PG7VL_mag"
		};

		backpack="rhs_rpg";
		secondaryAmmoCoef = 0.5;

	};

	class rhs_msv_strelok_rpg_assist : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_strelok_rpg_assist)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_GRENADIER_RPG_ASSISTANT";


		linkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92",Standard_Equipment};

		backpack="rhs_rpg";
		secondaryAmmoCoef = 0.5;

	};

	class rhs_msv_marksman : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_marksman)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_MARKSMAN";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";

		cost = 150000;
		sensitivity = 3.3;

		HEADGEAR_MACRO(MSV_FLORA_SNIPER_HELMET_POOL)

		linkedItems[] = {"rhs_fieldcap_helm","rhs_6b23_sniper",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_fieldcap_helm","rhs_6b23_sniper",Standard_Equipment};

		weapons[] = {"rhs_weap_svdp_pso1",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_svdp_pso1",DefaultManWeapons};

		magazines[] =
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		respawnMagazines[] =
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};

	};


	//- Leadership

	class rhs_msv_efreitor : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_efreitor)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_EFREITOR";

		cost = 350000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92_radio",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92_radio",Standard_Equipment};

	};

	class rhs_msv_sergeant : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_sergeant)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_SERGEANT";

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};

		linkedItems[] = {"rhs_6b27m_green","rhs_6b23_6sh92_headset_mapcase",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6b23_6sh92_headset_mapcase",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_gp25_dtk","rhs_weap_makarov_pm","Binocular",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","rhs_weap_makarov_pm","Binocular",DefaultManWeapons};

		magazines[] = {
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
		respawnMagazines[] =
		{
			mag_8(rhs_30Rnd_545x39_7N10_AK),
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};

	class rhs_msv_junior_sergeant : rhs_msv_sergeant
	{
		EdPrev(rhs_msv_junior_sergeant)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_JUNIOR_SERGEANT";

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92_vog_headset",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92_vog_headset",Standard_Equipment};

	};

	class rhs_msv_officer_armored : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_officer_armored)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_OFFICER_ARMORED";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";

		cost = 600000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManOfficer";

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};

		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_fieldcap","rhs_6b23_crewofficer",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_6b23_crewofficer",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_folded_dtk","rhs_weap_makarov_pm","Binocular",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_ak74m_folded_dtk","rhs_weap_makarov_pm","Binocular",DefaultManWeapons};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};

	class rhs_msv_officer : rhs_msv_officer_armored
	{
		EdPrev(rhs_msv_officer)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_OFFICER";

		linkedItems[] = {"rhs_fieldcap","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_vest_commander",Standard_Equipment};

	};

	//- Specialities

	class rhs_msv_at : rhs_msv_grenadier_rpg
	{
		EdPrev(rhs_msv_at)
		AUTHOR_MACRO
		displayName= "AT Specialist";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";

		cost = 180000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";

		linkedItems[] = {"rhs_6b27m_green","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6b23_rifleman",Standard_Equipment};

		backpack="rhs_rpg_at";

		secondaryAmmoCoef = 0.5;

	};


	class rhs_msv_aa : rhs_msv_at
	{
		EdPrev(rhs_msv_aa)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_AA";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";

		cost = 200000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";

		linkedItems[] = {"rhs_6b27m_ess","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_ess","rhs_6b23_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_dtk",DefaultManWeapons,"rhs_weap_igla"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","rhs_weap_igla"};

		magazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};
		respawnMagazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_mag_9k38_rocket"};

		backpack="";

	};

	class rhs_msv_engineer : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_engineer)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_ENGINEER";

		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.5;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";


		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_rifleman",Standard_Equipment};

		backpack="rhs_assault_umbts_engineer";
	};

	class rhs_msv_medic : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_medic)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_MEDIC";
		attendant =1;
		icon="iconManMedic";
		backpack="rhs_assault_umbts_medic";
		picture="pictureHeal";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "medic";
		textPlural = "medics";
		nameSound = "veh_infantry_medic_s";

		linkedItems[] = {"rhs_6b27m","rhs_6b23_medic",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_medic",Standard_Equipment};

	};

	//- Crew

	class rhs_msv_driver_armored : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_driver_armored)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_DRIVER_ARMORED";

		engineer = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";

		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_fieldcap","rhs_6b23",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_6b23",Standard_Equipment};

		weapons[] = {"rhs_weap_aks74u","rhs_weap_pya",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_pya",DefaultManWeapons};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};

	class rhs_msv_driver : rhs_msv_driver_armored
	{
		EdPrev(rhs_msv_driver)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_DRIVER";

		linkedItems[] = {"rhs_fieldcap","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_vest_pistol_holster",Standard_Equipment};

	};

	class rhs_msv_crew : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_crew)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_CREW";

		cost = 90000;
		camouflage = 1.6;
		sensitivity = 2.5;

		HEADGEAR_MACRO(FLORA_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_tsh4","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_pistol_holster",Standard_Equipment};

		weapons[] = {"rhs_weap_pya",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_pya",DefaultManWeapons};

		magazines[] =
		{
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		respawnMagazines[] =
		{
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};

		fsmDanger = "rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
	};

	class rhs_msv_armoredcrew : rhs_msv_crew
	{
		EdPrev(rhs_msv_armoredcrew)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_CREW_ARMORED";

		linkedItems[] = {"rhs_tsh4_ess","rhs_6b23_crew",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b23_crew",Standard_Equipment};
		weapons[] = {"rhs_weap_aks74u","rhs_weap_pya",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_pya",DefaultManWeapons};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};

	class rhs_msv_combatcrew : rhs_msv_crew
	{
		EdPrev(rhs_msv_combatcrew)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_CREW_COMBAT";

		linkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};

		weapons[] = {"rhs_weap_aks74u","rhs_weap_pya",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_pya",DefaultManWeapons};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};

	};

	// APC/IFV Gunner
	class rhs_msv_crew_commander : rhs_msv_crew
	{
		EdPrev(rhs_msv_crew_commander)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_CREW_COMMANDER";

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};

		weapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Binocular",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Binocular",DefaultManWeapons};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};

	//- Pilots

	class rhs_pilot_base : rhs_infantry_msv_base
	{
		EdPrev(rhs_pilot_base)
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};

		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";

		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Euro",
			"Head_Asian"
		};
		scope = 1;
		scopeCurator = 0;
		AUTHOR_MACRO
		displayName = "Pilot";
		faction = "rhs_faction_vvs";
		model = "\rhsafrf\addons\rhs_infantry\rhs_pilot_base.p3d";
		uniformClass = "rhs_uniform_df15";

		weapons[] = {"rhs_weap_makarov_pm",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_makarov_pm",DefaultManWeapons};

		magazines[] =
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		respawnMagazines[] =
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};

		class Wounds
		{
			tex[] = {};
			mat[] = {
				"rhsafrf\addons\rhs_infantry\data\rhs_df15.rvmat",
				"rhsafrf\addons\rhs_infantry\data\df15_bz_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\df15_bz_w1.rvmat",

				A3_Injury
			};
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_df15_co.paa"
		};

		linkedItems[] = {Standard_Equipment};
		respawnLinkedItems[] = {Standard_Equipment};
	};

	class rhs_pilot_tan_base : rhs_pilot_base
	{
		EdPrev(rhs_pilot_tan_base)
		scope = 1;
		scopeCurator = 0;
		AUTHOR_MACRO
		displayName = "Pilot";
		uniformClass = "rhs_uniform_df15_tan";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_df15khaki_co.paa"
		};
	};

	class rhs_pilot : rhs_pilot_base
	{
		EdPrev(rhs_pilot)
		AUTHOR_MACRO
		displayName= "$STR_RHS_PILOT_NAME";

		scope = 2;
		scopeCurator = 2;

		cost = 160000;
		camouflage = 2.0;

		HEADGEAR_MACRO(HELI_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_zsh7a",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_zsh7a",Standard_Equipment};
	};

	class rhs_pilot_tan : rhs_pilot_tan_base
	{
		EdPrev(rhs_pilot_tan)
		AUTHOR_MACRO
		displayName="Pilot (Tan)"; //"$STR_RHS_PILOT_NAME";

		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_df15khaki_co.paa"
		};
		nameSound = "veh_infantry_pilot_s";

		cost = 160000;
		camouflage = 2.0;

		HEADGEAR_MACRO(HELI_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_zsh7a",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_zsh7a",Standard_Equipment};

	};

	class rhs_pilot_combat_heli : rhs_pilot_base
	{
		EdPrev(rhs_pilot_combat_heli)
		AUTHOR_MACRO
		displayName= "$STR_RHS_PILOTCOMBATHELICOPTER_NAME";

		scope = 2;
		scopeCurator = 2;

		HEADGEAR_MACRO(COMBAT_HELI_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_zsh7a_mike_green",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_zsh7a_mike_green",Standard_Equipment};
	};

	class rhs_pilot_transport_heli : rhs_pilot_base
	{
		EdPrev(rhs_pilot_transport_heli)
		AUTHOR_MACRO
		displayName= "$STR_RHS_PILOTTRANSPORT_NAME";

		scope = 2;
		scopeCurator = 2;

		linkedItems[] = {"rhs_gssh18",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_gssh18",Standard_Equipment};
	};