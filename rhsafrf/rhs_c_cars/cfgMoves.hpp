
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		rhs_tigr_driver = "rhs_tigr_driver";
		rhs_tigr_gunner_pkm = "rhs_tigr_gunner_pkm";
		rhs_tigr_gunner_ags = "rhs_tigr_gunner_ags";
		RHS_Tigr_CargoIn01 = "RHS_Tigr_CargoIn01";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class rhs_tigr_driver : Crew
		{
			file = "\rhsafrf\addons\rhs_c_cars\anims\tigr_driver.rtm";
			interpolateTo[] = {"KIA_rhs_gaz66_driver", 1};
		};
		class rhs_tigr_gunner_pkm : Crew
		{
			file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_gunner_pkm.rtm";
			interpolateTo[] = {"KIA_rhs_gaz66_driver", 1};
		};
		class rhs_tigr_gunner_ags : Crew
		{
			file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_gunner_ags.rtm";
			interpolateTo[] = {"KIA_rhs_gaz66_driver", 1};
		};
		class KIA_RHS_Tigr_CargoIn01: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_tigr\data\anims\KIA_Tigr_cargoIn01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class RHS_Tigr_CargoIn01: Crew
		{
                	canPullTrigger = 0;
			file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V0.rtm";
			interpolateTo[] = {"KIA_RHS_Tigr_CargoIn01",0.1};
			//connectTo[] = {"RHS_Tigr_CargoIn01",0.1,"RHS_Tigr_CargoIn01_V1",0.1,"RHS_Tigr_CargoIn01_V2",0.1,"RHS_Tigr_CargoIn01_V3",0.1};
			//equivalentTo = "RHS_Tigr_CargoIn01";
			//variantsAI[] = {"RHS_Tigr_CargoIn01",0.6,"RHS_Tigr_CargoIn01_V1",0.1,"RHS_Tigr_CargoIn01_V2",0.15,"RHS_Tigr_CargoIn01_V3",0.07};
			//variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class RHS_Tigr_CargoIn01_V1: RHS_Tigr_CargoIn01
		{
			file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V1.rtm";
			interpolateTo[] = {"KIA_RHS_Tigr_CargoIn01",0.1};
			connectTo[] = {"RHS_Tigr_CargoIn01",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RHS_Tigr_CargoIn01_V2: RHS_Tigr_CargoIn01
		{
			file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V2.rtm";
			interpolateTo[] = {"KIA_RHS_Tigr_CargoIn01",0.1};
			connectTo[] = {"RHS_Tigr_CargoIn01",0.1};
			variantAfter[] = {2.5,2.5,2.5};
			speed = 0.39;
		};
		class RHS_Tigr_CargoIn01_V3: RHS_Tigr_CargoIn01
		{
			file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V3.rtm";
			interpolateTo[] = {"KIA_RHS_Tigr_CargoIn01",0.1};
			connectTo[] = {"RHS_Tigr_CargoIn01",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class KIA_RHS_Tigr_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V0.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class RHS_Tigr_Cargo02: Crew
		{
			file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V0.rtm";
			interpolateTo[] = {"KIA_RHS_Tigr_Cargo02",0.1};
		};
	};
};