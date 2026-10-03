
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_Stryker_M1126_Driver_in			= "RHS_Stryker_M1126_Driver_in";
		RHS_Stryker_M1126_Driver_out		= "RHS_Stryker_M1126_Driver_out";
		RHS_Stryker_M1126_Driver_turnin		= "RHS_Stryker_M1126_Driver_turnin";
		RHS_Stryker_M1126_Driver_turnout	= "RHS_Stryker_M1126_Driver_turnout";
		RHS_Stryker_M1126_Gunner_in			= "RHS_Stryker_M1126_Gunner_in";
		RHS_Stryker_M1126_Gunner_out		= "RHS_Stryker_M1126_Gunner_turnout";
		RHS_Stryker_M1126_TC_in				= "RHS_Stryker_M1126_TC_in";
		RHS_Stryker_M1126_TC_out			= "vehicle_turnout_2_Idle";
		RHS_Stryker_M1126_TC_turnin			= "RHS_Stryker_M1126_TC_turnin";
		RHS_Stryker_M1126_TC_turout			= "RHS_Stryker_M1126_TC_turnout";
		RHS_Stryker_M1126_AG_in				= "RHS_Stryker_M1126_AG_in";
		RHS_Stryker_M1126_AG_out			= "vehicle_turnout_2_Idle";
		RHS_Stryker_M1126_AG_turnin			= "RHS_Stryker_M1126_AG_turnin";
		RHS_Stryker_M1126_AG_turnout		= "RHS_Stryker_M1126_AG_turnout";
		// M1127
		RHS_Stryker_M1127_Gunner_in			= "RHS_Stryker_M1127_Gunner_in";
		RHS_Stryker_M1127_Gunner_out		= "RHS_Stryker_M1127_Gunner_turnout";
		RHS_Stryker_M1127_M2_Gunner			= "RHS_Stryker_M1127_M2_Gunner";
		RHS_Stryker_M1127_LRAS_Gunner		= "RHS_Stryker_M1127_LRAS_Gunner";
		// M1134
		RHS_Stryker_M1134_Gunner_in			= "RHS_Stryker_M1134_Gunner_in";
		RHS_Stryker_M1134_M240_Gunner		= "RHS_Stryker_M1134_M240_Gunner";
	};
	class Actions
	{
		class CargoActions;
		class rhs_stryker_m1126_tc_in_actions: CargoActions
		{
			RHS_Stryker_M1126_TC_out = "RHS_Stryker_M1126_TC_turnout";
		};
		class rhs_stryker_m1126_AG_in_actions: CargoActions
		{
			RHS_Stryker_M1126_AG_out = "RHS_Stryker_M1126_AG_turnout";
		};
		class rhs_stryker_m1126_Driver_in_actions: CargoActions
		{
			RHS_Stryker_M1126_Driver_out	= "RHS_Stryker_M1126_Driver_turnout";
			//RHS_Stryker_M1126_Driver_in		= "RHS_Stryker_M1126_Driver_turnin";
		};
		class rhs_stryker_m1126_Driver_out_actions: CargoActions
		{
			RHS_Stryker_M1126_Driver_in		= "RHS_Stryker_M1126_Driver_turnin";
			//RHS_Stryker_M1126_Driver_out	= "RHS_Stryker_M1126_Driver_turnout";
		};
		class RifleStandActions;
		class FFV_BaseActions: RifleStandActions
		{
			RHS_Stryker_M1126_TC_in		= "RHS_Stryker_M1126_TC_turnin";
			RHS_Stryker_M1126_AG_in		= "RHS_Stryker_M1126_AG_turnin";
			RHS_Stryker_M1126_Gunner_in	= "RHS_Stryker_M1126_Gunner_turnin";
			RHS_Stryker_M1127_Gunner_in	= "RHS_Stryker_M1127_Gunner_turnin";
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

		#define ANIM_PATH rhsusf\addons\rhsusf_c_stryker\anims
		#define ANIM_FPS(fps,frames) speed = __EVAL(fps/frames);

		////////////
		// Driver //
		////////////
		class RHS_Stryker_M1126_Driver_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\stryker_m1126_driver_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_Stryker_M1126_Driver_in: RHS_CrewIn_Base
		{
			actions = "CargoActions";
			file = ANIM_PATH\stryker_m1126_Driver_in.rtm;
			interpolateTo[] = {
				"RHS_Stryker_M1126_Driver_in_Dead",1,
			};
			interpolateFrom[] =
			{
			};
			looped				= 1;
		};
		class RHS_Stryker_M1126_Driver_out: RHS_Stryker_M1126_Driver_in
		{
			actions = "CargoActions";
			file = ANIM_PATH\stryker_m1126_Driver_out.rtm;
			//interpolateTo[] = {"RHS_Stryker_M1126_TC_in_Dead",1};

			looped				= 1;
			minplaytime			= 0.4;
			InterpolateTo[]		= {"RHS_Stryker_M1126_Driver_in_Dead",1,};
			ConnectTo[]			= {};
		};
		class RHS_Stryker_M1126_Driver_turnout: Crew
		{
			file = ANIM_PATH\stryker_m1126_Driver_turnout.rtm;
			speed = 1.1;
			//interpolateTo[] = {"RHS_Stryker_M1126_TC_in_Dead",1};

			looped				= 0;
			minplaytime			= 0.4;
			variantsAI[]		= {"RHS_Stryker_M1126_Driver_out",1};
			variantsPlayer[]	= {"RHS_Stryker_M1126_Driver_out",1};
			variantAfter[]		= {1.5,1.5,1.5};
			interpolationspeed	= 0.6;
		};
		class RHS_Stryker_M1126_Driver_turnin: RHS_Stryker_M1126_Driver_turnout
		{
			file = ANIM_PATH\stryker_m1126_Driver_turnin.rtm;

			InterpolateFrom[]	= {"RHS_Stryker_M1126_Driver_in",1.1};
			InterpolateTo[]		= {"RHS_Stryker_M1126_Driver_in",1.1};
			variantsAI[]		= {"RHS_Stryker_M1126_Driver_in",1};
			variantsPlayer[]	= {"RHS_Stryker_M1126_Driver_in",1};
			speed = 1.1;
		};


		////////////
		// Gunner //
		////////////
		class RHS_Stryker_M1126_Gunner_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\stryker_m1126_gunner_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_Stryker_M1126_Gunner_in: RHS_CrewIn_Base
		{
			//actions = "rhs_stryker_m1126_tc_in_actions";
			file = ANIM_PATH\stryker_m1126_gunner_in.rtm;
			interpolateTo[] = {
				"RHS_Stryker_M1126_TC_in_Dead",1,
				"RHS_Stryker_M1126_TC_turnout",0.1
			};
			interpolateFrom[] =
			{
				"RHS_Stryker_M1126_TC_turnin",0.1
			};
		};
		class RHS_Stryker_M1126_gunner_turnout: Crew
		{
			file = ANIM_PATH\stryker_m1126_gunner_turnout.rtm;
			speed = 0.91;
			//interpolateTo[] = {"RHS_Stryker_M1126_TC_in_Dead",1};

			looped				= 0;
			minplaytime			= 0.4;
			InterpolateTo[]		= {"vehicle_turnout_2_Idle",1.1};
			ConnectTo[]			= {vehicle_turnout_2_Idle,1};
			boundingSphere		= 3;
			interpolationspeed	= 3.2;
		};
		class RHS_Stryker_M1126_gunner_turnin: RHS_Stryker_M1126_gunner_turnout
		{
			file = ANIM_PATH\stryker_m1126_gunner_turnin.rtm;

			interpolateFrom[] = {
				"vehicle_turnout_2_Idle",1,
			};

			connectTo[]			= {"RHS_Stryker_M1126_Gunner_in",1};
			interpolateTo[]		= {"RHS_Stryker_M1126_Gunner_in_Dead",1};
			variantsAI[]		= {"RHS_Stryker_M1126_Gunner_in",1};
			variantsPlayer[]	= {"RHS_Stryker_M1126_Gunner_in",1};
			variantAfter[]		= {1.5,1.5,1.5};
			interpolationspeed	= 2;

			speed = 0.74;
		};

		/////////////////////
		// Troop commander //
		/////////////////////
		class RHS_Stryker_M1126_TC_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\stryker_m1126_tc_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_Stryker_M1126_TC_in: RHS_CrewIn_Base
		{
			actions = "rhs_stryker_m1126_tc_in_actions";
			file = ANIM_PATH\stryker_m1126_tc_in.rtm;
			interpolateTo[] = {
				"RHS_Stryker_M1126_TC_in_Dead",1,
				"RHS_Stryker_M1126_TC_turnout",0.1
			};
			interpolateFrom[] =
			{
				"RHS_Stryker_M1126_TC_turnin",0.1
			};
			variantAfter[] = {5,5,5};
		};
		class RHS_Stryker_M1126_TC_turnout: Crew
		{
			file = ANIM_PATH\stryker_m1126_tc_turnout.rtm;
			speed = 0.65;
			//interpolateTo[] = {"RHS_Stryker_M1126_TC_in_Dead",1};

			looped = 0;
			minplaytime = 0.8;
			InterpolateTo[] = {"vehicle_turnout_2_Idle",1.1};
			ConnectTo[] = {vehicle_turnout_2_Idle,1};
			boundingSphere = 3;
			interpolationspeed = 3.2;

		};
		class RHS_Stryker_M1126_TC_turnin: RHS_Stryker_M1126_TC_turnout
		{
			file = ANIM_PATH\stryker_m1126_tc_turnin.rtm;
			speed = 0.65;

			interpolateFrom[] = {
				"vehicle_turnout_2_Idle",1,
			};

			connectTo[]			= {"RHS_Stryker_M1126_TC_in",1};
			interpolateTo[]		= {"RHS_Stryker_M1126_TC_in_Dead",1};
			variantsAI[]		= {"RHS_Stryker_M1126_TC_in",1};
			variantsPlayer[]	= {"RHS_Stryker_M1126_TC_in",1};
			variantAfter[]		= {1.5,1.5,1.5};
			interpolationspeed	= 2;
		};

		///////////////
		// Air guard //
		///////////////
		class RHS_Stryker_M1126_AG_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\stryker_m1126_ag_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_Stryker_M1126_AG_in: RHS_CrewIn_Base
		{
			actions = "rhs_stryker_m1126_AG_in_actions";
			file = ANIM_PATH\stryker_m1126_AG_in.rtm;
			interpolateTo[] = {
				"RHS_Stryker_M1126_AG_in_Dead",1,
				"RHS_Stryker_M1126_AG_turnout",0.1
			};
			interpolateFrom[] =
			{
				"RHS_Stryker_M1126_AG_turnin",0.1
			};
			variantAfter[] = {5,5,5};
		};
		class RHS_Stryker_M1126_AG_turnout: RHS_Stryker_M1126_TC_turnout
		{
			file = ANIM_PATH\stryker_m1126_AG_turnout.rtm;
			speed = 0.65;
			interpolateTo[] = {"RHS_Stryker_M1126_AG_in_Dead",1};

		};
		class RHS_Stryker_M1126_AG_turnin: RHS_Stryker_M1126_AG_turnout
		{
			file = ANIM_PATH\stryker_m1126_AG_turnin.rtm;
			speed = 0.65;

			interpolateFrom[] = {
				"vehicle_turnout_2_Idle",1,
			};

			connectTo[]			= {"RHS_Stryker_M1126_AG_in",1};
			interpolateTo[]		= {"RHS_Stryker_M1126_AG_in_Dead",1};
			variantsAI[]		= {"RHS_Stryker_M1126_AG_in",1};
			variantsPlayer[]	= {"RHS_Stryker_M1126_AG_in",1};
			variantAfter[]		= {1.5,1.5,1.5};
			interpolationspeed	= 2.2;
		};
		
		///////////////////////
		// M1127 Main Gunner //
		///////////////////////
		class RHS_Stryker_M1127_Gunner_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\stryker_M1127_gunner_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_Stryker_M1127_Gunner_in: RHS_CrewIn_Base
		{
			//actions = "rhs_stryker_M1127_tc_in_actions";
			file = ANIM_PATH\stryker_M1127_gunner_in.rtm;
			interpolateTo[] = {
				"RHS_Stryker_M1127_Gunner_in_Dead",1,
				"RHS_Stryker_M1127_gunner_turnout",0.1
			};
			interpolateFrom[] =
			{
				"RHS_Stryker_M1127_Gunner_turnin",0.1
			};
		};
		class RHS_Stryker_M1127_gunner_turnout: Crew
		{
			file = ANIM_PATH\stryker_M1127_gunner_turnout.rtm;
			speed = 0.91;
			//interpolateTo[] = {"RHS_Stryker_M1127_TC_in_Dead",1};

			looped				= 0;
			minplaytime			= 0.4;
			InterpolateTo[]		= {"vehicle_turnout_2_Idle",1.1};
			ConnectTo[]			= {vehicle_turnout_2_Idle,1};
			boundingSphere		= 3;
			interpolationspeed	= 3.2;
		};
		class RHS_Stryker_M1127_gunner_turnin: RHS_Stryker_M1127_gunner_turnout
		{
			file = ANIM_PATH\stryker_M1127_gunner_turnin.rtm;

			interpolateFrom[] = {
				"vehicle_turnout_2_Idle",1,
			};

			connectTo[]			= {"RHS_Stryker_M1127_Gunner_in",1};
			interpolateTo[]		= {"RHS_Stryker_M1127_Gunner_in_Dead",1};
			variantsAI[]		= {"RHS_Stryker_M1127_Gunner_in",1};
			variantsPlayer[]	= {"RHS_Stryker_M1127_Gunner_in",1};
			variantAfter[]		= {1.5,1.5,1.5};
			interpolationspeed	= 2;

			speed = 0.74;
		};
		/////////////////////
		// M1127 M2 Gunner //
		/////////////////////
		class RHS_Stryker_M1127_M2_Gunner_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\stryker_m1127_M2_Gunner_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_Stryker_M1127_M2_Gunner: RHS_CrewIn_Base
		{
			//actions = "rhs_stryker_m1127_M2_Gunner_actions";
			file = ANIM_PATH\stryker_m1127_M2_Gunner.rtm;
			interpolateTo[] = {
				"RHS_Stryker_M1127_M2_Gunner_Dead",1
			};
			variantAfter[] = {5,5,5};
		};
		/////////////////////
		// M1127 LRAS Gunner //
		/////////////////////
		class RHS_Stryker_M1127_LRAS_Gunner_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\stryker_m1127_LRAS_Gunner_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_Stryker_M1127_LRAS_Gunner: RHS_CrewIn_Base
		{
			//actions = "rhs_stryker_m1127_LRAS_Gunner_actions";
			file = ANIM_PATH\stryker_m1127_LRAS_Gunner.rtm;
			interpolateTo[] = {
				"RHS_Stryker_M1127_LRAS_Gunner_Dead",1
			};
			variantAfter[] = {5,5,5};
		};
		//////////////////
		// M1134 Gunner //
		//////////////////
		class RHS_Stryker_M1134_Gunner_in_Dead: DefaultDie
		{
			actions			= "DeadActions";
			file			= ANIM_PATH\stryker_m1134_Gunner_in_kia.rtm;
			speed			= 0.5;
			looped			= 0;
			terminal		= 1;
			soundEnabled	= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
		class RHS_Stryker_M1134_Gunner_in: RHS_CrewIn_Base
		{
			file = ANIM_PATH\stryker_m1134_Gunner_in.rtm;
			interpolateTo[] = {
				"RHS_Stryker_M1134_Gunner_in_Dead",1
			};
			variantAfter[] = {5,5,5};
		};
		///////////////////////
		// M1134 M240 Gunner //
		///////////////////////
		class RHS_Stryker_M1134_m240_Gunner: RHS_CrewIn_Base
		{
			file = ANIM_PATH\stryker_m1134_m240_Gunner.rtm;
			interpolateTo[] = {
				"RHS_HMMWV_KIA_Gunner",1
			};
			variantAfter[] = {5,5,5};
		};
	};
};