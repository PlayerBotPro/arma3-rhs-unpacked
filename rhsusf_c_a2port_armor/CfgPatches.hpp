
class CfgPatches {
	class RHS_US_A2Port_Armor {
		requiredAddons[] =
		{
			rhsusf_main,
			rhsusf_c_troops,
			rhsusf_c_heavyweapons
		};
		units[] =
		{
			RHS_M2A2,
			RHS_M2A2_BUSKI,
			RHS_M2A3,
			RHS_M2A3_BUSKI,
			RHS_M2A3_BUSKIII,
			RHS_M6,

			RHS_M2A2_wd,
			RHS_M2A2_BUSKI_wd,
			RHS_M2A3_wd,
			RHS_M2A3_BUSKI_wd,
			RHS_M2A3_BUSKIII_wd,
			RHS_M6_wd
		};
		requiredVersion= 1.83;
		weapons[] = {};
		name = "M2 Bradley IFV";
		AUTHOR_MACRO
		url = "http://www.rhsmods.org/";
	};
};
