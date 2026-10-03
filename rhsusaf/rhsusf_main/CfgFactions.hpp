class CfgFactionClasses
{
	class rhs_faction_usarmy
	{
		displayName = STR_FAC(USARMY);
		priority = -5;
		side = 1;
		icon = "\rhsusf\addons\rhsusf_main\data\armylogo.paa";
		flag = "\rhsusf\addons\rhsusf_main\data\flag_us_co.paa";
		backpack_tf_faction_radio_api = "tf_rt1523g_rhs";
	};

	class rhs_faction_usmc: rhs_faction_usarmy
	{
		displayName = STR_FAC(USMC);
		priority = -3;
		icon = "\rhsusf\addons\rhsusf_main\data\usmclogo.paa";
		backpack_tf_faction_radio_api = "tf_rt1523g_rhs";
	};

	class rhs_faction_usarmy_wd: rhs_faction_usarmy
	{
		displayName = STR_FAC(USARMY_WD);
		priority = -5;
		icon = "\rhsusf\addons\rhsusf_main\data\armylogo.paa";
	};

	class rhs_faction_usarmy_d: rhs_faction_usarmy
	{
		displayName = STR_FAC(USARMY_D);
		priority = -4;
		icon = "\rhsusf\addons\rhsusf_main\data\armylogo.paa";
	};

	class rhs_faction_usmc_wd: rhs_faction_usarmy
	{
		displayName = STR_FAC(USMC_WD);
		priority = -3;
		icon = "\rhsusf\addons\rhsusf_main\data\usmclogo.paa";
	};

	class rhs_faction_usmc_d: rhs_faction_usarmy
	{
		displayName = STR_FAC(USMC_D);
		priority = -2;
		icon = "\rhsusf\addons\rhsusf_main\data\usmclogo.paa";
	};
	class rhs_faction_usaf: rhs_faction_usarmy
	{
		displayName = STR_FAC(USAF);
		priority = -1;
		icon = "\rhsusf\addons\rhsusf_main\data\usaflogo.paa";
	};
	class rhs_faction_usn: rhs_faction_usarmy
	{
		displayName = STR_FAC(USN);
		priority = 1;
		icon = "\rhsusf\addons\rhsusf_main\data\navylogo.paa";
	};
	class rhs_faction_socom: rhs_faction_usarmy
	{
		displayName = STR_FAC(SOCOM);
		priority = 2;
		icon = "\rhsusf\addons\rhsusf_main\data\socomlogo.paa";
	};
};

