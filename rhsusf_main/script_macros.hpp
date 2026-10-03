
// RGB Colors
#define RGB_GREEN 0, 0.5, 0, 1
#define RGB_BLUE 0, 0, 1, 1
#define RGB_ORANGE 0.5, 0.5, 0, 1
#define RGB_RED 1, 0, 0, 1
#define RGB_YELLOW 1, 1, 0, 1
#define RGB_WHITE 1, 1, 1, 1
#define RGB_GRAY 0.5, 0.5, 0.5, 1
#define RGB_BLACK 0, 0, 0, 1
#define RGB_MAROON 0.5, 0, 0, 1
#define RGB_OLIVE 0.5, 0.5, 0, 1
#define RGB_NAVY 0, 0, 0.5, 1
#define RGB_PURPLE 0.5, 0, 0.5, 1
#define RGB_FUCHSIA 1, 0, 1, 1
#define RGB_AQUA 0, 1, 1, 1
#define RGB_TEAL 0, 0.5, 0.5, 1
#define RGB_LIME 0, 1, 0, 1
#define RGB_SILVER 0.75, 0.75, 0.75, 1

//Strings
#define STR_FAC(x) $STR_RHSUSF_FAC_##x
#define STR_VEH(x) $STR_RHSUSF_VEHCLASS_##x

// Weapon defaults
// NOTE !!!! - Do not forget to dummy-update the configs that use these defines, or the changes won't activate due to binarization!
#define RHS_DEFAULT_WEAPONS "Throw", "Put"
#define RHS_ROCK_PAPER_SCISSORS "ItemMap","ItemCompass","ItemWatch","ItemRadio"

#define RHS_DEFAULT_SLOTS "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072"

#define RHS_NOGRIP handAnim[] = {}
#define RHS_DISTANCE_DEFAULT distanceZoomMin = 300; distanceZoomMax = 300

#define RHS_NOZEROING discreteDistance[] = {}; \
			discreteDistanceInitIndex = 0; \
			weaponInfoType = "RscWeaponEmpty"
			
#define RHS_NOTURRETZEROING discreteDistance[] = {}; \
			discreteDistanceInitIndex = 0; \
			turretInfoType = "RscWeaponEmpty"

// TODO: Cleanup in all the configs around
#define RHS_M_MAG(x,y)	class _xx_##x {magazine = ##x; count = ##y;}
#define RHS_M_WEP(x,y)	class _xx_##x {weapon = ##x; count = ##y;}

// Weapon defines
// weapon optics macros in weapons 

// Vehicle defines
// vehicle optics macros in main
#include "script_macros_vehicleoptics.hpp"