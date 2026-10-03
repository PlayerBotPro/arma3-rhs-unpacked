#define SCRIPT_MACRO(name) class ##name## {file = rhsafrf\addons\rhs_c_2s1\scripts\rhs_fnc_##name##.sqf;};
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			SCRIPT_MACRO(2s1_ejection)
			SCRIPT_MACRO(2s1_init)
		};
	};
};
