#define FILEMACRO(PREFIX,FILEPATH) \
	class PREFIX##_Heli_Ext_Base_SoundSet { \
		spatial = 1; \
		loop = 1; \
		occlusionObstruction = 1; \
		occlusionFactor = 0.5; \
		obstructionFactor = 0; \
	}; \
	class PREFIX##_Heli_Int_Base_SoundSet { \
		spatial = 0; \
		loop = 1; \
	};
/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/