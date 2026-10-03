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
	"rhs_weap_kar98k",
	"rhs_weap_m38",
	"rhs_weap_m76",
	"rhs_weap_m76_pso",

	"rhs_weap_savz58p",
	"rhs_weap_savz58v",
	"rhs_weap_savz58v_fold",
	"rhs_weap_savz58p_rail",
	"rhs_weap_savz58v_rail",
	"rhs_weap_savz58v_rail_fold",
	"rhs_weap_savz58v_ris",
	"rhs_weap_savz58v_ris_fold",
	"rhs_weap_savz58p_black",
	"rhs_weap_savz58v_black",
	"rhs_weap_savz58v_fold_black",
	"rhs_weap_savz58p_rail_black",
	"rhs_weap_savz58v_rail_black",
	"rhs_weap_savz58v_rail_fold_black",

	"rhs_weap_vhsd2",
	"rhs_weap_vhsd2_ct15x",
	"rhs_weap_vhsd2_bg",
	"rhs_weap_vhsd2_bg_ct15x",
	"rhs_weap_vhsk2",

	"rhsgref_weap_svds",
	"rhsgref_weap_ak103_pso1m21",

	"rhs_weap_akm_gp25",
	"rhs_weap_akms",
	"rhs_weap_ak74m_fullplum",

	"rhs_weap_ak74",
	"rhs_weap_ak74_gp25",
	"rhs_weap_ak74n",
	"rhs_weap_ak74n_gp25",

	"rhs_weap_aks74",
	"rhs_weap_aks74_2",
	"rhs_weap_aks74_gp25",
	"rhs_weap_aks74n",
	"rhs_weap_aks74n_gp25",
	"rhs_weap_aks74u",
	"rhs_weap_ak103_dtk",

	"rhs_weap_m249_pip_L_para",
	"rhs_weap_m240G",
	"rhs_weap_pkm",

	"rhs_weap_makarov_pm",
	"rhsusf_weap_glock17g4",
	"rhs_weap_tt33",

	"rhs_weap_m3a1",
	"rhs_weap_m3a1_specops",
	"rhs_weap_m1garand_sa43",

	"rhs_weap_MP44",
	"rhs_weap_mg42",

	"rhs_weap_m79",

	"rhs_weap_igla",
	"rhs_weap_rpg26",
	"rhs_weap_rpg7"

];

