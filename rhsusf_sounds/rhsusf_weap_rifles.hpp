class Rifle_Base_F;
class Pistol_Base_F;
class arifle_MX_Base_F: Rifle_Base_F {};
class Rifle_Short_Base_F;
class Rifle_Long_Base_F;
class UGL_F;
class srifle_EBR_F;
class LMG_Mk200_F;
class MGun;
class LMG_RCWS: MGun {};
class SMG_02_base_F : Rifle_Short_Base_F {
	class Single;
	class FullAuto;
	class WeaponSlotsInfo;
};
class Launcher;
class Launcher_Base_F : Launcher{};
class launch_O_Titan_F;
// M249
class rhs_weap_saw_base : Rifle_Base_F
{
	class FullAuto: Mode_FullAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m249_Closure_SoundSet","RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHSUSF_m249_Closure_SoundSet","RHSUSF_m249_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
		};
	};
};

class rhs_weap_lmg_minimipara : rhs_weap_saw_base
{
	class FullAuto: FullAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m249_Closure_SoundSet","RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHSUSF_m249_Closure_SoundSet","RHSUSF_m249_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
		};
	};
};


// M240
class rhs_weap_M249_base;
class rhs_weap_m240_base : rhs_weap_M249_base
{
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\m240\reload",1.3,1,30};
	class manual: Mode_FullAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Closure_SoundSet","RHSUSF_m240_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
		};
	};
};

class LMG_M200 : LMG_RCWS {
	class manual;
	class close;
	class short;
	class medium;
	class far;
};
class rhs_weap_m240veh: LMG_M200
{
	class manual: manual
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Closure_SoundSet","RHSUSF_m240_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
		};
	};
	class close: close
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Closure_SoundSet","RHSUSF_m240_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
		};
	};
	class short: short
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Closure_SoundSet","RHSUSF_m240_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
		};
	};
	class medium: medium
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Closure_SoundSet","RHSUSF_m240_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
		};
	};
	class far: far
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m240_Closure_SoundSet","RHSUSF_m240_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
		};
	};
};
class rhs_weap_m240veh_mounted: rhs_weap_m240veh
{
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\m240\reload",1.3,1,30};
};

// M4
class rhs_weap_m4_Base : arifle_MX_Base_F
{
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\reload",1.0,1,10};
	changeFiremodeSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\firemode",0.6,1,5};

	class M203_GL: UGL_F
	{
		class Single : Mode_SemiAuto
		{
			sounds[]={"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"rhs_m203_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
			};
		};
	};
	class M320_GL: M203_GL
	{
		class Single : Mode_SemiAuto
		{
			sounds[]={"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"rhs_m203_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
			};
		};
	};
};

class rhs_weap_m16a4 : rhs_weap_m4_Base
{
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\reload",1.0,1,10};
	changeFiremodeSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\firemode",0.6,1,5};
};
// M14

// SR-25
class rhs_weap_m14ebrri;
class rhs_weap_sr25 : rhs_weap_m14ebrri
{
	class Single : Mode_SemiAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m16_Closure_SoundSet","RHSUSF_m14_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHSUSF_m16_Closure_SoundSet","RHSUSF_m14_ShotSD_SoundSet","RHSUSF_Rifle1_SD_Tail_SoundSet"};
		};
	};

};

// M590
class rhs_weap_M590_5RD : Rifle_Base_F
{
	class Single: Mode_SemiAuto
	{
		sounds[]={"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_M590_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
		};
	};
};
class rhs_weap_M590_8RD : rhs_weap_M590_5RD
{
	class Single: Single
	{
		sounds[]={"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_M590_Closure_SoundSet","RHSUSF_M590_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
		};
	};
};

// UGL
class rhs_weap_M320_Base_F: Pistol_Base_F
{
	class Single: Mode_SemiAuto
	{
		sounds[]={"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"rhs_m203_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
		};
	};
};

// XM2010
class rhs_weap_XM2010_Base_F: Rifle_Base_F
{
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\m2010\reload",1,1,20};
};

// M32
class rhs_weap_m32_Base_F: Rifle_Base_F
{
	class Single : Mode_SemiAuto
	{
		sounds[]={"StandardSound"};
		class StandardSound
		{
			closure1[] = {"rhsusf\addons\rhsusf_sounds\m32\Closure_1",2.4,1,35};
			closure2[] = {"rhsusf\addons\rhsusf_sounds\m32\Closure_2",2.4,1,35};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};

			begin1[]={"rhsusf\addons\rhsusf_sounds\m32\m32_1",1.95,1,800};
			begin2[]={"rhsusf\addons\rhsusf_sounds\m32\m32_2",1.95,1,800};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
			soundSetShot[] = {"rhs_m32gl_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
		};
	};
};

// M107
class GM6_base_F;
class rhs_weap_M107_Base_F: GM6_base_F
{
	class Single: Mode_SemiAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m107_Closure_SoundSet","RHSUSF_sniper1_crackling_SoundSet","RHSUSF_m107_Shot_SoundSet","RHSUSF_sniper1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHSUSF_m107_Closure_SoundSet","RHSUSF_m107_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
		};
	};
};

// Mp7
class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
{
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\mp7\reload",1.3,1,13};
	class Single: Single
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_Shot_SoundSet","RHSUSF_pistol1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
		};
	};
	class FullAuto: FullAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_Shot_SoundSet","RHSUSF_pistol1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
		};
	};
};