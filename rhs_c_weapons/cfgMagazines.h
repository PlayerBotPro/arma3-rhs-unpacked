#define INVENTORY_CATEGORY magazines
class CfgMagazines
{
	class CA_Magazine;

	///! Fake magazines
	class rhs_mag_fold_stock: CA_Magazine
	{
		scope	= 1;
		count	= 1;
		mass	= 0;
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
	};
	///! Rifle Mags

	//7N6 Mags (6L20: Bakelite, Green)
	class rhs_30Rnd_545x39_AK : CA_Magazine //redundant
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_AK)
		scope				= 1;
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_7N6_BAKELITE;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_0;
		displayNameShort	= "7N6";
		model				= "\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag";
		modelSpecial		= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l20_30rnd.p3d";
		modelSpecialIsProxy	= 1;
		ammo				= rhs_B_545x39_Ball;
		count				= 30;
		mass				= 9.09;
		initSpeed			= 915;
		tracersEvery		= 0;
		lastRoundsTracer	= 0;
	};
	class rhs_30Rnd_545x39_7N6_AK : rhs_30Rnd_545x39_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_AK)
		scope 				= 2;
	};
	class rhs_30Rnd_545x39_7N6_green_AK : rhs_30Rnd_545x39_7N6_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N6_green_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_7N6_GREEN_BAKELITE;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons3\aks74\data\rhs_aks74mag3_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag_green";
	};
	class rhs_30Rnd_545x39_AK_no_tracers : rhs_30Rnd_545x39_7N6_AK //Depreciated class (all normal mags have no tracers)
	{
		scope				= 1;

		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_AK_no_tracers)
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_0;
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_NO_TRACERS;
		ammo				= rhs_B_545x39_Ball_Tracer_Green;
		initSpeed			= 883;
		lastRoundsTracer	= 0;
	};

	//7T3 Tracer Mags (6L20: Bakelite) (6L23: Plum)
	class rhs_30Rnd_545x39_AK_green : rhs_30Rnd_545x39_7N6_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_AK_green)
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_GREEN_Desc_0;
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_GREEN0_BAKELITE;
		displayNameShort	= "7T3M Tracer";
		ammo				= rhs_B_545x39_Ball_Tracer_Green;
		initSpeed			= 883;
		tracersEvery		= 1;
	};
	class rhs_30Rnd_545x39_AK_plum_green : rhs_30Rnd_545x39_AK_green
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N6M_plum_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_GREEN0_PLUM;
		modelSpecial				= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
	};

	//7N6M mags (6L20: Bakelite & Green) (6L23: Plum)
	class rhs_30Rnd_545x39_7N6M_AK : rhs_30Rnd_545x39_7N6_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_7N6M_BAKELITE;
		displayNameShort			= "7N6M";
		ammo						= rhs_B_545x39_7N6_Ball;
		initSpeed					= 880;
	};
	class rhs_30Rnd_545x39_7N6M_green_AK : rhs_30Rnd_545x39_7N6M_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N6_green_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_7N6M_GREEN_BAKELITE;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons3\aks74\data\rhs_aks74mag3_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag_green";
	};
	class rhs_30Rnd_545x39_7N6M_plum_AK : rhs_30Rnd_545x39_7N6M_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N6M_plum_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_7N6M_PLUM;
		modelSpecial				= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
	};

	//7N10 Mags (6L23: Black, Plum, Desert, Camo)
	class rhs_30Rnd_545x39_7N10_AK : rhs_30Rnd_545x39_7N6_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N10_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1;
		displayNameShort			= "7N10";
		modelSpecial				= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag";
		ammo						= rhs_B_545x39_7N10_Ball;
		initSpeed					= 880;
	};
	class rhs_30Rnd_545x39_7N10_plum_AK : rhs_30Rnd_545x39_7N10_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N10_plum_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1_PLUM;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
	};
	class rhs_30Rnd_545x39_7N10_desert_AK : rhs_30Rnd_545x39_7N10_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N10_desert_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1_DESERT;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_des";
	};
	class rhs_30Rnd_545x39_7N10_camo_AK : rhs_30Rnd_545x39_7N10_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N10_camo_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1_CAMO;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_camo";
	};

	//7N22 Mags (6L23: Black, Plum, Desert, Camo)
	class rhs_30Rnd_545x39_7N22_AK : rhs_30Rnd_545x39_7N10_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N22_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2;
		descriptionShort			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_1;
		displayNameShort			= "7N22 - AP";
		ammo						= rhs_B_545x39_7N22_Ball;
		initSpeed					= 890;
	};
	class rhs_30Rnd_545x39_7N22_plum_AK : rhs_30Rnd_545x39_7N22_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N22_plum_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2_PLUM;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
	};
	class rhs_30Rnd_545x39_7N22_desert_AK : rhs_30Rnd_545x39_7N22_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N22_desert_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2_DESERT;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_des";
	};
	class rhs_30Rnd_545x39_7N22_camo_AK : rhs_30Rnd_545x39_7N22_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N22_camo_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2_CAMO;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_camo";
	};

	//7U1 Mags (6L23: Black)
	class rhs_30Rnd_545x39_7U1_AK : rhs_30Rnd_545x39_7N10_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7U1_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG3;
		displayNameShort			= "7U1 Subsonic";
		descriptionShort			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_2;
		ammo						= "rhs_B_545x39_7U1_Ball";
		initSpeed					= 303;
		lastRoundsTracer			= 0;
	};

	//Jungle-taped 6L23 Mags (only 7N10?)
	class rhs_30Rnd_545x39_7N10_2mag_AK : rhs_30Rnd_545x39_7N10_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N10_2mag_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG;
		modelSpecial				= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag";
		mass						= 13.09;
	};
	class rhs_30Rnd_545x39_7N10_2mag_plum_AK : rhs_30Rnd_545x39_7N10_2mag_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N10_2mag_plum_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG_PLUM;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_plum";
	};
	class rhs_30Rnd_545x39_7N10_2mag_desert_AK : rhs_30Rnd_545x39_7N10_2mag_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N10_2mag_desert_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG_DESERT;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_des";
	};
	class rhs_30Rnd_545x39_7N10_2mag_camo_AK : rhs_30Rnd_545x39_7N10_2mag_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_545x39_7N10_2mag_camo_AK)
		displayName					= $STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG_CAMO;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		model						= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_camo";
	};

	//45rnd RPK-74 Mags (6L18: Bakelite)
	#define MagSize(name,string,string2,acount)	class rhs_##acount##Rnd_545X39_##name## : rhs_30Rnd_545X39_##name##\
	{\
		AUTHOR_MACRO\
		INVENTORY_PICTURE(rhs_45Rnd_545X39_7N6_AK)\
		displayName			= $STR_RHS_CFGMAGAZINES_##acount##RND_545X39_##string##;\
		descriptionShort	= $STR_RHS_CFGMAGAZINES_##acount##RND_545X39_##string2##;\
		modelSpecial		= \rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d;\
		mass				= 13.64;\
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";\
		count				= ##acount##;\
	};

	MagSize(7N22_AK,Mag2,MAG_Desc_1,45)
	MagSize(7N10_AK,Mag1,MAG_Desc_1,45)
	MagSize(7N6_AK,7N6,MAG_Desc_0,45)
	MagSize(7N6M_AK,7N6M,MAG_Desc_0,45)
	MagSize(AK_Green,MAG_GREEN0,MAG_Desc_0,45)
	MagSize(AK,Mag0,MAG_GREEN_Desc_0,45)
	MagSize(7U1_AK,Mag3,MAG_Desc_2,45)

	//60rnd Mags (6L31: Black)
	#undef MagSize
	#define MagSize(name,string,string2,acount)	class rhs_##acount##Rnd_545X39_##name## : rhs_30Rnd_545X39_##name##\
	{\
		AUTHOR_MACRO\
		INVENTORY_PICTURE(rhs_60Rnd_545X39_7N10_AK)\
		displayName			= $STR_RHS_CFGMAGAZINES_##acount##RND_545X39_##string##;\
		descriptionShort	= $STR_RHS_CFGMAGAZINES_##acount##RND_545X39_##string2##;\
		modelSpecial		= \rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l31_60rnd.p3d;\
		mass				= 19.69;\
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_60rnd_mag_black";\
		count				= ##acount##;\
	};

	MagSize(7N22_AK,Mag2,MAG_Desc_1,60)
	MagSize(7N10_AK,Mag1,MAG_Desc_1,60)
	//MagSize(7N6_AK,7N6,MAG_Desc_0,60)
	//MagSize(7N6M_AK,7N6M,MAG_Desc_0,60)
	MagSize(AK_Green,MAG_GREEN0,MAG_Desc_0,60)
	//MagSize(AK,Mag0,MAG_GREEN_Desc_0,60)
	MagSize(7U1_AK,Mag3,MAG_Desc_2,60)

	//GP25
	class 1Rnd_HE_Grenade_shell;
 	class rhs_VOG25: 1Rnd_HE_Grenade_shell
	{
		AUTHOR_MACRO
		descriptionshort	= $STR_RHS_VOG25_DES;
		displayName			= $STR_RHS_VOG25_NAME;
		displaynameshort	= "HE Grenade";
		picture				= "\rhsafrf\addons\rhs_weapons\gear\rhs_vog25_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25";
		modelSpecial		= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vog25";
		modelSpecialIsProxy	= 1;
		ammo				= "rhs_g_vog25";
		count				= 1;
		mass				= 4.125;
		initspeed			= 76.5;
	};
 	class rhs_VOG25P: rhs_VOG25
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_VOG25P_NAME;
		descriptionshort	= $STR_RHS_VOG25P_DES;
		displaynameshort	= "HE-T Grenade";
		picture				= "\rhsafrf\addons\rhs_weapons\gear\rhs_vog25p_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25p";
		modelSpecial		= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vog25p";
		ammo				= "rhs_g_vog25p";
		initspeed			= 75;
	};

	//thermobaric
 	class rhs_VG40TB: rhs_VOG25
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHS_VG40TB_NAME";
		picture				= "\rhsafrf\addons\rhs_weapons\gear\rhs_vg40tb_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial		= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		displaynameshort	= "Thermobaric";
		descriptionshort	= "$STR_RHS_VG40TB_DES";
		ammo				= "rhs_g_vg40tb";
		initspeed			= 70;
	};

	//flashbang
 	class rhs_VG40SZ: rhs_VOG25
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHS_VG40SZ_NAME";
		displaynameshort	= "Stun Grenade";
		descriptionshort	= "$STR_RHS_VG40SZ_DES";
		picture				= "\rhsafrf\addons\rhs_weapons\gear\rhs_vg40sz_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial		= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		ammo				= "rhs_g_vg40sz";
		initspeed			= 70;
	};

	//flare
 	class rhs_VG40OP_white: rhs_VOG25
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHS_VG40OP_NAME";
		displaynameshort	= "White Flare";
		descriptionshort	= "$STR_RHS_VG40OP_DES";
		ammo				= "rhs_40mm_white";
		modelSpecial		= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		initspeed			= 70;
	};

 	class rhs_VG40OP_green: rhs_VG40OP_white
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHS_VG40OPGREEN_NAME";
		displaynameshort	= "Green Flare";
		ammo				= "rhs_40mm_green";
		initspeed			= 70;
	};

 	class rhs_VG40OP_red: rhs_VG40OP_white
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHS_VG40OPRED_NAME";
		displaynameshort	= "Red Flare";
		ammo				= "rhs_40mm_red";
		initspeed			= 70;
	};

	//smoke
 	class rhs_GRD40_White: rhs_VOG25
	{
		AUTHOR_MACRO
		displaynameshort	= "White Smoke";
		displayName			= "$STR_RHS_GRD40WHITE_NAME";
		descriptionshort	= "$STR_RHS_GRD40_DES";
		nameSoundWeapon		= "smokeshell";
		nameSound			= "smokeshell";
		picture				= "\rhsafrf\addons\rhs_weapons\gear\rhs_gd40dm_white_ca.paa";
		ammo				= "rhs_g_vg40md_white";
		model				= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		modelSpecial		= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_gdm40";
	};
 	class rhs_GRD40_Green: rhs_GRD40_White
	{
		AUTHOR_MACRO
		displaynameshort	= "Green Smoke";
		displayName			= "$STR_RHS_GRD40GREEN_NAME";
		descriptionShort	= "Type: Smoke Grenade - Green<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP-25";
		picture				= "\rhsafrf\addons\rhs_weapons\gear\rhs_gd40dm_green_ca.paa";
		ammo				= "rhs_g_vg40md_green";
		initspeed			= 70;
	};
 	class rhs_GRD40_Red: rhs_GRD40_White
	{
		AUTHOR_MACRO
		displaynameshort	= "Red Smoke";
		displayName			= "$STR_RHS_GRD40RED_NAME";
		descriptionShort	= "Type: Smoke Grenade - Red<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP-25";
		picture				= "\rhsafrf\addons\rhs_weapons\gear\rhs_gd40dm_red_ca.paa";
		ammo				= "rhs_g_vg40md_red";
	};
	class rhs_VG40MD: rhs_GRD40_White
	{
		AUTHOR_MACRO
		ammo				= "rhs_g_vg40md";
		displayName			= "VG-40MD";
		displaynameshort	= "Impact Smoke";
		picture				= "\rhsafrf\addons\rhs_weapons2\gear\rhs_vg40md_white_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial		= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		initspeed			= 76.5;
	};
	class rhs_VG40MD_White : rhs_GRD40_White
	{
		AUTHOR_MACRO
		scope			= 1;
		displayName		= "$STR_RHS_VG40MDWHITE_NAME";
		picture			= "\rhsafrf\addons\rhs_weapons2\gear\rhs_vg40md_white_ca.paa";
		model			= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial	= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
	};
	class rhs_VG40MD_Green : rhs_GRD40_Green
	{
		AUTHOR_MACRO
		scope			= 1;
		displayName		= "$STR_RHS_VG40MDGREEN_NAME";
		picture			= "\rhsafrf\addons\rhs_weapons2\gear\rhs_vg40md_green_ca.paa";
		model			= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial	= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
	};
	class rhs_VG40MD_Red : rhs_GRD40_Red
	{
		AUTHOR_MACRO
		scope			= 1;
		displayName		= "$STR_RHS_VG40MDRED_NAME";
		picture			= "\rhsafrf\addons\rhs_weapons2\gear\rhs_vg40md_red_ca.paa";
		model			= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial	= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
	};
	class rhs_GDM40 : rhs_GRD40_White
	{
		AUTHOR_MACRO
		displayName			= "$STR_RHS_GDM40_NAME";
		descriptionShort	= "$STR_RHS_GDM40_DES";
		displaynameshort	= "Fast Smoke";
		ammo				= "rhs_g_gdm40";
		picture				= "\rhsafrf\addons\rhs_weapons2\gear\rhs_gdm40_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		modelSpecial		= "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_gdm40";
		initspeed			= 55;
	};

	//PKP
	class rhs_100Rnd_762x54mmR : rhs_30Rnd_545x39_7N6_AK
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG0;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_0;
		displayNameShort	= "57-N-323S";
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_pk_mag";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		ammo				= "rhs_B_762x54_Ball";
		count				= 100;
		mass				= 64.35;
		initSpeed			= 798;
		tracersevery		= 5;
	};
	class rhs_100Rnd_762x54mmR_green : rhs_100Rnd_762x54mmR
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG0_GREEN;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_2;
		displayNameShort	= "57-N-323S Tracer";
		ammo				= "rhs_B_762x54_Ball_Tracer_Green";
		initSpeed			= 798;
		tracersevery		= 1;
	};
	class rhs_100Rnd_762x54mmR_7N13 : rhs_100Rnd_762x54mmR
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG1;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_1;
		displayNameShort	= "7N13 AP";
		ammo				= "rhs_B_762x54_7N13_Ball";
	};
	class rhs_100Rnd_762x54mmR_7N26 : rhs_100Rnd_762x54mmR
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG2;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_1;
		displayNameShort	= "7N26 AP-I";
		ammo				= "rhs_B_762x54_7N26_Ball";
		initSpeed			= 835;

	};
	class rhs_100Rnd_762x54mmR_7BZ3 : rhs_100Rnd_762x54mmR_7N13
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG3;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_3;
		displayNameShort	= "7BZ3 AP";
		ammo				= "rhs_B_762x54_7BZ3_Ball";
		initSpeed			= 808;
	};


	//SVD
	class rhs_10Rnd_762x54mmR_7N1 : rhs_30Rnd_545x39_7N6_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_10Rnd_762x54mmR_7N1)
		displayName			= $STR_RHS_CFGMAGAZINES_10RND_762X54R_NAME;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_10RND_762X51R_MAG_Desc_0;
		displayNameShort	= "7N1";
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_svd_mag";
		ammo				= "rhs_B_762x54_7N1_Ball";
		initSpeed			= 823;
		count				= 10;
		mass				= 5.12;
		lastRoundsTracer	= 0;
	};
	class rhs_10Rnd_762x54mmR_7N14 : rhs_10Rnd_762x54mmR_7N1
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_10RND_762X54R_7N14_NAME;
		descriptionShort	= "7N14 10rnd SVD Mag";
		displayNameShort	= "7N14 AP";
		ammo				= "rhs_B_762x54_7N14_Ball";
		mass				= 5.94;
	};

	//AK47
	//30 round steel mag
	class rhs_30Rnd_762x39mm : rhs_30Rnd_545x39_7N6_AK
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm_tracer)
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG4;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0;
		displayNameShort	= "57-N-231";

		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_30rnd";
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel_mag";
		modelSpecialIsProxy	= 1;
		ammo				= "rhs_B_762x39_Ball";
		count				= 30;
		initSpeed			= 718;
		mass				= 13.53;

	};
	class rhs_30Rnd_762x39mm_tracer : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		tracersEvery		= 1;
		ammo				= "rhs_B_762x39_Tracer";
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG5;
		displayNameShort	= "57-N-231P Tracer";
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_2;
	};
	class rhs_30Rnd_762x39mm_89 : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG6;
		displayNameShort	= "57-N-231(89)";
		ammo				= "rhs_B_762x39_Ball_89";
	};
	class rhs_30Rnd_762x39mm_U : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG7;
		displayNameShort	= "57-N-231U Subsonic";
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_3;
		ammo				= "rhs_B_762x39_U_Ball";
		initSpeed			= 295;
		lastRoundsTracer	= 0;
	};
	//30 round bakelite
	class rhs_30Rnd_762x39mm_bakelite : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG4_BAKELITE;
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm)
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_bklt_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
		mass				= 11.7;

	};
	class rhs_30Rnd_762x39mm_bakelite_tracer : rhs_30Rnd_762x39mm_tracer
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG5_BAKELITE;
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm)
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_bklt_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
		mass				= 11.7;
	};
	class rhs_30Rnd_762x39mm_bakelite_89 : rhs_30Rnd_762x39mm_89
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG6_BAKELITE;
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm)
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_bklt_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
		mass				= 11.7;
	};
	class rhs_30Rnd_762x39mm_bakelite_U : rhs_30Rnd_762x39mm_U
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG7_BAKELITE;
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm)
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_bklt_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
		mass				= 11.7;
	};
	//30 round polymer
	class rhs_30Rnd_762x39mm_polymer : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG4_POLYMER;
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm_89)
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		mass				= 11.47;
	};
	class rhs_30Rnd_762x39mm_polymer_tracer : rhs_30Rnd_762x39mm_tracer
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG5_POLYMER;
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm_89)
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		mass				= 11.47;
	};
	class rhs_30Rnd_762x39mm_polymer_89 : rhs_30Rnd_762x39mm_89
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG6_POLYMER;
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm_89)
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		mass				= 11.47;
	};
	class rhs_30Rnd_762x39mm_polymer_U : rhs_30Rnd_762x39mm_U
	{
		AUTHOR_MACRO
		displayName			= $STR_RHS_CFGMAGAZINES_30RND_545X39_MAG7_POLYMER;
		INVENTORY_PICTURE(rhs_30Rnd_762x39mm_89)
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		mass				= 11.47;
	};
	//10 round polymer mag
	class rhs_10Rnd_762x39mm : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_10Rnd_762x39mm)
		displayName			= $STR_RHS_CFGMAGAZINES_10RND_545X39_MAG4;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0;
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_bakelite_10rnd";
		count				= 10;
		mass				= 5.53;
	};
	class rhs_10Rnd_762x39mm_tracer : rhs_30Rnd_762x39mm_tracer
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_10Rnd_762x39mm)
		displayName			= $STR_RHS_CFGMAGAZINES_10RND_545X39_MAG5;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0;
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_bakelite_10rnd";
		count				= 10;
		mass				= 5.53;
	};
	class rhs_10Rnd_762x39mm_89 : rhs_30Rnd_762x39mm_89
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_10Rnd_762x39mm)
		displayName			= $STR_RHS_CFGMAGAZINES_10RND_545X39_MAG6;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0;
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_bakelite_10rnd";
		count				= 10;
		mass				= 5.53;
	};
	class rhs_10Rnd_762x39mm_U : rhs_30Rnd_762x39mm_U
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_10Rnd_762x39mm)
		displayName			= $STR_RHS_CFGMAGAZINES_10RND_545X39_MAG7;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0;
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_bakelite_10rnd";
		count				= 10;
		mass				= 5.53;
	};
	//75 round steel drum
	class rhs_75Rnd_762x39mm : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_75Rnd_762x39mm)
		displayName			= $STR_RHS_CFGMAGAZINES_75RND_762X39_MAG4;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0;
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
		count				= 75;
		mass				= 33.68;
	};
	class rhs_75Rnd_762x39mm_tracer : rhs_30Rnd_762x39mm_tracer
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_75Rnd_762x39mm_tracer)
		displayName			= $STR_RHS_CFGMAGAZINES_75RND_762X39_MAG5;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0;
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
		count				= 75;
		mass				= 33.68;
	};
	class rhs_75Rnd_762x39mm_89 : rhs_30Rnd_762x39mm_89
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_75Rnd_762x39mm_89)
		displayName			= $STR_RHS_CFGMAGAZINES_75RND_762X39_MAG6;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_75RND_762X39_MAG_Desc_0;
		model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
		count				= 75;
		mass				= 33.68;
	};

	// 9x39
	class rhs_20rnd_9x39mm_SP5 : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_20rnd_9x39mm_SP5)
		ammo				= "rhs_B_9x39_SP5";
		count				= 20;
		initSpeed			= 280;
		lastRoundsTracer	= 0;
		mass				= 8.09;
		model				= "\rhsafrf\addons\rhs_weapons2\magazines\rhs_9x39_20mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x39_6l25_20rnd";
		displayName			= $STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_SP5;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_Desc_0;
		displayNameShort	= "SP-5";
	};
	class rhs_20rnd_9x39mm_SP6 : rhs_20rnd_9x39mm_SP5
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_20rnd_9x39mm_SP6)
		ammo				= "rhs_B_9x39_SP6";
		displayName			= $STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_SP6;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_Desc_1;
		displayNameShort	= "SP-6";
	};
	class rhs_10rnd_9x39mm_SP5 : rhs_20rnd_9x39mm_SP5
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_10rnd_9x39mm_SP5)
		count				= 10;
		mass				= 5.45;
		model				= "\rhsafrf\addons\rhs_weapons2\magazines\rhs_9x39_10mag";
		modelSpecial		= "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x39_6l24_10rnd";
		displayName			= $STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_SP5;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_Desc_0;
	};
	class rhs_10rnd_9x39mm_SP6 : rhs_10rnd_9x39mm_SP5
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_10rnd_9x39mm_SP6)
		ammo				= "rhs_B_9x39_SP6";
		displayName			= $STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_SP6;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_Desc_1;
		displayNameShort	= "SP-6";
	};

	// .338 Lapua

	class rhs_5Rnd_338lapua_t5000 : rhs_30Rnd_762x39mm
	{
		AUTHOR_MACRO
		picture				= "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		model				= "\rhsafrf\addons\rhs_weapons3\magazines\rhs_t5000_mag";
		displayName			= $STR_RHS_CFGMAGAZINES_5RND_338LAPUA_T5000;
		descriptionShort	= $STR_RHS_CFGMAGAZINES_5RND_338LAPUA_T5000_Desc_0;
		displayNameShort	= ".338 Lapua";
		ammo				= "B_338_Ball";
		count				= 5;
		initSpeed			= 925;
		lastRoundsTracer	= 0;
		mass				= 1.32;
	};
	///! Mines

	class ATMine_Range_Mag;

	class rhs_mine_pmn2_mag: ATMine_Range_Mag
	{
		mass = 9.24;
		ammo = "rhs_mine_pmn2_ammo";
		picture = "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_pmn2_ca";
		AUTHOR_MACRO
		displayName = "$STR_RHS_CFGMAGAZINES_PMN20";
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_pmn2";
		descriptionShort = "$STR_RHS_CFGMAGAZINES_PMN21";

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
		allowedSlots[] = {901};
	};

	class rhs_mine_tm62m_mag: ATMine_Range_Mag
	{
		mass = 104.5; // not 9.5kg
		//mass = 209; //9.5kg
		ammo = "rhs_mine_tm62m_ammo";
		picture = "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_tm62m_ca";
		AUTHOR_MACRO
		displayName = "$STR_RHS_CFGMAGAZINES_TM62M0";
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_tm62m";
		descriptionShort = "$STR_RHS_CFGMAGAZINES_TM62M1";

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
		allowedSlots[] = {901};
	};

	class rhs_mine_msk40p_white_mag: ATMine_Range_Mag
	{
		AUTHOR_MACRO
		mass				= 20;
		ammo				= "rhs_mine_msk40p_white_ammo";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_msk40p_white_ca";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_white_d";
		displayName			= "$STR_RHS_MINE_MSK40P_W_MAG_DISPLAYNAME";
		descriptionShort	= "$STR_RHS_MINE_MSK40P_MAG_DESCRIPTIONSHORT";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineWireMagazine_Library0";
		};
		descriptionUse = "$STR_A3_use_mine";
		allowedSlots[] = {901,701};
	};
	class rhs_mine_msk40p_red_mag: rhs_mine_msk40p_white_mag
	{
		ammo				= "rhs_mine_msk40p_red_ammo";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_msk40p_red_ca";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_red_d";
		displayName			= "$STR_RHS_MINE_MSK40P_R_MAG_DISPLAYNAME";
	};
	class rhs_mine_msk40p_green_mag: rhs_mine_msk40p_white_mag
	{
		ammo				= "rhs_mine_msk40p_green_ammo";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_msk40p_green_ca";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_green_d";
		displayName			= "$STR_RHS_MINE_MSK40P_G_MAG_DISPLAYNAME";
	};
	class rhs_mine_msk40p_blue_mag: rhs_mine_msk40p_white_mag
	{
		ammo				= "rhs_mine_msk40p_blue_ammo";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_msk40p_blue_ca";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_blue_d";
		displayName			= "$STR_RHS_MINE_MSK40P_B_MAG_DISPLAYNAME";
	};
	class rhs_mine_sm320_white_mag: rhs_mine_msk40p_white_mag
	{
		mass				= 14;
		ammo				= "rhs_mine_sm320_white_ammo";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_sm320_white_ca";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_white_d";
		displayName			= "$STR_RHS_MINE_SM320_W_MAG_DISPLAYNAME";
	};
	class rhs_mine_sm320_red_mag: rhs_mine_sm320_white_mag
	{
		ammo				= "rhs_mine_sm320_red_ammo";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_sm320_red_ca";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_red_d";
		displayName			= "$STR_RHS_MINE_SM320_R_MAG_DISPLAYNAME";
	};
	class rhs_mine_sm320_green_mag: rhs_mine_sm320_white_mag
	{
		ammo				= "rhs_mine_sm320_green_ammo";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_sm320_green_ca";
		model				= "\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_green_d";
		displayName			= "$STR_RHS_MINE_SM320_G_MAG_DISPLAYNAME";
	};
	class rhs_mine_ozm72_a_mag: ATMine_Range_Mag
	{
		AUTHOR_MACRO
		mass = 55;
		ammo = "rhs_mine_ozm72_a_ammo";
		picture = "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_ozm72_a_ca";
		displayName = "$STR_RHS_CFGMAGAZINES_OZM72A";
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_a_d";
		descriptionShort = "$STR_RHS_CFGMAGAZINES_OZM72_DESCRIPTIONSHORT";

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
		allowedSlots[] = {901};
	};
	class rhs_mine_ozm72_b_mag: rhs_mine_ozm72_a_mag
	{
		AUTHOR_MACRO
		ammo = "rhs_mine_ozm72_b_ammo";
		picture = "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_ozm72_b_ca";
		displayName = "$STR_RHS_CFGMAGAZINES_OZM72B";
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_b_d";
		descriptionShort = "$STR_RHS_CFGMAGAZINES_OZM72_DESCRIPTIONSHORT";
	};
	class rhs_mine_ozm72_c_mag: rhs_mine_ozm72_a_mag
	{
		AUTHOR_MACRO
		ammo = "rhs_mine_ozm72_c_ammo";
		picture = "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_ozm72_c_ca";
		displayName = "$STR_RHS_CFGMAGAZINES_OZM72C";
		model = "\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_c_d";
		descriptionShort = "$STR_RHS_CFGMAGAZINES_OZM72_DESCRIPTIONSHORT";
	};
	class rhs_ec75_mag: ATMine_Range_Mag
	{
		AUTHOR_MACRO
		scope 				= 2;
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC75";
		picture				= "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec75_ca";
		model				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_d";
		descriptionShort 	= "$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
		descriptionUse 		= "$STR_A3_use_charge";
		type 				= "2*		256";
		allowedSlots[] 		= {901,701};
		value 				= 5;
		ammo 				= "rhs_ec75_ammo";
		mass 				= 10.45;
		count 				= 1;
		initSpeed 			= 0;
		maxLeadSpeed 		= 0;
		nameSoundWeapon 	= "satchelcharge";
		nameSound 			= "satchelcharge";
		weaponPoolAvailable = 1;
		useAction 			= 1;
		useActionTitle 		= "$STR_ACTION_PUTBOMB";
		sound[] 			= {"A3\sounds_f\dummysound",0.00031622776,1,10};
	};
	class rhs_ec75_sand_mag: rhs_ec75_mag
	{
		AUTHOR_MACRO
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC75_SAND";
		picture				= "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec75_sand_ca";
		model				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_d";
		ammo 				= "rhs_ec75_sand_ammo";
	};

	class rhs_ec200_mag: rhs_ec75_mag
	{
		AUTHOR_MACRO
		mass 				= 13.2;
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC200";
		picture				= "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec200_ca";
		model				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_d";
		ammo 				= "rhs_ec200_ammo";
	};
	class rhs_ec200_sand_mag: rhs_ec200_mag
	{
		AUTHOR_MACRO
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC200_SAND";
		picture				= "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec200_sand_ca";
		model				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_d";
		ammo 				= "rhs_ec200_sand_ammo";
	};
	class rhs_ec400_mag: rhs_ec75_mag
	{
		AUTHOR_MACRO
		mass 				= 17.6;
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC400";
		picture				= "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec400_ca";
		model				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_d";
		ammo 				= "rhs_ec400_ammo";
		allowedSlots[] 		= {901};
	};
	class rhs_ec400_sand_mag: rhs_ec400_mag
	{
		AUTHOR_MACRO
		displayName 		= "$STR_RHS_CFGMAGAZINES_EC400_SAND";
		picture				= "\rhsafrf\addons\rhs_weapons2\icons\rhs_ec400_sand_ca";
		model				= "\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_d";
		ammo 				= "rhs_ec400_sand_ammo";
	};

	///! RPG

	class CA_LauncherMagazine;
	class FakeMagazine;
	class rhs_rpg26_mag : FakeMagazine
	{
		allowedSlots[] = {701,901};
		scope = 1;
		scopeArsenal=0;
		AUTHOR_MACRO

		displayName = "$STR_RHS_RPG26_NAME";
		displayNameShort = "AT";
		descriptionShort = "$STR_RHS_RPG26_DES";

		picture = "\rhsafrf\addons\rhs_weapons\icons\rpg26rocket_ca.paa";

		//count=449;
		model = "\A3\weapons_f\empty";

		ammo = rhs_rpg26_rocket;
		type = 6 * 		256;
		initSpeed = 149; //real value is 144m/s but it's not algined correctly with sights then
		mass = 0;
	};

	class rhs_rshg2_mag : rhs_rpg26_mag
	{
		scope = 1;
		AUTHOR_MACRO

		displayName = "$STR_RHS_RSHG2_NAME";
		displayNameShort = "HE";
		descriptionShort = "$STR_RHS_RSHG2_DES";

		picture = "\rhsafrf\addons\rhs_weapons\icons\rshg2rocket_ca.paa";

		ammo = rhs_rshg2_rocket;
		type = 6 * 		256;
		initSpeed = 149;
		mass = 0;
	};
	class rhs_rpg18_mag : rhs_rpg26_mag
	{
		AUTHOR_MACRO
		displayName = "$STR_RHS_RPG18_NAME";
		picture = "\rhsafrf\addons\rhs_weapons\icons\rpg26rocket_ca.paa";

		ammo = rhs_rpg18_rocket;
		initSpeed = 115;
		mass = 0;
	};
	class rhs_launcher_dummy_mag : rhs_rpg26_mag
	{
		scope = 1;
		count = 0;
	};


	class rhs_rpg7_PG7VL_mag : CA_LauncherMagazine
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_rpg7_PG7VL_mag)
		scope = 2;

		displayName = "$STR_RHS_PG7VL_NAME";
		displayNameShort = "PG-7VL - AT";
		descriptionShort = "$STR_RHS_PG7VL_DES";

		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7vl_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7vl";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\rpg7\data\rhs_rpg7v2_02_co.paa"};

		//count=251;

		ammo = rhs_rpg7v2_pg7vl;
		type = 6 * 		256;
		initSpeed = 112;
		mass = 37.18;
	};
	class rhs_rpg7_PG7V_mag : rhs_rpg7_PG7VL_mag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_rpg7_PG7V_mag)

		displayName = "$STR_RHS_PG7V_NAME";
		displayNameShort = "PG-7V - AT";

		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7v_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7v";
		hiddenSelections[] = {"camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\rpg7\data\rhs_rpg7v2_02_co.paa","rhsafrf\addons\rhs_weapons\rpg7\data\pg_7v_co.paa"};

		ammo = rhs_rpg7v2_pg7v;
		initSpeed = 114;
		mass = 31.46;
	};
	class rhs_rpg7_PG7VM_mag : rhs_rpg7_PG7V_mag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_rpg7_PG7VM_mag)

		displayName = "$STR_RHS_PG7VM_NAME";
		displayNameShort = "PG-7VM - AT";

		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7vm_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7vm";

		ammo = rhs_rpg7v2_pg7vm;
		initSpeed = 134; //  большую на 20 м/с начальную скорость гранаты из-за её меньшей массы (на 0,36 http://russianguns.ru/?cat=279
		mass = 31.46;
	};
	class rhs_rpg7_PG7VS_mag : rhs_rpg7_PG7V_mag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_rpg7_PG7VS_mag)

		displayName = "$STR_RHS_PG7VS_NAME";
		displayNameShort = "PG-7VS - AT";

		//picture = "\rhsafrf\addons\rhs_weapons\icons\pg7vr_ca.paa";

		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7vs_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7vs";

		ammo = rhs_rpg7v2_pg7vs;
		initSpeed = 134;
		mass = 28.6;
	};
	class rhs_rpg7_PG7VR_mag : rhs_rpg7_PG7VL_mag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_rpg7_PG7VR_mag)

		displayName = "$STR_RHS_PG7VR_NAME";
		displayNameShort = "PG-7VR - AT";
		descriptionShort = "$STR_RHS_PG7VR_DES";

		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7vr_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7vr";

		ammo = rhs_rpg7v2_pg7vr;
		initSpeed = 66;
		mass = 64.35;
	};
	class rhs_rpg7_TBG7V_mag : rhs_rpg7_PG7VL_mag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_rpg7_TBG7V_mag)

		displayName = "$STR_RHS_TBG7V_NAME";
		displayNameShort = "TBG-7V - HE";
		descriptionShort = "$STR_RHS_TBG7V_DES";

		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_tbg7v_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_tbg7v";

		ammo = rhs_rpg7v2_tbg7v;
		initSpeed = 66;
		mass = 64.35;
	};
	class rhs_rpg7_OG7V_mag: rhs_rpg7_PG7VL_mag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_rpg7_OG7V_mag)

		displayName = "$STR_RHS_OG7V_NAME";
		displayNameShort = "OG-7V - HE";
		descriptionShort = "$STR_RHS_OG7V_DES";

		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_og7v_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_og7v";

		ammo = rhs_rpg7v2_og7v;
		initSpeed = 152;
		mass = 28.6;
	};
	class rhs_rpg7_type69_airburst_mag : rhs_rpg7_PG7VL_mag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_rpg7_type69_airburst_mag)

		displayName = "$STR_RHS_TYPE69_AIRBURST_NAME";
		displayNameShort = "AIRBURST";
		descriptionShort = "$STR_RHS_TYPE69_DES";

		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_Type69_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_type69";
		hiddenSelections[] = {"camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\rpg7\data\rhs_rpg7v2_02_co.paa","rhsafrf\addons\rhs_weapons\rpg7\data\type_69_co.paa"};

		ammo = rhs_rpg7v2_type63_airburst;
		initSpeed = 134;
		mass = 28.6;
	};

	class Titan_AA;
	class rhs_mag_9k32_rocket : Titan_AA
	{
		ammo="rhs_ammo_9k32";
		descriptionshort="Range: 800-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
		displayname="9K32";
		AUTHOR_MACRO
		// http://militaryrussia.ru/blog/topic-410.html
		// Стартовая скорость - 19-22 м/с
		initspeed=17;
		maxleadspeed=320;
		modelspecial="";
		picture="\rhsafrf\addons\rhs_weapons\icons\m_igla_ca.paa";
		model = "\rhsafrf\addons\rhs_heavyweapons\igla\igla_missile";
		scope=2;
		nameSound = "missiles";
		type = 6 * WeaponSlotItem;
	};
	class rhs_mag_9k38_rocket : rhs_mag_9k32_rocket
	{
		AUTHOR_MACRO
		ammo="rhs_ammo_9k38";

		displayname = "$STR_RHS_CFGMAGAZINES_9K38_NAME";
		descriptionshort="$STR_RHS_CFGMAGAZINES_9K38_DESC";

		picture="\rhsafrf\addons\rhs_weapons\icons\m_igla_ca.paa";
	};

	#include "rhs_mag_pistols.hpp"
	class HandGrenade;

