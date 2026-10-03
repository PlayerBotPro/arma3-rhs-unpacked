// Air Force Pilots

class rhsusf_airforce_jetpilot: rhsusf_usmc_marpat_wd_rifleman_m4
{
	EdPrev(rhsusf_airforce_jetpilot)	scope = 2;
	AUTHOR_MACRO
	displayName= "Jet Pilot";

	faction = "rhs_faction_usaf";
	vehicleClass = "rhs_vehclass_infantry";
	uniformClass = "U_B_HeliPilotCoveralls";
	
	DISABLE_HEADGEAR_MACRO

	linkedItems[] = {"RHS_jetpilot_usaf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"RHS_jetpilot_usaf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

	weapons[] = {"rhsusf_weap_m9","Throw","Put"};
	respawnWeapons[] = {"rhsusf_weap_m9","Throw","Put"};

	magazines[] =
	{
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhs_mag_m18_purple",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhs_mag_m18_purple",
		"rhs_mag_an_m8hc"
	};

	cost = 165000;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_pilot_s"};
			speechPlural[] = {"veh_infantry_pilot_p"};
		};
	};

	textSingular = "pilot";
	textPlural = "pilots";
	nameSound = "veh_infantry_pilot_s";

	class Wounds
	{
		tex[] = {};
		mat[] = {"A3\characters_f\common\data\pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat"};
	};

};

class rhsusf_airforce_pilot: rhsusf_airforce_jetpilot
{
	EdPrev(rhsusf_airforce_pilot)	scope = 2;
	AUTHOR_MACRO
	backpack="";
	displayName= "Pilot";
	uniformClass = "U_B_HeliPilotCoveralls";
	
	DISABLE_HEADGEAR_MACRO

	linkedItems[] = {"H_Cap_headphones","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Cap_headphones","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class rhsusf_airforce_security_force_rifleman: rhsusf_infantry_army_base
{
	//EdPrev(rhsusf_airforce_security_force_rifleman) //TODO
	AUTHOR_MACRO
	scope = 2;
	
	faction = "rhs_faction_usaf";
	editorSubcategory = "rhs_EdSubcat_infantry";
	vehicleClass = "rhs_vehclass_infantry";
	uniformClass = "rhs_uniform_abu";
	
	displayName= "$STR_RHSUSF_INF_RIFLEMAN";
	
	DISABLE_HEADGEAR_MACRO

	linkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_ach_helmet_ucp","rhsusf_iotv_ucp_rifleman",Standard_Equipment};

	weapons[] = {"rhs_m4_compm4","Throw","Put"};
	respawnWeapons[] = {"rhs_m4_compm4","Throw","Put"};
	magazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_2(rhs_mag_m67)
	};
};
