class CfgFactionClasses
{
	class rhssaf_faction_army
	{
		displayName = $STR_RHSSAF_FAC_ARMY;
		priority = 80;
		side = 2;
		genericNames = "SerbianMen";
		identityTypes[] = {"LanguageGRE_F","Head_Euro","NoGlasses"};
		author = $STR_RHSSAF_AUTHOR_FULL;
		icon = "\rhssaf\addons\rhssaf_main\data\icons\factions\rhssaf_faction_army_co.paa";
		flag = "\rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
	
	class rhssaf_faction_army_opfor : rhssaf_faction_army
	{
		side = 0;
		priority = -9;
	};

	class rhssaf_faction_airforce
	{
		displayName = $STR_RHSSAF_FAC_AIRFORCE;
		priority = 81;
		side = 2;
		genericNames = "SerbianMen";
		identityTypes[] = {"LanguageGRE_F","Head_Euro","G_NATO_pilot"};
		author = $STR_RHSSAF_AUTHOR_FULL;
		icon = "\rhssaf\addons\rhssaf_main\data\icons\factions\rhssaf_faction_airforce_co.paa";
		flag = "\rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
	
	class rhssaf_faction_airforce_opfor : rhssaf_faction_airforce
	{
		side = 0;
		priority = -9;
	};
	
	class rhssaf_faction_un
	{
		displayName = $STR_RHSSAF_FAC_UN;
		priority = 83;
		side = 2;
		genericNames = "SerbianMen";
		identityTypes[] = {"LanguageGRE_F","Head_Euro","G_NATO_casual"};
		author = $STR_RHSSAF_AUTHOR_FULL;
		icon = "\rhssaf\addons\rhssaf_main\data\icons\factions\rhssaf_faction_un_co.paa";
		flag = "\rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
};
