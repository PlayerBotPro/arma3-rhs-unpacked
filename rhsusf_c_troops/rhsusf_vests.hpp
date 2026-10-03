/*

NIJ 0101.04

I 		.380 ACP FMJ
II-A 	9mm FMJ / .40 FMJ
II 		9mm FMJ / .357 JSP
III-A 	9mm FMJ / .44 SJHP
III 	7.62mm FMJ (9,6g 148gr.)
IV 		.30 M2 AP

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
#define GLUE(g1,g2) g1##g2

class Vest_Camo_Base : ItemCore {
	class ItemInfo;
};

class rhsusf_iotv_ocp_base: Vest_Camo_Base
{
	dlc = "RHS_USAF";

	scope = 0;

	hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_iotv_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv1_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa"
	};

	descriptionShort = "Armor Level IV";

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo", "camob","camo1","camo2"};
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv";
		containerClass = "Supply20";
		mass = 100;
		armor = 20;
		descriptionShort = "Armor Level IV";
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_NIJ_2;
				PassThrough = PASS_NIJ_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_NIJ_4;
				passThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_4;
			};
		};
	};
};

class rhsusf_iotv_ocp: rhsusf_iotv_ocp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ocp)
	scope = 2;

	///! stringtable the name
	displayName = "IOTV (OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv";

	hiddenSelections[] = {"camo", "camob","camo1","camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_iotv_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv1_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa"
	};
};

class rhsusf_iotv_ocp_Grenadier: rhsusf_iotv_ocp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ocp_Grenadier)
	scope=2;
	displayName = "IOTV (Grenadier/OEF-CP)";
	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Grenadier";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Grenadier";
		containerClass = Supply140;
		mass = 120;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_NIJ_2;
				PassThrough = PASS_NIJ_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				passThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_4;
			};
		};
	};
};

class rhsusf_iotv_ocp_Medic: rhsusf_iotv_ocp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ocp_Medic)
	scope=2;
	displayName = "IOTV (Medic/OEF-CP)";
	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Medic";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Medic";
		containerClass = Supply120;
		mass = 120;
	};
};

class rhsusf_iotv_ocp_Repair: rhsusf_iotv_ocp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ocp_Repair)
	scope=2;
	displayName = "IOTV (Repair/OEF-CP)";
	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Repair";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Repair";
		containerClass = Supply120;
		mass = 120;
	};
};


#define VestMacro(name) class rhsusf_iotv_ocp_##name##: rhsusf_iotv_ocp_base\
{\
	AUTHOR_MACRO\
	INVENTORY_PICTURE(GLUE(rhsusf_iotv_ocp_,name))\
	scope=2;\
	displayName = IOTV (##name##/OCP);\
	model = rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_##name##;\
	class ItemInfo: ItemInfo\
	{\
		uniformModel = rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_##name##;\
		containerClass = Supply150;\
		mass = 140;\
		class HitpointsProtectionInfo {\
			class Neck {\
				HitpointName = HitNeck;\
				armor = ARMOR_NIJ_2;\
				PassThrough = PASS_NIJ_2;\
			};\
			class Chest {\
				HitpointName = HitChest;\
				armor = ARMOR_NIJ_4;\
				PassThrough = PASS_NIJ_4;\
			};\
			class Diaphragm {\
				HitpointName = HitDiaphragm;\
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;\
				PassThrough = PASS_NIJ_4;\
			};\
			class Abdomen {\
				hitpointName = HitAbdomen;\
				armor = ARMOR_NIJ_4;\
				passThrough = PASS_NIJ_4;\
			};\
			class Body {\
				hitpointName = HitBody;\
				passThrough = PASS_NIJ_4;\
			};\
		};\
	};\
};

class rhsusf_iotv_ocp_Rifleman : rhsusf_iotv_ocp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ocp_Rifleman)
	scope = 2;

	///! stringtable the name
	displayName = "IOTV (Rifleman/OEF-CP)";
	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman";
		containerClass = "Supply140";
		mass = 140;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_NIJ_2;
				PassThrough = PASS_NIJ_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				passThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_4;
			};
		};
	};

};

VestMacro(SAW)
VestMacro(Squadleader)
VestMacro(Teamleader)

class rhsusf_iotv_ucp_base: rhsusf_iotv_ocp_base
{
	scope = 0;

	///! stringtable the name
	displayName = "IOTV (UCP)";
	AUTHOR_MACRO

	//change textures
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_iotv_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv1_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa"
	};

};

class rhsusf_iotv_ucp: rhsusf_iotv_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ucp)

	///! stringtable the name
	displayName = "IOTV (UCP)";

	//change textures
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_iotv_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv1_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa"
	};

};

class rhsusf_iotv_ucp_Grenadier: rhsusf_iotv_ucp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ucp_Grenadier)
	scope=2;
	displayName = "IOTV (Grenadier/UCP)";
	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Grenadier";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Grenadier";
		containerClass = Supply140;
		mass = 120;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_NIJ_2;
				PassThrough = PASS_NIJ_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				passThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_4;
			};
		};
	};
};

class rhsusf_iotv_ucp_Medic: rhsusf_iotv_ucp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ucp_Medic)
	scope=2;
	displayName = "IOTV (Medic/UCP)";
	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Medic";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Medic";
		containerClass = Supply120;
		mass = 120;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_NIJ_2;
				PassThrough = PASS_NIJ_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				passThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_4;
			};
		};
	};
};

class rhsusf_iotv_ucp_Repair: rhsusf_iotv_ucp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ucp_Repair)
	scope=2;
	displayName = "IOTV (Repair/UCP)";
	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Repair";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Repair";
		containerClass = Supply120;
		mass = 120;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_NIJ_2;
				PassThrough = PASS_NIJ_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				passThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_4;
			};
		};
	};
};

#define VestMacro2(name) class rhsusf_iotv_ucp_##name##: rhsusf_iotv_ucp_base\
{\
	AUTHOR_MACRO\
	INVENTORY_PICTURE(GLUE(rhsusf_iotv_ucp_,name))\
	scope=2;\
	displayName = IOTV (##name##/UCP);\
	model = rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_##name##;\
	class ItemInfo: ItemInfo\
	{\
		uniformModel = rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_##name##;\
		containerClass = Supply150;\
		mass = 140;\
		class HitpointsProtectionInfo {\
			class Neck {\
				HitpointName = HitNeck;\
				armor = ARMOR_NIJ_2;\
				PassThrough = PASS_NIJ_2;\
			};\
			class Chest {\
				HitpointName = HitChest;\
				armor = ARMOR_NIJ_4;\
				PassThrough = PASS_NIJ_4;\
			};\
			class Diaphragm {\
				HitpointName = HitDiaphragm;\
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;\
				PassThrough = PASS_NIJ_4;\
			};\
			class Abdomen {\
				hitpointName = HitAbdomen;\
				armor = ARMOR_NIJ_4;\
				passThrough = PASS_NIJ_4;\
			};\
			class Body {\
				hitpointName = HitBody;\
				passThrough = PASS_NIJ_4;\
			};\
		};\
	};\
};


class rhsusf_iotv_ucp_Rifleman : rhsusf_iotv_ucp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_iotv_ucp_Rifleman)
	scope = 2;

	///! stringtable the name
	displayName = "IOTV (Rifleman/UCP)";
	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman";
		containerClass = "Supply140";
		mass = 140;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_NIJ_2;
				PassThrough = PASS_NIJ_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				passThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_4;
			};
		};
	};
};


VestMacro2(SAW)
VestMacro2(Squadleader)
VestMacro2(Teamleader)

////USMC////


class rhsusf_spc: rhsusf_iotv_ocp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc)
	scope = 2;

	///! stringtable the name
	displayName = "SPC";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc";

	hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_infantry\data\rhs_spc01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear1_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak_co.paa"
	};

	descriptionShort = "Armor Level IV";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc";
		containerClass = "Supply20";
		mass = 80;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_rifleman : rhsusf_spc
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_rifleman)

	///! stringtable the name
	displayName = "SPC (Rifleman)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_rifleman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_rifleman";
		containerClass = "Supply140"; // temporary value
		mass = 100;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_iar : rhsusf_spc_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_iar)
	///! stringtable the name
	displayName = "SPC (IAR)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_iar";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_iar";
		containerClass = "Supply160";
		mass = 120;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_corpsman : rhsusf_spc_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_corpsman)
	///! stringtable the name
	displayName = "SPC (Corpsman)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_corpsman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_corpsman";
		containerClass = "Supply120";
		mass = 100;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_crewman : rhsusf_spc_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_crewman)
	///! stringtable the name
	displayName = "SPC (Crewman)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_crewman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_crewman";
		containerClass = "Supply80";
		mass = 80;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				passThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				passThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_light : rhsusf_spc_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_light)
	///! stringtable the name
	displayName = "SPC (Light)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_light";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_light";
		containerClass = "Supply100";
		mass = 100;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_marksman : rhsusf_spc_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_marksman)
	///! stringtable the name
	displayName = "SPC (Marksman)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_marksman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_marksman";
		containerClass = "Supply80";
		mass = 80;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_mg : rhsusf_spc_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_mg)
	///! stringtable the name
	displayName = "SPC (Machinegunner)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_mg";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_mg";
		containerClass = "Supply120"; // temporary value
		mass = 100;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_sniper : rhsusf_spc_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_sniper)
	///! stringtable the name
	displayName = "SPC (Scout Sniper)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_scoutsniper";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_scoutsniper";
		containerClass = "Supply80";
		mass = 80;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_squadleader : rhsusf_spc_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_squadleader)
	///! stringtable the name
	displayName = "SPC (Squadleader)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		containerClass = "Supply140";
		mass = 100;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_spc_teamleader : rhsusf_spc_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_teamleader)
	///! stringtable the name
	displayName = "SPC (Teamleader)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_teamleader";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_teamleader";
		containerClass = "Supply160";
		mass = 120;
	};
};

// SPC patchless

class rhsusf_spc_patchless : rhsusf_spc_light
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_patchless)
	///! stringtable the name
	displayName = "SPC (Patchless)";

	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_infantry\data\rhs_spc02_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear1_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak_co.paa"
	};
	hiddenSelectionsMaterials[]={
		"rhsusf\addons\rhsusf_infantry\data\rhs_spc_02.rvmat",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_gear1.rvmat",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_gear2.rvmat",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak.rvmat"
	};
};

class rhsusf_spc_patchless_radio : rhsusf_spc_squadleader
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spc_patchless_radio)
	///! stringtable the name
	displayName = "SPC (Patchless/Radio)";

	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_infantry\data\rhs_spc02_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear1_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak_co.paa"
	};
	hiddenSelectionsMaterials[]={
		"rhsusf\addons\rhsusf_infantry\data\rhs_spc_02.rvmat",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_gear1.rvmat",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_gear2.rvmat",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak.rvmat"
	};
};

////SPCS////
////SPCS -- OCP////

class rhsusf_spcs_ocp : rhsusf_iotv_ocp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp)
	scope = 2;

	///! stringtable the name
	displayName = "SPCS (OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs";

	hiddenSelections[] = {"camo","camo1","camo2"};

	hiddenSelectionsTextures[] =
	{
	"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
	"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_camelback_ocp_co.paa",
	"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_gear1_iotv_oCP_co.paa"
	};

	descriptionShort = "Armor Level IV";

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2"};

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_camelback_ocp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_gear1_iotv_oCP_co.paa"
		};
		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs";
		containerClass = "Supply140";
		mass = 100;
		/*
		armor = 30;
		passThrough = 0.5;
		*/

		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				passThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_NIJ_2;
				passThrough = PASS_NIJ_2;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};

};

