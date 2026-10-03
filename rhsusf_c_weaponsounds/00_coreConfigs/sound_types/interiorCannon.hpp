#define WEAPONSOUNDSHADERS_INTERIORCANNON(WPNNAME,INSIDEMAXDIST,CALIBRENAME,LAYERNAME,FPVOLUME,SHOTVOLUME,FPMAXDIST,CLOSEMAXDIST,MIDMAXDIST,FARMAXDIST,FILEPATH,PREFIX) \
	class PREFIX##_##WPNNAME##_shot_inside_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\int_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\int_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\int_3,1} \
		}; \
		volume = FPVOLUME; \
		range = INSIDEMAXDIST ; \
		rangeCurve[] = { \
			{ 0, 1 }, \
			{ 1.2, 1 }, \
			{ INSIDEMAXDIST , 0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_fp_soundShader { \
		samples[] = { \
			{##FILEPATH##\specific\##WPNNAME##\fp_1,1}, \
			{##FILEPATH##\specific\##WPNNAME##\fp_2,1}, \
			{##FILEPATH##\specific\##WPNNAME##\fp_3,1} \
		}; \
		volume = FPVOLUME; \
		range = FPMAXDIST ; \
		rangeCurve[] = { \
			{ 0, 0 }, \
			{ 1.2, 0 }, \
			{ INSIDEMAXDIST , 1 }, \
			{ FPMAXDIST , 0 } \
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
			{ FPMAXDIST, 1 }, \
			{ CLOSEMAXDIST , 0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_mid_soundShader { \
		samples[] = { \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\mid_1,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\mid_2,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\mid_3,1} \
		}; \
		volume = SHOTVOLUME * (1 - (0.20 * forest)); \
		range = MIDMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST , 1}, \
			{ MIDMAXDIST ,   0 } \
		}; \
	}; \
	class PREFIX##_##WPNNAME##_shot_far_soundShader { \
		samples[] = { \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\far_1,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\far_2,1}, \
			{##FILEPATH##\shared\calibres\##CALIBRENAME##\far_3,1} \
		}; \
		volume = SHOTVOLUME * (1 - (0.2 * (forest max trees))); \
		range = FARMAXDIST ; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ CLOSEMAXDIST ,0 }, \
			{ MIDMAXDIST , 1}, \
			{ FARMAXDIST , 1 } \
		}; \
	};




/************************************************************************************************************************************/
/* S O U N D S E T S ****************************************************************************************************************/
/************************************************************************************************************************************/
#define WEAPONSOUNDSET_INTERIORCANNON(WPNNAME,VOL,VOLUMECURVE,PANNERTYPE,DISTANCEFILTER,PREFIX) \
	class PREFIX##_##WPNNAME##_Shot_SoundSet { \
		soundShaders[] = { \
			##PREFIX##_##WPNNAME##_shot_inside_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_fp_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_close_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_mid_SoundShader, \
			##PREFIX##_##WPNNAME##_shot_far_SoundShader \
		}; \
		occlusionFactor = 0.25; \
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