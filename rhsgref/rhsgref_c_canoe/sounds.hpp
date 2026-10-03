
		soundEngineOnInt[]	= {"", db0, 1.0};
		soundEngineOnExt[]	= {"", db0, 1.0, 150};
		soundEngineOffInt[]	= {"", db0, 1.0};
		soundEngineOffExt[]	= {"", db0, 1.0, 150};
		class Sounds
		{
			/*	WATER FLOW DEPENDING ON SPEED	*/
			class WaternoiseOutW0
			{
				sound[]		= {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", db0, 1.0, 100};
				frequency	= "1";
				volume		= "(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1
			{
				sound[]		= {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", db0, 1.0, 150};
				frequency	= "1";
				volume		= "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[]		= {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", db0, 1.0, 300};
				frequency	= "1";
				volume		= "(speed factor[3, 9])"; //(camPos)*
			};

			/*	WATER FLOW DEPENDING ON BACKWARD SPEED	*/
			class WaternoiseOutW3
			{
				sound[]		= {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", db0, 1.0, 100};
				frequency	= "1";
				volume		= "(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4
			{
				sound[]		= {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", db0, 0.9, 150};
				frequency	= "1";
				volume		= "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5
			{
				sound[]		= {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", db0, 0.9, 300};
				frequency	= "1";
				volume		= "(speed factor[-3, -9])"; //(camPos)*
			};
			class scrubLandExt
			{
				sound[]		= {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow", db5, 1.0, 100};
				frequency	= 1;
				volume		= "(scrubLand factor[0.01, 0.20])";
			};

			// RAIN ON VEHICLE
			class RainExt
			{
				sound[]		= {"A3\Sounds_F\vehicles\noises\rain2_ext", db0, 1.0, 100};
				frequency	= 1;
				volume		= "camPos * (rain - rotorSpeed/2) * 2" ;
			};
			class RainInt
			{
				sound[]		= {"A3\Sounds_F\vehicles\noises\rain2_ext", db0, 1.0, 100};
				frequency	= 1;
				volume		= "(1-camPos)*(rain - rotorSpeed/2)*2" ;
			};
		};