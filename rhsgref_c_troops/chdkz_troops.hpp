/* MACROS DEFINITION */

#define Macro_scope scope = 2;\
					scopeCurator = 2;\
					author=$STR_RHS_AUTHOR_FULL;

/* CDF TROOPS CLASSNAMES */

// base nationalist militiaman
class rhsgref_ins_base : SoldierGB
{
	EdPrev(rhsgref_ins_base)

	scope = 0;
	AUTHOR_MACRO

	side = 0;
	category = "Men";
	faction= "rhsgref_faction_chdkz";
	vehicleClass = "rhs_vehclass_infantry";
	editorSubcategory = "rhsgref_EdSubcat_infantry";

	identityTypes[]=
	{
		"LanguageRUS",
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

	model = "\rhsafrf\addons\rhs_infantry2\rhs_emr_base.p3d";
	selectionClan = "clan";

	modelSides[] = {0,2,3};
	nakedUniform = "U_BasicBody";
	uniformClass = "rhsgref_ins_uniform_specter";

	primaryAmmoCoef = 0.4;
	secondaryAmmoCoef = 0.2;
	handgunAmmoCoef = 0.1;

	cost = 100000;

		class Wounds
		{
			tex[] = {};
			mat[] = {
				"rhsafrf\addons\rhs_infantry2\data\rhs_emr.rvmat",
				"rhsafrf\addons\rhs_infantry2\data\rhs_emr_w1.rvmat",
				"rhsafrf\addons\rhs_infantry2\data\rhs_emr_w2.rvmat",

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

	linkedItems[] = {"rhs_6sh92_digi",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_6sh92_digi",Standard_Equipment};

	weapons[] = {"rhs_weap_ak103_dtk","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_ak103_dtk","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_polymer),
		mag_2(rhs_mag_rgn),
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_polymer),
		mag_2(rhs_mag_rgn),
		"rhs_mag_rdg2_white"
	};
};

/* Classes for uniforms */

class rhsgref_ins_reed : rhsgref_ins_base
{
	EdPrev(rhsgref_ins_reed)
	AUTHOR_MACRO

	scope = 1;

	model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";

	uniformClass = "rhsgref_uniform_reed";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\reed_co.paa"};
	//hiddenSelectionsMaterials[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\saf_gear_m93.rvmat"};
};

class rhsgref_ins_uniform_izlom : rhsgref_ins_base
{
	EdPrev(rhsgref_ins_uniform_izlom)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhs_uniform_mvd_izlom";

	hiddenSelections[] = {"camo1","camo2","camob"};
	hiddenSelectionsTextures[] =
	{
			"rhsafrf\addons\rhs_infantry\data\skol_mvd_co.paa"
	};
};

class rhsgref_ins_uniform_specter : rhsgref_ins_base
{
	EdPrev(rhsgref_ins_uniform_specter)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_specter";


		model = "\rhsafrf\addons\rhs_infantry2\rhs_emr_base.p3d";

		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] =
		{
			"rhsgref\addons\rhsgref_infantry\data_cdf\uniform01_chdkz_specters_co.paa",
			"rhsgref\addons\rhsgref_infantry\data_cdf\Shevrons_ChDKZ_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
};

/* Added Gorka versions to allow possible retexures */
class rhsgref_ins_uniform_gorka_y : rhsgref_ins_base
{
	EdPrev(rhsgref_ins_uniform_gorka_y)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhs_uniform_gorka_r_y";

	model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_base.p3d";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\gorkaR_y_co.paa"
	};
};

class rhsgref_ins_uniform_gorka_g : rhsgref_ins_uniform_gorka_y
{
	EdPrev(rhsgref_ins_uniform_gorka_g)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhs_uniform_gorka_r_g";

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\gorkaR_g_co.paa"
	};
};


/* Troops Classes */

// Militiaman (AK-103)
class rhsgref_ins_rifleman: rhsgref_ins_uniform_specter
{
	EdPrev(rhsgref_ins_rifleman)
	Macro_scope

	displayName = "$STR_RHS_INF_RIFLEMAN_AK103";

	linkedItems[] = {"rhsgref_bcap_specter","rhs_6sh92",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_bcap_specter","rhs_6sh92",Standard_Equipment};
};
// Militiaman AKM
class rhsgref_ins_rifleman_akm: rhsgref_ins_reed
{
	EdPrev(rhsgref_ins_rifleman_akm)
	Macro_scope

	displayName = "$STR_RHS_INF_RIFLEMAN_AKM";

