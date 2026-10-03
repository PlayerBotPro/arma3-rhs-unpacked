#define INVENTORY_CATEGORY magazines
class CfgMagazines
{
	class CA_Magazine;
	///! Fake magazines
	class rhs_mag_m1garand_ads: CA_Magazine
	{
		scope	= 1;
		count	= 1;
		mass	= 0;
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
	};
//- Pistol Mags
	class rhs_mag_762x25_8: CA_Magazine
	{
		AUTHOR_MACRO
		scope            = 2;
		type             = 16;
		displayName      = "$STR_RHS_CFGMAGAZINES_8RND_762X25_MAG_TT33";
		descriptionShort = "$STR_RHS_CFGMAGAZINES_8RND_762X25_TT33_MAG_Desc_0";
		picture          = "\rhsafrf\addons\rhs_weapons\icons\Pya_mag_ca.paa";
		model            = "\rhsafrf\addons\rhs_weapons\magazines\rhs_pya_mag";
		ammo             = "rhs_ammo_762x25_Ball";
		count            = 8;
		initSpeed        = 450;
		mass             = 4.29;
	};
	class rhs_mag_6x8mm_mhp: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "$STR_RHS_CFGMAGAZINES_6RND_8X22_MAG_NAMBU";
		picture = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_type94mag_01_ca.paa";
		ammo = "rhs_ammo_8mm_mhp";
		count = 6;
		initSpeed = 280;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "$STR_RHSUSF_7RND_45ACP_DESCRIPTION_SHORT";
		model = "rhsgref\addons\rhsgref_weapons2\magazines\rhs_type94_mag.p3d";
	};
	/*
	//P38 Magazines
	class rhsgref_8rnd_9x19_P38: CA_Magazine
	{
		AUTHOR_MACRO
		scope            = 2;
		scopeCurator     = 2;
		type             = 16;
		displayName      = "$STR_RHSGREF_MAG_9x19_P08_8RND_P38";
		picture          = "\rhsafrf\addons\rhs_weapons\icons\Pya_mag_ca.paa";
		ammo             = "rhs_ammo_9x19_FMJ";
		count            = 8;
		initSpeed        = 280;
		tracersEvery     = 0;
		lastRoundsTracer = 0;
		descriptionShort = "9x19mm ball rounds in 8Rnd P38 magazine.";
	};*/
	/*
	class rhsgref_8rnd_9x19_Pp08SE_P38: CA_Magazine
	{
		AUTHOR_MACRO
		scope            = 2;
		scopeCurator     = 2;
		type             = 16;
		displayName      = "$STR_RHSGREF_MAG_9x19_P08SE_8RND_P38";
		picture          = "\rhsafrf\addons\rhs_weapons\icons\Pya_mag_ca.paa";
		ammo             = "rhs_ammo_9x19_FMJ";
		count            = 8;
		initSpeed        = 280;
		tracersEvery     = 0;
		lastRoundsTracer = 0;
		descriptionShort = "9x19mm ball rounds in 8Rnd P38 magazine.";
	};

	class rhsgref_8rnd_9x19_Pp08mE_P38: CA_Magazine
	{
		AUTHOR_MACRO
		scope            = 2;
		scopeCurator     = 2;
		type             = 16;
		displayName      = "$STR_RHSGREF_MAG_9x19_P08ME_8RND_P38";
		picture          = "\rhsafrf\addons\rhs_weapons\icons\Pya_mag_ca.paa";
		ammo             = "rhs_ammo_9x19_FMJ";
		count            = 8;
		initSpeed        = 280;
		tracersEvery     = 0;
		lastRoundsTracer = 0;
		descriptionShort = "9x19mm ball rounds in 8Rnd P38 magazine.";
	};*/

///! SMG Mags
	//M1 / M1A1 / M3 / M3A1 Magazines
	class rhsgref_30rnd_1143x23_M1911B_SMG: CA_Magazine
	{
		AUTHOR_MACRO
		scope				= 2;
		scopeCurator		= 2;
		type				= 16;
		displayName			= "$STR_RHSGREF_MAG_45ACP_M1911_30RND_SMG";
		picture				= "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m3a1mag_01_ca.paa";
		ammo				= "rhs_ammo_45ACP_MHP";
		count				= 30;
		initSpeed			= 280;
		tracersEvery		= 0;
		lastRoundsTracer	= 0;
		descriptionShort	= ".45ACP ball rounds in 30Rnd magazine.";
		model				= "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m3a1_mag.p3d";
		modelSpecial		= rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_1143x23_m3_30rnd;
		modelSpecialIsProxy	= 1;
		mass				= 17.47;
	};

	class rhsgref_30rnd_1143x23_M1911B_2mag_SMG: rhsgref_30rnd_1143x23_M1911B_SMG
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_45ACP_M1911_30RND_2MAG_SMG";
		model				= "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m3a1_junglemag.p3d";
		modelSpecial		= rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_1143x23_m3x2_30rnd;
	};

	class rhsgref_30rnd_1143x23_M1T_SMG: rhsgref_30rnd_1143x23_M1911B_SMG
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_45ACP_M1T_30RND_SMG";
		ammo				= "rhs_ammo_45ACP_MHPT_Orange";
		tracersEvery		= 1;
		descriptionShort	= ".45ACP tracer rounds in 30Rnd magazine.";
	};

	class rhsgref_30rnd_1143x23_M1T_2mag_SMG: rhsgref_30rnd_1143x23_M1T_SMG
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_45ACP_M1T_30RND_2MAG_SMG";
		model				= "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m3a1_junglemag.p3d";
		modelSpecial		= rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_1143x23_m3x2_30rnd;
	};

	class rhsgref_20rnd_1143x23_M1911B_SMG: rhsgref_30rnd_1143x23_M1911B_SMG
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_45ACP_M1911_20RND_SMG";
		count				= 20;
		descriptionShort	= ".45ACP ball rounds in 20Rnd magazine.";
	};

	class rhsgref_20rnd_1143x23_M1T_SMG: rhsgref_30rnd_1143x23_M1T_SMG
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_45ACP_M1T_20RND_SMG";
		count				= 20;
		descriptionShort	= ".45ACP tracer rounds in 20Rnd magazine.";
	};

	class rhsgref_20rnd_765x17_vz61: CA_Magazine
	{
		AUTHOR_MACRO
		mass			= 5.5;
		scope			= 2;
		displayName		= "$STR_RHSGREF_20RND_765X17_VZ61_DISPLAYNAME";
		descriptionShort	= "$STR_RHSGREF_20RND_765X17_VZ61_DESCRIPTIONSHORT";
		picture			= "\rhsgref\addons\rhsgref_weapons\icons\m_sa61_20rnd_icon_ca.paa";
		ammo			= "rhs_ammo_9x17";
		count			= 20;
		initSpeed		= 320;
		model			= "\rhsgref\addons\rhsgref_weapons\magazines\rhs_20rnd_scorpion_mag";
		modelSpecial		= rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_765x17_vz61_20rnd;
		modelSpecialIsProxy	= 1;
	};
	class rhsgref_10rnd_765x17_vz61: rhsgref_20rnd_765x17_vz61
	{
		AUTHOR_MACRO
		count			= 10;
		mass			= 3.5;
		displayName		= "$STR_RHSGREF_10RND_765X17_VZ61_DISPLAYNAME";
		descriptionShort	= "$STR_RHSGREF_10RND_765X17_VZ61_DESCRIPTIONSHORT";
		picture			= "\rhsgref\addons\rhsgref_weapons\icons\m_sa61_10rnd_icon_ca.paa";
		model			= "\rhsgref\addons\rhsgref_weapons\magazines\rhs_10rnd_scorpion_mag";
		modelSpecial		= rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_765x17_vz61_10rnd;
	};
