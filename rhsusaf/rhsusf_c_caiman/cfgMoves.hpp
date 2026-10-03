
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_CMN_Driver = "RHS_CMN_Driver";
		RHS_CMN_CROWSgunner = "RHS_CMN_CROWSgunner";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_CMN_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_caiman\anims\Caiman_Driver";
			interpolateTo[] = {"RHS_CMN_KIA_Driver",1};
			//speed = 1e+010;
		};
		class RHS_CMN_KIA_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_C_caiman\anims\Caiman_KIA_Driver";
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
		class RHS_CMN_CROWSgunner: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_caiman\anims\rhs_CMN_CROWSgunner";
			interpolateTo[] = {"RHS_CMN_KIA_CROWSgunner",1};
			//speed = 1e+010;
		};
		class RHS_CMN_KIA_CROWSgunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_C_caiman\anims\rhs_CMN_KIA_CROWSgunner";
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