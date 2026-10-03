
class mortar_82mm;
class rhs_mortar_81mm : mortar_82mm
{
	displayname = "81mm Mortar";
	magazines[] = {
		"rhs_1Rnd_m821_HE",
		"rhs_12Rnd_m821_HE",
		"8Rnd_82mm_Mo_shells",
		"8Rnd_82mm_Mo_Flare_white",
		"8Rnd_82mm_Mo_Smoke_white",
		"8Rnd_82mm_Mo_guided",
		"8Rnd_82mm_Mo_LG"
	};

	minRange = 90;
	midRange = 4000;
	maxRange = 8000;

	class GunParticles
	{
		class FirstEffect
		{
			effectName = "MortarFired";
			positionName = "Usti Hlavne";
			directionName = "Konec Hlavne";
		};
	};
	modes[] = { "Single0", "Single1", "Single2", "Single3", "Single4", "Burst0", "Burst1", "Burst2", "Burst3", "Burst4" };

	class Single0 : Mode_SemiAuto
	{
		displayName = "CHARGE 0";
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = { "A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.2589254, 1, 250 };
			begin2[] = { "A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.2589254, 1, 250 };
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
		};
		reloadSound[] = { "A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.0, 1, 20 };
		soundServo[] = { "", 0.0001, 1.0 };
		reloadTime = 1.8;
		minRange = 0;
		midRange = 0;
		maxRange = 0;
		artilleryDispersion = 1.9;
		artilleryCharge = 0.20;
	};
	class Single1 : Single0
	{
		displayName = "CHARGE 1";
		artilleryCharge = 0.40;
	};
	class Single2 : Single1
	{
		displayName = "CHARGE 2";
		artilleryCharge = 0.60;
	};
	class Single3 : Single1
	{
		displayName = "CHARGE 3";
		artilleryCharge = 0.80;
	};
	class Single4 : Single1
	{
		displayName = "CHARGE 4";
		artilleryCharge = 1.00;
	};
	class Burst0 : Mode_Burst
	{
		showToPlayer = 0;
		displayName = "$STR_A3_mortar_82mm_Burst10";
		burst = 4;
		aiBurstTerminable = 1;
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = { "A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01", 1.2589254, 1, 250 };
			begin2[] = { "A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02", 1.2589254, 1, 250 };
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
		};
		reloadSound[] = { "A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1.0, 1, 20 };
		soundServo[] = { "", 0.0001, 1.0 };
		soundBurst = 0;
		reloadTime = 1.8;
		minRange = 60;
		minRangeProbab = 0.5;
		midRange = 290;
		midRangeProbab = 0.7;
		maxRange = 665;
		maxRangeProbab = 0.5;
		artilleryDispersion = 2.2;
		artilleryCharge = 0.20;
	};
	class Burst1 : Burst0
	{
		showToPlayer = 0;
		displayName = "$STR_A3_mortar_82mm_Burst20";
		minRange = 230;
		minRangeProbab = 0.4;
		midRange = 1175;
		midRangeProbab = 0.6;
		maxRange = 2660;
		maxRangeProbab = 0.4;
		artilleryCharge = 0.40;
	};
	class Burst2 : Burst0
	{
		showToPlayer = 0;
		displayName = "$STR_A3_mortar_82mm_Burst30";
		minRange = 540;
		minRangeProbab = 0.3;
		midRange = 2355;
		midRangeProbab = 0.4;
		maxRange = 5500;
		maxRangeProbab = 0.3;
		artilleryCharge = 0.60;
	};
	class Burst3 : Burst0
	{
		showToPlayer = 0;
		displayName = "$STR_A3_mortar_82mm_Burst30";
		minRange = 540;
		minRangeProbab = 0.3;
		midRange = 2355;
		midRangeProbab = 0.4;
		maxRange = 5500;
		maxRangeProbab = 0.3;
		artilleryCharge = 0.80;
	};
	class Burst4 : Burst1
	{
		showToPlayer = 0;
		displayName = "$STR_A3_mortar_82mm_Burst30";
		minRange = 540;
		minRangeProbab = 0.3;
		midRange = 2355;
		midRangeProbab = 0.4;
		maxRange = 5500;
		maxRangeProbab = 0.3;
		artilleryCharge = 1.00;
	};
};