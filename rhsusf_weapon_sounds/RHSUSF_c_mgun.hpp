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
			soundSetShot[] = {"RHSUSF_veh_m2_Shot_SoundSet","RHSUSF_veh_m2_int_Shot_SoundSet","RHSUSF_veh_rifle2_Tail_SoundSet"};\
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



