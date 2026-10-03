class rhsgref_group_national_infantry
{
	name = "Infantry";
	aliveCategory="Infantry";

	class rhsgref_group_national_infantry_squad
	{
		name = "Group (Mixed)";
		faction = "rhsgref_faction_nationalist";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_nat_commander";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1 
		{
			side = 2;
			vehicle = "rhsgref_nat_grenadier";
			rank = "CORPORAL";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "rhsgref_nat_machinegunner"; // Should be RPK probably
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "rhsgref_nat_rifleman_m92"; // should be aksu
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "rhsgref_nat_militiaman_kar98k";
			rank = "PRIVATE";
			position[] = {7,0,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "rhsgref_nat_hunter";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "rhsgref_nat_saboteur";
			rank = "PRIVATE";
			position[] = {11,0,0};
		};
	};

	class rhsgref_group_national_infantry_squad_2
	{
		name = "Group (AT)";
		faction = "rhsgref_faction_nationalist";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_nat_commander";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1 
		{
			side = 2;
			vehicle = "rhsgref_nat_grenadier";
			rank = "CORPORAL";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "rhsgref_nat_machinegunner"; // Should be RPK probably
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "rhsgref_nat_rifleman_m92"; // should be aksu
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "rhsgref_nat_rifleman_m92"; 
			rank = "PRIVATE";
			position[] = {7,0,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "rhsgref_nat_hunter";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "rhsgref_nat_grenadier_rpg";
			rank = "PRIVATE";
			position[] = {11,0,0};
		};
	};
	class rhsgref_group_national_infantry_patrol
	{
		name = "Cell";
		faction = "rhsgref_faction_nationalist";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_nat_rifleman_m92";
			rank = "CORPORAL";
			position[] = {0,5,0};
		};
		class Unit1 
		{
			side = 2;
			vehicle = "rhsgref_nat_machinegunner"; // Should be RPK
			rank = "PRIVATE";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "rhsgref_nat_grenadier";
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "rhsgref_nat_militiaman_kar98k";
			rank = "PRIVATE";
			position[] = {5,0,0};
		};
	};

	class rhsgref_group_national_infantry_mg
	{
		name = "MG pair";
		faction = "rhsgref_faction_nationalist";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_nat_machinegunner";
			rank = "CORPORAL";
			position[] = {0,5,0};
		};
		class Unit1 
		{
			side = 2;
			vehicle = "rhsgref_nat_rifleman_m92";
			rank = "PRIVATE";
			position[] = {-5,0,0};
		};
	};

	class rhsgref_group_national_infantry_at
	{
		name = "AT pair";
		faction = "rhsgref_faction_nationalist";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_nat_grenadier_rpg";
			rank = "CORPORAL";
			position[] = {0,5,0};
		};
		class Unit1 
		{
			side = 2;
			vehicle = "rhsgref_nat_rifleman_m92";
			rank = "PRIVATE";
			position[] = {-5,0,0};
		};
	};
};