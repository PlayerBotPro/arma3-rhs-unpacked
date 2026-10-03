	/* -- [ LAR ] -- */

// DESERT MARPAT
	#define Mac_Inf_USMC_LAR_D faction = "rhs_faction_usmc_d";\
		vehicleClass = "rhs_vehclass_lar";\
		editorSubcategory = "rhs_EdSubcat_lar";\
		uniformClass = "rhs_uniform_FROG01_d";\
		AUTHOR_MACRO

	// Riflemen

	class rhsusf_usmc_lar_marpat_d_rifleman: rhsusf_usmc_lar_marpat_wd_rifleman
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_rifleman)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_lar_marpat_d_rifleman_light: rhsusf_usmc_lar_marpat_wd_rifleman_light
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_rifleman_light)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhs_booniehat2_marpatd","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_lar_marpat_d_riflemanat: rhsusf_usmc_lar_marpat_wd_riflemanat
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_riflemanat)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_light",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_light",  Standard_Equipment};
	};

	class rhsusf_usmc_lar_marpat_d_grenadier_m32: rhsusf_usmc_lar_marpat_wd_grenadier_m32
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_grenadier_m32)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_teamleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_teamleader",  Standard_Equipment};
	};

	class rhsusf_usmc_lar_marpat_d_autorifleman: rhsusf_usmc_lar_marpat_wd_autorifleman
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_autorifleman)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_iar",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_iar",  Standard_Equipment};
	};

	class rhsusf_usmc_lar_marpat_d_squadleader: rhsusf_usmc_lar_marpat_wd_squadleader
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_squadleader)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_squadleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_squadleader",  Standard_Equipment};
	};

	class rhsusf_usmc_lar_marpat_d_teamleader: rhsusf_usmc_lar_marpat_wd_teamleader
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_teamleader)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_teamleader",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_headset","rhsusf_spc_teamleader",  Standard_Equipment};
	};

	class rhsusf_usmc_lar_marpat_d_marksman: rhsusf_usmc_lar_marpat_wd_marksman
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_marksman)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_marksman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_lwh_helmet_marpatd_ess","rhsusf_spc_marksman",  Standard_Equipment};
	};
	class rhsusf_usmc_lar_marpat_d_crewman: rhsusf_usmc_lar_marpat_wd_crewman
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_crewman)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_cvc_helmet","rhsusf_spc_crewman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_helmet","rhsusf_spc_crewman",  Standard_Equipment};
	};
	class rhsusf_usmc_lar_marpat_d_combatcrewman: rhsusf_usmc_lar_marpat_wd_combatcrewman
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_combatcrewman)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_cvc_helmet","rhsusf_spc_crewman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_helmet","rhsusf_spc_crewman",  Standard_Equipment};
	};
	class rhsusf_usmc_lar_marpat_d_machinegunner: rhsusf_usmc_lar_marpat_wd_machinegunner
	{
		EdPrev(rhsusf_usmc_lar_marpat_d_machinegunner)
		Mac_Inf_USMC_LAR_D

		linkedItems[] = {"rhsusf_mich_helmet_marpatd","rhsusf_spc_mg",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd","rhsusf_spc_mg",  Standard_Equipment};
	};