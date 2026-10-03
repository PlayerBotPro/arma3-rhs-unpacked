//variants

	#define VDV_Flora_Macro 	vehicleClass = "rhs_vehclass_infantry_flora";\
							editorSubcategory = "rhs_EdSubcat_infantry_flora";\
							uniformClass = "rhs_uniform_vdv_flora";\
							identityTypes[]=\
							{\
								"LanguageRUS_F",\
								"Head_Russian",\
								"Head_Asian"\
							};\
							Items[] = {'FirstAidKit'};\
							RespawnItems[] = {'FirstAidKit'};\
							AUTHOR_MACRO

	#define VDV_Gorka_R_G_Macro 	vehicleClass = "rhs_vehclass_infantry_flora";\
							editorSubcategory = "rhs_EdSubcat_infantry_flora";\
							uniformClass = "rhs_uniform_gorka_r_g";\
							identityTypes[]=\
							{\
								"LanguageRUS_F",\
								"Head_Russian",\
								"Head_Asian",\
								"rhs_scarf"\
							};\
							AUTHOR_MACRO
	#define VDV_Gorka_R_Y_Macro 	vehicleClass = "rhs_vehclass_infantry_flora";\
							editorSubcategory = "rhs_EdSubcat_infantry_flora";\
							uniformClass = "rhs_uniform_gorka_r_y";\
							identityTypes[]=\
							{\
								"LanguageRUS_F",\
								"Head_Russian",\
								"Head_Asian",\
								"rhs_scarf"\
							};\
							AUTHOR_MACRO

	class rhs_vdv_gorka_r_y_rifleman : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_gorka_r_y_rifleman)
		scope = 1;
		scopeCurator = 0;
		VDV_Gorka_R_Y_Macro
		hiddenSelections[] = {"camo1"};

		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_base.p3d";

		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\data\gorkaR_y_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry2\data\gorkaR.rvmat",
				"rhsafrf\addons\rhs_infantry2\data\gorkaR_w1.rvmat",
				"rhsafrf\addons\rhs_infantry2\data\gorkaR_w2.rvmat"
			};
		};

		linkedItems[] = {"rhs_6b28_flora","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_flora","rhs_6b23_rifleman",Standard_Equipment};

	};

	class rhs_vdv_gorka_r_g_rifleman : rhs_vdv_gorka_r_y_rifleman
	{
		EdPrev(rhs_vdv_gorka_r_g_rifleman)
		scope = 1;
		scopeCurator=0;
		VDV_Gorka_R_G_Macro

		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\data\gorkaR_g_co.paa"
		};
	};

	class rhs_vdv_gorka_r_y_gloves_rifleman : rhs_vdv_gorka_r_y_rifleman
	{
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\data\gorkaR_y_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
		uniformClass = "rhs_uniform_gorka_r_y_gloves";
	};

	class rhs_vdv_gorka_r_g_gloves_rifleman : rhs_vdv_gorka_r_g_rifleman
	{
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\data\gorkaR_g_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
		uniformClass = "rhs_uniform_gorka_r_g_gloves";
	};

	class rhs_vdv_gorka_1_a_rifleman : rhs_vdv_gorka_r_y_rifleman
	{
		AUTHOR_MACRO
		//EdPrev(rhs_vdv_gorka_1_a_rifleman)
		scope = 1;
		scopeCurator = 0;
		uniformClass = "rhs_uniform_gorka_1_a";
////////////////////////
//Make Edits from here//
////////////////////////
		hiddenSelections[] = {"camo1"};
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_1_base.p3d";

		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\data\gorka_1_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry2\data\gorka_1.rvmat",
				"rhsafrf\addons\rhs_infantry2\data\gorkaR_w1.rvmat",
				"rhsafrf\addons\rhs_infantry2\data\gorkaR_w2.rvmat"
			};
		};
	};
	class rhs_vdv_gorka_1_b_rifleman : rhs_vdv_gorka_1_a_rifleman
	{
		AUTHOR_MACRO
		//EdPrev(rhs_vdv_gorka_1_b_rifleman)
		scope = 1;
		scopeCurator=0;
		uniformClass = "rhs_uniform_gorka_1_b";
////////////////////////
//Make Edits from here//
////////////////////////
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\data\gorka_1_berezka_co.paa"
		};
	};

	class rhs_vdv_flora_rifleman : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_flora_rifleman)
		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		hiddenSelections[] = {"camo1","camo2","camob"};

		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\flora_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry\data\flora.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat",

				"rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat",

				A3_Injury
			};
		};

		linkedItems[] = {"rhs_6b28_flora","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_flora","rhs_6b23_rifleman",Standard_Equipment};

	};
	class rhs_vdv_flora_rifleman_lite : rhs_vdv_flora_rifleman
	{
		EdPrev(rhs_vdv_flora_rifleman_lite)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_RIFLEMAN_L";

		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_vdv1","rhs_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6sh92",Standard_Equipment};
	};

	class rhs_vdv_flora_efreitor : rhs_vdv_efreitor
	{
		EdPrev(rhs_vdv_flora_efreitor)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_flora","rhs_6b23_6sh92_radio",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_flora","rhs_6b23_6sh92_radio",Standard_Equipment};
	};

	class rhs_vdv_flora_grenadier : rhs_vdv_grenadier
	{
		EdPrev(rhs_vdv_flora_grenadier)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_6sh92_vog",Standard_Equipment};
	};

	class rhs_vdv_flora_grenadier_rpg : rhs_vdv_grenadier_rpg
	{
		EdPrev(rhs_vdv_flora_grenadier_rpg)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_rifleman",Standard_Equipment};
	};

	class rhs_vdv_flora_arifleman_rpk : rhs_vdv_arifleman_rpk
	{
		EdPrev(rhs_vdv_flora_arifleman_rpk)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_flora_ess","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_flora_ess","rhs_6b23_rifleman",Standard_Equipment};
	};

	class rhs_vdv_flora_machinegunner :  rhs_vdv_machinegunner
	{
		EdPrev(rhs_vdv_flora_machinegunner)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green_ess","rhs_6b23",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green_ess","rhs_6b23",Standard_Equipment};
	};

	class rhs_vdv_flora_machinegunner_assistant : rhs_vdv_machinegunner_assistant
	{
		EdPrev(rhs_vdv_flora_machinegunner_assistant)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_flora","rhs_6b23_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_flora","rhs_6b23_6sh92",Standard_Equipment};
	};

	class rhs_vdv_flora_at : rhs_vdv_at
	{
		EdPrev(rhs_vdv_flora_at)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_rifleman",Standard_Equipment};
	};
	class rhs_vdv_flora_aa : rhs_vdv_aa
	{
		EdPrev(rhs_vdv_flora_aa)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_flora_ess","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_flora_ess","rhs_6b23_rifleman",Standard_Equipment};
	};

	class rhs_vdv_flora_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
	{
		EdPrev(rhs_vdv_flora_strelok_rpg_assist)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_flora","rhs_6b23_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_flora","rhs_6b23_6sh92",Standard_Equipment};
	};

	class rhs_vdv_flora_marksman : rhs_vdv_marksman
	{
		EdPrev(rhs_vdv_flora_marksman)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_SNIPER_HELMET_POOL)

		linkedItems[] = {"rhs_beret_vdv1","rhs_6b23_sniper",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6b23_sniper",Standard_Equipment};
	};

	class rhs_vdv_flora_officer_armored : rhs_vdv_officer_armored
	{
		EdPrev(rhs_vdv_flora_officer_armored)
		VDV_Flora_Macro

		linkedItems[] = {"rhs_beret_vdv1","rhs_6b23_crewofficer",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6b23_crewofficer",Standard_Equipment};
	};

	class rhs_vdv_flora_officer : rhs_vdv_officer
	{
		EdPrev(rhs_vdv_flora_officer)
		VDV_Flora_Macro

		linkedItems[] = {"rhs_beret_vdv1","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_vest_commander",Standard_Equipment};
	};

	class rhs_vdv_flora_sergeant : rhs_vdv_sergeant
	{
		EdPrev(rhs_vdv_flora_sergeant)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green","rhs_6b23_6sh92_headset_mapcase",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_6sh92_headset_mapcase",Standard_Equipment};
	};

	class rhs_vdv_flora_junior_sergeant : rhs_vdv_junior_sergeant
	{
		EdPrev(rhs_vdv_flora_junior_sergeant)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_flora","rhs_6b23_6sh92_vog_headset",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_flora","rhs_6b23_6sh92_vog_headset",Standard_Equipment};
	};

	class rhs_vdv_flora_engineer : rhs_vdv_engineer
	{
		EdPrev(rhs_vdv_flora_engineer)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_rifleman",Standard_Equipment};
	};

	class rhs_vdv_flora_driver_armored : rhs_vdv_driver_armored
	{
		EdPrev(rhs_vdv_flora_driver_armored)
		VDV_Flora_Macro

		linkedItems[] = {"rhs_beret_vdv1","rhs_6b23",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6b23",Standard_Equipment};
	};

	class rhs_vdv_flora_driver : rhs_vdv_driver
	{
		EdPrev(rhs_vdv_flora_driver)
		VDV_Flora_Macro

		linkedItems[] = {"rhs_beret_vdv1","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_vest_pistol_holster",Standard_Equipment};
	};

	class rhs_vdv_flora_medic : rhs_vdv_medic
	{
		EdPrev(rhs_vdv_flora_medic)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_flora","rhs_6b23_medic",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_flora","rhs_6b23_medic",Standard_Equipment};
	};

	class rhs_vdv_flora_LAT : rhs_vdv_LAT
	{
		EdPrev(rhs_vdv_flora_LAT)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green","rhs_6b23_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_6sh92_vog",Standard_Equipment};
	};
	class rhs_vdv_flora_RShG2 : rhs_vdv_RShG2
	{
		EdPrev(rhs_vdv_flora_RShG2)
		VDV_Flora_Macro

		HEADGEAR_MACRO(VDV_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green","rhs_6b23_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_6sh92_vog",Standard_Equipment};
	};

	class rhs_vdv_flora_crew : rhs_vdv_crew
	{
		EdPrev(rhs_vdv_flora_crew)
		VDV_Flora_Macro

		HEADGEAR_MACRO(FLORA_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_tsh4","rhs_6sh46",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6sh46",Standard_Equipment};
	};

	class rhs_vdv_flora_crew_commander : rhs_vdv_crew_commander
	{
		EdPrev(rhs_vdv_flora_crew_commander)
		VDV_Flora_Macro

		HEADGEAR_MACRO(FLORA_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};

	};

	class rhs_vdv_flora_armoredcrew : rhs_vdv_armoredcrew
	{
		EdPrev(rhs_vdv_flora_armoredcrew)
		VDV_Flora_Macro

		HEADGEAR_MACRO(FLORA_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_tsh4_ess","rhs_6b23_crew",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b23_crew",Standard_Equipment};

	};

	class rhs_vdv_flora_combatcrew : rhs_vdv_combatcrew
	{
		EdPrev(rhs_vdv_flora_combatcrew)
		VDV_Flora_Macro

		HEADGEAR_MACRO(FLORA_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};

	};
