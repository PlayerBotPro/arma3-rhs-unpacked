// legacy classes
#define SUBVARIANT(inh,stN,podMass,mass,cA)			\
class rhs_mag_##inh##_##cA## : rhs_mag_##inh##_##stN 		\
{								\
	count = ##cA##; 					\
	weight = __EVAL(##cA##*##mass##+##podMass##);		\
};

				#define PosX0Center 0.50
				#define PosY0Center 0.50
				#define SizeX10deg 0.274
				#define SizeY10deg 0.310


class rhs_mag_s5_32 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(S5);
	descriptionShort	= "General purpose";
	ammo = "rhs_ammo_s5";
	count = __EVAL(32*2);
	maxleadspeed = 200;
	initSpeed = 44;
	nameSound = "rockets";
	weight = __EVAL(4*64);
	class mfdElements
	{
		#define MFD_PYLON_NAME "С5"
		#define MFD_PYLON_SIZE_IN 0.027
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCirclePod.hpp"
		#undef MFD_PYLON_NAME
	};
};
SUBVARIANT(s5,32,20,4,16)
SUBVARIANT(s5,32,20,4,64)
SUBVARIANT(s5,32,20,4,128)
SUBVARIANT(s5,32,20,4,192)

class rhs_mag_s5_m1_32 : rhs_mag_s5_32
{
	DISP_MAG_STR(s5m1);
	descriptionShort	= "HE-FRAG";
	ammo = "rhs_ammo_s5m1";
	count = 64;
	weight = __EVAL(3.86*64);
	class mfdElements
	{
		#define MFD_PYLON_NAME "С5М1"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCirclePod.hpp"
		#undef MFD_PYLON_NAME
	};
};
SUBVARIANT(s5_m1,32,20,3.86,16)
SUBVARIANT(s5_m1,32,20,3.86,64)
SUBVARIANT(s5_m1,32,20,3.86,128)
SUBVARIANT(s5_m1,32,20,3.86,192)

class rhs_mag_s5_k1_32 : rhs_mag_s5_32
{
	DISP_MAG_STR(s5k1);
	descriptionShort	= "HEAT (Penetration: 130mm RHA)";
	ammo = "rhs_ammo_s5k1";
	count = 64;
	weight = __EVAL(3.64*64);
	class mfdElements
	{
		#define MFD_PYLON_NAME "С5К1"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCirclePod.hpp"
		#undef MFD_PYLON_NAME
	};
};
SUBVARIANT(s5_k1,32,20,3.64,16)
SUBVARIANT(s5_k1,32,20,3.64,64)
SUBVARIANT(s5_k1,32,20,3.64,128)
SUBVARIANT(s5_k1,32,20,3.64,192)

class rhs_mag_s5_ko_32 : rhs_mag_s5_32
{
	DISP_MAG_STR(s5ko);
	descriptionShort	= "HEAT-FRAG (Penetration: 130mm RHA)";
	ammo = "rhs_ammo_s5ko";
	count = 64;
	weight = __EVAL(4.43*64);
	class mfdElements
	{
		#define MFD_PYLON_NAME "С5КО"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCirclePod.hpp"
		#undef MFD_PYLON_NAME
	};
};
SUBVARIANT(s5_ko,32,20,4.43,16)
SUBVARIANT(s5_ko,32,20,4.43,64)
SUBVARIANT(s5_ko,32,20,4.43,128)
SUBVARIANT(s5_ko,32,20,4.43,192)

class rhs_mag_s8_12 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(S8KOM);
	descriptionShort	= "HEAT (Penetration: 350mm RHA)";
	ammo = "rhs_ammo_s8";
	count = 12;
	initSpeed = 44;
	nameSound = "rockets";
	maxleadspeed = 30;
	weight = __EVAL(20+(11.3*12));
};
SUBVARIANT(s8,12,20,11.3,20)
SUBVARIANT(s8,12,20,11.3,40)
SUBVARIANT(s8,12,20,11.3,80)
SUBVARIANT(s8,12,20,11.3,120)

class rhs_mag_s8_DF_20 : rhs_mag_s8_12
{
	count = 20;
	//weight = 13.4*20;
	weight = 268;
	DISP_MAG_STR(S8DF);
	descriptionShort	= "Thermobaric";
	ammo = "rhs_ammo_s8df";
	class mfdElements
	{
		#define MFD_PYLON_NAME "С8ДФ"
		#define MFD_PYLON_SIZE_IN 0.03
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCirclePod.hpp"
		#undef MFD_PYLON_NAME
	};
};
SUBVARIANT(s8_DF,20,20,13.4,40)
SUBVARIANT(s8_DF,20,20,13.4,80)

class rhs_mag_s8_T_20 : rhs_mag_s8_12
{
	count = 20;
	//weight = 15*20;
	weight = __EVAL(20+(15*20));
	DISP_MAG_STR(S8T);
	descriptionShort	= "Tandem HEAT (Penetration: 440mm RHA)";
	ammo = "rhs_ammo_s8t";
	class mfdElements
	{
		#define MFD_PYLON_NAME "С8Т"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCirclePod.hpp"
		#undef MFD_PYLON_NAME
	};
};
SUBVARIANT(s8_T,20,20,15,40)
SUBVARIANT(s8_T,20,20,15,80)

