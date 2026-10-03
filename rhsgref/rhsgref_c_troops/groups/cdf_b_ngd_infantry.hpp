class rhsgref_group_cdf_b_ngd_infantry
{
	name = "Infantry";
	aliveCategory="Infantry";

	class rhsgref_group_cdf_b_ngd_infantry_squad
	{
		name = "Squad";
		faction = "rhsgref_faction_cdf_ground_b";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_cdf_b_ngd_squadleader";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_cdf_b_ngd_machinegunner";
			rank = "CORPORAL";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_cdf_b_ngd_grenadier_rpg";
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_cdf_b_ngd_grenadier";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "rhsgref_cdf_b_ngd_rifleman";
			rank = "PRIVATE";
			position[] = {7,0,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "rhsgref_cdf_b_ngd_machinegunner";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "rhsgref_cdf_b_ngd_grenadier_rpg";
			rank = "PRIVATE";
			position[] = {11,0,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "rhsgref_cdf_b_ngd_grenadier";
			rank = "PRIVATE";
			position[] = {13,0,0};
		};
		class Unit8
		{
			side = 1;
			vehicle = "rhsgref_cdf_b_ngd_rifleman";
			rank = "PRIVATE";
			position[] = {15,0,0};
		};
	};
};