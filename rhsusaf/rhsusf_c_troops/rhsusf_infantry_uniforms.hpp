
#define INVENTORY_CATEGORY uniform
/* US SOCOM Uniforms */

//- G3 Uniforms
class rhsusf_socom_uniform_base : SoldierWB
{
	displayName= "$STR_RHSUSF_INF_RIFLEMAN";

	category = "Men";
	faction = "rhs_faction_socom";
	vehicleClass = "rhs_vehclass_MARSOC"; // Class from CfgVehicleClasses. Depreciated, should not be used anymore.
	editorSubcategory = "rhs_EdSubcat_infantry_ocp";
	AUTHOR_MACRO

	dlc = "RHS_USAF";

	side = 1;

	scope = 0;

	portrait = "";
	picture = "";
	icon = "iconMan";

	identityTypes[]=
	{
		"LanguageENG_F",
		"Head_NATO",
		"rhsusf_g_army"
	};
	faceType = "Man_A3";
	genericNames="NATOMen";

	cost = 100000;

	// Skill Set

	accuracy = 3;
	sensitivity = 3;  // ?
	threat[] = {1,0.1,0.1};
	camouflage = 1.4; // ?
	minFireTime = 7; // ?
	canCarryBackPack = 1;

	primaryAmmoCoef = 0.4;
	secondaryAmmoCoef = 0.2;
	handgunAmmoCoef = 0.1;

	// Model

	modelSides[] = {1,3};

	model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";

	hiddenSelections[] = {"Camo", "Camo2", "Gloves", "insignia"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\Data\gen3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\mechanix_g_co.paa"
	};

	nakedUniform = "U_BasicBody";
	uniformClass = "rhs_uniform_g3_mc";

	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"rhsusf\addons\rhsusf_infantry2\data\gen3.rvmat",
			"rhsusf\addons\rhsusf_infantry2\data\gen3_w.rvmat",
			"rhsusf\addons\rhsusf_infantry2\data\gen3_w.rvmat",
			A3_Injury
		};
	};

	class EventHandlers: EventHandlers {
		class RHS_NVG_Check {
			init = "_this call rhsusf_fnc_nvgHandler";
		};
	};
};

// G3 Multicam
class rhsusf_socom_mc_uniform : rhsusf_socom_uniform_base
{
	scope = 1;
	AUTHOR_MACRO

	uniformClass = "rhs_uniform_g3_mc";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\Data\gen3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\Mechanix_tan_co.paa"
	};
};

// G3 M81
class rhsusf_socom_g3_m81_uniform : rhsusf_socom_uniform_base
{
	scope = 1;
	AUTHOR_MACRO
	displayName= "$STR_RHSUSF_INF_RIFLEMAN";

	uniformClass = "rhs_uniform_g3_m81";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\Data\gen3_m81_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\Mechanix_black_co.paa"
	};
};

// G3 AOR2
class rhsusf_socom_g3_aor2_uniform : rhsusf_socom_uniform_base
{
	scope = 1;
	AUTHOR_MACRO

	uniformClass = "rhs_uniform_g3_aor2";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\Data\gen3_aor2_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\merrells_blk_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\mechanix_black_co.paa"
	};
};

// G3 Tan
class rhsusf_socom_g3_tan_uniform : rhsusf_socom_uniform_base
{
	scope = 1;
	AUTHOR_MACRO
	displayName= "$STR_RHSUSF_INF_RIFLEMAN";

	uniformClass = "rhs_uniform_g3_m81";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\Data\gen3_tan_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\Mechanix_tan2_co.paa"
	};
};

// G3 Ranger Green
class rhsusf_socom_g3_rgr_uniform : rhsusf_socom_uniform_base
{
	scope = 1;
	AUTHOR_MACRO

	uniformClass = "rhs_uniform_g3_m81";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\Data\gen3_rgr_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\merrells_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\Mechanix_green_co.paa"
	};
};

// G3 Black
class rhsusf_socom_g3_blk_uniform : rhsusf_socom_uniform_base
{
	scope = 1;
	AUTHOR_MACRO

	uniformClass = "rhs_uniform_g3_m81";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\Data\gen3_blk_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\Merrells_blk_co.paa",
		"rhsusf\addons\rhsusf_infantry2\data\Mechanix_black_co.paa"
	};
};

/* Army Combat Uniform */
class rhsusf_army_acu_uniform : rhsusf_socom_uniform_base
{
	scope = 1;
	AUTHOR_MACRO

