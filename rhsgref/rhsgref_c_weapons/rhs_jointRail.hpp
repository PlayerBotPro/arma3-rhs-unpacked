
//asdg JR support
class asdg_SlotInfo;
class asdg_OpticRail;

class asdg_OpticRail1913: asdg_OpticRail
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";

	class compatibleItems
	{
		rhsgref_acc_RX01_camo=1;
		rhsgref_acc_RX01_NoFilter_camo=1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
	};
};

class asdg_OpticRail1913_long: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
	};
};

class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems;
};
class asdg_OpticSideRail_AKSVD: asdg_OpticSideMount {};

class rhs_russian_rifle_scopes_slot: asdg_OpticSideRail_AKSVD
{
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "$STR_A3_CowsSlot0";
};
class rhs_russian_rifle_scopes_slot_npz: rhs_russian_rifle_scopes_slot
{
	class compatibleItems: compatibleItems
	{
	};
};

class asdg_UnderSlot: asdg_SlotInfo
{
	linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint = "Bottom";
	class compatibleItems
	{
	};
};

class asdg_OpticRailL1A1: asdg_OpticRail
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";

	class compatibleItems
	{
		rhsgref_acc_l1a1_l2a2=1;
		rhsgref_acc_l1a1_l2a2_3d=1;
		rhsgref_acc_l1a1_anpvs2=1;
	};
};
class rhs_l1a1_rifle_scopes_slot: asdg_OpticRailL1A1
{
	ICON_OVERLAY_DISABLED
};

//because of arsenal limitation weapons need to be listed twice
class rhs_western_rifle_scopes_slot_short: asdg_OpticRail1913_short{};
class rhs_western_rifle_scopes_slot_long: asdg_OpticRail1913_long {};
class rhs_western_rifle_underbarrel_slot_bis: UnderBarrelSlot{};
class rhs_rifle_gripod_slot: UnderBarrelSlot
{
	displayName = "Gripod slot";
	class compatibleItems
	{
	};
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot
{
	linkProxy = "rhsusf\addons\rhsusf_weapons\rhs_grip_proxy";
};
class rhs_western_mg_gripod_slot: rhs_western_rifle_gripod_slot
{
	class compatibleItems: compatibleItems
	{
	};
};


class asdg_MuzzleSlot;

class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
	};
};
class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556
{
	class compatibleItems: compatibleItems
	{
	};
};

class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
		rhsgref_sdn6_suppressor=1;
	};

};
class rhs_western_762rifle_muzzle_slot: asdg_MuzzleSlot_762
{
	class compatibleItems: compatibleItems
	{
	};
};
class rhs_FAL_muzzle_slot: rhs_western_762rifle_muzzle_slot
{
	class compatibleItems: compatibleItems
	{
		rhsgref_acc_falMuzzle_l1a1=1;
	};
};

class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
	};
};
class rhs_western_9mmpistol_muzzle_slot: asdg_MuzzleSlot_9MM
{
	class compatibleItems: compatibleItems
	{
	};
};

class rhs_western_rifle_underbarrel_slot: asdg_UnderSlot
{
	class compatibleItems: compatibleItems
	{
	};
};

class asdg_MuzzleSlot_762MG : asdg_MuzzleSlot {
	class compatibleItems
	{
	};
};

//this one is now used only to get data to russian virtual ammobox
//expect proper script to get from new array one day
class rhs_western_rifle_scopes_slot: CowsSlot
{
	compatibleItems[] =
	{
	};
};


class asdg_FrontSideRail: asdg_SlotInfo
{
	linkProxy = "\a3\data_f\proxies\weapon_slots\side";
	displayName = "$STR_A3_PointerSlot0";

	class compatibleItems
	{
	};
};

//top & side rail
class rhs_western_rifle_laser_slot_top: asdg_FrontSideRail {};

//only side rail
class rhs_western_rifle_laser_slot: rhs_western_rifle_laser_slot_top
{
	class compatibleItems: compatibleItems
	{
	};
};

class asdg_PistolUnderRail : asdg_SlotInfo {
	linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
	displayName = "$STR_A3_PointerSlot0";
	iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint = "Bottom";

	class compatibleItems
	{
	};
};

class rhs_western_pistol_laser_slot: asdg_PistolUnderRail {};

#include "debugSlots.hpp"
#include "rhs_bisRails.hpp"
