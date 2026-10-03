#include "..\vehicle_init.hpp"

#define VEH_NAME T80
#define VEH_TYPE armor
#define INT_TYPE INT
//#define OPEN_VEHICLE

#define	IDLE_RPM 700
#define	MAX_RPM	3255
#define TOP_SPEED 18.82

#define EXT_GLOBAL_VOLUME 1.3
#define INT_GLOBAL_VOLUME 1

// ENGINE ------------------------------------------------------------------------------------------------------------------------

#define SOUND_LAYER_ENGINE
#define SAMPLE0_RPM 700
#define SAMPLE1_RPM 1900
#define SAMPLE2_RPM 3000

// ENGINE_VOLUME
#define SAMPLE0_VOL 0.65
#define SAMPLE1_VOL 0.75
#define SAMPLE2_VOL 0.75

#define SPEED_RPM_RATIO 0.9 // 0 = use speed sound controller 1 = use rpm sound controller // any value in between will use both controllers with linear interpolation.
#define THRUST_FACTOR (1 + angVelocity factor[0, 0.5]) // how much thrust affects the engine sounds

#define ENGINE_PITCH 1.0
#define ENGINE_PITCH_SLOPE 0.8

// engine range factor (1 ~ 200-250m)
#define ENGINE_RANGE_FACTOR 6

// relative width of crossfade part between neighbouring samples (0 = no crossfade, 1 = fullscale crossfade
#define VOL_CROSSFADE0_REL_OFFSET 0.15 // REL offset of lowest sample start fading in (within 0-IDLE_RPM)
#define VOL_CROSSFADE0_REL_RANGE 0.1 // REL fadein range (within 0-IDLE_RPM)
#define VOL_CROSSFADE1_REL_RANGE 1.2
#define VOL_CROSSFADE2_REL_RANGE 1.2

#define EXT_ENGINE_PROCESSING_TYPE VehicleExt_3DProcessingType
#define INT_ENGINE_PROCESSING_TYPE VehicleInt_Back_3DProcessingType
#define ENGINE_VOLUME_CURVE InverseSquare3Curve

#define EXT_ENGINE_VOLUME 1.2*(1 + 0.2*(rpm factor[IDLE_RPM,MAX_RPM]) + 0.2*thrust)
	// + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [IDLE_RPM,MAX_RPM])))

#define INT_ENGINE_VOLUME 1.2

// left->right, down->up, front->back
#define EXT_ENGINE_POSITION_OFFSET 0.0,-0.2,-4.3

// ENGINE BURST -------------------------------------------------------------------------------------------------------------------

#define SOUND_LAYER_ENGINE_BURST

#define ENGINE_BURST_SAMPLES_NUMBER_2
#define ENGINE_BURST_TRIGGER (thrust * (angVelocity factor[0.1,0]) * ((abs(speed)) factor[15,14.9]) - 0.5)
#define EXT_ENGINE_BURST_VOLUME 1.6
#define INT_ENGINE_BURST_VOLUME 1


// TRACKS -------------------------------------------------------------------------------------------------------------------------

#define SOUND_LAYER_TRACKS
#define TRACKS_SAMPLES_NUMBER_6

#define TRACKS_TYPE tracks02
#define TRACKS_SURF_HARD ((abs(speed)) factor[0,2]) * (rock + asphalt + 0.5 * gravel + 0.4 * (mud + grass)) * (1 + gmeterz factor [0.3, 0.6])
#define TRACKS_SURF_PRESSURE (1 + ((2*damper2) factor [0, 2]) + (3*abs(latSlip)))
#define TRACKS_TOP_SPEED 7

#define TRACKS_PITCH 0.95
#define EXT_TRACKS_VOLUME 0.45
#define INT_TRACKS_VOLUME 1.2

#define TRACKS_VOLUME_RANGE 300

// left->right, down->up, front->back
#define EXT_TRACKS_POSITION_OFFSET 0,-0.7,-1

// Turns, Brakes

	//Sample selection

	// Ext Brakes Hard/Soft
	#define EXT_TRACKS_BRAKE_HARD_VARIANT 01
	#define EXT_TRACKS_BRAKE_SOFT_VARIANT 01

	// Int Brakes Hard/Soft
	#define INT_TRACKS_BRAKE_HARD_VARIANT 01
	#define INT_TRACKS_BRAKE_SOFT_VARIANT 01

	// Ext Turns Hard/Soft
	#define EXT_TRACKS_TURN_HARD_VARIANT 04
	#define EXT_TRACKS_TURN_SOFT_VARIANT 04

	// Int Turns Hard/Soft
	#define INT_TRACKS_TURN_HARD_VARIANT 04
	#define INT_TRACKS_TURN_SOFT_VARIANT 04


//Volume and Conditions

//Brakes Conditions

