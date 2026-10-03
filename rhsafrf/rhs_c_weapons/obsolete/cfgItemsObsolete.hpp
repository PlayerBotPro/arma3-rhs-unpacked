
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class Item_Base_F;

	// Macro that determines which weapon
	#define WeaponMacro(classname,strname) class TransportWeapons \
		{ \
			class ##classname## \
			{ \
				weapon = ##classname##; \
				count = 1; \
			}; \
		}; \
		displayName= ##strname##; \
		\
		AUTHOR_MACRO

	// Macro that determines which magazine will appear in the weapon when spawn.
	#define MagazineMacro(magazineclass) class TransportMagazines \
		{ \
			class ##magazineclass## \
			{ \
				magazine = ##magazineclass##; \
				count = 1; \
			}; \
		};

	class rhs_weapon_base : Weapon_Base_F
	{
		scope = 1;
		scopeCurator = 1;

		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
	};

	// AK-74M
	class rhs_weapon_ak74m : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		MagazineMacro(rhs_30Rnd_545x39_AK)

		WeaponMacro(rhs_weap_ak74m_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M0)
	};

	class rhs_weapon_ak74m_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_npz_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_NPZ0)
	};

	class rhs_weapon_ak74m_camo : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_camo,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_CAMO0)
	};

	class rhs_weapon_ak74m_camo_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_camo_npz,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_CAMO0_NPZ0)
	};

	class rhs_weapon_ak74m_gp25 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_gp25_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_GP250)
	};

	class rhs_weapon_ak74m_gp25_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_gp25_npz_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_GP250_NPZ0)
	};

	class rhs_weapon_ak74m_desert : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_desert_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_DESERT0)
	};

	class rhs_weapon_ak74m_desert_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_desert_npz,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_DESERT0_NPZ0)
	};

	class rhs_weapon_ak74m_plummag : rhs_weapon_ak74m
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_ak74m_plummag_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_PMAG0)
	};

	class rhs_weapon_ak74m_plummag_npz : rhs_weapon_ak74m
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_ak74m_plummag_npz,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_PMAG0_NPZ0)
	};

	class rhs_weapon_ak74m_fullplum : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_fullplum_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M0_PLUM0)
	};

	class rhs_weapon_ak74m_fullplum_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_fullplum_npz_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_PLUM_NPZ0)
	};

	class rhs_weapon_ak74m_fullplum_folded : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_fullplum_folded_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M0_PLUM0)
	};

	class rhs_weapon_ak74m_fullplum_gp25 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_fullplum_gp25_dtk,$STR_RHS_WEAP_AK74M_PLUM0_GP25)
	};

	class rhs_weapon_ak74m_fullplum_gp25_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_fullplum_gp25_npz_dtk,$STR_RHS_WEAP_AK74M_PLUM0_GP25_NPZ0)
	};

	class rhs_weapon_ak74m_fullplum_gp25_folded : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74m_fullplum_gp25_folded_dtk,$STR_RHS_WEAP_AK74M_PLUM0_GP25)
	};

	class rhs_weapon_ak74m_2mag : rhs_weapon_ak74m
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_ak74m_2mag_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_2MAG0)
	};

	class rhs_weapon_ak74m_2mag_npz : rhs_weapon_ak74m
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_ak74m_2mag_npz_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_2MAG0_NPZ0)
	};

	class rhs_weapon_ak74m_2mag_camo : rhs_weapon_ak74m
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_ak74m_2mag_camo_dtk,$STR_RHS_WEAP_AK74M_2MAGCAMO)
	};

	class rhs_weapon_ak74m_2mag_camo_npz : rhs_weapon_ak74m
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_ak74m_2mag_npz_dtk,$STR_RHS_CFGWEAPONS_RIFLE_AK74M_2MAG0_CAMO0_NPZ0)
	};

	// AKS74U

	class rhs_weapon_aks74u : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74u,$STR_RHS_WEAP_AKS74U)
	};
	class rhs_weapon_aks74un : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74un,$STR_RHS_WEAP_AKS74UN)
	};

	//AKS74

	class rhs_weapon_aks74 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74,$STR_RHS_WEAP_AKS74)
	};
	class rhs_weapon_aks74_folded : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74_folded,$STR_RHS_WEAP_AKS74_FOLD)
	};



	class rhs_weapon_aks74_2 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74_2,$STR_RHS_WEAP_AKS74_2)
	};
	class rhs_weapon_aks74_2_folded : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74_2_folded,$STR_RHS_WEAP_AKS74_2_FOLD)
	};
	class rhs_weapon_aks74_gp25 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74_gp25,$STR_RHS_WEAP_AKS74_GP25)
	};
	class rhs_weapon_aks74n : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74n,$STR_RHS_WEAP_AKS74N)
	};
	class rhs_weapon_aks74n_folded : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74n_folded,$STR_RHS_WEAP_AKS74N_FOLD)
	};
	class rhs_weapon_aks74n_gp25 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74n_gp25,$STR_RHS_WEAP_AKS74N_GP25)
	};
	class rhs_weapon_aks74n_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74n_npz,$STR_RHS_WEAP_AKS74N_NPZ)
	};
	class rhs_weapon_aks74n_2 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74n_2,$STR_RHS_WEAP_AKS74N_2)
	};
	class rhs_weapon_aks74n_2_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_aks74n_2_npz,$STR_RHS_WEAP_AKS74N_2_NPZ)
	};

	//AK-74

	class rhs_weapon_ak74 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74,$STR_RHS_WEAP_AK74)
	};
	class rhs_weapon_ak74n : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74n,$STR_RHS_WEAP_AK74N)
	};
	class rhs_weapon_ak74n_gp25 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74n_gp25,$STR_RHS_WEAP_AK74N_GP25)
	};
	class rhs_weapon_ak74_gp25 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74_gp25,$STR_RHS_WEAP_AK74_GP25)
	};
	class rhs_weapon_ak74n_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74n_npz,$STR_RHS_WEAP_AK74N_NPZ)
	};

	//AK-74 (plastic)

	class rhs_weapon_ak74_2 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74_2,$STR_RHS_WEAP_AK74_2)
	};
	class rhs_weapon_ak74n_2 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74n_2,$STR_RHS_WEAP_AK74N_2)
	};
	class rhs_weapon_ak74n_2_npz : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74n_2_npz,$STR_RHS_WEAP_AK74N_2_NPZ)
	};
	class rhs_weapon_ak74_3 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak74_3,$STR_RHS_WEAP_AK74_3)
	};

	// AKM
	class rhs_weapon_akm : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_akm,$STR_RHS_WEAP_AKM)

		MagazineMacro(rhs_30Rnd_762x39mm)
	};
	class rhs_weapon_akmn : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_akmn,$STR_RHS_WEAP_AKMN)
	};
	class rhs_weapon_akmn_npz : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_akmn_npz,$STR_RHS_WEAP_AKMN_NPZ)
	};
	class rhs_weapon_akm_zenitco01_b33 : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_akm_zenitco01_b33,$STR_RHS_WEAP_AKM_ZENIT_B33)
	};
	class rhs_weapon_akm_gp25 : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_akm_gp25,$STR_RHS_WEAP_AKM_GP25)
	};
	class rhs_weapon_akmn_gp25 : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_akmn_gp25,$STR_RHS_WEAP_AKMN_GP25)
	};

	// AKMS
	class rhs_weapon_akms : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_akms,$STR_RHS_WEAP_AKMS)
	};
	class rhs_weapon_akms_folded : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_akms_folded,$STR_RHS_WEAP_AKMS_FOLDED)
	};


	class rhs_weapon_akms_gp25 : rhs_weapon_akms
	{
		WeaponMacro(rhs_weap_akms_gp25,$STR_RHS_WEAP_AKMS_GP25)
	};

	// PM-63
	class rhs_weapon_pm63 : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_pm63,$STR_RHS_WEAP_PM63)
	};

	// AK-103
	class rhs_weapon_ak103 : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_ak103_dtk,$STR_RHS_WEAP_AK103)
	};

	class rhs_weapon_ak103_npz : rhs_weapon_ak103
	{
		WeaponMacro(rhs_weap_ak103_npz_dtk,$STR_RHS_WEAP_AK103_NPZ0)
	};

	class rhs_weapon_ak103_1 : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_ak103_1_dtk,$STR_RHS_WEAP_AK1031)
	};

	class rhs_weapon_ak103_2 : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_ak103_2_dtk,$STR_RHS_WEAP_AK1032)
	};

	// AK-104
	class rhs_weapon_ak104 : rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_ak104_pgs64,$STR_RHS_WEAP_AK104)
	};

	class rhs_weapon_ak104_npz : rhs_weapon_ak104
	{
		WeaponMacro(rhs_weap_ak104_npz_pgs64,$STR_RHS_WEAP_AK104_NPZ0)
	};

	// AK-105
	class rhs_weapon_ak105 : rhs_weapon_ak74m
	{
		WeaponMacro(rhs_weap_ak105_pgs64,$STR_RHS_WEAP_AK105)
	};

	class rhs_weapon_ak105_npz : rhs_weapon_ak105
	{
		WeaponMacro(rhs_weap_ak105_npz_pgs64,$STR_RHS_WEAP_AK105_NPZ0)
	};

	// SVD
	class rhs_weapon_svd : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_svd,$STR_RHS_SVD_NAME)

		MagazineMacro(rhs_10Rnd_762x54mmR_7N1)
		editorSubcategory = "EdSubcat_SniperRifles";
	};

	class rhs_weapon_svdp : rhs_weapon_svd
	{
		WeaponMacro(rhs_weap_svdp,$STR_RHS_WEAP_SVDM)
	};

	class rhs_weapon_svdp_npz : rhs_weapon_svd
	{
		WeaponMacro(rhs_weap_svdp_npz,$STR_RHS_WEAP_SVDM_NPZ0)
	};

	class rhs_weapon_svdp_wd : rhs_weapon_svd
	{
		WeaponMacro(rhs_weap_svdp_wd,$STR_RHS_WEAP_SVDM_CAMO)
	};

	class rhs_weapon_svdp_wd_npz : rhs_weapon_svd
	{
		WeaponMacro(rhs_weap_svdp_wd_npz,$STR_RHS_WEAP_SVDM_CAMO_NPZ0)
	};

	class rhs_weapon_svds : rhs_weapon_svd
	{
		WeaponMacro(rhs_weap_svds,$STR_RHS_WEAP_SVDS)
	};

	class rhs_weapon_svds_npz : rhs_weapon_svd
	{
		WeaponMacro(rhs_weap_svds_npz,$STR_RHS_WEAP_SVDS_NPZ0)
	};

	// AS Val
	class rhs_weapon_asval : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_asval,$STR_RHS_WEAP_ASVAL)

		MagazineMacro(rhs_20rnd_9x39mm_SP6)
		editorSubcategory = "EdSubcat_SniperRifles";
	};
	class rhs_weapon_asval_grip : rhs_weapon_asval
	{
		WeaponMacro(rhs_weap_asval_grip,$STR_RHS_WEAP_ASVAL_GRIP)
	};
	class rhs_weapon_asval_npz : rhs_weapon_asval
	{
		WeaponMacro(rhs_weap_asval_npz,$STR_RHS_WEAP_ASVAL_NPZ)
	};
	class rhs_weapon_vvs : rhs_weapon_asval
	{
		WeaponMacro(rhs_weap_vss,$STR_RHS_WEAP_VSS)
		MagazineMacro(rhs_10rnd_9x39mm_SP6)
	};
	class rhs_weapon_vvs_grip : rhs_weapon_vvs
	{
		WeaponMacro(rhs_weap_vss_grip,$STR_RHS_WEAP_VSS_GRIP)
	};
	class rhs_weapon_vvs_npz : rhs_weapon_vvs
	{
		WeaponMacro(rhs_weap_vss_npz,$STR_RHS_WEAP_VSS_NPz)
	};

	class rhs_weapon_pp2000 :  rhs_weapon_akm
	{
		WeaponMacro(rhs_weap_pp2000,PP-2000)
		MagazineMacro(rhs_mag_9x19mm_7n21_20)
	};

	// PKP
	class rhs_weapon_pkp : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_pkp,$STR_RHS_PKP_NAME)

		MagazineMacro(rhs_100Rnd_762x54mmR)
		editorSubcategory = "EdSubcat_MachineGuns";
	};
	class rhs_weapon_pkm : rhs_weapon_pkp
	{
		WeaponMacro(rhs_weap_pkm,$STR_RHS_WEAP_PKM)
	};

	// RPG-7
	class rhs_weapon_rpg7 : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 0;

		WeaponMacro(rhs_weap_rpg7_pgo,$STR_RHS_RPG7V2_NAME)

		MagazineMacro(rhs_rpg7_PG7VL_mag)

		vehicleClass = "WeaponsSecondary";
		editorSubcategory = "EdSubcat_Launchers";
		model = "\A3\Weapons_F\DummyLauncher_Single.p3d";
	};

	// RSHG-2
	class rhs_weapon_rshg2 : rhs_weapon_rpg7
	{
		WeaponMacro(rhs_weap_rshg2,$STR_RHS_RSHG2_NAME)
		MagazineMacro(rhs_rshg2_mag)
	};

	// RPG-26
	class rhs_weapon_rpg26 : rhs_weapon_rpg7
	{
		WeaponMacro(rhs_weap_rpg26,$STR_RHS_RPG26_NAME)
		MagazineMacro(rhs_rpg26_mag)
	};

	// Strela
	class rhs_weapon_igla : rhs_weapon_rpg7
	{
		WeaponMacro(rhs_weap_igla,9K38)
		MagazineMacro(rhs_mag_9k38_rocket)
	};

	// RSP-30
	class rhs_weapon_rsp30_white : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_rsp30_white,RSP-30 Flare White)

		MagazineMacro(rhs_mag_rsp30_white)

		vehicleClass = "WeaponsHandguns";
		editorSubcategory = "EdSubcat_Pistols";
		model = "\A3\Weapons_F\DummyPistol_Single.p3d";
	};

	class rhs_weapon_rsp30_red : rhs_weapon_rsp30_white
	{
		WeaponMacro(rhs_weap_rsp30_red,RSP-30 Flare Red)
		MagazineMacro(rhs_mag_rsp30_red)
	};

	class rhs_weapon_rsp30_green : rhs_weapon_rsp30_white
	{
		WeaponMacro(rhs_weap_rsp30_green,RSP-30 Flare Green)
		MagazineMacro(rhs_mag_rsp30_green)
	};

	// PMM

	class rhs_weapon_makarov_pmm : rhs_weapon_rsp30_white
	{
		WeaponMacro(rhs_weap_makarov_pmm,$STR_RHS_WEAP_PMM)
		MagazineMacro(rhs_mag_9x18_12_57N181S)
	};

	// PM

	class rhs_weapon_pb_6p9 : rhs_weapon_makarov_pmm
	{
		WeaponMacro(rhs_weap_pb_6p9,$STR_RHS_WEAP_PB)
		MagazineMacro(rhs_mag_9x18_8_57N181S)
	};

	class rhs_weapon_makarov_pm : rhs_weapon_rsp30_white
	{
		WeaponMacro(rhs_weap_makarov_pm,$STR_RHS_WEAP_PM)
		MagazineMacro(rhs_mag_9x18_8_57N181S)
	};

	// PYA

	class rhs_weapon_pya : rhs_weapon_rsp30_white
	{
		WeaponMacro(rhs_weap_pya,$STR_RHS_WEAP_PYA)
		MagazineMacro(rhs_mag_9x19_17)
	};

	// PP-2000
	class rhs_weapon_pp2000_folded : rhs_weapon_rsp30_white
	{
		WeaponMacro(rhs_weap_pp2000_folded,PP-2000 (Folded))
		MagazineMacro(rhs_mag_9x19mm_7n21_20)
	};

	class WeaponHolder_Single_limited_item_F;
	class rhs_magazine_base : WeaponHolder_Single_limited_item_F
	{
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
	};

	#define MagazineItemMacro(mc,mn) \
	class rhs_magazine_##mc## : rhs_magazine_base \
	{ \
		scope = 1; \
		class TransportMagazines \
		{ \
			class ##mc## \
			{ \
				magazine = ##mc##; \
				count = 1; \
			}; \
		}; \
		displayName = ##mn##; \
		AUTHOR_MACRO \
	};

	#define MagazineItemMacroHidden(mc,mn) \
	class rhs_magazine_##mc## : rhs_magazine_base \
	{ \
		scope = 1; \
		scopecurator = 1; \
		class TransportMagazines \
		{ \
			class ##mc## \
			{ \
				magazine = ##mc##; \
				count = 1; \
			}; \
		}; \
		displayName = ##mn##; \
		AUTHOR_MACRO \
	};
