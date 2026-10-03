#define RHS_TAILSHADERCONFIG(TYPENAME,MAXDIST) \
	class RHS_##TYPENAME##_Meadows_0m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Meadows_0m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Meadows_0m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Meadows_0m_3,1}}; \
		volume =  3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3); \
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
		volume =  3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3); \
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
		volume =  3.85*((1-interior/1.4)*houses/3); \
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
		volume =  3.85*((1-interior/1.4)*houses/3); \
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
		volume =  3.85*((1-interior/1.4)*trees/3); \
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
		volume =  3.85*((1-interior/1.4)*trees/3); \
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
		volume =  3.85*((1-interior/1.4)*Forest/3); \
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
		volume =  3.85*(1.4*((1-interior/1.4)*forest/3)); \
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
		volume =  3.85*((interior)*0.65); \
		range = 50; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 50,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Interior_50m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_50m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_50m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_50m_3,1}}; \
		volume =  3.85*((interior)*0.65); \
		range = 150; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 50,1 }, \
			{ 150,0 } \
		};  \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Interior_150m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_150m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_150m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_150m_3,1}}; \
		volume =  3.85*((interior)*0.65); \
		range = 550; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 50,0 }, \
			{ 150,1 }, \
			{ 550,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHS_##TYPENAME##_Interior_550m_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_550m_1,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_550m_2,1}, \
			{rhsafrf\addons\rhs_sounds\tails\##TYPENAME##\Interior_550m_3,1}}; \
		volume =  3.85*((interior)*0.65); \
		range = 1000; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 150,0 }, \
			{ 550,1 }, \
			{ 1000,0 } \
		}; \
		limitation = 1; \
	};

#define RHS_TAILSETCONFIG(TYPENAME) \
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
			RHS_##TYPENAME##_Interior_50m_SoundShader, \
			RHS_##TYPENAME##_Interior_150m_SoundShader, \
			RHS_##TYPENAME##_Interior_550m_SoundShader \
		}; \
		volumeFactor = 1; \
		volumeCurve = RHS_tailSoundCurve; \
		sound3DProcessingType = WeaponMediumShotTail3DProcessingType; \
		soundShadersLimit = 2; \
		occlusionFactor = 0.3; \
		obstructionFactor = 0; \
		distanceFilter = RHS_rifleTailDistanceFilter; \
		frequencyRandomizer = 0.1; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	};
