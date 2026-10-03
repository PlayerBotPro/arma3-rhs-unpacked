
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";

		class functions
		{
			class addParachutes
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_addParachutes.sqf";
			};
			class air_init
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_air_init.sqf";
				description = "Air vehicles settings init";
			};
			class ka52_ejection
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_ka52_ejection.sqf";
				description = "KA-52 ejection system";
			};
			class rwr_mi24
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_rwr_mi24.sqf";
				description = "RWR system for Mi-24";
			};
			class rwr_mi28
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_rwr_mi28.sqf";
				description = "RWR system for Mi-28";
			};
			class rwr_air
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_rwr_air.sqf";
				description = "RWR system for generic planes";
			};
			class mi24_camo
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi24_camo.sqf";
				description = "Random Camo script for Mi-24";
			};
			class mi24_doors
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi24_doors.sqf";
				description = "Mi-24 cargo door handler";
			};
			class mi24_map
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi24_map.sqf";
				description = "Mi-24 moving map";
			};
			class mi8_doors
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi8_doors.sqf";
				description = "Mi-8AMT cargo door handler";
			};
			class rus_doorHandler
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_doorHandler.sqf";
				description = "Delayed door handler";
			};
			class mi8_checkDoor
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi8_checkDoor.sqf";
				description = "Door script for Mi-8";
			};
			class atgm_guide
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_atgm_guide.sqf";
				description = "ATGM guidance for Ka-52";
			};
			class toggleIntLight
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_toggleIntLight.sqf";
				description = "Toggle interior light";
			};
			class heli_wheelBrakes
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_heli_wheelBrakes.sqf";
			};
			class Su25_AI_fire
			{
				file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_su25_AI_laserTarget.sqf";
			};
		};
	};
};


class CfgSounds
{
        class rhs_Missile3OClockH {
		name = "Missile3OClockH";
		sound[] =  {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile3OClockH.ogg", db+5, 1.0};
		titles[] = {};
	};
	class rhs_Missile6OClockH {
		name = "Missile6OClockH";
		sound[] =  {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile6OClockH.ogg", db+5, 1.0};
		titles[] = {};
	};
	class rhs_Missile9OClockH {
		name = "Missile9OClockH";
		sound[] =  {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile9OClockH.ogg", db+5, 1.0};
		titles[] = {};
	};
	class rhs_Missile12OClockH {
		name = "Missile12OClockH";
		sound[] =  {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile12OClockH.ogg", db+5, 1.0};
		titles[] = {};
	};
        class rhs_Missile3OClockL {
		name = "Missile3OClockL";
		sound[] =  {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile3OClockL.ogg", db+5, 1.0};
		titles[] = {};
	};
	class rhs_Missile6OClockL {
		name = "Missile6OClockL";
		sound[] =  {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile6OClockL.ogg", db+5, 1.0};
		titles[] = {};
	};
	class rhs_Missile9OClockL {
		name = "Missile9OClockL";
		sound[] =  {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile9OClockL.ogg", db+5, 1.0};
		titles[] = {};
	};
	class rhs_Missile12OClockL {
		name = "Missile12OClockL";
		sound[] =  {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile12OClockL.ogg", db+5, 1.0};
		titles[] = {};
	};
};