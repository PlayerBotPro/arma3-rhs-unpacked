/* MACROS DEFINITION */

#define Macro_scope scope = 2;\
					scopeCurator = 2;\
					author=$STR_RHS_AUTHOR_FULL;

/* CDF TROOPS CLASSNAMES */

// base CDF soldier
class rhsgref_cdf_ngd_base : SoldierGB
{
	EdPrev(rhsgref_cdf_ngd_base)

	dlc = "RHS_GREF";

	scope = 0;
	AUTHOR_MACRO

	side = 2;
	category = "Men";
	faction= "rhsgref_faction_cdf_ng";
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

	modelSides[] = {0,3};
	nakedUniform = "U_BasicBody";
	uniformClass = "rhsgref_uniform_ttsko_forest";

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

	Items[] = {"FirstAidKit"};
	RespawnItems[] = {"FirstAidKit"};

	linkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6sh46",Standard_Equipment};

	weapons[]			= {"rhs_weap_akm",DefaultManWeapons};
	respawnWeapons[]	= {"rhs_weap_akm",DefaultManWeapons};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		rhs_mag_rgd5
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		rhs_mag_rgd5
	};
};

//- Riflemen

// Rifleman (AKM)
class rhsgref_cdf_ngd_rifleman: rhsgref_cdf_ngd_base
{
	EdPrev(rhsgref_cdf_ngd_rifleman)
	Macro_scope

	displayName = "$STR_RHS_INF_RIFLEMAN";

	linkedItems[]			= {"rhsgref_ssh68_ttsko_forest","rhs_6b5_khaki",Standard_Equipment};
	respawnLinkedItems[]	= {"rhsgref_ssh68_ttsko_forest","rhs_6b5_khaki",Standard_Equipment};
};

// Rifleman (Light AT - RPG-75)
class rhsgref_cdf_ngd_rifleman_rpg75: rhsgref_cdf_ngd_base
{
	EdPrev(rhsgref_cdf_ngd_rifleman_rpg75)
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

	weapons[]			= {"rhs_weap_akm", "rhs_weap_rpg75", DefaultManWeapons};
	respawnWeapons[]	= {"rhs_weap_akm", "rhs_weap_rpg75", DefaultManWeapons};
	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		mag_2(rhs_mag_rgd5),
		rhs_rpg75_mag
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		mag_2(rhs_mag_rgd5),
		rhs_rpg75_mag
	};

	linkedItems[]			= {"rhsgref_ssh68_ttsko_forest","rhs_6b5_khaki",Standard_Equipment};
	respawnLinkedItems[]	= {"rhsgref_ssh68_ttsko_forest","rhs_6b5_khaki",Standard_Equipment};

	secondaryAmmoCoef = 0.5;
};

// Rifleman (AK-74)
class rhsgref_cdf_ngd_rifleman_m92: rhsgref_cdf_ngd_base
{
	EdPrev(rhsgref_cdf_ngd_rifleman_m92)
	scope = 1;
	scopeCurator = 1;

	linkedItems[] = {"rhs_ssh68","rhs_6b5_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_ssh68","rhs_6b5_khaki",Standard_Equipment};
};
class rhsgref_cdf_ngd_rifleman_ak74: rhsgref_cdf_ngd_base
{
	Macro_scope
	EdPrev(rhsgref_cdf_ngd_rifleman_ak74)

	displayName = "$STR_RHSGREF_inf_rifleman_ak74";

	linkedItems[] = {"rhs_ssh68","rhs_6b5_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_ssh68","rhs_6b5_khaki",Standard_Equipment};

	weapons[] = {"rhs_weap_ak74",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_ak74",DefaultManWeapons};

	magazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		rhs_mag_rgd5
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_545x39_7N6M_AK),
		rhs_mag_rgd5
	};
};

// Rifleman light
class rhsgref_cdf_ngd_rifleman_lite: rhsgref_cdf_ngd_base
{
	EdPrev(rhsgref_cdf_ngd_rifleman_lite)
	Macro_scope

	displayName = "$STR_RHS_INF_RIFLEMAN_L";

	linkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhs_weap_akms_folded",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_akms_folded",DefaultManWeapons};
};

// Grenadier
class rhsgref_cdf_ngd_grenadier: rhsgref_cdf_ngd_rifleman
{
	EdPrev(rhsgref_cdf_ngd_grenadier)
	Macro_scope

	displayName = "$STR_RHS_INF_GRENADIER";

	linkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhs_weap_akm_gp25",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_akm_gp25",DefaultManWeapons};

	magazines[] =
	{
		mag_7(rhs_30Rnd_762x39mm),
		mag_7(rhs_VOG25)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_762x39mm),
		mag_7(rhs_VOG25)
	};

	secondaryAmmoCoef = 0.5;
};

// Machine Gunner (PKM) / Should be RPK
class rhsgref_cdf_ngd_machinegunner : rhsgref_cdf_ngd_rifleman
{
	EdPrev(rhsgref_cdf_ngd_machinegunner)
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

