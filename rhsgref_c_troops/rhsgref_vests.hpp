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

/*

GOST R 50744-95

1		9mm (57-N-181S)
2		7.62 TT (57-N-134S)
3		5.45 (7N6) / 7.62 (57-N-231)
4		5.45 (7N10)
5		7.62 (57-N-231) / 7.62x54 (57-N-323S)
5a		7.62 API (57-BZ-231)
6		7.62x54 (7N13) (ST-M2)
6a		7.62x54r API (7-BZ-3) (B-32)

*/

#define ARMOR_GOST_1	8
#define ARMOR_GOST_2	12
#define ARMOR_GOST_3	16
#define ARMOR_GOST_4	22
#define ARMOR_GOST_5	25
#define ARMOR_GOST_6	28

#define PASS_GOST_1 	0.5
#define PASS_GOST_2 	0.4
#define PASS_GOST_3 	0.3
#define PASS_GOST_4 	0.3
#define PASS_GOST_5 	0.2
#define PASS_GOST_6 	0.1

#define ARMOR_EQUIP		3
#define PASS_EQUIP		0.6

#define INVENTORY_CATEGORY Vests

class Vest_Camo_Base;

class rhs_6b23: Vest_Camo_Base {
	class ItemInfo;
};

class rhsgref_6b23_khaki: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_khaki)
	Scope = 2;

	dlc = "RHS_GREF";

	displayName = "6B23 Khaki (Utility)";

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_cdf\6b23_cdf_khaki_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
	};

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
		containerClass = "Supply80";
		mass = 65; // +5
	};
};

class rhsgref_6b23_khaki_rifleman: rhsgref_6b23_khaki
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_khaki_rifleman)
	Scope = 2;

	displayName = "6B23 Khaki (Rifleman)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
		containerClass = "Supply100";
		mass = 75; //+15
	};
};

class rhsgref_6b23_khaki_sniper: rhsgref_6b23_khaki
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_khaki_sniper)
	Scope = 2;

	displayName = "6B23 Khaki (Sniper)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
		containerClass = "Supply80";
		mass = 65; //+5s
	};
};

class rhsgref_6b23_khaki_officer: rhsgref_6b23_khaki
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_khaki_officer)
	Scope = 2;

	displayName = "6B23 Khaki (Officer)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
		containerClass = "Supply60";
		mass = 65; //+5
	};
};

class rhsgref_6b23_khaki_nco: rhsgref_6b23_khaki
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_khaki_nco)
	Scope = 2;

	displayName = "6B23 Khaki (NCO)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
		containerClass = "Supply80";
		mass = 65; //+5
	};
};

class rhsgref_6b23_khaki_medic: rhsgref_6b23_khaki
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_khaki_medic)
	Scope = 2;

	displayName = "6B23 Khaki (Medic)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
		containerClass = "Supply130";
		mass = 80; // +5 +15
	};
};

//ttsko forest
#define VEST_TEX_TTSKO_F 	hiddenSelectionsTextures[] = {\
							"rhsgref\addons\rhsgref_infantry\data_cdf\6b23_cdf_ttskosummer_co.paa",\
							"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"\
						};

class rhsgref_6b23_ttsko_forest: rhsgref_6b23_khaki
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_forest)
	Scope = 2;

	displayName = "6B23 TTsKO Forest (Utility)";

	hiddenSelections[] = {"Camo1","Camo2"};
	VEST_TEX_TTSKO_F

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
	};
};

class rhsgref_6b23_ttsko_forest_rifleman: rhsgref_6b23_khaki_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_forest_rifleman)
	Scope = 2;

	displayName = "6B23 TTsKO Forest (Rifleman)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
	VEST_TEX_TTSKO_F
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
	};
};/*
class rhsgref_6b23_ttsko_forest_sniper: rhsgref_6b23_ttsko_forest
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_forest_sniper)
	Scope = 2;

	displayName = "6B23 TTsKO Forest (Sniper)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
	VEST_TEX_TTSKO_F
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
		containerClass = "Supply100";
		mass = 60;
	};
};*/

//ttsko mountain
#define VEST_TEX_TTSKO_M 	hiddenSelectionsTextures[] = {\
							"rhsgref\addons\rhsgref_infantry\data_cdf\6b23_cdf_ttskofall_co.paa",\
							"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"\
						};

class rhsgref_6b23_ttsko_mountain: rhsgref_6b23_khaki
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_mountain)
	Scope = 2;

	displayName = "6B23 TTsKO Mountain (Utility)";

	hiddenSelections[] = {"Camo1","Camo2"};
	VEST_TEX_TTSKO_M

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
	};
};

class rhsgref_6b23_ttsko_mountain_rifleman: rhsgref_6b23_khaki_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_mountain_rifleman)
	Scope = 2;

	displayName = "6B23 TTsKO Mountain (Rifleman)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
	VEST_TEX_TTSKO_M
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
	};
};

