	class RocketPods;
	class MissileLauncher;
	class missiles_DAR;

	class rhsusf_weap_DummyLauncher : MissileLauncher
	{
		showToPlayer = 0;
		magazines[] =
		{
			"rhs_mag_ANALQ131",
			"rhs_mag_fueltank_UH60",
			"rhs_mag_fueltank_UH60MEV"
		};
	};

	class rhs_weap_SidewinderLauncher : MissileLauncher
	{
		scope				= 2;
		displayName			= "AIM-9X";
		displayNameMagazine	= "AIM-9X";
		shortNameMagazine	= "AIM-9X";
		minRange			= 300;
		minRangeProbab		= 0.25;
		midRange			= 2500;
		midRangeProbab		= 0.9;
		maxRange			= 9000;
		maxRangeProbab		= 0.3;
		sounds[]			= {StandardSound};
		holdsterAnimValue	= 1;
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
			soundBegin[]={"begin1",1};
		};
		lockingTargetSound[]	= { "\A3\Sounds_F\weapons\Rockets\locked_1", 1.316228, 1 };
		lockedTargetSound[]		= { "\A3\Sounds_F\weapons\Rockets\locked_3", 1.316228, 2.5 };
		weaponSoundEffect	="DefaultRifle";
		reloadTime			=0.1;
		magazineReloadTime	=30;
		magazines[]=
		{
			"rhs_mag_Sidewinder",
			"rhs_mag_Sidewinder_2",
			"rhs_mag_Sidewinder_int",
			"rhs_mag_Sidewinder_heli",
			"rhs_mag_Sidewinder_heli_2"
		};
		cursorSize				= 0;
		cursor					= "missile";
		cursorAim				= "EmptyCursor";
		aiRateOfFire			= 5;
		aiRateOfFireDistance	= 2000;
		canLock					= 2;
		weaponLockDelay			= 3;
		weaponLockSystem		= CM_Lock_IR;
	};
	class rhs_weap_AIM9M : rhs_weap_SidewinderLauncher
	{
		displayName			= "AIM-9M";
		displayNameMagazine	= "AIM-9M";
		shortNameMagazine	= "AIM-9M";
		magazines[]=
		{
			"rhs_mag_Sidewinder_heli",
			"rhs_mag_Sidewinder_heli_2",
			"rhs_mag_aim9m",
			"rhs_mag_aim9m_2",
			"rhs_mag_aim9m_int"
		};
	};

	class rhs_weap_AIM120 : rhs_weap_SidewinderLauncher
	{
		displayName			= "AIM-120";
		displayNameMagazine	= "AIM-120";
		shortNameMagazine	= "AIM-120";
		magazineReloadTime	= 0.1;
		weaponLockSystem	= CM_Lock_Radar;
		minRange			= 2000;
		minRangeProbab		= 0.25;
		midRange			= 6500;
		midRangeProbab		= 0.9;
		maxRange			= 22000;
		maxRangeProbab		= 0.3;
		magazines[]=
		{
			"rhs_mag_aim120"
		};

	};
	class rhs_weap_AIM120D : rhs_weap_AIM120
	{
		displayName			= "AIM-120D";
		displayNameMagazine	= "AIM-120D";
		shortNameMagazine	= "AIM-120D";
		magazineReloadTime	= 0.1;
		maxRange			= 28000;
		magazines[]=
		{
			"rhs_mag_aim120d",
			"rhs_mag_aim120d_int",
			"rhs_mag_aim120d_2_F22_l",
			"rhs_mag_aim120d_2_F22_r"
		};

	};

	class rhs_weap_FFARLauncher: RocketPods
	{
		magazines[]=
		{
			"rhs_mag_M151_19",
			"rhs_mag_M151_19_green",
			"rhs_mag_M151_7",
			"rhs_mag_M151_7_green",
			"rhs_mag_M151_7_USAF_LAU131",
			"rhs_mag_M151_21_USAF_LAU131_3",
			"rhs_mag_FFAR_7_USAF",
			"rhs_mag_FFAR_21_USAF_LAU68_3",
			"rhs_mag_FFAR_19_USAF",
			"rhs_mag_FFAR_57_USAF_LAU61_3"
		};
		displayName="Hydra (M151 HE)";
		modes[]=
		{
			"Far_AI",
			"Single",
			"Two",
			"Four",
			"Eight",
			"Twelve",
			"TwentyFour",
			"Burst"
		};
		cursor		= "rocket";
		cursorAim	= "EmptyCursor";
		cursorSize	= 0;
		class Far_AI: RocketPods
		{
			displayName			= "Hydra";

			burst				= 1;
			reloadTime			= 0.08;
			autoFire			= 0;
			showToPlayer		= 0;
			soundBurst			= 0;
			dispersion			= 0.011;

			minRange			= 150;
			minRangeProbab		= 0.6;
			midRange			= 600;
			midRangeProbab		= 0.9;
			maxRange			= 2500;
			maxRangeProbab		= 0.12;

			sounds[]			= {StandardSound};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"\rhsusf\addons\rhsusf_a2port_air\data\Sounds\RocketLauncher_Shot21",3.2,1,1100};
				soundBegin[]={"begin1",1};
			};
		};
		class Burst: RocketPods
		{
			displayName			= "ALL";

			burst				= 1;
			salvo				= 2;
			reloadTime			= 0.08;
			soundContinuous		= 0;
			autoFire			= 1;
			aiDispersionCoefX	= 1.5;
			aiDispersionCoefY	= 1;
			dispersion			= 0.012;
			textureType 		= "fullAuto";

			minRange			= 1;
			minRangeProbab		= 0.001;
			midRange			= 2;
			midRangeProbab		= 0.001;
			maxRange			= 3;
			maxRangeProbab		= 0.001;

			sounds[] = {StandardSound};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"\rhsusf\addons\rhsusf_a2port_air\data\Sounds\RocketLauncher_Shot21",3.2,1,1100};
				soundBegin[]={"begin1",1};
			};
			soundBurst = 0;
		};
		class Single: Burst
		{
			displayName	= "1";
			autoFire	= 0;
			salvo		= 1;
			textureType	= "semi";
		};
		class Two: Single
		{
			displayName	= "2";
			salvo		= 2;
			burst		= 1;
		};
		class Four: Single
		{
			displayName	= "4";
			salvo		= 2;
			burst		= 2;
		};
		class Eight: Four
		{
			displayName	= "8";
			burst		= 8;
		};
		class Twelve: Four
		{
			displayName	= "12";
			burst		= 12;
		};
		class TwentyFour: Four
		{
			displayName	= "24";
			burst		= 24;
		};
	};
	class rhs_weap_FFARLauncher_M229: rhs_weap_FFARLauncher
	{
		displayName="Hydra (M229 HEPD)";
		magazines[]=
		{
			"rhs_mag_M229_19",
			"rhs_mag_M229_19_green",
			"rhs_mag_M229_7",
			"rhs_mag_M229_7_green"
		};
	};
	class rhs_weap_FFARLauncher_M257: rhs_weap_FFARLauncher
	{
		displayName="Hydra (M257 ILLUM)";
		magazines[]=
		{
			"rhs_mag_M257_7",
			"rhs_mag_M257_7_green",
			"rhs_mag_M257_7_USAF_LAU131"
		};
		modes[]=
		{
			"Far_AI",
			"Single"
		};
		class Far_AI: Far_AI
		{
			minRange			= 3000;
			minRangeProbab		= 0.6;
			midRange			= 4000;
			midRangeProbab		= 0.9;
			maxRange			= 6000;
			maxRangeProbab		= 0.6;
		};
	};

	class Missile_AGM_02_Plane_CAS_01_F;

	class rhs_weap_HellfireLauncher: Missile_AGM_02_Plane_CAS_01_F
	{
		scope			= 2;
		autoFire		= 0;
		displayName		= "AGM-114L Hellfire II";
		cursorSize		= 0;
		cursor			= "missile";
		cursorAim		= "EmptyCursor";

		// It takes approximately 5 seconds to reach 1km
		aiRateOfFire			= 5;
		aiRateOfFireDistance	= 1000;
		maxrange				= 8000;
		maxrangeprobab			= 0.6;
		midrange				= 2000;
		midrangeprobab			= 0.9;
		minrange				= 250;
		minrangeprobab			= 0.6;

		nameSound="MissileLauncher";
		reloadTime=1;
		magazines[]=
		{
			"rhs_mag_AGM114L_4",
			"rhs_mag_AGM114L_2",
			"rhs_mag_AGM114L"
		};
		canLock=2;
		weaponLockDelay=3;

		modes[]		= {TopDown,LoalDistance};
		class TopDown: Mode_SemiAuto
		{
			textureType = "topDown";
			displayName = "LOBL";

			aiRateOfFire			= 5;
			aiRateOfFireDistance	= 1000;

			maxrange				= 8000;
			maxrangeprobab			= 0.6;
			midrange				= 2000;
			midrangeprobab			= 0.9;
			minrange				= 250;
			minrangeprobab			= 0.6;
		};
		class LoalDistance: TopDown
		{
			displayName = "LOAL-DIR";
		};
		class Cruise: TopDown
		{
			displayName = "LOAL-HI";
		};
	};
	class rhs_weap_AGM114L_Launcher: rhs_weap_HellfireLauncher
	{
		displayName="AGM-114L Hellfire II";
		magazines[]=
		{
			"rhs_mag_AGM114L_4",
			"rhs_mag_AGM114L_2",
			"rhs_mag_AGM114L",

			"rhs_mag_AGM114L_2_plane",
			"rhs_mag_AGM114L_plane"
		};
	};
	class rhs_weap_AGM114K_base_Launcher: rhs_weap_HellfireLauncher
	{
		displayName="AGM-114K Hellfire II";
		magazines[]=
		{
			"rhs_mag_agm114K_4",
			"rhs_mag_agm114K_2",
			"rhs_mag_agm114K",

			"rhs_mag_AGM114K_2_plane",
			"rhs_mag_AGM114K_plane"
		};
		class EventHandlers
		{
			fired = "_this call rhs_fnc_LOALGuide";
		};
		canLock = 1;
		aiRateOfFire			= 8;
		aiRateOfFireDistance	= 500;
		class TopDown: TopDown
		{
			aiRateOfFire			= 8;
			aiRateOfFireDistance	= 500;
		};
	};
	class rhs_weap_AGM114K_Launcher: rhs_weap_AGM114K_base_Launcher
	{
		muzzles[] = {"this","LOAL_LO","LOAL_HI"};
		class LOAL_LO: rhs_weap_AGM114K_base_Launcher
		{
			modes[]		= {LoalDistance};
			class LoalDistance: TopDown
			{
				displayName = "LOAL-LO";
			};
			class EventHandlers
			{
				fired = "_this call rhs_fnc_LOALGuide";
			};
		};
		class LOAL_HI: rhs_weap_AGM114K_base_Launcher
		{
			modes[]		= {LoalDistance};
			class LoalDistance: TopDown
			{
				displayName = "LOAL-HI";
			};
			class EventHandlers
			{
				fired = "_this call rhs_fnc_LOALGuide";
			};
		};
	};
	class rhs_weap_AGM114M_base_Launcher: rhs_weap_HellfireLauncher
	{
		displayName="AGM-114M Hellfire II";
		magazines[]=
		{
			"rhs_mag_agm114M_4",
			"rhs_mag_agm114M_2",
			"rhs_mag_agm114M",

			"rhs_mag_AGM114M_2_plane",
			"rhs_mag_AGM114M_plane"
		};
	};
	class rhs_weap_AGM114M_Launcher: rhs_weap_AGM114M_base_Launcher
	{
		muzzles[] = {"this","LOAL_LO","LOAL_HI"};
		class LOAL_LO: rhs_weap_AGM114K_base_Launcher
		{
			modes[]		= {LoalDistance};
			class LoalDistance: TopDown
			{
				displayName = "LOAL-LO";
			};
			class EventHandlers
			{
				fired = "_this call rhs_fnc_LOALGuide";
			};
		};
		class LOAL_HI: rhs_weap_AGM114K_base_Launcher
		{
			modes[]		= {LoalDistance};
			class LoalDistance: TopDown
			{
				displayName = "LOAL-HI";
			};
			class EventHandlers
			{
				fired = "_this call rhs_fnc_LOALGuide";
			};
		};
	};
	class RHS_weap_AGM114N_base_Launcher: rhs_weap_HellfireLauncher
	{
		displayName="AGM-114N Hellfire II";
		magazines[]=
		{
			"rhs_mag_agm114N_4",
			"rhs_mag_agm114N_2",
			"rhs_mag_agm114N",

			"rhs_mag_AGM114N_2_plane",
			"rhs_mag_AGM114N_plane"
		};

	};
	class RHS_weap_AGM114N_Launcher: RHS_weap_AGM114N_base_Launcher
	{
		muzzles[] = {"this","LOAL_LO","LOAL_HI"};
		class LOAL_LO: rhs_weap_AGM114K_base_Launcher
		{
			modes[]		= {LoalDistance};
			class LoalDistance: TopDown
			{
				displayName = "LOAL-LO";
			};
			class EventHandlers
			{
				fired = "_this call rhs_fnc_LOALGuide";
			};
		};
		class LOAL_HI: rhs_weap_AGM114K_base_Launcher
		{
			modes[]		= {LoalDistance};
			class LoalDistance: TopDown
			{
				displayName = "LOAL-HI";
			};
			class EventHandlers
			{
				fired = "_this call rhs_fnc_LOALGuide";
			};
		};
	};

	class rhs_weap_DAGR_Launcher: rhs_weap_HellfireLauncher
	{
		scope=2;
		autoFire=0;
		CanLock = 2;
		displayName="DAGR";
		weight = 40;
		nameSound="MissileLauncher";
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.31622776,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		magazines[] =
		{
			"rhs_mag_DAGR_4",
			"rhs_mag_DAGR_8",
			"rhs_mag_DAGR_16",

			"rhs_mag_DAGR_4_plane",
			"rhs_mag_DAGR_8_plane",
		};
		weaponLockDelay=3;
		cursorAim="EmptyCursor";
		cursor="EmptyCursor";
		showAimCursorInternal = false;
		class Direct: TopDown
		{
			textureType="semi";
			displayName = "LOBL";

			aiRateOfFire			=5;
			aiRateOfFireDistance	=4000;

			minRange				=600;
			minRangeProbab			=0.6;
			midRange				=2000;
			midRangeProbab			=0.9;
			maxRange				=4000;
			maxRangeProbab			=0.1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_melb\Sound\M260\M260_1",2.6,1,1800};
				begin2[] = {"rhsusf\addons\rhsusf_melb\Sound\M260\M260_2",2.6,1,1800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class LoalDistance: TopDown
		{
			displayName = "LOAL-DIR";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_melb\Sound\M260\M260_1",2.6,1,1800};
				begin2[] = {"rhsusf\addons\rhsusf_melb\Sound\M260\M260_2",2.6,1,1800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		modes[]= {"Direct","LoalDistance"};
	};

	class rhs_weap_agm65: rhs_weap_HellfireLauncher
	{
		displayName="AGM-65 Maverick";
		displayNameMagazine="AGM-65 Maverick";
		shortNameMagazine="AGM-65";
		missileLockCone = 65;
		magazines[]=
		{
			"rhs_mag_agm65",
			"rhs_mag_agm65b_x3"
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		nameSound="MissileLauncher";
		weaponSoundEffect="DefaultRifle";
		modes[]= {"this"};

		weaponLockDelay=3;
		textureType="semi";
		minRange=300;
		minRangeProbab=0.25;
		midRange=2500;
		midRangeProbab=0.9;
		maxRange=9000;
		maxRangeProbab=0.01;
	};
	class rhs_weap_agm65b: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65b",
			"rhs_mag_agm65b_3"
		};
	};
	class rhs_weap_agm65d: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65d",
			"rhs_mag_agm65d_3"
		};
	};
	class rhs_weap_agm65e: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65e",
			"rhs_mag_agm65e_3"
		};
	};
	class rhs_weap_agm65f: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65f",
			"rhs_mag_agm65f_3"
		};
	};
	class rhs_weap_agm65h: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65h",
			"rhs_mag_agm65h_3"
		};
	};

	class rhs_weap_TOW_Launcher;

	class rhs_weap_stinger_Launcher: rhs_weap_TOW_Launcher
	{
		displayName			= "FIM-92F Stinger";
		reloadTime			= 4;
		magazineReloadTime	= 5;
		canLock				= 2;

		aiRateOfFire			= 5;
		aiRateOfFireDistance	= 1500;

		minRange			= 50;
		minRangeProbab		= 0.5;
		midRange			= 1450;
		midRangeProbab		= 1;
		maxRange			= 4050;
		maxRangeProbab		= 0.6;
		weaponLockSystem	= CM_Lock_IR;

		magazines[]=
		{
			"rhs_mag_4Rnd_stinger",
			"rhs_mag_2Rnd_stinger"
		};

	};

	class rhs_weap_stinger_Launcher_static: rhs_weap_stinger_Launcher
	{
		autoReload = 1;
		magazineReloadTime=20;
	};

	class rhs_weap_ATAS_launcher: rhs_weap_TOW_Launcher
	{
		displayName			= "ATAS";
		reloadTime			= 4;
		magazineReloadTime	= 0;
		canLock				= 2;
		autoReload 			= 1;

		aiRateOfFire			= 5;
		aiRateOfFireDistance	= 1500;

		minRange			= 50;
		minRangeProbab		= 0.5;
		midRange			= 1450;
		midRangeProbab		= 1;
		maxRange			= 4050;
		maxRangeProbab		= 0.6;
		weaponLockSystem	= CM_Lock_IR;

		magazines[]=
		{
			"rhs_mag_ATAS_2",
			"rhs_mag_ATAS_AH64_2"
		};
	};

	class Bomb_04_Plane_CAS_01_F;
	class Mk82BombLauncher;

	class rhs_weap_gbu12: Bomb_04_Plane_CAS_01_F
	{
		displayName	= "GBU-12";
		cursorSize	= 0;
		cursor		= "bomb";
		cursorAim	= "EmptyCursor";

		minRange		= 150;
		minRangeProbab	= 0.5;
		midRange		= 550;
		midRangeProbab	= 1;
		maxRange		= 1550;
		maxRangeProbab	= 0.6;

		magazines[]=
		{
			"rhs_mag_gbu12"
		};
	};
	class rhs_weap_gbu32: Bomb_04_Plane_CAS_01_F
	{
		displayName	= "GBU-32";
		cursorSize	= 0;
		cursor		= "bomb";
		cursorAim	= "EmptyCursor";

		minRange		= 150;
		minRangeProbab	= 0.5;
		midRange		= 550;
		midRangeProbab	= 1;
		maxRange		= 1550;
		maxRangeProbab	= 0.6;

		magazines[]=
		{
			"rhs_mag_gbu32"
		};
	};
	class rhs_weap_mk82: Mk82BombLauncher
	{
		displayName	= "Mk 82";
		cursorSize	= 0;
		cursor		= "bomb";
		cursorAim	= "EmptyCursor";

		airateoffire			= 1;
		airateoffiredistance	= 500;
		minRange		= 50;
		minRangeProbab	= 0.5;
		midRange		= 250;
		midRangeProbab	= 1;
		maxRange		= 550;
		maxRangeProbab	= 0.6;

		magazines[]=
		{
			"rhs_mag_mk82",
			"rhs_mag_mk82_3"
		};
	};

	class rhs_weap_cbu100: rhs_weap_mk82
	{
		displayName	= "CBU-100";
		magazines[]=
		{
			"rhs_mag_cbu100",
			"rhs_mag_cbu100_3"
		};
	};
	class rhs_weap_cbu87: rhs_weap_mk82
	{
		displayName	= "CBU-87";
		magazines[]=
		{
			"rhs_mag_cbu87",
			"rhs_mag_cbu87_3"
		};
	};
	class rhs_weap_cbu89: rhs_weap_cbu87
	{
		displayName	= "CBU-89";
		magazines[]=
		{
			"rhs_mag_cbu89",
			"rhs_mag_cbu89_3"
		};
	};
/*
	class rhs_weap_cbu107: rhs_weap_mk82
	{
		displayName	= "CBU-107";
		magazines[]=
		{
			"rhs_mag_cbu107",
			"rhs_mag_cbu107_3"
		};
	};
*/