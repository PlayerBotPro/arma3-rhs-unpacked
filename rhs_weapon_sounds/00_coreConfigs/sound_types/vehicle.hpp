#define RHS_WEAPONSOUNDSHADERS_VEHICLE(WPNNAME,CLOSURENAME,CLOSUREVOL,CLOSUREDISTANCE,PUNCHNAME,PUNCHVOLUME,CHARACTERNAME,CHARACTERVOLUME,CHARACTERDIST,TAILNAME,TAILVOL,TAILCLOSEMAX,CLOSEMAXDIST,MIDMAXDIST,FARMAXDIST) \
	class RHS_veh_##WPNNAME##_punch_close_soundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\close_1,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\close_2,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\close_3,1} \
		}; \
		volume = PUNCHVOLUME * campos; \
		range = CLOSEMAXDIST; \
		rangeCurve[] = { \
			{ 0, 1 }, \
			{ 7, 1 }, \
			{ 15,0 }, \
			{ ##CLOSEMAXDIST##, 0 } \
		}; \
	}; \
	class RHS_veh_##WPNNAME##_punch_close_interior_soundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\close_1,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\close_2,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\close_3,1} \
		}; \
		volume = PUNCHVOLUME * (1 - campos); \
		range = CLOSEMAXDIST; \
		rangeCurve[] = { \
			{ 0, 1 }, \
			{ 7, 1 }, \
			{ 15,0 }, \
			{ ##CLOSEMAXDIST##, 0 } \
		}; \
	}; \
	class RHS_veh_##WPNNAME##_punch_mid_soundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\mid_1,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\mid_2,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\mid_3,1} \
		}; \
		volume = PUNCHVOLUME * (1 - (0.2 * interior)); \
		range = MIDMAXDIST; \
		rangeCurve[] = { \
			{ 0,0 }, \
			{ ##CLOSEMAXDIST##, 1}, \
			{ ##MIDMAXDIST##,0 } \
		}; \
	}; \
	class RHS_veh_##WPNNAME##_punch_far_soundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\far_1,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\far_2,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\punch\##PUNCHNAME##\far_3,1} \
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
	class RHS_veh_##WPNNAME##_character_soundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_weapon_sounds\character\##CHARACTERNAME##\character_1,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\character\##CHARACTERNAME##\character_2,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\character\##CHARACTERNAME##\character_3,1} \
		}; \
		volume = CHARACTERVOLUME * (campos max 0.1); \
		range = CHARACTERDIST; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CHARACTERDIST##,0 } \
		}; \
	}; \
	class RHS_veh_##WPNNAME##_Closure_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_weapon_sounds\closure\##CLOSURENAME##\Closure_1,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\closure\##CLOSURENAME##\Closure_2,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\closure\##CLOSURENAME##\Closure_3,1}}; \
		volume = CLOSUREVOL * (campos max 0.1); \
		range = CLOSUREDISTANCE; \
		rangeCurve[] = { \
			{ 0,1 }, \
			{ ##CLOSUREDISTANCE##,0 } \
		}; \
	}; \
	class RHS_veh_##WPNNAME##_Interior_closeMono_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_weapon_sounds\tails\##TAILNAME##\Interior_close_1,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\tails\##TAILNAME##\Interior_close_2,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\tails\##TAILNAME##\Interior_close_3,1}}; \
		volume =  TAILVOL * 2.8 * interior; \
		range = TAILCLOSEMAX; \
		rangeCurve[] = { \
			{ 1,0 }, \
			{ 3,0 }, \
			{ 7,1 }, \
			{ ##TAILCLOSEMAX##, 0 } \
		}; \
	}; \
	class RHS_veh_##WPNNAME##_Interior_far_SoundShader { \
		samples[] = { \
			{rhsafrf\addons\rhs_weapon_sounds\tails\##TAILNAME##\Interior_far_1,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\tails\##TAILNAME##\Interior_far_2,1}, \
			{rhsafrf\addons\rhs_weapon_sounds\tails\##TAILNAME##\Interior_far_3,1}}; \
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
#define RHS_WEAPONSOUNDSET_VEHICLE(WPNNAME,VOL,VOLUMECURVE,PANNERTYPE,DISTANCEFILTER) \
	class RHS_veh_##WPNNAME##_Shot_SoundSet { \
		soundShaders[] = { \
			RHS_veh_##WPNNAME##_punch_close_SoundShader, \
			RHS_veh_##WPNNAME##_punch_close_interior_SoundShader, \
			RHS_veh_##WPNNAME##_punch_mid_SoundShader, \
			RHS_veh_##WPNNAME##_punch_far_SoundShader, \
			RHS_veh_##WPNNAME##_character_SoundShader, \
			RHS_veh_##WPNNAME##_Closure_SoundShader, \
			RHS_veh_##WPNNAME##_Interior_closeMono_SoundShader, \
			RHS_veh_##WPNNAME##_Interior_far_SoundShader \
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
	}; \
	class RHS_veh_##WPNNAME##_Int_Shot_SoundSet { \
		soundShaders[] = { \
			RHS_veh_##WPNNAME##_punch_close_interior_SoundShader \
		}; \
		occlusionFactor = 0.5; \
		obstructionFactor = 0.3; \
		volumeFactor = VOL*0.7; \
		volumeCurve = VOLUMECURVE; \
		sound3DProcessingType = PANNERTYPE; \
		distanceFilter = RHS_vehicletDistanceFilter; \
		frequencyRandomizer = 0.5; \
		frequencyRandomizerMin = 0.1; \
		spatial = 1; \
		doppler = 0; \
		loop = 0; \
	}; 