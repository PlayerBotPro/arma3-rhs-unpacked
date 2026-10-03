
// Bombs

	class 4Rnd_Bomb_04_F;
	class 2Rnd_Mk82;

	class rhs_mag_mk82: 2Rnd_Mk82
	{
		count					= 1;
		displayName				= "Mk82";
		descriptionShort		= "500lb bomb";
		ammo					= "rhs_ammo_mk82";
		model					= "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
		hardpoints[]			= {"RHS_HP_BOMB_500","RHS_HP_LGB_500","RHS_HP_JDAM_500"};
		pylonWeapon				= "rhs_weap_mk82";
		displayNameMFDFormat	= "MK82\%1";
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "BOMB"
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "MK-82"
			#define MFD_PYLON_NAME2 "FIXED"
			#include "MFD\cfgMFD_A29_BOMB.hpp"
		};
	};
	class rhs_mag_mk82_3: rhs_mag_mk82
	{
		count					= 3;
		displayName				= "Mk82 (BRU-42)";
		descriptionShort		= "×3 500lb bomb";
		model					= "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_mk82_3x";
		hardpoints[]			= {"RHS_HP_BOMB_500_3x","RHS_HP_LGB_500_3x","RHS_HP_JDAM_500_3x"};
		mirrorMissilesIndexes[]	= {2,1,3};
		class mfdElements: mfdElements
		{
			#define A10A_2BOXES 1
			#include "MFD\cfgHUD_A10A.hpp"
			#undef A10A_2BOXES
			#define MFD_PYLON_NAME "MK82"
			#define MFD_PYLON_NAME2 "FIXED"
			#include "MFD\cfgMFD_A29_BOMB.hpp"
		};
	};
	class rhs_mag_gbu12: 4Rnd_Bomb_04_F
	{
		count					= 1;
		displayName				= "GBU-12";
		descriptionShort		= "500lb Paveway II";
		ammo					= "rhs_ammo_gbu12";
		model					= "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
		hardpoints[]			= {"RHS_HP_LGB_500"};
		pylonWeapon				= "rhs_weap_gbu12";
		displayNameMFDFormat	= "GBU12\%1";
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "GBU"
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "GBU-12"
			#define MFD_PYLON_NAME2 "LOAL"
			#include "MFD\cfgMFD_A29_LGB.hpp"
		};
	};
	class rhs_mag_gbu32: 4Rnd_Bomb_04_F
	{
		count					= 1;
		displayName				= "GBU-32";
		descriptionShort		= "1000lb JDAM";
		ammo					= "rhs_ammo_gbu32";
		model					= "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
		hardpoints[]			= {"RHS_HP_JDAM_1000"};
		pylonWeapon				= "rhs_weap_gbu32";
		displayNameMFDFormat	= "GBU32\%1";
		mass 					= 459;
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "GBU"
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "G"
			#define MFD_PYLON_SIZE_IN 0.025
			#include "MFD\cfgHUD_F22.hpp"
			#define MFD_PYLON_NAME "GBU-32"
			#define MFD_PYLON_NAME2 "GPS-INS"
			#include "MFD\cfgMFD_A29_LGB.hpp"
		};
	};

