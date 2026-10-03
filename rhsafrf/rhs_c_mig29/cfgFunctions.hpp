class CfgFunctions
{
	class RHS
	{
		tag = "RHS";

		class functions
		{
			class mig29_map
			{
				file = "rhsafrf\addons\rhs_c_mig29\scripts\rhs_mig29_map.sqf";
				description = "MiG-29S GPS unit handling";
			};
			class mig29sm_cockpit
			{
				file = "rhsafrf\addons\rhs_c_mig29\scripts\rhs_mig29sm_cockpit.sqf";
				description = "MiG-29SM Cockpit actions handling";
			};
		};
		class WP_Managment
		{
			class wp_manager
			{
				file = "rhsafrf\addons\rhs_c_mig29\scripts\rhs_wp_manager.sqf";
				description = "Waypoint management - mapclick";
			};
			class wp_find
			{
				file = "rhsafrf\addons\rhs_c_mig29\scripts\rhs_wp_find.sqf";
				description = "Waypoint management - find nearby waypoints";
			};
		};
	};
};