	linkedItems[] = {"rhs_beanie_green","V_Tacvest_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_beanie_green","V_Tacvest_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_akm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_mag_rgd5),
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_mag_rgd5),
		"rhs_mag_rdg2_white"
	};
};

class rhsgref_ins_rifleman_aksu: rhsgref_ins_reed
{
	EdPrev(rhsgref_ins_rifleman_aksu)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_RIFLEMAN_AKSU";

	linkedItems[] = {"rhs_beanie_green","V_Chestrig_rgr",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_beanie_green","V_Chestrig_rgr",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74u","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};
	magazines[] =
	{
		mag_6(rhs_30Rnd_545x39_7N6_AK),
		mag_2(rhs_mag_rgn),
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_545x39_7N6_AK),
		mag_2(rhs_mag_rgn),
		"rhs_mag_rdg2_white"
	};
};

class rhsgref_ins_rifleman_aks74: rhsgref_ins_rifleman_aksu
{
	EdPrev(rhsgref_ins_rifleman_aks74)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_RIFLEMAN_AKS74";

	linkedItems[] = {"rhs_beanie_green","V_Chestrig_rgr",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_beanie_green","V_Chestrig_rgr",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74_2","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74_2","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_545x39_7N6M_plum_AK),
		mag_2(rhs_mag_rgd5),
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_545x39_7N6M_plum_AK),
		mag_2(rhs_mag_rgd5),
		"rhs_mag_rdg2_white"
	};
};

// Militiaman (AKM & RPG26)
class rhsgref_ins_rifleman_RPG26 : rhsgref_ins_uniform_specter
{
	EdPrev(rhsgref_ins_rifleman_RPG26)
	Macro_scope

	displayName = "$STR_RHS_INF_LAT";

	linkedItems[] = {"rhs_beanie","G_Bandanna_blk","rhs_6sh92_digi",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_beanie","G_Bandanna_blk","rhs_6sh92_digi",Standard_Equipment};

	weapons[] = {"rhs_weap_akm","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akm","rhs_weap_rpg26","Throw","Put"};

	magazines[] =
	{
		mag_3(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_30Rnd_762x39mm),
		"rhs_rpg26_mag"
	};
	respawnMagazines[] =
	{
		mag_3(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_30Rnd_762x39mm),
		"rhs_rpg26_mag"
	};
};

// Militiaman (Mosin M38)
class rhsgref_ins_militiaman_mosin: rhsgref_ins_reed
{
	EdPrev(rhsgref_ins_militiaman_mosin)
	Macro_scope

	displayName = "$STR_rhsgref_inf_militiaman_m38";

	linkedItems[] = {"H_Booniehat_tan","G_Bandanna_khk","V_BandollierB_rgr",Standard_Equipment};
	respawnLinkedItems[] = {"H_Booniehat_tan","G_Bandanna_khk","V_BandollierB_rgr",Standard_Equipment};

	weapons[] = {"rhs_weap_m38","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m38","Throw","Put"};

	magazines[] =
	{
		mag_15(rhsgref_5Rnd_762x54_m38),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_15(rhsgref_5Rnd_762x54_m38),
		mag_2(rhs_mag_f1)
	};
};

// Militiaman (AKM & GP-25)
class rhsgref_ins_grenadier: rhsgref_ins_uniform_specter
{
	EdPrev(rhsgref_ins_grenadier)
	Macro_scope

	displayName = "$STR_RHS_INF_GRENADIER";

	linkedItems[] = {"rhsgref_bcap_specter","rhs_6sh92_digi_vog",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_bcap_specter","rhs_6sh92_digi_vog",Standard_Equipment};

	weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};

	magazines[] =
	{
		mag_3(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_30Rnd_762x39mm),
		mag_6(rhs_VOG25)
	};
	respawnMagazines[] =
	{
		mag_3(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_30Rnd_762x39mm),
		mag_6(rhs_VOG25)
	};
};

// Militiaman (RPK)
class rhsgref_ins_arifleman_rpk: rhsgref_ins_uniform_izlom
{
	EdPrev(rhsgref_ins_arifleman_rpk)
	Macro_scope

	displayName = "$STR_RHS_INF_ARIFLEMAN";

	linkedItems[] = {"G_Balaclava_blk","rhs_6sh92",Standard_Equipment};
	respawnLinkedItems[] = {"G_Balaclava_blk","rhs_6sh92",Standard_Equipment};

	weapons[] = {"rhs_weap_rpk74m","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_rpk74m","Throw","Put"};

