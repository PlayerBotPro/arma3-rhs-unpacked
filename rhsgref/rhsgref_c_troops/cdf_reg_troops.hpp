/* MACROS DEFINITION */

#define Macro_scope scope = 2;\
					scopeCurator = 2;\
					author=$STR_RHS_AUTHOR_FULL;

/* CDF TROOPS CLASSNAMES */

// base CDF soldier
class rhsgref_cdf_reg_base : SoldierGB
{
	EdPrev(rhsgref_cdf_reg_base)

	dlc = "RHS_GREF";

	scope = 0;
	AUTHOR_MACRO

	side = 2;
	category = "Men";
	faction= "rhsgref_faction_cdf_ground";
	vehicleClass = "rhs_vehclass_infantry";
	editorSubcategory = "rhsgref_EdSubcat_infantry";

	identityTypes[]=
	{
		"LanguageCZ",
		"Head_Euro"
	};
	genericNames="RussianMen";

	portrait = "";
	picture = "";
	icon = "iconMan";

	accuracy = 2.3;
	sensitivity = 3;  // ?
	threat[] = {1,0.1,0.1};
	camouflage = 1.4; // ?
	minFireTime = 7; // ?
	canCarryBackPack = 1;

	model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";

	modelSides[] = {0,1,3};
	nakedUniform = "U_BasicBody";
	uniformClass = "rhsgref_uniform_ttsko_mountain";

	primaryAmmoCoef = 0.4;
	secondaryAmmoCoef = 0.2;
	handgunAmmoCoef = 0.1;

	cost = 100000;

	class Wounds
	{
		tex[] = {};
		mat[] =
		{
				"rhsafrf\addons\rhs_infantry\data\flora.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat",

				"rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat",

				A3_Injury
		};
	};
	selectionbodywound = "body_injury";
	selectionlarmwound = "l_arm_injury";
	selectionlarmwound1 = "l_arm_injury";
	selectionlarmwound2 = "hl";
	selectionllegwound = "l_leg_injury";
	selectionllegwound1 = "l_leg_injury";
	selectionllegwound2 = "hl";
	selectionrarmwound = "r_arm_injury";
	selectionrarmwound1 = "r_arm_injury";
	selectionrarmwound2 = "hl";
	selectionRLegWound = "r_leg_injury";
	selectionRLegWound1 = "r_leg_injury";
	selectionrlegwound2 = "hl";

	hiddenSelections[] = {"camo1","camo2","camob","insignia"};

	Items[] = {"FirstAidKit"};
	RespawnItems[] = {"FirstAidKit"};

	linkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_ttsko",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_ttsko",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_aks74",DefaultManWeapons};

	magazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		mag_2(rhs_mag_rgd5)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		mag_2(rhs_mag_rgd5)
	};
};

class rhsgref_cdf_reg_TTsKO_forest: rhsgref_cdf_reg_base
{
	EdPrev(rhsgref_cdf_reg_TTsKO_forest)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_ttsko_forest";

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_cdf\uniform01_cdf_ttskosummer_co.paa"
	};
};

class rhsgref_cdf_reg_TTsKO_mountain: rhsgref_cdf_reg_base
{
	EdPrev(rhsgref_cdf_reg_TTsKO_mountain)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_ttsko_mountain";

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_cdf\uniform01_cdf_ttskofall_co.paa"
	};
};

class rhsgref_cdf_reg_TTsKO_urban: rhsgref_cdf_reg_base
{
	EdPrev(rhsgref_cdf_reg_TTsKO_urban)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_ttsko_urban";

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_cdf\uniform01_cdf_ttskodark_co.paa"
	};
};

class rhsgref_cdf_reg_vsr: rhsgref_cdf_reg_base
{
	EdPrev(rhsgref_cdf_reg_vsr)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_vsr";

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_cdf\uniform01_cdf_vsr_co.paa"
	};
};

//- Riflemen

// Rifleman (AK74 wood)
class rhsgref_cdf_reg_rifleman: rhsgref_cdf_reg_base
{
	EdPrev(rhsgref_cdf_reg_rifleman)
	Macro_scope

	displayName = "$STR_RHS_INF_RIFLEMAN";
	
