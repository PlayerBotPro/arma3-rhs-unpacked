#define CLASS_DEF(vehname,modtag,campos,rpm) class ##modtag##_##vehname##_Engine_##rpm##_##campos##_SoundSet: Engine_Base_RPM0_##campos##_SoundSet
#define SHADER_DEF(vehname,modtag,campos,rpm) soundShaders[] = {##modtag##_##vehname##_Engine_##rpm##_##campos##_SoundShader};

CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM0)
{
	SHADER_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM0)
	sound3DProcessingType = ENGINE_PROCESSING_TYPE;
	posOffset[] = {POSITION_OFFSET};
	volumeFactor = SAMPLE0_VOL;
};
#ifdef SAMPLE1_RPM
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM1)
	{
		SHADER_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM1)
		sound3DProcessingType = ENGINE_PROCESSING_TYPE;
		volumeCurve = ENGINE_VOLUME_CURVE;
		posOffset[] = {POSITION_OFFSET};
		volumeFactor = SAMPLE1_VOL;
	};
#endif
#ifdef SAMPLE2_RPM
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM2)
	{
		SHADER_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM2)
		sound3DProcessingType = ENGINE_PROCESSING_TYPE;
		volumeCurve = ENGINE_VOLUME_CURVE;
		posOffset[] = {POSITION_OFFSET};
		volumeFactor = SAMPLE2_VOL;
	};
#endif
#ifdef SAMPLE3_RPM
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM3)
	{
		SHADER_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM3)
		sound3DProcessingType = ENGINE_PROCESSING_TYPE;
		volumeCurve = ENGINE_VOLUME_CURVE;
		posOffset[] = {POSITION_OFFSET};
		volumeFactor = SAMPLE3_VOL;
	};
#endif
#ifdef SAMPLE4_RPM
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM4)
	{
		SHADER_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM4)
		sound3DProcessingType = ENGINE_PROCESSING_TYPE;
		volumeCurve = ENGINE_VOLUME_CURVE;
		posOffset[] = {POSITION_OFFSET};
		volumeFactor = SAMPLE4_VOL;
	};
#endif
#ifdef SAMPLE5_RPM
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM5)
	{
		SHADER_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM5)
		sound3DProcessingType = ENGINE_PROCESSING_TYPE;
		volumeCurve = ENGINE_VOLUME_CURVE;
		posOffset[] = {POSITION_OFFSET};
		volumeFactor = SAMPLE5_VOL;
	};
#endif
#ifdef SAMPLE6_RPM
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM6)
	{
		SHADER_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM6)
		sound3DProcessingType = ENGINE_PROCESSING_TYPE;
		volumeCurve = ENGINE_VOLUME_CURVE;
		posOffset[] = {POSITION_OFFSET};
		volumeFactor = SAMPLE6_VOL;
	};
#endif
#ifdef SAMPLE7_RPM
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM7)
	{
		SHADER_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM7)
		sound3DProcessingType = ENGINE_PROCESSING_TYPE;
		volumeCurve = ENGINE_VOLUME_CURVE;
		posOffset[] = {POSITION_OFFSET};
		volumeFactor = SAMPLE7_VOL;
	};
#endif
#ifdef SAMPLE8_RPM
	CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM8)
	{
		SHADER_DEF(VEH_NAME,MOD_TAG,CAMPOS,RPM8)
		sound3DProcessingType = ENGINE_PROCESSING_TYPE;
		volumeCurve = ENGINE_VOLUME_CURVE;
		posOffset[] = {POSITION_OFFSET};
		volumeFactor = SAMPLE8_VOL;
	};
#endif
