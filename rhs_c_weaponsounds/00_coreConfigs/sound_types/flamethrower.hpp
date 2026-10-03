#define WEAPONSOUNDSHADERS_FLAMETHROWER(WPNNAME,SHOTVOLUME,CLOSEMAXDIST,MIDMAXDIST,FARMAXDIST,FILEPATH,PREFIX) \
	class PREFIX##_##WPNNAME##_shot_close_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\close_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\close_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\close_3,1} \
		}; \
		volume = SHOTVOLUME; \
		range = CLOSEMAXDIST ; \
		rangeCurve[] = { \
			{ 0, 1 }, \
			{ 2, 1 }, \
			{ CLOSEMAXDIST , 0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_mid_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\mid_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\mid_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\mid_3,1} \
		}; \
		volume =  SHOTVOLUME *  (1 - (0.20 * forest)); \
		range = MIDMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST , 0.8}, \
			{ MIDMAXDIST ,0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_far_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\far_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\far_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\far_3,1} \
		}; \
		volume =  SHOTVOLUME * (1 - (0.3 * (forest max trees))); \
		range = FARMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST ,0 }, \
			{ MIDMAXDIST , 0.75}, \
			{ FARMAXDIST , 0.75 } \
		}; \
	};





/************************************************************************************************************************************/
/* S O U N D S E T S ****************************************************************************************************************/
/************************************************************************************************************************************/
#define WEAPONSOUNDSET_FLAMETHROWER(WPNNAME,VOL,VOLUMECURVE,PANNERTYPE,DISTANCEFILTER,PREFIX) \
	class PREFIX##_##WPNNAME##_Shot_SoundSet { \
		soundShaders[] = { \
			##PREFIX##_##WPNNAME##_shot_close_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_mid_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_far_SoundShader \
		}; \
		occlusionFactor = 0.35; \
		obstructionFactor = 0.18; \
		volumeFactor = VOL; \
		volumeCurve = VOLUMECURVE; \
		sound3DProcessingType = PANNERTYPE; \
		distanceFilter = DISTANCEFILTER; \
		frequencyRandomizer = 0.5; \
		frequencyRandomizerMin = 0.1; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	};