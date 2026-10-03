#define crewMacroCDF 	crew="rhsgref_cdf_reg_crew";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_cdf_ground";

#define crewMacroCDFPara 	crew="rhsgref_cdf_para_crew";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_cdf_ground";

#define crewMacroCDFInf 	crew="rhsgref_cdf_reg_rifleman";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_cdf_ground";

#define crewMacroCDFInfPara 	crew="rhsgref_cdf_para_rifleman";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_cdf_ground";

#define crewMacroCDFAir 	crew="rhsgref_cdf_air_pilot";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_cdf_air";

//- Static

class rhsgref_cdf_reg_M252 : rhs_M252_Base
{
	EdPrev(rhsgref_cdf_reg_M252)
	scope = 2;
	crewMacroCDFInf
};

class rhsgref_cdf_reg_d30 : rhs_d30_base
{
	EdPrev(rhsgref_cdf_reg_d30)
	crewMacroCDFInf
	scope = 2;
};
class rhsgref_cdf_reg_d30_at : rhs_d30_at_base
{
	EdPrev(rhsgref_cdf_reg_d30_at)
	crewMacroCDFInf
	scope = 2;
};
class rhsgref_cdf_AGS30_TriPod: RHS_AGS30_TriPod_base
{
	EdPrev(rhsgref_cdf_AGS30_TriPod)
	crewMacroCDFInf
	scope = 2;
};
class rhsgref_cdf_NSV_TriPod: rhs_nsv_tripod_base
{
	EdPrev(rhsgref_cdf_NSV_TriPod)
	crewMacroCDFInf
	scope = 2;
};
class rhsgref_cdf_DSHKM_Mini_TriPod: rhs_DSHkM_Mini_TriPod_base
{
	EdPrev(rhsgref_cdf_DSHKM_Mini_TriPod)
	crewMacroCDFInf
	scope = 2;
};
class rhsgref_cdf_DSHKM: rhs_DSHKM_base
{
	EdPrev(rhsgref_cdf_DSHKM)
	crewMacroCDFInf
	scope = 2;
};
class RHSgref_cdf_ZU23: RHS_ZU23_base
{
	EdPrev(rhsgref_cdf_ZU23)
	crewMacroCDFInf
	scope = 2;
};
class rhsgref_cdf_Igla_AA_pod : rhs_Igla_AA_pod_Base
{
	EdPrev(rhsgref_cdf_Igla_AA_pod)
	crewMacroCDFInf
	scope = 2;
};
class rhsgref_cdf_SPG9: rhs_SPG9_base
{
	EdPrev(rhsgref_cdf_SPG9)
	scope = 2;
	crewMacroCDFInf
};
class rhsgref_cdf_SPG9M: rhs_SPG9M_base
{
	EdPrev(rhsgref_cdf_SPG9M)
	scope = 2;
	crewMacroCDFInf
};


//- Wheeled vehicles

// Uaz

class rhsgref_cdf_reg_uaz : RHS_UAZ_Base
{
	EdPrev(rhsgref_cdf_reg_uaz)
	scope=2;

	crewMacroCDFInf

	accuracy = 0.5;

	rhs_decalParameters[]=
	{
		"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_002_co.paa"
	};
};

class rhsgref_cdf_reg_uaz_open : rhs_uaz_open_Base
{
	EdPrev(rhsgref_cdf_reg_uaz_open)
	scope=2;

	crewMacroCDFInf

	accuracy = 0.5;

	rhs_decalParameters[]=
	{
		"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_002_co.paa"
	};
};

class rhsgref_cdf_reg_uaz_dshkm : RHS_UAZ_DShKM_Base
{
	EdPrev(rhsgref_cdf_reg_uaz_dshkm)
	scope=2;

	crewMacroCDFInf

	rhs_decalParameters[]=
	{
		"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_002_co.paa",
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_002_co.paa"
	};
};

class rhsgref_cdf_reg_uaz_ags : RHS_UAZ_AGS30_Base
{
	EdPrev(rhsgref_cdf_reg_uaz_ags)
	scope=2;

	crewMacroCDFInf

	rhs_decalParameters[]=
	{
		"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_002_co.paa",
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_002_co.paa"
	};
};

class rhsgref_cdf_reg_uaz_spg9 : RHS_UAZ_SPG9_Base
{
	EdPrev(rhsgref_cdf_reg_uaz_spg9)
	scope=2;

	crewMacroCDFInf

	rhs_decalParameters[]=
	{
		"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_002_co.paa",
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_002_co.paa"
	};
};

// Ural

class rhsgref_cdf_ural : RHS_Ural_Civ_Base
{
	EdPrev(rhsgref_cdf_ural)
	scope=2;

	displayName="$STR_RHS_URAL4320_NAME";

	crewMacroCDFInf

	rhs_decalParameters[]={
		"['Number', cDecals4CarsNumberPlaces, 'CDF']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_camo_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
	};
};

class rhsgref_cdf_ural_open : RHS_Ural_Open_MSV_01
{
	EdPrev(rhsgref_cdf_ural_open)
	scope=2;

	displayName="$STR_RHS_URAL4320OPEN_NAME";

	crewMacroCDFInf

	rhs_decalParameters[]={
		"['Number', cDecals4CarsNumberPlaces, 'CDF']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
	};
};

class rhsgref_cdf_ural_fuel : RHS_Ural_Fuel_MSV_01
{
	EdPrev(rhsgref_cdf_ural_fuel)
	scope=2;

	displayName="$STR_RHS_URAL4320FUEL_NAME";

	crewMacroCDFInf

	rhs_decalParameters[]={
		"['Number', cDecals4CarsNumberPlaces, 'CDF']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_cdf_co.paa"
	};
};

class rhsgref_cdf_ural_repair : RHS_Ural_Repair_MSV_01
{
	EdPrev(rhsgref_cdf_ural_repair)
	scope=2;

	displayName="$STR_RHS_URAL4320REPAIR_NAME";

	crewMacroCDFInf

	rhs_decalParameters[]={
		"['Number', cDecals4CarsNumberPlaces, 'CDF']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
	};

};

// Ural (ZU23)

class rhsgref_cdf_ural_Zu23: RHS_Ural_Zu23_Base
{
	EdPrev(rhsgref_cdf_ural_Zu23)
	scope=2;

	crewMacroCDFInf