//Rifle, 5.45mm
	MagazineItemMacro(rhs_30Rnd_545x39_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_7N6_BAKELITE)
	MagazineItemMacro(rhs_30Rnd_545x39_7N6_green_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_7N6_GREEN_BAKELITE)
	MagazineItemMacro(rhs_30Rnd_545x39_AK_green,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_GREEN0_BAKELITE)
	MagazineItemMacro(rhs_30Rnd_545x39_7N6_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_7N6M)
	MagazineItemMacro(rhs_30Rnd_545x39_7N6M_plum_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_7N6M_PLUM)
	MagazineItemMacro(rhs_30Rnd_545x39_7N10_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1)
	MagazineItemMacro(rhs_30Rnd_545x39_7N10_plum_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1_PLUM)
	MagazineItemMacro(rhs_30Rnd_545x39_7N10_desert_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1_DESERT)
	MagazineItemMacro(rhs_30Rnd_545x39_7N10_camo_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1_CAMO)
	MagazineItemMacro(rhs_30Rnd_545x39_7N22_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2)
	MagazineItemMacro(rhs_30Rnd_545x39_7N22_plum_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2_PLUM)
	MagazineItemMacro(rhs_30Rnd_545x39_7N22_desert_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2_DESERT)
	MagazineItemMacro(rhs_30Rnd_545x39_7N22_camo_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2_CAMO)
	MagazineItemMacro(rhs_30Rnd_545x39_7U1_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG3)
	MagazineItemMacro(rhs_30Rnd_545x39_7N10_2mag_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG)
	MagazineItemMacro(rhs_30Rnd_545x39_7N10_2mag_plum_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG_PLUM)
	MagazineItemMacro(rhs_30Rnd_545x39_7N10_2mag_desert_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG_DESERT)
	MagazineItemMacro(rhs_30Rnd_545x39_7N10_2mag_camo_AK,$STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG_CAMO)
	MagazineItemMacro(rhs_45Rnd_545x39_7N22_AK,$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG2)
	MagazineItemMacro(rhs_45Rnd_545x39_7N10_AK,$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG1)
	MagazineItemMacro(rhs_45Rnd_545x39_7N6_AK,$STR_RHS_CFGMAGAZINES_45RND_545X39_7N6M)
	MagazineItemMacro(rhs_45Rnd_545x39_AK_green,$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_GREEN0)
	MagazineItemMacro(rhs_45Rnd_545x39_AK,"45rnd RPK-74 7N6")
	MagazineItemMacro(rhs_45Rnd_545x39_7U1_AK,"45rnd RPK-74 7U1 (Subsonic)")
