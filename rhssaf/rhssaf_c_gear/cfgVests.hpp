/*
NIJ 0101.04

I 		.380 ACP FMJ
II-A 	9mm FMJ / .40 FMJ
II 		9mm FMJ / .357 JSP
III-A 	9mm FMJ / .44 SJHP
III 	7.62mm FMJ (9,6g 148gr.)
IV 		.30 M2 AP
*/
/*
Прслук Борбени Балистички М-99(Т)актички
ПББ М-99(П)адобрански и M-99(С)најперски
У саставу ПББ се налази борбени прслук и балистички прслук који се може носити испод борбеног.
*/

#define ARMOR_NIJ_1	8
#define ARMOR_NIJ_2	12
#define ARMOR_NIJ_3	22
#define ARMOR_NIJ_4	28

#define PASS_NIJ_1 	0.5
#define PASS_NIJ_2 	0.4
#define PASS_NIJ_3 	0.2
#define PASS_NIJ_4 	0.1

#define ARMOR_EQUIP		3
#define PASS_EQUIP		0.6

#define INVENTORY_CATEGORY vests


class VestItem;
class Vest_Camo_Base : ItemCore
{
	class ItemInfo;
};

class rhssaf_balistic_vest_base: Vest_Camo_Base
{
	DLC_AUTHOR;
	SCOPE_PROTECTED;
	weaponPoolAvailable = 1;
	allowedSlots[] = {901};
	displayName = $STR_RHSSAF_BALISTIC_VEST_BASE_DISPLAYNAME; // Prsluk Borbeni Balisticki
	model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
	hiddenSelections[] = {"MD98"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_woodland_co.paa"};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"MD98"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
		containerClass = "Supply80";
		mass = 60;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				HitpointName = "HitNeck";
				armor = ARMOR_NIJ_1;
				PassThrough = PASS_NIJ_1;
			};
			class Chest
			{
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_3;
				PassThrough = PASS_NIJ_3;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_3;
				PassThrough = PASS_NIJ_3;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = ARMOR_NIJ_3;
				passThrough = PASS_NIJ_3;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_3;
			};
		};
	};
};
class rhssaf_tactical_vest_base: Vest_Camo_Base
{
	DLC_AUTHOR;
	SCOPE_PROTECTED;
	weaponPoolAvailable = 1;
	allowedSlots[] = {901};
	displayName = $STR_RHSSAF_TACTICAL_VEST_BASE_DISPLAYNAME; // Prsluk Takticki
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
	descriptionShort = $STR_RHSSAF_TACTICAL_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
		containerClass = "Supply90";
		mass = 40;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				HitpointName = "HitNeck";
				armor = 0;
				PassThrough = 1;
			};
			class Chest
			{
				HitpointName = "HitChest";
				armor = ARMOR_EQUIP;
				PassThrough = PASS_EQUIP;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = ARMOR_EQUIP;
				PassThrough = PASS_EQUIP;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = PASS_EQUIP;
			};
		};
	};
};
class rhssaf_vest_md98_woodland : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md98_woodland)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD98_WOODLAND_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
	hiddenSelections[] = {"MD98"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_woodland_co.paa"};
	descriptionShort = $STR_RHSSAF_VEST_MD98_WOODLAND_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"MD98"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
		containerClass = "Supply70";
		mass = 60;
	};
};
class rhssaf_vest_md98_md2camo : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md98_md2camo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD98_MD2CAMO_DISPLAYNAME;
	hiddenSelections[] = {"MD98"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_md2camo_co.paa"};
	model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
	descriptionShort = $STR_RHSSAF_VEST_MD98_MD2CAMO_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"MD98"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
		containerClass = "Supply70";
		mass = 60;
	};
};
class rhssaf_vest_md98_digital : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md98_digital)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD98_DIGITAL_DISPLAYNAME;
	hiddenSelections[] = {"MD98"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_digital_co.paa"};
	model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
	descriptionShort = $STR_RHSSAF_VEST_MD98_DIGITAL_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"MD98"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
		containerClass = "Supply70";
		mass = 60;
	};
};
class rhssaf_vest_md98_officer : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md98_officer)
	DLC_AUTHOR;
	SCOPE_PRIVATE;
	displayName = $STR_RHSSAF_VEST_MD98_OFFICER_DISPLAYNAME;
	hiddenSelections[] = {"MD98"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_digital_co.paa"};
	model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
	descriptionShort = $STR_RHSSAF_VEST_MD98_OFFICER_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"MD98"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
		containerClass = "Supply70";
		mass = 60;
	};
};
class rhssaf_vest_md98_rifleman : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md98_rifleman)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD98_RIFLEMAN_DISPLAYNAME;
	hiddenSelections[] = {"MD98"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_woodland_co.paa"};
	model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_rifleman";
	descriptionShort = $STR_RHSSAF_VEST_MD98_RIFLEMAN_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"MD98"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_rifleman";
		containerClass = "Supply80";
		mass = 80;
	};
};
//SAF PARA PLACEHOLDER VESTS
class rhssaf_vest_otv_md2camo : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_otv_md2camo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_OTV_MD2CAMO_DISPLAYNAME;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] =
	{
		"rhssaf\addons\rhssaf_t_gear_a3\data\vest_rhssaf_otv_md2camo_co.paa"
	};
	model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
	class ItemInfo: ItemInfo
	{
		uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		containerClass = "Supply90";
		mass = 70;
		hiddenSelections[] = {"camo"};
		descriptionShort = $STR_ITEMINFO_DESCRIPTIONSHORT;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				HitpointName = "HitNeck";
				armor = 0;
				PassThrough = 0.9;
			};
			class Chest
			{
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_3;
				PassThrough = PASS_NIJ_3;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_3;
				PassThrough = PASS_NIJ_3;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_1;
			};
		};
	};
};

