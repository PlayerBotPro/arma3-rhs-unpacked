#define RHS_TAILSHADERCONFIG_SD(TYPENAME,MAXDIST) \
	class RHS_##TYPENAME##_Meadows_0m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Meadows_0m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Meadows_0m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Meadows_0m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Meadows_150m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Meadows_150m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Meadows_150m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Meadows_150m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Houses_0m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Houses_0m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Houses_0m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Houses_0m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*houses/3); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Houses_150m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Houses_150m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Houses_150m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Houses_150m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*houses/3); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Trees_0m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\forest_0m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\forest_0m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\forest_0m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*trees/3); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Trees_150m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\forest_150m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\forest_150m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\forest_150m_3,1}}; \
		volume = 2.40*((1-interior/1.4)*trees/3); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Forest_0m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Forest_0m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Forest_0m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Forest_0m_3,1}}; \
		volume = 2.40*((1-interior)*Forest); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Forest_150m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Forest_150m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Forest_150m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Forest_150m_3,1}}; \
		volume = 2.40*((1-interior)*Forest); \
		range = MAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,1 }, \
			{ ##MAXDIST##,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Interior_0m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_0m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_0m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_0m_3,1}}; \
		volume = 2.40*((interior)*0.7); \
		range = 40; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 40,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Interior_40m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_40m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_40m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_40m_3,1}}; \
		volume = 2.40*((interior)*0.7); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 40,1 }, \
			{ 150,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Interior_150m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_150m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_150m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_150m_3,1}}; \
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

	
#define RHS_TAILSETCONFIG_SD(TYPENAME) \
	class RHS_##TYPENAME##_Tail_SoundSet { \
		soundShaders[] = { \
			RHS_##TYPENAME##_Meadows_0m_SoundShader, \
			RHS_##TYPENAME##_Meadows_150m_SoundShader, \
			RHS_##TYPENAME##_Houses_0m_SoundShader, \
			RHS_##TYPENAME##_Houses_150m_SoundShader, \
			RHS_##TYPENAME##_Trees_0m_SoundShader, \
			RHS_##TYPENAME##_Trees_150m_SoundShader, \
			RHS_##TYPENAME##_Forest_0m_SoundShader, \
			RHS_##TYPENAME##_Forest_150m_SoundShader, \
			RHS_##TYPENAME##_Interior_0m_SoundShader, \
			RHS_##TYPENAME##_Interior_40m_SoundShader, \
			RHS_##TYPENAME##_Interior_150m_SoundShader \
		}; \
		volumeFactor = 1; \
		volumeCurve = RHS_silencedSoundCurve; \
		sound3DProcessingType = WeaponMediumShotTail3DProcessingType; \
		soundShadersLimit = 2; \
		distanceFilter = RHS_rifleTailDistanceFilter; \
		frequencyRandomizer = 0.1; \
		occlusionFactor = 0.3; \
		obstructionFactor = 0; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; 