	linkedItems[] = {"rhsgref_ssh68_ttsko_forest","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_ttsko_forest","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhs_weap_pkm",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_pkm",DefaultManWeapons};

	magazines[] =
	{
		"rhs_100Rnd_762x54mmR"
	};
	respawnMagazines[] =
	{
		"rhs_100Rnd_762x54mmR"
	};

	backpack="rhsgref_cdf_backpack_mg";

	secondaryAmmoCoef = 0.5;
};

//- Leadership

// Officer
class rhsgref_cdf_ngd_officer: rhsgref_cdf_ngd_rifleman
{
	EdPrev(rhsgref_cdf_ngd_officer)
	Macro_scope

	displayName= "$STR_RHS_INF_OFFICER";

	cost = 600000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_vest_pistol_holster",Standard_Equipment};

	weapons[] = {"rhs_weap_makarov_pm","Binocular",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_makarov_pm","Binocular",DefaultManWeapons};

	magazines[] =
	{
		mag_3(rhs_mag_9x18_8_57N181S),
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_nspn_red",
		"rhs_mag_nspn_yellow",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_3(rhs_mag_9x18_8_57N181S),
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_nspn_red",
		"rhs_mag_nspn_yellow",
		"rhs_mag_rdg2_white"
	};
};

// Sergeant
class rhsgref_cdf_ngd_squadleader: rhsgref_cdf_ngd_rifleman
{
	EdPrev(rhsgref_cdf_ngd_squadleader)
	Macro_scope

	displayName= "$STR_RHSUSF_INF_SQUADLEADER";

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6b5_officer_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6b5_officer_khaki",Standard_Equipment};

	weapons[] = {"rhs_weap_akmn_gp25","Binocular",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_akmn_gp25","Binocular",DefaultManWeapons};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		"rhs_VOG25",
		"rhs_GDM40",
		"rhs_GDM40",
		"rhs_VG40OP_white",
		"rhs_VG40OP_white",
		"rhs_mag_nspn_yellow",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		"rhs_VOG25",
		"rhs_GDM40",
		"rhs_GDM40",
		"rhs_VG40OP_white",
		"rhs_VG40OP_white",
		"rhs_mag_nspn_yellow",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
};

//- Specialists

// Grenadier (RPG)
class rhsgref_cdf_ngd_grenadier_rpg: rhsgref_cdf_ngd_rifleman
{
	EdPrev(rhsgref_cdf_ngd_grenadier_rpg)
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

	linkedItems[] = {"rhsgref_ssh68_ttsko_forest","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_ssh68_ttsko_forest","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhs_weap_akms",DefaultManWeapons,"rhs_weap_rpg7"};
	respawnWeapons[] = {"rhs_weap_akms",DefaultManWeapons,"rhs_weap_rpg7"};

	magazines[] =
	{
		mag_7(rhs_30Rnd_762x39mm),
		rhs_rpg7_PG7VL_mag
	};
	respawnMagazines[] =
	{
		mag_7(rhs_30Rnd_762x39mm),
		rhs_rpg7_PG7VL_mag
	};

	backpack="rhs_rpg_vl";
	secondaryAmmoCoef = 0.5;
};

// Medic (AKM)
class rhsgref_cdf_ngd_medic: rhsgref_cdf_ngd_rifleman
{
	EdPrev(rhsgref_cdf_ngd_medic)
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

	linkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6b5_medic_khaki",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_forest","rhs_6b5_medic_khaki",Standard_Equipment};

	weapons[] = {"rhs_weap_akms",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_akms",DefaultManWeapons};

	backpack="rhsgref_cdf_backpack_medic";
};

// Engineer
class rhsgref_cdf_ngd_engineer: rhsgref_cdf_ngd_rifleman
{
	EdPrev(rhsgref_cdf_ngd_engineer)
	Macro_scope

	displayName= "$STR_RHS_INF_ENGINEER";

	cost				= 220000;
	camouflage			= 1.6;
	sensitivity			= 2.5;
	canDeactivateMines	= 1;
	engineer			= 1;
	detectSkill			= 60;
	threat[]			= {1,0.5,0.1};
	icon				= "iconManEngineer";
	picture				= "pictureRepair";

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_medic_s"};
			speechPlural[] = {"veh_infantry_medic_p"};
		};
	};

	linkedItems[] = {"rhs_ssh68","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_ssh68","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhs_weap_akms",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_akms",DefaultManWeapons};

	backpack="rhsgref_cdf_backpack_engineer";
};

class rhsgref_cdf_ngd_crew: rhsgref_cdf_ngd_rifleman
{
	EdPrev(rhsgref_cdf_ngd_crew)
	Macro_scope

	displayName= "$STR_RHS_INF_CREW";

	cost = 90000;
	camouflage = 1.6;
	sensitivity = 2.5;

	linkedItems[] = {"rhs_tsh4","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_pistol_holster",Standard_Equipment};

	weapons[] = {"rhs_weap_makarov_pm",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_makarov_pm",DefaultManWeapons};

	magazines[] =
	{
		mag_3(rhs_mag_9x18_8_57N181S),
		"rhs_mag_nspn_red"
	};
	respawnMagazines[] =
	{
		mag_3(rhs_mag_9x18_8_57N181S),
		"rhs_mag_nspn_red"
	};
};