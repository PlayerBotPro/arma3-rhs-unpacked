
	class rhs_infantry_vdv_base : rhs_infantry_msv_base
	{
		faction = "rhs_faction_vdv";

		vehicleClass = "rhs_vehclass_infantry_emr";
		editorSubcategory = "rhs_EdSubcat_infantry_emr";

		displayName= "$STR_RHS_INF_RIFLEMAN";

		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.2;

		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};

		//model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";
		//model = "\rhsafrf\addons\rhs_infantry2\rhs_emr_base.p3d";
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_base_gloves.p3d";
		selectionClan = "clan";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
		
		modelSides[] = {0,2,3}; // No idea what this does atm
		
		uniformClass = "rhs_uniform_vkpo_gloves";
		
		selectionHeadWound = "head_injury";
		selectionBodyWound = "injury_body";
		selectionLArmWound = "injury_hands";
		selectionRArmWound = "injury_hands";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";
		selectionLArmWound1 = "injury_hands";
		selectionRArmWound1 = "injury_hands";
		selectionLLegWound1 = "injury_legs";
		selectionRLegWound1 = "injury_legs";
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_pant_w2.rvmat",

				A3_Injury
			};
		};
		
		linkedItems[] = {"rhs_6b47_emr_1",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1",Standard_Equipment};
	};




	//- Rifleman Variants

	class rhs_vdv_rifleman : rhs_infantry_vdv_base
	{
		EdPrev(rhs_vdv_rifleman)
		scope = 2;
		AUTHOR_MACRO
		displayName = "$STR_RHS_INF_RIFLEMAN";

		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
	};

	class rhs_vdv_rifleman_alt : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_rifleman_alt)
		scope = 2;
		AUTHOR_MACRO
		displayName = "$STR_RHS_INF_RIFLEMAN_2";

		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};

		Items[] = {"FirstAidKit","rhs_1PN138","rhs_fieldcap_digi2"};
		RespawnItems[] = {"FirstAidKit","rhs_1PN138","rhs_fieldcap_digi2"};


		weapons[] = {"rhs_weap_ak74mr_1p87","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74mr_1p87","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
	};

	class rhs_vdv_rifleman_lite : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_rifleman_lite)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_RIFLEMAN_L";

		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_vdv1","rhs_6sh117_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6sh117_rifleman",Standard_Equipment};
	};

	class rhs_vdv_LAT : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_LAT)
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


		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rpg26","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
		};

		secondaryAmmoCoef = 0.5;
	};

	class rhs_vdv_RShG2 : rhs_vdv_LAT
	{
		EdPrev(rhs_vdv_RShG2)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_RShG2";

		weapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rshg2","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rshg2","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rshg2_mag"
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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rshg2_mag"
		};
	};

	// Rifleman (GP-25)
	class rhs_vdv_grenadier : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_grenadier)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_GRENADIER";

		cost = 130000;
		threat[] = {1,0.3,0.1};

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_grn",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_grn",Standard_Equipment};


		weapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","Throw","Put"};

		magazines[] = {
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};

	class rhs_vdv_grenadier_alt : rhs_vdv_rifleman_alt
	{
		EdPrev(rhs_vdv_grenadier_alt)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_GRENADIER_2";

		cost = 130000;
		threat[] = {1,0.3,0.1};

		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_grn",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_grn",Standard_Equipment};

		Items[] = {"FirstAidKit","rhs_1PN138","rhs_fieldcap_digi2"};
		RespawnItems[] = {"FirstAidKit","rhs_1PN138","rhs_fieldcap_digi2"};


		weapons[] = {"rhs_weap_ak74mr_gp25_1p87","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74mr_gp25_1p87","Throw","Put"};

		magazines[] = {
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};

	class rhs_vdv_rifleman_asval : rhs_vdv_rifleman
{
	EdPrev(rhs_vdv_rifleman_asval)
	AUTHOR_MACRO
	displayName= "$STR_RHS_INF_RIFLEMAN_ASVAL";
	dlc = "RHS_AFRF";
	
	linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};

	weapons[] =
	{
		"rhs_weap_asval",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_asval",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_mag_rgn",
		"rhs_mag_rgn"
	};
	respawnMagazines[] =
	{
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_mag_rgn",
		"rhs_mag_rgn"
	};
};

	//- Support roles

	class rhs_vdv_arifleman : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_arifleman)
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

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_mg",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_mg",Standard_Equipment};

		weapons[] = {"rhs_weap_pkp","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};

		magazines[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
		respawnMagazines[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};

		backpack="rhs_rk_sht_30_emr_mg";

		secondaryAmmoCoef = 0.5;
	};

	class rhs_vdv_arifleman_rpk : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_arifleman_rpk)
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

	class rhs_vdv_machinegunner : rhs_vdv_arifleman
	{
		EdPrev(rhs_vdv_machinegunner)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_MACHINEGUNNER";

		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_mg",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_mg",Standard_Equipment};

		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	};

	class rhs_vdv_machinegunner_assistant : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_machinegunner_assistant)
		displayName= "$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";

		cost = 110000;
		camouflage = 1.5;

		backpack="rhs_rk_sht_30_emr_mg";
	};

	class rhs_vdv_marksman : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_marksman)
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

		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_Booniehat_digi","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_Booniehat_digi","rhs_6b45_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_svds_pso1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svds_pso1","Throw","Put"};

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
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
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
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
		};

	};

	class rhs_vdv_marksman_asval : rhs_vdv_rifleman_asval
{
	EdPrev(rhs_vdv_marksman_asval)
	AUTHOR_MACRO
	displayName= "$STR_RHS_INF_MARKSMAN_ASVAL";
	dlc = "RHS_AFRF";

