class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;


	#include "rhsgref_weap_rifles.hpp"
	#include "rhsgref_weap_launchers.hpp"
	#include "rhsgref_weap_AI.hpp"
	#include "rhsgref_weap_pistols.hpp"
	#define INVENTORY_CATEGORY accessories
	#include "rhsgref_weap_acc.hpp"
	//#include "rhs_misc.hpp"

		///! mines + explosives
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {
			rhsgref_Throw_Grenade,
			rhsgref_Throw_ATGrenade,
			rhsgref_Throw_TNT_x2,
			rhsgref_Throw_sb3kg,
			rhsgref_Throw_m1939,
			rhsgref_Throw_m1939_f,
			rhsgref_Throw_nbhgr39,
			rhsgref_Throw_sthgr24,
			rhsgref_Throw_sthgr24_f,
			rhsgref_Throw_sthgr24_x7bundle,
			rhsgref_Throw_sthgr43,
			rhsgref_Throw_sthgr43_f,
			rhsgref_Throw_mki,
			rhsgref_Throw_mkii,
			rhsgref_Throw_mkiii,
			rhsgref_Throw_anm8,
			rhsgref_Throw_m15,
			rhsgref_Throw_khattabka_vog17,
			rhsgref_Throw_khattabka_vog25
		};
		class ThrowMuzzle: GrenadeLauncher {};
		class rhsgref_Throw_Grenade: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_f1"
			};
		};
		class rhsgref_throw_ATGrenade: ThrowMuzzle
		{
			magazines[] =
			{
				"rhsgref_mag_rkg3em"
			};
			class Eventhandlers
			{
				class RHS_ThrowAction {
					fired = "[_this select 0, _this select 6] call RHS_FNC_RKG3_IMPACT;";
				};
			};
		};
		class rhsgref_Throw_tnt_x2: ThrowMuzzle
		{
			magazines[] = {
				//.5 TNT Charge x2
				"rhs_charge_tnt_x2_mag"
			};
		};
		class rhsgref_Throw_sb3kg: ThrowMuzzle
		{
			magazines[] = {
				//Sprengbuechse (3kg)
				"rhs_charge_sb3kg_mag"
			};
		};
		class rhsgref_Throw_m1939: ThrowMuzzle
		{
			magazines[] = {
				//M39 Concussion
				"rhs_grenade_m1939e_mag",
				"rhs_grenade_m1939l_mag"
			};
		};
		class rhsgref_Throw_m1939_f: ThrowMuzzle
		{
			magazines[] = {
				//M39 Frag
				"rhs_grenade_m1939e_f_mag",
				"rhs_grenade_m1939l_f_mag"
			};
		};
		class rhsgref_Throw_nbhgr39: ThrowMuzzle
		{
			magazines[] = {
				//nbhgr39 Smoke
				"rhs_grenade_nbhgr39_mag",
				"rhs_grenade_nbhgr39B_mag"
			};
		};
		class rhsgref_Throw_sthgr24: ThrowMuzzle
		{
			magazines[] = {
				//M24
				"rhs_grenade_sthgr24_mag"
			};
		};
		class rhsgref_Throw_sthgr24_f: ThrowMuzzle
		{
			magazines[] = {
				//M24 Frag
				"rhs_grenade_sthgr24_heerfrag_mag",
				"rhs_grenade_sthgr24_SSfrag_mag"
			};
		};
		class rhsgref_Throw_sthgr24_x7bundle: ThrowMuzzle
		{
			magazines[] = {
				//M24 Bundle of 7
				"rhs_grenade_sthgr24_x7bundle_mag"
			};
		};
		class rhsgref_Throw_sthgr43: ThrowMuzzle
		{
			magazines[] = {
				//M43
				"rhs_grenade_sthgr43_mag"
			};
		};
		class rhsgref_Throw_sthgr43_f: ThrowMuzzle
		{
			magazines[] = {
				//M43 Frag
				"rhs_grenade_sthgr43_heerfrag_mag",
				"rhs_grenade_sthgr43_SSfrag_mag"
			};
		};
		class rhsgref_Throw_mki: ThrowMuzzle
		{
			magazines[] = {
				//MkI Illumination
				"rhs_grenade_mki_mag"
			};
		};

		class rhsgref_Throw_mkii: ThrowMuzzle
		{
			magazines[] = {
				//MkII Frag
				"rhs_grenade_mkii_mag"
			};
		};
		class rhsgref_Throw_mkiii: ThrowMuzzle
		{
			magazines[] = {
				//MkIII Concussion
				"rhs_grenade_mkiiia1_mag"
			};
		};
		class rhsgref_Throw_anm8: ThrowMuzzle
		{
			magazines[] = {
				//M8 Smoke Grenade
				"rhs_grenade_anm8_mag"
			};
		};
		class rhsgref_Throw_m15: ThrowMuzzle
		{
			magazines[] = {
				//M15 Bursting WP Smoke Grenade
				"rhs_grenade_m15_mag"
			};
		};

		class rhsgref_Throw_khattabka_vog17: ThrowMuzzle
		{
			magazines[] = {
				"rhs_grenade_khattabka_vog17_mag"
			};
		};
		class rhsgref_Throw_khattabka_vog25: ThrowMuzzle
		{
			magazines[] = {
				"rhs_grenade_khattabka_vog25_mag"
			};
		};
	};
	
	class Default;
	class Put: Default
	{
		muzzles[] += {rhsgref_Mine_Muzzle};
		class PutMuzzle: Default {};

		class rhsgref_Mine_Muzzle: PutMuzzle
		{
			magazines[] = {
				//DE
				"rhs_mine_smine35_press_mag",
				"rhs_mine_smine35_trip_mag",
				"rhs_mine_smine44_press_mag",
				"rhs_mine_smine44_trip_mag",
				"rhs_mine_glasmine43_hz_mag",
				"rhs_mine_glasmine43_bz_mag",
				"rhs_mine_stockmine43_2m_mag",
				"rhs_mine_stockmine43_4m_mag",
				"rhs_mine_a200_bz_mag",
				"rhs_mine_a200_dz35_mag",
				"rhs_mine_TM43_mag",
				//"rhs_charge_sb3kg_mag",

				//US
				"rhs_mine_m2a3b_press_mag",
				"rhs_mine_m2a3b_trip_mag",
				"rhs_mine_m3_pressure_mag",
				"rhs_mine_mk2_pressure_mag",
				"rhs_mine_M3_tripwire_mag",
				"rhs_mine_Mk2_tripwire_mag",
				"rhs_mine_M7A2_mag",
				"rhs_charge_M2tet_x2_mag"
			};
		};
	};
};