	rhs_decalParameters[]={
		"['Number', cDecals4CarsNumberPlaces, 'CDF']"  // Set number (random)
	};
	accuracy = 0.5;
	typicalCargo[] = {"rhsgref_cdf_reg_rifleman_lite"};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa"
	};

	class Turrets: Turrets
	{
		class MainTurret: MainTurret {
			gunnerType="rhsgref_cdf_reg_rifleman";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType="rhsgref_cdf_reg_officer";
		};
		class CargoTurret_02: CargoTurret_02 {};
		class CargoTurret_03: CargoTurret_03 {};
	};
};

// BM-21 Grad

class rhsgref_cdf_reg_BM21 : RHS_BM21_MSV_01
{
	EdPrev(rhsgref_cdf_reg_BM21)
	scope=2;

	crewMacroCDFInf

	rhs_decalParameters[]={
		"['Number', cDecals4CarsNumberPlaces, 'CDF']"  // Set number (random)
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_cdf_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
	};
};
#define CDF_GAZ66_Macro \
	scope = 2;\
	hiddenSelectionsTextures[]= {\
		"\rhsafrf\addons\rhs_gaz66\data\gaz66_cdf_co.paa",\
		"\rhsafrf\addons\rhs_gaz66\data\tent_cdf_co.paa",\
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",\
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",\
		"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa"\
	};\
	rhs_decalParameters[]={\
		"['Number', cTrucksGaz4NumberPlaces, 'CDF']" \
	}

class rhsgref_cdf_gaz66: rhs_gaz66_vmf {EdPrev2(rhsgref_cdf_gaz66);CDF_GAZ66_Macro;crewMacroCDFInf};
class rhsgref_cdf_gaz66o: rhs_gaz66o_vmf {EdPrev2(rhsgref_cdf_gaz66o);CDF_GAZ66_Macro;crewMacroCDFInf};
class rhsgref_cdf_gaz66_flat: rhs_gaz66_flat_vmf {EdPrev2(rhsgref_cdf_gaz66_flat);CDF_GAZ66_Macro;crewMacroCDFInf};
class rhsgref_cdf_gaz66o_flat: rhs_gaz66o_flat_vmf {EdPrev2(rhsgref_cdf_gaz66o_flat);CDF_GAZ66_Macro;crewMacroCDFInf};
class rhsgref_cdf_gaz66_ap2: rhs_gaz66_ap2_vmf {EdPrev2(rhsgref_cdf_gaz66_ap2);CDF_GAZ66_Macro;crewMacroCDFInf};
class rhsgref_cdf_gaz66_repair: rhs_gaz66_repair_vmf {EdPrev2(rhsgref_cdf_gaz66_repair);CDF_GAZ66_Macro;crewMacroCDFInf};
class rhsgref_cdf_gaz66_r142: rhs_gaz66_r142_vmf {EdPrev2(rhsgref_cdf_gaz66_r142);CDF_GAZ66_Macro;crewMacroCDFInf};
class rhsgref_cdf_gaz66_ammo: rhs_gaz66_ammo_vmf {
	EdPrev2(rhsgref_cdf_gaz66_ammo);
	CDF_GAZ66_Macro;crewMacroCDFInf

	class TransportBackpacks
	{
		bag_xx(rhs_rpg_vl,3);
		bag_xx(rhs_rpg_at,1);
	};
	class TransportMagazines
	{
		// AK-74/RPK-74
		mag_xx(rhs_30Rnd_545x39_7N6M_AK,35);
		mag_xx(rhs_30Rnd_545x39_AK_green,5);
		mag_xx(rhs_45Rnd_545x39_7N6_AK, 20);
		// AKM/RPK
		mag_xx(rhs_30Rnd_762x39mm_bakelite_89,15);
		mag_xx(rhs_30Rnd_762x39mm_bakelite_tracer,5);
		mag_xx(rhs_75Rnd_762x39mm_89, 15);
		//PKM
		mag_xx(rhs_100Rnd_762x54mmR,20);
		mag_xx(rhs_100Rnd_762x54mmR_green,5);
		//M76 (Swap out for SVD mags if wood SVD is ever introduced)
		mag_xx(rhsgref_10Rnd_792x57_m76,20);
		//GP-25
		mag_xx(rhs_VOG25,100);
		mag_xx(rhs_VOG25P,100);
		mag_xx(rhsusf_mag_17Rnd_9x19_FMJ,20);
		mag_xx(rhs_rpg75_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg75,4);
	};
};
class rhsgref_cdf_gaz66_zu23: rhs_gaz66_zu23_vmf {
	EdPrev(rhsgref_cdf_gaz66_zu23)
	crewMacroCDFInf
	CDF_GAZ66_Macro;

	class Turrets: Turrets
	{
		class MainTurret: MainTurret {
			gunnerType="rhsgref_cdf_reg_rifleman";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType="rhsgref_cdf_reg_officer";
		};
		class CargoTurret_02: CargoTurret_02 {};
	};
};

#define CDF_ZIL131_TEXTURES \
hiddenselectionstextures[] = \
{\
	"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_zil131_cargo_CDF_co.paa",\
	"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_zil131_cabin_CDF_co.paa",\
	"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",\
	"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",\
	"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa"\
};\
textureList[] = {CDF,1};\
scope=2;scopeCurator = 2

class rhsgref_cdf_zil131: rhs_zil131_base {CDF_ZIL131_TEXTURES;EdPrev2(rhsgref_cdf_zil131);crewMacroCDFInf};
class rhsgref_cdf_zil131_open: rhs_zil131_open_base {CDF_ZIL131_TEXTURES;EdPrev2(rhsgref_cdf_zil131_open);crewMacroCDFInf};
class rhsgref_cdf_zil131_flatbed: rhs_zil131_flatbed_base {CDF_ZIL131_TEXTURES;EdPrev2(rhsgref_cdf_zil131_flatbed);crewMacroCDFInf};
class rhsgref_cdf_zil131_flatbed_cover: rhs_zil131_flatbed_cover_base {CDF_ZIL131_TEXTURES;EdPrev2(rhsgref_cdf_zil131_flatbed_cover);crewMacroCDFInf};

#define BTR_equipmentMacro class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_545x39_7N6M_AK,30);\
		mag_xx(rhsgref_10Rnd_792x57_m76,10);\
		mag_xx(rhs_100Rnd_762x54mmR,3);\
		mag_xx(rhs_mag_rdg2_white,2);\
		mag_xx(rhs_mag_rgd5,9);\
		mag_xx(rhs_VOG25,20);\
		mag_xx(rhs_vg40op_white,5);\
		mag_xx(rhs_GRD40_white,5);\
		mag_xx(rhs_rpg75_mag,2);\
		mag_xx(rhs_rpg7_OG7V_mag,2);\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_ak74,2);\
		weap_xx(rhs_weap_rpg75,2);\
		weap_xx(rhs_weap_rpg7,1);\
	};

