#define SCRIPT_PATH(name) file = rhsgref\addons\rhsgref_c_a29\scripts\##name##.sqf;
class CfgFunctions
{
	class RHS
	{
		recompile = 1;
		tag = "RHS";
		class functions
		{
			class a29_mainLoop {SCRIPT_PATH(rhs_a29_mainLoop)};
			class a29_seatEjection {SCRIPT_PATH(rhs_a29_seatEjection)};
			class a29_damage {SCRIPT_PATH(rhs_a29_damage)};
			class a29_MFD_switch {SCRIPT_PATH(rhs_a29_MFD_switch)};
			class a29_MFD_start {SCRIPT_PATH(rhs_a29_MFD_start)};
			class a29_flir_loader {SCRIPT_PATH(rhs_a29_flir_loader)};
			class a29_flir_handler {SCRIPT_PATH(rhs_a29_flir_handler)};
		};
	};
};