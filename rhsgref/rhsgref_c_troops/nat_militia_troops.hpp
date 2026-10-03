/* MACROS DEFINITION */

#define AUTHOR_MACRO author=$STR_RHS_AUTHOR_FULL;
#define Standard_Equipment ItemMap,ItemCompass,ItemWatch,ItemRadio
#define Macro_scope scope = 2;\
					scopeCurator = 2;\
					author=$STR_RHS_AUTHOR_FULL;

/* NAPA MILITIA TROOPS CLASSNAMES */

// base nationalist militiaman
class rhsgref_nat_base : SoldierGB
{
	EdPrev(rhsgref_nat_base)

	scope = 0;
	AUTHOR_MACRO

	side = 2;
	category = "Men";
	faction= "rhsgref_faction_nationalist";
	vehicleClass = "rhsgref_vehclass_infantry_militia";
	editorSubcategory = "rhsgref_EdSubcat_infantry_militia";

	identityTypes[]=
	{
		"LanguageCZ",
		"Head_Euro",
		"rhs_scarf",
		"G_CIVIL_male"
	};
	genericNames="RussianMen";

	portrait = "";
	picture = "";
	icon = "iconMan";

	accuracy = 1.0;
	sensitivity = 3;  // ?
	threat[] = {1,0.1,0.1};
	camouflage = 1.0; // ?
	minFireTime = 7; // ?
	canCarryBackPack = 1;

	model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";

	modelSides[] = {0,3};
	nakedUniform = "U_BasicBody";
	uniformClass = "rhsgref_uniform_woodland";

	primaryAmmoCoef = 0.4;
	secondaryAmmoCoef = 0.2;
	handgunAmmoCoef = 0.1;

	cost = 100000;

	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"rhsgref\addons\rhsgref_infantry\data_gue\saf_gear_m93.rvmat",
			"rhsgref\addons\rhsgref_infantry\data_gue\saf_gear_m93_w1.rvmat",
			"rhsgref\addons\rhsgref_infantry\data_gue\saf_gear_m93_w1.rvmat",

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
	selectionrlegwound = "r_leg_injury";
	selectionrlegwound1 = "r_leg_injury";
	selectionrlegwound2 = "hl";



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

	linkedItems[] = {"V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_pm63","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pm63","Throw","Put"};

	magazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm),
		mag_2(rhs_mag_f1)
	};
};

/* Classes for uniforms */

class rhsgref_nat_flecktarn : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_flecktarn)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_flecktarn";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\flecktarn_co.paa"};
};

class rhsgref_nat_flecktarn_full : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_flecktarn_full)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_flecktarn_full";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\fleck_full_co.paa"};
};

class rhsgref_nat_tigerstripe : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_tigerstripe)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_tigerstripe";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\tigerstripe_co.paa"};
};

class rhsgref_nat_woodland : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_woodland)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_woodland";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_us_woodland_co.paa"};
};

class rhsgref_nat_woodland_olive : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_woodland_olive)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_woodland_olive";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_us_woodland_olive_co.paa"};
};

class rhsgref_nat_ERDL : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_ERDL)
	AUTHOR_MACRO

	scope = 0;

	uniformClass = "rhsgref_uniform_ERDL";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_tanoa\m93_erdl_co.paa"};
};

class rhsgref_nat_olive : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_olive)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_olive";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_olive_co.paa"};
};

class rhsgref_nat_altis_lizard : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_altis_lizard)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_altis_lizard";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_altis_lizard_co.paa"};
};

class rhsgref_nat_altis_lizard_olive : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_altis_lizard_olive)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_altis_lizard_olive";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_altis_lizard_olive_co.paa"};
};

class rhsgref_nat_dpm : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_dpm)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_dpm";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_dpm_co.paa"};
};

class rhsgref_nat_dpm_olive : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_dpm_olive)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_dpm_olive";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_dpm_olive_co.paa"};
};

class rhsgref_nat_3color_desert : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_3color_desert)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_3color_desert";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_3color_desert_co.paa"};
};

