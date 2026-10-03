// EXTERNAL

class Base_Tires_Ext_SoundSet
{
	sound3DProcessingType = "VehicleExt_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	occlusionFactor = 0.5;
	obstructionFactor = 0.3;
	volumeFactor = 1;
	spatial = true;
	loop = true;
};

// FAST
class Base_Tires_Rock_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Rock_Fast_Ext_SoundShader};
};
class Base_Tires_Grass_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Grass_Fast_Ext_SoundShader};
};
class Base_Tires_Sand_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Sand_Fast_Ext_SoundShader};
};
class Base_Tires_Gravel_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Gravel_Fast_Ext_SoundShader};
};
class Base_Tires_Mud_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Mud_Fast_Ext_SoundShader};
};
class Base_Tires_Asphalt_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Asphalt_Fast_Ext_SoundShader};
};
class Base_Tires_Water_Fast_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Water_Fast_Ext_SoundShader};
};

// SLOW
class Base_Tires_Rock_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Rock_Slow_Ext_SoundShader};
};
class Base_Tires_Grass_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Grass_Slow_Ext_SoundShader};
};
class Base_Tires_Sand_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Sand_Slow_Ext_SoundShader};
};
class Base_Tires_Gravel_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Gravel_Slow_Ext_SoundShader};
};
class Base_Tires_Mud_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Mud_Slow_Ext_SoundShader};
};
class Base_Tires_Asphalt_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Asphalt_Slow_Ext_SoundShader};
};
class Base_Tires_Water_Slow_Ext_SoundSet: Base_Tires_Ext_SoundSet
{
	soundShaders[] = {General_Tires_Water_Slow_Ext_SoundShader};
};


// INTERNAL

class Base_Tires_Int_SoundSet
{
	sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeFactor = 1;
	spatial = false;
	loop = true;
};

// FAST
class Base_Tires_Rock_Fast_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Rock_Fast_Int_SoundShader};
};
class Base_Tires_Grass_Fast_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Grass_Fast_Int_SoundShader};
};
class Base_Tires_Sand_Fast_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Sand_Fast_Int_SoundShader};
};
class Base_Tires_Gravel_Fast_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Gravel_Fast_Int_SoundShader};
};
class Base_Tires_Mud_Fast_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Mud_Fast_Int_SoundShader};
};
class Base_Tires_Asphalt_Fast_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Asphalt_Fast_Int_SoundShader};
};
class Base_Tires_Water_Fast_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Water_Fast_Int_SoundShader};
};

// SLOW
class Base_Tires_Rock_Slow_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Rock_Slow_Int_SoundShader};
};
class Base_Tires_Grass_Slow_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Grass_Slow_Int_SoundShader};
};
class Base_Tires_Sand_Slow_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Sand_Slow_Int_SoundShader};
};
class Base_Tires_Gravel_Slow_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Gravel_Slow_Int_SoundShader};
};
class Base_Tires_Mud_Slow_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Mud_Slow_Int_SoundShader};
};
class Base_Tires_Asphalt_Slow_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Asphalt_Slow_Int_SoundShader};
};
class Base_Tires_Water_Slow_Int_SoundSet: Base_Tires_Int_SoundSet
{
	soundShaders[] = {General_Tires_Water_Slow_Int_SoundShader};
};



// OPEN VEHICLE

class Base_Tires_Open_SoundSet
{
	sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
	distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
	volumeFactor = 1;
	spatial = false;
	loop = true;
};

// FAST
class Base_Tires_Rock_Fast_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Rock_Fast_Open_SoundShader};
};
class Base_Tires_Grass_Fast_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Grass_Fast_Open_SoundShader};
};
class Base_Tires_Sand_Fast_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Sand_Fast_Open_SoundShader};
};
class Base_Tires_Gravel_Fast_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Gravel_Fast_Open_SoundShader};
};
class Base_Tires_Mud_Fast_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Mud_Fast_Open_SoundShader};
};
class Base_Tires_Asphalt_Fast_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Asphalt_Fast_Open_SoundShader};
};
class Base_Tires_Water_Fast_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Water_Fast_Open_SoundShader};
};

// SLOW
class Base_Tires_Rock_Slow_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Rock_Slow_Open_SoundShader};
};
class Base_Tires_Grass_Slow_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Grass_Slow_Open_SoundShader};
};
class Base_Tires_Sand_Slow_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Sand_Slow_Open_SoundShader};
};
class Base_Tires_Gravel_Slow_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Gravel_Slow_Open_SoundShader};
};
class Base_Tires_Mud_Slow_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Mud_Slow_Open_SoundShader};
};
class Base_Tires_Asphalt_Slow_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Asphalt_Slow_Open_SoundShader};
};
class Base_Tires_Water_Slow_Open_SoundSet: Base_Tires_Open_SoundSet
{
	soundShaders[] = {General_Tires_Water_Slow_Open_SoundShader};
};