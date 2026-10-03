/*
[nameOfBox,_type] call RHS_fnc_VirtualAmmoBoxGREF
nameOfBox - Object
type - Number, 0: all gear, 1: only ammo

you can use it on whatever you want :)

author: reyhard
*/

private["_ammoBox","_type","_rhs_magazines","_rhs_weapons","_rhs_items","_rhs_backpacks"];
_ammoBox = _this select 0;
_type = _this select 1;

_rhs_weapons =
[

	"Binocular",
	"lerca_1200_black",
	"Rangefinder",
	"Leupold_Mk4",
	"rhssaf_zrak_rd7j",
	"rhs_weap_m21a",
	"rhs_weap_m21a_pr",
	"rhs_weap_m21s",
	"rhs_weap_m21s_pr",
	"rhs_weap_m21a_pbg40",
	"rhs_weap_m21a_pr_pbg40",
	"rhs_weap_m70ab2",
	"rhs_weap_m70b1",
	"rhs_weap_m70b1n",
	"rhs_weap_m70b3n",
	"rhs_weap_m70b3n_pbg40",
	"rhs_weap_m76",
	"rhs_weap_m92",
	"rhs_weap_scorpion",
	"rhs_weap_minimi_para_railed",
	"rhs_weap_m84",
	"rhs_weap_g36c",
	"rhs_weap_g36kv",
	"rhs_weap_g36kv_ag36",
	"rhs_weap_hk416d10",
	"rhs_weap_hk416d10_m320",
	"rhs_weap_hk416d145",
	"rhs_weap_hk416d145_m320",
	"rhs_weap_M82a1",
	"rhs_weap_SCARH_CQC",
	"rhs_weap_SCARH_STD",
	"rhs_weap_SCARH_LB",
	"rhs_weap_SCARH_FDE_CQC",
	"rhs_weap_SCARH_FDE_STD",
	"rhs_weap_SCARH_FDE_LB",

	"rhs_weap_makarov_pm",
	"rhsusf_weap_glock17g4",
	"rhs_weap_cz99",
	"rhs_weap_cz99_etched",

	"rhs_weap_igla",
	"rhs_weap_rpg7",
	"rhs_weap_m80"

];

