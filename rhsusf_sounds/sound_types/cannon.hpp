// REGULAR ---------------------------------------------------------------//
#define RHSUSF_SOUNDSHADER_CANNON(WPNNAME,MAXDIST) \
	class RHSUSF_##WPNNAME##_Closure_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\Closure_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\Closure_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\Closure_3,1}}; \
		volume = 1.912*campos; \
		range = 15; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 15,0 } \
		}; \
	}; \
	class RHSUSF_##WPNNAME##_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\0m_3,1}}; \
		volume = 2.412*campos; \
		range = 50; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 50,0 } \
		}; \
	}; \
	class RHSUSF_##WPNNAME##_Int_Closure_SoundShader: RHSUSF_##WPNNAME##_Closure_SoundShader { \
		volume = 1.912*(1-campos); \
	}; \
	class RHSUSF_##WPNNAME##_int_0m_SoundShader: RHSUSF_##WPNNAME##_0m_SoundShader { \
		volume = 2.412*(1-campos); \
	}; \
	class RHSUSF_##WPNNAME##_50m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\50m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\50m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\50m_3,1}}; \
		volume = 1.6252; \
		range = 150; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 50,1 }, \
			{ 150,0 } \
		};  \
	}; \
	class RHSUSF_##WPNNAME##_150m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\150m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\150m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\150m_3,1}}; \
		volume = 1.464; \
		range = 550; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 50,0 }, \
			{ 150,1 }, \
			{ 550,0 } \
		}; \
	}; \
	class RHSUSF_##WPNNAME##_550m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\550m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\550m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\550m_3,1}}; \
		volume = 0.823; \
		range = 1000; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,0 }, \
			{ 550,1 }, \
			{ 1000,0 } \
		}; \
	}; \
	class RHSUSF_##WPNNAME##_1000m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\1000m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\1000m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\1000m_3,1}}; \
		volume = (0.34-(interior*0.34)); \
		range = 1800; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 550,0 }, \
			{ 1000,1 }, \
			{ 1800,0 } \
		}; \
	}; \
	class RHSUSF_##WPNNAME##_1800m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\1800m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\1800m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\1800m_3,1}}; \
		volume = (0.35-(interior*0.35)); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 1000,0 }, \
			{ 1800,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
	};
	
// SD --------------------------------------------------------------------//
#define RHSUSF_SOUNDSHADER_Cannon_SD(WPNNAME,MAXDIST) \
	class RHSUSF_##WPNNAME##_SD_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_0m_3,1}}; \
		volume = 0.85; \
		range = 30; \
		rangeCurve[] = { \
			{ 0, 1 }, \
			{ 30,0 } \
		}; \
	}; \
	class RHSUSF_##WPNNAME##_SD_30m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_30m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_30m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_30m_3,1}}; \
		volume = 0.75; \
		range = 100; \
		rangeCurve[] = { \
			{ 0,   0 }, \
			{ 30,  1 }, \
			{ 150, 0 } \
		}; \
	}; \
	class RHSUSF_##WPNNAME##_SD_150m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_150m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_150m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_150m_3,1}}; \
		volume = 0.65; \
		range = 350; \
		rangeCurve[] = { \
			{ 0,   0 }, \
			{ 30,  0 }, \
			{ 150, 1 }, \
			{ 350, 0 } \
		}; \
	}; \
	class RHSUSF_##WPNNAME##_SD_350m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_350m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_350m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\##WPNNAME##\SD_350m_3,1}}; \
		volume = (0.55-(interior*0.55)); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,   0 }, \
			{ 150, 0 }, \
			{ 350, 1 }, \
			{ ##MAXDIST##, 0 } \
		}; \
	}; 

/************************************************************************************************************************************/
/* S O U N D S E T S ****************************************************************************************************************/	
/************************************************************************************************************************************/
#define RHSUSF_SOUNDSET_CANNON(WPNNAME) \
	class RHSUSF_##WPNNAME##_Closure_SoundSet { \
		soundShaders[] = {RHSUSF_##WPNNAME##_Closure_SoundShader}; \
		volumeFactor = 1.1; \
		volumeCurve = RHSUSF_cannonSoundCurve; \
		sound3DProcessingType = WeaponHeavyShot3DProcessingTypee; \
		distanceFilter = RHSUSF_defaultDistanceFilter; \
		frequencyRandomizer = 0.05; \
		occlusionFactor = 0.5; \
		obstructionFactor = 0.3; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; \
	class RHSUSF_##WPNNAME##_Shot_SoundSet { \
		soundShaders[] = {\
			RHSUSF_##WPNNAME##_0m_SoundShader,RHSUSF_##WPNNAME##_50m_SoundShader,RHSUSF_##WPNNAME##_150m_SoundShader,RHSUSF_##WPNNAME##_550m_SoundShader,RHSUSF_##WPNNAME##_1000m_SoundShader,RHSUSF_##WPNNAME##_1800m_SoundShader\
		}; \
		volumeFactor = 1.35; \
		volumeCurve = RHSUSF_cannonSoundCurve; \
		sound3DProcessingType = WeaponMediumShot3DProcessingType; \
		distanceFilter = RHSUSF_defaultDistanceFilter; \
		occlusionFactor = 0.5; \
		obstructionFactor = 0.3; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; \
	class RHSUSF_##WPNNAME##_Int_Shot_SoundSet { \
		soundShaders[] = {\
			RHSUSF_##WPNNAME##_int_0m_SoundShader,RHSUSF_##WPNNAME##_int_Closure_SoundShader\
		}; \
		volumeFactor = 1.35; \
		volumeCurve = RHSUSF_cannonSoundCurve; \
		sound3DProcessingType = WeaponMediumShot3DProcessingType; \
		distanceFilter = RHSUSF_vehicletDistanceFilter; \
		occlusionFactor = 0.5; \
		obstructionFactor = 0.3; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; 

// SD --------------------------------------------------------------------//
#define RHSUSF_SOUNDSET_CANNON_SD(WPNNAME) \
	class RHSUSF_##WPNNAME##_ShotSD_SoundSet { \
		soundShaders[] = {RHSUSF_##WPNNAME##_SD_0m_SoundShader,RHSUSF_##WPNNAME##_SD_30m_SoundShader,RHSUSF_##WPNNAME##_SD_150m_SoundShader,RHSUSF_##WPNNAME##_SD_350m_SoundShader}; \
		volumeFactor = 0.90; \
		volumeCurve = RHSUSF_silencedSoundCurve; \
		sound3DProcessingType = WeaponMediumShot3DProcessingType; \
		distanceFilter = RHSUSF_defaultDistanceFilter; \
		occlusionFactor = 0.5; \
		obstructionFactor = 0.3; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; 



