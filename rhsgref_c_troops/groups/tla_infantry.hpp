class rhsgref_group_tla_infantry
{
	name = "Revolutionaries";
	aliveCategory = "Infantry";

	class rhsgref_group_tla_insurgent_cell
	{
		name = "Insurgent Cell";
		faction = "rhsgref_faction_tla";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

		class Unit0
		{
			side = 0;
			vehicle = "rhsgref_tla_squadleader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "rhsgref_tla_rifleman_pm63";
			rank = "CORPORAL";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "rhsgref_tla_rifleman";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "rhsgref_tla_machinegunner";
			rank = "CORPORAL";
			position[] = { 5,0,0 };
		};
		class Unit4
		{
			side = 0;
			vehicle = "rhsgref_tla_grenadier";
			rank = "PRIVATE";
			position[] = { 7,0,0 };
		};
		class Unit5
		{
			side = 0;
			vehicle = "rhsgref_tla_rifleman_vz58";
			rank = "CORPORAL";
			position[] = { 9,0,0 };
		};
		class Unit6
		{
			side = 0;
			vehicle = "rhsgref_tla_machinegunner_mg42";
			rank = "PRIVATE";
			position[] = { 11,0,0 };
		};
		class Unit7
		{
			side = 0;
			vehicle = "rhsgref_tla_grenadier_m79";
			rank = "PRIVATE";
			position[] = { 13,0,0 };
		};
		class Unit8
		{
			side = 0;
			vehicle = "rhsgref_tla_specialist_at";
			rank = "PRIVATE";
			position[] = { 15,0,0 };
		};
		class Unit9
		{
			side = 0;
			vehicle = "rhsgref_tla_rifleman_M16";
			rank = "PRIVATE";
			position[] = { 17,0,0 };
		};
		class Unit10
		{
			side = 0;
			vehicle = "rhsgref_tla_medic";
			rank = "PRIVATE";
			position[] = { 19,0,0 };
		};
	};
};