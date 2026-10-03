// FAB-100 & variants


class rhs_mag_fab100: VehicleMagazine
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250;
	scope				= 2;
	count				= 1;
	initspeed			= 0;
	maxleadspeed		= 5;

	namesound			= "";
	ammo				= rhs_ammo_fab100;
	displayname			= $STR_RHS_MAG_FAB100;
	displayNameShort	= "HE";
	// dynamic loadout parameters
	hardpoints[]		= {"RHS_HP_FAB100"};
	pylonWeapon			= rhs_weap_fab100;
	weight				= 100;
	mass				= 100;
	class mfdElements
	{
		#define MFD_PYLON_NAME "АБ100"
		#define MFD_PYLON_SIZE_IN 0.01
		#define MFD_PYLON_SIZE_OUT 0.02
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_fab100_ka52: rhs_mag_fab100
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52;
	hardpoints[]		= {"RHS_HP_FAB100_KA52"};
};
class rhs_mag_fab100_bd3_umk2a: rhs_mag_fab100
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_FAB100_BD3_UMK2A"};
};
class rhs_mag_fab100_MBD3_U4T: rhs_mag_fab100
{
	displayname			= "FAB-100 MBD3-U4T";
	count 				= 4;
	weight				= __EVAL(100*4);
	mass				= __EVAL(100*4);
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_mbd3_u4t_fab100;
	pylonweapon 		= "rhs_weap_fab100_mbd3_u4t";
	hardpoints[]		= {"RHS_HP_FAB100_MBD3_U4T"};
	mirrorMissilesIndexes[] = {3,4,1,2};
};
class rhs_mag_fab100_MBD3_U6: rhs_mag_fab100
{
	displayname			= "FAB-100 MBD3-U6";
	count 				= 6;
	weight				= __EVAL(100*6);
	mass				= __EVAL(100*6);
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_mbd3_u6_fab100;
	pylonweapon 		= "rhs_weap_fab100_mbd3_u6";
	hardpoints[]		= {"RHS_HP_FAB100_MBD3_U6"};
	mirrorMissilesIndexes[] = {3,4,1,2,5,6};
};
// FAB-250 & variants

