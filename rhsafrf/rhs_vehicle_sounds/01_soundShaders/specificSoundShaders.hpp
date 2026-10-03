#define FILEMACRO(PREFIX,FILEPATH) \
/* Hind */ \
	class PREFIX##_Heli_Hind_ext_turbine_SoundShader { \
		samples[] = {{##FILEPATH##\Hind\ext_turbine,1}}; \
		frequency = (1 * (rpm factor [0, 9700])) + (0.15 * rotorThrust) + (0.3 * (speed factor [0,100])); \
		volume = 1  * (rpm factor [2000, 11700]) * (1 + (0.35 * ((abs speed) factor [0,90]))); \
		range = 290; \
		rangeCurve[] = {{0,1},{30,1},{290,0}}; \
	}; 

	
/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/