
	// Macro that determines which weapon
	#define WeaponMacro(classname,strname) class TransportWeapons \
	  	{ \
	   		class ##classname## \
	   		{ \
	    		weapon = ##classname##; \
	    		count = 1; \
	   		}; \
	  	}; \
	  	displayName= ##strname##;

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

	    AUTHOR_MACRO

	  	vehicleClass = "WeaponsPrimary";
	};

	class rhs_weapon_kar98k : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_kar98k,$STR_RHS_WEAP_KAR98K_DISPLAYNAME)

		MagazineMacro(rhsgref_5Rnd_792x57_kar98k)
	};

	class rhs_weapon_m38 : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_m38,$STR_RHSGREF_WEAP_M38)

		MagazineMacro(rhsgref_5Rnd_762x54_m38)
	};
	class rhs_weapon_m38_rail : rhs_weapon_m38
	{
	    WeaponMacro(rhs_weap_m38_rail,$STR_RHSGREF_WEAP_M38_2)
	};
	class rhs_weapon_mosin_sbr : rhs_weapon_m38
	{
	    WeaponMacro(rhs_weap_mosin_sbr,Mosin SBR)
	};

	class rhs_weapon_vhsd2 : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_vhsd2,"VHS-D2")

		MagazineMacro(rhsgref_30rnd_556x45_vhs2)
	};
	class rhs_weapon_vhsd2_bg : rhs_weapon_vhsd2
	{
	    WeaponMacro(rhs_weap_vhsd2_bg,"VHS-D2 (VHS-BG)")
	};
	class rhs_weapon_vhsd2_ct15x : rhs_weapon_vhsd2
	{
	    WeaponMacro(rhs_weap_vhsd2_ct15x,"VHS-D2 (CT-1.5x)")
	};
	class rhs_weapon_vhsd2_bg_ct15x : rhs_weapon_vhsd2
	{
	    WeaponMacro(rhs_weap_vhsd2_bg_ct15x,"VHS-D2 (VHS-BG/CT-1.5x)")
	};
	class rhs_weapon_vhsk2 : rhs_weapon_vhsd2
	{
	    WeaponMacro(rhs_weap_vhsk2,"VHS-K2")
	};

/// Obsolete classes
	class rhs_weapon_dsr1 : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_dsr1,DSR-1)

		MagazineMacro(rhsusf_5Rnd_762x51_m118_special_Mag)
	};

	class rhs_weapon_m70ab2 : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_akms,$STR_RHS_WEAP_AKMS)

		MagazineMacro(rhs_30Rnd_762x39mm)
	};

	class rhs_weapon_m70ab2_fold : rhs_weapon_m70ab2
	{
	    WeaponMacro(rhs_weap_akms_folded,$STR_RHS_WEAP_AKMS_FOLDED)
	};

	class rhs_weapon_m70b1 : rhs_weapon_m70ab2
	{
	    WeaponMacro(rhs_weap_akm,$STR_RHS_WEAP_AKM)
	};

	class rhs_weapon_m92 : rhs_weapon_m70ab2{};

	class rhs_weapon_m92_fold : rhs_weapon_m70ab2
	{
	    WeaponMacro(rhs_weap_akms_folded,$STR_RHS_WEAP_AKMS_FOLDED)
	};

	class rhs_weapon_m21a : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_vhsd2,"VHS-D2")

		MagazineMacro(rhsgref_30rnd_556x45_vhs2)
	};

	class rhs_weapon_m21a_pr : rhs_weapon_m21a{};

	class rhs_weapon_m21a_fold : rhs_weapon_m21a{};

	class rhs_weapon_m21s : rhs_weapon_m21a
	{
	    WeaponMacro(rhs_weap_vhsk2,$STR_RHSGREF_WEAP_M21S)
	};

	class rhs_weapon_m21s_pr : rhs_weapon_m21a
	{
	    WeaponMacro(rhs_weap_vhsk2,"VHS-K2")
	};

	class rhs_weapon_m21s_fold : rhs_weapon_m21a
	{
	    WeaponMacro(rhs_weap_m21s_fold,"VHS-K2")
	};
