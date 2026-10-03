#define MVD_EMR_Macro 		vehicleClass = "rhs_vehclass_infantry_emr";\
							editorSubcategory = "rhs_EdSubcat_infantry_emr";\
							uniformClass = "rhs_uniform_msv_emr";\
							identityTypes[]=\
							{\
								"LanguageRUS_F",\
								"Head_Russian",\
								"Head_Asian"\
							};\
							AUTHOR_MACRO

#define MVD_izlom_Macro 	vehicleClass = "rhs_vehclass_infantry_osn";\
							editorSubcategory = "rhs_EdSubcat_infantry_osn";\
							uniformClass = "rhs_uniform_mvd_izlom";\
							identityTypes[]=\
							{\
								"LanguageRUS_F",\
								"Head_Russian",\
								"Head_Asian"\
							};\
							AUTHOR_MACRO


//- MVD OSN Spetsnaz Variants

class rhs_mvd_izlom_rifleman : rhs_infantry_vdv_base   ////Texture donated by tema
{
	EdPrev(rhs_mvd_izlom_rifleman)
	MVD_izlom_Macro
	displayName= "$STR_RHS_INF_RIFLEMAN_AK103";

	DISABLE_HEADGEAR_MACRO
	scope = 2;
	dlc = "RHS_AFRF";

	faction = "rhs_faction_vv";
	model = "\rhsafrf\addons\rhs_infantry2\rhs_emr_base.p3d";
	hiddenSelections[] = {"camo1","camo2","camob","insignia"};
	hiddenSelectionsTextures[] =
	{
	"rhsafrf\addons\rhs_infantry2\data\T_izlom_co.paa",
	"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
	"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
	};
	modelSides[] = {0,2,3};

	class Wounds
	{
	tex[] = {};
	mat[] =
		{
		"rhsafrf\addons\rhs_infantry2\data\rhs_emr.rvmat",
		"rhsafrf\addons\rhs_infantry2\data\rhs_emr_w1.rvmat",
		"rhsafrf\addons\rhs_infantry2\data\rhs_emr_w2.rvmat",
		A3_Injury
		};
	};

	Items[] = {"FirstAidKit","rhs_1PN138"};
	RespawnItems[] = {"FirstAidKit","rhs_1PN138"};

	linkedItems[] =
	{
		"rhs_6b23_6sh92",
		"rhs_6b27m_green_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b23_6sh92",
		"rhs_6b27m_green_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};

	weapons[] =
	{
		"rhs_weap_ak103_dtk",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_ak103_dtk",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white"
	};
};

class rhs_mvd_izlom_rifleman_asval : rhs_mvd_izlom_rifleman
{
	EdPrev(rhs_mvd_izlom_rifleman_asval)
	displayName= "$STR_RHS_INF_RIFLEMAN_ASVAL";

	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	weapons[] =
	{
		"rhs_weap_45th_asval",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_45th_asval",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white"
	};
};

class rhs_mvd_izlom_rifleman_LAT : rhs_mvd_izlom_rifleman
	{
		EdPrev(rhs_mvd_izlom_rifleman_LAT)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_LAT";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";

		cost = 180000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";

		linkedItems[] = {"rhs_6b27m_green","rhs_6b23_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6b23_6sh92_vog",Standard_Equipment};

		weapons[] = {"rhs_weap_ak103_dtk","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak103_dtk","rhs_weap_rpg26","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
		};

		secondaryAmmoCoef = 0.5;


	};

class rhs_mvd_izlom_grenadier_rpg : rhs_mvd_izlom_rifleman
	{
		EdPrev(rhs_mvd_izlom_grenadier_rpg)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_GRENADIER_RPG";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";

		cost = 160000;
		threat[] = {1,0.5,0.2};
		icon = "iconManAT";

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_ak103_dtk","rhs_weap_pya","Throw","Put","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"rhs_weap_ak103_dtk","rhs_weap_pya","Throw","Put","rhs_weap_rpg7_pgo"};

		magazines[] =
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_rpg7_PG7VL_mag"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_rpg7_PG7VL_mag"
		};

		backpack="rhs_rpg";
		secondaryAmmoCoef = 0.5;

	};

class rhs_mvd_izlom_arifleman : rhs_mvd_izlom_rifleman
	{
		EdPrev(rhs_mvd_izlom_arifleman)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_ARIFLEMAN_2";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";

		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";

		weapons[] = {"rhs_weap_pkp","rhs_weap_pya","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkp","rhs_weap_pya","Throw","Put"};

		magazines[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn"
		};
		respawnMagazines[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn"
		};

		backpack="rhs_sidorMG";

		secondaryAmmoCoef = 0.5;
	};

	class rhs_mvd_izlom_arifleman_rpk : rhs_mvd_izlom_rifleman
	{
		EdPrev(rhs_mvd_izlom_arifleman_rpk)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_ARIFLEMAN";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";

		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";

		weapons[] = {"rhs_weap_rpk74m",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_rpk74m",DefaultManWeapons};

		magazines[] =
		{
			mag_8(rhs_45Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_9x19_17),
			mag_2(rhs_mag_rgn)
		};
		respawnMagazines[] =
		{
			mag_8(rhs_45Rnd_545x39_7N10_AK),
			mag_2(rhs_mag_9x19_17),
			mag_2(rhs_mag_rgn)
		};

		secondaryAmmoCoef = 0.5;
	};

class rhs_mvd_izlom_machinegunner : rhs_mvd_izlom_arifleman
	{
		EdPrev(rhs_mvd_izlom_machinegunner)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_MACHINEGUNNER";

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23",Standard_Equipment};

		weapons[] = {"rhs_weap_pkm","rhs_weap_pya","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","rhs_weap_pya","Throw","Put"};
	};

	class rhs_mvd_izlom_marksman : rhs_mvd_izlom_rifleman
	{
		EdPrev(rhs_mvd_izlom_marksman)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_MARKSMAN";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";

		cost = 150000;
		sensitivity = 3.3;

		linkedItems[] = {"rhs_6b27m_green","rhs_6b23_sniper",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6b23_sniper",Standard_Equipment};

		weapons[] = {"rhs_weap_svdp_pso1","rhs_weap_pya","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svdp_pso1","rhs_weap_pya","Throw","Put"};

		magazines[] =
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		respawnMagazines[] =
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};

	};

	class rhs_mvd_izlom_marksman_vss : rhs_mvd_izlom_rifleman_asval
	{
		EdPrev(rhs_mvd_izlom_marksman_vss)
		displayName= "$STR_RHS_INF_MARKSMAN_VSS";

		AUTHOR_MACRO
		dlc = "RHS_AFRF";

		weapons[] =
		{
			"rhs_weap_45th_vss",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};

		respawnWeapons[] =
		{
			"rhs_weap_45th_vss",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
	};

	//- Leadership

	class rhs_mvd_izlom_efreitor : rhs_mvd_izlom_rifleman_LAT
	{
		EdPrev(rhs_mvd_izlom_efreitor)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_EFREITOR";

		cost = 350000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92_radio",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m","rhs_6b23_6sh92_radio",Standard_Equipment};

	};

	class rhs_mvd_izlom_sergeant : rhs_mvd_izlom_rifleman
	{
		EdPrev(rhs_mvd_izlom_sergeant)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_SERGEANT";

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_6sh92_headset_mapcase",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_6sh92_headset_mapcase",Standard_Equipment};

		weapons[] = {"rhs_weap_ak103_dtk","rhs_weap_pya","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak103_dtk","rhs_weap_pya","Binocular","Throw","Put"};
	};