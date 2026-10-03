/* MARSOC Raiders */
class rhsusf_infantry_socom_marsoc_base : rhsusf_socom_g3_m81_uniform
{
	scope = 0;

	AUTHOR_MACRO

	side = 1;

	faction = "rhs_faction_socom";
	vehicleClass = "rhs_vehclass_MARSOC";
	editorSubcategory = "rhs_EdSubcat_MARSOC";

	accuracy = 3;

	camouflage = 0.6;
	sensitivity = 3.3;
	detectSkill = 30;

	uniformClass = "rhs_uniform_g3_m81";

	Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhs_Booniehat_m81","rhsusf_acc_nt4_black"};

	linkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_mbav_rifleman", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_mbav_rifleman", Standard_Equipment};

	weapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		"rhs_mag_an_m8hc",
		"rhs_mag_mk84",
		mag_2(rhs_mag_m67),
		mag_3(Chemlight_red)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		"rhs_mag_an_m8hc",
		"rhs_mag_mk84",
		mag_2(rhs_mag_m67),
		mag_3(Chemlight_red)
	};
};

//- CSO

// Operator
class rhsusf_socom_marsoc_cso: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_cso)
	scope = 2;

	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_OPERATOR;
};
// Operator (Mk17)
class rhsusf_socom_marsoc_cso_mk17: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_cso_mk17)
	scope = 2;

	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_OPERATOR_MK17;

	Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhs_Booniehat_m81","rhsusf_acc_aac_scarh_silencer"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhs_Booniehat_m81","rhsusf_acc_aac_scarh_silencer"};

	linkedItems[] = {"rhsusf_opscore_mar_ut_pelt","rhsusf_plateframe_marksman", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mar_ut_pelt","rhsusf_plateframe_marksman", Standard_Equipment};

	weapons[] = {"rhs_weap_mk17_CQC_SU230A_marsoc","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mk17_CQC_SU230A_marsoc","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] =
	{
		mag_6(rhs_mag_20Rnd_SCAR_762x51_m80a1_epr),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		"rhs_mag_an_m8hc",
		"rhs_mag_mk84",
		mag_2(rhs_mag_m67),
		mag_3(Chemlight_red)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_mag_20Rnd_SCAR_762x51_m80a1_epr),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		"rhs_mag_an_m8hc",
		"rhs_mag_mk84",
		mag_2(rhs_mag_m67),
		mag_3(Chemlight_red)
	};
};

// Operator (CQB)
class rhsusf_socom_marsoc_cso_cqb: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_cso_cqb)
	scope = 2;

	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_OPERATOR_CQB;

	linkedItems[] = {"rhsusf_opscore_mar_ut_pelt","rhsusf_plateframe_rifleman", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mar_ut_pelt","rhsusf_plateframe_rifleman", Standard_Equipment};

	weapons[] = {"rhs_weap_mk18_eotech","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mk18_eotech","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_4(rhs_mag_mk84),
		"rhs_mag_m67",
		mag_4(Chemlight_red)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_4(rhs_mag_mk84),
		"rhs_mag_m67",
		mag_4(Chemlight_red)
	};
};

// Operator (light)
class rhsusf_socom_marsoc_cso_light: rhsusf_socom_marsoc_cso_cqb
{
	EdPrev(rhsusf_socom_marsoc_cso_light)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_OPERATOR_L;

	cost = 250000;
	threat[] = {1,0.3,0.3};
	camouflage = 0.5;
	sensitivity = 3.3;

