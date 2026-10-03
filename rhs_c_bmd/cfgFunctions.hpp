
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class BMD
		{
			name = "BMD Functions";
			description = "BMD Init & FX thing";
			class bmd_init
			{
				file = "\rhsafrf\addons\rhs_c_bmd\scripts\rhs_bmd_init.sqf";
				description = "bmd init";
			};
			class bmd_habar
			{
				file = "\rhsafrf\addons\rhs_c_bmd\scripts\bgr_bmd_habar.sqf";
				description = "random habar";
			};
			class bmd_at14_reload
			{
				file = "\rhsafrf\addons\rhs_c_bmd\scripts\rhs_at14_reload.sqf";
				description = "BMD2M AT14 reload";
			};
		};
		class Habar
		{
			class setHabarEden
			{
				file = "\rhsafrf\addons\rhs_c_bmd\scripts\rhs_setHabarEden.sqf";
				description = "Set habar in eden";
			};
		};
	};
};

