#define RHSUSF_TAILSOUNDSHADERS_VEHICLE(TAILNAME,VOL,CLOSEMAX,FARMAX,NOISENAME,NOISEVOLUME,NOISEDIST) \
	class RHSUSF_veh_##TAILNAME##_Meadows_close_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Meadows_close_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Meadows_close_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Meadows_close_3,1}}; \
		volume =  VOL * (meadows max sea) * (1 - (interior * 0.7)) * (campos max 0.2); \
		range = CLOSEMAX; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CLOSEMAX##, 0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_veh_##TAILNAME##_Meadows_far_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Meadows_far_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Meadows_far_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Meadows_far_3,1}}; \
		volume =  VOL * (meadows max sea) * (1 - (interior * 0.7)); \
		range = FARMAX; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ ##CLOSEMAX##,1 }, \
			{ ##FARMAX##, 1 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_veh_##TAILNAME##_Houses_close_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Houses_close_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Houses_close_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Houses_close_3,1}}; \
		volume =  VOL * houses * (1 - (interior * 0.7)); \
		range = CLOSEMAX; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CLOSEMAX##, 0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_veh_##TAILNAME##_Houses_far_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Houses_far_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Houses_far_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Houses_far_3,1}}; \
		volume =  VOL * houses * (1 - (interior * 0.7)); \
		range = FARMAX; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ ##CLOSEMAX##,1 }, \
			{ ##FARMAX##, 1 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_veh_##TAILNAME##_Forest_close_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Forest_close_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Forest_close_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Forest_close_3,1}}; \
		volume =  VOL * (forest max trees) * (1 - (interior * 0.7)) * (campos max 0.2); \
		range = CLOSEMAX; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CLOSEMAX##, 0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_veh_##TAILNAME##_Forest_far_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Forest_far_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Forest_far_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Forest_far_3,1}}; \
		volume =  VOL * (forest max trees) * (1 - (interior * 0.7)); \
		range = FARMAX; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ ##CLOSEMAX##,1 }, \
			{ ##FARMAX##, 1 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_veh_##TAILNAME##_Interior_close_SoundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Interior_close_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Interior_close_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\tails\##TAILNAME##\Interior_close_3,1}}; \
		volume =  VOL * 3.20 * interior * (campos max 0.2); \
		range = 7; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 3,1 }, \
			{ 7,0 } \
		}; \
		limitation = 1; \
	}; \
	class RHSUSF_veh_##TAILNAME##_noise_meadows_soundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\meadows_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\meadows_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\meadows_3,1} \
		}; \
		volume = (NOISEVOLUME * (meadows max sea)) * (1 - interior); \
		range = NOISEDIST; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##NOISEDIST##,0 } \
		}; \
	}; \
	class RHSUSF_veh_##TAILNAME##_noise_meadows_interior_soundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\meadows_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\meadows_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\meadows_3,1} \
		}; \
		volume = (NOISEVOLUME * (meadows max sea)) * (1 - interior); \
		range = NOISEDIST; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##NOISEDIST##,0 } \
		}; \
	}; \
	class RHSUSF_veh_##TAILNAME##_noise_forest_soundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\forest_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\forest_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\forest_3,1} \
		}; \
		volume = (NOISEVOLUME * (forest max trees)) * (1 - interior); \
		range = NOISEDIST; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##NOISEDIST##,0 } \
		}; \
	}; \
	class RHSUSF_veh_##TAILNAME##_noise_houses_soundShader { \
		samples[] = { \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\houses_1,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\houses_2,1}, \
			{rhsusf\addons\rhsusf_weapon_sounds\noise\##NOISENAME##\houses_3,1} \
		}; \
		volume = (NOISEVOLUME * houses)) * (1 - interior); \
		range = NOISEDIST; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##NOISEDIST##,0 } \
		}; \
	}; 
	


#define RHSUSF_TAILSOUNDSET_VEHICLE(TAILNAME,VOL) \
	class RHSUSF_veh_##TAILNAME##_Tail_SoundSet { \
		soundShaders[] = { \
			RHSUSF_veh_##TAILNAME##_Meadows_close_SoundShader, \
			RHSUSF_veh_##TAILNAME##_Meadows_far_SoundShader, \
			RHSUSF_veh_##TAILNAME##_Houses_close_SoundShader, \
			RHSUSF_veh_##TAILNAME##_Houses_far_SoundShader, \
			RHSUSF_veh_##TAILNAME##_Forest_close_SoundShader, \
			RHSUSF_veh_##TAILNAME##_Forest_far_SoundShader, \
			RHSUSF_veh_##TAILNAME##_Interior_close_SoundShader, \
			RHSUSF_veh_##TAILNAME##_noise_meadows_SoundShader, \
			RHSUSF_veh_##TAILNAME##_noise_forest_SoundShader, \
			RHSUSF_veh_##TAILNAME##_noise_houses_SoundShader \
		}; \
		volumeFactor = 1 * VOL; \
		volumeCurve = InverseSquare2Curve; \
		occlusionFactor = 0.3; \
		obstructionFactor = 0; \
		sound3DProcessingType = RHSUSF_Tail_3DProcessingType; \
		soundShadersLimit = 2; \
		distanceFilter = RHSUSF_rifleShotDistanceFilter; \
		frequencyRandomizer = 2; \
		frequencyRandomizerMin = 0.2; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; 