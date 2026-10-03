#define Mac_Inf_USMC_WD faction = "rhs_faction_usmc_wd";

	class rhsusf_infantry_usmc_base : rhsusf_infantry_army_base
	{

		faction = "rhs_faction_usmc_wd";
		vehicleClass = "rhs_vehclass_infantry";
		editorSubcategory = "rhs_EdSubcat_infantry";
		uniformClass = "rhs_uniform_FROG01_wd";
		AUTHOR_MACRO


		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"rhsusf_g_usmc"
		};
		faceType = "Man_A3";
		genericNames="NATOMen";

		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_marine_v2.p3d";

		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsusf\addons\rhsusf_infantry\data\rhsusf_frog02.rvmat",
				"rhsusf\addons\rhsusf_infantry\data\rhsusf_frog02_w.rvmat",
				"rhsusf\addons\rhsusf_infantry\data\rhsusf_frog02_w.rvmat",
				A3_Injury
			};
		};

		weapons[] = {"rhs_weap_m16a4_grip_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_grip_acog_usmc","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67)
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67)
		};

		Items[] = {"FirstAidKit","rhsusf_ANPVS_14"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14"};

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_light", Standard_Equipment};


		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_frog02_wd_co.paa"
		};
	};


	// Riflemen


	class rhsusf_usmc_marpat_wd_rifleman: rhsusf_infantry_usmc_base
	{
		EdPrev(rhsusf_usmc_marpat_wd_rifleman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_M16";


		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_rifleman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_rifleman", Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_acog_usmc","Throw","Put"};

		magazines[] =
		{
			mag_9(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc"
		};

		respawnMagazines[] =
		{
			mag_9(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc"
		};
	};

	class rhsusf_usmc_marpat_wd_rifleman_m4: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_rifleman_m4)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_M4";

		weapons[] = {"rhs_m4_grip_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_grip_acog_usmc","Throw","Put"};

	};

	class rhsusf_usmc_marpat_wd_rifleman_light: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_rifleman_light)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_L";

		camouflage = 1.2;
		cost = 90000;

		weapons[] = {"rhs_m4_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_acog_usmc","Throw","Put"};

	 	linkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_light", Standard_Equipment};

	};

	class rhsusf_usmc_marpat_wd_riflemanat: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_riflemanat)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_AT";

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

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_rifleman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_rifleman", Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4_acog_usmc","rhs_weap_M136","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_acog_usmc","rhs_weap_M136","Throw","Put"};

		magazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc",
			"rhs_m136_mag"
		};

		respawnMagazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc",
			"rhs_m136_mag"
		};

		secondaryAmmoCoef = 0.5;

		class EventHandlers;
	};

	class rhsusf_usmc_marpat_wd_rifleman_law: rhsusf_usmc_marpat_wd_riflemanat
	{
		EdPrev(rhsusf_usmc_marpat_wd_rifleman_law)
		scope = 2;
		AUTHOR_MACRO
		displayName= $STR_RHSUSF_INF_RIFLEMAN_LAW;

		weapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhs_weap_m72a7","Throw","Put"};

		magazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc",
			"rhs_m72a7_mag"
		};

		respawnMagazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc",
			"rhs_m72a7_mag"
		};

		secondaryAmmoCoef = 0.5;
	};

	class rhsusf_usmc_marpat_wd_rifleman_m590: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_rifleman_m590)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_M590";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_light", Standard_Equipment};

		weapons[] = {"rhs_weap_M590_8RD","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_M590_8RD","Throw","Put"};

		magazines[] =
		{
			mag_6(rhsusf_8Rnd_00Buck),
			mag_2(rhs_mag_m67)
		};

		respawnMagazines[] =
		{
			mag_6(rhsusf_8Rnd_00Buck),
			mag_2(rhs_mag_m67)
		};

		backpack ="rhsusf_falconii_breach";
	};

	class rhsusf_usmc_marpat_wd_grenadier: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_grenadier)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_GRENADIERA";

		cost = 130000;
		threat[] = {1,0.3,0.1};

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_teamleader", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_teamleader", Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4_m203_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_m203_acog_usmc","Throw","Put"};

		magazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			mag_9(rhs_mag_M433_HEDP)
		};
		respawnMagazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			mag_9(rhs_mag_M433_HEDP)
		};

		backpack="rhsusf_falconii_coy_gr";
	};

	class rhsusf_usmc_marpat_wd_grenadier_m32: rhsusf_usmc_marpat_wd_grenadier
	{
		EdPrev(rhsusf_usmc_marpat_wd_grenadier_m32)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_GRENADIER_M32";

		weapons[] =
		{
			"rhs_weap_m32",
			"rhsusf_weap_m9",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_weap_m32",
			"rhsusf_weap_m9",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			mag_5(rhsusf_mag_6Rnd_M433_HEDP),
			"rhsusf_mag_6Rnd_M714_white",
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ)

		};

		respawnMagazines[] =
		{
			mag_5(rhsusf_mag_6Rnd_M433_HEDP),
			"rhsusf_mag_6Rnd_M714_white",
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ)
		};

		backpack="rhsusf_falconii_gr_m32";
	};

	// Support

	class rhsusf_usmc_marpat_wd_autorifleman: rhsusf_infantry_usmc_base
	{
		EdPrev(rhsusf_usmc_marpat_wd_autorifleman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_ARIFLEMAN_M27";

		cost = 125000;
		threat[] = {1,0.1,0.3};


		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_iar", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_iar", Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_coy_m27";

		weapons[] = {"rhs_weap_m27iar_bipod_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m27iar_bipod_acog_usmc","Throw","Put"};
		magazines[] =
		{
			mag_13(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67)
		};
		respawnMagazines[] =
		{
			mag_13(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67)
		};

	};

	class rhsusf_usmc_marpat_wd_autorifleman_m249: rhsusf_usmc_marpat_wd_autorifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_autorifleman_m249)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_ARIFLEMAN";

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

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_mg", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_mg", Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_coy_ar";

		weapons[] =
		{
			"rhs_weap_m249_pip_usmc",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_weap_m249_pip_usmc",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			mag_3(rhsusf_100Rnd_556x45_M855_soft_pouch),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			mag_2(rhs_mag_m67)
		};
		respawnMagazines[] =
		{
			mag_3(rhsusf_100Rnd_556x45_M855_soft_pouch),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			mag_2(rhs_mag_m67)
		};

	};

	class rhsusf_usmc_marpat_wd_autorifleman_m249_ass: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_autorifleman_m249_ass)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_AARIFLEMAN";

		cost = 110000;
		camouflage = 1.5;

		backpack="rhsusf_assault_eagleaiii_coy_ar";

	};

	class rhsusf_usmc_marpat_wd_machinegunner: rhsusf_usmc_marpat_wd_autorifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_machinegunner)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_MG";

		icon = "iconManMG";

		backpack="rhsusf_assault_eagleaiii_coy_mg";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_mg", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_mg", Standard_Equipment};

		weapons[] = {"rhs_weap_m240b_usmc","rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m240b_usmc","rhsusf_weap_m9","Throw","Put"};
		magazines[] =
		{
			mag_6(rhsusf_50Rnd_762x51),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			mag_2(rhs_mag_m67)
		};
		respawnMagazines[] =
		{
			mag_6(rhsusf_50Rnd_762x51),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			mag_2(rhs_mag_m67)
		};

	};

	class rhsusf_usmc_marpat_wd_machinegunner_ass: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_machinegunner_ass)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_AMG";

		cost = 110000;
		camouflage = 1.5;

		weapons[] = {"rhs_weap_m16a4_grip_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_grip_acog_usmc","Throw","Put"};

		backpack="rhsusf_assault_eagleaiii_coy_mg";

	};

	// Leaders

	class rhsusf_usmc_marpat_wd_officer: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_officer)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_OFFICER";

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

		linkedItems[] = {"rhs_8point_marpatwd","rhsusf_spc_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_8point_marpatwd","rhsusf_spc_squadleader",Standard_Equipment};

		weapons[] =
		{
			"rhs_m4_acog_usmc",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_m4_acog_usmc",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_5(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_5(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green"
		};

	};

	class rhsusf_usmc_marpat_wd_squadleader: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_squadleader)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_SQUADLEADER";

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_squadleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_squadleader",  Standard_Equipment};

		weapons[] =
		{
			"rhs_m4_grip_acog3_usmc",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_m4_grip_acog3_usmc",
			"Binocular",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(Chemlight_red),
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_purple",
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_red"
		};
		respawnMagazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(Chemlight_red),
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_purple",
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_red"
		};

	};

	class rhsusf_usmc_marpat_wd_teamleader: rhsusf_infantry_usmc_base
	{
		EdPrev(rhsusf_usmc_marpat_wd_teamleader)

		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_TEAMLEADER";

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_teamleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_teamleader",Standard_Equipment};

		weapons[] = {"rhs_m4_m203_acog_usmc","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_m203_acog_usmc","Binocular","Throw","Put"};

		magazines[] =
		{
			mag_9(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_6(rhs_mag_M433_HEDP),
			mag_2(rhs_mag_m67),
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_purple"
		};
		respawnMagazines[] =
		{
			mag_9(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_6(rhs_mag_M433_HEDP),
			mag_2(rhs_mag_m67),
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_purple"
		};

		backpack="rhsusf_falconii_coy_gr";
	};

	class rhsusf_usmc_marpat_wd_jfo: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_jfo)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_JFO";

		icon = "iconManLeader";
		cost = 450000;
		sensitivity = 3.2;

		Items[] = {"FirstAidKit","rhsusf_ANPVS_15"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15"};

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_teamleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_teamleader",Standard_Equipment};

		weapons[] = {"rhs_m4_m203s_acog_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_black","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_m203s_acog_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_black","Throw","Put"};

		magazines[] =
		{
			mag_4(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_3(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"Chemlight_green",
			"Chemlight_red",
			mag_2(I_IR_Grenade),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_purple"
		};

		respawnMagazines[] =
		{
			mag_4(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_3(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"Chemlight_green",
			"Chemlight_red",
			mag_2(I_IR_Grenade),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_purple"
		};

		backpack="rhsusf_falconii_gr";
	};

	class rhsusf_usmc_marpat_wd_fso: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_fso)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_FSO";

		icon = "iconManLeader";
		cost = 200000;
		sensitivity = 3.2;

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_spc_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_spc_squadleader",Standard_Equipment};

		weapons[] = {"rhs_m4_acog2_usmc","rhsusf_bino_lerca_1200_black","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_acog2_usmc","rhsusf_bino_lerca_1200_black","Throw","Put"};

		magazines[] =
		{
			mag_5(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_3(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_purple"
		};
		respawnMagazines[] =
		{
			mag_5(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_3(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_purple"
		};
	};

	// Specialists

	class rhsusf_usmc_marpat_wd_smaw: rhsusf_usmc_marpat_wd_riflemanat
	{
		EdPrev(rhsusf_usmc_marpat_wd_smaw)
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_SMAW_USMC";

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

		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};

		weapons[] =
		{
			"rhs_m4_acog_usmc",
			"rhs_weap_smaw_gr_optic",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_m4_acog_usmc",
			"rhs_weap_smaw_gr_optic",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_3(rhs_mag_smaw_SR),
			"rhs_mag_smaw_HEDP",
			"rhs_mag_m67"
		};

		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_3(rhs_mag_smaw_SR),
			"rhs_mag_smaw_HEDP",
			"rhs_mag_m67"
		};
		backpack="rhsusf_assault_eagleaiii_coy_assaultman";
	};

	class rhsusf_usmc_marpat_wd_javelin: rhsusf_usmc_marpat_wd_smaw
	{
		EdPrev(rhsusf_usmc_marpat_wd_javelin)
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_AT_USMC";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};

		weapons[] =
		{
			"rhs_weap_m16a4_acog_usmc",
			"rhs_weap_fgm148",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_weap_m16a4_acog_usmc",
			"rhs_weap_fgm148",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_fgm148_magazine_AT",
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_fgm148_magazine_AT",
			"rhs_mag_m67"
		};
		backpack="";
	};


	class rhsusf_usmc_marpat_wd_javelin_assistant: rhsusf_usmc_marpat_wd_smaw
	{
		EdPrev(rhsusf_usmc_marpat_wd_javelin_assistant)
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_AT_ASSISTANT_USMC";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};

		weapons[] =
		{
			"rhs_weap_m16a4_acog_usmc",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_weap_m16a4_acog_usmc",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_m67"
		};
		backpack="rhsusf_assault_eagleaiii_coy_at";
	};

	class rhsusf_usmc_marpat_wd_stinger: rhsusf_usmc_marpat_wd_smaw
	{
		EdPrev(rhsusf_usmc_marpat_wd_stinger)
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_AA";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_spc_light",  Standard_Equipment};

		weapons[] =
		{
			"rhs_weap_m16a4_acog_usmc",
			"rhs_weap_fim92",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_weap_m16a4_acog_usmc",
			"rhs_weap_fim92",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_fim92_mag",
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_fim92_mag",
			"rhs_mag_m67"
		};

		secondaryAmmoCoef = 0.5;
		backpack="rhsusf_assault_eagleaiii_coy_aa";
	};

	class rhsusf_usmc_marpat_wd_engineer: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_engineer)
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_ENGINEER";

		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.5;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4_grip_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_grip_acog_usmc","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67)
		};

		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67)
		};

		backpack="rhsusf_assault_eagleaiii_coy_engineer";
	};

	class rhsusf_usmc_marpat_wd_explosives: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_explosives)
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_EOD";

		cost = 115000;
		camouflage = 1.6;
		sensitivity = 2.5;

		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};

		icon = "iconManExplosive";
		picture = "pictureExplosive";

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light",  Standard_Equipment};

		weapons[] = {"rhs_m4_acog2_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_acog2_usmc","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(Chemlight_green),
			"ClaymoreDirectionalMine_Remote_Mag",
			"rhs_mag_m18_red"
		};

		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(Chemlight_green),
			"ClaymoreDirectionalMine_Remote_Mag",
			"rhs_mag_m18_red"
		};

		backpack="rhsusf_assault_eagleaiii_coy_eod";
	};

	class rhsusf_usmc_marpat_wd_uav: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_uav)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_UAV";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_light",  Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_acog_usmc","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_m67"
		};

		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_m67"
		};

		backpack="B_rhsusf_B_BACKPACK";

	};

	class rhsusf_usmc_marpat_wd_marksman: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_wd_marksman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_DMARKSMAN";

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

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};

		weapons[] = {"rhs_weap_sr25_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_sr25_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};

		magazines[] =
		{
			mag_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

		respawnMagazines[] =
		{
			mag_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

	};

	class rhsusf_usmc_marpat_wd_spotter: rhsusf_usmc_marpat_wd_marksman
	{
		EdPrev(rhsusf_usmc_marpat_wd_spotter)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_SPOTTER";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound = "veh_infantry_SF_s";

		cost = 250000;
		threat[] = {1,0.3,0.3};
		camouflage = 0.6;
		sensitivity = 3.5;

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_light",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_light",Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4_acog_usmc","rhsusf_bino_lerca_1200_black","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_acog_usmc","rhsusf_bino_lerca_1200_black","Throw","Put"};

		magazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_an_m8hc",
			"rhs_mag_m67"
		};

		respawnMagazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_an_m8hc",
			"rhs_mag_m67"
		};

	};

	class rhsusf_usmc_marpat_wd_sniper: rhsusf_usmc_marpat_wd_marksman
	{
		EdPrev(rhsusf_usmc_marpat_wd_sniper)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_SNIPER";

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

		cost = 350000;
		threat[] = {1,0.3,0.3};
		camouflage = 0.4;
		sensitivity = 3.5;

		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_sniper",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_sniper",Standard_Equipment};

		weapons[] = {"rhs_weap_m40_wd_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m40_wd_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};

		magazines[] =
		{
			mag_6(rhsusf_10Rnd_762x51_m118_special_Mag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

		respawnMagazines[] =
		{
			mag_6(rhsusf_10Rnd_762x51_m118_special_Mag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

	};

	class rhsusf_usmc_marpat_wd_sniper_m110 : rhsusf_usmc_marpat_wd_sniper
	{
		EdPrev(rhsusf_usmc_marpat_wd_sniper_m110)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_SNIPER_M110";

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};

		weapons[] = {"rhs_weap_sr25_sup_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_sr25_sup_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};

		magazines[] =
		{
			mag_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

		respawnMagazines[] =
		{
			mag_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

	};

	class rhsusf_usmc_marpat_wd_sniper_M107: rhsusf_usmc_marpat_wd_sniper
	{
		EdPrev(rhsusf_usmc_marpat_wd_sniper_M107)
		scope = 2;
		AUTHOR_MACRO
		displayName= $STR_RHSUSF_INF_SNIPER_M107;

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};

		weapons[] = {"rhs_weap_M107_premier","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_M107_premier","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};

		magazines[] =
		{
			mag_5(rhsusf_mag_10Rnd_STD_50BMG_M33),
			mag_2(rhsusf_mag_10Rnd_STD_50BMG_mk211),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

		respawnMagazines[] =
		{
			mag_5(rhsusf_mag_10Rnd_STD_50BMG_M33),
			mag_2(rhsusf_mag_10Rnd_STD_50BMG_mk211),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};
	};

	// Ground Crew

	class rhsusf_usmc_marpat_wd_crewman: rhsusf_infantry_usmc_base
	{
		EdPrev(rhsusf_usmc_marpat_wd_crewman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_CREW";

		cost = 90000;
		camouflage = 1.6;
		sensitivity = 2.5;

		engineer = 1;

		Items[] = {"FirstAidKit","rhsusf_ANPVS_14"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14"};

		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};

		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m9","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m9","Binocular","Throw","Put"};

		magazines[] =
		{
			mag_3(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};

		respawnMagazines[] =
		{
			mag_3(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};

		fsmDanger = "rhsusf\addons\rhsusf_c_troops\scripts\dangerCrew.fsm";
	};

	class rhsusf_usmc_marpat_wd_combatcrewman: rhsusf_usmc_marpat_wd_crewman
	{
		EdPrev(rhsusf_usmc_marpat_wd_combatcrewman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_CREW_COMBAT";

		linkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};
	};

	class rhsusf_usmc_marpat_wd_driver: rhsusf_infantry_usmc_base
	{
		EdPrev(rhsusf_usmc_marpat_wd_driver)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_DRIVER";

		engineer = 1;

		linkedItems[] = {"rhs_8point_marpatwd","rhsusf_spc_light","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_8point_marpatwd","rhsusf_spc_light","ItemGPS",Standard_Equipment};

		weapons[] = {"rhs_m4_acog_usmc","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_acog_usmc","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc",
			"rhs_mag_m67"
		};

		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc",
			"rhs_mag_m67"
		};

	};

	class rhsusf_usmc_marpat_wd_gunner: rhsusf_usmc_marpat_wd_driver
	{
		EdPrev(rhsusf_usmc_marpat_wd_gunner)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_GUNNER";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc","ItemGPS",Standard_Equipment};

	};

	// Helicopter crew

	class rhsusf_usmc_marpat_wd_helipilot: rhsusf_infantry_usmc_base
	{
		EdPrev(rhsusf_usmc_marpat_wd_helipilot)
		scope = 2;
		AUTHOR_MACRO
		displayName= "Helicopter Pilot";

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

		cost = 160000;
		camouflage = 2.0;

		Items[] = {"FirstAidKit","rhsusf_ANPVS_15"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15"};

		linkedItems[] = {"rhsusf_hgu56p","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_hgu56p","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};


		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m9","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};

		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};

	};

	class rhsusf_usmc_marpat_wd_helicrew: rhsusf_usmc_marpat_wd_helipilot
	{
		EdPrev(rhsusf_usmc_marpat_wd_helicrew)
		scope = 2;
		AUTHOR_MACRO
		displayName= "Helicopter Crew";

		cost = 80000;

		linkedItems[] = {"rhsusf_hgu56p_mask","rhsusf_spc_light",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_hgu56p_mask","rhsusf_spc_light",Standard_Equipment};

		weapons[] = {"rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m9","Throw","Put"};

		magazines[] =
		{
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc",
			"rhs_mag_m67"
		};

		respawnMagazines[] =
		{
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc",
			"rhs_mag_m67"
		};

	};