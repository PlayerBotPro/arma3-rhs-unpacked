
	soundSetSonicBoom[]			= {Plane_Fighter_SonicBoom_SoundSet};
	soundLocked[]				= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",1,1};
	soundIncommingMissile[]		= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",1,1.5};
	soundGearUp[]				= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_up",2.25,1,250};
	soundGearDown[]				= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_down",2.25,1,250};
	soundFlapsUp[]				= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Up",1.5,1,150};
	soundFlapsDown[]			= {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Down",1.5,1,150};
	cabinOpenSound[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\FX_Plane_Fighter_02_cabine_open_ext",3.16228,1,40};
	cabinCloseSound[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\FX_Plane_Fighter_02_cabine_close_ext",3.16228,1,40};
	cabinOpenSoundInternal[]	= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\FX_Plane_Fighter_02_cabine_open_int",10,1,40};
	cabinCloseSoundInternal[]	= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\FX_Plane_Fighter_02_cabine_close_int",10,1,40};
	soundEngineOnInt[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\O_Plane_Fighter_02_engine_start_int",1,1};
	soundEngineOnExt[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\O_Plane_Fighter_02_engine_start_ext",1.75,1,300};
	soundEngineOffInt[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\O_Plane_Fighter_02_engine_shut_int",1,1};
	soundEngineOffExt[]			= {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\O_Plane_Fighter_02_engine_shut_ext",1.75,1,300};

	soundGetIn[]			= {"A3\Sounds_F\vehicles\air\CAS_01\getin_wipeout",1,1,40};
	soundGetOut[]			= {"A3\Sounds_F\air\Plane_Fighter_03\getout",1,1,40};
	soundWaterCollision1[]	= {"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",1.41254,1,500};
	soundWaterCollision2[]	= {"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",1.41254,1,500};
	soundWaterCrashes[]		= {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
	buildCrash0[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,900};
	buildCrash1[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,900};
	buildCrash2[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,900};
	buildCrash3[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,900};
	soundBuildingCrash[]	= {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",3.16228,1,900};
	WoodCrash1[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",3.16228,1,900};
	WoodCrash2[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",3.16228,1,900};
	WoodCrash3[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",3.16228,1,900};
	soundWoodCrash[]		= {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
	armorCrash0[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,900};
	armorCrash1[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,900};
	armorCrash2[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,900};
	armorCrash3[]			= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,900};
	soundArmorCrash[]		= {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	Crash0[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,900};
	Crash1[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,900};
	Crash2[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,900};
	Crash3[]				= {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,900};
	soundCrashes[]			= {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};
	soundDammage[]			= {"",0.562341,1};

	class scrubLandInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
		frequency = 1;
		volume = "(scrubLand factor[0.01, 0.20])";
	};
	class Sounds
	{
		soundSets[] =
		{
			Plane_Fighter_02_EngineLowExt_SoundSet,
			Plane_Fighter_02_EngineHighExt_SoundSet,
			Plane_Fighter_02_ForsageExt_SoundSet,
			Plane_Fighter_02_WindNoiseExt_SoundSet,
			Plane_Fighter_02_EngineExt_Dist_Front_SoundSet,
			Plane_Fighter_02_EngineExt_Middle_SoundSet,
			Plane_Fighter_02_EngineExt_Dist_Rear_SoundSet,
			Plane_Fighter_02_EngineLowInt_SoundSet,
			Plane_Fighter_02_EngineHighInt_SoundSet,
			Plane_Fighter_02_ForsageInt_SoundSet,
			Plane_Fighter_02_WindNoiseInt_SoundSet,
			Plane_Fighter_02_VelocityInt_SoundSet
		};
	};