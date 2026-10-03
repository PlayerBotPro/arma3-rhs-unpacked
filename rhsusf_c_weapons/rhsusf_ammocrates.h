	class Box_NATO_Wps_F;

//- WEAPONS

	class rhsusf_weapon_crate: Box_NATO_Wps_F
	{
		dlc = "RHS_USAF";

		displayName = "RHSUSF Weapons Crate";
		scope = 2;
		model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";

		// TODO: change icon
		icon = "iconCrateLarge";

		transportMaxWeapons = 200;
		transportMaxMagazines = 1000;

		class TransportWeapons
		{
			//- handguns
			weap_xx(rhsusf_weap_m1911a1,10);
			weap_xx(rhsusf_weap_glock17g4,10);
			weap_xx(rhsusf_weap_m9,10);

			//- M4
			weap_xx(rhs_weap_m4,10);
			weap_xx(rhs_weap_m4_carryhandle,10);
			weap_xx(rhs_weap_m4_m203,10);
			weap_xx(rhs_weap_m4_m320,10);
			//- M4A1
			weap_xx(rhs_weap_m4a1,10);
			weap_xx(rhs_weap_m4a1_m203,10);
			weap_xx(rhs_weap_m4a1_m203s,10);
			weap_xx(rhs_weap_m4a1_m320,10);
			weap_xx(rhs_weap_m4a1_carryhandle,10);
			weap_xx(rhs_weap_m4a1_carryhandle_m203,10);
			weap_xx(rhs_weap_m4a1_d,10);
			weap_xx(rhs_weap_m4a1_d_mstock,10);
			weap_xx(rhs_weap_m4a1_m203s_d,10);
			weap_xx(rhs_weap_m4a1_wd,10);
			weap_xx(rhs_weap_m4a1_wd_mstock,10);
			weap_xx(rhs_weap_m4a1_m203s_wd,10);

			//- HK416
			weap_xx(rhs_weap_hk416d10,10);
			weap_xx(rhs_weap_hk416d10_m320,10);
			weap_xx(rhs_weap_hk416d10_LMT,10);
			weap_xx(rhs_weap_hk416d10_LMT_D,10);
			weap_xx(rhs_weap_hk416d10_LMT_WD,10);
			weap_xx(rhs_weap_hk416d145,10);
			weap_xx(rhs_weap_hk416d145_m320,10);
			weap_xx(rhs_weap_hk416d145_d,10);
			weap_xx(rhs_weap_hk416d145_d_2,10);
			weap_xx(rhs_weap_hk416d145_wd,10);
			weap_xx(rhs_weap_hk416d145_wd_2,10);

			//- M27
			weap_xx(rhs_weap_m27iar,10);

			//- M16A4
			weap_xx(rhs_weap_m16a4,10);
			weap_xx(rhs_weap_m16a4_carryhandle,10);
			weap_xx(rhs_weap_m16a4_carryhandle_M203,10);
			weap_xx(rhs_weap_m16a4_imod,10);
			weap_xx(rhs_weap_m16a4_imod_M203,10);

			//- M249
			weap_xx(rhs_weap_m249_pip,10);
			weap_xx(rhs_weap_m249_pip_ris,10);
			weap_xx(rhs_weap_m249_pip_S,10);
			weap_xx(rhs_weap_m249_pip_S_para,10);
			weap_xx(rhs_weap_m249_pip_L,10);
			weap_xx(rhs_weap_m249_pip_L_para,10);
			weap_xx(rhs_weap_m249_light_S,10);
			weap_xx(rhs_weap_m249_light_L,10);

			//- M240
			weap_xx(rhs_weap_m240B,10);
			weap_xx(rhs_weap_m240G,10);

			//- M14
			weap_xx(rhs_weap_m14ebrri,10);

			//- SR-25
			weap_xx(rhs_weap_sr25,10);
			weap_xx(rhs_weap_sr25_ec,10);

			//- SCAR
			weap_xx(rhs_weap_mk17_CQC,10);
			weap_xx(rhs_weap_mk17_STD,10);
			weap_xx(rhs_weap_mk17_LB,10);

			//- M24 SWS
			weap_xx(rhs_weap_m24sws,10);
			weap_xx(rhs_weap_m24sws_wd,10);
			weap_xx(rhs_weap_m24sws_d,10);

			//- M40A5
			weap_xx(rhs_weap_m40a5,10);
			weap_xx(rhs_weap_m40a5_d,10);
			weap_xx(rhs_weap_m40a5_wd,10);

			//- M2010
			weap_xx(rhs_weap_XM2010,10);
			weap_xx(rhs_weap_XM2010_d,10);
			weap_xx(rhs_weap_XM2010_wd,10);
			weap_xx(rhs_weap_XM2010_sa,10);

			//- M107
			weap_xx(rhs_weap_M107,10);
			weap_xx(rhs_weap_M107_w,10);
			weap_xx(rhs_weap_M107_d,10);

			//- M590
			weap_xx(rhs_weap_M590_5RD,10);
			weap_xx(rhs_weap_M590_8RD,10);

			//- MP7
			weap_xx(rhsusf_weap_MP7A2,10);
			weap_xx(rhsusf_weap_MP7A2_winter,10);
			weap_xx(rhsusf_weap_MP7A2_desert,10);
			weap_xx(rhsusf_weap_MP7A2_aor1,10);
		};
		class TransportMagazines
		{
			//- M1911 mag
			mag_xx(rhsusf_mag_7x45acp_MHP,20);

			//- Glock mag
			mag_xx(rhsusf_mag_17Rnd_9x19_JHP,20);
			mag_xx(rhsusf_mag_17Rnd_9x19_FMJ,20);

			//- M9
			mag_xx(rhsusf_mag_15Rnd_9x19_JHP,20);
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,20);

			//- shotgun mag
			mag_xx(rhsusf_5Rnd_00Buck,20);
			mag_xx(rhsusf_8Rnd_00Buck,20);
			mag_xx(rhsusf_5Rnd_Slug,20);
			mag_xx(rhsusf_8Rnd_Slug,20);
			mag_xx(rhsusf_5Rnd_HE,20);
			mag_xx(rhsusf_8Rnd_HE,20);
			mag_xx(rhsusf_5Rnd_FRAG,20);
			mag_xx(rhsusf_8Rnd_FRAG,20);

			//- MP7 mag
			mag_xx(rhsusf_mag_40Rnd_46x30_FMJ,20);
			mag_xx(rhsusf_mag_40Rnd_46x30_JHP,20);
			mag_xx(rhsusf_mag_40Rnd_46x30_AP,20);

			//- AR Series
			//Stanag
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk318_Stanag,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk262_Stanag,20);
			mag_xx(rhs_mag_30Rnd_556x45_M200_Stanag,20);
			//PMAG-Black
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_PMAG,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk318_PMAG,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk262_PMAG,20);
			//PMAG-Tan
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_PMAG_Tan,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan,20);
			//C-Mag
			mag_xx(rhs_mag_100Rnd_556x45_M855A1_cmag,5);
			mag_xx(rhs_mag_100Rnd_556x45_M855A1_cmag_mixed,5);
			mag_xx(rhs_mag_100Rnd_556x45_M855_cmag,5);
			mag_xx(rhs_mag_100Rnd_556x45_M855_cmag_mixed,5);
			mag_xx(rhs_mag_100Rnd_556x45_Mk318_cmag,5);
			mag_xx(rhs_mag_100Rnd_556x45_Mk262_cmag,5);

			//- M249 mag
			//Plastic box
			mag_xx(rhsusf_200Rnd_556x45_box,20);
			mag_xx(rhsusf_200rnd_556x45_mixed_box,20);
			mag_xx(rhsusf_200rnd_556x45_M855_box,20);
			mag_xx(rhsusf_200rnd_556x45_M855_mixed_box,20);
			//Soft Pack 200
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,20);
			mag_xx(rhsusf_200Rnd_556x45_mixed_soft_pouch,20);
			mag_xx(rhsusf_200Rnd_556x45_M855_soft_pouch,20);
			mag_xx(rhsusf_200Rnd_556x45_M855_mixed_soft_pouch,20);
			//Soft Pack 100
			mag_xx(rhsusf_100Rnd_556x45_soft_pouch,20);
			mag_xx(rhsusf_100Rnd_556x45_mixed_soft_pouch,20);
			mag_xx(rhsusf_100Rnd_556x45_M855_soft_pouch,20);
			mag_xx(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,20);
			mag_xx(rhsusf_100Rnd_556x45_M200_soft_pouch,20);

			//- M240 mag
			mag_xx(rhsusf_50Rnd_762x51,20);
			mag_xx(rhsusf_50Rnd_762x51_m61_ap,20);
			mag_xx(rhsusf_50Rnd_762x51_m62_tracer,20);
			mag_xx(rhsusf_50Rnd_762x51_m80a1epr,20);
			mag_xx(rhsusf_50Rnd_762x51_m82_blank,20);

			mag_xx(rhsusf_100Rnd_762x51,20);
			mag_xx(rhsusf_100Rnd_762x51_m61_ap,20);
			mag_xx(rhsusf_100Rnd_762x51_m62_tracer,20);
			mag_xx(rhsusf_100Rnd_762x51_m80a1epr,20);
			mag_xx(rhsusf_100Rnd_762x51_m82_blank,20);

			// M14 mag
			mag_xx(rhsusf_20Rnd_762x51_m118_special_Mag,20);
			mag_xx(rhsusf_20Rnd_762x51_m993_Mag,20);
			mag_xx(rhsusf_20Rnd_762x51_m62_Mag,20);

			//- SR-25
			mag_xx(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,20);
			mag_xx(rhsusf_20Rnd_762x51_SR25_m993_Mag,20);
			mag_xx(rhsusf_20Rnd_762x51_SR25_m62_Mag,20);

			//- M24 SWS
			mag_xx(rhsusf_5Rnd_762x51_m118_special_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_m993_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_m62_Mag,20);

			//- M40A5
			mag_xx(rhsusf_10Rnd_762x51_m118_special_Mag,20);
			mag_xx(rhsusf_10Rnd_762x51_m993_Mag,20);
			mag_xx(rhsusf_10Rnd_762x51_m62_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_AICS_m993_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_AICS_m62_Mag,20);

			//- M2010 mag
			mag_xx(rhsusf_5Rnd_300winmag_xm2010,20);

			//- M107 mag
			mag_xx(rhsusf_mag_10Rnd_STD_50BMG_M33,20);
			mag_xx(rhsusf_mag_10Rnd_STD_50BMG_mk211,20);

			// - SCAR
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m61_ap,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m62_tracer,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m80_ball,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m80a1_epr,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m118_special,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_mk316_special,20);
			
			//- 40mm grenades
			mag_xx(rhs_mag_M441_HE,20);
			mag_xx(rhs_mag_M433_HEDP,20);
			mag_xx(rhs_mag_M397_HET,20);
			mag_xx(rhs_mag_M781_Practice,20);
			mag_xx(rhs_mag_M4009,20);
			//flares
			mag_xx(rhs_mag_m576,20);
			mag_xx(rhs_mag_M583A1_white,20);
			mag_xx(rhs_mag_M661_green,20);
			mag_xx(rhs_mag_M662_red,20);
			mag_xx(rhs_mag_M585_white_cluster,20);
			//smoke?
			mag_xx(rhs_mag_M713_red,20);
			mag_xx(rhs_mag_M714_white,20);
			mag_xx(rhs_mag_M715_green,20);
			mag_xx(rhs_mag_M716_yellow,20);
			//M32
			mag_xx(rhsusf_mag_6Rnd_M433_HEDP,20);
			mag_xx(rhsusf_mag_6Rnd_M397_HET,20);
			mag_xx(rhsusf_mag_6Rnd_M781_Practice,20);
			mag_xx(rhsusf_mag_6Rnd_M576_Buckshot,20);
			mag_xx(rhsusf_mag_6Rnd_M441_HE,20);
		};
		class TransportItems
		{
			// Scopes

			// EOTech
			item_xx(rhsusf_acc_EOTECH,10);
			item_xx(rhsusf_acc_eotech_552,10);
			item_xx(rhsusf_acc_eotech_552_d,10);
			item_xx(rhsusf_acc_eotech_552_wd,10);
			item_xx(rhsusf_acc_eotech_xps3,10);
			item_xx(rhsusf_acc_g33_xps3,10);
			item_xx(rhsusf_acc_g33_xps3_tan,10);

			// Aimpoint
			item_xx(rhsusf_acc_compm4,10);
			item_xx(rhsusf_acc_T1_high,10);
			item_xx(rhsusf_acc_T1_low,10);
			item_xx(rhsusf_acc_g33_t1,10);

			//  Trijicon TA31
			item_xx(rhsusf_acc_ACOG,10);
			item_xx(rhsusf_acc_ACOG_USMC,10);
			item_xx(rhsusf_acc_ACOG_d,10);
			item_xx(rhsusf_acc_ACOG_wd,10);

			// Trijicon TA648
			item_xx(rhsusf_acc_ACOG_MDO,10);

			// Elcan M145
			item_xx(rhsusf_acc_ELCAN,10);
			item_xx(rhsusf_acc_ELCAN_ard,10);

			// Elcan SpecterDR
			item_xx(rhsusf_acc_su230,10);
			item_xx(rhsusf_acc_su230_mrds,10);
			item_xx(rhsusf_acc_su230a,10);
			item_xx(rhsusf_acc_su230a_mrds,10);
			item_xx(rhsusf_acc_su230_c,10);
			item_xx(rhsusf_acc_su230_mrds_c,10);
			item_xx(rhsusf_acc_su230a_c,10);
			item_xx(rhsusf_acc_su230a_mrds_c,10);

			// Leupold Mk4
			item_xx(rhsusf_acc_LEUPOLDMK4,10);
			item_xx(rhsusf_acc_LEUPOLDMK4_d,10);
			item_xx(rhsusf_acc_LEUPOLDMK4_wd,10);
			item_xx(rhsusf_acc_LEUPOLDMK4_2,10);
			item_xx(rhsusf_acc_LEUPOLDMK4_2_MRDS,10);
			item_xx(rhsusf_acc_LEUPOLDMK4_2_d,10);

			// M8541A+M8541A
			item_xx(rhsusf_acc_M8541,10);
			item_xx(rhsusf_acc_M8541_mrds,10);
			item_xx(rhsusf_acc_M8541_low,10);
			item_xx(rhsusf_acc_M8541_low_d,10);
			item_xx(rhsusf_acc_M8541_low_wd,10);

			item_xx(rhsusf_acc_premier,10);
			item_xx(rhsusf_acc_premier_mrds,10);
			item_xx(rhsusf_acc_premier_low,10);
			item_xx(rhsusf_acc_premier_anpvs27,10);

			// Nightforce
			item_xx(rhsusf_acc_nxs_3515x50_md,10);
			item_xx(rhsusf_acc_nxs_3515x50f1_md,10);
			item_xx(rhsusf_acc_nxs_3515x50f1_md_sun,10);
			item_xx(rhsusf_acc_nxs_3515x50f1_h58,10);
			item_xx(rhsusf_acc_nxs_3515x50f1_h58_sun,10);
			item_xx(rhsusf_acc_nxs_5522x56_md,10);
			item_xx(rhsusf_acc_nxs_5522x56_md_sun,10);

			item_xx(rhsusf_acc_anpas13gv1,10);

			item_xx(rhsusf_acc_M2A1,10);

			// Suppressors
			item_xx(rhsusf_acc_nt4_black,10);
			item_xx(rhsusf_acc_nt4_tan,10);
			item_xx(rhsusf_acc_rotex5_grey,10);
			item_xx(rhsusf_acc_rotex5_tan,10);
			item_xx(rhsusf_acc_M24_silencer_black,10);
			item_xx(rhsusf_acc_M24_silencer_d,10);
			item_xx(rhsusf_acc_M24_silencer_wd,10);
			item_xx(rhsusf_acc_M24_muzzlehider_black,10);
			item_xx(rhsusf_acc_M24_muzzlehider_d,10);
			item_xx(rhsusf_acc_M24_muzzlehider_wd,10);
			item_xx(rhsusf_acc_M2010S,10);
			item_xx(rhsusf_acc_M2010S_d,10);
			item_xx(rhsusf_acc_M2010S_wd,10);
			item_xx(rhsusf_acc_M2010S_sa,10);
			item_xx(rhsusf_acc_SR25S,10);
			item_xx(rhsusf_acc_SR25S_d,10);
			item_xx(rhsusf_acc_SR25S_wd,10);
			item_xx(rhsusf_acc_aac_scarh_silencer,10);
			item_xx(rhsusf_acc_aac_762sd_silencer,10);
			item_xx(rhsusf_acc_aac_762sdn6_silencer,10);
			item_xx(rhsusf_acc_rotex_mp7,10);
			item_xx(rhsusf_acc_rotex_mp7_winter,10);
			item_xx(rhsusf_acc_rotex_mp7_desert,10);
			item_xx(rhsusf_acc_rotex_mp7_aor1,10);
			// Muzzle
			item_xx(rhsusf_acc_SF3P556,10);
			item_xx(rhsusf_acc_SFMB556,10);
			item_xx(rhsusf_acc_ARDEC_M240,10);

			// Accessories
			item_xx(rhsusf_acc_M952V,10);
			item_xx(rhsusf_acc_wmx,10);
			item_xx(rhsusf_acc_wmx_bk,10);

			item_xx(rhsusf_acc_anpeq15,10);
			item_xx(rhsusf_acc_anpeq15_light,10);
			item_xx(rhsusf_acc_anpeq15side,10);
			item_xx(rhsusf_acc_anpeq15A,10);

			item_xx(rhsusf_acc_anpeq15_wmx,10);

			item_xx(rhsusf_acc_anpeq16a,10);
			item_xx(rhsusf_acc_anpeq16a_light,10);
			item_xx(rhsusf_acc_anpeq16a_top,10);
			item_xx(rhsusf_acc_anpeq16a_light_top,10);

			// Bipods / Grips
			item_xx(rhsusf_acc_harris_bipod,10);
			item_xx(rhsusf_acc_harris_swivel,10);
			item_xx(rhsusf_acc_saw_bipod,10);
			item_xx(rhsusf_acc_saw_lw_bipod,10);
			item_xx(rhsusf_acc_grip1,10);
			item_xx(rhsusf_acc_grip2,10);
			item_xx(rhsusf_acc_grip2_tan,10);
			item_xx(rhsusf_acc_grip2_wd,10);
			item_xx(rhsusf_acc_grip3,10);
			item_xx(rhsusf_acc_grip3_tan,10);
			item_xx(rhsusf_acc_grip4,10);
			item_xx(rhsusf_acc_grip4_bipod,10);
			item_xx(rhsusf_acc_kac_grip,10);
			item_xx(rhsusf_acc_kac_grip_saw_bipod,10);
			item_xx(rhsusf_acc_grip_m203_blk,10);
			item_xx(rhsusf_acc_grip_m203_d,10);
			item_xx(rhsusf_acc_grip_m203_wd,10);
		};
	};

