/* VMF Recon Infantry Units */

	#define VMF_Recon_Macro 	faction = "rhs_faction_vmf";\
								dlc = "RHS_AFRF";\
								identityTypes[]=\
								{\
									"LanguageRUS_F",\
									"Head_Asian",\
									"Head_Russian",\
									"Head_Russian_camo_arid",\
									"Head_Russian_camo_lush",\
									"Head_Russian_camo_semiarid"\
								};\
								AUTHOR_MACRO

// the guys with 47 should get AS vals with GRIP and Perst IK as well as NVGs

//- Armored Units

class rhs_vmf_recon_rifleman : rhs_vdv_recon_rifleman
{
	EdPrev(rhs_vmf_recon_rifleman)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
};

class rhs_vmf_recon_rifleman_l : rhs_vdv_recon_rifleman_asval
{
	displayName = "$STR_RHS_INF_RIFLEMAN_ASVAL_L";
	EdPrev(rhs_vmf_recon_rifleman_l)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	DISABLE_HEADGEAR_MACRO

	linkedItems[] =
	{
		"rhs_6sh117_val",
		"rhs_beret_mp1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6sh117_val",
		"rhs_beret_mp1",
		Standard_Equipment
	};

	weapons[] =
	{
		"rhs_weap_asval_grip",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_asval_grip",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};
};

class rhs_vmf_recon_rifleman_akms : rhs_vdv_recon_rifleman_akms
{
	EdPrev(rhs_vmf_recon_rifleman_akms)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};

	weapons[] =
	{
		"rhs_weap_akms",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_akms",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	magazines[] =
	{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
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
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
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

class rhs_vmf_recon_rifleman_lat : rhs_vdv_recon_rifleman_lat
{
	EdPrev(rhs_vmf_recon_rifleman_lat)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
};

class rhs_vmf_recon_grenadier : rhs_vdv_recon_grenadier
{
	EdPrev(rhs_vmf_recon_grenadier)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_grn",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_grn",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
};

class rhs_vmf_recon_rifleman_asval : rhs_vdv_recon_rifleman_asval
{
	EdPrev(rhs_vmf_recon_rifleman_asval)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};

	weapons[] =
	{
		"rhs_weap_vmf_asval",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_vmf_asval",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};
};

// Support roles

class rhs_vmf_recon_arifleman : rhs_vdv_recon_arifleman
{
	EdPrev(rhs_vmf_recon_arifleman)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_mg",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_mg",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};

	weapons[] =
	{
		"rhs_weap_pkp",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"rhs_weap_pkp",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};
};

class rhs_vmf_recon_machinegunner_assistant : rhs_vdv_recon_machinegunner_assistant
{
	EdPrev(rhs_vmf_recon_machinegunner_assistant)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
};

//- Leadership

class rhs_vmf_recon_efreitor : rhs_vdv_recon_efreitor
{
	EdPrev(rhs_vmf_recon_efreitor)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};

	Items[] = {"FirstAidKit","rhs_1PN138","rhs_beret_mp1"};
	RespawnItems[] = {"FirstAidKit","rhs_1PN138","rhs_beret_mp1"};
};

class rhs_vmf_recon_sergeant : rhs_vdv_recon_sergeant
{
	EdPrev(rhs_vmf_recon_sergeant)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_off",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};

	Items[] = {"FirstAidKit","rhs_1PN138","rhs_beret_mp1"};
	RespawnItems[] = {"FirstAidKit","rhs_1PN138","rhs_beret_mp1"};
};

class rhs_vmf_recon_officer_armored : rhs_vdv_recon_officer_armored
{
	EdPrev(rhs_vmf_recon_officer_armored)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6b45_holster",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b45_holster",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};

	Items[] = {"FirstAidKit","rhs_1PN138","rhs_beret_mp1"};
	RespawnItems[] = {"FirstAidKit","rhs_1PN138","rhs_beret_mp1"};
};

class rhs_vmf_recon_officer : rhs_vdv_recon_officer
{
	EdPrev(rhs_vmf_recon_officer)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_v2";

	linkedItems[] =
	{
		"rhs_vest_pistol_holster",
		"rhs_beret_mp1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_vest_pistol_holster",
		"rhs_beret_mp1",
		Standard_Equipment
	};
};


// Specialist

class rhs_vmf_recon_marksman : rhs_vdv_recon_marksman
{
	EdPrev(rhs_vmf_recon_marksman)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6sh117_svd",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6sh117_svd",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
};

class rhs_vmf_recon_marksman_vss : rhs_vdv_recon_marksman_vss
{
	EdPrev(rhs_vmf_recon_marksman_vss)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	linkedItems[] =
	{
		"rhs_6sh117_val",
		"rhs_beanie_green",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6sh117_val",
		"rhs_beanie_green",
		Standard_Equipment
	};

	weapons[] =
	{
		"rhs_weap_vmf_vss",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_vmf_vss",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	Items[] = {"FirstAidKit","rhs_1PN138","rhs_beret_mp1"};
	RespawnItems[] = {"FirstAidKit","rhs_1PN138","rhs_beret_mp1"};
};

class rhs_vmf_recon_medic : rhs_vdv_recon_medic
{
	EdPrev(rhs_vmf_recon_medic)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_v2";

	linkedItems[] =
	{
		"rhs_6b23_digi_medic",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6b23_digi_medic",
		"rhs_6b47_emr_1",
		"rhs_facewear_6m2_1",
		Standard_Equipment
	};
};

//- VMF Scouts

class rhs_vmf_recon_rifleman_scout : rhs_vdv_recon_rifleman_scout
{
	EdPrev(rhs_vmf_recon_rifleman_scout)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	DISABLE_HEADGEAR_MACRO

	linkedItems[] =
	{
		"rhs_6sh117_rifleman",
		"rhs_beanie_green",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6sh117_rifleman",
		"rhs_beanie_green",
		Standard_Equipment
	};
};

class rhs_vmf_recon_rifleman_scout_akm : rhs_vdv_recon_rifleman_scout_akm
{
	EdPrev(rhs_vmf_recon_rifleman_scout_akm)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	DISABLE_HEADGEAR_MACRO

	linkedItems[] =
	{
		"rhs_6sh117_rifleman",
		"rhs_beanie",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6sh117_rifleman",
		"rhs_beanie",
		Standard_Equipment
	};
};

class rhs_vmf_recon_grenadier_scout : rhs_vdv_recon_grenadier_scout
{
	EdPrev(rhs_vmf_recon_grenadier_scout)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	respawnWeapons[] =
	{
		"rhs_weap_akms_gp25",
		"rhs_weap_pya",
		"Throw",
		"Put"
	};

	DISABLE_HEADGEAR_MACRO

	linkedItems[] =
	{
		"rhs_6sh117_nco",
		"rhs_beanie_green",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6sh117_nco",
		"rhs_beanie_green",
		Standard_Equipment
	};
};

class rhs_vmf_recon_arifleman_scout : rhs_vdv_recon_arifleman_scout
{
	EdPrev(rhs_vmf_recon_arifleman_scout)
	VMF_Recon_Macro

	uniformClass = "rhs_uniform_6sh122_gloves_v2";

	DISABLE_HEADGEAR_MACRO

	linkedItems[] =
	{
		"rhs_6sh117_mg",
		"rhs_beanie",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhs_6sh117_mg",
		"rhs_beanie",
		Standard_Equipment
	};
};