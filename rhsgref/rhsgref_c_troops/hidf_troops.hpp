/* MACROS DEFINITION */

#define Macro_scope scope = 2;\
					scopeCurator = 2;\
					author=$STR_RHS_AUTHOR_FULL;

/* HIDF TROOPS CLASSNAMES */

// base HIDF soldier
class rhsgref_hidf_base : SoldierWB
{
	//EdPrev(rhsgref_hidf_base)

	scope = 0;
	AUTHOR_MACRO

	side = 1;
	category = "Men";
	faction= "rhsgref_faction_hidf";
	vehicleClass = "rhs_vehclass_infantry";
	editorSubcategory = "rhsgref_EdSubcat_infantry";

	identityTypes[] =
	{
		"LanguageENGFRE_F",
		"Head_Tanoan"
	};
	genericNames = "TanoanMen";

	portrait = "";
	picture = "";
	icon = "iconMan";

	accuracy = 2.3;
	sensitivity = 1.75;  // ?
	threat[] = {1,0.1,0.1};
	camouflage = 1.4; // ?
	minFireTime = 7; // ?
	canCarryBackPack = 1;

	model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";

	modelSides[] = {1,3};
	nakedUniform = "U_BasicBody";
	uniformClass = "rhs_uniform_bdu_erdl";

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
	Items[] = {"FirstAidKit", "rhsgref_hat_M1951"};
	RespawnItems[] = {"FirstAidKit", "rhsgref_hat_M1951"};

	linkedItems[] = {"rhsgref_alice_webbing",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_alice_webbing",Standard_Equipment};

	weapons[] = {"rhs_weap_l1a1","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_l1a1","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal), //Switch to M193 if M16A1s get added
		mag_2(rhs_mag_m67)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal),
		mag_2(rhs_mag_m67)
	};
};

/* Uniform Class */

class rhsgref_hidf_ERDL : rhsgref_hidf_base
{
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_ERDL";

	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\rhsgref\addons\rhsgref_infantry\data_tanoa\m93_erdl_co.paa" };
};

class rhsgref_hidf_og107 : rhsgref_hidf_base
{
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_og107";

	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\rhsgref\addons\rhsgref_infantry\data_tanoa\m93_og107_co.paa" };
};

class rhsgref_hidf_og107_erdl : rhsgref_hidf_base
{
	AUTHOR_MACRO

	scope = 1;

	uniformClass = "rhsgref_uniform_og107_erdl";

	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\rhsgref\addons\rhsgref_infantry\data_tanoa\m93_og107_erdl_co.paa" };
};

// Riflemen

class rhsgref_hidf_rifleman: rhsgref_hidf_base
{
	EdPrev(rhsgref_hidf_rifleman)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_RIFLEMAN";

	class EventHandlers : EventHandlers {
		init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;}";
	};

	headgearList[] = {"rhsgref_helmet_M1_bare", 1, "rhsgref_helmet_M1_bare_alt01", 1, "rhsgref_helmet_M1_painted", 1, "rhsgref_helmet_M1_painted_alt01", 1};

	linkedItems[] = {"rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment};

	weapons[] = {"rhs_weap_l1a1","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_l1a1","Throw","Put"};
};

//Grenadier

class rhsgref_hidf_grenadier: rhsgref_hidf_rifleman
{
	EdPrev(rhsgref_hidf_grenadier)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_GRENADIERA";

	cost = 130000;
	threat[] = {1,0.3,0.1};

	linkedItems[] = {"rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment};

	weapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
		mag_6(rhs_mag_M441_HE),
		"rhs_mag_m67"
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855_Stanag),
		mag_6(rhs_mag_M441_HE),
		"rhs_mag_m67"
	};

	backpack="rhsgref_hidf_backpack_gr";
};

class rhsgref_hidf_grenadier_m79: rhsgref_hidf_grenadier
{
	EdPrev(rhsgref_hidf_grenadier_m79)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_GRENADIER_M79";

	linkedItems[] = {"rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment};

	weapons[] = {"rhs_weap_m79","rhsusf_weap_m1911a1","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m79","rhsusf_weap_m1911a1","Throw","Put"};

	magazines[] =
	{
		mag_15(rhs_mag_M441_HE),
		mag_5(rhs_mag_M433_HEDP),
		mag_4(rhsusf_mag_7x45acp_MHP),
		mag_2(rhs_mag_M714_white),
		"rhs_mag_M715_green",
		"rhs_mag_M716_yellow"

	};
	respawnMagazines[] =
	{
		mag_15(rhs_mag_M441_HE),
		mag_5(rhs_mag_M433_HEDP),
		mag_4(rhsusf_mag_7x45acp_MHP),
		mag_2(rhs_mag_M714_white),
		"rhs_mag_M715_green",
		"rhs_mag_M716_yellow"
	};

	backpack="";
};

//Anti-tank

//Light
class rhsgref_hidf_rifleman_m72: rhsgref_hidf_rifleman
{
	EdPrev(rhsgref_hidf_rifleman_m72)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_RIFLEMAN_LAW";

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
	threat[] = {1,0.7,0.3};
	icon = "iconManAT";

