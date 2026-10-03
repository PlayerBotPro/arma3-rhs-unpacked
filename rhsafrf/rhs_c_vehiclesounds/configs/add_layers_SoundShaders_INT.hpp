// INTERIOR

#ifdef INT_SOUND_LAYER_TONE_ENGINE_OFF
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Interior_Tone_Engine_Off_SoundShader
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SAMPLE_DEF(vehtype,var) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\add_layers\Tone_Engine_Off_##var##_INT, 1}};
		SAMPLE_DEF(VEH_TYPE,INT_TONE_ENGINE_OFF_VARIANT)
		frequency = INT_TONE_ENGINE_OFF_PITCH;
		volume = INT_GLOBAL_VOLUME * INT_TONE_ENGINE_OFF_VOLUME * INT_TONE_ENGINE_OFF_CONDITION;
		range = 60;
	};
#endif

#ifdef INT_SOUND_LAYER_TONE_ENGINE_ON
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Interior_Tone_Engine_On_SoundShader
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SAMPLE_DEF(vehtype,var) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\add_layers\Tone_Engine_On_##var##_INT, 1}};
		SAMPLE_DEF(VEH_TYPE,INT_TONE_ENGINE_ON_VARIANT)
		frequency = INT_TONE_ENGINE_ON_PITCH;
		volume = INT_GLOBAL_VOLUME * INT_TONE_ENGINE_ON_VOLUME * INT_TONE_ENGINE_ON_CONDITION;
		range = 60;
	};
#endif

#ifdef INT_SOUND_LAYER_RATTLING
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Rattling_INT_SoundShader
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SAMPLE_DEF(vehtype,samplecampos,var) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\add_layers\Rattling_##var##_##samplecampos##, 1}};
		SAMPLE_DEF(VEH_TYPE,SAMPLE_CAMPOS,INT_RATTLING_VARIANT)
		frequency = INT_RATTLING_PITCH;
		volume = INT_GLOBAL_VOLUME * INT_RATTLING_VOLUME * RATTLING_CONDITION;
		range = 60;
	};
#endif

#ifdef INT_SOUND_LAYER_STRESS
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Stress_INT_SoundShader
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SAMPLE_DEF(vehtype,samplecampos,var) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\add_layers\Stress_##var##_##samplecampos##, 1}};
		SAMPLE_DEF(VEH_TYPE,SAMPLE_CAMPOS,INT_STRESS_VARIANT)
		frequency = INT_STRESS_PITCH;
		volume = INT_GLOBAL_VOLUME * INT_STRESS_VOLUME * STRESS_CONDITION;
		range = 60;
	};
#endif

#ifdef INT_SOUND_LAYER_RAIN
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Rain_INT_SoundShader
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SAMPLE_DEF(vehtype,samplecampos,var) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\add_layers\Rain_##var##_##samplecampos##, 1}};
		SAMPLE_DEF(VEH_TYPE,SAMPLE_CAMPOS,INT_RAIN_VARIANT)
		frequency = INT_RAIN_PITCH;
		volume = INT_GLOBAL_VOLUME * INT_RAIN_VOLUME * RAIN_CONDITION;
		range = 60;
	};
#endif
