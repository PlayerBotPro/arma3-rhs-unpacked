
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_M109_DriverIn = "RHS_M109_DriverIn";
		RHS_M109_DriverOut = "RHS_M109_DriverOut";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_M109_DriverIn: Crew
		{
			file		= \rhsusf\addons\rhsusf_c_m109\anims\rhs_m109_driverIn;
			connectTo[]	= {"RHS_M1A1_KIA_Driver",1};
			speed		= 1e+010;
		};
		class RHS_M109_DriverOut: Crew
		{
			file		= \rhsusf\addons\rhsusf_c_m109\anims\rhs_m109_driverOut;
			connectTo[]	= {"RHS_M1A1_KIA_Driver",1};
			speed		= 1e+010;
		};
		class RHS_M109_KIA_Driver: DefaultDie
		{
			file			= \rhsusf\addons\rhsusf_c_m109\anims\rhs_m109_driverIn;
			speed			= 1e+010;
			terminal		= 1;
			soundEnabled	= 0;
			looped			= 0;
			connectTo[]		= {"Unconscious",0.1};
		};
	};
};