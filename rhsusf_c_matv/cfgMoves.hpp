class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_MATV_Driver = "RHS_MATV_Driver";
		RHS_MATV_Gunner_M240 = "RHS_MATV_Gunner_M240";
		RHS_MATV_CROWSgunner = "RHS_MATV_CROWSgunner";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_MATV_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_matv\anims\rhs_matv_dvr";
			interpolateTo[] = {"RHS_AUV_KIA_Driver",1};
			//speed = 1e+010;
		};
		class RHS_MATV_Gunner_M240: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_matv\anims\MATV_Gunner_M240";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_MATV_CROWSgunner: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_matv\anims\rhs_MATV_CROWSgunner";
			interpolateTo[] = {"RHS_MATV_KIA_CROWSgunner",1};
			//speed = 1e+010;
		};
		class RHS_MATV_KIA_CROWSgunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_c_matv\anims\rhs_matv_KIA_CROWSgunner";
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