class CannonCore;
class cannon_120mm: CannonCore
{
	class player;
	class close;
	class short;
	class medium;
	class far;
};
class autocannon_30mm_CTWS;

// D81
class rhs_weap_d81: cannon_120mm
{
	#define S_Macro class StandardSound\
 	{\
		soundSetShot[] = {"RHS_120mm_Shot_SoundSet","RHS_120mm_int_Shot_SoundSet","RHS_cannon_Tail_SoundSet"};\
	};
	class player: player {S_Macro};
	class close: close {S_Macro};
	class short: short {S_Macro};
	class medium: medium {S_Macro};
	class far: far {S_Macro};
};

// 2a42
class rhs_weap_2a42_base : autocannon_30mm_CTWS
{
	class LowROFBMD2 : Mode_FullAuto
	{
		sounds[] = {StandardSound};
 		class StandardSound
 		{
			soundSetShot[] = {"RHS_autocannon_Shot_SoundSet","RHS_autocannon_int_Shot_SoundSet","RHS_autocannon_Tail_SoundSet"};
		};
	};
	class HighROFBMD2 : LowROFBMD2
	{
 		class StandardSound
 		{
			soundSetShot[] = {"RHS_autocannon_Shot_SoundSet","RHS_autocannon_int_Shot_SoundSet","RHS_autocannon_Tail_SoundSet"};
		};
	};
};

// 2a28
class rhs_weap_2a28_base : cannon_120mm
{
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\2a28\2a28_1",3.15,1,2700};
		begin2[]={"rhsafrf\addons\rhs_sounds\2a28\2a28_2",3.15,1,2700};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
};

// AZP23 (Shilka)
class RHS_weap_AZP23: CannonCore
{
	class manual: CannonCore
	{
		sounds[] = {StandardSound};
 		class StandardSound
 		{
			soundSetShot[] = {"RHS_KPVT_Closure_SoundSet","RHS_KPVT_Shot_SoundSet","RHS_KPVT_Int_Shot_SoundSet","RHS_autocannon_Tail_SoundSet"};
		};
	};
};

// DSHKM

class LMG_RCWS : MGun {};
class rhs_weap_DSHKM: LMG_RCWS
{
	class manual: MGun
	{
		class StandardSound
		{
			soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_DSHKM_Shot_SoundSet","RHS_DSHKM_Int_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
		};
	};
};

// NSVT
class rhs_weap_nsvt : rhs_weap_DSHKM
{
	class manual: MGun
	{
		class StandardSound
		{
			soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_DSHKM_Shot_SoundSet","RHS_DSHKM_Int_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
		};
	};
};
class rhs_weap_nsvt_effects : rhs_weap_nsvt {};
// Kord
class rhs_weap_kord : rhs_weap_nsvt_effects
{
	class manual: manual
	{
		class StandardSound
		{
			soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_DSHKM_Shot_SoundSet","RHS_DSHKM_Int_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
		};
	};
};

// KPVT
class rhs_weap_kpvt : MGun
{
	class manual: MGun
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"RHS_KPVT_Closure_SoundSet","RHS_KPVT_Shot_SoundSet","RHS_KPVT_Int_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
		};
	};
};

// GSh30
class RHS_weap_GSh30 : gatling_30mm
{
	class manual : Mode_FullAuto
	{
		sounds[] = {StandardSound};
 		class StandardSound
 		{
			soundSetShot[] = {"RHS_KPVT_Closure_SoundSet","RHS_KPVT_Shot_SoundSet","RHS_KPVT_Int_Shot_SoundSet","RHS_autocannon_Tail_SoundSet"};
		};
	};
};
class RHS_Weap_GSh301 : RHS_weap_GSh30
{
	class manual : manual
	{
		sounds[] = { StandardSound };
		class StandardSound
		{
			soundSetShot[] = {"RHS_KPVT_Closure_SoundSet","RHS_KPVT_Shot_SoundSet","RHS_KPVT_Int_Shot_SoundSet","RHS_autocannon_Tail_SoundSet"};
		};
	};
};

#define CANNON_155MM_MACRO \
	sounds[] = {StandardSound}; \
	class StandardSound \
	{ \
		soundSetShot[] = {RHS_155mm_Shot_SoundSet,RHS_155mm_int_Shot_SoundSet,RHS_cannon_Tail_SoundSet}; \
	};

class mortar_155mm_AMOS;
class rhs_weap_2a33: mortar_155mm_AMOS
{
	class Single1: Mode_SemiAuto
	{
		CANNON_155MM_MACRO
	};

	class Burst1: Mode_Burst
	{
		CANNON_155MM_MACRO
	};
};
class rhs_weap_d30: mortar_155mm_AMOS
{
	class Single1: Mode_SemiAuto
	{
		CANNON_155MM_MACRO
	};

	class Burst1: Mode_Burst
	{
		CANNON_155MM_MACRO
	};
};