//- Rifle Mags
	// 5.56x45 NATO
	class rhsgref_30rnd_556x45_m21 : CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;

		displayName = "30rnd M21 M855";

		picture = "\rhsgref\addons\rhsgref_weapons\icons\m_m21mag_icon_ca.paa";  /// just some icon

		ammo             = rhs_ammo_556x45_M855_Ball;
		mass             = 10.35;
		count            = 30;                            /// 30 rounds is enough
		initSpeed        = 925;                           /// standard muzzle speed
		tracersEvery     = 0;                             /// disable tracers by default
		lastRoundsTracer = 0;                             /// tracers to track low ammo
		descriptionShort = "Used to shoot 5.56 bullets";  /// on mouse-over in Inventory

		magazineGroup[]	= {"rhs_m21_mag_group"};  /// all magazines in the same group may be used in weapon that has the group defined as compatible
		model		= "\rhsgref\addons\rhsgref_weapons\magazines\rhs_30rnd_m21_mag";
	};

	class rhsgref_30rnd_556x45_m21_t : rhsgref_30rnd_556x45_m21
	{
		tracersEvery     = 1;   /// moar tracers
		lastRoundsTracer = 30;  /// tracers everywhere

		displayName = "30rnd M21 M856A1 (Tracer)";

		descriptionShort = "Used to shoot 5.56 tracer bullets";
		displaynameshort = "Tracers";

		magazineGroup[] = {"rhs_m21_mag_group"};
	};

	class rhsgref_30rnd_556x45_vhs2 : CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;

		displayName = "30rnd VHS-2 M855A1";
		displaynameshort = "M855A1";

		INVENTORY_PICTURE(rhsgref_30rnd_556x45_vhs2)

		ammo             = rhs_ammo_556x45_M855A1_Ball;
		mass             = 7.7;
		count            = 30;                            /// 30 rounds is enough
		initSpeed        = 910;                           /// standard muzzle speed
		tracersEvery     = 0;                             /// disable tracers by default
		lastRoundsTracer = 4;                             /// tracers to track low ammo
		descriptionShort = "Used to shoot 5.56 bullets";  /// on mouse-over in Inventory

		magazineGroup[]	= {"rhs_vhs2_mag_group"};  /// all magazines in the same group may be used in weapon that has the group defined as compatible
		model		= "\rhsgref\addons\rhsgref_weapons\magazines\rhs_30rnd_vhs2_mag";
		modelSpecial	= "\rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_556x45_vhs2_30rnd";
		modelSpecialIsProxy = 1;
	};

	class rhsgref_30rnd_556x45_vhs2_t : rhsgref_30rnd_556x45_vhs2
	{
		tracersEvery     = 1;   /// moar tracers
		lastRoundsTracer = 30;  /// tracers everywhere

		displayName = "30rnd VHS-2 M856A1 (Tracer)";

		descriptionShort = "Used to shoot 5.56 tracer bullets";
		displaynameshort = "Tracers";

		magazineGroup[] = {"rhs_vhs2_mag_group"};
	};

	// 7.92x57 Mauser
	class rhsgref_5Rnd_792x57_kar98k : CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName      = $STR_RHSGREF_5RND_792X57_KAR98K_DISPLAYNAME;
		model            = "\rhsgref\addons\rhsgref_weapons\kar98k\792x57clip";
		picture          = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo             = "rhs_ammo_792x57_Ball";
		count            = 5;
		initSpeed        = 869;
		tracersEvery     = 0;
		lastRoundsTracer = 0;
		descriptionShort = $STR_RHSGREF_5RND_792X57_KAR98K_DESCRIPTIONSHORT;
		mass             = 2.97;
	};

	class rhsgref_10Rnd_792x57_m76: CA_Magazine
	{
		AUTHOR_MACRO
		scope            = public;                                                        /// or 2, to be precise
		displayName      = "10rnd M76 7.9x57mm M75";
		picture          = "\rhsgref\addons\rhsgref_weapons\icons\m_m76mag_icon_ca.paa";  /// just some icon
		ammo             = rhs_ammo_792x57_Ball;
		count            = 10;                                                            /// 30 rounds is enough
		initSpeed        = 730;                                                           /// standard muzzle speed
		tracersEvery     = 0;                                                             /// disable tracers by default
		lastRoundsTracer = 0;                                                             /// tracers to track low ammo
		descriptionShort = "Used to shoot 7.92 bullets";                                  /// on mouse-over in Inventory
		magazineGroup[]	 = {"rhs_m76_mag_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
		mass 		 = 6.94;
		model            = "\rhsgref\addons\rhsgref_weapons\magazines\rhs_10rnd_m76_mag";
	};

	// 7.62 x 54
	class rhsgref_5Rnd_762x54_m38: CA_Magazine
	{
		AUTHOR_MACRO
		scope            = 2;
		displayName      = $STR_RHSGREF_5RND_762X54_M38_DISPLAYNAME;
		model            = "\rhsgref\addons\rhsgref_weapons\m38\762x54clip";
		picture          = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo             = "rhs_B_762x54_Ball";
		count            = 5;
		initSpeed        = 823;
		tracersEvery     = 0;
		lastRoundsTracer = 0;
		descriptionShort = $STR_RHSGREF_5RND_762X54_M38_DESCRIPTIONSHORT;           //update this
		mass             = 2.64;
	};
	// 7.62x39mm for Sa vz. 58
	class rhs_30Rnd_762x39mm;
	class rhs_30Rnd_762x39mm_Savz58 : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		mass      = 13.53;
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm_Savz58)
		model     = "\rhsgref\addons\rhsgref_weapons\magazines\rhs_savz58_762_mag";
		modelSpecial		= rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_762x39_savz58_30rnd;
		modelSpecialIsProxy	= 1;
		ammo      = "rhs_B_762x39_Ball";
		count     = 30;
		initSpeed = 718;

		displayName      = "$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_VZ58";
		descriptionShort = $STR_RHS_CFGMAGAZINES_30RND_762X39_VZ58_MAG_Desc_0;
	};
	class rhs_30Rnd_762x39mm_tracer;
	class rhs_30Rnd_762x39mm_Savz58_tracer : rhs_30Rnd_762x39mm_tracer
	{
		AUTHOR_MACRO
		model     = "\rhsgref\addons\rhsgref_weapons\magazines\rhs_savz58_762_mag";
		modelSpecial		= rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_762x39_savz58_30rnd;
		modelSpecialIsProxy	= 1;
		tracersEvery     = 1;
		ammo             = "rhs_B_762x39_Tracer";
		displayName      = "$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_VZ58_TRACER";
		descriptionShort = $STR_RHS_CFGMAGAZINES_30RND_762X39_VZ58_MAG_Desc_2;
	};
	// 7.5x55mm Swiss for SIG 510 / Stgw 57
	class rhsgref_24rnd_75x55_Stgw57 : CA_Magazine
	{
		AUTHOR_MACRO
		scope            = 2;

		displayName      = "24Rnd Stgw 57 7.5x55mm";

		picture          = "\rhsgref\addons\rhsgref_weapons\icons\m_m21mag_icon_ca.paa";

		ammo             = rhs_ammo_75x55_Ball;
		mass             = 7.7;
		count            = 24;
		initSpeed        = 750;
		tracersEvery     = 0;
		lastRoundsTracer = 4;
		descriptionShort = "Caliber: 7.5x55mm Tracer&lt;br /&gt;Rounds: 24&lt;br /&gt;Used in: Stgw 57";
	};
	// Cal .30 Ball, M2
	class rhsgref_8Rnd_762x63_M2B_M1rifle: CA_Magazine
	{
		AUTHOR_MACRO
		scope				= 2;
		displayName			= "$STR_RHSGREF_MAG_30CAL_M2_8RND_M1R";
		displayNameShort	= "M2 Ball";
		model				= "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m1garand_clip";
		picture				= "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo				= "rhs_ammo_762x63_M2B_ball";
		count				= 8;
		initSpeed			= 770;
		tracersEvery		= 0;
		lastRoundsTracer	= 0;
		descriptionShort	= ".30-06 ball rounds in 8Rnd en bloc clip.";
		mass				= 5.28;
		modelSpecial		= rhsgref\addons\rhsgref_weapons2\mag_proxies\rhs_mag_762x63_m1clip_8rnd;
		modelSpecialIsProxy	= 1;
	};

	// Cal .30 Ball, M2
	class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle: rhsgref_8Rnd_762x63_M2B_M1rifle
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_30CAL_M1T_8RND_M1R";
		displayNameShort	= "M1 Tracer";
		picture				= "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo				= "rhs_ammo_762x63_M1T_tracer";
		initSpeed			= 770;
		tracersEvery		= 1;
		lastRoundsTracer	= 0;
		descriptionShort	= ".30-06 tracer rounds in 8Rnd en bloc clip.";
		mass				= 5.28;
	};
	/*
	// 7.92x57 S.m.E.
	class rhsgref_5Rnd_792x57_SmE_k98: CA_Magazine
	{
		AUTHOR_MACRO
		scope            = 2;
		scopeCurator     = 2;
		displayName      = "$STR_RHSGREF_MAG_792_SME_5RND_K98";
		model            = "\rhsgref\addons\rhsgref_weapons2\k98k\sS_5rnd.p3d";
		picture          = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo             = "rhs_ammo_792x57_Ball";
		count            = 5;
		initSpeed        = 770;
		tracersEvery     = 0;
		lastRoundsTracer = 0;
		descriptionShort = "7.92x57 ball rounds in a 5Rnd mauser clip.";
		mass             = 3.6;
	};

	// 7.92x57 S.m.K.
	class rhsgref_5Rnd_792x57_SmK_k98: CA_Magazine
	{
		AUTHOR_MACRO
		scope            = 2;
		scopeCurator     = 2;
		displayName      = "$STR_RHSGREF_MAG_792_SMK_5RND_K98";
		model            = "\rhsgref\addons\rhsgref_weapons2\k98k\sS_5rnd.p3d";
		picture          = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo             = "rhs_ammo_792x57_Ball";
		count            = 5;
		initSpeed        = 798;
		tracersEvery     = 0;
		lastRoundsTracer = 0;
		descriptionShort = "7.92x57 hardened steel ball rounds in a 5Rnd mauser clip.";
		mass             = 3.6;
	};
	*/
	// 7.92x33 S.m.E.

	class rhsgref_30Rnd_792x33_SmE_StG: CA_Magazine
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsgref_30Rnd_792x33_SmE_StG)
		scope            = 2;
		scopeCurator     = 2;
		displayName      = "$STR_RHSGREF_MAG_792_SME_30RND_StG";
		model            = "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mp44_mag";
		ammo             = "rhs_ammo_792x33_SmE_ball";
		count            = 30;
		initSpeed        = 685;
		tracersEvery     = 0;
		lastRoundsTracer = 0;
		descriptionShort = "7.92x33 ball rounds in a 30Rnd StG magazine.";
		mass             = 11.66;
	};


	class rhsgref_25Rnd_792x33_SmE_StG: CA_Magazine //Down-loaded magazine
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsgref_30Rnd_792x33_SmE_StG)
		scope            = 2;
		scopeCurator     = 2;
		displayName      = "$STR_RHSGREF_MAG_792_SME_25RND_StG";
		model            = "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mp44_mag";
		ammo             = "rhs_ammo_792x33_SmE_ball";
		count            = 25;
		initSpeed        = 685;
		tracersEvery     = 0;
		lastRoundsTracer = 0;
		descriptionShort = "7.92x33 ball rounds in a 25Rnd StG magazine.";
		mass             = 11.66;
	};

