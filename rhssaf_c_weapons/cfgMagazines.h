#define INVENTORY_CATEGORY magazines

class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_556x45_Stanag;
	class 32Rnd_155mm_Mo_shells;
//- Pistol Mags

	class rhssaf_mag_15Rnd_9x19_FMJ: CA_Magazine
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		type = 16;
		displayName = $STR_RHSSAF_MAG_15RND_9X19_FMJ_DISPLAYNAME;
		displayNameShort = $STR_RHSSAF_MAG_15RND_9X19_FMJ_DISPLAYNAMESHORT;
		INVENTORY_PICTURE(rhssaf_mag_15Rnd_9x19_FMJ)
		ammo = "rhs_ammo_9x19_FMJ";
		count = 15;
		mass = 6;
		initSpeed = 390.1;
		descriptionShort = "$STR_RHSUSF_15RND_9x19_FMJ_DESCRIPTION_SHORT";
		model = "\rhssaf\addons\rhssaf_m_weapon_cz99\magazine\rhs_15rnd_cz99_mag";
	};

	class rhssaf_mag_15Rnd_9x19_JHP: rhssaf_mag_15Rnd_9x19_FMJ
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		displayName = $STR_RHSSAF_MAG_15RND_9X19_JHP_DISPLAYNAME;
		displayNameShort = $STR_RHSSAF_MAG_15RND_9X19_JHP_DISPLAYNAMESHORT;
		ammo = "rhs_ammo_9x19_JHP";
		initSpeed = 301.8;
		descriptionShort = "$STR_RHSUSF_15RND_9x19_JHP_DESCRIPTION_SHORT";
	};

	class rhsgref_20rnd_765x17_vz61: CA_Magazine
	{
		DLC_AUTHOR;
		mass = 5.5;
		SCOPE_PUBLIC;
		displayName = $STR_RHSSAF_20RND_765X17_VZ61_DISPLAYNAME;
		descriptionShort = $STR_RHSSAF_20RND_765X17_VZ61_DESCRIPTIONSHORT;
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_scorpion.paa";
		ammo = "rhs_ammo_9x17";
		count = 20;
		initSpeed = 320;
		model = "\rhssaf\addons\rhssaf_m_weapon_scorpion\magazine\rhs_20rnd_scorpion_mag";
		modelSpecial = \rhssaf\addons\rhssaf_m_weapon_scorpion\mag_proxies\rhs_mag_765x17_scorpion_20rnd;
		modelSpecialIsProxy = 1;
	};
	class rhsgref_10rnd_765x17_vz61: rhsgref_20rnd_765x17_vz61
	{
		DLC_AUTHOR;
		count = 10;
		mass = 3.5;
		displayName = $STR_RHSSAF_10RND_765X17_VZ61_DISPLAYNAME;
		descriptionShort = $STR_RHSSAF_10RND_765X17_VZ61_DESCRIPTIONSHORT;
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_scorpion2.paa";
		model = "\rhssaf\addons\rhssaf_m_weapon_scorpion\magazine\rhs_10rnd_scorpion_mag";
		modelSpecial = \rhssaf\addons\rhssaf_m_weapon_scorpion\mag_proxies\rhs_mag_765x17_scorpion_10rnd;
	};

