#define crewMacroIns 	crew=rhsgref_ins_crew;\
			AUTHOR_MACRO\
			side=0;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_chdkz";

#define crewMacroInsInf 	crew=rhsgref_ins_rifleman;\
			AUTHOR_MACRO\
			side=0;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_chdkz";

#define crewMacroInsPilot 	crew=rhsgref_ins_pilot;\
			AUTHOR_MACRO\
			side=0;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_chdkz";


//- Static


class rhsgref_ins_2b14 : rhs_2b14_82mm_base
{
	EdPrev(rhsgref_ins_2b14)
	scope = 2;
	crewMacroInsInf
};
class rhsgref_ins_d30 : rhs_d30_base
{
	EdPrev(rhsgref_ins_d30)
	scope = 2;
	crewMacroInsInf
};
class rhsgref_ins_d30_at : rhs_d30_at_base
{
	EdPrev(rhsgref_ins_d30_at)
	crewMacroInsInf
	scope = 2;
};
class rhsgref_ins_AGS30_TriPod: RHS_AGS30_TriPod_base
{
	EdPrev(rhsgref_ins_AGS30_TriPod)
	crewMacroInsInf
	scope = 2;
};
class rhsgref_ins_NSV_TriPod: rhs_nsv_tripod_base
{
	EdPrev(rhsgref_ins_NSV_TriPod)
	crewMacroInsInf
	scope = 2;
};
class rhsgref_ins_ZU23: RHS_ZU23_base
{
	EdPrev(rhsgref_ins_ZU23)
	crewMacroInsInf
	scope = 2;
};
class rhsgref_ins_Igla_AA_pod : rhs_Igla_AA_pod_Base
{
	EdPrev(rhsgref_ins_Igla_AA_pod)
	crewMacroInsInf
	scope = 2;
};
class rhsgref_ins_SPG9: rhs_SPG9_base
{
	EdPrev(rhsgref_ins_SPG9)
	scope = 2;
	crewMacroInsInf
};
class rhsgref_ins_SPG9M: rhs_SPG9M_base
{
	EdPrev(rhsgref_ins_SPG9M)
	scope = 2;
	crewMacroInsInf
};
class rhsgref_ins_DSHKM_Mini_TriPod: rhs_DSHkM_Mini_TriPod_base
{
	EdPrev(rhsgref_ins_DSHKM_Mini_TriPod)
	scope = 2;
	crewMacroInsInf
};
class rhsgref_ins_DSHKM: rhs_DSHKM_base
{
	EdPrev(rhsgref_ins_DSHKM)
	scope = 2;
	crewMacroInsInf
};

#define UAZ_CHDKZ_Decal \
		rhs_decalParameters[]={\
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']" \
		};

//- Wheeled

// Uaz
class rhsgref_ins_uaz : RHS_UAZ_Base
{
	EdPrev(rhsgref_ins_uaz)
	scope =2;
	HideLightCover
	crewMacroInsInf
	UAZ_CHDKZ_Decal
	accuracy = 0.5;

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"
	};
};

class rhsgref_ins_uaz_open : rhs_uaz_open_Base
{
	EdPrev(rhsgref_ins_uaz_open)
	scope =2;
	HideLightCover
	crewMacroInsInf
	UAZ_CHDKZ_Decal
	accuracy = 0.5;

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"
	};
};

class rhsgref_ins_uaz_dshkm: RHS_UAZ_DShKM_Base
{
	EdPrev(rhsgref_ins_uaz_dshkm)
	scope =2;
	HideLightCover
	crewMacroInsInf
	UAZ_CHDKZ_Decal
	accuracy = 0.5;

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa",
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {gunnerType="rhsgref_ins_rifleman_aksu";};
		class CargoTurret_01: CargoTurret_01 {};
	};
};

class rhsgref_ins_uaz_ags : RHS_UAZ_AGS30_Base
{
	EdPrev(rhsgref_ins_uaz_ags)
	scope =2;
	HideLightCover
	crewMacroInsInf
	UAZ_CHDKZ_Decal
	accuracy = 0.5;

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa",
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {gunnerType="rhsgref_ins_rifleman_aksu";};
		class CargoTurret_01: CargoTurret_01 {};
	};
};

class rhsgref_ins_uaz_spg9 : RHS_UAZ_SPG9_Base
{
	EdPrev(rhsgref_ins_uaz_spg9)
	UAZ_CHDKZ_Decal
	scope =2;
	HideLightCover
	crewMacroInsInf

