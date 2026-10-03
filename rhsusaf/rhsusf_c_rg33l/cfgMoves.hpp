
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_HEMTT_Driver = "RHS_HEMTT_Driver";
		RHS_rg33l_Cargo01_FFV = "RHS_rg33l_Cargo01_FFV";
		RHS_rg33l_Cargo02_FFV = "RHS_rg33l_Cargo02_FFV";
		RHS_rg33l_Cargo03_FFV = "RHS_rg33l_Cargo03_FFV";
		RHS_rg33l_Cargo04_FFV = "RHS_rg33l_Cargo04_FFV";
		RHS_MCTAGS_Gunner03 = "RHS_MCTAGS_Gunner03";
		RHS_MCTAGS_Gunner03_in = "RHS_MCTAGS_Gunner03_in";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_HEMTT_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_RG33L\anims\HEMTT_Driver";
			interpolateTo[] = {"RHS_HEMTT_KIA_Driver",1};
			speed = 1e+010;
		};
		class RHS_HEMTT_KIA_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_C_RG33L\anims\HEMTT_KIA_Driver";
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
		class RHS_rg33l_Cargo01_FFV: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_RG33L\anims\CargoLeft";
			interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV",1};
			speed = 1e+010;
			canPullTrigger = 0;
		};
		class RHS_rg33l_Cargo02_FFV: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_RG33L\anims\CargoLeft1";
			interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV",1};
			speed = 1e+010;
			canPullTrigger = 0;
		};
		class RHS_rg33l_Cargo03_FFV: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_RG33L\anims\CargoLeft1";
			interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV",1};
			speed = 1e+010;
			canPullTrigger = 0;
		};
		class RHS_rg33l_Cargo04_FFV: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_RG33L\anims\CargoRight";
			interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV",1};
			speed = 1e+010;
			canPullTrigger = 0;
		};
		class RHS_MCTAGS_Gunner03: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_RG33L\anims\MCTAGS_Gunner03";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_MCTAGS_Gunner03_in: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_RG33L\anims\MCTAGS_Gunner03_in";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			boundingSphere = 2.5;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
			rightLegIKCurve[] = {0};
			leftLegIKCurve[] = {0};
		};
	};
};