/* MACROS DEFINITION */

#define Standard_Equipment ItemMap,ItemCompass,ItemWatch,ItemRadio
#define Macro_scope scope = 2;\
					scopeCurator = 2;\
					author=$STR_RHS_AUTHOR_FULL;


/* NAPA PARAMILITARY TROOPS CLASSNAMES */

/* Classes for uniforms */

class rhsgref_nat_alpenflage : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_alpenflage)
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_alpenflage";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\alpenflage_co.paa"};
};

/* Troops Classes */

//- Riflemen

// Militiaman (AKM)
class rhsgref_nat_pmil_rifleman : rhsgref_nat_base
{
	EdPrev(rhsgref_nat_pmil_rifleman)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_RIFLEMAN_SAVZ58";

	vehicleClass = "rhsgref_vehclass_infantry_paramil";\
	editorSubcategory = "rhsgref_EdSubcat_infantry_paramil";\

	uniformClass = "rhsgref_uniform_alpenflage";

	linkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_khk","V_Chestrig_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_khk","V_Chestrig_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_savz58p_black","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58p_black","Throw","Put"};

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

// Militiaman (M92)
//class

class rhsgref_nat_pmil_rifleman_m92: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_rifleman_m92)
	scope = 1;
	scopeCurator = 1;

	displayName = "$STR_RHS_INF_RIFLEMAN_AKM";

	linkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_oli","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_oli","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhsgref_weap_akm_zenitco","Throw","Put"};
	respawnWeapons[] = {"rhsgref_weap_akm_zenitco","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		mag_2(rhs_mag_f1)
	};
};
class rhsgref_nat_pmil_rifleman_akm: rhsgref_nat_pmil_rifleman_m92
{
	EdPrev(rhsgref_nat_pmil_rifleman_akm)
	Macro_scope
};

// Militiaman (AKSU)

class rhsgref_nat_pmil_rifleman_aksu: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_rifleman_aksu)
	scope = 2;

	AUTHOR_MACRO
	displayName = $STR_rhsgref_inf_rifleman_aksu;

	linkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_tan","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_tan","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74u","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};

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

// Militiaman (AKM & GP-25)
class rhsgref_nat_pmil_grenadier: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_grenadier)
	Macro_scope

	displayName = "$STR_RHS_INF_GRENADIER";

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
class rhsgref_nat_pmil_autorifleman: rhsgref_nat_pmil_base
{
	EdPrev(rhsgref_nat_pmil_autorifleman)
	scope = 2;

	AUTHOR_MACRO
	displayName = "$STR_RHS_INF_ARIFLEMAN";

	uniformClass = "rhs_nat_pmil_uniform_4";

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

	backpack="rhsgref_nat_pmil_backpack_mg";
};
*/

//- Leadership

// Commander (AKSU)
class rhsgref_nat_pmil_commander: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_commander)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_FIELD_COMMANDER";
	icon="iconManLeader";

	weapons[] = {"rhsgref_weap_savz58v_black_rxo1","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhsgref_weap_savz58v_black_rxo1","Binocular","Throw","Put"};

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
class rhsgref_nat_pmil_machinegunner: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_machinegunner)
	Macro_scope

	displayName = "$STR_RHS_INF_MACHINEGUNNER";
	icon="iconManMG";

	linkedItems[] = {"rhs_balaclava1_olive","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_balaclava1_olive","V_TacVest_blk",Standard_Equipment};

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

// Militiaman (AKM & RPG7) rare!
class rhsgref_nat_pmil_grenadier_rpg: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_grenadier_rpg)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_AT";
	icon="iconManAT";

	linkedItems[] = {"rhs_beanie_green","G_Bandanna_tan","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_beanie_green","G_Bandanna_tan","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_savz58v_black","rhs_weap_rpg7","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v_black","rhs_weap_rpg7","Throw","Put"};

	magazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm_Savz58),
		"rhs_rpg7_PG7VL_mag"
	};
	respawnMagazines[] =
	{
		mag_5(rhs_30Rnd_762x39mm_Savz58),
		"rhs_rpg7_PG7VL_mag"
	};

	backpack="rhs_rpg_vl";
};

// Militiaman (AKM & AA)
class rhsgref_nat_pmil_specialist_aa: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_specialist_aa)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_AA";
	icon="iconManAT";

	linkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_beast","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_beast","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_savz58p_black","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58p_black","rhs_weap_igla","Throw","Put"};

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
class rhsgref_nat_pmil_hunter: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_hunter)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_MARKSMAN";

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

	linkedItems[] = {"rhs_balaclava","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhs_balaclava","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhs_weap_m76_pso","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m76_pso","Throw","Put"};

	magazines[] =
	{
		mag_5(rhsgref_10Rnd_792x57_m76),
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_5(rhsgref_10Rnd_792x57_m76),
		"rhs_mag_rdg2_white"
	};
};

// Scout (AKMS)
class rhsgref_nat_pmil_scout: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_scout)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_SCOUT";

	linkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_khk","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_Booniehat_alpen","G_Bandanna_khk","V_TacVest_blk",Standard_Equipment};

	weapons[] = {"rhsgref_weap_akm_zenitco_sd","Throw","Put"};
	respawnWeapons[] = {"rhsgref_weap_akm_zenitco_sd","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm),
		mag_2(rhs_mag_f1)
	};
};

// Saboteur / Engineer
class rhsgref_nat_pmil_saboteur: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_saboteur)
	Macro_scope

	displayName= "$STR_RHSGREF_INF_SABOTEUR";

	cost = 115000;
	camouflage = 1.6;
	sensitivity = 2.5;

	engineer = 1;

	canDeactivateMines = 1;
	detectSkill = 80;
	threat[] = {1,0.5,0.1};

	icon = "iconManExplosive";
	picture = "pictureExplosive";

	weapons[] = {"rhsgref_weap_savz58v_saboteur","Throw","Put"};
	respawnWeapons[] = {"rhsgref_weap_savz58v_saboteur","Throw","Put"};

    linkedItems[] = {"G_Balaclava_blk","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"G_Balaclava_blk","V_TacVest_blk",Standard_Equipment};

	backpack="rhsgref_nat_backpack_explosives";
};

// Medic (AKMS)
class rhsgref_nat_pmil_medic: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_medic)
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

	weapons[] = {"rhs_weap_savz58v_black","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_savz58v_black","Throw","Put"};

	backpack="rhsgref_cdf_backpack_medic";
};

class rhsgref_nat_pmil_crew: rhsgref_nat_pmil_rifleman
{
	EdPrev(rhsgref_nat_pmil_crew)
	Macro_scope

	displayName= "$STR_RHS_INF_CREW";

	cost = 90000;
	camouflage = 1.6;
	sensitivity = 2.5;

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