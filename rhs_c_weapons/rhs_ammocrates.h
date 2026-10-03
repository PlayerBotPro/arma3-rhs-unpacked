	class EAST_Box_Base;

//- WEAPONS

	class rhs_weapon_crate : EAST_Box_Base
	{
		EdPrev(rhs_weapon_crate)

		displayName = "$STR_RHSAFRF_RHSWEAPONSCRATE_NAME";
		scope = 2;

		model = "rhsafrf\addons\rhs_weapons\crates\rhs_3Ya40_1";
		icon = "iconCrateLarge";

		transportMaxWeapons = 200;
		transportMaxMagazines = 1000;

		AUTHOR_MACRO

		class TransportWeapons
		{
			// Handguns

			weap_xx(rhs_weap_pya,10);
			weap_xx(rhs_weap_makarov_pm,10);
			weap_xx(rhs_weap_pb_6p9,10);

			// AK-74 Family
			//74M
			weap_xx(rhs_weap_ak74m,10);
			weap_xx(rhs_weap_ak74m_fullplum,10);
			weap_xx(rhs_weap_ak74m_camo,10);
			weap_xx(rhs_weap_ak74m_desert,10);
			weap_xx(rhs_weap_ak74m_gp25,10);
			weap_xx(rhs_weap_ak74m_fullplum_gp25,10);
			weap_xx(rhs_weap_ak74m_npz,10);
			weap_xx(rhs_weap_ak74m_fullplum_npz,10);
			weap_xx(rhs_weap_ak74m_camo_npz,10);
			weap_xx(rhs_weap_ak74m_desert_npz,10);
			weap_xx(rhs_weap_ak74m_gp25_npz,10);
			//AKS-74
			weap_xx(rhs_weap_aks74,10);
			weap_xx(rhs_weap_aks74_2,10);
			weap_xx(rhs_weap_aks74n,10);
			weap_xx(rhs_weap_aks74n_gp25,10);
			weap_xx(rhs_weap_aks74_gp25,10);
			weap_xx(rhs_weap_aks74n_2,10);
			//AK-74
			weap_xx(rhs_weap_ak74,10);
			weap_xx(rhs_weap_ak74_gp25,10);
			weap_xx(rhs_weap_ak74n,10);
			weap_xx(rhs_weap_ak74n_npz,10);
			weap_xx(rhs_weap_ak74n_gp25,10);
			weap_xx(rhs_weap_ak74_2,10);
			weap_xx(rhs_weap_ak74n_2,10);
			weap_xx(rhs_weap_ak74n_2_gp25,10);
			weap_xx(rhs_weap_ak74n_2_gp25_npz,10);
			//AKS-74U
			weap_xx(rhs_weap_aks74u,10);
			weap_xx(rhs_weap_aks74un,10);

			//- AKM Family
			weap_xx(rhs_weap_akm,10);
			weap_xx(rhs_weap_akm_gp25,10);
			weap_xx(rhs_weap_akms,10);
			weap_xx(rhs_weap_akms_gp25,10);
			weap_xx(rhs_weap_akmn,10);
			weap_xx(rhs_weap_akmn_npz,10);
			weap_xx(rhs_weap_akmn_gp25,10);

			//- AK-103 Family
			weap_xx(rhs_weap_ak103,10);
			weap_xx(rhs_weap_ak103_npz,10);
			weap_xx(rhs_weap_ak103_1,10);
			weap_xx(rhs_weap_ak103_2,10);

			//- AK-104
			weap_xx(rhs_weap_ak104,10);
			weap_xx(rhs_weap_ak104_npz,10);

			//- AK-105
			weap_xx(rhs_weap_ak105,10);
			weap_xx(rhs_weap_ak105_npz,10);

			//- SVD Family
			weap_xx(rhs_weap_svdp,10);
			weap_xx(rhs_weap_svdp_wd,10);
			weap_xx(rhs_weap_svds,10);
			weap_xx(rhs_weap_svdp_npz,10);
			weap_xx(rhs_weap_svdp_wd_npz,10);
			weap_xx(rhs_weap_svds_npz,10);

			//-T5000
			weap_xx(rhs_weap_t5000,10);

			// AS Val Family
			weap_xx(rhs_weap_asval,10);
			weap_xx(rhs_weap_asval_grip,10);
			weap_xx(rhs_weap_vss,10);
			weap_xx(rhs_weap_vss_grip,10);

			//- PK Family
			weap_xx(rhs_weap_pkm,10);
			weap_xx(rhs_weap_pkp,10);

			//- RPK-74 Family
			weap_xx(rhs_weap_rpk74m,10);
			weap_xx(rhs_weap_rpk74m_npz,10);
		};

		class TransportMagazines
		{
			//- 9mm Mags
			mag_xx(rhs_mag_9x19_17,20);
			mag_xx(rhs_mag_9x18_12_57N181S,20);
			mag_xx(rhs_mag_9x18_8_57N181S,20);

			//- 9mm Subsonic Mags
			mag_xx(rhs_20rnd_9x39mm_SP5,20);
			mag_xx(rhs_20rnd_9x39mm_SP6,20);
			mag_xx(rhs_10rnd_9x39mm_SP5,20);
			mag_xx(rhs_10rnd_9x39mm_SP6,20);

			//- 5.45 Mags
			mag_xx(rhs_30Rnd_545x39_7N6_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N6_green_AK,20);
			mag_xx(rhs_30Rnd_545x39_AK_green,20);
			mag_xx(rhs_30Rnd_545x39_AK_plum_green,20);
			mag_xx(rhs_30Rnd_545x39_7U1_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N6M_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N6M_green_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N6M_plum_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_plum_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_camo_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_desert_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N22_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N22_plum_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N22_camo_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N22_desert_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_2mag_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_2mag_plum_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_2mag_camo_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_2mag_desert_AK,20);
			mag_xx(rhs_45Rnd_545x39_AK,20);
			mag_xx(rhs_45Rnd_545x39_7N6_AK,20);
			mag_xx(rhs_45Rnd_545x39_7N6M_AK,20);
			mag_xx(rhs_45Rnd_545x39_7N10_AK,20);
			mag_xx(rhs_45Rnd_545x39_7N22_AK,20);
			mag_xx(rhs_45Rnd_545x39_AK_green,20);
			mag_xx(rhs_45Rnd_545x39_7U1_AK,20);
			mag_xx(rhs_60Rnd_545x39_7N10_AK,20);
			mag_xx(rhs_60Rnd_545x39_7N22_AK,20);
			mag_xx(rhs_60Rnd_545x39_AK_green,20);
			mag_xx(rhs_60Rnd_545x39_7U1_AK20);

			//- 7.62 Mags
			//AKM
			mag_xx(rhs_30Rnd_762x39mm,20);
			mag_xx(rhs_30Rnd_762x39mm_tracer,20);
			mag_xx(rhs_30Rnd_762x39mm_89,20);
			mag_xx(rhs_30Rnd_762x39mm_U,20);
			mag_xx(rhs_30Rnd_762x39mm_bakelite,20);
			mag_xx(rhs_30Rnd_762x39mm_bakelite_tracer,20);
			mag_xx(rhs_30Rnd_762x39mm_bakelite_89,20);
			mag_xx(rhs_30Rnd_762x39mm_bakelite_U,20);
			mag_xx(rhs_30Rnd_762x39mm_polymer,20);
			mag_xx(rhs_30Rnd_762x39mm_polymer_tracer,20);
			mag_xx(rhs_30Rnd_762x39mm_polymer_89,20);
			mag_xx(rhs_30Rnd_762x39mm_polymer_U,20);
			mag_xx(rhs_10Rnd_762x39mm,20);
			mag_xx(rhs_10Rnd_762x39mm_tracer,20);
			mag_xx(rhs_10Rnd_762x39mm_89,20);
			mag_xx(rhs_10Rnd_762x39mm_U,20);
			mag_xx(rhs_75Rnd_762x39mm,5);
			mag_xx(rhs_75Rnd_762x39mm_tracer,5);
			mag_xx(rhs_75Rnd_762x39mm_89,5);

			//SVD
			mag_xx(rhs_10Rnd_762x54mmR_7N1,20);
			mag_xx(rhs_10Rnd_762x54mmR_7N14,20);

			//T5000
			mag_xx(rhs_5Rnd_338lapua_t5000,20);

			//PKM
			mag_xx(rhs_100Rnd_762x54mmR,20);
			mag_xx(rhs_100Rnd_762x54mmR_green,20);
			mag_xx(rhs_100Rnd_762x54mmR_7n13,20);
			mag_xx(rhs_100Rnd_762x54mmR_7n26,20);
			mag_xx(rhs_100Rnd_762x54mmR_7bz3,20);

			//- VOG Grenades
			mag_xx(rhs_VOG25,20);
			mag_xx(rhs_VOG25p,20);
			mag_xx(rhs_vg40tb,20);
			mag_xx(rhs_vg40sz,20);
			mag_xx(rhs_vg40md,20);
			mag_xx(rhs_vg40op_white,20);
			mag_xx(rhs_vg40op_green,20);
			mag_xx(rhs_vg40op_red,20);
			mag_xx(rhs_GRD40_white,20);
			mag_xx(rhs_GRD40_green,20);
			mag_xx(rhs_GRD40_red,20);
			mag_xx(rhs_GDM40,20);
		};

		class TransportItems
		{
			// Scopes
			item_xx(rhs_acc_pso1m2,10);
			item_xx(rhs_acc_1pn93_1,10);
			item_xx(rhs_acc_1pn93_2,10);
			item_xx(rhs_acc_pkas,10);
			item_xx(rhs_acc_pgo7v,10);
			item_xx(rhs_acc_1p29,10);
			item_xx(rhs_acc_1p78,10);
			item_xx(rhs_acc_1p63,10);
			item_xx(rhs_acc_okp7_dovetail,10);
			item_xx(rhs_acc_okp7_picatinny,10);
			item_xx(rhs_acc_ekp1,10);
			item_xx(rhs_acc_ekp8_02,10);
			item_xx(rhs_acc_ekp8_18,10);
			item_xx(rhs_acc_1p87,10);
			// Suppressors
			item_xx(rhs_acc_tgpa,10);
			item_xx(rhs_acc_pbs1,10);
			item_xx(rhs_acc_tgpv,10);

			// Muzzle
			item_xx(rhs_acc_dtk,10);
			item_xx(rhs_acc_dtk1983,10);
			item_xx(rhs_acc_dtk1l,10);
			item_xx(rhs_acc_dtk1,10);
			item_xx(rhs_acc_dtk3,10);
			item_xx(rhs_acc_dtk4screws,10);
			item_xx(rhs_acc_dtk4short,10);
			item_xx(rhs_acc_dtk4long,10);
		};

	};

