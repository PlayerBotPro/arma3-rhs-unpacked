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
	class PREFIX##_##WPNNAME##_stereoLayer_soundShader { \
		samples[] = { \
			{##FILEPATH##\shared\layers\##LAYERNAME##\stereoLayer_1,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\stereoLayer_2,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\stereoLayer_3,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\stereoLayer_4,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\stereoLayer_5,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\stereoLayer_6,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\stereoLayer_7,1} \
		}; \
		volume = " 1 - (houses max forest)"; \
		range = FARMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST , 0 }, \
			{ MIDMAXDIST   , 1}, \
			{ FARMAXDIST   , 0} \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_urbanLayer_soundShader { \
		samples[] = { \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urbanLayer_1,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urbanLayer_2,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urbanLayer_3,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urbanLayer_4,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urbanLayer_5,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urbanLayer_6,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\urbanLayer_7,1} \
		}; \
		volume = "houses * 1.65"; \
		range = FARMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST , 0 }, \
			{ MIDMAXDIST   , 1}, \
			{ FARMAXDIST   , 0} \
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
		volume = SHOTVOLUME * 0.85 * (1 - interior) * (1 - (0.20 * forest)); \
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
		volume = SHOTVOLUME * (1 - interior) * (1 - (forest max trees)); \
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
		volume = SHOTVOLUME * 0.7 * (1 - interior) * (forest max trees); \
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
		volume = TAILVOL * 1.5 * interior; \
		range = CLOSEMAXDIST / 2 ; \
		rangeCurve[] = { \
			{ 1,0 }, \
			{ 3,0 }, \
			{ 7,1 }, \
			{ CLOSEMAXDIST / 2  , 0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_Interior_far_SoundShader { \
		samples[] = { \
			{##FILEPATH##\shared\layers\##LAYERNAME##\Interior_mid_1,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\Interior_mid_2,1}, \
			{##FILEPATH##\shared\layers\##LAYERNAME##\Interior_mid_3,1}}; \
		volume = TAILVOL * interior * 0.7; \
		range = INTERIORMAX; \
		rangeCurve[] = { \
			{ 0,    0}, \
			{ CLOSEMAXDIST / 2 ,  1 }, \
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
			##PREFIX##_##WPNNAME##_shot_mid_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_far_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_forest_far_soundShader, \
			##PREFIX##_##WPNNAME##_Interior_closeMono_SoundShader, \
			##PREFIX##_##WPNNAME##_urbanLayer_SoundShader, \
			##PREFIX##_##WPNNAME##_Interior_far_SoundShader \
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
	}; \
	class PREFIX##_##WPNNAME##_stereoLayer_SoundSet { \
		soundShaders[] = { \
			##PREFIX##_##WPNNAME##_stereoLayer_SoundShader \
		}; \
		occlusionFactor = 0.25; \
		obstructionFactor = 0.78; \
		volumeFactor = 0.76; \
		volumeCurve = "inverseSquare3Curve"; \
		sound3DProcessingType = "rhsusf_stereoLayer_3DProcessingTyp"; \
		distanceFilter = "rhsusf_rifleShotDistanceFilter"; \
		frequencyRandomizer = 1.8; \
		frequencyRandomizerMin = 0.4; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	};