// T72

attenuationEffectType = "TankAttenuation";

soundGetIn[]={"A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1};
soundGetOut[]={"A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1, 20};

soundTurnIn[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};
soundTurnOut[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};

soundTurnInInternal[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};
soundTurnOutInternal[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};

soundDammage[]={"", db-5, 1};

soundEngineOnInt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t72\t72_engine_ext_startup", db-5, 1.0};
soundEngineOffInt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t72\t72_engine_ext_shutdown", db-5, 1.0};
soundEngineOnExt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t72\t72_engine_ext_startup", db16, 1.0, 100};
soundEngineOffExt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t72\t72_engine_ext_shutdown", db16, 1.0, 100};


#include "..\collisions_armor_tanks.hpp"

class Sounds
{

#include "T72_Settings.hpp"


	soundSetsInt[] =
	{
		#include "..\general_vehicle_asset_INT.hpp",
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
