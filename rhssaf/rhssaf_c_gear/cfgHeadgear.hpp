class ItemCore;
class HeadGearItem;
class Binocular;
class NVGoggles : Binocular
{
	class ItemInfo;
};
class H_HelmetB : ItemCore
{
	class ItemInfo;
};

#define INVENTORY_CATEGORY headgear

class rhssaf_helmet_base : H_HelmetB
{
	INVENTORY_PICTURE(rhssaf_helmet_base)
	DLC_AUTHOR;
	SCOPE_PROTECTED;
	displayName = $STR_RHSSAF_HELMET_BASE_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m59\rhssaf_m59_nocamo";
	allowedFacewear[] = {"rhs_scarf","G_Aviator"};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m59\data\rhssaf_m59_nocamo_co.paa"};
	descriptionShort = $STR_RHSSAF_HELMET_BASE_DESCRIPTIONSHORT;
	class ItemInfo : HeadgearItem
	{
		mass = 42;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m59\rhssaf_m59_nocamo";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 3;
				passThrough = 0.4;
			};
		};
	};
};
class rhssaf_helmet_m59_85_nocamo : rhssaf_helmet_base
{
	INVENTORY_PICTURE(rhssaf_helmet_m59_85_nocamo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M59_85_NOCAMO_DISPLAYNAME;
};
class rhssaf_helmet_m59_85_oakleaf : rhssaf_helmet_base
{
	INVENTORY_PICTURE(rhssaf_helmet_m59_85_oakleaf)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M59_85_OAKLEAF_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m59\rhssaf_m59_camo";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m59\data\rhssaf_m59_camo_co.paa"};
	class ItemInfo : HeadgearItem
	{
		mass = 42;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m59\rhssaf_m59_camo";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 3;
				passThrough = 0.4;
			};
		};
	};
};
class rhssaf_helmet_m97_olive_nocamo : rhssaf_helmet_base
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_olive_nocamo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_co.paa"};
	descriptionShort = $STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_DESCRIPTIONSHORT;
	class ItemInfo : HeadgearItem
	{
		mass = 40;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class rhssaf_helmet_m97_olive_nocamo_black_ess : rhssaf_helmet_base
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_olive_nocamo_black_ess)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_BLACK_ESS_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo_ess";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
	descriptionShort = $STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_BLACK_ESS_DESCRIPTIONSHORT;
	class ItemInfo : HeadgearItem
	{
		mass = 42;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo_ess";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo","camo2"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class rhssaf_helmet_m97_olive_nocamo_black_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_olive_nocamo_black_ess_bare)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_BLACK_ESS_BARE_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo_ess_bare";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
	class ItemInfo : HeadgearItem
	{
		mass = 42;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo_ess_bare";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo","camo2"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class rhssaf_helmet_m97_black_nocamo : rhssaf_helmet_m97_olive_nocamo
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_black_nocamo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_BLACK_NOCAMO_DISPLAYNAME;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_black_co.paa"};
};
class rhssaf_helmet_m97_black_nocamo_black_ess : rhssaf_helmet_m97_olive_nocamo_black_ess
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_black_nocamo_black_ess)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_BLACK_NOCAMO_BLACK_ESS_DISPLAYNAME;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_black_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
};
class rhssaf_helmet_m97_black_nocamo_black_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess_bare
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_black_nocamo_black_ess_bare)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_BLACK_NOCAMO_BLACK_ESS_BARE_DISPLAYNAME;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_black_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
};
class rhssaf_helmet_m97_woodland : rhssaf_helmet_base
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_woodland)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_WOODLAND_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa"};
	descriptionShort = $STR_RHSSAF_HELMET_M97_WOODLAND_DESCRIPTIONSHORT;
	class ItemInfo : HeadgearItem
	{
		mass = 40;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class rhssaf_helmet_m97_digital : rhssaf_helmet_m97_woodland
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_digital)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_DIGITAL_DISPLAYNAME;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_digital_co.paa"};
};
class rhssaf_helmet_m97_md2camo : rhssaf_helmet_m97_woodland
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_md2camo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_MD2CAMO_DISPLAYNAME;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_md2camo_co.paa"};
};
class rhssaf_helmet_m97_oakleaf : rhssaf_helmet_m97_woodland
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_oakleaf)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_OAKLEAF_DISPLAYNAME;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_oakleaf_co.paa"};
};
class rhssaf_helmet_m97_nostrap_blue : rhssaf_helmet_m97_woodland
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_nostrap_blue)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_NOSTRAP_BLUE_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_blue_co.paa"};
	class ItemInfo : HeadgearItem
	{
		mass = 40;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class rhssaf_helmet_m97_nostrap_blue_tan_ess : rhssaf_helmet_m97_woodland
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_nostrap_blue_tan_ess)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_NOSTRAP_BLUE_TAN_ESS_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap_ess";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_blue_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"
	};
	class ItemInfo : HeadgearItem
	{
		mass = 40;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap_ess";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo","camo2"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class rhssaf_helmet_m97_nostrap_blue_tan_ess_bare : rhssaf_helmet_m97_woodland
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_nostrap_blue_tan_ess_bare)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_NOSTRAP_BLUE_TAN_ESS_BARE_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap_ess_bare";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_blue_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"
	};
	class ItemInfo : HeadgearItem
	{
		mass = 40;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap_ess_bare";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo","camo2"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class rhssaf_helmet_m97_woodland_black_ess : rhssaf_helmet_m97_olive_nocamo_black_ess
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_woodland_black_ess)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_WOODLAND_BLACK_ESS_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
	descriptionShort = $STR_RHSSAF_HELMET_M97_WOODLAND_BLACK_ESS_DESCRIPTIONSHORT;
	class ItemInfo : HeadgearItem
	{
		mass = 42;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo","camo2"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class rhssaf_helmet_m97_digital_black_ess : rhssaf_helmet_m97_woodland_black_ess
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_digital_black_ess)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_DIGITAL_BLACK_ESS_DISPLAYNAME;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_digital_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
};
class rhssaf_helmet_m97_md2camo_black_ess : rhssaf_helmet_m97_woodland_black_ess
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_md2camo_black_ess)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_MD2CAMO_BLACK_ESS_DISPLAYNAME;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_md2camo_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
};
class rhssaf_helmet_m97_oakleaf_black_ess : rhssaf_helmet_m97_woodland_black_ess
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_oakleaf_black_ess)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_OAKLEAF_BLACK_ESS_DISPLAYNAME;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_oakleaf_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
};
class rhssaf_helmet_m97_woodland_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_woodland_black_ess_bare)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_WOODLAND_BLACK_ESS_BARE_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess_bare";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
	class ItemInfo : HeadgearItem
	{
		mass = 42;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess_bare";
		allowedSlots[] = {901,605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo","camo2"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class rhssaf_helmet_m97_digital_black_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_digital_black_ess_bare)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_DIGITAL_BLACK_ESS_BARE_DISPLAYNAME;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_digital_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
};
class rhssaf_helmet_m97_md2camo_black_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_md2camo_black_ess_bare)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_MD2CAMO_BLACK_ESS_BARE_DISPLAYNAME;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_md2camo_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
};
class rhssaf_helmet_m97_oakleaf_black_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_oakleaf_black_ess_bare)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_OAKLEAF_BLACK_ESS_BARE_DISPLAYNAME;
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_oakleaf_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
	};
};
class rhssaf_helmet_m97_veil_Base : rhssaf_helmet_m97_woodland
{
	DLC_AUTHOR;
	SCOPE_PROTECTED;
	displayName = "";
	model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
	hiddenSelections[] = {"camo","camo2","camo_veil"};
	hiddenSelectionsTextures[] = 
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_veil\rhssaf_m97_veil";
		hiddenSelections[] = {"camo","camo2","camo_veil"};
	};
};
class rhssaf_helmet_m97_veil_woodland : rhssaf_helmet_m97_veil_Base
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_veil_woodland)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_VEIL_WOODLAND_DISPLAYNAME;
	hiddenSelectionsTextures[] = 
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"
	};
};
class rhssaf_helmet_m97_veil_digital : rhssaf_helmet_m97_veil_Base
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_veil_digital)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_VEIL_DIGITAL_DISPLAYNAME;
	hiddenSelectionsTextures[] = 
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_digital_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"
	};
};
class rhssaf_helmet_m97_veil_md2camo : rhssaf_helmet_m97_veil_Base
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_veil_md2camo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_VEIL_MD2CAMO_DISPLAYNAME;
	hiddenSelectionsTextures[] = 
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_md2camo_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"
	};
};
class rhssaf_helmet_m97_veil_oakleaf : rhssaf_helmet_m97_veil_Base
{
	INVENTORY_PICTURE(rhssaf_helmet_m97_veil_oakleaf)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_HELMET_M97_VEIL_OAKLEAF_DISPLAYNAME;
	hiddenSelectionsTextures[] = 
	{
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_oakleaf_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa",
		"\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"
	};
};

