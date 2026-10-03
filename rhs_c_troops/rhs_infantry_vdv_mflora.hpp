//variants

	#define VDV_MFlora_Macro 	vehicleClass = "rhs_vehclass_infantry_mflora";\
							editorSubcategory = "rhs_EdSubcat_infantry_mflora";\
							uniformClass = "rhs_uniform_vdv_mflora";\
							identityTypes[]=\
							{\
								"LanguageRUS_F",\
								"Head_Russian",\
								"Head_Asian"\
							};\
							AUTHOR_MACRO

	class rhs_vdv_mflora_rifleman : rhs_vdv_rifleman
	{
		EdPrev(rhs_vdv_mflora_rifleman)
		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";
		VDV_MFlora_Macro
		hiddenSelections[] = {"camo1","camo2","camob"};

		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\mf_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa"
		};

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6sh92_digi",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6sh92_digi",Standard_Equipment};
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
	};
	class rhs_vdv_mflora_rifleman_lite : rhs_vdv_mflora_rifleman
	{
		EdPrev(rhs_vdv_mflora_rifleman_lite)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_RIFLEMAN_L";

		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_vdv1","rhs_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6sh92",Standard_Equipment};
	};

	class rhs_vdv_mflora_efreitor : rhs_vdv_efreitor
	{
		EdPrev(rhs_vdv_mflora_efreitor)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6sh92_digi_radio",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6sh92_digi_radio",Standard_Equipment};
	};

	class rhs_vdv_mflora_grenadier : rhs_vdv_grenadier
	{
		EdPrev(rhs_vdv_mflora_grenadier)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green","rhs_6sh92_digi_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6sh92_digi_vog",Standard_Equipment};
	};

	class rhs_vdv_mflora_grenadier_rpg : rhs_vdv_grenadier_rpg
	{
		EdPrev(rhs_vdv_mflora_grenadier_rpg)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green","rhs_6sh92_digi",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6sh92_digi",Standard_Equipment};
	};

	class rhs_vdv_mflora_arifleman_rpk : rhs_vdv_arifleman_rpk
	{
		EdPrev(rhs_vdv_mflora_arifleman_rpk)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6sh92_digi",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6sh92_digi",Standard_Equipment};
	};

	class rhs_vdv_mflora_machinegunner :  rhs_vdv_machinegunner
	{
		EdPrev(rhs_vdv_mflora_machinegunner)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green","rhs_6sh92_digi",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6sh92_digi",Standard_Equipment};
	};

	class rhs_vdv_mflora_machinegunner_assistant : rhs_vdv_machinegunner_assistant
	{
		EdPrev(rhs_vdv_mflora_machinegunner_assistant)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_ML","rhs_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_ML","rhs_6sh92",Standard_Equipment};
	};

	class rhs_vdv_mflora_at : rhs_vdv_at
	{
		EdPrev(rhs_vdv_mflora_at)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green","rhs_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6sh92",Standard_Equipment};
	};
	class rhs_vdv_mflora_aa : rhs_vdv_aa
	{
		EdPrev(rhs_vdv_mflora_aa)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green","rhs_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6sh92",Standard_Equipment};
	};

	class rhs_vdv_mflora_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
	{
		EdPrev(rhs_vdv_mflora_strelok_rpg_assist)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_ML","rhs_6b23_ML_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_ML","rhs_6b23_ML_6sh92",Standard_Equipment};
	};

	class rhs_vdv_mflora_marksman : rhs_vdv_marksman
	{
		EdPrev(rhs_vdv_mflora_marksman)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_SNIPER_HELMET_POOL)

		linkedItems[] = {"rhs_beret_vdv1","rhs_6b23_ML_sniper",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6b23_ML_sniper",Standard_Equipment};
	};

	class rhs_vdv_mflora_officer_armored : rhs_vdv_officer_armored
	{
		EdPrev(rhs_vdv_mflora_officer_armored)
		VDV_MFlora_Macro

		linkedItems[] = {"rhs_beret_vdv1","rhs_6b23_ML_crewofficer",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6b23_ML_crewofficer",Standard_Equipment};
	};

	class rhs_vdv_mflora_officer : rhs_vdv_officer
	{
		EdPrev(rhs_vdv_mflora_officer)
		VDV_MFlora_Macro

		linkedItems[] = {"rhs_beret_vdv1","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_vest_commander",Standard_Equipment};
	};

	class rhs_vdv_mflora_sergeant : rhs_vdv_sergeant
	{
		EdPrev(rhs_vdv_mflora_sergeant)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green","rhs_6b23_ML_6sh92_headset_mapcase",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6b23_ML_6sh92_headset_mapcase",Standard_Equipment};
	};

	class rhs_vdv_mflora_junior_sergeant : rhs_vdv_junior_sergeant
	{
		EdPrev(rhs_vdv_mflora_junior_sergeant)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6sh92_digi_vog_headset",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6sh92_digi_vog_headset",Standard_Equipment};
	};

	class rhs_vdv_mflora_engineer : rhs_vdv_engineer
	{
		EdPrev(rhs_vdv_mflora_engineer)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_ML_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_ML_rifleman",Standard_Equipment};
	};

	class rhs_vdv_mflora_driver_armored : rhs_vdv_driver_armored
	{
		EdPrev(rhs_vdv_mflora_driver_armored)
		VDV_MFlora_Macro

		linkedItems[] = {"rhs_beret_vdv1","rhs_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6sh92",Standard_Equipment};
	};

	class rhs_vdv_mflora_driver : rhs_vdv_driver
	{
		EdPrev(rhs_vdv_mflora_driver)
		VDV_MFlora_Macro

		linkedItems[] = {"rhs_beret_vdv1","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_vest_pistol_holster",Standard_Equipment};
	};

	class rhs_vdv_mflora_medic : rhs_vdv_medic
	{
		EdPrev(rhs_vdv_mflora_medic)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_ML_medic",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess","rhs_6b23_ML_medic",Standard_Equipment};
	};

	class rhs_vdv_mflora_LAT : rhs_vdv_LAT
	{
		EdPrev(rhs_vdv_mflora_LAT)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green","rhs_6sh92_digi_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6sh92_digi_vog",Standard_Equipment};
	};
	class rhs_vdv_mflora_RShG2 : rhs_vdv_RShG2
	{
		EdPrev(rhs_vdv_mflora_RShG2)
		VDV_MFlora_Macro

		HEADGEAR_MACRO(VDV_MFLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b27m_green","rhs_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_green","rhs_6sh92_vog",Standard_Equipment};
	};

	class rhs_vdv_mflora_crew : rhs_vdv_crew
	{
		EdPrev(rhs_vdv_mflora_crew)
		VDV_MFlora_Macro

		linkedItems[] = {"rhs_tsh4","rhs_6sh46",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6sh46",Standard_Equipment};
	};

	class rhs_vdv_mflora_crew_commander : rhs_vdv_crew_commander
	{
		EdPrev(rhs_vdv_mflora_crew_commander)
		VDV_MFlora_Macro

		linkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};

	};

	class rhs_vdv_mflora_armoredcrew : rhs_vdv_armoredcrew
	{
		EdPrev(rhs_vdv_mflora_armoredcrew)
		VDV_MFlora_Macro

		linkedItems[] = {"rhs_tsh4_ess","rhs_6b23_ML_crew",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b23_ML_crew",Standard_Equipment};

	};

	class rhs_vdv_mflora_combatcrew : rhs_vdv_combatcrew
	{
		EdPrev(rhs_vdv_mflora_combatcrew)
		VDV_MFlora_Macro

		linkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};

	};