_rhs_magazines = [
// Grenades
	"rhs_mag_f1",
	"rhs_mag_rgd5",
	"rhs_mag_rgn",
	"rhssaf_mag_br_m75",
	"rhssaf_mag_br_m84",
	"rhssaf_mag_brd_m83_white",
	"rhssaf_mag_brd_m83_yellow",
	"rhssaf_mag_brd_m83_green",
	"rhssaf_mag_brd_m83_red",
	"rhssaf_mag_brd_m83_blue",
	"rhssaf_mag_brd_m83_orange",
	"rhssaf_mag_rshb_p98",
	"rhssaf_mag_brz_m88",
	"rhssaf_mag_brk_m79",

	"Chemlight_green",
	"Chemlight_red",
	"Chemlight_yellow",
	"Chemlight_blue",

	"rhs_mag_nspn_red",
	"rhs_mag_nspn_yellow",
	"rhs_mag_nspn_green",
	"rhs_mag_rdg2_white",
// mags
	"rhssaf_mag_15Rnd_9x19_FMJ",
	"rhssaf_mag_15Rnd_9x19_JHP",
	"rhssaf_30Rnd_762x39mm_M67",
	"rhssaf_30Rnd_762x39mm_M78_tracer",
	"rhssaf_30Rnd_762x39_M82_api",
	"rhsgref_20rnd_765x17_vz61",
	"rhsgref_10rnd_765x17_vz61",
	"rhsgref_10Rnd_792x57_m76",
	"rhssaf_10Rnd_792x57_m76_tracer",
	"rhsgref_30rnd_556x45_m21",
	"rhsgref_30rnd_556x45_m21_t",
	"rhs_30Rnd_545x39_7N10_AK",
	"rhssaf_30rnd_556x45_EPR_G36",
	"rhssaf_30rnd_556x45_SOST_G36",
	"rhssaf_30rnd_556x45_SPR_G36",
	"rhssaf_100rnd_556x45_EPR_G36",
	"rhssaf_30rnd_556x45_Tracers_G36",
	"rhssaf_30rnd_556x45_TDIM_G36",
	"rhssaf_30rnd_556x45_MDIM_G36",
	"rhs_200rnd_556x45_M_SAW",
	"rhs_200rnd_556x45_B_SAW",
	"rhs_200rnd_556x45_T_SAW",
	"rhsusf_100Rnd_556x45_soft_pouch",
	"rhsusf_200Rnd_556x45_soft_pouch",
	"rhsusf_100Rnd_556x45_M200_soft_pouch",
	"rhs_mag_30Rnd_556x45_Mk318_Stanag",
	"rhs_mag_30Rnd_556x45_Mk262_Stanag",
	"rhs_mag_30Rnd_556x45_M855A1_Stanag",
	"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
	"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
	"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
	"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
	"rhs_mag_30Rnd_556x45_M200_Stanag",
	"30Rnd_556x45_Stanag",
	"30Rnd_556x45_Stanag_Tracer_Red",
	"30Rnd_556x45_Stanag_Tracer_Green",
	"30Rnd_556x45_Stanag_Tracer_Yellow",
	"rhs_100Rnd_762x54mmR",
	"rhssaf_250Rnd_762x54R",
	"rhsusf_mag_10Rnd_STD_50BMG_M33",
	"rhsusf_mag_10Rnd_STD_50BMG_mk211",
	"rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
	"rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
	"rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
	"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
	"rhs_mag_20Rnd_SCAR_762x51_m118_special_bk",
	"rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk",

// 40mm
	"rhs_VOG25",
	"rhs_VOG25p",
	"rhs_vg40tb",
	"rhs_vg40sz",
	"rhs_vg40op_white",
	"rhs_vg40op_green",
	"rhs_vg40op_red",
	"rhs_GRD40_white",
	"rhs_GRD40_green",
	"rhs_GRD40_red",
	"rhs_VG40MD_White",
	"rhs_VG40MD_Green",
	"rhs_VG40MD_Red",
	"rhs_GDM40",
	"rhs_mag_M433_HEDP",
	"rhs_mag_M397_HET",
	"rhs_mag_m4009",
	"rhs_mag_m576",
	"rhs_mag_M585_white",
	"rhs_mag_m661_green",
	"rhs_mag_m662_red",
	"rhs_mag_m713_Red",
	"rhs_mag_m714_White",
	"rhs_mag_m715_Green",
	"rhs_mag_m716_yellow",

// Pistol Mags
	"rhs_mag_9x18_8_57N181S",
	"rhsusf_mag_17Rnd_9x19_FMJ",

//rockets
	"rhs_rpg7_PG7VL_mag",
	"rhs_rpg7_PG7VR_mag",
	"rhs_rpg7_OG7V_mag",
	"rhs_rpg7_TBG7V_mag",

//missiles
	"rhs_mag_9k38_rocket",

//explosives
	"rhssaf_tm100_mag",
	"rhssaf_tm200_mag",
	"rhssaf_tm500_mag",

//mines
	"rhs_mine_tm62m_mag",
	"rhs_mine_pmn2_mag",
	"rhssaf_mine_pma3_mag",
	"rhssaf_mine_tma4_mag",
	"rhssaf_mine_mrud_a_mag",
	"rhssaf_mine_mrud_b_mag",
	"rhssaf_mine_mrud_c_mag",
	"rhssaf_mine_mrud_d_mag"
];

