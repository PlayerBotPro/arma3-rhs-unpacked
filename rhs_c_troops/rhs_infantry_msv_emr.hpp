//variants

#define MSV_EMR_Macro 	\
vehicleClass = "rhs_vehclass_infantry_emr";\
editorSubcategory = "rhs_EdSubcat_infantry_emr";\
model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_base.p3d";\
selectionClan = "clan";\
hiddenSelections[] = {"camo","camo1","camo2"};\
hiddenSelectionsTextures[] =\
{\
"rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_vest_blue_co.paa",\
"rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_pant_blue_co.paa",\
"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"\
};\
class Wounds\
{\
tex[] = {};\
mat[] =\
{\
"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_vest.rvmat",\
"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_vest_w1.rvmat",\
"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_vest_w2.rvmat",\
"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_pant.rvmat",\
"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_pant_w1.rvmat",\
"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_pant_w2.rvmat",\
A3_Injury\
};\
};\
identityTypes[]=\
{\
	"LanguageRUS_F",\
	"Head_Russian",\
	"Head_Asian"\
};\
AUTHOR_MACRO

    //- Uniforms

/* 	class rhs_uniform_msv_emr_alt : rhs_infantry_msv_base
	{
		EdPrev(rhs_uniform_msv_emr_alt)
		AUTHOR_MACRO
		Scope = 1;

		uniformClass = "rhs_uniform_msv_emr";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_emr_base.p3d";

		selectionClan = "clan";\

		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_alt1_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
	};
 */

	//- Rifleman Variants

	class rhs_msv_emr_rifleman : rhs_msv_rifleman
	{
		EdPrev(rhs_msv_emr_rifleman)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
	};

	class rhs_msv_emr_LAT : rhs_msv_LAT
	{
		EdPrev(rhs_msv_emr_LAT)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};


	};
	class rhs_msv_emr_RShG2 : rhs_msv_RShG2
	{
		EdPrev(rhs_msv_emr_RShG2)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
	};

	class rhs_msv_emr_grenadier : rhs_msv_grenadier
	{
		EdPrev(rhs_msv_emr_grenadier)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_grn",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_grn",Standard_Equipment};

	};

	//- Support Roles

	class rhs_msv_emr_arifleman : rhs_msv_arifleman
	{
		EdPrev(rhs_msv_emr_arifleman)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		displayName= "$STR_RHS_INF_ARIFLEMAN_2";

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_mg",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_mg",Standard_Equipment};
		
		backpack="rhs_rk_sht_30_emr_mg";
	};

	class rhs_msv_emr_arifleman_rpk : rhs_msv_arifleman_rpk
	{
		EdPrev(rhs_msv_emr_arifleman_rpk)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		displayName= "$STR_RHS_INF_ARIFLEMAN";

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
	};

	class rhs_msv_emr_machinegunner :  rhs_msv_machinegunner
	{
		EdPrev(rhs_msv_emr_machinegunner)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_mg",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_mg",Standard_Equipment};
		
		backpack="rhs_rk_sht_30_emr_mg";
	};

	class rhs_msv_emr_machinegunner_assistant : rhs_msv_machinegunner_assistant
	{
		EdPrev(rhs_msv_emr_machinegunner_assistant)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};

		backpack="rhs_rk_sht_30_emr_mg";
	};

	class rhs_msv_emr_grenadier_rpg : rhs_msv_grenadier_rpg
	{
		EdPrev(rhs_msv_emr_grenadier_rpg)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
	};

	class rhs_msv_emr_strelok_rpg_assist : rhs_msv_strelok_rpg_assist
	{
		EdPrev(rhs_msv_emr_strelok_rpg_assist)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
	};

	class rhs_msv_emr_marksman : rhs_msv_marksman
	{
		EdPrev(rhs_msv_emr_marksman)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};

	};

	//- Leadership

	class rhs_msv_emr_efreitor : rhs_msv_emr_grenadier
	{
		EdPrev(rhs_msv_emr_efreitor)
		displayName= "$STR_RHS_INF_EFREITOR";

		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		cost = 350000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";


		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_gp25_1p63","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_1p63","Throw","Put"};

		magazines[] = {
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rdg2_white",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
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
			"rhs_mag_rdg2_white",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};

	class rhs_msv_emr_sergeant : rhs_msv_emr_grenadier
	{
		EdPrev(rhs_msv_emr_sergeant)
		displayName= "$STR_RHS_INF_SERGEANT";

		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		Items[] = {"FirstAidKit","rhs_1PN138"};
		RespawnItems[] = {"FirstAidKit","rhs_1PN138"};

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};

		weapons[] = {"rhs_weap_ak74m_gp25_dtk","rhs_weap_makarov_pm","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25_dtk","rhs_weap_makarov_pm","Binocular","Throw","Put"};

		magazines[] = {
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
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
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};

	class rhs_msv_emr_junior_sergeant : rhs_msv_emr_sergeant
	{
		EdPrev(rhs_msv_emr_junior_sergeant)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)
		displayName= "$STR_RHS_INF_JUNIOR_SERGEANT";

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_off","rhs_facewear_6m2_1",Standard_Equipment};
	};

	class rhs_msv_emr_officer_armored : rhs_msv_officer_armored
	{
		EdPrev(rhs_msv_emr_officer_armored)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_vkpo_cap","rhs_6b45_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_vkpo_cap","rhs_6b45_holster",Standard_Equipment};
	};

	class rhs_msv_emr_officer : rhs_msv_emr_officer_armored
	{
		EdPrev(rhs_msv_emr_officer)
		MSV_EMR_Macro
		displayName= "$STR_RHS_INF_OFFICER";

		linkedItems[] = {"rhs_vkpo_cap","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_vkpo_cap","rhs_vest_pistol_holster",Standard_Equipment};
		
		uniformClass = "rhs_uniform_vkpo_alt";
	};

	//- Specialities

	class rhs_msv_emr_at : rhs_msv_at
	{
		EdPrev(rhs_msv_emr_at)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
	};
	class rhs_msv_emr_aa : rhs_msv_aa
	{
		EdPrev(rhs_msv_emr_aa)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman",Standard_Equipment};
	};

	class rhs_msv_emr_engineer : rhs_msv_engineer
	{
		EdPrev(rhs_msv_emr_engineer)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b45_rifleman_2",Standard_Equipment};
		
		backpack="rhs_rk_sht_30_emr_engineer";
	};

	class rhs_msv_emr_medic : rhs_msv_medic
	{
		EdPrev(rhs_msv_emr_medic)
		MSV_EMR_Macro
		HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b23_digi_medic",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b23_digi_medic",Standard_Equipment};
		
		uniformClass = "rhs_uniform_vkpo_alt";
		
		backpack="rhs_rk_sht_30_emr_medic";
	};

	//- Crew

	class rhs_msv_emr_driver_armored : rhs_msv_driver_armored
	{
		EdPrev(rhs_msv_emr_driver_armored)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		DISABLE_HEADGEAR_MACRO

       	linkedItems[] = {"rhs_vkpo_cap","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_vkpo_cap","rhs_6b45_rifleman",Standard_Equipment};
	};

	class rhs_msv_emr_driver : rhs_msv_driver
	{
		EdPrev(rhs_msv_emr_driver)
		MSV_EMR_Macro
		DISABLE_HEADGEAR_MACRO
		
		linkedItems[] = {"rhs_vkpo_cap","rhs_6sh117_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_vkpo_cap","rhs_6sh117_rifleman",Standard_Equipment};
		
		uniformClass = "rhs_uniform_vkpo_alt";
	};

	class rhs_msv_emr_crew : rhs_msv_crew
	{
		EdPrev(rhs_msv_emr_crew)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(RATNIK_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_6b48","rhs_6b45_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b48","rhs_6b45_holster",Standard_Equipment};
	};

	class rhs_msv_emr_armoredcrew : rhs_msv_armoredcrew
	{
		EdPrev(rhs_msv_emr_armoredcrew)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(RATNIK_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_6b48","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b48","rhs_6b45_rifleman",Standard_Equipment};

	};

	class rhs_msv_emr_combatcrew : rhs_msv_combatcrew
	{
		EdPrev(rhs_msv_emr_combatcrew)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(RATNIK_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_6b48","rhs_6b45_light",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b48","rhs_6b45_light",Standard_Equipment};

	};

	class rhs_msv_emr_crew_commander : rhs_msv_crew_commander
	{
		EdPrev(rhs_msv_emr_crew_commander)
		MSV_EMR_Macro
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
		HEADGEAR_MACRO(RATNIK_CREW_HELMET_POOL)

		linkedItems[] = {"rhs_6b48","rhs_6b45_off",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b48","rhs_6b45_off",Standard_Equipment};

	};