// M99T
class rhssaf_vest_md99_md2camo_rifleman : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_md2camo_rifleman)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_MD2CAMO_RIFLEMAN_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
		containerClass = "Supply90";
		mass = 70;
	};
};

class rhssaf_vest_md99_md2camo_rifleman_radio : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_md2camo_rifleman_radio)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_MD2CAMO_RIFLEMAN_RADIO_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
		containerClass = "Supply90";
		mass = 75;
	};
};

class rhssaf_vest_md99_digital_rifleman : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_digital_rifleman)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_DIGITAL_RIFLEMAN_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
	hiddenSelections[] = {"camo","pouches"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_digital_co.paa",
		"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_digital_co.paa"
	};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo","pouches"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
		containerClass = "Supply90";
		mass = 70;
	};
};

class rhssaf_vest_md99_digital_rifleman_radio : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_digital_rifleman_radio)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_DIGITAL_RIFLEMAN_RADIO_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
	hiddenSelections[] = {"camo","pouches"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_digital_co.paa",
		"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_digital_co.paa"
	};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo","pouches"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
		containerClass = "Supply90";
		mass = 75;
	};
};

class rhssaf_vest_md99_woodland_rifleman : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_woodland_rifleman)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_WOODLAND_RIFLEMAN_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
	hiddenSelections[] = {"camo","pouches"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_woodland_co.paa",
		"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_md99_woodland_pouches_co.paa"
	};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo","pouches"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
		containerClass = "Supply90";
		mass = 70;
	};
};

class rhssaf_vest_md99_woodland_rifleman_radio : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_woodland_rifleman_radio)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_WOODLAND_RIFLEMAN_RADIO_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
	hiddenSelections[] = {"camo","pouches"};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_woodland_co.paa",
		"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_md99_woodland_pouches_co.paa"
	};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo","pouches"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
		containerClass = "Supply90";
		mass = 75;
	};
};

class rhssaf_vest_md99_md2camo : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_md2camo)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_MD2CAMO_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
		containerClass = "Supply70";
		mass = 60;
	};
};

class rhssaf_vest_md99_md2camo_radio : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_md2camo_radio)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_MD2CAMO_RADIO_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
		containerClass = "Supply70";
		mass = 65;
	};
};

class rhssaf_vest_md99_digital : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_digital)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_DIGITAL_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_digital_co.paa"};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
		containerClass = "Supply70";
		mass = 60;
	};
};

class rhssaf_vest_md99_digital_radio : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_digital_radio)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_DIGITAL_RADIO_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_digital_co.paa"};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
		containerClass = "Supply70";
		mass = 65;
	};
};

class rhssaf_vest_md99_woodland : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_woodland)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_WOODLAND_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_woodland_co.paa"};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
		containerClass = "Supply70";
		mass = 60;
	};
};

class rhssaf_vest_md99_woodland_radio : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md99_woodland_radio)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD99_WOODLAND_RADIO_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_woodland_co.paa"};
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
		containerClass = "Supply70";
		mass = 65;
	};
};

class rhssaf_vest_md12_digital : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md12_digital)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD12_DIGITAL_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m12\data\rhssaf_md12_digital_co.paa"};
	descriptionShort = $STR_RHSSAF_VEST_MD12_DIGITAL_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
		containerClass = "Supply100";
		mass = 70;
	};
};

class rhssaf_vest_md12_m70_rifleman : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md12_m70_rifleman)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD12_M70_RIFLEMAN_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12_m70_rifleman";
	hiddenSelections[] =
	{
		"camo",
		"pouches"
	};
	hiddenSelectionsTextures[] =
	{
		"\rhssaf\addons\rhssaf_t_vest_m12\data\rhssaf_md12_digital_co.paa",
		"\rhssaf\addons\rhssaf_t_vest_m12\data\rhssaf_md12_ak_pouches_co.paa"
	};
	descriptionShort = $STR_RHSSAF_VEST_MD12_DIGITAL_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo","pouches"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12_m70_rifleman";
		containerClass = "Supply70";
		mass = 90;
	};
};

class rhssaf_vest_md12_digital_desert : rhssaf_balistic_vest_base
{
	INVENTORY_PICTURE(rhssaf_vest_md12_digital_desert)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_VEST_MD12_DIGITAL_DESERT_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m12\data\rhssaf_md12_digital_desert_co.paa"};
	descriptionShort = $$STR_RHSSAF_VEST_MD12_DIGITAL_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
		containerClass = "Supply100";
		mass = 70;
	};
};

// M99A5
class rhssaf_vest_md99a5_md2camo_rifleman : rhssaf_balistic_vest_base
{
	//INVENTORY_PICTURE(rhssaf_vest_md99a5_md2camo_rifleman) TODO
	DLC_AUTHOR;
	SCOPE_PRIVATE;
	displayName = "PBB M-99A5 w/M-98";
	model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman"; //change path here
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"}; // also here
	descriptionShort = $STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT;
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman"; // and here
		containerClass = "Supply100";
		mass = 120;
	};
};
