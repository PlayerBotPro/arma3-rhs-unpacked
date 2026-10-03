
attenuationEffectType = "CarAttenuation";
soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_03\getin",0.56234133,1};
soundGetOut[] = {"A3\Sounds_F\vehicles\soft\MRAP_03\getout",0.56234133,1,40};
soundDammage[] = {"",1.0,1};
soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_start",0.70794576,1.0};
soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_start",0.70794576,1.0,200};
soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_stop",0.70794576,1.0};
soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_stop",0.70794576,1.0,200};
buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.0,1,200};
buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.0,1,200};
buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.0,1,200};
buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.0,1,200};
soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.0,1,200};
WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.0,1,200};
WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.0,1,200};
WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.0,1,200};
WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.0,1,200};
WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.0,1,200};
soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.0,1,200};
ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.0,1,200};
ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.0,1,200};
ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.0,1,200};
soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};

class Sounds
{
	class Idle_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_00",0.56234133,1,200};
		frequency = "0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
		volume = "engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
	};
	class Engine
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_01",0.63095737,1,200};
		frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
		volume = "engineOn*camPos*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
	};
	class Engine1_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_02",0.70794576,1,200};
		frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
		volume = "engineOn*camPos*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
	};
	class Engine2_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_03",0.7943282,1,250};
		frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
		volume = "engineOn*camPos*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
	};
	class Engine3_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_04",1.1220185,1,300};
		frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
		volume = "engineOn*camPos*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
	};
	class Engine4_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_05",1.4125376,1,350};
		frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
		volume = "engineOn*camPos*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
	};
	class Engine5_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_06",1.7782794,1,400};
		frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
		volume = "engineOn*camPos*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
	};
	class IdleThrust
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_00",1.0,1,250};
		frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
	};
	class EngineThrust
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_01",1.2589254,1,300};
		frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
	};
	class Engine1_Thrust_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_02",1.4125376,1,350};
		frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
	};
	class Engine2_Thrust_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_03",1.5848932,1,400};
		frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
	};
	class Engine3_Thrust_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_04",1.9952624,1,450};
		frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
	};
	class Engine4_Thrust_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_05",1.9952624,1,450};
		frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
	};
	class Engine5_Thrust_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_06",2.2387211,1,500};
		frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
	};
	class Idle_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_00",0.39810717,1};
		frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
		volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
	};
	class Engine_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_01",0.4466836,1};
		frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
		volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
	};
	class Engine1_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_02",0.5011872,1};
		frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
		volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
	};
	class Engine2_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_03",0.5011872,1};
		frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
		volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
	};
	class Engine3_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_04",0.56234133,1};
		frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
		volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
	};
	class Engine4_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_05",0.56234133,1};
		frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
		volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
	};
	class Engine5_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_06",0.63095737,1};
		frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
		volume = "engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
	};
	class IdleThrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_00",0.5011872,1};
		frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
	};
	class EngineThrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_01",0.56234133,1};
		frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
	};
	class Engine1_Thrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_02",0.63095737,1};
		frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
	};
	class Engine2_Thrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_03",0.63095737,1};
		frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
	};
	class Engine3_Thrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_04",0.70794576,1};
		frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
	};
	class Engine4_Thrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_05",0.7943282,1};
		frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
	};
	class Engine5_Thrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_06",1.0,1};
		frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
	};
	class Movement
	{
		sound = "soundEnviron";
		frequency = "1";
		volume = "0";
	};
	class TiresRockOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.0,1.0,60};
		frequency = "1";
		volume = "camPos*rock*(speed factor[2, 20])";
	};
	class TiresSandOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.0,1.0,60};
		frequency = "1";
		volume = "camPos*sand*(speed factor[2, 20])";
	};
	class TiresGrassOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.0,1.0,60};
		frequency = "1";
		volume = "camPos*grass*(speed factor[2, 20])";
	};
	class TiresMudOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.0,1.0,60};
		frequency = "1";
		volume = "camPos*mud*(speed factor[2, 20])";
	};
	class TiresGravelOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.0,1.0,60};
		frequency = "1";
		volume = "camPos*gravel*(speed factor[2, 20])";
	};
	class TiresAsphaltOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.0,1.0,60};
		frequency = "1";
		volume = "camPos*asphalt*(speed factor[2, 20])";
	};
	class NoiseOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.0,1.0,90};
		frequency = "1";
		volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
	};
	class TiresRockIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
		frequency = "1";
		volume = "(1-camPos)*rock*(speed factor[2, 20])";
	};
	class TiresSandIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
		frequency = "1";
		volume = "(1-camPos)*sand*(speed factor[2, 20])";
	};
	class TiresGrassIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
		frequency = "1";
		volume = "(1-camPos)*grass*(speed factor[2, 20])";
	};
	class TiresMudIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
		frequency = "1";
		volume = "(1-camPos)*mud*(speed factor[2, 20])";
	};
	class TiresGravelIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
		frequency = "1";
		volume = "(1-camPos)*gravel*(speed factor[2, 20])";
	};
	class TiresAsphaltIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
		frequency = "1";
		volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
	};
	class NoiseIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.70794576,1.0};
		frequency = "1";
		volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
	};
	class breaking_ext_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
		frequency = 1;
		volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
	};
	class acceleration_ext_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
		frequency = 1;
		volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_ext_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
		frequency = 1;
		volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_ext_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
		frequency = 1;
		volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
	class breaking_ext_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
		frequency = 1;
		volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
	};
	class acceleration_ext_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.70794576,1,60};
		frequency = 1;
		volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_ext_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
		frequency = 1;
		volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_ext_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
		frequency = 1;
		volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
	class breaking_int_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.63095737,1};
		frequency = 1;
		volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
	};
	class acceleration_int_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.63095737,1};
		frequency = 1;
		volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_int_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.63095737,1};
		frequency = 1;
		volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_int_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.63095737,1};
		frequency = 1;
		volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
	class breaking_int_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.63095737,1};
		frequency = 1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
	};
	class acceleration_int_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.63095737,1};
		frequency = 1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_int_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.63095737,1};
		frequency = 1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_int_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.63095737,1};
		frequency = 1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
};