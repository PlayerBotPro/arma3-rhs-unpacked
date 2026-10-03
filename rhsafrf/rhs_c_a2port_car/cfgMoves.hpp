
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_UAZ_Driver = "RHS_UAZ_Driver";
		RHS_UAZ_Cargo01 = "RHS_UAZ_Cargo01";
		RHS_UAZ_Cargo02 = "RHS_UAZ_Cargo02";
		RHS_UAZ_Gunner01 = "RHS_UAZ_Gunner01";
		RHS_UAZ_Gunner02 = "RHS_UAZ_Gunner02";
		RHS_UAZ_Gunner03 = "RHS_UAZ_Gunner03";
		RHS_Ural_Driver = "RHS_Ural_Driver";
		RHS_Ural_Turnout01 = "RHS_Ural_Turnout01";

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
		class RHS_UAZ_Driver: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_driver.rtm";
			interpolateTo[] = {"RHS_KIA_UAZ_Driver",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
		};
		class RHS_KIA_UAZ_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\KIA_UAZ_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class RHS_Ural_Driver: RHS_UAZ_Driver
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\Ural_driver.rtm";
			interpolateTo[] = {"KIA_RHS_Ural_Driver",1};
		};
		class KIA_RHS_Ural_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\KIA_UAZ_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class KIA_RHS_UAZ_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\KIA_UAZ_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class RHS_UAZ_Cargo01: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_RHS_UAZ_Cargo01",0.1};
			connectTo[] = {"RHS_UAZ_Cargo01",0.1,"RHS_UAZ_Cargo01_V1",0.1,"RHS_UAZ_Cargo01_V2",0.1,"RHS_UAZ_Cargo01_V3",0.1};
			equivalentTo = "RHS_UAZ_Cargo01";
			variantsAI[] = {"RHS_UAZ_Cargo01",0.6,"RHS_UAZ_Cargo01_V1",0.1,"RHS_UAZ_Cargo01_V2",0.15,"RHS_UAZ_Cargo01_V3",0.07};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class RHS_UAZ_Cargo01_V1: RHS_UAZ_Cargo01
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_RHS_UAZ_Cargo01",0.1};
			connectTo[] = {"RHS_UAZ_Cargo01",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RHS_UAZ_Cargo01_V2: RHS_UAZ_Cargo01
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_RHS_UAZ_Cargo01",0.1};
			connectTo[] = {"RHS_UAZ_Cargo01",0.1};
			variantAfter[] = {2.5,2.5,2.5};
			speed = 0.39;
		};
		class RHS_UAZ_Cargo01_V3: RHS_UAZ_Cargo01
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V3.rtm";
			interpolateTo[] = {"KIA_RHS_UAZ_Cargo01",0.1};
			connectTo[] = {"RHS_UAZ_Cargo01",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class KIA_RHS_UAZ_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V0.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class RHS_UAZ_Cargo02: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_RHS_UAZ_Cargo02",0.1};
		};
		class RHS_UAZ_Gunner01: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Gunner01.rtm";
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
		};
		class RHS_UAZ_Gunner02: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Gunner02.rtm";
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
		};
		class RHS_UAZ_Gunner03: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_spg9_gunner.rtm";
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
		};
		class passenger_inside_2_Aim;
		class RHS_Ural_Turnout01: passenger_inside_2_Aim
		{
			actions = "passenger_inside_2Actions";
			file = "\A3\cargoposes_F_heli\anim\vehicle_passenger_stand_1aim_passenger_flatground_4aim.rtm";
			speed = -1.1;
			looped = 0;
			minplaytime = 0.95;
			InterpolateTo[] = {"passenger_inside_2_aim", 0.1};
			ConnectTo[] = {};
			variantsAI[] = {};
			variantsPlayer[] = {};
		};
		class RHS_Ural_Turnout01a: RHS_UAZ_Driver
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_turnout1.rtm";
			interpolateTo[] = {"KIA_RHS_Ural_Driver",1};
		};

		class KIA_rhs_passenger_apc_generic01 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic01_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_generic01_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic01_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic01.rtm";
			speed = 0.037453;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic01", 1};
		};
		class KIA_rhs_passenger_apc_generic02 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_generic02_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02.rtm";
			speed = 0.037453;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
		};
		class rhs_passenger_apc_generic02b_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02.rtm";
			speed = 0.049917;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
		};
		class KIA_rhs_passenger_apc_generic03 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_generic03_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03.rtm";
			speed = 0.037453;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
		};
		class rhs_passenger_apc_generic03_low_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03_low_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03_low.rtm";
			speed = 0.037453;
			interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
		};
		class KIA_rhs_passenger_apc_generic04 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic04_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_generic04_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic04_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic04.rtm";
			speed = -33;
			interpolateTo[] = {"rhs_passenger_apc_generic04still", 1, "KIA_rhs_passenger_apc_generic04", 1};
		};
		class rhs_passenger_apc_generic04still : rhs_passenger_apc_generic04 {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic04still.rtm";
			speed = -33;
			interpolateTo[] = {"rhs_passenger_apc_generic04", 1, "KIA_rhs_passenger_apc_generic04", 1};
		};
		class KIA_rhs_passenger_apc_narrow_generic01 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_narrow_generic01_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01.rtm";
			speed = 0.049917;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
		};
		class rhs_passenger_apc_narrow_generic01_low_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_low_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_low.rtm";
			speed = 0.049917;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
		};
		class KIA_rhs_passenger_apc_narrow_generic02 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_narrow_generic02_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02.rtm";
			speed = 0.027076;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
		};
		class rhs_passenger_apc_narrow_generic02_low_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_low_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_low.rtm";
			speed = 0.027076;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
		};
		class KIA_rhs_passenger_apc_narrow_generic03 : DefaultDie {
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_KIA.rtm";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class rhs_passenger_apc_narrow_generic03_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03.rtm";
			speed = 0.062893;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
		};
		class rhs_passenger_apc_narrow_generic03_low_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_low_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_low.rtm";
			speed = 0.062893;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
		};
		class rhs_passenger_apc_narrow_generic03still_settlein : Crew {
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03still_settlein.rtm";
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
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03still.rtm";
			speed = 0.062893;
			interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
		};
	};
};