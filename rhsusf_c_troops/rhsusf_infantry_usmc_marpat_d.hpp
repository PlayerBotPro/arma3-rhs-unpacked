// DESERT MARPAT
	#define Mac_Inf_USMC_D faction = "rhs_faction_usmc_d";\
		editorSubcategory = "rhs_EdSubcat_infantry";\
		vehicleClass = "rhs_vehclass_infantry";\
		uniformClass = "rhs_uniform_FROG01_d";\
		AUTHOR_MACRO

	// Riflemen

	class rhsusf_usmc_marpat_d_rifleman: rhsusf_usmc_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_marpat_d_rifleman)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_rifleman_light: rhsusf_usmc_marpat_wd_rifleman_light
	{
		EdPrev(rhsusf_usmc_marpat_d_rifleman_light)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_light", Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_light", Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_rifleman_m4: rhsusf_usmc_marpat_wd_rifleman_m4
	{
		EdPrev(rhsusf_usmc_marpat_d_rifleman_m4)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_riflemanat: rhsusf_usmc_marpat_wd_riflemanat
	{
		EdPrev(rhsusf_usmc_marpat_d_riflemanat)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_rifleman",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_rifleman_law: rhsusf_usmc_marpat_wd_rifleman_law
	{
		EdPrev(rhsusf_usmc_marpat_d_rifleman_law)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_rifleman",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_rifleman_m590: rhsusf_usmc_marpat_wd_rifleman_m590
	{
		EdPrev(rhsusf_usmc_marpat_d_rifleman_m590)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_grenadier: rhsusf_usmc_marpat_wd_grenadier
	{
		EdPrev(rhsusf_usmc_marpat_d_grenadier)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_teamleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_teamleader",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_grenadier_m32: rhsusf_usmc_marpat_wd_grenadier_m32
	{
		EdPrev(rhsusf_usmc_marpat_d_grenadier_m32)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_teamleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_teamleader",  Standard_Equipment};
	};

	// Support

	class rhsusf_usmc_marpat_d_autorifleman: rhsusf_usmc_marpat_wd_autorifleman
	{
		EdPrev(rhsusf_usmc_marpat_d_autorifleman)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_iar",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_iar",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_autorifleman_m249: rhsusf_usmc_marpat_wd_autorifleman_m249
	{
		EdPrev(rhsusf_usmc_marpat_d_autorifleman_m249)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_mg",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_mg",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_autorifleman_m249_ass: rhsusf_usmc_marpat_wd_autorifleman_m249_ass
	{
		EdPrev(rhsusf_usmc_marpat_d_autorifleman_m249_ass)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_machinegunner: rhsusf_usmc_marpat_wd_machinegunner
	{
		EdPrev(rhsusf_usmc_marpat_d_machinegunner)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_mg",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_mg",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_machinegunner_ass: rhsusf_usmc_marpat_wd_machinegunner_ass
	{
		EdPrev(rhsusf_usmc_marpat_d_machinegunner_ass)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_rifleman",  Standard_Equipment};
	};

	// Leaders

	class rhsusf_usmc_marpat_d_officer: rhsusf_usmc_marpat_wd_officer
	{
		EdPrev(rhsusf_usmc_marpat_d_officer)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhs_8point_marpatd","rhsusf_spc_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_8point_marpatd","rhsusf_spc_squadleader",Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_squadleader: rhsusf_usmc_marpat_wd_squadleader
	{
		EdPrev(rhsusf_usmc_marpat_d_squadleader)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_squadleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_squadleader",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_teamleader: rhsusf_usmc_marpat_wd_teamleader
	{
		EdPrev(rhsusf_usmc_marpat_d_teamleader)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_teamleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_teamleader",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_fso: rhsusf_usmc_marpat_wd_fso
	{
		EdPrev(rhsusf_usmc_marpat_d_fso)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_mich_helmet_marpatd_alt_headset","rhsusf_spc_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_alt_headset","rhsusf_spc_squadleader",Standard_Equipment};

	};

	class rhsusf_usmc_marpat_d_jfo: rhsusf_usmc_marpat_wd_jfo
	{
		EdPrev(rhsusf_usmc_marpat_d_jfo)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_teamleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_teamleader",Standard_Equipment};

		weapons[] = {"rhs_m4a1_acog_usmc","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_acog_usmc","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	};

	// Specialists

	class rhsusf_usmc_marpat_d_engineer: rhsusf_usmc_marpat_wd_engineer
	{
		EdPrev(rhsusf_usmc_marpat_d_engineer)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_explosives: rhsusf_usmc_marpat_wd_explosives
	{
		EdPrev(rhsusf_usmc_marpat_d_explosives)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_uav: rhsusf_usmc_marpat_wd_uav
	{
		EdPrev(rhsusf_usmc_marpat_d_uav)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_smaw: rhsusf_usmc_marpat_wd_smaw
	{
		EdPrev(rhsusf_usmc_marpat_d_smaw)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_javelin: rhsusf_usmc_marpat_wd_javelin
	{
		EdPrev(rhsusf_usmc_marpat_d_javelin)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_javelin_assistant: rhsusf_usmc_marpat_wd_javelin_assistant
	{
		EdPrev(rhsusf_usmc_marpat_d_javelin_assistant)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_stinger: rhsusf_usmc_marpat_wd_stinger
	{
		EdPrev(rhsusf_usmc_marpat_d_stinger)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_marksman: rhsusf_usmc_marpat_wd_marksman
	{
		EdPrev(rhsusf_usmc_marpat_d_marksman)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_mich_helmet_marpatd","rhsusf_spc_marksman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd","rhsusf_spc_marksman",  Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_spotter: rhsusf_usmc_marpat_wd_spotter
	{
		EdPrev(rhsusf_usmc_marpat_d_spotter)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4_grip_acog_usmc","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_grip_acog_usmc","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	};

	class rhsusf_usmc_marpat_d_sniper: rhsusf_usmc_marpat_wd_sniper
	{
		EdPrev(rhsusf_usmc_marpat_d_sniper)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_sniper",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_sniper",Standard_Equipment};

		weapons[] = {"rhs_weap_m40_d_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m40_d_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	};

	class rhsusf_usmc_marpat_d_sniper_m110: rhsusf_usmc_marpat_wd_sniper_m110
	{
		EdPrev(rhsusf_usmc_marpat_d_sniper_m110)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};

		weapons[] = {"rhs_weap_sr25_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_sr25_usmc","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	};

	class rhsusf_usmc_marpat_d_sniper_m107: rhsusf_usmc_marpat_wd_sniper_M107
	{
		EdPrev(rhsusf_usmc_marpat_d_sniper_m107)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd_norotos_arc","rhsusf_spc_marksman",Standard_Equipment};
	};

	// Ground Crew

	class rhsusf_usmc_marpat_d_crewman: rhsusf_usmc_marpat_wd_crewman
	{
		EdPrev(rhsusf_usmc_marpat_d_crewman)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_cvc_helmet","rhsusf_spc_crewman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_helmet","rhsusf_spc_crewman",Standard_Equipment};
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_frog02_d_co.paa"
		};
	};

	class rhsusf_usmc_marpat_d_combatcrewman: rhsusf_usmc_marpat_wd_combatcrewman
	{
		EdPrev(rhsusf_usmc_marpat_d_combatcrewman)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_cvc_helmet","rhsusf_spc_crewman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_helmet","rhsusf_spc_crewman",Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_driver: rhsusf_usmc_marpat_wd_driver
	{
		EdPrev(rhsusf_usmc_marpat_d_driver)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhs_8point_marpatd","rhsusf_spc_light",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_8point_marpatd","rhsusf_spc_light",Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_gunner: rhsusf_usmc_marpat_wd_gunner
	{
		EdPrev(rhsusf_usmc_marpat_d_gunner)
		Mac_Inf_USMC_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_light",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_light",Standard_Equipment};
	};

	class rhsusf_usmc_marpat_d_helipilot: rhsusf_usmc_marpat_wd_helipilot
	{
		EdPrev(rhsusf_usmc_marpat_d_helipilot)
		Mac_Inf_USMC_D
	};

	class rhsusf_usmc_marpat_d_helicrew: rhsusf_usmc_marpat_wd_helicrew
	{
		EdPrev(rhsusf_usmc_marpat_d_helicrew)
		Mac_Inf_USMC_D
	};