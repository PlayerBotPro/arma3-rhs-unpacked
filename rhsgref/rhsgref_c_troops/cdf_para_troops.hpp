/* MACROS DEFINITION */

/* CDF TROOPS CLASSNAMES */

// base CDF soldier
class rhsgref_cdf_para_base : rhsgref_cdf_reg_base
{
	EdPrev(rhsgref_cdf_para_base)

	dlc = "RHS_GREF";

	scope = 0;
	AUTHOR_MACRO

	side = 2;
	category = "Men";
	faction= "rhsgref_faction_cdf_ground";
	editorSubcategory = "rhsgref_EdSubcat_infantry_para";

	// Class from CfgVehicleClasses. Depreciated, should not be used anymore.
	//vehicleClass = "rhs_vehclass_infantry_recon";

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

	model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m10";

	modelSides[] = {0,1,3};
	nakedUniform = "U_BasicBody";
	uniformClass = "rhsgref_uniform_para_ttsko_urban";

	primaryAmmoCoef = 0.4;
	secondaryAmmoCoef = 0.2;
	handgunAmmoCoef = 0.1;

	cost = 100000;

	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"rhsgref\addons\rhsgref_infantry\data_gue\saf_m10.rvmat",
			"rhsgref\addons\rhsgref_infantry\data_gue\saf_m10.rvmat",
			"rhsgref\addons\rhsgref_infantry\data_gue\saf_m10_w1.rvmat",
			A3_Injury
		};
	};

	class UniformInfo
	{
		class SlotsInfo
		{
			class NVG: UniformSlotInfo
			{
				slotType = 602;
			};
			class Scuba: UniformSlotInfo
			{
				slotType = 604;
			};
			class Googles: UniformSlotInfo
			{
				slotType = 603;
			};
			class Headgear: UniformSlotInfo
			{
				slotType = 605;
			};
		};
	};

	Items[] = {"FirstAidKit"};
	RespawnItems[] = {"FirstAidKit"};

	linkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};

	weapons[] = {"rhs_weap_vhsd2","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_vhsd2","Throw","Put"};

	magazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_rgn",
		"rhs_mag_rgn"
	};
	respawnMagazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_rgn",
		"rhs_mag_rgn"
	};
};

class rhsgref_cdf_para_TTsKO_summer: rhsgref_cdf_para_base
{
	EdPrev(rhsgref_cdf_para_TTsKO_summer)
	AUTHOR_MACRO

	scope = 1;

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_gue\M10_Summer_co.paa"
	};
};

class rhsgref_cdf_para_TTsKO_fall: rhsgref_cdf_para_base
{
	EdPrev(rhsgref_cdf_para_TTsKO_fall)
	AUTHOR_MACRO

	scope = 1;

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_gue\M10_fall_co.paa"
	};
};

class rhsgref_cdf_para_TTsKO_dark: rhsgref_cdf_para_base
{
	EdPrev(rhsgref_cdf_para_TTsKO_dark)
	AUTHOR_MACRO

	scope = 1;

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_gue\M10_winter_co.paa"
	};
};

//- Riflemen

// Rifleman
class rhsgref_cdf_para_rifleman: rhsgref_cdf_para_base
{
	EdPrev(rhsgref_cdf_para_rifleman)
	scope = 2;
	scopeCurator = 2;

	AUTHOR_MACRO
	displayName = "$STR_RHS_INF_RIFLEMAN";

	linkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};
};

// Rifleman Light
class rhsgref_cdf_para_rifleman_lite: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_rifleman_lite)
	scope = 2;

	AUTHOR_MACRO
	displayName = "$STR_RHS_INF_RIFLEMAN_L";

	uniformClass = "rhsgref_uniform_para_ttsko_mountain";

	linkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5",Standard_Equipment};

	weapons[] = {"rhs_weap_vhsd2","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_vhsd2","Throw","Put"};
};

// Grenadier
class rhsgref_cdf_para_grenadier: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_grenadier)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_GRENADIERA";

	linkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};

	weapons[] = {"rhs_weap_vhsd2_bg","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_vhsd2_bg","Throw","Put"};

	magazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M433_HEDP",
		"rhs_mag_M433_HEDP"
	};
	respawnMagazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M441_HE",
		"rhs_mag_M433_HEDP",
		"rhs_mag_M433_HEDP"
	};

	secondaryAmmoCoef = 0.5;
};

// Autorifleman
class rhsgref_cdf_para_autorifleman: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_autorifleman)
	scope = 2;

	AUTHOR_MACRO
	displayName= "$STR_RHSUSF_INF_ARIFLEMAN";

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

	linkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};

	weapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L_para","Throw","Put"};

	magazines[] =
	{
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhs_mag_rgn",
		"rhs_mag_rgn"
	};
	respawnMagazines[] =
	{
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhs_mag_rgn",
		"rhs_mag_rgn"
	};

	backpack="rhsgref_cdf_backpack_mg3";
};

