
class CfgMovesBasic
{
	class DefaultDie;	// External class reference
	class ManActions
	{
		rhs_gaz66_driver = "rhs_gaz66_driver";
	};
};
class CfgMovesMaleSdr : CfgMovesBasic
{
	class States {

		class Crew;	// External class reference
		class KIA_rhs_gaz66_driver : DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_gaz66\Data\Anim\KIA_GAZ66_driver.rtm";
			speed = 0.5;
			looped = false;
			terminal = true;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = false;
		};

		class rhs_gaz66_driver : Crew {
			file = "\rhsafrf\addons\rhs_gaz66\Data\Anim\GAZ66_driver.rtm";
			interpolateTo[] = {"KIA_rhs_gaz66_driver", 1};
		};


		class KIA_GAZ66_Cargo01 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\KIA_UAZ_Cargo01.rtm";
			speed = 0.5;
			looped = false;
			terminal = true;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = false;
		};

		class GAZ66_Cargo01 : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
			connectTo[] = {"RHS_UAZ_Cargo01", 0.1, "RHS_UAZ_Cargo01_V1", 0.1, "RHS_UAZ_Cargo01_V2", 0.1, "RHS_UAZ_Cargo01_V3", 0.1};
			equivalentTo = "RHS_UAZ_Cargo01";
			variantsAI[] = {"RHS_UAZ_Cargo01", 0.6, "RHS_UAZ_Cargo01_V1", 0.1, "RHS_UAZ_Cargo01_V2", 0.15, "RHS_UAZ_Cargo01_V3", 0.07};
			variantAfter[] = {5, 10, 20};
			speed = 0.3;
		};

		class GAZ66_Cargo01_V1 : GAZ66_Cargo01 {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
			connectTo[] = {"RHS_UAZ_Cargo01", 0.1};
			variantAfter[] = {4, 4, 4};
			speed = 0.246;
		};

		class GAZ66_Cargo01_V2 : GAZ66_Cargo01 {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
			connectTo[] = {"RHS_UAZ_Cargo01", 0.1};
			variantAfter[] = {2.5, 2.5, 2.5};
			speed = 0.39;
		};

		class GAZ66_Cargo01_V3 : GAZ66_Cargo01 {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V3.rtm";
			interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
			connectTo[] = {"RHS_UAZ_Cargo01", 0.1};
			variantAfter[] = {5, 5, 5};
			speed = 0.197;
		};

	};
};