	faction = "rhs_faction_usarmy_wd";
	
	uniformClass = "rhs_uniform_acu_ucp";
	model = "rhsusf\addons\rhsusf_infantry2\acu\rhsusf_uniform_acu.p3d";

	class Wounds
	{
		tex[] =
		{

		};
		mat[] =
		{
			"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_01.rvmat",
			"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_w01.rvmat",
			"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_w01.rvmat",

			"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_02.rvmat",
			"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_w02.rvmat",
			"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_w02.rvmat",

			A3_Injury
		};
	};

	hiddenSelections[] = {"camo1","camo2","camo3","identity","flag","insignia"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_01_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_02_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_03_ucp_co.paa",
		"#(argb,8,8,3)color(0,0,0,0)",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_acc1_co.paa"
	};
};

class rhsusf_army_acu2_uniform : rhsusf_army_acu_uniform
{
	scope = 1;
	AUTHOR_MACRO

	faction = "rhs_faction_usarmy_wd";

	uniformClass = "rhs_uniform_acu_ucp2";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_01_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_02_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_03_ucp_co.paa",
		"#(argb,8,8,3)color(0,0,0,0)",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_acc2_co.paa"
	};
};

class rhsusf_army_acu_ucpd_uniform : rhsusf_army_acu_uniform
{
	scope = 1;
	AUTHOR_MACRO

	faction = "rhs_faction_usarmy_d";

	uniformClass = "rhs_uniform_acu_ucpd";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_01_ucpd_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_02_ucpd_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_03_ucp_co.paa",
		"#(argb,8,8,3)color(0,0,0,0)",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_acc2_co.paa"
	};
};

class rhsusf_army_acu_oefcp_uniform : rhsusf_army_acu_uniform
{
	scope = 1;
	AUTHOR_MACRO

	faction = "rhs_faction_usarmy_d";

	uniformClass = "rhs_uniform_acu_oefcp";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_01_oefcp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_02_oefcp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_03_ucp_co.paa",
		"#(argb,8,8,3)color(0,0,0,0)",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_acc2_co.paa"
	};
};

class rhsusf_army_acu_ocp_uniform : rhsusf_army_acu_uniform
{
	scope = 1;
	AUTHOR_MACRO

	faction = "rhs_faction_usarmy_wd";

	uniformClass = "rhs_uniform_acu_ocp";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_01_ocp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_02_ocp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_03_ucp_co.paa",
		"#(argb,8,8,3)color(0,0,0,0)",
		"rhsusf\addons\rhsusf_infantry2\acu\data\rhsusf_uniform_acu_acc2_co.paa"
	};
};

/* Airman Battle Uniform */

class rhsusf_airforce_abu_uniform : rhsusf_socom_uniform_base
{
	scope = 1;
	AUTHOR_MACRO

	faction = "rhs_faction_usaf";

	uniformClass = "rhs_uniform_abu";
	model = "rhsusf\addons\rhsusf_infantry2\abu\abu.p3d";

	class Wounds //TODO
	{
		tex[] = {};
		mat[] =
		{
			"rhsusf\addons\rhsusf_infantry2\abu\data\uniform_bdu.rvmat",
			"rhsusf\addons\rhsusf_infantry2\abu\data\uniform_bdu_w.rvmat",
			"rhsusf\addons\rhsusf_infantry2\abu\data\uniform_bdu_w.rvmat",
			A3_Injury
		};
	};

	hiddenSelections[] = {"insignia"};
};

/* Battle Dress Uniform */

class rhsusf_army_bdu_erdl_uniform : rhsusf_airforce_abu_uniform
{
	scope = 1;
	AUTHOR_MACRO

	faction = "rhs_faction_usarmy_wd";

	uniformClass = "rhs_uniform_bdu_erdl";
	model = "rhsusf\addons\rhsusf_infantry3\bdu\rhsusf_uniform_bdu.p3d";

	class Wounds //TODO
	{
		tex[] = {};
		mat[] =
		{
			"rhsusf\addons\rhsusf_infantry3\bdu\data\uniform_bdu.rvmat",
			"rhsusf\addons\rhsusf_infantry3\bdu\data\uniform_bdu_w.rvmat",
			"rhsusf\addons\rhsusf_infantry3\bdu\data\uniform_bdu_w.rvmat",
			A3_Injury
		};
	};

	hiddenSelections[] = {"insignia"};
};