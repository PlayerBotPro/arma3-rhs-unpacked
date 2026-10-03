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

#define SIM_GOST_1	RHS_Gost_1
#define SIM_GOST_2	RHS_Gost_2
#define SIM_GOST_3	RHS_Gost_3
#define SIM_GOST_4	RHS_Gost_4
#define SIM_GOST_5	RHS_Gost_5
#define SIM_GOST_6	RHS_Gost_6

#define PASS_GOST_1 	0.5
#define PASS_GOST_2 	0.4
#define PASS_GOST_3 	0.3
#define PASS_GOST_4 	0.3
#define PASS_GOST_5 	0.2
#define PASS_GOST_6 	0.1

#define ARMOR_EQUIP		3
#define PASS_EQUIP		0.6

#define INVENTORY_CATEGORY vests

class Vest_Camo_Base : ItemCore {
	class ItemInfo;
};

class rhs_6b23: Vest_Camo_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23)
	dlc = "RHS_AFRF";

	scope = 2;

	displayName = "$STR_RHS_6B23_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23";

	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
	};

	descriptionShort = "Armor Level 4";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23";
		containerClass = "Supply20";
		mass = 60;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_1;
				PassThrough = PASS_GOST_2;
				simulation = SIM_GOST_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_4;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_4;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_4;
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
		};
	};
};

class rhs_6b23_crew: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_crew)
	displayName = "$STR_RHS_6B23CREW_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
		containerClass = "Supply90";
		mass = 70; // +5 +5
	};
};

class rhs_6b23_engineer: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_engineer)
	displayName = "$STR_RHS_6B23ENGINEER_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
		containerClass = "Supply80";
		mass = 65; // +5
	};
};

class rhs_6b23_medic: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_medic)
	displayName = "$STR_RHS_6B23MEDIC_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
		containerClass = "Supply130";
		mass =  80; // +5 +15
	};
};

class rhs_6b23_rifleman: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_rifleman)
	displayName = "$STR_RHS_6B23RIFLEMAN_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_rifleman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_rifleman";
		containerClass = "Supply80";
		mass = 65;  // +5
	};
};

class rhs_6b23_crewofficer: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_crewofficer)
	displayName = "$STR_RHS_6B23CREWOFFICER_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
		containerClass = "Supply60";
		mass = 65; //+5
	};
};

class rhs_6b23_sniper: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_sniper)
	displayName = "$STR_RHS_6B23SNIPER_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
		containerClass = "Supply80";
		mass = 65; //+5
	};
};

class rhs_6b23_6sh92 : rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh92)
	displayName = "$STR_RHS_6B236SH92_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92";
		containerClass = "Supply100";
		mass = 75; //+15

		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_2;
				PassThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_4;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_4 + ARMOR_EQUIP;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_4 + ARMOR_EQUIP;
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
		};
	};
};

class rhs_6b23_6sh92_vog : rhs_6b23_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh92_vog)
	displayName = "$STR_RHS_6B236SH92VOG_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog";
		containerClass = "Supply120";
		mass = 80; // +15 +5
	};
};

class rhs_6b23_6sh92_vog_headset : rhs_6b23_6sh92_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh92_vog_headset)
	displayName = "$STR_RHS_6B236SH92VOGHEADSET_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_headset";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_headset";
	};
};

class rhs_6b23_6sh92_headset : rhs_6b23_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh92_headset)
	displayName = "$STR_RHS_6B236SH92HEADSET_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset";
	};
};

class rhs_6b23_6sh92_headset_mapcase : rhs_6b23_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh92_headset_mapcase)
	displayName = "$STR_RHS_6B236SH92HEADSETMAPCASE_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_mapcase";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_mapcase";
		containerClass = "Supply120";
		mass = 80; // +15 +5
	};
};

class rhs_6b23_6sh92_radio: rhs_6b23_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh92_radio)
	displayName = "$STR_RHS_6B236SH92RADIO_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio";
	};
};

class rhs_6sh46: Vest_Camo_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh46)
	dlc = "RHS_AFRF";

	scope = 2;

	///! stringtable the name
	displayName = "$STR_RHS_6SH46_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh46";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"
	};

	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh46";
		containerClass = "Supply40";
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

class rhs_vest_commander: Vest_Camo_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_vest_commander)
	dlc = "RHS_AFRF";

	scope = 2;

	///! stringtable the name
	displayName = "$STR_RHS_MAPCASEANDHOLSTER_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_commander";

	hiddenSelectionsTextures[] = {};

	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_commander";
		containerClass = "Supply40";
		mass = 20; //+5
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
class rhs_vest_pistol_holster: rhs_vest_commander
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_vest_pistol_holster)
	displayName = "$STR_RHS_HOLSTER_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_pistol_holster";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_pistol_holster";
		containerClass = "Supply20";
		mass = 5;
	};
};

//digi flora variants
#define VEST_TEX_EMR 		hiddenSelectionsTextures[] = {\
					"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",\
					"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"\
				};

//VSR variants
#define VEST_TEX_VSR 		hiddenSelectionsTextures[] = {\
					"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",\
					"rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"\
				};

