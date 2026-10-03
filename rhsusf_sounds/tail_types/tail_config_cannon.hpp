#define RHSUSF_TAILSHADERCONFIG_CANNON(TYPENAME,MAXDIST) \
	class RHSUSF_##TYPENAME##_Meadows_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_0m_3,1}}; \
		volume = 5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3); \
		range = 350; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 350,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Meadows_350m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_350m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_350m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Meadows_350m_3,1}}; \
		volume = 5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 350,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Houses_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_0m_3,1}}; \
		volume = 5.45*((1-interior/1.4)*houses/3); \
		range = 350; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 350,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Houses_350m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_350m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_350m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Houses_350m_3,1}}; \
		volume = 5.45*((1-interior/1.4)*houses/3); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 350,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Trees_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_0m_3,1}}; \
		volume = 5.45*((1-interior/1.4)*trees/3); \
		range = 350; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 350,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Trees_350m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_350m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_350m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\forest_350m_3,1}}; \
		volume = 5.45*((1-interior/1.4)*trees/3); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 350,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Forest_0m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_0m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_0m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_0m_3,1}}; \
		volume = 5.45*((1-interior/1.4)*Forest/3); \
		range = 350; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 350,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_##TYPENAME##_Forest_350m_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_350m_1,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_350m_2,1}, \
			{rhsusf\addons\rhsusf_sounds\tails\##TYPENAME##\Forest_350m_3,1}}; \
		volume = 5.45*(1.4*((1-interior/1.4)*forest/3)); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 350,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; 



#define RHSUSF_TAILSETCONFIG_CANNON(TYPENAME) \
	class RHSUSF_##TYPENAME##_Tail_SoundSet { \
		soundShaders[] = { \
			RHSUSF_##TYPENAME##_Meadows_0m_SoundShader, \
			RHSUSF_##TYPENAME##_Meadows_350m_SoundShader, \
			RHSUSF_##TYPENAME##_Houses_0m_SoundShader, \
			RHSUSF_##TYPENAME##_Houses_350m_SoundShader, \
			RHSUSF_##TYPENAME##_Trees_0m_SoundShader, \
			RHSUSF_##TYPENAME##_Trees_350m_SoundShader, \
			RHSUSF_##TYPENAME##_Forest_0m_SoundShader, \
			RHSUSF_##TYPENAME##_Forest_350m_SoundShader \
		}; \
		volumeFactor = 1; \
		volumeCurve = RHSUSF_cannonSoundCurve; \
		sound3DProcessingType = RHSUSF_Cannon_3DProcessingType; \
		soundShadersLimit = 2; \
		distanceFilter = RHSUSF_defaultDistanceFilter; \
		frequencyRandomizer = 0.1; \
		occlusionFactor = 0.3; \
		obstructionFactor = 0; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; 
