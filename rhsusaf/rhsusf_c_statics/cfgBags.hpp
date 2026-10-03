

	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};


	class RHS_M2_Gun_Bag: Weapon_Bag_Base
	{
		dlc = "RHS_USAF";

		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="M2 Gun Bag";
		mass=382;
		model = "\rhsusf\addons\rhsusf_heavyweapons\bags\StaticX.p3d";
		picture = "\rhsusf\addons\rhsusf_heavyweapons\bags\staticX_CA.paa";
		icon = "\rhsusf\addons\rhsusf_heavyweapons\bags\mapIcon_backpack_CA.paa";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		faction="rhs_faction_usarmy_d";
		editorSubcategory = "EdSubcat_DismantledWeapons";
	};
	class RHS_M2_Tripod_Bag: Weapon_Bag_Base
	{
		dlc = "RHS_USAF";

		scope=2;
		mass=250;
		author="$STR_A3_Bohemia_Interactive";
		displayName="M2 Tripod Bag";
		model = "\rhsusf\addons\rhsusf_heavyweapons\bags\StaticY.p3d";
		picture = "\rhsusf\addons\rhsusf_heavyweapons\bags\staticY_CA.paa";
		icon = "\rhsusf\addons\rhsusf_heavyweapons\bags\mapIcon_backpack_CA.paa";
		faction="rhs_faction_usarmy_d";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
			assembleTo="RHS_M2StaticMG_D";
			base[]=
			{
				"RHS_M2_Gun_Bag"
			};
		};
		editorSubcategory = "EdSubcat_DismantledWeapons";
	};

	class RHS_M2_MiniTripod_Bag: RHS_M2_Tripod_Bag
	{
		scope=2;
		mass=200;
		author="$STR_A3_Bohemia_Interactive";
		displayName="M3 Minitripod Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
			assembleTo="RHS_M2StaticMG_MiniTripod_D";
			base[]=
			{
				"RHS_M2_Gun_Bag"
			};
		};
	};
	class RHS_Mk19_Gun_Bag: RHS_M2_Gun_Bag
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="Mk19 Gun Bag";
		mass=302;
	};
	class RHS_Mk19_Tripod_Bag: RHS_M2_Tripod_Bag
	{
		scope=2;
		mass=139;
		author="$STR_A3_Bohemia_Interactive";
		displayName="Mk19 Tripod Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
			assembleTo="RHS_MK19_TriPod_D";
			base[]=
			{
				"RHS_Mk19_Gun_Bag"
			};
		};
	};
	class rhs_Tow_Gun_Bag: RHS_M2_Gun_Bag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="TOW Gun Bag";
		mass=302;
	};
	class rhs_TOW_Tripod_Bag: RHS_M2_Tripod_Bag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=139;
		displayName="TOW Tripod Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo="RHS_TOW_TriPod_WD";
			base[]=
			{
				"rhs_TOW_Gun_Bag"
			};
		};
	};
	class rhs_M252_Gun_Bag: RHS_M2_Gun_Bag
	{
		author=$STR_RHSUSF_AUTHOR_FULL;
		displayName="M252 Gun Bag";
		mass=162;
	};
	class rhs_M252_Bipod_Bag: RHS_M2_Tripod_Bag
	{
		author=$STR_RHSUSF_AUTHOR_FULL;
		mass=339;
		displayName="M252 Tripod Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
			assembleTo="RHS_M252_WD";
			base[]=
			{
				"rhs_M252_Gun_Bag"
			};
		};
	};