class rhs_6b23_digi: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi)
	displayName = "$STR_RHS_6B23EMRSUMMER_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_crew: rhs_6b23_crew
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_crew)
	displayName = "$STR_RHS_6B23EMRSUMMERCREW_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_engineer: rhs_6b23_engineer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_engineer)
	displayName = "$STR_RHS_6B23EMRSUMMERENGINEER_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_medic: rhs_6b23_medic
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_medic)
	displayName = "$STR_RHS_6B23EMRSUMMERMEDIC_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_rifleman: rhs_6b23_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_rifleman)
	displayName = "$STR_RHS_6B23EMRSUMMERRIFLEMAN_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_crewofficer: rhs_6b23_crewofficer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_crewofficer)
	displayName = "$STR_RHS_6B23EMRSUMMERCREWOFFICER_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_sniper: rhs_6b23_sniper
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_sniper)
	displayName = "$STR_RHS_6B23EMRSUMMERSNIPER_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_6sh92 : rhs_6b23_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92)
	displayName = "$STR_RHS_6B23EMRSUMMER6SH92_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_6sh92_vog : rhs_6b23_6sh92_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_vog)
	displayName = "$STR_RHS_6B23EMRSUMMER6SH92VOG_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_6sh92_vog_headset : rhs_6b23_6sh92_vog_headset
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_vog_headset)
	displayName = "$STR_RHS_6B23EMRSUMMER6SH92VOGHEADSET_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_6sh92_headset : rhs_6b23_6sh92_headset
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_headset)
	displayName = "$STR_RHS_6B23EMRSUMMER6SH92HEADSET_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_6sh92_headset_mapcase : rhs_6b23_6sh92_headset_mapcase
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_headset_mapcase)
	displayName = "$STR_RHS_6B23EMRSUMMER6SH92HEADSETMAPCASE_NAME";
	VEST_TEX_EMR
};

class rhs_6b23_digi_6sh92_radio: rhs_6b23_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_radio)
	displayName = "$STR_RHS_6B23EMRSUMMER6SH92RADIO_NAME";
	VEST_TEX_EMR
};

//SPETSNAZ VESTS
class rhs_6b23_digi_6sh92_Spetsnaz : rhs_6b23_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_Spetsnaz)
	displayName = "$STR_RHS_6B23EMR6SH92RADIOSPNZ_NAME";
	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio_spetsnaz";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio_spetsnaz";
		containerClass = "Supply100";

		mass = 70; // +15 -5

		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_1;
				PassThrough = PASS_GOST_2;
				simulation = SIM_GOST_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_4;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_4 + ARMOR_EQUIP;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_4 + ARMOR_EQUIP;
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
		};
	};
	VEST_TEX_EMR
};
class rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz : rhs_6b23_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz)
	displayName = "$STR_RHS_6B23EMR6SH92VOGRADIOSPNZ_NAME";
	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_radio_spetsnaz";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_radio_spetsnaz";
		containerClass = "Supply120";
		mass = 75; // +15 +5 -5
	};
	VEST_TEX_EMR
};
class rhs_6b23_digi_6sh92_headset_spetsnaz : rhs_6b23_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_headset_spetsnaz)
	displayName = "$STR_RHS_6B23EMR6SH92HEADSETSPNZ_NAME";
	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_spetsnaz";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_spetsnaz";
	};
	VEST_TEX_EMR
};

class rhs_6b23_digi_6sh92_spetsnaz2 : rhs_6b23_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_spetsnaz2)
	displayName = "$STR_RHS_6B23EMR6SH92SPNZ_NAME";
	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_spetsnaz";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_spetsnaz";
	};
	VEST_TEX_EMR
};

class rhs_6b23_digi_6sh92_Vog_Spetsnaz : rhs_6b23_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_6sh92_Vog_Spetsnaz)
	displayName = "$STR_RHS_6B23EMR6SH92VOGSPNZ_NAME";
	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_spetsnaz";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_spetsnaz";
		containerClass = "Supply120";
		mass = 75; // +15 +5 -5
	};
	VEST_TEX_EMR
};



//mountain les variants
#define VEST_TEX_ML 	hiddenSelectionsTextures[] = {\
							"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",\
							"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"\
						};
class rhs_6b23_ML: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML)
	displayName = "$STR_RHS_6B23ML_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_crew: rhs_6b23_crew
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_crew)
	displayName = "$STR_RHS_6B23MLCREW_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_engineer: rhs_6b23_engineer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_engineer)
	displayName = "$STR_RHS_6B23MLENGINEER_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_medic: rhs_6b23_medic
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_medic)
	displayName = "$STR_RHS_6B23MLMEDIC_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_rifleman: rhs_6b23_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_rifleman)
	displayName = "$STR_RHS_6B23MLRIFLEMAN_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_crewofficer: rhs_6b23_crewofficer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_crewofficer)
	displayName = "$STR_RHS_6B23MLCREWOFFICER_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_sniper: rhs_6b23_sniper
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_sniper)
	displayName = "$STR_RHS_6B23MLSNIPER_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_6sh92 : rhs_6b23_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_6sh92)
	displayName = "$STR_RHS_6B23ML6SH92_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_6sh92_vog : rhs_6b23_6sh92_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_6sh92_vog)
	displayName = "$STR_RHS_6B23ML6SH92VOG_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_6sh92_vog_headset : rhs_6b23_6sh92_vog_headset
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_6sh92_vog_headset)
	displayName = "$STR_RHS_6B23ML6SH92VOGHEADSET_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_6sh92_headset : rhs_6b23_6sh92_headset
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_6sh92_headset)
	displayName = "$STR_RHS_6B23ML6SH92HEADSET_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_6sh92_headset_mapcase : rhs_6b23_6sh92_headset_mapcase
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_6sh92_headset_mapcase)
	displayName = "$STR_RHS_6B23ML6SH92HEADSETMAPCASE_NAME";
	VEST_TEX_ML
};

class rhs_6b23_ML_6sh92_radio: rhs_6b23_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_6sh92_radio)
	displayName = "$STR_RHS_6B23ML6SH92RADIO_NAME";
	VEST_TEX_ML
};

