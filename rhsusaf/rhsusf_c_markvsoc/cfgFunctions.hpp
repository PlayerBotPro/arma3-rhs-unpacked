
class CfgFunctions
{
	class RHSUSF
	{
		tag = "RHSUSF";
		class Functions
		{
			class markvsoc_init
			{
				file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\init.sqf";
				description = "Mark V SOC init";
			};
			class markvsoc_deleteRoadway
			{
				file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\deleteRoadway.sqf";
				description = "Mark V SOC curator workaround";
			};
			class markvsoc_getIn
			{
				file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\getin.sqf";
				description = "Mark V SOC get on deck workaround";
			};
			class markvsoc_openMenu
			{
				file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_menuInit.sqf";
				description = "Mark V SOC curator workaround";
			};
			class markvsoc_setOption
			{
				file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_setOption.sqf";
				description = "Mark V SOC curator workaround";
			};
			// loading boats functions
			class markvsoc_attachBoats
			{
				file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_attachBoats.sqf";
				description = "Mark V SOC Loading menu";
			};
			class markvsoc_loadMenuInit
			{
				file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_loadMenuInit.sqf";
				description = "Mark V SOC Loading menu";
			};
			class markvsoc_loadBoat
			{
				file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_loadBoat.sqf";
				description = "Mark V SOC Loading menu";
			};
			class markvsoc_loadAction
			{
				file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_loadAction.sqf";
				description = "Mark V SOC Loading menu";
			};
		};
	};
};
