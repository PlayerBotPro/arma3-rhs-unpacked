#define CLASS_DEF(vehname,modtag, campos, var) class ##modtag##_##vehname##_Tracks_##var##_##campos##_SoundSet: Base_Tracks_##var##_##campos##_SoundSet\
{\
	soundShaders[] = {##modtag##_##vehname##_Tracks_##var##_##campos##_SoundShader};\
	posOffset[] = {POSITION_OFFSET};\
};

#ifdef TRACKS_SAMPLES_NUMBER_1
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,01)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_2
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,02)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_3
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,02)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,03)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_4
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,02)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,03)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,04)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_5
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,02)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,03)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,04)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,05)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_6
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,02)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,03)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,04)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,05)
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,06)
#endif


// BRAKE

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tracks_Brake_Hard_##campos##_SoundSet: Base_Tracks_Brake_Hard_##campos##_SoundSet\
{\
	soundShaders[] = {##modtag##_##vehname##_Tracks_Brake_Hard_##campos##_SoundShader};\
	posOffset[] = {POSITION_OFFSET};\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tracks_Brake_Soft_##campos##_SoundSet: Base_Tracks_Brake_Soft_##campos##_SoundSet\
{\
	soundShaders[] = {##modtag##_##vehname##_Tracks_Brake_Soft_##campos##_SoundShader};\
	posOffset[] = {POSITION_OFFSET};\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)


// TURN

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tracks_Turn_Hard_##campos##_SoundSet: Base_Tracks_Turn_Hard_##campos##_SoundSet\
{\
	soundShaders[] = {##modtag##_##vehname##_Tracks_Turn_Hard_##campos##_SoundShader};\
	posOffset[] = {POSITION_OFFSET};\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tracks_Turn_Soft_##campos##_SoundSet: Base_Tracks_Turn_Soft_##campos##_SoundSet\
{\
	soundShaders[] = {##modtag##_##vehname##_Tracks_Turn_Soft_##campos##_SoundShader};\
	posOffset[] = {POSITION_OFFSET};\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)


// DRIVE WATER

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Drive_Water_##campos##_SoundSet: Base_Drive_Water_##campos##_SoundSet\
{\
	soundShaders[] = {##modtag##_##vehname##_Drive_Water_##campos##_SoundShader};\
	posOffset[] = {POSITION_OFFSET};\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)

// DRIVE DIRT

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Drive_Dirt_##campos##_SoundSet: Base_Drive_Dirt_##campos##_SoundSet\
{\
	soundShaders[] = {##modtag##_##vehname##_Drive_Dirt_##campos##_SoundShader};\
	posOffset[] = {POSITION_OFFSET};\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)