//- Rifle Mags
// 5.56x45 NATO
	class rhsgref_30rnd_556x45_m21 : CA_Magazine
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		displayName = $STR_RHSSAF_30RND_556X45_M21_DISPLAYNAME;
		displaynameshort = $STR_RHSSAF_30RND_556X45_M21_DISPLAYNAMESHORT;
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_m21mag_icon_ca.paa"; /// just some icon
		ammo = "rhs_ammo_556x45_M855_Ball";
		count = 30; /// 30 rounds is enough
		initSpeed = 925; /// standard muzzle speed
		mass = 10.35;
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 0; /// no tracers here
		descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: M21 Series Rifles"; /// on mouse-over in Inventory
		magazineGroup[]	= {"rhs_m21_mag_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
		model = "\rhssaf\addons\rhssaf_m_weapon_m21\magazine\rhs_30rnd_m21_mag";
	};

	class rhsgref_30rnd_556x45_m21_t : rhsgref_30rnd_556x45_m21
	{
		DLC_AUTHOR;
		tracersEvery = 3; /// every 3rd bullet is tracer
		lastRoundsTracer = 0; /// no tracers here
		displayName = $STR_RHSSAF_30RND_556X45_M21_T_DISPLAYNAME;
		displaynameshort = $STR_RHSSAF_30RND_556X45_M21_T_DISPLAYNAMESHORT;
		descriptionshort = "Caliber: 5.56x45mm Tracer<br />Rounds: 30<br />Used in: M21 Series Rifles";
		magazineGroup[]	= {"rhs_m21_mag_group"};
	};

	class rhssaf_30rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		ammo = "rhs_ammo_556x45_M855A1_Ball";
		count = 30;
		descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Rifles";
		displayname = $STR_RHSSAF_30RND_556X45_EPR_G36_DISPLAYNAME;
		magazineGroup[] = { "G36_maggroup" };
		initspeed = 920;
		mass = 5.95;
		lastroundstracer = 0;
		tracersevery = 0;
		displaynameshort = $STR_RHSSAF_30RND_556X45_EPR_G36_DISPLAYNAMESHORT;
		model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
		modelSpecial = rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd;
		modelSpecialIsProxy = 1;
		INVENTORY_PICTURE(rhssaf_30rnd_556x45_EPR_G36)
	};
	class rhssaf_30rnd_556x45_SOST_G36 : 30Rnd_556x45_Stanag
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		ammo = "rhs_ammo_556x45_Mk318_Ball";
		count = 30;
		descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Rifles";
		displayname = $STR_RHSSAF_30RND_556X45_SOST_G36_DISPLAYNAME;
		magazineGroup[] = { "G36_maggroup" };
		initspeed = 910;
		mass = 5.95;
		lastroundstracer = 0;
		tracersevery = 0;
		displaynameshort = $STR_RHSSAF_30RND_556X45_SOST_G36_DISPLAYNAMESHORT;
		model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
		modelSpecial = rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd;
		modelSpecialIsProxy = 1;
		INVENTORY_PICTURE(rhssaf_30rnd_556x45_SOST_G36)
	};
	class rhssaf_30rnd_556x45_SPR_G36 : 30Rnd_556x45_Stanag
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		ammo = "rhs_ammo_556x45_Mk262_Ball";
		count = 30;
		descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Rifles";
		displayname = $STR_RHSSAF_30RND_556X45_SPR_G36_DISPLAYNAME;
		magazineGroup[] = { "G36_maggroup" };
		initspeed = 818.2;
		mass = 5.95;
		lastroundstracer = 0;
		tracersevery = 0;
		displaynameshort = $STR_RHSSAF_30RND_556X45_SPR_G36_DISPLAYNAMESHORT;
		model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
		modelSpecial = rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd;
		modelSpecialIsProxy = 1;
		INVENTORY_PICTURE(rhssaf_30rnd_556x45_SPR_G36)
	};
	class rhssaf_100rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		ammo = "rhs_ammo_556x45_M855A1_Ball";
		count = 100;
		descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 100<br />Used in: G36 Series Rifles";
		displayname = $STR_RHSSAF_100RND_556X45_EPR_G36_DISPLAYNAME;
		magazineGroup[] = { "G36_maggroup" };
		initspeed = 920;
		mass = 35.24;
		lastroundstracer = 0;
		tracersevery = 0;
		displaynameshort = $STR_RHSSAF_100RND_556X45_EPR_G36_DISPLAYNAMESHORT;
		model = rhsusf\addons\rhsusf_weapons\magazines\rhs_cmag;
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_cmag_100rnd;
		modelSpecialIsProxy = 1;
		INVENTORY_PICTURE(rhssaf_100rnd_556x45_EPR_G36)
	};
	class rhssaf_30rnd_556x45_Tracers_G36 : 30Rnd_556x45_Stanag
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		count = 30;
		descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Series Rifles";
		displayname = $STR_RHSSAF_30RND_556X45_TRACERS_G36_DISPLAYNAME;
		magazineGroup[] = { "G36_maggroup" };
		initspeed = 920;
		mass = 5.95;
		lastroundstracer = 0;
		tracersevery = 3;
		displaynameshort = $STR_RHSSAF_30RND_556X45_TRACERS_G36_DISPLAYNAMESHORT;
		model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
		modelSpecial = rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd;
		modelSpecialIsProxy = 1;
		INVENTORY_PICTURE(rhssaf_30rnd_556x45_Tracers_G36)
	};
	class rhssaf_30rnd_556x45_TDIM_G36: 30Rnd_556x45_Stanag
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		ammo = "rhssaf_ammo_556x45_Ball_Tracer_Dim";
		count = 30;
		descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Series Rifles";
		displayname = $STR_RHSSAF_30RND_556X45_TDIM_G36_DISPLAYNAME;
		magazineGroup[] = {"G36_maggroup"};
		initspeed = 920;
		mass = 5.95;
		lastroundstracer = 0;
		tracersevery = 3;
		displaynameshort = $STR_RHSSAF_30RND_556X45_TDIM_G36_DISPLAYNAMESHORT;
		model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
		modelSpecial = rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd;
		modelSpecialIsProxy = 1;
		INVENTORY_PICTURE(rhssaf_30rnd_556x45_TDIM_G36)
	};
	class rhssaf_30rnd_556x45_MDIM_G36: 30Rnd_556x45_Stanag
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		ammo = "rhssaf_ammo_556x45_Ball_Tracer_Dim";
		count = 30;
		descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Series Rifles";
		displayname = $STR_RHSSAF_30RND_556X45_MDIM_G36_DISPLAYNAME;
		magazineGroup[] = {"G36_maggroup"};
		initspeed = 920;
		mass = 5.95;
		lastroundstracer = 0;
		tracersevery = 3;
		displaynameshort = $STR_RHSSAF_30RND_556X45_MDIM_G36_DISPLAYNAMESHORT;
		model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
		modelSpecial = rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd;
		modelSpecialIsProxy = 1;
		INVENTORY_PICTURE(rhssaf_30rnd_556x45_MDIM_G36)
	};
