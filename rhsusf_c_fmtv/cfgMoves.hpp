
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_FMTV_Driver = "RHS_FMTV_Driver";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_FMTV_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_FMTV\anims\FMTV_Driver";
			interpolateTo[] = {"RHS_FMTV_KIA_Driver",1};
			//speed = 1e+010;
		};
		class RHS_FMTV_KIA_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_C_FMTV\anims\FMTV_KIA_Driver";
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
	};
};