	Items[] = {"FirstAidKit","rhsusf_ANPVS_15"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15"};

	linkedItems[] = {"rhs_Booniehat_m81","rhsusf_mbav_light", Standard_Equipment};
	respawnLinkedItems[] = {"rhs_Booniehat_m81","rhsusf_mbav_light", Standard_Equipment};

	weapons[] = {"rhs_weap_mk18_eotech_sup","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mk18_eotech_sup","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
};
// Operator (light/Mk17)
class rhsusf_socom_marsoc_cso_mk17_light: rhsusf_socom_marsoc_cso_light
{
	EdPrev(rhsusf_socom_marsoc_cso_mk17_light)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_OPERATOR_MK17_L;

	Items[] = {"FirstAidKit","rhsusf_ANPVS_15"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15"};

	linkedItems[] = {"H_Cap_headphones","rhsusf_plateframe_marksman", Standard_Equipment};
	respawnLinkedItems[] = {"H_Cap_headphones","rhsusf_plateframe_marksman", Standard_Equipment};

	weapons[] = {"rhs_weap_mk17_CQC_G33_sup_marsoc","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mk17_CQC_G33_sup_marsoc","rhsusf_weap_glock17g4","Binocular","Throw","Put"};

	magazines[] =
	{
		mag_4(rhs_mag_20Rnd_SCAR_762x51_m80a1_epr),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_4(rhs_mag_mk84),
		"rhs_mag_m67",
		mag_4(Chemlight_red)
	};
	respawnMagazines[] =
	{
		mag_4(rhs_mag_20Rnd_SCAR_762x51_m80a1_epr),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_4(rhs_mag_mk84),
		"rhs_mag_m67",
		mag_4(Chemlight_red)
	};
};

// Operator (Breacher)
class rhsusf_socom_marsoc_cso_breacher: rhsusf_socom_marsoc_cso_cqb
{
	EdPrev(rhsusf_socom_marsoc_cso_breacher)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_OPERATOR_B;

	icon = "iconManExplosive";
	picture = "pictureExplosive";

	linkedItems[] = {"rhsusf_opscore_mar_ut_pelt","rhsusf_plateframe_light", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mar_ut_pelt","rhsusf_plateframe_light", Standard_Equipment};

	backpack = "rhsusf_assault_eagleaiii_coy_demo";
};

// Operator (M203)
class rhsusf_socom_marsoc_cso_grenadier: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_cso_grenadier)
	scope = 2;
	AUTHOR_MACRO
	displayName= "$STR_RHSUSF_INF_GRENADIERA";

	linkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_mbav_grenadier",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_mbav_grenadier",Standard_Equipment};

	weapons[] = {"rhs_weap_m4a1_blockII_M203_SU230","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_M203_SU230","rhsusf_weap_glock17g4","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_4(rhs_mag_M433_HEDP),
		"rhs_mag_an_m8hc",
		"rhs_mag_m67",
		mag_3(Chemlight_red)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_4(rhs_mag_M433_HEDP),
		"rhs_mag_an_m8hc",
		"rhs_mag_m67",
		mag_3(Chemlight_red)
	};

	backpack="rhsusf_falconii_coy_gr";
};

//- Leadership

// Team Leader (officer)
class rhsusf_socom_marsoc_teamleader: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_teamleader)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_TEAMLEADER;

	textSingular = "officer";
	textPlural = "officers";
	nameSound = "veh_infantry_officer_s";
	icon = "iconManOfficer";
	camouflage = 1.6;
	sensitivity = 3;

	linkedItems[] = {"rhsusf_mich_bare_norotos_alt","rhsusf_mbav_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt","rhsusf_mbav_rifleman",Standard_Equipment};

	weapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230_sup","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230_sup","rhsusf_weap_glock17g4","Binocular","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		"rhs_mag_m18_red",
		"rhs_mag_m18_green",
		"rhs_mag_m18_yellow",
		mag_2(I_IR_Grenade),
		"rhs_mag_m67"
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		"rhs_mag_m18_red",
		"rhs_mag_m18_green",
		"rhs_mag_m18_yellow",
		mag_2(I_IR_Grenade),
		"rhs_mag_m67"
	};
};

// Team Chief
class rhsusf_socom_marsoc_teamchief: rhsusf_socom_marsoc_teamleader
{
	EdPrev(rhsusf_socom_marsoc_teamchief)

	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_TEAMCHIEF;

	icon = "iconManLeader";
	cost = 450000;
	sensitivity = 3.2;

	linkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_mbav_rifleman",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_mbav_rifleman",Standard_Equipment};

	weapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230","rhsusf_weap_glock17g4","rhsusf_bino_lerca_1200_black","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230","rhsusf_weap_glock17g4","rhsusf_bino_lerca_1200_black","Throw","Put"};
};

// Element Leader
class rhsusf_socom_marsoc_elementleader: rhsusf_socom_marsoc_cso_cqb
{
	EdPrev(rhsusf_socom_marsoc_elementleader)

	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_ELEMENTLEADER;

	icon = "iconManLeader";
	cost = 450000;
	camouflage = 1.4;
	sensitivity = 3.3;

