
	/* ITEMS */

	class rhsusf_lerca1200_black: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Lerca 1200 Rangefinder (Black)";
		AUTHOR_MACRO
		model = "\rhsusf\addons\rhsusf_weapons\misc\lerca1200\rhs_lerca_1200_black.p3d";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";

		class TransportWeapons
		{
		   class _xx_lerca_1200_black
			{
				weapon = "rhsusf_bino_lerca_1200_black";
				count = 1;
			};
		};
	};

	class rhsusf_lerca1200_tan: rhsusf_lerca1200_black
	{
		scope = 1;
		scopeCurator = 1;

		displayName = "Lerca 1200 Rangefinder (Tan)";
		model = "\rhsusf\addons\rhsusf_weapons\misc\lerca1200\rhs_lerca_1200_tan.p3d";

		class TransportWeapons
		{
		   class _xx_lerca_1200_tan
			{
				weapon = "rhsusf_bino_lerca_1200_tan";
				count = 1;
			};
		};
	};

	class rhsusf_vector21: Item_Base_F
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Vector 21-B Rangefinder";
		AUTHOR_MACRO
		model = "\rhsusf\addons\rhsusf_weapons\misc\vector21\vector21.p3d";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";

		class TransportWeapons
		{
		   class _xx_rhsusf_lrf_vector21
			{
				weapon = "rhsusf_bino_lrf_vector21";
				count = 1;
			};
		};
	};

	class WeaponHolder_Single_limited_item_F;
	class rhs_magazine_base : WeaponHolder_Single_limited_item_F
	{
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
	};


	#define WEAPON_HOLDER_MACRO(weapName,weapClass,magName,dispName,baseClass)\
	class rhs_weapon_##weapClass## : ##baseClass##\
	{\
		WeaponMacro(weapClass,dispName)\
		MagazineMacro(magName)\
	};

	// Macro that determines which weapon
	#define WeaponMacro(classname,strname) \
	class TransportWeapons \
	  	{ \
	   		class ##classname## \
	   		{ \
				weapon = ##classname##; \
				count = 1; \
	   		}; \
	  	}; \
		\
	  	displayName= ##strname##;

	// Macro that determines which magazine will appear in the weapon when spawn.
	#define MagazineMacro(magazineclass) \
	class TransportMagazines \
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

		AUTHOR_MACRO

	  	vehicleClass = "WeaponsPrimary";
	  	editorCategory = "EdCat_Weapons";
	  	editorSubcategory = "EdSubcat_AssaultRifles";
	};

	// M24 SWS
	class rhs_weapon_m24sws : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_m24sws,M24 SWS)

		MagazineMacro(rhsusf_5Rnd_762x51_m118_special_Mag)

		editorSubcategory = "EdSubcat_SniperRifles";
	};

	class rhs_weapon_m24sws_wd : rhs_weapon_m24sws
	{
		WeaponMacro(rhs_weap_m24sws_wd,M24 SWS (Woodland))
	};

	class rhs_weapon_m24sws_d : rhs_weapon_m24sws
	{
		WeaponMacro(rhs_weap_m24sws_d,M24 SWS (Desert))
	};