/// End Obsolete

	class rhs_weapon_m76 : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_m76,$STR_RHSGREF_WEAP_M76)

		MagazineMacro(rhsgref_10Rnd_792x57_m76)
	};

	class rhs_weapon_savz58p : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_savz58p,$STR_RHSGREF_WEAP_SAVZ58P)

		MagazineMacro(rhs_30Rnd_762x39mm_Savz58)
	};
	class rhs_weapon_savz58v : rhs_weapon_savz58p
	{
	    WeaponMacro(rhs_weap_savz58v,$STR_RHSGREF_WEAP_SAVZ58V)
	};
	class rhs_weapon_savz58v_fold : rhs_weapon_savz58p
	{
	    WeaponMacro(rhs_weap_savz58v_fold,$STR_RHSGREF_WEAP_SAVZ58V_FOLD)
	};
	class rhs_weapon_savz58p_rail : rhs_weapon_savz58p
	{
	    WeaponMacro(rhs_weap_savz58p_rail,$STR_RHSGREF_WEAP_SAVZ58P_RAIL)
	};
	class rhs_weapon_savz58v_rail : rhs_weapon_savz58p
	{
	    WeaponMacro(rhs_weap_savz58v_rail,$STR_RHSGREF_WEAP_SAVZ58V_RAIL)
	};
	class rhs_weapon_savz58v_rail_fold : rhs_weapon_savz58p
	{
	    WeaponMacro(rhs_weap_savz58v_rail_fold,$STR_RHSGREF_WEAP_SAVZ58V_RAIL_FOLD)
	};
	class rhs_weapon_savz58v_ris : rhs_weapon_savz58p
	{
	    WeaponMacro(rhs_weap_savz58v_ris,$STR_RHSGREF_WEAP_SAVZ58V_RIS)
	};
	class rhs_weapon_savz58v_ris_fold : rhs_weapon_savz58p
	{
	    WeaponMacro(rhs_weap_savz58v_ris_fold,$STR_RHSGREF_WEAP_SAVZ58V_RIS_FOLD)
	};
	
	class rhs_weapon_tt33 : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_tt33,$STR_RHSGREF_WEAP_TT33)

		MagazineMacro(rhs_mag_762x25_8)
	};

	class rhs_weapon_savz61 : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_savz61,$STR_RHS_WEAP_SAVZ61_DISPLAYNAME)

		MagazineMacro(rhsgref_20rnd_765x17_vz61)
	};

	class rhs_weapon_Izh18 : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_Izh18,$STR_RHS_WEAP_IZH18_DISPLAYNAME)

		MagazineMacro(rhsgref_1Rnd_00Buck)
	};

	/*
	class rhs_weapon_XM2010 : rhs_weapon_base
	{
		scope = 1;
	    scopeCurator = 1;

	    WeaponMacro(rhs_weap_XM2010,$STR_RHS_CFGWEAPONS_RIFLE_xm2010)

		MagazineMacro(rhsusf_5Rnd_300winmag_xm2010)
	};

	class rhs_weapon_XM2010_d : rhs_weapon_XM2010
	{
	    WeaponMacro(rhs_weap_XM2010_d,$STR_RHS_CFGWEAPONS_RIFLE_xm2010_d)
	};
	*/
	
	/* ATTACHMENTS */
	/* MAGAZINES */
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
	/* Pistol mags */
	MagazineItemMacro(rhs_mag_762x25_8,$STR_RHS_CFGMAGAZINES_8RND_762X25_MAG_TT33)
	/* SMG mags */
	MagazineItemMacro(rhsgref_30rnd_1143x23_M1911B_SMG,$STR_RHSGREF_MAG_45ACP_M1911_30RND_SMG)
	MagazineItemMacro(rhsgref_30rnd_1143x23_M1911B_2mag_SMG,$STR_RHSGREF_MAG_45ACP_M1911_30RND_2MAG_SMG)
	MagazineItemMacro(rhsgref_30rnd_1143x23_M1T_SMG,$STR_RHSGREF_MAG_45ACP_M1T_30RND_SMG)
	MagazineItemMacro(rhsgref_30rnd_1143x23_M1T_2mag_SMG,$STR_RHSGREF_MAG_45ACP_M1T_30RND_2MAG_SMG)
	MagazineItemMacro(rhsgref_20rnd_765x17_vz61,$STR_RHSGREF_20RND_765X17_VZ61_DISPLAYNAME)
	MagazineItemMacro(rhsgref_10rnd_765x17_vz61,$STR_RHSGREF_10RND_765X17_VZ61_DISPLAYNAME)
	/* Rifle mags */
	MagazineItemMacro(rhsgref_30rnd_556x45_vhs2,"30rnd VHS-2 M855A1")
	MagazineItemMacro(rhsgref_30rnd_556x45_vhs2_t,"30rnd VHS-2 M856A1 (Tracer)")
	MagazineItemMacro(rhsgref_5Rnd_792x57_kar98k,$STR_RHSGREF_5RND_792X57_KAR98K_DISPLAYNAME)
	MagazineItemMacro(rhsgref_10Rnd_792x57_m76,"10rnd M76 7.9x57mm M75")
	MagazineItemMacro(rhsgref_5Rnd_762x54_m38,$STR_RHSGREF_5RND_762X54_M38_DISPLAYNAME)
	MagazineItemMacro(rhs_30Rnd_762x39mm_Savz58,$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_VZ58)
	MagazineItemMacro(rhs_30Rnd_762x39mm_Savz58_tracer,$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_VZ58_TRACER)
	MagazineItemMacro(rhsgref_8Rnd_762x63_M2B_M1rifle,"$STR_RHSGREF_MAG_30CAL_M2_8RND_M1R")
	MagazineItemMacro(rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle,"$STR_RHSGREF_MAG_30CAL_M1T_8RND_M1R")
	MagazineItemMacro(rhsgref_30Rnd_792x33_SmE_StG,$STR_RHSGREF_MAG_792_SME_30RND_StG)
	MagazineItemMacro(rhsgref_25Rnd_792x33_SmE_StG,$STR_RHSGREF_MAG_792_SME_25RND_StG)
	/* MG mags */
	MagazineItemMacro(rhsgref_50Rnd_792x57_SmE_drum,$STR_RHSGREF_MAG_792_SME_50RND_DRUM)
	MagazineItemMacro(rhsgref_50Rnd_792x57_SmE_notracers_drum,$STR_RHSGREF_MAG_792_SME_50RND_DRUM_NOTRACERS)
	MagazineItemMacro(rhsgref_50Rnd_792x57_SmK_drum,$STR_RHSGREF_MAG_792_SMK_50RND_DRUM)
	MagazineItemMacro(rhsgref_50Rnd_792x57_SmK_alltracers_drum,$STR_RHSGREF_MAG_792_SMK_50RND_DRUM_ALLTRACERS)
	MagazineItemMacro(rhsgref_296Rnd_792x57_SmE_belt,$STR_RHSGREF_MAG_792_SME_296RND_BELT)
	MagazineItemMacro(rhsgref_296Rnd_792x57_SmE_notracers_belt,$STR_RHSGREF_MAG_792_SME_296RND_BELT_NOTRACERS)
	MagazineItemMacro(rhsgref_296Rnd_792x57_SmK_belt,$STR_RHSGREF_MAG_792_SMK_296RND_BELT)
	MagazineItemMacro(rhsgref_296Rnd_792x57_SmK_alltracers_belt,$STR_RHSGREF_MAG_792_SMK_296RND_BELT_ALLTRACERS)
	/* Grenades */
	MagazineItemMacro(rhsgref_mag_rkg3em,$STR_RHS_RKG3EM_NAME)
	MagazineItemMacro(rhs_mag_f1,$STR_RHS_F1_NAME)
	MagazineItemMacro(rhs_grenade_m1939e_mag,"Ei.Hgr.39 Concussive (Early)")
	MagazineItemMacro(rhs_grenade_m1939l_mag,"Ei.Hgr.39 Concussive (Late)")
	MagazineItemMacro(rhs_grenade_m1939e_f_mag,"Ei.Hgr.39 Fragmentation (Early)")
	MagazineItemMacro(rhs_grenade_m1939l_f_mag,"Ei.Hgr.39 Fragmentation (Late)")
	MagazineItemMacro(rhs_grenade_nbhgr39_mag,"Nb.Hgr.39 (Early)")
	MagazineItemMacro(rhs_grenade_nbhgr39B_mag,"Nb.Hgr.39B (Late)")
	MagazineItemMacro(rhs_grenade_sthgr24_mag,"St.Hgr.24")
	MagazineItemMacro(rhs_grenade_sthgr24_heerfrag_mag,"St.Hgr.24 Fragmentation (Heer)")
	MagazineItemMacro(rhs_grenade_sthgr24_SSfrag_mag,"St.Hgr.24 Fragmentation (SS)")
	MagazineItemMacro(rhs_grenade_sthgr24_x7bundle_mag,"St.Hgr.24 x7 Bundle")
	MagazineItemMacro(rhs_grenade_sthgr43_mag,"St.Hgr.43")
	MagazineItemMacro(rhs_grenade_sthgr43_heerfrag_mag,"St.Hgr.43 Fragmentation (Heer)")
	MagazineItemMacro(rhs_grenade_sthgr43_SSfrag_mag,"St.Hgr.43 Fragmentation (SS)")
	MagazineItemMacro(rhs_grenade_mkii_mag,"Mk 2 Fragmentation")
	MagazineItemMacro(rhs_grenade_mkiiia1_mag,"Mk 3A1 Concussion")
	MagazineItemMacro(rhs_grenade_anm8_mag,"M8 Smoke Grenade")
	MagazineItemMacro(rhs_grenade_m15_mag,"M15 WP Grenade")
	MagazineItemMacro(rhs_grenade_mki_mag,"Mk 1 Illumination")
	MagazineItemMacro(rhs_charge_tnt_x2_mag,"TNT Charge (1lb Thrown)")
	MagazineItemMacro(rhs_charge_sb3kg_mag,"Sprengbuechse (3kg)")
	/* Shotgun mags */
	MagazineItemMacro(rhsgref_1Rnd_00Buck,"1Rnd 00 Buckshot")
	MagazineItemMacro(rhsgref_1Rnd_Slug,"1Rnd 12g Slug")
	/* Mine Mags */
	MagazineItemMacro(rhs_mine_smine35_press_mag,"S.Mi.35 (S.Mi.Z.35) APB Mine")
	MagazineItemMacro(rhs_mine_smine35_trip_mag,"S.Mi.35 (W) APB Mine")
	MagazineItemMacro(rhs_mine_smine44_trip_mag,"S.Mi.44 (S.Mi.Z.44) APB Mine")
	MagazineItemMacro(rhs_mine_smine44_press_mag,"S.Mi.44 (S.Mi.Z.35) APB Mine")
	MagazineItemMacro(rhs_mine_m2a3b_press_mag,"M2A3B APB Mine")
	MagazineItemMacro(rhs_mine_m2a3b_trip_mag,"M2A3B (Tripwire) APB Mine")
	MagazineItemMacro(rhs_mine_glasmine43_hz_mag,"Gl.Mi.43 (H.Z.44) AP Mine")
	MagazineItemMacro(rhs_mine_glasmine43_bz_mag,"Gl.Mi.43 (B.Z.) AP Mine")
	MagazineItemMacro(rhs_mine_a200_bz_mag,"Beh.Schu.Mi.A200 (B.Z.) AP Mine")
	MagazineItemMacro(rhs_mine_a200_dz35_mag,"Beh.Schu.Mi.A200 (D.Z.35) AP Mine")
	MagazineItemMacro(rhs_mine_stockmine43_2m_mag,"St.Mi.43/I (2m) AP Mine")
	MagazineItemMacro(rhs_mine_stockmine43_4m_mag,"St.Mi.43/II (4m) AP Mine")	
	MagazineItemMacro(rhs_mine_m3_pressure_mag,"M3 AP Mine")
	MagazineItemMacro(rhs_mine_M3_tripwire_mag,"M3 (Tripwire) AP Mine")
	MagazineItemMacro(rhs_mine_mk2_pressure_mag,"Mk 2 AP Mine")
	MagazineItemMacro(rhs_mine_Mk2_tripwire_mag,"Mk 2 (Tripwire) AP Mine")
	MagazineItemMacro(rhs_mine_M7A2_mag,"M7A2 AP Mine")
	MagazineItemMacro(rhs_mine_TM43_mag,"Tellermine 43")
	MagazineItemMacro(rhs_charge_M2tet_x2_mag,"Tetrytol Charge (2.5lb Placed)")