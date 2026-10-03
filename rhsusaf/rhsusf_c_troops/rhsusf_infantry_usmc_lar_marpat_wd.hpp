	/* -- [ LAR ] -- */

	#define Mac_Inf_USMC_LAR editorSubcategory = "rhs_EdSubcat_lar";vehicleClass = "rhs_vehclass_lar";


	// Scout Team

	class rhsusf_usmc_lar_marpat_wd_rifleman: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_rifleman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_LAR_RF"; // LAV Scout

		Mac_Inf_USMC_LAR

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_light", Standard_Equipment};

		weapons[] = {"rhs_m4_grip_acog_usmc","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_grip_acog_usmc","Binocular","Throw","Put"};
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

	};

	class rhsusf_usmc_lar_marpat_wd_rifleman_light: rhsusf_usmc_lar_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_rifleman_light)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_LAR_RF_L";

		Mac_Inf_USMC_LAR

		camouflage = 1.2;
		cost = 90000;

	 	linkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatwd","rhsusf_spc_light", Standard_Equipment};

		weapons[] = {"rhs_m4_acog_usmc","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_acog_usmc","Binocular","Throw","Put"};

	};

	class rhsusf_usmc_lar_marpat_wd_riflemanat: rhsusf_usmc_lar_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_riflemanat)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_LAR_AT";

		Mac_Inf_USMC_LAR

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

		weapons[] = {"rhs_m4_acog2_usmc","rhs_weap_M136","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_acog2_usmc","rhs_weap_M136","Binocular","Throw","Put"};
		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_m136_mag"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_m136_mag"
		};

		secondaryAmmoCoef = 0.5;
	};

	class rhsusf_usmc_lar_marpat_wd_grenadier_m32: rhsusf_usmc_lar_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_grenadier_m32)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_LAR_GR";

		Mac_Inf_USMC_LAR

		cost = 130000;
		threat[] = {1,0.3,0.1};

   		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_teamleader", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_teamleader", Standard_Equipment};

		weapons[] = {"rhs_weap_m32_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m32_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};
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

	};

	// AR classes

	class rhsusf_usmc_lar_marpat_wd_autorifleman: rhsusf_infantry_usmc_base
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_autorifleman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_LAR_AR";

		Mac_Inf_USMC_LAR

		cost = 125000;
		threat[] = {1,0.1,0.3};

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_iar", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_ess","rhsusf_spc_iar", Standard_Equipment};

		weapons[] = {"rhs_weap_m27iar_bipod_acog_usmc","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m27iar_bipod_acog_usmc","Binocular","Throw","Put"};

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

	// Scout Team Leaders

	class rhsusf_usmc_lar_marpat_wd_squadleader: rhsusf_usmc_lar_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_squadleader)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_LAR_SL";

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_squadleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_squadleader",  Standard_Equipment};

		weapons[] = {"rhs_m4_acog_usmc","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_acog_usmc","Binocular","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green"
		};

	};

	class rhsusf_usmc_lar_marpat_wd_teamleader: rhsusf_infantry_usmc_base
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_teamleader)

		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_LAR_TL";

		Mac_Inf_USMC_LAR

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_teamleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_teamleader",Standard_Equipment};

		weapons[] = {"rhs_m4_m203s_acog_usmc","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_m203s_acog_usmc","Binocular","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_11(rhs_mag_M433_HEDP),
			mag_3(rhs_mag_M583A1_white),
			"rhs_mag_m67"
		};

		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
			mag_11(rhs_mag_M433_HEDP),
			mag_3(rhs_mag_M583A1_white),
			"rhs_mag_m67"
		};

	};

	class rhsusf_usmc_lar_marpat_wd_marksman: rhsusf_usmc_lar_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_marksman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_USMC_LAR_DM";

		Mac_Inf_USMC_LAR

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

		linkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_marksman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatwd_headset","rhsusf_spc_marksman",Standard_Equipment};

		weapons[] = {"rhs_weap_sr25_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_black","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_sr25_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_black","Throw","Put"};

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

	// LAV Crew

	class rhsusf_usmc_lar_marpat_wd_crewman: rhsusf_infantry_usmc_base
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_crewman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_CREW";

		Mac_Inf_USMC_LAR

		engineer = 1;

		cost = 90000;
		camouflage = 1.6;
		sensitivity = 2.5;

		Items[] = {"FirstAidKit","rhsusf_ANPVS_14"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14"};

		linkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};

		weapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_acog_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};

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

	};

	class rhsusf_usmc_lar_marpat_wd_combatcrewman: rhsusf_usmc_lar_marpat_wd_crewman
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_combatcrewman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_CREW_COMBAT";

		Mac_Inf_USMC_LAR

		linkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_spc_crewman","ItemGPS",Standard_Equipment};
	};

	// Dismounted Crew

	class rhsusf_usmc_lar_marpat_wd_machinegunner: rhsusf_usmc_lar_marpat_wd_combatcrewman
	{
		EdPrev(rhsusf_usmc_lar_marpat_wd_machinegunner)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_USMC_LAR_CREW_MG";

		Mac_Inf_USMC_LAR

		icon = "iconManMG";

		backpack="rhsusf_assault_eagleaiii_coy_mg";

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd","rhsusf_spc_mg", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd","rhsusf_spc_mg", Standard_Equipment};

		weapons[] = {"rhs_weap_m240b_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m240b_usmc","rhsusf_weap_m9","Binocular","Throw","Put"};

		magazines[] =
		{
			mag_6(rhsusf_50Rnd_762x51),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc"
		};

		respawnMagazines[] =
		{
			mag_6(rhsusf_50Rnd_762x51),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			mag_2(rhs_mag_m67),
			"rhs_mag_an_m8hc"
		};

	};