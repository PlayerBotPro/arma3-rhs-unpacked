class Sounds
{
  class Idle_ext
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",0.39810717,1,150};
    frequency = "0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
    volume = "engineOn*camPos*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
  };
  class Engine
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.4466836,1,250};
    frequency = "0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
    volume = "engineOn*camPos*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
  };
  class Engine1_ext
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.56234133,1,300};
    frequency = "0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
    volume = "engineOn*camPos*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
  };
  class Engine2_ext
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.70794576,1,350};
    frequency = "0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
    volume = "engineOn*camPos*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(2569/	3400),(2796/	3400)]))";
  };
  class Engine3_ext
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1.0,1,400};
    frequency = "0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
    volume = "engineOn*camPos*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
  };
  class IdleThrust
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.56234133,1,200};
    frequency = "0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
    volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
  };
  class EngineThrust
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.70794576,1,350};
    frequency = "0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
    volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
  };
  class Engine1_Thrust_ext
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.8912509,1,400};
    frequency = "0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
    volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
  };
  class Engine2_Thrust_ext
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.1220185,1,425};
    frequency = "0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
    volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
  };
  class Engine3_Thrust_ext
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.2589254,1,450};
    frequency = "0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
    volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
  };
  class Idle_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",0.25118864,1};
    frequency = "0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
    volume = "engineOn*(1-camPos)*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
  };
  class Engine_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.31622776,1};
    frequency = "0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
    volume = "engineOn*(1-camPos)*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
  };
  class Engine1_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.39810717,1};
    frequency = "0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
    volume = "engineOn*(1-camPos)*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
  };
  class Engine2_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.5011872,1};
    frequency = "0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
    volume = "engineOn*(1-camPos)*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
  };
  class Engine3_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.63095737,1};
    frequency = "0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
    volume = "engineOn*(1-camPos)*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
  };
  class IdleThrust_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.3548134,1};
    frequency = "0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
    volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
  };
  class EngineThrust_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.4466836,1};
    frequency = "0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
    volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
  };
  class Engine1_Thrust_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.56234133,1};
    frequency = "0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
    volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
  };
  class Engine2_Thrust_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.70794576,1};
    frequency = "0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
    volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
  };
  class Engine3_Thrust_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.7943282,1};
    frequency = "0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
    volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3400) factor[(2116/	3400),(3400/	3400)])";
  };
  class TiresRockOut
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.4125376,1.0,60};
    frequency = "1";
    volume = "camPos*rock*(speed factor[2, 20])";
  };
  class TiresSandOut
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.4125376,1.0,60};
    frequency = "1";
    volume = "camPos*sand*(speed factor[2, 20])";
  };
  class TiresGrassOut
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.2589254,1.0,60};
    frequency = "1";
    volume = "camPos*grass*(speed factor[2, 20])";
  };
  class TiresMudOut
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.1220185,1.0,60};
    frequency = "1";
    volume = "camPos*mud*(speed factor[2, 20])";
  };
  class TiresGravelOut
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.2589254,1.0,60};
    frequency = "1";
    volume = "camPos*gravel*(speed factor[2, 20])";
  };
  class TiresAsphaltOut
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.1220185,1.0,60};
    frequency = "1";
    volume = "camPos*asphalt*(speed factor[2, 20])";
  };
  class NoiseOut
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.1220185,1.0,90};
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
    sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.56234133,1.0};
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
