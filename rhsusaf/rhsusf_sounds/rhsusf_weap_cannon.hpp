	

class CannonCore;
class cannon_120mm: CannonCore
{
    class player;
    class close;
    class short;
    class medium;
    class far;
};
class autocannon_Base_F;
class autocannon_30mm_CTWS: autocannon_Base_F
{
    class HE: autocannon_Base_F
    {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };
    class AP: autocannon_Base_F
    {
		class player;
        class close;
        class short;
        class medium;
        class far;
    };
};
     
// M256
class rhs_weap_m256: cannon_120mm
{
    #define M256_S_Macro class StandardSound\
    {\
		soundSetShot[] = {"RHSUSF_120mm_Shot_SoundSet","RHSUSF_120mm_Int_Shot_SoundSet","RHSUSF_cannon_Tail_SoundSet"};\
    };
     
    class player: player {M256_S_Macro};
    class close: close {M256_S_Macro};
    class short: short {M256_S_Macro};
    class medium: medium {M256_S_Macro};
    class far: far {M256_S_Macro};  
};

// M284
class mortar_155mm_AMOS;
class cannon_155mm : mortar_155mm_AMOS
{
	class Single1;
	class Single2;
	class Single3;
	class Single4;
	class Single5;
	class Burst1;
	class Burst2;
	class Burst3;
	class Burst4;
	class Burst5;
};
class rhs_weap_m284 : cannon_155mm
{
	#define M284_S_Macro class StandardSound\
		{\
		soundSetShot[] = {"RHSUSF_155mm_Shot_SoundSet","RHSUSF_cannon_Tail_SoundSet"};\
	};

	class Single1 : Single1{ M284_S_Macro };
	class Single2 : Single2{ M284_S_Macro };
	class Single3 : Single3{ M284_S_Macro };
	class Single4 : Single4{ M284_S_Macro };
	class Single5 : Single5{ M284_S_Macro };
	class Burst1 : Burst1{ M284_S_Macro };
	class Burst2 : Burst2{ M284_S_Macro };
	class Burst3 : Burst3{ M284_S_Macro };
	class Burst4 : Burst4{ M284_S_Macro };
	class Burst5 : Burst5{ M284_S_Macro };
};
     
// M242BC
class RHS_weap_M242BC: autocannon_30mm_CTWS
{
    class HE: HE
    {
        class player: player
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
        class close: close
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
        class short: short
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
        class medium: medium
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
        class far: far
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
    };
    class AP: AP
    {
        class player: player
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
        class close: close
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
        class short: short
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
        class medium: medium
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
        class far: far
        {
            class StandardSound
            {
				soundSetShot[] = {"RHSUSF_autocannon_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};
            };
        };
    };
};

