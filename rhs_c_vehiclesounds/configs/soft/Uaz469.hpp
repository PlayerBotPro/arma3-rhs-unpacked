//Uaz469

attenuationEffectType = "SemiOpenCarAttenuation2";

soundGetIn[]={"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\ext-uaz469_engine-getin",db+4,1,9};
soundGetOut[]={"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\ext-uaz469_engine-getout",db+4,1, 25};

soundDammage[]={"", db-5, 1};


soundEngineOnInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\uaz469_engine_int_start1", db+4, 1.0};
soundEngineOnExt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\uaz469_engine_ext_start1", db+3, 1.0, 200};
soundEngineOffInt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\uaz469_engine_int_stop1", db+4, 1.0};
soundEngineOffExt[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\uaz469_engine_ext_stop1", db+3, 1.0, 200};
#include "..\collisions_soft.hpp"

class Sounds
{
	#include "Uaz469_Settings.hpp"

	soundSetsInt[] =
	{
		#include "..\general_vehicle_asset_INT.hpp",
		Tires_Movement_Dirt_Int_01_SoundSet
	};

	soundSetsExt[] =
	{
		#include "..\general_vehicle_asset_EXT.hpp",
		Tires_Movement_Dirt_Ext_01_SoundSet
	};
};