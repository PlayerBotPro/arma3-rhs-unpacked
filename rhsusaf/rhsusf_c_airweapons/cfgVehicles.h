class cfgVehicles
{
	class MineBase;

	class rhsusf_mine_blu91: MineBase
	{
		scope = 2;
		ammo = "rhs_ammo_blu91";
		editorPreview = "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_mine_blu91";
		AUTHOR_MACRO
		displayName = "BLU-91/B";
		icon = "iconExplosiveAT";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_d";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "";
		};
	};

	class rhsusf_mine_blu92: MineBase
	{
		scope = 2;
		ammo = "rhs_ammo_blu92";
		editorPreview = "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_mine_blu92";
		AUTHOR_MACRO
		displayName = "BLU-92/B";
		icon = "iconExplosiveAP";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_d";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "";
		};
	};

	class rhsusf_uxo_blu97: MineBase
	{
		scope = 2;
		ammo = "rhs_ammo_uxo_blu97";
		editorPreview = "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_uxo_blu97";
		AUTHOR_MACRO
		displayName = $STR_RHSUSF_UXO_BLU97;
		icon = "iconExplosiveUXO";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_d";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";

		class Library
		{
			libTextDesc = "";
		};
	};

	/* MODULES */
//Zeus Modules
	class ModuleMine_APERSMine_F;
	class rhsusf_mine_blu91_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "BLU-91/B";
		explosive		= "rhs_ammo_blu91";
	};
	class rhsusf_mine_blu92_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= "BLU-92/B";
		explosive		= "rhs_ammo_blu92";
	};
	class rhsusf_uxo_blu97_module: ModuleMine_APERSMine_F
	{
		scopeCurator	= 2;
		displayName		= $STR_RHSUSF_UXO_BLU97;
		explosive		= "rhs_ammo_uxo_blu97";
	};
//Eden Sites Module
	class Site_F;
	class Site_Minefield: Site_F
	{
		class Arguments
		{
			class minesType
			{
				class values
				{
					class rhsusf_blu91_Mine
					{
						name = "BLU-91/B";
						value = "rhsusf_mine_blu91";
						default = 0;
					};
					class rhsusf_blu92_mine
					{
						name = "BLU-92/B";
						value = "rhsusf_mine_blu92";
						default = 0;
					};
					class rhsusf_blu97_uxo
					{
						name = $STR_RHSUSF_UXO_BLU97;
						value = "rhsusf_uxo_blu97";
						default = 0;
					};
				};
			};
		};
	};
};