#define SCRIPT_MACRO(name) class ##name## {file = rhsafrf\addons\rhs_aps\scripts\rhs_fnc_##name##.sqf;};

class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class SHTORA
		{
		};
		class Afganit
		{
			SCRIPT_MACRO(aps_missileFired)
		};
	};
};