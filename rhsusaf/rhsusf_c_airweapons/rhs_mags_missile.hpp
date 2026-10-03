	class 24Rnd_missiles;
	class 24Rnd_PG_missiles;

// AAMs

	class rhs_mag_Sidewinder: VehicleMagazine
	{
		scope					= 2;
		displayName				= "AIM-9X";
		displaynameshort 		= "IR";
		displayNameMFDFormat	= "%1 AIM-9X";
		descriptionShort		= "Sidewinder, IR-homing";
		ammo					= "rhs_ammo_Sidewinder_AA";
		count					= 1;
		initSpeed				= 0;
		maxLeadSpeed			= 450;
		nameSound				= "missiles";
		model					= "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon				= "rhs_weap_SidewinderLauncher";
		hardpoints[]			= {"RHS_HP_AIM9","RHS_HP_AIM9_2x"};
		class mfdElements
		{
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "M"
			#define MFD_PYLON_SIZE_IN 0.02
			#include "MFD\cfgHUD_F22.hpp"
		};
	};
	class rhs_mag_aim9m: rhs_mag_Sidewinder
	{
		displayName				= "AIM-9M";
		displayNameMFDFormat	= "%1 AIM-9M";
		ammo					= "rhs_ammo_aim9m";
		pylonWeapon				= "rhs_weap_aim9m";
	};
	class rhs_mag_Sidewinder_int: rhs_mag_Sidewinder
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_aim9_1x;
		hardpoints[]			= {"RHS_HP_AIM9_int"};
	};
	class rhs_mag_aim9m_int: rhs_mag_Sidewinder_int
	{
		displayName				= "AIM-9M";
		displayNameMFDFormat	= "%1 AIM-9M";
		ammo					= "rhs_ammo_aim9m";
		pylonWeapon				= "rhs_weap_aim9m";
	};
	class rhs_mag_Sidewinder_2: rhs_mag_Sidewinder
	{
		count					= 2;
		displayName				= "AIM-9X (LAU-114/A)";
		descriptionShort		= "×2 Sidewinder, IR-homing";
		model					= \rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_2x;
		hardpoints[]			= {"RHS_HP_AIM9_2x"};
		class mfdElements: mfdElements
		{
			#define A10A_2BOXES
			#define MFD_PYLON_NAME "AIM"
			#include "MFD\cfgHUD_A10A.hpp"
			#undef A10A_2BOXES
		};
		displayNameMFDFormat = "AIM\%1";
	};
	class rhs_mag_aim9m_2: rhs_mag_Sidewinder_2
	{
		displayName				= "AIM-9M (LAU-114/A)";
		displayNameMFDFormat	= "%1 AIM-9M";
		ammo					= "rhs_ammo_aim9m";
		pylonWeapon				= "rhs_weap_aim9m";
	};
	class rhs_mag_Sidewinder_heli: rhs_mag_Sidewinder
	{
		ammo					= "rhs_ammo_aim9m_ah64";
		model					= \rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_heli_od;
		hardpoints[]			= {"RHS_HP_AIM9_HELI_ARMY"};
		displayName				= "AIM-9M";
		displaynameshort 		= "IR";
		displayNameMFDFormat	= "%1 AIM-9M";
	};
	class rhs_mag_Sidewinder_heli_2: rhs_mag_Sidewinder_heli
	{
		displayName				= "AIM-9M";
		displayNameMFDFormat	= "%1 AIM-9M";
		ammo					= "rhs_ammo_aim9m";
		pylonWeapon				= "rhs_weap_aim9m";
		model					= \rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_heli_grey;
		hardpoints[]			= {"RHS_HP_AIM9_HELI_USMC"};
	};

	class rhs_mag_ATAS_2: VehicleMagazine
	{
		scope					= 2;
		displayName				= "ATAS";
		displayNameMFDFormat	= "%1 AIM-92";
		descriptionShort		= "×2 Stinger, IR-homing";
		ammo					= "rhs_ammo_fim92_missile";
		count					= 2;
		initSpeed				= 40;
		maxLeadSpeed			= 450;
		nameSound				= "missiles";
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_atas_2x.p3d;
		pylonWeapon				= "rhs_weap_ATAS_launcher";
		hardpoints[]			= {"RHS_HP_ATAS","RHS_HP_MELB","RHS_HP_MELB_L"};
		class mfdElements
		{
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "M"
			#define MFD_PYLON_SIZE_IN 0.02
			#include "MFD\cfgHUD_F22.hpp"
		};
	};
	class rhs_mag_ATAS_AH64_2: rhs_mag_ATAS_2
	{
		ammo					= "rhs_ammo_fim92_ah64";
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_atas_ah64_2x.p3d;
		hardpoints[]			= {"RHS_HP_ATAS_AH64"};
	};

	// Keep until GREF L-159 update
	class rhs_mag_aim120 : rhs_mag_Sidewinder
	{
		model					= \A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d;
		hardpoints[]			= {"RHS_HP_AIM120"};
		displayName				= "AIM-120";
		displaynameshort		= "Radar";
		displayNameMFDFormat	= "%1 AIM-120";
		descriptionShort		= "Radar-homing, BVRAAM";
		ammo					= "rhs_ammo_aim120";
		count					= 1;
		initSpeed				= 0;
		maxLeadSpeed			= 450;
		nameSound				= "missiles";
		pylonWeapon				= "rhs_weap_AIM120";
		class mfdElements
		{
			#define MFD_PYLON_NAME "C"
			#include "MFD\cfgHUD_F22.hpp"
		};
	};
	class rhs_mag_aim120d : rhs_mag_aim120
	{
		displayName				= "AIM-120D";
		displayNameMFDFormat	= "%1 AIM-120D";
		ammo					= "rhs_ammo_aim120d";
		pylonWeapon				= "rhs_weap_AIM120D";
	};


	class rhs_mag_aim120d_int: rhs_mag_aim120d
	{
		ammo			= "rhs_ammo_aim120d";
		model			= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU142_1x;
		hardpoints[]	= {"RHS_HP_aim120_int"};
		pylonWeapon		= "rhs_weap_AIM120D";
		class mfdElements
		{
			#include "MFD\cfgHUD_F22.hpp"
		};
	};
	class rhs_mag_aim120d_2_F22_l: rhs_mag_aim120d_int
	{
		displayName		= "AIM-120D (×2)";
		count			= 2;
		model			= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU142_2x_F22_lBay;
		hardpoints[]	= {"RHS_HP_F22_lBay"};
		class mfdElements
		{
			#include "MFD\cfgHUD_F22_x2.hpp"
		};
	};
	class rhs_mag_aim120d_2_F22_r: rhs_mag_aim120d_2_F22_l
	{
		model			= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU142_2x_F22_rBay;
		hardpoints[]	= {"RHS_HP_F22_rBay"};
	};

	class rhs_mag_4Rnd_stinger: VehicleMagazine
	{
		scope				= 2;
		ammo				= "rhs_ammo_fim92_missile";
		displayname			= "FIM-92F Stinger";
		displaynameshort	= "FIM-92F";
		initspeed			= 40;
		maxLeadSpeed		= 850;
		nameSound			= "missiles";
		count				= 4;
	};

	class rhs_mag_2Rnd_stinger: Rhs_mag_4Rnd_stinger
	{
		count=2;
	};

	// AGMs

	class rhs_mag_DAGR_4: 24Rnd_PG_missiles
	{
		count					= 4;
		ammo					= "RHS_Ammo_DAGR";
		displayName				= "DAGR";
		displayNameShort		= "SALH";
		descriptionShort		= "×4 Laser-homing 70mm rockets";
		weight					= 32;
		hardpoints[]			= {"RHS_HP_HELLFIRE_SINGLE","RHS_HP_LONGBOW_SINGLE"};
		pylonWeapon				= "RHS_weap_DAGR_Launcher";
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_4x;
		mirrorMissilesIndexes[]	= {2,1,4,3};
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "LG"
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "LG"
			#include "MFD\cfgHUD_AH64.hpp"
			#define MFD_PYLON_NAME "LG"
			#define MFD_PYLON_NAME2 "DAGR"
			#include "MFD\cfgMFD_A29_RKT.hpp"
		};
	};

	class rhs_mag_DAGR_8: rhs_mag_DAGR_4
	{
		count					= 8;
		displayName				= "DAGR (M310)";
		descriptionShort		= "×8 Laser-homing 70mm rockets";
		weight					= __EVAL(32*2);
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK","RHS_HP_MELB"};
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_8x;
		mirrorMissilesIndexes[]	= {2,1,4,3,6,5,8,7};
	};

	class rhs_mag_DAGR_16: rhs_mag_DAGR_8
	{
		count					= 16;
		displayName				= "DAGR (M299)";
		descriptionShort		= "×16 Laser-homing 70mm rockets";
		weight					= __EVAL(32*4);
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK"};
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_16x;
		mirrorMissilesIndexes[]	= {2,1,4,3,8,7,6,5,12,11,10,9,14,13,16,15};
	};

	class rhs_mag_Hellfire_base: VehicleMagazine
	{
		scope					= 2;
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x;
		displayName				= "AGM-114L Hellfire II";
		ammo					= "rhs_ammo_Hellfire_AT";
		count					= 8;
		nameSound				= "missiles";
		initSpeed				= 0;
		maxLeadSpeed			= 50;
		weight					= __EVAL(45*8);
		class mfdElements
		{
			#define MFD_PYLON_NAME "L"
			#include "MFD\cfgMFD_AH64_AT.hpp"
			#define MFD_PYLON_NAME "AGM-114K"
			#define MFD_PYLON_NAME2 "LASER"
			#include "MFD\cfgMFD_A29_AT.hpp"
		};
	};

	class rhs_mag_AGM114L: rhs_mag_Hellfire_base
	{
		ammo					= "rhs_ammo_AGM_114L";
		displayName				= "AGM-114L";
		displaynameshort		= "Radar";
		descriptionShort		= "Longbow Hellfire, Radar-homing";
		hardpoints[]			= {"RHS_HP_LONGBOW_SINGLE"};
		pylonWeapon				= "rhs_weap_AGM114L_Launcher";
		class mfdElements
		{
			#define MFD_PYLON_NAME "R"
			#include "MFD\cfgMFD_AH64_AT.hpp"
		};
	};

	class rhs_mag_AGM114L_2: rhs_mag_AGM114L
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x;
		count					= 2;
		displayName				= "AGM-114L (M310)";
		descriptionShort		= "×2 Longbow Hellfire, Radar-homing";
		weight					= __EVAL(45*2);
		hardpoints[]			= {"RHS_HP_LONGBOW_RACK"};
		mirrorMissilesIndexes[]	= {2,1};
	};

	class rhs_mag_AGM114L_4: rhs_mag_AGM114L_2
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x;
		count					=4;
		displayName				= "AGM-114L (M299)";
		descriptionShort		= "×4 Longbow Hellfire, Radar-homing";
		weight					= __EVAL(45*4);
		hardpoints[]			= {"RHS_HP_LONGBOW_RACK"};
		mirrorMissilesIndexes[]	= {2,1,4,3};
		class mfdElements
		{
			#define MFD_PYLON_NAME "R"
			#include "MFD\cfgMFD_AH64_AT_x4.hpp"
		};
	};
	class rhs_mag_AGM114K: rhs_mag_Hellfire_base
	{
		displayName				= "AGM-114K";
		displaynameshort		= "LG";
		descriptionShort		= "Hellfire, Laser-homing ";
		ammo					= "RHS_ammo_AGM_114K";
		maxLeadSpeed			= 100;
		count					= 1;
		weight					= __EVAL(45*1);
		pylonWeapon				= "RHS_weap_AGM114K_Launcher";
		hardpoints[]			= {"RHS_HP_HELLFIRE_SINGLE","RHS_HP_LONGBOW_SINGLE"};
	};
	class rhs_mag_AGM114K_2: rhs_mag_AGM114K
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x;
		count					= 2;
		displayName				= "AGM-114K (M310)";
		descriptionShort		= "×2 Hellfire, Laser-homing ";
		weight					= __EVAL(45*2);
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK","RHS_HP_MELB"};
		mirrorMissilesIndexes[]	= {2,1};
		class mfdElements: mfdElements
		{
			#define MFD_PYLON_NAME "AGM-114K"
			#define MFD_PYLON_NAME2 "LASER"
			#include "MFD\cfgMFD_A29_AT_x2.hpp"
		};
	};
	class rhs_mag_AGM114K_4: rhs_mag_AGM114K_2
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x;
		count					= 4;
		displayName				= "AGM-114K (M299)";
		descriptionShort		= "×4 Hellfire, Laser-homing ";
		weight					=__EVAL(45*4);
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK"};
		mirrorMissilesIndexes[]	= {2,1,4,3};
		class mfdElements
		{
			#define MFD_PYLON_NAME "L"
			#include "MFD\cfgMFD_AH64_AT_x4.hpp"
		};
	};

	class rhs_mag_AGM114M: rhs_mag_AGM114K
	{
		displayName				= "AGM-114M";
		displaynameshort		= "LG HE";
		descriptionShort		= "HE/FRAG Hellfire, Laser-homing";
		ammo					= "RHS_ammo_AGM_114M";
		maxLeadSpeed			= 100;
		count					= 1;
		weight					= __EVAL(45*1);
		pylonWeapon				= "RHS_weap_AGM114M_Launcher";
		class mfdElements: mfdElements
		{
			#define MFD_PYLON_NAME "AGM-114M"
			#define MFD_PYLON_NAME2 "LASER"
			#include "MFD\cfgMFD_A29_AT.hpp"
		};
	};

	class rhs_mag_AGM114M_2: rhs_mag_AGM114M
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x;
		count					= 2;
		displayName				= "AGM-114M (M310)";
		descriptionShort		= "×2 HE/FRAG Hellfire, Laser-homing";
		weight					= __EVAL(45*2);
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK","RHS_HP_MELB"};
		mirrorMissilesIndexes[]	= {2,1};
	};
	class rhs_mag_AGM114M_4: rhs_mag_AGM114M_2
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x;
		count					=4;
		displayName				= "AGM-114M (M299)";
		descriptionShort		= "×4 HE/FRAG Hellfire, Laser-homing";
		weight					=__EVAL(45*4);
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK"};
		mirrorMissilesIndexes[]	= {2,1,4,3};
	};

	class rhs_mag_AGM114N: rhs_mag_AGM114K
	{
		displayName				= "AGM-114N";
		displaynameshort		= "LG TB";
		descriptionShort		= "Thermobaric Hellfire, Laser-homing";
		ammo					= "RHS_ammo_AGM_114N";
		maxLeadSpeed			= 100;
		count					= 1;
		weight					= __EVAL(45*1);
		pylonWeapon				= "RHS_weap_AGM114N_Launcher";
		class mfdElements: mfdElements
		{
			#define MFD_PYLON_NAME "AGM-114N"
			#define MFD_PYLON_NAME2 "LASER"
			#include "MFD\cfgMFD_A29_AT.hpp"
		};
	};

	class rhs_mag_AGM114N_2: rhs_mag_AGM114N
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x;
		count					= 2;
		displayName				= "AGM-114N (M310)";
		descriptionShort		= "×2 Thermobaric Hellfire, Laser-homing";
		weight					= __EVAL(45*2);
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK","RHS_HP_MELB"};
		mirrorMissilesIndexes[]	= {2,1};
	};
	class rhs_mag_AGM114N_4: rhs_mag_AGM114N_2
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x;
		count					= 4;
		displayName				= "AGM-114N (M299)";
		descriptionShort		= "×4 Thermobaric Hellfire, Laser-homing";
		weight					=__EVAL(45*4);
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK"};
		mirrorMissilesIndexes[]	= {2,1,4,3};
	};

