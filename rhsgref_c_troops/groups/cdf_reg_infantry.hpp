class rhsgref_group_cdf_reg_infantry
{
	name = "Regular Infantry";
	aliveCategory="Infantry";

	class rhsgref_group_cdf_reg_infantry_squad
	{
		name = "Squad";
		faction = "rhsgref_faction_cdf_ground";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_squadleader";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_machinegunner";
			rank = "CORPORAL";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_grenadier_rpg";
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_grenadier";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_rifleman_rpg75";
			rank = "PRIVATE";
			position[] = {7,0,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_machinegunner";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_grenadier_rpg";
			rank = "PRIVATE";
			position[] = {11,0,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_grenadier";
			rank = "PRIVATE";
			position[] = {13,0,0};
		};
		class Unit8
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_rifleman";
			rank = "PRIVATE";
			position[] = {15,0,0};
		};
		class Unit9
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_medic";
			rank = "PRIVATE";
			position[] = {18,0,0};
		};
	};

	class rhsgref_group_cdf_reg_infantry_squad_weap
	{
		name = "Squad (Weapons)";
		faction = "rhsgref_faction_cdf_ground";
		side = 2;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_squadleader";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_machinegunner";
			rank = "CORPORAL";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_machinegunner";
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_machinegunner";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_grenadier_rpg";
			rank = "PRIVATE";
			position[] = {7,0,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_grenadier_rpg";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_grenadier";
			rank = "PRIVATE";
			position[] = {11,0,0};
		};
		class Unit7 // Marksman
		{
			side = 2;
			vehicle = "rhsgref_cdf_reg_rifleman";
			rank = "PRIVATE";
			position[] = {13,0,0};
		};
	};
};