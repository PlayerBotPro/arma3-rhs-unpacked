

		soundEngineOnInt[] = {"rhsusf\addons\rhsusf_m1a1\sounds\m1start", db+3, 1.0, 200};
		//soundEngineOnInt[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_start", db+3, 1.0, 200};
		soundEngineOffInt[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_stop", db+3, 1.0, 200}; // !MISSING FILE

		soundEngineOnExt[] = {"rhsusf\addons\rhsusf_m1a1\sounds\m1start", db+10, 1.0, 200};
		//soundEngineOnExt[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_ext_start", db+10, 1.0, 200};
		soundEngineOffExt[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_ext_stop", db+10, 1.0, 200}; // !MISSING FILE
		class Sounds
		{
			// warp	factor
			#define	FACTOR(val,from,to)	(val factor[from,to])
			// RANGE(val,	begin, band, end,	band)
			#define	RANGE(val,from,band0,to,band1) FACTOR2(val,from,(from+band0),to,(to+band1))
			// FACTOR2(val,	0, 400,	1200,	2000)
			#define	FACTOR2(val,from0,to0,from1,to1) (FACTOR(val,from0,to0)	*	FACTOR(val,to1,from1))

			// redRpm
			#define	MAX_RPM	3000
			// scaled	rpm	to 0 - 1
			#define	RPM(rpm) (rpm/MAX_RPM)

			// specialized FACTOR	for	rpm
			#define	FACTOR_RPM(from,to)	FACTOR(RPM(rpm),RPM(from),RPM(to))
			// specialized peak	for	rpm
			#define	FACTOR2_RPM(from0,to0,from1,to1) (FACTOR_RPM(from0,to0)	*	FACTOR_RPM(to1,from1))
			// specialized peak, different definition, version for rpm
			#define	RANGE_RPM(from,band0,to,band1) FACTOR2_RPM(from,(from+band0),to,(to+band1))


			#define HZ_IDLE FACTOR_RPM(850,1200)
			#define HZ_RPM1 FACTOR_RPM(1000,1400)
			#define HZ_RPM2	FACTOR_RPM(1300,1500)
			#define HZ_RPM3 FACTOR_RPM(1400,1900)
			#define HZ_RPM4 FACTOR_RPM(2300,2700)
			#define HZ_RPM5 FACTOR_RPM(2600,3000)
			#define HZ_RPM6 FACTOR_RPM(2900,3100)

			#define VOLUME_IDLE FACTOR2_RPM(750,990,1000,1100)
			#define VOLUME_RPM1 FACTOR2_RPM(970,1200,1300,1450)
			#define VOLUME_RPM2 FACTOR2_RPM(1350,1550,1750,2000)
			#define VOLUME_RPM3 FACTOR2_RPM(1750,2050,2300,2450)
			#define VOLUME_RPM4 FACTOR2_RPM(2350,2550,2600,2770)
			#define VOLUME_RPM5 FACTOR2_RPM(2550,2800,2950,3050)
			#define VOLUME_RPM6 FACTOR_RPM(2850,3100)



			class	Idle_ext
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_ext_rpm1", db+9,	1, 150};
				frequency	=	0.9	+	HZ_IDLE*0.2;
				volume = engineOn*camPos*VOLUME_IDLE;
			};
			class	Engine
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",	db+11,1, 200};
				frequency	=	0.8	+	HZ_RPM1*0.2;
				volume = engineOn*camPos*VOLUME_RPM1;
			};
			class	Engine1_ext
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm3",	db+9,1, 240};
				frequency	=	0.8	+	HZ_RPM2*0.2;
				volume = engineOn*camPos*VOLUME_RPM2;
			};
			class	Engine2_ext
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm4",	db+8,1, 280};
				frequency	=	0.8	+	HZ_RPM3*0.2;
				volume = engineOn*camPos*VOLUME_RPM3;
			};
			class	Engine3_ext
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm5",	db+7,1, 320};
				frequency	=	0.8	+	HZ_RPM4*0.2;
				volume = engineOn*camPos*VOLUME_RPM4;
			};
			class	Engine4_ext
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm6",	db+6,1, 360};
				frequency	=	0.8	+	HZ_RPM5*0.2;
				volume = engineOn*camPos*VOLUME_RPM5;
			};
			class	Engine5_ext
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm7",	db+5,1, 420};
				frequency	=	0.95	+	HZ_RPM6*0.15;
				volume = engineOn*camPos*VOLUME_RPM6;
			};

			class IdleThrust
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1", db+6,1, 200};
				frequency	=	0.9	+	HZ_IDLE*0.2;
				volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
			};
			class EngineThrust
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm2", db+5,1, 250};
				frequency	=	0.8	+	HZ_RPM1*0.2;
				volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
			};
			class Engine1_Thrust_ext
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm3", db+4,1, 280};
				frequency	=	0.8	+	HZ_RPM2*0.2;
				volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
			};
			class Engine2_Thrust_ext
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm4", db+3,1, 320};
				frequency	=	0.8	+	HZ_RPM3*0.2;
				volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
			};
			class Engine3_Thrust_ext
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm5", db+2,1, 360};
				frequency	=	0.8	+	HZ_RPM4*0.2;
				volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
			};
			class Engine4_Thrust_ext
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm6", db+0,1, 400};
				frequency	=	0.8	+	HZ_RPM5*0.3;
				volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
			};
			class Engine5_Thrust_ext
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm7", db+2,1, 450};
				frequency	=	0.9	+	HZ_RPM6*0.2;
				volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6;
			};

				/*  konec pod plynem externi */

				/* INTERNI OZVUCENI BEZ PLYNU */

			class	Idle_int
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2", db+9,	1};
				frequency	=	0.9	+	HZ_IDLE*0.2;
				volume = engineOn*(1-camPos)*VOLUME_IDLE;
			};
			class	Engine_int
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",	db+8,1 };
				frequency	=	0.8	+	HZ_RPM1*0.2;
				volume = engineOn*(1-camPos)*VOLUME_RPM1;
			};
			class	Engine1_int
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",	db+8,1 };
				frequency	=	0.8	+	HZ_RPM2*0.2;
				volume = engineOn*(1-camPos)*VOLUME_RPM2;
			};
			class	Engine2_int
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",	db+7,1 };
				frequency	=	0.8	+	HZ_RPM3*0.2;
				volume = engineOn*(1-camPos)*VOLUME_RPM3;
			};
			class	Engine3_int
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",	db+6,1 };
				frequency	=	0.8	+	HZ_RPM4*0.2;
				volume = engineOn*(1-camPos)*VOLUME_RPM4;
			};
			class	Engine4_int
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",	db+5,1 };
				frequency	=	0.8	+	HZ_RPM5*0.2;
				volume = engineOn*(1-camPos)*VOLUME_RPM5;
			};
			class	Engine5_int
			{
				sound[]	=	{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm3",	db+5,1 };
				frequency	=	0.95	+	HZ_RPM6*0.15;
				volume = engineOn*(1-camPos)*VOLUME_RPM6;
			};/*   POD PLYNEM   */

			class IdleThrust_int
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm1", db+6,1 };
				frequency	=	0.9	+	HZ_IDLE*0.2;
				volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
			};
			class EngineThrust_int
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm2", db+6,1 };
				frequency	=	0.8	+	HZ_RPM1*0.2;
				volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
			};
			class Engine1_Thrust_int
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm3", db+5,1 };
				frequency	=	0.8	+	HZ_RPM2*0.2;
				volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
			};
			class Engine2_Thrust_int
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm4", db+4,1 };
				frequency	=	0.8	+	HZ_RPM3*0.2;
				volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
			};
			class Engine3_Thrust_int
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm5", db+3,1 };
				frequency	=	0.8	+	HZ_RPM4*0.2;
				volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
			};
			class Engine4_Thrust_int
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm6", db+3,1 };
				frequency	=	0.8	+	HZ_RPM5*0.3;
				volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
			};
			class Engine5_Thrust_int
			{
			sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm7", db+3,1 };
				frequency	=	0.9	+	HZ_RPM6*0.2;
				volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6;
			};
			soundSetsExt[] = {
				"RHSUSF_M1_Engine_RMP0_EXT_SoundSet",
				"RHSUSF_M1_Engine_RMP1_EXT_SoundSet",
				"RHSUSF_M1_Engine_RMP2_EXT_SoundSet",
				"RHSUSF_M1_Engine_RMP3_EXT_SoundSet",
				"RHSUSF_M1_Engine_RMP4_EXT_SoundSet",
				//"MBT_03_EngineBurst_EXT_SoundSet",
				"Tank_Tracks1_01_EXT_SoundSet",
				"Tank_Tracks1_02_EXT_SoundSet",
				"Tank_Tracks1_03_EXT_SoundSet",
				"Tank_Tracks1_04_EXT_SoundSet",
				"Tank_Tracks1_05_EXT_SoundSet",
				"Tank_Hard_Scrape_EXT_SoundSet",
				"Tank_Hard_Slip_EXT_SoundSet"
			};
			soundSetsInt[] = {
				"RHSUSF_M1_Engine_RMP0_EXT_SoundSet",
				"MBT_03_Engine_RMP1_INT_SoundSet",
				"MBT_03_Engine_RMP2_INT_SoundSet",
				"MBT_03_Engine_RMP3_INT_SoundSet",
				"MBT_03_Engine_RMP4_INT_SoundSet",
				//"MBT_03_EngineBurst_INT_SoundSet",
				"Tank_Tracks1_01_INT_SoundSet",
				"Tank_Tracks1_02_INT_SoundSet",
				"Tank_Tracks1_03_INT_SoundSet",
				"Tank_Tracks1_04_INT_SoundSet",
				"Tank_Tracks1_05_INT_SoundSet",
				"Tank_GenericRumble_INT_SoundSet",
				"Tank_GenericToneOn_INT_SoundSet",
				"Tank_GenericToneOff_INT_SoundSet",
				"Tank_Hard_Scrape_INT_SoundSet"
			};	
		};