	weapons[]			= {"rhs_weap_ak74",DefaultManWeapons};
	respawnWeapons[]	= {"rhs_weap_ak74",DefaultManWeapons};

	linkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_ttsko",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_ttsko",Standard_Equipment};
};

// Rifleman (Light AT - RPG-75)
class rhsgref_cdf_reg_rifleman_rpg75: rhsgref_cdf_reg_base
{
	EdPrev(rhsgref_cdf_reg_rifleman_rpg75)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_RIFLEMAN_RPG75";
	
	class SpeechVariants
	{
		class Default
		{
			speechSingular[]	= {"veh_infantry_AT_s"};
			speechPlural[]		= {"veh_infantry_AT_p"};
		};
	};
	textSingular	= "$STR_A3_nameSound_veh_infantry_AT_s";
	textPlural		= "$STR_A3_nameSound_veh_infantry_AT_p";
	nameSound		= "veh_infantry_AT_s";
	
	cost		= 180000;
	threat[]	= {1,0.7,0.3};
	icon		= "iconManAT";

	weapons[]			= {"rhs_weap_ak74", "rhs_weap_rpg75", DefaultManWeapons};
	respawnWeapons[]	= {"rhs_weap_ak74", "rhs_weap_rpg75", DefaultManWeapons};
	magazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		mag_2(rhs_mag_rgd5),
		rhs_rpg75_mag
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		mag_2(rhs_mag_rgd5),
		rhs_rpg75_mag
	};

	linkedItems[]			= {"rhsgref_6b27m_ttsko_forest","rhs_6b5_rifleman_ttsko",Standard_Equipment};
	respawnLinkedItems[]	= {"rhsgref_6b27m_ttsko_forest","rhs_6b5_rifleman_ttsko",Standard_Equipment};

	secondaryAmmoCoef = 0.5;
};

// Rifleman (Plum AKS-74)
class rhsgref_cdf_reg_rifleman_m70: rhsgref_cdf_reg_base
{
	EdPrev(rhsgref_cdf_reg_rifleman_m70)
	scope = 1;
	scopeCurator = 1;

	displayName = $STR_RHSGREF_INF_RIFLEMAN_AKS74;

	linkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_khaki",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74_2",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_aks74_2",DefaultManWeapons};
};
class rhsgref_cdf_reg_rifleman_aks74: rhsgref_cdf_reg_rifleman_m70
{
	EdPrev(rhsgref_cdf_reg_rifleman_aks74)
	Macro_scope
};

class rhsgref_cdf_reg_rifleman_akm : rhsgref_cdf_reg_rifleman_m70
{
	EdPrev(rhsgref_cdf_reg_rifleman_akm)
	Macro_scope
	
	displayName = $STR_RHS_INF_RIFLEMAN_AKM;

	magazines[] =
	{
		mag_7(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_mag_rgd5)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_mag_rgd5)
	};
	
	weapons[] = {"rhs_weap_akm",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_akm",DefaultManWeapons};
};

// Rifleman Light(AK74 wood)
class rhsgref_cdf_reg_rifleman_lite: rhsgref_cdf_reg_base
{
	EdPrev(rhsgref_cdf_reg_rifleman_lite)
	Macro_scope

	displayName = "$STR_RHS_INF_RIFLEMAN_L";

	linkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5_ttsko",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5_ttsko",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74u",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_aks74u",DefaultManWeapons};
};

// Grenadier (AK74 wood)
class rhsgref_cdf_reg_grenadier: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_grenadier)
	Macro_scope

	displayName = "$STR_RHS_INF_GRENADIER";

	linkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_khaki",Standard_Equipment};

	weapons[] = {"rhs_weap_ak74_gp25",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_ak74_gp25",DefaultManWeapons};

	magazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		mag_10(rhs_VOG25)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		mag_10(rhs_VOG25)
	};

	secondaryAmmoCoef = 0.5;
};

// Automatic Rifleman (RPK)

class rhsgref_cdf_reg_arifleman_rpk : rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_arifleman_rpk)
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

	linkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_ttsko",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_ttsko",Standard_Equipment};

	weapons[] = {"rhs_weap_rpk74m",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_rpk74m",DefaultManWeapons};

	magazines[] =
	{
		mag_7(rhs_45Rnd_545X39_7N6M_AK),
		mag_2(rhs_mag_rgd5)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_45Rnd_545X39_7N6M_AK),
		mag_2(rhs_mag_rgd5)
	};
};

