class CfgMovesBasic
{
	class DefaultDie;
	class BlendAnims;
	class ManActions
	{
		RHS_M11XX_CoDriver = "RHS_M11XX_CoDriver";
		RHS_M11XX_CROWS_Gunner = "RHS_M11XX_CROWS_Gunner";
		RHS_M11XX_LRAS_Gunner1_in = "RHS_M11XX_LRAS_Gunner1_in";
		RHS_M11XX_LRAS_Gunner1_out = "RHS_M11XX_LRAS_Gunner1_out";
		RHS_M11XX_LRAS_Gunner2 = "RHS_M11XX_LRAS_Gunner2";
		RHS_M11XX_LRAS_Gunner3 = "RHS_M11XX_LRAS_Gunner3";
		RHS_M11XX_PKM_Gunner = "RHS_M11XX_PKM_Gunner";
		RHS_M11XX_M134_Gunner = "RHS_M11XX_M134_Gunner";
		RHS_GMV_Cargo_lf = "RHS_GMV_Cargo_lf";
		RHS_GMV_Cargo_lb = "RHS_GMV_Cargo_lb";
		RHS_GMV_Cargo_rf = "RHS_GMV_Cargo_rf";
		RHS_GMV_Cargo_rb = "RHS_GMV_Cargo_rb";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_M11XX_CoDriver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_CoDriver";
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo",0.1};
			speed = 1e+010;
		};
		class RHS_M11XX_CROWS_Gunner: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_CROWS_Gunner";
			interpolateTo[] = {"RHS_HMMWV_KIA_Cargo",0.1};
			//speed = 1e+010;
		};
		class RHS_M11XX_LRAS_Gunner1_in: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_LRAS_Gunner1_in";
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
		class RHS_M11XX_LRAS_Gunner1_out: RHS_M11XX_LRAS_Gunner1_in
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_LRAS_Gunner1_out";
		};
		class RHS_M11XX_LRAS_Gunner2: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_LRAS_Gunner2";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_M11XX_LRAS_Gunner3: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_LRAS_Gunner3";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_M11XX_PKM_Gunner: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_PKM_Gunner";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_M11XX_M134_Gunner: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_M134_Gunner";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_GMV_Cargo_lf: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_gmv_cargo_lf";
			interpolateTo[] = {"RHS_HMMWV_KIA_Gunner",1};
			speed = 1e+010;
			boundingSphere = 2.5;
		};
		class RHS_GMV_Cargo_lb: RHS_GMV_Cargo_lf
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_gmv_cargo_lb";
		};
		class RHS_GMV_Cargo_rf: RHS_GMV_Cargo_lf
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_gmv_cargo_rf";
		};
		class RHS_GMV_Cargo_rb: RHS_GMV_Cargo_lf
		{
			file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_gmv_cargo_rb";
		};
	};
};