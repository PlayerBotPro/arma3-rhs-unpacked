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
	#define PATH_PYLON rhsgref\addons\rhsgref_airweapons
	#define PATH_ZT3 rhsgref\addons\rhsgref_airweapons\zt3
	#define PATH_ZT6 rhsgref\addons\rhsgref_airweapons\zt6

	MACRO_PYLON(PATH_PYLON,rhs_pylon_L159_fuelpod)
	MACRO_PYLON(PATH_PYLON,rhs_pylon_L159_fuelpod_grey)

	MACRO_PYLON(PATH_ZT3,rhs_pylon_m_zt3_launcher)
	MACRO_MAVERICK(PATH_ZT3,rhs_m_zt3)

	MACRO_PYLON(PATH_ZT6,rhs_pylon_m_zt6_launcher)
	MACRO_MAVERICK(PATH_ZT6,rhs_m_zt6)
};