class rhs_vydra_3m : Vest_Camo_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_vydra_3m)
	dlc = "RHS_AFRF";

	scope = 2;
	displayName = "$STR_RHS_VYDRA3M_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_vydra_3m";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"};

	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1"};
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_vydra_3m";
		containerClass = "Supply80";
		mass = 15;
		class HitpointsProtectionInfo
		{
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 0;
				passThrough = 0.8;
			};
		};
	};
};

///6B23 with Vydra-3M
class rhs_6b23_vydra_3m : rhs_6b23_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_vydra_3m)
	displayName = "$STR_RHS_6B23VYDRA3M_NAME";
	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa",
		"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
		containerClass = "Supply100";
		mass = 75; //+15
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_1;
				PassThrough = PASS_GOST_2;
				simulation = SIM_GOST_2;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_4;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_4 + ARMOR_EQUIP;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_4 + ARMOR_EQUIP;
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
		};
	};
};
class rhs_6b23_digi_vydra_3m : rhs_6b23_vydra_3m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_digi_vydra_3m)
	displayName = "$STR_RHS_6B23EMRVYDRA3M_NAME";
	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";

	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa",
		"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"
	};
};
class rhs_6b23_ML_vydra_3m : rhs_6b23_vydra_3m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_ML_vydra_3m)
	displayName = "$STR_RHS_6B23MLVYDRA3M_NAME";
	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";

	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa",
		"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"
	};
};

///6Sh116
class rhs_6b23_6sh116 : rhs_6b23_digi
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh116)
	displayName = "$STR_RHS_6B23EMRSUMMER6SH116_NAME";
	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116";

	hiddenSelections[] = {"Camo1","Camo2","Camo3"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		containerClass = "Supply140";
		mass = 80; //+20
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_2;
				PassThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_4;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_4 + ARMOR_EQUIP;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_4 + ARMOR_EQUIP;
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
		};
	};

	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_co.paa"
	};
};

class rhs_6b23_6sh116_flora : rhs_6b23_6sh116
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh116_flora)
	displayName = "$STR_RHS_6B23FLORA6SH116_NAME";

	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_flora_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_flora_co.paa"
	};
};

class rhs_6b23_6sh116_od : rhs_6b23_6sh116
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh116_od)
	displayName = "$STR_RHS_6B23OD6SH116_NAME";

	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_od_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_od_co.paa"
	};
};

class rhs_6b23_6sh116_mixed : rhs_6b23_6sh116
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh116_od)
	displayName = "$STR_RHS_6B23MIXED6SH116_NAME";

	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_flora_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_flora_co.paa"
	};
};

class rhs_6b23_6sh116_vog : rhs_6b23_6sh116
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh116_vog)
	displayName = "$STR_RHS_6B23EMRSUMMER6SH116VOG_NAME";
	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
		mass = 85; //+20 +5
		containerClass = "Supply160";
	};

};

class rhs_6b23_6sh116_vog_flora : rhs_6b23_6sh116_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh116_vog_flora)
	displayName = "$STR_RHS_6B23FLORA6SH116VOG_NAME";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_flora_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_flora_co.paa"
	};
	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
	};
};

class rhs_6b23_6sh116_vog_od : rhs_6b23_6sh116_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh116_vog_od)
	displayName = "$STR_RHS_6B23OD6SH116VOG_NAME";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_od_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_od_co.paa"
	};
	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
	};
};

class rhs_6b23_6sh116_vog_mixed : rhs_6b23_6sh116_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b23_6sh116_vog_od)
	displayName = "$STR_RHS_6B23MIXED6SH116VOG_NAME";
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_flora_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_flora_co.paa"
	};
	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
	};
};

///6B13

class rhs_6b13: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13)
	displayName = "$STR_RHS_6B13_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13";

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_vsr_co.paa",
		"rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"
	};

	descriptionShort = "Armor Level 6";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13";
		containerClass = "Supply20";
		mass = 80;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_3;
				PassThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_6;
				PassThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_6;
				PassThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_4;
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
		};
	};
};
class rhs_6b13_crewofficer: rhs_6b13
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_crewofficer)
	displayName = "$STR_RHS_6B13CREWOFFICER_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_crewofficer";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_crewofficer";
		containerClass = "Supply40";
		mass = 85; //+5
	};
};

class rhs_6b13_6sh92 : rhs_6b13
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_6sh92)
	displayName = "$STR_RHS_6B136SH92_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92";

	descriptionShort = "Armor Level 6";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92";
		containerClass = "Supply100";
		mass = 95; // +15
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_3;
				PassThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_6 + ARMOR_EQUIP;
				PassThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_6 + ARMOR_EQUIP;
				PassThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_4;
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
		};
	};
};

class rhs_6b13_6sh92_vog : rhs_6b13_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_6sh92_vog)
	displayName = "$STR_RHS_6B136SH92VOG_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";
		containerClass = "Supply120";
		mass = 100; // +15 +5
	};
};

class rhs_6b13_6sh92_headset_mapcase : rhs_6b13_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_6sh92_headset_mapcase)
	displayName = "$STR_RHS_6B136SH92HEADSETMAPCASE_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_headset_mapcase";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_headset_mapcase";
		containerClass = "Supply120";
		mass = 100; // +15 +5
	};
};
class rhs_6b13_6sh92_radio: rhs_6b13_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_6sh92_radio)
	displayName = "$STR_RHS_6B136SH92RADIO_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
	};
};