class rhs_mag_fab250: VehicleMagazine
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250;
	scope				= 2;
	ammo				= rhs_ammo_fab250;
	count				= 1;
	displayname			= "$STR_RHS_FAB250_NAME";
	displayNameShort	= "HE";
	initspeed			= 0;
	maxleadspeed		= 5;
	namesound			= "";
	// dynamic loadout parameters
	hardpoints[]		= {"RHS_HP_FAB250"};
	pylonWeapon			= rhs_weap_fab250;
	weight				= 266;
	mass				= 266;
	class mfdElements
	{
		#define MFD_PYLON_NAME "АБ250"
		#define MFD_PYLON_SIZE_IN 0.015
		#define MFD_PYLON_SIZE_OUT 0.025
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_fab250_2: rhs_mag_fab250
{
	count	= 2;
	weight	= __EVAL(266*2);
	mass	= __EVAL(266*2);
	hardpoints[]		= {""};
};
class rhs_mag_fab250_4: rhs_mag_fab250
{
	count	= 4;
	weight	= __EVAL(266*4);
	mass	= __EVAL(266*4);
	hardpoints[]		= {""};
};
class rhs_mag_fab250_ka52: rhs_mag_fab250
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52;
	hardpoints[]		= {"RHS_HP_FAB250_KA52"};
};
class rhs_mag_fab250_bd3_umk2a: rhs_mag_fab250
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_FAB250_BD3_UMK2A"};
};
class rhs_mag_fab250_m62: rhs_mag_fab250
{
	ammo				= rhs_ammo_fab250_m62;
	displayname			= "$STR_RHS_MAG_FAB250_M62";
	pylonWeapon			= rhs_weap_fab250_m62;
};
class rhs_mag_fab250_m62_ka52: rhs_mag_fab250_m62
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52;
	hardpoints[]		= {"RHS_HP_FAB250_KA52"};
};
class rhs_mag_fab250_m62_bd3_umk2a: rhs_mag_fab250_m62
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_FAB250_BD3_UMK2A"};
};
class rhs_mag_ofab250: rhs_mag_fab250
{
	ammo				= rhs_ammo_ofab250;
	displayname			= "$STR_RHS_OFAB250_NAME";
	displayNameShort	= "HE-FRAG";
	pylonWeapon			= rhs_weap_ofab250;
};
class rhs_mag_ofab250_ka52: rhs_mag_ofab250
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52;
	hardpoints[]		= {"RHS_HP_FAB250_KA52"};
};
class rhs_mag_ofab250_bd3_umk2a: rhs_mag_ofab250
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_FAB250_BD3_UMK2A"};
};
class rhs_mag_kab250: rhs_mag_fab250
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kab250_ext;
	ammo				= rhs_ammo_kab250;
	displayname			= "$STR_RHS_KAB250_NAME";
	displayNameShort	= "LGB";
	pylonWeapon			= rhs_weap_kab250;
	hardpoints[]		= {"RHS_HP_KAB250"};
	class mfdElements
	{
		#define MFD_PYLON_NAME "КАБ250"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_kab250_int: rhs_mag_kab250
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kab250;
	hardpoints[]		= {"RHS_HP_FAB250","RHS_HP_KAB250_INT"};
};
class rhs_mag_rbk250_ao1: rhs_mag_fab250
{
	ammo				= rhs_ammo_rbk250_ao1;
	displayname			= "$STR_RHS_MAG_RBK250_AO1";
	displayNameShort	= "Cluster HE";
	pylonWeapon			= rhs_weap_rbk250_ao1;
	class mfdElements
	{
		#define MFD_PYLON_NAME "РБК250"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_rbk250_ao1_ka52: rhs_mag_rbk250_ao1
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52;
	hardpoints[]		= {"RHS_HP_FAB250_KA52"};
};
class rhs_mag_rbk250_ao1_bd3_umk2a: rhs_mag_rbk250_ao1
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_FAB250_BD3_UMK2A"};
};
class rhs_mag_rbk250_ptab25: rhs_mag_fab250
{
	ammo				= rhs_ammo_rbk250_ptab25;
	displayname			= "$STR_RHS_MAG_RBK250_PTAB25";
	displayNameShort	= "Cluster HEAT";
	pylonWeapon			= rhs_weap_rbk250_ptab25;
};
class rhs_mag_rbk250_ptab25_ka52: rhs_mag_rbk250_ptab25
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52;
	hardpoints[]		= {"RHS_HP_FAB250_KA52"};
};
class rhs_mag_rbk250_ptab25_bd3_umk2a: rhs_mag_rbk250_ptab25
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_FAB250_BD3_UMK2A"};
};
class rhs_mag_rbk250_zab25t: rhs_mag_fab250
{
	ammo				= rhs_ammo_rbk250_zab25t;
	displayname			= "$STR_RHS_MAG_RBK250_ZAB25T";
	displayNameShort	= "Cluster Incendiary";
	pylonWeapon			= rhs_weap_rbk250_zab25t;
};
class rhs_mag_rbk250_zab25t_ka52: rhs_mag_rbk250_zab25t
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52;
	hardpoints[]		= {"RHS_HP_FAB250_KA52"};
};
class rhs_mag_rbk250_zab25t_bd3_umk2a: rhs_mag_rbk250_zab25t
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_FAB250_BD3_UMK2A"};
};
// FAB-500 & variants
class rhs_mag_fab500: rhs_mag_fab250
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_fab500;
	ammo			= rhs_ammo_fab500;
	displayname		= "$STR_RHS_FAB500_M62_NAME";
	weight			= 500;
	mass			= 500;
	hardpoints[]	= {"RHS_HP_FAB500"};
	pylonWeapon		= rhs_weap_fab500;
	class mfdElements
	{
		#define MFD_PYLON_NAME "АБ500"
		#define MFD_PYLON_SIZE_IN 0.02
		#define MFD_PYLON_SIZE_OUT 0.035
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_fab500_bd3_usk_a: rhs_mag_fab500
{
	// using BD3-USK-A pylon
	// БД3-УСК-А http://www.russianarms.ru/forum/index.php?topic=9389.0
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_fab500_ext;
	hardpoints[]	= {"RHS_HP_FAB500_BD3_USK_A"};
};
class rhs_mag_fab500_bd3_umk2a: rhs_mag_fab500
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_FAB500_BD3_UMK2A"};
};
class rhs_mag_fab500_ka52: rhs_mag_fab500
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52;
	hardpoints[]		= {"RHS_HP_FAB500_KA52"};
};
class rhs_mag_fab500_m54: rhs_mag_fab500
{
	ammo			= rhs_ammo_fab500_m54;
	displayname		= "$STR_RHS_fab500_M54_NAME";
};
class rhs_mag_fab500_m54_bd3_usk_a: rhs_mag_fab500_m54
{
	// using BD3-USK-A pylon
	// БД3-УСК-А http://www.russianarms.ru/forum/index.php?topic=9389.0
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_fab500_ext;
	hardpoints[]	= {"RHS_HP_FAB500_BD3_USK_A"};
};
class rhs_mag_fab500_m54_bd3_umk2a: rhs_mag_fab500_m54
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_FAB500_BD3_UMK2A"};
};
class rhs_mag_fab500_m54_ka52: rhs_mag_fab500_m54
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52;
	hardpoints[]		= {"RHS_HP_FAB500_KA52"};
};
class rhs_mag_kab500: rhs_mag_fab500
{
	ammo				= rhs_ammo_kab500;
	displayname			= "$STR_RHS_KAB500L_NAME";
	displayNameShort	= "LGB";
	pylonWeapon			= rhs_weap_kab500;
	class mfdElements
	{
		#define MFD_PYLON_NAME "КАБ500"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_kab500_bd3_umk2a: rhs_mag_kab500
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_KAB500_BD3_UMK2A"};
};
class rhs_mag_kab500LK: rhs_mag_fab500
{
	ammo				= rhs_ammo_kab500lk;
	displayname			= "$STR_RHS_KAB500LK_NAME";
	displayNameShort	= "LG Cluster";
	pylonWeapon			= rhs_weap_kab500LK;
};
class rhs_mag_kab500LK_bd3_umk2a: rhs_mag_kab500LK
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_KAB500_BD3_UMK2A"};
};
class rhs_mag_kab500kr: rhs_mag_fab500
{
	ammo				= rhs_ammo_kab500kr;
	displayname			= "$STR_RHS_KAB500KR_NAME";
	displayNameShort	= "TV Bomb";
	pylonWeapon			= rhs_weap_kab500kr;
};
class rhs_mag_kab500kr_bd3_umk2a: rhs_mag_kab500kr
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_KAB500_BD3_UMK2A"};
};
class rhs_mag_kab500od: rhs_mag_fab500
{
	ammo				= rhs_ammo_kab500od;
	displayname			= "$STR_RHS_KAB500OD_NAME";
	displayNameShort	= "TV HE Bomb";
	pylonWeapon			= rhs_weap_kab500od;
};
class rhs_mag_kab500od_bd3_umk2a: rhs_mag_kab500od
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250;
	hardpoints[]		= {"RHS_HP_KAB500_BD3_UMK2A"};
};
class rhs_mag_rbk500_ao25: rhs_mag_fab500
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500;
	ammo				= rhs_ammo_rbk500_ao25;
	displayname			= "$STR_RHS_MAG_RBK500_AO25";
	displayNameShort	= "Cluster HE";
	pylonWeapon			= rhs_weap_rbk500_ao25;
	class mfdElements
	{
		#define MFD_PYLON_NAME "РБК500"
		#include "MFD\cfgHUD_RusName.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_rbk500_ao25_bd3_usk_a: rhs_mag_rbk500_ao25
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ext;
	hardpoints[]	= {"RHS_HP_FAB500_BD3_USK_A"};
};
class rhs_mag_rbk500_ao25_bd3_umk2a: rhs_mag_rbk500_ao25
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500;
	hardpoints[]		= {"RHS_HP_FAB500_BD3_UMK2A"};
};
class rhs_mag_rbk500_ao25_ka52: rhs_mag_rbk500_ao25
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ka52;
	hardpoints[]		= {"RHS_HP_FAB500_KA52"};
};
class rhs_mag_rbk500_ofab50: rhs_mag_fab500
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500;
	ammo				= rhs_ammo_rbk500_ofab50;
	displayname			= "$STR_RHS_MAG_RBK500_OFAB50";
	displayNameShort	= "Cluster HE-FRAG";
	pylonWeapon			= rhs_weap_rbk500_ofab50;
};
class rhs_mag_rbk500_ofab50_bd3_usk_a: rhs_mag_rbk500_ofab50
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ext;
	hardpoints[]	= {"RHS_HP_FAB500_BD3_USK_A"};
};
class rhs_mag_rbk500_ofab50_bd3_umk2a: rhs_mag_rbk500_ofab50
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500;
	hardpoints[]		= {"RHS_HP_FAB500_BD3_UMK2A"};
};
class rhs_mag_rbk500_ofab50_ka52: rhs_mag_rbk500_ofab50
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ka52;
	hardpoints[]		= {"RHS_HP_FAB500_KA52"};
};
class rhs_mag_rbk500_spbed: rhs_mag_fab500
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_spbed;
	ammo				= rhs_ammo_rbk500_spbed;
	displayname			= "$STR_RHS_MAG_RBK500_SPBED";
	displayNameShort	= "Cluster Guided HEAT";
	pylonWeapon			= rhs_weap_rbk500_spbed;
};
class rhs_mag_rbk500_spbed_bd3_usk_a: rhs_mag_rbk500_spbed
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_spbed_ext;
	hardpoints[]	= {"RHS_HP_FAB500_BD3_USK_A"};
};
class rhs_mag_rbk500_spbed_bd3_umk2a: rhs_mag_rbk500_spbed
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500_spbed;
	hardpoints[]		= {"RHS_HP_FAB500_BD3_UMK2A"};
};
class rhs_mag_rbk500_spbed_ka52: rhs_mag_rbk500_spbed
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_spbed_ka52;
	hardpoints[]		= {"RHS_HP_FAB500_KA52"};
};
class rhs_mag_rbk500_ptab1m: rhs_mag_fab500
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ptab;
	ammo				= rhs_ammo_rbk500_ptab1m;
	displayname			= "$STR_RHS_MAG_RBK500_PTAB1M";
	displayNameShort	= "Cluster HEAT";
	pylonWeapon			= rhs_weap_rbk500_ptab1m;
};
class rhs_mag_rbk500_ptab1m_bd3_usk_a: rhs_mag_rbk500_ptab1m
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ptab_ext;
	hardpoints[]	= {"RHS_HP_FAB500_BD3_USK_A"};
};
class rhs_mag_rbk500_ptab1m_bd3_umk2a: rhs_mag_rbk500_ptab1m
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500_ptab;
	hardpoints[]		= {"RHS_HP_FAB500_BD3_UMK2A"};
};
class rhs_mag_rbk500_ptab1m_ka52: rhs_mag_rbk500_ptab1m
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ptab_ka52;
	hardpoints[]		= {"RHS_HP_FAB500_KA52"};
};
class rhs_mag_rbk500_zab25t: rhs_mag_fab500
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500;
	ammo				= rhs_ammo_rbk500_zab25t;
	displayname			= "$STR_RHS_MAG_RBK500_ZAB25T";
	displayNameShort	= "Cluster Incendiary";
	pylonWeapon			= rhs_weap_rbk500_zab25t;
};
class rhs_mag_rbk500_zab25t_bd3_usk_a: rhs_mag_rbk500_zab25t
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ext;
	hardpoints[]	= {"RHS_HP_FAB500_BD3_USK_A"};
};
class rhs_mag_rbk500_zab25t_bd3_umk2a: rhs_mag_rbk500_zab25t
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500;
	hardpoints[]		= {"RHS_HP_FAB500_BD3_UMK2A"};
};
class rhs_mag_rbk500_zab25t_ka52: rhs_mag_rbk500_zab25t
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ka52;
	hardpoints[]		= {"RHS_HP_FAB500_KA52"};
};
// KMGU-2 & variants
class rhs_mag_kmgu2_ao25: rhs_mag_fab250
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2;
	ammo			= rhs_ammo_kmgu2_ao25;
	displayname		= "$STR_RHS_MAG_KMGU2_AO25";
	displayNameShort= "Cluster HE";
	ejectSpeed[]	= {1,0,0};
	initSpeed		= 0;
	initSpeedY		= -5;
	initSpeedZ		= 0;
	weight			= 500;
	mass			= 500;
	count			= 8; // 8 casetes with 12 bombs
	hardpoints[]	= {"RHS_HP_KMGU2"};
	pylonWeapon		= rhs_weap_kmgu2_ao25;
	class mfdElements
	{
		#define MFD_PYLON_NAME "КМГ"
		#define MFD_PYLON_SIZE_IN 0.025
		#define MFD_PYLON_SIZE_OUT 0.04
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_kmgu2_ao25_bd3_umk2a: rhs_mag_kmgu2_ao25
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kmgu2;
	hardpoints[]	= {"RHS_HP_KMGU2_BD3_UMK2A"};
};
class rhs_mag_kmgu2_ao25_ka52: rhs_mag_kmgu2_ao25
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2_ka52;
	hardpoints[]	= {"RHS_HP_KMGU2_KA52"};
};
class rhs_mag_kmgu2_ptab1m: rhs_mag_kmgu2_ao25
{
	ammo			= rhs_ammo_kmgu2_ptab1m;
	displayname		= "$STR_RHS_MAG_KMGU2_PTAB1M";
	displayNameShort= "Cluster HEAT";
	pylonWeapon		= rhs_weap_kmgu2_ptab1m;
};
class rhs_mag_kmgu2_ptab1m_bd3_umk2a: rhs_mag_kmgu2_ptab1m
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kmgu2;
	hardpoints[]	= {"RHS_HP_KMGU2_BD3_UMK2A"};
};
class rhs_mag_kmgu2_ptab1m_ka52: rhs_mag_kmgu2_ptab1m
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2_ka52;
	hardpoints[]	= {"RHS_HP_KMGU2_KA52"};
};
class rhs_mag_kmgu2_pfm1: rhs_mag_kmgu2_ao25
{
	ammo			= rhs_ammo_kmgu2_pfm1;
	displayname		= "$STR_RHS_MAG_KMGU2_PFM1";
	displayNameShort= "Cluster AP Mine";
	pylonWeapon		= rhs_weap_kmgu2_pfm1;
};
class rhs_mag_kmgu2_pfm1_bd3_umk2a: rhs_mag_kmgu2_pfm1
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kmgu2;
	hardpoints[]	= {"RHS_HP_KMGU2_BD3_UMK2A"};
};
class rhs_mag_kmgu2_pfm1_ka52: rhs_mag_kmgu2_pfm1
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2_ka52;
	hardpoints[]	= {"RHS_HP_KMGU2_KA52"};
};
class rhs_mag_kmgu2_ptm1: rhs_mag_kmgu2_ao25
{
	ammo			= rhs_ammo_kmgu2_ptm1;
	displayname		= "$STR_RHS_MAG_KMGU2_PTM1";
	displayNameShort= "Cluster AT Mine";
	pylonWeapon		= rhs_weap_kmgu2_ptm1;
};
class rhs_mag_kmgu2_ptm1_bd3_umk2a: rhs_mag_kmgu2_ptm1
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kmgu2;
	hardpoints[]	= {"RHS_HP_KMGU2_BD3_UMK2A"};
};
class rhs_mag_kmgu2_ptm1_ka52: rhs_mag_kmgu2_ptm1
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2_ka52;
	hardpoints[]	= {"RHS_HP_KMGU2_KA52"};
};
///! Mines

