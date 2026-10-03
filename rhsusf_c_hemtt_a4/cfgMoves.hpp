
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_HEMTT_Driver = "RHS_HEMTT_Driver";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_HEMTT_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_HEMTT_a4\anims\HEMTT_Driver";
			interpolateTo[] = {"RHS_HEMTT_KIA_Driver",1};
			speed = 1e+010;
		};
		class RHS_HEMTT_KIA_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_C_HEMTT_a4\anims\HEMTT_KIA_Driver";
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