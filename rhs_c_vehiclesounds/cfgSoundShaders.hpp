class CfgSoundShaders
{
//Vehicles

	//Base Configuration

	#include "configs\engine_base_SoundShaders.hpp"
	#include "configs\tires_base_SoundShaders.hpp"
	#include "configs\tracks_base_SoundShaders.hpp"
	#include "configs\vehicle_autoloaders_SoundShaders.hpp"

	//#include "configs\soft\Tires_Movement_Dirt_SoundShaders.hpp"
	//#include "configs\armor\Tracks_Surface_Movement_SoundShaders.hpp"
	//#include "configs\armor\Tanks_Material_Strain_SoundShaders.hpp"


	//Armored

	#include "configs\armor\2S1_Settings.hpp"
	#include "configs\general_vehicle_SoundShaders.hpp"

	#include "configs\armor\T72_Settings.hpp"
	#include "configs\general_vehicle_SoundShaders.hpp"

	#include "configs\armor\T80_Settings.hpp"
	#include "configs\general_vehicle_SoundShaders.hpp"
	//Soft
	#include "configs\soft\Uaz469_Settings.hpp"
	#include "configs\general_vehicle_SoundShaders.hpp"

	//Trucks
	#include "configs\soft\OTR21_Settings.hpp"
	#include "configs\general_vehicle_SoundShaders.hpp"

	#include "configs\soft\Gaz66_Settings.hpp"
	#include "configs\general_vehicle_SoundShaders.hpp"

	#include "configs\soft\Zil131_Settings.hpp"
	#include "configs\general_vehicle_SoundShaders.hpp"
	
	#include "configs\soft\Ural4320_Settings.hpp"
	#include "configs\general_vehicle_SoundShaders.hpp"
	
	#include "configs\soft\Kamaz5350_Settings.hpp"
	#include "configs\general_vehicle_SoundShaders.hpp"

	class rhs_tank_t72_int_autoloader_SoundShader
	{
		samples[] = {{"rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",1}};
		volume = 1;
		range = 25;
	};
	class rhs_tank_t72_ext_autoloader_SoundShader
	{
		samples[] = {{"rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",1}};
		volume = 1;
		range = 25;
	};
	class rhs_spo15_beep_single_SoundShader
	{
		samples[] = {{"rhsafrf\addons\rhs_optics\sounds\single_beep.wav",1}};
		volume = 1;
		range = 25;
	};
	class rhs_spo15_beep_single_SoundShader
	{
		samples[] = {{"rhsafrf\addons\rhs_optics\sounds\single_beep.wav",1}};
		volume = 1;
		range = 25;
	};
	class rhs_spo15_beep_single_SoundShader
	{
		samples[] = {{"rhsafrf\addons\rhs_optics\sounds\single_beep.wav",1}};
		volume = CustomSoundController12;
		range = 25;
	};
};