class Uniform_Base;
class UniformItem;

#define INVENTORY_CATEGORY uniform
class rhssaf_uniform_m10_digital: Uniform_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_uniform_m10_digital)
	displayName = $STR_RHSSAF_UNIFORM_M10_DIGITAL_DISPLAYNAME;
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_digital_co.paa"};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "rhssaf_soldier_army_digital_base";
		containerClass = "Supply60";
		mass = 40;
		hiddenSelections[] = {"camo"};
	};
};
class rhssaf_uniform_m10_digital_summer: Uniform_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_uniform_m10_digital_summer)
	displayName = $STR_RHSSAF_UNIFORM_M10_DIGITAL_SUMMER_DISPLAYNAME;
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_digital_summer_co.paa"};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "rhssaf_soldier_army_para_digital_base";
		containerClass = "Supply60";
		mass = 40;
		hiddenSelections[] = {"camo"};
	};
};
class rhssaf_uniform_m10_digital_desert: Uniform_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_uniform_m10_digital_desert)
	displayName = $STR_RHSSAF_UNIFORM_M10_DIGITAL_DESERT_DISPLAYNAME;
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_digital_desert_co.paa"};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "rhssaf_soldier_un_desert_base";
		containerClass = "Supply60";
		mass = 40;
		hiddenSelections[] = {"camo"};
	};
};
class rhssaf_uniform_m10_digital_tan_boots: Uniform_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_uniform_m10_digital_tan_boots)
	displayName = $STR_RHSSAF_UNIFORM_M10_DIGITAL_TAN_BOOTS_DISPLAYNAME;
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_digital_summer_tan_boots_co.paa"};
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "rhssaf_soldier_un_digital_base";
		containerClass = "Supply60";
		mass = 40;
		hiddenSelections[] = {"camo"};
	};
};
class rhssaf_uniform_m93_oakleaf: Uniform_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_uniform_m93_oakleaf)
	displayName = $STR_RHSSAF_UNIFORM_M93_OAKLEAF_DISPLAYNAME;
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m93\data\rhssaf_uniform_m93_oakleaf_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "rhssaf_soldier_army_oakleaf_base";
		containerClass = "Supply60";
		mass = 40;
		hiddenSelections[] = {"camo"};
	};
};
class rhssaf_uniform_m93_oakleaf_summer: Uniform_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_uniform_m93_oakleaf_summer)
	displayName = $STR_RHSSAF_UNIFORM_M93_OAKLEAF_SUMMER_DISPLAYNAME;
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m93\data\rhssaf_uniform_m93_oakleaf_summer_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "rhssaf_soldier_army_oakleaf_summer_base";
		containerClass = "Supply60";
		mass = 40;
		hiddenSelections[] = {"camo"};
	};
};
class rhssaf_uniform_heli_pilot: Uniform_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_uniform_heli_pilot)
	displayName = $STR_RHSSAF_UNIFORM_HELI_PILOT_DISPLAYNAME;
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "rhssaf_airforce_pilot_transport_heli";
		containerClass = "Supply60";
		mass = 40;
		hiddenSelections[] = {"camo1"};
	};
};
class rhssaf_uniform_mig29_pilot: Uniform_Base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhssaf_uniform_mig29_pilot)
	displayName = $STR_RHSSAF_UNIFORM_MIG29_PILOT_DISPLAYNAME;
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot_co_mig29.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "rhssaf_airforce_pilot_mig29";
		containerClass = "Supply60";
		mass = 40;
		hiddenSelections[] = {"camo1"};
	};
};
class rhssaf_uniform_gendarmes_acu: Uniform_Base
{
	DLC_AUTHOR;
	SCOPE_PROTECTED;
	INVENTORY_PICTURE(rhssaf_uniform_gendarmes_acu)
	displayName = "Tactical One [WIP]";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo1","camo2","camo3"};
  hiddenSelectionsTextures[] =
  {
    "\rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_01_digi_co.paa",
    "\rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_02_digi_co.paa",
    "\rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_03_digi_co.paa"
  };
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "rhssaf_soldier_atf_base";
		containerClass = "Supply60";
		mass = 40;
		hiddenSelections[] = {"camo1","camo2","camo3"};
	};
};