///! MG Mags
	class rhsgref_50Rnd_792x57_SmE_drum: CA_Magazine
	{
		AUTHOR_MACRO
		scope				= 2;
		scopeCurator		= 2;
		displayName			= "$STR_RHSGREF_MAG_792_SME_50RND_DRUM";
		model				= "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mg42_50rnd_drum";
		modelSpecial		= rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_drum_50rnd;
		modelSpecialIsProxy	= 1;
		picture				= "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mg42_drum_mag_ca.paa";
		ammo				= "rhs_ammo_792x57_Ball";
		count				= 50;
		initSpeed			= 770;
		tracersEvery		= 5;
		lastRoundsTracer	= 0;
		descriptionShort	= "7.92x57 ball rounds rounds in a 50Rnd drum, with a daytime tracer every 5 rounds.";
		mass				= 17.8;
	};

	class rhsgref_50Rnd_792x57_SmE_notracers_drum: rhsgref_50Rnd_792x57_SmE_drum
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_792_SME_50RND_DRUM_NOTRACERS";
		tracersEvery		= 0;
		descriptionShort	= "7.92x57 rounds in a 50Rnd drum. There are no tracers in the belts.";
	};

	class rhsgref_50Rnd_792x57_SmK_drum: rhsgref_50Rnd_792x57_SmE_drum
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_792_SMK_50RND_DRUM";
		ammo				= "rhs_ammo_792x57_Ball";
		initSpeed			= 798;
		tracersEvery		= 5;
		descriptionShort	= "7.92x57 hardened steel ball rounds in a 50Rnd drum, with a daytime tracer every 5 rounds.";
	};

	class rhsgref_50Rnd_792x57_SmK_alltracers_drum: rhsgref_50Rnd_792x57_SmK_drum
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_792_SMK_50RND_DRUM_ALLTRACERS";
		tracersEvery		= 1;
		descriptionShort	= "7.92x57 hardened steel ball daytime tracer rounds in a 50Rnd drum.";
	};

	//296 round MG42 belt

	class rhsgref_296Rnd_792x57_SmE_belt: CA_Magazine
	{
		AUTHOR_MACRO
		scope				= 2;
		scopeCurator		= 2;
		displayName			= "$STR_RHSGREF_MAG_792_SME_296RND_BELT";
		model				= "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mg42_loose_belt";
		modelSpecial		= rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_belt_296rnd;
		modelSpecialIsProxy	= 1;
		picture				= "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mg42_drum_mag_ca.paa";
		ammo				= "rhs_ammo_792x57_Ball";
		count				= 296;
		initSpeed			= 770;
		tracersEvery		= 5;
		lastRoundsTracer	= 0;
		descriptionShort	= "7.92x57 ball rounds rounds in a loose 296Rnd belt, with a daytime tracer every 5 rounds.";
		mass				= 105.5;
	};

	class rhsgref_296Rnd_792x57_SmE_notracers_belt: rhsgref_296Rnd_792x57_SmE_belt
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_792_SME_296RND_BELT_NOTRACERS";
		tracersEvery		= 0;
		descriptionShort	= "7.92x57 rounds in a loose 296Rnd belt. There are no tracers in the belt.";
	};

	class rhsgref_296Rnd_792x57_SmK_belt: rhsgref_296Rnd_792x57_SmE_belt
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_792_SMK_296RND_BELT";
		ammo				= "rhs_ammo_792x57_Ball";
		initSpeed			= 798;
		tracersEvery		= 5;
		descriptionShort	= "7.92x57 hardened steel ball rounds in a 296Rnd belt, with a daytime tracer every 5 rounds.";
	};

	class rhsgref_296Rnd_792x57_SmK_alltracers_belt: rhsgref_296Rnd_792x57_SmK_belt
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHSGREF_MAG_792_SMK_296RND_BELT_ALLTRACERS";
		tracersEvery		= 1;
		descriptionShort	= "7.92x57 hardened steel ball daytime tracer rounds in a 296Rnd belt.";
	};

