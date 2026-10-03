// - - - Should be in backpacks

class rhsusf_assault_eagleaiii_coy_medic: rhsusf_assault_eagleaiii_coy
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (Medic)";
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 10;
		};
	};
};
class rhsusf_falconii_sarc: rhsusf_falconii
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "Eagle A-III Coyote (Medic)";
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 6;
		};
		class _xx_Chemlight_red
		{
			name = "Chemlight_red";
			count = 1;
		};
	};
};

// - - -


// Support classes

	class rhsusf_navy_marpat_wd_medic: rhsusf_usmc_marpat_wd_rifleman_m4
	{
		EdPrev(rhsusf_navy_marpat_wd_medic)
		scope = 2;
		AUTHOR_MACRO
		displayName= $STR_RHSUSF_INF_CORPSMAN;

		faction = "rhs_faction_usn";
		vehicleClass = "rhs_vehclass_infantry_wd";
		editorSubcategory = "rhs_EdSubcat_infantry_wd";

		backpack="rhsusf_assault_eagleaiii_coy_medic";

		linkedItems[] = {"rhsusf_mich_helmet_marpatwd","rhsusf_spc_corpsman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd","rhsusf_spc_corpsman", Standard_Equipment};

		cost = 290000;
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";


	};

	class rhsusf_navy_marpat_d_medic: rhsusf_usmc_marpat_d_rifleman_m4
	{
		EdPrev(rhsusf_navy_marpat_d_medic)

		displayName= $STR_RHSUSF_INF_CORPSMAN; //
		AUTHOR_MACRO
		faction = "rhs_faction_usn";
		vehicleClass = "rhs_vehclass_infantry_d";
		editorSubcategory = "rhs_EdSubcat_infantry_d";

		backpack="rhsusf_assault_eagleaiii_coy_medic";

		linkedItems[] = {"rhsusf_mich_helmet_marpatd","rhsusf_spc_corpsman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatd","rhsusf_spc_corpsman", Standard_Equipment};

		cost = 290000;
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

	};

	class rhsusf_navy_sarc_w: rhsusf_infantry_usmc_recon_base
	{
		EdPrev(rhsusf_navy_sarc_w)

		displayName= $STR_RHSUSF_INF_SARC; // Special Amphibious Reconnaissance Corpsmen ( Recon, EOD, SEAL, Force Recon & Marsoc )
		AUTHOR_MACRO
		faction = "rhs_faction_usn";
		vehicleClass = "rhs_vehclass_infantry_wd";
		editorSubcategory = "rhs_EdSubcat_infantry_wd";

		scope = 2;

		cost = 290000;
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		linkedItems[] = {"rhsusf_mich_bare_norotos_tan","rhsusf_spc_corpsman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_tan","rhsusf_spc_corpsman", Standard_Equipment};

		weapons[] =
		{
			"rhs_m4a1_grip_acog2_usmc_sup",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_m4a1_grip_acog2_usmc_sup",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_Mk318_Stanag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_mk3a2",
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};
		respawnMagazines[] =
		{
			mag_8(rhs_mag_30Rnd_556x45_Mk318_Stanag),
			mag_3(rhsusf_mag_15Rnd_9x19_FMJ),
			"rhs_mag_mk3a2",
			"rhs_mag_m18_red",
			"rhs_mag_an_m8hc"
		};

		backpack="rhsusf_falconii_sarc";

		class EventHandlers;
	};

	class rhsusf_navy_sarc_d: rhsusf_navy_sarc_w
	{
		EdPrev(rhsusf_navy_sarc_d)
		AUTHOR_MACRO
		vehicleClass = "rhs_vehclass_infantry_d";
		editorSubcategory = "rhs_EdSubcat_infantry_d";

		uniformClass = "rhs_uniform_FROG01_d";

		weapons[] =
		{
			"rhs_m4a1_grip_acog2_usmc_sup_tan",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"rhs_m4a1_grip_acog2_usmc_sup_tan",
			"rhsusf_weap_m9",
			"Binocular",
			"Throw",
			"Put"
		};
	};

	class rhsusf_navy_sarc_w_fast: rhsusf_navy_sarc_w
	{
		EdPrev(rhsusf_navy_sarc_w_fast)

		displayName= $STR_RHSUSF_INF_SARC_FAST;
		AUTHOR_MACRO

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_corpsman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_corpsman", Standard_Equipment};
	};

	class rhsusf_navy_sarc_d_fast: rhsusf_navy_sarc_d
	{
		EdPrev(rhsusf_navy_sarc_d_fast)

		displayName= $STR_RHSUSF_INF_SARC_FAST;
		AUTHOR_MACRO

		linkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_corpsman", Standard_Equipment};
		respawnLinkedItems[] = {"rhsusf_opscore_ut","rhsusf_spc_corpsman", Standard_Equipment};
	};

