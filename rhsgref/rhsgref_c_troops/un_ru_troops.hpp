/* MACROS DEFINITION */

#define Standard_Equipment ItemMap,ItemCompass,ItemWatch,ItemRadio

#define MacroUNInfRU dlc = "RHS_GREF";\
			scope = 2;\
			side=2;\
			faction="rhsgref_faction_un";\
			vehicleClass = "rhsgref_vehclass_infantry_ru";\
			author=$STR_RHS_AUTHOR_FULL;

/* UN Russian TROOPS CLASSNAMES */

//- Rifleman Variants

	class  rhs_msv_emr_rifleman;
	class rhsgref_un_ru_msv_emr_rifleman : rhs_msv_emr_rifleman
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_scarf","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_scarf","rhs_6b23_digi_6sh92",Standard_Equipment};
	};

	class rhs_msv_emr_LAT;
	class rhsgref_un_ru_msv_emr_LAT : rhs_msv_emr_LAT
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_scarf","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_scarf","rhs_6b23_digi_6sh92",Standard_Equipment};


	};

	class rhs_msv_emr_grenadier;
	class rhsgref_un_ru_msv_emr_grenadier : rhs_msv_emr_grenadier
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92_vog",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92_vog",Standard_Equipment};

	};

	//- Support Roles
	class rhs_msv_emr_arifleman;
	class rhsgref_un_ru_msv_emr_arifleman : rhs_msv_emr_arifleman
	{
		MacroUNInfRU

		linkedItems[] = {"H_Cap_blu","rhs_scarf","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_scarf","rhs_6b23_digi_6sh92",Standard_Equipment};
	};

	class rhs_msv_emr_machinegunner;
	class rhsgref_un_ru_msv_emr_machinegunner :  rhs_msv_emr_machinegunner
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_scarf","rhs_6b23_digi",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_scarf","rhs_6b23_digi",Standard_Equipment};
	};

	class rhs_msv_emr_machinegunner_assistant;
	class rhsgref_un_ru_msv_emr_machinegunner_assistant : rhs_msv_emr_machinegunner_assistant
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92",Standard_Equipment};
	};

	class rhs_msv_emr_grenadier_rpg;
	class rhsgref_un_ru_msv_emr_grenadier_rpg : rhs_msv_emr_grenadier_rpg
	{
		MacroUNInfRU

		linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_rifleman",Standard_Equipment};
	};

	class rhs_msv_emr_strelok_rpg_assist;
	class rhsgref_un_ru_msv_emr_strelok_rpg_assist : rhs_msv_emr_strelok_rpg_assist
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92",Standard_Equipment};
	};

	class rhs_msv_emr_marksman;
	class rhsgref_un_ru_msv_emr_marksman : rhs_msv_emr_marksman
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_sniper",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_sniper",Standard_Equipment};
	};

	//- Leadership
	class rhs_msv_emr_efreitor;
	class rhsgref_un_ru_msv_emr_efreitor : rhs_msv_emr_efreitor
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92_radio",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92_radio",Standard_Equipment};
	};

	class rhs_msv_emr_sergeant;
	class rhsgref_un_ru_msv_emr_sergeant : rhs_msv_emr_sergeant
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92_headset_mapcase",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92_headset_mapcase",Standard_Equipment};
	};

	class rhs_msv_emr_junior_sergeant;
	class rhsgref_un_ru_msv_emr_junior_sergeant : rhs_msv_emr_junior_sergeant
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92_vog_headset",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_6sh92_vog_headset",Standard_Equipment};
	};

	class rhs_msv_emr_officer_armored;
	class rhsgref_un_ru_msv_emr_officer_armored : rhs_msv_emr_officer_armored
	{

		 linkedItems[] = {"H_Cap_blu","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_vest_commander",Standard_Equipment};
	};

	class rhs_msv_emr_officer;
	class rhsgref_un_ru_msv_emr_officer : rhs_msv_emr_officer
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_vest_commander",Standard_Equipment};
	};

	//- Specialities
	class rhs_msv_emr_engineer;
	class rhsgref_un_ru_msv_emr_engineer : rhs_msv_emr_engineer
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_rifleman",Standard_Equipment};
	};

	class rhs_msv_emr_medic;
	class rhsgref_un_ru_msv_emr_medic : rhs_msv_emr_medic
	{
		MacroUNInfRU

        linkedItems[] = {"H_Cap_blu","rhs_6b23_digi_medic",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi_medic",Standard_Equipment};
	};

	//- Crew
	class rhs_msv_emr_driver_armored;
	class rhsgref_un_ru_msv_emr_driver_armored : rhs_msv_emr_driver_armored
	{
		MacroUNInfRU

       	linkedItems[] = {"H_Cap_blu","rhs_6b23_digi",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_6b23_digi",Standard_Equipment};
	};

	class rhs_msv_emr_driver;
	class rhsgref_un_ru_msv_emr_driver : rhs_msv_emr_driver
	{
		MacroUNInfRU

		linkedItems[] = {"H_Cap_blu","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"H_Cap_blu","rhs_vest_pistol_holster",Standard_Equipment};
	};