//UGL, 40mm
	MagazineItemMacro(rhs_VOG25,$STR_RHS_VOG25_NAME)
	MagazineItemMacro(rhs_VOG25p,$STR_RHS_VOG25P_NAME)
	MagazineItemMacro(rhs_vg40tb,$STR_RHS_VG40TB_NAME)
	MagazineItemMacro(rhs_vg40sz,$STR_RHS_VG40SZ_NAME)
	MagazineItemMacro(rhs_vg40op_white,$STR_RHS_VG40OP_NAME)
	MagazineItemMacro(rhs_vg40op_green,$STR_RHS_VG40OPGREEN_NAME)
	MagazineItemMacro(rhs_vg40op_red,$STR_RHS_VG40OPRED_NAME)
	MagazineItemMacro(rhs_GRD40_white,$STR_RHS_GRD40WHITE_NAME)
	MagazineItemMacro(rhs_GRD40_green,$STR_RHS_GRD40GREEN_NAME)
	MagazineItemMacro(rhs_GRD40_red,$STR_RHS_GRD40RED_NAME)
	MagazineItemMacro(rhs_VG40MD_White,$STR_RHS_VG40MDWHITE_NAME)
	MagazineItemMacro(rhs_VG40MD_Green,$STR_RHS_VG40MDGREEN_NAME)
	MagazineItemMacro(rhs_VG40MD_Red,$STR_RHS_VG40MDRED_NAME)
	MagazineItemMacro(rhs_GDM40,$STR_RHS_GDM40_NAME)
