#define CLASS_DEF(vehname, modtag, campos) class ##modtag##_##vehname##_Engine_##campos##_Burst_SoundSet
#define SHADERS_DEF(vehname, modtag, campos) ##modtag##_##vehname##_Engine_##campos##_Burst_SoundShader,

CLASS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
{
	soundShaders[] = {
		SHADERS_DEF(VEH_NAME,MOD_TAG,CAMPOS)
	};

	playTrigger = ENGINE_BURST_TRIGGER;
	posOffset[] = {POSITION_OFFSET};
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	frequencyRandomizer = 1;
	frequencyRandomizerMin = 0;
	sound3DProcessingType = ENGINE_PROCESSING_TYPE;
	volumeCurve = "InverseSquare2Curve";
	occlusionFactor = 0.5;
	obstructionFactor = 0.3;
	volumeFactor = 1;
	spatial = true;
	loop = false;
};
