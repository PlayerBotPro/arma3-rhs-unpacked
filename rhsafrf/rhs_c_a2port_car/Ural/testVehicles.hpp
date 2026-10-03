

	class RHS_Ural_AAF_Base: RHS_Ural_Base
	{
		accuracy = 0.5;
		side = 2;
		faction="IND_F";
		crew = "I_crew_F";
		typicalCargo[] = {"I_crew_F"};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_rus_co.paa",
			"\rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_camo_co.paa"
		};
	};
	class RHS_Ural_AAF_01: RHS_Ural_AAF_Base
	{
		scope=2;
		displayName="Ural-4320";
	};
	class RHS_Ural_Open_AAF_01: RHS_Ural_AAF_Base
	{
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
	};
	class RHS_Ural_Support_Base_01: RHS_Ural_AAF_Base
	{
		transportSoldier=2;
		vehicleclass = "Support";
	};
	class RHS_Ural_Ammo_AAF_01: RHS_Ural_Support_Base_01
	{
		scope=2;
		displayName="Ural-4320 Ammo";
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_reammo.p3d";

		transportammo = 2000;
	};
	class RHS_Ural_Repair_AAF_01: RHS_Ural_Support_Base_01
	{
		scope=2;
		displayName="Ural-4320 Repair";
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_repair.p3d";

		transportrepair = "2e+008";
	};
	class RHS_Ural_Fuel_AAF_01: RHS_Ural_Support_Base_01
	{
		scope=2;
		displayName="Ural-4320 Fuel";
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_refuel.p3d";
		icon = "\A3\soft_f_gamma\Truck_02\data\UI\Map_Truck_02_fuel_CA.paa";
		transportfuel = 3000;
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_rus_co.paa",
			"\rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_cdf_co.paa",
			"\rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_fuel_chdkz_co.paa"
		};
	};

	class RHS_BM21_AAF_01:  RHS_Ural_BaseTurret
	{
		scope=2;

		accuracy = 0.5;
		side = 2;
		faction="IND_F";
		crew = "I_crew_F";
		typicalCargo[] = {"I_crew_F"};

		hiddenselections[] = {"camo1", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_rus_co.paa",
			"\rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_BM21_RUS_CO.paa"
		};
		displayName="BM-21 Grad";
		transportSoldier=1;
		model="\rhsafrf\addons\rhs_a2port_car\Ural\bm21.p3d";
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_BM21_CA.paa";
		mapsize = 8;

		gunnerCompartments="Compartment2";
		availableforsupporttypes[] = {"Artillery"};
		artilleryscanner = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding = 1;
				body = "mainTurret";
				gun = "mainGun";
				minElev = 0;
				maxElev = 85;
				initElev = 11.5;
				weapons[] = {"rockets_230mm_GAT"};
				magazines[] = {"12Rnd_230mm_rockets"};
				gunnerAction = "passenger_apc_narrow_generic03still";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnergetInAction = "GetInHigh";
				gunnergetOutAction = "GetOutHigh";
				stabilizedInAxes = StabilizedInAxesNone;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
				lockWhenVehicleSpeed = 5;
			};
		};
	};