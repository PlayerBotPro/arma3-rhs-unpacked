class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_AUV_Driver = "RHS_AUV_Driver";
		RHS_AUV_CoDriver = "RHS_AUV_CoDriver";
		RHS_AUV_CROWSgunner = "RHS_AUV_CROWSgunner";
		RHS_AUV_FFVpos = "RHS_AUV_FFVpos";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_AUV_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_auv_dvr";
			interpolateTo[] = {"RHS_AUV_KIA_Driver",1};
			//speed = 1e+010;
		};
		class RHS_AUV_KIA_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_auv_dvr_KIA";
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

		class RHS_AUV_CoDriver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_auv_codvr";
			interpolateTo[] = {"RHS_AUV_KIA_CoDriver",1};
			//speed = 1e+010;
		};
		class RHS_AUV_KIA_CoDriver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_auv_codvr_KIA";
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

		class RHS_AUV_CROWSgunner: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_AUV_CROWSgunner";
			interpolateTo[] = {"RHS_AUV_KIA_CROWSgunner",1};
			//speed = 1e+010;
		};
		class RHS_AUV_KIA_CROWSgunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_C_socomauv\anims\rhs_AUV_KIA_CROWSgunner";
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
		class RHS_AUV_FFVpos: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_AUV_ffvpos";
			interpolateTo[] = {"RHS_AUV_KIA_FFVpos",1};
			//speed = 1e+010;
		};
		class RHS_AUV_KIA_FFVpos: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_C_socomauv\anims\rhs_AUV_KIA_ffvpos";
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