// Uaz469

#include "..\vehicle_init.hpp"

#define VEH_NAME UAZ469
#define VEH_TYPE soft
#define INT_TYPE INT
//#define OPEN_VEHICLE

#define	IDLE_RPM 250
#define	MAX_RPM	5000
#define TOP_SPEED 28

#define EXT_GLOBAL_VOLUME 0.8
#define INT_GLOBAL_VOLUME 0.6

// ENGINE ------------------------------------------------------------------------------------------------------------------------

#define SOUND_LAYER_ENGINE
#define SAMPLE0_RPM 750
#define SAMPLE1_RPM 900
#define SAMPLE2_RPM 2900
#define SAMPLE3_RPM 3800

#define SPEED_RPM_RATIO 0.9 // 0 = use speed sound controller 1 = use rpm sound controller // any value in between will use both controllers with linear interpolation.
#define THRUST_FACTOR 1 // how much thrust affects the engine sounds

// ENGINE_VOLUME
#define SAMPLE0_VOL 0.79//0.85//0.85
#define SAMPLE1_VOL 1
#define SAMPLE2_VOL 1.2
#define SAMPLE3_VOL 1.5


// ENGINE_RANGE
#define ENGINE_RANGE_FACTOR 1.5

#define ENGINE_PITCH 1// -  (0.04 * ((abs(latSlipDrive)) factor [0.01,0.15])) * rpm/1500
#define ENGINE_PITCH_SLOPE 0.8


// relative width of crossfade part between neighbouring samples (0 = no crossfade, 1 = fullscale crossfade
#define VOL_CROSSFADE0_REL_OFFSET 0  // REL offset of lowest sample start fading in (within 0-IDLE_RPM)
#define VOL_CROSSFADE0_REL_RANGE 1 // REL fadein range (within 0-IDLE_RPM)
#define VOL_CROSSFADE1_REL_RANGE 1
#define VOL_CROSSFADE2_REL_RANGE 1
#define VOL_CROSSFADE3_REL_RANGE 1

#define EXT_ENGINE_PROCESSING_TYPE VehicleExt_3DProcessingType
#define INT_ENGINE_PROCESSING_TYPE VehicleInt_Front_3DProcessingType

#define EXT_ENGINE_VOLUME (1.5 + 0.1*THRUST_FACTOR*thrust)
#define INT_ENGINE_VOLUME (1 + 0.1*THRUST_FACTOR*thrust)

// left->right, down->up, front->back
#define EXT_ENGINE_POSITION_OFFSET 0,-0.6,1.2

// ENGINE BURST -------------------------------------------------------------------------------------------------------------------

#define SOUND_LAYER_ENGINE_BURST

#define ENGINE_BURST_SAMPLES_NUMBER_4
#define ENGINE_BURST_TRIGGER (thrust * (((abs(speed)) factor[14,13.9]) - 0.1)) * (acceleration factor [0.02,0.03])
#define EXT_ENGINE_BURST_VOLUME 2.8
#define INT_ENGINE_BURST_VOLUME 2.8



// TIRES --------------------------------------------------------------------------------------------------------------------------

//Global Settings
#define SOUND_LAYER_TIRES
#define TIRES_TYPE tires04

#define EXT_TIRES_VOLUME 3
#define INT_TIRES_VOLUME 0.4
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
#define EXT_TIRES_TURN_HARD_VOLUME 5
#define EXT_TIRES_TURN_SOFT_VOLUME 1.1

#define EXT_TIRES_BRAKE_HARD_VOLUME 0.7
#define EXT_TIRES_BRAKE_SOFT_VOLUME 0.8

#define INT_TIRES_TURN_HARD_VOLUME 0.5
#define INT_TIRES_TURN_SOFT_VOLUME 0.1

#define INT_TIRES_BRAKE_SOFT_VOLUME 0.3
#define INT_TIRES_BRAKE_HARD_VOLUME 0.4

