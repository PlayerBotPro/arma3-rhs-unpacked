#define ADDON_PATH rhsusf\addons\rhsusf_c_matv\scripts

class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions 
		{
			class rhino_system
			{
				file = ADDON_PATH\rhs_rhino_system.sqf;
			};
			class matv_init
			{
				file = ADDON_PATH\rhs_matv_init.sqf;
			};
			class matv_codriver_loader
			{
				file = ADDON_PATH\rhs_matv_codriver_loader.sqf;
			};
		};
	};
};