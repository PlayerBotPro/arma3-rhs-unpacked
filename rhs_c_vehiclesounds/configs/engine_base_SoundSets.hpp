// EXTERNAL

class Engine_Base_EXT_SoundSet
{
	sound3DProcessingType = "VehicleExt_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeCurve = "InverseSquare2Curve";
	occlusionFactor = 0.5;
	obstructionFactor = 0.3;
	volumeFactor = 1;
	spatial = true;
	loop = true;
}

class Engine_Base_RPM0_EXT_SoundSet: Engine_Base_EXT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM0_EXT_SoundShader};
};
class Engine_Base_RPM1_EXT_SoundSet: Engine_Base_EXT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM1_EXT_SoundShader};
};
class Engine_Base_RPM2_EXT_SoundSet: Engine_Base_EXT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM2_EXT_SoundShader};
};
class Engine_Base_RPM3_EXT_SoundSet: Engine_Base_EXT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM3_EXT_SoundShader};
};
class Engine_Base_RPM4_EXT_SoundSet: Engine_Base_EXT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM4_EXT_SoundShader};
};
class Engine_Base_RPM5_EXT_SoundSet: Engine_Base_EXT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM5_EXT_SoundShader};
};
class Engine_Base_RPM6_EXT_SoundSet: Engine_Base_EXT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM6_EXT_SoundShader};
};
class Engine_Base_RPM7_EXT_SoundSet: Engine_Base_EXT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM7_EXT_SoundShader};
};
class Engine_Base_RPM8_EXT_SoundSet: Engine_Base_EXT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM8_EXT_SoundShader};
};


// INTERNAL

class Engine_Base_INT_SoundSet
{
	sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeFactor = 1;
	spatial = false;
	loop = true;
};

class Engine_Base_RPM0_INT_SoundSet: Engine_Base_INT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM0_INT_SoundShader};
};
class Engine_Base_RPM1_INT_SoundSet: Engine_Base_INT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM1_INT_SoundShader};
};
class Engine_Base_RPM2_INT_SoundSet: Engine_Base_INT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM2_INT_SoundShader};
};
class Engine_Base_RPM3_INT_SoundSet: Engine_Base_INT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM3_INT_SoundShader};
};
class Engine_Base_RPM4_INT_SoundSet: Engine_Base_INT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM4_INT_SoundShader};
};
class Engine_Base_RPM5_INT_SoundSet: Engine_Base_INT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM5_INT_SoundShader};
};
class Engine_Base_RPM6_INT_SoundSet: Engine_Base_INT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM6_INT_SoundShader};
};
class Engine_Base_RPM7_INT_SoundSet: Engine_Base_INT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM7_INT_SoundShader};
};
class Engine_Base_RPM8_INT_SoundSet: Engine_Base_INT_SoundSet
{
	soundShaders[] = {Engine_Base_RPM8_INT_SoundShader};
};