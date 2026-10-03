#define Mac_Inf_Army_OCP_ARB vehicleClass = "rhs_vehclass_infantry_ocp_arb";\
		editorSubcategory = "rhs_EdSubcat_infantry_ocp_arb";\
		uniformClass = "rhs_uniform_cu_ocp_101st";\
		scope = 2;\
		AUTHOR_MACRO

//- Uniforms

class rhsusf_infantry_army_82nd: rhsusf_infantry_army_base
{

	EdPrev(rhsusf_infantry_army_82nd)
	AUTHOR_MACRO

	vehicleClass = "rhs_vehclass_infantry_ocp_arb";
	editorSubcategory = "rhs_EdSubcat_infantry_ocp_arb";

	model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_82nd.p3d";

	uniformClass = "rhs_uniform_cu_ocp_82nd";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\patches\82AB_ocp_co.paa"
	};
};

class rhsusf_infantry_army_101st: rhsusf_infantry_army_base
{

	EdPrev(rhsusf_infantry_army_101st)
	AUTHOR_MACRO

	vehicleClass = "rhs_vehclass_infantry_ocp_arb";
	editorSubcategory = "rhs_EdSubcat_infantry_ocp_arb";

	model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_101st.p3d";

	uniformClass = "rhs_uniform_cu_ocp_101st";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa",
		"rhsusf\addons\rhsusf_infantry\data\patches\101AB_ocp_co.paa"
	};
};

//- Divisions

class rhsusf_army_ocp_rifleman_82nd: rhsusf_infantry_army_82nd
{

	EdPrev(rhsusf_army_ocp_rifleman_82nd)
	displayName= "82nd Rifleman";

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman",Standard_Equipment};
};

class rhsusf_army_ocp_rifleman_101st: rhsusf_infantry_army_101st
{

	EdPrev(rhsusf_army_ocp_rifleman_101st)
	displayName= "101st Rifleman";

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman_alt",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman_alt",Standard_Equipment};
};

//- Riflemen

class rhsusf_army_ocp_arb_rifleman: rhsusf_army_ocp_rifleman
{

	EdPrev(rhsusf_army_ocp_arb_rifleman)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman",  Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_acog","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_acog","Throw","Put"};

	magazines[] =
	{
		mag_9(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_an_m8hc),
		mag_2(rhs_mag_m67)
	};
	respawnMagazines[] =
	{
		mag_9(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_an_m8hc),
		mag_2(rhs_mag_m67)
	};

};

class rhsusf_army_ocp_arb_riflemanl: rhsusf_army_ocp_arb_rifleman
{

	EdPrev(rhsusf_army_ocp_arb_riflemanl)
	displayName= "$STR_RHSUSF_INF_RIFLEMAN_L";

	Mac_Inf_Army_OCP_ARB
	DISABLE_HEADGEAR_MACRO

	linkedItems[] = {"rhs_Booniehat_ocp","rhsusf_spcs_ocp_rifleman",  Standard_Equipment};
	respawnLinkedItems[] = {"rhs_Booniehat_ocp","rhsusf_spcs_ocp_rifleman",  Standard_Equipment};

	weapons[] = {"rhs_m4a1_acog","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_acog","Throw","Put"};
};

class rhsusf_army_ocp_rifleman_arb_m16: rhsusf_army_ocp_rifleman_m16
{

	EdPrev(rhsusf_army_ocp_rifleman_arb_m16)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman_alt",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman_alt",  Standard_Equipment};
};

// breacher
class rhsusf_army_ocp_arb_rifleman_m590: rhsusf_army_ocp_rifleman_m590
{

	EdPrev(rhsusf_army_ocp_arb_rifleman_m590)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman",  Standard_Equipment};
};

class rhsusf_army_ocp_arb_riflemanat: rhsusf_army_ocp_riflemanat
{

	EdPrev(rhsusf_army_ocp_arb_riflemanat)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman_alt",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_rifleman_alt",  Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_M136","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_M136","Throw","Put"};

	magazines[] =
	{
		mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67),
		"rhs_m136_mag",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67),
		"rhs_m136_mag",
		"rhs_mag_an_m8hc"
	};
	secondaryAmmoCoef = 0.5;
};

class rhsusf_army_ocp_arb_maaws: rhsusf_army_ocp_maaws
{

	EdPrev(rhsusf_army_ocp_arb_maaws)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_teamleader_alt",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_teamleader_alt",Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_maaws_optic","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_compm4","rhs_weap_maaws_optic","Throw","Put"};

	magazines[] =
	{
		mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67),
		"rhs_mag_maaws_HEAT",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67),
		"rhs_mag_maaws_HEAT",
		"rhs_mag_an_m8hc"
	};
};

class rhsusf_army_ocp_arb_grenadier: rhsusf_army_ocp_grenadier
{

	EdPrev(rhsusf_army_ocp_arb_grenadier)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_spcs_ocp_grenadier",  Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_spcs_ocp_grenadier",  Standard_Equipment};

	weapons[] = {"rhs_m4a1_m320_acog","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_m320_acog","Throw","Put"};

	magazines[] =
	{
		mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_6(rhs_mag_M433_HEDP)
	};
	respawnMagazines[] =
	{
		mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_6(rhs_mag_M433_HEDP)
	};

};

class rhsusf_army_ocp_arb_autorifleman: rhsusf_army_ocp_autorifleman
{