class rhs_mag_s13b_10 : VehicleMagazine
{
	scope			= public;
	DISP_MAG_STR(S13B);
	descriptionShort	= "Obstacle penetration/HE";
	ammo			= "rhs_ammo_s13b";
	count			= __EVAL(5*2);
	maxleadspeed	= 200;
	initSpeed		= 44;
	nameSound		= "rockets";
	weight			= __EVAL(60*10);
};
class rhs_mag_s13d_10 : rhs_mag_s13b_10
{
	DISP_MAG_STR(S13D);
	descriptionShort	= "Thermobaric (35-40kg TNT equivalent). Introduced in 1995";
	ammo = "rhs_ammo_s13d";
	weight = __EVAL(68*10);
};
class rhs_mag_s13df_10 : rhs_mag_s13b_10
{
	DISP_MAG_STR(S13DF);
	descriptionShort	= "Thermobaric (35-40kg TNT equivalent). Introduced in 2018";
	ammo = "rhs_ammo_s13df";
	weight = __EVAL(68*10);
};
class rhs_mag_s13t_10 : rhs_mag_s13b_10
{
	DISP_MAG_STR(S13T);
	descriptionShort	= "Tandem HEAT (Penetration: 600mm RHA)";
	ammo = "rhs_ammo_s13t";
	weight = __EVAL(75*10);
};
class rhs_mag_s13of_10 : rhs_mag_s13b_10
{
	DISP_MAG_STR(S13OF);
	descriptionShort	= "HE-FRAG. Introduced in 1993";
	ammo = "rhs_ammo_s13of";
	weight = __EVAL(69*10);
};

