///////////////////
//asdg JR support//
///////////////////
class asdg_SlotInfo;
class asdg_OpticRail;
//Picatinny optic rails
class asdg_OpticRail1913: asdg_OpticRail
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";

	class compatibleItems
	{
		optic_Nightstalker = 1;
		optic_tws = 1;
		optic_tws_mg = 1;
		optic_NVS = 1;
		optic_SOS = 1;
		optic_SOS_khk_F = 1;
		optic_MRCO = 1;
		optic_Arco = 1;
		optic_Arco_ghex_F = 1;
		optic_Arco_blk_F = 1;
		optic_aco = 1;
		optic_ACO_grn = 1;
		optic_aco_smg = 1;
		optic_ACO_grn_smg = 1;
		optic_hamr = 1;
		optic_Hamr_khk_F = 1;
		optic_Holosight = 1;
		optic_Holosight_smg = 1;
		optic_Holosight_blk_F = 1;
		optic_Holosight_khk_F = 1;
		optic_Holosight_smg_blk_F = 1;
		optic_DMS = 1;
		optic_DMS_ghex_F = 1;
		optic_LRPS = 1;
		optic_LRPS_ghex_F = 1;
		optic_LRPS_tna_F = 1;
		optic_AMS = 1;
		optic_AMS_khk = 1;
		optic_AMS_snd = 1;
		optic_KHS_blk = 1;
		optic_KHS_hex = 1;
		optic_KHS_old = 1;
		optic_KHS_tan = 1;
		optic_ERCO_blk_F = 1;
		optic_ERCO_khk_F = 1;
		optic_ERCO_snd_F = 1;

		rhsusf_acc_LEUPOLDMK4=1;
		rhsusf_acc_LEUPOLDMK4_d=1;
		rhsusf_acc_LEUPOLDMK4_wd=1;
		rhsusf_acc_LEUPOLDMK4_2=1;
		rhsusf_acc_LEUPOLDMK4_2_MRDS=1;
		rhsusf_acc_LEUPOLDMK4_2_d=1;

		rhsusf_acc_premier=1;
		rhsusf_acc_premier_mrds=1;
		rhsusf_acc_premier_low=1;

		rhsusf_acc_M8541 = 1;
		rhsusf_acc_M8541_d = 1;
		rhsusf_acc_M8541_wd = 1;
		rhsusf_acc_M8541_mrds = 1;
		rhsusf_acc_M8541_low = 1;
		rhsusf_acc_M8541_low_d = 1;
		rhsusf_acc_M8541_low_wd = 1;

		rhsusf_acc_nxs_3515x50_md = 1;
		rhsusf_acc_nxs_3515x50f1_md = 1;
		rhsusf_acc_nxs_3515x50f1_md_sun = 1;
		rhsusf_acc_nxs_3515x50f1_h58 = 1;
		rhsusf_acc_nxs_3515x50f1_h58_sun = 1;
		rhsusf_acc_nxs_5522x56_md = 1;
		rhsusf_acc_nxs_5522x56_md_sun = 1;

		rhsusf_acc_EOTECH=1;
		rhsusf_acc_eotech_552=1;
		rhsusf_acc_eotech_552_d=1;
		rhsusf_acc_eotech_552_wd=1;
		rhsusf_acc_eotech_xps3=1;

		rhsusf_acc_g33_xps3=1;
		rhsusf_acc_g33_xps3_flip=1;
		rhsusf_acc_g33_xps3_tan=1;
		rhsusf_acc_g33_xps3_tan_flip=1;
		rhsusf_acc_g33_t1=1;
		rhsusf_acc_g33_t1_flip=1;

		rhsusf_acc_compm4=1;

		rhsusf_acc_T1_high=1;
		rhsusf_acc_T1_low=1;

		rhsusf_acc_RX01=1;
		rhsusf_acc_RX01_NoFilter=1;
		rhsusf_acc_RX01_tan=1;
		rhsusf_acc_RX01_NoFilter_tan=1;

		rhsusf_acc_RM05=1;
		rhsusf_acc_mrds=1;
		rhsusf_acc_mrds_c=1;

		rhsusf_acc_ACOG=1;
		rhsusf_acc_ACOG2=1;
		rhsusf_acc_ACOG3=1;
		rhsusf_acc_ACOG_wd=1;
		rhsusf_acc_ACOG_d=1;
		rhsusf_acc_ACOG_sa=1;
		rhsusf_acc_ACOG_USMC=1;
		rhsusf_acc_ACOG2_USMC=1;
		rhsusf_acc_ACOG3_USMC=1;
		rhsusf_acc_ACOG_RMR=1;

		rhsusf_acc_ACOG_PIP=1;
		rhsusf_acc_ACOG2_pip=1;
		rhsusf_acc_ACOG3_pip=1;
		rhsusf_acc_ACOG_wd_pip=1;
		rhsusf_acc_ACOG_d_pip=1;
		rhsusf_acc_ACOG_sa_pip=1;
		rhsusf_acc_ACOG_USMC_pip=1;
		rhsusf_acc_ACOG2_USMC_pip=1;
		rhsusf_acc_ACOG3_USMC_pip=1;
		rhsusf_acc_ACOG_RMR_PIP=1;

		rhsusf_acc_ACOG_3d=1;
		rhsusf_acc_ACOG2_3d=1;
		rhsusf_acc_ACOG3_3d=1;
		rhsusf_acc_ACOG_wd_3d=1;
		rhsusf_acc_ACOG_d_3d=1;
		rhsusf_acc_ACOG_sa_3d=1;
		rhsusf_acc_ACOG_USMC_3d=1;
		rhsusf_acc_ACOG2_USMC_3d=1;
		rhsusf_acc_ACOG3_USMC_3d=1;
		rhsusf_acc_ACOG_RMR_3d=1;


		rhsusf_acc_ELCAN=1;
		rhsusf_acc_ELCAN_ard=1;
		rhsusf_acc_ELCAN_3d=1;
		rhsusf_acc_ELCAN_ard_3d=1;
		rhsusf_acc_ELCAN_PIP=1;
		rhsusf_acc_ELCAN_ard_PIP=1;

		rhsusf_acc_su230=1;
		rhsusf_acc_su230_mrds=1;
		rhsusf_acc_su230a=1;
		rhsusf_acc_su230a_mrds=1;
		rhsusf_acc_su230_c=1;
		rhsusf_acc_su230_mrds_c=1;
		rhsusf_acc_su230a_c=1;
		rhsusf_acc_su230a_mrds_c=1;
		rhsusf_acc_su230_3d=1;
		rhsusf_acc_su230_mrds_3d=1;
		rhsusf_acc_su230a_3d=1;
		rhsusf_acc_su230a_mrds_3d=1;
		rhsusf_acc_su230_c_3d=1;
		rhsusf_acc_su230_mrds_c_3d=1;
		rhsusf_acc_su230a_c_3d=1;
		rhsusf_acc_su230a_mrds_c_3d=1;

		// legacy
		rhsusf_acc_SpecterDR=1;
		rhsusf_acc_SpecterDR_3d=1;
		rhsusf_acc_SpecterDR_A=1;
		rhsusf_acc_SpecterDR_A_3d=1;
		rhsusf_acc_SpecterDR_CX=1;
		rhsusf_acc_SpecterDR_CX_3D=1;
		rhsusf_acc_SpecterDR_pvs27=1;
		rhsusf_acc_SpecterDR_D=1;
		rhsusf_acc_SpecterDR_OD=1;
		rhsusf_acc_SpecterDR_D_3D=1;
		rhsusf_acc_SpecterDR_OD_3D=1;

		rhsusf_acc_anpvs27=1;
		rhsusf_acc_anpas13gv1=1;

		rhsusf_acc_M2A1=1;

		rhsusf_acc_ACOG_MDO=1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
		//rhsusf_acc_LEUPOLDMK4=0;
		//rhsusf_acc_LEUPOLDMK4_d=0;
		//rhsusf_acc_LEUPOLDMK4_wd=0;
		//rhsusf_acc_LEUPOLDMK4_2=0;
		//rhsusf_acc_LEUPOLDMK4_2_d=0;
		//rhsusf_acc_LEUPOLDMK4_2_MRDS=0;
		//rhsusf_acc_premier=0;
		//rhsusf_acc_M8541 = 0;
		//rhsusf_acc_M8541_mrds = 0;
	};
};
class asdg_OpticRail1913_long: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
		rhsusf_acc_LEUPOLDMK4=0;
		rhsusf_acc_LEUPOLDMK4_d=0;
		rhsusf_acc_LEUPOLDMK4_wd=0;
		rhsusf_acc_M8541_low = 0;
		rhsusf_acc_M8541_low_d = 0;
		rhsusf_acc_M8541_low_wd = 0;

		rhsusf_acc_premier_anpvs27=1;
		rhsusf_acc_ACOG_anpvs27=1;
		
		rhsusf_acc_T1_low_fwd = 1;
		rhsusf_acc_T1_low_fwd_ak = 1;

		rhsusf_acc_RM05_fwd=1;
		rhsusf_acc_RM05_fwd_ak=1;

		rhsusf_acc_mrds_fwd = 1;
		rhsusf_acc_mrds_fwd_ak = 1;

		rhsusf_acc_mrds_fwd_c = 1;
		rhsusf_acc_mrds_fwd_c_ak = 1;
	};
};
// Russian optic rails
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems;
};
class asdg_OpticSideRail_AKSVD: asdg_OpticSideMount {};
// Bipod rails
class asdg_UnderSlot: asdg_SlotInfo
{
	linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint = "Bottom";
	class compatibleItems
	{
		bipod_01_F_snd = 1;
		bipod_01_F_blk = 1;
		bipod_01_F_mtp = 1;
		bipod_02_F_blk = 1;
		bipod_02_F_tan = 1;
		bipod_02_F_hex = 1;
		bipod_03_F_blk = 1;
		bipod_03_F_oli = 1;
		bipod_01_F_khk = 1;
		rhsusf_acc_harris_bipod=1;
	};
};
// Picatinny Laser/Light rails
class asdg_FrontSideRail: asdg_SlotInfo
{
	linkProxy = "\a3\data_f\proxies\weapon_slots\side";
	displayName = "$STR_A3_PointerSlot0";

