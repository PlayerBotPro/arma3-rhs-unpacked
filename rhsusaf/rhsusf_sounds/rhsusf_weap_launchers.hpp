class RocketPods;
class MissileLauncher;
class Missile_AGM_02_Plane_CAS_01_F;



// M136
class rhs_weap_M136 : Launcher_Base_F
{
	sounds[] = {StandardSound};
	class StandardSound 
	{
		begin1[] = {"rhsusf\addons\rhsusf_weapons2\smaw\sound\smaw_s2.wav",db20,1,1200};
			soundBegin[] = {"begin1",1};
		//soundSetShot[] = {"RHSUSF_m136_Closure_SoundSet","RHSUSF_autocannon_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
	};
};

// Javelin
class rhs_weap_fgm148: launch_O_Titan_F
{
	class Single: Mode_SemiAuto
	{
		sounds[] = {StandardSound};
		class StandardSound
		{
			begin1[]={"rhsusf\addons\rhsusf_sounds\javelin\javelin_1",2.35,1,1500};
			begin2[]={"rhsusf\addons\rhsusf_sounds\javelin\javelin_2",2.35,1,1500};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
		sound[] = { "rhsusf\addons\rhsusf_sounds\javelin\javelin_1", 2.35, 1, 900 };
	};
};

// Hellfire
class rhs_weap_HellfireLauncher: Missile_AGM_02_Plane_CAS_01_F
{
	class TopDown: Mode_SemiAuto {
		sounds[] = {StandardSound};
		class StandardSound
		{
			begin1[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",2.5,0.96,1500};
			begin2[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",2.5,0.96,1500};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
	};
};

// Sidewinder
class rhs_weap_SidewinderLauncher : MissileLauncher
{
	sounds[] = {StandardSound};
	class StandardSound
	{
		begin1[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",2.5,1.03,1500};
		begin2[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",2.5,1.03,1500};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
};

// FFAR
class rhs_weap_FFARLauncher: RocketPods
{
	class Far_AI: RocketPods
	{
		sounds[] = {StandardSound};
		class StandardSound
		{
			begin1[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",2.4,1,1400};
			begin2[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",2.4,1,1400};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
	};
	class Burst: RocketPods
	{
		sounds[] = {StandardSound};
		class StandardSound
		{
			begin1[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",2.4,1,1400};
			begin2[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",2.4,1,1400};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
		};
	};
};