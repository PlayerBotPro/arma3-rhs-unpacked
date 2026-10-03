class CfgVehicles
{
	class FxCartridge;
	class RHS_Cartridge_545x39 : FxCartridge {
		/*disappearAtContact = 0;
		submerged = -0.5;
		submergeSpeed = 0.25;
		timeToLive = 20;*/
		model = "\rhsafrf\addons\rhs_c_weapons\data\cartridge_545x39";
	};
	class RHS_Cartridge_762x39 : RHS_Cartridge_545x39 {
		model = "\rhsafrf\addons\rhs_c_weapons\data\cartridge_762x39";
	};
	class RHS_Cartridge_762x54R : RHS_Cartridge_545x39 {
		model = "\rhsafrf\addons\rhs_c_weapons\data\cartridge_762x54R";
	};
	class Thing;
	class ThingX;
	class rhs_collider : Thing
	{
		scope = 1;
		scopeCurator = 0;
		model = "\rhsafrf\addons\rhs_c_weapons\data\rhs_collider";
		accuracy = 1000;
		animated = 0;
		countsForScoreboard = 0;
		class DestructionEffects {};
	};
	class rhs_collider_simple : rhs_collider
	{
		model = "\rhsafrf\addons\rhs_c_weapons\data\rhs_collider_simple";
	};
	class House;
	class rhs_vehcollider : House
	{
		scope = 1;
		scopeCurator = 0;
		accuracy = 1000;
		animated = 0;
		countsForScoreboard = 0;
		class DestructionEffects {};
		model = "\rhsafrf\addons\rhs_c_weapons\data\rhs_vehcollider";
	};
	class MineBase;

	class ModuleMine_APERSMine_F;

	class rhs_mine_pmn2: MineBase
	{
		scope 				= 2;
		ammo 				= "rhs_mine_pmn2_ammo";
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_pmn2";
		AUTHOR_MACRO
		displayName 		= "$STR_RHS_CFGMAGAZINES_PMN20";
		icon 				= "iconExplosiveAP";
		picture 			= "\A3\Weapons_F\Data\clear_empty.paa";
		model 				= "\rhsafrf\addons\rhs_weapons\mines\rhs_pmn2";
		descriptionShort 	= "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_pmn2_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= $STR_RHS_CFGMAGAZINES_PMN20;
		explosive		= "rhs_mine_pmn2_ammo";
	};

	class rhs_mine_tm62m: MineBase
	{
		scope 				= 2;
		ammo 				= "rhs_mine_tm62m_ammo";
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_tm62m";
		AUTHOR_MACRO
		displayName 		= "$STR_RHS_CFGMAGAZINES_TM62M0";
		icon 				= "iconExplosiveAT";
		picture 			= "\A3\Weapons_F\Data\clear_empty.paa";
		model 				= "\rhsafrf\addons\rhs_weapons\mines\rhs_tm62m";
		descriptionShort 	= "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_tm62m_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= $STR_RHS_CFGMAGAZINES_TM62M0;
		explosive		= "rhs_mine_tm62m_ammo";
	};

	class rhs_mine_msk40p_white: MineBase
	{
		scope				= 2;
		AUTHOR_MACRO
		ammo				= "rhs_mine_msk40p_white_ammo";
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_msk40p_white";
		displayName			= "$STR_RHS_MINE_MSK40P_W_MAG_DISPLAYNAME";
		icon				= "iconExplosiveAP";
		picture				= "\A3\Weapons_F\Data\clear_empty.paa";
		model 				= "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_white_e";
		descriptionShort	= "$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_msk40p_red: rhs_mine_msk40p_white
	{
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_msk40p_red";
		displayName			= "$STR_RHS_MINE_MSK40P_R_MAG_DISPLAYNAME";
		ammo				= "rhs_mine_msk40p_red_ammo";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_red_e";
	};
	class rhs_mine_msk40p_green: rhs_mine_msk40p_white
	{
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_msk40p_green";
		displayName			= "$STR_RHS_MINE_MSK40P_G_MAG_DISPLAYNAME";
		ammo				= "rhs_mine_msk40p_green_ammo";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_green_e";
	};
	class rhs_mine_msk40p_blue: rhs_mine_msk40p_white
	{
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_msk40p_blue";
		displayName			= "$STR_RHS_MINE_MSK40P_B_MAG_DISPLAYNAME";
		ammo				= "rhs_mine_msk40p_blue_ammo";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_blue_e";
	};
	class rhs_mine_sm320_white: rhs_mine_msk40p_white
	{
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_sm320_white";
		displayName			= "$STR_RHS_MINE_SM320_W_MAG_DISPLAYNAME";
		ammo				= "rhs_mine_sm320_white_ammo";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_white_e";
	};
	class rhs_mine_sm320_red: rhs_mine_sm320_white
	{
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_sm320_red";
		displayName			= "$STR_RHS_MINE_SM320_R_MAG_DISPLAYNAME";
		ammo				= "rhs_mine_sm320_red_ammo";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_red_e";
	};
	class rhs_mine_sm320_green: rhs_mine_sm320_white
	{
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_sm320_green";
		displayName			= "$STR_RHS_MINE_SM320_G_MAG_DISPLAYNAME";
		ammo				= "rhs_mine_sm320_green_ammo";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_green_e";
	};
	class rhs_mine_msk40p_white_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "$STR_RHS_MINE_MSK40P_W_MAG_DISPLAYNAME";
		explosive		= "rhs_mine_msk40p_white_ammo";
	};
	class rhs_mine_msk40p_red_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "$STR_RHS_MINE_MSK40P_R_MAG_DISPLAYNAME";
		explosive		= "rhs_mine_msk40p_red_ammo";
	};
	class rhs_mine_msk40p_green_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "$STR_RHS_MINE_MSK40P_G_MAG_DISPLAYNAME";
		explosive		= "rhs_mine_msk40p_green_ammo";
	};
	class rhs_mine_msk40p_blue_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "$STR_RHS_MINE_MSK40P_B_MAG_DISPLAYNAME";
		explosive		= "rhs_mine_msk40p_blue_ammo";
	};
	class rhs_mine_sm320_white_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "$STR_RHS_MINE_SM320_W_MAG_DISPLAYNAME";
		explosive		= "rhs_mine_sm320_white_ammo";
	};
	class rhs_mine_sm320_red_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "$STR_RHS_MINE_SM320_R_MAG_DISPLAYNAME";
		explosive		= "rhs_mine_sm320_red_ammo";
	};
	class rhs_mine_sm320_green_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "$STR_RHS_MINE_SM320_G_MAG_DISPLAYNAME";
		explosive		= "rhs_mine_sm320_green_ammo";
	};

	class rhs_mine_msk40p_white_used: ThingX
	{
		scope 				= 1;
		scopeCurator		= 1;

		reversed 			= 1;

		displayName			= "MSK-40P (Used)";
		editorCategory		= "EdCat_Weapons";
		editorSubcategory	= "EdSubcat_Explosives";
		model 				= "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_u";

		hiddenSelections[]			= {"camo1"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\mines\data\rhsafrf_msk40p_white_co.paa"};
	};
	class rhs_mine_msk40p_red_used: rhs_mine_msk40p_white_used
	{
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\mines\data\rhsafrf_msk40p_red_co.paa"};
	};
	class rhs_mine_msk40p_green_used: rhs_mine_msk40p_white_used
	{
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\mines\data\rhsafrf_msk40p_green_co.paa"};
	};
	class rhs_mine_msk40p_blue_used: rhs_mine_msk40p_white_used
	{
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\mines\data\rhsafrf_msk40p_blue_co.paa"};
	};
	class rhs_mine_sm320_white_used: rhs_mine_msk40p_white_used
	{
		model						= "\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_u";
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\mines\data\rhsafrf_sm320_white_co.paa"};
	};
	class rhs_mine_sm320_red_used: rhs_mine_sm320_white_used
	{
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\mines\data\rhsafrf_sm320_red_co.paa"};
	};
	class rhs_mine_sm320_green_used: rhs_mine_sm320_white_used
	{
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\mines\data\rhsafrf_sm320_green_co.paa"};
	};
	class rhs_mine_ozm72_a: MineBase
	{
		scope				= 2;
		ammo				= "rhs_mine_ozm72_a_ammo";
		editorPreview		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_ozm72_a";
		displayName			= "$STR_RHS_CFGMAGAZINES_OZM72A";
		icon				= "iconExplosiveAP";
		picture				= "\A3\Weapons_F\Data\clear_empty.paa";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_a_e";
		descriptionShort	= "$STR_RHS_CFGMAGAZINES_OZM72A_DESCRIPTIONSHORT";

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_ozm72_b: rhs_mine_ozm72_a
	{
		ammo				= "rhs_mine_ozm72_b_ammo";
		editorPreview		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_ozm72_b";
		displayName			= "$STR_RHS_CFGMAGAZINES_OZM72B";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_b_e";
		descriptionShort	= "$STR_RHS_CFGMAGAZINES_OZM72B_DESCRIPTIONSHORT";
	};
	class rhs_mine_ozm72_c: rhs_mine_ozm72_a
	{
		ammo				= "rhs_mine_ozm72_c_ammo";
		editorPreview		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_ozm72_c";
		displayName			= "$STR_RHS_CFGMAGAZINES_OZM72C";
		icon				= "iconExplosiveAPDirectional";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_c_e";
		descriptionShort	= "$STR_RHS_CFGMAGAZINES_OZM72C_DESCRIPTIONSHORT";
	};
	class rhs_ec75: MineBase
	{
		AUTHOR_MACRO
		scope 				= 2;
		ammo 				= "rhs_ec75_ammo";
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_ec75";
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC75";
		icon 				= "iconExplosiveGP";
		picture 			= "\A3\Weapons_F\Data\clear_empty.paa";
		model 				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_e";
		descriptionShort 	= "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "";
		};
	};	
	class rhs_ec75_sand: rhs_ec75
	{
		AUTHOR_MACRO
		ammo 				= "rhs_ec75_sand_ammo";
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_ec75_sand";
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC75_SAND";
		model 				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_e";
	};	
	class rhs_ec200: rhs_ec75
	{
		AUTHOR_MACRO
		ammo 				= "rhs_ec200_ammo";
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_ec200";
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC200";
		icon 				= "iconExplosiveGP";
		picture 			= "\A3\Weapons_F\Data\clear_empty.paa";
		model 				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_e";
	};
	class rhs_ec200_sand: rhs_ec200
	{
		AUTHOR_MACRO
		ammo 				= "rhs_ec200_sand_ammo";
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_ec200_sand";
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC200_SAND";
		model 				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_e";
	};
	class rhs_ec400: rhs_ec75
	{
		AUTHOR_MACRO
		ammo 				= "rhs_ec400_ammo";
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_ec400";
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC400";
		icon 				= "iconExplosiveGP";
		picture 			= "\A3\Weapons_F\Data\clear_empty.paa";
		model 				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_e";
	};
	class rhs_ec400_sand: rhs_ec400
	{
		AUTHOR_MACRO
		ammo 				= "rhs_ec400_sand_ammo";
		editorPreview 		= "\rhsafrf\addons\rhs_editorpreviews\data\rhs_ec400_sand";
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC400_SAND";
		model 				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_e";
	};

	/* Ammo boxes */

	#include "rhs_ammocrates.h"

	/* WEAPONS */
	// Weapons that can be spawned as an object both in the editor and in Zeus
	// obsole items definition with scope = 1
	#include "obsolete\cfgItemsObsolete.hpp"
	// new ground holders
	#define MAGAZINE_MACRO(item_name) \
		class TransportMagazines {\
			class ##item_name## {\
				magazine = ##item_name##;\
				count = 1;\
			};\
		};
	#define WEAPON_MACRO(item_name) \
		class TransportWeapons {\
			class ##item_name## {\
				weapon = ##item_name##;\
				count = 1;\
			};\
		};
	#define GROUNDHOLDER_MACRO(nameN,dispName,classN,EdClassN,EdSubClassN) \
		class Item_##nameN## : Item_Base_F {\
				scope = 2;\
				scopeCurator = 2;\
				AUTHOR_MACRO \
				displayName = ##dispName##;\
				vehicleClass = ##classN##;\
				editorCategory = ##EdClassN##;\
				editorSubcategory = ##EdSubClassN##;\
				model = \A3\Weapons_f\dummyweapon.p3d;\
				class TransportItems {\
					class ##nameN## {\
					name = ##nameN##;\
					count = 1;\
				};\
			};\
		};
	#define GROUNDHOLDER_MAGAZINE_MACRO(nameN,dispName) \
	class Item_##nameN## : WeaponHolder_Single_limited_item_F {\
		scope = 2;\
		scopeCurator = 2;\
		AUTHOR_MACRO \
		displayName = ##dispName##;\
		vehicleClass = Magazines;\
		editorCategory = EdCat_Weapons;\
		editorSubcategory = EdSubcat_Magazines;\
		MAGAZINE_MACRO(nameN)\
	};
	#define GROUNDHOLDER_WEAPON_MACRO(nameW,nameN,dispName,EdSubClassN) \
	class Item_##nameW## : Weapon_Base_F {\
		scope = 2;\
		scopeCurator = 2;\
		AUTHOR_MACRO \
		model = rhsafrf\addons\rhs_c_weapons\data\rhs_weaponHolder;\
		displayName = ##dispName##;\
		vehicleClass = ##classN##;\
		editorSubcategory = ##EdSubClassN##;\
		WEAPON_MACRO(nameW)\
		MAGAZINE_MACRO(nameN)\
	};
	#define GROUNDHOLDER_PISTOL_MACRO(nameW,nameN,dispName,EdSubClassN) \
	class Item_##nameW## : Pistol_Base_F {\
		scope = 2;\
		scopeCurator = 2;\
		AUTHOR_MACRO \
		displayName = ##dispName##;\
		vehicleClass = ##classN##;\
		editorSubcategory = ##EdSubClassN##;\
		WEAPON_MACRO(nameW)\
		MAGAZINE_MACRO(nameN)\
	};
	#define GROUNDHOLDER_PISTOL_NOMAG_MACRO(nameW,dispName,EdSubClassN) \
	class Item_##nameW## : Pistol_Base_F {\
		scope = 2;\
		scopeCurator = 2;\
		AUTHOR_MACRO \
		displayName = ##dispName##;\
		vehicleClass = ##classN##;\
		editorSubcategory = ##EdSubClassN##;\
		WEAPON_MACRO(nameW)\
	};
	#define GROUNDHOLDER_LAUNCHER_MACRO(nameW,nameN,dispName,EdSubClassN) \
	class Item_##nameW## : Launcher_Base_F {\
		scope = 2;\
		scopeCurator = 2;\
		AUTHOR_MACRO \
		displayName = ##dispName##;\
		vehicleClass = ##classN##;\
		editorSubcategory = ##EdSubClassN##;\
		WEAPON_MACRO(nameW)\
		MAGAZINE_MACRO(nameN)\
	};
	/*
		Regenerate with
		["rhs_c_weapons"] execVM "rhsafrf\addons\rhs_main\scripts\generators\createGroundHolders.sqf" and paste clip board content to file below
	*/
	#include "rhs_groundHolders.hpp"

	/* MODULES */
	class Site_F;
	class Site_Minefield: Site_F
	{
		class Arguments
		{
			class minesType
			{
				class values
				{
					class rhs_pmn2_mine
					{
						name = "$STR_RHS_CFGMAGAZINES_PMN20";
						value = "rhs_mine_pmn2";
						default = 0;
					};
					class rhs_tm62m_mine
					{
						name = "$STR_RHS_CFGMAGAZINES_TM62M0";
						value = "rhs_mine_tm62m";
						default = 0;
					};
					class rhs_msk40p_white_mine
					{
						name = "$STR_RHS_MINE_MSK40P_W_MAG_DISPLAYNAME";
						value = "rhs_mine_msk40p_white";
						default = 0;
					};
					class rhs_msk40p_red_mine
					{
						name = "$STR_RHS_MINE_MSK40P_R_MAG_DISPLAYNAME";
						value = "rhs_mine_msk40p_red";
						default = 0;
					};
					class rhs_msk40p_green_mine
					{
						name = "$STR_RHS_MINE_MSK40P_G_MAG_DISPLAYNAME";
						value = "rhs_mine_msk40p_green";
						default = 0;
					};
					class rhs_msk40p_blue_mine
					{
						name = "$STR_RHS_MINE_MSK40P_B_MAG_DISPLAYNAME";
						value = "rhs_mine_msk40p_blue";
						default = 0;
					};
					class rhs_sm320_white_mine
					{
						name = "$STR_RHS_MINE_SM320_W_MAG_DISPLAYNAME";
						value = "rhs_mine_sm320_white";
						default = 0;
					};
					class rhs_sm320_red_mine
					{
						name = "$STR_RHS_MINE_SM320_R_MAG_DISPLAYNAME";
						value = "rhs_mine_sm320_red";
						default = 0;
					};
					class rhs_sm320_green_mine
					{
						name = "$STR_RHS_MINE_SM320_G_MAG_DISPLAYNAME";
						value = "rhs_mine_sm320_green";
						default = 0;
					};
					class rhs_ozm72_a_mine
					{
						name = "$STR_RHS_CFGMAGAZINES_OZM72A";
						value = "rhs_mine_ozm72_a";
						default = 0;
					};
					class rhs_ozm72_b_mine
					{
						name = "$STR_RHS_CFGMAGAZINES_OZM72B";
						value = "rhs_mine_ozm72_b";
						default = 0;
					};
				};
			};
		};
	};
};