//Machine Gun, 7.62x54mm
	MagazineItemMacro(rhs_100Rnd_762x54mmR,$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG0)
	MagazineItemMacro(rhs_100Rnd_762x54mmR_green,$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG0_GREEN)
	MagazineItemMacro(rhs_100Rnd_762x54mmR_7n13,$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG1)
	MagazineItemMacro(rhs_100Rnd_762x54mmR_7n26,$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG2)
	MagazineItemMacro(rhs_100Rnd_762x54mmR_7bz3,$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG3)
//Rifle, 7.62x54mm
	MagazineItemMacro(rhs_10Rnd_762x54mmR_7N1,$STR_RHS_CFGMAGAZINES_10RND_762X54R_NAME)
	MagazineItemMacro(rhs_10Rnd_762x54mmR_7N14,$STR_RHS_CFGMAGAZINES_10RND_762X54R_7N14_NAME)
//Rifle, 7.62x39mm
	MagazineItemMacro(rhs_30Rnd_762x39mm,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG4)
	MagazineItemMacro(rhs_30Rnd_762x39mm_tracer,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG5)
	MagazineItemMacro(rhs_30Rnd_762x39mm_89,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG6)
	MagazineItemMacro(rhs_30Rnd_762x39mm_U,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG7)
	MagazineItemMacro(rhs_30Rnd_762x39mm_bakelite,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG4_BAKELITE)
	MagazineItemMacro(rhs_30Rnd_762x39mm_bakelite_tracer,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG5_BAKELITE)
	MagazineItemMacro(rhs_30Rnd_762x39mm_bakelite_89,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG6_BAKELITE)
	MagazineItemMacro(rhs_30Rnd_762x39mm_bakelite_U,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG7_BAKELITE)
	MagazineItemMacro(rhs_30Rnd_762x39mm_polymer,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG4_POLYMER)
	MagazineItemMacro(rhs_30Rnd_762x39mm_polymer_tracer,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG5_POLYMER)
	MagazineItemMacro(rhs_30Rnd_762x39mm_polymer_89,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG6_POLYMER)
	MagazineItemMacro(rhs_30Rnd_762x39mm_polymer_U,$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG7_POLYMER)
	MagazineItemMacro(rhs_10Rnd_762x39mm,$STR_RHS_CFGMAGAZINES_10RND_545X39_MAG4)
	MagazineItemMacro(rhs_10Rnd_762x39mm_tracer,$STR_RHS_CFGMAGAZINES_10RND_545X39_MAG5)
	MagazineItemMacro(rhs_10Rnd_762x39mm_89,$STR_RHS_CFGMAGAZINES_10RND_545X39_MAG6)
	MagazineItemMacro(rhs_10Rnd_762x39mm_U,$STR_RHS_CFGMAGAZINES_10RND_545X39_MAG7)
	MagazineItemMacro(rhs_75Rnd_762x39mm,$STR_RHS_CFGMAGAZINES_75RND_762X39_MAG4)
	MagazineItemMacro(rhs_75Rnd_762x39mm_tracer,$STR_RHS_CFGMAGAZINES_75RND_762X39_MAG5)
	MagazineItemMacro(rhs_75Rnd_762x39mm_89,$STR_RHS_CFGMAGAZINES_75RND_762X39_MAG6)