	accuracy = 0.5;

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa",
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {gunnerType="rhsgref_ins_rifleman_aksu";};
		class CargoTurret_01: CargoTurret_01 {};
	};
};


// Ural

class rhsgref_ins_ural : RHS_Ural_Civ_Base
{
	EdPrev(rhsgref_ins_ural)
	scope=2;
	displayName="$STR_RHS_URAL4320_NAME";
	crewMacroInsInf
	HideLightCover

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_chdkz_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
	};
};

class rhsgref_ins_ural_open : RHS_Ural_Civ_Base
{
	EdPrev(rhsgref_ins_ural_open)
	scope=2;
	displayName="$STR_RHS_URAL4320OPEN_NAME";
	crewMacroInsInf
	HideLightCover

	model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open2.p3d";
	picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\ural_open_ca.paa";

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_chdkz_co.paa"
	};
};

class rhsgref_ins_ural_work : RHS_Ural_Civ_Base
{
	EdPrev(rhsgref_ins_ural_work)
	scope=2;
	displayName="$STR_RHS_URAL4320WORKER_NAME";
	crewMacroInsInf
	HideLightCover

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa",
		"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa"
	};
};

class rhsgref_ins_ural_work_open : RHS_Ural_Civ_Base
{
	EdPrev(rhsgref_ins_ural_work_open)
	scope=2;
	displayName="$STR_RHS_URAL4320WORKEROPEN_NAME";
	crewMacroInsInf
	HideLightCover
	model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa",
		"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa"
	};
};

class rhsgref_ins_ural_repair : RHS_Ural_Repair_MSV_01
{
	EdPrev(rhsgref_ins_ural_repair)
	scope=2;
	displayName="$STR_RHS_URAL4320REPAIR_NAME";
	crewMacroInsInf
	HideLightCover

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
	};
};

// Ural (ZU23)

class rhsgref_ins_ural_Zu23: RHS_Ural_Zu23_Base
{
	EdPrev(rhsgref_ins_ural_Zu23)
	scope=2;
	crewMacroInsInf
	HideLightCover
	accuracy = 0.5;
	rhs_decalParameters[]={
		"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_chdkz_co.paa"
	};

	class Turrets: Turrets
	{
		class MainTurret: MainTurret {
			gunnerType="rhsgref_ins_rifleman";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType="rhsgref_ins_squadleader";
		};
		class CargoTurret_02: CargoTurret_02 {};
		class CargoTurret_03: CargoTurret_03 {};
	};
};

// BM-21 Grad
class rhsgref_ins_BM21 : RHS_BM21_MSV_01
{
	EdPrev(rhsgref_ins_BM21)
	scope=2;

	crewMacroInsInf
	rhs_decalParameters[]={
		"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_chdkz_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
	};
};

