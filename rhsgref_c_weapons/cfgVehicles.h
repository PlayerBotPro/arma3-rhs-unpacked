class CfgVehicles
{

	/* Ammo boxes */

		#include "rhsgref_ammocrates.h"

	/* WEAPONS */
	// Weapons that can be spawned as an object both in the editor and in Zeus
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class Item_Base_F;
	class WeaponHolder_Single_limited_item_F;
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
	#include "rhsgref_groundHolders.hpp"


	/* MINES */
	class MineBase;
	class ModuleMine_APERSMine_F;	
	class rhs_mine_smine35_press: MineBase
	{
		EdPrev(rhs_mine_smine35_press)
		scope            = 2;
		ammo             = "rhs_mine_smine35_press_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_PROJ_PRESS";
		displayName      = "S.Mi.35 (S.Mi.Z.35) APB Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_smine35_press_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "S.Mi.35 (S.Mi.Z.35) APB Mine";
		explosive		= "rhs_mine_smine35_press_ammo";
	};
	class rhs_mine_smine35_trip: MineBase
	{
		EdPrev(rhs_mine_smine35_trip)
		scope            = 2;
		ammo             = "rhs_mine_smine35_trip_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_HELPER_TRIP";
		displayName      = "S.Mi.35 (W) APB Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_smine35_trip_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "S.Mi.35 (W) APB Mine";
		explosive		= "rhs_mine_smine35_trip_ammo";
	};
	
	class rhs_mine_smine44_trip: MineBase
	{
		EdPrev(rhs_mine_smine44_trip)
		scope            = 2;
		ammo             = "rhs_mine_smine44_trip_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_HELPER_TRIP";
		displayName      = "S.Mi.44 (W) APB Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_smine44_trip_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "S.Mi.44 (W) APB Mine";
		explosive		= "rhs_mine_smine44_trip_ammo";
	};
	class rhs_mine_smine44_press: MineBase
	{
		EdPrev(rhs_mine_smine44_press)
		scope            = 2;
		ammo             = "rhs_mine_smine44_press_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_PROJ_PRESS";
		displayName      = "S.Mi.44 (S.Mi.Z.44) APB Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_smine44_press_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "S.Mi.44 (S.Mi.Z.44) APB Mine";
		explosive		= "rhs_mine_smine44_press_ammo";
	};
	
	class rhs_mine_m2a3b_press: MineBase
	{
		EdPrev(rhs_mine_m2a3b_press)
		scope            = 2;
		ammo             = "rhs_mine_m2a3b_press_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_PRESSURE";
		displayName      = "M2A3B APB Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_m2a3b_press_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "M2A3B APB Mine";
		explosive		= "rhs_mine_m2a3b_press_ammo";
	};
	class rhs_mine_m2a3b_trip: MineBase
	{
		EdPrev(rhs_mine_m2a3b_trip)
		scope            = 2;
		ammo             = "rhs_mine_m2a3b_trip_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_TRIPWIRE";
		displayName      = "M2A3B (Tripwire) APB Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_m2a3b_trip_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "M2A3B (Tripwire) APB Mine";
		explosive		= "rhs_mine_m2a3b_trip_ammo";
	};
	
	
	class rhs_mine_glasmine43_hz: MineBase
	{
		EdPrev(rhs_mine_glasmine43_hz)
		scope            = 2;
		ammo             = "rhs_mine_glasmine43_hz_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		displayName      = "Gl.Mi.43 (H.Z.44) AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_glasmine43_hz_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "Gl.Mi.43 (H.Z.44) AP Mine";
		explosive		= "rhs_mine_glasmine43_hz_ammo";
	};
	class rhs_mine_glasmine43_bz: MineBase
	{
		EdPrev(rhs_mine_glasmine43_bz)
		scope            = 2;
		ammo             = "rhs_mine_glasmine43_bz_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		displayName      = "Gl.Mi.43 (B.Z.) AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_glasmine43_bz_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "Gl.Mi.43 (B.Z.) AP Mine";
		explosive		= "rhs_mine_glasmine43_bz_ammo";
	};
	
	class rhs_mine_a200_bz: MineBase
	{
		EdPrev(rhs_mine_a200_bz)
		scope            = 2;
		ammo             = "rhs_mine_a200_bz_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_BZ_HELPER";
		displayName      = "Beh.Schu.Mi.A200 (B.Z.) AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_a200_bz_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "Beh.Schu.Mi.A200 (B.Z.) AP Mine";
		explosive		= "rhs_mine_a200_bz_ammo";
	};
	class rhs_mine_a200_dz35: MineBase
	{
		EdPrev(rhs_mine_a200_dz35)
		scope            = 2;
		ammo             = "rhs_mine_a200_dz35_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DZ35_HELPER";
		displayName      = "Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_a200_dz35_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
		explosive		= "rhs_mine_a200_dz35_ammo";
	};
	
	class rhs_mine_stockmine43_2m: MineBase
	{
		EdPrev(rhs_mine_stockmine43_2m)
		scope            = 2;
		ammo             = "rhs_mine_stockmine43_2m_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_2M";
		displayName      = "St.Mi.43/I (2m) AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_stockmine43_2m_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "St.Mi.43/I (2m) AP Mine";
		explosive		= "rhs_mine_stockmine43_2m_ammo";
	};
	class rhs_mine_stockmine43_4m: MineBase
	{
		EdPrev(rhs_mine_stockmine43_4m)
		scope            = 2;
		ammo             = "rhs_mine_stockmine43_4m_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_4M";
		displayName      = "St.Mi.43/II (4m) AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_stockmine43_4m_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "St.Mi.43/II (4m) AP Mine";
		explosive		= "rhs_mine_stockmine43_4m_ammo";
	};
	
	class rhs_mine_TM43: MineBase
	{
		EdPrev(rhs_mine_TM43)
		scope            = 2;
		ammo             = "rhs_mine_TM43_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43_proj";
		displayName      = "Tellermine 43";
		icon             = "iconExplosiveAT";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_TM43_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "Tellermine 43";
		explosive		= "rhs_mine_TM43_ammo";
	};
	
	
	class rhs_mine_m3_pressure: MineBase
	{
		EdPrev(rhs_mine_m3_pressure)
		scope            = 2;
		ammo             = "rhs_mine_M3_pressure_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		displayName      = "M3 AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_m3_pressure_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "M3 AP Mine";
		explosive		= "rhs_mine_M3_pressure_ammo";
	};
	class rhs_mine_M3_tripwire: MineBase
	{
		EdPrev(rhs_mine_m3_tripwire)
		scope            = 2;
		ammo             = "rhs_mine_M3_tripwire_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		displayName      = "M3 (Tripwire) AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_M3_tripwire_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "M3 (Tripwire) AP Mine";
		explosive		= "rhs_mine_M3_tripwire_ammo";
	};
	
	class rhs_mine_mk2_pressure: MineBase
	{
		EdPrev(rhs_mine_mk2_pressure)
		scope            = 2;
		ammo             = "rhs_mine_Mk2_pressure_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		displayName      = "Mk 2 AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_mk2_pressure_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "Mk 2 AP Mine";
		explosive		= "rhs_mine_Mk2_pressure_ammo";
	};
	class rhs_mine_Mk2_tripwire: MineBase
	{
		EdPrev(rhs_mine_mk2_tripwire)
		scope            = 2;
		ammo             = "rhs_mine_Mk2_tripwire_ammo";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		displayName      = "Mk 2 (Tripwire) AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_Mk2_tripwire_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "Mk 2 (Tripwire) AP Mine";
		explosive		= "rhs_mine_Mk2_tripwire_ammo";
	};
	
	class rhs_mine_M7A2: MineBase
	{
		EdPrev(rhs_mine_m7a2)
		scope            = 2;
		ammo             = "rhs_mine_M7A2_ammo";
		model			 = "\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_HELPER_SURFACE";
		displayName      = "M7A2 AP Mine";
		icon             = "iconExplosiveAP";
		picture          = "\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc = "";
		};
	};
	class rhs_mine_M7A2_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "M7A2 AP Mine";
		explosive		= "rhs_mine_M7A2_ammo";
	};
	
	
	class Site_F;
	class Site_Minefield: Site_F
	{
		class Arguments
		{
			class minesType
			{
				class values
				{
					class rhs_smine35_press_mine
					{
						name 	= "S.Mi.35 (S.Mi.Z.35) APB Mine";
						value 	= "rhs_mine_smine35_press";
						default = 0;
					};
					class rhs_smine35_trip_mine
					{
						name 	= "S.Mi.35 (W) APB Mine";
						value 	= "rhs_mine_smine35_trip";
						default = 0;
					};
					class rhs_smine44_trip_mine
					{
						name 	= "S.Mi.44 (W) APB Mine";
						value 	= "rhs_mine_smine44_trip";
						default = 0;
					};
					class rhs_smine44_press_mine
					{
						name 	= "S.Mi.44 (S.Mi.Z.44) APB Mine";
						value 	= "rhs_mine_smine44_press";
						default = 0;
					};
					class rhs_m2a3b_press_mine
					{
						name 	= "M2A3B APB Mine";
						value 	= "rhs_mine_m2a3b_press";
						default = 0;
					};
					class rhs_m2a3b_trip_mine
					{
						name 	= "M2A3B (Tripwire) APB Mine";
						value 	= "rhs_mine_m2a3b_trip";
						default = 0;
					};
					class rhs_glasmine43_hz_mine
					{
						name 	= "Gl.Mi.43 (H.Z.44) AP Mine";
						value 	= "rhs_mine_glasmine43_hz";
						default = 0;
					};
					class rhs_glasmine43_bz_mine
					{
						name 	= "Gl.Mi.43 (B.Z.) AP Mine";
						value 	= "rhs_mine_glasmine43_bz";
						default = 0;
					};
					class rhs_a200_bz_mine
					{
						name 	= "Beh.Schu.Mi.A200 (B.Z.) AP Mine";
						value 	= "rhs_mine_a200_bz";
						default = 0;
					};
					class rhs_a200_dz35_mine
					{
						name 	= "Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
						value 	= "rhs_mine_a200_dz35";
						default = 0;
					};
					class rhs_stockmine43_2m_mine
					{
						name 	= "St.Mi.43/I (2m) AP Mine";
						value 	= "rhs_mine_stockmine43_2m";
						default = 0;
					};
					class rhs_stockmine43_4m_mine
					{
						name 	= "St.Mi.43/II (4m) AP Mine";
						value 	= "rhs_mine_stockmine43_4m";
						default = 0;
					};
					class rhs_TM43_mine
					{
						name 	= "Tellermine 43";
						value 	= "rhs_mine_TM43";
						default = 0;
					};
					class rhs_m3_pressure_mine
					{
						name 	= "M3 AP Mine";
						value 	= "rhs_mine_m3_pressure";
						default = 0;
					};
					class rhs_M3_tripwire_mine
					{
						name 	= "M3 (Tripwire) AP Mine";
						value 	= "rhs_mine_M3_tripwire";
						default = 0;
					};
					class rhs_mk2_pressure_mine
					{
						name 	= "Mk 2 AP Mine";
						value 	= "rhs_mine_mk2_pressure";
						default = 0;
					};
					class rhs_Mk2_tripwire_mine
					{
						name 	= "Mk 2 (Tripwire) AP Mine";
						value 	= "rhs_mine_Mk2_tripwire";
						default = 0;
					};
					class rhs_M7A2_mine
					{
						name 	= "M7A2 AP Mine";
						value 	= "rhs_mine_M7A2";
						default = 0;
					};
				};
			};
		};
	};
	
	
};