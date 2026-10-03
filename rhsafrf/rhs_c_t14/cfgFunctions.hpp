#define SCRIPT_MACRO(name) class ##name## {file = rhsafrf\addons\rhs_c_t14\scripts\rhs_fnc_##name##.sqf;};
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			SCRIPT_MACRO(t14_init)
			SCRIPT_MACRO(t14_deleted)
			SCRIPT_MACRO(t14_destroyed)
		};
	};
};