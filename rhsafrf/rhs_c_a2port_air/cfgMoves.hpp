
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_HIND_Pilot = "RHS_HIND_Pilot";
		RHS_HIND_Gunner = "RHS_HIND_Gunner";
		RHS_HIND_Cargo = "RHS_HIND_Cargo";
		RHS_HIND_Cargo_Enter = "GetInHelicopterCargoRfl";
		RHS_HIND_Cargo_Exit = "GetOutHelicopterCargoRfl";

		RHS_Mi17_Pilot = "RHS_Mi17_Pilot";
		RHS_Mi17_Gunner = "RHS_Mi17_Gunner";
		RHS_Mi17v2_Gunner = "RHS_Mi17v2_Gunner";
		RHS_Mi17_Cargo01 = "RHS_Mi17_Cargo01";
		RHS_Mi17_Cargo02 = "RHS_Mi17_Cargo02";

		RHS_Mi8_Pilot = "RHS_Mi8_Pilot";
		RHS_Mi8_PilotV2 = "RHS_Mi8_PilotV2";
		RHS_Mi8_Gunner = "RHS_Mi8_Gunner";
		RHS_Mi8_GunnerFront = "RHS_Mi8_GunnerFront";
		RHS_Mi8_Cargo = "RHS_Mi8_Cargo";

		RHS_SU25_Pilot = "RHS_SU25_Pilot";

		RHS_Ka52_Pilot = "RHS_Ka52_Pilot";
		RHS_Ka52_Pilot_Eject = "RHS_ka52_Pilot_Eject_Wait";
		RHS_Ka52_Gunner = "RHS_Ka52_Gunner";

		RHS_D6_Pilot = "RHS_D6_Pilot_Init";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;

		#define AnimP \rhsafrf\addons\rhs_a2port_air\anim
		#define AnimP2 \rhsafrf\addons\rhs_c_a2port_air\anims
		class RHS_SU25_Pilot: Crew
		{
			file = AnimP\SU25Pilot.rtm;
			interpolateTo[] = {"RHS_KIA_SU25_Pilot",1};

			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leaning="crewShake_half";
		};
		class RHS_KIA_SU25_Pilot: DefaultDie
		{
			file = AnimP\SU25PilotKIA.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};

		class RHS_KIA_HIND_Pilot: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_Mi35_Pilot.rtm;
		};
		class RHS_HIND_Pilot: Crew
		{
			file = AnimP\Mi35_Pilot.rtm;
			interpolateTo[] = {"RHS_KIA_HIND_Pilot",1};

			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leaning="crewShake_half";
		};
		class RHS_KIA_HIND_Gunner: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_Mi35_Gunner.rtm;
		};
		class RHS_HIND_Gunner: Crew
		{
			file = AnimP\Mi35_Gunner.rtm;
			interpolateTo[] = {"RHS_KIA_HIND_Gunner",1};
			leaning="crewShake_half";
		};

		class RHS_KIA_HIND_Cargo: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_Skodovka_Cargo01.rtm;
		};
		class RHS_HIND_Cargo: Crew
		{
			file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo03.rtm";
			interpolateTo[] = {"RHS_KIA_HIND_Cargo",0.1};
		};


		class RHS_Mi17v2_Gunner: Crew
		{
			file = AnimP\MI171_Gunner.rtm;
			connectTo[] = {"RHS_Mi17v2_KIA_Gunner",1};
			interpolateTo[] =  {"RHS_Mi17v2_KIA_Gunner",1};
			speed = 1e+010;
		};
		class RHS_Mi17v2_KIA_Gunner: RHS_KIA_SU25_Pilot
		{
			file = AnimP\MI171_KIA_Gunner.rtm;
		};

		class RHS_KIA_KA50_Pilot: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_KA50_Pilot.rtm;
			leaning="crewShake_half";
		};
		class RHS_KA50_Pilot: Crew
		{
			file = AnimP\KA50_Pilot.rtm;
			interpolateTo[] = {"RHS_KIA_KA50_Pilot",1};

			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leaning="crewShake_half";
		};
		class RHS_KIA_Mi17_Pilot: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_Mi17_Pilot.rtm;
		};
		class RHS_Mi17_Pilot: Crew
		{
			file = AnimP\Mi17_Pilot.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Pilot",1};

			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
		};
		class RHS_KIA_Mi8_Pilot: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_Mi8_Pilot.rtm;
		};
		class RHS_Mi8_Pilot: Crew
		{
			file = AnimP\Mi8_Pilot.rtm;
			interpolateTo[] = {"RHS_KIA_Mi8_Pilot",1};

			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
		};
		class RHS_Mi8_PilotV2: RHS_Mi8_Pilot
		{
			file = AnimP\Mi8_PilotV2.rtm;
		};
		class RHS_KIA_Mi17_Gunner: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_Mi17_Gunner.rtm;
		};
		class RHS_Mi17_Gunner: Crew
		{
			file = AnimP\Mi17_Gunner.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Gunner",1};
		};
		class RHS_KIA_Mi8_Gunner: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_Mi8_Gunner.rtm;
		};
		class RHS_Mi8_Gunner: Crew
		{
			file = AnimP\Mi8_Gunner.rtm;
			interpolateTo[] = {"RHS_KIA_Mi8_Gunner",1};
		};
		class RHS_Mi8_GunnerFront: Crew
		{
			file = AnimP\Mi8_GunnerFront.rtm;
			interpolateTo[] = {"RHS_KIA_Mi8_Gunner",1};
		};
		class RHS_Mi17_Cargo01: Crew
		{
			file = AnimP\Mi17_Pilot.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Pilot",1};
		};
		class RHS_Mi8_Cargo: Crew
		{
			file = AnimP\Mi8_Pilot.rtm;
			interpolateTo[] = {"RHS_KIA_Mi8_Pilot",1};
		};
		class RHS_KIA_Mi17_Cargo02: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_Mi17_Cargo02.rtm;
		};
		class RHS_Mi17_Cargo02: Crew
		{
			file = AnimP\Mi17_Cargo02_V0.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"RHS_Mi17_Cargo02",0.1,"RHS_Mi17_Cargo02_V1",0.1,"RHS_Mi17_Cargo02_V2",0.1,"RHS_Mi17_Cargo02_V3",0.1,"RHS_Mi17_Cargo02_V4",0.1,"RHS_Mi17_Cargo02_V5",0.1,"RHS_Mi17_Cargo02_V6",0.1};
			equivalentTo = "RHS_Mi17_Cargo02";
			variantsAI[] = {"RHS_Mi17_Cargo02",0.4,"RHS_Mi17_Cargo02_V1",0.1,"RHS_Mi17_Cargo02_V2",0.1,"RHS_Mi17_Cargo02_V3",0.1,"RHS_Mi17_Cargo02_V4",0.1,"RHS_Mi17_Cargo02_V5",0.1,"RHS_Mi17_Cargo02_V6",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class RHS_Mi17_Cargo02_V1: RHS_Mi17_Cargo02
		{
			file = AnimP\Mi17_Cargo02_V1.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"RHS_Mi17_Cargo02",0.1};
			speed = 0.27;
			variantAfter[] = {3.7,3.7,3.7};
		};
		class RHS_Mi17_Cargo02_V2: RHS_Mi17_Cargo02
		{
			file = AnimP\Mi17_Cargo02_V2.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"RHS_Mi17_Cargo02",0.1};
			speed = 0.345;
			variantAfter[] = {3,3,3};
		};
		class RHS_Mi17_Cargo02_V3: RHS_Mi17_Cargo02
		{
			file = AnimP\Mi17_Cargo02_V3.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"RHS_Mi17_Cargo02",0.1};
			speed = 0.2;
			variantAfter[] = {5,5,5};
		};
		class RHS_Mi17_Cargo02_V4: RHS_Mi17_Cargo02
		{
			file = AnimP\Mi17_Cargo02_V4.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"RHS_Mi17_Cargo02",0.1};
			speed = 0.201;
			variantAfter[] = {5,5,5};
		};
		class RHS_Mi17_Cargo02_V5: RHS_Mi17_Cargo02
		{
			file = AnimP\Mi17_Cargo02_V5.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"RHS_Mi17_Cargo02",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class RHS_Mi17_Cargo02_V6: RHS_Mi17_Cargo02
		{
			file = AnimP\Mi17_Cargo02_V6.rtm;
			interpolateTo[] = {"RHS_KIA_Mi17_Cargo02",0.1};
			connectTo[] = {"RHS_Mi17_Cargo02",0.1};
			speed = 0.345;
			variantAfter[] = {3,3,3};
		};

		class RHS_KIA_ka52_Pilot: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_Ka52_Pilot.rtm;
		};
		class RHS_ka52_Pilot: Crew
		{
			file = AnimP\ka52_Pilot.rtm;
			interpolateTo[] = {"RHS_KIA_ka52_Pilot",1};

			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
		};
		class RHS_ka52_Pilot_Eject_Wait: Crew
		{
			file = AnimP\ka52_Pilot.rtm;
			interpolateTo[] = {"RHS_ka52_Pilot_Eject",1};
			interpolationSpeed=1;
			leaning = "empty";
		};
		class RHS_ka52_Pilot_Eject: RHS_ka52_Pilot
		{
			file = AnimP\ka52_Pilot_eject.rtm;
			leaning = "empty";
		};
		class RHS_KIA_ka52_Gunner: RHS_KIA_SU25_Pilot
		{
			file = AnimP\KIA_ka52_Gunner.rtm;
		};
		class RHS_ka52_Gunner: Crew
		{
			file = AnimP\ka52_Gunner.rtm;
			interpolateTo[] = {"RHS_KIA_ka52_Gunner",1};
		};


		class RHS_D6_Pilot_Init: Crew
		{
			file = AnimP2\rhs_para_d6_init.rtm;
			interpolationSpeed=1;
			speed = -3.5;
			looped = 0;
			connectTo[] = {"RHS_D6_Pilot",1};
			interpolateTo[] = {"RHS_KIA_D6_Pilot",1};
			variantsAI[] = {"RHS_D6_Pilot",1};
			variantsPlayer[] = {"RHS_D6_Pilot",1};
			variantAfter[] = {1.5,1.5,1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class RHS_D6_Pilot: Crew
		{
			file = AnimP2\rhs_para_d6.rtm;
			interpolateTo[] = {"RHS_KIA_D6_Pilot",1};

			speed = 0.066519;
		};
		class RHS_KIA_D6_Pilot: RHS_KIA_SU25_Pilot
		{
			file = AnimP2\rhs_kia_para_d6.rtm;
		};

	};
};