class rhs_6b13_EMR: rhs_6b13
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_EMR)
	displayName = "$STR_RHS_6B13EMRSUMMER_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
	};
};
class rhs_6b13_EMR_6sh92 : rhs_6b13_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_EMR_6sh92)
	displayName = "$STR_RHS_6B13EMR6SH92_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
	};
};
class rhs_6b13_EMR_6sh92_vog : rhs_6b13_6sh92_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_EMR_6sh92_vog)
	displayName = "$STR_RHS_6B13EMR6SH92VOG_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
	};
};
class rhs_6b13_EMR_6sh92_headset_mapcase : rhs_6b13_6sh92_headset_mapcase
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_EMR_6sh92_headset_mapcase)
	displayName = "$STR_RHS_6B13EMR6SH92HEADSETMAPCASE_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
	};
};
class rhs_6b13_EMR_6sh92_radio: rhs_6b13_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_EMR_6sh92_radio)
	displayName = "$STR_RHS_6B13EMR6SH92RADIO_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
	};
};

class rhs_6b13_Flora: rhs_6b13
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_Flora)
	displayName = "$STR_RHS_6B13FLORA_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
	};
};
class rhs_6b13_Flora_crewofficer: rhs_6b13_crewofficer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_Flora_crewofficer)
	displayName = "$STR_RHS_6B13FLORACREWOFFICER_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
	};
};
class rhs_6b13_Flora_6sh92 : rhs_6b13_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_Flora_6sh92)
	displayName = "$STR_RHS_6B13FLORA6SH92_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
	};
};
class rhs_6b13_Flora_6sh92_vog : rhs_6b13_6sh92_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_Flora_6sh92_vog)
	displayName = "$STR_RHS_6B13FLORA6SH92VOG_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
	};
};
class rhs_6b13_Flora_6sh92_headset_mapcase : rhs_6b13_6sh92_headset_mapcase
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_Flora_6sh92_headset_mapcase)
	displayName = "$STR_RHS_6B13FLORA6SH92HEADSETMAPCASE_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
	};
};
class rhs_6b13_Flora_6sh92_radio: rhs_6b13_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b13_Flora_6sh92_radio)
	displayName = "$STR_RHS_6B13FLORA6SH92RADIO_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
	};
};

//6B43

class rhs_6b43: rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b43)
	displayName = "$STR_RHS_6B43_NAME";

	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b43_m";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6B43_co.paa"
	};

	descriptionShort = "Armor Level 6";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b43_m";
		containerClass = "Supply20";
		mass = 80;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_3;
				PassThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_6;
				PassThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_6;
				PassThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_6;
				passThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
		};
	};
};


///6sh92

class rhs_6sh92: Vest_Camo_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92)
	dlc = "RHS_AFRF";

	scope = 2;

	displayName = "$STR_RHS_6SH92_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92";

	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
		"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
	};

	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92";
		containerClass = "Supply100";
		mass = 15;
		class HitpointsProtectionInfo
		{
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 0;
				passThrough = 0.8;
			};
		};
	};
};

class rhs_6sh92_vog : rhs_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_vog)
	displayName = "$STR_RHS_6SH92VOG_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog";
		containerClass = "Supply120";
		mass = 20; //+5
	};
};

class rhs_6sh92_vog_headset : rhs_6sh92_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_vog_headset)
	displayName = "$STR_RHS_6SH92VOGHEADSET_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog_headset";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog_headset";
	};
};

class rhs_6sh92_headset : rhs_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_headset)
	displayName = "$STR_RHS_6SH92HEADSET_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_headset";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_headset";
	};
};

class rhs_6sh92_radio: rhs_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_radio)
	displayName = "$STR_RHS_6SH92RADIO_NAME";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_radio";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_radio";
	};
};

///6sh92 EMR

class rhs_6sh92_digi: rhs_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_digi)
	displayName = "$STR_RHS_6SH92EMRSUMMER_NAME";
	VEST_TEX_EMR
};

class rhs_6sh92_digi_vog : rhs_6sh92_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_digi_vog)
	displayName = "$STR_RHS_6SH92EMRSUMMERVOG_NAME";
	VEST_TEX_EMR
};

class rhs_6sh92_digi_vog_headset : rhs_6sh92_vog_headset
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_digi_vog_headset)
	displayName = "$STR_RHS_6SH92EMRSUMMERVOGHEADSET_NAME";
	VEST_TEX_EMR
};

class rhs_6sh92_digi_headset : rhs_6sh92_headset
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_digi_headset)
	displayName = "$STR_RHS_6SH92EMRSUMMERHEADSET_NAME";
	VEST_TEX_EMR
};

class rhs_6sh92_digi_radio: rhs_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_digi_radio)
	displayName = "$STR_RHS_6SH92EMRSUMMERRADIO_NAME";
	VEST_TEX_EMR
};


///6sh92 VSR

class rhs_6sh92_vsr: rhs_6sh92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_vsr)
	displayName = "$STR_RHS_6SH92VSR_NAME";
	VEST_TEX_VSR
};

class rhs_6sh92_vsr_vog : rhs_6sh92_vog
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_vsr_vog)
	displayName = "$STR_RHS_6SH92VSRVOG_NAME";
	VEST_TEX_VSR
};

class rhs_6sh92_vsr_vog_headset : rhs_6sh92_vog_headset
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_vsr_vog_headset)
	displayName = "$STR_RHS_6SH92VSRVOGHEADSET_NAME";
	VEST_TEX_VSR
};

class rhs_6sh92_vsr_headset : rhs_6sh92_headset
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_vsr_headset)
	displayName = "$STR_RHS_6SH92VSRHEADSET_NAME";
	VEST_TEX_VSR
};

