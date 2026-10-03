#define PLANESOUNDSHADERS_DEFAULT(PLANENAME,MAXDIST,FILEPATH,PREFIX) \
	class PREFIX##_Plane_##PLANENAME##_ext_close_low_SoundShader { \
		samples[] = {{##FILEPATH##\##PLANENAME##\ext_close_low,1}}; \
		frequency = 1 - ((rpm factor [0.2, 0.4]) * 0.1) + (0.35 * rpm * thrust); \
		volume = 1.75 * camExt * (rpm factor [0.3, 0.35]) * (thrust factor [0.85,0.15]); \
		range = 400; \
		rangeCurve[] = {{0,1},{30,1},{400,0}}; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_close_high_SoundShader { \
		samples[] = {{##FILEPATH##\##PLANENAME##\ext_close_high,1}}; \
		frequency = 0.95 - ((rpm factor [0.2, 0.4]) * 0.1) + (0.3 * rpm * thrust) + (0.2*(speed factor [15,100])); \
		volume = 2 * camExt * (rpm factor [0.3, 0.35]) * (thrust factor [0.15,0.85]); \
		range = 400; \
		rangeCurve[] = {{0,1},{30,1},{400,0}}; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_front_mid_SoundShader { \
		samples[] = {{##FILEPATH##\##PLANENAME##\ext_front_mid,1}}; \
		frequency = 1 - ((rpm factor [0.2, 0.4]) * 0.1) + (0.35 * rpm * thrust); \
		volume = 1 * (camExt*((rpm factor[0.2, 1]) + (0.25 * thrust))); \
		range = 1000; \
		rangeCurve[] = {{0,0},{30,0},{400,1},{1000,0}}; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_rear_mid_SoundShader { \
		samples[] = {{##FILEPATH##\##PLANENAME##\ext_rear_mid,1}}; \
		frequency = 1 - ((rpm factor [0.2, 0.4]) * 0.1) + (0.35 * rpm * thrust); \
		volume = 0.9 * (camExt*((rpm factor[0.2, 1]) + (0.25 * thrust))); \
		range = 1000; \
		rangeCurve[] = {{0,0},{30,0},{400,1},{1000,0}}; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_front_far_SoundShader { \
		samples[] = {{##FILEPATH##\##PLANENAME##\ext_front_far,1}}; \
		frequency = 1 - ((rpm factor [0.2, 0.4]) * 0.1) + (0.35 * rpm * thrust); \
		volume = 0.9 * (camExt*((rpm factor[0.2,1]) + (0.25 * thrust))); \
		range = MAXDIST; \
		rangeCurve[] = {{0,0},{400,0},{1000,1},{ MAXDIST ,1}}; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_rear_far_SoundShader { \
		samples[] = {{##FILEPATH##\##PLANENAME##\ext_rear_far,1}}; \
		frequency = 1 - ((rpm factor [0.2, 0.4]) * 0.1) + (0.35 * rpm * thrust); \
		volume = 1 * (camExt*((rpm factor[0.2,1]) + (0.25 * thrust))); \
		range = MAXDIST; \
		rangeCurve[] = {{0,0},{400,0},{1000,1},{ MAXDIST ,1}}; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_Int_Low_SoundShader { \
		samples[] = {{##FILEPATH##\##PLANENAME##\int_low,1}}; \
		frequency = 1 - ((rpm factor [0.2, 0.4]) * 0.1) + (0.35 * rpm * thrust); \
		volume = 1 * camInt * (rpm factor [0.3, 0.35]) * (thrust factor [0.85,0.15]); \
	}; \
	class PREFIX##_Plane_##PLANENAME##_Int_High_SoundShader { \
		samples[] = {{##FILEPATH##\##PLANENAME##\int_high,1}}; \
		frequency = 0.95 - ((rpm factor [0.2, 0.4]) * 0.1) + (0.3 * rpm * thrust) + (0.2*(speed factor [15,100])); \
		volume = 1 * camInt * (rpm factor [0.3, 0.35]) * (thrust factor [0.15,0.85]); \
	};
	
	
#define PLANESOUNDSETS_DEFAULT(PLANENAME,PREFIX) \
	class PREFIX##_Plane_##PLANENAME##_ext_close_Low_SoundSet: PREFIX##_Plane_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Plane_##PLANENAME##_ext_close_low_SoundShader}; \
		volumeFactor = 1.25; \
		volumeCurve = InverseSquare3Curve; \
		sound3DProcessingType = IFA3_PlaneExt_3DProcessingType; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_close_high_SoundSet: PREFIX##_Plane_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Plane_##PLANENAME##_ext_close_high_SoundShader}; \
		volumeFactor = 1.48; \
		volumeCurve = InverseSquare3Curve; \
		sound3DProcessingType = IFA3_PlaneExt_3DProcessingType; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_front_mid_SoundSet: PREFIX##_Plane_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Plane_##PLANENAME##_ext_front_mid_SoundShader}; \
		volumeFactor = 1.65; \
		shape = FrontSemispace10; \
		volumeCurve = InverseSquare2Curve; \
		sound3DProcessingType = IFA3_PlaneExt_Middle_3DProcessingType; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_front_far_SoundSet: PREFIX##_Plane_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Plane_##PLANENAME##_ext_front_far_SoundShader}; \
		volumeFactor = 1.9; \
		occlusionFactor = 0.1; \
		volumeCurve = InverseSquare2Curve; \
		shape = FrontSemispace60; \
		sound3DProcessingType = PlaneExt_Distant_3DProcessingType; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_rear_mid_SoundSet: PREFIX##_Plane_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Plane_##PLANENAME##_ext_rear_mid_SoundShader}; \
		volumeFactor = 1.65; \
		shape = RearSemispace10; \
		volumeCurve = InverseSquare2Curve; \
		sound3DProcessingType = IFA3_PlaneExt_Middle_3DProcessingType; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_ext_rear_far_SoundSet: PREFIX##_Plane_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Plane_##PLANENAME##_ext_rear_far_SoundShader}; \
		volumeFactor = 1.9; \
		occlusionFactor = 0.1; \
		volumeCurve = InverseSquare2Curve; \
		shape = RearSemispace20; \
		sound3DProcessingType = PlaneExt_Distant_3DProcessingType; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_Int_Low_SoundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Plane_##PLANENAME##_Int_Low_SoundShader}; \
		volumeFactor = 1.2; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
	class PREFIX##_Plane_##PLANENAME##_Int_High_SoundSet: PREFIX##_Plane_Int_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Plane_##PLANENAME##_Int_High_SoundShader}; \
		volumeFactor = 1.45; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	};
	
	
	
#define APPLYPLANESOUNDSETS_DEFAULT(PLANENAME,PREFIX) \
				##PREFIX##_Plane_##PLANENAME##_ext_close_Low_SoundSet, \
				##PREFIX##_Plane_##PLANENAME##_ext_close_high_SoundSet, \
				##PREFIX##_Plane_##PLANENAME##_ext_front_mid_SoundSet, \
				##PREFIX##_Plane_##PLANENAME##_ext_front_far_SoundSet, \
				##PREFIX##_Plane_##PLANENAME##_ext_rear_mid_SoundSet, \
				##PREFIX##_Plane_##PLANENAME##_ext_rear_far_SoundSet, \
				##PREFIX##_Plane_##PLANENAME##_Int_Low_SoundSet, \
				##PREFIX##_Plane_##PLANENAME##_Int_High_SoundSet, \
				##PREFIX##_Plane_Int_rattling_light_soundSet, \
				##PREFIX##_Plane_Int_rattling_hard_soundSet, \
				##PREFIX##_Plane_Int_wind_light_soundSet, \
				##PREFIX##_Plane_Int_wind_hard_soundSet, \
				##PREFIX##_Plane_Int_gForce_hard_soundSet, \
				##PREFIX##_Plane_Int_rain_light_soundSet, \
				##PREFIX##_Plane_Int_rain_hard_soundSet, \
				##PREFIX##_Plane_ext_rain_light_soundSet, \
				##PREFIX##_Plane_ext_rain_hard_soundSet, \
				##PREFIX##_Plane_Int_wheels_soundSet
				
	
#define APPLYGLIDERSOUNDSETS_DEFAULT(PREFIX) \
				##PREFIX##_Plane_Int_Glider_rumble_SoundSet, \
				##PREFIX##_Plane_Ext_Glider_slow_soundSet, \
				##PREFIX##_Plane_Ext_Glider_fast_soundSet, \
				##PREFIX##_Plane_Int_rattling_light_soundSet, \
				##PREFIX##_Plane_Int_rattling_hard_soundSet, \
				##PREFIX##_Plane_Int_wind_light_soundSet, \
				##PREFIX##_Plane_Int_wind_hard_soundSet, \
				##PREFIX##_Plane_Int_gForce_hard_soundSet, \
				##PREFIX##_Plane_Int_rain_light_soundSet, \
				##PREFIX##_Plane_Int_rain_hard_soundSet, \
				##PREFIX##_Plane_ext_rain_light_soundSet, \
				##PREFIX##_Plane_ext_rain_hard_soundSet, \
				##PREFIX##_Plane_Int_wheels_soundSet