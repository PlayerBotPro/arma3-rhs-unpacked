//UCP classes

	#define Mac_Inf_Army_UCP faction = "rhs_faction_usarmy_wd";\
		editorSubcategory = "rhs_EdSubcat_infantry_ucp";\
		vehicleClass = "rhs_vehclass_infantry_ucp";\
		uniformClass = "rhs_uniform_cu_ucp";\
		Items[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};\
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};\
		AUTHOR_MACRO

	#define Mac_Inf_Army_UCP_AH64 faction = "rhs_faction_usarmy_wd";\
		editorSubcategory = "rhs_EdSubcat_infantry_ucp";\
		vehicleClass = "rhs_vehclass_infantry_ucp";\
		uniformClass = "rhs_uniform_cu_ucp";\
		Items[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};\
		RespawnItems[] = {"FirstAidKit","rhsusf_patrolcap_ucp"};\
		AUTHOR_MACRO

	#define Mac_Inf_Army_ACU_UCP faction = "rhs_faction_usarmy_wd";\
		editorSubcategory = "rhs_EdSubcat_infantry_ucp";\
		vehicleClass = "rhs_vehclass_infantry_ucp";\
		uniformClass = "rhs_uniform_acu_ucp";\
		Items[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};\
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};\
		AUTHOR_MACRO

// Divisions

class rhsusf_army_ucp_rifleman_1stcav : rhsusf_army_ocp_rifleman_1stcav
{
	faction = "rhs_faction_usarmy_wd";
	editorSubcategory = "rhs_EdSubcat_infantry_ucp";
	EdPrev(rhsusf_army_ucp_rifleman_1stcav)
	vehicleClass = "rhs_vehclass_infantry_ucp";

	Items[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};
	AUTHOR_MACRO

	uniformClass = "rhs_uniform_cu_ucp_1stcav";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_pockets_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\patches\1CAV_ucp_co.paa"
	};

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
};

class rhsusf_army_ucp_rifleman_10th : rhsusf_army_ocp_rifleman_10th
{
	faction = "rhs_faction_usarmy_wd";
	editorSubcategory = "rhs_EdSubcat_infantry_ucp";
	EdPrev(rhsusf_army_ucp_rifleman_10th)
	vehicleClass = "rhs_vehclass_infantry_ucp";

	Items[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};
	AUTHOR_MACRO

	uniformClass = "rhs_uniform_cu_ucp_10th";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_pockets_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\patches\10MT_ucp_co.paa"
	};

   	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
};

