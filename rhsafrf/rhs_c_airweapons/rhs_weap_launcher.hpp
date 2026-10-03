
class RocketPods;
class rockets_Skyfire: RocketPods
{
	class Far_AI;
	class Medium_AI;
	class Close_AI;
	class Burst;
};
class rhs_weap_s5 : rockets_Skyfire
{
	aiDispersionCoefY = 1.0;
	aiDispersionCoefX = 1.5;

	cursor		= "missile";
	cursoraim	= "EmptyCursor";
	cursorsize	= 0;
	displayName = WEAP_STR(S5);
	proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\proxy\ub16";
	class gunClouds{};
	fireLightAmbient[]	= {0,0,0};
	fireLightDiffuse[]	= {0.93,0.63,0.25};
	fireLightDuration	= 0.051;
	fireLightIntensity	= 0.2;
	canLock				= 1;
	weaponLockDelay		= 8;
	showToPlayer		= 1;

	magazines[] =
	{
		rhs_mag_s5_192,
		rhs_mag_s5_128,
		rhs_mag_s5_64,
		rhs_mag_s5_32,
		rhs_mag_s5_16,
		rhs_mag_ub16_s5,
		rhs_mag_ub32_s5,
		rhs_mag_ub16_ka52_s5,
		rhs_mag_ub32_ka52_s5,
		rhs_mag_ub16_bd3_umk2a_s5,
		rhs_mag_ub32_bd3_umk2a_s5
	};

	modes[] = {"AI_Burst","Burst"};
	class Far_AI: Far_AI
	{
		displayName = WEAP_STR(S5);
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
	};
	class Medium_AI: Medium_AI
	{
		displayName = WEAP_STR(S5);
		aiRateOfFire = 3;
		aiRateOfFireDistance = 600;
	};
	class Close_AI: Close_AI
	{
		displayName = WEAP_STR(S5);
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
	};
	class AI_Burst: RocketPods
	{
		showToPlayer=0;
		displayName = WEAP_STR(S5);
		maxRange = 1500; maxRangeProbab = 0.05;
		dispersion = 0.038;
	};
	class Burst: Burst
	{
		dispersion = 0.038;
		showToPlayer=1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 300;
		displayName = WEAP_STR(S5);
		burst = 1;
		salvo = 2;
		minRange = 0; minRangeProbab = 0.1;
		midRange = 0; midRangeProbab = 0.25;
		maxRange = 0; maxRangeProbab = 0.05;
	};
};
class rhs_weap_s5_ub32 : rhs_weap_s5
{
	magazines[] =
	{
		rhs_mag_s5_16
	};

};
class rhs_weap_s5ko : rhs_weap_s5
{
	magazines[] =
	{
		rhs_mag_s5_ko_192,
		rhs_mag_s5_ko_128,
		rhs_mag_s5_ko_64,
		rhs_mag_s5_ko_32,
		rhs_mag_s5_ko_16,
		rhs_mag_ub16_s5ko,
		rhs_mag_ub32_s5ko,
		rhs_mag_ub16_ka52_s5ko,
		rhs_mag_ub32_ka52_s5ko,
		rhs_mag_ub16_bd3_umk2a_s5ko,
		rhs_mag_ub32_bd3_umk2a_s5ko
	};
};
class rhs_weap_s5k1 : rhs_weap_s5
{
	magazines[] =
	{
		rhs_mag_s5_k1_192,
		rhs_mag_s5_k1_128,
		rhs_mag_s5_k1_64,
		rhs_mag_s5_k1_32,
		rhs_mag_s5_k1_16,
		rhs_mag_ub16_s5k1,
		rhs_mag_ub32_s5k1,
		rhs_mag_ub16_ka52_s5k1,
		rhs_mag_ub32_ka52_s5k1,
		rhs_mag_ub16_bd3_umk2a_s5k1,
		rhs_mag_ub32_bd3_umk2a_s5k1
	};
};
class rhs_weap_s5m1 : rhs_weap_s5
{
	magazines[] =
	{
		rhs_mag_s5_m1_192,
		rhs_mag_s5_m1_128,
		rhs_mag_s5_m1_64,
		rhs_mag_s5_m1_32,
		rhs_mag_s5_m1_16,
		rhs_mag_ub16_s5m1,
		rhs_mag_ub32_s5m1,
		rhs_mag_ub16_ka52_s5m1,
		rhs_mag_ub32_ka52_s5m1,
		rhs_mag_ub16_bd3_umk2a_s5m1,
		rhs_mag_ub32_bd3_umk2a_s5m1
	};
};



