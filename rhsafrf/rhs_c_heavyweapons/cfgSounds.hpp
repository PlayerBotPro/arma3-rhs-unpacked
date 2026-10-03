
class CfgSounds
{
	class RHS_ERA_EXPLOSION_1
	{
		name = "ERA Explosion 1";
		sound[] =
		{
			"A3\Sounds_F\weapons\Explosion\explosion_mine_1",
			db,
			1
		};
		titles[] = {};
	};
	class RHS_Autoloader
	{
		name = "Autoloader sound";
		sound[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",  db+3, 1, 200};
		titles[] = {};
	};
};
class cfgSFX
{
	class RHS_ERA_Explosion_Sound
	{
		sound0[]	= {"A3\Sounds_F\weapons\Explosion\explosion_mine_1",db+1,1,200,1,10,10,10};
		sounds[]	= {"sound0"};
		titles[]	= {};
		empty[]		= {"",0,0,0,0,0,0,0};
	};
};