// 7.62x39
	class rhs_30Rnd_545x39_AK;
	class rhssaf_30Rnd_762x39mm_M67 : rhs_30Rnd_545x39_AK
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		INVENTORY_PICTURE(rhssaf_30Rnd_762x39mm_M67)
		displayName = $STR_RHSSAF_30RND_762X39_M67_DISPLAYNAME;
		descriptionShort = $STR_RHSSAF_30RND_762X39_M67_DESC;
		displayNameShort = "M67";

		modelSpecial = "rhssaf\addons\rhssaf_m_weapon_m70\mag_proxies\rhs_mag_762x39_zastava_steel_30rnd";
		model = "\rhssaf\addons\rhssaf_m_weapon_m70\magazines\rhs_762x39_zastava_mag";
		modelSpecialIsProxy = 1;
		ammo = "rhs_B_762x39_Ball";
		count = 30;
		initSpeed = 718;
		mass = 13.53;

	};
	class rhssaf_30Rnd_762x39mm_M78_tracer : rhssaf_30Rnd_762x39mm_M67
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		tracersEvery = 3;
		lastroundstracer = 0;
		ammo = "rhs_B_762x39_Tracer";
		displayName = $STR_RHSSAF_30RND_762X39_M78_TRACER_DISPLAYNAME;
		displayNameShort = "M78 Tracer";
		descriptionShort = $STR_RHSSAF_30RND_762X39_M78_TRACER_DESC;
	};
	class rhssaf_30Rnd_762x39_M82_api : rhssaf_30Rnd_762x39mm_M67
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		tracersevery = 1;
		lastroundstracer = 1;
		ammo = "rhssaf_ammo_762x39_m82_api";
		displayname = $STR_RHSSAF_30RND_762X39_M82_API_DISPLAYNAME;
		displaynameshort = $STR_RHSSAF_30RND_762X39_M82_API_DISPLAYNAMESHORT;
		descriptionshort = $STR_RHSSAF_30RND_762X39_M82_API_DESCRIPTIONSHORT;

	};

