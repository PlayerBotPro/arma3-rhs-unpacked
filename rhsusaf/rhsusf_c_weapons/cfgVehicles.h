class CfgVehicles
{
	class FxCartridge;
	class RHS_Cartridge_556x45_m855 : FxCartridge {
		model = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_556x45_m855";
	};

	class Thing;
	class ThingX;
	class rhs_collider : Thing
	{
		scope = 1;
		scopeCurator = 0;
		model = "\rhsusf\addons\rhsusf_c_weapons\data\rhs_collider";
		accuracy = 1000;
		animated = 0;
		countsForScoreboard = 0;
		class DestructionEffects {};
	};
	class rhs_collider_simple : rhs_collider
	{
		model = "\rhsusf\addons\rhsusf_c_weapons\data\rhs_collider_simple";
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
		model = "\rhsusf\addons\rhsusf_c_weapons\data\rhs_vehcollider";
	};

	/* Editor/Zeus placeable items/props */
	class rhsusf_ammocan_base: ThingX
	{
		scope = 1;
		scopeCurator = 1;

		AUTHOR_MACRO

		model = "";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Military";
		vehicleClass = "Small_items";
	};
	class rhsusf_ammocan_M2A1: rhsusf_ammocan_base
	{
		scope = 2;
		scopeCurator = 2;

		displayName = "M2A1 Ammo Can";
		model = "\rhsusf\addons\rhsusf_weapons\ammoboxes\50cal\cal50_box";
	};
	class rhsusf_ammocan_M19A1: rhsusf_ammocan_base
	{
		scope = 2;
		scopeCurator = 2;

		displayName = "M19A1 Ammo Can";
		model = "\rhsusf\addons\rhsusf_weapons\ammoboxes\762\762_box";
	};

	/* Mines */
	class MineBase;
	class rhsusf_mine_M19: MineBase
	{
		scope = 2;
		ammo = "rhsusf_mine_m19_ammo";
		editorPreview = "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_mine_M19";
		displayName = "$STR_RHSUSF_M19_ATMINE_DISPLAY_NAME";
		icon = "iconExplosiveAT";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m19_e";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "The design of anti-tank mines has not changed much during the last 50 years. An AT mine is the strongest ground mine manufactured today. They are triggered only by vehicles.";
		};
	};
	class rhsusf_mine_m14: MineBase
	{
		scope = 2;
		ammo = "rhsusf_mine_m14_ammo";
		editorPreview = "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_mine_m14";
		displayName = "$STR_RHSUSF_M14_APMINE_DISPLAY_NAME";
		icon = "iconExplosiveAP";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m14_e";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhsusf_mine_m49a1_3m: MineBase
	{
		scope				= 2;
		AUTHOR_MACRO
		ammo				= "rhsusf_mine_m49a1_3m_ammo";
		editorPreview 		= "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_mine_m49a1_3m";
		displayName			= "M49A1 (3m)";
		icon				= "iconExplosiveAP";
		picture				= "\A3\Weapons_F\Data\clear_empty.paa";
		model 				= "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_a_e";
		descriptionShort	= "$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhsusf_mine_m49a1_6m: rhsusf_mine_m49a1_3m
	{
		displayName			= "M49A1 (6m)";
		ammo				= "rhsusf_mine_m49a1_6m_ammo";
		//editorPreview 		= "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_mine_m49a1_6m";
		model 				= "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_b_e";
	};
	class rhsusf_mine_m49a1_10m: rhsusf_mine_m49a1_3m
	{
		displayName			= "M49A1 (10m)";
		ammo				= "rhsusf_mine_m49a1_10m_ammo";
		//editorPreview 		= "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_mine_m49a1_10m";
		model 				= "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_c_e";
	};
	class rhsusf_mine_m49a1_used: ThingX
	{
		scope 				= 1;
		scopeCurator		= 1;

		reversed 			= 1;

		displayName			= "M49A1 (Used)";
		editorCategory		= "EdCat_Weapons";
		editorSubcategory	= "EdSubcat_Explosives";
		model 				= "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_u";
	};
	class rhsusf_explosive_m112: MineBase
	{
		mapSize				= 0.31;
		scope				= 2;
		ammo				= "rhsusf_m112_ammo";
		editorPreview		= "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_explosive_m112";
		displayName			= "$STR_RHSUSF_M112_EXPLOSIVE_DISPLAY_NAME";
		icon				= "iconExplosiveGP";
		picture				= "\A3\Weapons_F\Data\clear_empty.paa";
		model				= "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_e";
		descriptionShort	= "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhsusf_explosive_m112x4: rhsusf_explosive_m112
	{
		scope = 2;
		ammo = "rhsusf_m112x4_ammo";
		editorPreview = "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_explosive_m112x4";
		displayName = "$STR_RHSUSF_M112X4_EXPLOSIVE_DISPLAY_NAME";
		icon = "iconExplosiveGP";
		model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x4_e";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "";
		};
	};

	/* Ammo boxes */

	#include "rhsusf_ammocrates.h"

	/* WEAPONS */
	// Weapons that can be spawned as an object both in the editor and in Zeus

	class Weapon_Base_F;
	class Pistol_Base_F;
	class Item_Base_F;
	class Launcher_Base_F;


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
		model = rhsusf\addons\rhsusf_c_weapons\data\rhs_weaponHolder;\
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
		["rhsusf_c_weapons"] execVM "rhsafrf\addons\rhs_main\scripts\generators\createGroundHolders.sqf" and paste clip board content to file below
	*/
	#include "rhsusf_groundHolders.hpp"


	/* MODULES */
//Zeus Modules
	class ModuleMine_APERSMine_F;
	class rhsusf_mine_m14_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "$STR_RHSUSF_M14_APMINE_DISPLAY_NAME";
		explosive		= "rhsusf_mine_m14_ammo";
	};
	class rhsusf_mine_m19_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "$STR_RHSUSF_M19_ATMINE_DISPLAY_NAME";
		explosive		= "rhsusf_mine_m19_ammo";
	};
	class rhsusf_mine_m49a1_3m_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "M49A1 (3m)";
		explosive		= "rhsusf_mine_m49a1_3m_ammo";
	};
	class rhsusf_mine_m49a1_6m_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "M49A1 (6m)";
		explosive		= "rhsusf_mine_m49a1_6m_ammo";
	};
	class rhsusf_mine_m49a1_10m_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "M49A1 (10m)";
		explosive		= "rhsusf_mine_m49a1_10m_ammo";
	};
//Eden Sites Module
	class Site_F;
	class Site_Minefield: Site_F
	{
		class Arguments
		{
			class minesType
			{
				class values
				{
					class rhsusf_m19_Mine
					{
						name = "$STR_RHSUSF_M19_ATMINE_DISPLAY_NAME";
						value = "rhsusf_mine_M19";
						default = 0;
					};
					class rhsusf_m14_mine
					{
						name = "$STR_RHSUSF_M14_APMINE_DISPLAY_NAME";
						value = "rhsusf_mine_M14";
						default = 0;
					};
				};
			};
		};
	};
};