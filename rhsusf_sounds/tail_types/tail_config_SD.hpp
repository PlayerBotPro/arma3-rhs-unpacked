#define RHSUSF_TAILSHADERCONFIG_SD(TYPENAME,MAXDIST) \
	class RHSUSF_##TYPENAME##_Meadows_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_0m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Meadows_150m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_150m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_150m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_150m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Houses_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_0m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*houses/3); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Houses_150m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_150m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_150m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_150m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*houses/3); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Trees_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_0m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*trees/3); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Trees_150m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_150m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_150m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_150m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*trees/3); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Forest_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_0m_3,1}}; \
		volume = 2.40*((1-interior)*Forest); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Forest_150m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_150m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_150m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_150m_3,1}}; \
		volume = 2.40*((1-interior)*Forest); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Interior_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Interior_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Interior_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Interior_0m_3,1}}; \
		volume = 2.40*((interior)*0.7); \
		range = 40; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 40,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Interior_40m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Interior_40m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Interior_40m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Interior_40m_3,1}}; \
		volume = 2.40*((interior)*0.7); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 40,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Interior_150m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Interior_150m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Interior_150m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Interior_150m_3,1}}; \
		volume = 2.40*((interior)*0.68); \
		range = 350; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 40,0 }, \
			{ 150,1 }, \
			{ 350,0 } \
		}; \
		limitation = 1; \
	}; 

	
#define RHSUSF_TAILSETCONFIG_SD(TYPENAME) \
	class RHSUSF_##TYPENAME##_Tail_SoundSet { \
		soundShaders[] = { \
			RHSUSF_##TYPENAME##_Meadows_0m_SoundShader, \
			RHSUSF_##TYPENAME##_Meadows_150m_SoundShader, \
			RHSUSF_##TYPENAME##_Houses_0m_SoundShader, \
			RHSUSF_##TYPENAME##_Houses_150m_SoundShader, \
			RHSUSF_##TYPENAME##_Trees_0m_SoundShader, \
			RHSUSF_##TYPENAME##_Trees_150m_SoundShader, \
			RHSUSF_##TYPENAME##_Forest_0m_SoundShader, \
			RHSUSF_##TYPENAME##_Forest_150m_SoundShader, \
			RHSUSF_##TYPENAME##_Interior_0m_SoundShader, \
			RHSUSF_##TYPENAME##_Interior_40m_SoundShader, \
			RHSUSF_##TYPENAME##_Interior_150m_SoundShader \
		}; \
		volumeFactor = 1; \
		volumeCurve = RHSUSF_silencedSoundCurve; \
		sound3DProcessingType = WeaponMediumShotTail3DProcessingType; \
		soundShadersLimit = 2; \
		distanceFilter = RHSUSF_rifleTailDistanceFilter; \
		frequencyRandomizer = 0.1; \
		occlusionFactor = 0.3; \
		obstructionFactor = 0; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; 
