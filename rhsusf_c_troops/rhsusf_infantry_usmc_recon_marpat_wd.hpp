	#define Mac_Inf_USMC_WD faction = "rhs_faction_usmc_wd";

	class rhsusf_infantry_usmc_recon_base : rhsusf_infantry_usmc_base
	{

		faction = "rhs_faction_usmc_wd";
		editorSubcategory = "rhs_EdSubcat_infantry_recon";
		vehicleClass = "rhs_vehclass_infantry_recon";\
		uniformClass = "rhs_uniform_FROG01_wd";

		camouflage = 0.6;	// how dificult to spot - bigger - better spotable
		sensitivity = 3.5;	// sensor sensitivity
		detectSkill = 30;

		AUTHOR_MACRO


		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"rhsusf_g_usmc"
		};
		faceType = "Man_A3";
		genericNames="NATOMen";

		Items[] = {"FirstAidKit","rhsusf_ANPVS_14"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14"};

		linkedItems[] = { "rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light",Standard_Equipment };
		respawnLinkedItems[] = 	{ "rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light",Standard_Equipment };

		weapons[] =
		{ "rhs_m4a1_grip_acog2_usmc_sup","rhsusf_weap_m1911a1","Binocular","Throw","Put" };
		respawnWeapons[] =
		{ "rhs_m4a1_grip_acog2_usmc_sup","rhsusf_weap_m1911a1","Binocular","Throw","Put" };

		magazines[] =
		{
			mag_6(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};
		respawnMagazines[] =
		{
			mag_6(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};

		class EventHandlers;
	};


	// Riflemen

	class rhsusf_usmc_recon_marpat_wd_rifleman: rhsusf_infantry_usmc_recon_base
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_rifleman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN";

		class EventHandlers;
	};

	class rhsusf_usmc_recon_marpat_wd_rifleman_at: rhsusf_infantry_usmc_recon_base
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_rifleman_at)
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

		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_light", Standard_Equipment};

		weapons[] = { "rhs_m4a1_acog2_usmc_sup","rhsusf_weap_m1911a1","rhs_weap_M136","Throw","Put"	};
		respawnWeapons[] = { "rhs_m4a1_acog2_usmc_sup","rhsusf_weap_m1911a1","rhs_weap_M136","Throw","Put" };

		magazines[] =
		{
			mag_6(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red),
			"rhs_m136_mag"
		};
		respawnMagazines[] =
		{
			mag_6(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red),
			"rhs_m136_mag"
		};

		secondaryAmmoCoef = 0.5;

		class EventHandlers;
	};

	class rhsusf_usmc_recon_marpat_wd_grenadier_m32: rhsusf_usmc_recon_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_grenadier_m32)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_GRENADIER_M32";

		cost = 130000;
		threat[] = {1,0.3,0.1};

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_teamleader", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_teamleader", Standard_Equipment};

		weapons[] =	{ "rhs_weap_m32","rhsusf_weap_m1911a1","Throw","Put" };

		respawnWeapons[] = { "rhs_weap_m32","rhsusf_weap_m1911a1","Throw","Put" };

		magazines[] =
		{
			mag_5(rhsusf_mag_6Rnd_M433_HEDP),
			"rhsusf_mag_6Rnd_M714_white",
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)

		};

		respawnMagazines[] =
		{
			mag_5(rhsusf_mag_6Rnd_M433_HEDP),
			"rhsusf_mag_6Rnd_M714_white",
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};

		backpack="rhsusf_falconii_gr_m32";
	};

	class rhsusf_usmc_recon_marpat_wd_autorifleman: rhsusf_infantry_usmc_recon_base
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_autorifleman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_ARIFLEMAN_M27";

		linkedItems[] =
		{
			"rhsusf_mich_bare_norotos_tan",
			"rhsusf_spc_iar",
			Standard_Equipment
		};
		respawnLinkedItems[] =
		{
			"rhsusf_mich_bare_norotos_tan",
			"rhsusf_spc_iar",
			Standard_Equipment
		};

		weapons[] =
		{
			"rhs_weap_m27iar_bipod_acog_usmc_sup","rhsusf_weap_m1911a1","Binocular","Throw","Put"
		};
		respawnWeapons[] =
		{
			"rhs_weap_m27iar_bipod_acog_usmc_sup","rhsusf_weap_m1911a1","Binocular","Throw","Put"
		};

		backpack="rhsusf_falconii_recon";

		class EventHandlers;
	};

	class rhsusf_usmc_recon_marpat_wd_machinegunner: rhsusf_infantry_usmc_recon_base
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_machinegunner)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_MG";

		icon = "iconManMG";

		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_mg", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_mg", Standard_Equipment};

		weapons[] = { "rhs_weap_m240b_usmc","rhsusf_weap_m1911a1","Throw","Put"	};
		respawnWeapons[] = { "rhs_weap_m240b_usmc","rhsusf_weap_m1911a1","Throw","Put" };

		magazines[] =
		{
			mag_4(rhsusf_50Rnd_762x51),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};
		respawnMagazines[] =
		{
			mag_4(rhsusf_50Rnd_762x51),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};

		backpack="rhsusf_pack_slackman_m240";
	};

	class rhsusf_usmc_recon_marpat_wd_machinegunner_m249: rhsusf_usmc_recon_marpat_wd_machinegunner
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_machinegunner_m249)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_ARIFLEMAN";

		linkedItems[] = { "rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light",Standard_Equipment };
		respawnLinkedItems[] = 	{ "rhsusf_mich_helmet_marpatwd_norotos","rhsusf_spc_light",Standard_Equipment };

		weapons[] = { "rhs_weap_m249_para_usmc","rhsusf_weap_m1911a1","Throw","Put"	};
		respawnWeapons[] = { "rhs_weap_m249_para_usmc","rhsusf_weap_m1911a1","Throw","Put" };

		magazines[] =
		{
			mag_3(rhsusf_100Rnd_556x45_M855_soft_pouch),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};
		respawnMagazines[] =
		{
			mag_3(rhsusf_100Rnd_556x45_M855_soft_pouch),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};

		backpack="rhsusf_pack_slackman_m249";
	};

	class rhsusf_usmc_recon_marpat_wd_marksman: rhsusf_infantry_usmc_recon_base
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_marksman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_MARKSMAN";

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

		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_marksman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_marksman",Standard_Equipment};

		weapons[] =
		{
			"rhs_weap_sr25_sup_marsoc","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put"
		};
		respawnWeapons[] =
		{
			"rhs_weap_sr25_sup_marsoc","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put"
		};

		magazines[] =
		{
			mag_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			mag_2(Chemlight_green),
			mag_2(Chemlight_red),
			"rhs_mag_mk84"
		};
		respawnMagazines[] =
		{
			mag_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			mag_2(Chemlight_green),
			mag_2(Chemlight_red),
			"rhs_mag_mk84"
		};

	};

	class rhsusf_usmc_recon_marpat_wd_sniper_M107: rhsusf_usmc_recon_marpat_wd_marksman
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_sniper_M107)
		scope = 2;
		AUTHOR_MACRO
		displayName= $STR_RHSUSF_INF_SNIPER_M107;


		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_marksman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_tan","rhsusf_spc_marksman",Standard_Equipment};

		weapons[] = { "rhs_weap_M107_w_premier","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put" };
		respawnWeapons[] = { "rhs_weap_M107_w_premier","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put" };

		magazines[] =
		{
			mag_5(rhsusf_mag_10Rnd_STD_50BMG_M33),
			mag_2(rhsusf_mag_10Rnd_STD_50BMG_mk211),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};
		respawnMagazines[] =
		{
			mag_5(rhsusf_mag_10Rnd_STD_50BMG_M33),
			mag_2(rhsusf_mag_10Rnd_STD_50BMG_mk211),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};
	};

	// Leaders

	class rhsusf_usmc_recon_marpat_wd_officer: rhsusf_infantry_usmc_recon_base
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_officer)
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

		linkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_tan_headset","rhsusf_spc_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_tan_headset","rhsusf_spc_squadleader",Standard_Equipment};

		weapons[] =
		{
			"rhs_m4a1_acog2_usmc_sup","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put"
		};
		respawnWeapons[] =
		{
			"rhs_m4a1_acog2_usmc_sup","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put"
		};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};

	};

	class rhsusf_usmc_recon_marpat_wd_teamleader: rhsusf_infantry_usmc_recon_base
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_teamleader)

		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_TEAMLEADER";

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = { "rhsusf_mich_bare_norotos_alt_headset","rhsusf_spc_teamleader",Standard_Equipment	};
		respawnLinkedItems[] = { "rhsusf_mich_bare_norotos_alt_headset","rhsusf_spc_teamleader",Standard_Equipment	};

		weapons[] =
		{
			"rhs_m4a1_m203_acog3_usmc_sup","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put"
		};
		respawnWeapons[] =
		{
			"rhs_m4a1_m203_acog3_usmc_sup","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put"
		};

		magazines[] =
		{
			mag_6(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};
		respawnMagazines[] =
		{
			mag_6(rhs_mag_30Rnd_556x45_M855_Stanag),
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			mag_4(rhsusf_mag_7x45acp_MHP),
			mag_2(rhs_mag_mk3a2),
			"rhs_mag_mk84",
			mag_2(Chemlight_green),
			mag_2(Chemlight_red)
		};

		backpack="rhsusf_falconii_recon";
	};