	weapons[] =
	{
		"rhs_asval_pso1",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_asval_pso1",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_rgn"
	};
	respawnMagazines[] =
	{
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_rgn"
	};
};

	//- Leadership

	class rhs_vdv_efreitor : rhs_vdv_LAT
	{
		EdPrev(rhs_vdv_efreitor)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_EFREITOR";

		cost = 350000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_1p63","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_1p63","rhs_weap_rpg26","Throw","Put"};
	};

	class rhs_vdv_sergeant :  rhs_vdv_LAT
	{
		EdPrev(rhs_vdv_sergeant)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_SERGEANT";

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		Items[] = {"FirstAidKit","rhs_1PN138"};
		RespawnItems[] = {"FirstAidKit","rhs_1PN138"};

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_pkas","rhs_weap_rpg26","rhs_weap_makarov_pm","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_pkas","rhs_weap_rpg26","rhs_weap_makarov_pm","Binocular","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
		};
	};

	// ?
	class rhs_vdv_junior_sergeant : rhs_vdv_sergeant
	{
		EdPrev(rhs_vdv_junior_sergeant)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_JUNIOR_SERGEANT";

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};

	};

	class rhs_vdv_officer_armored : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_officer_armored)
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

		DISABLE_HEADGEAR_MACRO

		Items[] = {"FirstAidKit","rhs_1PN138"};
		RespawnItems[] = {"FirstAidKit","rhs_1PN138"};

		linkedItems[] = {"rhs_beret_vdv1","rhs_6b45_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6b45_holster",Standard_Equipment};

		weapons[] = {"rhs_weap_makarov_pm","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","Binocular","Throw","Put"};

		magazines[] =
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		respawnMagazines[] =
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};

	};

	class rhs_vdv_officer : rhs_vdv_officer_armored
	{
		EdPrev(rhs_vdv_officer)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_OFFICER";
		
		uniformClass = "rhs_uniform_vkpo";


		linkedItems[] = {"rhs_beret_vdv1","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_vest_pistol_holster",Standard_Equipment};

	};

	//- Specialities

	// VDV squads do not use anymore RPG7s due to its weight
	class rhs_vdv_grenadier_rpg : rhs_vdv_grenadier
	{
		EdPrev(rhs_vdv_grenadier_rpg)
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

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put","rhs_weap_rpg7_pgo"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_rpg7_PG7VL_mag"
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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_rpg7_PG7VL_mag"
		};

		backpack="rhs_rpg";
		secondaryAmmoCoef = 0.5;
	};

	class rhs_vdv_at : rhs_vdv_grenadier_rpg
	{
		EdPrev(rhs_vdv_at)
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

       	linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rpg7_pgo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_rpg7_pgo","Throw","Put"};

		backpack="rhs_rpg_at";

		secondaryAmmoCoef = 0.5;
	};

	class rhs_vdv_aa : rhs_vdv_at
	{
		EdPrev(rhs_vdv_aa)
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

       	linkedItems[] = {"rhs_6b47_6B50","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_6B50","rhs_6b45_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","rhs_weap_igla","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_9k38_rocket"
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
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_9k38_rocket"
		};

		backpack="";

	};

	class rhs_vdv_strelok_rpg_assist : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_strelok_rpg_assist)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_GRENADIER_RPG_ASSISTANT";


		linkedItems[] = {"rhs_6b47_6B50","rhs_6b45_rifleman",Standard_Equipment};
		magazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_mag_nspn_red"};

		respawnLinkedItems[] = {"rhs_6b47_6B50","rhs_6b45_rifleman",Standard_Equipment};
		respawnMagazines[] = { "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N10_AK","rhs_mag_nspn_red"};

		backpack="rhs_rpg";
		secondaryAmmoCoef = 0.5;

	};

	class rhs_vdv_medic : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_medic)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_MEDIC";
		attendant =1;
		icon="iconManMedic";
		backpack="rhs_rk_sht_30_emr_medic";
		picture="pictureHeal";
		
		uniformClass = "rhs_uniform_vkpo";

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

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b23_digi_medic",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b23_digi_medic",Standard_Equipment};
	};

	class rhs_vdv_engineer : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_engineer)
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

       	linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};

		backpack="rhs_rk_sht_30_emr_engineer";

	};

	//- Crew

	// soft vehicles Driver - mechanic
	class rhs_vdv_driver_armored : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_driver_armored)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_DRIVER_ARMORED";

		engineer = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";

		DISABLE_HEADGEAR_MACRO

		weapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Throw","Put"};

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

		linkedItems[] = {"rhs_beret_vdv1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6b45_rifleman",Standard_Equipment};

	};

	class rhs_vdv_driver : rhs_vdv_driver_armored
	{
		EdPrev(rhs_vdv_driver)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_DRIVER";
		
		uniformClass = "rhs_uniform_vkpo";

		linkedItems[] = {"rhs_beret_vdv1","rhs_6sh117_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6sh117_rifleman",Standard_Equipment};

	};

	// APC/IFV Driver - mechanic

	class rhs_vdv_crew : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_crew)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_CREW";

		cost = 90000;
		camouflage = 1.6;
		sensitivity = 2.5;

		engineer = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";

		HEADGEAR_MACRO(RATNIK_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_6b48","rhs_6b45_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b48","rhs_6b45_holster",Standard_Equipment};

		weapons[] = {"rhs_weap_pya","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pya","Throw","Put"};

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

	class rhs_vdv_armoredcrew : rhs_vdv_crew
	{
		EdPrev(rhs_vdv_armoredcrew)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_CREW_ARMORED";


		linkedItems[] = {"rhs_6b48","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b48","rhs_6b45_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Throw","Put"};

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

	class rhs_vdv_combatcrew : rhs_vdv_crew
	{
		EdPrev(rhs_vdv_combatcrew)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_CREW_COMBAT";

		linkedItems[] = {"rhs_6b48","rhs_6b45_light",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b48","rhs_6b45_light",Standard_Equipment};

		weapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Throw","Put"};

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
	class rhs_vdv_crew_commander : rhs_vdv_crew
	{
		EdPrev(rhs_vdv_crew_commander)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_CREW_COMMANDER";

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhs_6b48","rhs_6b45_off",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b48","rhs_6b45_off",Standard_Equipment};

		weapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Binocular","Throw","Put"};

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