// - LAUNCHERS

	class rhsusf_launcher_crate : Box_NATO_Wps_F
	{
		dlc = "RHS_USAF";

		displayName = "RHSUSF Launchers Crate";
		scope = 2;
		model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";

		// TODO: change icon
		icon = "iconCrateLarge";

		transportMaxWeapons = 40;
		transportMaxMagazines = 20;

		class TransportWeapons
		{
			weap_xx(rhs_weap_M320,5);
			weap_xx(rhs_weap_m32,5);
			weap_xx(rhs_weap_m72a7,5);
			weap_xx(rhs_weap_M136,5);
			weap_xx(rhs_weap_M136_hedp,5);
			weap_xx(rhs_weap_M136_hp,5);
			weap_xx(rhs_weap_fim92,5);
			weap_xx(rhs_weap_fgm148,5);
			weap_xx(rhs_weap_smaw,5);
			weap_xx(rhs_weap_smaw_green,5);
			weap_xx(rhs_weap_maaws,5);
		};
		class TransportMagazines
		{
			mag_xx(rhs_m72a7_mag,10);
			mag_xx(rhs_m136_mag,10);
			mag_xx(rhs_m136_hedp_mag,10);
			mag_xx(rhs_m136_hp_mag,10);
			mag_xx(rhs_fim92_mag,10);
			mag_xx(rhs_fgm148_magazine_AT,10);
			mag_xx(rhs_mag_smaw_HEAA,10);
			mag_xx(rhs_mag_smaw_HEDP,10);
			mag_xx(rhs_mag_maaws_HEAT,10);
			mag_xx(rhs_mag_maaws_HEDP,10);
			mag_xx(rhs_mag_maaws_HE,10);

			//- 40mm grenades
			mag_xx(rhs_mag_M441_HE,20);
			mag_xx(rhs_mag_M433_HEDP,20);
			mag_xx(rhs_mag_M397_HET,20);
			mag_xx(rhs_mag_M4009,20);
			mag_xx(rhs_mag_M781_Practice,20);
			mag_xx(rhs_mag_m576,20);
			mag_xx(rhs_mag_M583A1_white,20);
			mag_xx(rhs_mag_M585_white_cluster,20);
			mag_xx(rhs_mag_M661_green,20);
			mag_xx(rhs_mag_M662_red,20);
			mag_xx(rhs_mag_M713_red,20);
			mag_xx(rhs_mag_M714_white,20);
			mag_xx(rhs_mag_M715_green,20);
			mag_xx(rhs_mag_M716_yellow,20);
			mag_xx(rhsusf_mag_6Rnd_M441_HE,20);
			mag_xx(rhsusf_mag_6Rnd_M433_HEDP,20);
			mag_xx(rhsusf_mag_6Rnd_M397_HET,20);
			mag_xx(rhsusf_mag_6Rnd_M576_Buckshot,20);
			mag_xx(rhsusf_mag_6Rnd_M781_Practice,20);
		};
		class TransportItems {};
	};

