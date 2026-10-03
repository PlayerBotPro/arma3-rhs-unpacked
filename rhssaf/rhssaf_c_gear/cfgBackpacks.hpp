class B_Kitbag_Base;

#define INVENTORY_CATEGORY Backpacks

class rhssaf_Kitbag_base : B_Kitbag_Base
{
	DLC_AUTHOR;
	SCOPE_PROTECTED;
	model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
	picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
	hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
	maximumLoad = 280;
	mass = 50;
};
class rhssaf_kitbag_md2camo: rhssaf_Kitbag_base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	class SimpleObject
	{
		animate[] = {{"animationName1", 1}, {"animationName2", 2}};
		hide[] = {"animationSelection1", "animationSelection2"};
		verticalOffset = 0;
	};
	picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
	displayname = $STR_RHSSAF_KITBAG_MD2CAMO_DISPLAYNAME;
	hiddenSelections[] = {"Camo"};
	hiddenselectionstextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\backpack_rhssaf_fast_md2camo_co.paa"};
};
class rhssaf_kitbag_digital: rhssaf_Kitbag_base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	class SimpleObject
	{
		animate[] = {{"animationName1", 1}, {"animationName2", 2}};
		hide[] = {"animationSelection1", "animationSelection2"};
		verticalOffset = 0;
	};
	picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
	displayname = $STR_RHSSAF_KITBAG_DIGITAL_DISPLAYNAME;
	hiddenSelections[] = {"Camo"};
	hiddenselectionstextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\backpack_rhssaf_fast_digital_co.paa"};
};
class rhssaf_kitbag_smb: rhssaf_Kitbag_base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	class SimpleObject
	{
		animate[] = {{"animationName1", 1}, {"animationName2", 2}};
		hide[] = {"animationSelection1", "animationSelection2"};
		verticalOffset = 0;
	};
	picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
	displayname = $STR_RHSSAF_KITBAG_SMB_DISPLAYNAME;
	hiddenSelections[] = {"Camo"};
	hiddenselectionstextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\backpack_rhssaf_fast_smb_co.paa"};
};

class Bag_Base;

class rhssaf_alice_md2camo : Bag_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_alice_md2camo)
	picture = "\rhssaf\addons\rhssaf_c_gear\data\backpacks\icon_alice_ca.paa";
	displayname = $STR_RHSSAF_ALICE_MD2CAMO_DISPLAYNAME;
	hiddenSelections[] = {"Camo"};
	hiddenselectionstextures[] = {"\rhssaf\addons\rhssaf_backpacks\alice\data\rhssaf_alice_md2camo_co.paa"};
	model = "\rhssaf\addons\rhssaf_backpacks\alice\rhssaf_alice";
	maximumLoad = 320;
	mass = 60;
};
class rhssaf_alice_smb : Bag_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_alice_smb)
	picture = "\rhssaf\addons\rhssaf_c_gear\data\backpacks\icon_alice_ca.paa";
	displayname = $STR_RHSSAF_ALICE_SMB_DISPLAYNAME;
	hiddenSelections[] = {"Camo"};
	hiddenselectionstextures[] = {"\rhssaf\addons\rhssaf_backpacks\alice\data\rhssaf_alice_smb_co.paa"};
	model = "\rhssaf\addons\rhssaf_backpacks\alice\rhssaf_alice";
	maximumLoad = 320;
	mass = 60;
};

#include "rhssaf_ai_backpacks.hpp"