class rhsgref_nat_gorka_1_flecktarn : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_flecktarn)
	//(rhsgref_nat_gorka_flecktarn)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_gorka_1_f";

	model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_infantry\data_gue\gorka_1_fleck_co.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"rhsafrf\addons\rhs_infantry2\data\gorka_1.rvmat",
			"rhsafrf\addons\rhs_infantry2\data\gorkaR_w1.rvmat",
			"rhsafrf\addons\rhs_infantry2\data\gorkaR_w2.rvmat",

			A3_Injury
		};
	};
};

/* Troops Classes */

//- Riflemen

// Militiaman
class rhsgref_nat_rifleman: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_rifleman)
	Macro_scope

	displayName = $STR_RHSGREF_INF_rifleman_pm63;

	linkedItems[] = {"H_Booniehat_oli","G_Bandanna_khk","V_TacVest_camo",Standard_Equipment};
	respawnLinkedItems[] = {"H_Booniehat_oli","G_Bandanna_khk","V_TacVest_camo",Standard_Equipment};

	weapons[] = {"rhs_weap_pm63","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pm63","Throw","Put"};
};

// Militiaman (AKMS)
class rhsgref_nat_rifleman_akms: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_rifleman_akms)
	Macro_scope

	displayName = "$STR_RHS_INF_RIFLEMAN_AKMS";

	uniformClass = "rhsgref_uniform_woodland_olive";

	linkedItems[] = {"rhs_beanie_green","G_Bandanna_oli","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_beanie_green","G_Bandanna_oli","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_akms","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
};

// Militiaman (AKS74)
class rhsgref_nat_rifleman_aks74: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_rifleman_aks74)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_RIFLEMAN_AKS74";

	uniformClass = "rhsgref_uniform_woodland_olive";

	linkedItems[] = {"rhs_beanie_green","G_Bandanna_oli","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_beanie_green","G_Bandanna_oli","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_545x39_7N6_AK),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_545x39_7N6_AK),
		mag_2(rhs_mag_f1)
	};
};

// Militiaman (Kar98K)
class rhsgref_nat_militiaman_kar98k: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_militiaman_kar98k)
	Macro_scope

	displayName = "$STR_rhsgref_inf_militiaman_kar98k";

	uniformClass = "rhsgref_uniform_woodland";

	linkedItems[] = {"H_Booniehat_oli","G_Bandanna_khk","V_BandollierB_oli",Standard_Equipment};
	respawnLinkedItems[] = {"H_Booniehat_oli","G_Bandanna_khk","V_BandollierB_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_kar98k","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_kar98k","Throw","Put"};

	magazines[] =
	{
		mag_15(rhsgref_5Rnd_792x57_kar98k),
		"rhs_mag_f1"
	};
	respawnMagazines[] =
	{
		mag_15(rhsgref_5Rnd_792x57_kar98k),
		"rhs_mag_f1"
	};
};

// Militiaman

class rhsgref_nat_rifleman_m92: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_rifleman_m92)
	scope = 1;
	scopeCurator = 1;

	AUTHOR_MACRO
	displayName = "$STR_RHSGREF_inf_rifleman_mp44";

	linkedItems[] = {"H_Booniehat_oli","G_Bandanna_tan","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"H_Booniehat_oli","G_Bandanna_tan","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_MP44","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_MP44","Throw","Put"};

	magazines[] =
	{
		mag_6(rhsgref_30Rnd_792x33_SmE_StG),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_6(rhsgref_30Rnd_792x33_SmE_StG),
		mag_2(rhs_mag_f1)
	};
};
class rhsgref_nat_rifleman_mp44: rhsgref_nat_rifleman_m92
{
	EdPrev(rhsgref_nat_rifleman_mp44)
	Macro_scope
};

class rhsgref_nat_rifleman_vz58: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_rifleman_vz58)
	Macro_scope


	displayName = "$STR_RHSGREF_inf_rifleman_savz58";

	uniformClass = "rhsgref_uniform_dpm_olive";

	linkedItems[] = {"rhs_beanie_green","G_Bandanna_oli","V_TacVest_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_beanie_green","G_Bandanna_oli","V_TacVest_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_savz58p","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58p","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_Savz58),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_Savz58),
		mag_2(rhs_mag_f1)
	};
};