// BTR-60
class rhsgref_cdf_btr60 : rhs_btr60_vmf
{
	EdPrev(rhsgref_cdf_btr60)
	scope=2;

	crewMacroCDF

	rhs_decalParameters[]=
	{
		"['Number', cBTR3NumberPlaces, 'CDF']"  // Set number (random)
	};

	hiddenSelectionsTextures[]=
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\btr60_body_cdf_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\btr60_details_cdf_co.paa",
		"",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
	};

	BTR_equipmentMacro
};

// BTR-70
class rhsgref_cdf_btr70 : rhs_btr70_vmf
{
	EdPrev(rhsgref_cdf_btr70)
	scope=2;

	crewMacroCDF

	rhs_decalParameters[]=
	{
		"['Number', cBTRCDF4NumberPlaces, 'CDF']"  // Set number (random)
	};

	hiddenSelectionsTextures[]=
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\btr70_cdf_1_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\btr70_cdf_2_co.paa",
		"",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
	};

	BTR_equipmentMacro
};

// BTR-80
class rhsgref_cdf_btr80 : rhs_btr80_msv
{
	EdPrev(rhsgref_cdf_btr80)
	scope=2;

	crewMacroCDF
	
	rhs_decalParameters[]=
	{
		"['Number', cBTR3NumberPlaces, 'CDF']"  // Set number (random)
	};

	hiddenSelectionsTextures[]=
	{
			"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_btr80_01_cdf_co.paa",
			"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_btr80_02_cdf_co.paa",
			"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_btr80_03_cdf_co.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
	};
	
	BTR_equipmentMacro
};

//- Tracked

//BMP1/2


	#define CDF_BMP_Textures rhs_decalParameters[]={\
			"['Number', cBMP3NumberPlaces, 'CDF']" \
		};\
		hiddenSelectionsTextures[] =\
		{\
			"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\bmp_1_cdf_co.paa",\
			"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\bmp_2_cdf_co.paa",\
			"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\bmp_3_cdf_co.paa",\
			"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\bmp_4_cdf_co.paa",\
			"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\bmp_5_cdf_co.paa",\
			"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\bmp_6_cdf_co.paa"\
		};
#define BMP_equipmentMacro class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_545x39_7N6M_AK,30);\
		mag_xx(rhsgref_10Rnd_792x57_m76,10);\
		mag_xx(rhs_100Rnd_762x54mmR,3);\
		mag_xx(rhs_mag_rdg2_white,2);\
		mag_xx(rhs_mag_rgd5,9);\
		mag_xx(rhs_VOG25,20);\
		mag_xx(rhs_vg40op_white,5);\
		mag_xx(rhs_GRD40_white,5);\
		mag_xx(rhs_rpg75_mag,2);\
		mag_xx(rhs_rpg7_OG7V_mag,2);\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_ak74,4);\
		weap_xx(rhs_weap_rpg75,2);\
		weap_xx(rhs_weap_rpg7,1);\
	};

class rhsgref_cdf_bmp1 : rhs_bmp1_msv
{
	EdPrev(rhsgref_cdf_bmp1)
	scope = 2;

	crewMacroCDF
	CDF_BMP_Textures
	BMP_equipmentMacro
};
class rhsgref_cdf_bmp1p : rhs_bmp1p_msv
{
	EdPrev(rhsgref_cdf_bmp1p)
	scope = 2;

	crewMacroCDF
	CDF_BMP_Textures
	BMP_equipmentMacro
};
class rhsgref_cdf_bmp1d : rhs_bmp1d_msv
{
	EdPrev(rhsgref_cdf_bmp1d)
	scope = 2;

	crewMacroCDF
	CDF_BMP_Textures
	BMP_equipmentMacro
};
class rhsgref_cdf_bmp1k : rhs_bmp1k_msv
{
	EdPrev(rhsgref_cdf_bmp1k)
	scope = 2;

	crewMacroCDF
	CDF_BMP_Textures
	BMP_equipmentMacro
};
class rhsgref_cdf_bmp2 : rhs_bmp2_msv
{
	EdPrev(rhsgref_cdf_bmp2)
	scope = 2;

	crewMacroCDF
	CDF_BMP_Textures
	BMP_equipmentMacro
};
class rhsgref_cdf_bmp2e : rhs_bmp2e_msv
{
	EdPrev(rhsgref_cdf_bmp2e)
	scope = 2;

	crewMacroCDF
	CDF_BMP_Textures
	BMP_equipmentMacro
};

class rhsgref_cdf_bmp2k : rhs_bmp2k_msv
{
	EdPrev(rhsgref_cdf_bmp2k)
	scope = 2;

	crewMacroCDF
	CDF_BMP_Textures
	BMP_equipmentMacro
};

class rhsgref_cdf_bmp2d : rhs_bmp2d_msv
{
	EdPrev(rhsgref_cdf_bmp2d)
	scope = 2;

	crewMacroCDF
	CDF_BMP_Textures
	BMP_equipmentMacro
};

#define BMD_equipmentMacro class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_545x39_7N6M_AK,30);\
		mag_xx(rhsgref_10Rnd_792x57_m76,10);\
		mag_xx(rhs_100Rnd_762x54mmR,3);\
		mag_xx(rhs_mag_rdg2_white,2);\
		mag_xx(rhs_mag_rgd5,9);\
		mag_xx(rhs_VOG25,10);\
		mag_xx(rhs_vg40op_white,5);\
		mag_xx(rhs_GRD40_white,5);\
		mag_xx(rhs_rpg75_mag,2);\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_rpg75,2);\
		weap_xx(rhs_weap_aks74,2);\
	};
#define ModernBMD_equipmentMacro class TransportMagazines\
	{\
		mag_xx(rhsgref_30rnd_556x45_vhs2,30);\
		mag_xx(rhsgref_10Rnd_792x57_m76,10);\
		mag_xx(rhsusf_100Rnd_762x51,3);\
		mag_xx(rhs_mag_rdg2_white,2);\
		mag_xx(rhs_mag_rgd5,9);\
		mag_xx(rhs_mag_M441_HE,10);\
		mag_xx(rhs_mag_M583A1_white,5);\
		mag_xx(rhs_mag_M714_white,5);\
		mag_xx(rhs_rpg75_mag,2);\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_rpg75,2);\
		weap_xx(rhs_weap_vhsd2,2);\
	};

