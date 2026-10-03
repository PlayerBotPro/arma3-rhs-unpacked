
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class t80_init
			{
				file = "\rhsafrf\addons\rhs_c_tanks\scripts\rhs_tank_init.sqf";
				description = "Initialization script for T-80";
			};
			class t80_autoloader
			{
				file = "\rhsafrf\addons\rhs_c_tanks\scripts\rhs_autoloader.sqf";
				description = "Autoloader gun anim for T-80";
			};
			class t80_habar
			{
				file = "\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_habar.sqf";
				description = "Habar manager for T-80";
			};
			class t80_mp
			{
				file = "\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_mp.sqf";
				description = "Snorkel manager for T-80";
			};
			class t80_snorkel_eh
			{
				file = "\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_snorkel_eh.sqf";
				description = "Snorkel engine event handler";
			};
			class t80_searchlightTexture
			{
				file = "\rhsafrf\addons\rhs_c_tanks\scripts\rhs_searchlight.sqf";
				description = "Open/close searchlight";
			};
			class engineStartupDelay
			{
				file = "\rhsafrf\addons\rhs_c_tanks\scripts\rhs_engineStart.sqf";
				description = "Engine startup delay";
			};
		};
	};
};