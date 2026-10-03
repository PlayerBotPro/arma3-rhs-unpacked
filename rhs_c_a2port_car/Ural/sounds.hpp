
		soundGear[]={"rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change",2,1};

		soundGetIn[]={"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-getout",db+5,1, 9};
		soundGetOut[]={"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-getout",db+8,1, 25};

		soundEngineOnInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-start", db+3, 1.0};
		soundEngineOnExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-start", db+3, 1.0, 200};
		soundEngineOffInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-stop", db+3, 1.0};
		soundEngineOffExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-stop", db+3, 1.0, 200};


class Sounds
{

	// warp	factor
	#define	FACTOR_Ural(val,from,to)	(val factor[from,to])
	// RANGE(val,	begin, band, end,	band)
	#define	RANGE_Ural(val,from,band0,to,band1) FACTOR2_Ural(val,from,(from+band0),to,(to+band1))
	// FACTOR2(val,	0, 400,	1200,	2000)
	#define	FACTOR2_Ural(val,from0,to0,from1,to1) (FACTOR_Ural(val,from0,to0)	*	FACTOR_Ural(val,to1,from1))

	// redRpm
	#define	MAX_RPM_Ural	2600
	// scaled	rpm	to 0 - 1
	#define	RPM_Ural(rpm) (rpm/MAX_RPM)

	// specialized FACTOR	for	rpm
	#define	FACTOR_RPM_Ural(from,to)	FACTOR(RPM_Ural(rpm),RPM_Ural(from),RPM_Ural(to))
	// specialized peak	for	rpm
	#define	FACTOR2_RPM_Ural(from0,to0,from1,to1) (FACTOR_RPM_Ural(from0,to0)	*	FACTOR_RPM_Ural(to1,from1))
	// specialized peak, different definition, version for rpm
	#define	RANGE_RPM_Ural(from,band0,to,band1) FACTOR2_RPM_Ural(from,(from+band0),to,(to+band1))



	#define HZ_IDLE_Ural FACTOR_RPM_Ural(200,950)
	#define HZ_RPM1_Ural FACTOR_RPM_Ural(800,1300)
	#define HZ_RPM2_Ural FACTOR_RPM_Ural(1200,1600)
	#define HZ_RPM3_Ural FACTOR_RPM_Ural(1400,2100)
	#define HZ_RPM4_Ural FACTOR_RPM_Ural(1300,2900)
	#define HZ_RPM5_Ural FACTOR_RPM_Ural(2200,4200)
	#define HZ_RPM6_Ural FACTOR_RPM_Ural(3100,4900)

	#define VOLUME_IDLE_Ural FACTOR2_RPM_Ural(100,300,500,800)
	#define VOLUME_RPM1_Ural FACTOR2_RPM_Ural(650,750,800,900)
	#define VOLUME_RPM2_Ural FACTOR2_RPM_Ural(850,950,1200,1400)
	#define VOLUME_RPM3_Ural FACTOR2_RPM_Ural(1200,1350,1400,1800)
	#define VOLUME_RPM4_Ural FACTOR2_RPM_Ural(1450,1650,2200,2670)
	#define VOLUME_RPM5_Ural FACTOR2_RPM_Ural(2350,2800,3050,3150)
	#define VOLUME_RPM6_Ural FACTOR_RPM_Ural(3100,4100)




