//KamAZ-5350

attenuationEffectType = "TruckAttenuation";


soundDammage[]	= {"", db-5, 1};

soundGetIn[]		= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_getout",db+5,1, 9};
soundGetOut[]		= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_getout",db+8,1, 25};

soundEngineOnInt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_start", db+3, 1.0};
soundEngineOnExt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_start", db+3, 1.0, 200};
soundEngineOffInt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_stop", db+3, 1.0};
soundEngineOffExt[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_stop", db+3, 1.0, 200};

#include "..\collisions_soft.hpp"

class Sounds
{
	#include "Ural4320_Settings.hpp"
	soundSetsInt[] =
	{
		#include "..\general_vehicle_asset_INT.hpp"
	};
	soundSetsExt[] =
	{
		#include "..\general_vehicle_asset_EXT.hpp"
	};
};