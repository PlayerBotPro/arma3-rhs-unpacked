
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_AH1Z_Pilot	= "RHS_AH1Z_Pilot";
		RHS_AH1Z_Gunner	= "RHS_AH1Z_Gunner";

		RHS_AH64_pilot			= "RHS_AH64_pilot";
		RHS_AH64_pilot_getin	= "RHS_AH64_Pilot_getin";
		RHS_AH64_pilot_getout	= "RHS_AH64_pilot_getout";
		RHS_AH64_gunner			= "RHS_AH64_gunner";
		RHS_AH64_gunner_getin	= "RHS_AH64_gunner_getin";
		RHS_AH64_gunner_getout	= "RHS_AH64_gunner_getout";

		RHS_UH60M_Pilot		="RHS_UH60M_Pilot";
		RHS_UH60M_Gunner	="RHS_UH60M_Gunner";
		RHS_UH60_Cargo02	="RHS_UH60_Cargo02_V0";

		RHS_UH1Y_Pilot		= "RHS_UH1Y_Pilot";
		RHS_UH1Y_Copilot	= "RHS_UH1Y_Copilot";
		RHS_UH1Y_Gunner_L	= "RHS_UH1Y_Gunner_L";
		RHS_UH1Y_Gunner_R	= "RHS_UH1Y_Gunner_R";
		RHS_UH1Y_Cargo01	= "RHS_UH1Y_Cargo01";
		RHS_UH1Y_Cargo02	= "RHS_UH1Y_Cargo02";
		RHS_UH1Y_Cargo03	= "RHS_UH1Y_Cargo03";

		RHS_CH47_Pilot		= "RHS_CH47_Pilot";
		RHS_CH47_Gunner		= "RHS_CH47_Gunner";
		RHS_CH47_Gunner01	= "RHS_CH47_Gunner01";
		RHS_CH47_Cargo		= "RHS_CH47_Cargo";
		RHS_CH47_Cargo01	= "RHS_CH47_Cargo01";
		RHS_CH47_Cargo02	= "RHS_CH47_Cargo02";
		RHS_CH47_Cargo03	= "RHS_CH47_Cargo03";

		RHS_C130_Pilot			= "RHS_C130_Pilot";
		RHS_C130_Pilot_GetIn	= "GetInHelicopterCargoPst";

		RHS_A10_Pilot = "RHS_A10_Pilot";
		RHS_StaticPara_Pilot = "RHS_StaticPara_Pilot_Init";
		RHS_Heli_Cargo_Enter = "GetInHelicopterCargoRfl";
		RHS_Heli_Cargo_Exit = "GetOutHelicopterCargoRfl";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PreciseCrew;

		#define AnimP rhsusf\addons\rhsusf_a2port_air\data\anim
		#define AnimP2 rhsusf\addons\rhsusf_a2port_air2\data\anim
		#define AnimP3 rhsusf\addons\rhsusf_c_a2port_air\anim
		#define AnimM(name,dead_name) class RHS_##name##: RHS_AH64_Pilot\
		{\
			file = rhsusf\addons\rhsusf_a2port_air\data\anim\##name##.rtm;\
			interpolateTo[] = {RHS_KIA_##name##,1};\
		};\
		class RHS_KIA_##name##: RHS_KIA_AH64_Pilot\
		{\
			file = rhsusf\addons\rhsusf_a2port_air\data\anim\##dead_name##;\
		};

		class RHS_AH1Z_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = AnimP2\AH1Z_Dead.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class KIA_RHS_AH1Z_Pilot: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = AnimP2\KIA_AH1Z_Pilot.rtm;
			connectTo[] = {"Unconscious",0.1};
		};
		class RHS_AH1Z_Pilot: Crew
		{
			file = AnimP2\AH1Z_Pilot.rtm;
			interpolateTo[] = {"KIA_RHS_AH1Z_Pilot",1};
		};
		class KIA_RHS_AH1Z_Gunner: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = AnimP2\KIA_AH1Z_Gunner.rtm;
			connectTo[] = {"Unconscious",0.1};
		};
		class RHS_AH1Z_Gunner: Crew
		{
			file = AnimP2\AH1Z_Gunner.rtm;
			interpolateTo[] = {"KIA_RHS_AH1Z_Gunner",1};
		};

		class RHS_AH64_Pilot: Crew
		{
			file = \AnimP\AH64_pilot.rtm;
			interpolateTo[] = {"RHS_KIA_AH64_Pilot",1};

			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leaning="crewShake_half";
		};

		class RHS_AH64_Pilot_getin: PreciseCrew
		{
			file				= AnimP3\AH64_pilot_getin.rtm;
			speed				= -2.5;
			looped				= 0;
			connectTo[]			= {"RHS_AH64_Pilot",1};
			interpolateTo[]		= {"RHS_KIA_AH64_Pilot",1};
			variantsAI[]		= {};
			variantsPlayer[]	= {};
			variantAfter[]		= {2.7,2.7,2.7};
			useIdles			= 0;
			leftHandIKCurve[]	= {0};
			rightHandIKCurve[]	= {0};
			headBobMode			= 1;
			headBobStrength		= 0.8;
		};
		class RHS_AH64_Pilot_getout: RHS_AH64_Pilot_getin
		{
			variantsPlayer[]	= {};
			file				= AnimP3\AH64_pilot_getout;
			speed				= -3.1;
			ConnectTo[]			= {"AmovPercMstpSnonWnonDnon",0.02};
			interpolateTo[]		= {"RHS_KIA_AH64_Pilot",0.01};
		};
		class RHS_AH64_Gunner_getin: PreciseCrew
		{
			file				= AnimP3\AH64_Gunner_getin.rtm;
			speed				= -2.5;
			looped				= 0;
			connectTo[]			= {"RHS_AH64_Gunner",1};
			interpolateTo[]		= {"RHS_KIA_AH64_Gunner",1};
			variantsAI[]		= {};
			variantsPlayer[]	= {};
			variantAfter[]		= {2.7,2.7,2.7};
			useIdles			= 0;
			leftHandIKCurve[]	= {0};
			rightHandIKCurve[]	= {0};
			headBobMode			= 1;
			headBobStrength		= 0.8;
		};
		class RHS_AH64_Gunner_getout: RHS_AH64_Gunner_getin
		{
			variantsPlayer[]	= {};
			file				= AnimP3\AH64_Gunner_getout;
			speed				= -3.1;
			ConnectTo[]			= {"AmovPercMstpSnonWnonDnon",0.02};
			interpolateTo[]		= {"RHS_KIA_AH64_Gunner",0.01};
		};

		class RHS_KIA_AH64_Pilot: DefaultDie
		{
			file = \AnimP\KIA_AH64_pilot;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		AnimM(AH64_gunner,KIA_AH64_gunner)

		AnimM(UH60M_Pilot,UH60M_KIA_Pilot)
		AnimM(UH60M_Gunner,UH60M_KIA_Gunner)
		AnimM(UH60_Cargo02_V0,KIA_UH60_Cargo02)

		AnimM(CH47_Pilot,CH47_KIA_Pilot)
		AnimM(CH47_Gunner,CH47_KIA_Gunner)
		AnimM(CH47_Gunner01,CH47_KIA_Gunner01)

		AnimM(C130_Pilot,KIA_C130_Pilot)

		AnimM(A10_Pilot,KIA_A10_Pilot)

		class RHS_CH47_Cargo: Crew
		{
			file = \AnimP\CH47_Cargo;
			connectTo[] = {"RHS_CH47_KIA_Cargo01",1};
			speed = 1e+010;
		};
		class RHS_CH47_KIA_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = \AnimP\CH47_KIA_Cargo01;
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RHS_CH47_Cargo01: Crew
		{
			file = \AnimP\CH47_Cargo01;
			connectTo[] = {"RHS_CH47_KIA_Cargo01",1};
			interpolateTo[] = {"RHS_CH47_KIA_Cargo01",0.1};
			speed = 1e+010;
		};
		class RHS_CH47_Cargo02: Crew
		{
			file = \AnimP\CH47_Cargo02;
			interpolateTo[] = {"RHS_CH47_KIA_Cargo01",0.1};
			connectTo[] = {"RHS_CH47_Cargo02",0.1,"RHS_CH47_Cargo02_V1",0.1,"RHS_CH47_Cargo02_V2",0.1,"RHS_CH47_Cargo02_V3",0.1,"RHS_CH47_Cargo02_V4",0.1,"RHS_CH47_Cargo02_V5",0.1};
			equivalentTo = "RHS_CH47_Cargo02";
			variantsAI[] = {"RHS_CH47_Cargo02",0.5,"RHS_CH47_Cargo02_V1",0.12,"RHS_CH47_Cargo02_V2",0.11,"RHS_CH47_Cargo02_V3",0.1,"RHS_CH47_Cargo02_V4",0.09,"RHS_CH47_Cargo02_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_CH47_Cargo02_V1: RHS_CH47_Cargo02
		{
			file = \AnimP\CH47_Cargo02_V1.rtm;
			connectTo[] = {"RHS_CH47_Cargo02",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class RHS_CH47_Cargo02_V2: RHS_CH47_Cargo02
		{
			file = \AnimP\CH47_Cargo02_V2.rtm;
			connectTo[] = {"RHS_CH47_Cargo02",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class RHS_CH47_Cargo02_V3: RHS_CH47_Cargo02
		{
			file = \AnimP\CH47_Cargo02_V3.rtm;
			connectTo[] = {"RHS_CH47_Cargo02",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class RHS_CH47_Cargo02_V4: RHS_CH47_Cargo02
		{
			file = \AnimP\CH47_Cargo02_V4.rtm;
			connectTo[] = {"RHS_CH47_Cargo02",0.1};
			speed = 0.32967;
			variantAfter[] = {5,5,5};
		};
		class RHS_CH47_Cargo02_V5: RHS_CH47_Cargo02
		{
			file = \AnimP\CH47_Cargo02_V5.rtm;
			connectTo[] = {"RHS_CH47_Cargo02",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class RHS_CH47_Cargo03: Crew
		{
			file = \AnimP\CH47_Cargo03;
			interpolateTo[] = {"RHS_CH47_KIA_Cargo01",0.1};
			connectTo[] = {"RHS_CH47_Cargo03",0.1,"RHS_CH47_Cargo03_V1",0.1,"RHS_CH47_Cargo03_V2",0.1,"RHS_CH47_Cargo03_V3",0.1,"RHS_CH47_Cargo03_V4",0.1,"RHS_CH47_Cargo03_V5",0.1};
			equivalentTo = "RHS_CH47_Cargo03";
			variantsAI[] = {"RHS_CH47_Cargo03",0.5,"RHS_CH47_Cargo03_V1",0.12,"RHS_CH47_Cargo03_V2",0.11,"RHS_CH47_Cargo03_V3",0.1,"RHS_CH47_Cargo03_V4",0.09,"RHS_CH47_Cargo03_V5",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class RHS_CH47_Cargo03_V1: RHS_CH47_Cargo03
		{
			file = \AnimP\CH47_Cargo03_V1.rtm;
			connectTo[] = {"RHS_CH47_Cargo03",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class RHS_CH47_Cargo03_V2: RHS_CH47_Cargo03
		{
			file = \AnimP\CH47_Cargo03_V2.rtm;
			connectTo[] = {"RHS_CH47_Cargo03",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class RHS_CH47_Cargo03_V3: RHS_CH47_Cargo03
		{
			file = \AnimP\CH47_Cargo03_V3.rtm;
			connectTo[] = {"RHS_CH47_Cargo03",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class RHS_CH47_Cargo03_V4: RHS_CH47_Cargo03
		{
			file = \AnimP\CH47_Cargo03_V4.rtm;
			connectTo[] = {"RHS_CH47_Cargo03",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class RHS_CH47_Cargo03_V5: RHS_CH47_Cargo03
		{
			file = \AnimP\CH47_Cargo03_V5.rtm;
			connectTo[] = {"RHS_CH47_Cargo03",0.1};
			speed = 0.32967;
			variantAfter[] = {5,5,5};
		};

		class KIA_RHS_UH1Y_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = AnimP2\KIA_UH1Y_Pilot.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",2};
		};
		class RHS_UH1Y_Pilot: Crew
		{
			file = AnimP2\UH1Y_Pilot.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Pilot",1};
		};
		class KIA_RHS_UH1Y_Copilot: DefaultDie
		{
			actions = "DeadActions";
			file = AnimP2\KIA_UH1Y_Pilot.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",2};
		};
		class RHS_UH1Y_Copilot: Crew
		{
			file = AnimP2\UH1Y_Pilot.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Copilot",1};
		};
		class KIA_RHS_UH1Y_Gunner_L: DefaultDie
		{
			actions = "DeadActions";
			file = AnimP2\kia_uh1y_gunner_l.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",2};
		};
		class RHS_UH1Y_Gunner_L: Crew
		{
			file = AnimP2\uh1y_gunner_l.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Gunner_L",1};
		};
		class KIA_RHS_UH1Y_Gunner_R: DefaultDie
		{
			actions = "DeadActions";
			file = AnimP2\kia_uh1y_gunner_r.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",2};
		};
		class RHS_UH1Y_Gunner_R: Crew
		{
			file = AnimP2\uh1y_gunner_r.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Gunner_R",1};
		};
		class KIA_RHS_UH1Y_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = AnimP2\KIA_cargo_01.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",2};
		};
		class RHS_UH1Y_Cargo01: Crew
		{
			file = AnimP2\cargo_01.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo01",0.1};
			connectTo[] = {"RHS_UH1Y_Cargo01",0.3,"RHS_UH1Y_Cargo01_V1",0.1,"RHS_UH1Y_Cargo01_V2",0.1,"RHS_UH1Y_Cargo01_V3",0.1};
			equivalentTo = "RHS_UH1Y_Cargo01";
			variantsAI[] = {"RHS_UH1Y_Cargo01",0.4,"RHS_UH1Y_Cargo01_V1",0.2,"RHS_UH1Y_Cargo01_V2",0.2,"RHS_UH1Y_Cargo01_V3",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class RHS_UH1Y_Cargo01_V1: RHS_UH1Y_Cargo01
		{
			file = AnimP2\cargo_01nadech.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo01",1};
			connectTo[] = {"RHS_UH1Y_Cargo01",0.1};
			speed = 0.395;
			looped = 0;
			variantAfter[] = {5,5,5};
		};
		class RHS_UH1Y_Cargo01_V2: RHS_UH1Y_Cargo01_V1
		{
			file = AnimP2\cargo_01poposed.rtm;
			speed = 0.588;
		};
		class RHS_UH1Y_Cargo01_V3: RHS_UH1Y_Cargo01_V1
		{
			file = AnimP2\cargo_01presunruky.rtm;
			speed = 0.491;
		};
		class KIA_RHS_UH1Y_Cargo02: KIA_RHS_UH1Y_Cargo01
		{
			file = AnimP2\KIA_cargo_02.rtm;
		};
		class RHS_UH1Y_Cargo02: Crew
		{
			file = AnimP2\cargo_02.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo02",0.1};
			connectTo[] = {"RHS_UH1Y_Cargo02",0.3,"RHS_UH1Y_Cargo02_V1",0.1,"RHS_UH1Y_Cargo02_V2",0.1,"RHS_UH1Y_Cargo02_V3",0.1};
			equivalentTo = "RHS_UH1Y_Cargo02";
			variantsAI[] = {"RHS_UH1Y_Cargo02",0.4,"RHS_UH1Y_Cargo02_V1",0.2,"RHS_UH1Y_Cargo02_V2",0.2,"RHS_UH1Y_Cargo02_V3",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class RHS_UH1Y_Cargo02_V1: RHS_UH1Y_Cargo02
		{
			file = AnimP2\cargo_02poposed.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo02",1};
			connectTo[] = {"RHS_UH1Y_Cargo02",0.1};
			speed = 0.652;
			looped = 0;
			variantAfter[] = {5,5,5};
		};
		class RHS_UH1Y_Cargo02_V2: RHS_UH1Y_Cargo02_V1
		{
			file = AnimP2\cargo_02predklon.rtm;
			speed = 0.3125;
		};
		class RHS_UH1Y_Cargo02_V3: RHS_UH1Y_Cargo02_V1
		{
			file = AnimP2\cargo_02presunruky.rtm;
			speed = 0.37;
		};
		class KIA_RHS_UH1Y_Cargo03: KIA_RHS_UH1Y_Cargo01
		{
			file = AnimP2\KIA_cargo_03.rtm;
		};
		class RHS_UH1Y_Cargo03: Crew
		{
			file = AnimP2\cargo_03.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo03",0.1};
			connectTo[] = {"RHS_UH1Y_Cargo03",0.3,"RHS_UH1Y_Cargo03_V1",0.1,"RHS_UH1Y_Cargo03_V2",0.1,"RHS_UH1Y_Cargo03_V3",0.1};
			equivalentTo = "RHS_UH1Y_Cargo03";
			variantsAI[] = {"RHS_UH1Y_Cargo03",0.4,"RHS_UH1Y_Cargo03_V1",0.1,"RHS_UH1Y_Cargo03_V2",0.25,"RHS_UH1Y_Cargo03_V3",0.25};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class RHS_UH1Y_Cargo03_V1: RHS_UH1Y_Cargo03
		{
			file = AnimP2\cargo_03predklon.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo03",1};
			connectTo[] = {"RHS_UH1Y_Cargo03",0.1};
			speed = 0.37;
			looped = 0;
			variantAfter[] = {5,5,5};
		};
		class RHS_UH1Y_Cargo03_V2: RHS_UH1Y_Cargo03_V1
		{
			file = AnimP2\cargo_03presunruky.rtm;
			speed = 0.37;
			variantAfter[] = {5,5,5};
		};
		class RHS_UH1Y_Cargo03_V3: RHS_UH1Y_Cargo03_V1
		{
			file = AnimP2\cargo_03protazenizad.rtm;
			speed = 0.491;
			variantAfter[] = {5,5,5};
		};

		class RHS_StaticPara_Pilot_Init: Crew
		{
			file = AnimP3\rhs_para_d6_init.rtm;
			interpolationSpeed=1;
			speed = -3.5;
			looped = 0;
			connectTo[] = {"RHS_StaticPara_Pilot",1};
			interpolateTo[] = {"RHS_KIA_StaticPara_Pilot",1};
			variantsAI[] = {"RHS_StaticPara_Pilot",1};
			variantsPlayer[] = {"RHS_StaticPara_Pilot",1};
			variantAfter[] = {1.5,1.5,1.5};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
		};
		class RHS_StaticPara_Pilot: Crew
		{
			file = AnimP3\rhs_para_d6.rtm;
			interpolateTo[] = {"RHS_KIA_StaticPara_Pilot",1};

			speed = 0.066519;
		};
		class RHS_KIA_StaticPara_Pilot: KIA_RHS_UH1Y_Gunner_L
		{
			file = AnimP3\rhs_kia_para_d6.rtm;
		};
		/*
		turned off for now, those anims somehow refuse to work without rpt errors
		class RHS_UH1Y_CUT_H01_Loop: Crew
		{
			file = AnimP2\c1_heliflight_h1_loop.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo01",1};
			speed = 0.070258;
			head = "headNo";
		};
		class RHS_UH1Y_CUT_H01: Crew
		{
			file = AnimP2\c1_heliflight_h1.rtm;
			looped = 0;
			speed = 0.008299;
			connectTo[] = {"RHS_UH1Y_CUT_H01_Loop",0.1};
			variantsAI[] = {"RHS_UH1Y_CUT_H01_Loop",1};
			variantAfter[] = {5,10,20};
			head = "headNo";
		};
		class RHS_UH1Y_CUT_H02_Loop: Crew
		{
			file = AnimP2\c1_heliflight_h2_loop.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo01",1};
			speed = 0.103093;
			head = "headNo";
		};
		class RHS_UH1Y_CUT_H02: Crew
		{
			file = AnimP2\c1_heliflight_h2.rtm;
			looped = 0;
			speed = 0.008805;
			connectTo[] = {"RHS_UH1Y_CUT_H02_Loop",0.1};
			variantsAI[] = {"RHS_UH1Y_CUT_H02_Loop",1};
			variantAfter[] = {5,10,20};
			head = "headNo";
		};
		class RHS_UH1Y_CUT_H03_Loop: Crew
		{
			file = AnimP2\c1_heliflight_h3_loop.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo01",1};
			speed = 0.119522;
			head = "headNo";
		};
		class RHS_UH1Y_CUT_H03: Crew
		{
			file = AnimP2\c1_heliflight_h3.rtm;
			looped = 0;
			speed = 0.008939;
			connectTo[] = {"RHS_UH1Y_CUT_H03_Loop",0.1};
			variantsAI[] = {"RHS_UH1Y_CUT_H03_Loop",1};
			variantAfter[] = {5,10,20};
			head = "headNo";
		};
		class RHS_UH1Y_CUT_H04_Loop: Crew
		{
			file = AnimP2\c1_heliflight_h4_loop.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo01",1};
			speed = 0.062762;
			head = "headNo";
		};
		class RHS_UH1Y_CUT_H04: Crew
		{
			file = AnimP2\c1_heliflight_h4.rtm;
			looped = 0;
			speed = 0.008606;
			connectTo[] = {"RHS_UH1Y_CUT_H04_Loop",0.1};
			variantsAI[] = {"RHS_UH1Y_CUT_H04_Loop",1};
			variantAfter[] = {5,10,20};
			head = "headNo";
		};
		class RHS_UH1Y_CUT_H05_Loop: Crew
		{
			file = AnimP2\c1_heliflight_h5_loop.rtm;
			interpolateTo[] = {"KIA_RHS_UH1Y_Cargo01",1};
			speed = 0.114943;
			head = "headNo";
		};
		class RHS_UH1Y_CUT_H05: Crew
		{
			file = AnimP2\c1_heliflight_h5.rtm;
			looped = 0;
			speed = 0.008693;
			connectTo[] = {"RHS_UH1Y_CUT_H05_Loop",0.1};
			variantsAI[] = {"RHS_UH1Y_CUT_H05_Loop",1};
			variantAfter[] = {5,10,20};
			head = "headNo";
		};*/
	};
};