class rhssaf_beret_green : rhssaf_helmet_base
{
	INVENTORY_PICTURE(rhssaf_beret_green)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BERET_GREEN_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_green_co.paa"};
	model = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret";
	class ItemInfo : HeadgearItem
	{
		mass = 6;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret";
		modelSides[] = {6};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 1;
			};
		};
	};
};

class H_PilotHelmetHeli_B: H_HelmetB{};

class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B
{
	class ItemInfo;
};

class rhssaf_beret_red : rhssaf_beret_green
{
	INVENTORY_PICTURE(rhssaf_beret_red)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BERET_RED_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_red_co.paa"};
};

class rhssaf_beret_para : rhssaf_beret_green
{
	INVENTORY_PICTURE(rhssaf_beret_para)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BERET_PARA_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_red_para_co.paa"};
};

class rhssaf_beret_black : rhssaf_beret_green
{
	INVENTORY_PICTURE(rhssaf_beret_black)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BERET_BLACK_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_black_co.paa"};
};
class rhssaf_beret_blue_un : rhssaf_helmet_base
{
	INVENTORY_PICTURE(rhssaf_beret_blue_un)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BERET_BLUE_UN_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_blue_un_co.paa"};
	model = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret_un";
	class ItemInfo : HeadgearItem
	{
		mass = 6;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret_un";
		modelSides[] = {6};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 1;
			};
		};
	};
};
class rhs_booniehat2_marpatd;
class rhssaf_booniehat_digital: rhs_booniehat2_marpatd
{
	INVENTORY_PICTURE(rhssaf_booniehat_digital)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BOONIEHAT_DIGITAL_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_ret\data\rhssaf_boonie_digital_co.paa"};
};
class rhssaf_booniehat_md2camo: rhs_booniehat2_marpatd
{
	INVENTORY_PICTURE(rhssaf_booniehat_md2camo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BOONIEHAT_MD2CAMO_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_ret\data\rhssaf_boonie_md2camo_co.paa"};
};
class rhssaf_booniehat_woodland: rhs_booniehat2_marpatd
{
	INVENTORY_PICTURE(rhssaf_booniehat_woodland)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BOONIEHAT_WOODLAND_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_ret\data\rhssaf_boonie_woodland_co.paa"};
};

class H_Bandanna_khk;

class rhssaf_bandana_digital: H_Bandanna_khk
{
	INVENTORY_PICTURE(rhssaf_bandana_digital)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BANDANA_DIGITAL_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_digital.paa"};
};
class rhssaf_bandana_digital_desert: rhssaf_bandana_digital
{
	INVENTORY_PICTURE(rhssaf_bandana_digital_desert)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BANDANA_DIGITAL_DESERT_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_digital_desert.paa"};
};
class rhssaf_bandana_oakleaf: rhssaf_bandana_digital
{
	INVENTORY_PICTURE(rhssaf_bandana_oakleaf)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BANDANA_OAKLEAF_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_oakleaf.paa"};
};
class rhssaf_bandana_smb: rhssaf_bandana_digital
{
	INVENTORY_PICTURE(rhssaf_bandana_smb)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BANDANA_SMB_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_smb.paa"};
};
class rhssaf_bandana_md2camo: rhssaf_bandana_digital
{
	INVENTORY_PICTURE(rhssaf_bandana_md2camo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_BANDANA_MD2CAMO_DISPLAYNAME;
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_md2camo.paa"};
};
/*class rhssaf_balaclava_smb_nvgslot: NVGoggles
{
	INVENTORY_PICTURE(rhssaf_balaclava_smb_nvgslot)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayname = "Balaclava (SMB)";
	model = "\rhssaf\addons\rhssaf_m_headgear_bala\rhssaf_balaclava";
	modeloptics = "-";
	visionMode[] = {"Normal"};
	descriptionShort = "Balaclava";
	class Library
	{
		libTextDesc = "";
	};
	class ItemInfo
	{
		type = 616;
		hmdType = 0;
		uniformModel = "\rhssaf\addons\rhssaf_m_headgear_bala\rhssaf_balaclava";
		modelOff = "\rhssaf\addons\rhssaf_m_headgear_bala\rhssaf_balaclava";
		mass = 6;
	};
};
*/