class rhs_weap_s8 : rhs_weap_s5
{
	displayName = WEAP_STR(S8);
	magazines[] =
	{
		rhs_mag_s8_12,
		rhs_mag_s8_20,
		rhs_mag_s8_40,
		rhs_mag_s8_80,
		rhs_mag_s8_120,
		rhs_mag_b8m1_s8kom,
		rhs_mag_b8v20a_s8kom,
		rhs_mag_b8v20a_ka52_s8kom,
		rhs_mag_b8m1_bd3_umk2a_s8kom
	};
	class Far_AI: Far_AI
	{
		displayName = WEAP_STR(S8);
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		minRange = 500; minRangeProbab = 0.05;
		midRange = 600; midRangeProbab = 0.4;
		maxRange = 800; maxRangeProbab = 0.01;
	};
	class Medium_AI: Medium_AI
	{
		displayName = WEAP_STR(S8);
		aiRateOfFire = 3;
		aiRateOfFireDistance = 600;
		minRange = 300; minRangeProbab = 0.05;
		midRange = 400; midRangeProbab = 0.7;
		maxRange = 600; maxRangeProbab = 0.1;
	};
	class Close_AI: Close_AI
	{
		displayName = WEAP_STR(S8);
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 0; 	minRangeProbab = 0.05;
		midRange = 300; midRangeProbab = 0.7;
		maxRange = 400; maxRangeProbab = 0.1;
	};
	class AI_Burst: AI_Burst
	{
		dispersion = 0.032;
		displayName = WEAP_STR(S8);
	};
	class Burst: Burst
	{
		dispersion = 0.032;
		displayName = WEAP_STR(S8);
	};
};
class rhs_weap_s8df : rhs_weap_s8
{
	magazines[] =
	{
		rhs_mag_s8_df_20,
		rhs_mag_s8_df_40,
		rhs_mag_s8_df_80,
		rhs_mag_b8m1_s8df,
		rhs_mag_b8v20a_s8df,
		rhs_mag_b8v20a_ka52_s8df,
		rhs_mag_b8m1_bd3_umk2a_s8df
	};
};
class rhs_weap_s8t : rhs_weap_s8
{
	magazines[] =
	{
		rhs_mag_s8_t_20,
		rhs_mag_s8_t_40,
		rhs_mag_s8_t_80,
		rhs_mag_b8m1_s8t,
		rhs_mag_b8v20a_s8t,
		rhs_mag_b8v20a_ka52_s8t,
		rhs_mag_b8m1_bd3_umk2a_s8t
	};
};
class rhs_weap_s13 : rhs_weap_s8
{
	displayName = WEAP_STR(S13);
	magazines[] =
	{
		rhs_mag_s13b_10,
		rhs_mag_b13l_s13b,
		rhs_mag_b13l1_s13b,
		rhs_mag_b13l1_ka52_s13b,
		rhs_mag_b13l_bd3_umk2a_s13b
	};
	class AI_Burst: AI_Burst
	{
		reloadtime = 0.15;
		dispersion = 0.02;
		displayName = WEAP_STR(S13);
	};
	class Burst: Burst
	{
		reloadtime = 0.15;
		dispersion = 0.02;
		displayName = WEAP_STR(S13);
	};
};
class rhs_weap_s13d : rhs_weap_s13
{
	magazines[] =
	{
		rhs_mag_s13d_10,
		rhs_mag_b13l_s13d,
		rhs_mag_b13l1_s13d,
		rhs_mag_b13l1_ka52_s13d,
		rhs_mag_b13l_bd3_umk2a_s13d
	};
};
class rhs_weap_s13df : rhs_weap_s13
{
	magazines[] =
	{
		rhs_mag_s13df_10,
		rhs_mag_b13l_s13df,
		rhs_mag_b13l1_s13df,
		rhs_mag_b13l1_ka52_s13df,
		rhs_mag_b13l_bd3_umk2a_s13df
	};
};
class rhs_weap_s13of : rhs_weap_s13
{
	magazines[] =
	{
		rhs_mag_s13of_10,
		rhs_mag_b13l_s13of,
		rhs_mag_b13l1_s13of,
		rhs_mag_b13l1_ka52_s13of,
		rhs_mag_b13l_bd3_umk2a_s13of
	};
};
class rhs_weap_s13t : rhs_weap_s13
{
	magazines[] =
	{
		rhs_mag_s13t_10,
		rhs_mag_b13l_s13t,
		rhs_mag_b13l1_s13t,
		rhs_mag_b13l1_ka52_s13t,
		rhs_mag_b13l_bd3_umk2a_s13t
	};
};

