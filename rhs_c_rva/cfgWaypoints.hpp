class cfgWaypoints
{
	//--- Waypoints category class
	class RHS
	{
		//--- Waypoints category description (visible in menu)
		displayName = "RHS Special Waypoints";

		//--- Waypoint class
		class wpTochkaDeploy
		{
			//--- Waypoint description (visible in menu)
			displayName = "Tochka-U - Deploy";
			tooltip = "Deploys Tochka-U to ready to fire state";

			//--- Path to executed scripts
			file = "\rhsafrf\addons\rhs_c_rva\scripts\WP_TochkaDeploy.sqf";
			icon = "\a3\3DEN\Data\CfgWaypoints\TransportUnload_ca.paa";
		};
		class wpTochkaFire: wpTochkaDeploy
		{
			displayName = "Tochka-U - Fire";
			tooltip = "Tochka-U will fire missile at waypoint position";
			file = "\rhsafrf\addons\rhs_c_rva\scripts\WP_TochkaFire.sqf";
			icon = "\a3\3DEN\Data\CfgWaypoints\Destroy_ca.paa";
		};
	};
};