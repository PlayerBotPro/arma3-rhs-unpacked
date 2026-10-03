#define TAILSOUNDSHADERS_INTERIORCANNON(TAILNAME,FOLDERNAME,VOL,CLOSEMAX,FILEPATH,PREFIX) \
	class PREFIX##_##TAILNAME##_Meadows_close_SoundShader { \
		samples[] = { \
			{##FILEPATH##\tails\##FOLDERNAME##\Meadows_close_1,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Meadows_close_2,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Meadows_close_3,1}}; \
		volume =  VOL * (meadows max sea) ; \
		range = CLOSEMAX ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 1.2, 0 }, \
			{ 1.21, 1 }, \
			{ ##CLOSEMAX##, 0 } \
		}; \
		limitation = 1; \
	}; \
	class PREFIX##_##TAILNAME##_Houses_close_SoundShader { \
		samples[] = { \
			{##FILEPATH##\tails\##FOLDERNAME##\Houses_close_1,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Houses_close_2,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Houses_close_3,1}}; \
		volume =  VOL * houses ; \
		range = CLOSEMAX ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 2.4, 0 }, \
			{ 3, 1 }, \
			{ ##CLOSEMAX##, 0 } \
		}; \
		limitation = 1; \
	}; \
	class PREFIX##_##TAILNAME##_Forest_close_SoundShader { \
		samples[] = { \
			{##FILEPATH##\tails\##FOLDERNAME##\Forest_close_1,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Forest_close_2,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Forest_close_3,1}}; \
		volume =  VOL * (forest max trees) ; \
		range = CLOSEMAX ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ 2.4, 0 }, \
			{ 3, 1 }, \
			{ ##CLOSEMAX##, 0 } \
		}; \
		limitation = 1; \
	};


#define TAILSOUNDSET_INTERIORCANNON(TAILNAME,VOL,PREFIX) \
	class PREFIX##_##TAILNAME##_Tail_SoundSet { \
		soundShaders[] = { \
			##PREFIX##_##TAILNAME##_Meadows_close_SoundShader, \
			##PREFIX##_##TAILNAME##_Houses_close_SoundShader, \
			##PREFIX##_##TAILNAME##_Forest_close_SoundShader \
		}; \
		volumeFactor = 1 * VOL; \
		volumeCurve = InverseSquare2Curve; \
		occlusionFactor = 0.18; \
		obstructionFactor = 0; \
		sound3DProcessingType = ##PREFIX##_cannonTail_3DProcessingType; \
		soundShadersLimit = 2; \
		distanceFilter = ##PREFIX##_rifleShotDistanceFilter; \
		frequencyRandomizer = 2; \
		frequencyRandomizerMin = 0.2; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; 