	linkedItems[] = {"rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment};

	weapons[] = {"rhs_weap_l1a1","rhs_weap_m72a7","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_l1a1","rhs_weap_m72a7","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal),
		mag_2(rhs_mag_m67),
		"rhs_m72a7_mag"
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal),
		mag_2(rhs_mag_m67),
		"rhs_m72a7_mag"
	};

	secondaryAmmoCoef = 0.5;
};

class rhsgref_hidf_autorifleman : rhsgref_hidf_rifleman
{
	EdPrev(rhsgref_hidf_autorifleman)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_ARIFLEMAN";

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = { "veh_infantry_MG_s" };
			speechPlural[] = { "veh_infantry_MG_p" };
		};
	};
	textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
	nameSound = "veh_infantry_MG_s";

	cost = 125000;
	threat[] = { 1,0.1,0.3 };
	icon = "iconManMG";

	linkedItems[] = { "rhsgref_helmet_M1_bare_alt01","rhsgref_alice_webbing",Standard_Equipment };
	respawnLinkedItems[] = { "rhsgref_helmet_M1_bare_alt01","rhsgref_alice_webbing",Standard_Equipment };

	weapons[] = { "rhs_weap_m249","Throw","Put" };
	respawnWeapons[] = { "rhs_weap_m249","Throw","Put" };

	magazines[] =
	{
		mag_2(rhsusf_200rnd_556x45_M855_mixed_box),
		mag_2(rhs_mag_m67)
	};
	respawnMagazines[] =
	{
		mag_2(rhsusf_200rnd_556x45_M855_mixed_box),
		mag_2(rhs_mag_m67)
	};
	backpack = "rhsgref_hidf_alicepack_ar";
};

class rhsgref_hidf_autorifleman_assist : rhsgref_hidf_rifleman
{
	EdPrev(rhsgref_hidf_autorifleman_assist)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_AARIFLEMAN";

	cost = 110000;

	backpack = "rhsgref_hidf_alicepack_ar";
};

class rhsgref_hidf_machinegunner : rhsgref_hidf_autorifleman
{
	EdPrev(rhsgref_hidf_machinegunner)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_MG";

	weapons[] = { "rhs_weap_fnmag","Throw","Put" };
	respawnWeapons[] = { "rhs_weap_fnmag","Throw","Put" };
	magazines[] =
	{
		mag_3(rhsusf_100Rnd_762x51),
		"rhs_mag_m67"
	};
	respawnMagazines[] =
	{
		mag_3(rhsusf_100Rnd_762x51),
		"rhs_mag_m67"
	};

	backpack = "rhsgref_hidf_alicepack_mg";
};

class rhsgref_hidf_machinegunner_assist : rhsgref_hidf_rifleman
{
	EdPrev(rhsgref_hidf_machinegunner_assist)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_AMG";

	cost = 110000;

	backpack = "rhsgref_hidf_alicepack_mg";
};

class rhsgref_hidf_marksman : rhsgref_hidf_rifleman
{
	EdPrev(rhsgref_hidf_marksman)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_MARKSMAN";

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = { "veh_infantry_sniper_s" };
			speechPlural[] = { "veh_infantry_sniper_p" };
		};
	};
	textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
	nameSound = "veh_infantry_sniper_s";

	cost = 150000;
	sensitivity = 3.3;
	
	Items[] = {"FirstAidKit", "rhsgref_hat_M1951", "rhsgref_acc_l1a1_anpvs2"};
	RespawnItems[] = {"FirstAidKit", "rhsgref_hat_M1951", "rhsgref_acc_l1a1_anpvs2"};

	linkedItems[] = { "rhsgref_helmet_M1_painted_alt01","rhsgref_alice_webbing",Standard_Equipment };
	respawnLinkedItems[] = { "rhsgref_helmet_M1_painted_alt01","rhsgref_alice_webbing",Standard_Equipment };

	weapons[] = { "rhs_weap_l1a1_suit","Throw","Put" };
	respawnWeapons[] = { "rhs_weap_l1a1_suit","Throw","Put" };

	magazines[] =
	{
		mag_6(rhs_mag_20Rnd_762x51_m61_fnfal),
		"rhs_mag_20Rnd_762x51_m62_fnfal",
		"rhs_mag_m67"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_mag_20Rnd_762x51_m61_fnfal),
		"rhs_mag_20Rnd_762x51_m62_fnfal",
		"rhs_mag_m67"
	};

};

