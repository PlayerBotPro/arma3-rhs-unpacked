
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_M113_Cargo01 = "RHS_M113_Cargo01";
		RHS_M113_Cargo02 = "RHS_M113_Cargo02";
		RHS_M113_Cargo03 = "RHS_M113_Cargo03";
		RHS_M113_Cargo04 = "RHS_M113_Cargo04";
		RHS_M113_Cargo01_FFV = "RHS_M113_Cargo01_FFV";
		RHS_M113_Cargo02_FFV = "RHS_M113_Cargo02_FFV";
		RHS_M113_Driver = "RHS_M113_Driver";
		RHS_M113_DriverOut = "RHS_M113_DriverOut";
		RHS_M113_Commander_In = "RHS_M113_Commander_In";
		RHS_M113_Commander_Out = "vehicle_turnout_2_Idle";
		RHS_M113_Gunner = "RHS_M113_Gunner";
		RHS_M113_Gunner_M2 = "RHS_M113_Gunner_M2";
		RHS_M113_Gunner_M2_Supply = "RHS_M113_Gunner_M2_Supply";
		RHS_M113_Gunner_M240 = "RHS_M113_Gunner_M240";
		RHS_M113_Gunner_Mk19 = "RHS_M113_Gunner_Mk19";
	};
	class Actions
	{
		class CargoActions;
		class rhs_m113_commander_in_actions: CargoActions
		{
			RHS_M113_Commander_out = "rhs_m113_commander_turnout";
		};
		class RifleStandActions;
		class FFV_BaseActions: RifleStandActions
		{
			RHS_M113_Commander_in	= "RHS_M113_Commander_turnin";
		};
	};
};