// Militiaman (AKM & GP-25)
class rhsgref_nat_grenadier: rhsgref_nat_rifleman
{
	EdPrev(rhsgref_nat_grenadier)
	Macro_scope

	displayName = "$STR_RHS_INF_GRENADIER";

	linkedItems[] = {"rhs_balaclava1_olive","V_TacVest_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_balaclava1_olive","V_TacVest_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		mag_6(rhs_VOG25)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		mag_6(rhs_VOG25)
	};
};

// Militiaman (RPK)
/*)
class rhsgref_nat_autorifleman: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_autorifleman)
	scope = 2;

	AUTHOR_MACRO
	displayName = "$STR_RHS_INF_ARIFLEMAN";

	uniformClass = "rhs_nat_uniform_4";

	linkedItems[] = {"rhs_balaclava1_olive","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_balaclava1_olive","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};

	magazines[] =
	{
		"rhs_100Rnd_762x54mmR"
	};
	respawnMagazines[] =
	{
		"rhs_100Rnd_762x54mmR"
	};

	backpack="rhsgref_nat_backpack_mg";
};
*/

//- Leadership

// Leader
class rhsgref_nat_warlord: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_warlord)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_WARLORD";
	icon="iconManOfficer";

	uniformClass = "rhsgref_uniform_flecktarn";

	linkedItems[] = {"H_Hat_brown","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[] = {"H_Hat_brown","rhs_vest_pistol_holster",Standard_Equipment};

	weapons[] = {"rhs_weap_tt33","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_tt33","Binocular","Throw","Put"};

	magazines[] =
	{
		mag_4(rhs_mag_762x25_8),
		mag_2(rhs_mag_rdg2_black)
	};
	respawnMagazines[] =
	{
		mag_4(rhs_mag_762x25_8),
		mag_2(rhs_mag_rdg2_black)
	};
};

// Commander (AKSU)
class rhsgref_nat_commander: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_commander)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_FIELD_COMMANDER";
	icon="iconManLeader";

	uniformClass = "rhsgref_uniform_flecktarn";

	linkedItems[] = {"H_Cap_blk","G_Bandanna_oli","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"H_Cap_blk","G_Bandanna_oli","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_savz58v","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v","Binocular","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_Savz58),
		mag_2(rhs_mag_rdg2_black),
		"rhs_mag_f1"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_Savz58),
		mag_2(rhs_mag_rdg2_black),
		"rhs_mag_f1"
	};
};

//- Specialist

// Militiaman (PKM)
class rhsgref_nat_machinegunner: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_machinegunner)
	Macro_scope

	displayName = "$STR_RHS_INF_MACHINEGUNNER";
	icon="iconManMG";

	uniformClass = "rhsgref_uniform_woodland_olive";

	linkedItems[] = {"rhs_balaclava1_olive","V_Chestrig_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_balaclava1_olive","V_Chestrig_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};

	magazines[] =
	{
		"rhs_100Rnd_762x54mmR"
	};
	respawnMagazines[] =
	{
		"rhs_100Rnd_762x54mmR"
	};

	backpack="rhsgref_nat_backpack_mg";
};

class rhsgref_nat_machinegunner_mg42: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_machinegunner_mg42)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_MACHINEGUNNER_MG42";
	icon="iconManMG";

	uniformClass = "rhsgref_uniform_dpm";

	linkedItems[] = {"G_Balaclava_oli","rhsgref_chestrig",Standard_Equipment};
	respawnLinkedItems[] = {"G_Balaclava_oli","rhsgref_chestrig",Standard_Equipment};

	weapons[] = {"rhs_weap_mg42","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mg42","Throw","Put"};

	magazines[] =
	{
		"rhsgref_50Rnd_792x57_SmE_drum",
		"rhsgref_50Rnd_792x57_SmK_drum"
	};
	respawnMagazines[] =
	{
		"rhsgref_50Rnd_792x57_SmE_drum",
		"rhsgref_50Rnd_792x57_SmK_drum"
	};

	backpack="rhsgref_nat_backpack_mg42";
};

