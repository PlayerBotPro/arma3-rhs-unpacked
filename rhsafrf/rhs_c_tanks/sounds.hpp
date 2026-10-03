
		attenuationEffectType = "TankAttenuation"; //echo fix

		soundEngineOnExt[] = {"rhsafrf\addons\rhs_t80\Sound\t80_engineStart.wav", db-5, 1.0, 200};
		soundEngineOnInt[] = {"rhsafrf\addons\rhs_t80\Sound\t80_engineStart.wav", db-5, 1.0, 200};
		/*insideSoundCoef=0.95;
		soundGear[]={"rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change",2,1};

		soundGetIn[]={"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\ext-uaz-getin",db+40,1,9};
		soundGetOut[]={"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\ext-uaz-getout",db+30,1, 25};

		soundEngineOnInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_start1", db+8, 1.0};
		soundEngineOffInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_stop1", db+8, 1.0};
		soundEngineOffExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_stop1", db+7, 1.0, 200};
*/

		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					0.79432821,
					1,
					200
				};
				frequency="0.95	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
				volume="engineOn*camPos*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
			};
			class Engine
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					0.89125091,
					1,
					240
				};
				frequency="0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.1220185,
					1,
					280
				};
				frequency="0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.2589254,
					1,
					320
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.4125376,
					1,
					360
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.5848932,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.7782794,
					1,
					440
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
				volume="engineOn*camPos*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
			};/*
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2",
					1.4125376,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3",
					1.7782794,
					1,
					230
				};
				frequency="0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4",
					1.9952624,
					1,
					290
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5",
					1.7782794,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6",
					2.2387211,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7",
					2.5118864,
					1,
					450
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
			};*/
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
			};/*
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
			};*/


			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.89125091,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01",
					0.25118864,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02",
					0.2818383,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
		};