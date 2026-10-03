
class CfgFunctions
{
	class RHSUSF
	{
		tag = "RHSUSF";
		class Functions
		{
			class firedFCS
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_firedFCS.sqf";
				description = "LRF marking & ammo changing";
			};
			class eden_defineLoadout
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_defineLoadout.sqf";
				description = "3den";
			};
		};
		class WeaponsEH
		{
			class effectFiredSmokeLauncher
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\effects\rhs_effectFiredSmokeLauncher.sqf";
				description = "Effects for smoke launcher";
			};
			class effectFiredDuke
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\effects\rhs_effectFiredDuke.sqf";
				description = "Duke turn on/off handling";
			};
			class effectFiredMLRS
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\effects\rhs_effectFiredMLRS.sqf";
			};
		};
	};
	class RHS
	{
		tag = "RHS";
		class Functions
		{
			class firedFCS
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_firedFCS.sqf";
				description = "LRF marking & ammo changing";
			};
			class firedPlaneAI {file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_firedPlaneAI.sqf";};
			class saclosGuide
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_saclosGuide.sqf";
				description = "SACLOS guidance";
			};
			class LOALGuide
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_LOALGuide.sqf";
				description = "LOAL guidance";
			};
			class tankLoader
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_tankLoader.sqf";
			};
			class burstLimiterShots
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_burstLimiterShots.sqf";
				description = "Burst limiter for air cannons";
			};
			class laneMarkerSystem { file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_laneMarkerSystem.sqf"; };
		};
		class WeaponsEH
		{
			class effectFiredSmokeGenerator
			{
				file = "\rhsusf\addons\rhsusf_c_heavyweapons\effects\rhs_effectFiredSmokeGenerator.sqf";
				description = "Effects for smoke generator";
			};
		};
	};
};