// Machine Gunner (PKM)
class rhsgref_cdf_reg_machinegunner : rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_machinegunner)
	Macro_scope

	displayName= "$STR_RHS_INF_MACHINEGUNNER";

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

	linkedItems[] = {"rhsgref_6b27m_ttsko_forest","rhs_6b5_rifleman_ttsko",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_forest","rhs_6b5_rifleman_ttsko",Standard_Equipment};

	weapons[] = {"rhs_weap_pkm",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_pkm",DefaultManWeapons};

	magazines[] =
	{
		"rhs_100Rnd_762x54mmR",
		"rhs_mag_rgd5"
	};
	respawnMagazines[] =
	{
		"rhs_100Rnd_762x54mmR",
		"rhs_mag_rgd5"
	};

	backpack="rhsgref_cdf_backpack_mg";

	secondaryAmmoCoef = 0.5;
};

// Marksman (SVD wood)
class rhsgref_cdf_reg_marksman : rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_marksman)
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

    linkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5_sniper_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5_sniper_khaki",Standard_Equipment};

	weapons[] = {"rhs_weap_m76_pso",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_m76_pso",DefaultManWeapons};

	magazines[] =
	{
		mag_8(rhsgref_10Rnd_792x57_m76),
		mag_2(rhs_mag_rdg2_white)
	};
	respawnMagazines[] =
	{
		mag_8(rhsgref_10Rnd_792x57_m76),
		mag_2(rhs_mag_rdg2_white)
	};
};

//- Leadership

// General
class rhsgref_cdf_reg_general: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_general)
	Macro_scope

	displayName= "General";

	cost = 1000000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_vest_pistol_holster",Standard_Equipment};

	weapons[] = {"rhsusf_weap_glock17g4","Binocular",DefaultManWeapons};
	respawnWeapons[] = {"rhsusf_weap_glock17g4","Binocular",DefaultManWeapons};

	magazines[] =
	{
		mag_5(rhsusf_mag_17Rnd_9x19_FMJ),
		rhs_mag_rdg2_white
	};
	respawnMagazines[] =
	{
		mag_5(rhsusf_mag_17Rnd_9x19_FMJ),
		rhs_mag_rdg2_white
	};
};

// Officer
class rhsgref_cdf_reg_officer: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_officer)
	Macro_scope

	displayName= "$STR_RHS_INF_OFFICER";

	cost = 600000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5_officer_ttsko",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5_officer_ttsko",Standard_Equipment};

	weapons[] = {"rhsusf_weap_glock17g4","Binocular",DefaultManWeapons};
	respawnWeapons[] = {"rhsusf_weap_glock17g4","Binocular",DefaultManWeapons};

	magazines[] =
	{
		mag_5(rhsusf_mag_17Rnd_9x19_FMJ),
		rhs_mag_nspn_red,
		rhs_mag_nspn_green,
		rhs_mag_nspn_yellow,
		rhs_mag_rdg2_white
	};
	respawnMagazines[] =
	{
		mag_5(rhsusf_mag_17Rnd_9x19_FMJ),
		rhs_mag_nspn_red,
		rhs_mag_nspn_green,
		rhs_mag_nspn_yellow,
		rhs_mag_rdg2_white
	};
};

// Sergeant (AKS)
class rhsgref_cdf_reg_squadleader: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_squadleader)
	Macro_scope

	displayName= "$STR_RHSUSF_INF_SQUADLEADER";

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_officer_ttsko",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_officer_ttsko",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74n","rhs_weap_rsp30_green","Binocular",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_aks74n","rhs_weap_rsp30_green","Binocular",DefaultManWeapons};

	magazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		rhs_mag_nspn_green,
		rhs_mag_nspn_yellow,
		mag_2(rhs_mag_rdg2_white),
		mag_2(rhs_mag_rgd5)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		rhs_mag_nspn_green,
		rhs_mag_nspn_yellow,
		mag_2(rhs_mag_rdg2_white),
		mag_2(rhs_mag_rgd5)
	};
};