// Fast units

	class rhsusf_usmc_recon_marpat_wd_rifleman_fast: rhsusf_usmc_recon_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_rifleman_fast)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_F";

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_light", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_wd_rifleman_at_fast: rhsusf_usmc_recon_marpat_wd_rifleman_at
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_rifleman_at_fast)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_AT_F";

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_light", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_wd_autorifleman_fast: rhsusf_usmc_recon_marpat_wd_autorifleman
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_autorifleman_fast)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_ARIFLEMAN_M27_F";

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_iar", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_iar", Standard_Equipment};

	};

	class rhsusf_usmc_recon_marpat_wd_machinegunner_m249_fast: rhsusf_usmc_recon_marpat_wd_machinegunner_m249
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_machinegunner_m249_fast)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_ARIFLEMAN_F";

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_iar", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_iar", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_wd_marksman_fast: rhsusf_usmc_recon_marpat_wd_marksman
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_marksman_fast)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_MARKSMAN_F";

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_marksman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_marksman", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_wd_teamleader_fast: rhsusf_usmc_recon_marpat_wd_teamleader
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_teamleader_fast)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_TEAMLEADER_F";

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_teamleader", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_teamleader", Standard_Equipment};
	};


// Light units

	class rhsusf_usmc_recon_marpat_wd_rifleman_lite: rhsusf_usmc_recon_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_rifleman_lite)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_L";

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_lush",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_light", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_wd_rifleman_at_lite: rhsusf_usmc_recon_marpat_wd_rifleman_at
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_rifleman_at_lite)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_AT_L";

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_lush",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_light", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_wd_autorifleman_lite: rhsusf_usmc_recon_marpat_wd_autorifleman
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_autorifleman_lite)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_ARIFLEMAN_M27_L";

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_lush",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_iar", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_iar", Standard_Equipment};

	};

	class rhsusf_usmc_recon_marpat_wd_machinegunner_m249_lite: rhsusf_usmc_recon_marpat_wd_machinegunner_m249
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_machinegunner_m249_lite)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_ARIFLEMAN_L";

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_lush",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_iar", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_iar", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_wd_marksman_lite: rhsusf_usmc_recon_marpat_wd_marksman
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_marksman_lite)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_MARKSMAN_L";

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_lush",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_marksman", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_marksman", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_wd_teamleader_lite: rhsusf_usmc_recon_marpat_wd_teamleader
	{
		EdPrev(rhsusf_usmc_recon_marpat_wd_teamleader_lite)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_TEAMLEADER_L";

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_lush",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_teamleader", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_teamleader", Standard_Equipment};
	};