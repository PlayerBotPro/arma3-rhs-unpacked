#define SCRIPT_PATH(name) file = \rhsafrf\addons\rhs_c_radars\scripts\rhs_##name##.sqf;
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class radar_engineSound
			{
				SCRIPT_PATH(radar_engineSound)
			};
			class radar_enginesSoundSource
			{
				SCRIPT_PATH(radar_engineSoundSource)
			};
		};
	};
};