//- SPECIAL WEAPONS

	class rhsusf_spec_weapons_crate : Box_NATO_Wps_F
	{
		dlc = "RHS_USAF";

		displayName = "RHSUSF Special Weapons Crate";
		scope = 2;
		model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";

		// TODO: change icon
		icon = "iconCrateLarge";

		transportMaxWeapons = 40;
		transportMaxMagazines = 20;


		class TransportWeapons {};

		class TransportMagazines
		{
			mag_xx(rhs_mine_M19_mag,10);
			mag_xx(rhsusf_mine_m14_mag,10);
		};

		class TransportItems {};

		class TransportBackpacks
		{
			bag_xx(RHS_M2_Gun_Bag,2);
			bag_xx(RHS_M2_Tripod_Bag,2);
			bag_xx(RHS_M2_MiniTripod_Bag,2);
			bag_xx(RHS_Mk19_Gun_Bag,2);
			bag_xx(RHS_Mk19_Tripod_Bag,2);
			bag_xx(rhsusf_assault_eagleaiii_coy,2);
		};

	};

//- EQUIPMENT

	class rhsusf_gear_crate : Box_NATO_Wps_F
	{
		dlc = "RHS_USAF";

		displayName = "RHSUSF Equipment Crate";
		scope = 2;
		model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";

		// TODO: change icon
		icon = "iconCrateLarge";

		transportMaxWeapons = 40;
		transportMaxMagazines = 20;


		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems
		{
			item_xx(FirstAidKit,20);
			item_xx(Medikit,5);
			item_xx(Toolkit,5);
			item_xx(ItemMap,5);
			item_xx(ItemCompass,5);
			item_xx(ItemWatch,5);
			item_xx(ItemGPS,5);
			item_xx(Binocular,5);
			item_xx(lerca_1200_black,5);
			item_xx(lerca_1200_tan,5);
			item_xx(rhsusf_lrf_vector21,5);
			item_xx(Leupold_Mk4,5);
			item_xx(rhsusf_ANPVS_14,5);
			item_xx(rhsusf_ANPVS_15,5);
			item_xx(rhs_googles_black,5);
			item_xx(rhs_googles_clear,5);
			item_xx(rhs_googles_yellow,5);
			item_xx(rhs_googles_orange,5);
			item_xx(MineDetector,5);
		};
		class TransportBackpacks
		{
			bag_xx(rhsusf_falconii,4);
			bag_xx(rhsusf_assault_eagleaiii_ucp,4);
			bag_xx(rhsusf_assault_eagleaiii_ocp,4);
			bag_xx(rhsusf_assault_eagleaiii_coy,4);
		};
	};

