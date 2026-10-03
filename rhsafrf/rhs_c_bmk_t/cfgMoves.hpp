
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_BMKT_Driver_in	= "RHS_BMKT_Driver_in";
		RHS_BMKT_Driver_out	= "RHS_BMKT_Driver_out";
		RHS_BMKT_Cargo_in	= "RHS_BMKT_Cargo_in";
		RHS_BMKT_Cargo_out	= "RHS_BMKT_Cargo_turnout";
	};
	class Actions
	{
		class CargoActions;
		class rhs_BMKT_cargo_in_actions: CargoActions
		{
			RHS_BMKT_Cargo_out = "RHS_BMKT_Cargo_turnout";
		};
		class rhs_BMKT_Driver_in_actions: CargoActions
		{
			RHS_BMKT_Driver_out	= "RHS_BMKT_Driver_turnout";
		};
		class rhs_BMKT_Driver_out_actions: CargoActions
		{
			RHS_BMKT_Driver_in		= "RHS_BMKT_Driver_turnin";
		};
		class RifleStandActions;
		class FFV_BaseActions: RifleStandActions
		{
			RHS_BMKT_Cargo_in	= "RHS_BMKT_Cargo_turnin";
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PreciseCrew;
		class RHS_CrewIn_Base: Crew
		{

		};

		#define ANIM_PATH rhsafrf\addons\rhs_c_bmk_t\anims
		#define ANIM_FPS(fps,frames) speed = __EVAL(fps/frames);

		////////////
		// Driver //
		////////////
		class RHS_BMKT_Driver_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\rhs_BMKT_driver_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_BMKT_Driver_in: RHS_CrewIn_Base
		{
			actions = "CargoActions";
			file = ANIM_PATH\rhs_BMKT_Driver_in.rtm;
			interpolateTo[] = {
				"RHS_BMKT_Driver_in_Dead",1,
			};
			interpolateFrom[] =
			{
			};
			looped				= 1;
		};
		class RHS_BMKT_Driver_out: RHS_BMKT_Driver_in
		{
			actions = "CargoActions";
			file = ANIM_PATH\RHS_BMKT_Driver_out.rtm;

			looped				= 1;
			minplaytime			= 0.4;
			InterpolateTo[]		= {"RHS_BMKT_Driver_in_Dead",1,};
			ConnectTo[]			= {};
		};
		class RHS_BMKT_Driver_turnout: Crew
		{
			//file = ANIM_PATH\RHS_BMKT_Driver_turnout.rtm;
			speed = 1.1;

			looped				= 0;
			minplaytime			= 0.4;
			variantsAI[]		= {"RHS_BMKT_Driver_out",1};
			variantsPlayer[]	= {"RHS_BMKT_Driver_out",1};
			variantAfter[]		= {1.5,1.5,1.5};
			interpolationspeed	= 0.6;
		};
		class RHS_BMKT_Driver_turnin: RHS_BMKT_Driver_turnout
		{
			//file = ANIM_PATH\RHS_BMKT_Driver_turnin.rtm;

			InterpolateFrom[]	= {"RHS_BMKT_Driver_in",1.1};
			InterpolateTo[]		= {"RHS_BMKT_Driver_in",1.1};
			variantsAI[]		= {"RHS_BMKT_Driver_in",1};
			variantsPlayer[]	= {"RHS_BMKT_Driver_in",1};
			speed = 1.1;
		};


		///////////
		// Cargo //
		///////////
		class RHS_BMKT_Cargo_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\RHS_BMKT_Cargo_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_BMKT_Cargo_in: RHS_CrewIn_Base
		{
			//actions = "rhs_BMKT_tc_in_actions";
			file = ANIM_PATH\RHS_BMKT_Cargo_in.rtm;
			interpolateTo[] = {
				"RHS_BMKT_Cargo_in_Dead",1,
				"RHS_BMKT_Cargo_turnout",0.1
			};
			interpolateFrom[] =
			{
				"RHS_BMKT_Cargo_turnin",0.1
			};
		};
		class RHS_BMKT_Cargo_turnout: Crew
		{
			file = ANIM_PATH\RHS_BMKT_Cargo_turnout.rtm;
			speed = 0.91;
			//interpolateTo[] = {"RHS_BMKT_TC_in_Dead",1};

			looped				= 0;
			minplaytime			= 0.4;
			InterpolateTo[]		= {"vehicle_turnout_2_Idle",1.1};
			ConnectTo[]			= {vehicle_turnout_2_Idle,1};
			boundingSphere		= 3;
			interpolationspeed	= 3.2;
		};
		class RHS_BMKT_Cargo_turnin: RHS_BMKT_Cargo_turnout
		{
			file = ANIM_PATH\RHS_BMKT_Cargo_turnin.rtm;

			interpolateFrom[] = {
				"vehicle_turnout_2_Idle",1,
			};

			connectTo[]			= {"RHS_BMKT_Cargo_in",1};
			interpolateTo[]		= {"RHS_BMKT_Cargo_in_Dead",1};
			variantsAI[]		= {"RHS_BMKT_Cargo_in",1};
			variantsPlayer[]	= {"RHS_BMKT_Cargo_in",1};
			variantAfter[]		= {1.5,1.5,1.5};
			interpolationspeed	= 2;

			speed = 0.74;
		};

	};
};