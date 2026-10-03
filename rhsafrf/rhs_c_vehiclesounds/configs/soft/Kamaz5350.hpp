//KamAZ-5350

attenuationEffectType = "TruckAttenuation";


soundDammage[]={"", db-5, 1};
soundGetIn[]={"A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Enter",db-7,1};
soundGetOut[]={"A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Exit",db-7,1, 40};

soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Engine_Int_Start", db-6, 1.0};
soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Engine_Int_stop", db-8, 1.0};

soundEngineOnExt[] = {"A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Engine_Ext_Start", db6, 1.0, 50};
soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\soft\Truck_02\Truck_02_Engine_Ext_stop", db6, 1.0, 50};

#include "..\collisions_soft.hpp"

class Sounds
{
	#include "Kamaz5350_Settings.hpp"
	soundSetsInt[] =
	{
		#include "..\general_vehicle_asset_INT.hpp"
	};
	soundSetsExt[] =
	{
		#include "..\general_vehicle_asset_EXT.hpp"
	};
};