#define TRACKS_BRAKE_SURF_HARD (rock + asphalt + gravel) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])
#define TRACKS_BRAKE_SURF_SOFT (1-(rock + asphalt + gravel)) * ((abs(longSlip)) factor [0.01,0.2]) * (speed factor[2,8])

	//Brakes Pitch Hard/Soft
		#define TRACKS_BRAKE_HARD_PITCH 1
		#define TRACKS_BRAKE_SOFT_PITCH 1

	// Ext Brakes Volume
		//Hard
		#define EXT_TRACKS_BRAKE_HARD_VOLUME 0.1
		//Soft
		#define EXT_TRACKS_BRAKE_SOFT_VOLUME 0.6

	// Int Brakes Volume

		#define INT_TRACKS_BRAKE_HARD_VOLUME 1.5
		#define INT_TRACKS_BRAKE_SOFT_VOLUME 1.5

//Turns Conditions

#define TRACKS_TURN_SURF_HARD 0.5 * (asphalt max rock) * (angVelocity factor[0.3,0.4])
#define TRACKS_TURN_SURF_SOFT (1-TRACKS_TURN_SURF_HARD) * (angVelocity factor[0.3,0.4])

	//Turns Pitch Hard/Soft
		#define TRACKS_TURN_HARD_PITCH 1
		#define TRACKS_TURN_SOFT_PITCH 1

	// Ext Turns Volume
		//Hard
		#define EXT_TRACKS_TURN_HARD_VOLUME 1.3 * (angVelocity factor[0.1,0.5])
		//Soft
		#define EXT_TRACKS_TURN_SOFT_VOLUME 1 * (angVelocity factor[0.1,0.9])


	//Int Turns Volume
		//Hard
		#define INT_TRACKS_TURN_HARD_VOLUME 0.75
		//Soft
		#define INT_TRACKS_TURN_SOFT_VOLUME 0.75


//Water Surface
#define DRIVE_WATER_VARIANT 01

#define DRIVE_WATER_CONDITION water * ((abs(speed)) factor[0,4])
#define INT_DRIVE_WATER_VOLUME 1
#define EXT_DRIVE_WATER_VOLUME 1



// ADDITIONAL SOUND LAYERS ----------------------------------------------------------------------------------------------------------

#define INT_TONE_ENGINE_OFF_CONDITION (rpm factor[IDLE_RPM,0])
#define INT_TONE_ENGINE_ON_CONDITION (rpm factor[0,IDLE_RPM])


// INTERIOR TONE

// INT_TONE_ENGINE_ON - High background tone
#define INT_SOUND_LAYER_TONE_ENGINE_ON

#define INT_TONE_ENGINE_ON_VARIANT 02
#define INT_TONE_ENGINE_ON_VOLUME 0.08 * (camint factor [0,1]) * (((rpm factor[IDLE_RPM,2240]) * ((abs(speed)) factor[0,20])) + (0.1 * thrust))
#define INT_TONE_ENGINE_ON_PITCH  0.8 + (1.1* ((rpm factor[0,2240]) * ((abs(speed)) factor[0,20])) * (0.1 * thrust))

// INT_TONE_ENGINE_OFF - Interior Hum
#define INT_SOUND_LAYER_TONE_ENGINE_OFF

#define INT_TONE_ENGINE_OFF_VARIANT 01
#define INT_TONE_ENGINE_OFF_PITCH 1
#define INT_TONE_ENGINE_OFF_VOLUME 0.2

// INTERIOR RATTLING
//fuel pump rattle
#define RATTLING_CONDITION 0.1 * ((rpm factor[0,500]) + ((speed factor[0,20]) + (0.1 * thrust)))

#define INT_SOUND_LAYER_RATTLING
#define INT_RATTLING_VARIANT 03

#define INT_RATTLING_VOLUME 1
#define INT_RATTLING_PITCH 0.85


// EXTERIOR RATTLING

// #define EXT_SOUND_LAYER_RATTLING
// #define EXT_RATTLING_VARIANT 01
// #define EXT_RATTLING_PITCH 1
// #define EXT_RATTLING_VOLUME 0
// #define EXT_RATTLING_RANGE 60
// #define EXT_RATTLING_POSITION_OFFSET 0,0,0


// Stress Condition

// #define STRESS_CONDITION

// Interior Stress Settings

// #define INT_SOUND_LAYER_STRESS
// #define INT_STRESS_VARIANT 01
// #define INT_STRESS_VOLUME 0
// #define INT_STRESS_PITCH 1

// Exterior Stress Settings

// #define EXT_SOUND_LAYER_STRESS
// #define EXT_STRESS_VARIANT 02
// #define EXT_STRESS_VOLUME 0
// #define EXT_STRESS_PITCH 1
// #define EXT_STRESS_RANGE 60
// #define EXT_STRESS_POSITION_OFFSET 0,0,0

// RAIN

#define RAIN_CONDITION rain

// INTERIOR RAIN

#define INT_SOUND_LAYER_RAIN
#define INT_RAIN_VARIANT 01
#define INT_RAIN_VOLUME 2
#define INT_RAIN_PITCH 1
#define INT_RAIN_PROCESSING_TYPE VehicleInt_Front_3DProcessingType

// EXTERIOR RAIN

#define EXT_SOUND_LAYER_RAIN
#define EXT_RAIN_VARIANT 01
#define EXT_RAIN_VOLUME 1.8
#define EXT_RAIN_PITCH 1
#define EXT_RAIN_RANGE 60
#define EXT_RAIN_POSITION_OFFSET 0,0,0

