
	class RHS_Ural_Civ_Base: RHS_Ural_Base
	{
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "CIV_F";
		side = 3;
		rhs_decalParameters[]={
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"numplate","numplate2",
			"n1",				// 2 - 4 number system
			"n2",
			"n3",
			"n4",
			"i1",				// 6 - right army
			"i2",				// 7 - left army
			"i3",				// 8 - right platoon
			"i4"
		};
	};
	class RHS_Ural_Civ_01: RHS_Ural_Civ_Base
	{
		EdPrev(rhs_Ural_Civ_01)
		scope=2;
		displayName="$STR_RHS_URAL4320BLUE_NAME";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_civil_co.paa",
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_civil_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class RHS_Ural_Civ_02: RHS_Ural_Civ_01
	{
		EdPrev(rhs_Ural_Civ_02)
		displayName="$STR_RHS_URAL4320YELLOW_NAME";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_civ1_co.paa",
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_civ1_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class RHS_Ural_Civ_03: RHS_Ural_Civ_01
	{
		EdPrev(rhs_Ural_Civ_03)
		displayName="$STR_RHS_URAL4320WORKER_NAME";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_civ2_co.paa",
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class RHS_Ural_Open_Civ_01: RHS_Ural_Civ_Base
	{
		EdPrev(rhs_Ural_Open_Civ_01)
		scope=2;
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_open_pic_ca.paa";
		displayName="$STR_RHS_URAL4320BLUEOPEN_NAME";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civil_co.paa",
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_civil_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class RHS_Ural_Open_Civ_02: RHS_Ural_Open_Civ_01
	{
		EdPrev(rhs_Ural_Open_Civ_02)
		displayName="$STR_RHS_URAL4320YELLOWOPEN_NAME";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ1_co.paa",
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_civ1_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class RHS_Ural_Open_Civ_03: RHS_Ural_Open_Civ_01
	{
		EdPrev(rhs_Ural_Open_Civ_03)
		displayName="$STR_RHS_URAL4320WORKEROPEN_NAME";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa",
			"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class Truck_02_base_F;

	class RHS_Civ_Truck_02_covered_F: Truck_02_base_F
	{
		mapSize=9.4499998;
		author="$STR_A3_Bohemia_Interactive";
		crew = "C_man_1";
		faction = "CIV_F";
		side = 3;
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_co.paa",
			"\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_co.paa"
		};
	};
	class RHS_Civ_Truck_02_transport_F: Truck_02_base_F
	{
		mapSize=9.4499998;
		author="$STR_A3_Bohemia_Interactive";
		crew = "C_man_1";
		faction = "CIV_F";
		side = 3;
		scope=1;
		displayName="$STR_A3_CfgVehicles_C_Truck_02_Dump0";
		model="\A3\soft_f_beta\Truck_02\Truck_02_transport_F";
		picture="\A3\soft_f_beta\Truck_02\data\UI\Truck_02_transport_CA.paa";
		Icon="\A3\soft_f_beta\Truck_02\data\UI\Map_Truck_02_dump_CA.paa";
		castCargoShadow=1;
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_co.paa",
			"\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_co.paa"
		};
	};