// EXTERNAL

class Base_Tracks_EXT_SoundSet
{
	sound3DProcessingType = "VehicleExt_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeCurve = "InverseSquare2Curve";
	occlusionFactor = 0.5;
	obstructionFactor = 0.3;
	volumeFactor = 1;
	spatial = true;
	loop = true;
};

class Base_Tracks_01_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_01_EXT_SoundShader};
};
class Base_Tracks_02_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_02_EXT_SoundShader};
};
class Base_Tracks_03_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_03_EXT_SoundShader};
};
class Base_Tracks_04_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_04_EXT_SoundShader};
};
class Base_Tracks_05_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_05_EXT_SoundShader};
};
class Base_Tracks_06_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_06_EXT_SoundShader};
};

class Base_Tracks_Brake_Hard_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_Brake_Hard_EXT_SoundShader};
};
class Base_Tracks_Brake_Soft_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_Brake_Soft_EXT_SoundShader};
};
class Base_Tracks_Turn_Hard_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_Turn_Hard_EXT_SoundShader};
};
class Base_Tracks_Turn_Soft_EXT_SoundSet: Base_Tracks_EXT_SoundSet
{
	soundShaders[] = {Base_Tracks_Turn_Soft_EXT_SoundShader};
};


class Base_Drive_Water_EXT_SoundSet
{
	sound3DProcessingType = "VehicleExt_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeCurve = "InverseSquare2Curve";
	occlusionFactor = 0.5;
	obstructionFactor = 0.3;
	volumeFactor = 1;
	spatial = true;
	loop = true;
};

class Base_Drive_Dirt_EXT_SoundSet
{
	sound3DProcessingType = "VehicleExt_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeCurve = "InverseSquare2Curve";
	occlusionFactor = 0.5;
	obstructionFactor = 0.3;
	volumeFactor = 1;
	spatial = true;
	loop = true;
};

// INTERNAL

class Base_Tracks_INT_SoundSet
{
	sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeFactor = 1;
	spatial = false;
	loop = true;
};

class Base_Tracks_01_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_01_INT_SoundShader};
};
class Base_Tracks_02_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_02_INT_SoundShader};
};
class Base_Tracks_03_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_03_INT_SoundShader};
};
class Base_Tracks_04_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_04_INT_SoundShader};
};
class Base_Tracks_05_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_05_INT_SoundShader};
};
class Base_Tracks_06_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_06_INT_SoundShader};
};

class Base_Tracks_Brake_Hard_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_Brake_Hard_INT_SoundShader};
};
class Base_Tracks_Brake_Soft_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_Brake_Soft_INT_SoundShader};
};
class Base_Tracks_Turn_Hard_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_Turn_Hard_INT_SoundShader};
};
class Base_Tracks_Turn_Soft_INT_SoundSet: Base_Tracks_INT_SoundSet
{
	soundShaders[] = {Base_Tracks_Turn_Soft_INT_SoundShader};
};

class Base_Drive_Water_INT_SoundSet
{
	sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeFactor = 1;
	spatial = false;
	loop = true;
};

class Base_Drive_Dirt_INT_SoundSet
{
	sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeFactor = 1;
	spatial = false;
	loop = true;
};