class rhsusf_spcs_ocp_squadleader : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_squadleader)
	displayName = "SPCS (Squad leader/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_squadleader";

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"

	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_squadleader";
	};
};

class rhsusf_spcs_ocp_teamleader : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_teamleader)
	displayName = "SPCS (Team Leader/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_teamleader";

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_teamleader";
	};
};
class rhsusf_spcs_ocp_teamleader_alt : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_teamleader_alt)
	displayName = "SPCS (Team Leader Alt/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_teamleader_alt";

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_teamleader_alt";
	};
};
class rhsusf_spcs_ocp_saw : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_saw)
	displayName = "SPCS (SAW/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_saw";

	hiddenSelections[] = {"camo","camo1","camo2","camo3"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_saw";
	};
};
class rhsusf_spcs_ocp_grenadier : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_grenadier)
	displayName = "SPCS (Grenadier/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_grenadier";

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_grenadier";
	};
};
class rhsusf_spcs_ocp_rifleman : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_rifleman)
	displayName = "SPCS (Rifleman/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_rifleman";

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_rifleman";
	};
};
class rhsusf_spcs_ocp_rifleman_alt : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_rifleman_alt)
	displayName = "SPCS (Rifleman Alt/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_rifleman_alt";

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_rifleman_alt";
	};
};
class rhsusf_spcs_ocp_medic : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_medic)
	displayName = "SPCS (Medic/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_medic";

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_medic";
	};
};
class rhsusf_spcs_ocp_crewman : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_crewman)
	displayName = "SPCS (Crewman/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_crewman";

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_crewman";
	};
};
class rhsusf_spcs_ocp_machinegunner : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_machinegunner)
	displayName = "SPCS (Machinegunner/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_machinegunner";

	hiddenSelections[] = {"camo","camo1","camo2","camo3"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_machinegunner";
	};
};
class rhsusf_spcs_ocp_sniper : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ocp_sniper)
	displayName = "SPCS (Sniper/OEF-CP)";

	model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_sniper";

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5"};

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
		"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5"};

		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
		"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
		
		};

		uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_sniper";
	};
};
////SPCS -- UCP////