#define CHDKZ_GAZ66_Macro \
	scope = 2;\
	hiddenSelectionsTextures[]= {\
		"\rhsafrf\addons\rhs_gaz66\data\gaz66_chdk_co.paa",\
		"\rhsafrf\addons\rhs_gaz66\data\tent_chdk_co.paa",\
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",\
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",\
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa"\
	};\
	rhs_decalParameters[]={\
		"['Number', cTrucksGaz4NumberPlaces, 'LicensePlate']" \
	};\
	class AnimationSources:  AnimationSources {\
		class light_hide: light_hide {\
			initPhase = 1;\
		};\
	}

class rhsgref_ins_gaz66: rhs_gaz66_vmf {EdPrev2(rhsgref_ins_gaz66);CHDKZ_GAZ66_Macro;crewMacroInsInf};
class rhsgref_ins_gaz66o: rhs_gaz66o_vmf {EdPrev2(rhsgref_ins_gaz66o);CHDKZ_GAZ66_Macro;crewMacroInsInf};
class rhsgref_ins_gaz66_flat: rhs_gaz66_flat_vmf {EdPrev2(rhsgref_ins_gaz66_flat);CHDKZ_GAZ66_Macro;crewMacroInsInf};
class rhsgref_ins_gaz66o_flat: rhs_gaz66o_flat_vmf {EdPrev2(rhsgref_ins_gaz66o_flat);CHDKZ_GAZ66_Macro;crewMacroInsInf};
class rhsgref_ins_gaz66_ap2: rhs_gaz66_ap2_vmf {EdPrev2(rhsgref_ins_gaz66_ap2);CHDKZ_GAZ66_Macro;crewMacroInsInf};
class rhsgref_ins_gaz66_repair: rhs_gaz66_repair_vmf {EdPrev2(rhsgref_ins_gaz66_repair);CHDKZ_GAZ66_Macro;crewMacroInsInf};
class rhsgref_ins_gaz66_r142: rhs_gaz66_r142_vmf {EdPrev2(rhsgref_ins_gaz66_r142);CHDKZ_GAZ66_Macro;crewMacroInsInf};
class rhsgref_ins_gaz66_ammo: rhs_gaz66_ammo_vmf {
	EdPrev2(rhsgref_ins_gaz66_ammo);
	CHDKZ_GAZ66_Macro;
	crewMacroInsInf

	class TransportBackpacks
	{
		bag_xx(rhs_rpg_vl,3);
		bag_xx(rhs_rpg_at,1);
	};
	class TransportMagazines
	{
		// AK-74/RPK-74
		mag_xx(rhs_30Rnd_545x39_7N6M_plum_AK,20);
		mag_xx(rhs_30Rnd_545x39_7N10_2mag_plum_AK,10);
		mag_xx(rhs_45Rnd_545x39_7N6_AK, 10);
		// AKM/RPK
		mag_xx(rhs_30Rnd_762x39mm_bakelite,40);
		mag_xx(rhs_30Rnd_762x39mm,30);
		mag_xx(rhs_30Rnd_762x39mm_polymer,20);
		mag_xx(rhs_75Rnd_762x39mm, 15);
		//PKM
		mag_xx(rhs_100Rnd_762x54mmR,20);
		//M76 (Swap out for SVD mags if wood SVD is ever introduced)
		mag_xx(rhs_10Rnd_762x54mmR_7N1,20);
		//GP-25
		mag_xx(rhs_VOG25,100);
		mag_xx(rhs_VOG25P,100);
		mag_xx(rhs_mag_9x18_8_57N181S,20);
		mag_xx(rhs_rpg26_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,4);
	};
};
class rhsgref_ins_gaz66_zu23: rhs_gaz66_zu23_vmf {
	EdPrev(rhsgref_ins_gaz66_zu23)
	crewMacroInsInf
	CHDKZ_GAZ66_Macro;

	class Turrets: Turrets
	{
		class MainTurret: MainTurret {
			gunnerType="rhsgref_ins_rifleman";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType="rhsgref_ins_squadleader";
		};
		class CargoTurret_02: CargoTurret_02 {};
	};
};

#define CHDKZ_ZIL131_TEXTURES \
hiddenselectionstextures[] = \
{\
	"\rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\rhs_zil131_cargo_CHDKZ_co.paa",\
	"\rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\rhs_zil131_cabin_CHDKZ_co.paa",\
	"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",\
	"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",\
	"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa"\
};\
textureList[] = {CHDKZ,1};\
scope = 2; scopeCurator = 2

class rhsgref_ins_zil131: rhs_zil131_base {CHDKZ_ZIL131_TEXTURES;EdPrev2(rhsgref_ins_zil131);crewMacroInsInf};
class rhsgref_ins_zil131_open: rhs_zil131_open_base {CHDKZ_ZIL131_TEXTURES;EdPrev2(rhsgref_ins_zil131_open);crewMacroInsInf};
class rhsgref_ins_zil131_flatbed: rhs_zil131_flatbed_base {CHDKZ_ZIL131_TEXTURES;EdPrev2(rhsgref_ins_zil131_flatbed);crewMacroInsInf};
class rhsgref_ins_zil131_flatbed_cover: rhs_zil131_flatbed_cover_base {CHDKZ_ZIL131_TEXTURES;EdPrev2(rhsgref_ins_zil131_flatbed_cover);crewMacroInsInf};

#define chdkzBTR_equipmentMacro class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_762x39mm_bakelite,10);\
		mag_xx(rhs_30Rnd_762x39mm,8);\
		mag_xx(rhs_30Rnd_762x39mm_polymer,2);\
		mag_xx(rhs_30Rnd_545x39_7N6M_plum_AK,10);\
		mag_xx(rhs_10Rnd_762x54mmR_7N1,10);\
		mag_xx(rhs_100Rnd_762x54mmR,3);\
		mag_xx(rhs_mag_rdg2_white,2);\
		mag_xx(rhs_mag_rgd5,9);\
		mag_xx(rhs_VOG25,20);\
		mag_xx(rhs_vg40op_white,5);\
		mag_xx(rhs_GRD40_white,5);\
		mag_xx(rhs_rpg26_mag,2);\
		mag_xx(rhs_rpg7_OG7V_mag,2);\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_akm,2);\
		weap_xx(rhs_weap_rpg26,2);\
		weap_xx(rhs_weap_rpg7,1);\
	};

