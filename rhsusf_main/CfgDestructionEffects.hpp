
class RHS_Effects_Helicopter_Hull_Destruction
{
	ammoExplosionEffect = "";
	effectRadius = 1;
	ignoreFuel = 1;

	class RHS_Hull_Smoke
	{
		simulation = "particles";
		type = SmallWreckSmoke;
		position = "hull_fire_1";
		intensity = 0.5;
		interval = 1;
		lifeTime = 60;
	};
	class RHS_Hull_Fire: RHS_Hull_Smoke
	{
		type = MediumDestructionFire;
	};
	class RHS_Hull_Sparks: RHS_Hull_Smoke
	{
		type = AirFireSparks;
	};
	class RHS_Hull_Sounds: RHS_Hull_Smoke
	{
		simulation = "sound";
		type = "Fire";
	};
	class RHS_Hull_Smoke_small1: RHS_Hull_Smoke
	{
		type = WeaponWreckSmoke;
		position = "hull_fire_2";
	};
	class RHS_Hull_Smoke_small2: RHS_Hull_Smoke_small1
	{
		position = "hull_fire_3";
	};
	class RHS_Hull_Fire_2: RHS_Hull_Smoke_small1
	{
		type = MediumDestructionFire;
	};
	class RHS_Hull_Fire_3: RHS_Hull_Smoke_small2
	{
		type = MediumDestructionFire;
	};
};
class RHS_Effects_Airplane_Engine_Destruction
{
	ammoExplosionEffect = "";
	effectRadius = 1;
	ignoreFuel = 1;

	class RHS_Hull_Smoke
	{
		simulation = "particles";
		type = SmallWreckSmoke;
		position = "hull_fire_1";
		intensity = 0.5;
		interval = 1;
		lifeTime = 60;
	};
	class RHS_Hull_Fire: RHS_Hull_Smoke
	{
		type = MediumDestructionFire;
	};
	class RHS_Hull_Sparks: RHS_Hull_Smoke
	{
		type = AirFireSparks;
	};
	class RHS_Hull_Sounds: RHS_Hull_Smoke
	{
		simulation = "sound";
		type = "Fire";
	};
	class RHS_Hull_Smoke_small1: RHS_Hull_Smoke
	{
		type = WeaponWreckSmoke;
		position = "hull_fire_2";
	};
	class RHS_Hull_Smoke_small2: RHS_Hull_Smoke_small1
	{
		position = "hull_fire_3";
	};
	class RHS_Hull_Fire_2: RHS_Hull_Smoke_small1
	{
		type = MediumDestructionFire;
	};
	class RHS_Hull_Fire_3: RHS_Hull_Smoke_small2
	{
		type = MediumDestructionFire;
	};
};