class rhsgref_6b23_ttsko_mountain_sniper: rhsgref_6b23_khaki_sniper
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_mountain_sniper)
	Scope = 2;

	displayName = "6B23 TTsKO Mountain (Sniper)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
	VEST_TEX_TTSKO_M
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
	};
};

class rhsgref_6b23_ttsko_mountain_officer: rhsgref_6b23_khaki_officer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_mountain_officer)
	Scope = 2;

	displayName = "6B23 TTsKO Mountain (Officer)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
	VEST_TEX_TTSKO_M
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
	};
};

class rhsgref_6b23_ttsko_mountain_nco: rhsgref_6b23_khaki_nco
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_mountain_nco)
	Scope = 2;

	displayName = "6B23 TTsKO Mountain (NCO)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
	VEST_TEX_TTSKO_M
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
	};
};

class rhsgref_6b23_ttsko_mountain_medic: rhsgref_6b23_khaki_medic
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_mountain_medic)
	Scope = 2;

	displayName = "6B23 TTsKO Mountain (Medic)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
	VEST_TEX_TTSKO_M
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
	};
};
/*

//ttsko urban
#define VEST_TEX_TTSKO_U 	hiddenSelectionsTextures[] = {\
							"rhsgref\addons\rhsgref_infantry\data_cdf\6b23_cdf_ttskodark_co.paa",\
							"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"\
						};

class rhsgref_6b23_ttsko_urban : rhsgref_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_urban)
	Scope = 2;

	displayName = "6B23 TTsKO Urban (Utility)";

	hiddenSelections[] = {"Camo1","Camo2"};
	VEST_TEX_TTSKO_U

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
		containerClass = "Supply80";
		mass = 60;
	};
};

class rhsgref_6b23_ttsko_urban_rifleman: rhsgref_6b23_ttsko_urban
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_urban_rifleman)
	Scope = 2;

	displayName = "6B23 TTsKO Urban (Rifleman)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
	VEST_TEX_TTSKO_U
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
		containerClass = "Supply100";
		mass = 60;
	};
};
class rhsgref_6b23_ttsko_urban_sniper: rhsgref_6b23_ttsko_urban
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_urban_sniper)
	Scope = 2;

	displayName = "6B23 TTsKO Urban (Sniper)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
	VEST_TEX_TTSKO_U
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
		containerClass = "Supply100";
		mass = 60;
	};
};

class rhsgref_6b23_ttsko_urban_officer: rhsgref_6b23_ttsko_urban
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_urban_officer)
	Scope = 2;

	displayName = "6B23 TTsKO Urban (Officer)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
	VEST_TEX_TTSKO_U
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
		containerClass = "Supply80";
		mass = 60;
	};
};

class rhsgref_6b23_ttsko_urban_nco: rhsgref_6b23_ttsko_urban
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_urban_nco)
	Scope = 2;

	displayName = "6B23 TTsKO Urban (NCO)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
	VEST_TEX_TTSKO_U
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
		containerClass = "Supply80";
		mass = 60;
	};
};

class rhsgref_6b23_ttsko_urban_medic: rhsgref_6b23_ttsko_urban
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_urban_medic)
	Scope = 2;

	displayName = "6B23 TTsKO Urban (Medic)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
	VEST_TEX_TTSKO_U
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
		containerClass = "Supply120";
		mass = 60;
	};
};*/

//ttsko digital
#define VEST_TEX_TTSKO_Dg 	hiddenSelectionsTextures[] = {\
							"rhsgref\addons\rhsgref_infantry\data_cdf\6b23_cdf_digisummer_co.paa",\
							"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"\
						};

class rhsgref_6b23_ttsko_digi: rhsgref_6b23_khaki
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_digi)
	Scope = 2;

	displayName = "6B23 TTsKO Digital (Utility)";

	hiddenSelections[] = {"Camo1","Camo2"};
	VEST_TEX_TTSKO_Dg

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
	};
};

class rhsgref_6b23_ttsko_digi_rifleman: rhsgref_6b23_khaki_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_digi_rifleman)
	Scope = 2;

	displayName = "6B23 TTsKO Digital (Rifleman)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
	VEST_TEX_TTSKO_Dg
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
	};
};
class rhsgref_6b23_ttsko_digi_sniper: rhsgref_6b23_khaki_sniper
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_digi_sniper)
	Scope = 2;

	displayName = "6B23 TTsKO Digital (Sniper)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
	VEST_TEX_TTSKO_Dg
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
	};
};

class rhsgref_6b23_ttsko_digi_officer: rhsgref_6b23_khaki_officer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_digi_officer)
	Scope = 2;

	displayName = "6B23 TTsKO Digital (Officer)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
	VEST_TEX_TTSKO_Dg
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
	};
};