//Rifle, 9x39mm
	MagazineItemMacro(rhs_20rnd_9x39mm_SP5,$STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_SP5)
	MagazineItemMacro(rhs_20rnd_9x39mm_SP6,$STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_SP6)
	MagazineItemMacro(rhs_10rnd_9x39mm_SP5,$STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_SP5)
	MagazineItemMacro(rhs_10rnd_9x39mm_SP6,$STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_SP6)
//Rifle, .338 Lapua
	MagazineItemMacro(rhs_5Rnd_338lapua_t5000,$STR_RHS_CFGMAGAZINES_5RND_338LAPUA_T5000)
//Explosives
	MagazineItemMacro(rhs_mine_pmn2_mag,"$STR_RHS_CFGMAGAZINES_PMN20")
	MagazineItemMacro(rhs_mine_tm62m_mag,"$STR_RHS_CFGMAGAZINES_TM62M0")
	MagazineItemMacro(rhs_mine_msk40p_white_mag,"$STR_RHS_MINE_MSK40P_W_MAG_DISPLAYNAME")
	MagazineItemMacro(rhs_mine_msk40p_red_mag,"$STR_RHS_MINE_MSK40P_R_MAG_DISPLAYNAME")
	MagazineItemMacro(rhs_mine_msk40p_green_mag,"$STR_RHS_MINE_MSK40P_G_MAG_DISPLAYNAME")
	MagazineItemMacro(rhs_mine_msk40p_blue_mag,"$STR_RHS_MINE_MSK40P_B_MAG_DISPLAYNAME")
	MagazineItemMacro(rhs_mine_sm320_white_mag,"$STR_RHS_MINE_SM320_W_MAG_DISPLAYNAME")
	MagazineItemMacro(rhs_mine_sm320_red_mag,"$STR_RHS_MINE_SM320_R_MAG_DISPLAYNAME")
	MagazineItemMacro(rhs_mine_sm320_green_mag,"$STR_RHS_MINE_SM320_G_MAG_DISPLAYNAME")
	MagazineItemMacro(rhs_mine_ozm72_a_mag,"$STR_RHS_CFGMAGAZINES_OZM72A")
	MagazineItemMacro(rhs_mine_ozm72_b_mag,"$STR_RHS_CFGMAGAZINES_OZM72B")
	MagazineItemMacro(rhs_mine_ozm72_c_mag,"$STR_RHS_CFGMAGAZINES_OZM72C")
	MagazineItemMacro(rhs_ec75_mag,"$STR_RHS_CFGMAGAZINES_EC75")
	MagazineItemMacro(rhs_ec200_mag,"$STR_RHS_CFGMAGAZINES_EC200")
	MagazineItemMacro(rhs_ec400_mag,"$STR_RHS_CFGMAGAZINES_EC400")
	MagazineItemMacro(rhs_ec75_sand_mag,"$STR_RHS_CFGMAGAZINES_EC75_SAND")
	MagazineItemMacro(rhs_ec200_sand_mag,"$STR_RHS_CFGMAGAZINES_EC200_SAND")
	MagazineItemMacro(rhs_ec400_sand_mag,"$STR_RHS_CFGMAGAZINES_EC400_SAND")
