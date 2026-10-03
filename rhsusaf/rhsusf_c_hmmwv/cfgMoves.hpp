
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_HMMWV_Cargo = "RHS_HMMWV_Cargo";
		RHS_HMMWV_Cargo01 = "RHS_HMMWV_Cargo01";
		RHS_HMMWV_Cargo02 = "RHS_HMMWV_Cargo02";
		RHS_HMMWV_Cargo03 = "RHS_HMMWV_Cargo03";
		RHS_HMMWV_Cargo04 = "RHS_HMMWV_Cargo04";
		RHS_HMMWV_Driver = "RHS_HMMWV_Driver";
		RHS_HMMWV_Gunner = "RHS_HMMWV_Gunner";
		RHS_HMMWV_Gunner02 = "RHS_HMMWV_Gunner02";
		RHS_HMMWV_Gunner03 = "RHS_HMMWV_Gunner03";
		RHS_HMMWV_Gunner03_in = "RHS_HMMWV_Gunner03_in";
		RHS_HMMWV_Gunner03a_in = "RHS_HMMWV_Gunner03a_in";
		RHS_HMMWV_Gunner03_GPK_in = "RHS_HMMWV_Gunner03_GPK_in";
		RHS_HMMWV_Gunner04 = "RHS_HMMWV_Gunner04";
		RHS_HMMWV_Gunner_TOW = "RHS_HMMWV_Gunner_TOW";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_HMMWV_Cargo: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo";
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo",0.1};
			connectTo[] = {"RHS_HMMWV_Cargo",0.1,"RHS_HMMWV_Cargo_V1",0.1,"RHS_HMMWV_Cargo_V2",0.1,"RHS_HMMWV_Cargo_V3",0.1,"RHS_HMMWV_Cargo_V4",0.1,"RHS_HMMWV_Cargo_V5",0.1};
			equivalentTo = "RHS_HMMWV_Cargo";
			variantsAI[] = {"RHS_HMMWV_Cargo",0.5,"RHS_HMMWV_Cargo_V1",0.12,"RHS_HMMWV_Cargo_V2",0.11,"RHS_HMMWV_Cargo_V3",0.1,"RHS_HMMWV_Cargo_V4",0.09,"RHS_HMMWV_Cargo_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_HMMWV_Cargo_V1: RHS_HMMWV_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V1.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo",0.1};
		};
		class RHS_HMMWV_Cargo_V2: RHS_HMMWV_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V2.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo",0.1};
		};
		class RHS_HMMWV_Cargo_V3: RHS_HMMWV_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V3.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo",0.1};
		};
		class RHS_HMMWV_Cargo_V4: RHS_HMMWV_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V4.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo",0.1};
		};
		class RHS_HMMWV_Cargo_V5: RHS_HMMWV_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V5.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo",0.1};
		};
		class RHS_HMMWV_KIA_Cargo: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class RHS_HMMWV_Cargo01: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo01";
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01",0.1};
			connectTo[] = {"RHS_HMMWV_Cargo01",0.1,"RHS_HMMWV_Cargo01_V1",0.1,"RHS_HMMWV_Cargo01_V2",0.1,"RHS_HMMWV_Cargo01_V3",0.1,"RHS_HMMWV_Cargo01_V4",0.1,"RHS_HMMWV_Cargo01_V5",0.1};
			equivalentTo = "RHS_HMMWV_Cargo01";
			variantsAI[] = {"RHS_HMMWV_Cargo01",0.5,"RHS_HMMWV_Cargo01_V1",0.12,"RHS_HMMWV_Cargo01_V2",0.11,"RHS_HMMWV_Cargo01_V3",0.1,"RHS_HMMWV_Cargo01_V4",0.09,"RHS_HMMWV_Cargo01_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_HMMWV_Cargo01_V1: RHS_HMMWV_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V1.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo01",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01",0.1};
		};
		class RHS_HMMWV_Cargo01_V2: RHS_HMMWV_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V2.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo01",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01",0.1};
		};
		class RHS_HMMWV_Cargo01_V3: RHS_HMMWV_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V3.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo01",0.1};
			speed = 0.337079;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01",0.1};
		};
		class RHS_HMMWV_Cargo01_V4: RHS_HMMWV_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V4.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo01",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01",0.1};
		};
		class RHS_HMMWV_Cargo01_V5: RHS_HMMWV_Cargo01
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V5.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo01",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01",0.1};
		};
		class RHS_HMMWV_KIA_Cargo01: RHS_HMMWV_KIA_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo01";
		};
		class RHS_HMMWV_Cargo02: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo02";
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02",0.1};
			connectTo[] = {"RHS_HMMWV_Cargo02",0.1,"RHS_HMMWV_Cargo02_V1",0.1,"RHS_HMMWV_Cargo02_V2",0.1,"RHS_HMMWV_Cargo02_V3",0.1,"RHS_HMMWV_Cargo02_V4",0.1,"RHS_HMMWV_Cargo02_V5",0.1};
			equivalentTo = "RHS_HMMWV_Cargo02";
			variantsAI[] = {"RHS_HMMWV_Cargo02",0.5,"RHS_HMMWV_Cargo02_V1",0.12,"RHS_HMMWV_Cargo02_V2",0.11,"RHS_HMMWV_Cargo02_V3",0.1,"RHS_HMMWV_Cargo02_V4",0.09,"RHS_HMMWV_Cargo02_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_HMMWV_Cargo02_V1: RHS_HMMWV_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V1.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo02",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02",0.1};
		};
		class RHS_HMMWV_Cargo02_V2: RHS_HMMWV_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V2.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo02",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02",0.1};
		};
		class RHS_HMMWV_Cargo02_V3: RHS_HMMWV_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V3.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo02",0.1};
			speed = 0.337079;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02",0.1};
		};
		class RHS_HMMWV_Cargo02_V4: RHS_HMMWV_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V4.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo02",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02",0.1};
		};
		class RHS_HMMWV_Cargo02_V5: RHS_HMMWV_Cargo02
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V5.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo02",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02",0.1};
		};
		class RHS_HMMWV_KIA_Cargo02: RHS_HMMWV_KIA_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo02";
		};
		class RHS_HMMWV_Cargo03: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo03";
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03",0.1};
			connectTo[] = {"RHS_HMMWV_Cargo03",0.1,"RHS_HMMWV_Cargo03_V1",0.1,"RHS_HMMWV_Cargo03_V2",0.1,"RHS_HMMWV_Cargo03_V3",0.1,"RHS_HMMWV_Cargo03_V4",0.1,"RHS_HMMWV_Cargo03_V5",0.1};
			equivalentTo = "RHS_HMMWV_Cargo03";
			variantsAI[] = {"RHS_HMMWV_Cargo03",0.5,"RHS_HMMWV_Cargo03_V1",0.12,"RHS_HMMWV_Cargo03_V2",0.11,"RHS_HMMWV_Cargo03_V3",0.1,"RHS_HMMWV_Cargo03_V4",0.09,"RHS_HMMWV_Cargo03_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_HMMWV_Cargo03_V1: RHS_HMMWV_Cargo03
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V1.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo03",0.1};
			speed = 0.3125;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03",0.1};
		};
		class RHS_HMMWV_Cargo03_V2: RHS_HMMWV_Cargo03
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V2.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo03",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03",0.1};
		};
		class RHS_HMMWV_Cargo03_V3: RHS_HMMWV_Cargo03
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V3.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo03",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03",0.1};
		};
		class RHS_HMMWV_Cargo03_V4: RHS_HMMWV_Cargo03
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V4.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo03",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03",0.1};
		};
		class RHS_HMMWV_Cargo03_V5: RHS_HMMWV_Cargo03
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V5.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo03",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03",0.1};
		};
		class RHS_HMMWV_KIA_Cargo03: RHS_HMMWV_KIA_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo03";
		};
		class RHS_HMMWV_Cargo04: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo04";
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04",0.1};
			connectTo[] = {"RHS_HMMWV_Cargo04",0.1,"RHS_HMMWV_Cargo04_V1",0.1,"RHS_HMMWV_Cargo04_V2",0.1,"RHS_HMMWV_Cargo04_V3",0.1,"RHS_HMMWV_Cargo04_V4",0.1,"RHS_HMMWV_Cargo04_V5",0.1};
			equivalentTo = "RHS_HMMWV_Cargo04";
			variantsAI[] = {"RHS_HMMWV_Cargo04",0.5,"RHS_HMMWV_Cargo04_V1",0.12,"RHS_HMMWV_Cargo04_V2",0.11,"RHS_HMMWV_Cargo04_V3",0.1,"RHS_HMMWV_Cargo04_V4",0.09,"RHS_HMMWV_Cargo04_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_HMMWV_Cargo04_V1: RHS_HMMWV_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V1.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo04",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04",0.1};
		};
		class RHS_HMMWV_Cargo04_V2: RHS_HMMWV_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V2.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo04",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04",0.1};
		};
		class RHS_HMMWV_Cargo04_V3: RHS_HMMWV_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V3.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo04",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04",0.1};
		};
		class RHS_HMMWV_Cargo04_V4: RHS_HMMWV_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V4.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo04",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04",0.1};
		};
		class RHS_HMMWV_Cargo04_V5: RHS_HMMWV_Cargo04
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V5.rtm";
			connectTo[] = {"RHS_HMMWV_Cargo04",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04",0.1};
		};
		class RHS_HMMWV_KIA_Cargo04: RHS_HMMWV_KIA_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo04";
		};
		class RHS_HMMWV_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Driver";
			interpolateTo[] = {"RHS_HMMWV_KIA_Driver",1};
			speed = 1e+010;
		};
		class RHS_HMMWV_KIA_Driver: RHS_HMMWV_KIA_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Driver";
		};
		class RHS_HMMWV_Gunner: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_HMMWV_KIA_Gunner: RHS_HMMWV_KIA_Cargo
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Gunner";
		};
		class RHS_HMMWV_Gunner02: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner02";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_HMMWV_Gunner03: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner03";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_HMMWV_Gunner03_in: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner03_in";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			boundingSphere = 2.5;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
			rightLegIKCurve[] = {0};
			leftLegIKCurve[] = {0};
		};
		class KIA_RHS_HMMWV_Gunner03a_in : DefaultDie {
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Gunner03a_in";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
			boundingSphere = 2.5;
		};
		class RHS_HMMWV_Gunner03a_in: RHS_HMMWV_Gunner03_in
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner03a_in";
			speed = 0.037975;
			interpolateTo[] = {"KIA_RHS_HMMWV_Gunner03a_in", 1};
		};
		class RHS_HMMWV_Gunner03_GPK_in: RHS_HMMWV_Gunner03_in
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner03_GPK_in";
			speed = 0.037975;
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
		};
		class RHS_HMMWV_Gunner04: Crew
		{
			file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner04";
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_HMMWV_Gunner_TOW: RHS_HMMWV_Gunner03
		{
			file = "\rhsusf\addons\rhsusf_c_hmmwv\anims\rhs_hmmwv_gunner_tow";
		};
	};
};