	linkedItems[] = {"rhsusf_opscore_mar_ut_pelt","rhsusf_plateframe_teamleader", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mar_ut_pelt","rhsusf_plateframe_teamleader", Standard_Equipment};

	weapons[] = {"rhs_weap_mk18_eotech","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mk18_eotech","rhsusf_weap_glock17g4","Binocular","Throw","Put"};
};

//- Specialities

// JTAC

class rhsusf_socom_marsoc_jtac: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_jtac)
	scope = 2;
	AUTHOR_MACRO
	displayName= "JTAC";

	icon = "iconManLeader";
	cost = 450000;
	sensitivity = 3.2;

	linkedItems[] = {"rhsusf_opscore_mar_fg_pelt","rhsusf_mbav_mg",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_opscore_mar_fg_pelt","rhsusf_mbav_mg",Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_eotech_soc","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_eotech_soc","rhsusf_weap_glock17g4","Laserdesignator","Throw","Put"};

	magazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_2(rhs_mag_m18_yellow),
		mag_2(rhs_mag_m18_purple),
		mag_2(I_IR_Grenade),
		"Laserbatteries",
		mag_2(rhs_mag_m67),
		mag_3(Chemlight_red)
	};
	respawnMagazines[] =
	{
		mag_7(rhs_mag_30Rnd_556x45_M855A1_Stanag),
		mag_3(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_2(rhs_mag_m18_yellow),
		mag_2(rhs_mag_m18_purple),
		mag_2(I_IR_Grenade),
		"Laserbatteries",
		mag_2(rhs_mag_m67),
		mag_3(Chemlight_red)
	};
};

// JFO

class rhsusf_socom_marsoc_jfo: rhsusf_socom_marsoc_jtac
{
	EdPrev(rhsusf_socom_marsoc_jfo)
	scope = 2;
	AUTHOR_MACRO
	displayName= "$STR_RHSUSF_INF_JFO";

	icon = "iconManLeader";
	cost = 450000;
	sensitivity = 3.2;

	linkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_mbav_mg",Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt_headset","rhsusf_mbav_mg",Standard_Equipment};

	weapons[] = {"rhs_weap_mk18_SU230","rhsusf_weap_glock17g4","rhsusf_bino_lerca_1200_black","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mk18_SU230","rhsusf_weap_glock17g4","rhsusf_bino_lerca_1200_black","Throw","Put"};
};

// EOD Tech
class rhsusf_socom_marsoc_cso_eod: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_cso_eod)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_INF_USMC_EOD;

	cost = 115000;
	camouflage = 1.6;
	sensitivity = 2.5;

	canDeactivateMines = 1;
	detectSkill = 80;
	threat[] = {1,0.5,0.1};

	icon = "iconManExplosive";
	picture = "pictureExplosive";

	linkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_mbav_medic", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos","rhsusf_mbav_medic", Standard_Equipment};

	weapons[] = {"rhs_weap_mk18_SU230","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mk18_SU230","rhsusf_weap_glock17g4","Throw","Put"};

	backpack = "rhsusf_assault_eagleaiii_coy_eod";
};

// Mechanic
class rhsusf_socom_marsoc_cso_mechanic: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_cso_mechanic)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_MARSOC_MECH;

	cost = 220000;
	camouflage = 1.6;
	sensitivity = 2.5;
	canDeactivateMines = 1;
	engineer = 1;
	detectSkill = 60;
	threat[] = {1,0.5,0.1};
	icon = "iconManEngineer";
	picture = "pictureRepair";

	backpack = "rhsusf_assault_eagleaiii_coy_engineer";

	linkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_tan","rhsusf_mbav_medic", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_tan","rhsusf_mbav_medic", Standard_Equipment};

	weapons[] = {"rhs_m4a1_grip_eotech_soc","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_m4a1_grip_eotech_soc","rhsusf_weap_glock17g4","Throw","Put"};

};

class rhsusf_socom_marsoc_sarc: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_sarc)

	displayName= $STR_RHSUSF_INF_SARC; // Special Amphibious Reconnaissance Corpsmen ( Recon, EOD, SEAL, Force Recon & Marsoc )
	AUTHOR_MACRO

	scope = 2;

	cost = 290000;
	attendant =1;
	icon="iconManMedic";
	picture="pictureHeal";

	linkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_tan","rhsusf_mbav_medic", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc_alt_tan","rhsusf_mbav_medic", Standard_Equipment};

	weapons[] = {"rhs_weap_mk18_SU230","rhsusf_weap_glock17g4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mk18_SU230","rhsusf_weap_glock17g4","Throw","Put"};

	backpack="rhsusf_falconii_sarc";

	class EventHandlers;
};