class rhsgref_6b23_ttsko_digi_nco: rhsgref_6b23_khaki_nco
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_digi_nco)
	Scope = 2;

	displayName = "6B23 TTsKO Digital (NCO)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
	VEST_TEX_TTSKO_Dg
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
	};
};

class rhsgref_6b23_ttsko_digi_medic: rhsgref_6b23_khaki_medic
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b23_ttsko_digi_medic)
	Scope = 2;

	displayName = "6B23 TTsKO Digital (Medic)";
	VEST_TEX_TTSKO_Dg
	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
	};
};

//GREF PARA PLACEHOLDER VESTS
class rhsgref_otv_khaki : rhsgref_6b23_khaki_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_otv_khaki)
	Scope = 2;

	displayName = "OTV (Khaki)";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_cdf\otv_cdf_khaki_co.paa"
	};

	model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";

	class ItemInfo: ItemInfo
	{
		uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		containerClass = "Supply100";
		mass = 70;
		hiddenSelections[] = {"camo"};

		descriptionShort = "Armor Level III";
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = 0;
				PassThrough = 0.9;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_3;
				PassThrough = PASS_NIJ_3;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_3;
				PassThrough = PASS_NIJ_3;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_1;
			};
		};
	};
};

class rhsgref_otv_digi : rhsgref_otv_khaki
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_otv_digi)
	Scope = 2;

	displayName = "OTV (Digital)";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_cdf\otv_cdf_digital_co.paa"
	};

	model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";

	class ItemInfo: ItemInfo
	{
		uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"camo"};
	};
};


//GREF TACTICAL VEST RETEXTURE
class rhsgref_TacVest_ERDL : rhsgref_6b23_khaki_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_TacVest_ERDL)
	Scope = 2;

	displayName = "Tactical Vest (ERDL)";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_infantry\data_tanoa\tacticalvest_erdl_co.paa"
	};

	model = "A3\Characters_F\Common\equip_tacticalvest";

	class ItemInfo: ItemInfo
	{
		uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
		containerClass = "Supply100";
		mass = 40;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] =
		{
		"rhsgref\addons\rhsgref_infantry\data_tanoa\tacticalvest_erdl_co.paa"
		};

		descriptionShort = "Armor Level I";
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = 0;
				PassThrough = 0.9; ///needs correct value
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_NIJ_1;
				PassThrough = PASS_NIJ_1;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_NIJ_1;
				PassThrough = PASS_NIJ_1;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_NIJ_1;
			};
		};
	};
};

//GREF ALICE WEBBING

class rhsgref_alice_webbing: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_alice_webbing)
	Scope = 2;

	dlc = "RHS_GREF";

	displayName = "ALICE Webbing";

	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};

	model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_alice_webbing";
	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_alice_webbing";
		containerClass = "Supply120";
		mass = 15;
		class HitpointsProtectionInfo
		{
			class Body
			{
				hitpointName = "HitBody";
				armor = 0;
				passThrough = 1;
			};
		};
	};
};

class rhsgref_chestrig: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_chestrig)
	Scope = 2;

	dlc = "RHS_GREF";

	displayName = "Chest Rig (Light)";

	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_oli_co.paa", "\A3\Characters_F_Beta\INDEP\Data\armor1_oli_co.paa"};

	model = "\a3\Characters_F\Common\equip_chestrig_light";
	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		uniformModel = "a3\Characters_F\Common\equip_chestrig_light";
		hiddenSelections[] = {"Camo1", "Camo2"};
		containerClass = "Supply100";
		mass = 15;
		class HitpointsProtectionInfo
		{
			class Body
			{
				hitpointName = "HitBody";
				armor = 0;
				passThrough = 1;
			};
		};
	};
};

class rhsgref_chicom: rhsgref_chestrig
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_chicom)
	Scope = 2;

	dlc = "RHS_GREF";

	displayName = "Chicom Chest Rig";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\vest\chicom\rhs_chicom_co.paa"};

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\vest\rhs_vest_chicom.p3d";
	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\vest\rhs_vest_chicom.p3d";
		hiddenSelections[] = {"Camo1"};
		containerClass = "Supply100";
		mass = 15;
		class HitpointsProtectionInfo
		{
			class Body
			{
				hitpointName = "HitBody";
				armor = 0;
				passThrough = 1;
			};
		};
	};
};
class rhsgref_chicom_m88: rhsgref_chicom
{
	AUTHOR_MACRO
	displayName	= "Chicom Chest Rig (M88)";
	model		= "rhsgref\addons\rhsgref_infantry\gear_tanoa\vest\rhs_vest_chicom2.p3d";
	scope = 1;
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\vest\rhs_vest_chicom2.p3d";
	};
};
