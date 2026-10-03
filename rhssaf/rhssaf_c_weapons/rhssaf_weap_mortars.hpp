class CannonCore;
class mortar_82mm;

class rhs_weap_m70c: mortar_82mm
{
	displayName="M70 Commando";
	magazines[] =
	{
		"rhssaf_mag_m73_HE"
	};
	modes[] = {"Single0","Single1","Single2", "Burst0", "Burst1"};

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
		dispersion = 0;
		artilleryDispersion = 0;
		//artilleryDispersion = 1.9;
		artilleryCharge = 0.566;
	};
	class Single1 : Single0
	{
		displayName = "CHARGE 1";
		artilleryCharge = 0.81;
	};
	class Single2 : Single0
	{
		displayName = "CHARGE 2";
		artilleryCharge = 1.0;
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
		artilleryCharge = 0.2;
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
		artilleryCharge = 1.0;
	};
};