//flares
	class UGL_FlareRed_F;
	class UGL_FlareWhite_F;
	class UGL_FlareGreen_F;
	class rhs_mag_rsp30_red: UGL_FlareRed_F
	{
		AUTHOR_MACRO
		allowedSlots[] = {};
		ammo = "rhs_40mm_red";
	};
	class rhs_mag_rsp30_green: UGL_FlareGreen_F
	{
		AUTHOR_MACRO
		allowedSlots[] = {};
		ammo = "rhs_40mm_green";
	};
	class rhs_mag_rsp30_white: UGL_FlareWhite_F
	{
		AUTHOR_MACRO
		allowedSlots[] = {};
		ammo = "rhs_40mm_white";
	};

	//handgrenade
	class rhs_mag_rgd5: HandGrenade
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_rgd5";
		displayName			= "$STR_RHS_RGD5_NAME";
		displayNameShort	= "HE Grenade";
		descriptionshort	= "$STR_RHS_RGD5_DES";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rgd5_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons\grenades\frag_rgd5";
		mass				= 6.82;

	};
	class rhs_mag_rgn : rhs_mag_rgd5
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_rgn";
		displayName			= "$STR_RHS_RGN_NAME";
		displayNameShort	= "RGN Impact";
		descriptionshort	= "Type: Offensive Fragmentation Impact Grenade<br />Rounds: 1<br />Used in: Hand";
		picture				= "\rhsafrf\addons\rhs_weapons2\gear\rhs_rgn_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons2\rgno\rgn";
	};
	class rhs_mag_rgo : rhs_mag_rgd5
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_rgo";
		displayName			= "$STR_RHS_RGO_NAME";
		displayNameShort	= "RGO Impact";
		descriptionshort	= "Type: Defensive Fragmentation Impact Grenade<br />Rounds: 1<br />Used in: Hand";
		picture				= "\rhsafrf\addons\rhs_weapons2\gear\rhs_rgo_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons2\rgno\rgo";
	};