_rhs_magazines = [
// Grenades
	"rhs_mag_f1",
	"rhs_mag_rgd5",
	"rhs_mag_rgn",

	"Chemlight_green",
	"Chemlight_red",
	"Chemlight_yellow",
	"Chemlight_blue",

	"rhs_mag_nspn_red",
	"rhs_mag_nspn_yellow",
	"rhs_mag_nspn_green",
	"rhs_mag_rdg2_white",

	"rhsgref_mag_rkg3em",
// mags
	"rhs_30Rnd_762x39mm",
	"rhs_30Rnd_762x39mm_tracer",
	"rhs_30Rnd_762x39mm_Savz58",
	"rhsgref_10Rnd_792x57_m76",
	"rhsgref_5Rnd_792x57_kar98k",
	"rhs_30Rnd_545x39_7N10_AK",
	"rhsgref_30rnd_556x45_vhs2",
	"rhsgref_30Rnd_792x33_SmE_StG",

	"rhs_100Rnd_762x54mmR",
	"rhsusf_100Rnd_762x51",
	"rhsusf_100Rnd_556x45_soft_pouch",
	"rhsgref_50Rnd_792x57_SmE_drum",
// 40mm
	"rhs_VOG25",
	"rhs_VOG25p",

// Pistol Mags
	"rhs_mag_9x18_8_57N181S",
	"rhsusf_mag_17Rnd_9x19_FMJ",
	"rhs_mag_762x25_8",

//rockets


//missiles
	"rhs_rpg7_PG7VL_mag",
	"rhs_rpg7_PG7VR_mag",
	"rhs_rpg7_OG7V_mag",
	"rhs_rpg7_TBG7V_mag",
	"rhs_rpg26_mag",
	"rhs_rshg2_mag",
	"rhs_mag_9k38_rocket",

//explosives


//mines
	"rhs_mine_tm62m_mag",
	"rhs_mine_pmn2_mag"
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
	"rhsgref_uniform_ttsko_forest",
	"rhsgref_uniform_ttsko_mountain",
	"rhsgref_uniform_ttsko_urban",
	"rhsgref_uniform_vsr",
	"rhsgref_uniform_para_ttsko_oxblood",
	"rhsgref_uniform_para_ttsko_mountain",
	"rhsgref_uniform_para_ttsko_urban",
	"rhsgref_uniform_specter",
	"rhsgref_uniform_reed",
	"rhsgref_uniform_alpenflage",
	"rhsgref_uniform_flecktarn",
	"rhsgref_uniform_tigerstripe",
	"rhsgref_uniform_woodland",
	"rhsgref_uniform_woodland_olive",

	"rhs_uniform_gorka_r_g",

	//- Vests

	"rhsgref_6b23",
	"rhsgref_6b23_khaki",
	"rhsgref_6b23_khaki_rifleman",
	"rhsgref_6b23_khaki_sniper",
	"rhsgref_6b23_khaki_officer",
	"rhsgref_6b23_khaki_nco",
	"rhsgref_6b23_khaki_medic",
	"rhsgref_6b23_ttsko_forest",
	"rhsgref_6b23_ttsko_forest_rifleman",
	//"rhsgref_6b23_ttsko_forest_sniper",
	"rhsgref_6b23_ttsko_mountain",
	"rhsgref_6b23_ttsko_mountain_rifleman",
	"rhsgref_6b23_ttsko_mountain_sniper",
	"rhsgref_6b23_ttsko_mountain_officer",
	"rhsgref_6b23_ttsko_mountain_nco",
	"rhsgref_6b23_ttsko_mountain_medic",
	"rhsgref_6b23_ttsko_urban",

	//"rhsgref_6b23_ttsko_urban",
	//"rhsgref_6b23_ttsko_urban_rifleman",
	//"rhsgref_6b23_ttsko_urban_sniper",
	//"rhsgref_6b23_ttsko_urban_officer",
	//"rhsgref_6b23_ttsko_urban_nco",
	//"rhsgref_6b23_ttsko_urban_medic",

	"rhsgref_6b23_ttsko_digi",
	"rhsgref_6b23_ttsko_digi_rifleman",
	"rhsgref_6b23_ttsko_digi_sniper",
	"rhsgref_6b23_ttsko_digi_officer",
	"rhsgref_6b23_ttsko_digi_nco",
	"rhsgref_6b23_ttsko_digi_medic",

	"rhs_vest_pistol_holster",

	//PLACEHOLDER VESTS
	"rhsgref_otv_khaki",
	"rhsgref_otv_digi",

	//Helmets
	"rhsgref_ssh68",
	"rhsgref_ssh68_ttsko_mountain",
	"rhsgref_ssh68_ttsko_forest",
	"rhsgref_ssh68_ttsko_digi",
	"rhsgref_ssh68_emr",
	"rhsgref_ssh68_un",

	"rhsgref_6b27m",
	"rhsgref_6b27m_ttsko_forest",
	"rhsgref_6b27m_ttsko_mountain",
	"rhsgref_6b27m_ttsko_urban",
	"rhsgref_6b27m_ttsko_digi",

	"rhs_gssh18",

	//- Optic gear
	"rhs_googles_black",
	"rhs_googles_clear",
	"rhs_googles_yellow",
	"rhs_googles_orange",

	//- Headgear

	// Patrol Caps
	"rhsgref_patrolcap_specter",


	// Boonie hats


	// Caps
	"rhsgref_Booniehat_alpen",
	"rhsgref_bcap_specter",
	"rhsgref_fieldcap",
	"rhsgref_fieldcap_ttsko_forest",
	"rhsgref_fieldcap_ttsko_mountain",
	"rhsgref_fieldcap_ttsko_urban",
	"rhsgref_fieldcap_ttsko_digi",

	// Facewear
	"rhs_balaclava",
	"rhs_scarf",


	//accesories
	"rhsgref_acc_RX01_camo",
	"rhsgref_acc_RX01_NoFilter_camo",

	"rhs_1PN138",
	"rhs_acc_pgo7v",
	"rhs_acc_1p29",
	"rhs_acc_pso1m2"

];

_rhs_backpacks =
[

	"rhsgref_cdf_backpack_engineer",
	"rhsgref_cdf_backpack_medic",
	"B_TacticalPack_oli",
	"B_AssaultPack_blk",
	"rhsgref_nat_backpack_mg",
	"rhsgref_nat_backpack_engineer",
	"rhsgref_nat_backpack_medic",
	"rhsgref_nat_backpack_explosives",
	"B_FieldPack_khk",
	"B_FieldPack_cbr",
	"B_TacticalPack_blk",
	"B_Carryall_cbr",
	"rhs_assault_umbts_engineer_empty",
	"rhsgref_ins_pack",
	"rhsgref_ins_pack_GR",
	"rhsgref_ins_packMG",
	"rhsgref_ins_pack_demo",
	"rhsgref_ins_pack_saboteur",
	"rhs_rpg_empty",
	"rhs_sidor",
	"rhs_sidorMG",
	"rhs_rpg_vl",


	//weapon bags
	"rhsgref_cdf_backpack_mg",
	"rhsgref_cdf_backpack_mg2"


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