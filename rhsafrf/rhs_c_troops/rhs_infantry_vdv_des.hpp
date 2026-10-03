	// DESERT MARPAT
		#define Mac_VDV_Inf_D vehicleClass = "rhs_vehclass_infantry_emr_des";\
		editorSubcategory = "rhs_EdSubcat_infantry_emr_des";\
		uniformClass = "rhs_uniform_vdv_emr_des";\
		dlc = "RHS_AFRF";\
		AUTHOR_MACRO


	class rhs_infantry_vdv_des_base : rhs_infantry_vdv_base
	{
		EdPrev(rhs_infantry_vdv_des_base)

		faction = "rhs_faction_vdv";
		vehicleClass = "rhs_vehclass_infantry_emr_des";
		editorSubcategory = "rhs_EdSubcat_infantry_emr_des";

		displayName= "$STR_RHS_INF_RIFLEMAN";

		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.2;

		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";

		hiddenSelections[] = {"camo1","camo2","camob"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\emr_desert_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
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

		modelSides[] = {0,3};

		uniformClass = "rhs_uniform_vdv_emr_des";

		linkedItems[] = {"rhs_6b27m_digi",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b27m_digi",Standard_Equipment};

	};

	//- Rifleman Variants

	class rhs_vdv_des_rifleman : rhs_infantry_vdv_des_base
	{
		EdPrev(rhs_vdv_des_rifleman)
		scope = 2;
		displayName = "$STR_RHS_INF_RIFLEMAN";
		dlc = "RHS_AFRF";
		AUTHOR_MACRO
		
		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_dtk","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
	};
	class rhs_vdv_des_rifleman_lite : rhs_vdv_des_rifleman
	{
		EdPrev(rhs_vdv_des_rifleman_lite)
		displayName= "$STR_RHS_INF_RIFLEMAN_L";

		AUTHOR_MACRO
		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_vdv1","rhs_6sh92_digi",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6sh92_digi",Standard_Equipment};
	};

	class rhs_emr_des_rifleman_patchless : rhs_vdv_des_rifleman
	{
		EdPrev(rhs_emr_des_rifleman_patchless)
		scope=1;
		scopeCurator = 0;

		displayName= "$STR_RHS_INF_RIFLEMAN_PATCHLESS";

		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\emr_desert_co.paa",
			"",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		selectionClan = "clan";
	};

	class rhs_vdv_des_LAT : rhs_vdv_LAT
	{
		EdPrev(rhs_vdv_des_LAT)
		displayName= "$STR_RHS_INF_LAT";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_6sh92",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_RShG2 : rhs_vdv_RShG2
	{
		EdPrev(rhs_vdv_des_RShG2)
		displayName= "$STR_RHS_INF_RShG2";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_6sh92",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	// Rifleman (GP-25)
	class rhs_vdv_des_grenadier : rhs_vdv_grenadier
	{
		EdPrev(rhs_vdv_des_grenadier)
		displayName= "$STR_RHS_INF_GRENADIER";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_ess_bala","rhs_6b23_digi_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_ess_bala","rhs_6b23_digi_6sh92_vog",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_rifleman_asval : rhs_vdv_rifleman_asval
	{
		EdPrev(rhs_vdv_des_rifleman_asval)
		displayName= "$STR_RHS_INF_RIFLEMAN_ASVAL";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	//- Support roles

	class rhs_vdv_des_arifleman : rhs_vdv_arifleman
	{
		EdPrev(rhs_vdv_des_arifleman)
		displayName= "$STR_RHS_INF_ARIFLEMAN_2";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_bala","rhs_6b23_digi",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_arifleman_rpk : rhs_vdv_arifleman_rpk
	{
		EdPrev(rhs_vdv_des_arifleman_rpk)
		displayName= "$STR_RHS_INF_ARIFLEMAN";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_machinegunner : rhs_vdv_machinegunner
	{
		EdPrev(rhs_vdv_des_machinegunner)
		displayName= "$STR_RHS_INF_MACHINEGUNNER";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_digi",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green_ess","rhs_6b23_digi",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_machinegunner_assistant : rhs_vdv_machinegunner_assistant
	{
		EdPrev(rhs_vdv_des_machinegunner_assistant)
		displayName= "$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_marksman : rhs_vdv_marksman
	{
		EdPrev(rhs_vdv_des_marksman)
		displayName= "$STR_RHS_INF_MARKSMAN";

		HEADGEAR_MACRO(VDV_EMR_SNIPER_HELMET_POOL)

		linkedItems[] = {"rhs_Booniehat_digi","rhs_6b23_digi_sniper",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_Booniehat_digi","rhs_6b23_digi_sniper",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_marksman_asval : rhs_vdv_marksman_asval
	{
		EdPrev(rhs_vdv_des_marksman_asval)
		displayName= "$STR_RHS_INF_MARKSMAN_ASVAL";

		HEADGEAR_MACRO(VDV_EMR_SNIPER_HELMET_POOL)

		linkedItems[] = {"rhs_Booniehat_digi","rhs_6b23_digi_sniper",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_Booniehat_digi","rhs_6b23_digi_sniper",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	//- Leadership

	class rhs_vdv_des_efreitor : rhs_vdv_efreitor
	{
		EdPrev(rhs_vdv_des_efreitor)
		displayName= "$STR_RHS_INF_EFREITOR";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_green_ess_bala","rhs_6b23_digi_6sh92_radio",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green_ess_bala","rhs_6b23_digi_6sh92_radio",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_sergeant :  rhs_vdv_sergeant
	{
		EdPrev(rhs_vdv_des_sergeant)
		displayName= "$STR_RHS_INF_SERGEANT";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_ess","rhs_6b23_digi_6sh92_headset_mapcase",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_ess","rhs_6b23_digi_6sh92_headset_mapcase",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	// ?
	class rhs_vdv_des_junior_sergeant : rhs_vdv_junior_sergeant
	{
		EdPrev(rhs_vdv_des_junior_sergeant)
		displayName= "$STR_RHS_INF_JUNIOR_SERGEANT";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28_ess","rhs_6b23_digi_6sh92_headset_mapcase",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_ess","rhs_6b23_digi_6sh92_headset_mapcase",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_officer_armored : rhs_vdv_officer_armored
	{
		EdPrev(rhs_vdv_des_officer_armored)
		displayName= "$STR_RHS_INF_OFFICER_ARMORED";

		Mac_VDV_Inf_D

		linkedItems[] = {"rhs_beret_vdv1","rhs_6b23_digi_crewofficer",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6b23_digi_crewofficer",Standard_Equipment};
	};

	class rhs_vdv_des_officer : rhs_vdv_officer
	{
		EdPrev(rhs_vdv_des_officer)
		displayName= "$STR_RHS_INF_OFFICER";

		Mac_VDV_Inf_D

		linkedItems[] = {"rhs_beret_vdv1","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_vest_commander",Standard_Equipment};
	};

	//- Specialities

	// VDV squads do not use anymore RPG7s due to its weight
	class rhs_vdv_des_grenadier_rpg : rhs_vdv_grenadier_rpg
	{
		EdPrev(rhs_vdv_des_grenadier_rpg)
		displayName= "$STR_RHS_INF_GRENADIER_RPG";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_rifleman",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_at : rhs_vdv_at
	{
		EdPrev(rhs_vdv_des_at)
		displayName= "AT Specialist";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

       	linkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green","rhs_6b23_digi_rifleman",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_aa : rhs_vdv_aa
	{
		EdPrev(rhs_vdv_des_aa)
		displayName= "$STR_RHS_INF_AA";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

       	linkedItems[] = {"rhs_6b28_ess","rhs_6b23_digi_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_ess","rhs_6b23_digi_rifleman",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
	{
		EdPrev(rhs_vdv_des_strelok_rpg_assist)
		displayName= "$STR_RHS_INF_GRENADIER_RPG_ASSISTANT";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_6sh92",Standard_Equipment};

       	Mac_VDV_Inf_D
	};

	class rhs_vdv_des_medic : rhs_vdv_medic
	{
		EdPrev(rhs_vdv_des_medic)
		displayName= "$STR_RHS_INF_MEDIC";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

		linkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28","rhs_6b23_digi_medic",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_engineer : rhs_vdv_engineer
	{
		EdPrev(rhs_vdv_des_engineer)
		displayName= "$STR_RHS_INF_ENGINEER";

		HEADGEAR_MACRO(VDV_EMR_HELMET_POOL)

       	linkedItems[] = {"rhs_6b28_green_ess_bala","rhs_6b23_digi_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b28_green_ess_bala","rhs_6b23_digi_rifleman",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	//- Crew

	// soft vehicles Driver - mechanic
	class rhs_vdv_des_driver_armored : rhs_vdv_driver_armored
	{
		EdPrev(rhs_vdv_des_driver_armored)
		displayName= "$STR_RHS_INF_DRIVER_ARMORED";

		Mac_VDV_Inf_D

		linkedItems[] = {"rhs_beret_vdv1","rhs_6b23_digi",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_6b23_digi",Standard_Equipment};

	};

	class rhs_vdv_des_driver : rhs_vdv_driver
	{
		EdPrev(rhs_vdv_des_driver)
		displayName= "$STR_RHS_INF_DRIVER";

		Mac_VDV_Inf_D

		linkedItems[] = {"rhs_beret_vdv1","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_vdv1","rhs_vest_pistol_holster",Standard_Equipment};

	};

	// APC/IFV Driver - mechanic

	class rhs_vdv_des_crew : rhs_vdv_crew
	{
		EdPrev(rhs_vdv_des_crew)
		displayName= "$STR_RHS_INF_CREW";

		HEADGEAR_MACRO(EMR_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_tsh4_ess","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_vest_pistol_holster",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_armoredcrew : rhs_vdv_armoredcrew
	{
		EdPrev(rhs_vdv_des_armoredcrew)
		displayName= "$STR_RHS_INF_CREW_ARMORED";

		HEADGEAR_MACRO(EMR_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_tsh4_ess","rhs_6b23_digi_crew",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b23_digi_crew",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	class rhs_vdv_des_combatcrew : rhs_vdv_combatcrew
	{
		EdPrev(rhs_vdv_des_combatcrew)
		displayName= "$STR_RHS_INF_CREW_COMBAT";

		HEADGEAR_MACRO(EMR_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};

		Mac_VDV_Inf_D
	};

	// APC/IFV Gunner
	class rhs_vdv_des_crew_commander : rhs_vdv_crew_commander
	{
		EdPrev(rhs_vdv_des_crew_commander)
		displayName= "$STR_RHS_INF_CREW_COMMANDER";

		HEADGEAR_MACRO(EMR_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};

		Mac_VDV_Inf_D
	};