//rdg-2, black & white variants avaible
//60 seconds
	class rhs_mag_rdg2_white: HandGrenade
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_rdg2_white";
		displayName			= "$STR_RHS_RDG2WHITE_NAME";
		displayNameShort	= "White Smoke";
		descriptionshort	= "$STR_RHS_RDG2_DES";
		nameSoundWeapon		= "smokeshell";
		nameSound			= "smokeshell";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rdg2_white_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons\grenades\rdg2_white";

	};
	class rhs_mag_rdg2_black: rhs_mag_rdg2_white
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_rdg2_black";
		displayName			= "$STR_RHS_RDG2BLACK_NAME";
		displayNameShort	= "Black Smoke";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rdg2_black_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons\grenades\rdg2_black";
	};
/*
NSP-N - Naziemnyj Signalnyj Patron, emiting LIGHT & SMOKE. red, green & yellow variants avaible
30s of smoke
*/
	class rhs_mag_nspn_yellow: HandGrenade
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_nspn_yellow";
		displayName			= "$STR_RHS_NSPNYELLOW_NAME";
		displayNameShort	= "Yellow Flare";
		descriptionshort	= "$STR_RHS_NSPN_DES";
		nameSoundWeapon		= "smokeshell";
		nameSound			= "smokeshell";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_nspn_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons\grenades\smk_nsp_n";
	};
	class rhs_mag_nspn_red: rhs_mag_nspn_yellow
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_nspn_red";
		displayName			= "$STR_RHS_NSPNRED_NAME";
		displayNameShort	= "Red Flare";
	};
	class rhs_mag_nspn_green: rhs_mag_nspn_yellow
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_nspn_green";
		displayName			= "$STR_RHS_NSPNGREEN_NAME";
		displayNameShort	= "Green Flare";
	};