	EdPrev(rhsusf_army_ocp_arb_autorifleman)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_saw",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_saw",Standard_Equipment};

	weapons[] = {"rhs_weap_m249_light_S_elcan","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_light_S_elcan","Throw","Put"};

	magazines[] =
	{
		mag_3(rhsusf_100Rnd_556x45_soft_pouch),
		"rhs_mag_m67"
	};
	respawnMagazines[] =
	{
		mag_3(rhsusf_100Rnd_556x45_soft_pouch),
		"rhs_mag_m67"
	};
};

class rhsusf_army_ocp_arb_autoriflemana: rhsusf_army_ocp_autoriflemana
{

	EdPrev(rhsusf_army_ocp_arb_autoriflemana)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_saw",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_saw",Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_compm4","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_compm4","Throw","Put"};
};

class rhsusf_army_ocp_arb_machinegunner: rhsusf_army_ocp_machinegunner
{

	EdPrev(rhsusf_army_ocp_arb_machinegunner)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_machinegunner",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_machinegunner",Standard_Equipment};
};

class rhsusf_army_ocp_arb_machinegunnera: rhsusf_army_ocp_machinegunnera
{

	EdPrev(rhsusf_army_ocp_arb_machinegunnera)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_teamleader",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_teamleader",Standard_Equipment};

	weapons[] = {"rhs_m4a1_compm4","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_compm4","Throw","Put"};
};

class rhsusf_army_ocp_arb_marksman: rhsusf_army_ocp_marksman
{

	EdPrev(rhsusf_army_ocp_arb_marksman)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_sniper",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_sniper",Standard_Equipment};

	weapons[] = {"rhs_weap_m14ebrri_leu","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m14ebrri_leu","Throw","Put"};

	magazines[] =
	{
		mag_6(rhsusf_20Rnd_762x51_m118_special_Mag),
		mag_2(rhsusf_20Rnd_762x51_m62_Mag),
		mag_2(rhs_mag_m67),
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		mag_6(rhsusf_20Rnd_762x51_m118_special_Mag),
		mag_2(rhsusf_20Rnd_762x51_m62_Mag),
		mag_2(rhs_mag_m67),
		"rhs_mag_an_m8hc"
	};
};

//- Leadership

class rhsusf_army_ocp_arb_squadleader: rhsusf_army_ocp_squadleader
{

	EdPrev(rhsusf_army_ocp_arb_squadleader)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_COMMS_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_headset_ess_ocp","rhsusf_spcs_ocp_squadleader",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ess_ocp","rhsusf_spcs_ocp_squadleader",Standard_Equipment};

	weapons[] = {"rhs_m4a1_acog3","rhsusf_bino_m24","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_acog3","rhsusf_bino_m24","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67),
		"rhs_mag_m18_yellow",
		"rhs_mag_m18_purple",
		"rhs_mag_mk84",
		mag_2(Chemlight_red),
		"Chemlight_green"
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67),
		"rhs_mag_m18_yellow",
		"rhs_mag_m18_purple",
		"rhs_mag_mk84",
		mag_2(Chemlight_red),
		"Chemlight_green"
	};
};

class rhsusf_army_ocp_arb_teamleader: rhsusf_army_ocp_teamleader
{

	EdPrev(rhsusf_army_ocp_arb_teamleader)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_COMMS_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_spcs_ocp_teamleader",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_spcs_ocp_teamleader",Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_acog2","rhsusf_bino_m24","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_acog2","rhsusf_bino_m24","Throw","Put"};

	magazines[] =
	{
		mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67),
		"rhs_mag_m18_yellow",
		"rhs_mag_m18_purple",
		mag_2(Chemlight_red),
		"Chemlight_green"
	};
	respawnMagazines[] =
	{
		mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67),
		"rhs_mag_m18_yellow",
		"rhs_mag_m18_purple",
		mag_2(Chemlight_red),
		"Chemlight_green"
	};
};

//- Specialists

class rhsusf_army_ocp_arb_medic: rhsusf_army_ocp_medic
{

	EdPrev(rhsusf_army_ocp_arb_medic)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_medic",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_spcs_ocp_medic",Standard_Equipment};

	weapons[] = {"rhs_m4a1_compm4","rhsusf_weap_m9","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_compm4","rhsusf_weap_m9","Throw","Put"};
};

class rhsusf_army_ocp_arb_engineer: rhsusf_army_ocp_engineer
{

	EdPrev(rhsusf_army_ocp_arb_engineer)

	Mac_Inf_Army_OCP_ARB
	HEADGEAR_MACRO(ARMY_AIRBORNE_OCP_COMMS_HELMET_POOL)

	linkedItems[] = {"rhsusf_ach_helmet_ESS_ocp","rhsusf_spcs_ocp_crewman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ESS_ocp","rhsusf_spcs_ocp_crewman",Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_acog","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_acog","Throw","Put"};
};

class rhsusf_army_ocp_arb_sniper_m107: rhsusf_army_ocp_sniper_m107
{

	EdPrev(rhsusf_army_ocp_arb_sniper_m107)

	Mac_Inf_Army_OCP_ARB

	linkedItems[] = {"rhsusf_ach_bare_des","rhsusf_spcs_ocp_sniper",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_bare_des","rhsusf_spcs_ocp_sniper",Standard_Equipment};

	weapons[] = {"rhs_weap_M107_d_leu","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_M107_d_leu","rhsusf_weap_m9","rhsusf_bino_lerca_1200_tan","Throw","Put"};
};