class CfgNonAIVehicles
{
	class ProxyWeapon;
	#define MACRO_MAVERICK(PATH,NAME)	\
	class Proxy##NAME##: proxyWeapon 	\
	{									\
		model = ##PATH##\##NAME##;		\
		simulation = maverickweapon;	\
	};
	#define MACRO_PYLON(PATH,NAME)		\
	class Proxy##NAME##: proxyWeapon 	\
	{									\
		model = ##PATH##\##NAME##;		\
		simulation = pylonpod;			\
	};
	#define PATH_AMMO rhsusf\addons\rhsusf_airweapons\proxyammo
	#define PATH_PYLON rhsusf\addons\rhsusf_airweapons\proxypylon
	#define PATH_A2AIR rhsusf\addons\rhsusf_a2port_air\data\proxy

	MACRO_MAVERICK(PATH_AMMO,rhsusf_b_GBU12)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_b_CBU87)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_b_CBU89)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_m_AGM65B)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_m_AGM65D)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_m_AGM65E)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_m_AGM65F)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_m_AGM65H)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_m_AGM114K)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_m_AIM120D)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_r_DAGR)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_r_M151)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_r_M229)
	MACRO_MAVERICK(PATH_AMMO,rhsusf_r_M255A1)

	MACRO_MAVERICK(PATH_A2AIR,rhsusf_m_aim9x)
	MACRO_MAVERICK(PATH_A2AIR,rhsusf_m_agm65)

	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_dummy) //Dummy pylon for fixed reference in aircraft .p3ds

	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_atas_2x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_agm114_1x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_agm114_2x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_agm114_4x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_agm114_1x_airplane)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_agm114_2x_airplane)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_LAU117_1x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_LAU142_1x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_LAU142_2x_F22_lBay)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_LAU142_2x_F22_rBay)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_m_aim9_1x)

	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_DAGR_4x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_DAGR_8x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_DAGR_16x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_DAGR_4x_airplane)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_DAGR_8x_airplane)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_FFAR_7x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_FFAR_7x_green)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_FFAR_7x_LAU68)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_FFAR_7x_LAU131)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_FFAR_7x_LAU131AA)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_FFAR_19x)
	MACRO_PYLON(PATH_PYLON,rhsusf_pylon_r_FFAR_19x_green)

	MACRO_PYLON(PATH_A2AIR,rhsusf_pylon_m_aim9_heli_grey)
	MACRO_PYLON(PATH_A2AIR,rhsusf_pylon_m_aim9_heli_od)
	MACRO_PYLON(PATH_A2AIR,rhsusf_pylon_m_agm65_1x)
	MACRO_PYLON(PATH_A2AIR,rhsusf_pylon_m_aim9_2x)
	MACRO_PYLON(PATH_A2AIR,rhsusf_pylon_m_mk82_3x)
	MACRO_PYLON(PATH_A2AIR,rhsusf_pylon_alq_131)
	MACRO_PYLON(PATH_A2AIR,rhsusf_pylon_Fuel_UH60)
	MACRO_PYLON(PATH_A2AIR,rhsusf_pylon_Fuel_UH60MEV)
};