// Militiaman
class rhsgref_nat_grenadier_rpg: rhsgref_nat_rifleman
{
	EdPrev(rhsgref_nat_grenadier_rpg)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_AT";
	icon="iconManAT";

	linkedItems[] = {"rhs_beanie_green","G_Bandanna_tan","V_TacVest_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_beanie_green","G_Bandanna_tan","V_TacVest_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_pm63","rhs_weap_rpg7","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pm63","rhs_weap_rpg7","Throw","Put"};

	magazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm),
		"rhs_rpg7_PG7V_mag"
	};
	respawnMagazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm),
		"rhs_rpg7_PG7V_mag"
	};

	backpack="rhs_rpg_v";
};

// Militiaman (AKM & AA)
class rhsgref_nat_specialist_aa: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_specialist_aa)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_AA";
	icon="iconManAT";

	uniformClass = "rhsgref_uniform_tigerstripe";

	linkedItems[] = {"H_Booniehat_tan","G_Bandanna_beast","V_TacVest_camo",Standard_Equipment};
	respawnLinkedItems[] = {"H_Booniehat_tan","G_Bandanna_beast","V_TacVest_camo",Standard_Equipment};

	weapons[] = {"rhs_weap_savz58p","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58p","rhs_weap_igla","Throw","Put"};

	magazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm_Savz58),
		"rhs_mag_9k38_rocket"
	};
	respawnMagazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm_Savz58),
		"rhs_mag_9k38_rocket"
	};
};

// Hunter (aka sniper) should have hunting rifle
class rhsgref_nat_hunter: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_hunter)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_HUNTER";

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

	uniformClass = "rhsgref_uniform_woodland";

	linkedItems[] = {"rhs_balaclava","V_Chestrig_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_balaclava","V_Chestrig_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_m76","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m76","Throw","Put"};

	magazines[] =
	{
		mag_5(rhsgref_10Rnd_792x57_m76)
	};
	respawnMagazines[] =
	{
		mag_5(rhsgref_10Rnd_792x57_m76)
	};
};

// Scout (AKMS)
class rhsgref_nat_scout: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_scout)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_SCOUT";

	uniformClass = "rhsgref_uniform_tigerstripe";

	linkedItems[] = {"H_Booniehat_tan","G_Bandanna_khk","V_TacVest_camo",Standard_Equipment};
	respawnLinkedItems[] = {"H_Booniehat_tan","G_Bandanna_khk","V_TacVest_camo",Standard_Equipment};

	weapons[] = {"rhs_weap_45th_akms","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_45th_akms","Throw","Put"};
};

// Saboteur / Engineer
class rhsgref_nat_saboteur: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_saboteur)
	Macro_scope

	displayName= "$STR_RHSGREF_INF_SABOTEUR";

	uniformClass = "rhsgref_uniform_flecktarn";

	cost = 115000;
	camouflage = 1.6;
	sensitivity = 2.5;

	engineer = 1;

	canDeactivateMines = 1;
	detectSkill = 80;
	threat[] = {1,0.5,0.1};

	icon = "iconManExplosive";
	picture = "pictureExplosive";


    linkedItems[] = {"G_Balaclava_blk","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"G_Balaclava_blk","V_TacVest_blk",Standard_Equipment};

	backpack="rhsgref_nat_backpack_explosives";
};

// Medic (AKMS)
class rhsgref_nat_medic: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_medic)
	Macro_scope

	displayName= "$STR_RHSGREF_INF_MEDIC";

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

	linkedItems[] = {"H_Booniehat_oli","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"H_Booniehat_oli","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_pm63","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pm63","Throw","Put"};

	backpack="rhsgref_cdf_backpack_medic";
};

class rhsgref_nat_crew: rhsgref_nat_base
{
	EdPrev(rhsgref_nat_crew)
	Macro_scope

	displayName= "$STR_RHS_INF_CREW";

	cost = 90000;
	camouflage = 1.6;
	sensitivity = 2.5;

	uniformClass = "rhsgref_uniform_woodland";

	linkedItems[] = {"G_Balaclava_blk","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[] = {"G_Balaclava_blk","rhs_vest_pistol_holster",Standard_Equipment};

	weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};

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