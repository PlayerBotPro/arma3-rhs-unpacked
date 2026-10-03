
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class m1025_windowHandler
			{
				file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\windowHandler.sqf";
				description = "M1025 window handler";
			};
			class m1025_doorHandler
			{
				file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\doorHandler.sqf";
				description = "M1025 door handler";
			};
			class m1025_doorToggle
			{
				file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\doorToggle.sqf";
				description = "M1025 door toggle";
			};
			class hmmwv_setDecal
			{
				file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\setDecal.sqf";
				description = "Decal handler for M1025";
			};
		};
	};
	class RHSUSF
	{
		tag = "RHSUSF";
		class functions
		{
			class carLightToggle
			{
				file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\rhs_lightToggle.sqf";
				description = "Car Light Toggle";
			};
		};
	};
};