// DAGR and Hellfires for fixed-wing aircraft
	class rhs_mag_DAGR_4_plane: rhs_mag_DAGR_4
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_4x_airplane;
		hardpoints[]			= {"RHS_HP_HELLFIRE_PLANE","RHS_HP_LONGBOW_PLANE"};
	};
	class rhs_mag_DAGR_8_plane: rhs_mag_DAGR_8
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_8x_airplane;
		hardpoints[]			= {"RHS_HP_HELLFIRE_PLANE_RACK","RHS_HP_LONGBOW_PLANE_RACK"};
	};
	class rhs_mag_AGM114L_plane: rhs_mag_AGM114L
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x_airplane;
		hardpoints[]			= {"RHS_HP_LONGBOW_PLANE"};
	};
	class rhs_mag_AGM114L_2_plane: rhs_mag_AGM114L_2
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x_airplane;
		hardpoints[]			= {"RHS_HP_LONGBOW_PLANE_RACK"};
	};
	class rhs_mag_AGM114K_plane: rhs_mag_AGM114K
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x_airplane;
		hardpoints[]			= {"RHS_HP_HELLFIRE_PLANE","RHS_HP_LONGBOW_PLANE"};
	};
	class rhs_mag_AGM114K_2_plane: rhs_mag_AGM114K_2
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x_airplane;
		hardpoints[]			= {"RHS_HP_HELLFIRE_PLANE_RACK","RHS_HP_LONGBOW_PLANE_RACK"};
	};
	class rhs_mag_AGM114M_plane: rhs_mag_AGM114M
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x_airplane;
		hardpoints[]			= {"RHS_HP_HELLFIRE_PLANE","RHS_HP_LONGBOW_PLANE"};
	};
	class rhs_mag_AGM114M_2_plane: rhs_mag_AGM114M_2
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x_airplane;
		hardpoints[]			= {"RHS_HP_HELLFIRE_PLANE_RACK","RHS_HP_LONGBOW_PLANE_RACK"};
	};
	class rhs_mag_AGM114N_plane: rhs_mag_AGM114N
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x_airplane;
		hardpoints[]			= {"RHS_HP_HELLFIRE_PLANE","RHS_HP_LONGBOW_PLANE"};
	};
	class rhs_mag_AGM114N_2_plane: rhs_mag_AGM114N_2
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x_airplane;
		hardpoints[]			= {"RHS_HP_HELLFIRE_PLANE_RACK","RHS_HP_LONGBOW_PLANE_RACK"};
	};

