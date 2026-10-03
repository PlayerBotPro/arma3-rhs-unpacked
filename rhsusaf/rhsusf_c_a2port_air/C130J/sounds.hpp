
		soundGetIn[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\close",
			0.31622776,
			1
		};
		soundGetOut[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\open",
			0.31622776,
			1,
			40
		};
		soundDammage[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\data\sounds\int-alarm_loop",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int_start_1",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext_start_1",
			0.39810717,
			1,
			700
		};
		soundEngineOffInt[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int_stop_1",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext_stop_1",
			0.39810717,
			1,
			700
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.1,
			1.5
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext_engine_low",
					1.7782794,
					1,
					900
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*engineOn*(rpm factor[0.85, 0])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext_engine_hi",
					1.7782794,
					1,
					1100
				};
				frequency="1";
				volume="camPos*engineOn*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext_forsage_1",
					1.4125376,
					1,
					1500
				};
				frequency="1";
				volume="camPos*engineOn*(thrust factor[0.5, 1.0])";
				cone[]={1.14,3.9200001,2,0.4};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext-wind1",
					0.001,
					0.6,
					150
				};
				frequency="(0.1+(1.2*(speed factor[1, 100])))";
				volume="camPos*(speed factor[1, 100])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int_engine_low",
					1,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int_engine_hi",
					1,
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn
			{
				sound[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int_forsage_1",
					1.4125376,
					1.1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int-wind1",
					0.001,
					0.6
				};
				frequency="(0.1+(1.2*(speed factor[1, 100])))";
				volume="(1-camPos)*(speed factor[1, 100])";
			};
		};