//Legacy M24 classes
	class rhs_weapon_m24sws_blk : rhs_weapon_m24sws
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_m24sws_blk,M24 SWS (Black))
	};

	class rhs_weapon_m24sws_ghillie : rhs_weapon_m24sws
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_m24sws_ghillie,M24 SWS (Ghillie))
	};

	// M2010
	class rhs_weapon_XM2010 : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_XM2010,$STR_RHS_CFGWEAPONS_RIFLE_xm2010)
		MagazineMacro(rhsusf_5Rnd_300winmag_xm2010)

		editorSubcategory = "EdSubcat_SniperRifles";
	};

	class rhs_weapon_XM2010_d : rhs_weapon_XM2010
	{
		WeaponMacro(rhs_weap_XM2010_d,$STR_RHS_CFGWEAPONS_RIFLE_xm2010_d)
	};

	class rhs_weapon_XM2010_wd : rhs_weapon_XM2010
	{
		WeaponMacro(rhs_weap_XM2010_wd,$STR_RHS_CFGWEAPONS_RIFLE_xm2010_wd)
	};

	class rhs_weapon_XM2010_sa : rhs_weapon_XM2010
	{
		WeaponMacro(rhs_weap_XM2010_sa,$STR_RHS_CFGWEAPONS_RIFLE_xm2010_sa)
	};

	// M40A5
	class rhs_weapon_m40a5 : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_m40a5,M40A5)
		MagazineMacro(rhsusf_10Rnd_762x51_m118_special_Mag)

		editorSubcategory = "EdSubcat_SniperRifles";
	};

	class rhs_weapon_m40a5_d : rhs_weapon_m40a5
	{
		WeaponMacro(rhs_weap_m40a5_d,M40A5 (Desert))
	};

	class rhs_weapon_m40a5_wd : rhs_weapon_m40a5
	{
		WeaponMacro(rhs_weap_m40a5_wd,M40A5 (Woodland))
	};

	// M4
	class rhs_weapon_m4 : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_m4,$STR_RHS_CFGWEAPONS_RIFLE_M4)
		MagazineMacro(rhs_mag_30Rnd_556x45_M855A1_Stanag)
	};

	class rhs_weapon_m4_carryhandle : rhs_weapon_m4
	{
		WeaponMacro(rhs_weap_m4_carryhandle,$STR_RHS_CFGWEAPONS_RIFLE_M4_carry)
	};

	class rhs_weapon_m4_carryhandle_pmag : rhs_weapon_m4
	{
		scope = 1;
		scopecurator = 1;
		WeaponMacro(rhs_weap_m4_carryhandle_pmag,$STR_RHS_CFGWEAPONS_RIFLE_M4_carryp)
	};

	class rhs_weapon_m4_grip : rhs_weapon_m4
	{
		WeaponMacro(rhs_weap_m4_grip,$STR_RHS_CFGWEAPONS_RIFLE_M4_foreg)
	};

	class rhs_weapon_m4_grip2 : rhs_weapon_m4
	{
		WeaponMacro(rhs_weap_m4_grip2,$STR_RHS_CFGWEAPONS_RIFLE_M4_afg)
	};

	class rhs_weapon_m4_grip3 : rhs_weapon_m4
	{
		WeaponMacro(rhs_weap_m4_grip3,$STR_RHS_CFGWEAPONS_RIFLE_M4_grip)
	};

	class rhs_weapon_m4_m320 : rhs_weapon_m4
	{
		WeaponMacro(rhs_weap_m4_m320,$STR_RHS_CFGWEAPONS_RIFLE_M4_M320)
	};

	class rhs_weapon_m4_m203 : rhs_weapon_m4
	{
		WeaponMacro(rhs_weap_m4_m203,$STR_RHS_CFGWEAPONS_RIFLE_M4_M203)
	};

	class rhs_weapon_m4_m203S : rhs_weapon_m4
	{
		WeaponMacro(rhs_weap_m4_m203S,$STR_RHS_CFGWEAPONS_RIFLE_M4_M203S)
	};

	// M4A1
	class rhs_weapon_m4a1 : rhs_weapon_m4
	{
		WeaponMacro(rhs_weap_m4a1,$STR_RHS_CFGWEAPONS_RIFLE_M4A1)
	};

	class rhs_weapon_m4a1_carryhandle : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_carryhandle,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_carryhandle)
	};

	class rhs_weapon_m4a1_carryhandle_pmag : rhs_weapon_m4a1
	{
		scope = 1;
		scopecurator = 1;
		WeaponMacro(rhs_weap_m4a1_carryhandle_pmag,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_carryp)
	};

	class rhs_weapon_m4a1_d : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_d,M4A1 Desert)
	};

	class rhs_weapon_m4a1_d_mstock : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_d_mstock,M4A1 Desert (MagPull))
	};

	class rhs_weapon_m4a1_wd : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_wd,M4A1 Woodland)
	};

	class rhs_weapon_m4a1_wd_mstock : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_wd_mstock,M4A1 Woodland (MagPull))
	};

	class rhs_weapon_m4a1_grip : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_grip,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_foreg)
	};
	class rhs_weapon_m4a1_grip2 : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_grip2,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_afg)
	};

	class rhs_weapon_m4a1_carryhandle_grip : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_carryhandle_grip,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_CARRYHANDLE_foreg)
	};

	class rhs_weapon_m4a1_carryhandle_grip2 : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_carryhandle_grip2,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_carryhandle_afg)
	};

	class rhs_weapon_m4a1_carryhandle_grip3 : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_carryhandle_grip3,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_CARRYHANDLE_grip)
	};

	class rhs_weapon_m4a1_m320 : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_m320,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_M320)
	};

	class rhs_weapon_m4a1_m203 : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_m203,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_M203)
	};

	class rhs_weapon_m4a1_m203s : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_m203s,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_M203S)
	};

	class rhs_weapon_m4a1_carryhandle_m203 : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_carryhandle_m203,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_carryhandle_M203)
	};

	class rhs_weapon_m4a1_carryhandle_m203S : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_carryhandle_m203S,$STR_RHS_CFGWEAPONS_RIFLE_M4A1_carryhandle_M203S)
	};

	class rhs_weapon_m4a1_m203s_d : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_m203s_d,M4A1 M203s Desert)
	};

	class rhs_weapon_m4a1_m203s_wd : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_m4a1_m203s_wd,M4A1 M203s Woodland)
	};

	// M4A1 Bk II
	class rhs_weapon_m4a1_blockII : rhs_weapon_m4
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_m4a1_blockII,$STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII)
	};

	class rhs_weapon_m4a1_blockII_KAC : rhs_weapon_m4a1_blockII
	{
		WeaponMacro(rhs_weap_m4a1_blockII_KAC,$STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_KAC)
	};

	class rhs_weapon_m4a1_blockII_grip2 : rhs_weapon_m4a1_blockII
	{
		WeaponMacro(rhs_weap_m4a1_blockII_grip2,$STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg)
	};

	class rhs_weapon_m4a1_blockII_grip2_KAC : rhs_weapon_m4a1_blockII
	{
		WeaponMacro(rhs_weap_m4a1_blockII_grip2_KAC,$STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg_kac)
	};

	class rhs_weapon_m4a1_blockII_M203 : rhs_weapon_m4a1_blockII
	{
		WeaponMacro(rhs_weap_m4a1_blockII_M203,$STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_M203)
	};

	// Mk18
	class rhs_weapon_mk18 : rhs_weapon_m4
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_mk18,$STR_RHS_CFGWEAPONS_RIFLE_MK18)
	};

	class rhs_weapon_mk18_KAC : rhs_weapon_mk18
	{
		WeaponMacro(rhs_weap_mk18_KAC,$STR_RHS_CFGWEAPONS_RIFLE_MK18_KAC)
	};

	class rhs_weapon_mk18_grip2 : rhs_weapon_mk18
	{
		WeaponMacro(rhs_weap_mk18_grip2,$STR_RHS_CFGWEAPONS_RIFLE_MK18_afg)
	};

	class rhs_weapon_mk18_grip2_KAC : rhs_weapon_mk18
	{
		WeaponMacro(rhs_weap_mk18_grip2_KAC,$STR_RHS_CFGWEAPONS_RIFLE_MK18_afg_kac)
	};

	class rhs_weapon_mk18_m320 : rhs_weapon_mk18
	{
		WeaponMacro(rhs_weap_mk18_m320,$STR_RHS_CFGWEAPONS_RIFLE_MK18_M320)
	};

	// M16A4
	class rhs_weapon_m16a4 : rhs_weapon_m4
	{
		WeaponMacro(rhs_weap_m16a4,$STR_RHS_CFGWEAPONS_RIFLE_M16A4)
	};

	class rhs_weapon_m16a4_carryhandle : rhs_weapon_m16a4
	{
		WeaponMacro(rhs_weap_m16a4_carryhandle,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_carry)
	};

	class rhs_weapon_m16a4_carryhandle_pmag : rhs_weapon_m16a4
	{
		scope = 1;
		scopecurator = 1;
		WeaponMacro(rhs_weap_m16a4_carryhandle_pmag,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_carryp)
	};


	class rhs_weapon_m16a4_grip : rhs_weapon_m16a4
	{
		WeaponMacro(rhs_weap_m16a4_grip,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_foreg)
	};

	class rhs_weapon_m16a4_grip2 : rhs_weapon_m16a4
	{
		WeaponMacro(rhs_weap_m16a4_grip2,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_grip)
	};

	class rhs_weapon_m16a4_carryhandle_grip : rhs_weapon_m16a4
	{
		WeaponMacro(rhs_weap_m16a4_carryhandle_grip,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_carry_foreg)
	};

	class rhs_weapon_m16a4_carryhandle_grip2 : rhs_weapon_m16a4
	{
		WeaponMacro(rhs_weap_m16a4_carryhandle_grip2,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_grip)
	};

	class rhs_weapon_m16a4_carryhandle_grip_pmag : rhs_weapon_m16a4
	{
		scope = 1;
		scopecurator = 1;
		WeaponMacro(rhs_weap_m16a4_carryhandle_grip_pmag,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_carryp_foreg)
	};

	class rhs_weapon_m16a4_carryhandle_grip2_pmag : rhs_weapon_m16a4
	{
		scope = 1;
		scopecurator = 1;
		WeaponMacro(rhs_weap_m16a4_carryhandle_grip2_pmag,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_carryp_grip)
	};

	class rhs_weapon_m16a4_carryhandle_M203 : rhs_weapon_m16a4
	{
		WeaponMacro(rhs_weap_m16a4_carryhandle_M203,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_carry_M203)
	};

	class rhs_weapon_m16a4_imod : rhs_weapon_m16a4
	{
		WeaponMacro(rhs_weap_m16a4_imod,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_IMOD)
	};
	class rhs_weapon_m16a4_imod_M203 : rhs_weapon_m16a4
	{
		WeaponMacro(rhs_weap_m16a4_imod_M203,$STR_RHS_CFGWEAPONS_RIFLE_M16A4_IMOD_M203)
	};

	class rhs_weapon_hk416d10 : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_hk416d10,$STR_RHS_CFGWEAPONS_RIFLE_HK416D10)
	};

	class rhs_weapon_hk416d10_LMT : rhs_weapon_hk416d10
	{
		WeaponMacro(rhs_weap_hk416d10_LMT,$STR_RHS_CFGWEAPONS_RIFLE_HK416D10_LMT)
	};

	class rhs_weapon_hk416d10_m320 : rhs_weapon_hk416d10
	{
		WeaponMacro(rhs_weap_hk416d10_m320,$STR_RHS_CFGWEAPONS_RIFLE_HK416D10_M320)
	};

	class rhs_weapon_hk416d145 : rhs_weapon_m4a1
	{
		WeaponMacro(rhs_weap_hk416d145,$STR_RHS_CFGWEAPONS_RIFLE_HK416D145)
	};

	class rhs_weapon_hk416d145_m320 : rhs_weapon_hk416d145
	{
		WeaponMacro(rhs_weap_hk416d145_m320,$STR_RHS_CFGWEAPONS_RIFLE_HK416D145_M320)
	};

	class rhs_weapon_hk416d10_LMT_d : rhs_weapon_hk416d10_LMT
	{
		WeaponMacro(rhs_weap_hk416d10_LMT_d,$STR_RHS_CFGWEAPONS_RIFLE_HK416D10_LMT_D)
	};

	class rhs_weapon_hk416d10_LMT_wd : rhs_weapon_hk416d10_LMT
	{
		WeaponMacro(rhs_weap_hk416d10_LMT_wd,$STR_RHS_CFGWEAPONS_RIFLE_HK416D10_LMT_WD)
	};

	class rhs_weapon_hk416d145_d : rhs_weapon_hk416d145
	{
		WeaponMacro(rhs_weap_hk416d145_d,$STR_RHS_CFGWEAPONS_RIFLE_HK416D145_D)
	};

	class rhs_weapon_hk416d145_d_2 : rhs_weapon_hk416d145
	{
		WeaponMacro(rhs_weap_hk416d145_d_2,$STR_RHS_CFGWEAPONS_RIFLE_HK416D145_D_2)
	};

	class rhs_weapon_hk416d145_wd : rhs_weapon_hk416d145
	{
		WeaponMacro(rhs_weap_hk416d145_wd,$STR_RHS_CFGWEAPONS_RIFLE_HK416D145_WD)
	};

	class rhs_weapon_hk416d145_wd_2 : rhs_weapon_hk416d145
	{
		WeaponMacro(rhs_weap_hk416d145_wd_2,$STR_RHS_CFGWEAPONS_RIFLE_HK416D145_WD_2)
	};

	// M249
	class rhs_weapon_m249_pip : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_m249_pip,$STR_RHS_CFGWEAPONS_RIFLE_M249PIP)
		MagazineMacro(rhsusf_100Rnd_556x45_soft_pouch)
		editorSubcategory = "EdSubcat_MachineGuns";
	};
	class rhs_weapon_m249_pip_ris : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m249_pip_ris,$STR_RHS_CFGWEAPONS_RIFLE_M249PIP_RIS)
	};
	class rhs_weapon_m249 : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m249,$STR_RHS_CFGWEAPONS_RIFLE_M249)
	};
	class rhs_weapon_m249_pip_S : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m249_pip_S,$STR_RHS_CFGWEAPONS_RIFLE_M249PIP_S)
	};
	class rhs_weapon_m249_pip_S_para : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m249_pip_S_para,$STR_RHS_CFGWEAPONS_RIFLE_M249PIP_S_PARA)
	};
	class rhs_weapon_m249_pip_S_vfg : rhs_weapon_m249_pip
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_m249_pip_S_vfg,$STR_RHS_CFGWEAPONS_RIFLE_M249PIP_S_VFG)
	};
	class rhs_weapon_m249_pip_L : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m249_pip_L,$STR_RHS_CFGWEAPONS_RIFLE_M249PIP_L)
	};
	class rhs_weapon_m249_pip_L_para : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m249_pip_L_para,$STR_RHS_CFGWEAPONS_RIFLE_M249PIP_L_para)
	};
	class rhs_weapon_m249_pip_L_vfg : rhs_weapon_m249_pip
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_m249_pip_L_vfg,$STR_RHS_CFGWEAPONS_RIFLE_M249PIP_L_VFG)
	};
	class rhs_weapon_m249_light_S : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m249_light_S,$STR_RHS_CFGWEAPONS_RIFLE_M249LIGHT_S)
	};
	class rhs_weapon_m249_light_L : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m249_light_L,$STR_RHS_CFGWEAPONS_RIFLE_M249LIGHT_L)
	};

	// M27 IAR
	class rhs_weapon_m27iar : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m27iar,$STR_RHS_CFGWEAPONS_RIFLE_M27IAR)
		MagazineMacro(rhs_mag_30Rnd_556x45_M855A1_Stanag)
	};

	class rhs_weapon_m27iar_grip : rhs_weapon_m27iar
	{
		WeaponMacro(rhs_weap_m27iar_grip,$STR_RHS_CFGWEAPONS_RIFLE_M27IAR_GRIP)
	};

	// M240
	class rhs_weapon_m240B : rhs_weapon_m249_pip
	{
		WeaponMacro(rhs_weap_m240B,M240B)
		MagazineMacro(rhsusf_50Rnd_762x51)
	};

	class rhs_weapon_m240B_CAP : rhs_weapon_m240B
	{
		scope = 1;
		scopecurator = 1;
		WeaponMacro(rhs_weap_m240B_CAP,M240B (CAP))
	};

	class rhs_weapon_m240G : rhs_weapon_m240B
	{
		WeaponMacro(rhs_weap_m240G,M240G)
	};
	// M14


	WEAPON_HOLDER_MACRO(m14,rhs_weap_m14,rhsusf_20Rnd_762x51_m993_Mag,						"M14",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_wd,rhs_weap_m14_wd,rhsusf_20Rnd_762x51_m993_Mag,					"M14 (Woodland)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_d,rhs_weap_m14_d,rhsusf_20Rnd_762x51_m993_Mag,						"M14 (Desert)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_fiberglass,rhs_weap_m14_fiberglass,rhsusf_20Rnd_762x51_m993_Mag,			"M14 (Fiberglass)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_rail,rhs_weap_m14_rail,rhsusf_20Rnd_762x51_m993_Mag,					"M14 (Rail)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_rail_wd,rhs_weap_m14_rail_wd,rhsusf_20Rnd_762x51_m993_Mag,				"M14 (Rail/Woodland)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_rail_d,rhs_weap_m14_rail_d,rhsusf_20Rnd_762x51_m993_Mag,				"M14 (Rail/Desert)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_rail_fiberglass,rhs_weap_m14_rail_fiberglass,rhsusf_20Rnd_762x51_m993_Mag,		"M14 (Rail/Fiberglass)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_ris,rhs_weap_m14_ris,rhsusf_20Rnd_762x51_m993_Mag,					"M14 (RIS)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_ris_wd,rhs_weap_m14_ris_wd,rhsusf_20Rnd_762x51_m993_Mag,				"M14 (RIS/Woodland)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_ris_d,rhs_weap_m14_ris_d,rhsusf_20Rnd_762x51_m993_Mag,					"M14 (RIS/Desert)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_ris_fiberglass,rhs_weap_m14_ris_fiberglass,rhsusf_20Rnd_762x51_m993_Mag,		"M14 (RIS/Fiberglass)",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_socom,rhs_weap_m14_socom,rhsusf_20Rnd_762x51_m993_Mag,					"SOCOM M16",rhs_weapon_XM2010)
	WEAPON_HOLDER_MACRO(m14_socom_rail,rhs_weap_m14_socom_rail,rhsusf_20Rnd_762x51_m993_Mag,			"SOCOM M16 (Rail)",rhs_weapon_XM2010)
	// M14 EBR
	class rhs_weapon_m14ebrri : rhs_weapon_XM2010
	{
		WeaponMacro(rhs_weap_m14ebrri,M14 EBR-RI)
		MagazineMacro(rhsusf_20Rnd_762x51_m993_Mag)
	};

	// SR25
	class rhs_weapon_sr25 : rhs_weapon_m14ebrri
	{
		WeaponMacro(rhs_weap_sr25,SR-25)
		MagazineMacro(rhsusf_20Rnd_762x51_SR25_m118_special_Mag)
	};

	class rhs_weapon_sr25_ec : rhs_weapon_sr25
	{
		WeaponMacro(rhs_weap_sr25_ec,SR-25 EC)
	};

	// SCAR-H
	class rhs_weapon_mk17_CQC : rhs_weapon_m14ebrri
	{
		WeaponMacro(rhs_weap_mk17_CQC,$STR_RHS_CFGWEAPONS_RIFLE_MK17_CQC)
		MagazineMacro(rhs_mag_20Rnd_SCAR_762x51_m80_ball)
	};

	class rhs_weapon_mk17_STD : rhs_weapon_mk17_CQC
	{
		WeaponMacro(rhs_weap_mk17_STD,$STR_RHS_CFGWEAPONS_RIFLE_MK17_STD)
	};

	class rhs_weapon_mk17_LB : rhs_weapon_mk17_CQC
	{
		WeaponMacro(rhs_weap_mk17_LB,$STR_RHS_CFGWEAPONS_RIFLE_MK17_LB)
	};

	// M107
	class rhs_weapon_M107 : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;
		WeaponMacro(rhs_weap_M107,$STR_RHS_CFGWEAPONS_RIFLE_M107)
		MagazineMacro(rhsusf_mag_10Rnd_STD_50BMG_M33)
	};
	class rhs_weapon_M107_w : rhs_weapon_M107
	{
		WeaponMacro(rhs_weap_M107_w,$STR_RHS_CFGWEAPONS_RIFLE_M107_W)
	};
	class rhs_weapon_M107_d : rhs_weapon_M107
	{
		WeaponMacro(rhs_weap_M107_d,$STR_RHS_CFGWEAPONS_RIFLE_M107_D)
	};

	// M590
	class rhs_weapon_M590_5RD : rhs_weapon_m16a4
	{
		WeaponMacro(rhs_weap_M590_5RD,M590A1 (Short))
		MagazineMacro(rhsusf_5Rnd_00Buck)
	};

	class rhs_weapon_M590_8RD : rhs_weapon_M590_5RD
	{
		WeaponMacro(rhs_weap_M590_8RD,M590A1 (Long))
		MagazineMacro(rhsusf_8Rnd_00Buck)
	};

	// MP7
	class rhsusf_weapon_MP7A1_base_f : rhs_weapon_m16a4
	{
		WeaponMacro(rhsusf_weap_MP7A2, MP7)
		MagazineMacro(rhsusf_mag_40Rnd_46x30_FMJ)
	  	editorSubcategory = "EdSubcat_SubMachineGuns";
	};

	class rhsusf_weapon_MP7A1_winter : rhsusf_weapon_MP7A1_base_f
	{
		WeaponMacro(rhsusf_weap_MP7A2_winter, MP7 (Winter))
	};

	class rhsusf_weapon_MP7A1_desert : rhsusf_weapon_MP7A1_base_f
	{
		WeaponMacro(rhsusf_weap_MP7A2_desert, MP7 (Desert))
	};

	class rhsusf_weapon_MP7A1_aor1 : rhsusf_weapon_MP7A1_base_f
	{
		WeaponMacro(rhsusf_weap_MP7A2_aor1, MP7 (AOR1))
	};

	// M1911
	class rhsusf_weapon_m1911a1 : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhsusf_weap_m1911a1,$STR_RHS_CFGWEAPONS_PISTOL_M1911A1)
		MagazineMacro(rhsusf_mag_7x45acp_MHP)

		vehicleClass = "WeaponsHandguns";
		editorSubcategory = "EdSubcat_Pistols";
		model = "\A3\Weapons_F\DummyPistol_Single.p3d";
	};

	// Glock 17
	class rhsusf_weapon_glock17g4 : rhsusf_weapon_m1911a1
	{
		WeaponMacro(rhsusf_weap_glock17g4,$STR_RHS_CFGWEAPONS_PISTOL_GLOCK17)
		MagazineMacro(rhsusf_mag_17Rnd_9x19_JHP)
	};

	// M9
	class rhsusf_weapon_m9 : rhsusf_weapon_m1911a1
	{
		WeaponMacro(rhsusf_weap_m9,$STR_RHS_CFGWEAPONS_PISTOL_m9)
		MagazineMacro(rhsusf_mag_15Rnd_9x19_JHP)
	};

	class rhs_weapon_M320 : rhsusf_weapon_m1911a1
	{
		WeaponMacro(rhs_weap_M320,$STR_RHS_CFGWEAPONS_RIFLE_M320)
		MagazineMacro(rhs_mag_M433_HEDP)
	};

	// M32
	class rhs_weapon_M32 : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_m32,M32 MGL)

		MagazineMacro(rhsusf_mag_6Rnd_M441_HE)

		editorSubcategory = "EdSubcat_Launchers";
	};

	// M136
	class rhs_weapon_M136 : rhs_weapon_base
	{
		scope = 1;
		scopeCurator = 1;

		WeaponMacro(rhs_weap_M136,M136 (HEAT))

		MagazineMacro(rhs_m136_mag)

		vehicleClass = "WeaponsSecondary";
		editorSubcategory = "EdSubcat_Launchers";
		model = "\A3\Weapons_F\DummyLauncher_Single.p3d";
	};

	class rhs_weapon_M136_hedp : rhs_weapon_M136
	{
		WeaponMacro(rhs_weap_M136_hedp,M136 (HEDP))
		MagazineMacro(rhs_m136_hedp_mag)
	};

	class rhs_weapon_M136_hp : rhs_weapon_M136
	{
		WeaponMacro(rhs_weap_M136_hp,M136 (HP))
		MagazineMacro(rhs_m136_hp_mag)
	};

	// M72A7
	class rhs_weapon_m72a7 : rhs_weapon_M136
	{
		WeaponMacro(rhs_weap_m72a7,$STR_RHSUSF_M72A7)
		MagazineMacro(rhs_m72a7_mag)
	};

	// SMAW
	class rhs_weapon_smaw : rhs_weapon_M136
	{
		WeaponMacro(rhs_weap_smaw,SMAW)
		MagazineMacro(rhs_mag_smaw_HEDP)
	};

	class rhs_weapon_smaw_green : rhs_weapon_smaw
	{
		WeaponMacro(rhs_weap_smaw_green,SMAW Green)
	};

	// Javelin
	class rhs_weapon_fgm148 : rhs_weapon_M136
	{
		WeaponMacro(rhs_weap_fgm148,FGM-148 Javelin)
		MagazineMacro(rhs_fgm148_magazine_AT)
	};

	// Stinger
	class rhs_weapon_fim92 : rhs_weapon_M136
	{
		WeaponMacro(rhs_weap_fim92,FIM-92F)
		MagazineMacro(rhs_fim92_mag)
	};

	// MAAWS
	class rhs_weapon_maaws : rhs_weapon_M136
	{
		WeaponMacro(rhs_weap_maaws,M3 MAAWS)
		MagazineMacro(rhs_mag_maaws_HEAT)
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
//Hand Grenades
	MagazineItemMacro(rhs_mag_m67,"M67 Fragmentation Grenade")
	MagazineItemMacro(rhs_mag_m69,"M69 Practice Grenade")
	MagazineItemMacro(rhs_mag_mk84,"M84 Stun Grenade")
	MagazineItemMacro(rhs_mag_an_m8hc,"AN-M8HC White Smoke")
	MagazineItemMacro(rhs_mag_an_m14_th3,"AN-M14 TH3 Incendenary Grenade")
	MagazineItemMacro(rhs_mag_m7a3_cs,"M7A3 CS Gas Grenade")
	MagazineItemMacro(rhs_mag_mk3a2,"MK3A2 Concussion Grenade")
	MagazineItemMacro(rhs_mag_m18_green,"M18 Green Smoke Grenade")
	MagazineItemMacro(rhs_mag_m18_purple,"M18 Purple Smoke Grenade")
	MagazineItemMacro(rhs_mag_m18_red,"M18 Red Smoke Grenade")
	MagazineItemMacro(rhs_mag_m18_yellow,"M18 Yellow Smoke Grenade")
//Rifle, 5.56mm
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855A1_Stanag,"30rnd STANAG M855A1")
	MagazineItemMacroHidden(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,"30rnd STANAG M855A1 (No Tracers)")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,"30rnd STANAG M856A1 (Tracer)")
	MagazineItemMacroHidden(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green,"30rnd STANAG M856A1 (Green Tracer)")
	MagazineItemMacroHidden(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow,"30rnd STANAG M856A1 (Yellow Tracer)")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855_Stanag,"30rnd STANAG M855")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red,"30rnd STANAG M856 (Tracer)")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_Mk318_Stanag,"30rnd STANAG Mk318")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_Mk262_Stanag,"30rnd STANAG Mk262")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M200_Stanag,"30rnd STANAG M200 (Blank)")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855A1_PMAG,"30rnd PMAG M855A1")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red,"30rnd PMAG M856A1 (Tracer)")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855_PMAG,"30rnd PMAG M855")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red,"30rnd PMAG M856 (Tracer)")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_Mk318_PMAG,"30rnd PMAG Mk318")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_Mk262_PMAG,"30rnd PMAG Mk262")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan,"30rnd Tan PMAG M855A1")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red,"30rnd Tan PMAG M856A1 (Tracer)")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855_PMAG_Tan,"30rnd Tan PMAG M855")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red,"30rnd Tan PMAG M856 (Tracer)")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan,"30rnd Tan PMAG Mk318")
	MagazineItemMacro(rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan,"30rnd Tan PMAG Mk262")
	MagazineItemMacro(rhs_mag_100Rnd_556x45_M855A1_cmag,"100rnd C-Mag M855A1")
	MagazineItemMacro(rhs_mag_100Rnd_556x45_M855A1_cmag_mixed,"100rnd C-Mag M855A1 (Mixed)")
	MagazineItemMacro(rhs_mag_100Rnd_556x45_M855_cmag,"100rnd C-Mag M855")
	MagazineItemMacro(rhs_mag_100Rnd_556x45_M855_cmag_mixed,"100rnd C-Mag M855 (Mixed)")
	MagazineItemMacro(rhs_mag_100Rnd_556x45_Mk318_cmag,"100rnd C-Mag Mk318")
	MagazineItemMacro(rhs_mag_100Rnd_556x45_Mk262_cmag,"100rnd C-Mag Mk262")
