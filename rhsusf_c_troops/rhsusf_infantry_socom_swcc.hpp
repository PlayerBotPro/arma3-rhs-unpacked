// - - -


// Support classes

class rhsusf_socom_swcc_crewman: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_swcc_crewman)	
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_INF_CREW;

	faction = "rhs_faction_socom";
	vehicleClass = "rhs_vehclass_SWCC";
	editorSubcategory = "rhs_EdSubcat_SWCC";

	uniformClass = "rhs_uniform_g3_aor2";

	Items[] = {"FirstAidKit","rhsusf_ANPVS_15"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15"};

	linkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_headset","rhsusf_spc_patchless", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_headset","rhsusf_spc_patchless", Standard_Equipment};

	weapons[] = {"rhs_m4a1_eotech","rhsusf_weap_m9","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_eotech","rhsusf_weap_m9","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag_ranger),
		mag_5(rhsusf_mag_15Rnd_9x19_JHP),
		"Chemlight_red",
		"rhs_mag_m18_red",
		"rhs_mag_m18_green",
		"rhs_mag_m18_yellow"
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag_ranger),
		mag_5(rhsusf_mag_15Rnd_9x19_JHP),
		"Chemlight_red",
		"rhs_mag_m18_red",
		"rhs_mag_m18_green",
		"rhs_mag_m18_yellow"
	};
};

class rhsusf_socom_swcc_officer: rhsusf_socom_swcc_crewman
{
	EdPrev(rhsusf_socom_swcc_officer)	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_INF_OFFICER;

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_officer_s"};
			speechPlural[] = {"veh_infantry_officer_p"};
		};
	};

	textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
	nameSound = "veh_infantry_officer_s";

	cost = 600000;
	camouflage = 1.6;
	sensitivity = 3;
	icon = "iconManOfficer";

	linkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_spc_patchless_radio", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_cvc_green_ess","rhsusf_spc_patchless_radio", Standard_Equipment};

	weapons[] = {"rhsusf_weap_m9","Throw","Put"};
	respawnWeapons[] = {"rhsusf_weap_m9","Throw","Put"};

	magazines[] =
	{
		mag_5(rhsusf_mag_15Rnd_9x19_JHP),
		"Chemlight_red",
		"rhs_mag_m18_red",
		"rhs_mag_m18_green",
		"rhs_mag_m18_yellow"
	};
	respawnMagazines[] =
	{
		mag_5(rhsusf_mag_15Rnd_9x19_JHP),
		"Chemlight_red",
		"rhs_mag_m18_red",
		"rhs_mag_m18_green",
		"rhs_mag_m18_yellow"
	};
};