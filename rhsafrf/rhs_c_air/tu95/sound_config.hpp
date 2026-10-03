//
// Prop Sound Effects from http://www.freesfx.co.uk
//


soundGetIn[] = {"A3\Sounds_F_EPC\CAS_01\getin_wipeout",1.0,1,40};
soundGetOut[] = {"A3\Sounds_F\air\Plane_Fighter_03\getout",1.0,1,40};
soundDammage[] = {"",0.56234133,1};
soundEngineOnInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_int_start",6.0,1.0,500};
soundEngineOnExt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_start",6.4125376,1.0,500};
soundEngineOffInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_int_stop",6.0,1.0,500};
soundEngineOffExt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_stop",6.4125376,1.0,500};
soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};
soundGearUp[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_hydraulicpump",5.7943282,1.0,150};
soundGearDown[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_hydraulicpump",5.7943282,1.0,150};
soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up",4.63095737,1.0,100};
soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down",4.63095737,1.0,100};
class Sounds
{
  class EngineLowOut
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_low",db+20,1.0,4000};
    frequency = "1.0 min (rpm + 0.5)";
    volume = "(camPos*4*(rpm factor[0.2, 1.1])*(rpm factor[1.1, 0.5]))*2";
  };
  class EngineHighOut
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_low",db+20,1.2,4300};
    frequency = "1";
    volume = "(camPos*4*(rpm factor[0.2, 1.1])*(rpm factor[1.1, 0.5]))*1";
  };
  class ForsageOut
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_high",db+20,1.2,4500};
    frequency = "1";
    volume = "(engineOn*camPos*(thrust factor[0.6, 1.0]))*1";
    cone[] = {3.14,3.92,2.0,0.5};
  };
  class WindNoiseOut
  {
    sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise",1.06234133,1.0,150};
    frequency = "(0.1+(1.2*(speed factor[1, 150])))";
    volume = "camPos*(speed factor[1, 150])";
  };
  class EngineLowIn
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_int_low",db+10,1.0};
    frequency = "1.0 + (rpm + 0.5)";
    //frequency = "1.0 min (rpm + 0.5)";
    volume = "((1-camPos)*((rpm factor[0.2, 0.1])*(rpm factor[0.1, 0.7])))*3";
  };
  class EngineHighIn
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_int_low",db+10,1.2};
    frequency = "1";
    volume = "((1-camPos)*(rpm factor[0.85, 1.0]))*3";
  };
  class ForsageIn
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_high",db+10.5,1.2};
    frequency = "1";
    volume = "((1-camPos)*(engineOn*(thrust factor[0.6, 1.0])))*0.5";
  };
  class WindNoiseIn
  {
    sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise_int",0.81622776,1.0};
    frequency = "(0.1+(1.2*(speed factor[1, 150])))";
    volume = "(1-camPos)*(speed factor[1, 150])";
  };
  class RainExt
  {
    sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.7782794,1.0,100};
    frequency = 1;
    volume = "camPos * rain * (speed factor[50, 0])";
  };
  class RainInt
  {
    sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
    frequency = 1;
    volume = "(1-camPos) * rain * (speed factor[50, 0])";
  };
};