//UGL 40mm
	MagazineItemMacro(rhs_mag_M441_HE,"M441 HE Grenade Round")
	MagazineItemMacro(rhs_mag_M433_HEDP,"M433 HEDP Grenade Round")
	MagazineItemMacro(rhs_mag_M397_HET,"M397 HET Grenade Round")
	MagazineItemMacro(rhs_mag_M781_Practice,"M781 Practice Round")
	MagazineItemMacro(rhs_mag_M4009,"GL Stun Grenade Round")
	MagazineItemMacro(rhs_mag_m576,"M576 Buckshot Round")
	MagazineItemMacro(rhs_mag_M585_white,"M585 White Flare Round")
	MagazineItemMacro(rhs_mag_M661_green,"M661 Green Flare Round")
	MagazineItemMacro(rhs_mag_M662_red,"M662 Red Flare Round")
	MagazineItemMacro(rhs_mag_M713_red,"M713 Red Smoke Round")
	MagazineItemMacro(rhs_mag_M714_white,"M714 White Smoke Round")
	MagazineItemMacro(rhs_mag_M715_green,"M715 Green Smoke Round")
	MagazineItemMacro(rhs_mag_M716_yellow,"M716 Yellow Smoke Round")
	MagazineItemMacro(rhsusf_mag_6Rnd_M441_HE,"6Rnd M441 HE Grenades")
	MagazineItemMacro(rhsusf_mag_6Rnd_M433_HEDP,"6Rnd M433 HEDP Grenades")
	MagazineItemMacro(rhsusf_mag_6Rnd_M397_HET,"6Rnd M397 HET Grenades")
	MagazineItemMacro(rhsusf_mag_6Rnd_M781_Practice,"6Rnd M781 Practice")
	MagazineItemMacro(rhsusf_mag_6Rnd_m4009,"6Rnd GL Stun Grenades")
	MagazineItemMacro(rhsusf_mag_6Rnd_M576_Buckshot,"6Rnd M576 Buckshot")
	MagazineItemMacro(rhsusf_mag_6Rnd_M585_white,"6Rnd M585 White Flares")
	MagazineItemMacro(rhsusf_mag_6Rnd_M661_green,"6Rnd M661 Green Flares")
	MagazineItemMacro(rhsusf_mag_6Rnd_M662_red,"6Rnd M662 Red Flares")
	MagazineItemMacro(rhsusf_mag_6Rnd_M713_red,"6Rnd M713 Red Smoke")
	MagazineItemMacro(rhsusf_mag_6Rnd_M714_white,"6Rnd M714 White Smoke")
	MagazineItemMacro(rhsusf_mag_6Rnd_M715_green,"6Rnd M715 Green Smoke")
	MagazineItemMacro(rhsusf_mag_6Rnd_M716_yellow,"6Rnd M716 Yellow Smoke")