// 7.92x51 NATO

	class rhs_mag_20Rnd_SCAR_762x51_m80_ball;
	class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr;
	class rhs_mag_20Rnd_SCAR_762x51_m62_tracer;
	class rhs_mag_20Rnd_SCAR_762x51_m61_ap;
	class rhs_mag_20Rnd_SCAR_762x51_m118_special;
	class rhs_mag_20Rnd_SCAR_762x51_mk316_special;

	class rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		DLC_AUTHOR
		displayName = "20rnd SCAR M80 (black)";
		INVENTORY_PICTURE(rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk)
		model				= "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
		modelSpecial		= rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd;
	};
	class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk: rhs_mag_20Rnd_SCAR_762x51_m80a1_epr
	{
		DLC_AUTHOR
		displayName = "20rnd SCAR M80A1 EPR (black)";
		INVENTORY_PICTURE(rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk)
		model				= "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
		modelSpecial		= rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd;
	};
	class rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk: rhs_mag_20Rnd_SCAR_762x51_m62_tracer
	{
		DLC_AUTHOR
		displayName = "20rnd SCAR M62 Tracer (black)";
		INVENTORY_PICTURE(rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk)
		model				= "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
		modelSpecial		= rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd;
	};
	class rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk: rhs_mag_20Rnd_SCAR_762x51_m61_ap
	{
		DLC_AUTHOR
		displayName = "20rnd SCAR M61 AP (black)";
		INVENTORY_PICTURE(rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk)
		model				= "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
		modelSpecial		= rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd;
	};
	class rhs_mag_20Rnd_SCAR_762x51_m118_special_bk: rhs_mag_20Rnd_SCAR_762x51_m118_special
	{
		DLC_AUTHOR
		displayName = "20rnd SCAR M118 Ball (black)";
		INVENTORY_PICTURE(rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk)
		model				= "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
		modelSpecial		= rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd;
	};

	class rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk: rhs_mag_20Rnd_SCAR_762x51_mk316_special
	{
		DLC_AUTHOR
		displayName = "20rnd SCAR Mk316 Mod 0 (black)";
		INVENTORY_PICTURE(rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk)
		model				= "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
		modelSpecial		= rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd;
	};

// 7.92x57 Mauser

	class rhsgref_10Rnd_792x57_m76: CA_Magazine
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		displayName = $STR_RHSSAF_10RND_792X57_M76_DISPLAYNAME;
		displaynameshort = $STR_RHSSAF_10RND_792X57_M76_DISPLAYNAMESHORT;
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_m76mag_icon_ca.paa";
		ammo = "rhs_ammo_792x57_Ball";
		count = 10;
		initSpeed = 730;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionshort = "Caliber: 7.92x57mm Mauser <br />Rounds: 10<br />Used in: M76 Rifle";
		magazineGroup[]	= {"rhs_m76_mag_group"};
		mass = 	6.94;
		model = "\rhssaf\addons\rhssaf_m_weapon_m76\magazine\rhs_10rnd_m76_mag";
	};
	class rhssaf_10Rnd_792x57_m76_tracer: CA_Magazine
	{
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		displayName = $STR_RHSSAF_10RND_792X57_M76_TRACER_DISPLAYNAME;
		displaynameshort = $STR_RHSSAF_10RND_792X57_M76_TRACER_DISPLAYNAMESHORT;
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_m76mag_icon_ca.paa";
		ammo = "rhs_ammo_792x57_Ball";
		count = 10;
		initSpeed = 730;
		tracersEvery = 3;
		lastRoundsTracer = 0;
		descriptionshort = "Caliber: 7.92x57mm Mauser/Tracer <br />Rounds: 10<br />Used in: M76 Rifle";
		magazineGroup[]	= {"rhs_m76_mag_group"};
		mass = 	6.94;
		model = "\rhssaf\addons\rhssaf_m_weapon_m76\magazine\rhs_10rnd_m76_mag";
	};
	class rhs_100Rnd_762x54mmR;

	class rhssaf_250Rnd_762x54R: rhs_100Rnd_762x54mmR
	{
		displayName = $STR_RHSSAF_250RND_762X54R_DISPLAYNAME;
		descriptionshort = "Caliber: 7.62x54Rmm <br />Rounds: 250<br />Used in: M84 LMG";
		ammo = "rhs_B_762x54_Ball";
		count = 250;
		DLC_AUTHOR;
		scope = 2;
		mass = 128.7;
	};
	//AT magazines
	class rhs_rpg26_mag;
	class rhs_m80_mag: rhs_rpg26_mag
	{
		DLC_AUTHOR;
		displayName = $STR_RHS_M80_MAG_DISPLAYNAME;
		ammo = "rhs_ammo_m80_rocket";
		descriptionshort = "Caliber: 64mm HEAT <br />Rounds: 1<br />Preloaded in: RBR M80";
		scope = 1;
		scopeArsenal=0;
		initSpeed=190;
		mass = 31.24;
	};

