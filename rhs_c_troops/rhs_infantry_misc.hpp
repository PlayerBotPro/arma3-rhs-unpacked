
	//- Pilots

	class rhs_rva_crew : rhs_infantry_msv_base
	{
		EdPrev(rhs_rva_crew)

		scope = 2;
		scopeCurator = 2;

		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_DRIVER";
		faction = "rhs_faction_rva";
		uniformClass = "rhs_uniform_rva_flora";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};

		engineer = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";

		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Euro",
			"Head_Asian"
		};

		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";

		Items[] = {"FirstAidKit","rhs_1PN138"};
		RespawnItems[] = {"FirstAidKit","rhs_1PN138"};

		linkedItems[] = {"rhs_fieldcap","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_vest_pistol_holster",Standard_Equipment};

		weapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_pya","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};

		hiddenSelections[] = {"camo1","camo2","camob"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_rva_co.paa"
		};
	};
	class rhs_rva_crew_armored : rhs_rva_crew
	{
		EdPrev(rhs_rva_crew_armored)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_DRIVER_ARMORED";

		linkedItems[] = {"rhs_fieldcap","rhs_6b23",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_6b23",Standard_Equipment};
	};
	class rhs_rva_crew_officer : rhs_rva_crew
	{
		EdPrev(rhs_rva_crew_officer)
		AUTHOR_MACRO
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

		displayName= "$STR_RHS_INF_OFFICER";

		linkedItems[] = {"rhs_fieldcap","rhs_vest_commander",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_vest_commander",Standard_Equipment};

		weapons[] = {"rhs_weap_aks74u","rhs_weap_makarov_pm","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_makarov_pm","Binocular","Throw","Put"};

		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_rva_crew_officer_armored : rhs_rva_crew_officer
	{
		EdPrev(rhs_rva_crew_officer_armored)
		displayName= "$STR_RHS_INF_OFFICER_ARMORED";

		linkedItems[] = {"rhs_fieldcap","rhs_6b23_crewofficer",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_6b23_crewofficer",Standard_Equipment};
	};
	class rhs_invisible_man: rhs_infantry_msv_base
	{
		scope = 1;
		displayName = "invisibru";
		uniformClass = "rhs_uniform_invisible";
		model = "\rhsafrf\addons\rhs_infantry\rhs_invisible_base.p3d";
	};
	
	
	///Lodu uniforms///
	//Afghanka/M88
	class rhs_afghanka_base: rhs_infantry_msv_base
	{
		scope = 1;
		uniformClass = "rhs_uniform_afghanka";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka.p3d";
		
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka01_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_co.paa"
		};
		selectionHeadWound = "head_injury";
		selectionBodyWound = "injury_body";
		selectionLArmWound = "injury_hands";
		selectionRArmWound = "injury_hands";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";
		selectionLArmWound1 = "injury_hands";
		selectionRArmWound1 = "injury_hands";
		selectionLLegWound1 = "injury_legs";
		selectionRLegWound1 = "injury_legs";
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\data\afghanka01_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka01_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka01_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\data\afghanka01_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_w2.rvmat",

				A3_Injury
			};
		};
	};
	class rhs_afghanka_boots_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_boots";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_boots.p3d";
		
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka01_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_co.paa"
		};
	};
	class rhs_afghanka_ttsko_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_ttsko";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\TTsko_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\TTsko_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_ttsko_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_ttsko";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\TTsko_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_pant_boots_TTsko_co.paa"
		};
	};
	class rhs_afghanka_ttsko_2_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_ttsko_2";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\TTsko_vest_var_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\TTsko_pant_var_co.paa"
		};
	};
	class rhs_afghanka_boots_ttsko_2_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_ttsko_2";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\TTsko_vest_var_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_pant_boots_TTsko_co.paa" //NEED BOOT PANTS TEXTURE
		};
	};
	class rhs_afghanka_klmk_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_klmk";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\KLMK_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\KLMK_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_klmk_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_klmk";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\KLMK_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_pant_boots_TTsko_co.paa" //NEED BOOT PANTS TEXTURE
		};
	};
	class rhs_afghanka_spetsodezhda_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_spetsodezhda";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\KLMK_BG_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\KLMK_BG_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_spetsodezhda_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_spetsodezhda";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\KLMK_BG_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_KLMK_BG_pant_boots_co.paa"
		};
	};
	class rhs_afghanka_grey_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_grey";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka01_grey_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka01_grey_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_grey_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_grey";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka01_grey_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_pant_boots_TTsko_co.paa" //NEED BOOT PANTS TEXTURE
		};
	};
	class rhs_afghanka_wdl_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_wdl";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\woodland_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\woodland_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_wdl_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_wdl";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\woodland_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_pant_boots_TTsko_co.paa" //NEED BOOT PANTS TEXTURE
		};
	};
	class rhs_afghanka_moldovan_ttsko_cold_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_moldovan_ttsko_cold";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\butanp_moldova_cold_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\butanp_moldova_cold_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_moldovan_ttsko_cold_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_moldovan_ttsko_cold";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\butanp_moldova_cold_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_moldova_pant_boots_butanp_hot_co.paa"
		};
	};
	class rhs_afghanka_moldovan_ttsko_hot_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_moldovan_ttsko_hot";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\butanp_moldova_hot_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\butanp_moldova_hot_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_moldovan_ttsko_hot_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_moldovan_ttsko_hot";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\butanp_moldova_hot_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\butanp_moldova_hot_pant_boots_co.paa"
		};
	};
	class rhs_afghanka_moldovan_ttsko_desat_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_moldovan_ttsko_desat";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_moldova_desat_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_moldova_desat_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_moldovan_ttsko_desat_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_moldovan_ttsko_desat";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_moldova_desat_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_moldova_desat_pant_boots_co.paa"
		};
	};
	class rhs_afghanka_moldovan_ttsko_blue_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_moldovan_ttsko_blue";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\moldova_blue_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\moldova_blue_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_moldovan_ttsko_blue_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_moldovan_ttsko_blue";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\moldova_blue_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\moldova_blue_pant_co.paa" //NEED BOOT PANTS TEXTURE
		};
	};
	class rhs_afghanka_vsr_1_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_vsr_1";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR03_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR03_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_vsr_1_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_vsr_1";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR03_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR03_pant_co.paa" //NEED BOOT PANTS TEXTURE
		};
	};
	class rhs_afghanka_vsr_2_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_vsr_2";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR04_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR04_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_vsr_2_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_vsr_2";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR04_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR04_pant_co.paa" //NEED BOOT PANTS TEXTURE
		};
	};
	class rhs_afghanka_vsr_3_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_vsr_3";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR02_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR02_pant_co.paa"
		};
	};
	class rhs_afghanka_boots_vsr_3_base: rhs_afghanka_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_boots_vsr_3";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR02_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR02_pant_co.paa" //NEED BOOT PANTS TEXTURE
		};
	};
	
	//Afghanka/M88 Winter
	class rhs_afghanka_winter_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_winter";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_winter.p3d";
		
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\data\afghanka01_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_w2.rvmat",

				A3_Injury
			};
		};
	};
	class rhs_afghanka_winter_boots_base: rhs_afghanka_winter_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_boots";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_winter_boots.p3d";
		
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_co.paa"
		};
	};
	class rhs_afghanka_winter_ttsko_base: rhs_afghanka_winter_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_ttsko";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\TTsko_winter_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\TTsko_pant_co.paa"
		};
	};
	class rhs_afghanka_winter_boots_ttsko_base: rhs_afghanka_winter_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_boots_ttsko";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\TTsko_winter_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_pant_boots_TTsko_co.paa"
		};
	};
	class rhs_afghanka_winter_vsr_base: rhs_afghanka_winter_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_vsr";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\afghanka_winter_vest_vsr_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR03_pant_co.paa"
		};
	};
	class rhs_afghanka_winter_boots_vsr_base: rhs_afghanka_winter_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_boots_vsr";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\afghanka_winter_vest_vsr_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_pant_boots_vsr_co.paa"
		};
	};
	class rhs_afghanka_winter_vsr_2_base: rhs_afghanka_winter_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_vsr_2";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\afghanka_winter_vest_vsr04_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR04_pant_co.paa"
		};
	};
	class rhs_afghanka_winter_boots_vsr_2_base: rhs_afghanka_winter_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_boots_vsr_2";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\afghanka_winter_vest_vsr04_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_pant_boots_vsr04_co.paa"
		};
	};
	class rhs_afghanka_winter_vsr_3_base: rhs_afghanka_winter_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_vsr_3";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\vsr02_winter_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\VSR02_pant_co.paa"
		};
	};
	class rhs_afghanka_winter_boots_vsr_3_base: rhs_afghanka_winter_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_boots_vsr_3";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\vsr02_winter_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_pant_boots_vsr04_co.paa"
		};
	};
	class rhs_afghanka_winter_moldovan_ttsko_base: rhs_afghanka_winter_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_moldovan_ttsko";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\butanp_moldova_cold_winter_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\butanp_moldova_cold_pant_co.paa"
		};
	};
	class rhs_afghanka_winter_boots_moldovan_ttsko_base: rhs_afghanka_winter_boots_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_boots_moldovan_ttsko";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\butanp_moldova_cold_winter_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_moldova_pant_boots_butanp_hot_co.paa"
		};
	};
	class rhs_afghanka_winter_spetsodezhda_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_spetsodezhda";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_winter.p3d";
		
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\afghanka_winter_KLMK_BG_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\KLMK_BG_pant_co.paa"
		};
	};
	class rhs_afghanka_winter_boots_spetsodezhda_base: rhs_afghanka_winter_base
	{
		uniformClass = "rhs_uniform_afghanka_winter_boots_spetsodezhda";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_winter_boots.p3d";
		
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\afghanka_winter\afghanka_winter_KLMK_BG_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\afghanka\afghanka_KLMK_BG_pant_boots_co.paa"
		};
	};
	
	//Afghanka/M88 2 pocket VDV special
	class rhs_afghanka_para_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_afghanka_para";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_para.p3d";
		
		hiddenSelections[] = {"camo","camo1","armpatch"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\para_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para_vest_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\data\para_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\para_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\para_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\data\para_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\para_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\para_pant_w2.rvmat",

				A3_Injury
			};
		};
	};
	class rhs_afghanka_para_ttsko_base: rhs_afghanka_para_base
	{
		uniformClass = "rhs_uniform_afghanka_para_ttsko";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\para\para_vest_butan_vdv1_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para\para_pant_butan_vdv1_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para\para_vest_butan_vdv1_co.paa",
		};
	};
	class rhs_afghanka_para_ttsko_2_base: rhs_afghanka_para_base
	{
		uniformClass = "rhs_uniform_afghanka_para_ttsko_2";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\para\para_vest_butan_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para\para_pant_butan_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para\para_vest_butan_co.paa"
		};
	};
	class rhs_afghanka_para_vsr_base: rhs_afghanka_para_base
	{
		uniformClass = "rhs_uniform_afghanka_para_vsr";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\para\para_vest_vsr93_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para\para_pant_vsr93_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para\para_vest_vsr93_co.paa"
		};
	};
	class rhs_afghanka_para_vsr_2_base: rhs_afghanka_para_base
	{
		uniformClass = "rhs_uniform_afghanka_para_vsr_2";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\para\para_vest_vsr93_sat_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para\para_pant_vsr93_sat_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\para\para_vest_vsr93_sat_co.paa"
		};
	};
	
	//Omon uniform????
	class rhs_omon_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_omon";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_omon.p3d";
		
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\omon_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\omon_pant_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\data\omon_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\omon_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\omon_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\data\omon_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\omon_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\omon_pant_w2.rvmat",

				A3_Injury
			};
		};
	};
	//Cossack uniform???
	class rhs_cossack_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_cossack";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_cossack.p3d";
		
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\cossack_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\cossack_pant_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\data\cossack_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\cossack_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\cossack_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\data\cossack_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\cossack_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\cossack_pant_w2.rvmat",

				A3_Injury
			};
		};
	};
	//KLMK Oversuit
	class rhs_klmk_oversuit_base: rhs_afghanka_base
	{
		uniformClass = "rhs_uniform_klmk_oversuit";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_KLMK_overall.p3d";
		
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\data\overall_klmk_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\data\overall_klmk_pant_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\data\overall_klmk_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\overall_klmk_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\overall_klmk_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\data\overall_klmk_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\overall_klmk_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\data\overall_klmk_pant_w2.rvmat",

				A3_Injury
			};
		};
	};
	
	///---Lodu Ratnik Gear---///
	class rhs_vkpo_base: rhs_infantry_msv_base
	{
		scope = 1;
		uniformClass = "rhs_uniform_vkpo";
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_base.p3d";
		
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
		selectionHeadWound = "head_injury";
		selectionBodyWound = "injury_body";
		selectionLArmWound = "injury_hands";
		selectionRArmWound = "injury_hands";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";
		selectionLArmWound1 = "injury_hands";
		selectionRArmWound1 = "injury_hands";
		selectionLLegWound1 = "injury_legs";
		selectionRLegWound1 = "injury_legs";
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_pant_w2.rvmat",

				A3_Injury
			};
		};
	};
	class rhs_vkpo_alt_base: rhs_vkpo_base
	{
		scope = 1;
		uniformClass = "rhs_uniform_vkpo_alt";
		
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_vest_blue_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\lodu_emr_pant_blue_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};

	class rhs_vkpo_gloves_base: rhs_vkpo_base
	{
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_base_gloves.p3d";
		scope = 1;
		uniformClass = "rhs_uniform_vkpo_gloves";
	};

	class rhs_vkpo_gloves_alt_base: rhs_vkpo_alt_base
	{
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_base_gloves.p3d";
		scope = 1;
		uniformClass = "rhs_uniform_vkpo_gloves_alt";
	};

	class rhs_6sh122_base: rhs_vkpo_base
	{
		scope = 0;
		uniformClass = "rhs_uniform_6sh122_v1";
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base.p3d";
		
		hiddenSelections[] = {"camo","camo1","camo2"};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant_w2.rvmat",

				A3_Injury
			};
		};
	};
	class rhs_6sh122_v1_base: rhs_6sh122_base
	{
		scope = 1;
		uniformClass = "rhs_uniform_6sh122_v1";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_co.paa"
		};
	};
	class rhs_6sh122_v2_base: rhs_6sh122_base
	{
		scope = 1;
		uniformClass = "rhs_uniform_6sh122_v2";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_fall_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_fall_co.paa"
		};
	};
	class rhs_6sh122_gloves_v1_base: rhs_6sh122_base
	{
		scope = 1;
		uniformClass = "rhs_uniform_6sh122_gloves_v1";
		
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class rhs_6sh122_gloves_v2_base: rhs_6sh122_gloves_v1_base
	{
		scope = 1;
		uniformClass = "rhs_uniform_6sh122_gloves_v2";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_fall_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_fall_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};