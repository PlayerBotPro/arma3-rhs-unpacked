
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_HIMARS_Driver = "RHS_HIMARS_Driver";
		//RHS_rg33l_Cargo01_FFV = "RHS_rg33l_Cargo01_FFV";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_HIMARS_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_HIMARS\anims\HIMARS_Driver";
			interpolateTo[] = {"RHS_FMTV_KIA_Driver",1};
			//speed = 1e+010;
		};
		class RHS_HIMARS_KIA_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_C_HIMARS\anims\HIMARS_KIA_Driver";
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
		/*class RHS_rg33l_Cargo01_FFV: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_himars\anims\CargoLeft";
			interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV",1};
			speed = 1e+010;
			canPullTrigger = 0;
		};*/
	};
};