// KrAZ-255

class rhsgref_ins_kraz255b1_flatbed : rhs_kraz255b1_flatbed_base
{
	EdPrev(rhsgref_ins_kraz255b1_flatbed)
	scope=2;
	crewMacroInsInf
	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\kraz255b1_chdkz_co.paa",
		"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\kuzov_255_chdkz_co.paa",
	};		
	textureList[] = {"CHDKZ",1};
};
class rhsgref_ins_kraz255b1_fuel : rhs_kraz255b1_fuel_base
{
	EdPrev(rhsgref_ins_kraz255b1_fuel)
	scope=2;
	crewMacroInsInf

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\kraz255b1_chdkz_co.paa",
		"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\tz8_chdkz_co.paa",
	};
	textureList[] = {"CHDKZ",1};
};
class rhsgref_ins_kraz255b1_cargo_open: rhs_kraz255b1_cargo_open_base
{
	EdPrev(rhsgref_ins_kraz255b1_fuel)
	scope=2;
	crewMacroInsInf

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\kraz255b1_chdkz_co.paa",
		"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\kuzov_255_chdkz_co.paa",
	};
	textureList[] = {"CHDKZ",1};
};

// BTR-60
class rhsgref_ins_btr60 : rhs_btr60_vmf
{
	EdPrev(rhsgref_ins_btr60)
	crewMacroIns

	rhs_decalParameters[]=
	{
		"['Number', cBTR3NumberPlaces, 'Handpaint']",
		"['Label', cBTR2SideRoundelPlaces, 'Army',22]"
	};

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\btr60_body_gue_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\chdkz\btr60_details_gue_co.paa",
		"",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
	};

	chdkzBTR_equipmentMacro
};

// BTR-70
class rhsgref_ins_btr70 : rhs_btr70_vmf
{
	EdPrev(rhsgref_ins_btr70)
	crewMacroIns

	rhs_decalParameters[]=
	{
		"['Number', cBTR4NumberPlaces, 'Handpaint']",
		"['Label', cBTRFlagSymPlaces, 'Army',22]"
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_btr70\data\btr70_chdkz_1_co.paa",
		"rhsafrf\addons\rhs_btr70\data\btr70_chdkz_2_co.paa",
		"",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
	};

	chdkzBTR_equipmentMacro
};


// Tracked

//BMP1/2

	#define BMP_Textures rhs_decalParameters[]={\
			"['Number', cBMP3NumberPlaces, 'Handpaint']", \
			"['Label', cBMPLeftBack, 'Army', 22]"\
		};\
		hiddenSelectionsTextures[] =\
		{\
			"rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa",\
			"rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa"\
		};
#define chdkzBMP_equipmentMacro class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_762x39mm_bakelite,10);\
		mag_xx(rhs_30Rnd_762x39mm,8);\
		mag_xx(rhs_30Rnd_762x39mm_polymer,2);\
		mag_xx(rhs_30Rnd_545x39_7N6M_plum_AK,10);\
		mag_xx(rhs_10Rnd_762x54mmR_7N1,10);\
		mag_xx(rhs_100Rnd_762x54mmR,3);\
		mag_xx(rhs_mag_rdg2_white,2);\
		mag_xx(rhs_mag_rgd5,9);\
		mag_xx(rhs_VOG25,20);\
		mag_xx(rhs_vg40op_white,5);\
		mag_xx(rhs_GRD40_white,5);\
		mag_xx(rhs_rpg26_mag,2);\
		mag_xx(rhs_rpg7_OG7V_mag,2);\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_akm,4);\
		weap_xx(rhs_weap_rpg26,2);\
		weap_xx(rhs_weap_rpg7,1);\
	};

class rhsgref_ins_bmp1 : rhs_bmp1_msv
{
	EdPrev(rhsgref_ins_bmp1)
	scope = 2;

	crewMacroIns

	BMP_Textures

	chdkzBMP_equipmentMacro
};
class rhsgref_ins_bmp1p : rhs_bmp1p_msv
{
	EdPrev(rhsgref_ins_bmp1p)
	scope = 2;

	crewMacroIns

	BMP_Textures

	chdkzBMP_equipmentMacro
};
class rhsgref_ins_bmp1d : rhs_bmp1d_msv
{
	EdPrev(rhsgref_ins_bmp1d)
	scope = 2;