class rhsusf_spcs_ucp : rhsusf_spcs_ocp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp)
	displayName = "SPCS (UCP)";

	hiddenSelectionsTextures[] =
	{
	"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
	"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_camelback_ucp_co.paa",
	"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_gear1_iotv_UCP_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_camelback_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_gear1_iotv_UCP_co.paa"
		};
	};

};

class rhsusf_spcs_ucp_squadleader : rhsusf_spcs_ocp_squadleader
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_squadleader)
	displayName = "SPCS (Squad Leader/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"

	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
	};
};
class rhsusf_spcs_ucp_teamleader : rhsusf_spcs_ocp_teamleader
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_teamleader)
	displayName = "SPCS (Team Leader/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
	};
};
class rhsusf_spcs_ucp_teamleader_alt : rhsusf_spcs_ocp_teamleader_alt
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_teamleader_alt)
	displayName = "SPCS (Team Leader Alt/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
	};
};
class rhsusf_spcs_ucp_saw : rhsusf_spcs_ocp_saw
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_saw)
	displayName = "SPCS (SAW/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		};
	};
};
class rhsusf_spcs_ucp_grenadier : rhsusf_spcs_ocp_grenadier
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_grenadier)
	displayName = "SPCS (Grenadier/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
	};
};
class rhsusf_spcs_ucp_rifleman : rhsusf_spcs_ocp_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_rifleman)
	displayName = "SPCS (Rifleman/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
	};
};
class rhsusf_spcs_ucp_rifleman_alt : rhsusf_spcs_ocp_rifleman_alt
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_rifleman_alt)
	displayName = "SPCS (Rifleman Alt/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
	};
};
class rhsusf_spcs_ucp_medic : rhsusf_spcs_ocp_medic
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_medic)
	displayName = "SPCS (Medic/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
	};
};
class rhsusf_spcs_ucp_crewman : rhsusf_spcs_ocp_crewman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_crewman)
	displayName = "SPCS (Crewman/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
	};
};
class rhsusf_spcs_ucp_machinegunner : rhsusf_spcs_ocp_machinegunner
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_machinegunner)
	displayName = "SPCS (Machinegunner/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
	};
};
class rhsusf_spcs_ucp_sniper : rhsusf_spcs_ocp_sniper
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_spcs_ucp_sniper)
	displayName = "SPCS (Sniper/UCP)";

	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
		"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
		"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
		"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
		};
	};
};
////SOCOM////


