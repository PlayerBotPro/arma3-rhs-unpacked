#define MACRO_SAF_TRANSPORT_BACKPACKS \
class TransportBackpacks\
{\
	class _xx_rhssaf_kitbag_smb\
	{\
		backpack="rhssaf_kitbag_smb";\
		count=1;\
	};\
};
#define MACRO_SAF_TRANSPORT_MAGAZINES \
class TransportMagazines\
{\
	class _xx_rhsgref_30rnd_556x45_m21\
	{\
		count = 20;\
		magazine = "rhsgref_30rnd_556x45_m21";\
	};\
	class _xx_rhssaf_30Rnd_762x39mm_M67\
	{\
		count = 20;\
		magazine = "rhssaf_30Rnd_762x39mm_M67";\
	};\
	class _xx_rhsgref_10Rnd_792x57_m76\
	{\
		count = 10;\
		magazine = "rhsgref_10Rnd_792x57_m76";\
	};\
	class _xx_rhs_100Rnd_762x54mmR\
	{\
		count = 5;\
		magazine = "rhs_100Rnd_762x54mmR";\
	};\
	class _xx_rhs_mag_smaw_HEAA\
	{\
		count = 5;\
		magazine = "rhs_mag_smaw_HEAA";\
	};\
	class _xx_rhssaf_mag_brd_m83_green\
	{\
		count = 2;\
		magazine = "rhssaf_mag_brd_m83_green";\
	};\
	class _xx_rhssaf_mag_brd_m83_red\
	{\
		count = 2;\
		magazine = "rhssaf_mag_brd_m83_red";\
	};\
	class _xx_rhssaf_mag_brd_m83_white\
	{\
		count = 4;\
		magazine = "rhssaf_mag_brd_m83_white";\
	};\
};
#define MACRO_SAF_TRANSPORT_ITEMS \
class TransportItems\
{\
	class _xx_FirstAidKit\
	{\
		name = "FirstAidKit";\
		count = 10;\
	};\
	class _xx_ToolKit\
	{\
		name = "ToolKit";\
		count = 1;\
	};\
	class _xx_Medikit\
	{\
		name = "Medikit";\
		count = 1;\
	};\
};
#define MACRO_SAF_TRANSPORT_WEAPONS \
class TransportWeapons\
{\
	class _xx_rhs_weap_m80\
	{\
		weapon = "rhs_weap_m80";\
		count = 2;\
	};\
};

class rhssaf_m1151_olive: rhsusf_M1151_base
{
	SCOPE_PUBLIC;
	ARMY_CAR_GREEN;
	EDPREV(rhssaf_m1151_olive)
	side = 2;
	hiddenselectionstextures[]= {MACRO_M11XX_TEX_SAF};
	textureList[] =
	{
		"rhssaf_green", 1
	};
	animationList[] =
	{
		"DUKE_Hide", 1,
		"iff_hide", 1,
		"snorkel_lower",0,
		"BFT_Hide",1,
		"Antennas_Hide",1
	};

	MACRO_SAF_TRANSPORT_BACKPACKS
	MACRO_SAF_TRANSPORT_MAGAZINES
	MACRO_SAF_TRANSPORT_ITEMS
	MACRO_SAF_TRANSPORT_WEAPONS
};
class rhssaf_m1151_olive_pkm: rhsusf_M1151_GPK_PKM_base
{
	SCOPE_PUBLIC;
	ARMY_CAR_GREEN;
	EDPREV(rhssaf_m1151_olive_pkm)
	side = 2;
	hiddenselectionstextures[]=
	{
		MACRO_M11XX_TEX_SAF,
		MACRO_M11XX_GPK_TEX_SAF
	};
	textureList[] =
	{
		"rhssaf_green", 1
	};
	animationList[] =
	{
		"snorkel_lower",0,
		"Antennas_Hide",1
	};

	MACRO_SAF_TRANSPORT_BACKPACKS
	MACRO_SAF_TRANSPORT_MAGAZINES
	MACRO_SAF_TRANSPORT_ITEMS
	MACRO_SAF_TRANSPORT_WEAPONS
};

class rhssaf_m1152_olive: rhsusf_m1152_base
{
	displayName = "$STR_RHS_M1152_CCV_NAME";
	SCOPE_PUBLIC;
	ARMY_CAR_GREEN;
	EDPREV(rhssaf_m1152_olive)
	side = 2;
	typicalCargo[] = {"rhssaf_army_m10_digital_crew"};
	hiddenselectionstextures[]=
	{
		MACRO_M11XX_TEX_SAF,
		MACRO_M11XX_2DR_TEX_SAF
	};
	textureList[] =
	{
		"rhssaf_green", 1
	};
	animationList[] =
	{
		"iff_hide", 1,
		"snorkel_lower",0,
		"BFT_Hide",1,
		"Antennas_Hide",1,
		"m1152_Hide",0
	};

	MACRO_SAF_TRANSPORT_BACKPACKS
	MACRO_SAF_TRANSPORT_MAGAZINES
	MACRO_SAF_TRANSPORT_ITEMS
	MACRO_SAF_TRANSPORT_WEAPONS
};
class rhssaf_m1152_rsv_olive: rhssaf_m1152_olive
{
	picture="\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1152_rsv_pic_ca.paa";
	displayName = "$STR_RHS_M1152_RSV_NAME";
	EDPREV(rhssaf_m1152_rsv_olive)

	scope = 2;
	accuracy = 0.5;

	transportAmmo	= 250000;
	transportFuel	= 250000;
	transportRepair	= 5000000;
	supplyRadius	= 12;

	animationList[] =
	{
		"iff_hide", 1,
		"snorkel_lower",0,
		"BFT_Hide",1,
		"Antennas_Hide",1,
		"m1152_Hide",0,
		"m1152_tent_Hide",0,
		"supply_hide",0
	};

	class VehicleTransport
	{
		class Cargo
		{
			parachuteClass = "B_Parachute_02_F";
			parachuteHeightLimit = 5;
			canBeTransported = 1;
			dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
		};
	};
};

class rhssaf_m1152_TCV_olive: rhsusf_m1152_TCV_base
{
	SCOPE_PUBLIC;
	ARMY_CAR_GREEN;
	EDPREV(rhssaf_m1152_TCV_olive)
	side = 2;
	typicalCargo[] = {"rhssaf_army_m10_digital_crew"};
	textureList[] =
	{
		"rhssaf_green", 1
	};
	animationList[] =
	{
		"iff_hide", 1,
		"snorkel_lower",0,
		"BFT_Hide",1,
		"Antennas_Hide",1,
	};

	MACRO_SAF_TRANSPORT_BACKPACKS
	MACRO_SAF_TRANSPORT_MAGAZINES
	MACRO_SAF_TRANSPORT_ITEMS
	MACRO_SAF_TRANSPORT_WEAPONS
};
