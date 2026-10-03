/**
 * @class CfgFactionClasses
 * @brief Injection point of factions.
 */

class CfgFactionClasses
{
	class rhsgref_faction_cdf_ground
	{
		displayName = "$STR_RHSGREF_FAC_CDF_GROUND_FORCES";
		priority = -9;
		side = 2;
		icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_groundforces_co.paa";
		flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
	class rhsgref_faction_cdf_ground_b: rhsgref_faction_cdf_ground
	{
		side = 1;
		priority = -19;
	};

	class rhsgref_faction_cdf_air
	{
		displayName = "$STR_RHSGREF_FAC_CDF_AIR_FORCES";
		priority = -9;
		side = 2;
		icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_airforces_co.paa";
		flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
	class rhsgref_faction_cdf_air_b: rhsgref_faction_cdf_air
	{
		side = 1;
		priority = -19;
	};

	class rhsgref_faction_cdf_ng
	{
		displayName = "$STR_RHSGREF_FAC_CDF_NATIONAL_GUARD";
		priority = -9;
		side = 2;
		icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_paramilitary_co.paa";
		flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
	class rhsgref_faction_cdf_ng_b: rhsgref_faction_cdf_ng
	{
		side = 1;
		priority = -19;
	};

	class rhsgref_faction_un
	{
		displayName = "$STR_RHSGREF_FAC_CDF_UNITED_NATIONS";
		priority = -9;
		side = 2;
		icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_paramilitary_co.paa";
		flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};

	class rhsgref_faction_nationalist
	{
		displayName = "$STR_RHSGREF_FAC_NAPA";
		priority = -9;
		side = 2;
		icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_napa_co.paa";
		flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_NAPA_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};

	class rhsgref_faction_chdkz
	{
		displayName = "$STR_RHSGREF_FAC_CHDKZ";
		priority = -9;
		side = 0;
		icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_napa_co.paa"; //TODO
		flag = "\rhsgref\addons\rhsgref_main\data\flag_chdkz_co.paa"; //TODO
		backpack_tf_faction_radio_api = "tf_bussole";
	};
	class rhsgref_faction_chdkz_g: rhsgref_faction_chdkz
	{
		side = 2;
	};
	
	/*
	The Horizon Islands Defence Force (HIDF) are the armed forces of the Horizon Islands,
	the island nation of which Tanoa is a part of. 
	
	The faction is inspired by various US equiped tropical militaries through history such 
	as the ARVN, the Philippines, and Thailand, among many others.
	*/
	class rhsgref_faction_hidf
	{
		displayName = "Horizon Islands Defence Force";
		priority = -9;
		side = 1;
		icon = "\a3\data_f_exp\factionicons\icon_gen_ca.paa";
		flag = "\a3\data_f_exp\flags\flag_tanoa_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
	
	/*
	The TLA are a communist guerilla group, fighting sporadically with the HIDF to liberate
	the majority French speaking island of Tanoa from the Horizon Islands.
	
	Inspiration for this faction's eqipment comes from various communist guerilla groups such 
	as FARC, as well as small, island based armies like that of the People’s Revolutionary 
	Army (PRA) of Grenada.
	*/
	class rhsgref_faction_tla
	{
		displayName = "Tanoan Liberation Army";
		priority = -9;
		side = 0;
		icon = ""; //TODO
		flag = ""; //TODO
		backpack_tf_faction_radio_api = "tf_bussole";
	};
	class rhsgref_faction_tla_g: rhsgref_faction_tla
	{
		side = 2;
	};
};