// BMD-1
class rhsgref_cdf_bmd1 : rhs_bmd1
{
	EdPrev(rhsgref_cdf_bmd1)
	scope = 2;

	crewMacroCDFPara

	rhs_decalParameters[]=
	{
		"['Number', cBMD3NumberPlaces, 'CDF']",
		"['Label', cBMDArmySymPlaces, 'Army', 28]"
	};

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_01_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd1_02_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_03_cdf_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};

	ModernBMD_equipmentMacro
};
class rhsgref_cdf_bmd1k : rhs_bmd1k
{
	EdPrev(rhsgref_cdf_bmd1k)
	scope = 2;

	crewMacroCDFPara

	rhs_decalParameters[]=
	{
		"['Number', cBMD3NumberPlaces, 'CDF']",
		"['Label', cBMDArmySymPlaces, 'Army', 28]"
	};

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_01_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd1_02_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_03_cdf_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};

	ModernBMD_equipmentMacro
};
class rhsgref_cdf_bmd1pk : rhs_bmd1pk
{
	EdPrev(rhsgref_cdf_bmd1pk)
	scope = 2;

	crewMacroCDFPara

	rhs_decalParameters[]=
	{
		"['Number', cBMD3NumberPlaces, 'CDF']",
		"['Label', cBMDArmySymPlaces, 'Army', 28]"
	};

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_01_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd1_02_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_03_cdf_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};

	ModernBMD_equipmentMacro
};


class rhsgref_cdf_bmd1p : rhs_bmd1p
{
	EdPrev(rhsgref_cdf_bmd1p)
	scope = 2;

	crewMacroCDFPara

	rhs_decalParameters[]=
	{
		"['Number', cBMD3NumberPlaces, 'CDF']",
		"['Label', cBMDArmySymPlaces, 'Army', 28]"
	};

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_01_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd1_02_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_03_cdf_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};

	ModernBMD_equipmentMacro
};

// BMD-2
class rhsgref_cdf_bmd2 : rhs_bmd2
{
	EdPrev(rhsgref_cdf_bmd2)
	scope = 2;

	crewMacroCDFPara

	rhs_decalParameters[]=
	{
		"['Number', cBMD3NumberPlaces, 'CDF']",
		"['Label', cBMDArmySymPlaces, 'Army', 28]"
	};

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_01_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_02_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_03_cdf_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
	};

	ModernBMD_equipmentMacro
};
class rhsgref_cdf_bmd2k : rhs_bmd2k
{
	EdPrev(rhsgref_cdf_bmd2k)
	scope = 2;

	crewMacroCDFPara

	rhs_decalParameters[]=
	{
		"['Number', cBMD3NumberPlaces, 'CDF']",
		"['Label', cBMDArmySymPlaces, 'Army', 28]"
	};

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_01_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_02_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\sa_bmd2_03_cdf_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
	};

	ModernBMD_equipmentMacro
};

//Shilka
class rhsgref_cdf_zsu234: rhs_zsutank_base
{
	EdPrev(rhsgref_cdf_zsu234)
	scope = 2;
	crewMacroCDF
	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\zsu_01_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\zsu_02_cdf_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\zsu_03_cdf_co.paa"
	};

	rhs_decalParameters[]={
		"['Number',cRHSZSUNumberPlaces,'CDF']"
	};

	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_7N6M_AK,10);
		mag_xx(rhs_mag_rgd5,10);
		mag_xx(rhs_mag_nspn_red,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_ak74,1);
	};
};

#define tank_equipmentMacro class TransportMagazines\
		{\
			mag_xx(rhsusf_mag_17Rnd_9x19_FMJ,10);\
			mag_xx(rhs_mag_rgd5,10);\
			mag_xx(rhs_mag_nspn_red,10);\
		};

class rhsgref_cdf_2s1: rhs_2s1tank_base
{
  EdPrev(rhsgref_cdf_2s1)
  crewMacroCDF
  scope    = 2;
  textureList[]  =
  {
    "CDF", 1
  };

  rhs_decalParameters[]=
  {
    "['Number',[cRHS2S1NumberPlaces, cRHS2S1BackLargeNumberPlaces],'CDF']"
  };

  class Turrets: Turrets
  {
    class MainTurret: MainTurret
    {
      class Turrets: Turrets
      {
        class CommanderOptics: CommanderOptics
        {
          gunnerType="rhsgref_cdf_reg_crew_commander";
        };
        class LoaderOptics: LoaderOptics
        {
          gunnerType="rhsgref_cdf_reg_crew";
        };
      };
    };
  };

  tank_equipmentMacro
};

class rhsgref_cdf_2s1_at: rhs_2s1tank_at_base
{
  EdPrev(rhsgref_cdf_2s1)
  crewMacroCDF
  scope    = 2;
  textureList[]  =
  {
    "CDF", 1
  };

  rhs_decalParameters[]=
  {
    "['Number',[cRHS2S1NumberPlaces, cRHS2S1BackLargeNumberPlaces],'CDF']"
  };

  class Turrets: Turrets
  {
    class MainTurret: MainTurret
    {
      class Turrets: Turrets
      {
        class CommanderOptics: CommanderOptics
        {
          gunnerType="rhsgref_cdf_reg_crew_commander";
        };
        class LoaderOptics: LoaderOptics
        {
          gunnerType="rhsgref_cdf_reg_crew";
        };
      };
    };
  };

  tank_equipmentMacro
};

// T72BA
class rhsgref_cdf_t72ba_tv: rhs_t72ba_tv
{
	EdPrev(rhsgref_cdf_t72ba_tv)
	crewMacroCDF
	rhs_decalParameters[]={
		"['Number',cRHST72NumberPlaces,'CDF']",
		"['Label',cRHST72PlnSymPlaces, 'Platoon',8]",
		"['Label',cRHST72HnrSymPlaces, 'Army',28]"
	};

	scope = 2;

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_01_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_02_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_03_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_04_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_05_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};

	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
				{
				"rhs_mag_3bm32_7",
				"rhs_mag_3bk18_6",
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
					gunnerType="rhsgref_cdf_reg_crew_commander";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};

	tank_equipmentMacro
};

