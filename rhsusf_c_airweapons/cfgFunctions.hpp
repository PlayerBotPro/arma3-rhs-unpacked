#define SCRIPT_MACRO(fn,name) class fn {file = rhsusf\addons\rhsusf_c_airweapons\scripts\##name##.sqf;};
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			SCRIPT_MACRO(AGM114_helper,rhs_fnc_agm114_helper)
		};
	};
};
