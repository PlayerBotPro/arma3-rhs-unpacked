//variants

#define VMF_EMR_Macro \
	vehicleClass = "rhs_vehclass_infantry_emr";\
	editorSubcategory = "rhs_EdSubcat_infantry_emr";\
	faction = "rhs_faction_vmf";\
	AUTHOR_MACRO

	class rhs_vmf_emr_rifleman : rhs_vdv_rifleman
	{
		EdPrev(rhs_vmf_emr_rifleman)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};
	class rhs_vmf_emr_rifleman_lite : rhs_vmf_emr_rifleman
	{
		EdPrev(rhs_vmf_emr_rifleman_lite)
		VMF_EMR_Macro
		DISABLE_HEADGEAR_MACRO

		displayName= "$STR_RHS_INF_RIFLEMAN_L";

		linkedItems[] = {"rhs_beret_mp1","rhs_6sh117_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_6sh117_rifleman",Standard_Equipment};

	};

	class rhs_vmf_emr_efreitor : rhs_vdv_efreitor
	{
		EdPrev(rhs_vmf_emr_efreitor)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_grenadier : rhs_vdv_grenadier
	{
		EdPrev(rhs_vmf_emr_grenadier)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_grenadier_rpg : rhs_vdv_grenadier_rpg
	{
		EdPrev(rhs_vmf_emr_grenadier_rpg)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_arifleman_rpk : rhs_vdv_arifleman_rpk
	{
		EdPrev(rhs_vmf_emr_arifleman_rpk)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_machinegunner : rhs_vdv_machinegunner
	{
		EdPrev(rhs_vmf_emr_machinegunner)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_machinegunner_assistant : rhs_vdv_machinegunner_assistant
	{
		EdPrev(rhs_vmf_emr_machinegunner_assistant)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_at : rhs_vdv_at
	{
		EdPrev(rhs_vmf_emr_at)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};
	class rhs_vmf_emr_aa : rhs_vdv_aa
	{
		EdPrev(rhs_vmf_emr_aa)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_strelok_rpg_assist : rhs_vdv_strelok_rpg_assist
	{
		EdPrev(rhs_vmf_emr_strelok_rpg_assist)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_marksman : rhs_vdv_marksman
	{
		EdPrev(rhs_vmf_emr_marksman)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_EMR_SNIPER_HELMET_POOL)

		weapons[] = {"rhs_weap_svdp_pso1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svdp_pso1","Throw","Put"};

		linkedItems[] = {"rhs_beret_mp1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_6b45_rifleman",Standard_Equipment};
	};

	class rhs_vmf_emr_officer_armored : rhs_vdv_officer_armored
	{
		EdPrev(rhs_vmf_emr_officer_armored)
		VMF_EMR_Macro		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_mp1","rhs_6b45_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_6b45_holster",Standard_Equipment};
	};

	class rhs_vmf_emr_officer : rhs_vdv_officer
	{
		EdPrev(rhs_vmf_emr_officer)
		VMF_EMR_Macro		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_mp1","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_vest_pistol_holster",Standard_Equipment};
	};

	class rhs_vmf_emr_sergeant : rhs_vdv_sergeant
	{
		EdPrev(rhs_vmf_emr_sergeant)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_junior_sergeant : rhs_vdv_junior_sergeant
	{
		EdPrev(rhs_vmf_emr_junior_sergeant)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_engineer : rhs_vdv_engineer
	{
		EdPrev(rhs_vmf_emr_engineer)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_driver_armored : rhs_vdv_driver_armored
	{
		EdPrev(rhs_vmf_emr_driver_armored)
		VMF_EMR_Macro		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_mp1","rhs_6b45_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_6b45_rifleman",Standard_Equipment};
	};

	class rhs_vmf_emr_driver : rhs_vdv_driver
	{
		EdPrev(rhs_vmf_emr_driver)
		VMF_EMR_Macro		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_beret_mp1","rhs_6sh117_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_beret_mp1","rhs_6sh117_rifleman",Standard_Equipment};
	};

	class rhs_vmf_emr_medic : rhs_vdv_medic
	{
		EdPrev(rhs_vmf_emr_medic)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_LAT : rhs_vdv_LAT
	{
		EdPrev(rhs_vmf_emr_LAT)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};
	class rhs_vmf_emr_RShG2 : rhs_vdv_RShG2
	{
		EdPrev(rhs_vmf_emr_RShG2)
		VMF_EMR_Macro
		HEADGEAR_MACRO(VMF_6B47_HELMET_POOL)
	};

	class rhs_vmf_emr_crew : rhs_vdv_crew
	{
		EdPrev(rhs_vmf_emr_crew)
		VMF_EMR_Macro
	};

	class rhs_vmf_emr_crew_commander : rhs_vdv_crew_commander
	{
		EdPrev(rhs_vmf_emr_crew_commander)
		VMF_EMR_Macro
	};

	class rhs_vmf_emr_armoredcrew : rhs_vdv_armoredcrew
	{
		EdPrev(rhs_vmf_emr_armoredcrew)
		VMF_EMR_Macro
	};

	class rhs_vmf_emr_combatcrew : rhs_vdv_combatcrew
	{
		EdPrev(rhs_vmf_emr_combatcrew)
		VMF_EMR_Macro
	};