class MissileLauncher;
class Missile_AGM_02_Plane_CAS_01_F;

class rhs_weap_zt3_launcher: MissileLauncher
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
	};
};

class rhs_weap_zt6_Launcher: Missile_AGM_02_Plane_CAS_01_F
{
	sounds[] = {StandardSound};
	class StandardSound
	{
		begin1[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",2.5,0.96,1500};
		begin2[]={"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",2.5,0.96,1500};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
};