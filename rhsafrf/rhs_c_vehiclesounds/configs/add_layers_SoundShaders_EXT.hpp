// EXTERIOR

#ifdef EXT_SOUND_LAYER_RATTLING
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Rattling_EXT_SoundShader
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SAMPLE_DEF(vehtype,var) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\add_layers\Rattling_##var##_EXT, 1}};
		SAMPLE_DEF(VEH_TYPE,EXT_RATTLING_VARIANT)
		frequency = INT_RATTLING_PITCH;
		volume = EXT_GLOBAL_VOLUME * EXT_RATTLING_VOLUME * RATTLING_CONDITION;
		range = EXT_RATTLING_RANGE;
	};
#endif

#ifdef EXT_SOUND_LAYER_STRESS
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Stress_EXT_SoundShader
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SAMPLE_DEF(vehtype,var) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\add_layers\Stress_##var##_EXT, 1}};
		SAMPLE_DEF(VEH_TYPE,EXT_STRESS_VARIANT)
		frequency = EXT_STRESS_PITCH;
		volume = EXT_GLOBAL_VOLUME * EXT_STRESS_VOLUME * STRESS_CONDITION;
		range = EXT_STRESS_RANGE;
	};
#endif

#ifdef EXT_SOUND_LAYER_RAIN
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Rain_EXT_SoundShader
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SAMPLE_DEF(vehtype,var) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\add_layers\Rain_##var##_EXT, 1}};
		SAMPLE_DEF(VEH_TYPE,EXT_RAIN_VARIANT)
		frequency = EXT_RAIN_PITCH;
		volume = EXT_GLOBAL_VOLUME * EXT_RAIN_VOLUME * RAIN_CONDITION;
		range = EXT_RAIN_RANGE;
	};
#endif
