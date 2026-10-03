/* MACROS DEFINITION */

#define AUTHOR_MACRO author=$STR_RHS_AUTHOR_FULL;
#define Standard_Equipment ItemMap,ItemCompass,ItemWatch,ItemRadio
#define MACRO_SCOPE scope = 2;\
					scopeCurator = 2;\
					author=$STR_RHS_AUTHOR_FULL;
#define TLA_Headgear_Macro headgearList[] = {\
		"rhs_ssh68", .2,\
		"rhsgref_M56", .1,\
		"H_Hat_Safari_olive_F", .1,\
		"H_Cap_oli", .1,\
		"H_Booniehat_oli", .2,\
		"H_Bandanna_khk", .2,\
		"H_HeadBandage_stained_F", .1\
	};

/* TLA TROOPS CLASSNAMES */

// base TLA soldier
class rhsgref_tla_base: SoldierGB
{
	//EdPrev(rhsgref_tla_base)

	scope = 0;
	AUTHOR_MACRO

	side = 0;
	category = "Men";
	faction= "rhsgref_faction_tla";
	vehicleClass = "rhs_vehclass_infantry";
	editorSubcategory = "rhsgref_EdSubcat_infantry";

	identityTypes[] =
	{
		"LanguageFRE_F",
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

	model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";

	modelSides[] = {0,2};
	nakedUniform = "U_BasicBody";
	uniformClass = "rhsgref_uniform_TLA_1";
	/* hiddenSelections[] = {"camo1", "camo2", "insignia"};
	hiddenSelectionsTextures[] = {
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_1_co.paa",
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_2_co.paa"
	}; */

	primaryAmmoCoef = 0.4;
	secondaryAmmoCoef = 0.2;
	handgunAmmoCoef = 0.1;

	cost = 100000;

	class Wounds
	{
		tex[] = {};
		mat[] = {
			"A3\Characters_F\Civil\Data\c_cloth1.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth2.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth3.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth4.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
			"a3\characters_f_epb\blufor\data\clothing1_dirty.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\characters_f\civil\data\c_poloshirt.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat",
			"A3\characters_f\common\data\coveralls.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Civil\Data\hunter.rvmat",
			"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
			"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
			"a3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
			"a3\characters_f_gamma\guerrilla\data\ig_guerrilla2_1.rvmat",
			"A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat",
			"A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat",
			"a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1.rvmat",
			"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
			"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
			"a3\characters_f_epb\guerrilla\data\ig_guerrilla4_1.rvmat",
			"A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat",
			"A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat",
			"a3\characters_f_bootcamp\guerrilla\data\ig_guerrilla_6_1.rvmat",
			"A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat",
			"A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat",
			"a3\characters_f_beta\indep\data\officer.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",

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

	class EventHandlers : EventHandlers {
		init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;}";
	};

	items[] = {"FirstAidKit"};
	respawnitems[] = {"FirstAidKit"};

	linkedItems[] = {"rhsgref_chicom", "rhs_ssh68",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "rhs_ssh68",Standard_Equipment};

	weapons[] = {"rhs_weap_akm", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		mag_2(rhs_mag_f1)
	};
};

//Uniform Classes
class rhsgref_tla_para1: rhsgref_tla_base
{
	scope = 1;

	uniformClass = "rhsgref_uniform_TLA_1";

	model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";

	hiddenSelections[] = {"camo1", "insignia"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\tla_igl_lizard_full_co.paa"};
	//Had to disable hiddenSelectionsMaterials because it breaks wound mats...
	//hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\tla_igl_lizard.rvmat"};
};

class rhsgref_tla_para2: rhsgref_tla_base
{
	scope = 1;

	uniformClass = "rhsgref_uniform_TLA_2";

	model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";

	hiddenSelections[] = {"camo1", "insignia"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\tla_igl_lizard_half_co.paa"};
	//Had to disable hiddenSelectionsMaterials because it breaks wound mats...
	//hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\tla_igl_lizard.rvmat"};
};


//Brown Tee-shirt, camo tactical pants
/* class rhsgref_tla_para1: rhsgref_tla_base
{
	scope = 1;

	uniformClass = "rhsgref_uniform_TLA_1";

	model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";

	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa",
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
	};
};

//Camo jacket, OD uniform pants
class rhsgref_tla_para2: rhsgref_tla_base
{
	scope = 1;

	uniformClass = "rhsgref_uniform_TLA_2";

	model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_2_F.p3d";

	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_1_co.paa",
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_2_co.paa"
	};
};

//OD shirt, camo uniform pants
class rhsgref_tla_para3: rhsgref_tla_base
{
	scope = 1;

	uniformClass = "rhsgref_uniform_TLA_3";

	model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_3_F.p3d";

	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_3_F_1_co.paa",
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
	};
};

//Camo tank-top, brown tactical pants
class rhsgref_tla_para4: rhsgref_tla_base
{
	scope = 1;

	uniformClass = "rhsgref_uniform_TLA_4";

	model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";

	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_co.paa",
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"
	};
};

//Ragged heavy jacket with shorts and flip-flops... what was BIS thinking?
class rhsgref_tla_para5: rhsgref_tla_base
{
	scope = 1;

	uniformClass = "rhsgref_uniform_TLA_5";

	model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_5_F.p3d";

	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_5_F_1_co.paa",
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_5_F_2_co.paa"
	};
}; */

//Rifleman
class rhsgref_tla_rifleman: rhsgref_tla_para1
{
	EdPrev(rhsgref_tla_rifleman)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Insurgent (AKM)";//TODO: Find creative names.

	linkedItems[] = {"rhsgref_chicom", "rhs_ssh68",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "rhs_ssh68",Standard_Equipment};

	weapons[] = {"rhs_weap_akm", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_akm", "Throw", "Put"};
};
class rhsgref_tla_rifleman_akms: rhsgref_tla_para2
{
	EdPrev(rhsgref_tla_rifleman_akms)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Insurgent (AKMS)";

	linkedItems[] = {"rhsgref_chicom", "rhsgref_M56",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "rhsgref_M56",Standard_Equipment};

	weapons[] = {"rhs_weap_akms", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_akms", "Throw", "Put"};

	magazines[] =
	{
		mag_3(rhs_75Rnd_762x39mm_89),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_3(rhs_75Rnd_762x39mm_89),
		mag_2(rhs_mag_f1)
	};
};
class rhsgref_tla_rifleman_M16: rhsgref_tla_rifleman
{
	EdPrev(rhsgref_tla_rifleman_M16)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Insurgent (M16)";

	linkedItems[] = {"rhsgref_alice_webbing", "H_Cap_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_alice_webbing", "H_Cap_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_m16a4_carryhandle", "Throw", "Put"};

	magazines[] =
	{
		mag_8(rhs_mag_20Rnd_556x45_M193_2MAG_Stanag), //Switch to M193 if M16A1s get added
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_8(rhs_mag_20Rnd_556x45_M193_2MAG_Stanag),
		mag_2(rhs_mag_f1)
	};
};
class rhsgref_tla_rifleman_pm63: rhsgref_tla_rifleman
{
	EdPrev(rhsgref_tla_rifleman_pm63)
	displayName = "Insurgent (PM-63)";

	linkedItems[] = {"rhsgref_chicom", "H_Booniehat_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "H_Booniehat_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_pm63", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_pm63", "Throw", "Put"};
};
class rhsgref_tla_rifleman_vz58: rhsgref_tla_rifleman
{
	EdPrev(rhsgref_tla_rifleman_vz58)
	displayName = "Insurgent (Vz.58)";

	linkedItems[] = {"rhsgref_chicom", "H_Cap_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "H_Cap_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_savz58p", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_savz58p", "Throw", "Put"};

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
class rhsgref_tla_rifleman_m1: rhsgref_tla_para2
{
	EdPrev(rhsgref_tla_rifleman_m1)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Insurgent (M1 Garand)";

	linkedItems[] = {"rhsgref_chicom", "H_Hat_Safari_olive_F",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "H_Hat_Safari_olive_F",Standard_Equipment};

	weapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};

	magazines[] =
	{
		mag_11(rhsgref_8Rnd_762x63_M2B_M1rifle),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_11(rhsgref_8Rnd_762x63_M2B_M1rifle),
		mag_2(rhs_mag_f1)
	};
};
class rhsgref_tla_rifleman_m14: rhsgref_tla_para2
{
	EdPrev(rhsgref_tla_rifleman_m14)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Insurgent (M14)";

	linkedItems[]			= {"rhsgref_chicom", "H_Hat_Safari_olive_F",Standard_Equipment};
	respawnLinkedItems[]	= {"rhsgref_chicom", "H_Hat_Safari_olive_F",Standard_Equipment};

	weapons[]			= {"rhs_weap_m14","Throw","Put"};
	respawnWeapons[]	= {"rhs_weap_m14","Throw","Put"};

	magazines[] =
	{
		mag_6(rhsusf_20Rnd_762x51_m80_Mag),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_6(rhsusf_20Rnd_762x51_m80_Mag),
		mag_2(rhs_mag_f1)
	};
};
class rhsgref_tla_rifleman_l1a1: rhsgref_tla_para2
{
	EdPrev(rhsgref_tla_rifleman_l1a1)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Insurgent (L1A1)";

	linkedItems[] = {"rhsgref_alice_webbing", "H_Booniehat_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_alice_webbing", "H_Booniehat_oli",Standard_Equipment};

	weapons[] = {"rhs_weap_l1a1_wood","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_l1a1_wood","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_mag_20Rnd_762x51_m80_fnfal),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_mag_20Rnd_762x51_m80_fnfal),
		mag_2(rhs_mag_f1)
	};
};

class rhsgref_tla_marksman_m14: rhsgref_tla_para2
{
	EdPrev(rhsgref_tla_rifleman_m14)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Marksman (M14)";

	linkedItems[]			= {"rhsgref_chicom", "H_Hat_Safari_olive_F",Standard_Equipment};
	respawnLinkedItems[]	= {"rhsgref_chicom", "H_Hat_Safari_olive_F",Standard_Equipment};

	weapons[]			= {"rhs_weap_m14_bipod_M8541","Throw","Put"};
	respawnWeapons[]	= {"rhs_weap_m14_bipod_M8541","Throw","Put"};

	magazines[] =
	{
		mag_6(rhsusf_20Rnd_762x51_m80_Mag),
		mag_2(rhs_mag_f1)
	};
	respawnMagazines[] =
	{
		mag_6(rhsusf_20Rnd_762x51_m80_Mag),
		mag_2(rhs_mag_f1)
	};
};

//Leaders
class rhsgref_tla_squadleader: rhsgref_tla_para1
{
	EdPrev(rhsgref_tla_squadleader)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Cell Leader";

	cost = 500000;
	camouflage = 1.4;
	sensitivity = 3.3;
	icon = "iconManLeader";

	linkedItems[] = {"rhsgref_chicom", "H_Cap_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "H_Cap_oli",Standard_Equipment};

	weapons[]			= {"rhs_weap_akm", "Throw", "Put","Binocular"};
	respawnWeapons[]	= {"rhs_weap_akm", "Throw", "Put","Binocular"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		mag_2(rhs_mag_f1),
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		mag_2(rhs_mag_f1),
		"rhs_mag_rdg2_white"
	};
};

class rhsgref_tla_warlord: rhsgref_tla_para1
{
	EdPrev(rhsgref_tla_warlord)
	Macro_scope

	displayName = "$STR_RHSGREF_INF_WARLORD";
	icon="iconManOfficer";

	linkedItems[]			= {"H_MilCap_gry","rhs_vest_pistol_holster",Standard_Equipment};
	respawnLinkedItems[]	= {"H_MilCap_gry","rhs_vest_pistol_holster",Standard_Equipment};

	weapons[]			= {"rhs_weap_tt33","Binocular","Throw","Put"};
	respawnWeapons[]	= {"rhs_weap_tt33","Binocular","Throw","Put"};

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

//Grenadier
class rhsgref_tla_grenadier: rhsgref_tla_para1
{
	EdPrev(rhsgref_tla_grenadier)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Grenadier";

	linkedItems[] = {"rhsgref_chicom", "rhs_ssh68",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "rhs_ssh68",Standard_Equipment};

	cost = 130000;
	threat[] = {1,0.3,0.1};

	weapons[]			= {"rhs_weap_akms_gp25","Throw","Put"};
	respawnWeapons[]	= {"rhs_weap_akms_gp25","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		mag_10(rhs_VOG25)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		mag_10(rhs_VOG25)
	};
};
class rhsgref_tla_grenadier_m79: rhsgref_tla_para2
{
	EdPrev(rhsgref_tla_grenadier_m79)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Grenadier (M79)";

	linkedItems[] = {"rhsgref_chicom", "H_Cap_oli",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "H_Cap_oli",Standard_Equipment};

	cost = 130000;
	threat[] = {1,0.3,0.1};

	weapons[] = {"rhs_weap_m79","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m79","Throw","Put"};

	magazines[] =
	{
		mag_15(rhs_mag_M441_HE),
		mag_5(rhs_mag_M433_HEDP)
	};
	respawnMagazines[] =
	{
		mag_15(rhs_mag_M441_HE),
		mag_5(rhs_mag_M433_HEDP)
	};
};

//Machinegunner
class rhsgref_tla_machinegunner: rhsgref_tla_para2
{
	EdPrev(rhsgref_tla_machinegunner)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Machine Gunner";

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

	linkedItems[] = {"rhsgref_chicom", "H_Bandanna_khk",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "H_Bandanna_khk",Standard_Equipment};

	weapons[] = { "rhs_weap_pkm","Throw","Put" };
	respawnWeapons[] = { "rhs_weap_pkm","Throw","Put" };

	magazines[] =
	{
		mag_2(rhs_100Rnd_762x54mmR),
		"rhs_mag_f1"
	};
	respawnMagazines[] =
	{
		mag_2(rhs_100Rnd_762x54mmR),
		"rhs_mag_f1"
	};
	backpack = "rhs_sidorMG";
};
class rhsgref_tla_machinegunner_mg42: rhsgref_tla_machinegunner
{
	EdPrev(rhsgref_tla_machinegunner_mg42)
	displayName = "Machine Gunner (MG42)";

	weapons[] = { "rhs_weap_mg42","Throw","Put" };
	respawnWeapons[] = { "rhs_weap_mg42","Throw","Put" };

	magazines[] =
	{
		mag_6(rhsgref_50Rnd_792x57_SmE_drum),
		"rhs_mag_f1"
	};
	respawnMagazines[] =
	{
		mag_6(rhsgref_50Rnd_792x57_SmE_drum),
		"rhs_mag_f1"
	};
	backpack = "rhsgref_tla_backpack_mg42";
};


//Antitank
class rhsgref_tla_rifleman_rpg75: rhsgref_tla_para1
{
	EdPrev(rhsgref_tla_rifleman_rpg75)
	MACRO_SCOPE
	TLA_Headgear_Macro

	displayName = "Insurgent (RPG-75)";

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

	secondaryAmmoCoef = 0.5;

	linkedItems[] = {"rhsgref_chicom", "rhsgref_M56",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "rhsgref_M56",Standard_Equipment};

	weapons[] = {"rhs_weap_pm63", "rhs_weap_rpg75", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_pm63", "rhs_weap_rpg75", "Throw", "Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		"rhs_mag_f1",
		"rhs_rpg75_mag"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		"rhs_mag_f1",
		"rhs_rpg75_mag"
	};
};

class rhsgref_tla_specialist_at: rhsgref_tla_rifleman_rpg75
{
	EdPrev(rhsgref_tla_specialist_at)

	displayName = "AT Specialist";

	linkedItems[] = {"rhsgref_chicom", "H_Bandanna_khk",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "H_Bandanna_khk",Standard_Equipment};

	weapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		"rhs_rpg7_PG7V_mag"
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_89),
		"rhs_rpg7_PG7V_mag"
	};

	backpack="rhsgref_tla_backpack_rpg";
};

class rhsgref_tla_saboteur: rhsgref_tla_para2
{
	EdPrev(rhsgref_tla_saboteur)
	Macro_scope

	displayName= "$STR_RHSGREF_INF_SABOTEUR";

	cost = 115000;
	camouflage = 1.6;
	sensitivity = 2.5;

	engineer = 0;

	canDeactivateMines = 1;
	detectSkill = 80;
	threat[] = {1,0.5,0.1};

	icon = "iconManExplosive";
	picture = "pictureExplosive";

    linkedItems[] = {"G_Balaclava_blk","V_TacVest_blk",Standard_Equipment};
	respawnLinkedItems[] = {"G_Balaclava_blk","V_TacVest_blk",Standard_Equipment};

	backpack="rhsgref_nat_backpack_explosives";
};

//Medic
class rhsgref_tla_medic: rhsgref_tla_para1
{
	EdPrev(rhsgref_tla_medic)
	MACRO_SCOPE

	displayName = "Medic";

	headgearList[] = {
		"H_Hat_Safari_olive_F", .2,
		"H_Cap_oli", .2,
		"H_Booniehat_oli", .3,
		"H_Bandanna_khk", .3
	};

	attendant = 1;
	icon = "iconManMedic";
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

	linkedItems[] = {"rhsgref_chicom", "H_Bandanna_khk",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "H_Bandanna_khk",Standard_Equipment};

	weapons[] = {"rhs_weap_m3a1", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_m3a1", "Throw", "Put"};

	magazines[] =
	{
		mag_6(rhsgref_30rnd_1143x23_M1911B_2mag_SMG)
	};
	respawnMagazines[] =
	{
		mag_6(rhsgref_30rnd_1143x23_M1911B_2mag_SMG)
	};

	/* weapons[] = {"rhs_weap_savz58v", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_savz58v", "Throw", "Put"};

	magazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_Savz58)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_30Rnd_762x39mm_Savz58)
	}; */

	backpack = "rhs_medic_bag_filled";
};

// Mechanic
class rhsgref_tla_mechanic: rhsgref_tla_para1
{
	EdPrev(rhsgref_tla_mechanic)
	MACRO_SCOPE

	displayName= "Mechanic";

	cost = 220000;
	camouflage = 1.6;
	sensitivity = 2.5;
	canDeactivateMines = 0;
	engineer = 1;
	detectSkill = 0;
	threat[] = {1,0.5,0.1};
	icon = "iconManEngineer";
	picture = "pictureRepair";

	linkedItems[] = {"rhsgref_chicom", "H_Bandanna_khk",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "H_Bandanna_khk",Standard_Equipment};

	weapons[] = {"rhs_weap_aks74u",DefaultManWeapons};
	respawnWeapons[] = {"rhs_weap_aks74u",DefaultManWeapons};
	magazines[] =
	{
		mag_3(rhs_30Rnd_545x39_7N6_AK),
		mag_2(rhs_mag_rgd5)
	};
	respawnMagazines[] =
	{
		mag_3(rhs_30Rnd_545x39_7N6_AK),
		mag_2(rhs_mag_rgd5)
	};

	backpack="rhsgref_cdf_backpack_engineer";
};

//Vehicle Crew
class rhsgref_tla_crew: rhsgref_tla_para2
{
	EdPrev(rhsgref_tla_crew)
	MACRO_SCOPE

	displayName = "Crewman";

	headgearList[] = {
		"rhs_tsh4_ess", .5,
		"rhs_tsh4", .5
	};

	cost = 90000;

	linkedItems[] = {"rhsgref_chicom", "rhs_tsh4",Standard_Equipment};
	respawnLinkedItems[] = {"rhsgref_chicom", "rhs_tsh4",Standard_Equipment};

	weapons[] = {"rhs_weap_savz61", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_savz61", "Throw", "Put"};

	magazines[] =
	{
		mag_5(rhsgref_20rnd_765x17_vz61)
	};
	respawnMagazines[] =
	{
		mag_5(rhsgref_20rnd_765x17_vz61)
	};
};