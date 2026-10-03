class cfgVehicles {
	class Helicopter;
	class Helicopter_Base_F: Helicopter{};
	class Heli_Attack_02_base_F: Helicopter_Base_F {};
	class Heli_Light_03_base_F: Helicopter_Base_F {};
	class RHS_Mi24_base: Heli_Attack_02_base_F {
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_stop2",4.794328,1,600};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_stop2",0.199526,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_ext_start2",4.794328,1,600};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_02\Mixxx_int_start2",0.158489,1};
		class Sounds {
			soundSetsExt[] = {
				APPLYHELISOUNDSETSEXT_DEFAULT(hind,PREFIX) ,
				"RHS_Heli_Hind_ext_turbine_SoundSet"
			};
			soundSetsInt[] = {
				APPLYHELISOUNDSETSINT2_DEFAULT(hind,PREFIX)
			};
		};
	};

	/*class RHS_UH1_Base: Heli_Light_03_base_F {
		class Sounds {
			soundSetsExt[] = {
				APPLYHELISOUNDSETSEXT_DEFAULT(venom,PREFIX)
			};
			soundSetsInt[] = {
				APPLYHELISOUNDSETSINT_DEFAULT(venom,PREFIX)
			};
		};
	};*/
};