	class compatibleItems
	{
		acc_flashlight=1;
		acc_pointer_IR=1;

		// RHS
		rhsusf_acc_wmx=1;
		rhsusf_acc_wmx_bk=1;
		rhsusf_acc_M952V=1;

		rhsusf_acc_anpeq15A=1;

		rhsusf_acc_anpeq15=1;
		rhsusf_acc_anpeq15_light=1;
		rhsusf_acc_anpeq15_top=1;
		rhsusf_acc_anpeq15_h=1;
		rhsusf_acc_anpeq15_light_h=1;
		rhsusf_acc_anpeq15_top_h=1;
		rhsusf_acc_anpeq15_sc=1;
		rhsusf_acc_anpeq15_light_sc=1;
		rhsusf_acc_anpeq15_top_sc=1;
		rhsusf_acc_anpeq15side=1;

		rhsusf_acc_anpeq15_bk=1;
		rhsusf_acc_anpeq15_bk_light=1;
		rhsusf_acc_anpeq15_bk_top=1;
		rhsusf_acc_anpeq15_bk_h=1;
		rhsusf_acc_anpeq15_bk_light_h=1;
		rhsusf_acc_anpeq15_bk_top_h=1;
		rhsusf_acc_anpeq15_bk_sc=1;
		rhsusf_acc_anpeq15_bk_light_sc=1;
		rhsusf_acc_anpeq15_bk_top_sc=1;
		rhsusf_acc_anpeq15side_bk=1;