	class Idle_ext
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-idle", db+4,	1, 150};
		frequency	=	0.9	+	HZ_IDLE_Ural*0.2;
		volume = engineOn*camPos*VOLUME_IDLE_Ural;
	};
	class Engine
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-acceleration",	db+3,1, 200};
		frequency	=	0.8	+	HZ_RPM1_Ural*0.2;
		volume = engineOn*camPos*VOLUME_RPM1_Ural;
	};
	class Engine1_ext
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-low",	db+2,1, 240};
		frequency	=	0.8	+	HZ_RPM2_Ural*0.2;
		volume = engineOn*camPos*VOLUME_RPM2_Ural;
	};
	class Engine2_ext
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high",	db+2,1, 280};
		frequency	=	0.8	+	HZ_RPM3_Ural*0.2;
		volume = engineOn*camPos*VOLUME_RPM3_Ural;
	};
	class Engine3_ext
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high",	db+1,1, 320};
		frequency	=	0.8	+	HZ_RPM4_Ural*0.2;
		volume = engineOn*camPos*VOLUME_RPM4_Ural;
	};
	class Engine4_ext
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high",	db+1,1, 360};
		frequency	=	0.8	+	HZ_RPM5_Ural*0.2;
		volume = engineOn*camPos*VOLUME_RPM5_Ural;
	};
	class Engine5_ext
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high",	db+1,1, 420};
		frequency	=	0.95	+	HZ_RPM6_Ural*0.15;
		volume = engineOn*camPos*VOLUME_RPM6_Ural;
	};

	/*   POD PLYNEM EXTERNI  */

	class IdleThrust
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle_exhaust", db+1,1, 200};
		frequency	=	0.9	+	HZ_IDLE_Ural*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE_Ural;
	};
	class EngineThrust
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust", db+1,1, 250};
		frequency	=	0.8	+	HZ_RPM1_Ural*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1_Ural;
	};
	class Engine1_Thrust_ext
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust", db+1,1, 280};
		frequency	=	0.8	+	HZ_RPM2_Ural*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2_Ural;
	};
	class Engine2_Thrust_ext
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", db0,1, 320};
		frequency	=	0.8	+	HZ_RPM3_Ural*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3_Ural;
	};
	class Engine3_Thrust_ext
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", db0,1, 360};
		frequency	=	0.8	+	HZ_RPM4_Ural*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4_Ural;
	};
	class Engine4_Thrust_ext
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", db0,1, 400};
		frequency	=	0.8	+	HZ_RPM5_Ural*0.3;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5_Ural;
	};
	class Engine5_Thrust_ext
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", db2,1, 450};
		frequency	=	0.9	+	HZ_RPM6_Ural*0.2;
		volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6_Ural;
	};


	/*  konec pod plynem externi */

	/* INTERNI OZVUCENI BEZ PLYNU */

	class Idle_int
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-idle", db+3,	1};
		frequency	=	0.9	+	HZ_IDLE_Ural*0.2;
		volume = engineOn*(1-camPos)*VOLUME_IDLE_Ural;
	};
	class Engine_int
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-acceleration",	db+3,1 };
		frequency	=	0.8	+	HZ_RPM1_Ural*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM1_Ural;
	};
	class Engine1_int
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-low",	db+2,1 };
		frequency	=	0.8	+	HZ_RPM2_Ural*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM2_Ural;
	};
	class Engine2_int
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high",	db+2,1 };
		frequency	=	0.8	+	HZ_RPM3_Ural*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM3_Ural;
	};
	class Engine3_int
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high",	db+2,1 };
		frequency	=	0.8	+	HZ_RPM4_Ural*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM4_Ural;
	};
	class Engine4_int
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high",	db+2,1 };
		frequency	=	0.8	+	HZ_RPM5_Ural*0.2;
		volume = engineOn*(1-camPos)*VOLUME_RPM5_Ural;
	};
	class Engine5_int
	{
		sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high",	db+2,1 };
		frequency	=	0.95	+	HZ_RPM6_Ural*0.15;
		volume = engineOn*(1-camPos)*VOLUME_RPM6_Ural;
	};/*   POD PLYNEM   */

	class IdleThrust_int
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust", db+3,1 };
		frequency	=	0.9	+	HZ_IDLE_Ural*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE_Ural;
	};
	class EngineThrust_int
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", db+2,1 };
		frequency	=	0.8	+	HZ_RPM1_Ural*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1_Ural;
	};
	class Engine1_Thrust_int
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", db+2,1 };
		frequency	=	0.8	+	HZ_RPM2_Ural*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2_Ural;
	};
	class Engine2_Thrust_int
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", db+1,1 };
		frequency	=	0.8	+	HZ_RPM3_Ural*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3_Ural;
	};
	class Engine3_Thrust_int
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", db+1,1 };
		frequency	=	0.8	+	HZ_RPM4_Ural*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4_Ural;
	};
	class Engine4_Thrust_int
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", db+1,1 };
		frequency	=	0.8	+	HZ_RPM5_Ural*0.3;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5_Ural;
	};
	class Engine5_Thrust_int
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", db+1,1 };
		frequency	=	0.9	+	HZ_RPM6_Ural*0.2;
		volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6_Ural;
	};
	class Movement
	{
		sound	=	"soundEnviron";
		frequency	=	"1";
		volume = "0";
	};
	/*   KONEC POD PLYNEM   */

	class RainIn
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", db+3,1 };
		frequency	=	1;
		volume = rain*(1-camPos);
	};
	class RainExt
	{
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", db+3,1 };
		frequency	=	1;
		volume = rain*camPos;
	};

	/*----------------------------------*/
 	/*-----------  TIRES EXT ---------*/
	/*----------------------------------*/

 			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db+1, 1.0, 60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db+1, 1.0, 60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db+1, 1.0, 60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db+1, 1.0, 60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db+1, 1.0, 60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db+1, 1.0, 60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", db0, 1.0, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};

	/*----------------------------------*/
 	/*-----------  TIRES INT ---------*/
	/*----------------------------------*/

			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db+1, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db+1, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db+1, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db+1, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db+1, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db+1, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db0, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)"; //definice INSIDE zvuku
			};

	/*------------------------------------------------------------------*/
	/*-------------- ozvuceni piskani pneumatik EXT -------------*/
	/*------------------------------------------------------------------*/

	/* zvuk na silnici */

		class breaking_ext_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db+3, 1, 80};
		frequency	=	1;
		volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
	};

		class acceleration_ext_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db+3, 1, 80};
		frequency	=	1;
		volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
	};
		class turn_left_ext_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db+3, 1, 80};
		frequency	=	1;
		volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
	};

		class turn_right_ext_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db+3, 1, 80};
		frequency	=	1;
		volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
	};

		/*-----------------------------------------------------------------*/
		/*ozvuceni piskani pneumatik na ostatnich povrsich EXT */
		/*-----------------------------------------------------------------*/

		class breaking_ext_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db+3, 1, 60};
		frequency	=	1;
		volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
	};
		class acceleration_ext_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", db+3,	1, 60};
		frequency	=	1;
		volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
	};
		class turn_left_ext_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db+3, 1, 60};
		frequency	=	1;
		volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
	};

		class turn_right_ext_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db+3, 1, 60};
		frequency	=	1;
		volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
	};


	/*---------------------------------------------------------------------------*/
	/*-------------- ozvuceni piskani pneumatik INT silnice --------------*/
	/*---------------------------------------------------------------------------*/

		class breaking_int_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db+10, 1};
		frequency	=	1;
		volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
	};

		class acceleration_int_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db+10, 1};
		frequency	=	1;
		volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
	};
		class turn_left_int_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db+10, 1};
		frequency	=	1;
		volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
	};
		class turn_right_int_road
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db+10, 1};
		frequency	=	1;
		volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
	};

	/*--------------------------------------------------------------------------------------------*/
	/*-------------- ozvuceni piskani pneumatik na ostatnich povrsich INT -------------*/
	/*--------------------------------------------------------------------------------------------*/
		class breaking_int_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db+10, 1};
		frequency	=	1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
	};
		class acceleration_int_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", db+10, 1};
		frequency	=	1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
	};
		class turn_left_int_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db+10,	1};
		frequency	=	1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
	};
		class turn_right_int_dirt
	{
		sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db+10,	1};
		frequency	=	1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
	};
};
