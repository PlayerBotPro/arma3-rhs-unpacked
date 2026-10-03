// 2S1 Gvozdik

attenuationEffectType = "TankAttenuation";

soundGetIn[]={"A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1};
soundGetOut[]={"A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1, 20};

soundTurnIn[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};
soundTurnOut[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};

soundTurnInInternal[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};
soundTurnOutInternal[]={"A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1, 20};

soundDammage[]={"", db-5, 1};

soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\armor\MBT_01\MBT_01_Engine_Int_Start", db-5, 1.0};
soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\armor\MBT_01\MBT_01_Engine_Int_Stop", db-5, 1.0};

soundEngineOffExt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\2s1\2S1_engine_ext_stop", db16, 1.0, 100};
soundEngineOnExt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\2s1\2S1_engine_ext_start", db16, 1.0, 100};


#include "..\collisions_armor_tanks.hpp"

class Sounds
{

#include "2S1_Settings.hpp"


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

		Tank_General_Collision_SoundShader

	};

};