	crewMacroIns

	BMP_Textures

	chdkzBMP_equipmentMacro
};
class rhsgref_ins_bmp1k : rhs_bmp1k_msv
{
	EdPrev(rhsgref_ins_bmp1k)
	scope = 2;

	crewMacroIns

	BMP_Textures

	chdkzBMP_equipmentMacro
};
class rhsgref_ins_bmp2 : rhs_bmp2_msv
{
	EdPrev(rhsgref_ins_bmp2)
	scope = 2;

	crewMacroIns

	BMP_Textures

	chdkzBMP_equipmentMacro
};
class rhsgref_ins_bmp2e : rhs_bmp2e_msv
{
	EdPrev(rhsgref_ins_bmp2e)
	scope = 2;

	crewMacroIns

	BMP_Textures

	chdkzBMP_equipmentMacro
};

class rhsgref_ins_bmp2k : rhs_bmp2k_msv
{
	EdPrev(rhsgref_ins_bmp2k)
	scope = 2;

	crewMacroIns

	BMP_Textures

	chdkzBMP_equipmentMacro
};

class rhsgref_ins_bmp2d : rhs_bmp2d_msv
{
	EdPrev(rhsgref_ins_bmp2d)
	scope = 2;

	crewMacroIns

	BMP_Textures

	chdkzBMP_equipmentMacro
};

//ZSU
class rhsgref_ins_zsu234: rhs_zsutank_base
{
	EdPrev(rhsgref_ins_zsu234)
	crewMacroIns
	scope=2;

	hiddenSelectionsTextures[] =
	{
		"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_gue_co.paa",
		"\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_gue_co.paa",
		"\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_gue_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};
	
	rhs_decalParameters[]={
		"['Number',cRHSZSUNumberPlaces,'Handpaint']"
	};

	class EventHandlers;

	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_762x39mm_bakelite,10);
		mag_xx(rhs_mag_rgd5,10);
		mag_xx(rhs_mag_nspn_red,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_akm,1);
	};
};

#define chdkzBMD_equipmentMacro class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_762x39mm_bakelite,10);\
		mag_xx(rhs_30Rnd_762x39mm,8);\
		mag_xx(rhs_30Rnd_762x39mm_polymer,2);\
		mag_xx(rhs_30Rnd_545x39_7N6M_plum_AK,10);\
		mag_xx(rhs_10Rnd_762x54mmR_7N1,10);\
		mag_xx(rhs_100Rnd_762x54mmR,3);\
		mag_xx(rhs_mag_rdg2_white,2);\
		mag_xx(rhs_mag_rgd5,9);\
		mag_xx(rhs_VOG25,10);\
		mag_xx(rhs_vg40op_white,5);\
		mag_xx(rhs_GRD40_white,5);\
		mag_xx(rhs_rpg26_mag,2);\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_rpg26,2);\
		weap_xx(rhs_weap_akms,2);\
	};

//BMD1
class rhsgref_ins_bmd1 : rhs_bmd1
{
	EdPrev(rhsgref_ins_bmd1)
	scope = 2;

	crewMacroIns

	rhs_decalParameters[]=
	{
		"['Number', cBMD3NumberPlaces, 'Handpaint']",
		"['Label', cBMDArmySymPlaces, 'Army', 22]"
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_chdkz_co.paa",
		"rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_chdkz_co.paa",
		"rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_chdkz_co.paa",

		"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"
	};

	chdkzBMD_equipmentMacro
};

class rhsgref_ins_bmd1p : rhs_bmd1p
{
	EdPrev(rhsgref_ins_bmd1p)
	scope = 2;

	crewMacroIns

	rhs_decalParameters[]=
	{
		"['Number', cBMD3NumberPlaces, 'Handpaint']",
		"['Label', cBMDArmySymPlaces, 'Army', 22]"
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_chdkz_co.paa",
		"rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_chdkz_co.paa",
		"rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_chdkz_co.paa",

		"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"
	};

	chdkzBMD_equipmentMacro
};

//BMD2
class rhsgref_ins_bmd2 : rhs_bmd2
{
	EdPrev(rhsgref_ins_bmd2)
	scope = 2;
	crewMacroIns

	rhs_decalParameters[]=
	{
		"['Number', cBMD3NumberPlaces, 'Handpaint']",
		"['Label', cBMDArmySymPlaces, 'Army', 22]"
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_chdkz_co.paa",
		"rhsafrf\addons\rhs_bmd\data\sa_bmd2_02_chdkz_co.paa",
		"rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_chdkz_co.paa",
		"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"
	};

