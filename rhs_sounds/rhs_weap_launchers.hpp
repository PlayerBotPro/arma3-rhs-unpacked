class Launcher;
class Launcher_Base_F : Launcher {};
class MissileLauncher;

// RPG-26
class rhs_weap_rpg26 : Launcher_Base_F
{
	class single: Mode_SemiAuto
	{
		sounds[] = {StandardSound};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,1100};
			begin2[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_2",2.35,1,1100};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
	};
};

// RPG-7
class rhs_weap_rpg7 : Launcher_Base_F
{
	class single: Mode_SemiAuto
	{
		sounds[] = {StandardSound};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,1100};
			begin2[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_2",2.35,1,1100};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		sound[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,900};
	};
};

// 9k11
class rhs_weap_9k11 : MissileLauncher
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1400};
		begin2[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1400};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
		soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
	};
};

class missiles_Zephyr;	// External class reference
class missiles_titan;

// 9m111
class rhs_weap_9m111 : MissileLauncher
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1400};
		begin2[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1400};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
};

// 9m119
class rhs_weap_9m119 : rhs_weap_9m111
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1400};
		begin2[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1400};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
};

// 2k4
class rhs_weap_2k4 : rhs_weap_9m111
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1400};
		begin2[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1400};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
};

//9k111
class rhs_weap_9k133 : rhs_weap_9m111
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1400};
		begin2[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1400};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
};

class RocketPods;
class rockets_Skyfire: RocketPods
{
	class Far_AI;
	class Medium_AI;
	class Close_AI;
	class Burst;
};
// S5 + S8
class rhs_weap_s5 : rockets_Skyfire
{
	#define rocket_s_macro sounds[] = { StandardSound };\
	class StandardSound\
	{\
		weaponSoundEffect = "DefaultRifle"; \
		begin1[] = { "rhsafrf\addons\rhs_sounds\atgm\atgm_1", 2.35, 1, 1400 }; \
		begin2[] = { "rhsafrf\addons\rhs_sounds\atgm\atgm_2", 2.35, 1, 1400 }; \
		soundBegin[] = { "begin1", 0.5, "begin2", 0.5 }; \
		soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};\
	};

	class Far_AI : Far_AI{ rocket_s_macro };
	class Medium_AI : Medium_AI{ rocket_s_macro };
	class Close_AI : Close_AI{ rocket_s_macro };
	class Burst_AI : RocketPods { rocket_s_macro };
	class Burst : Burst{ rocket_s_macro };
};

// 9k114
class rhs_weap_9K114_launcher: MissileLauncher
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1400};
		begin2[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1400};
		soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
};

// r73
class Missile_AA_04_Plane_CAS_01_F;
class rhs_weap_r73_Launcher: Missile_AA_04_Plane_CAS_01_F
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1400};
		begin2[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1400};
		soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
};

// Kh-25
class Missile_AGM_02_Plane_CAS_01_F;
class rhs_weap_kh25_Launcher: Missile_AGM_02_Plane_CAS_01_F
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1400};
		begin2[]={"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1400};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
		soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
	};
};
