
class mortar_82mm: CannonCore
{
	class Burst1;
	class Burst2;
	class Burst3;
	class Single1;
	class Single2;
	class Single3;
};

class rhs_weap_2p130: mortar_82mm
{
	displayName="$STR_RHS_2P130_NAME";
	magazines[] = {"rhs_mag_9m41_20"};

	class GunParticles
	{
		class FirstEffect
		{
			effectName = "MortarFired";
			positionName = "2p130_start";
			directionName = "2p130_end";
		};
	};
	class Burst1: Burst1
	{
		reloadTime = 5.8;
	};
	class Burst2: Burst3
	{
		reloadTime = 5.8;
	};
	class Burst3: Burst3
	{
		reloadTime = 5.8;
	};
	class Single1: Single1
	{
		reloadTime = 5.8;
	};
	class Single2: Single2
	{
		reloadTime = 5.8;
	};
	class Single3: Single3
	{
		reloadTime = 5.8;
	};
};

class rhs_weap_2b14: mortar_82mm
{
	displayName="$STR_RHS_2b14_NAME";
	magazines[] =
	{
		"rhs_mag_3vo18_10", //82-мм осколочная мина
		"rhs_mag_3vs25m_10", //Осветительные, выстрелы раздельного заряжания с С боеприпасами
		"rhs_mag_53_va_832a_10", // agitation shell! http://www.russianarms.ru/forum/index.php?topic=6794.0
		"rhs_mag_d832du_10" //smoke
	};
};