#define ANIM_PATH rhsusf\addons\rhsusf_c_m113\anims
#define ANIM_FPS(fps,frames) speed = __EVAL(fps/frames);

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class RHS_M113_KIA_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RHS_M113_KIA_Cargo01_FFV: RHS_M113_KIA_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Cargo01_FFV";
		};
		class RHS_M113_KIA_Cargo02_FFV: RHS_M113_KIA_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Cargo02_FFV";
		};
		class Crew;
		class PreciseCrew;
		class RHS_CrewIn_Base: Crew
		{

		};
		class RHS_M113_Cargo01_FFV: Crew
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_FFV";
			interpolateTo[] = {"RHS_M113_KIA_Cargo01_FFV",1};
			speed = 1e+010;
		};
		class RHS_M113_Cargo02_FFV: Crew
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_FFV";
			interpolateTo[] = {"RHS_M113_KIA_Cargo02_FFV",1};
			speed = 1e+010;
		};

		class RHS_M113_Cargo01: Crew
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01";
			interpolateTo[] = {"RHS_M113_KIA_Cargo01",0.1};
			connectTo[] = {"RHS_M113_Cargo01",0.1,"RHS_M113_Cargo01_V1",0.1,"RHS_M113_Cargo01_V2",0.1,"RHS_M113_Cargo01_V3",0.1,"RHS_M113_Cargo01_V4",0.1,"RHS_M113_Cargo01_V5",0.1};
			equivalentTo = "RHS_M113_Cargo01";
			variantsAI[] = {"RHS_M113_Cargo01",0.5,"RHS_M113_Cargo01_V1",0.12,"RHS_M113_Cargo01_V2",0.11,"RHS_M113_Cargo01_V3",0.1,"RHS_M113_Cargo01_V4",0.09,"RHS_M113_Cargo01_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_M113_Cargo01_V1: RHS_M113_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V1.rtm";
			connectTo[] = {"RHS_M113_Cargo01",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo01_V2: RHS_M113_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V2.rtm";
			connectTo[] = {"RHS_M113_Cargo01",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo01_V3: RHS_M113_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V3.rtm";
			connectTo[] = {"RHS_M113_Cargo01",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo01_V4: RHS_M113_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V4.rtm";
			connectTo[] = {"RHS_M113_Cargo01",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo01_V5: RHS_M113_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V5.rtm";
			connectTo[] = {"RHS_M113_Cargo01",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo02: Crew
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02";
			interpolateTo[] = {"RHS_M113_KIA_Cargo01",0.1};
			connectTo[] = {"RHS_M113_Cargo02",0.1,"RHS_M113_Cargo02_V1",0.1,"RHS_M113_Cargo02_V2",0.1,"RHS_M113_Cargo02_V3",0.1,"RHS_M113_Cargo02_V4",0.1,"RHS_M113_Cargo02_V5",0.1};
			equivalentTo = "RHS_M113_Cargo02";
			variantsAI[] = {"RHS_M113_Cargo02",0.5,"RHS_M113_Cargo02_V1",0.12,"RHS_M113_Cargo02_V2",0.11,"RHS_M113_Cargo02_V3",0.1,"RHS_M113_Cargo02_V4",0.09,"RHS_M113_Cargo02_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_M113_Cargo02_V1: RHS_M113_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V1.rtm";
			connectTo[] = {"RHS_M113_Cargo02",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo02_V2: RHS_M113_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V2.rtm";
			connectTo[] = {"RHS_M113_Cargo02",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo02_V3: RHS_M113_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V3.rtm";
			connectTo[] = {"RHS_M113_Cargo02",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo02_V4: RHS_M113_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V4.rtm";
			connectTo[] = {"RHS_M113_Cargo02",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo02_V5: RHS_M113_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V5.rtm";
			connectTo[] = {"RHS_M113_Cargo02",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo03: Crew
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03";
			interpolateTo[] = {"RHS_M113_KIA_Cargo01",0.1};
			connectTo[] = {"RHS_M113_Cargo03",0.1,"RHS_M113_Cargo03_V1",0.1,"RHS_M113_Cargo03_V2",0.1,"RHS_M113_Cargo03_V3",0.1,"RHS_M113_Cargo03_V4",0.1};
			equivalentTo = "RHS_M113_Cargo03";
			variantsAI[] = {"RHS_M113_Cargo03",0.5,"RHS_M113_Cargo03_V1",0.15,"RHS_M113_Cargo03_V2",0.13,"RHS_M113_Cargo03_V3",0.11,"RHS_M113_Cargo03_V4",0.11};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_M113_Cargo03_V1: RHS_M113_Cargo03
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03_V1.rtm";
			connectTo[] = {"RHS_M113_Cargo03",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo03_V2: RHS_M113_Cargo03
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03_V2.rtm";
			connectTo[] = {"RHS_M113_Cargo03",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo03_V3: RHS_M113_Cargo03
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03_V3.rtm";
			connectTo[] = {"RHS_M113_Cargo03",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo03_V4: RHS_M113_Cargo03
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03_V4.rtm";
			connectTo[] = {"RHS_M113_Cargo03",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo04: Crew
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04";
			interpolateTo[] = {"RHS_M113_KIA_Cargo01",0.1};
			connectTo[] = {"RHS_M113_Cargo04",0.1,"RHS_M113_Cargo04_V1",0.1,"RHS_M113_Cargo04_V2",0.1,"RHS_M113_Cargo04_V3",0.1,"RHS_M113_Cargo04_V4",0.1,"RHS_M113_Cargo04_V5",0.1};

			equivalentTo = "RHS_M113_Cargo04";
			variantsAI[] = {"RHS_M113_Cargo04",0.5,"RHS_M113_Cargo04_V1",0.12,"RHS_M113_Cargo04_V2",0.11,"RHS_M113_Cargo04_V3",0.1,"RHS_M113_Cargo04_V4",0.09,"RHS_M113_Cargo04_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_M113_Cargo04_V1: RHS_M113_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V1.rtm";
			connectTo[] = {"RHS_M113_Cargo04",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo04_V2: RHS_M113_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V2.rtm";
			connectTo[] = {"RHS_M113_Cargo04",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo04_V3: RHS_M113_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V3.rtm";
			connectTo[] = {"RHS_M113_Cargo04",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo04_V4: RHS_M113_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V4.rtm";
			connectTo[] = {"RHS_M113_Cargo04",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Cargo04_V5: RHS_M113_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V5.rtm";
			connectTo[] = {"RHS_M113_Cargo04",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Driver";
			interpolateTo[] = {"RHS_M113_KIA_Driver",1};
			speed = 1e+010;
		};
		class RHS_M113_KIA_Driver: RHS_M113_KIA_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Driver";
		};
		class RHS_M113_DriverOut: Crew
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_DriverOut";
			interpolateTo[] = {"RHS_M113_KIA_Driver",1};
			speed = 1e+010;
		};
		class RHS_M113_KIA_DriverOut: RHS_M113_KIA_Driver
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_DriverOut";
		};
		class RHS_M113_Gunner: Crew
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner";
			interpolateTo[] = {"RHS_M113_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_M113_Gunner_M2: RHS_M113_Gunner
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner_M2";
		};
		class RHS_M113_Gunner_M2_Supply: RHS_M113_Gunner
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner_M2_Supply";
		};
		class RHS_M113_Gunner_M240: RHS_M113_Gunner
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner_M240";
		};
		class RHS_M113_Gunner_Mk19: RHS_M113_Gunner
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner_Mk19";
		};
		class RHS_M113_KIA_Gunner: RHS_M113_KIA_Driver
		{
			file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Gunner";
		};

		///////////////
		// Commander //
		///////////////

		class RHS_M113_Commander_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\rhs_m113_commander_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_M113_Commander_in: RHS_CrewIn_Base
		{
			actions = "rhs_M113_Commander_in_actions";
			file = ANIM_PATH\rhs_m113_commander_in.rtm;
			interpolateTo[] = {
				"RHS_M113_Commander_in_Dead",1,
				"RHS_M113_Commander_turnout",0.1
			};
			interpolateFrom[] =
			{
				"RHS_M113_Commander_turnin",0.1
			};
			variantAfter[] = {5,5,5};
		};
		class RHS_M113_Commander_turnout: Crew
		{
			file = ANIM_PATH\rhs_m113_commander_turnout.rtm;
			speed = 1.25;

			looped				= 0;
			minplaytime			= 0.8;
			InterpolateTo[]		= {"vehicle_turnout_2_Idle",1.1};
			ConnectTo[]			= {vehicle_turnout_2_Idle,1};
			boundingSphere		= 3;
			interpolationspeed	= 3.2;
		};
		class RHS_M113_Commander_turnin: RHS_M113_Commander_turnout
		{
			file = ANIM_PATH\rhs_m113_commander_turnin.rtm;
			speed = 0.65;

			interpolateFrom[] = {
				"RHS_M113_Commander_turnout",1,
				"vehicle_turnout_2_idle_unarmed",1,
				"vehicle_turnout_2_Idle",1,
			};

			connectTo[]			= {"RHS_M113_Commander_in",1};
			interpolateTo[]		= {"RHS_M113_Commander_in_Dead",1};
			variantsAI[]		= {"RHS_M113_Commander_in",1};
			variantsPlayer[]	= {"RHS_M113_Commander_in",1};
			variantAfter[]		= {1.5,1.5,1.5};
			interpolationspeed	= 2;
		};
	};
};