	chdkzBMD_equipmentMacro
};

#define chdkzTank_equipmentMacro class TransportMagazines\
		{\
			mag_xx(rhs_30Rnd_545x39_7N6M_plum_AK,10);\
			mag_xx(rhs_mag_rgd5,10);\
			mag_xx(rhs_mag_nspn_red,10);\
		};
//T72
#define HIDE_FLAG_ATTRIBUTE_MACRO \
class Attributes: Attributes \
{\
	class ObjectTexture: ObjectTexture {}; \
	class rhs_decalNumber_type: rhs_decalNumber_type {}; \
	class rhs_decalNumber: rhs_decalNumber {}; \
	class rhs_decalPlatoon_type: rhs_decalPlatoon_type {}; \
	class rhs_decalPlatoon: rhs_decalPlatoon {}; \
	class rhs_ammoslot_1_type: rhs_ammoslot_1_type {}; \
	class rhs_ammoslot_1: rhs_ammoslot_1 {}; \
	class rhs_ammoslot_2_type: rhs_ammoslot_2_type {}; \
	class rhs_ammoslot_2: rhs_ammoslot_2 {}; \
	class rhs_ammoslot_3_type: rhs_ammoslot_3_type {}; \
	class rhs_ammoslot_3: rhs_ammoslot_3 {}; \
	class rhs_ammoslot_4_type: rhs_ammoslot_4_type {}; \
	class rhs_ammoslot_4: rhs_ammoslot_4 {}; \
	class rhs_hide_com_shield: rhs_hide_com_shield {}; \
	class rhs_hide_Flag\
	{\
		displayName		= "Hide Flag";\
		property		= "rhs_hide_Flag";\
		control			= "Checkbox";\
		expression		= "_this setvariable ['rhs_t72_disableFlag',_value]";\
		defaultValue	= "false";\
	};\
};

class rhsgref_ins_t72ba: rhs_t72ba_tv
{
	EdPrev(rhsgref_ins_t72ba)
	crewMacroIns
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_chdkz_co.paa",
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_chdkz_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa"
	};
	rhs_decalParameters[]={
		"['Number',cRHST72NumberPlaces,'Handpaint']",
		"['Label',cRHST72HnrSymPlaces, 'Army',22]"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
				{
				"rhs_mag_3bm26_7",
				"rhs_mag_3bk14_6",
				"rhs_mag_3of26_5",
				"rhs_mag_9m119_4",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_3d17",
				"rhs_LaserFCSMag"
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_crew";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
	HIDE_FLAG_ATTRIBUTE_MACRO
	class EventHandlers : EventHandlers
	{
		class rhs_flag_init
		{
			init = "_this spawn rhs_fnc_t72_flag_init";
		};
	};

	chdkzTank_equipmentMacro
};
class rhsgref_ins_t72bb: rhs_t72bb_tv
{
	EdPrev(rhsgref_ins_t72bb)
	crewMacroIns
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01b_chdkz_co.paa",
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02b_chdkz_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05b_chdkz_co.paa"
	};
	rhs_decalParameters[]={
		"['Number',cRHST72NumberPlaces,'Handpaint']",
		"['Label',cRHST72HnrSymPlaces, 'Army',22]"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
				{
				"rhs_mag_3bm26_7",
				"rhs_mag_3bk14_6",
				"rhs_mag_3of26_5",
				"rhs_mag_9m119_4",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_3d17",
				"rhs_LaserFCSMag"
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_crew";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
	HIDE_FLAG_ATTRIBUTE_MACRO
	class EventHandlers : EventHandlers
	{
		class rhs_flag_init
		{
			init = "_this spawn rhs_fnc_t72_flag_init";
		};
	};

	chdkzTank_equipmentMacro
};
class rhsgref_ins_t72bc: rhs_t72bc_tv
{
	EdPrev(rhsgref_ins_t72bc)
	crewMacroIns
	/*hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01b_chdkz_co.paa",
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02b_chdkz_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05b_chdkz_co.paa"
	};*/
	rhs_decalParameters[]={
		"['Number',cRHST72NumberPlaces,'Handpaint']",
		"['Label',cRHST72HnrSymPlaces, 'Army',22]"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {
				"rhs_mag_3bm26_7",
				"rhs_mag_3bk14_6",
				"rhs_mag_3of26_5",
				"rhs_mag_9m119_4",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_3d17",
				"rhs_LaserFCSMag"
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_crew";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
	HIDE_FLAG_ATTRIBUTE_MACRO
	class EventHandlers : EventHandlers
	{
		class rhs_flag_init
		{
			init = "_this spawn rhs_fnc_t72_flag_init";
		};
	};

	chdkzTank_equipmentMacro
};

//2S1
class rhsgref_ins_2s1: rhs_2s1tank_base
{
	EdPrev(rhsgref_ins_2s1)
	crewMacroIns
	scope = 2;
	
	textureList[] = 
	{
		"ChDKZ", 1,
		"light_dirty", 0.1,
		"standard_dirty", 0.1
	};
	rhs_decalParameters[] =
	{
		"['Number', cRHS2S1NumberPlaces ,'Handpaint']"
	};
	  
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_crew";
				};
				class LoaderOptics: LoaderOptics
				{
					gunnerType="rhsgref_ins_crew";
				};
			};
		};
	};
	chdkzTank_equipmentMacro
};
class rhsgref_ins_2s1_at: rhs_2s1tank_at_base
{
	EdPrev(rhsgref_ins_2s1)
	crewMacroIns
	scope = 2;
	
