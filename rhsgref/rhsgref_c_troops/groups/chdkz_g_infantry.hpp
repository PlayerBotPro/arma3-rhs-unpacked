class rhsgref_group_chdkz_ins_gurgents_infantry
{
	name = "Infantry";
	aliveCategory="Infantry";

	class rhsgref_group_chdkz_ins_gurgents_squad
	{
		name = "Team";
		faction = "rhsgref_faction_chdkz_g";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_ins_g_squadleader";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1 // Should b RPK
		{
			side = 2;
			vehicle = "rhsgref_ins_g_machinegunner";
			rank = "CORPORAL";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "rhsgref_ins_g_grenadier";
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "rhsgref_ins_g_grenadier_rpg";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "rhsgref_ins_g_rifleman_RPG26";
			rank = "PRIVATE";
			position[] = {7,0,0};
		};
		class Unit5 // Should be RPK
		{
			side = 2;
			vehicle = "rhsgref_ins_g_machinegunner";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "rhsgref_ins_g_rifleman";
			rank = "PRIVATE";
			position[] = {11,0,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "rhsgref_ins_g_rifleman_aks74";
			rank = "PRIVATE";
			position[] = {13,0,0};
		};
	};

	class rhsgref_group_chdkz_infantry_patrol
	{
		name = "Patrol";
		faction = "rhsgref_faction_nationalist";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_ins_g_rifleman";
			rank = "CORPORAL";
			position[] = {0,5,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "rhsgref_ins_g_machinegunner"; // Should be RPK
			rank = "PRIVATE";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "rhsgref_ins_g_grenadier"; // Should be RPK probably
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "rhsgref_ins_g_rifleman_RPG26"; // should be aksu
			rank = "PRIVATE";
			position[] = {5,0,0};
		};
	};

	class rhsgref_group_chdkz_infantry_mg
	{
		name = "MG pair";
		faction = "rhsgref_faction_nationalist";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_ins_g_machinegunner";
			rank = "CORPORAL";
			position[] = {0,5,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "rhsgref_ins_g_rifleman_RPG26";
			rank = "PRIVATE";
			position[] = {-5,0,0};
		};
	};

	class rhsgref_group_chdkz_infantry_at
	{
		name = "AT pair";
		faction = "rhsgref_faction_nationalist";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_ins_g_grenadier_rpg";
			rank = "CORPORAL";
			position[] = {0,5,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "rhsgref_ins_g_rifleman";
			rank = "PRIVATE";
			position[] = {-5,0,0};
		};
	};

	class rhsgref_group_chdkz_infantry_aa
	{
		name = "AA pair";
		faction = "rhsgref_faction_nationalist";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_ins_g_specialist_aa";
			rank = "CORPORAL";
			position[] = {0,5,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "rhsgref_ins_g_rifleman";
			rank = "PRIVATE";
			position[] = {-5,0,0};
		};
	};
};