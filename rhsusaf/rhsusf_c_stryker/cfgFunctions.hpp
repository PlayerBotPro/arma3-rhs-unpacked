#define ADDON_PATH rhsusf\addons\rhsusf_c_stryker\scripts
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class Stryker
		{
			class stryker_turnActions 				{file = ADDON_PATH\rhs_stryker_turnActions.sqf;};
			class stryker_seatSwitched 				{file = ADDON_PATH\rhs_stryker_seatSwitched.sqf;};

			class stryker_m1126_init 				{file = ADDON_PATH\rhs_stryker_m1126_init.sqf;};

			class stryker_m1127_init 				{file = ADDON_PATH\rhs_stryker_m1127_init.sqf;};
			class stryker_m1127_turret 				{file = ADDON_PATH\rhs_stryker_m1127_turret.sqf;};
			class stryker_m1127_turret_turnout 		{file = ADDON_PATH\rhs_stryker_m1127_turret_turnout.sqf;};
			class stryker_m1127_turret_getout_eh	{file = ADDON_PATH\rhs_stryker_m1127_turret_getout_eh.sqf;};
			class stryker_m1127_turret_getin_eh		{file = ADDON_PATH\rhs_stryker_m1127_turret_getin_eh.sqf;};
			class stryker_m1127_fireSmoke 			{file = ADDON_PATH\rhs_stryker_m1127_fireSmoke.sqf;};
			class stryker_m1127_GLUA_UI 			{file = ADDON_PATH\rhs_stryker_m1127_GLUA_UI.sqf;};

			class stryker_m1132_LMS_VG				{file = ADDON_PATH\rhs_stryker_m1132_LMS_VG.sqf;};
			class stryker_m1132_LMS_UI				{file = ADDON_PATH\rhs_stryker_m1132_LMS_UI.sqf;};

			class stryker_m1134_init 				{file = ADDON_PATH\rhs_stryker_m1134_init.sqf;};
			class stryker_m1134_mast 				{file = ADDON_PATH\rhs_stryker_m1134_mast.sqf;};
			class stryker_m1134_turret 				{file = ADDON_PATH\rhs_stryker_m1134_turret.sqf;};
			class stryker_m1134_turret_getout_eh	{file = ADDON_PATH\rhs_stryker_m1134_turret_getout_eh.sqf;};
		};
	};
};