//- LAUNCHER

	class rhs_launcher_crate : EAST_Box_Base
	{
		EdPrev(rhs_launcher_crate)

		displayName = "$STR_RHS_RHSLAUNCHERSCRATE_NAME";
		scope = 2;

		model = "rhsafrf\addons\rhs_weapons\crates\rhs_3Ya40_1";
		icon = "iconCrateLarge";

		transportMaxWeapons = 200;
		transportMaxMagazines = 1000;

		AUTHOR_MACRO


		class TransportWeapons
		{
			weap_xx(rhs_weap_rsp30_white,10);
			weap_xx(rhs_weap_rsp30_green,10);
			weap_xx(rhs_weap_rsp30_red,10);

			weap_xx(rhs_weap_rpg26,5);
			weap_xx(rhs_weap_rshg2,5);
			weap_xx(rhs_weap_rpg7,5);
			weap_xx(rhs_weap_igla,5);
		};

		class TransportMagazines
		{
			mag_xx(rhs_mag_rsp30_white,20);
			mag_xx(rhs_mag_rsp30_red,20);
			mag_xx(rhs_mag_rsp30_green,20);

			mag_xx(rhs_rpg7_PG7V_mag,20);
			mag_xx(rhs_rpg7_PG7VL_mag,20);
			mag_xx(rhs_rpg7_PG7VR_mag,20);
			mag_xx(rhs_rpg7_OG7V_mag,20);
			mag_xx(rhs_rpg7_TBG7V_mag,20);

			mag_xx(rhs_rpg26_mag,20);
			mag_xx(rhs_rshg2_mag,20);
			mag_xx(rhs_mag_9k38_rocket,20);
		};

		class TransportItems
		{
			// Scopes
			item_xx(rhs_acc_1pn93_1,10);
			item_xx(rhs_acc_1pn93_2,10);
			item_xx(rhs_acc_pgo7v,10);
		};

	};