class rhs_6sh92_vsr_radio: rhs_6sh92_radio
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh92_vsr_radio)
	displayName = "$STR_RHS_6SH92VSRRADIO_NAME";
	VEST_TEX_VSR
};

//Lodu Content

//6B2
class rhs_6b2: Vest_Camo_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b2)
	dlc = "RHS_AFRF";

	//scope = 2;
	LODU_SCOPE

	displayName = "$STR_RHS_6B2_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2";

	hiddenSelections[] = {"Camo","Camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa"
	};

	descriptionShort = "Armor Level 1";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2";
		containerClass = "Supply20";
		mass = 40;
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_2;
				PassThrough = PASS_GOST_2;
				simulation = SIM_GOST_2;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_2;
				PassThrough = PASS_GOST_2;
				simulation = SIM_GOST_2;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_2;
				passThrough = PASS_GOST_2;
				simulation = SIM_GOST_2;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_2;
				simulation = SIM_GOST_2;
			};
		};
	};
};
class rhs_6b2_AK: rhs_6b2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b2_AK)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B2_6SH46_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_AK";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"
	};

	descriptionShort = "Armor Level 1";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_AK";
		containerClass = "Supply80";
		mass = 45;
	};
};
class rhs_6b2_chicom: rhs_6b2_AK
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b2_chicom)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B2_CHICOM_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_chicom";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\chicom_tan_co.paa"
	};

	descriptionShort = "Armor Level 1";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_chicom";
		containerClass = "Supply90";
		mass = 50;
	};
};
class rhs_6b2_lifchik: rhs_6b2_AK
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b2_lifchik)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B2_LIFCHIK_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_lichifka";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\lichifka_co.paa"
	};

	descriptionShort = "Armor Level 1";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_lichifka";
		containerClass = "Supply100";
		mass = 50;
	};
};
class rhs_6b2_holster: rhs_6b2_AK
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b2_holster)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B2_HOLSTER_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_holster";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"
	};

	descriptionShort = "Armor Level 1";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_holster";
		containerClass = "Supply30";
		mass = 42;
	};
};
class rhs_6b2_RPK: rhs_6b2_AK
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b2_RPK)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B2_RPK_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_RPK";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"
	};

	descriptionShort = "Armor Level 1";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_RPK";
		containerClass = "Supply90";
		mass = 50;
	};
};
class rhs_6b2_SVD: rhs_6b2_AK
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b2_SVD)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B2_SNIPER_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_SVD";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"
	};

	descriptionShort = "Armor Level 1";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_SVD";
		containerClass = "Supply80";
		mass = 45;
	};
};

//6B3
class rhs_6b3: rhs_6b2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3)
	dlc = "RHS_AFRF";

	//scope = 2;
	LODU_SCOPE

	displayName = "$STR_RHS_6B3_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3";
	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa"
	};

	descriptionShort = "Armor Level 3";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3";
		containerClass = "Supply80";
		mass = 60;
		
		class HitpointsProtectionInfo {
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_4;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_4;
				PassThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_4;
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_4;
				simulation = SIM_GOST_4;
			};
		};
	};
};
class rhs_6b3_AK: rhs_6b3
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3_AK)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B3_RIFLE1_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK";
		containerClass = "Supply120";
		mass = 65;
	};
};
class rhs_6b3_AK_2: rhs_6b3_AK
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3_AK_2)
	displayName = "$STR_RHS_6B3_RIFLE2_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK1";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK1";
	};
};
class rhs_6b3_AK_3: rhs_6b3_AK
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3_AK_3)
	displayName = "$STR_RHS_6B3_RIFLE3_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK2";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK2";
	};
};
class rhs_6b3_holster: rhs_6b3
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3_holster)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B3_HOLSTER_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_holster";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_holster";
		containerClass = "Supply90";
		mass = 55;
	};
};
class rhs_6b3_off: rhs_6b3
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3_off)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B3_OFFICER_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_off";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_off";
		containerClass = "Supply100";
		mass = 55;
	};
};
class rhs_6b3_R148: rhs_6b3_AK
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3_R148)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B3_R148_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_R_148";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\r148_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_R_148";
		containerClass = "Supply90";
	};
};
class rhs_6b3_RPK: rhs_6b3
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3_RPK)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B3_RPK_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_RPK";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_RPK";
		containerClass = "Supply140";
		mass = 70;
	};
};
class rhs_6b3_VOG: rhs_6b3
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3_VOG)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B3_VOG1_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_VOG";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\vog_pouchs_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_VOG";
		containerClass = "Supply140";
		mass = 70;
	};
};
class rhs_6b3_VOG_2: rhs_6b3_VOG
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b3_VOG_2)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6B3_VOG2_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_VOG_neck";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_VOG_neck";
	};
};

//6B5 Vests

class rhs_6b5 : rhs_6b23
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5)
	displayName = "$STR_RHS_6B5_OLIVE_NAME";

	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_rifleman";

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_co.paa"
	};

	descriptionShort = "Armor Level 5";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_rifleman";
		containerClass = "Supply80";
		mass = 132; // 6kg
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_1;
				PassThrough = PASS_GOST_1;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_5;
				PassThrough = PASS_GOST_5;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_5;
				PassThrough = PASS_GOST_5;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_5;
				passThrough = PASS_GOST_5;
			};
			class Body {
				hitpointName = "HitBody";
				armor = ARMOR_GOST_1;
				passThrough = PASS_GOST_1;
			};
		};
	};
};

class rhs_6b5_officer : rhs_6b5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_officer)
	displayName = "$STR_RHS_6B5_OFFICER_OLIVE_NAME";
	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_officer";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_officer";
		containerClass = "Supply120"; //+40 for 6B23 mapcase, bino case, and holster in AFRF
		mass = 142; //+10
	};
};

