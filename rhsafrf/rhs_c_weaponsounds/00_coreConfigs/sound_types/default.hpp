#define WEAPONSOUNDSHADERS_DEFAULT(WPNNAME,CALIBRENAME,LAYERNAME,FPVOLUME,SHOTVOLUME,FPMAXDIST,CLOSEMAXDIST,MIDMAXDIST,FARMAXDIST,TAILNAME,TAILVOL,TAILCLOSEMAX,INTERIORMAX,FILEPATH,PREFIX) \
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
	class PREFIX##_##WPNNAME##_shot_urbanLayer_soundShader { \
		samples[] = { \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urban_close_1,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urban_close_2,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urban_close_3,1} \
		}; \
		volume =  SHOTVOLUME * 0.76 * (1 - interior) * houses; \
		range = 400 ; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ 400 , 0} \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_close_soundShader { \
		samples[] = { \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\close_1,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\close_2,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\close_3,1} \
		}; \
		volume = SHOTVOLUME; \
		range = CLOSEMAXDIST ; \
		rangeCurve[] = { \
			{ 0, 0 }, \
			{ FPMAXDIST, 0.9 }, \
			{ CLOSEMAXDIST , 0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_mid_soundShader { \
		samples[] = { \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\mid_1,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\mid_2,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\mid_3,1} \
		}; \
		volume =  SHOTVOLUME * 0.85 * (1 - interior) * (1 - (0.20 * forest)); \
		range = MIDMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST , 0.95}, \
			{ MIDMAXDIST ,0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_far_soundShader { \
		samples[] = { \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\far_1,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\far_2,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\far_3,1} \
		}; \
		volume =  SHOTVOLUME * (1 - interior) * (1 - (forest max trees)); \
		range = FARMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST ,0 }, \
			{ MIDMAXDIST , 0.90}, \
			{ FARMAXDIST , 0.85 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_forest_far_soundShader { \
		samples[] = { \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\forest_far_1,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\forest_far_2,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\forest_far_3,1} \
		}; \
		volume =  SHOTVOLUME * 0.7 * (1 - interior) * (forest max trees); \
		range = FARMAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST ,0 }, \
			{ MIDMAXDIST , 0.6}, \
			{ FARMAXDIST , 0.6 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_Interior_closeMono_SoundShader { \
		samples[] = { \
			{##FILEPATH##\tails\##TAILNAME##\Interior_close_1,1}, \
			{##FILEPATH##\tails\##TAILNAME##\Interior_close_2,1}, \
			{##FILEPATH##\tails\##TAILNAME##\Interior_close_3,1}}; \
		volume =  TAILVOL * 1.5 * interior; \
		range =  CLOSEMAXDIST / 2 ; \
		rangeCurve[] = { \
			{ 1,0 }, \
			{ 3,0 }, \
			{ 7,1 }, \
			{  CLOSEMAXDIST / 2  , 0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_Interior_far_SoundShader { \
		samples[] = { \
			{##FILEPATH##\shared\layers\##LAYERNAME##\Interior_mid_1,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\Interior_mid_2,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\Interior_mid_3,1}}; \
		volume =  TAILVOL * interior * 0.7; \
		range = INTERIORMAX; \
		rangeCurve[] = { \
			{ 0,    0}, \
			{  CLOSEMAXDIST / 2 ,  1 }, \
			{ CLOSEMAXDIST , 0.3 }, \
			{ INTERIORMAX , 0 } \
		}; \
	};




/************************************************************************************************************************************/
/* S O U N D S E T S ****************************************************************************************************************/
/************************************************************************************************************************************/
#define WEAPONSOUNDSET_DEFAULT(WPNNAME,VOL,VOLUMECURVE,PANNERTYPE,DISTANCEFILTER,PREFIX) \
	class PREFIX##_##WPNNAME##_Shot_SoundSet { \
		soundShaders[] = { \
			##PREFIX##_##WPNNAME##_shot_fp_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_close_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_urbanLayer_soundShader, \
			##PREFIX##_##WPNNAME##_shot_mid_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_far_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_forest_far_soundShader, \
			##PREFIX##_##WPNNAME##_Interior_closeMono_SoundShader, \
			##PREFIX##_##WPNNAME##_Interior_far_SoundShader \
		}; \
		occlusionFactor = 0.35; \
		obstructionFactor = 0.18; \
		volumeFactor = VOL; \
		volumeCurve = VOLUMECURVE; \
		sound3DProcessingType = PANNERTYPE; \
		distanceFilter = DISTANCEFILTER; \
		frequencyRandomizer = 0.25; \
		frequencyRandomizerMin = 0.05; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	};