#define TIRES_TURN_HARD_PITCH 0.7
#define TIRES_TURN_SOFT_PITCH 0.7

#define TIRES_BRAKE_HARD_PITCH 0.8
#define TIRES_BRAKE_SOFT_PITCH 0.8

// Surface Loops

#define SURF_PRESSURE (1 + ((2*damper0) factor [0, 2]) + (3*abs(latSlip)))

#define SURF_SLOW_SPEED (abs(speed) factor [0, 4])*(abs(speed) factor [0, 4])*(abs(speed) factor [10, 5])
#define SURF_FAST_SPEED 0.5*(abs(speed) factor [4, 10])

#define SURF_DAMPER_FACTOR (1 + 0.5*(damper0 factor [0.6,1]))*(1 + 0.3*(gmeterz factor [1,1.3]))

#define SURF_ROCK rock * SURF_DAMPER_FACTOR
#define SURF_GRASS grass * SURF_DAMPER_FACTOR
#define SURF_SAND 0.4*sand * SURF_DAMPER_FACTOR
#define SURF_MUD 0.2*mud * SURF_DAMPER_FACTOR
#define SURF_ASPHALT 0.8*asphalt*(1+0.7*((abs(speed)) factor[2,10])) * SURF_DAMPER_FACTOR
#define SURF_GRAVEL 1*gravel * SURF_DAMPER_FACTOR
#define SURF_WATER 0.4*water * SURF_DAMPER_FACTOR

#define SURF_ROCK_RANGE 30
#define SURF_GRASS_RANGE 50
#define SURF_SAND_RANGE 30
#define SURF_GRAVEL_RANGE 50
#define SURF_MUD_RANGE 50
#define SURF_ASPHALT_RANGE 40
#define SURF_WATER_RANGE 40

// ADDITIONAL SOUND LAYERS ----------------------------------------------------------------------------------------------------------

//Rattling

//#define RATTLING_CONDITION ((damper0 factor [0.5,1.5 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [4, 20])
#define RATTLING_CONDITION (1 + 2*(damper0 factor [0.3, 0.8])) * (speed factor[5, 15]) * (1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel))
//#define RATTLING_CONDITION engineOn * ((1 - 0.8*(rock max asphalt)) * (1 - 0.4*(gravel)) * (gmeterZ factor [0.2,1.5])*2 + ((abs(speed)) factor[0, 7]) * (1 - 0.8*(rock max asphalt)))


// INTERIOR RATTLING

#define INT_SOUND_LAYER_RATTLING

//Sample Selection
#define INT_RATTLING_VARIANT 03

//Settings
#define INT_RATTLING_VOLUME 0.25
#define INT_RATTLING_PITCH 1


// EXTERIOR RATTLING
#define EXT_SOUND_LAYER_RATTLING

//Sample Selection
#define EXT_RATTLING_VARIANT 03

//Settings
#define EXT_RATTLING_VOLUME 2
#define EXT_RATTLING_PITCH 0.8
#define EXT_RATTLING_RANGE 60
#define EXT_RATTLING_POSITION_OFFSET 0,0,0



//Stress
#define STRESS_CONDITION ((damper0 factor [0.5,1.5 ]) + (0.2*(gmeterz factor[0.5, 3]))) * (speed factor [12, 35])
//#define STRESS_CONDITION ((gmeterZ factor [1.1,1.3]) max (damper0 factor [0.3, 1])) * (speed factor[2, 15])


// INTERIOR STRESS
#define INT_SOUND_LAYER_STRESS

//Sample Selection
#define INT_STRESS_VARIANT 01

//Settings
#define INT_STRESS_VOLUME 0.25
#define INT_STRESS_PITCH 1


// EXTERIOR STRESS
#define EXT_SOUND_LAYER_STRESS

//Sample Selection
#define EXT_STRESS_VARIANT 01

//Settings
#define EXT_STRESS_VOLUME 0
#define EXT_STRESS_PITCH 1
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