//- Specialists

// Grenadier (AK74 wood + RPG7)
class rhsgref_cdf_reg_grenadier_rpg: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_grenadier_rpg)
	Macro_scope

	displayName = "$STR_rhsgref_inf_AT";

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

	linkedItems[] = {"rhsgref_6b27m_ttsko_forest","rhs_6b5_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_forest","rhs_6b5_khaki",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74","Throw","rhs_weap_rpg7_pgo","Put"};
	respawnWeapons[] = {"rhs_weap_aks74","rhs_weap_rpg7_pgo",DefaultManWeapons};

	backpack="rhs_rpg_at";
	secondaryAmmoCoef = 0.5;
	
	magazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		mag_2(rhs_mag_rgd5),
		rhs_rpg7_PG7VL_mag
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		mag_2(rhs_mag_rgd5),
		rhs_rpg7_PG7VL_mag
	};
};

// Specialist AA
class rhsgref_cdf_reg_specialist_aa: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_specialist_aa)
	Macro_scope

	displayName = "$STR_rhsgref_inf_AA";

	linkedItems[] = {"rhsgref_6b27m_ttsko_forest","rhs_6b5_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_forest","rhs_6b5_khaki",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74","rhs_weap_igla",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_aks74","rhs_weap_igla",DefaultManWeapons};

	magazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		"rhs_mag_9k38_rocket"
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		"rhs_mag_9k38_rocket"
	};
};

// Medic (AKSU)
class rhsgref_cdf_reg_medic: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_medic)
	Macro_scope

	displayName= "$STR_RHS_INF_MEDIC";

	attendant =1;
	icon="iconManMedic";
	picture="pictureHeal";

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

	linkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_medic_ttsko",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_medic_ttsko",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74u",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_aks74u",DefaultManWeapons};

	magazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		rhs_mag_nspn_yellow
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		rhs_mag_nspn_yellow
	};

	backpack="rhsgref_cdf_backpack_medic";
};

// Engineer
class rhsgref_cdf_reg_engineer: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_engineer)
	Macro_scope

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

	linkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_mountain","rhs_6b5_rifleman_khaki",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74u",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_aks74u",DefaultManWeapons};

	backpack="rhsgref_cdf_backpack_engineer";
};

class rhsgref_cdf_reg_crew: rhsgref_cdf_reg_rifleman
{
	EdPrev(rhsgref_cdf_reg_crew)
	Macro_scope

	displayName= "$STR_RHS_INF_CREW";

	cost = 90000;
	camouflage = 1.6;
	sensitivity = 2.5;

	linkedItems[] = {"rhs_tsh4_ess","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_vest_pistol_holster",Standard_Equipment};

	weapons[] = {"rhsusf_weap_glock17g4",DefaultManWeapons};
	respawnWeapons[] = {"rhsusf_weap_glock17g4",DefaultManWeapons};

	magazines[] =
	{
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		"rhs_mag_nspn_red"
	};
	respawnMagazines[] =
	{
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		"rhs_mag_nspn_red"
	};
};
class rhsgref_cdf_reg_crew_commander: rhsgref_cdf_reg_crew
{
	AUTHOR_MACRO
	EdPrev(rhsgref_cdf_reg_crew_commander)
	displayName= "$STR_RHS_INF_CREW_COMMANDER";

	cost = 450000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};

	weapons[] = {"rhsusf_weap_glock17g4","Binocular",DefaultManWeapons};
	respawnWeapons[] = {"rhsusf_weap_glock17g4","Binocular",DefaultManWeapons};

	magazines[] =
	{
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_2(rhs_mag_rdg2_white),
		"rhs_mag_nspn_red"
	};
	respawnMagazines[] =
	{
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_2(rhs_mag_rdg2_white),
		"rhs_mag_nspn_red"
	};
};

class rhsgref_cdf_air_pilot: rhsgref_cdf_reg_crew
{
	EdPrev(rhsgref_cdf_air_pilot)
	Macro_scope

	displayName= "$STR_RHS_PILOT_NAME";

	faction= "rhsgref_faction_cdf_air";

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhs_zsh7a_mike","rhs_vest_commander",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_zsh7a_mike","rhs_vest_commander",Standard_Equipment};
};