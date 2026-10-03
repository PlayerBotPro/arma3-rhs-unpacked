class CfgWeapons
{
	class InventoryOpticsItem_Base_F;

	#include "rhs_weap_rifles.hpp"
	#include "rhs_weap_pistols.hpp"
	#include "rhs_weap_mguns.hpp"
	#include "rhs_weap_launchers.hpp"
	#define INVENTORY_CATEGORY accessories
	#include "rhs_misc.hpp"
	#include "rhs_weap_acc.hpp"

	#include "rhs_weap_ai.hpp"

	///! mines & grenades
	class Default;
	class Put: Default
	{
		muzzles[] += {Rhs_Mine_Muzzle};
		class PutMuzzle: Default {};
		class Rhs_Mine_Muzzle: PutMuzzle
		{
			magazines[] =
			{
				rhs_mine_pmn2_mag,
				rhs_mine_tm62m_mag,
				rhs_mine_msk40p_white_mag,
				rhs_mine_msk40p_red_mag,
				rhs_mine_msk40p_green_mag,
				rhs_mine_msk40p_blue_mag,
				rhs_mine_sm320_white_mag,
				rhs_mine_sm320_red_mag,
				rhs_mine_sm320_green_mag,
				rhs_mine_ozm72_a_mag,
				rhs_mine_ozm72_b_mag,
				rhs_mine_ozm72_c_mag,
				rhs_ec75_mag,
				rhs_ec200_mag,
				rhs_ec400_mag,
				rhs_ec75_sand_mag,
				rhs_ec200_sand_mag,
				rhs_ec400_sand_mag
			};
		};
	};
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {
			Rhs_Throw_Grenade,
			Rhs_Throw_RgnGrenade,
			Rhs_Throw_RgoGrenade,
			Rhs_Throw_Smoke,
			Rhs_Throw_Smoke_black,
			Rhs_Throw_Smoke_nspd,
			Rhs_Throw_Flare_yellow,
			Rhs_Throw_Flare_green,
			Rhs_Throw_Flare_red,
			Rhs_Throw_Flash_fakel,
			Rhs_Throw_Flash_fakels,
			Rhs_Throw_Flash_zarya2,
			Rhs_Throw_Flash_plamyam
		};
		class ThrowMuzzle: GrenadeLauncher {};
		class Rhs_Throw_Grenade: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_rgd5"
			};
			/*class Eventhandlers
			{
				class RHS_ThrowAction {
					fired = "systemchat 'test'";
				};
			};*/
		};
		class Rhs_Throw_RgnGrenade: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_rgn"
			};
			class Eventhandlers
			{
				class RHS_ThrowAction {
					fired = "[_this select 0, _this select 6] call RHS_FNC_RGNO_IMPACT;";
				};
			};
		};
		class Rhs_Throw_RgoGrenade : ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_rgo"
			};
			class Eventhandlers
			{
				class RHS_ThrowAction {
					fired = "[_this select 0, _this select 6] call RHS_FNC_RGNO_IMPACT;";
				};
			};
		};
		class Rhs_Throw_Smoke: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_rdg2_white"
			};
		};
		class Rhs_Throw_Smoke_black : ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_rdg2_black"
			};
		};
		class Rhs_Throw_Smoke_nspd: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_nspd"
			};
		};
		class Rhs_Throw_Flare_yellow: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_nspn_yellow"
			};
		};
		class Rhs_Throw_Flare_red: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_nspn_red"
			};
		};
		class Rhs_Throw_Flare_green: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_nspn_green"
			};
		};
		class Rhs_Throw_Flash_fakel: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_fakel"
			};
		};
		class Rhs_Throw_Flash_fakels: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_fakels"
			};
		};
		class Rhs_Throw_Flash_zarya2: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_zarya2"
			};
		};
		class Rhs_Throw_Flash_plamyam: ThrowMuzzle
		{
			magazines[] =
			{
				"rhs_mag_plamyam"
			};
		};
	};
};