//- SPECIAL WEAPONS

	class rhs_spec_weapons_crate : EAST_Box_Base
	{
		EdPrev(rhs_spec_weapons_crate)

		displayName = "$STR_RHS_RHSSPECIALWEAPONSCRATE_NAME";
		scope = 2;

		model = "rhsafrf\addons\rhs_weapons\crates\rhs_3Ya40_1";
		icon = "iconCrateLarge";

		transportMaxWeapons = 200;
		transportMaxMagazines = 1000;

		AUTHOR_MACRO

		class TransportWeapons {};

		class TransportMagazines
		{
			mag_xx(rhs_mine_tm62m_mag,10);
			mag_xx(rhs_mine_pmn2_mag,10);
			mag_xx(rhs_mine_msk40p_white_mag,10);
			mag_xx(rhs_mine_msk40p_red_mag,10);
			mag_xx(rhs_mine_msk40p_green_mag,10);
			mag_xx(rhs_mine_msk40p_blue_mag,10);
			mag_xx(rhs_mine_sm320_white_mag,10);
			mag_xx(rhs_mine_sm320_red_mag,10);
			mag_xx(rhs_mine_sm320_green_mag,10);
			mag_xx(rhs_mine_ozm72_a_mag,10);
			mag_xx(rhs_mine_ozm72_b_mag,10);
			mag_xx(rhs_mine_ozm72_c_mag,10);
			mag_xx(rhs_ec75_mag,10);
			mag_xx(rhs_ec200_mag,10);
			mag_xx(rhs_ec400_mag,10);
			mag_xx(rhs_ec75_sand_mag,10);
			mag_xx(rhs_ec200_sand_mag,10);
			mag_xx(rhs_ec400_sand_mag,10);
		};

		class TransportItems {};

		class TransportBackpacks
		{
			bag_xx(RHS_NSV_Gun_Bag,2);
			bag_xx(RHS_NSV_Tripod_Bag,2);
		};

	};

