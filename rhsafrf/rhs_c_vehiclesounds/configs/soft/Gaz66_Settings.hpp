//Ural-4320

#include "..\vehicle_init.hpp"

#define VEH_NAME gaz66
#define VEH_TYPE soft
#define INT_TYPE INT
//#define OPEN_VEHICLE

#define	IDLE_RPM 500
#define	MAX_RPM	3200
#define TOP_SPEED 20

#define EXT_GLOBAL_VOLUME 0.8
#define INT_GLOBAL_VOLUME 0.6

// ENGINE ------------------------------------------------------------------------------------------------------------------------

#define SOUND_LAYER_ENGINE
#define SAMPLE0_RPM 600
#define SAMPLE1_RPM 1000
#define SAMPLE2_RPM 1900
#define SAMPLE3_RPM 2400

#define SPEED_RPM_RATIO 0.9 // 0 = use speed sound controller 1 = use rpm sound controller // any value in between will use both controllers with linear interpolation.
#define THRUST_FACTOR 1 // how much thrust affects the engine sounds

#define ENGINE_PITCH 0.8
#define ENGINE_PITCH_SLOPE 0.9

// engine range factor (1 ~ 200-250m)
#define ENGINE_RANGE_FACTOR 3.5

// relative width of crossfade part between neighbouring samples (0 = no crossfade, 1 = fullscale crossfade
#define VOL_CROSSFADE0_REL_OFFSET 0.05 // REL offset of lowest sample start fading in (within 0-IDLE_RPM)
#define VOL_CROSSFADE0_REL_RANGE 0.5 // REL fadein range (within 0-IDLE_RPM)
#define VOL_CROSSFADE1_REL_RANGE 1.4
#define VOL_CROSSFADE2_REL_RANGE 1.3
#define VOL_CROSSFADE3_REL_RANGE 1.2
#define VOL_CROSSFADE4_REL_RANGE 1.1

#define EXT_ENGINE_PROCESSING_TYPE VehicleExt_3DProcessingType
#define INT_ENGINE_PROCESSING_TYPE VehicleInt_Back_3DProcessingType

#define EXT_ENGINE_VOLUME 1.5
#define INT_ENGINE_VOLUME 1.6

// left->right, down->up, front->back
#define EXT_ENGINE_POSITION_OFFSET 0,-0.4,2.2

// ENGINE BURST -------------------------------------------------------------------------------------------------------------------

//#define SOUND_LAYER_ENGINE_BURST

#define ENGINE_BURST_SAMPLES_NUMBER_3
#define ENGINE_BURST_TRIGGER (thrust * (((abs(speed)) factor[5,4.9]) - 0.6)) * (acceleration factor [0.02,0.03])
#define EXT_ENGINE_BURST_VOLUME 1.5
#define INT_ENGINE_BURST_VOLUME 1.5



// TIRES --------------------------------------------------------------------------------------------------------------------------

//Global Settings
#define SOUND_LAYER_TIRES
#define TIRES_TYPE tires04

#define EXT_TIRES_VOLUME 1.5
#define INT_TIRES_VOLUME 0.35
#define TIRES_PITCH 1

#define EXT_TIRES_POSITION_OFFSET 0,0,0


// Turns, Brakes

//Sample selection
#define TIRES_TURN_HARD_VARIANT 01
#define TIRES_TURN_SOFT_VARIANT 01

#define TIRES_BRAKE_HARD_VARIANT 01
#define TIRES_BRAKE_SOFT_VARIANT 01



#define TIRES_TURN_HARD_RANGE 50
#define TIRES_TURN_SOFT_RANGE 50

#define TIRES_BRAKE_HARD_RANGE 50
#define TIRES_BRAKE_SOFT_RANGE 50

// Conditions
#define TIRES_TURN_HARD_CONDITION (asphalt max rock) * (abs(latSlip) factor [0.1,0.2])
#define TIRES_TURN_SOFT_CONDITION (1-asphalt)*(1-rock)*(1-water)*(1-sand) * (abs(latSlip) factor [0.07,0.2])

#define TIRES_BRAKE_HARD_CONDITION (asphalt max rock) * (0.5*(abs(longSlip) factor [0.1,0.3]))
#define TIRES_BRAKE_SOFT_CONDITION (1-asphalt)*(1-rock)*(1-water)*(1-sand) * ((abs(longSlip) factor [0.07,0.3]))

// Settings
#define EXT_TIRES_TURN_HARD_VOLUME 1.9
#define EXT_TIRES_TURN_SOFT_VOLUME 1.5

#define EXT_TIRES_BRAKE_HARD_VOLUME 1.9
#define EXT_TIRES_BRAKE_SOFT_VOLUME 1.5

#define INT_TIRES_TURN_HARD_VOLUME 0.5
#define INT_TIRES_TURN_SOFT_VOLUME 0.1

