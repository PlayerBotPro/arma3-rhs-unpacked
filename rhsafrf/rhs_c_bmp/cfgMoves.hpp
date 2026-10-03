
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		rhs_bmp1_commander = "rhs_bmp1_commander";
		rhs_bmp1_gunner = "rhs_bmp1_gunner";
		rhs_bmp1_gunner_launcher = "rhs_bmp1_gunner_launcher";
		rhs_bmp1_commanderIn = "rhs_bmp1_commanderIn";
		rhs_bmp1_gunnerIn = "rhs_bmp1_gunnerIn";
		rhs_bmp2_driver = "rhs_bmp2_driver";
		rhs_bmp2_commander = "rhs_bmp2_commander";
		rhs_bmp2_commanderIn = "rhs_bmp2_commanderIn";
		rhs_bmp2_gunner = "rhs_bmp2_gunner";
		rhs_bmp2_gunnerIn = "rhs_bmp2_gunnerIn";
		rhs_brmk1_commanderIn = "rhs_brmk1_commanderIn";

		rhs_bmp_Cargo = "rhs_BMP_Cargo01";
		rhs_bmp_cargostatic_01 = "rhs_bmp_cargostatic_01";
		rhs_bmp_cargostatic_02 = "rhs_bmp_cargostatic_02";
		rhs_bmp_cargostatic_03 = "rhs_bmp_cargostatic_03";
		rhs_bmp_cargostatic_04 = "rhs_bmp_cargostatic_04";
	};
};
class CfgMovesMaleSdr : CfgMovesBasic
{
	class States
	{
		class Crew;
		class rhs_crew_in: Default
		{
			actions = "CargoActions";
			aiming = "aimingNo";
			aimingBody = "aimingNo";
			legs = "legsNo";
			head = "headNo";
			disableWeapons = 1;
			interpolationRestart = 1;
			soundEdge[] = {0.45};
			//seems that bounding Sphere is crucial to hit detection
			boundingSphere = 2.5;
			canPullTrigger = 0;
			leaning = "crewShake";
			rightHandIKCurve[] = {1};
			leftHandIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class rhs_bmp1_commander : Crew
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_comm.rtm";
			interpolateTo[] = {"KIA_rhs_bmp1_commander",1};
		};
		class rhs_bmp1_commanderIn : rhs_crew_in
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_commanderIn.rtm";
			interpolateTo[] = {"KIA_rhs_bmp1_commanderin",1};
		};
		class rhs_bmp1_gunner : Crew
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_gunner.rtm";
			interpolateTo[] = {"KIA_rhs_bmp1_gunner",1};
		};
		class rhs_bmp1_gunner_launcher : Crew
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_gunner_launcher.rtm";
			interpolateTo[] = {"KIA_rhs_bmp1_gunner",1};
		};
		class rhs_bmp1_gunnerIn : rhs_crew_in
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_gunnerIn.rtm";
			interpolateTo[] = {"KIA_rhs_bmp1_gunnerin",1};
		};
		class rhs_BMP2_Driver: Crew
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_BMP2_Driver.rtm";
			interpolateTo[] = {"KIA_rhs_BMP2_Driver",1};
		};
		class KIA_rhs_BMP2_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_kia_BMP2_Driver.rtm";
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class rhs_bmp2_commander : Crew
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_comm.rtm";
			interpolateTo[] = {"KIA_rhs_bmp2_commander",1};
		};
		class rhs_bmp2_commanderIn : rhs_crew_in
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_commanderIn.rtm";
			interpolateTo[] = {"KIA_rhs_bmp2_commanderIn",1};
		};
		class rhs_bmp2_gunner : Crew
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_gunner.rtm";
			interpolateTo[] = {"KIA_rhs_bmp2_gunner",1};
		};
		class rhs_bmp2_gunnerIn : rhs_crew_in
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_gunnerIn.rtm";
			interpolateTo[] = {"KIA_rhs_bmp2_gunnerin",1};
		};
		class rhs_brmk1_commanderIn : rhs_crew_in
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_brmk1_commanderIn.rtm";
			interpolateTo[] = {"KIA_rhs_bmp2_commanderIn",1};
		};


		class KIA_rhs_bmp1_commander : KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\KIA_rhs_bmp1_comm.rtm";
		};
		class KIA_rhs_bmp1_gunner : KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\KIA_rhs_bmp1_gunner.rtm";
		};
		class KIA_rhs_bmp2_commander : KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\KIA_rhs_bmp2_comm.rtm";
		};
		class KIA_rhs_bmp2_gunner : KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\KIA_rhs_bmp2_gunner.rtm";
		};

		class KIA_rhs_bmp1_commanderIn : KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_commanderIn.rtm";
		};
		class KIA_rhs_bmp1_gunnerIn : KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_gunnerIn.rtm";
		};
		class KIA_rhs_bmp2_commanderIn : KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_commanderIn.rtm";
		};
		class KIA_rhs_bmp2_gunnerIn : KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_gunnerIn.rtm";
		};
		class KIA_rhs_brmk1_commanderIn : KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\rhs_brmk1_commanderIn.rtm";
		};

		class RHS_KIA_BMP2_Cargo01: KIA_rhs_BMP2_Driver
		{
			file = "\rhsafrf\addons\rhs_BMP\anims\KIA_BMP2_Cargo01.rtm";
		};
		class rhs_BMP_Cargo01: Crew
		{
			file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V0.rtm";
			interpolateTo[] = {"RHS_KIA_BMP2_Cargo01",0.1};
			connectTo[] = {"rhs_BMP_Cargo01",0.1,"rhs_BMP_Cargo01_V1",0.1,"rhs_BMP_Cargo01_V2",0.1,"rhs_BMP_Cargo01_V3",0.1,"rhs_BMP_Cargo01_V4",0.1};
			equivalentTo = "rhs_BMP_Cargo01";
			variantsAI[] = {"rhs_BMP_Cargo01",0.6,"rhs_BMP_Cargo01_V1",0.1,"rhs_BMP_Cargo01_V2",0.1,"rhs_BMP_Cargo01_V3",0.1,"rhs_BMP_Cargo01_V4",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class rhs_BMP_Cargo01_V1: rhs_BMP_Cargo01
		{
			file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V1.rtm";
			connectTo[] = {"rhs_BMP_Cargo01",0.1};
			speed = 0.236;
			variantAfter[] = {4,4,4};
		};
		class rhs_BMP_Cargo01_V2: rhs_BMP_Cargo01
		{
			file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V2.rtm";
			connectTo[] = {"rhs_BMP_Cargo01",0.1};
			speed = 0.169;
			variantAfter[] = {6,6,6};
		};
		class rhs_BMP_Cargo01_V3: rhs_BMP_Cargo01
		{
			file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V3.rtm";
			connectTo[] = {"rhs_BMP_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class rhs_BMP_Cargo01_V4: rhs_BMP_Cargo01
		{
			file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V4.rtm";
			connectTo[] = {"rhs_BMP_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};

		#define NoVariants  variantsPlayer[] = {};variantsAI[] = {};variantAfter[] = {0,0,0};connectTo[] = {};
		class rhs_bmp_cargostatic_01 : Crew
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic01.rtm";
			interpolateTo[] = {RHS_KIA_BMP2_Cargo01,1};
			connectTo[] = {"rhs_bmp_cargostatic_01_var0",0.25,"rhs_bmp_cargostatic_01_var1",0.25,"rhs_bmp_cargostatic_01_var2",0.25,"rhs_bmp_cargostatic_01_var3",0.25};
			equivalentTo = "rhs_bmp_cargostatic_01";
			variantsPlayer[] = {"rhs_bmp_cargostatic_01_var0",0.25,"rhs_bmp_cargostatic_01_var1",0.25,"rhs_bmp_cargostatic_01_var2",0.25,"rhs_bmp_cargostatic_01_var3",0.25};
			variantsAI[] = {"rhs_bmp_cargostatic_01_var0",0.25,"rhs_bmp_cargostatic_01_var1",0.25,"rhs_bmp_cargostatic_01_var2",0.25,"rhs_bmp_cargostatic_01_var3",0.25};
			variantAfter[] = {0.0001,0.0001,0.0001};
		};
		class rhs_bmp_cargostatic_01_var0 : rhs_bmp_cargostatic_01
		{
			NoVariants
		};
		class rhs_bmp_cargostatic_01_var1 : rhs_bmp_cargostatic_01
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic01_var1.rtm";
			speed = 0.074534;
			NoVariants
		};
		class rhs_bmp_cargostatic_01_var2 : rhs_bmp_cargostatic_01
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic01_var2.rtm";
			NoVariants
		};
		class rhs_bmp_cargostatic_01_var3 : rhs_bmp_cargostatic_01
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic01_var3.rtm";
			speed = 0.033;
			NoVariants
		};
		class rhs_bmp_cargostatic_02 : rhs_bmp_cargostatic_01
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic02.rtm";
			connectTo[] = {"rhs_bmp_cargostatic_02_var0",0.1,"rhs_bmp_cargostatic_02_var1",0.1,"rhs_bmp_cargostatic_02_var2",0.1};
			equivalentTo = "rhs_bmp_cargostatic_02";
			variantsPlayer[] = {"rhs_bmp_cargostatic_02_var0",0.3,"rhs_bmp_cargostatic_02_var1",0.3,"rhs_bmp_cargostatic_02_var2",0.3};
			variantsAI[] = {"rhs_bmp_cargostatic_02_var0",0.3,"rhs_bmp_cargostatic_02_var1",0.3,"rhs_bmp_cargostatic_02_var2",0.3};
			variantAfter[] = {0.0001,0.0001,0.0001};
		};
		class rhs_bmp_cargostatic_02_var0 : rhs_bmp_cargostatic_02
		{
			NoVariants
		};
		class rhs_bmp_cargostatic_02_var1 : rhs_bmp_cargostatic_02
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic02_var1.rtm";
			NoVariants
		};
		class rhs_bmp_cargostatic_02_var2 : rhs_bmp_cargostatic_02
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic02_var2.rtm";
			NoVariants
		};
		class rhs_bmp_cargostatic_03 : rhs_bmp_cargostatic_01
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic03.rtm";
			connectTo[] = {"rhs_bmp_cargostatic_03_var0",0.25,"rhs_bmp_cargostatic_03_var1",0.25,"rhs_bmp_cargostatic_03_var2",0.25,"rhs_bmp_cargostatic_03_var3",0.25};
			equivalentTo = "rhs_bmp_cargostatic_03";
			variantsPlayer[] = {"rhs_bmp_cargostatic_03_var0",0.25,"rhs_bmp_cargostatic_03_var1",0.25,"rhs_bmp_cargostatic_03_var2",0.25,"rhs_bmp_cargostatic_03_var3",0.25};
			variantsAI[] = {"rhs_bmp_cargostatic_03_var0",0.25,"rhs_bmp_cargostatic_03_var1",0.25,"rhs_bmp_cargostatic_03_var2",0.25,"rhs_bmp_cargostatic_03_var3",0.25};
			variantAfter[] = {0.0001,0.0001,0.0001};
		};
		class rhs_bmp_cargostatic_03_var0 : rhs_bmp_cargostatic_03
		{
			NoVariants
		};
		class rhs_bmp_cargostatic_03_var1 : rhs_bmp_cargostatic_03
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic03_var1.rtm";
			NoVariants
		};
		class rhs_bmp_cargostatic_03_var2 : rhs_bmp_cargostatic_03
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic03_var2.rtm";
			NoVariants
			speed = 0.088235;
		};
		class rhs_bmp_cargostatic_03_var3 : rhs_bmp_cargostatic_03
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic03_var3.rtm";
			speed = 0.059701;
			NoVariants
		};
		class rhs_bmp_cargostatic_04 : rhs_bmp_cargostatic_01
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic04.rtm";
			connectTo[] = {"rhs_bmp_cargostatic_04_var0",0.1,"rhs_bmp_cargostatic_04_var1",0.1,"rhs_bmp_cargostatic_04_var2",0.1};
			equivalentTo = "rhs_bmp_cargostatic_04";
			variantsPlayer[] = {"rhs_bmp_cargostatic_04_var0",0.3,"rhs_bmp_cargostatic_04_var1",0.3,"rhs_bmp_cargostatic_04_var2",0.3};
			variantsAI[] = {"rhs_bmp_cargostatic_04_var0",0.3,"rhs_bmp_cargostatic_04_var1",0.3,"rhs_bmp_cargostatic_04_var2",0.3};
			variantAfter[] = {0.0001,0.0001,0.0001};
		};
		class rhs_bmp_cargostatic_04_var0 : rhs_bmp_cargostatic_04
		{
			NoVariants
		};
		class rhs_bmp_cargostatic_04_var1 : rhs_bmp_cargostatic_04
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic04_var1.rtm";
			NoVariants
		};
		class rhs_bmp_cargostatic_04_var2 : rhs_bmp_cargostatic_04
		{
			file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic04_var2.rtm";
			NoVariants
		};
	};
};