class rhsusf_mbav: rhsusf_iotv_ocp_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_mbav)
	scope = 2;

	///! stringtable the name
	displayName = "MBAV";

	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_clean";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_tan_co.paa"
	};

	descriptionShort = "Armor Level IV";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_clean";
		containerClass = "Supply20";
		mass = 60;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};

class rhsusf_mbav_light: rhsusf_mbav
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_mbav_light)
	///! stringtable the name
	displayName = "MBAV (Light)";

	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_light";

	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_tan_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo2"};
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_light";
		containerClass = "Supply100";
		mass = 80;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_2;
			};
		};
	};
};
class rhsusf_mbav_rifleman: rhsusf_mbav_light
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_mbav_rifleman)

	///! stringtable the name
	displayName = "MBAV (Rifleman)";

	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_rifleman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_rifleman";
		containerClass = "Supply140";
	};
};
class rhsusf_mbav_mg: rhsusf_mbav_light
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_mbav_mg)

	///! stringtable the name
	displayName = "MBAV (Machinegunner)";

	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_mgunner";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_mgunner";
		containerClass = "Supply160";
	};
};
class rhsusf_mbav_grenadier: rhsusf_mbav_light
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_mbav_grenadier)

	///! stringtable the name
	displayName = "MBAV (Grenadier)";

	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_grenadier";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_grenadier";
		containerClass = "Supply150";

		class HitpointsProtectionInfo : HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_4 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_4;
			};
			class Diaphragm: Diaphragm {};
			class Body: Body {};
		};
	};
};
class rhsusf_mbav_medic: rhsusf_mbav_light
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_mbav_medic)

	///! stringtable the name
	displayName = "MBAV (Medic)";

	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_medic";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_medic";
		containerClass = "Supply160";
	};
};
class rhsusf_plateframe_sapi: rhsusf_iotv_ocp_base
{
	INVENTORY_PICTURE(rhsusf_plateframe_sapi)
	scope = 2;