//- EQUIPMENT

	class rhs_gear_crate : EAST_Box_Base
	{
		EdPrev(rhs_gear_crate)

		displayName = "$STR_RHSAFRF_RHSEQUIPMENTCRATE_NAME";
		scope = 2;
		model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1";
		icon = "iconCrateLarge";

		transportMaxWeapons = 200;
		transportMaxMagazines = 1000;

		AUTHOR_MACRO

		class TransportWeapons
		{
			weap_xx(rhs_tr8_periscope,10);
			weap_xx(rhs_tr8_periscope_pip,10);
			weap_xx(rhs_weap_tr8,10);
			weap_xx(rhs_pdu4,10);
		};

		class TransportMagazines {};

		class TransportItems
		{
			item_xx(Binocular,5);
			item_xx(FirstAidKit,20);
			item_xx(Medikit,5);
			item_xx(Toolkit,5);
			item_xx(MineDetector,5);
			item_xx(ItemMap,5);
			item_xx(ItemCompass,5);
			item_xx(ItemGPS,5);
			item_xx(O_UavTerminal,5);
		};

		class TransportBackpacks
		{
			bag_xx(rhs_assault_umbts,4);
			bag_xx(rhs_rpg_empty,4);
			bag_xx(rhs_sidor,4);
		};

	};

