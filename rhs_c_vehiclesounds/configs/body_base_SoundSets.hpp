class Vehicle_Base_Body_INT_SoundSet;
class RHS_Vehicle_Base_Body_INT_SoundSet: Vehicle_Base_Body_INT_SoundSet
{
	sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeFactor = 1;
	spatial = false;
	loop = true;
};

class Vehicle_Base_Body_OPEN_SoundSet;
class RHS_Vehicle_Base_Body_OPEN_SoundSet: Vehicle_Base_Body_OPEN_SoundSet
{
	sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeFactor = 1;
	spatial = false;
	loop = true;
};
class Vehicle_Base_Body_EXT_SoundSet;
class RHS_Vehicle_Base_Body_EXT_SoundSet: Vehicle_Base_Body_EXT_SoundSet
{
	sound3DProcessingType = "VehicleExt_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	occlusionFactor = 0.5;
	obstructionFactor = 0.3;
	volumeFactor = 1;
	spatial = true;
	loop = true;
};
