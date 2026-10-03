#define TRACKS_CROSFADE_WIDTH (TRACKS_TOP_SPEED/6)

#define SPD (abs(speed))
#define SPEED01 (SPD factor [0, TRACKS_CROSFADE_WIDTH])*(SPD factor [2*TRACKS_CROSFADE_WIDTH,TRACKS_CROSFADE_WIDTH])
#define SPEED02 (SPD factor [TRACKS_CROSFADE_WIDTH, 2*TRACKS_CROSFADE_WIDTH])*(SPD factor [3*TRACKS_CROSFADE_WIDTH,2*TRACKS_CROSFADE_WIDTH])
#define SPEED03 (SPD factor [2*TRACKS_CROSFADE_WIDTH, 3*TRACKS_CROSFADE_WIDTH])*(SPD factor [4*TRACKS_CROSFADE_WIDTH,3*TRACKS_CROSFADE_WIDTH])
#define SPEED04 (SPD factor [3*TRACKS_CROSFADE_WIDTH, 4*TRACKS_CROSFADE_WIDTH])*(SPD factor [5*TRACKS_CROSFADE_WIDTH,4*TRACKS_CROSFADE_WIDTH])
#define SPEED05 (SPD factor [4*TRACKS_CROSFADE_WIDTH, 5*TRACKS_CROSFADE_WIDTH])*(SPD factor [6*TRACKS_CROSFADE_WIDTH,5*TRACKS_CROSFADE_WIDTH])
#define SPEED06 (SPD factor [5*TRACKS_CROSFADE_WIDTH, 6*TRACKS_CROSFADE_WIDTH])

#define CLASS_DEF(vehname,modtag, trackstype, campos, samplecampos, speed_exp, var) class ##modtag##_##vehname##_Tracks_##var##_##campos##_SoundShader: Base_Tracks_##var##_##campos##_SoundShader\
{\
	samples[] = {{A3\Sounds_F\vehicles2\armor\shared\##trackstype##\Tracks_##var##_##samplecampos##, 1}};\
	frequency = TRACKS_PITCH;\
	range = TRACKS_VOLUME_RANGE;\
	volume = TRACKS_VOLUME * TRACKS_SURF_PRESSURE * TRACKS_SURF_HARD * ##speed_exp##;\
};

#ifdef TRACKS_SAMPLES_NUMBER_1
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED01,01)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_2
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED01,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED02,02)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_3
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED01,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED02,02)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED03,03)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_4
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED01,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED02,02)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED03,03)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED04,04)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_5
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED01,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED02,02)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED03,03)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED04,04)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED05,05)
#endif
#ifdef TRACKS_SAMPLES_NUMBER_6
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED01,01)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED02,02)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED03,03)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED04,04)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED05,05)
	CLASS_DEF(VEH_NAME,MOD_TAG,TRACKS_TYPE,CAMPOS,SAMPLE_CAMPOS,SPEED06,06)
#endif

// BRAKE

#define CLASS_DEF(vehname,modtag, campos, samplecampos, var) class ##modtag##_##vehname##_Tracks_Brake_Hard_##campos##_SoundShader: Base_Tracks_Brake_Hard_##campos##_SoundShader\
{\
	samples[] = {{A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Hard_##var##_##samplecampos##, 1}};\
	frequency = TRACKS_BRAKE_HARD_PITCH;\
	volume = TRACKS_BRAKE_HARD_VOLUME * TRACKS_BRAKE_SURF_HARD;\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,SAMPLE_CAMPOS,TRACKS_BRAKE_HARD_VARIANT)

#define CLASS_DEF(vehname,modtag, campos, samplecampos, var) class ##modtag##_##vehname##_Tracks_Brake_Soft_##campos##_SoundShader: Base_Tracks_Brake_Soft_##campos##_SoundShader\
{\
	samples[] = {{A3\Sounds_F\vehicles2\armor\shared\tracks_brakes\Tracks_Brake_Soft_##var##_##samplecampos##, 1}};\
	frequency = TRACKS_BRAKE_SOFT_PITCH;\
	volume = TRACKS_BRAKE_SOFT_VOLUME * TRACKS_BRAKE_SURF_SOFT;\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,SAMPLE_CAMPOS,TRACKS_BRAKE_SOFT_VARIANT)

// TURN

#define CLASS_DEF(vehname,modtag, campos, samplecampos, var) class ##modtag##_##vehname##_Tracks_Turn_Hard_##campos##_SoundShader: Base_Tracks_Turn_Hard_##campos##_SoundShader\
{\
	samples[] = {{A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Hard_##var##_##samplecampos##, 1}};\
	frequency = TRACKS_TURN_HARD_PITCH;\
	volume = TRACKS_TURN_HARD_VOLUME * TRACKS_TURN_SURF_HARD;\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,SAMPLE_CAMPOS,TRACKS_TURN_HARD_VARIANT)

#define CLASS_DEF(vehname,modtag, campos, samplecampos, var) class ##modtag##_##vehname##_Tracks_Turn_Soft_##campos##_SoundShader: Base_Tracks_Turn_Soft_##campos##_SoundShader\
{\
	samples[] = {{A3\Sounds_F\vehicles2\armor\shared\tracks_turns\Tracks_Turn_Soft_##var##_##samplecampos##, 1}};\
	frequency = TRACKS_TURN_SOFT_PITCH;\
	volume = TRACKS_TURN_SOFT_VOLUME * TRACKS_TURN_SURF_SOFT;\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,SAMPLE_CAMPOS,TRACKS_TURN_SOFT_VARIANT)

// DRIVE WATER

#define CLASS_DEF(vehname,modtag, campos, samplecampos, var) class ##modtag##_##vehname##_Drive_Water_##campos##_SoundShader: Base_Drive_Water_##campos##_SoundShader\
{\
	samples[] = {{A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Water_##var##_##samplecampos##, 1}};\
	frequency = 1;\
	volume = DRIVE_WATER_VOLUME * DRIVE_WATER_CONDITION;\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,SAMPLE_CAMPOS,DRIVE_WATER_VARIANT)

// DRIVE DIRT

#define CLASS_DEF(vehname,modtag, campos, samplecampos, var) class ##modtag##_##vehname##_Drive_Dirt_##campos##_SoundShader: Base_Drive_Dirt_##campos##_SoundShader\
{\
	samples[] = {{A3\Sounds_F\vehicles2\armor\shared\tracks_surface_movement\Drive_Dirt_##var##_##samplecampos##, 1}};\
	frequency = 1;\
	volume = DRIVE_DIRT_VOLUME * DRIVE_DIRT_CONDITION;\
};
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,SAMPLE_CAMPOS,DRIVE_DIRT_VARIANT)