//- AMMO

	class rhsusf_mags_crate: Box_NATO_Wps_F
	{
		dlc = "RHS_USAF";

		displayName = "RHSUSF Ammo Crate";
		scope = 2;
		model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";

		// TODO: change icon
		icon = "iconCrateLarge";

		transportMaxWeapons = 10;
		transportMaxMagazines = 200;

		class TransportWeapons {};
		class TransportMagazines
		{
			//- M1911 mag
			mag_xx(rhsusf_mag_7x45acp_MHP,20);

			//- Glock mag
			mag_xx(rhsusf_mag_17Rnd_9x19_JHP,20);
			mag_xx(rhsusf_mag_17Rnd_9x19_FMJ,20);

			//- M9
			mag_xx(rhsusf_mag_15Rnd_9x19_JHP,20);
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,20);

			//- shotgun mag
			mag_xx(rhsusf_5Rnd_00Buck,20);
			mag_xx(rhsusf_8Rnd_00Buck,20);
			mag_xx(rhsusf_5Rnd_Slug,20);
			mag_xx(rhsusf_8Rnd_Slug,20);
			mag_xx(rhsusf_5Rnd_HE,20);
			mag_xx(rhsusf_8Rnd_HE,20);
			mag_xx(rhsusf_5Rnd_FRAG,20);
			mag_xx(rhsusf_8Rnd_FRAG,20);

			//- MP7 mag
			mag_xx(rhsusf_mag_40Rnd_46x30_FMJ,20);
			mag_xx(rhsusf_mag_40Rnd_46x30_JHP,20);
			mag_xx(rhsusf_mag_40Rnd_46x30_AP,20);

			//- AR Series
			//Stanag
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk318_Stanag,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk262_Stanag,20);
			mag_xx(rhs_mag_30Rnd_556x45_M200_Stanag,20);
			//PMAG-Black
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_PMAG,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk318_PMAG,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk262_PMAG,20);
			//PMAG-Tan
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_PMAG_Tan,20);
			mag_xx(rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan,20);
			mag_xx(rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan,20);
			//C-Mag
			mag_xx(rhs_mag_100Rnd_556x45_M855A1_cmag,5);
			mag_xx(rhs_mag_100Rnd_556x45_M855A1_cmag_mixed,5);
			mag_xx(rhs_mag_100Rnd_556x45_M855_cmag,5);
			mag_xx(rhs_mag_100Rnd_556x45_M855_cmag_mixed,5);
			mag_xx(rhs_mag_100Rnd_556x45_Mk318_cmag,5);
			mag_xx(rhs_mag_100Rnd_556x45_Mk262_cmag,5);

			//- M249 mag
			//Plastic box
			mag_xx(rhsusf_200Rnd_556x45_box,20);
			mag_xx(rhsusf_200rnd_556x45_mixed_box,20);
			mag_xx(rhsusf_200rnd_556x45_M855_box,20);
			mag_xx(rhsusf_200rnd_556x45_M855_mixed_box,20);
			//Soft Pack 200
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,20);
			mag_xx(rhsusf_200Rnd_556x45_mixed_soft_pouch,20);
			mag_xx(rhsusf_200Rnd_556x45_M855_soft_pouch,20);
			mag_xx(rhsusf_200Rnd_556x45_M855_mixed_soft_pouch,20);
			//Soft Pack 100
			mag_xx(rhsusf_100Rnd_556x45_soft_pouch,20);
			mag_xx(rhsusf_100Rnd_556x45_mixed_soft_pouch,20);
			mag_xx(rhsusf_100Rnd_556x45_M855_soft_pouch,20);
			mag_xx(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,20);
			mag_xx(rhsusf_100Rnd_556x45_M200_soft_pouch,20);

			//- M240 mag
			mag_xx(rhsusf_50Rnd_762x51,20);
			mag_xx(rhsusf_50Rnd_762x51_m61_ap,20);
			mag_xx(rhsusf_50Rnd_762x51_m62_tracer,20);
			mag_xx(rhsusf_50Rnd_762x51_m80a1epr,20);
			mag_xx(rhsusf_50Rnd_762x51_m82_blank,20);

			mag_xx(rhsusf_100Rnd_762x51,20);
			mag_xx(rhsusf_100Rnd_762x51_m61_ap,20);
			mag_xx(rhsusf_100Rnd_762x51_m62_tracer,20);
			mag_xx(rhsusf_100Rnd_762x51_m80a1epr,20);
			mag_xx(rhsusf_100Rnd_762x51_m82_blank,20);

			// M14 mag
			mag_xx(rhsusf_20Rnd_762x51_m118_special_Mag,20);
			mag_xx(rhsusf_20Rnd_762x51_m993_Mag,20);
			mag_xx(rhsusf_20Rnd_762x51_m62_Mag,20);

			//- SR-25
			mag_xx(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,20);
			mag_xx(rhsusf_20Rnd_762x51_SR25_m993_Mag,20);
			mag_xx(rhsusf_20Rnd_762x51_SR25_m62_Mag,20);

			//- M24 SWS
			mag_xx(rhsusf_5Rnd_762x51_m118_special_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_m993_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_m62_Mag,20);

			//- M40A5
			mag_xx(rhsusf_10Rnd_762x51_m118_special_Mag,20);
			mag_xx(rhsusf_10Rnd_762x51_m993_Mag,20);
			mag_xx(rhsusf_10Rnd_762x51_m62_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_AICS_m993_Mag,20);
			mag_xx(rhsusf_5Rnd_762x51_AICS_m62_Mag,20);

			//- M2010 mag
			mag_xx(rhsusf_5Rnd_300winmag_xm2010,20);

			//- M107 mag
			mag_xx(rhsusf_mag_10Rnd_STD_50BMG_M33,20);
			mag_xx(rhsusf_mag_10Rnd_STD_50BMG_mk211,20);

			// - SCAR
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m61_ap,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m62_tracer,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m80_ball,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m80a1_epr,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_m118_special,20);
			mag_xx(rhs_mag_20Rnd_SCAR_762x51_mk316_special,20);

			//- 40mm grenades
			mag_xx(rhs_mag_M441_HE,20);
			mag_xx(rhs_mag_M433_HEDP,20);
			mag_xx(rhs_mag_M397_HET,20);
			mag_xx(rhs_mag_M781_Practice,20);
			mag_xx(rhs_mag_M4009,20);
			//flares
			mag_xx(rhs_mag_m576,20);
			mag_xx(rhs_mag_M583A1_white,20);
			mag_xx(rhs_mag_M585_white_cluster,20);
			mag_xx(rhs_mag_M661_green,20);
			mag_xx(rhs_mag_M662_red,20);
			//smoke?
			mag_xx(rhs_mag_M713_red,20);
			mag_xx(rhs_mag_M714_white,20);
			mag_xx(rhs_mag_M715_green,20);
			mag_xx(rhs_mag_M716_yellow,20);
			//M32
			mag_xx(rhsusf_mag_6Rnd_M433_HEDP,20);
			mag_xx(rhsusf_mag_6Rnd_M397_HET,20);
			mag_xx(rhsusf_mag_6Rnd_M781_Practice,20);
			mag_xx(rhsusf_mag_6Rnd_M576_Buckshot,20);
			mag_xx(rhsusf_mag_6Rnd_M441_HE,20);

			//- Grenades
			mag_xx(rhs_mag_m67,20);
			mag_xx(rhs_mag_mk3a2,20);
			mag_xx(rhs_mag_m69,20);
			mag_xx(rhs_mag_an_m14_th3,20);
			mag_xx(rhs_mag_m7a3_cs,20);
			mag_xx(rhs_mag_mk84,20);
			mag_xx(rhs_mag_an_m8hc,20);
			mag_xx(rhs_mag_m18_green,20);
			mag_xx(rhs_mag_m18_purple,20);
			mag_xx(rhs_mag_m18_red,20);
			mag_xx(rhs_mag_m18_yellow,20);

			//- Chemlights
			mag_xx(Chemlight_green,20);
			mag_xx(Chemlight_red,20);
			mag_xx(Chemlight_yellow,20);
			mag_xx(Chemlight_blue,20);
		};
		class TransportItems {};
	};