// Maverick
	class rhs_mag_agm65: rhs_mag_Hellfire_base
	{
		scope				= 0;
		displayName			= "AGM-65";
		displayNameShort	= "AGM-65";
		ammo				= "rhs_ammo_agm65";
		initSpeed			= 0;
		maxLeadSpeed		= 220;
		count				= 1;
		pylonWeapon			= "rhs_weap_agm65";
		model				= "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU117_1x";
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "AGM"
			#include "MFD\cfgHUD_A10A.hpp"
		};
		displayNameMFDFormat = "\%1";
	};
	class rhs_mag_agm65_x3: rhs_mag_agm65
	{
		count					= 3;
		displayName				= "AGM-65 x3";
		model					= "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F";
		mirrorMissilesIndexes[]	= {2,1,3};
		class mfdElements: mfdElements
		{
			#define A10A_2BOXES 1
			#include "MFD\cfgHUD_A10A.hpp"
			#undef A10A_2BOXES
		};
	};
	class rhs_mag_agm65b: rhs_mag_agm65
	{
		scope				= 2;
		displayName			= "AGM-65B";
		displayNameShort	= "TV";
		descriptionShort	= "TV-guided Maverick";
		ammo				= "rhs_ammo_agm65b";
		hardpoints[]		= {"RHS_HP_AGM65","RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65b";
	};
	class rhs_mag_agm65b_3: rhs_mag_agm65_x3
	{
		scope				= 2;
		displayName			= "AGM-65B (LAU-88/A)";
		descriptionShort	= "×3 TV-guided Maverick";
		displayNameShort	= "TV";
		ammo				= "rhs_ammo_agm65b";
		hardpoints[]		= {"RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65b";
	};
	class rhs_mag_agm65d: rhs_mag_agm65
	{
		scope				= 2;
		displayName			= "AGM-65D";
		displayNameShort	= "IR";
		ammo				= "rhs_ammo_agm65d";
		descriptionShort	= "IR-guided Maverick";
		hardpoints[]		= {"RHS_HP_AGM65","RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65d";
	};
	class rhs_mag_agm65d_3: rhs_mag_agm65_x3
	{
		scope				= 2;
		displayName			= "AGM-65D (LAU-88/A)";
		displayNameShort	= "IR";
		descriptionShort	= "×3 IR-guided Maverick";
		ammo				= "rhs_ammo_agm65d";
		hardpoints[]		= {"RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65d";
	};
	class rhs_mag_agm65e: rhs_mag_agm65
	{
		scope				= 2;
		displayName			= "AGM-65E";
		displayNameShort	= "LASER";
		descriptionShort	= "Laser-guided Maverick";
		ammo				= "rhs_ammo_agm65e";
		hardpoints[]		= {"RHS_HP_AGM65","RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65e";
	};
	class rhs_mag_agm65e_3: rhs_mag_agm65_x3
	{
		scope				= 2;
		displayName			= "AGM-65E (LAU-88/A)";
		displayNameShort	= "LASER";
		descriptionShort	= "×3 Laser-guided Maverick";
		ammo				= "rhs_ammo_agm65e";
		hardpoints[]		= {"RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65e";
	};
	class rhs_mag_agm65f: rhs_mag_agm65
	{
		scope				= 2;
		displayName			= "AGM-65F";
		displayNameShort	= "IR";
		descriptionShort	= "IR-guided Anti-Ship Maverick";
		ammo				= "rhs_ammo_agm65f";
		hardpoints[]		= {"RHS_HP_AGM65","RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65f";
	};
	class rhs_mag_agm65f_3: rhs_mag_agm65_x3
	{
		scope				= 2;
		displayName			= "AGM-65F (LAU-88/A)";
		displayNameShort	= "IR";
		descriptionShort	= "×3 IR-guided Anti-Ship Maverick";
		ammo				= "rhs_ammo_agm65f";
		hardpoints[]		= {"RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65f";
	};
	class rhs_mag_agm65h: rhs_mag_agm65
	{
		scope				= 2;
		displayName			= "AGM-65H";
		displayNameShort	= "CCD";
		descriptionShort	= "Improved TV-guided Maverick";
		ammo				= "rhs_ammo_agm65h";
		hardpoints[]		= {"RHS_HP_AGM65","RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65h";
	};
	class rhs_mag_agm65h_3: rhs_mag_agm65_x3
	{
		scope				= 2;
		displayName			= "AGM-65H (LAU-88/A)";
		displayNameShort	= "CCD";
		descriptionShort	= "×3 Improved TV-guided Maverick";
		ammo				= "rhs_ammo_agm65h";
		hardpoints[]		= {"RHS_HP_AGM65_3x"};
		pylonWeapon			= "rhs_weap_agm65h";
	};

// Rockets

	class rhs_mag_M151_7: VehicleMagazine
	{
		scope					= 2;
		count					= 7;
		initSpeed				= 44;
		maxLeadSpeed			= 200;
		nameSound				= "rockets";
		weight					= 48;
		ammo					= "rhs_ammo_Hydra_M151";
		displayname				= "M151 Hydra (M260)";
		displayNameShort		= "HE";
		descriptionShort		= "×7 10lb HE Hydra";
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x;
		hardpoints[]			= {"RHS_HP_FFAR_ARMY","RHS_HP_MELB"};
		pylonWeapon				= "rhs_weap_FFARLauncher";
		displayNameMFDFormat	= "RKT\%2\%1";
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "RKT"
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "6PD"
			#include "MFD\cfgHUD_AH64.hpp"
		};
	};
	class rhs_mag_M151_7_green: rhs_mag_M151_7
	{
		model			= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_green;
		displayname		= "M151 Hydra (LAU-68)";
		hardpoints[]	= {"RHS_HP_FFAR_USMC"};
	};
	class rhs_mag_M151_19: rhs_mag_M151_7
	{
		count				= 19;
		weight				= 131;
		displayname			= "M151 Hydra (M261)";
		descriptionShort	= "×19 10lb HE Hydra";
		model				= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x;
		class mfdElements: mfdElements
		{
			#define MFD_PYLON_NAME "6PD"
			#include "MFD\cfgMFD_AH64_RKT.hpp"
			#define MFD_PYLON_NAME "6PD"
			#define MFD_PYLON_NAME2 "M151"
			#include "MFD\cfgMFD_A29_RKT.hpp"
		};
	};
	class rhs_mag_M151_19_green: rhs_mag_M151_19
	{
		model			= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x_green;
		displayname		= "M151 Hydra (LAU-61)";
		hardpoints[]	= {"RHS_HP_FFAR_USMC"};
	};

	class rhs_mag_M229_7: rhs_mag_M151_7
	{
		ammo				= "rhs_ammo_Hydra_M229";
		displayname			= "M229 Hydra (M260)";
		descriptionShort	= "×7 17lb HE Hydra";
		pylonWeapon			= "rhs_weap_FFARLauncher_M229";
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "RKT"
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "6RC"
			#include "MFD\cfgHUD_AH64.hpp"
			#define MFD_PYLON_NAME "6RC"
			#define MFD_PYLON_NAME2 "M229"
			#include "MFD\cfgMFD_A29_RKT.hpp"
		};
	};
	class rhs_mag_M229_7_green: rhs_mag_M151_7_green
	{
		ammo		= "rhs_ammo_Hydra_M229";
		displayname	= "M229 Hydra (LAU-68)";
		pylonWeapon	= "rhs_weap_FFARLauncher_M229";
	};
	class rhs_mag_M229_19: rhs_mag_M151_19
	{
		ammo				= "rhs_ammo_Hydra_M229";
		displayname			= "M229 Hydra (M261)";
		descriptionShort	= "×19 17lb HE Hydra";
		pylonWeapon			= "rhs_weap_FFARLauncher_M229";
		class mfdElements: mfdElements
		{
			#define MFD_PYLON_NAME "6RC"
			#include "MFD\cfgMFD_AH64_RKT.hpp"
		};
	};
	class rhs_mag_M229_19_green: rhs_mag_M151_19_green
	{
		ammo		= "rhs_ammo_Hydra_M229";
		displayname	= "M229 Hydra (LAU-61)";
		pylonWeapon	= "rhs_weap_FFARLauncher_M229";
	};

	class rhs_mag_M257_7: rhs_mag_M151_7
	{
		ammo				= "rhs_ammo_Hydra_M257";
		displayname			= "M257 Hydra (M260)";
		displayNameShort		= "ILLUM";
		descriptionShort	= "×7 ILLUM Hydra";
		pylonWeapon			= "rhs_weap_FFARLauncher_M257";
		class mfdElements
		{
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "ILU"
			#include "MFD\cfgHUD_A10A.hpp"
			#define MFD_PYLON_NAME "ILU"
			#include "MFD\cfgHUD_AH64.hpp"
			#define MFD_PYLON_NAME "ILU"
			#define MFD_PYLON_NAME2 "M257"
			#include "MFD\cfgMFD_A29_RKT.hpp"
		};
	};
	class rhs_mag_M257_7_green: rhs_mag_M151_7_green
	{
		ammo				= "rhs_ammo_Hydra_M257";
		displayname			= "M257 Hydra (LAU-68)";
		displayNameShort		= "ILLUM";
		descriptionShort	= "×7 ILLUM Hydra";
		pylonWeapon			= "rhs_weap_FFARLauncher_M257";
	};

	class rhs_mag_FFAR_7_USAF: VehicleMagazine
	{
		scope					= 2;
		displayname				= "M151 FFAR (LAU-68)";
		displayNameShort		= "HE";
		descriptionShort		= "×7 10lb HE FFAR";
		ammo					= "rhs_ammo_FFAR_M151";
		count					= 7;
		initSpeed				= 44;
		maxLeadSpeed			= 200;
		nameSound				= "rockets";
		hardpoints[]			= {"RHS_HP_FFAR_USAF","RHS_HP_FFAR_USAF_green"};
		pylonWeapon				= "rhs_weap_FFARLauncher";
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_LAU68;
		displayNameMFDFormat	= "RKT\%2\%1";
		class mfdElements
		{
			#define A10A_2BOXES 1
			#undef MFD_PYLON_NAME
			#define MFD_PYLON_NAME "RKT"
			#include "MFD\cfgHUD_A10A.hpp"
			#undef A10A_2BOXES
			#define MFD_PYLON_NAME "6RC"
			#define MFD_PYLON_NAME2 "M151"
			#include "MFD\cfgMFD_A29_RKT.hpp"
		};
	};
	class rhs_mag_FFAR_21_USAF_LAU68_3: rhs_mag_FFAR_7_USAF
	{
		count					= 21;
		weight					= 200;
		displayName				= "M151 FFAR (BRU-42 + LAU-68)";
		descriptionShort		= "×21 10lb HEDP FFAR";
		model					= "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_r_lau68_3x";
		hardpoints[]			= {"RHS_HP_FFAR_USAF_3x"};
	};
	class rhs_mag_FFAR_19_USAF: rhs_mag_FFAR_7_USAF
	{
		count					= 19;
		weight					= 131;
		displayName				= "M151 FFAR (LAU-61)";
		descriptionShort		= "×19 10lb HE FFAR";
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x_LAU61;
		hardpoints[]			= {"RHS_HP_FFAR_HEAVY_USAF"};
	};
	class rhs_mag_FFAR_57_USAF_LAU61_3: rhs_mag_FFAR_7_USAF
	{
		count					= 57;
		weight					= 450;
		displayName				= "M151 FFAR (BRU-42 + LAU-61)";
		descriptionShort		= "×57 10lb HE FFAR";
		model					= "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_r_lau61_3x";
		hardpoints[]			= {"RHS_HP_FFAR_HEAVY_USAF_3x"};
	};

	class rhs_mag_M151_7_USAF_LAU131: rhs_mag_FFAR_7_USAF
	{
		displayname				= "M151 Hydra (LAU-131)";
		descriptionShort		= "×7 10lb HE Hydra";
		ammo					= "rhs_ammo_Hydra_M151";
		hardpoints[]			= {"RHS_HP_Hydra_USAF"};
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_LAU131;
	};
	class rhs_mag_M151_21_USAF_LAU131_3: rhs_mag_M151_7_USAF_LAU131
	{
		count					= 21;
		weight					= 200;
		displayName				= "M151 Hydra (BRU-42 + LAU-131)";
		descriptionShort		= "×21 10lb HE Hydra";
		model					= "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_r_lau131_3x";
		hardpoints[]			= {"RHS_HP_Hydra_USAF_3x"};
	};
	class rhs_mag_M257_7_USAF_LAU131: rhs_mag_M151_7_USAF_LAU131
	{
		displayname				= "M257 Hydra (LAU-131)";
		displayNameShort		= "ILLUM";
		descriptionShort		= "×7 ILLUM Hydra";
		pylonWeapon				= "rhs_weap_FFARLauncher_M257";
		ammo					= "rhs_ammo_Hydra_M257";
	};