		rhsusf_acc_anpeq15_wmx=1;
		rhsusf_acc_anpeq15_wmx_light=1;
		rhsusf_acc_anpeq15_wmx_h=1;
		rhsusf_acc_anpeq15_wmx_light_h=1;
		rhsusf_acc_anpeq15_wmx_sc=1;
		rhsusf_acc_anpeq15_wmx_light_sc=1;

		rhsusf_acc_anpeq16a=1;
		rhsusf_acc_anpeq16a_light=1;
		rhsusf_acc_anpeq16a_top=1;
		rhsusf_acc_anpeq16a_light_top=1;
		rhsusf_acc_anpeq16a_top_h=1;
		rhsusf_acc_anpeq16a_light_top_h=1;
		rhsusf_acc_anpeq16a_top_sc=1;
		rhsusf_acc_anpeq16a_light_top_sc=1;
	};
};
class asdg_PistolUnderRail : asdg_SlotInfo {
	linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
	displayName = "$STR_A3_PointerSlot0";
	iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint = "Bottom";

	class compatibleItems {
		acc_flashlight_pistol = 1;
	};
};
// Joint Muzzle compatibility
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
		rhsusf_acc_rotex5_grey=1;
		rhsusf_acc_rotex5_tan=1;
		rhsusf_acc_SF3P556=1;
		rhsusf_acc_SFMB556=1;
		rhsusf_acc_nt4_black=1;
		rhsusf_acc_nt4_tan=1;
	};
};
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
    class compatibleItems
	{
		rhsusf_acc_aac_scarh_silencer=1;
		rhsusf_acc_aac_762sd_silencer=1;
		rhsusf_acc_aac_762sdn6_silencer=1;
    };

};
class asdg_MuzzleSlot_762MG : asdg_MuzzleSlot {
	ICON_OVERLAY_DISABLED
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems {
		rhsusf_acc_ARDEC_M240 = 1;
	};
};
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
		rhsusf_acc_omega9k=1;
	};
};
class asdg_MuzzleSlot_46: asdg_MuzzleSlot {
    class compatibleItems 
    {
		rhsusf_acc_rotex_mp7=1;
		rhsusf_acc_rotex_mp7_desert=1;
		rhsusf_acc_rotex_mp7_winter=1;
		rhsusf_acc_rotex_mp7_aor1=1;
    };
};