/*
NSP-D - Naziemnyj Signalnyj Patron, emiting SMOKE. only orange smoke variant avaible
30s of smoke
*/
	class rhs_mag_nspd: HandGrenade
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_nspd";
		displayName			= "$STR_RHS_NSPD_NAME";
		displayNameShort	= "Orange Smoke";
		descriptionshort	= "$STR_RHS_NSPD_DES";
		nameSoundWeapon		= "smokeshell";
		nameSound			= "smokeshell";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\rhs_nspd_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons\grenades\smk_nsp_d";
	};

//flashbangs
/*
Fakel Факел
effective distance:20m - sharpnels
sound distance:20m, no less than 145db
light strenght: 60mln kd
mass: 0,2kg
*/
	class rhs_mag_fakel: HandGrenade
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_fakel";
		displayName			= "$STR_RHS_FAKEL_NAME";
		displayNameShort	= "Flashbang";
		descriptionshort	= "$STR_RHS_FAKEL_DES";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\fakel_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons\grenades\acc_fakel";
		mass				= 4.2;
	};

/*
Fakel-S Факел-С
effective distance:5m
sound distance:10m, no less than 145db
light strenght: 10mln kd
mass: 0,1kg
*/
	class rhs_mag_fakels: HandGrenade
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_fakels";
		displayName			= "$STR_RHS_FAKELS_NAME";
		displayNameShort	= "Flashbang";
		descriptionshort	= "$STR_RHS_FAKEL_DES";
		picture				= "\rhsafrf\addons\rhs_weapons\icons\fakels_ca.paa";
		model				= "\rhsafrf\addons\rhs_weapons\grenades\acc_fakel_s";
		mass				= 2.2;
	};

/*
Zarya-2 Заря-2
effective distance:5m
sound distance:10m, 180db
mass: 0,175kg
light strenght: 30mln kd
timer: 4+1
*/
	class rhs_mag_zarya2: rhs_mag_fakels
	{
		AUTHOR_MACRO
		ammo		= "rhs_ammo_zarya2";
		displayName	= "$STR_RHS_ZARYA2_NAME";
		picture		= "\rhsafrf\addons\rhs_weapons\icons\zarya2_ca.paa";
		model		= "\rhsafrf\addons\rhs_weapons\grenades\acc_zarya";
		mass		= 3.85;
	};
/*
Plamya-M Пламя-М
effective distance:15m
sound distance:15m, 170db
mass: 0,2kg
light strenght: 60mln kd
*/
	class rhs_mag_plamyam: rhs_mag_fakels
	{
		AUTHOR_MACRO
		ammo		= "rhs_ammo_plamyam";
		displayName	= "$STR_RHS_PLAMYAM_NAME";
		picture		= "\rhsafrf\addons\rhs_weapons\icons\plamyam_ca.paa";
		model		= "\rhsafrf\addons\rhs_weapons\grenades\acc_plamyaM";
		mass		= 4.2;
	};

};