// Machine Gunner (M240G)
class rhsgref_cdf_para_machinegunner : rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_machinegunner)
	AUTHOR_MACRO
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

	linkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_rifleman",Standard_Equipment};

	weapons[] = {"rhs_weap_m240G","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m240G","Throw","Put"};

	magazines[] =
	{
		"rhsusf_100Rnd_762x51",
		"rhs_mag_rgn"
	};
	respawnMagazines[] =
	{
		"rhsusf_100Rnd_762x51",
		"rhs_mag_rgn"
	};

	backpack="rhsgref_cdf_backpack_mg2";

	secondaryAmmoCoef = 0.5;
};

// Marksman (M76)
class rhsgref_cdf_para_marksman : rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_marksman)
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

    linkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5_sniper",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_fieldcap_ttsko_mountain","rhs_6b5_sniper",Standard_Equipment};

	weapons[] = {"rhs_weap_m76_pso","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m76_pso","Throw","Put"};

	magazines[] =
	{
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhsgref_10Rnd_792x57_m76",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
};

//- Leadership

// Officer
class rhsgref_cdf_para_officer: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_officer)
	AUTHOR_MACRO
	displayName= "$STR_RHS_INF_OFFICER";

	cost = 600000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_officer",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_officer",Standard_Equipment};

	weapons[] = {"rhsusf_weap_glock17g4","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhsusf_weap_glock17g4","Binocular","Throw","Put"};

	magazines[] =
	{
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhs_mag_nspn_green",
		"rhs_mag_nspn_yellow",
		"rhs_mag_nspn_red",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhs_mag_nspn_green",
		"rhs_mag_nspn_yellow",
		"rhs_mag_nspn_red",
		"rhs_mag_rdg2_white"
	};
};

// Sergeant
class rhsgref_cdf_para_squadleader: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_squadleader)
	AUTHOR_MACRO
	displayName= "$STR_RHSUSF_INF_SQUADLEADER";

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_officer",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_officer",Standard_Equipment};

	weapons[] = {"rhs_weap_vhsd2_eo","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_vhsd2_eo","rhsusf_weap_glock17g4","Binocular","Throw","Put"};

	magazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhs_mag_nspn_green",
		"rhs_mag_nspn_yellow",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_rgn",
		"rhs_mag_rgn"
	};
	respawnMagazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhs_mag_nspn_green",
		"rhs_mag_nspn_yellow",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_rgn",
		"rhs_mag_rgn"
	};
};

//- Specialists

// RPG Grenadier
class rhsgref_cdf_para_grenadier_rpg: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_grenadier_rpg)
	AUTHOR_MACRO
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

	linkedItems[] = {"rhsgref_6b27m_ttsko_forest","rhs_6b5",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_forest","rhs_6b5",Standard_Equipment};

	weapons[] = {"rhs_weap_vhsd2_ct15x","Throw","rhs_weap_rpg7_pgo","Put"};
	respawnWeapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_rpg7_pgo","Throw","Put"};

	backpack="rhs_rpg_at";
	secondaryAmmoCoef = 0.5;

	magazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_rgn",
		"rhs_mag_rgn",
		"rhs_rpg7_PG7VL_mag"
	};
	respawnMagazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_rgn",
		"rhs_mag_rgn",
		"rhs_rpg7_PG7VL_mag"
	};
};

// Specialist AA
class rhsgref_cdf_para_specialist_aa: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_specialist_aa)
	scope = 2;

	AUTHOR_MACRO
	displayName = "$STR_rhsgref_inf_AA";

	uniformClass = "rhsgref_uniform_para_ttsko_urban";

	linkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5",Standard_Equipment};

	weapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_vhsd2_ct15x","rhs_weap_igla","Throw","Put"};

	magazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_9k38_rocket"
	};
	respawnMagazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_9k38_rocket"
	};
};

// Medic
class rhsgref_cdf_para_medic: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_medic)
	AUTHOR_MACRO
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

	linkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_medic",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_6b27m_ttsko_digi","rhs_6b5_medic",Standard_Equipment};

	weapons[] = {"rhs_weap_vhsk2","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_vhsk2","Throw","Put"};

	magazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_nspn_yellow"
	};
	respawnMagazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhs_mag_nspn_yellow"
	};

	backpack="rhsgref_cdf_backpack_medic";
};

// Engineer
class rhsgref_cdf_para_engineer: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_engineer)
	AUTHOR_MACRO
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

	backpack="rhsgref_cdf_backpack_engineer";
};

class rhsgref_cdf_para_crew: rhsgref_cdf_para_rifleman
{
	EdPrev(rhsgref_cdf_para_crew)
	AUTHOR_MACRO
	displayName= "$STR_RHS_INF_CREW";

	cost = 90000;
	camouflage = 1.6;
	sensitivity = 2.5;

	linkedItems[] = {"rhs_tsh4_ess","rhs_6b5",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b5",Standard_Equipment};

	weapons[] = {"rhs_weap_vhsk2","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_vhsk2","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhs_mag_nspn_red",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhs_mag_nspn_red",
		"rhs_mag_rdg2_white"
	};
};