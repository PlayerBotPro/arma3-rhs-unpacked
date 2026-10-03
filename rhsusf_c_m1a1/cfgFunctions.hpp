
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class M1_comm
			{
				file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_m1_comm.sqf";
				description = "Commander M2 Script for M1 Abrams series";
			};
			class M1_init
			{
				file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_m1_init.sqf";
				description = "M1 Abrams Init";
			};
			class M1_damage
			{
				file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_m1_damage.sqf";
				description = "M1 Abrams Damage workaround";
			};
			class M1_defineLoadout
			{
				file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\defineLoadout.sqf";
				description = "M1 Abrams Init";
			};
			class engineStartupDelay
			{
				file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_engineStart.sqf";
				description = "Engine startup delay";
			};
		};
	};
};


class CfgSounds
{
	class RHSUSF_Error
	{
		name="Tank beep";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_c_m1a1\scripts\alarm_loop1.wss",
			db-9,
			1
		};
		titles[]={};
	};
};