//Rifle, .300WM
	MagazineItemMacro(rhsusf_5Rnd_300winmag_xm2010,"5rnd .300WM Mk248 MOD 1")
//Rifle, 12.7mm
	MagazineItemMacro(rhsusf_mag_10Rnd_STD_50BMG_M33,"10rnd M107 M33")
	MagazineItemMacro(rhsusf_mag_10Rnd_STD_50BMG_mk211,"10rnd M107 Mk211")
//Shotgun, 12Ga
	MagazineItemMacro(rhsusf_5Rnd_00Buck,"5Rnd .00 Buckshot")
	MagazineItemMacro(rhsusf_8Rnd_00Buck,"8Rnd .00 Buckshot")
	MagazineItemMacro(rhsusf_5Rnd_Slug,"5Rnd 12g Slug")
	MagazineItemMacro(rhsusf_8Rnd_Slug,"8Rnd 12g Slug")
	MagazineItemMacro(rhsusf_5Rnd_HE,"5Rnd 12g HE-EP")
	MagazineItemMacro(rhsusf_8Rnd_HE,"8Rnd 12g HE-EP")
	MagazineItemMacro(rhsusf_5Rnd_FRAG,"5Rnd 12g FRAG")
	MagazineItemMacro(rhsusf_8Rnd_FRAG,"8Rnd 12g FRAG")