class rhsgref_hidf_squadleader : rhsgref_hidf_rifleman
{
	EdPrev(rhsgref_hidf_squadleader)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_SQUADLEADER";

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = { "rhsgref_helmet_M1_painted","rhsgref_alice_webbing",Standard_Equipment };
	respawnLinkedItems[] = { "rhsgref_helmet_M1_painted","rhsgref_alice_webbing",Standard_Equipment };

	weapons[] = { "rhs_weap_l1a1","Throw","Put","Binocular" };
	respawnWeapons[] = { "rhs_weap_l1a1","Throw","Put","Binocular" };

	magazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal),
		"rhs_mag_m18_red",
		"rhs_mag_m18_purple",
		"rhs_mag_m18_yellow",
		"rhs_mag_m67",
		mag_2(Chemlight_red)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal),
		"rhs_mag_m18_red",
		"rhs_mag_m18_purple",
		"rhs_mag_m18_yellow",
		"rhs_mag_m67",
		mag_2(Chemlight_red)
	};

};

class rhsgref_hidf_teamleader : rhsgref_hidf_rifleman
{
	EdPrev(rhsgref_hidf_teamleader)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_TEAMLEADER";

	cost = 450000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = { "rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment };
	respawnLinkedItems[] = { "rhsgref_helmet_M1_bare","rhsgref_alice_webbing",Standard_Equipment };

	weapons[] = { "rhs_weap_l1a1","Throw","Put","Binocular" };
	respawnWeapons[] = { "rhs_weap_l1a1","Throw","Put","Binocular" };

	magazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal),
		"rhs_mag_m18_purple",
		"rhs_mag_m18_yellow",
		"rhs_mag_m67"
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal),
		"rhs_mag_m18_purple",
		"rhs_mag_m18_yellow",
		"rhs_mag_m67"
	};

};

class rhsgref_hidf_medic : rhsgref_hidf_rifleman
{
	EdPrev(rhsgref_hidf_medic)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_MEDIC";

	attendant = 1;
	icon = "iconManMedic";
	backpack = "rhsgref_hidf_alicepack_medic";
	picture = "pictureHeal";

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = { "veh_infantry_medic_s" };
			speechPlural[] = { "veh_infantry_medic_p" };
		};
	};

	textSingular = "medic";
	textPlural = "medics";
	nameSound = "veh_infantry_medic_s";

	linkedItems[] = { "rhsgref_helmet_M1_painted_alt01","rhsgref_alice_webbing",Standard_Equipment };
	respawnLinkedItems[] = { "rhsgref_helmet_M1_painted_alt01","rhsgref_alice_webbing",Standard_Equipment };

	weapons[] = { "rhs_weap_l1a1","rhsusf_weap_m1911a1","Throw","Put" };
	respawnWeapons[] = { "rhs_weap_l1a1","rhsusf_weap_m1911a1","Throw","Put" };

	magazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal),
		mag_3(rhsusf_mag_7x45acp_MHP),
		"rhs_mag_m18_red"
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_20Rnd_762x51_m80_fnfal),
		mag_3(rhsusf_mag_7x45acp_MHP),
		"rhs_mag_m18_red"
	};

};

class rhsgref_hidf_sniper : rhsgref_hidf_marksman
{
	EdPrev(rhsgref_hidf_sniper)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_SNIPER";

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = { "veh_infantry_sniper_s" };
			speechPlural[] = { "veh_infantry_sniper_p" };
		};
	};
	textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
	nameSound = "veh_infantry_sniper_s";

	cost = 350000;
	threat[] = { 1,0.3,0.3 };
	camouflage = 0.4;
	sensitivity = 3.5;

	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;

	linkedItems[] = { "rhsgref_helmet_M1_painted_alt01","rhsgref_alice_webbing",Standard_Equipment };
	respawnLinkedItems[] = { "rhsgref_helmet_M1_painted_alt01","rhsgref_alice_webbing",Standard_Equipment };

	weapons[] = { "rhs_weap_m24sws_blk_leu","rhsusf_weap_m1911a1","Throw","Put","Binocular" };
	respawnWeapons[] = { "rhs_weap_m24sws_blk_leu","rhsusf_weap_m1911a1","Throw","Put","Binocular" };

	magazines[] =
	{
		mag_8(rhsusf_5Rnd_762x51_m118_special_Mag),
		mag_2(rhsusf_5Rnd_762x51_m62_Mag),
		mag_3(rhsusf_mag_7x45acp_MHP),
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		mag_8(rhsusf_5Rnd_762x51_m118_special_Mag),
		mag_2(rhsusf_5Rnd_762x51_m62_Mag),
		mag_3(rhsusf_mag_7x45acp_MHP),
		"rhs_mag_an_m8hc"
	};

};

