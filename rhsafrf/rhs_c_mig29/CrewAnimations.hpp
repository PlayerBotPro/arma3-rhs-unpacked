#define SPEED_STATIC 1e10
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_Mig29_Pilot			= "RHS_Mig29_Pilot";
		RHS_Mig29_Pilot_gear_up	= "RHS_Mig29_Pilot_gear_up";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	#define AnimPath \rhsafrf\addons\rhs_c_mig29\anim
	class States
	{
		class Crew;
		class KIA_Mig29_Pilot: DefaultDie
		{
			actions = DeadActions;
			file=AnimPath\KIA_Mig29_Pilot.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class RHS_Mig29_Pilot: Crew
		{
			leaning="crewShake_half";
			file=AnimPath\Mig29_Pilot.rtm;
			interpolateTo[]=
			{
				RHS_Mig29_Pilot_gear_up, 1,
				KIA_Mig29_Pilot,1
			};
			connectFrom[] = {RHS_Mig29_Pilot_gear_up,1};
		};
		class RHS_Mig29_Pilot_gear_up: RHS_Mig29_Pilot
		{
			speed = 0.45;
			looped=false;
			file=AnimPath\Mig29_Pilot_gear_up.rtm;
			interpolateTo[]=
			{
				RHS_Mig29_Pilot, 1
			};
			connectFrom[] = {RHS_Mig29_Pilot,1};
			connectTo[] = {RHS_Mig29_Pilot,1};
			//variantsAI[] = {"RHS_Mig29_Pilot",0};
			//variantsPlayer[] = {"RHS_Mig29_Pilot",0};
			//variantAfter[] = {0.5,0.5,0.5};

			rightHandIKCurve[]	= { 1 };
			leftHandIKCurve[]	= 
			{ 
				0.0, 	1, 
				0.45, 	1, 
				0.5, 	0.0, 
				0.6, 	0,
				0.75, 	0.8,
				1, 		1
			};
			leftHandIKBeg		= true;
			leftHandIKEnd		= true;
			rightHandIKBeg		= true;
			rightHandIKEnd		= true;
		};
	};
	#undef AnimPath
};