	///! stringtable the name
	displayName = "Plateframe";
	AUTHOR_MACRO

	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi";

	hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\data\rhs_plateframe_sapi_tan_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear1_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear2_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa",
		"rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"
	};

	descriptionShort = "Armor Level III";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi";
		containerClass = "Supply20";
		mass = 60;
		class HitpointsProtectionInfo
		{
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
			class Body
			{
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_3;
			};
		};
	};
};

class rhsusf_plateframe_light: rhsusf_plateframe_sapi
{
	INVENTORY_PICTURE(rhsusf_plateframe_light)
	displayName = "Plateframe (Light)";
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_light";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_light";
		containerClass = "Supply100";
		mass = 80;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_3;
				PassThrough = PASS_NIJ_3;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_3 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_3;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_3;
			};
		};
	};
};
class rhsusf_plateframe_rifleman: rhsusf_plateframe_sapi
{
	INVENTORY_PICTURE(rhsusf_plateframe_rifleman)
	displayName = "Plateframe (Rifleman)";
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_rifleman";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_rifleman";
		containerClass = "Supply160";
		mass = 100;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_3;
				PassThrough = PASS_NIJ_3;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_3 + ARMOR_EQUIP;
				PassThrough = PASS_NIJ_3;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_3;
			};
		};
	};
};
class rhsusf_plateframe_teamleader: rhsusf_plateframe_rifleman
{
	INVENTORY_PICTURE(rhsusf_plateframe_teamleader)
	displayName = "Plateframe (Teamleader)";
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_teamleader";
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\data\rhs_plateframe_sapi_tan_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear1_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear2_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
		"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_drab_co.paa",
		"rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_teamleader";
	};
};
class rhsusf_plateframe_grenadier: rhsusf_plateframe_rifleman
{
	INVENTORY_PICTURE(rhsusf_plateframe_grenadier)
	displayName = "Plateframe (Grenadier)";
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_grenadier";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_grenadier";
	};
};
class rhsusf_plateframe_machinegunner: rhsusf_plateframe_rifleman
{
	INVENTORY_PICTURE(rhsusf_plateframe_machinegunner)
	displayName = "Plateframe (Machinegunner)";
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_machinegunner";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_machinegunner";
	};
};
class rhsusf_plateframe_marksman: rhsusf_plateframe_rifleman
{
	INVENTORY_PICTURE(rhsusf_plateframe_marksman)
	displayName = "Plateframe (Marksman)";
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_marksmen";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_marksmen";
	};
};
class rhsusf_plateframe_medic: rhsusf_plateframe_rifleman
{
	INVENTORY_PICTURE(rhsusf_plateframe_medic)
	displayName = "Plateframe (Medic)";
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_medic";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_medic";
	};
};
