
#include "..\global_macro_defines.hpp"

// global define values for within this module

#define AMMO_STR(x)	$STR_RHS_AMMO_##x
#define MAG_STR(x)	$STR_RHS_MAG_##x
#define WEAP_STR(x)	$STR_RHS_WEAP_##x

//RHA calibration macro
#undef RHA
#define RHA(mm,speed) caliber=(mm/((15*speed)/1000));

#define GRIP_MACRO(numb,name) \
    scope = 1;\
    handAnim[] = {"OFP2_ManSkeleton",\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_##name##.rtm};\
    class LinkedItems\
    {\
        class LinkedItemsUnder\
        {\
            item = rhsusf_acc_grip##numb##;\
            slot = "UnderBarrelSlot";\
        };\
    };

#define GRIP_MACRO_US(numb,name) \
    scope = 1;\
    handAnim[] = {"OFP2_ManSkeleton",\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_##name##.rtm};\
    class LinkedItems\
    {\
        class LinkedItemsUnder\
        {\
            item = rhsusf_acc_grip##numb##;\
            slot = "UnderBarrelSlot";\
        };\
    };