//- Riflemen

	class rhsusf_army_ucp_rifleman: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ucp_rifleman)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_rifleman_m4: rhsusf_army_ocp_rifleman_m4
	{
		EdPrev(rhsusf_army_ucp_rifleman_m4)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_rifleman_m16: rhsusf_army_ocp_rifleman_m16
	{
		EdPrev(rhsusf_army_ucp_rifleman_m16)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};
	class rhsusf_army_ucp_rifleman_m590: rhsusf_army_ocp_rifleman_m590
	{
		EdPrev(rhsusf_army_ucp_rifleman_m590)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};
	class rhsusf_army_ucp_riflemanl: rhsusf_army_ocp_riflemanl
	{
		EdPrev(rhsusf_army_ucp_riflemanl)
		Mac_Inf_Army_ACU_UCP
		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_Booniehat_ucp","rhsusf_iotv_ucp_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhs_Booniehat_ucp","rhsusf_iotv_ucp_rifleman",  Standard_Equipment};
	};
	class rhsusf_army_ucp_riflemanat: rhsusf_army_ocp_riflemanat
	{
		EdPrev(rhsusf_army_ucp_riflemanat)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_grenadier: rhsusf_army_ocp_grenadier
	{
		EdPrev(rhsusf_army_ucp_grenadier)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ess_ucp","rhsusf_iotv_ucp_grenadier",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ess_ucp","rhsusf_iotv_ucp_grenadier",Standard_Equipment};
	};

	class rhsusf_army_ucp_autorifleman: rhsusf_army_ocp_autorifleman
	{
		EdPrev(rhsusf_army_ucp_autorifleman)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)
		
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_saw",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_saw",Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_ucp_ar";
	};
	class rhsusf_army_ucp_autoriflemana: rhsusf_army_ocp_autoriflemana
	{
		EdPrev(rhsusf_army_ucp_autoriflemana)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)
		
		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_ucp_ar";
	};
	class rhsusf_army_ucp_machinegunner: rhsusf_army_ocp_machinegunner
	{
		EdPrev(rhsusf_army_ucp_machinegunner)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)
		
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_saw",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_saw",Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_ucp_mg";
	};
	class rhsusf_army_ucp_machinegunnera: rhsusf_army_ocp_machinegunnera
	{
		EdPrev(rhsusf_army_ucp_machinegunnera)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)
		
		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_ucp_mg";
	};

	class rhsusf_army_ucp_marksman: rhsusf_army_ocp_marksman
	{
		EdPrev(rhsusf_army_ucp_marksman)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	// Leaders

	class rhsusf_army_ucp_officer: rhsusf_army_ocp_officer
	{
		EdPrev(rhsusf_army_ucp_officer)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_headset_ess_ucp","rhsusf_iotv_ucp_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ess_ucp","rhsusf_iotv_ucp_squadleader",Standard_Equipment};
	};

	class rhsusf_army_ucp_squadleader: rhsusf_army_ocp_squadleader
	{
		EdPrev(rhsusf_army_ucp_squadleader)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_iotv_ucp_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_iotv_ucp_squadleader",Standard_Equipment};
	};
	class rhsusf_army_ucp_teamleader:  rhsusf_army_ocp_teamleader
	{
		EdPrev(rhsusf_army_ucp_teamleader)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ess_ucp","rhsusf_iotv_ucp_teamleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ess_ucp","rhsusf_iotv_ucp_teamleader",Standard_Equipment};
	};

	class rhsusf_army_ucp_jfo: rhsusf_army_ocp_jfo
	{
		EdPrev(rhsusf_army_ucp_jfo)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp_norotos","rhsusf_iotv_ucp_grenadier",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp_norotos","rhsusf_iotv_ucp_grenadier",Standard_Equipment};
	};

	class rhsusf_army_ucp_fso: rhsusf_army_ocp_fso
	{
		EdPrev(rhsusf_army_ucp_fso)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_iotv_ucp_grenadier",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_iotv_ucp_grenadier",Standard_Equipment};
	};

	// Support

	class rhsusf_army_ucp_javelin: rhsusf_army_ocp_javelin
	{
		EdPrev(rhsusf_army_ucp_javelin)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};


	class rhsusf_army_ucp_javelin_assistant: rhsusf_army_ocp_javelin_assistant
	{
		EdPrev(rhsusf_army_ucp_javelin_assistant)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		backpack="rhsusf_assault_eagleaiii_ucp_at";

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_maaws: rhsusf_army_ocp_maaws
	{
		EdPrev(rhsusf_army_ucp_maaws)
		Mac_Inf_Army_ACU_UCP

		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)
		
		backpack="rhsusf_assault_eagleaiii_ucp_maaws";

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_aa: rhsusf_army_ocp_aa
	{
		EdPrev(rhsusf_army_ucp_aa)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};

	};

	class rhsusf_army_ucp_uav: rhsusf_army_ocp_uav
	{
		EdPrev(rhsusf_army_ucp_uav)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};

	};

	class rhsusf_army_ucp_medic: rhsusf_army_ocp_medic
	{
		EdPrev(rhsusf_army_ucp_medic)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_medic",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_medic",Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_ucp_medic";
	};

	class rhsusf_army_ucp_engineer: rhsusf_army_ocp_engineer
	{
		EdPrev(rhsusf_army_ucp_engineer)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ESS_ucp","rhsusf_iotv_ucp_repair",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ESS_ucp","rhsusf_iotv_ucp_repair",Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_ucp_engineer";
	};

	class rhsusf_army_ucp_explosives: rhsusf_army_ocp_explosives
	{
		EdPrev(rhsusf_army_ucp_explosives)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ESS_ucp","rhsusf_iotv_ucp_repair",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ESS_ucp","rhsusf_iotv_ucp_repair",Standard_Equipment};

		backpack="rhsusf_assault_eagleaiii_ucp_demo";
	};


	class rhsusf_army_ucp_sniper: rhsusf_army_ocp_sniper
	{
		EdPrev(rhsusf_army_ucp_sniper)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_SNIPER_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_bare_wood","rhsusf_iotv_ucp_rifleman","rhsusf_acc_M2010S",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_bare_wood","rhsusf_iotv_ucp_rifleman","rhsusf_acc_M2010S",Standard_Equipment};

		weapons[] = {"rhs_weap_XM2010_wd_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_XM2010_wd_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
	};

	class rhsusf_army_ucp_sniper_m24sws: rhsusf_army_ocp_sniper_m24sws
	{
		EdPrev(rhsusf_army_ucp_sniper_m24sws)
		Mac_Inf_Army_ACU_UCP

		HEADGEAR_MACRO(ARMY_UCP_SNIPER_HELMET_POOL)
		
		linkedItems[] = {"rhsusf_ach_bare_wood","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_bare_wood","rhsusf_iotv_ucp_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_m24sws_wd_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m24sws_wd_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
	};

	class rhsusf_army_ucp_sniper_m107: rhsusf_army_ocp_sniper_m107
	{
		EdPrev(rhsusf_army_ucp_sniper_m107)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_SNIPER_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_bare_wood","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_bare_wood","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	// Ground Crew

	class rhsusf_army_ucp_crewman: rhsusf_army_ocp_crewman
	{
		EdPrev(rhsusf_army_ucp_crewman)
		faction = "rhs_faction_usarmy_wd";
		editorSubcategory = "rhs_EdSubcat_infantry_ucp";
		uniformClass = "rhs_uniform_acu_ucp";
		
		HEADGEAR_MACRO(ARMY_UCP_CREW_HELMET_POOL)

		Items[] = {"FirstAidKit","rhsusf_ANPVS_14"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14"};

		linkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_iotv_ucp",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_iotv_ucp",Standard_Equipment};

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_pockets_co.paa"
		};

	};
	class rhsusf_army_ucp_combatcrewman: rhsusf_army_ocp_combatcrewman
	{
		EdPrev(rhsusf_army_ucp_combatcrewman)

		faction = "rhs_faction_usarmy_wd";
		editorSubcategory = "rhs_EdSubcat_infantry_ucp";
		uniformClass = "rhs_uniform_acu_ucp";
		
		HEADGEAR_MACRO(ARMY_UCP_CREW_HELMET_POOL)

		Items[] = {"FirstAidKit","rhsusf_ANPVS_14"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14"};

	   	linkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_iotv_ucp",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_iotv_ucp",Standard_Equipment};
	};

	class rhsusf_army_ucp_driver: rhsusf_army_ocp_driver
	{
		EdPrev(rhsusf_army_ucp_driver)
		Mac_Inf_Army_ACU_UCP
		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhsusf_patrolcap_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_patrolcap_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_driver_armored: rhsusf_army_ocp_driver_armored
	{
		EdPrev(rhsusf_army_ucp_driver_armored)
		Mac_Inf_Army_ACU_UCP

		HEADGEAR_MACRO(ARMY_UCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	// Helicopter Crew

	class rhsusf_army_ucp_helipilot: rhsusf_army_ocp_helipilot
	{
		EdPrev(rhsusf_army_ucp_helipilot)

		faction = "rhs_faction_usarmy_wd";
		editorSubcategory = "rhs_EdSubcat_infantry_ucp";
		uniformClass = "rhs_uniform_cu_ucp";
		
		HEADGEAR_MACRO(ARMY_UCP_HELI_PILOT_HELMET_POOL)

		Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_patrolcap_ucp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_patrolcap_ucp"};

		linkedItems[] = {"rhsusf_hgu56p","rhsusf_iotv_ucp",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_hgu56p","rhsusf_iotv_ucp",Standard_Equipment};
	};

	class rhsusf_army_ucp_ah64_pilot: rhsusf_army_ocp_ah64_pilot
	{
		EdPrev(rhsusf_army_ucp_ah64_pilot)
		Mac_Inf_Army_UCP_AH64
		
		DISABLE_HEADGEAR_MACRO

		linkedItems[]			= {"rhsusf_ihadss","rhsusf_iotv_ucp",Standard_Equipment};
		respawnLinkedItems[]	= {"rhsusf_ihadss","rhsusf_iotv_ucp",Standard_Equipment};
	};

	class rhsusf_army_ucp_helicrew: rhsusf_army_ocp_helicrew
	{
		EdPrev(rhsusf_army_ucp_helicrew)
		Mac_Inf_Army_ACU_UCP
		
		HEADGEAR_MACRO(ARMY_UCP_HELI_CREW_HELMET_POOL)

		linkedItems[] = {"rhsusf_hgu56p_mask","rhsusf_iotv_ucp",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_hgu56p_mask","rhsusf_iotv_ucp",Standard_Equipment};
	};