class ATMine_Range_Mag;

class rhs_mag_mine_pfm1: ATMine_Range_Mag
{
	AUTHOR_MACRO
	displayName			= $STR_RHS_PFM1_NAME;
	descriptionShort	= $STR_RHS_CFGMAGAZINES_PMN21;
	model				= \rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d;
	picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_pfm1_ca";
	mass				= 4.24;
	ammo				= rhs_ammo_pfm1;
};

class rhs_mag_mine_ptm1: ATMine_Range_Mag
{
	AUTHOR_MACRO
	displayName			= $STR_RHS_PTM1_NAME;
	descriptionShort	= $STR_RHS_CFGMAGAZINES_TM62M1;
	model				= \rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d;
	picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_ptm1_ca";
	mass				= 30.0; // 1.5kg
	ammo				= rhs_ammo_ptm1;
};

class rhs_mag_ptb1150_ptb: rhs_mag_ofab250_bd3_umk2a
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_ptb_ptb1150;
	ammo				= rhs_ammo_ptb1150;
	displayname			= "$STR_RHS_PTB1150_NAME";
	displayNameShort	= "PTB";
	hardpoints[]		= {"RHS_HP_PTB1150"};
	pylonWeapon			= rhs_weap_ptb1150;
	class mfdElements
	{
		#define MFD_PYLON_NAME "ПТАБ"
		#define MFD_PYLON_CAPACITY 1150
		#define MFD_PYLON_SIZE_IN 0.015
		#define MFD_PYLON_SIZE_OUT 0.02
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_ptb1500: VehicleMagazine
{
	scope			= 2;
	ammo			= "rhs_ammo_ptb1500";
	displayName		= "$STR_RHS_PTB1500_NAME";
	count			= 1;
	initSpeed		= 0;
	sound[]			= {};
	reloadSound[]	= {};
	nameSound		= "";
	model			= \rhsafrf\addons\rhs_airweapons\rhs_pylon_ptb_ptb1500;
	pylonweapon		= "rhs_weap_DummyLauncher";
	hardpoints[]	= {"RHS_HP_PTB1500"};
	class mfdElements
	{
		#define MFD_PYLON_NAME "ПТАБ"
		#define MFD_PYLON_CAPACITY 1500
		#define MFD_PYLON_SIZE_IN 0.025
		#define MFD_PYLON_SIZE_OUT 0.04
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};