#define INT_TIRES_BRAKE_SOFT_VOLUME 0.1
#define INT_TIRES_BRAKE_HARD_VOLUME 0.5

#define TIRES_TURN_HARD_PITCH 0.7
#define TIRES_TURN_SOFT_PITCH 1

#define TIRES_BRAKE_HARD_PITCH 0.7
#define TIRES_BRAKE_SOFT_PITCH 1


#define SURF_PRESSURE (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip)))

#define SURF_SLOW_SPEED (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5])
#define SURF_FAST_SPEED (abs(speed) factor [4, 10])

#define SURF_DAMPER_FACTOR (1 + 0.1*(damper0 factor [0.6,1]))

#define SURF_ROCK 0.6*rock * SURF_DAMPER_FACTOR
#define SURF_GRASS 0.65*grass*(0.9 + 0.3*damper0) * SURF_DAMPER_FACTOR
#define SURF_SAND 0.2*sand * SURF_DAMPER_FACTOR
#define SURF_GRAVEL 0.6*gravel*(0.9 + 0.3*damper0) * SURF_DAMPER_FACTOR
#define SURF_MUD 0.65*mud*(0.9 + 0.3*damper0) * SURF_DAMPER_FACTOR
#define SURF_ASPHALT 0.3*asphalt*(1+0.7*((abs(speed)) factor[5,15]))*(0.9 + 0.3*damper0) * SURF_DAMPER_FACTOR
#define SURF_WATER 0.2*water

#define SURF_ROCK_RANGE 30
#define SURF_GRASS_RANGE 50
#define SURF_SAND_RANGE 30
#define SURF_GRAVEL_RANGE 50
#define SURF_MUD_RANGE 50
#define SURF_ASPHALT_RANGE 40
#define SURF_WATER_RANGE 40

// ADDITIONAL SOUND LAYERS ----------------------------------------------------------------------------------------------------------

//Rattling

#define RATTLING_CONDITION (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))
//#define RATTLING_CONDITION ((damper0 factor [0.5,1.5 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [4, 20])
//#define RATTLING_CONDITION engineOn * ((1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel)) * (gmeterZ factor [0.2,1.5])*2 + ((abs(speed)) factor[0, 7]) * (1 - 0.8*(rock max asphalt)))


// INTERIOR RATTLING

#define INT_SOUND_LAYER_RATTLING

//Sample Selection
#define INT_RATTLING_VARIANT 03

//Settings
#define INT_RATTLING_VOLUME 0.5
#define INT_RATTLING_PITCH 1


// EXTERIOR RATTLING
#define EXT_SOUND_LAYER_RATTLING

//Sample Selection
#define EXT_RATTLING_VARIANT 03

//Settings
#define EXT_RATTLING_VOLUME 2
#define EXT_RATTLING_PITCH 1
#define EXT_RATTLING_RANGE 60
#define EXT_RATTLING_POSITION_OFFSET 0,0,0



//Stress
//#define STRESS_CONDITION ((damper0 factor [0.5,1.5 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [12, 25]) * (1 * (angvelocity factor [0.8,1.2]))
//#define STRESS_CONDITION ((gmeterZ factor [1.1,1.3]) max (damper0 factor [0.3, 1])) * (speed factor[2, 15])
#define STRESS_CONDITION ((damper0 factor [0.9,1]) * (speed factor [5, 15]))//(gmeterz factor[0.6, 0.7])

// INTERIOR STRESS
#define INT_SOUND_LAYER_STRESS

//Sample Selection
#define INT_STRESS_VARIANT 01

//Settings
#define INT_STRESS_VOLUME 0.8
#define INT_STRESS_PITCH 1.3


// EXTERIOR STRESS
#define EXT_SOUND_LAYER_STRESS

//Sample Selection
#define EXT_STRESS_VARIANT 01

//Settings
#define EXT_STRESS_VOLUME 1
#define EXT_STRESS_PITCH 1.3
#define EXT_STRESS_RANGE 60
#define EXT_STRESS_POSITION_OFFSET 0,0,0


//RAIN

#define RAIN_CONDITION rain


// INTERIOR RAIN

#define INT_SOUND_LAYER_RAIN

//Sample Selection
#define INT_RAIN_VARIANT 01

//Rain Settings
#define INT_RAIN_VOLUME 1
#define INT_RAIN_PITCH 1
#define INT_RAIN_PROCESSING_TYPE VehicleInt_Front_3DProcessingType


// EXTERIOR RAIN

#define EXT_SOUND_LAYER_RAIN

//Sample Selection
#define EXT_RAIN_VARIANT 01

//Rain Settings
#define EXT_RAIN_VOLUME 1
#define EXT_RAIN_PITCH 1
#define EXT_RAIN_RANGE 50
#define EXT_RAIN_POSITION_OFFSET 0,0,0