class rhsgref_cdf_t72bb_tv: rhs_t72bb_tv
{
	EdPrev(rhsgref_cdf_t72bb_tv)
	crewMacroCDF
	rhs_decalParameters[]={
		"['Number',cRHST72NumberPlaces,'CDF']",
		"['Label',cRHST72PlnSymPlaces, 'Platoon',8]",
		"['Label',cRHST72HnrSymPlaces, 'Army',28]"
	};

	scope = 2;

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_01_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_02_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_03_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_04_co.paa",
		"\rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t72b_05b_Cdf_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};

	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
				{
				"rhs_mag_3bm32_7",
				"rhs_mag_3bk18_6",
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
					gunnerType="rhsgref_cdf_reg_crew_commander";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};

	tank_equipmentMacro
};


// T80B
class rhsgref_cdf_t80b_tv: rhs_t80b
{
	EdPrev(rhsgref_cdf_t80b_tv)
	crewMacroCDF
	rhs_decalParameters[]={
		"['Number',cRHST80NumberPlaces,'CDF']",
		"['Label',cRHST80PlnSymPlaces, 'Platoon',8]"
	};

	scope = 2;

	hiddenSelectionsTextures[] = {
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80_hull_cdf_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80_turret_cdf_co.paa",
		"",
		"rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
				{
					"rhs_mag_3bm22_10",
					"rhs_mag_3bk18m_8",
					"rhs_mag_3of26_6",
					"rhs_mag_9m112m_4",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag","rhs_laserfcsmag"
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_reg_crew_commander";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};

	tank_equipmentMacro
};

// T80BV
class rhsgref_cdf_t80bv_tv: rhs_t80bv
{
	EdPrev(rhsgref_cdf_t80bv_tv)
	crewMacroCDF
	rhs_decalParameters[]={
		"['Number',cRHST80NumberPlaces,'CDF']",
		"['Label',cRHST80PlnSymPlaces, 'Platoon',8]"
	};

	scope = 2;

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80_hull_cdf_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80_turret_cdf_co.paa",
		"",
		"rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};

	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
				{
					"rhs_mag_3bm22_10",
					"rhs_mag_3bk18m_8",
					"rhs_mag_3of26_6",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_9m112m_4",
					"rhs_mag_3d17",
					"rhs_laserfcsmag","rhs_laserfcsmag"
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_reg_crew_commander";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};

	tank_equipmentMacro
};

// T80U
class rhsgref_cdf_t80u_tv: rhs_t80u
{
	EdPrev(rhsgref_cdf_t80u_tv)
	crewMacroCDF
	rhs_decalParameters[]={
		"['Number',cRHST80NumberPlaces,'CDF']",
		"['Label',cRHST80PlnSymPlaces, 'Platoon',8]"
	};

	scope = 2;

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80u_01_cdf_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80u_02_cdf_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80u_03_cdf_co.paa",
		"rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa"
	};

	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
				{
					"rhs_mag_3bm26_10",
					"rhs_mag_3bk18m_8",
					"rhs_mag_3of26_6",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_9m119_4",
					"rhs_mag_3d17",
					"rhs_laserfcsmag","rhs_laserfcsmag"
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_reg_crew_commander";
				};
			};
		};
	};

	tank_equipmentMacro
};


// T80UK
class rhsgref_cdf_t80uk_tv: rhs_t80uk
{
	EdPrev(rhsgref_cdf_t80uk_tv)
	crewMacroCDF
	rhs_decalParameters[]={
		"['Number',cRHST80NumberPlaces,'CDF']",
		"['Label',cRHST80PlnSymPlaces, 'Platoon',8]"
	};

	scope = 2;

	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80u_01_cdf_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80u_02_cdf_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_t80u_03_cdf_co.paa",
		"rhsafrf\addons\rhs_t80u\data\shotram_co.paa",
		"",
		"",
		"",
		"rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa"
	};

	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
				{
					"rhs_mag_3bm26_10",
					"rhs_mag_3bk18m_8",
					"rhs_mag_3of26_6",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_9m119_4",
					"rhs_mag_3d17",
					"rhs_laserfcsmag","rhs_laserfcsmag"
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_reg_crew_commander";
				};
			};
		};
	};

	tank_equipmentMacro
};

#define Exhaust_Hide \
	class AnimationSources: AnimationSources\
	{\
		class exhaust_hide\
		{\
			source="user";\
			initPhase=1;\
			animPeriod=0.00001;\
		};\
	};\
	class Exhausts\
	{\
		class Exhaust01\
		{\
			direction="exhaust1_dir";\
			position="exhaust1";\
			effect="ExhaustEffectHeli";\
		};\
		class Exhaust02\
		{\
			direction="exhaust2_dir";\
			position="exhaust2";\
			effect="ExhaustEffectHeli";\
		};\
	};

//- Rotary

// Mi 8

#define Air_equipmentMacro class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_545x39_7N6M_AK,30);\
		mag_xx(rhs_mag_rgd5,10);\
		mag_xx(rhs_mag_nspn_red,10);\
		mag_xx(rhs_mag_rdg2_white,4);\
	};

class rhsgref_cdf_reg_Mi8amt: RHS_Mi8AMT_VVS_Base
{
	EdPrev(rhsgref_cdf_reg_Mi8amt)
	scope=2;

	rhs_decalParameters[]={
		"['Number',cRHSAIRMI8NumberPlaces,'AviaCDF']"
	};

	crewMacroCDFAir
	hiddenselectionstextures[] =
	{
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_cdf_co.paa",
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"
	};

	Air_equipmentMacro
};
class rhsgref_cdf_reg_Mi17Sh: rhs_mi8amtsh_base
{
	EdPrev(rhsgref_cdf_reg_Mi17Sh)
	scope=2;

	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1 {attachment = "rhs_mag_ub32_s5m1";	};
				class pylon2: pylon2 {attachment = "rhs_mag_ub32_s5m1";	};
				class pylon3: pylon3 {attachment = "rhs_mag_ub32_s5m1";	};
				class pylon4: pylon4 {attachment = "rhs_mag_ub32_s5m1";	};
				class pylon5: pylon5 {attachment = "rhs_mag_ub32_s5ko";	};
				class pylon6: pylon6 {attachment = "rhs_mag_ub32_s5ko";	};
				class cmDispenser : cmDispenser {};
			};
		};
	};

	rhs_decalParameters[]={
		"['Number',cRHSAIRMI8NumberPlaces,'AviaCDF']"
	};
	crewMacroCDFAir
	hiddenselectionstextures[] =
	{
		"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_cdf_co.paa",
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"
	};
	Exhaust_Hide

	Air_equipmentMacro
};

