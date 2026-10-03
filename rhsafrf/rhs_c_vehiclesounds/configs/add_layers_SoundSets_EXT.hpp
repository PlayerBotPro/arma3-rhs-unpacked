#ifdef EXT_SOUND_LAYER_RATTLING
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Rattling_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SHADERS_DEF(vehname,modtag) soundShaders[] = {##modtag##_##vehname##_Rattling_EXT_SoundShader};
		SHADERS_DEF(VEH_NAME,MOD_TAG)
		posOffset[] = {EXT_RATTLING_POSITION_OFFSET};
	};
#endif

#ifdef EXT_SOUND_LAYER_STRESS
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Stress_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SHADERS_DEF(vehname,modtag) soundShaders[] = {##modtag##_##vehname##_Stress_EXT_SoundShader};
		SHADERS_DEF(VEH_NAME,MOD_TAG)
		posOffset[] = {EXT_STRESS_POSITION_OFFSET};
	};
#endif

#ifdef EXT_SOUND_LAYER_RAIN
	#define CLASS_DEF(vehname,modtag) class ##modtag##_##vehname##_Rain_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet
	CLASS_DEF(VEH_NAME,MOD_TAG)
	{
		#define SHADERS_DEF(vehname,modtag) soundShaders[] = {##modtag##_##vehname##_Rain_EXT_SoundShader};
		SHADERS_DEF(VEH_NAME,MOD_TAG)
		posOffset[] = {EXT_RAIN_POSITION_OFFSET};
	};
#endif
