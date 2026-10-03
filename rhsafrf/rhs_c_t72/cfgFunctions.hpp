
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class t72_init
			{
				file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_t72_init.sqf";
				description = "Initialization script for T-72";
			};
			class t72_autoloader
			{
				file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_autoloader.sqf";
				description = "Autoloader gun anim & stub ejection for T-72";
			};
			class t72_hatch
			{
				file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_hatch.sqf";
				description = "T72 commander hatch handler";
			};
			class turretBlow
			{
				file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_turretBlow.sqf";
				description = "T Tanks turret blowoff";
			};
			class hatchAbandon
			{
				file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_hatchAbandon.sqf";
			};
			class TTanks_DefineLoadout
			{
				file = "\rhsafrf\addons\rhs_c_t72\scripts\defineLoadout.sqf";
				description = "T Tanks loadout handler";
			};
		};
	};
};


class CfgSounds
{
	class RHS_Error
	{
		name="Tank beep";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_t72\scripts\alarm_loop1.wss",
			db-9,
			1
		};
		titles[]={};
	};
};