class rhs_weap_s24: rhs_weap_s13
{
	displayName = WEAP_STR(S24);
	magazines[] =
	{
		rhs_mag_apu68m3_s24,
		rhs_mag_apu68_bd3_umk2a_s24
	};
	modes[] = {"AI_Burst","Burst","Single"};
	class AI_Burst: AI_Burst
	{
		dispersion = 0.02;
		displayName = WEAP_STR(S24);
	};
	class Burst: Burst
	{
		dispersion = 0.02;
		displayName = WEAP_STR(S24);
	};
	class Single: Burst
	{
		autofire = 0;
		displayName = WEAP_STR(S24);
		reloadTime = 0.08;
		showToPlayer=1;
		burst = 1;
		salvo = 1;
		minRange = 0; minRangeProbab = 0.1;
		midRange = 0; midRangeProbab = 0.25;
		maxRange = 0; maxRangeProbab = 0.05;
		textureType = "semi";
	};
};
class rhs_weap_s24b: rhs_weap_s24
{
	magazines[] =
	{
		rhs_mag_apu68m3_s24b,
		rhs_mag_apu68_bd3_umk2a_s24b
	};
};
class rhs_weap_s25: rhs_weap_s13
{
	displayName = WEAP_STR(S25O);
	magazines[] =
	{
		rhs_mag_o25l_s25o,
		rhs_mag_bd3_usk_a_o25l_s25o,
		rhs_mag_bd3_umk2a_o25l_s25o
	};
	modes[] = {"AI_Burst","Burst","Single"};
	class AI_Burst: AI_Burst
	{
		dispersion = 0.01;
		displayName = WEAP_STR(S25);
	};
	class Burst: Burst
	{
		dispersion = 0.01;
		displayName = WEAP_STR(S25);
	};
	class Single: Burst
	{
		autofire = 0;
		displayName = WEAP_STR(S25);
		reloadTime = 0.08;
		showToPlayer=1;
		burst = 1;
		salvo = 1;
		minRange = 0; minRangeProbab = 0.1;
		midRange = 0; midRangeProbab = 0.25;
		maxRange = 0; maxRangeProbab = 0.05;
		textureType = "semi";
	};
};
class rhs_weap_s25of: rhs_weap_s25
{
	displayName = WEAP_STR(S25OF);
	magazines[] =
	{
		rhs_mag_o25l_s25of,
		rhs_mag_bd3_usk_a_o25l_s25of,
		rhs_mag_bd3_umk2a_o25l_s25of
	};
};
class rhs_weap_s25l: rhs_weap_s25
{
	displayName = WEAP_STR(S25L);
	magazines[] =
	{
		rhs_mag_o25l_s25l,
		rhs_mag_bd3_usk_a_o25l_s25l,
		rhs_mag_bd3_umk2a_o25l_s25l
	};

	cursor				= "missile";
	canLock				= 2;
	weaponLockSystem	= CM_Lock_Laser;
	weaponLockDelay		= 0.5;
	cmImmunity			= 0.3;

	class EventHandlers
	{
		class RHS_KlenPS
		{
			fired = "_this call rhs_fnc_klenpsGuide";
		};
	};
};
class rhs_weap_s25ld: rhs_weap_s25
{
	displayName = WEAP_STR(S25LD);
	magazines[] =
	{
		rhs_mag_o25l_s25ld,
		rhs_mag_bd3_usk_a_o25l_s25ld,
		rhs_mag_bd3_umk2a_o25l_s25ld
	};
};

class Missile_AA_04_Plane_CAS_01_F;

class rhs_weap_r27r_Launcher: Missile_AA_04_Plane_CAS_01_F
{
	cursor					= "EmptyCursor";
	cursoraim				= "EmptyCursor";
	cursorsize				= 0;
	displayname				= "$STR_RHS_R27R_NAME";
	magazines[]=
	{
		rhs_mag_R27R,
		rhs_mag_R27R_APU470,
		rhs_mag_R27ER,
		rhs_mag_R27ER_APU470
	};

	airateoffire			= 5;
	airateoffiredistance	= 16000;
	maxrange				= 22000; 	maxrangeprobab = 0.45;
	midrange				= 8000; 	midrangeprobab = 0.8;
	minrange				= 2000; 	minrangeprobab = 0.4;

