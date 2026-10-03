
		attenuationEffectType	= "HeliAttenuation";
		soundGetIn[]			= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\close",0.31622776,1};
		soundGetOut[]			= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\open",0.31622776,1,40};
		soundEnviron[]			= {"",0.031622775,1};
		soundDammage[]			= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_start_int",0.1,1};
		soundEngineOnExt[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_start_ext",0.56234133,1,800};
		soundEngineOffInt[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_stop_int",0.1,1};
		soundEngineOffExt[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_stop_ext",0.56234133,1,800};
		soundLocked[]			= {"\A3\Sounds_F\weapons\Rockets\locked_1",0.1,1};
		soundIncommingMissile[]	= {"\A3\Sounds_F\weapons\Rockets\locked_3",0.1,1.5};
		class Sounds: Sounds
		{
			class Engine
			{
				sound[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_engine_1",3.1622777,1,1000};
				frequency	= "rotorSpeed";
				volume		= "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_rotor_ext2",3.1622777,1,1200};
				frequency	= "rotorSpeed";
				volume		= "camPos*(0 max (rotorSpeed-0.1))";
				cone[]		= {1.8,3.14,2,0.9};
			};
			class RotorHighOut
			{
				sound[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_rotor_high_ext2",1.7782794,1,1300};
				frequency	= "rotorSpeed";
				volume		= "camPos*10*(0 max (rotorThrust-0.95))";
				cone[]		= {1.8,3.14,2,0.9};
			};
			class EngineIn
			{
				sound[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_engine_int",1.7782794,1};
				frequency	= "rotorSpeed";
				volume		= "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_rotor_int2",1.7782794,1};
				frequency	= "rotorSpeed";
				volume		= "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[]		= {"rhsusf\addons\rhsusf_a2port_air\data\sounds\AH64_rotor_high_int2",1.7782794,1};
				frequency	= "rotorSpeed";
				volume		= "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};