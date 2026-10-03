		insideSoundCoef = 0.2;
		attenuationEffectType = "HeliAttenuation"; //utlumovani v interieru (odkaz do Attenuation.hpp ve slozce SOUNDS_F

		soundGetIn[]={"rhsgref\addons\rhsgref_air\AN2\data\sound\close",db-10,1};
		soundGetOut[]={"rhsgref\addons\rhsgref_air\AN2\data\sound\open",db-10,1, 40};
		//XXX soundDammage[]={"rhsgref\addons\rhsgref_air\AN2\data\sound\int-alarm_loop", db-5, 1};
		soundDammage[]={"", db-5, 1};
		soundEngineOnInt[] = {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_start_int", db-15, 1.0};
		soundEngineOnExt[] = {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_start_ext", db-8, 1.0, 700};
		soundEngineOffInt[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_stop_int", db-15, 1.0};
		soundEngineOffExt[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_stop_ext", db-8, 1.0, 700};
    	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", db-20, 1};
    	soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", db-20, 1.5};

		class Sounds
		{
    		class EngineLowOut
    		{
    			sound[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_low_ext", db5, 1, 900};
    			frequency = "1.0 min (rpm + 0.5)";
    			volume = "camPos*engineOn*(rpm factor[0.85, 0])";
    		};
    		class EngineHighOut
    		{
    			sound[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_high_ext", db5, 1, 1100};
    			frequency = "1";
    			volume = "camPos*engineOn*(rpm factor[0.55, 1.0])";
    		};
    		class ForsageOut
    		{
    			sound[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_high_ext", db3, 1, 1500};
    			frequency = "1";
    			volume = "camPos*engineOn*(thrust factor[0.5, 1.0])";
    			cone[] = {1.14, 3.92, 2.0, 0.4};
    		};
    		class WindNoiseOut
    		{
    			sound[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\ext-wind", db-60, 0.6, 150};
    			frequency ="(0.1+(1.2*(speed factor[1, 100])))";
    			volume = "camPos*(speed factor[1, 100])";
    		};


    		class EngineLowIn
    		{
    			sound[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_low_int", db0, 1.0};
    			frequency = "1.0 min (rpm + 0.5)";
    			volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
    		};
    		class EngineHighIn
    		{
    			sound[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_high_int", db0, 1.0};
    			frequency = "1";
    			volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
    		};
    		class ForsageIn
    		{
    			sound[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_high_int", db3, 1.1};
    			frequency = "1";
    			volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
    		};
    		class WindNoiseIn
    		{
    			sound[] =  {"rhsgref\addons\rhsgref_air\AN2\data\sound\int-wind", db-60, 0.6};
    			frequency ="(0.1+(1.2*(speed factor[1, 100])))";
    			volume = "(1-camPos)*(speed factor[1, 100])";
    		};
		};
