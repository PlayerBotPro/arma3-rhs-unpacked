class cfgWaypoints
{
	//--- Waypoints category class
	class RHS
	{
		//--- Waypoints category description (visible in menu)
		displayName = "RHS Special Waypoints";

		//--- Waypoint class
		class wpParadropInfantry
		{
			//--- Waypoint description (visible in menu)
			displayName = "Infantry paradrop";
			tooltip = "Ejects infantry from vehicle. If parachute backpack is not present new artifical parachute is created upon ejection";

			//--- Path to executed scripts
			file = "\rhsafrf\addons\rhs_c_air\scripts\WP_ParaInf.sqf";

			icon = "\a3\3DEN\Data\CfgWaypoints\Unload_ca.paa";
			class Attributes
			{
				// Attributes are evaluated in reversed order
				class ParaDropDelay
				{
					property		= "ParadropDelay";
					displayName		= "Delay between paradrop";
					tooltip			= "Defines delay between ejection of units. By default ejection delay is calculated based on vehicle speed. Leave it at -1 for default setting.";
					control			= "Edit";
					typeName 		= "NUMBER";
					defaultValue	= "-1";
					expression		= "_this setWaypointScript (waypointScript _this + format [' + [%1]',_value]);";
				};
				class ParachuteType
				{
					property		= "ParachuteType";
					displayName		= "Parachute type";
					tooltip			= "Defines what kind of parachute will units use after ejection. By default Russian D-6 parachute is used.";
					control			= "Edit";
					defaultValue	= "rhs_d6_Parachute";
					typeName 		= "STRING";
					expression		= "_this setWaypointScript (waypointScript _this + format [' [%1]',_value]);";
				};
			};
		};
		class wpTu95Fire: wpParadropInfantry
		{
			displayName = "Tu-95 - Fire";
			tooltip = "Tu-95 will fire missile at waypoint position";
			file = "\rhsafrf\addons\rhs_c_air\scripts\WP_Tu95Fire.sqf";
			icon = "\a3\3DEN\Data\CfgWaypoints\Destroy_ca.paa";
		};
	};
};