//Machine Gun, 5.56mm
	MagazineItemMacro(rhsusf_100Rnd_556x45_soft_pouch,"100rnd M249 Softpack M855A1")
	MagazineItemMacro(rhsusf_100Rnd_556x45_mixed_soft_pouch,"100rnd M249 Softpack M855A1 (Mixed)")
	MagazineItemMacro(rhsusf_100Rnd_556x45_M855_soft_pouch,"100rnd M249 Softpack M855")
	MagazineItemMacro(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,"100rnd M249 Softpack M855 (Mixed)")
	MagazineItemMacro(rhsusf_100Rnd_556x45_M200_soft_pouch,"100rnd M249 Softpack M200 (Blank)")
	MagazineItemMacro(rhsusf_200Rnd_556x45_soft_pouch,"200rnd M249 Softpack M855A1")
	MagazineItemMacro(rhsusf_200Rnd_556x45_mixed_soft_pouch,"200rnd M249 Softpack M855A1 (Mixed)")
	MagazineItemMacro(rhsusf_200Rnd_556x45_M855_soft_pouch,"200rnd M249 Softpack M855")
	MagazineItemMacro(rhsusf_200Rnd_556x45_M855_mixed_soft_pouch,"200rnd M249 Softpack M855 (Mixed)")
	MagazineItemMacro(rhsusf_200Rnd_556x45_box,"200rnd M249 Box M855A1")
	MagazineItemMacro(rhsusf_200Rnd_556x45_mixed_box,"200rnd M249 Box M855A1 (Mixed)")
	MagazineItemMacro(rhsusf_200Rnd_556x45_M855_box,"200rnd M249 Box M855")
	MagazineItemMacro(rhsusf_200Rnd_556x45_M855_mixed_box,"200rnd M249 Box M855 (Mixed)")