_rhs_items = [

	//misc items
	"itemRadio",
	"itemMap",
	"itemcompass",
	"itemWatch",
	"Binocular",
	"toolkit",
	"medikit",
	"firstaidkit",
	"MineDetector",

	//nvg


	//- Uniforms
	"rhssaf_uniform_m10_digital",
	"rhssaf_uniform_m10_digital_summer",
	"rhssaf_uniform_m10_digital_desert",
	"rhssaf_uniform_m10_digital_tan_boots",
	"rhssaf_uniform_m93_oakleaf",
	"rhssaf_uniform_m93_oakleaf_summer",
	"rhssaf_uniform_heli_pilot",
	"rhssaf_uniform_mig29_pilot",

	//- Vests

	"rhssaf_vest_md98_woodland",
	"rhssaf_vest_md98_md2camo",
	"rhssaf_vest_md98_digital",
	"rhssaf_vest_md98_rifleman",
	"rhssaf_vest_otv_md2camo",
	"rhssaf_vest_md99_md2camo_rifleman",
	"rhssaf_vest_md99_digital_rifleman",
	"rhssaf_vest_md99_woodland_rifleman",
  "rhssaf_vest_md99_md2camo_rifleman_radio",
  "rhssaf_vest_md99_digital_rifleman_radio",
  "rhssaf_vest_md99_woodland_rifleman_radio",
	"rhssaf_vest_md99_md2camo",
	"rhssaf_vest_md99_digital",
	"rhssaf_vest_md99_woodland",
	"rhssaf_vest_md99_md2camo_radio",
	"rhssaf_vest_md99_digital_radio",
	"rhssaf_vest_md99_woodland_radio",
	"rhssaf_vest_md12_digital",
	"rhssaf_vest_md12_m70_rifleman",
	"rhssaf_vest_md12_digital_desert",

	"rhs_vest_pistol_holster",

	//Helmets
	"rhssaf_helmet_m59_85_nocamo",
	"rhssaf_helmet_m59_85_oakleaf",
	"rhssaf_helmet_m97_olive_nocamo",
	"rhssaf_helmet_m97_olive_nocamo_black_ess",
	"rhssaf_helmet_m97_olive_nocamo_black_ess_bare",
	"rhssaf_helmet_m97_black_nocamo",
	"rhssaf_helmet_m97_black_nocamo_black_ess",
	"rhssaf_helmet_m97_black_nocamo_black_ess_bare",
	"rhssaf_helmet_m97_woodland",
	"rhssaf_helmet_m97_digital",
	"rhssaf_helmet_m97_md2camo",
	"rhssaf_helmet_m97_oakleaf",
	"rhssaf_helmet_m97_nostrap_blue",
	"rhssaf_helmet_m97_nostrap_blue_tan_ess",
	"rhssaf_helmet_m97_nostrap_blue_tan_ess_bare",
	"rhssaf_helmet_m97_woodland_black_ess",
	"rhssaf_helmet_m97_woodland_black_ess_bare",
	"rhssaf_helmet_m97_digital_black_ess",
	"rhssaf_helmet_m97_digital_black_ess_bare",
	"rhssaf_helmet_m97_md2camo_black_ess",
	"rhssaf_helmet_m97_md2camo_black_ess_bare",
	"rhssaf_helmet_m97_oakleaf_black_ess",
	"rhssaf_helmet_m97_oakleaf_black_ess_bare",
	"rhs_gssh18",
	"rhsusf_hgu56p",
	"rhsusf_hgu56p_visor",

	//- Optic gear
	"rhs_googles_black",
	"rhs_googles_clear",
	"rhs_googles_yellow",
	"rhs_googles_orange",

	//- Headgear

	// Patrol Caps


	// Boonie hats
	"rhssaf_booniehat_digital",
	"rhssaf_booniehat_md2camo",
	"rhssaf_bonniehat_woodland",

	// Caps
	"rhssaf_beret_green",
	"rhssaf_beret_red",
	"rhssaf_beret_para",
	"rhssaf_beret_black",
	"rhssaf_beret_blue_un",

	// Bandana
	"rhssaf_bandana_digital",
	"rhssaf_bandana_digital_desert",
	"rhssaf_bandana_oakleaf",
	"rhssaf_bandana_smb",
	"rhssaf_bandana_md2camo",


	// Facewear
	"rhs_balaclava",
	"rhs_scarf",


	//accesories
	"rhs_1PN138",
	"rhs_acc_pgo7v",
	"rhs_acc_1p29",
	"rhs_acc_pso1m2"

];

_rhs_backpacks =
[
	"rhssaf_kitbag_md2camo",
	"rhssaf_kitbag_digital",
	"rhssaf_kitbag_smb",
	"rhssaf_alice_md2camo",
	"rhssaf_alice_smb",
	"B_TacticalPack_oli",
	"B_AssaultPack_blk",
	"B_FieldPack_khk",
	"B_FieldPack_cbr",
	"B_TacticalPack_blk",
	"B_Carryall_cbr",
	"rhs_assault_umbts_engineer_empty",
	"rhs_rpg_empty",
	"rhs_sidor",
	"rhs_sidorMG",
	"rhs_rpg_vl",
	"rhs_d6_Parachute_backpack"


	//weapon bags


];

// add western accesories
{_rhs_items pushback _x}foreach (getArray (configFile >> "rhs_western_rifle_scopes_slot" >> "compatibleItems"));

//add rusian accesories
{_rhs_items pushback _x}foreach (["rhs_weap_ak74m"] call BIS_fnc_compatibleItems);

//adding stuff

["AmmoboxInit",[_ammoBox]] call rhs_fnc_arsenal;

if(_type == 0)then{
	[_ammoBox,_rhs_weapons,true] call BIS_fnc_addVirtualWeaponCargo;
	[_ammoBox,_rhs_items,true] call rhs_fnc_addVirtualItemCargo;
	[_ammoBox,_rhs_backpacks,true] call BIS_fnc_addVirtualBackPackCargo;
};

[_ammoBox,_rhs_magazines,true] call BIS_fnc_addVirtualMagazineCargo;


//_ammoBox setvariable ["bis_fnc_arsenal_condition",{true},true];