class rhs_6b5_medic : rhs_6b5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_medic)
	displayName = "$STR_RHS_6B5_MEDIC_OLIVE_NAME";
	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_medic";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_medic";
		containerClass = "Supply140"; //We'll go with this because the 110 mass increase in AFRF seems waaayyy to high...
		mass = 152; // 132 (6B5) + 20 (Medic bag)
	};
};

class rhs_6b5_sniper : rhs_6b5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_sniper)
	displayName = "$STR_RHS_6B5_SNIPER_OLIVE_NAME";
	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_sniper";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_sniper";
		containerClass = "Supply90"; //6sh18 holds 4 SVD mags at ~5 arma mass each, need 20 mass increase
		mass = 137; // 132 (6B5) + 5 (6Sh18)
	};
};

class rhs_6b5_rifleman : rhs_6b5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_rifleman)
	displayName = "$STR_RHS_6B5_RIFLEMAN_OLIVE_NAME";
	model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_6sh46_rifleman";
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_6sh46_rifleman";
		containerClass = "Supply130"; //6sh46 holds 5 AK-74 mags at ~9 arma mass each, need 50 mass increase
		mass = 147; // 132 (6B5) + 15 (6Sh46)
	};
};

//khaki

class rhs_6b5_khaki : rhs_6b5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_khaki)
	Scope = 2;
	displayName = "$STR_RHS_6B5_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"
	};
};

class rhs_6b5_officer_khaki : rhs_6b5_officer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_officer_khaki)
	displayName = "$STR_RHS_6B5_OFFICER_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"
	};
};

class rhs_6b5_medic_khaki : rhs_6b5_medic
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_medic_khaki)
	displayName = "$STR_RHS_6B5_MEDIC_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"
	};
};

class rhs_6b5_sniper_khaki : rhs_6b5_sniper
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_sniper_khaki)
	displayName = "$STR_RHS_6B5_SNIPER_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"
	};
};
class rhs_6b5_rifleman_khaki : rhs_6b5_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_rifleman_khaki)
	displayName = "$STR_RHS_6B5_RIFLEMAN_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"
	};
};

//VSR

class rhs_6b5_vsr : rhs_6b5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_vsr)
	Scope = 2;
	displayName = "$STR_RHS_6B5_VSR_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"
	};
};

class rhs_6b5_officer_vsr : rhs_6b5_officer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_officer_vsr)
	displayName = "$STR_RHS_6B5_OFFICER_VSR_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"
	};
};

class rhs_6b5_medic_vsr : rhs_6b5_medic
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_medic_vsr)
	displayName = "$STR_RHS_6B5_MEDIC_VSR_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"
	};
};

class rhs_6b5_sniper_vsr : rhs_6b5_sniper
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_sniper_vsr)
	displayName = "$STR_RHS_6B5_SNIPER_VSR_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"
	};
};

class rhs_6b5_rifleman_vsr : rhs_6b5_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_rifleman_vsr)
	displayName = "$STR_RHS_6B5_RIFLEMAN_VSR_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"
	};
};

//ttsko

class rhs_6b5_ttsko : rhs_6b5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_ttsko)
	Scope = 2;
	displayName = "$STR_RHS_6B5_TTsKO_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"
	};
};

class rhs_6b5_officer_ttsko : rhs_6b5_officer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_officer_ttsko)
	displayName = "$STR_RHS_6B5_OFFICER_TTsKO_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"
	};
};

class rhs_6b5_medic_ttsko : rhs_6b5_medic
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_medic_ttsko)
	displayName = "$STR_RHS_6B5_MEDIC_TTsKO_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"
	};
};

class rhs_6b5_sniper_ttsko : rhs_6b5_sniper
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_sniper_ttsko)
	displayName = "$STR_RHS_6B5_SNIPER_TTsKO_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"
	};
};

class rhs_6b5_rifleman_ttsko : rhs_6b5_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_rifleman_ttsko)
	displayName = "$STR_RHS_6B5_RIFLEMAN_TTsKO_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"
	};
};

//Border Guard

class rhs_6b5_spetsodezhda : rhs_6b5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_spetsodezhda)
	Scope = 2;
	displayName = "$STR_RHS_6B5_BG_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"
	};
};

class rhs_6b5_officer_spetsodezhda : rhs_6b5_officer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_officer_spetsodezhda)
	displayName = "$STR_RHS_6B5_OFFICER_BG_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"
	};
};

class rhs_6b5_medic_spetsodezhda : rhs_6b5_medic
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_medic_spetsodezhda)
	displayName = "$STR_RHS_6B5_MEDIC_BG_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"
	};
};

class rhs_6b5_sniper_spetsodezhda : rhs_6b5_sniper
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_sniper_spetsodezhda)
	displayName = "$STR_RHS_6B5_SNIPER_BG_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"
	};
};

class rhs_6b5_rifleman_spetsodezhda : rhs_6b5_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b5_rifleman_spetsodezhda)
	displayName = "$STR_RHS_6B5_RIFLEMAN_BG_NAME";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"
	};
};

//Chicom chest rig
class rhs_chicom: Vest_Camo_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_chicom)
	dlc = "RHS_AFRF";

	//scope = 2;
	LODU_SCOPE

	displayName = "$STR_RHS_CHICOM_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_chicom";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\chicom_co.paa"
	};

	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_chicom";
		containerClass = "Supply90"; //Should have space for 6 mags, 4 grenades
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 0;
				passThrough = 0.8;
			};
		};
	};
};

