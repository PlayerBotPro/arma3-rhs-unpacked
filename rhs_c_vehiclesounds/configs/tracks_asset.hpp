#ifdef SOUND_LAYER_TRACKS
	#define SOUNDSET_DEF(vehname,modtag,campos) ##modtag##_##vehname##_Tracks_Brake_Hard_##campos##_SoundSet,
	SOUNDSET_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	#define SOUNDSET_DEF(vehname,modtag,campos) ##modtag##_##vehname##_Tracks_Brake_Soft_##campos##_SoundSet,
	SOUNDSET_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	#define SOUNDSET_DEF(vehname,modtag,campos) ##modtag##_##vehname##_Tracks_Turn_Hard_##campos##_SoundSet,
	SOUNDSET_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	#define SOUNDSET_DEF(vehname,modtag,campos) ##modtag##_##vehname##_Tracks_Turn_Soft_##campos##_SoundSet,
	SOUNDSET_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	#define SOUNDSET_DEF(vehname,modtag,campos) ##modtag##_##vehname##_Drive_Water_##campos##_SoundSet,
	SOUNDSET_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	#define SOUNDSET_DEF(vehname,modtag,campos) ##modtag##_##vehname##_Drive_Dirt_##campos##_SoundSet,
	SOUNDSET_DEF(VEH_NAME,MOD_TAG,CAMPOS)
#endif
