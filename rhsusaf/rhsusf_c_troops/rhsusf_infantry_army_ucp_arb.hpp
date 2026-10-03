#define Mac_Inf_Army_UCP_ARB faction = "rhs_faction_usarmy_wd";\
		vehicleClass = "rhs_vehclass_infantry_ucp_arb";\
		editorSubcategory = "rhs_EdSubcat_infantry_ucp_arb";\
		uniformClass = "rhs_uniform_cu_ucp_101st";\
		scope = 2;\
		AUTHOR_MACRO

//- Divisions

class rhsusf_army_ucp_rifleman_82nd: rhsusf_army_ocp_rifleman_82nd
{
	EdPrev(rhsusf_army_ucp_rifleman_82nd)	faction = "rhs_faction_usarmy_wd";
	editorSubcategory = "rhs_EdSubcat_infantry_ucp";
	vehicleClass = "rhs_vehclass_infantry_ucp";
	
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	Items[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};
	AUTHOR_MACRO

	uniformClass = "rhs_uniform_cu_ucp_82nd";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_pockets_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\patches\82AB_ucp_co.paa"
	};

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",Standard_Equipment};
};

class rhsusf_army_ucp_rifleman_101st: rhsusf_army_ocp_rifleman_101st
{
	EdPrev(rhsusf_army_ucp_rifleman_101st)	faction = "rhs_faction_usarmy_wd";
	editorSubcategory = "rhs_EdSubcat_infantry_ucp";
	vehicleClass = "rhs_vehclass_infantry_ucp";
	
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	Items[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ucp"};
	AUTHOR_MACRO

	uniformClass = "rhs_uniform_cu_ucp_101st";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ucp_pockets_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\patches\101AB_ucp_co.paa"
	};

   	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",Standard_Equipment};
};

//- Riflemen

class rhsusf_army_ucp_arb_rifleman: rhsusf_army_ocp_arb_rifleman
{
	EdPrev(rhsusf_army_ucp_arb_rifleman)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",  Standard_Equipment};
};

class rhsusf_army_ucp_arb_riflemanl: rhsusf_army_ocp_arb_riflemanl
{
	EdPrev(rhsusf_army_ucp_arb_riflemanl)

	Mac_Inf_Army_UCP_ARB
	DISABLE_HEADGEAR_MACRO

	linkedItems[] = {"rhs_Booniehat_ucp","rhsusf_spcs_ucp_rifleman_alt",  Standard_Equipment};
	respawnLinkedItems[] = {"rhs_Booniehat_ucp","rhsusf_spcs_ucp_rifleman_alt",  Standard_Equipment};
};

class rhsusf_army_ucp_rifleman_arb_m16: rhsusf_army_ocp_rifleman_arb_m16
{
	EdPrev(rhsusf_army_ucp_rifleman_arb_m16)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",  Standard_Equipment};
};

// breacher
class rhsusf_army_ucp_arb_rifleman_m590: rhsusf_army_ocp_arb_rifleman_m590
{
	EdPrev(rhsusf_army_ucp_arb_rifleman_m590)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman_alt",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman_alt",  Standard_Equipment};
};

class rhsusf_army_ucp_arb_riflemanat: rhsusf_army_ocp_arb_riflemanat
{
	EdPrev(rhsusf_army_ucp_arb_riflemanat)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_teamleader_alt",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_teamleader_alt",  Standard_Equipment};
};

class rhsusf_army_ucp_arb_maaws: rhsusf_army_ocp_arb_maaws
{
	EdPrev(rhsusf_army_ucp_arb_maaws)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman",  Standard_Equipment};

	backpack="rhsusf_assault_eagleaiii_ucp_maaws";
};

class rhsusf_army_ucp_arb_grenadier: rhsusf_army_ocp_arb_grenadier
{
	EdPrev(rhsusf_army_ucp_arb_grenadier)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ess_ucp","rhsusf_spcs_ucp_grenadier",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ess_ucp","rhsusf_spcs_ucp_grenadier",  Standard_Equipment};
};

class rhsusf_army_ucp_arb_autorifleman: rhsusf_army_ocp_arb_autorifleman
{
	EdPrev(rhsusf_army_ucp_arb_autorifleman)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_saw",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_saw",Standard_Equipment};

	backpack="rhsusf_assault_eagleaiii_ucp_ar";
};

class rhsusf_army_ucp_arb_autoriflemana: rhsusf_army_ocp_arb_autoriflemana
{
	EdPrev(rhsusf_army_ucp_arb_autoriflemana)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman_alt",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman_alt",Standard_Equipment};

	backpack="rhsusf_assault_eagleaiii_ucp_ar";
};

class rhsusf_army_ucp_arb_machinegunner: rhsusf_army_ocp_arb_machinegunner
{
	EdPrev(rhsusf_army_ucp_arb_machinegunner)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_machinegunner",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_machinegunner",Standard_Equipment};

	backpack="rhsusf_assault_eagleaiii_ucp_mg";
};

class rhsusf_army_ucp_arb_machinegunnera: rhsusf_army_ocp_arb_machinegunnera
{
	EdPrev(rhsusf_army_ucp_arb_machinegunnera)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman_alt",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_rifleman_alt",Standard_Equipment};

	backpack="rhsusf_assault_eagleaiii_ucp_mg";
};

class rhsusf_army_ucp_arb_marksman: rhsusf_army_ocp_arb_marksman
{
	EdPrev(rhsusf_army_ucp_arb_marksman)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_sniper",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_sniper",Standard_Equipment};
};

//- Leadership

class rhsusf_army_ucp_arb_squadleader: rhsusf_army_ocp_arb_squadleader
{
	EdPrev(rhsusf_army_ucp_arb_squadleader)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_COMMS_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_headset_ess_ucp","rhsusf_spcs_ucp_squadleader",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ess_ucp","rhsusf_spcs_ucp_squadleader",Standard_Equipment};
};

class rhsusf_army_ucp_arb_teamleader: rhsusf_army_ocp_arb_teamleader
{
	EdPrev(rhsusf_army_ucp_arb_teamleader)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_COMMS_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ess_ucp","rhsusf_spcs_ucp_teamleader",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ess_ucp","rhsusf_spcs_ucp_teamleader",Standard_Equipment};
};

//- Specialists

class rhsusf_army_ucp_arb_medic: rhsusf_army_ocp_arb_medic
{
	EdPrev(rhsusf_army_ucp_arb_medic)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_medic",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_spcs_ucp_medic",Standard_Equipment};

	backpack="rhsusf_assault_eagleaiii_ucp_medic";
};

class rhsusf_army_ucp_arb_engineer: rhsusf_army_ocp_arb_engineer
{
	EdPrev(rhsusf_army_ucp_arb_engineer)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_UCP_COMMS_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ESS_ucp","rhsusf_spcs_ucp_crewman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ESS_ucp","rhsusf_spcs_ucp_crewman",Standard_Equipment};

	backpack="rhsusf_assault_eagleaiii_ucp_engineer";
};

class rhsusf_army_ucp_arb_sniper_m107: rhsusf_army_ocp_arb_sniper_m107
{
	EdPrev(rhsusf_army_ucp_arb_sniper_m107)

	Mac_Inf_Army_UCP_ARB
	HEADGEAR_MACRO(ARMY_UCP_SNIPER_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_bare_des","rhsusf_spcs_ucp_sniper",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_bare_des","rhsusf_spcs_ucp_sniper",Standard_Equipment};

	weapons[] = {"rhs_weap_M107_w_leu","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_M107_w_leu","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
};