#define ROCKET_POD_VARIANT(baseName,podName,podMass,ammoName,ammoCount,rocketMass)	\
class rhs_mag_##podName##_##ammoName##: rhs_mag_##podName##_##baseName##			\
{																					\
	displayName 	= $STR_RHS_MAG_##ammoName##;									\
	displayNameShort= $STR_RHS_MAG_SH_##ammoName##;									\
	ammo			= rhs_ammo_##ammoName##;										\
	mass			= __EVAL(##podMass##+(##ammoCount##*##rocketMass##));				\
	weight			= __EVAL(##podMass##+(##ammoCount##*##rocketMass##));				\
	pylonWeapon		= rhs_weap_##ammoName##;										\
};

// dynamic loadout classes
// UB-16-57 block
// http://militaryrussia.ru/blog/topic-50.html
class rhs_mag_ub16_s5: rhs_mag_s5_32
{
	ammo			= rhs_ammo_s5;
	model			= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_ub16.p3d;
	count 			= 16;

	mass			= __EVAL(54+(16*4));	// 54kg empty mass + rockets
	weight			= __EVAL(54+(16*4));	// rtd helicopters variant, TODO: check if it's still used/broken
	pylonWeapon		= rhs_weap_s5;
	hardpoints[]	= {"RHS_HP_UB16"};
};
ROCKET_POD_VARIANT(s5,ub16,54,s5m1,16,3.86)
ROCKET_POD_VARIANT(s5,ub16,54,s5k1,16,3.64)
ROCKET_POD_VARIANT(s5,ub16,54,s5ko,16,4.43)
class rhs_mag_ub16_ka52_s5: rhs_mag_ub16_s5
{
	model			= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_ub16_ka52.p3d;
	hardpoints[]	= {"RHS_HP_UB16_KA52"};
};
ROCKET_POD_VARIANT(s5,ub16_ka52,54,s5m1,16,3.86)
ROCKET_POD_VARIANT(s5,ub16_ka52,54,s5k1,16,3.64)
ROCKET_POD_VARIANT(s5,ub16_ka52,54,s5ko,16,4.43)
class rhs_mag_ub16_bd3_umk2a_s5: rhs_mag_ub16_s5
{
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_ub16.p3d;
	hardpoints[]	= {"RHS_HP_UB16_BD3_UMK2A"};
};
ROCKET_POD_VARIANT(s5,ub16_bd3_umk2a,54,s5m1,16,3.86)
ROCKET_POD_VARIANT(s5,ub16_bd3_umk2a,54,s5k1,16,3.64)
ROCKET_POD_VARIANT(s5,ub16_bd3_umk2a,54,s5ko,16,4.43)
// UB-32-57 block
// http://militaryrussia.ru/blog/topic-50.html
class rhs_mag_ub32_s5: rhs_mag_s5_32
{
	ammo			= rhs_ammo_s5;
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_r_ub32.p3d;
	count 			= 32;

	mass			= __EVAL(109+(32*4));	// 109kg empty mass + rockets
	weight			= __EVAL(109+(32*4));	// rtd helicopters variant, TODO: check if it's still used/broken
	pylonWeapon		= rhs_weap_s5;
	hardpoints[]	= {"RHS_HP_UB32"};
};
ROCKET_POD_VARIANT(s5,ub32,109,s5m1,32,3.86)
ROCKET_POD_VARIANT(s5,ub32,109,s5k1,32,3.64)
ROCKET_POD_VARIANT(s5,ub32,109,s5ko,32,4.43)
class rhs_mag_ub32_ka52_s5: rhs_mag_ub32_s5
{
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_r_ub32_ka52.p3d;
	hardpoints[]	= {"RHS_HP_UB32_KA52"};
};
ROCKET_POD_VARIANT(s5,ub32_ka52,109,s5m1,32,3.86)
ROCKET_POD_VARIANT(s5,ub32_ka52,109,s5k1,32,3.64)
ROCKET_POD_VARIANT(s5,ub32_ka52,109,s5ko,32,4.43)
class rhs_mag_ub32_bd3_umk2a_s5: rhs_mag_ub32_s5
{
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_ub32.p3d;
	hardpoints[]	= {"RHS_HP_UB32_BD3_UMK2A"};
};
ROCKET_POD_VARIANT(s5,ub32_bd3_umk2a,54,s5m1,16,3.86)
ROCKET_POD_VARIANT(s5,ub32_bd3_umk2a,54,s5k1,16,3.64)
ROCKET_POD_VARIANT(s5,ub32_bd3_umk2a,54,s5ko,16,4.43)
// B8M1 block
// http://vympelmkb.com/category/products/braket/
// http://промкаталог.рф/PublicDocuments/1460576.pdf
class rhs_mag_b8m1_s8kom: rhs_mag_s8_12
{
	ammo			= rhs_ammo_s8;
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b8m1.p3d;
	count 			= 20;

	mass			= __EVAL(150+(20*11.3));	// 150kg empty mass + rockets
	weight			= __EVAL(150+(20*11.3));	// rtd helicopters variant, TODO: check if it's still used/broken
	pylonWeapon		= rhs_weap_s8;
	hardpoints[]	= {"RHS_HP_B8M1"};
	class mfdElements
	{
		#define MFD_PYLON_NAME "С8КОМ"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCirclePod.hpp"
		#undef MFD_PYLON_NAME
	};
};
ROCKET_POD_VARIANT(s8kom,b8m1,150,s8df,20,13.4)
ROCKET_POD_VARIANT(s8kom,b8m1,150,s8t,20,15)
class rhs_mag_b8m1_bd3_umk2a_s8kom: rhs_mag_b8m1_s8kom
{
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_b8m1.p3d;
	hardpoints[]	= {"RHS_HP_B8M1_BD3_UMK2A"};
};
ROCKET_POD_VARIANT(s8kom,b8m1_bd3_umk2a,123,s8df,20,13.4)
ROCKET_POD_VARIANT(s8kom,b8m1_bd3_umk2a,123,s8t,20,15)

// B8V20 block
// http://armscom.net/products/s_8_aircraft_rocket_family
class rhs_mag_b8v20a_s8kom: rhs_mag_b8m1_s8kom
{
	ammo			= rhs_ammo_s8;
	model			= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_b8v20a.p3d;
	count 			= 20;

	mass			= __EVAL(123+(20*11.3));	// 123kg empty mass + rockets
	weight			= __EVAL(123+(20*11.3));	// rtd helicopters variant, TODO: check if it's still used/broken
	pylonWeapon		= rhs_weap_s8;
	hardpoints[]	= {"RHS_HP_B8V20"};
};
ROCKET_POD_VARIANT(s8kom,b8v20a,123,s8df,20,13.4)
ROCKET_POD_VARIANT(s8kom,b8v20a,123,s8t,20,15)
class rhs_mag_b8v20a_ka52_s8kom: rhs_mag_b8v20a_s8kom
{
	model			= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_b8v20a_ka52.p3d;
	hardpoints[]	= {"RHS_HP_B8V20_KA52"};
};
ROCKET_POD_VARIANT(s8kom,b8v20a_ka52,123,s8df,20,13.4)
ROCKET_POD_VARIANT(s8kom,b8v20a_ka52,123,s8t,20,15)

// B13L block
// http://vympelmkb.com/category/products/braket/
// http://www.russianarms.ru/forum/index.php?topic=12070.0

class rhs_mag_b13l_s13b: rhs_mag_s13b_10
{
	ammo			= rhs_ammo_s13b;
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l.p3d;
	count 			= 5;

	mass			= __EVAL(160+(5*68.3));	// 160kg empty mass + rockets
	weight			= __EVAL(160+(5*68.3));	// rtd helicopters variant, TODO: check if it's still used/broken
	pylonWeapon		= rhs_weap_s13;
	hardpoints[]	= {"RHS_HP_B13L"};
	class mfdElements
	{
		#define MFD_PYLON_NAME "С13"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCirclePod.hpp"
		#undef MFD_PYLON_NAME
	};
};
ROCKET_POD_VARIANT(s13b,b13l,160,s13d,5,68)
ROCKET_POD_VARIANT(s13b,b13l,160,s13df,5,68)
ROCKET_POD_VARIANT(s13b,b13l,160,s13t,5,75)
ROCKET_POD_VARIANT(s13b,b13l,160,s13of,5,69)
class rhs_mag_b13l_bd3_umk2a_s13b: rhs_mag_b13l_s13b
{
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_b13l.p3d;
	hardpoints[]	= {"RHS_HP_B13L_BD3_UMK2A"};
};
ROCKET_POD_VARIANT(s13b,b13l_bd3_umk2a,140,s13d,5,68)
ROCKET_POD_VARIANT(s13b,b13l_bd3_umk2a,140,s13df,5,68)
ROCKET_POD_VARIANT(s13b,b13l_bd3_umk2a,140,s13t,5,75)
ROCKET_POD_VARIANT(s13b,b13l_bd3_umk2a,140,s13of,5,69)

class rhs_mag_b13l1_s13b: rhs_mag_b13l_s13b
{
	ammo			= rhs_ammo_s13b;
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l1.p3d;
	count 			= 5;

	mass			= __EVAL(140+(5*68.3));	// 140kg empty mass + rockets
	weight			= __EVAL(140+(5*68.3));	// rtd helicopters variant, TODO: check if it's still used/broken
	pylonWeapon		= rhs_weap_s13;
	hardpoints[]	= {"RHS_HP_B13L1"};
};
ROCKET_POD_VARIANT(s13b,b13l1,140,s13d,5,68)
ROCKET_POD_VARIANT(s13b,b13l1,140,s13df,5,68)
ROCKET_POD_VARIANT(s13b,b13l1,140,s13t,5,75)
ROCKET_POD_VARIANT(s13b,b13l1,140,s13of,5,69)
class rhs_mag_b13l1_ka52_s13b: rhs_mag_b13l1_s13b
{
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l1_ka52.p3d;
	hardpoints[]	= {"RHS_HP_B13L1_KA52"};
};
ROCKET_POD_VARIANT(s13b,b13l1_ka52,140,s13d,5,68)
ROCKET_POD_VARIANT(s13b,b13l1_ka52,140,s13df,5,68)
ROCKET_POD_VARIANT(s13b,b13l1_ka52,140,s13t,5,75)
ROCKET_POD_VARIANT(s13b,b13l1_ka52,140,s13of,5,69)
//rocket pods for proxy handling
//end result like rhs_mag_b8v20a_pod

// S24 & variants

class rhs_mag_apu68m3_s24: rhs_mag_s13b_10
{
	DISP_MAG_STR(S24);
	ammo			= rhs_ammo_s24;
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_apu68m3_s24.p3d;
	count 			= 1;

	mass			= __EVAL(45+(1*235));	// 160kg empty mass + rockets
	weight			= __EVAL(45+(1*235));	// rtd helicopters variant, TODO: check if it's still used/broken
	pylonWeapon		= rhs_weap_s24;
	hardpoints[]	= {"RHS_HP_APU68M3_S24"};
	class mfdElements
	{
		#define MFD_PYLON_NAME "С24"
		#define MFD_PYLON_SIZE_IN 0.02
		#define MFD_PYLON_SIZE_OUT 0.04
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
ROCKET_POD_VARIANT(s24,apu68m3,45,s24b,1,235)
class rhs_mag_apu68_bd3_umk2a_s24: rhs_mag_apu68m3_s24
{
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_s24.p3d;
	hardpoints[]	= {"RHS_HP_APU68_BD3_UMK2A"};
};
ROCKET_POD_VARIANT(s24,apu68_bd3_umk2a,45,s24b,1,235)

// S25 & variants
class rhs_mag_o25l_s25o: rhs_mag_apu68m3_s24
{
	DISP_MAG_STR(S25O);
	ammo			= rhs_ammo_s25o;
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_o25l.p3d;
	count 			= 1;

	mass			= __EVAL(45+(1*245));	// 45kg empty mass + rockets
	weight			= __EVAL(45+(1*245));	// rtd helicopters variant, TODO: check if it's still used/broken
	pylonWeapon		= rhs_weap_s25;
	//hardpoints[]	= {};
	hardpoints[]	= {"RHS_HP_O25L"};
	class mfdElements
	{
		#define MFD_PYLON_NAME "С25"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
ROCKET_POD_VARIANT(s25o,o25l,45,s25of,1,245)
ROCKET_POD_VARIANT(s25o,o25l,45,s25l,1,245)
ROCKET_POD_VARIANT(s25o,o25l,45,s25ld,1,245)

class rhs_mag_bd3_usk_a_o25l_s25o: rhs_mag_o25l_s25o
{
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_usk_a_o25l.p3d;

	mass			= __EVAL(65+(1*245));	// 65kg empty mass + rockets
	weight			= __EVAL(65+(1*245));	// rtd helicopters variant, TODO: check if it's still used/broken
	hardpoints[]	= {"RHS_HP_BD3_USK_A_O25L"};
};
ROCKET_POD_VARIANT(s25o,bd3_usk_a_o25l,65,s25of,1,245)
ROCKET_POD_VARIANT(s25o,bd3_usk_a_o25l,65,s25l,1,245)
ROCKET_POD_VARIANT(s25o,bd3_usk_a_o25l,65,s25ld,1,245)

class rhs_mag_bd3_umk2a_o25l_s25o: rhs_mag_o25l_s25o
{
	model			= rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_o25l.p3d;
	mass			= __EVAL(65+(1*245));	// 65kg empty mass + rockets
	weight			= __EVAL(65+(1*245));	// rtd helicopters variant, TODO: check if it's still used/broken
	hardpoints[]	= {"RHS_HP_BD3_UMK2A_O25L"};
};
ROCKET_POD_VARIANT(s25o,bd3_umk2a_o25l,65,s25of,1,245)
ROCKET_POD_VARIANT(s25o,bd3_umk2a_o25l,65,s25l,1,245)
ROCKET_POD_VARIANT(s25o,bd3_umk2a_o25l,65,s25ld,1,245)


class rhs_mag_R27R : VehicleMagazine
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r27;
	count				= 1;
	initspeed			= 100;
	maxleadspeed		= 900;
	namesound			= "missiles";
	ammo				= "rhs_ammo_r27r";
	displayname			= "$STR_RHS_R27R_NAME";
	descriptionShort	= "Active radar homing. Range: 2km-16km";
	displaynameshort	= "ARH";
	mass				= 44;
	hardpoints[]		= {"RHS_HP_R27"};
	pylonWeapon			= "rhs_weap_r27r_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "27Р"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_R27R_APU470 : rhs_mag_R27R
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27;
	hardpoints[]		= {"RHS_HP_R27_APU470"};
};
class rhs_mag_R27ER : rhs_mag_R27R
{
	displayname			= "$STR_RHS_R27ER_NAME";
	descriptionShort	= "Active radar homing. Range: 2km-20km";
	ammo				= "rhs_ammo_r27er";
	class mfdElements
	{
		#define MFD_PYLON_NAME "27ЭР"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_R27ER_APU470 : rhs_mag_R27ER
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27;
	hardpoints[]		= {"RHS_HP_R27_APU470"};
};
class rhs_mag_R27T : rhs_mag_R27ER
{
	displayname			= "$STR_RHS_R27T_NAME";
	displaynameshort	= "IR";
	descriptionShort	= "Infrared homing. Locking radius: ±7.5° off-boresight. Range: 1.7km-22km";
	ammo				= "rhs_ammo_r27t";
	pylonWeapon			= "rhs_weap_r27t_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "27Т"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_R27T_APU470 : rhs_mag_R27T
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27;
	hardpoints[]		= {"RHS_HP_R27_APU470"};
};
class rhs_mag_R27ET : rhs_mag_R27T
{
	displayname			= "$STR_RHS_R27ET_NAME";
	descriptionShort	= "Infrared homing. Locking radius: ±7.5° off-boresight. Range: 1.7km-26km";
	ammo				= "rhs_ammo_r27et";
	class mfdElements
	{
		#define MFD_PYLON_NAME "27ЭТ"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_R27ET_APU470 : rhs_mag_R27ET
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27;
	hardpoints[]		= {"RHS_HP_R27_APU470"};
};

class rhs_mag_R60 : VehicleMagazine
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r60;
	count				= 1;
	initspeed			= 100;
	maxleadspeed		= 900;
	namesound			= "missiles";
	ammo				=  "rhs_ammo_r60";
	displayname			= "$STR_RHS_R60_NAME";
	displaynameshort	= "IR";
	descriptionShort	= "Infrared homing. Locking radius: ±12° off-boresight. Range: 0.3km-5km";
	mass				= 44;
	hardpoints[]		= {"RHS_HP_R60"};
	pylonWeapon			= "rhs_weap_r60_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "60"
		#define MFD_PYLON_SIZE_IN 0.012
		#define MFD_PYLON_SIZE_OUT 0.02
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_R60_APU60 : rhs_mag_R60
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu60_r60;
	hardpoints[]		= {"RHS_HP_R60_APU60"};
};
class rhs_mag_R60M : rhs_mag_R60
{
	ammo				=  "rhs_ammo_r60m";
	displayname			= "$STR_RHS_R60M_NAME";
	descriptionShort	= "Infrared homing. Locking radius: ±17° off-boresight. Range: 0.3km-8km";
	class mfdElements
	{
		#define MFD_PYLON_NAME "60М"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_R60M_APU60 : rhs_mag_R60M
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu60_r60;
	hardpoints[]		= {"RHS_HP_R60_APU60"};
};


class rhs_mag_R73 : VehicleMagazine
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r73_ext;
	count				= 1;
	initspeed			= 0;
	maxleadspeed		= 900;
	namesound			= "missiles";
	ammo				=  "rhs_ammo_r73";
	displayname			= "$STR_RHS_R73_NAME";
	descriptionShort	= "Infrared homing. Locking radius: ±25° off-boresight. Range: 0.3km-8km";
	displaynameshort	= "IR";
	mass				= 105;
	hardpoints[]		= {"RHS_HP_R73"};
	pylonWeapon			= "rhs_weap_r73_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "73"
		#define MFD_PYLON_SIZE_IN 0.0125
		#define MFD_PYLON_SIZE_OUT 0.025
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_R73_APU73 : rhs_mag_R73
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73;
	hardpoints[]		= {"RHS_HP_R73_APU73"};
};

class rhs_mag_R73M : rhs_mag_R73
{
	ammo				= "rhs_ammo_r73m";
	displayname			= "$STR_RHS_R73M_NAME";
	descriptionShort	= "Infrared homing. Locking radius: ±60° off-boresight. Range: 0.15km-8km";
	class mfdElements
	{
		#define MFD_PYLON_NAME "73М"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
	pylonWeapon			= "rhs_weap_r73m_Launcher";
};
class rhs_mag_R73M_APU73: rhs_mag_R73M
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73;
	hardpoints[]		= {"RHS_HP_R73_APU73"};
};

class rhs_mag_R74 : rhs_mag_R73
{
	ammo				= "rhs_ammo_r74";
	displayname			= "$STR_RHS_R74_NAME";
	descriptionShort	= "Infrared homing missile with improved CM resistance. Locking radius: ±60° off-boresight. Range: 0.15km-8km";
	class mfdElements
	{
		#define MFD_PYLON_NAME "74"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
	pylonWeapon			= "rhs_weap_r74_Launcher";
	hardpoints[]		= {"RHS_HP_R74"};
};
class rhs_mag_R74_APU73: rhs_mag_R74
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73;
	hardpoints[]		= {"RHS_HP_R74_APU73"};
};

class rhs_mag_R74M2 : rhs_mag_R73
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r74m2;
	count				= 1;
	ammo				= "rhs_ammo_r74m2";
	displayname			= "$STR_RHS_R74M2_NAME";
	displaynameshort	= "IR";
	descriptionShort	= "Infrared homing. Locking radius: ±75° off-boresight. Range: 0.15km-8km";
	initspeed			= 0;
	hardpoints[] 		= {"RHS_HP_R74M2"};
	pylonWeapon			= "rhs_weap_r74m2_Launcher";
};
class rhs_mag_R74M2_int : rhs_mag_R74M2
{
	hardpoints[] 		= {"RHS_HP_R74M2_INT"};
	ejectSpeed[]		= {1,0,0};
	initSpeed			= 0;							//missile eject/launch vector forward (use for missiles that are launched from internal bays)
	initSpeedY			= -25;							//missile eject/launch vector down
	initSpeedZ			= 0;							//missile eject/launch vector sideways
};

class rhs_mag_R77 : rhs_mag_R73
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77;
	count				= 1;
	ammo				= "rhs_ammo_r77";
	displayname			= "$STR_RHS_R77_NAME";
	displaynameshort	= "ARH";
	descriptionShort	= "Active radar homing. Range: 2km-25km";
	hardpoints[] 		= {"RHS_HP_R77"};
	pylonWeapon			= "rhs_weap_r77_Launcher";

	mass				= 173;
	ejectSpeed[]		= {1,0,0};
	initSpeed			= 0;
	initSpeedY			= -25;
	initSpeedZ			= 0;
	class mfdElements
	{
		#define MFD_PYLON_NAME "77"
		#define MFD_PYLON_SIZE_IN 0.015
		#define MFD_PYLON_SIZE_OUT 0.03
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_R77_AKU170 : rhs_mag_R77
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_ext;
	hardpoints[] 		= {"RHS_HP_R77_AKU170"};
};
class rhs_mag_R77_AKU170_MIG29 : rhs_mag_R77
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_MiG;
	hardpoints[] 		= {"RHS_HP_R77_AKU170_MIG29"};
};

class rhs_mag_R77M : rhs_mag_R77
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77m;
	count				= 1;
	ammo				= "rhs_ammo_r77m";
	displayname			= "$STR_RHS_R77M_NAME";
	displaynameshort	= "ARH";
	descriptionShort	= "Active radar homing missile with improved CM resistance. Range: 2km-25km";
	hardpoints[] 		= {"RHS_HP_R77M"};
	pylonWeapon			= "rhs_weap_r77m_Launcher";

	mass				= 190;
	ejectSpeed[]		= {1,0,0};
	initSpeed			= 0;
	initSpeedY			= -25;
	initSpeedZ			= 0;
	class mfdElements
	{
		#define MFD_PYLON_NAME "77М"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};

class rhs_mag_R77M_AKU170 : rhs_mag_R77M
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_ext;
	hardpoints[] 		= {"RHS_HP_R77M_AKU170"};
};
class rhs_mag_R77M_AKU170_MIG29 : rhs_mag_R77M
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_MiG;
	hardpoints[] 		= {"RHS_HP_R77M_AKU170_MIG29"};
};

// Kh-25 Karen
class rhs_mag_kh25 : VehicleMagazine
{
	model 				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_apu68_kh25;
	ammo				= "rhs_ammo_kh25";
	displayname			= "$STR_RHS_KH25_NAME";
	descriptionShort	= "Semi-active laser seeker. Range: 2km-10km";
	displaynameshort	= "LG";
	namesound			= "missiles";
	count				= 1;
	initspeed			= 0;
	mass				= 320;
	hardpoints[] 		= {"RHS_HP_KH25"};
	pylonWeapon			= "rhs_weap_kh25_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "Х25"
		#define MFD_PYLON_SIZE_IN 0.01
		#define MFD_PYLON_SIZE_OUT 0.025
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_kh25ML : rhs_mag_kh25
{
	ammo				= "rhs_ammo_kh25ML";
	displayname			= "$STR_RHS_KH25ML_NAME";
	descriptionShort	= "Semi-active laser seeker. Range: 2km-10km";
	mass				= 308;
	pylonWeapon			= "rhs_weap_kh25ml_Launcher";
};
class rhs_mag_kh25MA : rhs_mag_kh25
{
	ammo				= "rhs_ammo_kh25MA";
	displayname			= "$STR_RHS_KH25MA_NAME";
	displaynameshort	= "AGM";
	descriptionShort	= "Active radar homing. Requires radar. Range: 1.5km-10km";
	mass				= 308;
	pylonWeapon			= "rhs_weap_kh25ma_Launcher";
};
class rhs_mag_kh25MT : rhs_mag_kh25
{
	ammo				= "rhs_ammo_kh25MT";
	displayname			= "$STR_RHS_KH25MT_NAME";
	displaynameshort	= "TV";
	descriptionShort	= "TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-8km";
	pylonWeapon			= "rhs_weap_kh25mt_Launcher";
};
class rhs_mag_kh25MTP : rhs_mag_kh25
{
	ammo				= "rhs_ammo_kh25MTP";
	displayname			= "$STR_RHS_KH25MTP_NAME";
	displaynameshort	= "IR";
	descriptionShort	= "IR-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
	pylonWeapon			= "rhs_weap_kh25mtp_Launcher";
};
class rhs_mag_kh25MP : rhs_mag_kh25
{
	ammo				= "rhs_ammo_kh25MP";
	displayname			= "$STR_RHS_KH25MP_NAME";
	displaynameshort	= "Anti-Radar";
	descriptionShort	= "Anti radiation missile. Range: 1.5km-10km";
	mass				= 323;
	pylonWeapon			= "rhs_weap_kh25mp_Launcher";
};

class rhs_mag_kh25_apu68_mig29 : rhs_mag_kh25
{
	model 				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kh25;
	hardpoints[] 		= {"RHS_HP_KH25_APU68_MIG29"};
	pylonWeapon			= "rhs_weap_kh25_mig29_Launcher";
};
class rhs_mag_kh25ML_apu68_mig29 : rhs_mag_kh25_apu68_mig29
{
	ammo				= "rhs_ammo_kh25ML";
	displayname			= "$STR_RHS_KH25ML_NAME";
	mass				= 308;
	pylonWeapon			= "rhs_weap_kh25ml_mig29_Launcher";
};
class rhs_mag_kh25MT_apu68_mig29 : rhs_mag_kh25_apu68_mig29
{
	ammo				= "rhs_ammo_kh25MT";
	displayname			= "$STR_RHS_KH25MT_NAME";
	displaynameshort	= "TV";
	descriptionShort	= "TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-8km";
	pylonWeapon			= "rhs_weap_kh25mt_Launcher";
};
class rhs_mag_kh25MTP_apu68_mig29 : rhs_mag_kh25_apu68_mig29
{
	ammo				= "rhs_ammo_kh25MTP";
	displayname			= "$STR_RHS_KH25MTP_NAME";
	displaynameshort	= "IR";
	descriptionShort	= "IR-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
	pylonWeapon			= "rhs_weap_kh25mtp_Launcher";
};
class rhs_mag_kh25MP_apu68_mig29 : rhs_mag_kh25_apu68_mig29
{
	ammo				= "rhs_ammo_kh25MP";
	displayname			= "$STR_RHS_KH25MP_NAME";
	displaynameshort	= "Anti-Radar";
	descriptionShort	= "Anti radiation missile. Range: 1.5km-10km";
	mass				= 323;
	pylonWeapon			= "rhs_weap_kh25mp_Launcher";
};


// Kh-29 Kedge
class rhs_mag_kh29l : VehicleMagazine
{
	model 				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_kh29_aku58;
	ammo				= "rhs_ammo_kh29l";
	displayname			= "$STR_RHS_KH29L_NAME";
	displaynameshort	= "LG";
	descriptionShort	= "Semi-active laser seeker. Range: 1.5km-10km";
	namesound			= "missiles";
	count				= 1;
	initspeed			= 0;
	mass				= 660;
	hardpoints[] 		= {"RHS_HP_KH29"};
	pylonWeapon			= "rhs_weap_kh29_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "Х29"
		#define MFD_PYLON_SIZE_IN 0.02
		#define MFD_PYLON_SIZE_OUT 0.04
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_kh29ML : rhs_mag_kh29l
{
	ammo				= "rhs_ammo_kh29ML";
	displayname			= "$STR_RHS_KH29ML_NAME";
	displaynameshort	= "LG";
	descriptionShort	= "Semi-active laser seeker. Range: 1.5km-10km";
	pylonWeapon			= "rhs_weap_kh29ml_Launcher";
};
class rhs_mag_kh29T : rhs_mag_kh29l
{
	ammo				= "rhs_ammo_kh29T";
	displayname			= "$STR_RHS_KH29T_NAME";
	displaynameshort	= "TV";
	descriptionShort	= "TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
	mass				= 680;
	pylonWeapon			= "rhs_weap_kh29t_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "Х29Т"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_kh29D : rhs_mag_kh29l
{
	ammo				= "rhs_ammo_kh29D";
	displayname			= "$STR_RHS_KH29D_NAME";
	displaynameshort	= "IR";
	descriptionShort	= "IR-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
	pylonWeapon			= "rhs_weap_kh29d_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "Х29Д"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_kh29MP : rhs_mag_kh29l
{
	ammo				= "rhs_ammo_kh29MP";
	displayname			= "$STR_RHS_KH29MP_NAME";
	displaynameshort	= "AGM";
	descriptionShort	= "Active radar homing. Requires radar. Range: 1.5km-9km";
	pylonWeapon			= "rhs_weap_kh29mp_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "Х29МП"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};

class rhs_mag_kh29l_aku58_mig29 : rhs_mag_kh29l
{
	model 				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_kh29_aku58_mig;
	pylonWeapon			= "rhs_weap_kh29_mig29_Launcher";
	hardpoints[] 		= {"RHS_HP_KH29_AKU58_MIG29"};
};
class rhs_mag_kh29ML_aku58_mig29 : rhs_mag_kh29l_aku58_mig29
{
	ammo				= "rhs_ammo_kh29ML";
	displayname			= "$STR_RHS_KH29ML_NAME";
	displaynameshort	= "LG";
	descriptionShort	= "Semi-active laser seeker. Range: 1.5km-10km";
	pylonWeapon			= "rhs_weap_kh29ml_mig29_Launcher";
};
class rhs_mag_kh29T_aku58_mig29 : rhs_mag_kh29l_aku58_mig29
{
	ammo				= "rhs_ammo_kh29T";
	displayname			= "$STR_RHS_KH29T_NAME";
	displaynameshort	= "TV";
	descriptionShort	= "TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
	mass				= 680;
	pylonWeapon			= "rhs_weap_kh29t_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "Х29Т"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_kh29MP_aku58_mig29 : rhs_mag_kh29l_aku58_mig29
{
	ammo				= "rhs_ammo_kh29MP";
	displayname			= "$STR_RHS_KH29MP_NAME";
	displaynameshort	= "AGM";
	pylonWeapon			= "rhs_weap_kh29mp_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "Х29МП"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};

// Kh-38M
class rhs_mag_Kh38mle: VehicleMagazine
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m_ext;
	ammo				= "rhs_ammo_Kh38MLE_ext";
	displayname			= "$STR_RHS_KH38MLE_NAME";
	displaynameshort	= "LG";
	descriptionShort	= "Laser guided. Range: 1km-8km.";
	namesound			= "missiles";
	count				= 1;
	initspeed			= 0;
	mass				= 520;
	hardpoints[] 		= {"RHS_HP_Kh38"};
	pylonWeapon			= "rhs_weap_kh38mle_Launcher";
	class mfdElements
	{
		#define MFD_PYLON_NAME "Х38"
		#include "MFD\cfgHUD_RusName.hpp"
		#include "MFD\cfgHUD_RusCircle.hpp"
		#undef MFD_PYLON_NAME
	};
};
class rhs_mag_Kh38mle_int: rhs_mag_Kh38mle
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m;
	ammo				= "rhs_ammo_Kh38MLE";
	hardpoints[] 		= {"RHS_HP_Kh38_INT"};
	ejectSpeed[]		= {1,0,0};
	initSpeed			= 0;
	initSpeedY			= -25;
	initSpeedZ			= 0;
};
class rhs_mag_Kh38mae: rhs_mag_Kh38mle
{
	ammo				= "rhs_ammo_Kh38mae_ext";
	displayname			= "$STR_RHS_KH38MAE_NAME";
	displaynameshort	= "ARH";
	descriptionShort	= "Active radar homing. Range: 1km-10km.";
	pylonWeapon			= "rhs_weap_kh38mae_Launcher";
};
class rhs_mag_Kh38mae_int: rhs_mag_Kh38mae
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m;
	ammo				= "rhs_ammo_Kh38mae";
	hardpoints[] 		= {"RHS_HP_Kh38_INT"};
	ejectSpeed[]		= {1,0,0};
	initSpeed			= 0;
	initSpeedY			= -25;
	initSpeedZ			= 0;
};
class rhs_mag_Kh38mte: rhs_mag_Kh38mle
{
	ammo				= "rhs_ammo_Kh38MTE_ext";
	displayname			= "$STR_RHS_KH38MTE_NAME";
	displaynameshort	= "IR";
	descriptionShort	= "IR guided. Range: 1km-10km.";
	pylonWeapon			= "rhs_weap_kh38mte_Launcher";
};
class rhs_mag_Kh38mte_int: rhs_mag_Kh38mte
{
	model				= \rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m;
	ammo				= "rhs_ammo_Kh38MTE";
	hardpoints[] 		= {"RHS_HP_Kh38_INT"};
	ejectSpeed[]		= {1,0,0};
	initSpeed			= 0;
	initSpeedY			= -25;
	initSpeedZ			= 0;
};

class rhs_mag_kh55sm : VehicleMagazine
{
	model				= "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh55sm";
	ammo				= "rhs_ammo_kh55sm";
	count				= 1;
	displayname			= "$STR_RHS_MAG_KH55SM_CAMO";
	displaynameshort	= "Kh-55SM";
	descriptionShort	= "Tactical nuke";
	initspeed			= 0;
	namesound			= "missiles";
	mass				= 1700;
	pylonWeapon			= "rhs_weap_kh55sm_Dummy_Launcher";
	hardpoints[] 		= {"RHS_HP_KH55SM_INT","RHS_HP_TU95MS6_INT"};
};
class rhs_mag_kh55sm_6 : rhs_mag_kh55sm
{
	count			= 6;
	hardpoints[]	= {};
};

class rhs_mag_kh55sm_nocamo : rhs_mag_kh55sm
{
	displayname	= "$STR_RHS_MAG_KH55SM";
	ammo		= "rhs_ammo_kh55sm_nocamo";
};
class rhs_mag_kh55sm_nocamo_6 : rhs_mag_kh55sm_nocamo
{
	count			= 6;
	hardpoints[]	= {};
};
class rhs_mag_kh55sh : rhs_mag_kh55sm
{
	displayname			= "Kh-55Sh HE (camo)";
	displaynameshort	= "$STR_RHS_MAG_KH55SH_CAMO";
	descriptionShort	= "High explosive";
	ammo				= "rhs_ammo_kh55sh";
};
class rhs_mag_kh55sh_6 : rhs_mag_kh55sh
{
	count			= 6;
	hardpoints[]	= {};
};
class rhs_mag_kh55sh_nocamo : rhs_mag_kh55sh
{
	displayname	= "$STR_RHS_MAG_KH55SH";
	ammo		= "rhs_ammo_kh55sh_nocamo";
};
class rhs_mag_kh55sh_nocamo_6 : rhs_mag_kh55sh_nocamo
{
	count			= 6;
	hardpoints[]	= {};
};


class rhs_mag_9m127 : VehicleMagazine
{
	ammo				= "rhs_ammo_9m127m";
	displayname			= "$STR_RHS_MAG_9M127M";
	displaynameshort	= "$STR_RHS_MAG_9M127M";
	namesound			= "missiles";
	count				= 6;
	initspeed			= 0;
	weight				= __EVAL(45*6);
	mass				= __EVAL(45*6);
};
class rhs_mag_9m127m : rhs_mag_9m127
{
	ammo				= "rhs_ammo_9m127m";
};
class rhs_mag_apu6_9m127m_ka52 : rhs_mag_9m127m
{
	model				= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m127_6x;
	pylonWeapon			= "rhs_weap_9k121_Launcher";
	hardpoints[] 		= {"RHS_HP_APU6_9m127_KA52"};
};
