/* MACROS DEFINITION */

#define Standard_Equipment ItemMap,ItemCompass,ItemWatch,ItemRadio

#define MacroUNInfUS dlc = "RHS_GREF";\
			scope = 2;\
			side=2;\
			faction="rhsgref_faction_un";\
			vehicleClass = "rhsgref_vehclass_infantry_us";\
			author=$STR_RHS_AUTHOR_FULL;

/* UN US TROOPS CLASSNAMES */

// Riflemen

	class rhsusf_army_ucp_rifleman;
	class rhsgref_un_us_army_ucp_rifleman: rhsusf_army_ucp_rifleman
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_rifleman_m4;
	class rhsgref_un_us_army_ucp_rifleman_m4: rhsusf_army_ucp_rifleman_m4
	{
			MacroUNInfUS

			linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_rifleman_m590;
	class rhsgref_un_us_army_ucp_rifleman_m590: rhsusf_army_ucp_rifleman_m590
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_riflemanl;
	class rhsgref_un_us_army_ucp_riflemanl: rhsusf_army_ucp_riflemanl
	{
			MacroUNInfUS

			linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",  Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",  Standard_Equipment};
	};

	class rhsusf_army_ucp_riflemanat;
	class rhsgref_un_us_army_ucp_riflemanat: rhsusf_army_ucp_riflemanat
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_grenadier;
	class rhsgref_un_us_army_ucp_grenadier: rhsusf_army_ucp_grenadier
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_grenadier",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_grenadier",Standard_Equipment};
	};

	class rhsusf_army_ucp_autorifleman;
	class rhsgref_un_us_army_ucp_autorifleman: rhsusf_army_ucp_autorifleman
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_saw",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_saw",Standard_Equipment};
	};

	class rhsusf_army_ucp_autoriflemana;
	class rhsgref_un_us_army_ucp_autoriflemana: rhsusf_army_ucp_autoriflemana
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_machinegunner;
	class rhsgref_un_us_army_ucp_machinegunner: rhsusf_army_ucp_machinegunner
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_saw",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_saw",Standard_Equipment};
	};

	class rhsusf_army_ucp_machinegunnera;
	class rhsgref_un_us_army_ucp_machinegunnera: rhsusf_army_ucp_machinegunnera
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	class rhsusf_army_ucp_marksman;
	class rhsgref_un_us_army_ucp_marksman: rhsusf_army_ucp_marksman
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	};

	// Leaders
	class rhsusf_army_ucp_officer;
	class rhsgref_un_us_army_ucp_officer : rhsusf_army_ucp_officer
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_squadleader",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_squadleader",Standard_Equipment};
	};

	class rhsusf_army_ucp_squadleader;
	class rhsgref_un_us_army_ucp_squadleader: rhsusf_army_ucp_squadleader
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_squadleader",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_squadleader",Standard_Equipment};
	};

	class rhsusf_army_ucp_teamleader;
	class rhsgref_un_us_army_ucp_teamleader:  rhsusf_army_ucp_teamleader
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_teamleader",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_teamleader",Standard_Equipment};
	};

	// Support
	class rhsusf_army_ucp_uav;
	class rhsgref_un_us_army_ucp_uav: rhsusf_army_ucp_uav
	{
			MacroUNInfUS

			linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_rifleman",Standard_Equipment};

	};

	class rhsusf_army_ucp_medic;
	class rhsgref_un_us_army_ucp_medic: rhsusf_army_ucp_medic
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_medic",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_medic",Standard_Equipment};
	};

	class rhsusf_army_ucp_engineer;
	class rhsgref_un_us_army_ucp_engineer: rhsusf_army_ucp_engineer
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_repair",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_repair",Standard_Equipment};
	};

	class rhsusf_army_ucp_explosives;
	class rhsgref_un_us_army_ucp_explosives: rhsusf_army_ucp_explosives
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_repair",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu","rhsusf_iotv_ucp_repair",Standard_Equipment};
	};

	// Ground Crew
	class rhsusf_army_ucp_crewman;
	class rhsgref_un_us_army_ucp_crewman: rhsusf_army_ucp_crewman
	{
			MacroUNInfUS

        	linkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_iotv_ucp",Standard_Equipment};
			respawnLinkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_iotv_ucp",Standard_Equipment};
	};

	class rhsusf_army_ucp_combatcrewman;
	class rhsgref_un_us_army_ucp_combatcrewman: rhsusf_army_ucp_combatcrewman
	{

		MacroUNInfUS

       	linkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_iotv_ucp","G_Bandanna_khk",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_iotv_ucp","G_Bandanna_khk",Standard_Equipment};
	};

	class rhsusf_army_ucp_driver;
	class rhsgref_un_us_army_ucp_driver: rhsusf_army_ucp_driver
	{
			MacroUNInfUS

        	linkedItems[] = {"H_Cap_blu",Standard_Equipment};
			respawnLinkedItems[] = {"H_Cap_blu",Standard_Equipment};
	};