class rhsgref_hidf_crewman : rhsgref_hidf_base
{
	EdPrev(rhsgref_hidf_crewman)
	Macro_scope

	displayName = "$STR_RHSUSF_INF_CREW";

	cost = 90000;
	camouflage = 1.6;
	sensitivity = 2.5;

	engineer = 1;

	Items[] = { "FirstAidKit" };
	RespawnItems[] = { "FirstAidKit" };

	linkedItems[] = { "rhsusf_cvc_green_alt_helmet","rhsgref_TacVest_ERDL",Standard_Equipment };
	respawnLinkedItems[] = { "rhsusf_cvc_green_alt_helmet","rhsgref_TacVest_ERDL",Standard_Equipment };

	weapons[] = { "rhs_weap_m3a1","rhsusf_weap_m1911a1","Throw","Put" }; //should probably get M3's
	respawnWeapons[] = { "rhs_weap_m3a1","rhsusf_weap_m1911a1","Throw","Put" };

	magazines[] =
	{
		mag_3(rhsgref_30rnd_1143x23_M1911B_SMG),
		mag_3(rhsusf_mag_7x45acp_MHP),
		"rhs_mag_m18_red",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		mag_3(rhsgref_30rnd_1143x23_M1911B_SMG),
		mag_3(rhsusf_mag_7x45acp_MHP),
		"rhs_mag_m18_red",
		"rhs_mag_an_m8hc"
	};

};

class rhsgref_hidf_helipilot : rhsgref_hidf_base
{
	EdPrev(rhsgref_hidf_helipilot)
	Macro_scope

	displayName = "Helicopter Pilot";

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = { "veh_infantry_pilot_s" };
			speechPlural[] = { "veh_infantry_pilot_p" };
		};
	};
	textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
	nameSound = "veh_infantry_pilot_s";

	cost = 160000;
	camouflage = 2.0;

	Items[] = { "FirstAidKit" };
	RespawnItems[] = { "FirstAidKit" };

	linkedItems[] = { "rhsusf_hgu56p_green","rhsgref_TacVest_ERDL",Standard_Equipment };
	respawnLinkedItems[] = { "rhsusf_hgu56p_green","rhsgref_TacVest_ERDL",Standard_Equipment };

	weapons[] = { "rhsusf_weap_m1911a1","Throw","Put" };
	respawnWeapons[] = { "rhsusf_weap_m1911a1","Throw","Put" };

	magazines[] =
	{
		mag_4(rhsusf_mag_7x45acp_MHP),
		"rhs_mag_m18_red",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		mag_4(rhsusf_mag_7x45acp_MHP),
		"rhs_mag_m18_red",
		"rhs_mag_an_m8hc"
	};
};

class rhsgref_hidf_boat_driver: rhsgref_hidf_base
{
	EdPrev(rhsgref_hidf_boat_driver)
	Macro_scope

	displayName = "Driver (Boat)";//TODO

	class EventHandlers : EventHandlers {
		init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;}";
	};

	headgearList[] = {
		"rhsgref_helmet_M1_bare", 1,
		"rhsgref_helmet_M1_bare_alt01", 1,
		"rhsgref_helmet_M1_painted", 1,
		"rhsgref_helmet_M1_painted_alt01", 1,
		"rhsgref_helmet_M1_liner", 3,
		//"rhsgref_hat_M1951", 3,
		"rhsgref_hat_m1941cap", 7
	};

	linkedItems[] = {"rhsgref_hat_m1941cap","rhsgref_alice_webbing",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_hat_m1941cap","rhsgref_alice_webbing",Standard_Equipment};

	weapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};

	magazines[] =
	{
		mag_11(rhsgref_8Rnd_762x63_M2B_M1rifle),
		"rhs_mag_m18_red",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		mag_11(rhsgref_8Rnd_762x63_M2B_M1rifle),
		"rhs_mag_m18_red",
		"rhs_mag_an_m8hc"
	};
};