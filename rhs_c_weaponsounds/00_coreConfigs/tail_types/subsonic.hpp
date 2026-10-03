#define TAILSOUNDSHADERS_SUBSONIC(TAILNAME,FOLDERNAME,VOL,INTVOL,CLOSEMAX,FILEPATH,PREFIX) \
	class PREFIX##_##TAILNAME##_Meadows_close_SoundShader { \
		samples[] = { \
			{##FILEPATH##\tails\##FOLDERNAME##\Meadows_close_1,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Meadows_close_2,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Meadows_close_3,1}}; \
		volume =  VOL * (meadows max sea) * (1 - (interior * 0.7)); \
		range = CLOSEMAX ; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CLOSEMAX##, 1 } \
		}; \
		limitation = 1; \
	}; \
	class PREFIX##_##TAILNAME##_Houses_close_SoundShader { \
		samples[] = { \
			{##FILEPATH##\tails\##FOLDERNAME##\Houses_close_1,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Houses_close_2,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Houses_close_3,1}}; \
		volume =  VOL * houses * (1 - (interior * 0.7)); \
		range = CLOSEMAX ; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CLOSEMAX##, 1 } \
		}; \
		limitation = 1; \
	}; \
	class PREFIX##_##TAILNAME##_Forest_close_SoundShader { \
		samples[] = { \
			{##FILEPATH##\tails\##FOLDERNAME##\Forest_close_1,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Forest_close_2,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Forest_close_3,1}}; \
		volume =  VOL * (forest max trees) * (1 - (interior * 0.7)); \
		range = CLOSEMAX ; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CLOSEMAX##, 1 } \
		}; \
		limitation = 1; \
	}; \
	class PREFIX##_##TAILNAME##_Interior_close_SoundShader { \
		samples[] = { \
			{##FILEPATH##\tails\##FOLDERNAME##\Interior_close_1,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Interior_close_2,1}, \
			{##FILEPATH##\tails\##FOLDERNAME##\Interior_close_3,1}}; \
		volume =  INTVOL  * interior; \
		range = 7; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 3,1 }, \
			{ 7,0 } \
		}; \
		limitation = 1; \
	};



#define TAILSOUNDSET_SUBSONIC(TAILNAME,VOL,PREFIX) \
	class PREFIX##_##TAILNAME##_Tail_SoundSet { \
		soundShaders[] = { \
			##PREFIX##_##TAILNAME##_Meadows_close_SoundShader, \
			##PREFIX##_##TAILNAME##_Houses_close_SoundShader, \
			##PREFIX##_##TAILNAME##_Forest_close_SoundShader, \
			##PREFIX##_##TAILNAME##_Interior_close_SoundShader \
		}; \
		volumeFactor = 1 * VOL; \
		volumeCurve = InverseSquare2Curve; \
		occlusionFactor = 0.25; \
		obstructionFactor = 0; \
		sound3DProcessingType = ##PREFIX##_Tail_3DProcessingType; \
		soundShadersLimit = 2; \
		distanceFilter = ##PREFIX##_rifleShotDistanceFilter; \
		frequencyRandomizer = 1.2; \
		frequencyRandomizerMin = 0.2; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	};