//Machine Gun, 7.62mm
	MagazineItemMacro(rhsusf_50Rnd_762x51,"50rnd M240 Softpack M80")
	MagazineItemMacro(rhsusf_50Rnd_762x51_m61_ap,"50rnd M240 Softpack M61 AP")
	MagazineItemMacro(rhsusf_50Rnd_762x51_m62_tracer,"50rnd M240 Softpack M62 (Tracer)")
	MagazineItemMacro(rhsusf_50Rnd_762x51_m80a1epr,"50rnd M240 Softpack M80A1 EPR")
	MagazineItemMacro(rhsusf_50Rnd_762x51_m82_blank,"50rnd M240 Belt M82 (Blank)")
	MagazineItemMacro(rhsusf_100Rnd_762x51,"100rnd M240 Box M80")
	MagazineItemMacro(rhsusf_100Rnd_762x51_m61_ap,"100rnd M240 Box M61 AP")
	MagazineItemMacro(rhsusf_100Rnd_762x51_m62_tracer,"100rnd M240 Box M62 (Tracer)")
	MagazineItemMacro(rhsusf_100Rnd_762x51_m80a1epr,"100rnd M240 Box M80A1 EPR")
	MagazineItemMacro(rhsusf_100Rnd_762x51_m82_blank,"100rnd M240 Box M82 (Blank)")
