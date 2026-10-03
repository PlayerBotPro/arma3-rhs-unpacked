#ifdef EXT_SOUND_LAYER_RATTLING
	#define CLASS_DEF(vehname,modtag) ##modtag##_##vehname##_Rattling_EXT_SoundSet,
	CLASS_DEF(VEH_NAME,MOD_TAG)
#endif

#ifdef EXT_SOUND_LAYER_STRESS
	#define CLASS_DEF(vehname,modtag) ##modtag##_##vehname##_Stress_EXT_SoundSet,
	CLASS_DEF(VEH_NAME,MOD_TAG)
#endif

#ifdef EXT_SOUND_LAYER_RAIN
	#define CLASS_DEF(vehname,modtag) ##modtag##_##vehname##_Rain_EXT_SoundSet,
	CLASS_DEF(VEH_NAME,MOD_TAG)
#endif
