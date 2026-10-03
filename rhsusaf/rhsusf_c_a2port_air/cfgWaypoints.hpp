class cfgWaypoints
{
	//--- Waypoints category class
	class RHS
	{
		//--- Waypoints category description (visible in menu)
		displayName = "RHS Special Waypoints";

		//--- Waypoint class
		class wpAirParadrop
		{
			//--- Waypoint description (visible in menu)
			displayName = "Paradrop air cargo";

			//--- Path to executed scripts
			file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\WP_Para.sqf";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\TransportUnload_ca.paa";
		};
	};
};