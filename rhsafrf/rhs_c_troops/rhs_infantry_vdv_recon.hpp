/* VDV Recon Infantry Units */

//- Armored Units
class rhs_vdv_recon_rifleman : rhs_vdv_rifleman
{
	displayName= "$STR_RHS_INF_RIFLEMAN";
	scope = 2;
	EdPrev(rhs_vdv_recon_rifleman)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	//DISABLE_HEADGEAR_MACRO
	HEADGEAR_MACRO(VDV_6B47_HELMET_POOL)

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_SF_s"};
			speechPlural[] = {"veh_infantry_SF_p"};
		};
	};
	identityTypes[]=
	{
		"LanguageRUS_F",
		"Head_Asian",
		"Head_Russian",
		"Head_Russian_camo_arid",
		"Head_Russian_camo_lush",
		"Head_Russian_camo_semiarid",
		"rhs_scarf"
	};

	textSingular = "$STR_A3_nameSound_veh_infantry_SF_s"; // COPIED FROM A3 SF VALUES
	textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
	nameSound = "veh_infantry_SF_s";

	vehicleClass = "rhs_vehclass_infantry_recon";
	editorSubcategory = "rhs_EdSubcat_infantry_recon";
	uniformClass = "rhs_uniform_6sh122_gloves_v1";

	camouflage = 0.6;	// how dificult to spot - bigger - better spotable
	sensitivity = 3.5;	// sensor sensitivity
	detectSkill = 30;

	hiddenSelections[] = {"camo","camo1","camo2"};
	class Wounds
	{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest_w2.rvmat",

				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant_w1.rvmat",
				"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant_w2.rvmat",

				A3_Injury
			};
	};

	weapons[] =
	{
		"rhs_weap_ak74mr_1p87",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_ak74mr_1p87",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	Items[] = {"FirstAidKit","rhs_1PN138"};
	RespawnItems[] = {"FirstAidKit","rhs_1PN138"};

	linkedItems[] =
	{
		"rhs_6b45_rifleman",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_rifleman",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	magazines[] =
	{
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
};

class rhs_vdv_recon_rifleman_l : rhs_vdv_recon_rifleman
{
	displayName= "$STR_RHS_INF_RIFLEMAN_L";
	EdPrev(rhs_vdv_recon_rifleman_l)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	uniformClass = "rhs_uniform_6sh122_gloves_v1";

	weapons[] =
	{
		"rhs_weap_ak74mr_1p87",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_ak74mr_1p87",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};

	DISABLE_HEADGEAR_MACRO

	linkedItems[] =
	{
		"rhs_6sh117_rifleman",
		"rhs_beanie_green",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6sh117_rifleman",
		"rhs_beanie_green",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
};

class rhs_vdv_recon_rifleman_akms : rhs_vdv_recon_rifleman
{
	displayName= "$STR_RHS_INF_RIFLEMAN_AKMS";
	EdPrev(rhs_vdv_recon_rifleman_akms)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	uniformClass = "rhs_uniform_6sh122_gloves_v1";

	linkedItems[] =
	{
		"rhs_6b45_rifleman",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_rifleman",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	weapons[] =
	{
		"rhs_weap_45th_akms",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_45th_akms",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
};

class rhs_vdv_recon_rifleman_ak103 : rhs_vdv_recon_rifleman_akms
{
	displayName= "$STR_RHS_INF_RIFLEMAN_AK103";
	EdPrev(rhs_vdv_recon_rifleman_ak103)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	linkedItems[] =
	{
		"rhs_6b45_rifleman",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_rifleman",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	weapons[] =
	{
		"rhs_weap_45th_ak103_zenit",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_45th_ak103_zenit",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_89",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
};

class rhs_vdv_recon_rifleman_lat : rhs_vdv_recon_rifleman
{
	displayName= "$STR_RHS_INF_LAT";
	EdPrev(rhs_vdv_recon_rifleman_lat)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	weapons[] =
	{
		"rhs_weap_ak74mr_1p87",
		"rhs_weap_rpg26",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_ak74mr_1p87",
		"rhs_weap_rpg26",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_rpg26_mag",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_rpg26_mag",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
};

class rhs_vdv_recon_grenadier : rhs_vdv_recon_rifleman
{
	displayName= "$STR_RHS_INF_GRENADIER";
	EdPrev(rhs_vdv_recon_grenadier)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";


	linkedItems[] =
	{
		"rhs_6b45_grn",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_grn",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	weapons[] =
	{
		"rhs_weap_ak74mr_gp25_1p87",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"rhs_weap_ak74mr_gp25_1p87",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VG40TB", // thermobaric
		"rhs_VG40TB",
		"rhs_VG40SZ", // flashbang
		"rhs_VG40OP_red", // flare
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VG40TB", // thermobaric
		"rhs_VG40TB",
		"rhs_VG40SZ", // flashbang
		"rhs_VG40OP_red", // flare
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
};

class rhs_vdv_recon_rifleman_asval : rhs_vdv_recon_rifleman
{
	displayName= "$STR_RHS_INF_RIFLEMAN_ASVAL";
	EdPrev(rhs_vdv_recon_rifleman_asval)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	weapons[] =
	{
		"rhs_weap_45th_asval",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_45th_asval",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
};

// Support roles
class rhs_vdv_recon_arifleman : rhs_vdv_recon_rifleman
{
	displayName= "$STR_RHS_INF_ARIFLEMAN_2";
	EdPrev(rhs_vdv_recon_arifleman)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	uniformClass = "rhs_uniform_6sh122_gloves_v1";

	linkedItems[] =
	{
		"rhs_6b45_mg",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_mg",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	weapons[] =
	{
		"rhs_weap_pkp_1p78",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"rhs_weap_pkp_1p78",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_100Rnd_762x54mmR",
		"rhs_100Rnd_762x54mmR",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_100Rnd_762x54mmR",
		"rhs_100Rnd_762x54mmR",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};

	backpack="rhs_rk_sht_30_emr_mg";
};

class rhs_vdv_recon_machinegunner_assistant : rhs_vdv_recon_rifleman
	{
		EdPrev(rhs_vdv_recon_machinegunner_assistant)
		displayName= "$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";

		cost = 110000;
		camouflage = 1.5;

		backpack="rhs_rk_sht_30_emr_mg";
	};

	class rhs_vdv_recon_arifleman_rpk : rhs_vdv_recon_rifleman
	{
		EdPrev(rhs_vdv_recon_arifleman_rpk)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_ARIFLEMAN";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";

		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";

		weapons[] = {"rhs_weap_rpk74m_uuk",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_rpk74m_uuk",DefaultManWeapons};

		magazines[] =
		{
			mag_8(rhs_45Rnd_545x39_7N22_AK),
			mag_2(rhs_mag_rgn)
		};
		respawnMagazines[] =
		{
			mag_8(rhs_45Rnd_545x39_7N22_AK),
			mag_2(rhs_mag_rgn)
		};

		secondaryAmmoCoef = 0.5;
	};

//- Leadership

class rhs_vdv_recon_efreitor : rhs_vdv_recon_rifleman_lat
	{
		EdPrev(rhs_vdv_recon_efreitor)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_EFREITOR";

		cost = 350000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		linkedItems[] =
		{
			"rhs_6b45_off",
			"rhs_6b47_emr_1",
			"rhs_facewear_6m2_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"rhs_radio_R187P1"
		};
		respawnLinkedItems[] =
		{
			"rhs_6b45_off",
			"rhs_6b47_emr_1",
			"rhs_facewear_6m2_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"rhs_radio_R187P1"
		};

		weapons[] =
		{
			"rhs_weap_45th_ak103_zenit_sup",
			"rhs_weap_rpg26",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};

		respawnWeapons[] =
		{
			"rhs_weap_45th_ak103_zenit_sup",
			"rhs_weap_rpg26",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};

		magazines[] =
	{
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_rpg26_mag",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_rpg26_mag",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"

	};
};

class rhs_vdv_recon_sergeant : rhs_vdv_recon_rifleman_lat
{
	displayName= "$STR_RHS_INF_SERGEANT";
	EdPrev(rhs_vdv_recon_sergeant)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		"rhs_tr8_periscope_pip",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		"rhs_tr8_periscope_pip",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	weapons[] =
	{
		"rhs_weap_ak74mr_rakursPM",
		"rhs_weap_rpg26",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_ak74mr_rakursPM",
		"rhs_weap_rpg26",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_rpg26_mag",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_rpg26_mag",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
};

class rhs_vdv_recon_officer_armored : rhs_vdv_recon_rifleman
	{
		EdPrev(rhs_vdv_recon_officer_armored)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_OFFICER_ARMORED";

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

		linkedItems[] = {"rhs_Booniehat_digi","rhs_6b45_holster","rhs_facewear_6m2_1",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_Booniehat_digi","rhs_6b45_holster","rhs_facewear_6m2_1",Standard_Equipment};

		weapons[] =
		{
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};

		respawnWeapons[] =
		{
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};

		magazines[] =
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		respawnMagazines[] =
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};

	};

	class rhs_vdv_recon_officer : rhs_vdv_recon_officer_armored
	{
		EdPrev(rhs_vdv_recon_officer)
		AUTHOR_MACRO
		displayName= "$STR_RHS_INF_OFFICER";
		uniformClass = "rhs_uniform_6sh122_v1";

		DISABLE_HEADGEAR_MACRO

		linkedItems[] = {"rhs_Booniehat_digi","rhs_vest_pistol_holster",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_Booniehat_digi","rhs_vest_pistol_holster",Standard_Equipment};

	};

// Specialist

class rhs_vdv_recon_marksman : rhs_vdv_recon_rifleman
{
	displayName= "$STR_RHS_INF_MARKSMAN";
	EdPrev(rhs_vdv_recon_marksman)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";

		cost = 150000;
		sensitivity = 3.3;


	weapons[] =
	{
		"rhs_weap_svds_pso1",
		"rhs_weap_pya",
		"rhs_pdu4",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_svds_pso1",
		"rhs_weap_pya",
		"rhs_pdu4",
		"Throw",
		"Put"
	};

	linkedItems[] =
	{
		"rhs_6sh117_rifleman",
		"rhs_balaclava",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6sh117_rifleman",
		"rhs_balaclava",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	magazines[] =
	{
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
};

class rhs_vdv_recon_marksman_asval : rhs_vdv_recon_marksman
{
	displayName= "$STR_RHS_INF_MARKSMAN_ASVAL";
	EdPrev(rhs_vdv_recon_marksman_asval)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	weapons[] =
	{
		"rhs_asval_pso1",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_asval_pso1",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
};

class rhs_vdv_recon_marksman_vss : rhs_vdv_recon_marksman_asval
{
	displayName= "$STR_RHS_INF_MARKSMAN_VSS";
	EdPrev(rhs_vdv_recon_marksman_vss)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	weapons[] =
	{
		"rhs_weap_45th_vss",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_45th_vss",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};
};

class rhs_vdv_recon_medic : rhs_vdv_recon_rifleman
{
		displayName= "$STR_RHS_INF_MEDIC";
		EdPrev(rhs_vdv_recon_medic)
		AUTHOR_MACRO
		dlc = "RHS_AFRF";


		attendant =1;
		icon="iconManMedic";

		picture="pictureHeal";

		textSingular = "medic";
		textPlural = "medics";
		nameSound = "veh_infantry_medic_s";
		
		uniformClass = "rhs_uniform_6sh122_v1";

		weapons[] =
		{
			"rhs_weap_ak74mr_1p87",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};

		respawnWeapons[] =
		{
			"rhs_weap_ak74mr_1p87",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};

		linkedItems[] = {"rhs_6b47_emr_1","rhs_6b23_digi_medic",Standard_Equipment};
		respawnLinkedItems[] = {"rhs_6b47_emr_1","rhs_6b23_digi_medic",Standard_Equipment};

		backpack="rhs_rk_sht_30_emr_medic";
};

//- VDV Scouts

class rhs_vdv_recon_rifleman_scout : rhs_vdv_recon_rifleman
{
	displayName= "$STR_RHSUSF_INF_SCOUT_AK74";
	EdPrev(rhs_vdv_recon_rifleman_scout)
	identityTypes[]=
    {
        "LanguageRUS_F",
       /* "Head_Russian",
        "Head_Asian",*/
        "Head_Russian_camo_arid",
        "Head_Russian_camo_lush",
        "Head_Russian_camo_semiarid",
        "rhs_scarf"
    };

	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	uniformClass = "rhs_uniform_6sh122_gloves_v1";

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	weapons[] =
	{
		"rhs_weap_ak74mr_1p87_sup",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_ak74mr_1p87_sup",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};

	backpack="rhs_rk_sht_30_emr_ammo";
};

class rhs_vdv_recon_rifleman_scout_akm : rhs_vdv_recon_rifleman_akms
{
	displayName= "$STR_RHSUSF_INF_SCOUT";
	EdPrev(rhs_vdv_recon_rifleman_scout_akm)
	identityTypes[]=
    {
        "LanguageRUS_F",
       /* "Head_Russian",
        "Head_Asian",*/
        "Head_Russian_camo_arid",
        "Head_Russian_camo_lush",
        "Head_Russian_camo_semiarid",
        "rhs_scarf"
    };

	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	uniformClass = "rhs_uniform_6sh122_gloves_v1";

	weapons[] =
	{
		"rhs_weap_45th_akm",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_45th_akm",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	backpack="rhs_rk_sht_30_emr_ammo_recon";
};

class rhs_vdv_recon_grenadier_scout : rhs_vdv_recon_rifleman_scout_akm
{
	displayName= "$STR_RHSUSF_INF_SCOUT_GR";
	EdPrev(rhs_vdv_recon_grenadier_scout)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	uniformClass = "rhs_uniform_6sh122_gloves_v1";

	linkedItems[] =
	{
		"rhs_6b45_grn",
		"rhs_6b47_emr_1",
		"G_Bandanna_khk",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_grn",
		"rhs_6b47_emr_1",
		"G_Bandanna_khk",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	weapons[] =
	{
		"rhs_weap_45th_akm_gp25",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_45th_akm_gp25",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm_tracer",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VG40TB", // thermobaric
		"rhs_VG40TB",
		"rhs_VG40SZ", // flashbang
		"rhs_VG40OP_red", // flare
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm_U",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm_tracer",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VG40TB", // thermobaric
		"rhs_VG40TB",
		"rhs_VG40SZ", // flashbang
		"rhs_VG40OP_red", // flare
		"rhs_mag_rgn",
		"rhs_mag_fakel",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};

	backpack="rhs_rk_sht_30_emr_ammo_recon";
};

class rhs_vdv_recon_arifleman_scout : rhs_vdv_recon_rifleman_scout
{
	displayName= "$STR_RHSUSF_INF_SCOUT_PKP";
	EdPrev(rhs_vdv_recon_arifleman_scout)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	uniformClass = "rhs_uniform_6sh122_gloves_v1";

	linkedItems[] =
	{
		"rhs_6b45_mg",
		"rhs_6b47_emr_1",
		"G_Bandanna_tan",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_mg",
		"rhs_6b47_emr_1",
		"G_Bandanna_tan",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_radio_R187P1"
	};

	weapons[] =
	{
		"rhs_weap_pkp_1p63",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"rhs_weap_pkp_1p63",
		"rhs_weap_pya",
		"Binocular",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_100Rnd_762x54mmR",
		"rhs_100Rnd_762x54mmR",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};
	respawnMagazines[] =
	{
		"rhs_100Rnd_762x54mmR",
		"rhs_100Rnd_762x54mmR",
		"rhs_mag_9x19_17",
		"rhs_mag_9x19_17",
		"rhs_mag_rgn",
		"rhs_mag_rdg2_white",
		"rhs_mag_nspd"
	};

	backpack="rhs_rk_sht_30_emr_mg";
};

	class rhs_vdv_recon_arifleman_rpk_scout : rhs_vdv_recon_rifleman
	{
		EdPrev(rhs_vdv_recon_arifleman_rpk_scout)
		AUTHOR_MACRO
		displayName= "$STR_RHSUSF_INF_SCOUT_RPK74";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";

		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";

		weapons[] = {"rhs_weap_rpk74m_sup",DefaultManWeapons};
		respawnWeapons[] = {"rhs_weap_rpk74m_sup",DefaultManWeapons};

		magazines[] =
		{
			mag_8(rhs_45Rnd_545X39_7U1_AK),
			mag_2(rhs_mag_rgn)
		};
		respawnMagazines[] =
		{
			mag_8(rhs_45Rnd_545X39_7U1_AK),
			mag_2(rhs_mag_rgn)
		};

		secondaryAmmoCoef = 0.5;
	};