	reloadtime			= 1;
	canLock				= 2;
	weaponLockSystem	= CM_Lock_Radar;
	weaponlockdelay		= 2;
	lockingTargetSound[]	= { "\A3\Sounds_F\weapons\Rockets\locked_1", 1.316228, 1 };
	lockedTargetSound[]		= { "\A3\Sounds_F\weapons\Rockets\locked_3", 1.316228, 2.5 };
};
class rhs_weap_r27t_Launcher: rhs_weap_r27r_Launcher
{
	displayname				= "$STR_RHS_R27T_NAME";
	magazines[]=
	{
		rhs_mag_R27T,
		rhs_mag_R27T_APU470,
		rhs_mag_R27ET,
		rhs_mag_R27ET_APU470
	};

	airateoffire			= 5;
	airateoffiredistance	= 6000;
	maxrange				= 20000; 	maxrangeprobab = 0.05;
	midrange				= 6000; 	midrangeprobab = 0.8;
	minrange				= 300; 		minrangeprobab = 0.4;

	weaponLockSystem	= CM_Lock_IR;
	weaponlockdelay		= 3;
};

class rhs_weap_r60_Launcher: Missile_AA_04_Plane_CAS_01_F
{
	cursor					= "EmptyCursor";
	cursoraim				= "EmptyCursor";
	cursorsize				= 0;
	displayname				= "$STR_RHS_R60_NAME";
	canLock					= 2;
	magazines[]=
	{
		rhs_mag_R60,
		rhs_mag_R60_APU60,
		rhs_mag_R60M,
		rhs_mag_R60M_APU60
	};
	airateoffire			= 5;
	airateoffiredistance	= 7000;
	maxrange		= 7000;
	maxrangeprobab	= 0.05;
	midrange		= 4000;
	midrangeprobab	= 0.8;
	minrange		= 300;
	minrangeprobab	= 0.4;
	reloadtime		= 1;
	weaponlockdelay	= 3;
	lockingTargetSound[]	= { "\A3\Sounds_F\weapons\Rockets\locked_1", 1.316228, 1 };
	lockedTargetSound[]		= { "\A3\Sounds_F\weapons\Rockets\locked_3", 1.316228, 2.5 };
};

class rhs_weap_r73_Launcher: Missile_AA_04_Plane_CAS_01_F
{
	cursor					= "EmptyCursor";
	cursoraim				= "EmptyCursor";
	cursorsize				= 0;
	displayname				= "$STR_RHS_R73_NAME";
	canLock					= 2;
	magazines[]=
	{
		rhs_mag_R73,
		rhs_mag_R73_APU73
	};
	airateoffire			= 5;
	airateoffiredistance	= 10000;
	maxrange		= 10000; 	maxrangeprobab = 0.05;
	midrange		= 5000; 	midrangeprobab = 0.8;
	minrange		= 300; 		minrangeprobab = 0.4;
	reloadtime		= 1;
	weaponlockdelay	= 3;
	lockingTargetSound[]	= { "\A3\Sounds_F\weapons\Rockets\locked_1", 1.316228, 1 };
	lockedTargetSound[]		= { "\A3\Sounds_F\weapons\Rockets\locked_3", 1.316228, 2.5 };
};

class rhs_weap_r73m_Launcher: rhs_weap_r73_Launcher
{
	displayname			= "$STR_RHS_R73M_NAME";
	magazines[]=
	{
		rhs_mag_R73M,
		rhs_mag_R73M_APU73
	};
};

class rhs_weap_r74_Launcher: rhs_weap_r73_Launcher
{
	displayname			= "$STR_RHS_R74_NAME";
	magazines[]=
	{
		rhs_mag_R74,
		rhs_mag_R74_APU73
	};
};


class rhs_weap_r74m2_Launcher: rhs_weap_r73_Launcher
{
	displayname			= "$STR_RHS_R74M2_NAME";
	magazines[]=
	{
		rhs_mag_R74M2,
		rhs_mag_R74M2_int
	};
};

class rhs_weap_r77_Launcher: rhs_weap_r74_Launcher
{
	displayname="$STR_RHS_R77_NAME";
	magazines[]=
	{
		rhs_mag_R77,
		rhs_mag_R77_AKU170,
		rhs_mag_R77_AKU170_MIG29
	};

	weaponlockdelay = 2;
	airateoffire			= 5;
	airateoffiredistance	= 16000;
	maxrange				= 25000; 	maxrangeprobab = 0.45;
	midrange				= 12000; 	midrangeprobab = 0.8;
	minrange				= 900; 		minrangeprobab = 0.4;
};

