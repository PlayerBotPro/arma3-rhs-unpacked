	#define Mac_Inf_Army_OCP faction = "rhs_faction_usarmy_d";
	
	#define INFANTY_ACU_OEFCP_MACRO faction = "rhs_faction_usarmy_d";\
		editorSubcategory = "rhs_EdSubcat_infantry_ocp";\
		vehicleClass = "rhs_vehclass_infantry_ocp";\
		uniformClass = "rhs_uniform_acu_oefcp";\
		AUTHOR_MACRO

	class rhsusf_infantry_army_base : SoldierWB
	{
			dlc = "RHS_USAF";

			scope = 0;
			category = "Men";

			faction = "rhs_faction_usarmy_d";
			// Class from CfgVehicleClasses. Depreciated, should not be used anymore.
			vehicleClass = "rhs_vehclass_infantry_ocp";
			editorSubcategory = "rhs_EdSubcat_infantry_ocp";
			AUTHOR_MACRO


			side = 1;
			displayName= "$STR_RHSUSF_INF_RIFLEMAN";

			identityTypes[]=
			{
				"LanguageENG_F",
				"Head_NATO"
			};
			faceType = "Man_A3";
			genericNames="NATOMen";

			portrait = "";
			picture = "";
			icon = "iconMan";

			accuracy = 2.3;
			sensitivity = 3;  // ?
			threat[] = {1,0.1,0.1};
			camouflage = 1.4; // ?
			minFireTime = 7; // ?
			canCarryBackPack = 1;

			model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";

			modelSides[] = {1,3};

			nakedUniform = "U_BasicBody";
			uniformClass = "rhs_uniform_cu_ocp";

			primaryAmmoCoef = 0.4;
			secondaryAmmoCoef = 0.2;
			handgunAmmoCoef = 0.1;

			cost = 100000;

			class Wounds
			{
				tex[] = {};
				mat[] =
				{
					"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01.rvmat",
					"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_w.rvmat",
					"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_w.rvmat",
					A3_Injury
				};
			};

			weapons[] = {"rhs_m4a1_compm4","Throw","Put"};
			respawnWeapons[] = {"rhs_m4a1_compm4","Throw","Put"};

			magazines[] =
			{
				mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
				mag_2(rhs_mag_m67)
			};
			respawnMagazines[] =
			{
				mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
				mag_2(rhs_mag_m67)
			};

			Items[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ocp"};
			RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ocp"};

			linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman",  Standard_Equipment};
			respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman",  Standard_Equipment};


			hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
			hiddenSelectionsTextures[] =
			{
				"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
				"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa"
			};

			class EventHandlers: EventHandlers {
				class RHS_NVG_Check {
					init = "_this call rhsusf_fnc_nvgHandler";
				};
			};
	};

	//- Uniforms

	class rhsusf_infantry_army_1stcav  : rhsusf_infantry_army_base
	{
		Mac_Inf_Army_OCP


		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";

		uniformClass = "rhs_uniform_cu_ocp_1stcav";


		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
			"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa",
			"rhsusf\addons\rhsusf_infantry\data\patches\1CAV_ocp_co.paa"
		};
	};

	class rhsusf_infantry_army_10th  : rhsusf_infantry_army_base
	{
		Mac_Inf_Army_OCP


		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_mountain.p3d";

		uniformClass = "rhs_uniform_cu_ocp_10th";


		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
			"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa",
			"rhsusf\addons\rhsusf_infantry\data\patches\10MT_ocp_co.paa"
		};
	};

	//- Divisions

	class rhsusf_army_ocp_rifleman_1stcav: rhsusf_infantry_army_1stcav
	{
		EdPrev(rhsusf_army_ocp_rifleman_1stcav)
		scope = 2;
		AUTHOR_MACRO
		displayName= "1st Cav. Rifleman";
	};

	class rhsusf_army_ocp_rifleman_10th: rhsusf_infantry_army_10th
	{
		EdPrev(rhsusf_army_ocp_rifleman_10th)
		scope = 2;
		AUTHOR_MACRO
		displayName= "10th Rifleman";
	};

	//- Riflemen

	class rhsusf_army_ocp_rifleman: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_rifleman)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN";
		
		HEADGEAR_MACRO(ARMY_OCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman",  Standard_Equipment};

		weapons[] = {"rhs_m4a1_grip_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_grip_compm4","Throw","Put"};
		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_2(rhs_mag_m67)
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_2(rhs_mag_m67)
		};

	};

	class rhsusf_army_ocp_rifleman_m4: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_rifleman_m4)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_M4";

		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};

	};

	class rhsusf_army_ocp_rifleman_m16: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_rifleman_m16)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_M16";

		weapons[] = {"rhs_weap_m16a4_grip_acog","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_grip_acog","Throw","Put"};

	};

	// breacher
	class rhsusf_army_ocp_rifleman_m590: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_rifleman_m590)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_M590";

		weapons[] = {"rhs_weap_M590_8RD","rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_M590_8RD","rhsusf_weap_m9","Throw","Put"};
		magazines[] =
		{
			mag_6(rhsusf_8Rnd_00Buck),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ)
		};
		respawnMagazines[] =
		{
			mag_6(rhsusf_8Rnd_00Buck),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ)
		};

		backpack ="rhsusf_falconii_breach";
	};

	class rhsusf_army_ocp_riflemanl: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_riflemanl)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_L";

		camouflage = 1.2;
		cost = 90000;
		
		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_Booniehat_ocp","rhsusf_iotv_ocp_rifleman",  Standard_Equipment};
		respawnLinkedItems[] = {"rhs_Booniehat_ocp","rhsusf_iotv_ocp_rifleman",  Standard_Equipment};

		weapons[] = {"rhs_m4a1_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_compm4","Throw","Put"};
	};

	class rhsusf_army_ocp_riflemanat: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_riflemanat)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_RIFLEMAN_AT";

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

		weapons[] = {"rhs_m4_grip_compm4","rhs_weap_M136","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_grip_compm4","rhs_weap_M136","Throw","Put"};
		magazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_m136_mag"
		};
		respawnMagazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_2(rhs_mag_m67),
			"rhs_m136_mag"
		};
		secondaryAmmoCoef = 0.5;

	};

	class rhsusf_army_ocp_grenadier: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_grenadier)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_GRENADIERA";

		cost = 130000;
		threat[] = {1,0.3,0.1};
		
		HEADGEAR_MACRO(ARMY_OCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_iotv_ocp_grenadier",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_iotv_ocp_grenadier",Standard_Equipment};

		weapons[] = {"rhs_m4_m203_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_m203_compm4","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_6(rhs_mag_M433_HEDP),
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_6(rhs_mag_M433_HEDP),
			"rhs_mag_m67"
		};

		backpack="rhsusf_falconii_gr";

	};

	class rhsusf_army_ocp_autorifleman: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_autorifleman)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_ARIFLEMAN";

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
		
		HEADGEAR_MACRO(ARMY_OCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_saw",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_saw",Standard_Equipment};

		weapons[] = {"rhs_weap_m249_light_L_elcan","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249_light_L_elcan","Throw","Put"};

		magazines[] =
		{
			mag_3(rhsusf_100Rnd_556x45_soft_pouch),
			mag_2(rhs_mag_m67)
		};
		respawnMagazines[] =
		{
			mag_3(rhsusf_100Rnd_556x45_soft_pouch),
			mag_2(rhs_mag_m67)
		};

		backpack="rhsusf_assault_eagleaiii_ocp_ar";
	};

	class rhsusf_army_ocp_autoriflemana: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_autoriflemana)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_AARIFLEMAN";

		cost = 110000;
		camouflage = 1.5;

		weapons[] = {"rhs_m4_grip_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_grip_compm4","Throw","Put"};

		backpack="rhsusf_assault_eagleaiii_ocp_ar";
	};

	class rhsusf_army_ocp_machinegunner: rhsusf_army_ocp_autorifleman
	{
		EdPrev(rhsusf_army_ocp_machinegunner)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_MG";

		icon = "iconManMG";

		weapons[] = {"rhs_weap_m240b_elcan","rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m240b_elcan","rhsusf_weap_m9","Throw","Put"};
		magazines[] =
		{
			mag_6(rhsusf_50Rnd_762x51),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_6(rhsusf_50Rnd_762x51),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m67"
		};

		backpack="rhsusf_assault_eagleaiii_ocp_mg";
	};

	class rhsusf_army_ocp_machinegunnera: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_machinegunnera)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_AMG";

		cost = 110000;
		camouflage = 1.5;

		backpack="rhsusf_assault_eagleaiii_ocp_mg";

		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
	};

	class rhsusf_army_ocp_marksman: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_marksman)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_MARKSMAN";

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
		
		HEADGEAR_MACRO(ARMY_OCP_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_m14ebrri_leu","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m14ebrri_leu","Throw","Put"};
		magazines[] =
		{
			mag_6(rhsusf_20Rnd_762x51_m118_special_Mag),
			"rhsusf_20Rnd_762x51_m62_Mag",
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_6(rhsusf_20Rnd_762x51_m118_special_Mag),
			"rhsusf_20Rnd_762x51_m62_Mag",
			"rhs_mag_m67"
		};

	};

	// Leaders
	class rhsusf_army_ocp_officer: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_officer)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_OFFICER";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";

		cost = 600000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManOfficer";
		
		HEADGEAR_MACRO(ARMY_OCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ocp_norotos","rhsusf_iotv_ocp_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp_norotos","rhsusf_iotv_ocp_squadleader",Standard_Equipment};

		weapons[] = {"rhs_m4a1_acog2","rhsusf_weap_m9","Throw","Put","rhsusf_bino_m24"};
		respawnWeapons[] = {"rhs_m4a1_acog2","rhsusf_weap_m9","Throw","Put","rhsusf_bino_m24"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red",
			"rhs_mag_m18_purple",
			"rhs_mag_m18_yellow",
			mag_2(Chemlight_red)
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red",
			"rhs_mag_m18_purple",
			"rhs_mag_m18_yellow",
			mag_2(Chemlight_red)
		};

	};

	class rhsusf_army_ocp_squadleader: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_squadleader)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_SQUADLEADER";

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";
		
		HEADGEAR_MACRO(ARMY_OCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_headset_ocp","rhsusf_iotv_ocp_squadleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ocp","rhsusf_iotv_ocp_squadleader",Standard_Equipment};

		weapons[] = {"rhs_m4a1_acog3","Throw","Put","rhsusf_bino_m24_ARD"};
		respawnWeapons[] = {"rhs_m4a1_acog3","Throw","Put","rhsusf_bino_m24_ARD"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_m18_red",
			"rhs_mag_m18_purple",
			"rhs_mag_m18_yellow",
			"rhs_mag_m67",
			mag_2(Chemlight_red)
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_m18_red",
			"rhs_mag_m18_purple",
			"rhs_mag_m18_yellow",
			"rhs_mag_m67",
			mag_2(Chemlight_red)
		};

	};

	class rhsusf_army_ocp_teamleader : rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_teamleader)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_TEAMLEADER";

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";
		
		HEADGEAR_MACRO(ARMY_OCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_iotv_ocp_teamleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ess_ocp","rhsusf_iotv_ocp_teamleader",Standard_Equipment};

		weapons[] = {"rhs_m4a1_grip_acog2","Throw","Put","rhsusf_bino_m24"};
		respawnWeapons[] = {"rhs_m4a1_grip_acog2","Throw","Put","rhsusf_bino_m24"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_m18_purple",
			"rhs_mag_m18_yellow",
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_m18_purple",
			"rhs_mag_m18_yellow",
			"rhs_mag_m67"
		};
	};

	class rhsusf_army_ocp_jfo: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_jfo)
		INFANTY_ACU_OEFCP_MACRO

		scope = 2;
		displayName= "$STR_RHSUSF_INF_JFO";

		icon = "iconManLeader";
		cost = 400000;
		sensitivity = 3.2;
		
		HEADGEAR_MACRO(ARMY_OCP_HELMET_POOL)

		weapons[] = {"rhs_m4a1_m203s_ACOG","rhsusf_bino_lerca_1200_black","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_m203s_ACOG","rhsusf_bino_lerca_1200_black","Throw","Put"};

		linkedItems[] = {"rhsusf_ach_helmet_camo_ocp","rhsusf_iotv_ocp_grenadier","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_camo_ocp","rhsusf_iotv_ocp_grenadier","ItemGPS",Standard_Equipment};

		magazines[] =
		{
			mag_4(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_3(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_M583A1_white",
			"rhs_mag_M715_green",
			"rhs_mag_M661_green",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_purple",
			"Chemlight_green",
			"I_IR_Grenade"
		};
		respawnMagazines[] =
		{
			mag_4(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_3(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_M583A1_white",
			"rhs_mag_M715_green",
			"rhs_mag_M661_green",
			"rhs_mag_m18_red",
			"rhs_mag_m18_green",
			"rhs_mag_m18_yellow",
			"rhs_mag_m18_purple",
			"Chemlight_green",
			"I_IR_Grenade"
		};

		backpack="rhsusf_falconii_gr";
	};

	class rhsusf_army_ocp_fso: rhsusf_army_ocp_jfo
	{
		EdPrev(rhsusf_army_ocp_fso)
		INFANTY_ACU_OEFCP_MACRO

		scope = 2;
		displayName= "$STR_RHSUSF_INF_FSO";

		icon = "iconManLeader";
		cost = 200000;
		sensitivity = 3.2;
		
		HEADGEAR_MACRO(ARMY_OCP_COMMS_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_helmet_headset_ocp","rhsusf_iotv_ocp_grenadier","ItemGPS",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_headset_ocp","rhsusf_iotv_ocp_grenadier","ItemGPS",Standard_Equipment};

	};

	// Specialists

	class rhsusf_army_ocp_javelin: rhsusf_army_ocp_riflemanat
	{
		EdPrev(rhsusf_army_ocp_javelin)
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_AT";

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

		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";

		//backpack="rhsusf_assault_eagleaiii_ocp_at";

		weapons[] = {"rhs_m4_compm4","rhs_weap_fgm148","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","rhs_weap_fgm148","Throw","Put"};
		magazines[] = 		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_fgm148_magazine_AT",
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_fgm148_magazine_AT",
			"rhs_mag_m67"
		};
	};

	// AT Assistant
	class rhsusf_army_ocp_javelin_assistant: rhsusf_army_ocp_riflemanat
	{
		EdPrev(rhsusf_army_ocp_javelin_assistant)
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_AT_ASSISTANT";

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

		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";

		backpack="rhsusf_assault_eagleaiii_ocp_at";

		weapons[] = {"rhs_m4_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
		magazines[] = 		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_m67"
		};
	};

	// MAAWS
	class rhsusf_army_ocp_maaws: rhsusf_army_ocp_riflemanat
	{
		EdPrev(rhsusf_army_ocp_maaws)
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_MAAWS";

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

		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";

		backpack="rhsusf_assault_eagleaiii_ocp_maaws";

		weapons[] = {"rhs_m4_compm4","rhs_weap_maaws_optic","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","rhs_weap_maaws_optic","Throw","Put"};
		magazines[] = 		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_maaws_HEAT",
			"rhs_mag_m67"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_maaws_HEAT",
			"rhs_mag_m67"
		};
	};

	class rhsusf_army_ocp_aa: rhsusf_army_ocp_riflemanat
	{
		EdPrev(rhsusf_army_ocp_aa)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_AA";

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

		cost = 200000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";

		weapons[] = {"rhs_weap_m16a4","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4","rhs_weap_fim92","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_fim92_mag"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_fim92_mag"
		};

		secondaryAmmoCoef = 0.5;
	};

	class rhsusf_army_ocp_uav: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_uav)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_UAV";

		weapons[] = {"rhs_weap_m16a4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4","Throw","Put"};

		magazines[] = 		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag)
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag)
		};

		backpack="B_rhsusf_B_BACKPACK";

	};


	class rhsusf_army_ocp_medic: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_medic)

		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_MEDIC";

			linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_medic",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_medic",  Standard_Equipment};

		weapons[] = {"rhs_m4_compm4","rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_compm4","rhsusf_weap_m9","Throw","Put"};
		magazines[] = 		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red"
		};

		attendant =1;
		icon="iconManMedic";
		backpack="rhsusf_assault_eagleaiii_ocp_medic";
		picture="pictureHeal";
	};

	class rhsusf_army_ocp_engineer: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_engineer)
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_ENGINEER";

		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.5;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";

		linkedItems[] = {"rhsusf_ach_helmet_ESS_ocp","rhsusf_iotv_ocp_repair",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ESS_ocp","rhsusf_iotv_ocp_repair",  Standard_Equipment};

		weapons[] = {"rhs_m4_grip_compm4","Throw","Put"};
		respawnWeapons[] = {"rhs_m4_grip_compm4","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_m18_red"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_m18_red"
		};

		backpack="rhsusf_assault_eagleaiii_ocp_engineer";
	};

	class rhsusf_army_ocp_explosives: rhsusf_army_ocp_rifleman
	{
		EdPrev(rhsusf_army_ocp_explosives)
		INFANTY_ACU_OEFCP_MACRO
		displayName= "Explosives Specialist";

		cost = 115000;
		camouflage = 1.6;
		sensitivity = 2.5;

		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};

		icon = "iconManExplosive";
		picture = "pictureExplosive";

		linkedItems[] = {"rhsusf_ach_helmet_ESS_ocp","rhsusf_iotv_ocp_repair",  Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ESS_ocp","rhsusf_iotv_ocp_repair",  Standard_Equipment};

		weapons[] = {"rhs_m4a1_acog2","rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_m4a1_acog2","rhsusf_weap_m9","Throw","Put"};

		magazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			mag_2(Chemlight_green),
			"rhs_mag_m18_red"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			mag_2(Chemlight_green),
			"rhs_mag_m18_red"
		};

		backpack="rhsusf_assault_eagleaiii_ocp_demo";
	};

	class rhsusf_army_ocp_sniper: rhsusf_army_ocp_marksman
	{
		EdPrev(rhsusf_army_ocp_sniper)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_SNIPER";

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

		cost = 350000;
		threat[] = {1,0.3,0.3};
		camouflage = 0.4;
		sensitivity = 3.5;

		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
		
		HEADGEAR_MACRO(ARMY_OCP_SNIPER_HELMET_POOL)

		linkedItems[] = {"rhsusf_ach_bare_des","rhsusf_iotv_ocp_teamleader","rhsusf_acc_M2010S",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des","rhsusf_iotv_ocp_teamleader","rhsusf_acc_M2010S",Standard_Equipment};

		weapons[] = {"rhs_weap_XM2010_d_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_XM2010_d_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
		magazines[] =
		{
			mag_8(rhsusf_5Rnd_300winmag_xm2010),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			mag_8(rhsusf_5Rnd_300winmag_xm2010),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

	};

	class rhsusf_army_ocp_sniper_m24sws: rhsusf_army_ocp_sniper
	{
		EdPrev(rhsusf_army_ocp_sniper_m24sws)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "Sniper (M24 SWS)";


		linkedItems[] = {"rhsusf_ach_bare_des","rhsusf_iotv_ocp_teamleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des","rhsusf_iotv_ocp_teamleader",Standard_Equipment};

		weapons[] = {"rhs_weap_m24sws_d_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m24sws_d_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
		magazines[] =
		{
			mag_5(rhsusf_5Rnd_762x51_m993_Mag),
			mag_2(rhsusf_5Rnd_762x51_m62_Mag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			mag_5(rhsusf_5Rnd_762x51_m993_Mag),
			mag_2(rhsusf_5Rnd_762x51_m62_Mag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

	};

	class rhsusf_army_ocp_sniper_m107: rhsusf_army_ocp_sniper
	{
		EdPrev(rhsusf_army_ocp_sniper_m107)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_SNIPER_M107";


		linkedItems[] = {"rhsusf_ach_bare_des","rhsusf_iotv_ocp_teamleader",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des","rhsusf_iotv_ocp_teamleader",Standard_Equipment};

		weapons[] = {"rhs_weap_M107_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_M107_leu","rhsusf_weap_m9","rhsusf_bino_lrf_Vector21","Throw","Put"};
		magazines[] =
		{
			mag_5(rhsusf_mag_10Rnd_STD_50BMG_M33),
			mag_2(rhsusf_mag_10Rnd_STD_50BMG_mk211),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			mag_5(rhsusf_mag_10Rnd_STD_50BMG_M33),
			mag_2(rhsusf_mag_10Rnd_STD_50BMG_mk211),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc"
		};

	};


	// Ground Crew

	class rhsusf_army_ocp_crewman: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_crewman)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_CREW";

		cost = 90000;
		camouflage = 1.6;
		sensitivity = 2.5;

		engineer = 1;
		
		HEADGEAR_MACRO(ARMY_OCP_CREW_HELMET_POOL)

		Items[] = {"FirstAidKit","rhsusf_ANPVS_14"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14"};

		linkedItems[]			= {"rhsusf_cvc_helmet","rhsusf_iotv_ocp",Standard_Equipment};
		respawnLinkedItems[]	= {"rhsusf_cvc_helmet","rhsusf_iotv_ocp",Standard_Equipment};

		weapons[]			= {"rhs_weap_m4_carryhandle","rhsusf_weap_m9","rhsusf_bino_m24_ARD","Throw","Put"};
		respawnWeapons[]	= {"rhs_weap_m4_carryhandle","rhsusf_weap_m9","rhsusf_bino_m24_ARD","Throw","Put"};

		magazines[] = 		{
			mag_2(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			mag_2(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};

		fsmDanger = "rhsusf\addons\rhsusf_c_troops\scripts\dangerCrew.fsm";
	};

	class rhsusf_army_ocp_combatcrewman: rhsusf_army_ocp_crewman
	{
		EdPrev(rhsusf_army_ocp_combatcrewman)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_CREW_COMBAT";

		linkedItems[]			= {"rhsusf_cvc_helmet","rhsusf_iotv_ocp",Standard_Equipment};
		respawnLinkedItems[]	= {"rhsusf_cvc_helmet","rhsusf_iotv_ocp",Standard_Equipment};
	};

	class rhsusf_army_ocp_driver: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_driver)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_DRIVER";

		engineer = 1;
		
		DISABLE_HEADGEAR_MACRO

		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};

		linkedItems[] = {"rhsusf_patrolcap_ocp","rhsusf_iotv_ocp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_patrolcap_ocp","rhsusf_iotv_ocp_rifleman",Standard_Equipment};

		weapons[] = {"rhs_weap_m16a4","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4","Throw","Put"};
		magazines[] = 		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red"
		};
	};

	class rhsusf_army_ocp_driver_armored: rhsusf_army_ocp_driver
	{
		EdPrev(rhsusf_army_ocp_driver_armored)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "$STR_RHSUSF_INF_DRIVER_ARM";
		
		HEADGEAR_MACRO(ARMY_OCP_HELMET_POOL)

		Items[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14","rhsusf_patrolcap_ocp"};

		linkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ocp","rhsusf_iotv_ocp_rifleman",Standard_Equipment};
	};

	// Helicopter Crew

	class rhsusf_army_ocp_helipilot: rhsusf_infantry_army_base
	{
		EdPrev(rhsusf_army_ocp_helipilot)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "Helicopter Pilot";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";

		cost = 160000;
		camouflage = 2.0;

		Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_patrolcap_ocp"};
		RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_patrolcap_ocp"};

		linkedItems[] = {"rhsusf_hgu56p","rhsusf_spcs_ocp",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_hgu56p","rhsusf_spcs_ocp",Standard_Equipment};
		
		HEADGEAR_MACRO(ARMY_OCP_HELI_PILOT_HELMET_POOL)


		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m9","Throw","Put"};
		magazines[] = 		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red"
		};
		respawnMagazines[] =
		{
			mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red"
		};
	};
	class rhsusf_army_ocp_ah64_pilot: rhsusf_army_ocp_helipilot
	{
		EdPrev(rhsusf_army_ocp_ah64_pilot)
		INFANTY_ACU_OEFCP_MACRO
		scope					= 2;
		displayName				= "AH-64 Pilot";
		
		DISABLE_HEADGEAR_MACRO
		
		Items[]					= {"FirstAidKit","rhsusf_patrolcap_ocp"};
		RespawnItems[]			= {"FirstAidKit","rhsusf_patrolcap_ocp"};
		linkedItems[]			= {"rhsusf_ihadss","rhsusf_spcs_ocp",Standard_Equipment};
		respawnLinkedItems[]	= {"rhsusf_ihadss","rhsusf_spcs_ocp",Standard_Equipment};
	};

	class rhsusf_army_ocp_helicrew: rhsusf_army_ocp_helipilot
	{
		EdPrev(rhsusf_army_ocp_helicrew)
		scope = 2;
		INFANTY_ACU_OEFCP_MACRO
		displayName= "Helicopter Crew";

		cost = 80000;
		
		HEADGEAR_MACRO(ARMY_OCP_HELI_CREW_HELMET_POOL)

		linkedItems[] = {"rhsusf_hgu56p_mask","rhsusf_spcs_ocp",Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_hgu56p_mask","rhsusf_spcs_ocp",Standard_Equipment};

		weapons[] = {"rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m9","Throw","Put"};
		magazines[] =
		{
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red"
		};
		respawnMagazines[] =
		{
			mag_4(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_red"
		};
	};