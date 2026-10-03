#define ANIM_VERSION(cargo, version, varSpeed, varAfter1, varAfter2, varAfter3) \
	class RHS_##cargo##_V##version: RHS_##cargo## \
	{ \
		file = 	rhsgref\addons\rhsgref_air\AN2\data\anim\##cargo##_V##version##.rtm; \
		connectTo[] = {RHS_##cargo##, 0.1}; \
		speed = varSpeed; \
		variantAfter[] = {varAfter1, varAfter2, varAfter3}; \
	};

class CfgMovesBasic
{
	class DefaultDie;
	class BlendAnims;
	class ManActions
	{
		RHS_L159_pilot="RHS_L159_pilot";
		RHS_L39_pilot="RHS_L39_pilot";
		RHS_AN2_Cargo	= "RHS_AN2_Cargo";
		RHS_AN2_Cargo01	= "RHS_AN2_Cargo01";
		RHS_AN2_Cargo02	= "RHS_AN2_Cargo02";
		RHS_AN2_Cargo03	= "RHS_AN2_Cargo03";
		RHS_AN2_Pilot	= "RHS_AN2_Pilot";
		RHS_UH1H_Pilot = "RHS_UH1H_Pilot";
		RHS_UH1H_CoPilot = "RHS_UH1H_CoPilot";
		RHS_UH1H_Gunner_L = "RHS_UH1H_Gunner_L";
		RHS_UH1H_Gunner_R = "RHS_UH1H_Gunner_R";
		RHS_UH1H_Gunner = "RHS_UH1H_Gunner";

	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class KIA_RHS_UH1H_Pilot_01: DefaultDie
		{
			actions="DeadActions";
			file="rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_pilot_01.rtm";
			speed=0.5;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[] = {"Unconscious",3};
		};
		class KIA_RHS_UH1H_Pilot_02: KIA_RHS_UH1H_Pilot_01
		{
			file="rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_pilot_02.rtm";
			speed=0.33;
		};


		class KIA_RHS_UH1H_CoPilot_01: DefaultDie
		{
			actions="DeadActions";
			file="rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_copilot_01.rtm";
			speed=0.5;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[] = {"Unconscious",3};
		};

		class KIA_RHS_UH1H_Gunner_L: DefaultDie
		{
			actions = "DeadActions";
			file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_gunner_l.rtm";
			speed = 1;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",3};
		};

		class KIA_RHS_UH1H_Gunner_R: DefaultDie
		{
			actions = "DeadActions";
			file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_gunner_r.rtm";
			speed = 1;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",3};
		};

		class Crew;

		class RHS_L159_pilot: Crew
		{
			file="\rhsgref\addons\rhsgref_c_air\L159\Anim\L159sed.rtm";
			interpolateTo[]=
			{
				"KIA_RHS_L159_pilot",
				1
			};
			speed=1e+010;
			leaning="crewShake_half";
		};
		class RHS_L39_pilot: RHS_L159_pilot
		{
			file="\rhsgref\addons\rhsgref_c_air\L159\Anim\L39sed.rtm";
		};
		class KIA_RHS_L159_pilot: DefaultDie
		{
			actions="DeadActions";
			file="\rhsgref\addons\rhsgref_c_air\L159\Anim\L159smrt.rtm";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RHS_KIA_AN2_Pilot: DefaultDie
		{
			actions = DeadActions;
			file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_KIA_pilot.rtm";
			speed = 0.5;
			looped = false;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		    leftHandIKCurve[] = {1};
		    rightHandIKCurve[] = {1};
		};
		class RHS_AN2_Pilot: Crew
		{
			file="rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Pilot.rtm";
			interpolateTo[]={"RHS_KIA_AN2_Pilot", 1};
		    leftHandIKCurve[] = {1};
		    rightHandIKCurve[] = {1};
		};

		class RHS_KIA_AN2_Cargo: RHS_KIA_AN2_Pilot {};
		class RHS_AN2_Cargo: Crew
		{
			file="rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo.rtm";
			interpolateTo[]={"RHS_KIA_AN2_Cargo", 1};
		    leftHandIKCurve[] = {1};
		    rightHandIKCurve[] = {1};
		};

		class RHS_KIA_AN2_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_KIA_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class RHS_AN2_Cargo01: Crew
		{
			file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo01.rtm";
			interpolateTo[] = {"RHS_KIA_AN2_Cargo01",0.1};
			connectTo[] = {"RHS_AN2_Cargo01",0.1,"RHS_AN2_Cargo01_V1",0.1,"RHS_AN2_Cargo01_V2",0.1,"RHS_AN2_Cargo01_V3",0.1,"RHS_AN2_Cargo01_V4",0.1,"RHS_AN2_Cargo01_V5",0.1};
			equivalentTo = "RHS_AN2_Cargo01";
			variantsAI[] = {"RHS_AN2_Cargo01",0.4,"RHS_AN2_Cargo01_V1",0.1,"RHS_AN2_Cargo01_V2",0.1,"RHS_AN2_Cargo01_V3",0.1,"RHS_AN2_Cargo01_V4",0.1,"RHS_AN2_Cargo01_V5",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		ANIM_VERSION(AN2_Cargo01,1,0.312500,5,5,5)
		ANIM_VERSION(AN2_Cargo01,2,0.410959,5,5,5)
		ANIM_VERSION(AN2_Cargo01,3,0.333333,5,5,5)
		ANIM_VERSION(AN2_Cargo01,4,0.410959,5,5,5)
		ANIM_VERSION(AN2_Cargo01,5,0.177515,5,5,5)

		class RHS_AN2_Cargo02: Crew
		{
			file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo02.rtm";
			interpolateTo[] = {"RHS_KIA_AN2_Cargo01",0.1};
			connectTo[] = {"RHS_AN2_Cargo02",0.1,"RHS_AN2_Cargo02_V1",0.1,"RHS_AN2_Cargo02_V2",0.1,"RHS_AN2_Cargo02_V3",0.1,"RHS_AN2_Cargo02_V4",0.1,"RHS_AN2_Cargo02_V5",0.1};
			equivalentTo = "RHS_AN2_Cargo02";
			variantsAI[] = {"RHS_AN2_Cargo02",0.4,"RHS_AN2_Cargo02_V1",0.1,"RHS_AN2_Cargo02_V2",0.1,"RHS_AN2_Cargo02_V3",0.1,"RHS_AN2_Cargo02_V4",0.1,"RHS_AN2_Cargo02_V5",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		ANIM_VERSION(AN2_Cargo02,1,0.312500,5,5,5)
		ANIM_VERSION(AN2_Cargo02,2,0.370370,5,5,5)
		ANIM_VERSION(AN2_Cargo02,3,0.410959,5,5,5)
		ANIM_VERSION(AN2_Cargo02,4,0.535714,5,5,5)
		ANIM_VERSION(AN2_Cargo02,5,0.333333,5,5,5)

		class RHS_AN2_Cargo03: Crew
		{
			file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo03.rtm";
			interpolateTo[] = {"RHS_KIA_AN2_Cargo01",0.1};
			connectTo[] = {"RHS_AN2_Cargo03",0.1,"RHS_AN2_Cargo03_V1",0.1,"RHS_AN2_Cargo03_V2",0.1,"RHS_AN2_Cargo03_V3",0.1,"RHS_AN2_Cargo03_V4",0.1,"RHS_AN2_Cargo03_V5",0.1};
			equivalentTo = "RHS_AN2_Cargo03";
			variantsAI[] = {"RHS_AN2_Cargo03",0.4,"RHS_AN2_Cargo03_V1",0.1,"RHS_AN2_Cargo03_V2",0.1,"RHS_AN2_Cargo03_V3",0.1,"RHS_AN2_Cargo03_V4",0.1,"RHS_AN2_Cargo03_V5",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		ANIM_VERSION(AN2_Cargo03,1,0.245902,5,5,5)
		ANIM_VERSION(AN2_Cargo03,2,0.410959,5,5,5)
		ANIM_VERSION(AN2_Cargo03,3,0.625000,5,5,5)
		ANIM_VERSION(AN2_Cargo03,4,0.410959,5,5,5)
		ANIM_VERSION(AN2_Cargo03,5,0.177515,5,5,5)

		class RHS_UH1H_Pilot: Crew
		{
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			leaning = "crewShake_RHS_UH1H";
			file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_pilot.rtm";
			speed = 1e+010;
			looped = 0;
			interpolateTo[] = {"KIA_RHS_UH1H_Pilot_02",1,"KIA_RHS_UH1H_Pilot_01",1};
		};

		class RHS_UH1H_CoPilot: Crew
		{
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			leaning = "crewShake_RHS_UH1H";
			file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_copilot.rtm";
			speed = 1e+010;
			looped = 0;
			interpolateTo[] = {"KIA_RHS_UH1H_CoPilot_01",0.1};
		};

		class RHS_UH1H_Gunner: Crew
		{
			file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_gunner_r.rtm";
			leaning = "crewShake_RHS_UH1H";
			speed = 1e+010;
			looped = 0;
			interpolateTo[] = {"KIA_RHS_UH1H_Gunner_R",0.1};
		};

		class RHS_UH1H_Gunner_L: Crew
		{
			file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_gunner_l.rtm";
			leaning = "crewShake_RHS_UH1H";
			speed = 1e+010;
			looped = 0;
			interpolateTo[] = {"KIA_RHS_UH1H_Gunner_L",0.1};
		};

		class RHS_UH1H_Gunner_R: Crew
		{
			file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_gunner_r.rtm";
			leaning = "crewShake_RHS_UH1H";
			speed = 1e+010;
			looped = 0;
			interpolateTo[] = {"KIA_RHS_UH1H_Gunner_R",0.1};
		};
	};

	class BlendAnims: BlendAnims
	{
		crewShake_RHS_UH1H[]=
		{
			"weapon",
			0,
			"Camera",
			0.5,
			"launcher",
			0.5,
			"Head",
			0.5,
			"Neck",
			0.5,
			"Neck1",
			0.5,
			"LeftShoulder",
			0.44999999,
			"LeftArm",
			0.34999999,
			"LeftArmRoll",
			0.25,
			"LeftForeArm",
			0.15000001,
			"RightShoulder",
			0.44999999,
			"RightArm",
			0.34999999,
			"RightArmRoll",
			0.25,
			"RightForeArm",
			0.315,
			"spine3",
			0.47499999,
			"spine2",
			0.44999999,
			"spine1",
			0.40000001,
			"spine",
			0.34999999,
			"pelvis",
			0.2,
			"LeftUpLeg",
			0.1,
			"LeftUpLegRoll",
			0.25,
			"LeftLeg",
			0.1,
			"RightUpLeg",
			0.1,
			"RightUpLegRoll",
			0.25,
			"RightLeg",
			0.1
		};
	};
};