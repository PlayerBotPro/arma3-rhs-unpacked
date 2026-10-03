#define HELISOUNDSHADERS_DEFAULT(HELINAME,MAXDIST,HELI_MAX_RPM,FILEPATH,PREFIX) \
	class PREFIX##_Heli_##HELINAME##_ext_close_base_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_close_base,1}}; \
		frequency = 1; \
		volume = 1  * (rpm factor [HELI_MAX_RPM / 5, HELI_MAX_RPM]); \
		range = 750; \
		rangeCurve[] = {{0,1},{100,1},{750,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_close_bass_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_close_bass,1}}; \
		frequency = 1 + (0.3 * (distance factor [100, 750])); \
		volume = 1 * engineOn * (rpm factor [HELI_MAX_RPM / 5, HELI_MAX_RPM]) * (1 + (0.25 * (speed factor [0,20]))); \
		range = 850; \
		rangeCurve[] = {{0,1},{100,1},{850,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_mid_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_mid,1}}; \
		frequency = 1; \
		volume = 1 * engineOn * (rpm factor [0, HELI_MAX_RPM]); \
		range = 1000; \
		rangeCurve[] = {{0,0},{100,0},{750,1},{1500,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_flyAwayLayer_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_flyAwayLayer,1}}; \
		frequency = 1; \
		volume = 1 * engineOn * (rpm factor [0, HELI_MAX_RPM]) * (0.5 + (0.5 * (speed factor [0,20]))); \
		range = 950; \
		rangeCurve[] = {{0,1},{80,1},{950,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_flyTowardsLayer_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_flyTowardsLayer,1}}; \
		frequency = 1; \
		volume = 1 * engineOn * (rpm factor [0, HELI_MAX_RPM]) * (speed Factor [0, 35]); \
		range = 1000; \
		rangeCurve[] = {{0,0},{15,1},{150,1},{1000,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_far_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_far,1}}; \
		frequency = 1; \
		volume = 1 * engineOn * (rpm factor [0, HELI_MAX_RPM]); \
		range = MAXDIST; \
		rangeCurve[] = {{0,0},{750,0},{1500,1},{ MAXDIST ,1}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotorScrew_close_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_rotorScrew_close,1}}; \
		frequency = 1; \
		volume = 1 * engineOn * (rpm factor [0, HELI_MAX_RPM]); \
		range = 550; \
		rangeCurve[] = {{0,1},{60,1},{550,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotor_close_Base_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_rotor_close_base,1}}; \
		frequency = 1.1 - (0.2 * rotorthrust) *  (rpm factor [-100, HELI_MAX_RPM / 3]); \
		volume = 1 * (rpm factor [HELI_MAX_RPM / 8, HELI_MAX_RPM]) * (1 + (0.2 * rotorThrust)); \
		range = 550; \
		rangeCurve[] = {{0,1},{60,1},{550,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotor_close_Bass_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_rotor_close_bass,1}}; \
		frequency = (rpm factor [-100, HELI_MAX_RPM / 3]) - (0.25 * rotorThrust); \
		volume = 0.5 *  (rpm factor [HELI_MAX_RPM / 10, HELI_MAX_RPM]) * (1 + (0.5 * rotorThrust)); \
		range = 800; \
		rangeCurve[] = {{0,1},{130,1},{800,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotor_mid_Base_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_rotor_mid_base,1}}; \
		frequency = 1; \
		volume = 1 *  (rpm factor [HELI_MAX_RPM / 10, HELI_MAX_RPM]); \
		range = 1200; \
		rangeCurve[] = {{0,0},{60,0},{550,1},{1200,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotor_swift_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_rotor_swift,1}}; \
		frequency = (rpm factor [-100, HELI_MAX_RPM / 3]); \
		volume = 0.75 * (rpm factor [HELI_MAX_RPM / 5, HELI_MAX_RPM]); \
		range = 250; \
		rangeCurve[] = {{0,1},{30,1},{250,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_reverb_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\ext_reverb,1}}; \
		frequency = (rpm factor [-100, HELI_MAX_RPM / 3]); \
		volume = 1  * (rpm factor [HELI_MAX_RPM / 5, HELI_MAX_RPM]); \
		range = 500; \
		rangeCurve[] = {{0,1},{500,0}}; \
	}; \
	class PREFIX##_Heli_##HELINAME##_Int_engine_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\int_engine,1}}; \
		frequency = (rpm factor [-100, HELI_MAX_RPM / 3]); \
		volume = 0.75 * ((rotorSpeed-0.75)*4); \
	}; \
	class PREFIX##_Heli_##HELINAME##_Int_rotor_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\int_rotor,1}}; \
		frequency = (rpm factor [-100, HELI_MAX_RPM / 3]); \
		volume = 0.75 * (0 max (rotorSpeed-0.1))*(1 + rotorThrust); \
	}; \
	class PREFIX##_Heli_##HELINAME##_Int_slow_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\int_slow,1}}; \
		frequency = 1; \
		volume = 0.75 * engineOn * (rpm factor [0, HELI_MAX_RPM]) * (speed factor [30,0]); \
	}; \
	class PREFIX##_Heli_##HELINAME##_Int_mid_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\int_mid,1}}; \
		frequency = 1; \
		volume = 0.75 * engineOn * (rpm factor [0, HELI_MAX_RPM]) * (speed envelope [0,30,35,80]); \
	}; \
	class PREFIX##_Heli_##HELINAME##_Int_fast_SoundShader { \
		samples[] = {{##FILEPATH##\##HELINAME##\int_fast,1}}; \
		frequency = 1 * (1 + (0.2 * (speed factor [70, 120]))); \
		volume = 0.75 * engineOn * (rpm factor [0, HELI_MAX_RPM]) * (speed factor [35,80]); \
	};



#define HELISOUNDSETS_DEFAULT(HELINAME,PREFIX) \
	class PREFIX##_Heli_##HELINAME##_ext_close_base_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_close_base_SoundShader}; \
		volumeFactor = 1.65; \
		volumeCurve = InverseSquare3Curve; \
		shape = ##PREFIX##_Heli_baseTopSemiSpace; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_close_bass_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_close_bass_SoundShader}; \
		volumeFactor = 1.65; \
		volumeCurve = InverseSquare3Curve; \
		shape = ##PREFIX##_Heli_bassRearSemispace_Hind; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_mid_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_mid_SoundShader}; \
		volumeFactor = 1.65; \
		volumeCurve = InverseSquare2Curve; \
		sound3DProcessingType = ##PREFIX##_PlaneExt_Middle_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_far_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_far_SoundShader}; \
		volumeFactor = 1.9; \
		occlusionFactor = 0.1; \
		volumeCurve = InverseSquare2Curve; \
		sound3DProcessingType = PlaneExt_Distant_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_flyAwayLayer_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_flyAwayLayer_SoundShader}; \
		volumeFactor = 1.9; \
		occlusionFactor = 0.1; \
		volumeCurve = InverseSquare2Curve; \
		shape = ##PREFIX##_flyAwaySemispace; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_flyTowardsLayer_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_flyTowardsLayer_SoundShader}; \
		volumeFactor = 1.9; \
		occlusionFactor = 0.1; \
		volumeCurve = InverseSquare2Curve; \
		shape = ##PREFIX##_flyTowardsSemispace; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotorScrew_close_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_rotorScrew_close_SoundShader}; \
		volumeFactor = 1.70; \
		volumeCurve = InverseSquare2Curve; \
		shape = ##PREFIX##_Heli_rotorScrewTopSemiSpace; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotor_close_base_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_rotor_close_base_SoundShader}; \
		volumeFactor = 1.85; \
		volumeCurve = InverseSquare2Curve; \
		shape = ##PREFIX##_Heli_rotorTopSemiSpace; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotor_close_bass_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_rotor_close_bass_SoundShader}; \
		volumeFactor = 1.95; \
		volumeCurve = InverseSquare3Curve; \
		shape = ##PREFIX##_Heli_rotorBassTopSemiSpace; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotor_mid_base_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_rotor_mid_base_SoundShader}; \
		volumeFactor = 1.85; \
		volumeCurve = InverseSquare3Curve; \
		shape = ##PREFIX##_Heli_rotorTopSemiSpace; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_rotor_swift_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_rotor_swift_SoundShader}; \
		volumeFactor = 0.9; \
		occlusionFactor = 0.2; \
		shape = ##PREFIX##_Heli_rotorSwiftTopSemiSpace; \
		volumeCurve = InverseSquare2Curve; \
		sound3DProcessingType = ##PREFIX##_HeliExt_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_ext_reverb_SoundSet: PREFIX##_Heli_Ext_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_ext_reverb_SoundShader}; \
		volumeFactor = 1.4; \
		shape = ##PREFIX##_Heli_reverbSemiSpace; \
		volumeCurve = InverseSquare2Curve; \
		sound3DProcessingType = ##PREFIX##_HeliReverb_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_int_engine_SoundSet: PREFIX##_Heli_Int_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_Int_engine_SoundShader}; \
		volumeFactor = 1; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_int_rotor_SoundSet: PREFIX##_Heli_Int_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_Int_rotor_SoundShader}; \
		volumeFactor = 1; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_int_slow_SoundSet: PREFIX##_Heli_Int_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_Int_slow_SoundShader}; \
		volumeFactor = 1; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_int_mid_SoundSet: PREFIX##_Heli_Int_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_Int_mid_SoundShader}; \
		volumeFactor = 1; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	}; \
	class PREFIX##_Heli_##HELINAME##_int_fast_SoundSet: PREFIX##_Heli_Int_Base_SoundSet { \
		soundShaders[] = {##PREFIX##_Heli_##HELINAME##_Int_fast_SoundShader}; \
		volumeFactor = 1; \
		sound3DProcessingType = VehicleInt_Front_3DProcessingType; \
	};