class rhs_chicom_khk: rhs_chicom
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_chicom)
	dlc = "RHS_AFRF";

	LODU_SCOPE

	displayName = "$STR_RHS_CHICOM_KHK_NAME";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\chicom_tan_co.paa"
	};
};

//Officer gear
class rhs_gear_OFF: rhs_chicom //TODO: Set better protection levels
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_gear_OFF)
	dlc = "RHS_AFRF";

	//scope = 2;
	LODU_SCOPE

	displayName = "Officer Gear";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_gear_OFF";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"
	};

	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_gear_OFF";
		containerClass = "Supply30";
		mass = 10;
	};
};

//Lichifka vest
class rhs_lifchik: rhs_chicom
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_lifchik)
	dlc = "RHS_AFRF";

	//scope = 2;
	LODU_SCOPE

	displayName = "$STR_RHS_LIFCHIK1_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka";

	hiddenSelections[] = {"Camo","Camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\lichifka_co.paa"
	};

	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka";
		containerClass = "Supply100"; //Should have space for 6 mags, 4 grenades, at least 2 flare launchers
		mass = 15;
	};
};
class rhs_lifchik_light: rhs_lifchik
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_lifchik_light)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_LIFCHIK2_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_light";
	
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_light";
	};
};
class rhs_lifchik_NCO: rhs_lifchik
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_lifchik_NCO)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_LIFCHIK_OFF_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_NCO";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\lichifka_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_NCO";
		containerClass = "Supply100"; //Should have space for 6 mags, 4 grenades, at least 2 flare launchers, binoculars, and pistol
	};
};
class rhs_lifchik_vog: rhs_lifchik
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_lifchik_vog)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_LIFCHIK_VOG_NAME";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_vog";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\lichifka_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\vog_pouchs_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_vog";
		containerClass = "Supply150"; //Should have space for 6 mags, 4 grenades, at least 2 flare launchers, 10 VOG grenades
	};
};

//Belt pouches
class rhs_belt_sks: rhs_chicom
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_belt_sks)
	dlc = "RHS_AFRF";

	//scope = 2;
	LODU_SCOPE

	displayName = "Belt Equiment (SKS)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_SKS_pouchs";

	hiddenSelections[] = {"Camo","Camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"
	};

	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_SKS_pouchs";
		containerClass = "Supply40";
		mass = 10;
	};
};
class rhs_belt_svd: rhs_belt_sks //Potential Duplicate!!!
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_belt_svd)
	dlc = "RHS_AFRF";

	displayName = "Belt Equipment (SVD)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_SVD_pouchs";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_SVD_pouchs";
	};
};
class rhs_belt_AK: rhs_belt_sks
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_belt_AK)
	dlc = "RHS_AFRF";

	displayName = "Belt Equipment (Rifleman)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK";
		containerClass = "Supply60";
	};
};
class rhs_belt_AK_back: rhs_belt_sks
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_belt_AK_back)
	dlc = "RHS_AFRF";

	displayName = "Belt Equipment (Rifleman/Alt)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_back";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_back";
		containerClass = "Supply60";
	};
};
class rhs_belt_AK_GL: rhs_belt_sks
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_belt_AK_GL)
	dlc = "RHS_AFRF";

	displayName = "Belt Equipment (Grenadier)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_GL";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\vog_pouchs_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_GL";
		containerClass = "Supply80";
	};
};
class rhs_belt_AK4: rhs_belt_sks //Duplicate of RHS 6Sh46
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_belt_AK4)
	dlc = "RHS_AFRF";

	displayName = "Belt Equipment (6Sh46)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4";
	};
};
class rhs_belt_AK4_back: rhs_belt_sks //Variant/Duplicate of RHS 6Sh46
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_belt_AK4_back)
	dlc = "RHS_AFRF";

	displayName = "Belt Equipment (6Sh46/Alt)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_back";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_back";
	};
};
class rhs_belt_holster: rhs_belt_sks //Duplicate of RHS pistol holster
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_belt_holster)
	dlc = "RHS_AFRF";

	displayName = "Belt Equipment (Holster)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_holster";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_holster";
		containerClass = "Supply10";
		mass = 5;
	};
};
class rhs_belt_RPK: rhs_belt_sks //Variant/Duplicate of RHS 6Sh46
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_belt_RPK)
	dlc = "RHS_AFRF";

	displayName = "Belt Equipment (Auto Rifleman)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_RPK";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_RPK";
		containerClass = "Supply60";
		mass = 15;
	};
};

//Y-strap suspended gear
class rhs_suspender_SKS: rhs_belt_sks 
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_suspender_SKS)
	dlc = "RHS_AFRF";

	displayName = "Suspender Equipment (SKS)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_suspenders_SKS_pouchs";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"	
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_suspenders_SKS_pouchs";
		containerClass = "Supply40";
		mass = 10;
	};
};
class rhs_suspender_AK: rhs_belt_sks
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_suspender_AK)
	dlc = "RHS_AFRF";

	displayName = "Suspender Equipment (Rifleman)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_suspenders";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_suspenders";
		containerClass = "Supply60";
		mass = 10;
	};
};
class rhs_suspender_AK4: rhs_belt_sks
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_suspender_AK4)
	dlc = "RHS_AFRF";

	displayName = "Suspender Equipment (Rifleman/Light)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_suspenders";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_suspenders";
		containerClass = "Supply40";
		mass = 10;
	};
};
class rhs_suspender_AK8_chestrig: rhs_belt_sks //Variant/Duplicate of RHS 6Sh46
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_suspender_AK8_chestrig)
	dlc = "RHS_AFRF";

	displayName = "Suspender Equipment (AK Chestrig)";

	model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK8_suspenders";
	
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa",
		"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK8_suspenders";
		containerClass = "Supply80";
		mass = 20;
	};
};