// Cluster bombs

	class rhs_mag_cbu87: rhs_mag_mk82
	{
		ammo					= rhs_ammo_cbu87;
		displayname				= "CBU-87";
		displayNameShort		= "Cluster CEM";
		descriptionShort		= "SUU-65/B Dispenser (×101 BLU-97B/B CEM)";
		hardpoints[]			= {"RHS_HP_BOMB_1000","RHS_HP_LGB_1000"};
		pylonWeapon				= rhs_weap_cbu87;
		displayNameMFDFormat	= "CBU87\%1";
		class mfdElements
		{
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "CBU-87"
			#define MFD_PYLON_NAME2 "LOAL"
			#include "MFD\cfgMFD_A29_BOMB.hpp"
		};
	};
	class rhs_mag_cbu87_3: rhs_mag_mk82_3
	{
		ammo					= rhs_ammo_cbu87;
		displayname				= "CBU-87 (BRU-42)";
		displayNameShort		= "Cluster CEM";
		descriptionShort		= "×3 SUU-65/B Dispenser (×101 BLU-97B/B CEM)";
		hardpoints[] 			= {"RHS_HP_BOMB_1000_3x","RHS_HP_LGB_1000_3x"};
		pylonWeapon				= rhs_weap_cbu87;
		displayNameMFDFormat	= "CBU87\%1";
		class mfdElements
		{
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "CBU-87"
			#define MFD_PYLON_NAME2 "LOAL"
			#include "MFD\cfgMFD_A29_BOMB.hpp"
		};
	};
	class rhs_mag_cbu89: rhs_mag_cbu87
	{
		ammo					= rhs_ammo_cbu89;
		displayname				= "CBU-89";
		displayNameShort		= "Cluster Mine";
		descriptionShort		= "SUU-64/B Dispenser (×71 BLU-91/B AT & ×22 BLU-92/B APERS mines)";
		pylonWeapon				= rhs_weap_cbu89;
		displayNameMFDFormat 	= "CBU89\%1";
	};
	class rhs_mag_cbu89_3: rhs_mag_cbu87_3
	{
		ammo					= rhs_ammo_cbu89;
		displayname				= "CBU-89 (BRU-42)";
		displayNameShort		= "Cluster Mine";
		descriptionShort		= "×3 SUU-64/B Dispenser (×71 BLU-91/B AT & ×22 BLU-92/B APERS mines)";
		pylonWeapon				= rhs_weap_cbu89;
		displayNameMFDFormat 	= "CBU89\%1";
	};
	class rhs_mag_cbu100: rhs_mag_mk82
	{
		ammo					= rhs_ammo_cbu100;
		displayname				= "CBU-100";
		displayNameShort		= "Cluster HEAT";
		descriptionShort		= "SUU-76/B Dispenser (×123 Mk 118 HEAT)";
		pylonWeapon				= rhs_weap_cbu100;
		displayNameMFDFormat	= "CBU100\%1";
		hardpoints[]			= {"RHS_HP_BOMB_500","RHS_HP_LGB_500"};
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "CBU"
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "CBU-100"
			#define MFD_PYLON_NAME2 "LOAL"
			#include "MFD\cfgMFD_A29_BOMB.hpp"
		};
	};
	class rhs_mag_cbu100_3: rhs_mag_mk82_3
	{
		ammo					= rhs_ammo_cbu100;
		displayname				= "CBU-100 (BRU-42)";
		displayNameShort		= "Cluster HEAT";
		descriptionShort		= "×3 SUU-76/B Dispenser (×123 Mk 118 HEAT)";
		pylonWeapon				= rhs_weap_cbu100;
		displayNameMFDFormat	= "CBU100\%1";
		hardpoints[]			= {"RHS_HP_BOMB_500_3x","RHS_HP_LGB_500_3x"};
		class mfdElements
		{
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "CBU-100"
			#define MFD_PYLON_NAME2 "LOAL"
			#include "MFD\cfgMFD_A29_BOMB.hpp"
		};
	};
/*
	class rhs_mag_cbu107: rhs_mag_mk82
	{
		ammo				= rhs_ammo_cbu107;
		displayname			= "CBU-107";
		displayNameShort	= "Cluster Flechette";
		pylonWeapon			= rhs_weap_cbu107;
	};
	class rhs_mag_cbu107_3: rhs_mag_mk82_3
	{
		ammo				= rhs_ammo_cbu107;
		displayname			= "CBU-107 3x";
		displayNameShort	= "Cluster Flechette";
		pylonWeapon			= rhs_weap_cbu107;
	};
*/

// Misc; fuel tanks and electronics pods

	class rhs_mag_ANALQ131: VehicleMagazine
	{
		scope				= 2;
		ammo				= "rhs_ammo_ANALQ131";
		displayName			= "AN/ALQ-131(V)";
		descriptionShort	= "Electronic Countermeasures (ECM) Pod";
		count				= 1;
		initSpeed			= 0;
		sound[]				= {};
		reloadSound[]		= {};
		nameSound			= "";
		model				= "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_ALQ_131";
		pylonweapon			= "rhsusf_weap_DummyLauncher";
		hardpoints[]		= {"RHS_HP_ECM"};
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "ECM"
			#include "MFD\cfgHUD_A10A.hpp"
		};
	};

	class rhs_mag_fueltank_UH60: VehicleMagazine
	{
		scope			= 2;
		ammo			= "rhs_ammo_ANALQ131";
		displayName		= "Fuel Tank (empty)";
		count			= 1;
		initSpeed		= 0;
		sound[]			= {};
		reloadSound[]	= {};
		nameSound		= "";
		model			= "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhs_pylon_Fuel_UH60";
		pylonweapon		= "rhsusf_weap_DummyLauncher";
		hardpoints[]	= {"RHS_HP_Fuel_ARMY"};
	};
	class rhs_mag_fueltank_UH60MEV: rhs_mag_fueltank_UH60
	{
		model			= "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhs_pylon_Fuel_UH60MEV";
		hardpoints[]	= {"RHS_HP_Fuel_ARMY_MEV"};
		displayName		= "Fuel Tank (MEV)";
	};