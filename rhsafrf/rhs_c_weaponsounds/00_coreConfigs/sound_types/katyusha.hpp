#define WEAPONSOUNDSHADERS_KATYUSHA(WPNNAME,FPVOLUME,SHOTVOLUME,FPMAXDIST,MIDMAXDIST,FARMAXDIST,FILEPATH,PREFIX) \
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
	class PREFIX##_##WPNNAME##_shot_mid_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\mid_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\mid_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\mid_3,1} \
		}; \
		volume =  SHOTVOLUME * (1 - (0.20 * forest)); \
		range = MIDMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ FPMAXDIST , 1}, \
			{ MIDMAXDIST ,0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_far_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\far_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\far_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\far_3,1} \
		}; \
		volume =  SHOTVOLUME * (1 - (0.2 * (forest max trees))); \
		range = FARMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ FPMAXDIST ,  0 }, \
			{ MIDMAXDIST , 0.75}, \
			{ FARMAXDIST , 0.75 } \
		}; \
	};




/************************************************************************************************************************************/
/* S O U N D S E T S ****************************************************************************************************************/
/************************************************************************************************************************************/
#define WEAPONSOUNDSET_KATYUSHA(WPNNAME,VOL,VOLUMECURVE,PANNERTYPE,DISTANCEFILTER,PREFIX) \
	class PREFIX##_##WPNNAME##_Shot_SoundSet { \
		soundShaders[] = { \
			##PREFIX##_##WPNNAME##_shot_fp_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_mid_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_far_SoundShader \
		}; \
		occlusionFactor = 0.15; \
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