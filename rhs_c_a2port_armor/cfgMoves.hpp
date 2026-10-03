
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_ZSU_Commander = "RHS_ZSU_Commander";
		RHS_ZSU_CommanderOUT = "RHS_ZSU_CommanderOUT";
		RHS_ZSU_Gunner = "RHS_ZSU_Gunner";
		RHS_ZSU_GunnerOut = "RHS_ZSU_GunnerOut";
		RHS_ZSU_Driver = "RHS_ZSU_Driver";

		RHS_BTR60_Driver = "RHS_BTR60_Driver";
		RHS_BTR60_DriverOut = "RHS_BTR60_DriverOut";
		RHS_BTR60_Commander = "RHS_BTR60_Commander";
		RHS_BTR60_CommanderOut = "RHS_BTR60_CommanderOut";
		RHS_BTR60_Gunner = "RHS_BTR60_Gunner";
		RHS_BTR60_Cargo01 = "RHS_BTR60_Cargo01";
		RHS_BTR60_Cargo02 = "RHS_BTR60_Cargo02";
		RHS_BTR60_Cargo03 = "RHS_BTR60_Cargo03";
		RHS_BTR60_Cargo04 = "RHS_BTR60_Cargo04";
	};
};
#define AnimD(name) 	class KIA_RHS_##name##: KIA_RHS_ZSU_Commander {\
				file = \rhsafrf\addons\rhs_a2port_armor\anim\KIA_##name##.rtm;\
			};
