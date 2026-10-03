// FAST

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Rock_Fast_##campos##_SoundSet: Base_Tires_Rock_Fast_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Rock_Fast_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Grass_Fast_##campos##_SoundSet: Base_Tires_Grass_Fast_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Grass_Fast_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Sand_Fast_##campos##_SoundSet: Base_Tires_Sand_Fast_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Sand_Fast_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Gravel_Fast_##campos##_SoundSet: Base_Tires_Gravel_Fast_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Gravel_Fast_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Mud_Fast_##campos##_SoundSet: Base_Tires_Mud_Fast_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Mud_Fast_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Asphalt_Fast_##campos##_SoundSet: Base_Tires_Asphalt_Fast_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Asphalt_Fast_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Water_Fast_##campos##_SoundSet: Base_Tires_Water_Fast_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Water_Fast_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};


// SLOW

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Rock_Slow_##campos##_SoundSet: Base_Tires_Rock_Slow_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Rock_Slow_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Grass_Slow_##campos##_SoundSet: Base_Tires_Grass_Slow_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Grass_Slow_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Sand_Slow_##campos##_SoundSet: Base_Tires_Sand_Slow_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Sand_Slow_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Gravel_Slow_##campos##_SoundSet: Base_Tires_Gravel_Slow_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Gravel_Slow_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Mud_Slow_##campos##_SoundSet: Base_Tires_Mud_Slow_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Mud_Slow_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Asphalt_Slow_##campos##_SoundSet: Base_Tires_Asphalt_Slow_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Asphalt_Slow_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Water_Slow_##campos##_SoundSet: Base_Tires_Water_Slow_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Water_Slow_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};


// TURNS

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Turn_Hard_##campos##_SoundSet: Base_Tires_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Turn_Hard_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Turn_Soft_##campos##_SoundSet: Base_Tires_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Turn_Soft_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};

// BRAKES

#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Brake_Hard_##campos##_SoundSet: Base_Tires_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Brake_Hard_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};
#define CLASS_DEF(vehname,modtag, campos) class ##modtag##_##vehname##_Tires_Brake_Soft_##campos##_SoundSet: Base_Tires_##campos##_SoundSet
CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	#define SHADERS_DEF(vehname,modtag, campos) soundShaders[] = {##modtag##_##vehname##_Tires_Brake_Soft_##campos##_SoundShader};
	SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	posOffset[] = {EXT_TIRES_POSITION_OFFSET};
};