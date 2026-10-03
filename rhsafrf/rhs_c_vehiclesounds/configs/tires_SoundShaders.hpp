// FAST

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Rock_Fast_##campos##_SoundShader: Base_Tires_Rock_Fast_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Rock_Fast_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_FAST_SPEED * SURF_ROCK;
	range = SURF_ROCK_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Grass_Fast_##campos##_SoundShader: Base_Tires_Grass_Fast_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Grass_Fast_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_FAST_SPEED * SURF_GRASS;
	range = SURF_GRASS_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Sand_Fast_##campos##_SoundShader: Base_Tires_Sand_Fast_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Sand_Fast_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_FAST_SPEED * SURF_SAND;
	range = SURF_SAND_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Gravel_Fast_##campos##_SoundShader: Base_Tires_Gravel_Fast_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Gravel_Fast_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_FAST_SPEED * SURF_GRAVEL;
	range = SURF_GRAVEL_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Mud_Fast_##campos##_SoundShader: Base_Tires_Mud_Fast_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Mud_Fast_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_FAST_SPEED * SURF_MUD;
	range = SURF_MUD_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Asphalt_Fast_##campos##_SoundShader: Base_Tires_Asphalt_Fast_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Asphalt_Fast_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_FAST_SPEED * SURF_ASPHALT;
	range = SURF_ASPHALT_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Water_Fast_##campos##_SoundShader: Base_Tires_Water_Fast_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Water_Fast_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_FAST_SPEED * SURF_WATER;
	range = SURF_WATER_RANGE;
};


// SLOW

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Rock_Slow_##campos##_SoundShader: Base_Tires_Rock_Slow_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Rock_Slow_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_SLOW_SPEED * SURF_ROCK;
	range = SURF_ROCK_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Grass_Slow_##campos##_SoundShader: Base_Tires_Grass_Slow_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Grass_Slow_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_SLOW_SPEED * SURF_GRASS;
	range = SURF_GRASS_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Sand_Slow_##campos##_SoundShader: Base_Tires_Sand_Slow_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Sand_Slow_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_SLOW_SPEED * SURF_SAND;
	range = SURF_SAND_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Gravel_Slow_##campos##_SoundShader: Base_Tires_Gravel_Slow_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Gravel_Slow_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_SLOW_SPEED * SURF_GRAVEL;
	range = SURF_GRAVEL_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Mud_Slow_##campos##_SoundShader: Base_Tires_Mud_Slow_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Mud_Slow_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_SLOW_SPEED * SURF_MUD;
	range = SURF_MUD_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Asphalt_Slow_##campos##_SoundShader: Base_Tires_Asphalt_Slow_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Asphalt_Slow_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_SLOW_SPEED * SURF_ASPHALT;
	range = SURF_ASPHALT_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Water_Slow_##campos##_SoundShader: Base_Tires_Water_Slow_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(tirestype, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\##tirestype##\Tires_Water_Slow_##campos##, 1}};
	SAMPLE_DEF(TIRES_TYPE,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_PITCH;
	volume = TIRES_VOLUME * SURF_PRESSURE * SURF_SLOW_SPEED * SURF_WATER;
	range = SURF_WATER_RANGE;
};

// TURNS

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Turn_Hard_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(slipvar, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\tires_turns\Tires_Turn_Hard_##slipvar##_##campos##, 1}};
	SAMPLE_DEF(TIRES_TURN_HARD_VARIANT,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_TURN_HARD_PITCH;
	volume = TIRES_TURN_HARD_CONDITION * TIRES_TURN_HARD_VOLUME;
	range = TIRES_TURN_HARD_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Turn_Soft_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(slipvar, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\tires_turns\Tires_Turn_Soft_##slipvar##_##campos##, 1}};
	SAMPLE_DEF(TIRES_TURN_SOFT_VARIANT,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_TURN_SOFT_PITCH;
	volume = TIRES_TURN_SOFT_CONDITION * TIRES_TURN_SOFT_VOLUME;
	range = TIRES_TURN_SOFT_RANGE;
};

// BrakeS

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Brake_Hard_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(slipvar, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\tires_brakes\Tires_Brake_Hard_##slipvar##_##campos##, 1}};
	SAMPLE_DEF(TIRES_BRAKE_HARD_VARIANT,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_BRAKE_HARD_PITCH;
	volume = TIRES_BRAKE_HARD_CONDITION * TIRES_BRAKE_HARD_VOLUME;
	range = TIRES_BRAKE_HARD_RANGE;
};

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Brake_Soft_##campos##_SoundShader
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SAMPLE_DEF(slipvar, vehtype, campos) samples[] = {{A3\Sounds_F\vehicles2\##vehtype##\shared\tires_brakes\Tires_Brake_Soft_##slipvar##_##campos##, 1}};
	SAMPLE_DEF(TIRES_BRAKE_SOFT_VARIANT,VEH_TYPE,SAMPLE_CAMPOS)
	frequency = TIRES_BRAKE_SOFT_PITCH;
	volume = TIRES_BRAKE_SOFT_CONDITION * TIRES_BRAKE_SOFT_VOLUME;
	range = TIRES_BRAKE_SOFT_RANGE;
};
