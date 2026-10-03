class rhsgref_group_hidf_hmmwv
{
	name = "Motorized (M1025)";
	aliveCategory="Motorized";
	
	class rhsgref_group_hidf_m1025_gmg
	{
		name = "Mot. Team (GMG)";
		side = 1;
		faction = "rhsgref_faction_hidf";

		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_m1025_mk19";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "CORPORAL";
			position[] = {-12,-12,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "PRIVATE";
			position[] = {14,-13,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
	};
	class rhsgref_group_hidf_m1025_hmg: rhsgref_group_hidf_m1025_gmg
	{
		name = "Mot. Team (HMG)";

		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

		class Unit0
		{
			side = 1;
			vehicle = "rhsgref_hidf_m1025_m2";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 1;
			vehicle = "rhsgref_hidf_autorifleman";
			rank = "CORPORAL";
			position[] = {-12,-12,0};
		};
		class Unit2
		{
			side = 1;
			vehicle = "rhsgref_hidf_rifleman_m72";
			rank = "PRIVATE";
			position[] = {14,-13,0};
		};
		class Unit3
		{
			side = 1;
			vehicle = "rhsgref_hidf_grenadier_m79";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
	};
};