#define APPLYHELISOUNDSETSEXT_DEFAULT(HELINAME,PREFIX) \
				##PREFIX##_Heli_##HELINAME##_ext_close_base_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_close_bass_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_mid_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_far_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_flyAwayLayer_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_flyTowardsLayer_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_rotorScrew_close_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_rotor_close_base_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_rotor_close_bass_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_rotor_mid_base_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_turbine_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_rotor_swift_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_ext_reverb_SoundSet


#define APPLYHELISOUNDSETSINT_DEFAULT(HELINAME,PREFIX) \
				##PREFIX##_Plane_Int_wind_light_soundSet, \
				##PREFIX##_Plane_Int_wind_hard_soundSet, \
				##PREFIX##_Plane_Int_gForce_hard_soundSet, \
				##PREFIX##_Plane_Int_rain_light_soundSet, \
				##PREFIX##_Plane_Int_rain_hard_soundSet, \
				##PREFIX##_Plane_ext_rain_light_soundSet, \
				##PREFIX##_Plane_ext_rain_hard_soundSet



#define APPLYHELISOUNDSETSINT2_DEFAULT(HELINAME,PREFIX) \
				##PREFIX##_Heli_##HELINAME##_int_engine_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_int_rotor_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_int_slow_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_int_mid_SoundSet, \
				##PREFIX##_Heli_##HELINAME##_int_fast_SoundSet, \
				##PREFIX##_Plane_Int_wind_light_soundSet, \
				##PREFIX##_Plane_Int_wind_hard_soundSet, \
				##PREFIX##_Plane_Int_gForce_hard_soundSet, \
				##PREFIX##_Plane_Int_rain_light_soundSet, \
				##PREFIX##_Plane_Int_rain_hard_soundSet, \
				##PREFIX##_Plane_ext_rain_light_soundSet, \
				##PREFIX##_Plane_ext_rain_hard_soundSet