//Launcher Munitions
	MagazineItemMacro(rhs_rpg7_PG7VL_mag,$STR_RHS_PG7VL_NAME)
	MagazineItemMacro(rhs_rpg7_PG7V_mag,$STR_RHS_PG7V_NAME)
	MagazineItemMacro(rhs_rpg7_PG7VM_mag,$STR_RHS_PG7VM_NAME)
	MagazineItemMacro(rhs_rpg7_PG7VS_mag,$STR_RHS_PG7VS_NAME)
	MagazineItemMacro(rhs_rpg7_PG7VR_mag,$STR_RHS_PG7VR_NAME)
	MagazineItemMacro(rhs_rpg7_TBG7V_mag,$STR_RHS_TBG7V_NAME)
	MagazineItemMacro(rhs_rpg7_OG7V_mag,$STR_RHS_OG7V_NAME)
	MagazineItemMacro(rhs_rpg7_type69_airburst_mag,$STR_RHS_TYPE69_AIRBURST_NAME)
	MagazineItemMacroHidden(rhs_mag_9k38_rocket,$STR_RHS_CFGMAGAZINES_9K38_NAME)
//Hand Grenades
	MagazineItemMacro(rhs_mag_rgd5,$STR_RHS_RGD5_NAME)
	MagazineItemMacro(rhs_mag_rgn,$STR_RHS_RGN_NAME)
	MagazineItemMacro(rhs_mag_rgo,$STR_RHS_RGO_NAME)
	MagazineItemMacro(rhs_mag_rdg2_white,$STR_RHS_RDG2WHITE_NAME)
	MagazineItemMacro(rhs_mag_rdg2_black,$STR_RHS_RDG2BLACK_NAME)
	MagazineItemMacro(rhs_mag_nspn_yellow,$STR_RHS_NSPNYELLOW_NAME)
	MagazineItemMacro(rhs_mag_nspn_red,$STR_RHS_NSPNRED_NAME)
	MagazineItemMacro(rhs_mag_nspn_green,$STR_RHS_NSPNGREEN_NAME)
	MagazineItemMacro(rhs_mag_nspd,$STR_RHS_NSPD_NAME)
	MagazineItemMacro(rhs_mag_fakel,$STR_RHS_FAKEL_NAME)
	MagazineItemMacro(rhs_mag_fakels,$STR_RHS_FAKELS_NAME)
	MagazineItemMacro(rhs_mag_zarya2,$STR_RHS_ZARYA2_NAME)
	MagazineItemMacro(rhs_mag_plamyam,$STR_RHS_PLAMYAM_NAME)
//Pistol, 9x19mm
	MagazineItemMacro(rhs_mag_9x19_17,"$STR_RHS_MAG_9X19_17_PY")
//Sub Machine Gun, 9x19mm
	MagazineItemMacro(rhs_mag_9x19mm_7n21_20,$STR_RHS_CFGMAGAZINES_20RND_9X19_MAG_7N21)
	MagazineItemMacro(rhs_mag_9x19mm_7n31_20,$STR_RHS_CFGMAGAZINES_20RND_9X19_MAG_7N31)
	MagazineItemMacro(rhs_mag_9x19mm_7n21_44,$STR_RHS_CFGMAGAZINES_44RND_9X19_MAG_7N21)
	MagazineItemMacro(rhs_mag_9x19mm_7n31_44,$STR_RHS_CFGMAGAZINES_44RND_9X19_MAG_7N31)
//Pistol, 9x18mm
	MagazineItemMacroHidden(rhs_mag_9x18_12_57N181S,$STR_RHS_CFGMAGAZINES_12RND_9X18_MAG0)
	MagazineItemMacro(rhs_mag_9x18_8_57N181S,$STR_RHS_CFGMAGAZINES_8RND_9X18_MAG0)