	magazines[] =
	{
		mag_4(rhs_45Rnd_545X39_7N6_AK),
		mag_2(rhs_mag_rgd5),
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_4(rhs_45Rnd_545X39_7N6_AK),
		mag_2(rhs_mag_rgd5),
		"rhs_mag_rdg2_white"
	};
};

// Militiaman (PKM)
class rhsgref_ins_machinegunner: rhsgref_ins_reed
{
	EdPrev(rhsgref_ins_machinegunner)
	Macro_scope

	displayName = "$STR_RHS_INF_MACHINEGUNNER";

	linkedItems[] = {"H_Bandanna_gry","rhs_6sh92_digi",Standard_Equipment};
	respawnLinkedItems[] = {"H_Bandanna_gry","rhs_6sh92_digi",Standard_Equipment};

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

	backpack="rhs_sidorMG";
};

//- Leadership

// Officer (aka squad leader)
class rhsgref_ins_squadleader: rhsgref_ins_uniform_specter
{
	EdPrev(rhsgref_ins_squadleader)
	Macro_scope

	displayName = "$STR_RHS_INF_OFFICER";

	linkedItems[] = {"rhsgref_patrolcap_specter","rhs_6sh92_digi_radio",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_patrolcap_specter","rhs_6sh92_digi_radio",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74u","rhs_weap_rsp30_red","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_rsp30_red","Binocular","Throw","Put"};

	magazines[] =
	{
		mag_5(rhs_30Rnd_545x39_7N6_AK),
		"rhs_30Rnd_545x39_AK_green",
		mag_2(rhs_mag_rdg2_white),
		"rhs_mag_rgn"
	};
	respawnMagazines[] =
	{
		mag_5(rhs_30Rnd_545x39_7N6_AK),
		"rhs_30Rnd_545x39_AK_green",
		mag_2(rhs_mag_rdg2_white),
		"rhs_mag_rgn"
	};
};

// Commander (aka officer, not confuse with NAPA SL)
class rhsgref_ins_commander: rhsgref_ins_reed
{
	EdPrev(rhsgref_ins_commander)
	Macro_scope

	displayName = "Commander";

	linkedItems[] = {"H_Beret_blk","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[] = {"H_Beret_blk","rhs_vest_pistol_holster",Standard_Equipment};

	weapons[] = {"rhs_weap_makarov_pm","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_makarov_pm","Binocular","Throw","Put"};

	magazines[] =
	{
		mag_5(rhs_mag_9x18_8_57N181S),
		"rhs_mag_rdg2_white",
		"rhs_mag_rgn"
	};
	respawnMagazines[] =
	{
		mag_5(rhs_mag_9x18_8_57N181S),
		"rhs_mag_rdg2_white",
		"rhs_mag_rgn"
	};
};

//- Specialist

// Specialist AT (AKM & RPG7)
class rhsgref_ins_grenadier_rpg: rhsgref_ins_uniform_izlom
{
	EdPrev(rhsgref_ins_grenadier_rpg)
	Macro_scope

	displayName = "$STR_rhsgref_inf_AT";

	linkedItems[] = {"G_Balaclava_blk","rhs_6sh92_digi",Standard_Equipment};
	respawnLinkedItems[] = {"G_Balaclava_blk","rhs_6sh92_digi",Standard_Equipment};

	weapons[] = {"rhs_weap_akms","rhs_weap_rpg7","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akms","rhs_weap_rpg7","Throw","Put"};

	magazines[] =
	{
		mag_4(rhs_30Rnd_762x39mm_bakelite),
		"rhs_30Rnd_762x39mm",
		"rhs_rpg7_PG7VL_mag"
	};
	respawnMagazines[] =
	{
		mag_4(rhs_30Rnd_762x39mm_bakelite),
		"rhs_30Rnd_762x39mm",
		"rhs_rpg7_PG7VL_mag"
	};

	backpack="rhs_rpg_vl";
};

// Specialist AA (AKM & AA)
class rhsgref_ins_specialist_aa: rhsgref_ins_reed
{
	EdPrev(rhsgref_ins_specialist_aa)
	Macro_scope

	displayName = "$STR_rhsgref_inf_AA";

	linkedItems[] = {"rhs_balaclava1_olive","rhs_6sh92",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_balaclava1_olive","rhs_6sh92",Standard_Equipment};

	weapons[] = {"rhs_weap_akms","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akms","rhs_weap_igla","Throw","Put"};

	magazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm_bakelite),
		"rhs_mag_9k38_rocket"
	};
	respawnMagazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm_bakelite),
		"rhs_mag_9k38_rocket"
	};
};

// Engineer (aka sapper)
class rhsgref_ins_engineer: rhsgref_ins_uniform_gorka_g
{
	EdPrev(rhsgref_ins_engineer)
	Macro_scope