	textureList[] = 
	{
		"ChDKZ", 1,
		"light_dirty", 0.1,
		"standard_dirty", 0.1
	};
	rhs_decalParameters[] =
	{
		"['Number', cRHS2S1NumberPlaces ,'Handpaint']"
	};
	  
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_crew";
				};
				class LoaderOptics: LoaderOptics
				{
					gunnerType="rhsgref_ins_crew";
				};
			};
		};
	};
	chdkzTank_equipmentMacro
};
//- Rotary Wing

//mi8

class rhsgref_ins_Mi8amt: RHS_Mi8AMT_VVS_Base
{
	EdPrev(rhsgref_ins_Mi8amt)
	scope=2;

	crewMacroInsPilot
	hiddenselectionstextures[] =
	{
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_chdkz_co.paa",
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"
	};

	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_762x39mm_bakelite,15);
		mag_xx(rhs_30Rnd_762x39mm,5);
		mag_xx(rhs_30Rnd_545x39_7N6M_plum_AK,10);
		mag_xx(rhs_mag_rgd5,10);
		mag_xx(rhs_mag_nspn_red,10);
		mag_xx(rhs_mag_rdg2_white,4);
	};
	class AnimationSources: AnimationSources
	{
		class intake_hide: intake_hide {
			initphase = 1;
		};
	};
};



#define CHDKZ_INDEP_MACRO \
	faction = rhsgref_faction_chdkz_g; \
	side = 2; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2; \
	crew= rhsgref_ins_g_crew;

#define CHDKZ_INDEP_MACRO_INF \
	faction = rhsgref_faction_chdkz_g; \
	side = 2; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2; \
	crew= rhsgref_ins_g_rifleman;
#define CHDKZ_INDEP_MACRO_PILOT \
	faction = rhsgref_faction_chdkz_g; \
	side = 2; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2; \
	crew= rhsgref_ins_g_pilot;


