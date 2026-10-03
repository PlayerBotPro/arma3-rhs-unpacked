
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class bmp_init
			{
				file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_bmp_init.sqf";
				description = "Init for BMP-1/2 vehicles";
			};
			class bmp_doors
			{
				file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_bmp_doors.sqf";
				description = "Door handler for BMP-1/2 vehicles";
			};
			class bmp_konkurs_reload
			{
				file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_konkurs_reload.sqf";
				description = "BMP-2 Konkurs reload";
			};
			class prp3_autoloader
			{
				file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_prp3_load.sqf";
				description = "Autoloader gun anim for PRP-3";
			};
			class psnr5k_init
			{
				file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_psnr5k_init.sqf";
				description = "PSNR-5K Radar init";
			};
			class psnr5k_deploy
			{
				file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_psnr5k_deploy.sqf";
				description = "PSNR-5K Radar deploy";
			};
			class lockTop
			{
				file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_lockTop.sqf";
				description = "Disable all top (external) positions on designated vehicle";
			};
			class 9p135_hatch
			{
				file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_9p135_hatch.sqf";
				description = "9P135 top hatch handler";
			};
		};
	};
};