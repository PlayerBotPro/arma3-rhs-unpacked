// DESERT MARPAT
	#define Mac_Inf_USMC_Recon_D faction = "rhs_faction_usmc_d";\
		editorSubcategory = "rhs_EdSubcat_infantry_recon";\
		vehicleClass = "rhs_vehclass_infantry_recon";\
		uniformClass = "rhs_uniform_FROG01_d";\
		AUTHOR_MACRO

	// Riflemen

	class rhsusf_usmc_recon_marpat_d_rifleman: rhsusf_usmc_recon_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_rifleman)
		Mac_Inf_USMC_Recon_D

		linkedItems[] = { "rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light",Standard_Equipment };
		respawnLinkedItems[] = { "rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light",Standard_Equipment };

		weapons[] = {"rhs_m4a1_grip_acog2_usmc_sup_tan","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_grip_acog2_usmc_sup_tan","Binocular","Throw","Put"};
	};

	class rhsusf_usmc_recon_marpat_d_rifleman_at: rhsusf_usmc_recon_marpat_wd_rifleman_at
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_rifleman_at)
		Mac_Inf_USMC_Recon_D
	};

	class rhsusf_usmc_recon_marpat_d_autorifleman: rhsusf_usmc_recon_marpat_wd_autorifleman
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_autorifleman)
		Mac_Inf_USMC_Recon_D

		weapons[] = {"rhs_weap_m27iar_bipod_acog_usmc_sup_tan","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m27iar_bipod_acog_usmc_sup_tan","Binocular","Throw","Put"};
	};

	class rhsusf_usmc_recon_marpat_d_grenadier_m32: rhsusf_usmc_recon_marpat_wd_grenadier_m32
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_grenadier_m32)
		Mac_Inf_USMC_Recon_D

		linkedItems[] = { "rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light",Standard_Equipment };
		respawnLinkedItems[] = { "rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light",Standard_Equipment };
	};

	// Support

	class rhsusf_usmc_recon_marpat_d_machinegunner: rhsusf_usmc_recon_marpat_wd_machinegunner
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_machinegunner)
		Mac_Inf_USMC_Recon_D
	};

	class rhsusf_usmc_recon_marpat_d_machinegunner_m249: rhsusf_usmc_recon_marpat_wd_machinegunner_m249
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_machinegunner_m249)
		Mac_Inf_USMC_Recon_D

		linkedItems[] = { "rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light",Standard_Equipment };
		respawnLinkedItems[] = { "rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light",Standard_Equipment };
	};

	class rhsusf_usmc_recon_marpat_d_marksman: rhsusf_usmc_recon_marpat_wd_marksman
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_marksman)
		Mac_Inf_USMC_Recon_D

		weapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	};

	class rhsusf_usmc_recon_marpat_d_sniper_M107: rhsusf_usmc_recon_marpat_wd_sniper_M107
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_sniper_M107)
		Mac_Inf_USMC_Recon_D

		weapons[] = { "rhs_weap_M107_d_premier","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put" };
		respawnWeapons[] = { "rhs_weap_M107_d_premier","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_black","Throw","Put" };
	};

	// Leaders

	class rhsusf_usmc_recon_marpat_d_officer: rhsusf_usmc_recon_marpat_wd_officer
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_officer)
		Mac_Inf_USMC_Recon_D

		weapons[] = {"rhs_m4a1_grip_acog2_usmc_sup_tan","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_grip_acog2_usmc_sup_tan","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	};

	class rhsusf_usmc_recon_marpat_d_teamleader: rhsusf_usmc_recon_marpat_wd_teamleader
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_teamleader)
		Mac_Inf_USMC_Recon_D

		linkedItems[] = { "rhsusf_mich_bare_norotos_alt_tan_headset","rhsusf_spc_teamleader",Standard_Equipment	};
		respawnLinkedItems[] = { "rhsusf_mich_bare_norotos_alt_tan_headset","rhsusf_spc_teamleader",Standard_Equipment	};
	};

	// Fast classes

	class rhsusf_usmc_recon_marpat_d_rifleman_fast: rhsusf_usmc_recon_marpat_wd_rifleman_fast
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_rifleman_fast)
		Mac_Inf_USMC_Recon_D

		weapons[] = {"rhs_m4a1_grip_acog2_usmc_sup_tan","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_grip_acog2_usmc_sup_tan","Binocular","Throw","Put"};
	};

	class rhsusf_usmc_recon_marpat_d_rifleman_at_fast: rhsusf_usmc_recon_marpat_wd_rifleman_at_fast
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_rifleman_at_fast)
		Mac_Inf_USMC_Recon_D
	};

	class rhsusf_usmc_recon_marpat_d_autorifleman_fast: rhsusf_usmc_recon_marpat_wd_autorifleman_fast
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_autorifleman_fast)
		Mac_Inf_USMC_Recon_D
	};

	class rhsusf_usmc_recon_marpat_d_machinegunner_m249_fast: rhsusf_usmc_recon_marpat_wd_machinegunner_m249_fast
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_machinegunner_m249_fast)
		Mac_Inf_USMC_Recon_D
	};

	class rhsusf_usmc_recon_marpat_d_marksman_fast: rhsusf_usmc_recon_marpat_wd_marksman_fast
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_marksman_fast)
		Mac_Inf_USMC_Recon_D
	};

	class rhsusf_usmc_recon_marpat_d_teamleader_fast: rhsusf_usmc_recon_marpat_wd_teamleader_fast
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_teamleader_fast)
		Mac_Inf_USMC_Recon_D
	};

	// Light classes

	class rhsusf_usmc_recon_marpat_d_rifleman_lite: rhsusf_usmc_recon_marpat_wd_rifleman_lite
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_rifleman_lite)
		Mac_Inf_USMC_Recon_D

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_arid",
			"Head_NATO_camo_semiarid"
		};

		weapons[] = {"rhs_m4a1_grip_acog2_usmc_sup_tan","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_grip_acog2_usmc_sup_tan","Binocular","Throw","Put"};

		linkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_light", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_d_rifleman_at_lite: rhsusf_usmc_recon_marpat_wd_rifleman_at_lite
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_rifleman_at_lite)
		Mac_Inf_USMC_Recon_D

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_arid",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_light", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_d_autorifleman_lite: rhsusf_usmc_recon_marpat_wd_autorifleman_lite
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_autorifleman_lite)
		Mac_Inf_USMC_Recon_D

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_arid",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_iar", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_iar", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_d_machinegunner_m249_lite: rhsusf_usmc_recon_marpat_wd_machinegunner_m249_lite
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_machinegunner_m249_lite)
		Mac_Inf_USMC_Recon_D

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_arid",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_iar", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_iar", Standard_Equipment};
	};

	class rhsusf_usmc_recon_marpat_d_marksman_lite: rhsusf_usmc_recon_marpat_wd_marksman_lite
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_marksman_lite)
		Mac_Inf_USMC_Recon_D

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_arid",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_marksman", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_marksman", Standard_Equipment};

		weapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_m1911a1","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	};

	class rhsusf_usmc_recon_marpat_d_teamleader_lite: rhsusf_usmc_recon_marpat_wd_teamleader_lite
	{
		EdPrev(rhsusf_usmc_recon_marpat_d_teamleader_lite)
		Mac_Inf_USMC_Recon_D

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO_camo_arid",
			"Head_NATO_camo_semiarid"
		};

		linkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_teamleader", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_teamleader", Standard_Equipment};
	};