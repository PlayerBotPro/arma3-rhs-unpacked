#define SCRIPT_MACRO(name) class ##name## {file = rhsafrf\addons\rhs_c_2s3\scripts\rhs_fnc_##name##.sqf;};
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			SCRIPT_MACRO(2s3_init)
		};
	};
};