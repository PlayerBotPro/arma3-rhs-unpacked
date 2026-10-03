#define PREFIX RHSUSF
#define ADDONPATCH rhsusf_c_weaponsounds
#define FILEPATH rhsusf\addons\rhsusf_s_weaponsounds\sounds
#define SCRIPTPATH rhsusf\addons\rhsusf_c_weaponsounds






/* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ 
// Smoother Weapon config
#define PACKAGE(WPNNAME,TAILNAME,PREFIX) soundSetShot[] = {"##PREFIX##_##WPNNAME##_Shot_SoundSet","##PREFIX##_##TAILNAME##_Tail_SoundSet"};
#define PACKAGELAYER(WPNNAME,TAILNAME,PREFIX) soundSetShot[] = {##PREFIX##_##WPNNAME##_Shot_SoundSet,##PREFIX##_##TAILNAME##_Tail_SoundSet,##PREFIX##_##WPNNAME##_stereoLayer_SoundSet};

// Includes
#include "cfgPatches.h"

#include "sound_config.hpp"

#include "03_functions\cfgFunctions.h"
#include "05_weaponConfigs\cfgAmmo.h"
#include "05_weaponConfigs\cfgWeapons.h"

//
/* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */ /* DO NOT EDIT */