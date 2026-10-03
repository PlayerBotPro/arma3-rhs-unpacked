
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};


	class RHS_NSV_Gun_Bag: Weapon_Bag_Base
	{
		dlc = "RHS_AFRF";

		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="NSV Gun Bag";
		mass=382;
		model = "\rhsafrf\addons\rhs_heavyweapons\bags\StaticX.p3d";
		picture = "\rhsafrf\addons\rhs_heavyweapons\bags\staticX_CA.paa";
		icon = "\rhsafrf\addons\rhs_heavyweapons\bags\mapIcon_backpack_CA.paa";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		faction="rhs_faction_msv";

		editorSubcategory = "EdSubcat_DismantledWeapons";
	};
	class RHS_NSV_Tripod_Bag: Weapon_Bag_Base
	{
		dlc = "RHS_AFRF";

		scope=2;
		mass=250;
		author="$STR_A3_Bohemia_Interactive";
		displayName="NSV 6T7 Tripod Bag";
		model = "\rhsafrf\addons\rhs_heavyweapons\bags\StaticY.p3d";
		picture = "\rhsafrf\addons\rhs_heavyweapons\bags\staticY_CA.paa";
		icon = "\rhsafrf\addons\rhs_heavyweapons\bags\mapIcon_backpack_CA.paa";
		faction="rhs_faction_msv";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
			assembleTo="RHS_NSV_TriPod_MSV";
			base[]=
			{
				"RHS_NSV_Gun_Bag"
			};
		};

		editorSubcategory = "EdSubcat_DismantledWeapons";
	};
	class RHS_DShkM_Gun_Bag: RHS_NSV_Gun_Bag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="DShkM Gun Bag";
		mass=380;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		faction="rhs_faction_insurgents";
	};
	class RHS_DShkM_TripodHigh_Bag: RHS_NSV_Tripod_Bag
	{
		mass=420;
		author="$STR_A3_Bohemia_Interactive";
		displayName="DShkM High Tripod Bag";
		faction="rhs_faction_insurgents";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
			assembleTo="RHS_DSHKM_INS";
			base[]=
			{
				"RHS_DShkM_Gun_Bag"
			};
		};
	};
	class RHS_DShkM_TripodLow_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=300;
		displayName="DShkM Low Tripod Bag";
		faction="rhs_faction_insurgents";
		class assembleInfo: assembleInfo
		{
			assembleTo="rhs_DSHKM_Mini_TriPod_ins";
		};
	};
	class RHS_Kord_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		displayName="KORD Gun Bag";
		faction="rhs_faction_msv";
		mass=250;
	};
	class RHS_Kord_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=450;
		displayName="KORD 6T7 Tripod Bag";
		faction="rhs_faction_msv";
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_Kord_MSV";
			base[]=
			{
				"RHS_Kord_Gun_Bag"
			};
		};
	};

	class RHS_Metis_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		displayName="9K115-2 'Metis-M' Gun Bag";
		mass=80;
	};
	class RHS_Metis_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=70;
		displayName="9K115-2 'Metis-M' Tripod Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo="rhs_Metis_9k115_2_msv";
			base[]=
			{
				"RHS_Metis_Gun_Bag"
			};
		};
	};


	class RHS_Kornet_Gun_Bag: RHS_NSV_Gun_Bag
	{
		model = "\rhsafrf\addons\rhs_heavyweapons\bags\rhs_kornet_tube.p3d";
		displayName="9K133 'Kornet' Gun Bag";
		mass=80;
		hiddenselections[] =
		{
			"camo"
		};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_heavyweapons\kornet\data\rhs_kornet_tube_CO.paa"
		};
	};
	class RHS_Kornet_Tripod_Bag: RHS_NSV_Tripod_Bag
	{
		model = "\rhsafrf\addons\rhs_heavyweapons\bags\rhs_kornet_base.p3d";
		mass=70;
		displayName="9K133 'Kornet' Tripod Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo="rhs_Kornet_9M133_2_msv";
			base[]=
			{
				"RHS_Kornet_Gun_Bag"
			};
		};
	};

	class RHS_AGS30_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		displayName="AGS-30 Gun Bag";
		faction="rhs_faction_msv";
		mass=100;
	};
	class RHS_AGS30_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=60;
		displayName="AGS-30 6P17 Tripod Bag";
		faction="rhs_faction_msv";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
			assembleTo="RHS_AGS30_TriPod_MSV";
			base[]=
			{
				"RHS_AGS30_Gun_Bag"
			};
		};
	};

	class RHS_SPG9_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		displayName="SPG-9 Gun Bag";
		mass=470;
	};
	class RHS_SPG9_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=110;
		displayName="SPG-9 Tripod Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo="rhs_SPG9_INS";
			base[]=
			{
				"RHS_SPG9_Gun_Bag"
			};
		};
	};
	class RHS_Podnos_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		displayName="2B14-1 'Podnos' Gun Bag";
		mass=162;
	};
	class RHS_Podnos_Bipod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=139;
		displayName="2B14-1 'Podnos' Bipod Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
			assembleTo="rhs_2b14_82mm_msv";
			base[]=
			{
				"RHS_Podnos_Gun_Bag"
			};
		};
	};