////////////////////
//RHS weapon slots//
////////////////////
//Because of arsenal limitation weapons need to be listed twice

//Picatinny Optics
class rhs_western_rifle_scopes_slot_short: asdg_OpticRail1913_short{};
class rhs_western_rifle_scopes_slot_long: asdg_OpticRail1913_long {};
//Bipods and Grips
class rhs_western_rifle_underbarrel_slot_bis: UnderBarrelSlot{};
class rhs_western_rifle_underbarrel_slot: asdg_UnderSlot
{
	ICON_OVERLAY_DISABLED
	class compatibleItems: compatibleItems
	{
	};
};
class rhs_rifle_gripod_slot: UnderBarrelSlot
{
	ICON_OVERLAY_DISABLED
	displayName = "Gripod slot";
	class compatibleItems
	{
		rhsusf_acc_grip1=1;
		rhsusf_acc_grip2=1;
		rhsusf_acc_grip2_tan=1;
		rhsusf_acc_grip2_wd=1;
		rhsusf_acc_grip3=1;
		rhsusf_acc_grip3_tan=1;
		rhsusf_acc_kac_grip=1;
		
		rhsusf_acc_rvg_blk=1;
		rhsusf_acc_rvg_de=1;
		rhsusf_acc_tacsac_blk=1;
		rhsusf_acc_tacsac_tan=1;
		rhsusf_acc_tacsac_blue=1;
		rhsusf_acc_tdstubby_blk=1;
		rhsusf_acc_tdstubby_tan=1;		
	};
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot
{
	linkProxy = "rhsusf\addons\rhsusf_weapons\rhs_grip_proxy";
};
class rhs_western_mg_gripod_slot: rhs_western_rifle_gripod_slot
{
	class compatibleItems: compatibleItems
	{
		rhsusf_acc_grip2=0;
		rhsusf_acc_grip2_tan=0;
		rhsusf_acc_grip2_wd=0;
		rhsusf_acc_grip4=1;
	};
};
class rhs_western_m203_gripod_slot: rhs_western_rifle_gripod_slot
{
	class compatibleItems
	{
		rhsusf_acc_grip_m203_blk=1;
		rhsusf_acc_grip_m203_d=1;
		rhsusf_acc_grip_m203_wd=1;
	};
};
class rhs_western_rifle_afg_slot: rhs_rifle_gripod_slot
{
	linkProxy = "rhsusf\addons\rhsusf_weapons\rhs_afg_proxy";
};
class rhs_UnderSlot_m249: asdg_SlotInfo
{
	linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
	iconPinpoint = "Bottom";
	class compatibleItems
	{
		rhsusf_acc_saw_bipod=1;
	};
};
class rhs_Underslot_m249_ris: rhs_UnderSlot_m249
{
	class compatibleItems: compatibleItems
	{
		rhsusf_acc_grip4_bipod=1;
		rhsusf_acc_saw_lw_bipod=1;
		rhsusf_acc_kac_grip_saw_bipod=1;
	};
};
class rhs_UnderSlot_m240: asdg_SlotInfo
{
	linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
	iconPinpoint = "Bottom";
	class compatibleItems
	{
	};
};
class rhs_western_m14_underbarrel_slot: UnderBarrelSlot
{
	class compatibleItems
	{
		rhsusf_acc_m14_bipod=1;
		rhsusf_acc_harris_swivel=1;
	};
};
// Suppressors and Flashhiders
class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556
{
	ICON_OVERLAY_DISABLED
	class compatibleItems: compatibleItems
	{
		muzzle_snds_M=0;
	};
};
class rhs_western_762rifle_muzzle_slot: asdg_MuzzleSlot_762
{
	ICON_OVERLAY_DISABLED
	class compatibleItems: compatibleItems
	{
	};
};
class rhs_western_9mmpistol_muzzle_slot: asdg_MuzzleSlot_9MM
{
	ICON_OVERLAY_DISABLED
	class compatibleItems: compatibleItems
	{
		muzzle_snds_L=0;
	};
};
class rhs_western_46mmsmg_muzzle_slot: asdg_MuzzleSlot_46
{
	ICON_OVERLAY_DISABLED
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems: compatibleItems
	{
	};
};
class rhs_western_m24_muzzle_slot : asdg_MuzzleSlot {
	ICON_OVERLAY_DISABLED
	displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems {
		rhsusf_acc_m24_silencer_black 		= 1;
		rhsusf_acc_m24_silencer_d 		= 1;
		rhsusf_acc_m24_silencer_wd 		= 1;
		rhsusf_acc_m24_muzzlehider_black 	= 1;
		rhsusf_acc_m24_muzzlehider_d	 	= 1;
		rhsusf_acc_m24_muzzlehider_wd	 	= 1;
	};
};
class rhs_western_m14_muzzle_slot: asdg_MuzzleSlot_762
{
	ICON_OVERLAY_DISABLED
	class compatibleItems: compatibleItems
	{
		rhsusf_acc_m14_flashsuppresor = 1;
		rhsusf_acc_aac_m14dcqd_silencer = 1;
		rhsusf_acc_aac_m14dcqd_silencer_d = 1;
		rhsusf_acc_aac_m14dcqd_silencer_wd = 1;
	};
};
//Lasers/Lights
//top & side rail
class rhs_western_rifle_laser_slot_top: asdg_FrontSideRail 
{
	ICON_OVERLAY_DISABLED
};
//only side rail
class rhs_western_rifle_laser_slot: rhs_western_rifle_laser_slot_top
{
	ICON_OVERLAY_DISABLED
	class compatibleItems: compatibleItems
	{
		//acc_flashlight=1;
		//acc_pointer_IR=1;

