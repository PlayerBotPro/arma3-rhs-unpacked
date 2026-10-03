#define RHSSAF_WEAPONSOUNDSHADERS_DEFAULT(WPNNAME,CLOSURENAME,CLOSUREVOL,CLOSUREDISTANCE,PUNCHNAME,PUNCHVOLUME,CHARACTERNAME,CHARACTERVOLUME,CHARACTERDIST,TAILNAME,TAILVOL,TAILCLOSEMAX,CLOSEMAXDIST,MIDMAXDIST,FARMAXDIST) \
	class RHSSAF_##WPNNAME##_punch_close_soundShader { \
		samples[] = { \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\close_1,1}, \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\close_2,1}, \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\close_3,1} \
		}; \
		volume = PUNCHVOLUME; \
		range = CLOSEMAXDIST; \
		rangeCurve[] = { \
			{ 0, 1 }, \
			{ 7, 1 }, \
			{ 15,0 }, \
			{ ##CLOSEMAXDIST##, 0 } \
		}; \
	}; \
	class RHSSAF_##WPNNAME##_punch_close_interior_soundShader { \
		samples[] = { \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\close_1,1}, \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\close_2,1}, \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\close_3,1} \
		}; \
		volume = PUNCHVOLUME * (1 - (0.15 * interior)); \
		range = CLOSEMAXDIST; \
		rangeCurve[] = { \
			{ 0, 0 }, \
			{ 7, 0 }, \
			{ 15,1 }, \
			{ ##CLOSEMAXDIST##, 0 } \
		}; \
	}; \
	class RHSSAF_##WPNNAME##_punch_mid_soundShader { \
		samples[] = { \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\mid_1,1}, \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\mid_2,1}, \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\mid_3,1} \
		}; \
		volume = PUNCHVOLUME * (1 - (0.2 * interior)); \
		range = MIDMAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ ##CLOSEMAXDIST##, 1}, \
			{ ##MIDMAXDIST##,0 } \
		}; \
	}; \
	class RHSSAF_##WPNNAME##_punch_far_soundShader { \
		samples[] = { \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\far_1,1}, \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\far_2,1}, \
			{RHSSAF\addons\RHSSAF_sounds\punch\##PUNCHNAME##\far_3,1} \
		}; \
		volume = PUNCHVOLUME * (1 - (0.25 * interior)); \
		range = FARMAXDIST; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CLOSEMAXDIST##,0 }, \
			{ ##MIDMAXDIST##, 1}, \
			{ ##FARMAXDIST##,1 } \
		}; \
	}; \
	class RHSSAF_##WPNNAME##_character_soundShader { \
		samples[] = { \
			{RHSSAF\addons\RHSSAF_sounds\character\##CHARACTERNAME##\character_1,1}, \
			{RHSSAF\addons\RHSSAF_sounds\character\##CHARACTERNAME##\character_2,1}, \
			{RHSSAF\addons\RHSSAF_sounds\character\##CHARACTERNAME##\character_3,1} \
		}; \
		volume = CHARACTERVOLUME; \
		range = CHARACTERDIST; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CHARACTERDIST##,0 } \
		}; \
	}; \
	class RHSSAF_##WPNNAME##_Closure_SoundShader { \
		samples[] = { \
			{RHSSAF\addons\RHSSAF_sounds\closure\##CLOSURENAME##\Closure_1,1}, \
			{RHSSAF\addons\RHSSAF_sounds\closure\##CLOSURENAME##\Closure_2,1}, \
			{RHSSAF\addons\RHSSAF_sounds\closure\##CLOSURENAME##\Closure_3,1}}; \
		volume = CLOSUREVOL; \
		range = CLOSUREDISTANCE; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CLOSUREDISTANCE##,0 } \
		}; \
	}; \
	class RHSSAF_##WPNNAME##_Interior_closeMono_SoundShader { \
		samples[] = { \
			{RHSSAF\addons\RHSSAF_sounds\tails\##TAILNAME##\Interior_close_1,1}, \
			{RHSSAF\addons\RHSSAF_sounds\tails\##TAILNAME##\Interior_close_2,1}, \
			{RHSSAF\addons\RHSSAF_sounds\tails\##TAILNAME##\Interior_close_3,1}}; \
		volume =  TAILVOL * 2.8 * interior; \
		range = TAILCLOSEMAX; \
		rangeCurve[] = { \
			{ 1,0 }, \
			{ 3,0 }, \
			{ 7,1 }, \
			{ ##TAILCLOSEMAX##, 0 } \
		}; \
	}; \
	class RHSSAF_##WPNNAME##_Interior_far_SoundShader { \
		samples[] = { \
			{RHSSAF\addons\RHSSAF_sounds\tails\##TAILNAME##\Interior_far_1,1}, \
			{RHSSAF\addons\RHSSAF_sounds\tails\##TAILNAME##\Interior_far_2,1}, \
			{RHSSAF\addons\RHSSAF_sounds\tails\##TAILNAME##\Interior_far_3,1}}; \
		volume =  TAILVOL * 2.2 * interior; \
		range = FARMAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ ##TAILCLOSEMAX##,1 }, \
			{ ##FARMAXDIST##, 1 } \
		}; \
	}; 
	



/************************************************************************************************************************************/
/* S O U N D S E T S ****************************************************************************************************************/	
/************************************************************************************************************************************/
#define RHSSAF_WEAPONSOUNDSET_DEFAULT(WPNNAME,VOL,VOLUMECURVE,PANNERTYPE,DISTANCEFILTER) \
	class RHSSAF_##WPNNAME##_Shot_SoundSet { \
		soundShaders[] = { \
			RHSSAF_##WPNNAME##_punch_close_SoundShader, \
			RHSSAF_##WPNNAME##_punch_close_interior_SoundShader, \
			RHSSAF_##WPNNAME##_punch_mid_SoundShader, \
			RHSSAF_##WPNNAME##_punch_far_SoundShader, \
			RHSSAF_##WPNNAME##_character_SoundShader, \
			RHSSAF_##WPNNAME##_Closure_SoundShader, \
			RHSSAF_##WPNNAME##_Interior_closeMono_SoundShader, \
			RHSSAF_##WPNNAME##_Interior_far_SoundShader \
		}; \
		occlusionFactor = 0.5; \
		obstructionFactor = 0.3; \
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