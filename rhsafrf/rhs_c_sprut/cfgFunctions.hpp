
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class bmd4_autoloader
			{
				file = "\rhsafrf\addons\rhs_c_sprut\scripts\rhs_autoloader_bmd.sqf";
				description = "Autoloader gun anim & stub ejection for BMD4/BMP3";
			};
			class sprut_autoloader
			{
				file = "\rhsafrf\addons\rhs_c_sprut\scripts\rhs_autoloader_sprut.sqf";
				description = "Autoloader gun anim & stub ejection for Sprut-SD";
			};
			class sprut_init
			{
				file = "\rhsafrf\addons\rhs_c_sprut\scripts\rhs_sprut_init.sqf";
				description = "Initialization script for Sprut-SD / BMD4";
			};
		};
	};
};