class rhsgref_cdf_reg_Mi17Sh_UPK: RHS_Mi8AMTSh_UPK23_vvs
{
	EdPrev(rhsgref_cdf_reg_Mi17Sh_UPK)
	Show_Zeus

	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1 {attachment = "rhs_mag_upk23_mixed";	};
				class pylon2: pylon2 {attachment = "rhs_mag_upk23_mixed";	};
				class pylon3: pylon3 {attachment = "rhs_mag_ub32_s5m1";		};
				class pylon4: pylon4 {attachment = "rhs_mag_ub32_s5m1";		};
				class pylon5: pylon5 {attachment = "rhs_mag_ub32_s5ko";		};
				class pylon6: pylon6 {attachment = "rhs_mag_ub32_s5ko";		};
				class cmDispenser: cmDispenser {};
			};
		};
	};

	rhs_decalParameters[]={
		"['Number',cRHSAIRMI8NumberPlaces,'AviaCDF']"
	};
	crewMacroCDFAir
	hiddenselectionstextures[] =
	{
		"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_cdf_co.paa",
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"
	};
	Exhaust_Hide

	Air_equipmentMacro
};
class rhsgref_cdf_reg_Mi17Sh_FAB: RHS_Mi8AMTSh_FAB_vvs
{
	EdPrev(rhsgref_cdf_reg_Mi17Sh_FAB)
	Show_Zeus

	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1 {attachment = "rhs_mag_fab250";		};
				class pylon2: pylon2 {attachment = "rhs_mag_fab250";		};
				class pylon3: pylon3 {attachment = "rhs_mag_ub32_s5m1";		};
				class pylon4: pylon4 {attachment = "rhs_mag_ub32_s5m1";		};
				class pylon5: pylon5 {attachment = "rhs_mag_ub32_s5ko";		};
				class pylon6: pylon6 {attachment = "rhs_mag_ub32_s5ko";		};
				class cmDispenser: cmDispenser {};
			};
		};
	};

	rhs_decalParameters[]={
		"['Number',cRHSAIRMI8NumberPlaces,'AviaCDF']"
	};
	crewMacroCDFAir
	hiddenselectionstextures[] =
	{
		"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_cdf_co.paa",
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"
	};
	Exhaust_Hide

	Air_equipmentMacro
};

// Mi 24

class rhsgref_cdf_Mi35 : RHS_Mi24V_VVS_Base
{
	EdPrev(rhsgref_cdf_Mi35)
	scope=2;

	rhs_decalParameters[]={
		"['Number',cRHSAIRMI24NumberPlaces,'AviaCDF']"
	};

	crewMacroCDFAir
	weapons[]=
	{
		"rhs_weap_CMFlareLauncher"
	};
	magazines[]=
	{
		"168Rnd_CMFlare_Chaff_Magazine"
	};
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1 {attachment = "rhs_mag_ub32_s5m1";			turret[]= {}; };
				class pylon2: pylon2 {attachment = "rhs_mag_ub32_s5m1";			turret[]= {}; };
				class pylon3: pylon3 {attachment = "rhs_mag_ub32_s5ko";			turret[]= {}; };
				class pylon4: pylon4 {attachment = "rhs_mag_ub32_s5ko";			turret[]= {}; };
				class pylon5: pylon5 {attachment = "rhs_mag_9M114M_Mi24_2x";	turret[]= {0}; };
				class pylon6: pylon6 {attachment = "rhs_mag_9M114M_Mi24_2x";	turret[]= {0}; };
				class cmDispenser: cmDispenser {};
			};
		};
	};

	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_001_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_002_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
	};
	Exhaust_Hide

	Air_equipmentMacro
};
class rhsgref_cdf_Mi35_UPK : RHS_Mi24V_UPK23_VVS_Base
{
	EdPrev(rhsgref_cdf_Mi35_UPK)
	Show_Zeus

	rhs_decalParameters[]={
		"['Number',cRHSAIRMI24NumberPlaces,'AviaCDF']"
	};
	weapons[]=
	{
		"rhs_weap_CMFlareLauncher"
	};
	magazines[]=
	{
		"168Rnd_CMFlare_Chaff_Magazine"
	};
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1 {attachment = "rhs_mag_upk23_mixed";		turret[]= {}; };
				class pylon2: pylon2 {attachment = "rhs_mag_upk23_mixed";		turret[]= {}; };
				class pylon3: pylon3 {attachment = "rhs_mag_ub32_s5ko";			turret[]= {}; };
				class pylon4: pylon4 {attachment = "rhs_mag_ub32_s5ko";			turret[]= {}; };
				class pylon5: pylon5 {attachment = "rhs_mag_9M114M_Mi24_2x";	turret[]= {0}; };
				class pylon6: pylon6 {attachment = "rhs_mag_9M114M_Mi24_2x";	turret[]= {0}; };
				class cmDispenser: cmDispenser {};
			};
		};
	};

	crewMacroCDFAir

	Exhaust_Hide

	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_001_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_002_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
	};

	Air_equipmentMacro
};
class rhsgref_cdf_Mi35_AT : RHS_Mi24V_AT_VVS_Base
{
	EdPrev(rhsgref_cdf_Mi35_AT)
	Show_Zeus

	rhs_decalParameters[]={
		"['Number',cRHSAIRMI24NumberPlaces,'AviaCDF']"
	};
	weapons[]=
	{
		"rhs_weap_CMFlareLauncher"
	};
	magazines[]=
	{
		"168Rnd_CMFlare_Chaff_Magazine"
	};
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1 {attachment = "rhs_mag_ub32_s5k1";			turret[]= {}; };
				class pylon2: pylon2 {attachment = "rhs_mag_ub32_s5ko";			turret[]= {}; };
				class pylon3: pylon3 {attachment = "rhs_mag_9M114M_Mi24_2x";	turret[]= {0}; };
				class pylon4: pylon4 {attachment = "rhs_mag_9M114M_Mi24_2x";	turret[]= {0}; };
				class pylon5: pylon5 {attachment = "rhs_mag_9M114M_Mi24_2x";	turret[]= {0}; };
				class pylon6: pylon6 {attachment = "rhs_mag_9M114M_Mi24_2x";	turret[]= {0}; };
				class cmDispenser: cmDispenser {};
			};
		};
	};

	Exhaust_Hide

	crewMacroCDFAir

	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_001_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_002_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
	};

	Air_equipmentMacro
};
class rhsgref_cdf_Mi24D : RHS_Mi24D_base
{
	EdPrev(rhsgref_cdf_Mi24D)
	scope=2;

