
	class CruiseMissile1: Helicopter
	{
		dlc = "RHS_USAF";

		scope = 1;
		model = "\rhsusf\addons\rhsusf_a2port_air2\CruiseMissile\cruisemissile4";
		displayName = "Cruise Missile";
		faction = rhs_faction_usmc_14;
		animated = 1;
		dammageHalf[] = {};
		dammageFull[] = {};
		weapons[] = {};
		magazines[] = {};
		class Turrets
		{
		};
		hiddenSelections[] = {"WaterCover1","WaterCover2","WaterCover3","Booster1","Flame1"};
		class AnimationSources
		{
			class Wing1
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class Wing2: Wing1
			{
				animPeriod = 3;
			};
			class Intake1: Wing1
			{
				animPeriod = 1;
			};
			class Cover1: Wing1
			{
				animPeriod = 0.5;
			};
			class Cover2: Wing1
			{
				animPeriod = 0.6;
			};
			class Fin1: Wing1
			{
				animPeriod = 0.3;
			};
			class Fin2: Wing1
			{
				animPeriod = 0.3;
			};
			class Fin3: Wing1
			{
				animPeriod = 0.3;
			};
			class Fin4: Wing1
			{
				animPeriod = 0.3;
			};
		};
	};
        class B_UGV_01_F;
	class CruiseMissile2: B_UGV_01_F
	{
		scope = 1;
		displayName = "Cruise Missile 2";
		model = "\rhsusf\addons\rhsusf_a2port_air2\CruiseMissile\cruisemissile3";
		weapons[] = {};
		magazines[] = {};
		soundEngine[] = {"",1,0.5};
		soundEnviron[] = {"",0.316228,1};
		soundCrash[] = {"",0.1,1};
		soundGear[] = {"",0.000177828,1};
		soundServo[] = {"",0.1,0.4};
		maxSpeed = 880;
		animated = 0;
		class Turrets
		{
		};
		class EventHandlers
		{
		};
		SLX_XEH_DISABLED = 1;
	};
	class NonStrategic;
	class CruiseMissileFlare1: NonStrategic
	{
		scope = 1;
		displayName = "MissileFlare";
		model = "\rhsusf\addons\rhsusf_a2port_air2\CruiseMissile\flare1";
		animated = "false";
		simulation = "fire";
		vehicleClass = "Objects";
		nameSound = "";
		accuracy = 0.2;
		typicalCargo[] = {};
		mapSize = 1.2;
		cost = 0;
		armor = 20;
		class effects: SmallFire
		{
		};
		class Light
		{
			color[] = {1,1,1,1};
			ambient[] = {1,1,1,1};
			brightness = 0.5;
			shape = "koulesvetlo";
			size = 5;
			position = "ohniste";
		};
	};