//- AMMO

	class rhs_mags_crate : EAST_Box_Base
	{
		EdPrev(rhs_mags_crate)
		displayName = "$STR_RHS_RHSAFRFAMMOCRATE_NAME";
		scope = 2;

		model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1";
		icon = "iconCrateLarge";

		transportMaxWeapons = 200;
		transportMaxMagazines = 1000;

		AUTHOR_MACRO


		class TransportWeapons {};

		class TransportMagazines
		{
			//- 9mm Mags
			mag_xx(rhs_mag_9x19_17,20);
			mag_xx(rhs_mag_9x18_12_57N181S,20);
			mag_xx(rhs_mag_9x18_8_57N181S,20);

			//- 9mm Subsonic Mags
			mag_xx(rhs_20rnd_9x39mm_SP5,20);
			mag_xx(rhs_20rnd_9x39mm_SP6,20);
			mag_xx(rhs_10rnd_9x39mm_SP5,20);
			mag_xx(rhs_10rnd_9x39mm_SP6,20);

			//- 5.45 Mags
			mag_xx(rhs_30Rnd_545x39_7N6_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N6_green_AK,20);
			mag_xx(rhs_30Rnd_545x39_AK_green,20);
			mag_xx(rhs_30Rnd_545x39_AK_plum_green,20);
			mag_xx(rhs_30Rnd_545x39_7U1_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N6M_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N6M_green_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N6M_plum_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_plum_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_camo_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_desert_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N22_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N22_plum_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N22_camo_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N22_desert_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_2mag_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_2mag_plum_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_2mag_camo_AK,20);
			mag_xx(rhs_30Rnd_545x39_7N10_2mag_desert_AK,20);
			mag_xx(rhs_45Rnd_545x39_AK,20);
			mag_xx(rhs_45Rnd_545x39_7N6_AK,20);
			mag_xx(rhs_45Rnd_545x39_7N10_AK,20);
			mag_xx(rhs_45Rnd_545x39_7N22_AK,20);
			mag_xx(rhs_45Rnd_545x39_AK_green,20);
			mag_xx(rhs_45Rnd_545x39_7U1_AK,20);

			//- 7.62 Mags
			//AKM
			mag_xx(rhs_30Rnd_762x39mm,20);
			mag_xx(rhs_30Rnd_762x39mm_tracer,20);
			mag_xx(rhs_30Rnd_762x39mm_89,20);
			mag_xx(rhs_30Rnd_762x39mm_U,20);
			mag_xx(rhs_30Rnd_762x39mm_bakelite,20);
			mag_xx(rhs_30Rnd_762x39mm_bakelite_tracer,20);
			mag_xx(rhs_30Rnd_762x39mm_bakelite_89,20);
			mag_xx(rhs_30Rnd_762x39mm_bakelite_U,20);
			mag_xx(rhs_30Rnd_762x39mm_polymer,20);
			mag_xx(rhs_30Rnd_762x39mm_polymer_tracer,20);
			mag_xx(rhs_30Rnd_762x39mm_polymer_89,20);
			mag_xx(rhs_30Rnd_762x39mm_polymer_U,20);
			mag_xx(rhs_10Rnd_762x39mm,20);
			mag_xx(rhs_10Rnd_762x39mm_tracer,20);
			mag_xx(rhs_10Rnd_762x39mm_89,20);
			mag_xx(rhs_10Rnd_762x39mm_U,20);
			mag_xx(rhs_75Rnd_762x39mm,5);
			mag_xx(rhs_75Rnd_762x39mm_tracer,5);
			mag_xx(rhs_75Rnd_762x39mm_89,5);

			//SVD
			mag_xx(rhs_10Rnd_762x54mmR_7N1,20);
			mag_xx(rhs_10Rnd_762x54mmR_7N14,20);

			//T5000
			mag_xx(rhs_5Rnd_338lapua_t5000,20);

			//PKM
			mag_xx(rhs_100Rnd_762x54mmR,20);
			mag_xx(rhs_100Rnd_762x54mmR_green,20);
			mag_xx(rhs_100Rnd_762x54mmR_7n13,20);
			mag_xx(rhs_100Rnd_762x54mmR_7n26,20);
			mag_xx(rhs_100Rnd_762x54mmR_7bz3,20);

			//- VOG Grenades
			mag_xx(rhs_VOG25,20);
			mag_xx(rhs_VOG25p,20);
			mag_xx(rhs_vg40tb,20);
			mag_xx(rhs_vg40sz,20);
			mag_xx(rhs_vg40md,20);
			mag_xx(rhs_vg40op_white,20);
			mag_xx(rhs_vg40op_green,20);
			mag_xx(rhs_vg40op_red,20);
			mag_xx(rhs_GRD40_white,20);
			mag_xx(rhs_GRD40_green,20);
			mag_xx(rhs_GRD40_red,20);
			mag_xx(rhs_GDM40,20);

			//- Grenades
			//Frag
			mag_xx(rhs_mag_rgd5,20);
			mag_xx(rhs_mag_rgn,20);
			mag_xx(rhs_mag_rgo,20);
			//Smoke
			mag_xx(rhs_mag_rdg2_white,20);
			mag_xx(rhs_mag_rdg2_black,20);
			//Flare
			mag_xx(rhs_mag_nspn_yellow,20);
			mag_xx(rhs_mag_nspn_red,20);
			mag_xx(rhs_mag_nspn_green,20);
			mag_xx(rhs_mag_nspd,20);
			//Flashbang
			mag_xx(rhs_mag_fakel,20);
			mag_xx(rhs_mag_fakels,20);
			mag_xx(rhs_mag_zarya2,20);
			mag_xx(rhs_mag_plamyam,20);
		};

		class TransportItems {};

	};