//- Grenades

	class HandGrenade;
	class rhs_mag_f1: HandGrenade
	{
		AUTHOR_MACRO
		ammo             = "rhs_ammo_f1";
		displayName      = $STR_RHS_F1_NAME;
		displayNameShort = "F1 grenade";
		descriptionshort = $STR_RHS_F1_DES;
		picture          = "\rhsgref\addons\rhsgref_weapons\icons\f1_ca.paa";
		model            = "\rhsgref\addons\rhsgref_weapons\grenades\frag_F1";
		mass             = 13.2;

	};
	class rhsgref_mag_rkg3em : HandGrenade
	{
		AUTHOR_MACRO
		ammo             = "rhsgref_ammo_rkg3em";
		displayName      = $STR_RHS_RKG3EM_NAME;
		displayNameShort = $STR_RHS_RKG3EM_NAME;
		descriptionshort = $STR_RHS_RKG3EM_DES;
		picture          = "\rhsgref\addons\rhsgref_weapons\icons\rkg3em_ca.paa";
		model            = "\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em";
		mass             = 23.54;
		initSpeed        = 15;
	};
	
	//Model 1939 Egg Hand Grenade
	//Early (Concussive)
	class rhs_grenade_m1939e_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_grenade_m1939e_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m39grenade_e_ca.paa";
		displayName           = "Ei.Hgr.39 Concussive (Early)";
		displayNameShort      = "M.39";
		descriptionShort      = "Early Model 1939 Eihandgranate Concussive Grenade. The fuze has a timer of 4-5 seconds.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\m39early";
		deflecting            = 60;
		initSpeed             = 20;
		mass                  = 7.48;
	};
	//Late (Concussive)
	class rhs_grenade_m1939l_mag: rhs_grenade_m1939e_mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_m1939l_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m39grenade_l_ca.paa";
		displayName      = "Ei.Hgr.39 Concussive (Late)";
		displayNameShort = "M.39";
		descriptionShort = "Late Production Model 1939 Eihandgranate Concussive Grenade. The fuze has a timer of 4-5 seconds.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\m39late";
	};
	//Early (Fragmentation)
	class rhs_grenade_m1939e_f_mag: rhs_grenade_m1939e_mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_m1939e_f_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m39grenade_efrag_ca.paa";
		displayName      = "Ei.Hgr.39 Fragmentation (Early)";
		displayNameShort = "M.39 Frag";
		descriptionShort = "Early Production Model 1939 Eihandgranate Concussive Grenade with Fragmentation Sleeve. The fuze has a timer of 4-5 seconds.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\m39early_f";
	};
	//Late (Fragmentation)
	class rhs_grenade_m1939l_f_mag: rhs_grenade_m1939e_mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_m1939l_f_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m39grenade_lfrag_ca.paa";
		displayName      = "Ei.Hgr.39 Fragmentation (Late)";
		displayNameShort = "M.39 Frag";
		descriptionShort = "Late Production Model 1939 Eihandgranate Concussive Grenade with Fragmentation Sleeve. The fuze has a timer of 4-5 seconds.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\M39\m39late_f";
	};
	
	//Nb. Hgr. 39
	class SmokeShell;
	class rhs_grenade_nbhgr39_mag: SmokeShell
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_grenade_nbhgr39_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39_ca.paa";
		displayName           = "Nb.Hgr.39 (Early)";
		displayNameShort      = "M.39 Smoke";
		descriptionShort      = "Early Production Model 39 smoke stick grenade. The fuze has a timer of 7 seconds before igniting the smoke.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\grenades\NM39\nm39_early";
		initSpeed             = 17;
		mass                  = 13.09;
	};
	//Nb. Hgr. 39B
	class rhs_grenade_nbhgr39B_mag: rhs_grenade_nbhgr39_mag
	{
		AUTHOR_MACRO
		scope              = 2;
		ammo               = "rhs_grenade_nbhgr39B_ammo";
		picture            = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName        = "Nb.Hgr.39B (Late)";
		displayNameShort   = "M.39 Smoke";
		descriptionShort   = "Late Production Model 39B smoke grenade. The fuze has a timer of 4-5 seconds before igniting the smoke.";
		model              = "\rhsgref\addons\rhsgref_weapons2\grenades\NM39\nm39_late";
		mass               = 10;
	};
	
	//St. Hgr. 24 (Late)
	class rhs_grenade_sthgr24_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_grenade_sthgr24_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName           = "St.Hgr.24";
		displayNameShort      = "M.24";
		descriptionShort      = "Late Production Model 24 stick grenade. The fuze has a timer of 4-5 seconds.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\m24late";
		initSpeed             = 18;
		mass                  = 13.09;
	};
	//St. Hgr. 24 (Late) -- Heer Fragmentation
	class rhs_grenade_sthgr24_heerfrag_mag: rhs_grenade_sthgr24_mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_sthgr24_heerfrag_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName      = "St.Hgr.24 Fragmentation (Heer)";
		displayNameShort = "M.24 Frag";
		descriptionShort = "Late Production Model 24 stick grenade with a Heer fragmentation sleeve. The fuze has a timer of 4-5 seconds.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\m24late_heer";
	};
	//St. Hgr. 24 (Late) -- SS Fragmentation
	class rhs_grenade_sthgr24_SSfrag_mag: rhs_grenade_sthgr24_mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_sthgr24_ssfrag_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName      = "St.Hgr.24 Fragmentation (SS)";
		displayNameShort = "M.24 Frag";
		descriptionShort = "Late Production Model 24 stick grenade with a SS fragmentation sleeve. The fuze has a timer of 4-5 seconds.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\m24late_ss";
	};
	//St. Hgr. 24 (Late) X7
	class rhs_grenade_sthgr24_x7bundle_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_grenade_sthgr24_x7bundle_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName           = "St.Hgr.24 x7 Bundle";
		displayNameShort      = "M.24 x7";
		descriptionShort      = "Seven Late Production Model 24 stick grenade bound together into a single charge. The fuze has a timer of 4-5 seconds.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\grenades\M24\m24late_bundle";
		initSpeed             = 11;
		mass                  = 50;
	};
	
	// St. Hgr. 43
	class rhs_grenade_sthgr43_mag: rhs_grenade_sthgr24_mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_sthgr43_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m43grenade_ca.paa";
		displayName      = "St.Hgr.43";
		displayNameShort = "M.43";
		descriptionShort = "Late Production Model 24 stick grenade. The fuze has a timer of 4-5 seconds.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\M43\m43";
	};
	//St. Hgr. 43 -- Heer Fragmentation
	class rhs_grenade_sthgr43_heerfrag_mag: rhs_grenade_sthgr24_mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_sthgr43_heerfrag_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m43grenade_heerfrag_ca.paa";
		displayName      = "St.Hgr.43 Fragmentation (Heer)";
		displayNameShort = "M.43 Frag";
		descriptionShort = "Late Production Model 43 stick grenade with a Heer fragmentation sleeve. The fuze has a timer of 4-5 seconds.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\M43\m43_heer";
	};
	//St. Hgr. 43 -- SS Fragmentation
	class rhs_grenade_sthgr43_SSfrag_mag: rhs_grenade_sthgr24_mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_sthgr43_ssfrag_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m43grenade_ssfrag_ca.paa";
		displayName      = "St.Hgr.43 Fragmentation (SS)";
		displayNameShort = "M.43 Frag";
		descriptionShort = "Late Production Model 43 stick grenade with a SS fragmentation sleeve. The fuze has a timer of 4-5 seconds.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\M43\m43_ss";
	};
	
	//Mk. II
	class rhs_grenade_mkii_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_grenade_mkii_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mkii_ca.paa";
		displayName           = "Mk 2 Fragmentation";
		displayNameShort      = "Mk 2 Frag";
		descriptionShort      = "Mk 2 fragmentation grenade. The fuze has a timer of 4-5 seconds.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\grenades\US\mk_ii";
		mass                  = 13.09;
	};
	//Mk. II A1
	/* class rhs_grenade_mkiia1_mag: rhs_grenade_mkii_mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_grenade_mkii_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mkii_ca.paa";
		displayName           = "Mk 2 A1 Fragmentation";
		displayNameShort      = "Mk 2 A1 Frag";
		descriptionShort      = "Mk 2 A1 fragmentation grenade. The fuze has a timer of 4-5 seconds.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\grenades\US\mk_ii";
	}; */
	//Mk. III A1
	class rhs_grenade_mkiiia1_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_grenade_mkiiia1_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mkiii_ca.paa";
		displayName           = "Mk 3A1 Concussion";
		displayNameShort      = "Mk 3A1 Off.";
		descriptionShort      = "Mk 3 A1 offensive concussion grenade. The fuze has a timer of 4-5 seconds.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\grenades\US\mk_iii";
		initSpeed             = 22;
		mass                  = 6.886;
	};
	//M8 Smoke Grenade
	class rhs_grenade_anm8_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_anm8_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m8_ca.paa";
		displayName      = "M8 Smoke Grenade";
		displayNameShort = "M8 Smoke";
		descriptionShort = "M8 smoke grenade. The fuze ignites with a delay of 1-2 seconds and burns for about 1 minute.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\US\M8";
		mass             = 12;
	};
	//M15 Bursting WP Smoke Grenade
	class rhs_grenade_m15_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_grenade_m15_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m15_ca.paa";
		displayName      = "M15 WP Grenade";
		displayNameShort = "M15 WP";
		descriptionShort = "M15 bursting white phosphorus grenade. The fuze has a timer of 4-5 seconds.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\US\M15";
		mass             = 19;
	};
	//Mk. I Illumination
	class rhs_grenade_mki_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_grenade_mki_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mki_ca.paa";
		displayName           = "Mk 1 Illumination";
		displayNameShort      = "Mk 1";
		descriptionShort      = "Mk 1 illumination grenade. The fuze has a timer of 5 seconds.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\grenades\US\mk_i";
		initSpeed             = 22;
		mass                  = 4;
	};

	class rhs_grenade_khattabka_vog17_mag: HandGrenade
	{
		AUTHOR_MACRO
		ammo             = "rhs_grenade_vog17_ammo";
		displayName      = $STR_RHS_KHATTABKA_VOG17_NAME;
		displayNameShort = "VOG-17";
		descriptionshort = $STR_RHS_KHATTABKA_DES;
		picture          = "\rhsgref\addons\rhsgref_weapons3\icons\khattabka_vog17_ca.paa";
		model            = "\rhsgref\addons\rhsgref_weapons3\grenades\khattabkas\khattabka_vog17.p3d";
		mass             = 6.16;
	};
	class rhs_grenade_khattabka_vog25_mag: HandGrenade
	{
		AUTHOR_MACRO
		ammo             = "rhs_grenade_vog25_ammo";
		displayName      = $STR_RHS_KHATTABKA_VOG25_NAME;
		displayNameShort = "VOG-25";
		descriptionshort = $STR_RHS_KHATTABKA_DES;
		picture          = "\rhsgref\addons\rhsgref_weapons3\icons\khattabka_vog25_ca.paa";
		model            = "\rhsgref\addons\rhsgref_weapons3\grenades\khattabkas\khattabka_vog25.p3d";
		mass             = 5.5;
	};	
	
