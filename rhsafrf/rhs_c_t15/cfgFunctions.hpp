#define SCRIPT_MACRO(name) class ##name## {file = rhsafrf\addons\rhs_c_t15\scripts\rhs_fnc_##name##.sqf;};
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			SCRIPT_MACRO(t15_init)
			SCRIPT_MACRO(t15_deleted)
			SCRIPT_MACRO(t15_destroyed)
		};
	};
};