#define Anim(name,nameD) class RHS_##name##: Crew\
			{\
				file = \rhsafrf\addons\rhs_a2port_armor\anim\##name##.rtm;\
				interpolateTo[] = {KIA_RHS_##nameD##,1};\
			};
#define AnimM(name,nameD) class RHS_##name##: RHS_Btr60_Driver\
			{\
				file = \rhsafrf\addons\rhs_a2port_armor\anim\##name##.rtm;\
				interpolateTo[] = {KIA_RHS_##nameD##,1};\
			};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_RHS_ZSU_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_ZSU_Commander.rtm";
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
		class KIA_RHS_ZSU_Driver: KIA_RHS_ZSU_Commander
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\ZSU_Driver.rtm";
		};
		AnimD(ZSU_Gunner)

		Anim(ZSU_Gunner,ZSU_Gunner)
		Anim(ZSU_GunnerOut,ZSU_Gunner)
		Anim(ZSU_Commander,ZSU_Commander)
		Anim(ZSU_CommanderOut,ZSU_Commander)
		Anim(ZSU_Driver,ZSU_Driver)

		Anim(BTR60_Driver,BTR60_Driver)
		/*class RHS_Btr60_Driver: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\Btr60_Driver.rtm";
			interpolateTo[] = {"KIA_RHS_Btr60_Driver",1};

			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};*/
		AnimM(BTR60_Commander,BTR60_Commander)
		AnimM(BTR60_Gunner,BTR60_Gunner)

		Anim(BTR60_DriverOut,BTR60_DriverOut)
		Anim(BTR60_CommanderOut,BTR60_CommanderOut)

		AnimD(BTR60_Gunner)
		AnimD(BTR60_Driver)
		AnimD(BTR60_Commander)
		AnimD(BTR60_DriverOut)
		AnimD(BTR60_CommanderOut)
		AnimD(BTR60_Cargo01)
		AnimD(BTR60_Cargo02)

		class RHS_BTR60_Cargo01: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01";
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo01",0.1};
			connectTo[] = {"RHS_BTR60_Cargo01",0.1,"RHS_BTR60_Cargo01_V1",0.1,"RHS_BTR60_Cargo01_V2",0.1,"RHS_BTR60_Cargo01_V3",0.1,"RHS_BTR60_Cargo01_V4",0.1,"RHS_BTR60_Cargo01_V5",0.1};
			equivalentTo = "RHS_BTR60_Cargo01";
			variantsAI[] = {"RHS_BTR60_Cargo01",0.5,"RHS_BTR60_Cargo01_V1",0.12,"RHS_BTR60_Cargo01_V2",0.11,"RHS_BTR60_Cargo01_V3",0.1,"RHS_BTR60_Cargo01_V4",0.09,"RHS_BTR60_Cargo01_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_BTR60_Cargo01_V1: RHS_BTR60_Cargo01
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V1.rtm";
			connectTo[] = {"RHS_BTR60_Cargo01",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo01",0.1};
		};
		class RHS_BTR60_Cargo01_V2: RHS_BTR60_Cargo01
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V2.rtm";
			connectTo[] = {"RHS_BTR60_Cargo01",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo01",0.1};
		};
		class RHS_BTR60_Cargo01_V3: RHS_BTR60_Cargo01
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V3.rtm";
			connectTo[] = {"RHS_BTR60_Cargo01",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo01",0.1};
		};
		class RHS_BTR60_Cargo01_V4: RHS_BTR60_Cargo01
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V4.rtm";
			connectTo[] = {"RHS_BTR60_Cargo01",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo01",0.1};
		};
		class RHS_BTR60_Cargo01_V5: RHS_BTR60_Cargo01
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V5.rtm";
			connectTo[] = {"RHS_BTR60_Cargo01",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo01",0.1};
		};
		class RHS_BTR60_Cargo02: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02";
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
			connectTo[] = {"RHS_BTR60_Cargo02",0.1,"RHS_BTR60_Cargo02_V1",0.1,"RHS_BTR60_Cargo02_V2",0.1,"RHS_BTR60_Cargo02_V3",0.1,"RHS_BTR60_Cargo02_V4",0.1,"RHS_BTR60_Cargo02_V5",0.1};
			equivalentTo = "RHS_BTR60_Cargo02";
			variantsAI[] = {"RHS_BTR60_Cargo02",0.5,"RHS_BTR60_Cargo02_V1",0.12,"RHS_BTR60_Cargo02_V2",0.11,"RHS_BTR60_Cargo02_V3",0.1,"RHS_BTR60_Cargo02_V4",0.09,"RHS_BTR60_Cargo02_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_BTR60_Cargo02_V1: RHS_BTR60_Cargo02
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V1.rtm";
			connectTo[] = {"RHS_BTR60_Cargo02",0.1};
			speed = 0.3125;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo02_V2: RHS_BTR60_Cargo02
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V2.rtm";
			connectTo[] = {"RHS_BTR60_Cargo02",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo02_V3: RHS_BTR60_Cargo02
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V3.rtm";
			connectTo[] = {"RHS_BTR60_Cargo02",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo02_V4: RHS_BTR60_Cargo02
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V4.rtm";
			connectTo[] = {"RHS_BTR60_Cargo02",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo02_V5: RHS_BTR60_Cargo02
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V5.rtm";
			connectTo[] = {"RHS_BTR60_Cargo02",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo03: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03";
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
			connectTo[] = {"RHS_BTR60_Cargo03",0.1,"RHS_BTR60_Cargo03_V1",0.1,"RHS_BTR60_Cargo03_V2",0.1,"RHS_BTR60_Cargo03_V3",0.1,"RHS_BTR60_Cargo03_V4",0.1,"RHS_BTR60_Cargo03_V5",0.1};
			equivalentTo = "RHS_BTR60_Cargo03";
			variantsAI[] = {"RHS_BTR60_Cargo03",0.5,"RHS_BTR60_Cargo03_V1",0.12,"RHS_BTR60_Cargo03_V2",0.11,"RHS_BTR60_Cargo03_V3",0.1,"RHS_BTR60_Cargo03_V4",0.09,"RHS_BTR60_Cargo03_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_BTR60_Cargo03_V1: RHS_BTR60_Cargo03
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V1.rtm";
			connectTo[] = {"RHS_BTR60_Cargo03",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo03_V2: RHS_BTR60_Cargo03
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V2.rtm";
			connectTo[] = {"RHS_BTR60_Cargo03",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo03_V3: RHS_BTR60_Cargo03
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V3.rtm";
			connectTo[] = {"RHS_BTR60_Cargo03",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo03_V4: RHS_BTR60_Cargo03
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V4.rtm";
			connectTo[] = {"RHS_BTR60_Cargo03",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo03_V5: RHS_BTR60_Cargo03
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V5.rtm";
			connectTo[] = {"RHS_BTR60_Cargo03",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo04: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04";
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
			connectTo[] = {"RHS_BTR60_Cargo04",0.1,"RHS_BTR60_Cargo04_V1",0.1,"RHS_BTR60_Cargo04_V2",0.1,"RHS_BTR60_Cargo04_V3",0.1,"RHS_BTR60_Cargo04_V4",0.1,"RHS_BTR60_Cargo04_V5",0.1};
			equivalentTo = "RHS_BTR60_Cargo04";
			variantsAI[] = {"RHS_BTR60_Cargo04",0.5,"RHS_BTR60_Cargo04_V1",0.12,"RHS_BTR60_Cargo04_V2",0.11,"RHS_BTR60_Cargo04_V3",0.1,"RHS_BTR60_Cargo04_V4",0.09,"RHS_BTR60_Cargo04_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_BTR60_Cargo04_V1: RHS_BTR60_Cargo04
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V1.rtm";
			connectTo[] = {"RHS_BTR60_Cargo04",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo04_V2: RHS_BTR60_Cargo04
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V2.rtm";
			connectTo[] = {"RHS_BTR60_Cargo04",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo04_V3: RHS_BTR60_Cargo04
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V3.rtm";
			connectTo[] = {"RHS_BTR60_Cargo04",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo04_V4: RHS_BTR60_Cargo04
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V4.rtm";
			connectTo[] = {"RHS_BTR60_Cargo04",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};
		class RHS_BTR60_Cargo04_V5: RHS_BTR60_Cargo04
		{
			file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V5.rtm";
			connectTo[] = {"RHS_BTR60_Cargo04",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_RHS_BTR60_Cargo02",0.1};
		};


	};
};