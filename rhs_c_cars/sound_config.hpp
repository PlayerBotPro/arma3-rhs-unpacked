class Sounds
{
  // EXTERIOR
  class Idle_ext
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_ext",0.69810717,1,250};
    frequency = "0.75	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.95";
    volume = "engineOn*camPos*(((rpm/	2700) factor[(10/	2700),(50/	2700)])	*	((rpm/	2700) factor[(800/	2700),(600/	2700)]))*1.0";
  };
  class Engine
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_ext",0.4466836,1,350};
    frequency = "0.75	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.95";
    volume = "engineOn*camPos*(((rpm/	2700) factor[(620/	2700),(820/	2700)])	*	((rpm/	2700) factor[(2700/	2700),(2700/	2700)]))*1.0";
  };

  class EngineThrust
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.5,1,250};
    frequency = "0.65	+	((rpm/	2700) factor[(610/	2700),(6400/	2700)])*0.75";
    volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.4,1])))*(((rpm/	2700) factor[(620/	2700),(820/	2700)])	*	((rpm/	2700) factor[(2700/	2700),(2700/	2700)]))*1.0";
  };

  class GearboxWhine_Ext
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_axle_whine_ext",0.35,1,250};
    frequency = "0.85	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.95";
    volume = "engineOn*camPos*(((rpm/	2700) factor[(700/	2700),(850/	2700)])	*	((rpm/	2700) factor[(2700/	2700),(2700/	2700)]))*1.0";
  };

  class Turbo_Ext
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\turbo_ext",0.2,1,50};
    frequency = "0.85	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.95";
    volume = "engineOn*camPos*(((rpm/ 2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*2.0";
  };

  // INTERIOR
  class Idle_int
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_int",0.6,1};
    frequency = "0.75 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.95";
    volume = "engineOn*(1-camPos)*(((rpm/ 2700) factor[(10/ 2700),(50/  2700)]) * ((rpm/  2700) factor[(800/  2700),(600/ 2700)]))*1.0";
  };
  class Engine_int
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_int",0.6,1};
    frequency = "0.75 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.95";
    volume = "engineOn*(1-camPos)*(((rpm/ 2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
  };
  class EngineThrust_int
  {
    sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.4,1};
    frequency = "0.85	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.75";
    volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.4,1])))*(((rpm/  2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
  };

  class GearboxWhine_Int
  {
   sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_axle_whine_int",0.2,1};
    frequency = "0.85 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.95";
    volume = "engineOn*(1-camPos)*(((rpm/ 2700) factor[(700/  2700),(850/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
  };

  class Turbo_Int
  {
    sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\turbo_ext",0.15,1};
    frequency = "0.85 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.75";
    volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/  2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
  };
};