	rhs_decalParameters[]={
		"['Number',cRHSAIRMI24NumberPlaces,'AviaCDF']"
	};

	crewMacroCDFAir

	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_001_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_002_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
	};

	Air_equipmentMacro
};
class rhsgref_cdf_Mi24D_early : RHS_Mi24D_Early_base
{
	EdPrev(rhsgref_cdf_Mi24D)
	scope=2;

	rhs_decalParameters[]={
		"['Number',cRHSAIRMI24NumberPlaces,'AviaCDF']"
	};

	crewMacroCDFAir

	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_001_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\mi35_002_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
	};

	Air_equipmentMacro
};

//- Fixed Wings

// Su-25

class rhsgref_cdf_su25 : RHS_Su25_VVS_Base
{
	EdPrev(rhsgref_cdf_su25)
	scope=2;

	rhs_decalParameters[]={
		"['Number',cRHSAIRSU25NumberPlaces,'AviaCDF']"
	};

	crewMacroCDFAir
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_cdf_co.paa",
		"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_cdf_co.paa"
	};
};

// MiG-29S

class rhsgref_cdf_mig29s : rhs_mig29s_base
{
	EdPrev(rhsgref_cdf_mig29s)
	scope = 2;
	rhs_decalParameters[]={
		"['Number',cRHSAIRMIG29NumberPlaces,'AviaCDF']",
		"['Label', cRHSAIRMIG29StarPlaces, 'Aviation', 4]"
	};
	crewMacroCDFAir
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1 {attachment = "rhs_mag_R27R_APU470";	};
				class pylon2: pylon2 {attachment = "rhs_mag_R27R_APU470";	};
				class pylon3: pylon3 {attachment = "rhs_mag_R60M_APU60";	};
				class pylon4: pylon4 {attachment = "rhs_mag_R60M_APU60";	};
				class pylon5: pylon5 {attachment = "rhs_mag_R60M_APU60";	};
				class pylon6: pylon6 {attachment = "rhs_mag_R60M_APU60";	};
				class pylon7: pylon7 {};
				class cmDispenser: cmDispenser {};
			};
		};
	};
	textureList[] =	{	"RHS_CDF1", 1	};
	hiddenselectionstextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_mig29_01_cdf1_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_mig29_02_cdf1_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\cdf\rhs_mig29_03_cdf1_co.paa"
	};
};

#define CDF_BLUFOR_CREW \
	author=$STR_RHS_AUTHOR_FULL;\
	faction = rhsgref_faction_cdf_ground_b; \
	side = 1; \
	scope = 2;\
	scopeCurator = 2; \
	crew= rhsgref_cdf_b_reg_crew;

#define CDF_BLUFOR_CREW_PARA \
	author=$STR_RHS_AUTHOR_FULL;\
	faction = rhsgref_faction_cdf_ground_b; \
	side = 1; \
	scope = 2;\
	scopeCurator = 2; \
	crew= rhsgref_cdf_b_para_crew;

#define CDF_BLUFOR_CREW_INF \
	author=$STR_RHS_AUTHOR_FULL;\
	faction = rhsgref_faction_cdf_ground_b; \
	side = 1; \
	scope = 2;\
	scopeCurator = 2; \
	crew= rhsgref_cdf_b_reg_rifleman;

#define CDF_BLUFOR_CREW_PILOT \
	author=$STR_RHS_AUTHOR_FULL;\
	faction = rhsgref_faction_cdf_air_b; \
	side = 1; \
	scope = 2;\
	scopeCurator = 2; \
	crew= rhsgref_cdf_b_air_pilot;

#define CDF_BLUFOR_CREW_PILOT_ZEUS \
	author=$STR_RHS_AUTHOR_FULL;\
	faction = rhsgref_faction_cdf_air_b; \
	side = 1; \
	scope = 1;\
	scopeCurator = 2; \
	crew= rhsgref_cdf_b_air_pilot;

