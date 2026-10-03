// T72

attenuationEffectType = "TankAttenuation";

soundGetIn[]={"A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1};
soundGetOut[]={"A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1, 20};

soundTurnIn[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};
soundTurnOut[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};

soundTurnInInternal[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};
soundTurnOutInternal[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};

soundDammage[]={"", db-5, 1};

soundEngineOnInt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t80\t80_engine_ext_start", db+5, 1.0};
soundEngineOnExt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t80\t80_engine_ext_start", db+5, 1.0, 100};
soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_Int_Stop", db0, 1.0};
soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_Ext_Stop", db10, 1.0, 100};



#include "..\collisions_armor_tanks.hpp"

class Sounds
{

#include "T80_Settings.hpp"


	soundSetsInt[] =
	{
		#include "..\general_vehicle_asset_INT.hpp",

		MBT_02_Turbine01_Int_Tonal_SoundSet,
		MBT_02_Turbine01_Int_Noisy_SoundSet,
		MBT_02_Servo01_Int_SoundSet,

		Tracks_Movement_Dirt_Int_01_SoundSet,
		Tracks_Surface_Soft_Int_SoundSet,
		//Tracks_Surface_Hard_Int_SoundSet,
		Tracks_Surface_Sand_Int_SoundSet,

		Tracks_Surface_Squeaks_Soft_Int_SoundSet,
		Tracks_Surface_Squeaks_Hard_Int_SoundSet,

		Tanks_Material_Strain_Int_SoundSet,

		Tank_General_Collision_Int_SoundSet,

		rhs_tank_t72_int_autoloader_SoundSet
	};


	soundSetsExt[] =
	{
		#include "..\general_vehicle_asset_EXT.hpp",

		MBT_02_Turbine01_Ext_Front_Tonal_SoundSet,
		MBT_02_Turbine01_Ext_Rear_Tonal_SoundSet,
		MBT_02_Turbine01_Ext_Front_Noisy_SoundSet,
		MBT_02_Turbine01_Ext_Rear_Noisy_SoundSet,
		MBT_02_Servo01_Ext_SoundSet,
		MBT_02_Servo02_Ext_SoundSet,

		Tracks_Movement_Dirt_Ext_01_SoundSet,
		Tracks_Surface_Soft_Ext_SoundSet,
		//Tracks_Surface_Hard_Ext_SoundSet,
		Tracks_Surface_Sand_Ext_SoundSet,

		Tracks_Surface_Squeaks_Soft_Ext_SoundSet,
		Tracks_Surface_Squeaks_Hard_Ext_SoundSet,

		Tank_General_Collision_SoundShader,

		rhs_tank_t72_ext_autoloader_SoundSet
	};

};
