
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_M1A1_Driver		= "RHS_M1A1_Driver";
		RHS_M1A1_Loader_In	= "RHS_m1a1_loader_In";
		RHS_M1A1_Loader_Out	= "vehicle_turnout_2_Idle";
	};
	class Actions
	{
		class CargoActions;
		class rhs_m1a1_loader_in_actions: CargoActions
		{
			RHS_m1a1_loader_out = "rhs_m1a1_loader_turnout";
		};
		class RifleStandActions;
		class FFV_BaseActions: RifleStandActions
		{
			RHS_m1a1_loader_in	= "RHS_m1a1_loader_turnin";
		};
	};
};

#define ANIM_PATH rhsusf\addons\rhsusf_c_m1a1\anims
#define ANIM_FPS(fps,frames) speed = __EVAL(fps/frames);

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_CrewIn_Base: Crew {};
		class RHS_M1A1_Driver: Crew
		{
			file		= \rhsusf\addons\rhsusf_c_m1a1\anims\rhs_m1a1_driver;
			interpolateTo[]	= {"RHS_M1A1_KIA_Driver",1};
		};
		class RHS_M1A1_KIA_Driver: DefaultDie
		{
			file			= \rhsusf\addons\rhsusf_c_m1a1\anims\rhs_m1a1_driver;
			speed			= 1e+010;
			terminal		= 1;
			soundEnabled	= 0;
			looped			= 0;
			connectTo[]		= {"Unconscious",0.1};
		};

		////////////
		// Loader //
		////////////

		class RHS_m1a1_loader_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\rhs_m1a1_loader_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_m1a1_loader_in: RHS_CrewIn_Base
		{
			actions = "rhs_m1a1_loader_in_actions";
			file = ANIM_PATH\rhs_m1a1_loader_in.rtm;
			interpolateTo[] = {
				"RHS_m1a1_loader_in_Dead",1,
				"RHS_m1a1_loader_turnout",0.1
			};
			interpolateFrom[] =
			{
				"RHS_m1a1_loader_turnin",0.1
			};
			variantAfter[] = {5,5,5};
		};
		class RHS_m1a1_loader_turnout: Crew
		{
			file = ANIM_PATH\rhs_m1a1_loader_turnout.rtm;
			speed = 1.25;

			looped				= 0;
			minplaytime			= 0.8;
			InterpolateTo[]		= {"vehicle_turnout_2_Idle",1.1};
			ConnectTo[]			= {vehicle_turnout_2_Idle,1};
			boundingSphere		= 3;
			interpolationspeed	= 3.2;
		};
		class RHS_m1a1_loader_turnin: RHS_m1a1_loader_turnout
		{
			file = ANIM_PATH\rhs_m1a1_loader_turnin.rtm;
			speed = 0.65;

			interpolateFrom[] = {
				"RHS_m1a1_loader_turnout",1,
				"vehicle_turnout_2_idle_unarmed",1,
				"vehicle_turnout_2_Idle",1,
			};

			connectTo[]			= {"RHS_m1a1_loader_in",1};
			interpolateTo[]		= {"RHS_m1a1_loader_in_Dead",1};
			variantsAI[]		= {"RHS_m1a1_loader_in",1};
			variantsPlayer[]	= {"RHS_m1a1_loader_in",1};
			variantAfter[]		= {1.5,1.5,1.5};
			interpolationspeed	= 2;
		};
	};
};