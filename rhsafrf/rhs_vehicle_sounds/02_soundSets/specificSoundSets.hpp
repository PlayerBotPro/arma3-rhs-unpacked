#define FILEMACRO(PREFIX,FILEPATH) \
/* Hind */ \
	class PREFIX##_Heli_Hind_ext_turbine_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_Hind_ext_turbine_SoundShader}; \
		volumeFactor = 0.84; \
		volumeCurve = InverseSquare2Curve; \
		shape = ##PREFIX##_turbine_rearSemispace_Hind; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; 


/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/