//- VIRTUAL

	class rhs_weapons_crate_ak: EAST_Box_Base
	{
		EdPrev(rhs_weapons_crate_ak)

		AUTHOR_MACRO
		displayName = "$STR_RHS_RHSWEAPONSCRATEVIRTUAL_NAME";
		scope = 2;
		type = 0;

		model = "rhsafrf\addons\rhs_weapons\crates\rhs_3Ya40_1";
		icon = "iconCrateLarge";

		transportMaxWeapons = 70;
		transportMaxMagazines = 40;

		class EventHandlers
		{
			init = "[_this select 0,0] call rhs_fnc_virtualAmmoBoxRus;";
		};
		SLX_XEH_DISABLED = 1;

		class TransportWeapons
		{
		};

		class TransportMagazines
		{
		};

		class TransportItems
		{
		};
	};

	class rhs_weapons_crate_ak_standard: rhs_weapons_crate_ak
	{
		EdPrev(rhs_weapons_crate_ak)

		AUTHOR_MACRO
		displayName = "$STR_RHS_RHSWEAPONSCRATEVIRTUAL_NAME";
		scope = 1;
	};

	class rhs_weapons_crate_ak_ammo_545x39: EAST_Box_Base
	{
		EdPrev(rhs_weapons_crate_ak_ammo_545x39)

		AUTHOR_MACRO
		displayName = "$STR_RHS_RHSAMMOCRATEVIRTUAL_NAME";
		scope = 2;

		model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1";
		icon = "iconCrateLarge";

		transportMaxWeapons = 0;
		transportMaxMagazines = 500;

		class EventHandlers
		{
			init = "[_this select 0,1] call rhs_fnc_virtualAmmoBoxRus;";
		};
		SLX_XEH_DISABLED = 1;
		class TransportMagazines
		{
		};
	};


	class rhs_weapons_crate_ak_ammo_545x39_standard: rhs_weapons_crate_ak_ammo_545x39
	{
		EdPrev(rhs_weapons_crate_ak_ammo_545x39)

		AUTHOR_MACRO
		displayName = "$STR_RHS_RHSAMMOCRATEVIRTUAL_NAME";
		scope = 2;
	};

//- SINGLE DECORATIVE

	class rhs_7ya37_1_single : EAST_Box_Base
	{
		EdPrev(rhs_7ya37_1_single)
		scope = 2;

		AUTHOR_MACRO
		displayName = "7Ya37-1 Crate";
		model = "rhsafrf\addons\rhs_weapons\crates\rhs_3Ya40_1_single";

		transportMaxWeapons = 10;
		transportMaxMagazines = 30;

		class TransportWeapons
		{
			class _xx_rhs_weap_ak74m
			{
				weapon = "rhs_weap_ak74m";
				count = 10;
			};
		};

		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N10_AK
			{
				magazine = "rhs_30Rnd_545x39_7N10_AK";
				count = 30;
			};
		};

		class TransportItems
		{
		};
	};
	class rhs_3Ya40_1_single : rhs_7ya37_1_single
	{
		EdPrev(rhs_3Ya40_1_single)
		AUTHOR_MACRO
		displayName = "3Ya40-1 Crate";
		model = "rhsafrf\addons\rhs_weapons\crates\rhs_7ya37_1_single";

		transportMaxWeapons = 0;
		transportMaxMagazines = 40;

		class TransportWeapons
		{
		};

		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N10_AK
			{
				magazine = "rhs_30Rnd_545x39_7N10_AK";
				//it has 2160 rounds in paper boxes
				count = 72;
			};
		};
	};