///---Lodu Ratnik Gear---///
//6B45
class rhs_6b45: rhs_6b43
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b45)
	dlc = "RHS_AFRF";
	
	LODU_SCOPE
	
	displayName = "$STR_RHS_6B45_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_desert_6b45";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa"
	};

	descriptionShort = "Armor Level 6";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_desert_6b45";
		containerClass = "Supply20";
		mass = 80;
		class HitpointsProtectionInfo {
			class Neck {
				HitpointName = "HitNeck";
				armor = ARMOR_GOST_3;
				PassThrough = PASS_GOST_3;
				simulation = SIM_GOST_3;
			};
			class Chest {
				HitpointName = "HitChest";
				armor = ARMOR_GOST_6;
				PassThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_GOST_6;
				PassThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = ARMOR_GOST_6;
				passThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough = PASS_GOST_6;
				simulation = SIM_GOST_6;
			};
		};
	};
};
class rhs_6b45_desert: rhs_6b45
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b45_desert)
	dlc = "RHS_AFRF";
	
	displayName = "$STR_RHS_6B45_DES_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_desert_6b45";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_desert_co.paa"
	};
};
class rhs_6b45_grn: rhs_6b45
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b45_grn)
	dlc = "RHS_AFRF";
	
	displayName = "$STR_RHS_6B45_VOG_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_VOG";

	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_VOG";
		containerClass = "Supply160";
		mass = 95;
	};
};
class rhs_6b45_holster: rhs_6b45
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b45_holster)
	dlc = "RHS_AFRF";
	
	displayName = "$STR_RHS_6B45_HOLSTER_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_holster";

	hiddenSelections[] = {"Camo","Camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_holster";
		containerClass = "Supply20";
		mass = 85;
	};
};
class rhs_6b45_light: rhs_6b45
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b45_light)
	dlc = "RHS_AFRF";
	
	displayName = "$STR_RHS_6B45_LIGHT_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_low";

	hiddenSelections[] = {"Camo","Camo1"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_low";
		containerClass = "Supply60";
		mass = 85;
	};
};
class rhs_6b45_mg: rhs_6b45
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b45_mg)
	dlc = "RHS_AFRF";
	
	displayName = "$STR_RHS_6B45_MG_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_PK";

	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_PK";
		containerClass = "Supply160";
		mass = 95;
	};
};
class rhs_6b45_off: rhs_6b45
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b45_off)
	dlc = "RHS_AFRF";
	
	displayName = "$STR_RHS_6B45_OFF_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_off";

	hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\azart_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_off";
		containerClass = "Supply120";
		mass = 90;
	};
};
class rhs_6b45_rifleman: rhs_6b45
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b45_rifleman)
	dlc = "RHS_AFRF";
	
	displayName = "$STR_RHS_6B45_RIFLE1_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_var";

	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_var";
		containerClass = "Supply120";
		mass = 90;
	};
};
class rhs_6b45_rifleman_2: rhs_6b45
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b45_rifleman_2)
	dlc = "RHS_AFRF";
	
	displayName = "$STR_RHS_6B45_RIFLE2_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_shovel";

	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_shovel";
		containerClass = "Supply120";
		mass = 90;
	};
};

//6Sh117
class rhs_6sh117_rifleman: Vest_Camo_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh117_rifleman)
	dlc = "RHS_AFRF";
	
	LODU_SCOPE

	displayName = "$STR_RHS_6SH117_RIFLE_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01";

	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6sh117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"
	};

	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01";
		containerClass = "Supply120";
		mass = 15;
		class HitpointsProtectionInfo
		{
			class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = ARMOR_EQUIP;
				passThrough = PASS_EQUIP;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 0;
				passThrough = 0.8;
			};
		};
	};
};
class rhs_6sh117_nco: rhs_6sh117_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh117_nco)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6SH117_NCO_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_NCO";

	hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6sh117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\radio_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_NCO";
		containerClass = "Supply140";
		mass = 20;
	};
};
class rhs_6sh117_nco_azart: rhs_6sh117_rifleman
{
	AUTHOR_MACRO
	//INVENTORY_PICTURE(rhs_6sh117_nco_azart)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6SH117_NCO_AZART_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_NCO_azart";

	hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6sh117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\azart_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_NCO_azart";
		containerClass = "Supply140";
		mass = 20;
	};
};
class rhs_6sh117_mg: rhs_6sh117_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh117_mg)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6SH117_MG_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_PK";

	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6sh117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_PK";
		containerClass = "Supply180";
		mass = 20;
	};
};
class rhs_6sh117_ar: rhs_6sh117_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh117_ar)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6Sh117_RPK_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_RPK";

	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6sh117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_RPK";
		containerClass = "Supply130";
		mass = 18;
	};
};
class rhs_6sh117_svd: rhs_6sh117_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh117_svd)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6Sh117_SVD_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_SVD";

	hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6sh117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\radio_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_SVD";
		containerClass = "Supply120";
		mass = 15;
	};
};
class rhs_6sh117_val: rhs_6sh117_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh117_svd)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6SH117_VAL_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_VAL";

	hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6sh117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\radio_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_VAL";
		containerClass = "Supply120";
		mass = 15;
	};
};
class rhs_6sh117_grn: rhs_6sh117_rifleman
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6sh117_svd)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_6SH117_VOG_NAME";

	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_VOG";

	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6sh117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"
	};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_VOG";
		containerClass = "Supply140";
		mass = 20;
	};
};