//Rifle, 7.62mm
	MagazineItemMacro(rhsusf_20Rnd_762x51_m118_special_Mag,"20rnd M14 M118")
	MagazineItemMacro(rhsusf_20Rnd_762x51_m993_Mag,"20rnd M14 M993 AP")
	MagazineItemMacro(rhsusf_20Rnd_762x51_m80_Mag,"20rnd M14 M80 Ball")
	MagazineItemMacro(rhsusf_20Rnd_762x51_m62_Mag,"20rnd M14 M62 (Tracer)")
	MagazineItemMacro(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,"20rnd SR-25 M118")
	MagazineItemMacro(rhsusf_20Rnd_762x51_SR25_mk316_special_Mag,"20rnd SR-25 Mk316 Mod 0")
	MagazineItemMacro(rhsusf_20Rnd_762x51_SR25_m993_Mag,"20rnd SR-25 M993 AP")
	MagazineItemMacro(rhsusf_20Rnd_762x51_SR25_m62_Mag,"20rnd SR-25 M62 (Tracer)")
	MagazineItemMacro(rhs_mag_20Rnd_SCAR_762x51_m80_ball,"20rnd SCAR M80")
	MagazineItemMacro(rhs_mag_20Rnd_SCAR_762x51_m80a1_epr,"20rnd SCAR M80A1 EPR")
	MagazineItemMacro(rhs_mag_20Rnd_SCAR_762x51_m62_tracer,"20rnd SCAR M62 Tracer")
	MagazineItemMacro(rhs_mag_20Rnd_SCAR_762x51_m61_ap,"20rnd SCAR M61 AP")
	MagazineItemMacro(rhs_mag_20Rnd_SCAR_762x51_m118_special,"20rnd SCAR M118 Ball")
	MagazineItemMacro(rhs_mag_20Rnd_SCAR_762x51_mk316_special,"20rnd SCAR Mk316 Mod 0")
	MagazineItemMacro(rhsusf_5Rnd_762x51_m118_special_Mag,"5rnd M118")
	MagazineItemMacro(rhsusf_5Rnd_762x51_m993_Mag,"5rnd M993 AP")
	MagazineItemMacro(rhsusf_5Rnd_762x51_m62_Mag,"5rnd M62 (Tracer)")
	MagazineItemMacro(rhsusf_10Rnd_762x51_m118_special_Mag,"10rnd AICS M118")
	MagazineItemMacro(rhsusf_10Rnd_762x51_m993_Mag,"10rnd AICS M993 AP")
	MagazineItemMacro(rhsusf_10Rnd_762x51_m62_Mag,"10rnd AICS M62 (Tracer)")
	MagazineItemMacro(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,"5rnd AICS M118")
	MagazineItemMacro(rhsusf_5Rnd_762x51_AICS_m993_Mag,"5rnd AICS M993 AP")
	MagazineItemMacro(rhsusf_5Rnd_762x51_AICS_m62_Mag,"5rnd AICS M62 (Tracer)")