// IZh-18
	class rhsgref_1Rnd_00Buck : CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName      = "1Rnd 00 Buckshot";                                       //$STR_RHSUSF_5RND_12G_00BUCKSHOT_DISPLAY_NAME;
		displayNameShort = "Buckshot";

		descriptionshort = "Caliber: 12 gauge<br />Rounds: 1<br />Used in: IZh-18";

		picture				= "\rhsusf\addons\rhsusf_weapons\icons\m_12g_buck.paa";
		model				= "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_buckshot_single";
		modelSpecial		= "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_buckshot_1rnd.p3d";
		modelSpecialIsProxy	= 1;
		ammo				= "rhs_ammo_12g_00buckshot";

		count = 1;
		mass  = 1;
		deleteIfEmpty = 0;

		initSpeed = 336;
	};
	class rhsgref_1Rnd_Slug : rhsgref_1Rnd_00Buck
	{
		AUTHOR_MACRO
		scope = 2;
		displayName      = "1Rnd 12g Slug";                                          //$STR_RHSUSF_5RND_12G_SLUG_DISPLAY_NAME;
		displayNameShort = "Slug";

		picture				= "\rhsusf\addons\rhsusf_weapons\icons\m_12g_slug.paa";
		model				= "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_slug_single";
		modelSpecial		= "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_slug_1rnd.p3d";
		modelSpecialIsProxy	= 1;
		ammo				= "rhs_ammo_12g_slug";

		initSpeed = 395;
	};
