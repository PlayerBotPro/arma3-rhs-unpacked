	attenuationEffectType = "OpenCarAttenuation"; //utlumovani v interieru (odkaz do Attenuation.hpp ve slozce SOUNDS_F

	insideSoundCoef = 0;
	soundEngineOnInt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-start-02", db-5, 1.0};
	soundEngineOnExt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-start-02", db-5, 1.0, 200};
	soundEngineOffInt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-stop-02", db-5, 1.0};
	soundEngineOffExt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-stop-02", db-5, 1.0, 200};

		/* ---- CRASHES  ---- */

		buildCrash0[]={"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_01", db5, 1,200};
		buildCrash1[]={"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_02", db5, 1,200};
 		buildCrash2[]={"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_03", db5, 1,200};
 		soundBuildingCrash[]={buildCrash0, 0.33, buildCrash1, 0.33, buildCrash2, 0.34};

		WoodCrash0[]={"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_01", db5, 1,200};
		WoodCrash1[]={"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_02", db5, 1,200};
		WoodCrash2[]={"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_03", db5, 1,200};
		soundWoodCrash[]={woodCrash0, 0.33, woodCrash1, 0.33, woodCrash2, 0.34};

		ArmorCrash0[]={"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_01", db10, 1,200};
		ArmorCrash1[]={"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_02", db10, 1,200};
		ArmorCrash2[]={"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_03", db10, 1,200};
		soundArmorCrash[]={ArmorCrash0, 0.33, ArmorCrash1, 0.33, ArmorCrash2, 0.34};

		soundGeneralCollision1[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_01",db5,1,100};
		soundGeneralCollision2[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_02",db5,1,100};
		soundGeneralCollision3[] = {"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_03",db5,1,100};
		soundCrashes[] = {soundGeneralCollision1,0.33, soundGeneralCollision2,0.33, soundGeneralCollision3,0.34};

	// warp	factor
	#define	FACTOR(val,from,to)	(val factor[from,to])
	// RANGE(val,	begin, band, end,	band)
	#define	RANGE(val,from,band0,to,band1) FACTOR2(val,from,(from+band0),to,(to+band1))
	// FACTOR2(val,	0, 400,	1200,	2000)
	#define	FACTOR2(val,from0,to0,from1,to1) (FACTOR(val,from0,to0)	*	FACTOR(val,to1,from1))

	// redRpm
	#define	MAX_RPM	1200
	// scaled	rpm	to 0 - 1
	#define	RPM(rpm) (rpm/MAX_RPM)

	// specialized FACTOR	for	rpm
	#define	FACTOR_RPM(from,to)	FACTOR(RPM(rpm),RPM(from),RPM(to))
	// specialized peak	for	rpm
	#define	FACTOR2_RPM(from0,to0,from1,to1) (FACTOR_RPM(from0,to0)	*	FACTOR_RPM(to1,from1))
	// specialized peak, different definition, version for rpm
	#define	RANGE_RPM(from,band0,to,band1) FACTOR2_RPM(from,(from+band0),to,(to+band1))


	#define HZ_IDLE FACTOR_RPM(100,300)
	#define HZ_RPM1 FACTOR_RPM(300,600)
	#define HZ_RPM2	FACTOR_RPM(600,900)
	#define HZ_RPM3 FACTOR_RPM(700,1000)

	#define VOLUME_IDLE FACTOR2_RPM(0,30,300,500)
	#define VOLUME_RPM1 FACTOR2_RPM(150,250,400,600)
	#define VOLUME_RPM2 FACTOR2_RPM(350,500,700,1000)
	#define VOLUME_RPM3 FACTOR_RPM(800,1200)


	class Sounds
{

	/*      EXTERNAL SOUNDS	SPEEDBOAT	*/

	class IdleOut
	{
		sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-idle-2", db-6, 1.0, 300};
		frequency = 0.95	+	HZ_IDLE*0.15;
		volume = engineOn*VOLUME_IDLE ;
	};
	class Engine //LOW
	{
	  sound[] =  {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-low-2", db-4, 1.0, 450};
		frequency = 0.95	+	HZ_RPM1*0.2;
		volume = engineOn*VOLUME_RPM1;
	};
	class EngineMidOut
	{
		sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-mid-2", db-2, 1.0, 500};
		frequency = 0.95	+	HZ_RPM2*0.2;
		volume = engineOn*VOLUME_RPM2;
	};
	class EngineMaxOut
	{
		sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-high-2", db0, 1.0, 600};
		frequency = 0.95	+	HZ_RPM3*0.2;
		volume = engineOn*VOLUME_RPM3;
	};

	/*	WATER FLOW DEPENDING ON SPEED	*/

      class WaternoiseOutW0
      {
        sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", db-3, 1.0, 150};
        frequency = "1";
        volume = "(speed factor[4, 1]) * water";
      };
      class WaternoiseOutW1
      {
        sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", db-2, 1.0, 250};
        frequency = "1";
        volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
      };
      class WaternoiseOutW2
      {
        sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", db0, 1.0, 350};
        frequency = "1";
        volume = "(speed factor[3, 9])"; //(camPos)*
      };

      /*	WATER FLOW DEPENDING ON BACKWARD SPEED	*/

      class WaternoiseOutW3
      {
        sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1", db-3, 1.0, 150};
        frequency = "1";
        volume = "(speed factor[-4, -1]) * water";
      };
      class WaternoiseOutW4
      {
        sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed", db-2, 0.9, 250};
        frequency = "1";
        volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
      };
      class WaternoiseOutW5
      {
        sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed", db0, 0.9, 350};
        frequency = "1";
        volume = "(speed factor[-3, -9])"; //(camPos)*
      };

      class scrubLandExt
      {
				sound[] = {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow", db5, 0.90, 100};
				frequency = 1;
				volume = "(scrubLand factor[0.01, 0.20])";
		};

	// RAIN ON VEHICLE

		class RainExt
	{
		sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", db0, 1.0, 100};
		frequency = 1;
		volume = "camPos * (rain - rotorSpeed/2) * 2" ;
	};

		class RainInt
	{
		sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", db0, 1.0, 100};
		frequency = 1;
		volume = "(1-camPos)*(rain - rotorSpeed/2)*2" ;
	};

};