class rhsgref_cdf_b_reg_M252 : rhsgref_cdf_reg_M252 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_reg_d30 : rhsgref_cdf_reg_d30 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_reg_d30_at : rhsgref_cdf_reg_d30_at {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_AGS30_TriPod : rhsgref_cdf_AGS30_TriPod {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_NSV_TriPod : rhsgref_cdf_NSV_TriPod {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_DSHKM_Mini_TriPod : rhsgref_cdf_DSHKM_Mini_TriPod {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_DSHKM : rhsgref_cdf_DSHKM {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_ZU23 : rhsgref_cdf_ZU23 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_Igla_AA_pod : rhsgref_cdf_Igla_AA_pod {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_SPG9 : rhsgref_cdf_SPG9 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_SPG9M : rhsgref_cdf_SPG9M {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_reg_uaz : rhsgref_cdf_reg_uaz {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_reg_uaz_open : rhsgref_cdf_reg_uaz_open {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_reg_uaz_dshkm : rhsgref_cdf_reg_uaz_dshkm {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_reg_uaz_ags : rhsgref_cdf_reg_uaz_ags {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_reg_uaz_spg9 : rhsgref_cdf_reg_uaz_spg9 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_ural : rhsgref_cdf_ural {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_ural_open : rhsgref_cdf_ural_open {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_ural_fuel : rhsgref_cdf_ural_fuel {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_ural_repair : rhsgref_cdf_ural_repair {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_ural_Zu23 : rhsgref_cdf_ural_Zu23 {CDF_BLUFOR_CREW_INF
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {
			gunnerType="rhsgref_cdf_b_reg_rifleman";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType="rhsgref_cdf_b_reg_officer";
		};
		class CargoTurret_02: CargoTurret_02 {};
		class CargoTurret_03: CargoTurret_03 {};
	};
};
class rhsgref_cdf_b_reg_BM21 : rhsgref_cdf_reg_BM21 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_gaz66 : rhsgref_cdf_gaz66 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_gaz66o : rhsgref_cdf_gaz66o {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_gaz66_flat : rhsgref_cdf_gaz66_flat {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_gaz66o_flat : rhsgref_cdf_gaz66o_flat {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_gaz66_ap2 : rhsgref_cdf_gaz66_ap2 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_gaz66_repair : rhsgref_cdf_gaz66_repair {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_gaz66_r142 : rhsgref_cdf_gaz66_r142 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_gaz66_ammo : rhsgref_cdf_gaz66_ammo {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_gaz66_zu23 : rhsgref_cdf_gaz66_zu23 {CDF_BLUFOR_CREW_INF
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {
			gunnerType="rhsgref_cdf_b_reg_rifleman";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType="rhsgref_cdf_b_reg_officer";
		};
		class CargoTurret_02: CargoTurret_02 {};
	};
};

class rhsgref_cdf_b_zil131: rhsgref_cdf_zil131 {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_zil131_open: rhsgref_cdf_zil131_open {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_zil131_flatbed: rhsgref_cdf_zil131_flatbed {CDF_BLUFOR_CREW_INF};
class rhsgref_cdf_b_zil131_flatbed_cover: rhsgref_cdf_zil131_flatbed_cover {CDF_BLUFOR_CREW_INF};

class rhsgref_cdf_b_btr60 : rhsgref_cdf_btr60 {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_btr70 : rhsgref_cdf_btr70 {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_btr80 : rhsgref_cdf_btr80 {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_bmp1 : rhsgref_cdf_bmp1 {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_bmp1p : rhsgref_cdf_bmp1p {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_bmp1d : rhsgref_cdf_bmp1d {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_bmp1k : rhsgref_cdf_bmp1k {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_bmp2 : rhsgref_cdf_bmp2 {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_bmp2e : rhsgref_cdf_bmp2e {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_bmp2k : rhsgref_cdf_bmp2k {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_bmp2d : rhsgref_cdf_bmp2d {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_bmd1 : rhsgref_cdf_bmd1 {CDF_BLUFOR_CREW_PARA};
class rhsgref_cdf_b_bmd1k : rhsgref_cdf_bmd1k {CDF_BLUFOR_CREW_PARA};
class rhsgref_cdf_b_bmd1p : rhsgref_cdf_bmd1p {CDF_BLUFOR_CREW_PARA};
class rhsgref_cdf_b_bmd1pk : rhsgref_cdf_bmd1pk {CDF_BLUFOR_CREW_PARA};
class rhsgref_cdf_b_bmd2 : rhsgref_cdf_bmd2 {CDF_BLUFOR_CREW_PARA};
class rhsgref_cdf_b_bmd2k : rhsgref_cdf_bmd2k {CDF_BLUFOR_CREW_PARA};
class rhsgref_cdf_b_2s1 : rhsgref_cdf_2s1
{
	CDF_BLUFOR_CREW
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
		  class Turrets: Turrets
		  {
			class CommanderOptics: CommanderOptics
			{
			  gunnerType="rhsgref_cdf_b_reg_crew_commander";
			};
			class LoaderOptics: LoaderOptics
			{
			  gunnerType="rhsgref_cdf_b_reg_crew";
			};
		  };
		};
	};
};
class rhsgref_cdf_b_2s1_at : rhsgref_cdf_2s1_at
{
	CDF_BLUFOR_CREW
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
		  class Turrets: Turrets
		  {
			class CommanderOptics: CommanderOptics
			{
			  gunnerType="rhsgref_cdf_b_reg_crew_commander";
			};
			class LoaderOptics: LoaderOptics
			{
			  gunnerType="rhsgref_cdf_b_reg_crew";
			};
		  };
		};
	};
};
class rhsgref_cdf_b_t72ba_tv : rhsgref_cdf_t72ba_tv {
	CDF_BLUFOR_CREW
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_b_reg_crew_commander";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
};
class rhsgref_cdf_b_t72bb_tv : rhsgref_cdf_t72bb_tv {
	CDF_BLUFOR_CREW
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_b_reg_crew_commander";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
};
class rhsgref_cdf_b_t80b_tv : rhsgref_cdf_t80b_tv {
	CDF_BLUFOR_CREW
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_b_reg_crew_commander";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
};
class rhsgref_cdf_b_t80bv_tv : rhsgref_cdf_t80bv_tv {
	CDF_BLUFOR_CREW
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_b_reg_crew_commander";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
};
class rhsgref_cdf_b_t80u_tv : rhsgref_cdf_t80u_tv {
	CDF_BLUFOR_CREW
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_b_reg_crew_commander";
				};
			};
		};
	};
};
class rhsgref_cdf_b_t80uk_tv : rhsgref_cdf_t80uk_tv {
	CDF_BLUFOR_CREW
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhsgref_cdf_b_reg_crew_commander";
				};
			};
		};
	};
};
class rhsgref_cdf_b_zsu234 : rhsgref_cdf_zsu234 {CDF_BLUFOR_CREW};
class rhsgref_cdf_b_reg_Mi8amt : rhsgref_cdf_reg_Mi8amt {CDF_BLUFOR_CREW_PILOT};
class rhsgref_cdf_b_reg_Mi17Sh : rhsgref_cdf_reg_Mi17Sh {CDF_BLUFOR_CREW_PILOT};
class rhsgref_cdf_b_reg_Mi17Sh_UPK : rhsgref_cdf_reg_Mi17Sh_UPK {CDF_BLUFOR_CREW_PILOT_ZEUS};
class rhsgref_cdf_b_reg_Mi17Sh_FAB : rhsgref_cdf_reg_Mi17Sh_FAB {CDF_BLUFOR_CREW_PILOT_ZEUS};
class rhsgref_cdf_b_Mi35 : rhsgref_cdf_Mi35 {CDF_BLUFOR_CREW_PILOT};
class rhsgref_cdf_b_Mi35_UPK : rhsgref_cdf_Mi35_UPK {CDF_BLUFOR_CREW_PILOT_ZEUS};
class rhsgref_cdf_b_Mi35_AT : rhsgref_cdf_Mi35_AT {CDF_BLUFOR_CREW_PILOT_ZEUS};
class rhsgref_cdf_b_Mi24D : rhsgref_cdf_Mi24D {CDF_BLUFOR_CREW_PILOT};
class rhsgref_cdf_b_Mi24D_Early : rhsgref_cdf_Mi24D_Early {CDF_BLUFOR_CREW_PILOT};
class rhsgref_cdf_b_su25 : rhsgref_cdf_su25 {CDF_BLUFOR_CREW_PILOT};
class rhsgref_cdf_b_mig29s : rhsgref_cdf_mig29s {CDF_BLUFOR_CREW_PILOT};