// RPG-75
	class FakeMagazine;
	class rhs_rpg75_mag : FakeMagazine
	{
		AUTHOR_MACRO
		allowedSlots[]	= {701,901};
		scope 			= 1;
		scopeArsenal	= 0;

		displayName 	 = "RPG-75";
		displayNameShort = "AT";
		descriptionShort = "$STR_RHS_RPG26_DES";

		picture 	= "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_rpg75_mag_ca.paa";
		model 		= "\A3\weapons_f\empty";

		ammo 		= rhs_ammo_rpg75_rocket;
		type		= 6 * 256;
		initSpeed 	= 189;
		mass 		= 0;
	};
	class rhs_panzerfaust60_mag : FakeMagazine
	{
		AUTHOR_MACRO
		allowedSlots[]	= {701,901};
		scope 			= 1;
		scopeArsenal	= 0;
		//count = 999;

		displayName 	 = "Panzerfaust 60";
		displayNameShort = "AT";
		descriptionShort = "HEAT";

		picture 	= "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_rpg75_mag_ca.paa";
		model 		= "\A3\weapons_f\empty";

		ammo 		= rhs_ammo_panzerfaust60_rocket;
		type		= 6 * 256;
		initSpeed 	= 45;
		mass 		= 0;
	};
	
	//Mines
	///! AP BOUNDING MINES
	class APERSBoundingMine_Range_Mag;
	class rhs_mine_smine35_press_mag: APERSBoundingMine_Range_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_smine35_press_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_smine35_ca.paa";
		displayName           = "S.Mi.35 (S.Mi.Z.35) APB Mine";
		displayNameShort      = "S.Mi.35";
		descriptionShort      = "Schrapnellmine 35 Bounding Anti-Personnel Mine with S.Mi.Z.35 pressure igniter.";
		mass                  = 80; //90.2
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_PRESS";
	};
	class rhs_mine_smine35_trip_mag: rhs_mine_smine35_press_mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_smine35_trip_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_smine35_trip_ca.paa";
		displayName           = "S.Mi.35 (W) APB Mine";
		displayNameShort      = "S.Mi.35";
		descriptionShort      = "Schrapnellmine 35 Bounding Anti-Personnel Mine with W adapter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_TRIP";
	};
	
	class rhs_mine_smine44_trip_mag: APERSBoundingMine_Range_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_smine44_trip_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_smine44_trip_ca.paa";
		displayName           = "S.Mi.44 (S.Mi.Z.44) APB Mine";
		displayNameShort      = "S.Mi.44";
		descriptionShort      = "Schrapnellmine 44 Bounding Anti-Personnel Mine with S.Mi.Z.44 dual-tripwire igniter.";
		mass                  = 80; //90.2
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_TRIP";
	};
	class rhs_mine_smine44_press_mag: rhs_mine_smine44_trip_mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_smine44_press_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_smine44_ca.paa";
		displayName           = "S.Mi.44 (S.Mi.Z.35) APB Mine";
		displayNameShort      = "S.Mi.44";
		descriptionShort      = "Schrapnellmine 44 Bounding Anti-Personnel Mine with S.Mi.Z.35 pressure igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_PRESS";
	};
	
	class rhs_mine_m2a3b_press_mag: APERSBoundingMine_Range_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_m2a3b_press_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m2a3b_ca.paa";
		displayName           = "M2A3B APB Mine";
		displayNameShort      = "M2A3B";
		descriptionShort      = "M2A3B Bounding Anti-Personnel Mine with M6 pressure-configured igniter.";
		mass                  = 40; //49.94
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_ITEM";
	};
	class rhs_mine_m2a3b_trip_mag: rhs_mine_m2a3b_press_mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_m2a3b_trip_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m2a3b_trip_ca.paa";
		displayName           = "M2A3B (Tripwire) APB Mine";
		displayNameShort      = "M2A3B";
		descriptionShort      = "M2A3B Bounding Anti-Personnel Mine with M6 tripwire-configured igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_ITEM";
	};
	
	
	///! AP PRESSURE MINES
	class APERSMine_Range_Mag;
	class rhs_mine_glasmine43_hz_mag: APERSMine_Range_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_glasmine43_hz_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_glasmine43_hz_ca.paa";
		displayName           = "Gl.Mi.43 (H.Z.44) AP Mine";
		displayNameShort      = "Gl.Mi.43";
		descriptionShort      = "Glasmine 43 Anti-Personnel Mine with Hebelzünder 44 pressure igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HZ_ITEM";
		mass                  = 26.4;
	};
	class rhs_mine_glasmine43_bz_mag: rhs_mine_glasmine43_hz_mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_glasmine43_bz_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_glasmine43_b_ca.paa";
		displayName           = "Gl.Mi.43 (B.Z.) AP Mine";
		displayNameShort      = "Gl.Mi.43";
		descriptionShort      = "Glasmine 43 Anti-Personnel Mine with Bück chemical pressure igniter. Undetectable by metal detectors.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_BZ_ITEM";
	};

	class rhs_mine_a200_bz_mag: APERSMine_Range_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_a200_bz_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_a200_bz_ca.paa";
		displayName           = "Beh.Schu.Mi.A200 (B.Z.) AP Mine";
		displayNameShort      = "A200";
		descriptionShort      = "A200 Anti-Personnel Mine with Bück chemical pressure igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_BZ_ITEM";
		mass                  = 25;
		maxLeadSpeed          = 0;
		maxThrowHoldTime      = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
	};
	class rhs_mine_a200_dz35_mag: rhs_mine_a200_bz_mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_a200_dz35_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_a200_dz35_ca.paa";
		displayName           = "Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
		displayNameShort      = "A200";
		descriptionShort      = "A200 Anti-Personnel Mine with D.Z.35 pressure igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DZ35_ITEM";
	};

	class rhs_mine_m3_pressure_mag: APERSMine_Range_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_M3_pressure_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m3_ca.paa";
		displayName           = "M3 AP Mine";
		displayNameShort      = "M3";
		descriptionShort      = "M3 Anti-Personnel Mine with M7 pressure-configured igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_ITEM";
		mass                  = 60; //95.8
		maxLeadSpeed          = 0;
		maxThrowHoldTime      = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
	};

	class rhs_mine_mk2_pressure_mag: APERSMine_Range_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_Mk2_pressure_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mkiimine_ca.paa";
		displayName           = "Mk 2 AP Mine";
		displayNameShort      = "Mk 2 Mi.";
		descriptionShort      = "Mk 2 Grenade with M6 pressure-configured igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_ITEM";
		mass                  = 13.09;
	};

	class rhs_mine_M7A2_mag: APERSMine_Range_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_M7A2_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m7a2_ca.paa";
		displayName           = "M7A2 AP Mine";
		displayNameShort      = "M7A2";
		descriptionShort      = "M7A2 Anti-Personnel Mine with M602 chemical igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_ITEM";
		mass                  = 48.4;
	};
	
	
	// AP TRIP MINES
	class APERSTripMine_Wire_Mag;
	class rhs_mine_stockmine43_2m_mag: APERSTripMine_Wire_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_stockmine43_2m_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_stmi43_2m.paa";
		displayName           = "St.Mi.43/I (2m) AP Mine";
		displayNameShort      = "St.Mi.43 (2m)";
		descriptionShort      = "Stockmine 43/I Anti-Personnel Mine with Z.Z.42 pull igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_ITEM_2M";
		mass                  = 44;
	};
	class rhs_mine_stockmine43_4m_mag: rhs_mine_stockmine43_2m_mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_stockmine43_4m_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_stmi43_4m.paa";
		displayName           = "St.Mi.43/II (4m) AP Mine";
		displayNameShort      = "St.Mi.43 (4m)";
		descriptionShort      = "Stockmine 43/II Anti-Personnel Mine with Z.Z.42 pull igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_ITEM_4M";
	};

	class rhs_mine_M3_tripwire_mag: APERSTripMine_Wire_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_M3_tripwire_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m3_trip_ca.paa";
		displayName           = "M3 (Tripwire) AP Mine";
		displayNameShort      = "M3";
		descriptionShort      = "M3 Anti-Personnel Mine with M7 tripwire-configured igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_ITEM";
		mass                  = 60;
	};

	class rhs_mine_Mk2_tripwire_mag: APERSTripMine_Wire_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_Mk2_tripwire_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mkiimine_trip_ca.paa";
		displayName           = "Mk 2 (Tripwire) AP Mine";
		displayNameShort      = "Mk 2 Mi.";
		descriptionShort      = "Mk 2 Grenade with M6 tripwire-configured igniter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_ITEM";
		mass                  = 13.09;
	};
	
	
	//! AT MINES
	class ATMine_Range_Mag;
	//Tellermine 43
	class rhs_mine_TM43_mag: ATMine_Range_Mag
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_mine_TM43_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_tmi43_ca.paa";
		displayName           = "Tellermine 43";
		displayNameShort      = "T.Mi. 43";
		descriptionShort      = "Tellermine 43 anti-tank mine.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43";
		mass                  = 100; //178.2
	};
	
	
	//! EXPLOSIVE CHARGES
	class DemoCharge_Remote_Mag;
	class rhs_charge_tnt_x2_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_charge_tnt_x2_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_compb_ca.paa";
		displayName           = "TNT Charge (1lb Thrown)";
		displayNameShort      = "TNT x2";
		descriptionShort      = "Two .5lb TNT blocks with M1 Fuse Lighter.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\mines\TNT_BLOCK_x2\TNT_BLOCK_x2_ITEM";
		initSpeed             = 18;
		mass                  = 10;
	};
	class rhs_charge_sb3kg_mag: HandGrenade
	{
		AUTHOR_MACRO
		scope                 = 2;
		ammo                  = "rhs_charge_sb3kg_ammo";
		picture               = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m2t_ca.paa"; //TODO
		displayName           = "Sprengbuechse (3kg)";
		displayNameShort      = "Sprengbuechse (3kg)";
		descriptionShort      = "Sprengbuechse 3kg demolition charge.";
		model                 = "\rhsgref\addons\rhsgref_weapons2\grenades\Sprengbuechse3kg\SB3kg";
		initSpeed			  = 10;
		mass				  = 66;
	};
	class rhs_charge_M2tet_x2_mag: DemoCharge_Remote_Mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_charge_M2tet_x2_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m2t_ca.paa";
		displayName      = "Tetrytol Charge (2.5lb Placed)";
		displayNameShort = "Tet. x2";
		descriptionShort = "Two M2 Tetrytol blocks with M1 Fuse Lighter.";
		model            = "\rhsgref\addons\rhsgref_weapons2\mines\M2_TETRYTOL_x2\M2TET_x2_ITEM";	
		mass			 = 25;
	};
	/* class rhs_charge_sb3kg_mag: DemoCharge_Remote_Mag
	{
		AUTHOR_MACRO
		scope            = 2;
		ammo             = "rhs_charge_sb3kg_ammo";
		picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m2t_ca.paa"; //TODO
		displayName      = "Sprengbuechse (3kg)";
		displayNameShort = "Sprengbuechse (3kg)";
		descriptionShort = "Sprengbuechse 3kg demolition charge.";
		model            = "\rhsgref\addons\rhsgref_weapons2\grenades\Sprengbuechse3kg\SB3kg";
	}; */

	class rhs_mag_20Rnd_762x51_m80_fnfal: CA_Magazine
	{
		AUTHOR_MACRO
		scope				= 2;
		displayName			= "20rnd FN FAL M80";
		displayNameShort	= "M80 Ball";
		INVENTORY_PICTURE(rhs_mag_20Rnd_762x51_m80_fnfal)
		count				= 20;
		ammo				= "rhs_ammo_762x51_M80_Ball";
		mass				= 16.5;
		initSpeed			= 844;
		descriptionShort	= "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: FN FAL";
		model				= "rhsgref\addons\rhsgref_weapons3\magazines\rhs_20rnd_fnfal_mag.p3d";
		modelSpecial		= rhsgref\addons\rhsgref_weapons3\mag_proxies\rhs_mag_762x51_fnfal_20rnd;
		modelSpecialIsProxy	= 1;
	};
	class rhs_mag_20Rnd_762x51_m80a1_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		AUTHOR_MACRO
		displayName			= "20rnd FN FAL M80A1 EPR";
		displayNameShort	= "M80A1 EPR";
		ammo				= "rhs_ammo_762x51_M80A1EPR_Ball";
	};
	class rhs_mag_20Rnd_762x51_m62_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		AUTHOR_MACRO
		displayName			= "20rnd FN FAL M62 (Tracer)";
		displayNameShort	= "M62 Tracer";
		ammo				= "rhs_ammo_762x51_M62_tracer";
		tracersEvery		= 1;
	};
	class rhs_mag_20Rnd_762x51_m61_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		AUTHOR_MACRO
		displayName			= "20rnd FN FAL M61 AP";
		displayNameShort	= "M61 AP";
		ammo				= "rhs_ammo_762x51_M61_AP";
	};
	class rhs_mag_30Rnd_762x51_m80_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		AUTHOR_MACRO
		displayName			= "30rnd FN FAL M80";
		//INVENTORY_PICTURE(rhs_mag_30Rnd_762x51_m80_fnfal)
		scope 				= 1;
		count				= 30;
		mass				= 22.24;
		descriptionShort	= "Caliber: 7.62x51mm NATO<br />Rounds: 30<br />Used in: FN FAL";
		modelSpecial		= rhsgref\addons\rhsgref_weapons3\mag_proxies\rhs_mag_762x51_fnfal_30rnd;
	};
	class rhs_mag_30Rnd_762x51_m80a1_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
	{
		AUTHOR_MACRO
		displayName			= "30rnd FN FAL M80A1 EPR";
		displayNameShort	= "M80A1 EPR";
		ammo				= "rhs_ammo_762x51_M80A1EPR_Ball";
	};
	class rhs_mag_30Rnd_762x51_m62_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
	{
		AUTHOR_MACRO
		displayName			= "30rnd FN FAL M62 (Tracer)";
		displayNameShort	= "M62 Tracer";
		ammo				= "rhs_ammo_762x51_M62_tracer";
		tracersEvery		= 1;
	};
	class rhs_mag_30Rnd_762x51_m61_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
	{
		AUTHOR_MACRO
		displayName			= "30rnd FN FAL M61 AP";
		displayNameShort	= "M61 AP";
		ammo				= "rhs_ammo_762x51_M61_AP";
	};
};