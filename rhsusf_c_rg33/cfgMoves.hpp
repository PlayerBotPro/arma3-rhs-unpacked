class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_4X4_Driver = "RHS_AUV_Driver";
		RHS_4X4_CoDriver = "RHS_AUV_CoDriver";
		RHS_4X4_CROWSgunner = "RHS_AUV_CROWSgunner";
		RHS_4X4_Cargo01 = "RHS_4X4_Cargo01";
		RHS_4X4_Cargo01_FFV = "RHS_4X4_Cargo01_FFV";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_4X4_Cargo01: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_rg33\anims\rhs_ASV_cargo";
			interpolateTo[] = {"RHS_4X4_KIA_Cargo01",1};
			//speed = 1e+010;
		};
		class RHS_4X4_KIA_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_c_rg33\anims\rhs_ASV_KIA_cargo";
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
		class RHS_4X4_Cargo01_FFV: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_rg33\anims\rhs_ASV_ffvpos";
			interpolateTo[] = {"RHS_4X4_KIA_Cargo01_FFV",1};
			//speed = 1e+010;
		};
		class RHS_4X4_KIA_Cargo01_FFV: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_c_rg33\anims\rhs_ASV_KIA_ffvpos";
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