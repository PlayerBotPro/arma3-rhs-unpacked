#define FILEMACRO(PREFIX,FILEPATH) \
/* BASE SOUNDSET */ \
	class PREFIX##_Plane_Ext_Base_SoundSet { \
		spatial = 1; \
		loop = 1; \
		occlusionObstruction = 1; \
		occlusionFactor = 0.5; \
		obstructionFactor = 0; \
	}; \
	class PREFIX##_Plane_Int_Base_SoundSet { \
		spatial = 0; \
		loop = 1; \
	}; \
/* RATTLING */ \
	class PREFIX##_Plane_Int_rattling_light_soundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_Int_rattling_light_soundShader}; \
		volumeFactor = 1.3; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
	class PREFIX##_Plane_Int_rattling_hard_soundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_Int_rattling_hard_soundShader}; \
		volumeFactor = 1.6; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
/* WIND */ \
	class PREFIX##_Plane_Int_wind_light_soundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_Int_wind_light_soundShader}; \
		volumeFactor = 0.85; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
	class PREFIX##_Plane_Int_wind_hard_soundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_Int_wind_hard_soundShader}; \
		volumeFactor = 1.05; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
/* GFORCE */ \
	class PREFIX##_Plane_Int_gForce_hard_soundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_Int_gForce_hard_soundShader}; \
		volumeFactor = 1.45; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
/* RAIN */ \
	class PREFIX##_Plane_Int_rain_light_soundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_Int_rain_light_soundShader}; \
		volumeFactor = 0.85; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
	class PREFIX##_Plane_Int_rain_hard_soundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_Int_rain_hard_soundShader}; \
		volumeFactor = 1.15; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
	class PREFIX##_Plane_ext_rain_light_soundSet: PREFIX##_Plane_ext_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_ext_rain_light_soundShader}; \
		volumeFactor = 1.35; \
		sound3DProcessingType = PREFIX##_vehicleRain_3DProcessingType; \
	}; \
	class PREFIX##_Plane_ext_rain_hard_soundSet: PREFIX##_Plane_ext_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_ext_rain_hard_soundShader}; \
		volumeFactor = 1.63; \
		sound3DProcessingType = PREFIX##_vehicleRain_3DProcessingType; \
	}; \
/* WHEELS */ \
	class PREFIX##_Plane_Int_wheels_soundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {PREFIX##_Plane_int_wheels_SoundShader}; \
		volumeFactor = 1.2; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	};

/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/