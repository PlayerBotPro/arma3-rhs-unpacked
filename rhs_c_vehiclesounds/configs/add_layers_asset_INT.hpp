// INTERIOR SOUND LAYERS

#ifdef INT_SOUND_LAYER_TONE_ENGINE_OFF
	#define CLASS_DEF(vehname,modtag) ##modtag##_##vehname##_Interior_Tone_Engine_Off_SoundSet,
	CLASS_DEF(VEH_NAME,MOD_TAG)
#endif

#ifdef INT_SOUND_LAYER_TONE_ENGINE_ON
	#define CLASS_DEF(vehname,modtag) ##modtag##_##vehname##_Interior_Tone_Engine_On_SoundSet,
	CLASS_DEF(VEH_NAME,MOD_TAG)
#endif

#ifdef INT_SOUND_LAYER_RATTLING
	#define CLASS_DEF(vehname,modtag) ##modtag##_##vehname##_Rattling_INT_SoundSet,
	CLASS_DEF(VEH_NAME,MOD_TAG)
#endif

#ifdef INT_SOUND_LAYER_STRESS
	#define CLASS_DEF(vehname,modtag) ##modtag##_##vehname##_Stress_INT_SoundSet,
	CLASS_DEF(VEH_NAME,MOD_TAG)
#endif

#ifdef INT_SOUND_LAYER_RAIN
	#define CLASS_DEF(vehname,modtag) ##modtag##_##vehname##_Rain_INT_SoundSet,
	CLASS_DEF(VEH_NAME,MOD_TAG)
#endif