//Sub Machine Gun, 4.6mm
	MagazineItemMacro(rhsusf_mag_40Rnd_46x30_FMJ,"40rnd MP7 SX FMJ")
	MagazineItemMacro(rhsusf_mag_40Rnd_46x30_JHP,"40rnd MP7 SX JHP")
	MagazineItemMacro(rhsusf_mag_40Rnd_46x30_AP,"40rnd MP7 SX AP")
//Pistol, .45cal
	MagazineItemMacro(rhsusf_mag_7x45acp_MHP,"7rnd M1911 HP")
//Pistol, 9mm
	MagazineItemMacro(rhsusf_mag_17Rnd_9x19_JHP,"17rnd Glock Mk243 JHP")
	MagazineItemMacro(rhsusf_mag_17Rnd_9x19_FMJ,"17rnd Glock M882 FMJ")
	MagazineItemMacro(rhsusf_mag_15Rnd_9x19_JHP,"15rnd M9 Mk243 JHP")
	MagazineItemMacro(rhsusf_mag_15Rnd_9x19_FMJ,"15rnd M9 M882 FMJ")
//Launcher munitions
	MagazineItemMacroHidden(rhs_fim92_mag,"FIM-92F")
	MagazineItemMacro(rhs_fgm148_magazine_AT,"Javelin FGM-148 AT")
	MagazineItemMacroHidden(rhs_fgm172a_magazine_AT,"SRAW FGM-172A")
	MagazineItemMacroHidden(rhs_fgm172b_magazine_MPV,"SRAW-MPV FGM-172B")
	MagazineItemMacro(rhs_mag_smaw_HEAA,"SMAW Mk6 HEAA")
	MagazineItemMacro(rhs_mag_smaw_HEDP,"SMAW Mk3 HEDP")
	MagazineItemMacro(rhs_mag_smaw_SR,"SMAW Mk217 Spotting")
	MagazineItemMacro(rhs_mag_maaws_HEAT,"MAAWS FFV751 HEAT")
	MagazineItemMacro(rhs_mag_maaws_HEDP,"MAAWS FFV502 HEDP")
	MagazineItemMacro(rhs_mag_maaws_HE,"MAAWS FFV441 HE")
	MagazineItemMacro(rhs_mag_maaws_SMOKE,"MAAWS FFV469 Smoke")
	MagazineItemMacro(rhs_mag_maaws_ILLUM,"MAAWS FFV545 Illumination")

//Explosives
	MagazineItemMacro(rhsusf_m112_mag,"$STR_RHSUSF_M112_EXPLOSIVE_DISPLAY_NAME")
	MagazineItemMacro(rhsusf_m112x4_mag,"$STR_RHSUSF_M112X4_EXPLOSIVE_DISPLAY_NAME")
	MagazineItemMacro(rhs_mine_M19_mag,"$STR_RHSUSF_M19_ATMINE_DISPLAY_NAME")
	MagazineItemMacro(rhsusf_mine_m14_mag,"$STR_RHSUSF_M14_APMINE_DISPLAY_NAME")