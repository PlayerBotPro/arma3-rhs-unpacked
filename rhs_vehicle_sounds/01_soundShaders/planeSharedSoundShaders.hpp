#define FILEMACRO(PREFIX,FILEPATH) \
/* RATTLING */ \
	class PREFIX##_Plane_Int_rattling_light_SoundShader { \
		samples[] = {{##FILEPATH##\shared\rattling_1\rattling_light,1}};  \
		frequency = 0.8 * (0.4 * (gmeterZ factor [0.25,2]));  \
		volume = camInt * 0.8 * (gmeterZ envelope [0.25,1.9,2.4,3.1]);  \
	};  \
	class PREFIX##_Plane_Int_rattling_hard_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\rattling_1\rattling_hard,1}};  \
		frequency = 0.8 * (0.6 * (gmeterZ factor [2.5,5]));  \
		volume = camInt * (gmeterZ factor [2.4,3.1]);  \
	};  \
/* WIND */ \
	class PREFIX##_Plane_Int_wind_light_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\wind_1\wind_light,1}};  \
		frequency = 0.8 + (0.4 * (speed factor [20,70]));  \
		volume = camInt * (speed envelope [20,50,50,90]);  \
	};  \
	class PREFIX##_Plane_Int_wind_hard_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\wind_1\wind_hard,1}};  \
		frequency = 0.8 + (0.5 * (speed factor [40,120]));  \
		volume = camInt * (speed factor [50,90]);  \
	};	  \
/* GlIDER */ \
	class PREFIX##_Plane_Ext_Glider_slow_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\glider\ext_slow,1}};  \
		frequency = 0.8 + (0.4 * (speed factor [20,70]));  \
		volume = camExt * (speed envelope [20,50,50,90]);  \
		range = 200; \
		rangeCurve[] = {{0,1},{30,1},{200,0}}; \
	};  \
	class PREFIX##_Plane_Ext_Glider_fast_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\glider\ext_fast,1}};  \
		frequency = 0.8 + (0.5 * (speed factor [40,120]));  \
		volume = camExt * (speed factor [50,90]);  \
		range = 300; \
		rangeCurve[] = {{0,1},{30,1},{300,0}}; \
	};	  \
	class PREFIX##_Plane_Int_Glider_rumble_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\gForce_1\int_gforce_hard,1}};  \
		frequency = 0.9 + (0.3 * (speed factor [0,120]));  \
		volume = camInt * (0.4 * (speed factor [0,120]));  \
	};  \
/* gFORCE */ \
	class PREFIX##_Plane_Int_gForce_hard_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\gForce_1\int_gforce_hard,1}};  \
		frequency = 0.8 + (0.4 * (gmeterZ factor [1.8,5]));  \
		volume = camInt * (gmeterZ factor [1.8,5]);  \
	};  \
/* RAIN */ \
	class PREFIX##_Plane_Int_rain_light_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\rain_1\int_rain_light,1}};  \
		frequency = 0.9 + (0.2 * (rain factor [0,0.5]));  \
		volume = camInt * (rain envelope [0,0.49, 0.5, 1])* (speed factor[50, 0]);  \
	};  \
	class PREFIX##_Plane_Int_rain_hard_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\rain_1\int_rain_hard,1}};  \
		frequency = 0.9 + (0.2 * (rain factor [0.5,1]));  \
		volume = camInt * (rain factor [0.5, 1]) * (speed factor[50, 0]);  \
	};  \
	class PREFIX##_Plane_ext_rain_light_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\rain_1\ext_rain_light,1}};  \
		frequency = 0.9 + (0.2 * (rain factor [0,0.5]));  \
		volume = camExt * (rain envelope [0,0.49, 0.5, 1])* (speed factor[50, 0]);  \
		range = 25;  \
	};  \
	class PREFIX##_Plane_ext_rain_hard_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\rain_1\ext_rain_hard,1}};  \
		frequency = 0.9 + (0.2 * (rain factor [0.5,1]));  \
		volume = camExt * (rain factor [0.5, 1]) * (speed factor[50, 0]);  \
		range = 35;  \
	};  \
/* WHEELS */ \
	class PREFIX##_Plane_int_wheels_SoundShader {  \
		samples[] = {{##FILEPATH##\shared\scrubland_bohemia\wheelsInt,1}};  \
		frequency = 1.2;  \
		volume = scrubLand factor[0.01, 0.20];  \
	}; 
	
/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/