		// RHS
		//rhsusf_acc_anpeq15A=1;

		rhsusf_acc_anpeq15=0;
		rhsusf_acc_anpeq15_top=0;
		//rhsusf_acc_anpeq15side=1;
		rhsusf_acc_anpeq15_light=0;

		rhsusf_acc_anpeq15_bk=0;
		rhsusf_acc_anpeq15_bk_top=0;
		//rhsusf_acc_anpeq15side_bk=1;
		rhsusf_acc_anpeq15_bk_light=0;

		rhsusf_acc_anpeq15_wmx=0;
		rhsusf_acc_anpeq15_wmx_light=0;

		rhsusf_acc_anpeq16a_top=0;
		rhsusf_acc_anpeq16a_light_top=0;
		rhsusf_acc_anpeq16a_top_h=0;
		rhsusf_acc_anpeq16a_light_top_h=0;
	};
};
class rhs_western_pistol_laser_slot: asdg_PistolUnderRail {};

//US attachments for AFRF slots
class rhs_russian_rifle_scopes_slot: asdg_OpticSideRail_AKSVD
{
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "$STR_A3_CowsSlot0";
};
//AK handguard top rail with receiver side rail
class rhs_russian_rifle_scopes_slot_npz: rhs_russian_rifle_scopes_slot
{
	class compatibleItems: compatibleItems
	{
		rhsusf_acc_T1_low_fwd = 1;
		rhsusf_acc_T1_low_fwd_ak = 1;

