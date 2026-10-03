class rhsgref_group_hidf_m113
{
	name = "Mechanized (M113)";
	aliveCategory="Mechanized";
	
	class rhsgref_group_hidf_m113_squad
	{
		name = "Squad";
		faction = "rhsgref_faction_hidf";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_squadleader";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "SERGEANT";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_m113a3_m2";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "PRIVATE";
			position[] = {7,0,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "PRIVATE";
			position[] = {9,0,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "PRIVATE";
			position[] = {11,0,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman";
			rank = "PRIVATE";
			position[] = {13,0,0};
		};
		class Unit8
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman_assist";
			rank = "PRIVATE";
			position[] = {15,0,0};
		};
	};
	class rhsgref_group_hidf_m113_squad_2mg: rhsgref_group_hidf_m113_squad
	{
		name = "Squad (2x GPMG)";

		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_teamleader";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman";
			rank = "CORPORAL";
			position[] = {-5,0,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner";
			rank = "PRIVATE";
			position[] = {3,0,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_m113a3_m2";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner";
			rank = "PRIVATE";
			position[] = {7,0,0};
		};
		class Unit5
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner_assist";
			rank = "PRIVATE";
			position[] = {9,0,0};
		};
		class Unit6
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "PRIVATE";
			position[] = {11,0,0};
		};
		class Unit7
		{
			side = 1;
			vehicle = "rhsgref_hidf_machinegunner_assist";
			rank = "PRIVATE";
			position[] = {13,0,0};
		};
		class Unit8
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman";
			rank = "PRIVATE";
			position[] = {15,0,0};
		};
	};
};