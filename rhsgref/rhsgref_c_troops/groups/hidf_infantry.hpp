class rhsgref_group_hidf_infantry
{
	name = "Infantry";
	aliveCategory = "Infantry";

	class rhsgref_group_hidf_infantry_squad
	{
		name = "$STR_RHSUSF_GROUPS_SQUAD";
		faction = "rhsgref_faction_hidf";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_squadleader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "CORPORAL";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "CORPORAL";
			position[] = { 5,0,0 };
		};
		class Unit4
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 7,0,0 };
		};
		class Unit5
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "CORPORAL";
			position[] = { 9,0,0 };
		};
		class Unit6
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "PRIVATE";
			position[] = { 11,0,0 };
		};
		class Unit7
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 13,0,0 };
		};
		class Unit8
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "PRIVATE";
			position[] = { 15,0,0 };
		};
	};

	class rhs_group_hidf_infantry_weaponsquad
	{
		name = "$STR_RHSUSF_GROUPS_WEAPONSQUAD";
		faction = "rhsgref_faction_hidf";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_squadleader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner";
			rank = "CORPORAL";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner_assist";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "CORPORAL";
			position[] = { 5,0,0 };
		};
		class Unit4
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner";
			rank = "PRIVATE";
			position[] = { 7,0,0 };
		};
		class Unit5
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner_assist";
			rank = "CORPORAL";
			position[] = { 9,0,0 };
		};
		class Unit6
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 11,0,0 };
		};
		class Unit7
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "PRIVATE";
			position[] = { 13,0,0 };
		};
	};

	class rhs_group_hidf_infantry_squad_sniper
	{
		name = "$STR_RHSUSF_GROUPS_SQUAD_SNIPER";
		faction = "rhsgref_faction_hidf";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_squadleader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "CORPORAL";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_marksman";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "CORPORAL";
			position[] = { 5,0,0 };
		};
		class Unit4
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 7,0,0 };
		};
		class Unit5
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "CORPORAL";
			position[] = { 9,0,0 };
		};
		class Unit6
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "PRIVATE";
			position[] = { 11,0,0 };
		};
		class Unit7
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 13,0,0 };
		};
		class Unit8
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "PRIVATE";
			position[] = { 15,0,0 };
		};
	};
	class rhs_group_hidf_infantry_team
	{
		name = "$STR_RHSUSF_GROUPS_TEAM";
		faction = "rhsgref_faction_hidf";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "PRIVATE";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
	class rhs_group_hidf_infantry_team_MG
	{
		name = "$STR_RHSUSF_GROUPS_TEAM_MG";
		faction = "rhsgref_faction_hidf";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner";
			rank = "SERGEANT";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner_assist";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};

	/*
	class rhs_group_hidf_infantry_team_AA
	{
		name = "$STR_RHSUSF_GROUPS_TEAM_AA";
		faction = "rhsgref_faction_hidf";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "SERGEANT";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 1;
			//vehicle = "rhsgref_hidf_aa";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
	*/

	class rhs_group_hidf_infantry_team_AT
	{
		name = "$STR_RHSUSF_GROUPS_TEAM_AT";
		faction = "rhsgref_faction_hidf";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "SERGEANT";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
	class rhs_group_hidf_infantry_team_support
	{
		name = "$STR_RHSUSF_GROUPS_TEAM_SUPPORT";
		faction = "rhsgref_faction_hidf";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "SERGEANT";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_medic";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
};