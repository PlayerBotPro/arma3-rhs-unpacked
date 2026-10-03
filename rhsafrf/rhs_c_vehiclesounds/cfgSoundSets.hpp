class CfgSoundSets
{


//Vehicles

	//Base Configuration

	#include "configs\engine_base_SoundSets.hpp"
	#include "configs\tires_base_SoundSets.hpp"
	#include "configs\tracks_base_SoundSets.hpp"
	#include "configs\body_base_SoundSets.hpp"
	#include "configs\vehicle_autoloaders_SoundSets.hpp"

	//#include "configs\soft\Tires_Movement_Dirt_SoundSets.hpp"
	//#include "configs\armor\Tracks_Surface_Movement_SoundSets.hpp"
	//#include "configs\armor\Tanks_Material_Strain_SoundSets.hpp"

	//Armored

	#include "configs\armor\2S1_Settings.hpp"
	#include "configs\general_vehicle_SoundSets.hpp"

	#include "configs\armor\T72_Settings.hpp"
	#include "configs\general_vehicle_SoundSets.hpp"

	#include "configs\armor\T80_Settings.hpp"
	#include "configs\general_vehicle_SoundSets.hpp"

	//Cars

	#include "configs\soft\Uaz469_Settings.hpp"
	#include "configs\general_vehicle_SoundSets.hpp"
	//Trucks
	#include "configs\soft\OTR21_Settings.hpp"
	#include "configs\general_vehicle_SoundSets.hpp"

	#include "configs\soft\Gaz66_Settings.hpp"
	#include "configs\general_vehicle_SoundSets.hpp"

	#include "configs\soft\Zil131_Settings.hpp"
	#include "configs\general_vehicle_SoundSets.hpp"

	#include "configs\soft\Ural4320_Settings.hpp"
	#include "configs\general_vehicle_SoundSets.hpp"

	#include "configs\soft\Kamaz5350_Settings.hpp"
	#include "configs\general_vehicle_SoundSets.hpp"

	class rhs_tank_t72_int_autoloader_SoundSet
	{
		soundShaders[]			= {rhs_tank_t72_int_autoloader_SoundShader};
		volumeFactor			= 1;
		volumeCurve				= "LinearCurve";
		spatial					= 1;
		doppler					= 0;
		loop					= 0;
		sound3DProcessingType	= "ExplosionHeavy3DProcessingType";
		distanceFilter			= "explosionDistanceFreqAttenuationFilter";
		playTrigger				= "CustomSoundController1";
	};
	class rhs_tank_t72_ext_autoloader_SoundSet
	{
		soundShaders[]			= {rhs_tank_t72_ext_autoloader_SoundShader};
		volumeFactor			= 0.85;
		volumeCurve				= "LinearCurve";
		spatial					= 1;
		doppler					= 0;
		loop					= 0;
		sound3DProcessingType	= "ExplosionHeavy3DProcessingType";
		distanceFilter			= "RHS_vehicletDistanceFilter";
		playTrigger				= "CustomSoundController1";
	};
	class rhs_spo15_beep_single_SoundSet
	{
		soundShaders[]			= {rhs_spo15_beep_single_SoundShader};
		volumeFactor			= 0.85;
		volumeCurve				= "LinearCurve";
		spatial					= 1;
		doppler					= 0;
		loop					= 0;
		sound3DProcessingType	= "ExplosionHeavy3DProcessingType";
		distanceFilter			= "softVehiclesDistanceFreqAttenuationFilter";
		playTrigger				= "CustomSoundController10";
	};
	class rhs_spo15_beep_short_SoundSet: rhs_spo15_beep_single_SoundSet
	{
		soundShaders[]			= {rhs_spo15_beep_short_SoundShader};
		playTrigger				= "CustomSoundController11";
	};

	class rhs_spo15_beep_long_SoundSet: rhs_spo15_beep_single_SoundSet
	{
		soundShaders[]			= {rhs_spo15_beep_long_SoundShader};
		loop					= 1;
		playTrigger				= "";
	};
};