		rhsusf_acc_RM05_fwd=1;
		rhsusf_acc_RM05_fwd_ak=1;
		rhsusf_acc_mrds_fwd = 1;
		rhsusf_acc_mrds_fwd_ak = 1;
		rhsusf_acc_mrds_fwd_c = 1;
		rhsusf_acc_mrds_fwd_c_ak = 1;
	};
};
//AK handguard top rail only
class rhs_picattinny_russian_handguard_scopes_slot
{
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "$STR_A3_CowsSlot0";
	class compatibleItems
	{
		rhsusf_acc_T1_low_fwd = 1;
		rhsusf_acc_T1_low_fwd_ak = 1;

		rhsusf_acc_RM05_fwd=1;
		rhsusf_acc_RM05_fwd_ak=1;
		rhsusf_acc_mrds_fwd = 1;
		rhsusf_acc_mrds_fwd_ak = 1;
		rhsusf_acc_mrds_fwd_c = 1;
		rhsusf_acc_mrds_fwd_c_ak = 1;
	};
};

//this one is now used only to get data to russian virtual ammobox
//expect proper script to get from new array one day
class rhs_western_rifle_scopes_slot: CowsSlot
{
	ICON_OVERLAY_DISABLED
	compatibleItems[] =
	{
		"rhsusf_acc_LEUPOLDMK4",
		"rhsusf_acc_LEUPOLDMK4_d",
		"rhsusf_acc_LEUPOLDMK4_wd",
		"rhsusf_acc_LEUPOLDMK4_2",
		"rhsusf_acc_LEUPOLDMK4_2_d",
		"rhsusf_acc_EOTECH",
		"rhsusf_acc_eotech_552",
		"rhsusf_acc_eotech_552_d",
		"rhsusf_acc_eotech_552_wd",
		"rhsusf_acc_M2A1",
		"rhsusf_acc_compm4",
		"rhsusf_acc_T1_high",
		"rhsusf_acc_T1_low",
		"rhsusf_acc_RX01",
		"rhsusf_acc_RX01_NoFilter",
		"rhsusf_acc_ELCAN",
		"rhsusf_acc_ELCAN_PIP",
		"rhsusf_acc_ACOG",
		"rhsusf_acc_ACOG2",
		"rhsusf_acc_ACOG3",
		"rhsusf_acc_ACOG_USMC",
		"rhsusf_acc_ACOG2_USMC",
		"rhsusf_acc_ACOG3_USMC",
		"rhsusf_acc_ACOG_PIP",
		"rhsusf_acc_su230",
		"rhsusf_acc_su230_mrds",
		"rhsusf_acc_su230a",
		"rhsusf_acc_su230a_mrds",
		"rhsusf_acc_su230_c",
		"rhsusf_acc_su230_mrds_c",
		"rhsusf_acc_su230a_c",
		"rhsusf_acc_su230a_mrds_c",
		"rhsusf_acc_su230_3d",
		"rhsusf_acc_su230_mrds_3d",
		"rhsusf_acc_su230a_3d",
		"rhsusf_acc_su230a_mrds_3d",
		"rhsusf_acc_su230_c_3d",
		"rhsusf_acc_su230_mrds_c_3d",
		"rhsusf_acc_su230a_c_3d",
		"rhsusf_acc_su230a_mrds_c_3d",
		"rhsusf_acc_eotech_xps3",

		"rhsusf_acc_SpecterDR",
		"rhsusf_acc_SpecterDR_3d",
		"rhsusf_acc_SpecterDR",
		"rhsusf_acc_SpecterDR_3d",
		"rhsusf_acc_SpecterDR_A",
		"rhsusf_acc_SpecterDR_A_3d",
		"rhsusf_acc_SpecterDR_CX_3D",
		"rhsusf_acc_SpecterDR_D",
		"rhsusf_acc_SpecterDR_OD",
		"rhsusf_acc_SpecterDR_D_3D",
		"rhsusf_acc_SpecterDR_OD_3D"
	};
};

#include "debugSlots.hpp"
#include "rhs_bisRails.hpp"