//- VIRTUAL

	class rhsusf_weapons_crate: Box_NATO_Wps_F
	{
		dlc = "RHS_USAF";

		displayName = "RHSUSF Weapons Crate (Virtual)";
		scope = 2;
		model = "\rhsusf\addons\rhsusf_weapons2\ammoboxes2\rhsusf_pallet.p3d";

		// TODO: change icon
		icon = "iconCrateLarge";

		transportMaxWeapons = 40;
		transportMaxMagazines = 20;

		/*
			all weapons data is now stored in
			rhs_c_weapons\scripts\virtualAmmoBox.sqf

			please add new weapons/items in that place
		*/

		class EventHandlers
		{
			init = "[_this select 0,0] call rhs_fnc_virtualAmmoBoxUSA;";
		};
		SLX_XEH_DISABLED = 1;

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};

	class Box_NATO_Ammo_F;
	class rhsusf_ammo_crate:  Box_NATO_Ammo_F
	{
		dlc = "RHS_USAF";

		displayName = "RHSUSF Ammo Crate (Virtual)";
		scope = 2;

		// TODO: change icon
		icon = "iconCrateLarge";

		transportMaxWeapons = 40;
		transportMaxMagazines = 20;

		class EventHandlers
		{
			init = "[_this select 0,1] call rhs_fnc_virtualAmmoBoxUSA;";
		};
		SLX_XEH_DISABLED = 1;

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};

	};