class rhsgref_ins_g_2b14 : rhsgref_ins_2b14 {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_d30 : rhsgref_ins_d30 {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_d30_at : rhsgref_ins_d30_at {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_AGS30_TriPod : rhsgref_ins_AGS30_TriPod {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_NSV_TriPod : rhsgref_ins_NSV_TriPod {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_ZU23 : rhsgref_ins_ZU23 {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_Igla_AA_pod : rhsgref_ins_Igla_AA_pod {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_SPG9 : rhsgref_ins_SPG9 {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_SPG9M : rhsgref_ins_SPG9M {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_DSHKM_Mini_TriPod : rhsgref_ins_DSHKM_Mini_TriPod {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_DSHKM : rhsgref_ins_DSHKM {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_uaz : rhsgref_ins_uaz {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_uaz_open : rhsgref_ins_uaz_open {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_uaz_dshkm_chdkz : rhsgref_ins_uaz_dshkm {CHDKZ_INDEP_MACRO_INF
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {gunnerType="rhsgref_ins_g_rifleman_aksu";};
		class CargoTurret_01: CargoTurret_01 {};
	};
};
class rhsgref_ins_g_uaz_ags : rhsgref_ins_uaz_ags {CHDKZ_INDEP_MACRO_INF
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {gunnerType="rhsgref_ins_g_rifleman_aksu";};
		class CargoTurret_01: CargoTurret_01 {};
	};
};
class rhsgref_ins_g_uaz_spg9 : rhsgref_ins_uaz_spg9 {CHDKZ_INDEP_MACRO_INF
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {gunnerType="rhsgref_ins_g_rifleman_aksu";};
		class CargoTurret_01: CargoTurret_01 {};
	};
};
class rhsgref_ins_g_ural : rhsgref_ins_ural {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_ural_open : rhsgref_ins_ural_open {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_ural_work : rhsgref_ins_ural_work {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_ural_work_open : rhsgref_ins_ural_work_open {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_ural_repair : rhsgref_ins_ural_repair {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_ural_Zu23 : rhsgref_ins_ural_Zu23 {CHDKZ_INDEP_MACRO_INF
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {
			gunnerType="rhsgref_ins_g_rifleman";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType="rhsgref_ins_g_squadleader";
		};
		class CargoTurret_02: CargoTurret_02 {};
		class CargoTurret_03: CargoTurret_03 {};
	};
};
class rhsgref_ins_g_gaz66 : rhsgref_ins_gaz66 {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_gaz66o : rhsgref_ins_gaz66o {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_gaz66_flat : rhsgref_ins_gaz66_flat {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_gaz66o_flat : rhsgref_ins_gaz66o_flat {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_gaz66_ap2 : rhsgref_ins_gaz66_ap2 {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_gaz66_repair : rhsgref_ins_gaz66_repair {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_gaz66_r142 : rhsgref_ins_gaz66_r142 {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_gaz66_ammo : rhsgref_ins_gaz66_ammo {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_gaz66_zu23 : rhsgref_ins_gaz66_zu23 {CHDKZ_INDEP_MACRO_INF
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {
			gunnerType="rhsgref_ins_g_rifleman";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType="rhsgref_ins_g_squadleader";
		};
		class CargoTurret_02: CargoTurret_02 {};
	};
};
class rhsgref_ins_g_zil131: rhsgref_ins_zil131 {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_zil131_open: rhsgref_ins_zil131_open {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_zil131_flatbed: rhsgref_ins_zil131_flatbed {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_zil131_flatbed_cover: rhsgref_ins_zil131_flatbed_cover {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_kraz255b1_flatbed: rhsgref_ins_kraz255b1_flatbed {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_kraz255b1_fuel: rhsgref_ins_kraz255b1_fuel {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_kraz255b1_cargo_open: rhsgref_ins_kraz255b1_cargo_open {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_BM21 : rhsgref_ins_BM21 {CHDKZ_INDEP_MACRO_INF};
class rhsgref_ins_g_btr60 : rhsgref_ins_btr60 {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmp1 : rhsgref_ins_bmp1 {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmp1p : rhsgref_ins_bmp1p {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmp1d : rhsgref_ins_bmp1d {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmp1k : rhsgref_ins_bmp1k {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmp2 : rhsgref_ins_bmp2 {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmp2e : rhsgref_ins_bmp2e {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmp2k : rhsgref_ins_bmp2k {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmp2d : rhsgref_ins_bmp2d {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_zsu234 : rhsgref_ins_zsu234 {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmd1 : rhsgref_ins_bmd1 {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmd1p : rhsgref_ins_bmd1p {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_bmd2 : rhsgref_ins_bmd2 {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_btr70 : rhsgref_ins_btr70 {CHDKZ_INDEP_MACRO};
class rhsgref_ins_g_t72ba : rhsgref_ins_t72ba {CHDKZ_INDEP_MACRO
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_g_crew";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
};
class rhsgref_ins_g_t72bb : rhsgref_ins_t72bb {CHDKZ_INDEP_MACRO
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_g_crew";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
};
class rhsgref_ins_g_t72bc : rhsgref_ins_t72bc {CHDKZ_INDEP_MACRO
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_g_crew";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
};
class rhsgref_ins_g_2s1: rhsgref_ins_2s1{CHDKZ_INDEP_MACRO
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_g_crew";
				};
				class LoaderOptics: LoaderOptics
				{
					gunnerType="rhsgref_ins_g_crew";
				};
			};
		};
	};
};
class rhsgref_ins_g_2s1_at: rhsgref_ins_2s1_at{CHDKZ_INDEP_MACRO
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_ins_g_crew";
				};
				class LoaderOptics: LoaderOptics
				{
					gunnerType="rhsgref_ins_g_crew";
				};
			};
		};
	};
};
class rhsgref_ins_g_Mi8amt : rhsgref_ins_Mi8amt {CHDKZ_INDEP_MACRO_PILOT};