class rhs_weap_r77m_Launcher: rhs_weap_r77_Launcher
{
	displayname			= "$STR_RHS_R77M_NAME";
	magazines[]=
	{
		rhs_mag_R77M,
		rhs_mag_R77M_AKU170,
		rhs_mag_R77M_AKU170_MIG29
	};

	weaponlockdelay = 2;
};

class Missile_AGM_02_Plane_CAS_01_F;
class rhs_weap_kh25_Launcher: Missile_AGM_02_Plane_CAS_01_F
{
	cursor		= "missile";
	cursoraim	= "EmptyCursor";
	cursorsize	= 0;
	displayname	= "$STR_RHS_KH25_NAME";
	magazines[] =
	{
		rhs_mag_kh25
	};
	airateoffire = 5;
	airateoffiredistance = 8000;
	maxrange = 7000; maxrangeprobab = 0.45;
	midrange = 5000; midrangeprobab = 0.9;
	minrange = 1000; minrangeprobab = 0.5;
	reloadtime = 1;

	canLock				= 2;
	weaponLockSystem	= CM_Lock_Laser;
	weaponLockDelay		= 0.5;
	cmImmunity			= 0.3;

	modes[] = {"this"};

	class EventHandlers
	{
		class RHS_KlenPS
		{
			fired = "_this call rhs_fnc_klenpsGuide";
		};
	};
};
class rhs_weap_kh25_mig29_Launcher: rhs_weap_kh25_Launcher
{
	magazines[] =
	{
		rhs_mag_kh25_apu68_mig29
	};
	class EventHandlers {};
};
class rhs_weap_kh25ml_Launcher: rhs_weap_kh25_Launcher
{
	displayname = "$STR_RHS_KH25ML_NAME";
	magazines[] =
	{
		rhs_mag_kh25ml
	};

	maxrange = 10000;	maxrangeprobab = 0.45;
	midrange = 5000; 	midrangeprobab = 0.9;
	minrange = 1000; 	minrangeprobab = 0.5;
};
class rhs_weap_kh25ml_mig29_Launcher: rhs_weap_kh25ml_Launcher
{
	magazines[] =
	{
		rhs_mag_kh25ml_apu68_mig29
	};
	class EventHandlers {};
};
class rhs_weap_kh25ma_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH25MA_NAME";
	magazines[] =
	{
		rhs_mag_kh25ma
	};
	weaponLockSystem	= CM_Lock_Radar;
	weaponLockDelay		= 1.5;
	class EventHandlers {};
};

class rhs_weap_kh25mt_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH25MT_NAME";
	magazines[] =
	{
		rhs_mag_kh25mt,
		rhs_mag_kh25mt_apu68_mig29
	};
	weaponLockSystem	= CM_Lock_TV;
	weaponLockDelay		= 1.0;
	class EventHandlers {};
};
class rhs_weap_kh25mtp_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH25MTP_NAME";
	magazines[] =
	{
		rhs_mag_kh25mtp,
		rhs_mag_kh25mtp_apu68_mig29
	};
	weaponLockSystem	= CM_Lock_IR;
	weaponLockDelay		= 3.0;
	class EventHandlers {};
};
class rhs_weap_kh25mp_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH25MP_NAME";
	magazines[] =
	{
		rhs_mag_kh25mp,
		rhs_mag_kh25mp_apu68_mig29
	};
	weaponLockSystem = 0;
	class EventHandlers {};
};

class rhs_weap_kh29_Launcher: rhs_weap_kh25_Launcher
{
	displayname = "$STR_RHS_KH29L_NAME";
	magazines[] =
	{
		rhs_mag_kh29l
	};
	airateoffire = 5;
	airateoffiredistance = 8000;
	maxrange = 10000; 	maxrangeprobab = 0.05;
	midrange = 5000; 	midrangeprobab = 0.9;
	minrange = 2000; 	minrangeprobab = 0.5;

