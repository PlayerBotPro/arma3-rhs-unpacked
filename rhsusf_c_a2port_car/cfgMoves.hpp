
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		rhs_passenger_apc_generic01 = "rhs_passenger_apc_generic01_settlein";
		rhs_passenger_apc_generic02 = "rhs_passenger_apc_generic02_settlein";
		rhs_passenger_apc_generic02b = "rhs_passenger_apc_generic02b_settlein";
		rhs_passenger_apc_generic03 = "rhs_passenger_apc_generic03_settlein";
		rhs_passenger_apc_generic03_low = "rhs_passenger_apc_generic03_low_settlein";
		rhs_passenger_apc_generic04 = "rhs_passenger_apc_generic04_settlein";
		rhs_passenger_apc_narrow_generic01 = "rhs_passenger_apc_narrow_generic01_settlein";
		rhs_passenger_apc_narrow_generic01_low = "rhs_passenger_apc_narrow_generic01_low_settlein";
		rhs_passenger_apc_narrow_generic02 = "rhs_passenger_apc_narrow_generic02_settlein";
		rhs_passenger_apc_narrow_generic02_low = "rhs_passenger_apc_narrow_generic02_low_settlein";
		rhs_passenger_apc_narrow_generic03 = "rhs_passenger_apc_narrow_generic03_settlein";
		rhs_passenger_apc_narrow_generic03still = "rhs_passenger_apc_narrow_generic03still_settlein";
		rhs_passenger_apc_generic01_ns = "rhs_passenger_apc_generic01";
		rhs_passenger_apc_generic02_ns = "rhs_passenger_apc_generic02";
		rhs_passenger_apc_generic02b_ns = "rhs_passenger_apc_generic02b";
		rhs_passenger_apc_generic03_ns = "rhs_passenger_apc_generic03";
		rhs_passenger_apc_generic04_ns = "rhs_passenger_apc_generic04";
		rhs_passenger_apc_narrow_generic01_ns = "rhs_passenger_apc_narrow_generic01";
		rhs_passenger_apc_narrow_generic02_ns = "rhs_passenger_apc_narrow_generic02";
		rhs_passenger_apc_narrow_generic03_ns = "rhs_passenger_apc_narrow_generic03";
		rhs_passenger_apc_narrow_generic03still_ns = "rhs_passenger_apc_narrow_generic03still";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_rhs_passenger_apc_generic01 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic01_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_generic01_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic01_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_generic01", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic01", 1};
			variantsAI[] = {"rhs_passenger_apc_generic01", 1};
			variantsPlayer[] = {"rhs_passenger_apc_generic01", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_generic01 : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic01.rtm";
			speed = 0.037453;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic01", 1};
		};
		class KIA_rhs_passenger_apc_generic02 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_generic02_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_generic02", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
			variantsAI[] = {"rhs_passenger_apc_generic02", 1};
			variantsPlayer[] = {"rhs_passenger_apc_generic02", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_generic02 : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02.rtm";
			speed = 0.037453;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
		};
		class rhs_passenger_apc_generic02b_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_generic02b", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
			variantsAI[] = {"rhs_passenger_apc_generic02b", 1};
			variantsPlayer[] = {"rhs_passenger_apc_generic02b", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_generic02b : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02.rtm";
			speed = 0.049917;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
		};
		class KIA_rhs_passenger_apc_generic03 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_generic03_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_generic03", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
			variantsAI[] = {"rhs_passenger_apc_generic03", 1};
			variantsPlayer[] = {"rhs_passenger_apc_generic03", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_generic03 : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03.rtm";
			speed = 0.037453;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
		};
		class rhs_passenger_apc_generic03_low_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03_low_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_generic03_low", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
			variantsAI[] = {"rhs_passenger_apc_generic03_low", 1};
			variantsPlayer[] = {"rhs_passenger_apc_generic03_low", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_generic03_low : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03_low.rtm";
			speed = 0.037453;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
		};
		class KIA_rhs_passenger_apc_generic04 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic04_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_generic04_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic04_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_generic04", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic04", 1};
			variantsAI[] = {"rhs_passenger_apc_generic04", 1};
			variantsPlayer[] = {"rhs_passenger_apc_generic04", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_generic04 : Crew {
			variantsAI[] = {"rhs_passenger_apc_generic04", 0.2, "rhs_passenger_apc_generic04still", 0.8};
			variantsPlayer[] = {"rhs_passenger_apc_generic04", 0.1, "rhs_passenger_apc_generic04still", 0.9};
			variantAfter[] = {33, 33, 33};
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic04.rtm";
			speed = -33;
			interpolateTo[] = {"rhs_passenger_apc_generic04still", 1, "KIA_rhs_passenger_apc_generic04", 1};
		};
		class rhs_passenger_apc_generic04still : rhs_passenger_apc_generic04 {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic04still.rtm";
			speed = -33;
			interpolateTo[] = {"rhs_passenger_apc_generic04", 1, "KIA_rhs_passenger_apc_generic04", 1};
		};
		class KIA_rhs_passenger_apc_narrow_generic01 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_narrow_generic01_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_narrow_generic01", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
			variantsAI[] = {"rhs_passenger_apc_narrow_generic01", 1};
			variantsPlayer[] = {"rhs_passenger_apc_narrow_generic01", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_narrow_generic01 : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01.rtm";
			speed = 0.049917;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
		};
		class rhs_passenger_apc_narrow_generic01_low_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_low_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_narrow_generic01_low", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
			variantsAI[] = {"rhs_passenger_apc_narrow_generic01_low", 1};
			variantsPlayer[] = {"rhs_passenger_apc_narrow_generic01_low", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_narrow_generic01_low : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_low.rtm";
			speed = 0.049917;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
		};
		class KIA_rhs_passenger_apc_narrow_generic02 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_narrow_generic02_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_narrow_generic02", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
			variantsAI[] = {"rhs_passenger_apc_narrow_generic02", 1};
			variantsPlayer[] = {"rhs_passenger_apc_narrow_generic02", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_narrow_generic02 : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02.rtm";
			speed = 0.027076;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
		};
		class rhs_passenger_apc_narrow_generic02_low_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_low_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_narrow_generic02_low", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
			variantsAI[] = {"rhs_passenger_apc_narrow_generic02_low", 1};
			variantsPlayer[] = {"rhs_passenger_apc_narrow_generic02_low", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_narrow_generic02_low : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_low.rtm";
			speed = 0.027076;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
		};
		class KIA_rhs_passenger_apc_narrow_generic03 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_narrow_generic03_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_narrow_generic03", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
			variantsAI[] = {"rhs_passenger_apc_narrow_generic03", 1};
			variantsPlayer[] = {"rhs_passenger_apc_narrow_generic03", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_narrow_generic03 : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03.rtm";
			speed = 0.062893;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
		};
		class rhs_passenger_apc_narrow_generic03_low_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_low_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_narrow_generic03_low", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
			variantsAI[] = {"rhs_passenger_apc_narrow_generic03_low", 1};
			variantsPlayer[] = {"rhs_passenger_apc_narrow_generic03_low", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_narrow_generic03_low : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_low.rtm";
			speed = 0.062893;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
		};
		class rhs_passenger_apc_narrow_generic03still_settlein : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03still_settlein.rtm";
			speed = -1.5;
			looped = 0;
			connectTo[] = {"rhs_passenger_apc_narrow_generic03still", 1};
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
			variantsAI[] = {"rhs_passenger_apc_narrow_generic03still", 1};
			variantsPlayer[] = {"rhs_passenger_apc_narrow_generic03still", 1};
			variantAfter[] = {1.5, 1.5, 1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class rhs_passenger_apc_narrow_generic03still : Crew {
			file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03still.rtm";
			speed = 0.062893;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
		};
	};
};