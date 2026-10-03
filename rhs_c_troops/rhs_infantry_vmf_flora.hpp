//variants

#define VMF_Flora_Macro \
	vehicleClass = "rhs_vehclass_infantry_flora";\
	editorSubcategory = "rhs_EdSubcat_infantry_flora";\
	uniformClass = "rhs_uniform_vmf_flora";\
	faction = "rhs_faction_vmf";\
	model = "\rhsafrf\addons\rhs_infantry\rhs_vmf_base.p3d";\
	AUTHOR_MACRO

	class rhs_vmf_flora_rifleman : rhs_vdv_rifleman
	{
		EdPrev(rhs_vmf_flora_rifleman)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		hiddenSelections[] = {"camo1","camo2","camob"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\flora_vmf_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vmf_co.paa"
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

		linkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_6sh92",Standard_Equipment};

	};
	class rhs_vmf_flora_rifleman_subdued : rhs_vmf_flora_rifleman
	{
		scope=1;
		uniformClass = "rhs_uniform_vmf_flora_subdued";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\flora_vmf_co.paa",
			"rhsafrf\addons\rhs_infantry\data\Shevrons_vmf_subdued_co.paa"
		};
	};
	class rhs_vmf_flora_rifleman_lite : rhs_vmf_flora_rifleman
	{
		EdPrev(rhs_vmf_flora_rifleman_lite)
		VMF_Flora_Macro

		displayName= "$STR_RHS_INF_RIFLEMAN_L";

		linkedItems[] = {"rhs_beret_mp1","rhs_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_6sh92",Standard_Equipment};

	};

	class rhs_vmf_flora_efreitor : rhs_vdv_efreitor
	{
		EdPrev(rhs_vmf_flora_efreitor)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_radio",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_radio",Standard_Equipment};
	};

	class rhs_vmf_flora_grenadier : rhs_vdv_grenadier
	{
		EdPrev(rhs_vmf_flora_grenadier)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_bala2_flora","rhs_6b13_Flora_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala2_flora","rhs_6b13_Flora_6sh92_vog",Standard_Equipment};
	};

	class rhs_vmf_flora_grenadier_rpg : rhs_vdv_grenadier_rpg
	{
		EdPrev(rhs_vmf_flora_grenadier_rpg)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_arifleman_rpk : rhs_vdv_arifleman_rpk
	{
		EdPrev(rhs_vmf_flora_arifleman_rpk)
		VMF_Flora_Macro

		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_machinegunner : rhs_vdv_machinegunner
	{
		EdPrev(rhs_vmf_flora_machinegunner)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_flora",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_flora",Standard_Equipment};
	};

	class rhs_vmf_flora_machinegunner_assistant : rhs_vdv_machinegunner_assistant
	{
		EdPrev(rhs_vmf_flora_machinegunner_assistant)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_bala2_flora","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala2_flora","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_at : rhs_vdv_at
	{
		EdPrev(rhs_vmf_flora_at)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala1_flora","rhs_6b13_6sh92",Standard_Equipment};
	};
	class rhs_vmf_flora_aa : rhs_vdv_aa
	{
		EdPrev(rhs_vmf_flora_aa)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
	{
		EdPrev(rhs_vmf_flora_strelok_rpg_assist)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_marksman : rhs_vdv_marksman
	{
		EdPrev(rhs_vmf_flora_marksman)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_SNIPER_HELMET_POOL)

		weapons[] = {"rhs_weap_svdp_pso1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svdp_pso1","Throw","Put"};

		linkedItems[] = {"rhs_beret_mp1","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_officer_armored : rhs_vdv_officer_armored
	{
		EdPrev(rhs_vmf_flora_officer_armored)
		VMF_Flora_Macro
		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_mp1","rhs_6b13_Flora_crewofficer",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_6b13_Flora_crewofficer",Standard_Equipment};
	};

	class rhs_vmf_flora_officer : rhs_vdv_officer
	{
		EdPrev(rhs_vmf_flora_officer)
		VMF_Flora_Macro
		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_mp1","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_vest_commander",Standard_Equipment};
	};

	class rhs_vmf_flora_sergeant : rhs_vdv_sergeant
	{
		EdPrev(rhs_vmf_flora_sergeant)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_headset_mapcase",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_headset_mapcase",Standard_Equipment};
	};

	class rhs_vmf_flora_junior_sergeant : rhs_vdv_junior_sergeant
	{
		EdPrev(rhs_vmf_flora_junior_sergeant)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m","rhs_6b13_Flora_6sh92_vog",Standard_Equipment};
	};

	class rhs_vmf_flora_engineer : rhs_vdv_engineer
	{
		EdPrev(rhs_vmf_flora_engineer)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_driver_armored : rhs_vdv_driver_armored
	{
		EdPrev(rhs_vmf_flora_driver_armored)
		VMF_Flora_Macro
		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_mp1","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_driver : rhs_vdv_driver
	{
		EdPrev(rhs_vmf_flora_driver)
		VMF_Flora_Macro
		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_mp1","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_vest_pistol_holster",Standard_Equipment};
	};

	class rhs_vmf_flora_medic : rhs_vdv_medic
	{
		EdPrev(rhs_vmf_flora_medic)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_LAT : rhs_vdv_LAT
	{
		EdPrev(rhs_vmf_flora_LAT)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_flora","rhs_6b13_6sh92",Standard_Equipment};
	};
	class rhs_vmf_flora_RShG2 : rhs_vdv_RShG2
	{
		EdPrev(rhs_vmf_flora_RShG2)
		VMF_Flora_Macro
		
		HEADGEAR_MACRO(VMF_FLORA_HELMET_POOL)

		linkedItems[] = {"rhs_6b7_1m_bala2_flora","rhs_6b13_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b7_1m_bala2_flora","rhs_6b13_6sh92",Standard_Equipment};
	};

	class rhs_vmf_flora_crew : rhs_vdv_crew
	{
		EdPrev(rhs_vmf_flora_crew)
		VMF_Flora_Macro
		
		linkedItems[] = {"rhs_tsh4","rhs_6sh46",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_6sh46",Standard_Equipment};
	};

	class rhs_vmf_flora_crew_commander : rhs_vdv_crew_commander
	{
		EdPrev(rhs_vmf_flora_crew_commander)
		VMF_Flora_Macro

		linkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4","rhs_vest_commander",Standard_Equipment};

	};

	class rhs_vmf_flora_armoredcrew : rhs_vdv_armoredcrew
	{
		EdPrev(rhs_vmf_flora_armoredcrew)
		VMF_Flora_Macro

		linkedItems[] = {"rhs_tsh4_ess","rhs_6b13_flora",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b13_flora",Standard_Equipment};

	};

	class rhs_vmf_flora_combatcrew : rhs_vdv_combatcrew
	{
		EdPrev(rhs_vmf_flora_combatcrew)
		VMF_Flora_Macro

		linkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_vydra_3m",Standard_Equipment};

	};