class rhsusf_infantry_socom_armysf_base : rhsusf_socom_mc_uniform
	{
		dlc = "RHS_USAF";

		scope = 1;
		category = "Men";

		faction = "rhs_faction_socom";
		// Class from CfgVehicleClasses. Depreciated, should not be used anymore.
		vehicleClass = "rhs_vehclass_infantry_ocp";
		editorSubcategory = "rhs_EdSubcat_USASOC";
		AUTHOR_MACRO

		side = 1;
		displayName= "$STR_RHSUSF_INF_RIFLEMAN";
		selectionClan = "clan";

		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};

		accuracy = 2.3;
		sensitivity = 3;  // ?
		threat[] = {1,0.1,0.1};
		camouflage = 1.4; // ?

		modelSides[] = {1,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "rhs_uniform_g3_mc";

		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;

		cost = 100000;

		/* Jack Murphy Loadout */

		Items[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ocp"};

		linkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_mbav_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_mbav_rifleman",  Standard_Equipment};

		weapons[] = {"rhs_m4a1_grip_eotech","rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_grip_eotech","rhsusf_weap_m9","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull),
			"rhs_mag_an_m14_th3",
			mag_5(rhs_mag_mk84),
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull),
			"rhs_mag_an_m14_th3",
			mag_5(rhs_mag_mk84),
			"rhs_mag_m67"
		};

		class EventHandlers;
	};
/*
	class rhsusf_infantry_army_82nd: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_infantry_army_82nd)
			AUTHOR_MACRO

			model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_82nd.p3d";

			uniformClass = "rhs_uniform_cu_ocp_82nd";
			hiddenSelectionsTextures[] =
			{
				"\rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
				"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa",
				"rhsusf\addons\rhsusf_infantry\data\patches\82AB_ocp_co.paa"
			};
	};

		addons/rhsusf_infantry2/Data/gen3_co.paa
*/
	// Riflemen

	class rhsusf_infantry_socom_armysf_rifleman: rhsusf_infantry_socom_armysf_base
	{
		EdPrev(rhsusf_infantry_socom_armysf_rifleman)
		scope = 2;
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN";
	};