	displayName= "$STR_rhsgref_inf_sapper";

	cost = 220000;
	camouflage = 1.6;
	sensitivity = 2.5;
	canDeactivateMines = 1;
	engineer = 1;
	detectSkill = 60;
	threat[] = {1,0.5,0.1};
	icon = "iconManEngineer";
	picture = "pictureRepair";

    linkedItems[] = {"rhs_ssh68","rhs_6sh92_digi",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_ssh68","rhs_6sh92_digi",Standard_Equipment};

	backpack="rhsgref_ins_pack_demo";
};

// Saboteur / Engineer
class rhsgref_ins_saboteur: rhsgref_ins_uniform_specter
{
	EdPrev(rhsgref_ins_saboteur)
	Macro_scope

	displayName= "Saboteur";

	cost = 115000;
	camouflage = 1.6;
	sensitivity = 2.5;

	engineer = 1;

	canDeactivateMines = 1;
	detectSkill = 80;
	threat[] = {1,0.5,0.1};

	icon = "iconManExplosive";
	picture = "pictureExplosive";

    linkedItems[] = {"rhs_balaclava1_olive","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_balaclava1_olive","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74un_sup","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74un_sup","Throw","Put"};

	magazines[] =
	{
		mag_3(rhs_30Rnd_545x39_7U1_AK),//TODO: Swap out with plum mags, if ever added for 7U1 rounds
		mag_3(rhs_30Rnd_545x39_7N6M_plum_AK),
		"rhs_mag_nspn_yellow"
	};
	respawnMagazines[] =
	{
		mag_3(rhs_30Rnd_545x39_7U1_AK),//TODO: Swap out with plum mags, if ever added for 7U1 rounds
		mag_3(rhs_30Rnd_545x39_7N6M_plum_AK),
		"rhs_mag_nspn_yellow"
	};

	backpack="rhsgref_ins_pack_saboteur";
};

// Sniper
class rhsgref_ins_sniper: rhsgref_ins_uniform_izlom
{
	EdPrev(rhsgref_ins_sniper)
	Macro_scope

	displayName = "Sniper";

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

	linkedItems[] = {"H_Booniehat_oli","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"H_Booniehat_oli","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhsgref_weap_ak103_pso1m2","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhsgref_weap_ak103_pso1m2","Binocular","Throw","Put"};
};

// Sniper
class rhsgref_ins_spotter: rhsgref_ins_uniform_gorka_y
{
	EdPrev(rhsgref_ins_spotter)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_SPOTTER";

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

	linkedItems[] = {"rhs_balaclava","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_balaclava","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhs_weap_akm","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akm","Binocular","Throw","Put"};
	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_mag_rgn),
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_mag_rgn),
		"rhs_mag_rdg2_white"
	};
};

// Medic (AKMS)
class rhsgref_ins_medic: rhsgref_ins_uniform_specter
{
	EdPrev(rhsgref_ins_medic)
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

	weapons[] = {"rhs_weap_akms","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_mag_rgn),
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_bakelite),
		mag_2(rhs_mag_rgn),
		"rhs_mag_rdg2_white"
	};

	backpack="rhsgref_cdf_backpack_medic";
};

class rhsgref_ins_crew: rhsgref_ins_uniform_specter
{
	EdPrev(rhsgref_ins_crew)
	Macro_scope

	displayName= "$STR_RHS_INF_CREW";

	cost = 90000;
	camouflage = 1.6;
	sensitivity = 2.5;

	linkedItems[] = {"rhs_tsh4","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_tsh4","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74u","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};

	magazines[] =
	{
		mag_3(rhs_30Rnd_545x39_7N6_AK),
		"rhs_mag_nspn_red"
	};
	respawnMagazines[] =
	{
		mag_3(rhs_30Rnd_545x39_7N6_AK),
		"rhs_mag_nspn_red"
	};
};

class rhsgref_ins_pilot: rhsgref_ins_uniform_specter
{
	EdPrev(rhsgref_ins_pilot)
	Macro_scope

	displayName= "$STR_RHS_PILOT_NAME";

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"H_Cap_headphones","rhs_6sh46",Standard_Equipment};
	respawnLinkedItems[] = {"H_Cap_headphones","rhs_6sh46",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74u","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};

	magazines[] =
	{
		mag_3(rhs_30Rnd_545x39_7N6_AK),
		"rhs_mag_rdg2_white",
		"rhs_mag_nspn_red"
	};
	respawnMagazines[] =
	{
		mag_3(rhs_30Rnd_545x39_7N6_AK),
		"rhs_mag_rdg2_white",
		"rhs_mag_nspn_red"
	};
};