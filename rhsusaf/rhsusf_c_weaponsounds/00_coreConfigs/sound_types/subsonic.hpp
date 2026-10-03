#define WEAPONSOUNDSHADERS_SUBSONIC(WPNNAME,FPVOLUME,SHOTVOLUME,FPMAXDIST,CLOSEMAXDIST,FARMAXDIST,TAILNAME,TAILVOL,TAILCLOSEMAX,FILEPATH,PREFIX) \
	class PREFIX##_##WPNNAME##_shot_fp_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\fp_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\fp_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\fp_3,1} \
		}; \
		volume = FPVOLUME; \
		range = FPMAXDIST ; \
		rangeCurve[] = { \
			{ 0, 1 }, \
			{ FPMAXDIST , 0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_close_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\close_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\close_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\close_3,1} \
		}; \
		volume = SHOTVOLUME; \
		range = CLOSEMAXDIST ; \
		rangeCurve[] = { \
			{ 0, 0 }, \
			{ FPMAXDIST, 0.9 }, \
			{ CLOSEMAXDIST , 0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_far_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\far_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\far_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\far_3,1} \
		}; \
		volume = SHOTVOLUME * (1 - interior) * (0.4 - (forest max trees)); \
		range = FARMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST , 0.9 }, \
			{ FARMAXDIST , 0.75 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_Interior_closeMono_SoundShader { \
		samples[] = { \
			{##FILEPATH##\tails\##TAILNAME##\Interior_close_1,1}, \
			{##FILEPATH##\tails\##TAILNAME##\Interior_close_2,1}, \
			{##FILEPATH##\tails\##TAILNAME##\Interior_close_3,1}}; \
		volume = TAILVOL * 1.5 * interior; \
		range = CLOSEMAXDIST ; \
		rangeCurve[] = { \
			{ 1,0 }, \
			{ 3,0 }, \
			{ 7,1 }, \
			{ CLOSEMAXDIST , 0 } \
		}; \
	};




/************************************************************************************************************************************/
/* S O U N D S E T S ****************************************************************************************************************/
/************************************************************************************************************************************/
#define WEAPONSOUNDSET_SUBSONIC(WPNNAME,VOL,VOLUMECURVE,PANNERTYPE,DISTANCEFILTER,PREFIX) \
	class PREFIX##_##WPNNAME##_Shot_SoundSet { \
		soundShaders[] = { \
			##PREFIX##_##WPNNAME##_shot_fp_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_close_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_far_SoundShader, \
			##PREFIX##_##WPNNAME##_Interior_closeMono_SoundShader \
		}; \
		occlusionFactor = 0.45; \
		obstructionFactor = 0.38; \
		volumeFactor = VOL; \
		volumeCurve = VOLUMECURVE; \
		sound3DProcessingType = PANNERTYPE; \
		distanceFilter = DISTANCEFILTER; \
		frequencyRandomizer = 0.4; \
		frequencyRandomizerMin = 0.1; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	};