/// 60mm mortars
	class rhssaf_mag_m73_HE: 32Rnd_155mm_Mo_shells
	{
		scope = 2;
		displayName = "M73 HE";
		displayNameShort = "HE";
		ammo = "rhssaf_mortar_M73_HE";
		count = 10;
		initSpeed = 126.5;
	};

	///! Mines and explosives
	class ATMine_Range_Mag;
	class rhssaf_mine_pma3_mag: ATMine_Range_Mag
	{
		DLC_AUTHOR;
		mass = 3.96;
		ammo = "rhssaf_mine_pma3_ammo";
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_pma3_ca.paa";
		displayName = $STR_RHSSAF_PMA3_DISPLAYNAME;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_d";
		descriptionShort = $STR_RHSSAF_PMA3_DESCRIPTIONSHORT;

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
	};
	class rhssaf_mine_tma4_mag: ATMine_Range_Mag
	{
		DLC_AUTHOR;
		mass = 69.3; // 6300g - see RHS Item mass in #links (pinned)
		ammo = "rhssaf_mine_tma4_ammo";
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_tma4_ca.paa";
		displayName = $STR_RHSSAF_TMA4_DISPLAYNAME;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_d";
		descriptionShort = $STR_RHSSAF_TMA4_DESCRIPTIONSHORT;

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
	};
	class rhssaf_mine_mrud_a_mag: ATMine_Range_Mag
	{
		DLC_AUTHOR;
		mass = 48.4;
		ammo = "rhssaf_mine_mrud_a_ammo";
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_mrud_a_ca.paa";
		displayName = $STR_RHSSAF_MRUD_A_DISPLAYNAME;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
		descriptionShort = $STR_RHSSAF_MRUD_A_DESCRIPTIONSHORT;

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
	};
	class rhssaf_mine_mrud_b_mag: rhssaf_mine_mrud_a_mag
	{
		DLC_AUTHOR;
		ammo = "rhssaf_mine_mrud_b_ammo";
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_mrud_a_ca.paa";
		displayName = $STR_RHSSAF_MRUD_B_DISPLAYNAME;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
		descriptionShort = $STR_RHSSAF_MRUD_A_DESCRIPTIONSHORT;

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
	};
	class rhssaf_mine_mrud_c_mag: rhssaf_mine_mrud_a_mag
	{
		DLC_AUTHOR;
		ammo = "rhssaf_mine_mrud_b_ammo";
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_mrud_a_ca.paa";
		displayName = $STR_RHSSAF_MRUD_C_DISPLAYNAME;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
		descriptionShort = $STR_RHSSAF_MRUD_A_DESCRIPTIONSHORT;

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
	};
	class rhssaf_mine_mrud_d_mag: rhssaf_mine_mrud_a_mag
	{
		DLC_AUTHOR;
		ammo = "rhssaf_mine_mrud_d_ammo";
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_mrud_d_ca.paa";
		displayName = $STR_RHSSAF_MRUD_D_DISPLAYNAME;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_d";
		descriptionShort = $STR_RHSSAF_MRUD_D_DESCRIPTIONSHORT;
	};
	class rhssaf_tm100_mag: CA_Magazine
	{
		DLC_AUTHOR;
		scope = 2;
		displayName = $STR_RHSSAF_TM100_DISPLAYNAME;
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_tm100_icon_ca.paa";
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_d";
		descriptionShort = "$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
		descriptionUse = "$STR_A3_use_charge";
		type = "2*		256";
		allowedSlots[] = {901,701};
		value = 5;
		ammo = "rhssaf_tm100_ammo";
		mass = 3.3;
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		weaponPoolAvailable = 1;
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] = {"A3\sounds_f\dummysound",0.00031622776,1,10};
	};

	class rhssaf_tm200_mag: rhssaf_tm100_mag
	{
		DLC_AUTHOR;
		scope = 2;
		mass = 6.6;
		displayName = $STR_RHSSAF_TM200_DISPLAYNAME;
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_tm200_icon_ca.paa";
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_d";
		ammo = "rhssaf_tm200_ammo";
		descriptionShort = "$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
		allowedSlots[] = {901,701};
	};
	class rhssaf_tm500_mag: rhssaf_tm100_mag
	{
		DLC_AUTHOR;
		scope = 2;
		mass = 14.3;
		displayName = $STR_RHSSAF_TM500_DISPLAYNAME;
		picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_tm500_icon_ca.paa";
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_d";
		ammo = "rhssaf_tm500_ammo";
		descriptionShort = "$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
		allowedSlots[] = {901};
	};

	#include "rhssaf_grenade_mags.hpp"
};
