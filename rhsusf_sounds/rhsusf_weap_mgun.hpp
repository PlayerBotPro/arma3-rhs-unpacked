class HMG_127: LMG_RCWS{};
class HMG_01: HMG_127{};
class HMG_M2: HMG_01
{
	class manual;
	class close;
	class short;
	class medium;
	class far;
};

#define M2_Sound_Macro(mode) class ##mode##: ##mode##\
	{\
		class StandardSound\
		{\
			soundSetShot[] = {"RHSUSF_m2_Closure_SoundSet","RHSUSF_m2_Shot_SoundSet","RHSUSF_sniper1_Tail_SoundSet"};\
		};\
	};

// M2
class RHS_M2_Abrams_Commander: HMG_M2
{
	M2_Sound_Macro(manual)
	M2_Sound_Macro(close)
	M2_Sound_Macro(short)
	M2_Sound_Macro(medium)
	M2_Sound_Macro(far)
};
class RHS_M2_Abrams_Gunner: HMG_M2
{
	M2_Sound_Macro(manual)
	M2_Sound_Macro(close)
	M2_Sound_Macro(short)
	M2_Sound_Macro(medium)
	M2_Sound_Macro(far)
};
class RHS_M2: HMG_M2
{
	M2_Sound_Macro(manual)
	M2_Sound_Macro(close)
	M2_Sound_Macro(short)
	M2_Sound_Macro(medium)
	M2_Sound_Macro(far)
};


class gatling_30mm;
class rhs_weap_M197: gatling_30mm
{
	class manual: Mode_FullAuto 
	{
 		class StandardSound
 		{
			soundSetShot[] = {"RHSUSF_M230_Shot_SoundSet"};
		};
	};
};


class rhs_weap_M230: rhs_weap_M197
{
	class manual: Mode_FullAuto 
	{
 		class StandardSound
 		{
			soundSetShot[] = {"RHSUSF_M230_Shot_SoundSet"};
		};
	};
};
class MGunCore;
class M134_minigun : MGunCore 
{
	class LowROF;
	class HighROF;
	class close;
	class short;
	class medium;
	class far;
};

class rhs_weap_m134_minigun_1: M134_minigun 
{
	class LowROF: LowROF
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m134_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
		};
		soundContinuous = 0;
	};
	class HighROF: HighROF
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m134_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
		};
		soundContinuous = 0;
	};
	class close: close
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m134_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
		};
		soundContinuous = 0;
	};
	class short: short
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m134_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
		};
		soundContinuous = 0;
	};
	class medium: medium
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m134_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
		};
		soundContinuous = 0;
	};
	class far: far
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_m134_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
		};
		soundContinuous = 0;
	};
};

class GMG_F;
class GMG_20mm;
class RHS_MK19: GMG_20mm 
{
	class manual: GMG_F 
	{
		class StandardSound
		{
			soundSetShot[] = {"RHSUSF_mk19_Shot_SoundSet","RHSUSF_lmg1_Tail_SoundSet"};
		};
	};
};