	canLock=2;
};
class rhs_weap_kh29_mig29_Launcher: rhs_weap_kh29_Launcher
{
	magazines[] =
	{
		rhs_mag_kh29l_aku58_mig29
	};
	class EventHandlers {};
};
class rhs_weap_kh29ml_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH29ML_NAME";
	magazines[] =
	{
		rhs_mag_kh29ml
	};
};
class rhs_weap_kh29ml_mig29_Launcher: rhs_weap_kh29ml_Launcher
{
	magazines[] =
	{
		rhs_mag_kh29ml_aku58_mig29
	};
	class EventHandlers {};
};
class rhs_weap_kh29t_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH29T_NAME";
	magazines[] =
	{
		rhs_mag_kh29t,
		rhs_mag_kh29t_aku58_mig29
	};
	weaponLockSystem	= CM_Lock_Visual;
	weaponLockDelay		= 2.0;
	cmImmunity			= 0.5;
	class EventHandlers {};
};
class rhs_weap_kh29mp_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH29MP_NAME";
	magazines[] =
	{
		rhs_mag_kh29mp,
		rhs_mag_kh29mp_aku58_mig29
	};
	weaponLockSystem	= CM_Lock_Radar;
	weaponLockDelay		= 1.5;
	cmImmunity			= 0.3;
	class EventHandlers {};
};
class rhs_weap_kh29d_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH29D_NAME";
	magazines[] =
	{
		rhs_mag_kh29d
	};
	weaponLockSystem	= CM_Lock_IR;
	weaponLockDelay		= 3.0;
	cmImmunity			= 0.3;
	class EventHandlers {};
};

class rhs_weap_kh38mle_Launcher: rhs_weap_kh29_Launcher
{
	displayname = "$STR_RHS_KH38MLE_NAME";
	magazines[] =
	{
		rhs_mag_kh38mle,
		rhs_mag_kh38mle_int
	};
	airateoffire = 5;
	airateoffiredistance = 8000;
	maxrange = 10000; 	maxrangeprobab = 0.05;
	midrange = 5000; 	midrangeprobab = 0.9;
	minrange = 2000; 	minrangeprobab = 0.5;
	class EventHandlers {};
};
class rhs_weap_kh38mae_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH38MAE_NAME";
	magazines[] =
	{
		rhs_mag_Kh38mae,
		rhs_mag_Kh38mae_int
	};
	weaponLockSystem	= CM_Lock_Radar;
	weaponLockDelay		= 3.0;
	cmImmunity			= 0.3;
};
class rhs_weap_kh38mte_Launcher: rhs_weap_kh25ml_Launcher
{
	displayname = "$STR_RHS_KH38MTE_NAME";
	magazines[] =
	{
		rhs_mag_Kh38mte,
		rhs_mag_Kh38mte_int
	};
	weaponLockSystem	= CM_Lock_IR;
	weaponLockDelay		= 3.0;
	cmImmunity			= 0.3;
};

class rhs_weap_kh55sm_Launcher: rhs_weap_kh29_Launcher
{
	modes[] = {this};
	displayname = "$STR_RHS_MKU56_NAME";
	//displayname = "Kh-55SM";
	magazines[] = {
		"rhs_mag_kh55sm",
		"rhs_mag_kh55sm_6",
		"rhs_mag_kh55sm_nocamo",
		"rhs_mag_kh55sm_nocamo_6",
		"rhs_mag_kh55sh",
		"rhs_mag_kh55sh_6",
		"rhs_mag_kh55sh_nocamo",
		"rhs_mag_kh55sh_nocamo_6"
	};
	reloadtime=5;

	class Eventhandlers: Eventhandlers {
		class RHS_MissileDeploy {
			fired = "_this call rhs_fnc_tu95_missile_control";
		};
	};
};
class rhs_weap_kh55sm_dummy_Launcher: rhs_weap_kh55sm_Launcher
{
	showToPlayer = 0;
};

class rhs_weap_9k121_Launcher: rhs_weap_kh55sm_Launcher {
	airateoffire = 5;
	airateoffiredistance = 4000;
	displayname = "9K121M";
	magazines[] =
	{
		rhs_mag_apu6_9m127_ka52,
		rhs_mag_apu6_9m127m_ka52
	};
	canlock = 1; //in theory you should be able to lock on target on recuirt difficult level. seems it's broken but that's good, because AI is still able to lock & player use manual targeting/shkval
	reloadtime = 1.5;
	weaponlockdelay = 4;
	modes[]={"Single","Burst"};
	class Single: rhs_weap_kh29_Launcher
	{
		airateoffire = 5;
		airateoffiredistance = 4000;
		maxrange = 11500; 	maxrangeprobab = 0.65;
		midrange = 4000; 	midrangeprobab = 0.95;
		minrange = 50; 		minrangeprobab = 0.6;
		reloadtime = 0.05;
	};
	class Burst: Single
	{
		reloadtime = 0.05;
		multiplier = 1;
		burst = 2;
		textureType ="burst";
	};
	holdsterAnimValue = 1;
	class Eventhandlers
	{
	};
};