// Scout Spotter
class rhsusf_socom_marsoc_spotter: rhsusf_infantry_socom_marsoc_base
{
	EdPrev(rhsusf_socom_marsoc_spotter)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_INF_USMC_SPOTTER;

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_sniper_s"};
			speechPlural[] = {"veh_infantry_sniper_p"};
		};
	};
	textSingular = "sniper";
	textPlural = "snipers";
	nameSound = "veh_infantry_sniper_s";
	cost = 250000;
	threat[] = {1,0.3,0.3};
	camouflage = 0.6;
	sensitivity = 3.5;

	Items[] = {"FirstAidKit","rhsusf_ANPVS_15"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15"};

	linkedItems[] = {"rhs_Booniehat_m81","rhsusf_mbav_light", Standard_Equipment};
	respawnLinkedItems[] = {"rhs_Booniehat_m81","rhsusf_mbav_light", Standard_Equipment};

	weapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230_sup","rhsusf_weap_glock17g4","Leupold_Mk4","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_SU230_sup","rhsusf_weap_glock17g4","Leupold_Mk4","Throw","Put"};
};

// Scout Sniper
class rhsusf_socom_marsoc_sniper : rhsusf_socom_marsoc_spotter
{
	EdPrev(rhsusf_socom_marsoc_sniper)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_INF_USMC_SNIPER_M110;

	cost = 350000;
	threat[] = {1,0.6,0.6};
	camouflage = 0.6;
	sensitivity = 3.3;

	linkedItems[] = {"rhs_Booniehat_m81","rhsusf_mbav_mg", Standard_Equipment};
	respawnLinkedItems[] = {"rhs_Booniehat_m81","rhsusf_mbav_mg", Standard_Equipment};

	weapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_glock17g4","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_glock17g4","rhsusf_bino_lerca_1200_tan","Throw","Put"};

	magazines[] =
	{
		mag_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
		mag_4(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_2(rhs_mag_an_m8hc)
	};
	respawnMagazines[] =
	{
		mag_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
		mag_4(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_2(rhs_mag_an_m8hc)
	};
};

class rhsusf_socom_marsoc_sniper_m107 : rhsusf_socom_marsoc_sniper
{
	EdPrev(rhsusf_socom_marsoc_sniper_m107)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_INF_SNIPER_M107;

	cost = 350000;
	threat[] = {1,0.6,0.6};
	camouflage = 0.6;
	sensitivity = 3.3;

	weapons[] = {"rhs_weap_M107_premier","rhsusf_weap_glock17g4","rhsusf_bino_lerca_1200_tan","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_M107_premier","rhsusf_weap_glock17g4","rhsusf_bino_lerca_1200_tan","Throw","Put"};

	magazines[] =
	{
		mag_5(rhsusf_mag_10Rnd_STD_50BMG_M33),
		mag_2(rhsusf_mag_10Rnd_STD_50BMG_mk211),
		mag_4(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_2(rhs_mag_an_m8hc)
	};
	respawnMagazines[] =
	{
		mag_5(rhsusf_mag_10Rnd_STD_50BMG_M33),
		mag_2(rhsusf_mag_10Rnd_STD_50BMG_mk211),
		mag_4(rhsusf_mag_17Rnd_9x19_FMJ),
		mag_2(rhs_mag_an_m8hc)
	};
};

class rhsusf_socom_marsoc_marksman: rhsusf_socom_marsoc_cso
{
	EdPrev(rhsusf_socom_marsoc_marksman)
	scope = 2;
	AUTHOR_MACRO
	displayName= $STR_RHSUSF_INF_MARKSMAN;

	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_infantry_sniper_s"};
			speechPlural[] = {"veh_infantry_sniper_p"};
		};
	};
	textSingular = "sniper";
	textPlural = "snipers";
	nameSound = "veh_infantry_sniper_s";
	cost = 150000;
	sensitivity = 3.3;

	Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhs_Booniehat_m81","rhsusf_acc_aac_scarh_silencer"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhs_Booniehat_m81","rhsusf_acc_aac_scarh_silencer"};

	linkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_plateframe_marksman", Standard_Equipment};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_arc","rhsusf_plateframe_marksman", Standard_Equipment};

	weapons[] = {"rhs_weap_mk17_LB_DMR_marsoc","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_mk17_LB_DMR_marsoc","Binocular","Throw","Put"};
	magazines[] =
	{
		mag_6(rhs_mag_20Rnd_SCAR_762x51_m118_special),
		"Chemlight_red",
		"rhs_mag_an_m8hc",
		"rhs_mag_mk84",
		mag_2(rhs_mag_m67)
	};
	respawnMagazines[] =
	{
		mag_6(rhs_mag_20Rnd_SCAR_762x51_m118_special),
		"Chemlight_red",
		"rhs_mag_an_m8hc",
		"rhs_mag_mk84",
		mag_2(rhs_mag_m67)
	};

};
