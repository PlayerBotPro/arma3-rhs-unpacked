	class RHS_AH64_base: Heli_Attack_01_base_F
	{
		dlc = "RHS_USAF";

		LESH_canBeTowed = 1;
		LESH_towFromFront = 0;
		LESH_AxisOffsetTarget[] = {0,-8.3,-1};
		LESH_WheelOffset[] = {0,2.5};

		category = "Air";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_air_gunship_s"
				};
				speechPlural[]=
				{
					"veh_air_gunship_p"
				};
			};
		};
		displayName="AH-64";
		side=1;
		accuracy=0.5;
		unitInfoType		= "RHSUSF_RscUnitInfoAir_AH64";
		unitInfoTypeRTD		= "RHSUSF_RscUnitInfoAirRTDFullDigital_AH64";
		//unitInfoTypeLite	= "RHSUSF_RscUnitInfoAirRTD_Basic_AH64";
		class Library
		{
			libTextDesc="AH64";
		};
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		camShakeCoef		= 0.8;

		//Target params definitions
		irTarget = 1;
		irTargetSize = 0.9;

		visualTarget = 1;
		visualTargetSize = 0.9;

		radarTarget = 1;
		radarTargetSize = 1;

		radarType = 4;
		LockDetectionSystem				= __EVAL(8 + 4);
		incomingMissileDetectionSystem	= __EVAL(2 + 8 + 16);
		threat[]={0.8,1,0.6};
		gunnerCanSee = __EVAL(1+2+4+16+32);
		driverCanSee = __EVAL(1+2+4+16+32);

		weaponsGroup1 = WEAPONGROUP_CANNONS + WEAPONGROUP_MGUNS;
		weaponsGroup2 = WEAPONGROUP_BOMBS + WEAPONGROUP_ROCKETS + WEAPONGROUP_SPECIAL;
		weaponsGroup3 = WEAPONGROUP_ATMISSILES + WEAPONGROUP_MISSILES;
		weaponsGroup4 = WEAPONGROUP_AAMISSILES;

		// TADS
		class DriverOpticsIn
		{
			class Wide
			{
				hitpoint 			= Hit_Optic_TADS;
				camPos				= GunnerView;
				camDir				= gunnerview_dir;
				opticsDisplayName	="W";
				initAngleX			= 0;
				minAngleX			= -30;
				maxAngleX			= 30;
				initAngleY			= 0;
				minAngleY			= -100;
				maxAngleY			= 100;
				initFov				= 0.456;
				minFov				= 0.456;
				maxFov				= 0.456;
				directionStabilized	= 0;
				visionMode[]=
				{
					"Normal",
					"Ti"
				};
				thermalMode[]={0,1};
				opticsModel="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64";
			};
			class Medium: Wide
			{
				directionStabilized	= 1;
				opticsDisplayName	= "M - Stabilized";
				initFov				= __EVAL(0.7/12);
				minFov				= __EVAL(0.7/12);
				maxFov				= __EVAL(0.7/12);
				opticsModel			= "\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_2";
			};
			class Narrow: Medium
			{
				opticsDisplayName	="N - Stabilized";
				opticsModel			="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_3";
				initFov				= __EVAL(0.7/32);
				minFov				= __EVAL(0.7/32);
				maxFov				= __EVAL(0.7/32);
			};
		};
		// PNVS
		memoryPointDriverOptics = "pnvs_pos";
		//driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					hitpoint 			= Hit_Optic_PNVS;
					camPos				= gunnerView;
					camDir				= gunnerview_dir;
					opticsDisplayName	="W";
					initAngleX			= 0;
					minAngleX			= -30;
					maxAngleX			= 30;
					initAngleY			= 0;
					minAngleY			= -100;
					maxAngleY			= 100;
					initFov				= 0.456;
					minFov				= 0.456;
					maxFov				= 0.456;
					visionMode[]=
					{
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel ="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64";
				};
				class Medium: Wide
				{
					opticsDisplayName	="M - Stabilized";
					initFov				=0.093;
					minFov				=0.093;
					maxFov				=0.093;
					gunnerOpticsModel 	="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_2";
				};
				class Narrow: Medium
				{
					opticsDisplayName	="N - Stabilized";
					gunnerOpticsModel 	="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_3";
					initFov				=0.029;
					minFov				=0.029;
					maxFov				=0.029;
				};
			};
			minTurn					= -90;
			maxTurn					= 90;
			initTurn				= 0;
			minElev					= -20;
			maxElev					= 45;	// it's inverted...
			initElev				= 5;
			maxXRotSpeed			= 2.4;
			maxYRotSpeed			= 2.4;
			maxMouseXRotSpeed		= 0.5;
			maxMouseYRotSpeed		= 0.5;
			pilotOpticsShowCursor	= 1;
			controllable			= 1;
		};
		CREW_AH64_D

		defaultUserMFDvalues[] =
		{
			0.1,	// r
			1,		// g
			0.1,	// b
			0,		// alpha
			0, 		// user4 - Pilot Left MFD
			1, 		// user5 - Pilot Right MFD
			1, 		// user6 - Gunner Left MFD
			5, 		// user7 - Gunner Right MFD
			0, 		// user8 - Radar Mode - 0 ground, 1 air
			1, 		// user9 - Camera zoom
			0, 		// user10 - Weapon Mode
			0, 		// user11 - Turn Rate
			0, 		// user12 - Rotor speed
			0, 		// user13 - Engine 1 Power
			0, 		// user14 - Engine 2 Power
			3000, 	// user15 - Primary Hydraulic System
			0, 		// user16 - FCR Scan Line
			0,		// User17 - FCR Bearing
			0,		// User18 - FCR Elev
			0,		// User19 - PNVS mode
		};
		/*
			userText0 - Camera feed mode
			userText1 - Time to waypoints
			userText2 - Remaining fuel time
		*/
		// m/s to knots
		#define SPEED_FACTOR 1.94384449
		#define HEIGHT_FACTOR 3.2808399
		#define MFD_MATERIAL \
		class material\
		{\
			ambient[] = {5, 5, 5, 1};\
			diffuse[] = {5, 5, 5, 1};\
			emissive[] = {400, 200, 200, 1};\
		};
		class MFD
		{
			class HMD
			{
				#include "cfgHMD_AH64.hpp"
			};
			class HMD_Gunner
			{
				#include "cfgHMD_AH64_Gunner.hpp"
			};
			#define MFD_CONDITION(numb,val)  condition	= on*(user##numb##>=##val##)*(user##numb##<=##val##);
			#define MFD_MEMORY_MACRO(MFD_NAME)\
				topLeft					= ##MFD_NAME##_TL;\
				topRight				= ##MFD_NAME##_TR;\
				bottomLeft				= ##MFD_NAME##_BL;
			#define MFD_MEMORY_POINTS PILOT_UFD
			class UFD
			{
				#include "cfgMFD_AH64_UFD.hpp"
			};
			#define MFD_MEMORY_POINTS PILOT_MFD_L
			#define MFD_CONDITION_NUMBER 4

			class MFD_Left_Flight
			{
				#include "cfgMFD_AH64_Flight.hpp"
			};
			/*class MFD_Left_Navigation
			{
				#include "cfgMFD_AH64_Navigation.hpp"
			};*/
			class MFD_Left_Weapons
			{
				#include "cfgMFD_AH64_Weapons.hpp"
			};
			class MFD_Left_Weapons_Gun
			{
				#include "cfgMFD_AH64_Weapons_Gun.hpp"
			};
			class MFD_Left_Fuel
			{
				#include "cfgMFD_AH64_Fuel.hpp"
			};
			class MFD_Left_Engine
			{
				#include "cfgMFD_AH64_Engine.hpp"
			};
			class MFD_Left_TADS
			{
				#include "cfgMFD_AH64_TADS.hpp"
			};
			class MFD_Left_Radar
			{
				#include "cfgMFD_AH64_Radar.hpp"
			};
			#define MFD_MEMORY_POINTS PILOT_MFD_R
			#define MFD_CONDITION_NUMBER 5

			class MFD_Right_Flight
			{
				#include "cfgMFD_AH64_Flight.hpp"
			};
			/*class MFD_Right_Navigation
			{
				#include "cfgMFD_AH64_Navigation.hpp"
			};*/
			class MFD_Right_Weapons
			{
				#include "cfgMFD_AH64_Weapons.hpp"
			};
			class MFD_Right_Weapons_Gun
			{
				#include "cfgMFD_AH64_Weapons_Gun.hpp"
			};
			class MFD_Right_Fuel
			{
				#include "cfgMFD_AH64_Fuel.hpp"
			};
			class MFD_Right_Engine
			{
				#include "cfgMFD_AH64_Engine.hpp"
			};
			class MFD_Right_TADS
			{
				#include "cfgMFD_AH64_TADS.hpp"
			};
			class MFD_Right_Radar
			{
				#include "cfgMFD_AH64_Radar.hpp"
			};
		};
		#include "sounds.hpp"
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"Pilot_MFD_L",
			"Pilot_MFD_R",
			"Gunner_MFD_L",
			"Gunner_MFD_R"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_body_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_alfa_ca.paa",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			//"\rhsusf\addons\rhsusf_a2port_air\ah64\ah64_mfd_radar_page_aa.paa",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"#(argb,8,8,3)color(0,0,0,1.0,co)"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				AUTHOR_MACRO_BIS_PORT
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_body_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_alfa_ca.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd,
					rhs_faction_usarmy_d
				};
			};
			class Grey
			{
				displayName="Grey";
				AUTHOR_MACRO_BIS_PORT
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_g_body_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_g_details_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_alfa_ca.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd,
					rhs_faction_usarmy_d
				};
			};
		};
		textureList[]=
		{
		};
		class Attributes {
			class ObjectTexture {
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
		};
		selectionHRotorStill	= "velka vrtule staticka";
		selectionHRotorMove		= "velka vrtule blur";
		selectionVRotorStill	= "mala vrtule staticka";
		selectionVRotorMove		= "mala vrtule blur";
		selectionDamage			= "trup";
		selectionShowDamage		= "poskozeni";

		memoryPointLRocket	= "l raketa";
		memoryPointRRocket	= "p raketa";
		memoryPointLMissile	= "Rocket_1";
		memoryPointRMissile	= "Rocket_2";

		class Components;

		armor				= 40;
		armorStructural 	= 20;
		damageResistance	= 0.00555;
		hullDamageCauseExplosion = 1;
		epeImpulseDamageCoef = 1;
		hullExplosionDelay[] = {10, 20};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				simulation		= RHS_Hull_Helicopter;
				armor			= -150;
				minimalHit		= -0.3;
				radius			= 0.1;
				name			= "hull_hit";
				armorComponent	= "Hit_Hull";
				visual			= "zbytek";
				passThrough		= 1;
				class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
			};
			class HitFuel: HitFuel
			{
				armor		= -80;
				radius		= 0.25;
				minimalHit	= -0.01;
			};
			class HitAvionics: HitAvionics
			{
				armor		= -70;
				radius		= 0.4;
				minimalHit	= -0.05;
				name		= "elektronika";
				visual		= "elektronika";
			};
			class HitEngine1: HitEngine1
			{
				armor				= -50;
				radius				= 0.18;
				explosionShielding	= 1;
				minimalHit			= -0.05;
				visual 				= "Vis_engine_l";
				name				= "Hit_Engine_1";
				armorComponent		= "Hit_Engine_1";
			};
			class HitEngine2: HitEngine1
			{
				visual			= "Vis_engine_r";
				name			= "Hit_Engine_2";
				armorComponent	= "Hit_Engine_2";
			};
			class HitEngine: HitEngine2
			{
				armor			= 999;
				name			= "engine_hit";
				depends			= "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor				= 4;
				radius				= 0.4;
				minimalHit			= -0.09;
				explosionShielding	= 2.5;
				armorComponent		= Hit_Rotor_Main;
				name				= "velka vrtule";
				visual				= "velka vrtule staticka";
			};
			// When tail is destroyed it's assumed that stabilizers & rear rotor is destroyed
			class HitTail 			{armor = -150;	explosionShielding = 0.20; passThrough = 0.50; minimalHit = -0.15;	radius = 0.13; 	 armorComponent = "Hit_Tail";name = "Hit_Tail";		visual = "vis_tail";simulation = RHS_Hull_Helicopter;};
			class HitVRotor: HitVRotor
			{
				armor				= 3;
				radius				= 0.06;
				minimalHit			= 0.05;
				explosionShielding	= 6;
				armorComponent		= Hit_Rotor_Rear;
				name				= "mala vrtule";
				visual				= "mala vrtule staticka";
				depends 			= "HitTail";
			};
			class HitGlass1 		{armor = -10;	explosionShielding = 3.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.4; 	 armorComponent = "glass1"; name = "glass1";visual = "glass1";};
			class HitGlass2 		{armor = -10;	explosionShielding = 3.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.4; 	 armorComponent = "glass2"; name = "glass2";visual = "glass2";};
			class HitGlass3 		{armor = -10;	explosionShielding = 3.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.4; 	 armorComponent = "glass3"; name = "glass3";visual = "glass3";};
			class HitGlass4 		{armor = -10;	explosionShielding = 3.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.4; 	 armorComponent = "glass4"; name = "glass4";visual = "glass4";};
			class HitGlass5 		{armor = -10;	explosionShielding = 3.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.4; 	 armorComponent = "glass5"; name = "glass5";visual = "glass5";};
			class HitGlass6 		{armor = -10;	explosionShielding = 3.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.4; 	 armorComponent = "glass6"; name = "glass6";visual = "glass6";};

			class Hit_Longbow			{armor	= -30;explosionShielding = 0;name = "";visual = "-";armorComponent = "Hit_Longbow";		passThrough = 0;};
			class Hit_Optic_TADS		{armor	= -40;explosionShielding = 0;name = "";visual = "-";armorComponent = "Hit_Optic_TADS";	passThrough = 0;};
			class Hit_Optic_PNVS		{armor	= -40;explosionShielding = 0;name = "";visual = "-";armorComponent = "Hit_Optic_PNVS";	passThrough = 0;};

			// RTD Hitpoints
			class HitHydraulics 		{armor = -50;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 name = "hit_hydraulics";		visual = "-";		};
			class HitTransmission 		{armor = -80;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 armorComponent = "hit_transmission";name = "hit_transmission";	visual = "-";};
			// Stabilizers - Left/Right/Vertical
			class HitHStabilizerL1 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 armorComponent = "Hit_Stabilizer_L";name = "Hit_Stabilizer_L";		visual = "vis_stabilizer_h";};
			class HitHStabilizerR1 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 armorComponent = "Hit_Stabilizer_R";name = "Hit_Stabilizer_R";		visual = "vis_stabilizer_h";};
			class HitVStabilizer1 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 armorComponent = "Hit_Stabilizer_V";name = "Hit_Stabilizer_V";		visual = "vis_stabilizer_v";};
			// Those are affecting output of RTD sources
			// airspeedIndicatorRTD
			//class HitPitotTube 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 armorComponent = "Hit_";name = "hit_aileron_l";		visual = "vis_wing_l";		depends = "";  					};
			// altBaroRTD
			//class HitStaticPort 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 armorComponent = "Hit_";name = "hit_aileron_l";		visual = "vis_wing_l";		depends = "";  					};

			HP_PYLON(1,0.95)
			HP_PYLON(2,0.95)
			HP_PYLON(3,0.95)
			HP_PYLON(4,0.95)
			HP_PYLON(5,0.95)
			HP_PYLON(6,0.95)
		};

		// Standard Flight Model
		startDuration 		= 35;
		maxSpeed 			= 393;
		liftForceCoef		= 1.3;
		bodyFrictionCoef	= 0.378;
		altFullForce		= 3000;
		altNoForce			= 5000;
		mainBladeRadius 	= 6.67;
		// PhysX
		#include "physx.hpp"
		gearRetracting		= 0;
		driveOnComponent[]	= {wheels};
		// RTD config
		class RotorLibHelicopterProperties
		{
			RTDconfig							= "rhsusf\addons\rhsusf_c_a2port_air\AH64\RTD_AH64.xml";
			autoHoverCorrection[]				= {3,2.45,0};
			defaultCollective					= 0.625;
			retreatBladeStallWarningSpeed		= 85.556;
			maxTorque							= 1332;
			stressDamagePerSec					= 0.008;
			maxHorizontalStabilizerLeftStress	= 10000;
			maxHorizontalStabilizerRightStress	= 10000;
			maxVerticalStabilizerStress			= 10000;
			horizontalWingsAngleCollMin			= 0;
			horizontalWingsAngleCollMax			= 0;
			maxMainRotorStress					= 200000;
			maxTailRotorStress					= 60000;
		};
		fuelCapacity		= 1423; //AH-64 220(a)+156(f) gallons
		fuelConsumptionRate	= 0.50;
	};
	class RHS_AH64D: RHS_AH64_base
	{
		scope					= 2;
		accuracy				= 5;
		cost					= 10000000;
		model					= "\rhsusf\addons\rhsusf_a2port_air\AH64\AH64D";
		editorPreview			= "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH64D.paa";
		driverCanEject			= 0;
		driverCompartments 		= 1;
		driverRightHandAnimName	= "stick_pilot";
		driverAction			= "RHS_AH64_pilot";
		driverInAction			= "RHS_AH64_pilot";
		getInAction				= "RHS_AH64_gunner_getin";
		getOutAction			= "RHS_AH64_gunner_getout";
		laserScanner			= 1;
		MainRotorSpeed			= -1;
		backRotorSpeed			= 3;
		weapons[]=
		{
			"rhs_weap_mastersafe",
			"rhsusf_weap_ANALQ144" //AN/ALQ-144
		};
		magazines[]=
		{
			mag_10(rhsusf_mag_DIRCM)
		};
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
		picture="\rhsusf\addons\rhsusf_a2port_air\data\ico\rhs_ah64d_pic_ca.paa";
		icon="\rhsusf\addons\rhsusf_a2port_air\data\mapico\Icon_ah64d_CA.paa";
		mapSize=15.5;
		displayName="AH-64D";

		CREW_AH64_D

		destrType			= "DestructWreck";
		selectionFireAnim	= "zasleh";
		class Exhausts
		{
			class Exhaust1
			{
				position	= "exhaust1";
				direction	= "exhaust1_dir";
				effect		= "ExhaustsEffectHeliComHP";
				engineIndex = 0;
			};
			class Exhaust2
			{
				position	= "exhaust2";
				direction	= "exhaust2_dir";
				effect		= "ExhaustsEffectHeliComHP";
				engineIndex = 1;
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name						= "bily pozicni";
				color[]						= {1,1,1};
				ambient[]					= {0.1,0.1,0.1};
				blinking					= 1;
				intensity					= 75;
				blinkingPattern[]			= {0.1,0.9};
				blinkingPatternGuarantee	= 0;
				drawLightSize				= 0.45;
				drawLightCenterSize			= 0.24;
			};
			class RedStill
			{
				name				= "cerveny pozicni";
				color[]				= {0.8,0,0};
				ambient[]			= {0.08,0,0};
				intensity			= 75;
				drawLight			= 1;
				drawLightSize		= 0.45;
				drawLightCenterSize	= 0.24;
				activeLight			= 1;
				blinking			= 0;
				dayLight			= 1;
				useFlare			= 0;
			};
			class GreenStill
			{
				name				= "zeleny pozicni";
				color[]				= {0,0.8,0};
				ambient[]			= {0,0.08,0};
				intensity			= 75;
				drawLight			= 1;
				drawLightSize		= 0.45;
				drawLightCenterSize	= 0.24;
				activeLight			= 1;
				blinking			= 0;
				dayLight			= 1;
				useFlare			= 0;
			};
			class RedBlinking
			{
				name						= "bily pozicni blik";
				color[]						= {0.9,0.15,0.1};
				ambient[]					= {0.09,0.015,0.009};
				intensity					= 75;
				blinking					= 1;
				blinkingPattern[]			= {0.1,0.9};
				blinkingPatternGuarantee	= 0;
				drawLightSize		= 0.45;
				drawLightCenterSize	= 0.24;
			};
			class WhiteBlinking
			{
				name						= "cerveny pozicni blik";
				color[]						= {0.9,0.15,0.1};
				intensity					= 75;
				ambient[]					= {0.09,0.015,0.009};
				blinking					= 1;
				blinkingPattern[]			= {0.2,1.3};
				blinkingPatternGuarantee	= 0;
				drawLightSize				= 0.45;
				drawLightCenterSize			= 0.24;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[]			= {7000,7500,10000,1};
				ambient[]		= {100,100,100,0};
				position		= "L svetlo";
				direction		= "konec L svetla";
				hitpoint		= "L svetlo";
				selection		= "L svetlo";
				size			= 1;
				innerAngle		= 20;
				outerAngle		= 60;
				coneFadeCoef	= 10;
				intensity		= 50;
				useFlare		= 1;
				dayLight		= 0;
				FlareSize		= 6;
				class Attenuation
				{
					start		= 1;
					constant	= 0;
					linear		= 0;
					quadratic	= 4;
				};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_Pilot
				{
					color[]				= {0,0.67,0.02};
					ambient[]			= {0,0.067,0.002};
					intensity			= 4.5;
					size				= 0;
					useFlare			= 0;
					flareSize			= 0;
					flareMaxDistance	= 0;
					dayLight			= 1;
					blinking			= 0;
					class Attenuation
					{
						start			= 0;
						constant		= 0;
						linear			= 1;
						quadratic		= 0;
						hardLimitStart	= 0.15;
						hardLimitEnd	= 0.45;
					};
					point = "Pilot_MFD_L_Light";
				};
				class Light_Pilot1: Light_Pilot
				{
					point = "Pilot_MFD_R_Light";
				};
			};
			class Comp2
			{
				class Light_Gunner
				{
					color[]				= {0,0.67,0.02};
					ambient[]			= {0,0,0};
					intensity			= 2.5;
					size				= 0;
					useFlare			= 0;
					flareSize			= 0.0;
					flareMaxDistance	= 0;
					dayLight			= 0;
					blinking			= 0;
					class Attenuation
					{
						start			= 0;
						constant		= 0;
						linear			= 1;
						quadratic		= 70;
						hardLimitStart	= 1.45;
						hardLimitEnd	= 2.45;
					};
					point = "Gunner_MFD_L_Light";
				};
				class Light_Gunner1: Light_Gunner
				{
					point = "Gunner_MFD_R_Light";
				};
			};
		};

		class TransportMagazines {
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,8);
			mag_xx(rhs_mag_m18_green,2);
			mag_xx(rhs_mag_m18_yellow,2);
			mag_xx(rhs_mag_m18_red,2);
			mag_xx(rhs_mag_m18_purple,2);
			mag_xx(rhs_mag_an_m8hc,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,4);
			item_xx(rhsusf_ihadss,2);
		};
		class TransportWeapons {
			weap_xx(rhs_weap_m4_carryhandle,2);
		};
		class TransportBackpacks {};

		class AnimationSources
		{
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint="HitGlass4";
			};
			class Gatling
			{
				source="revolving";
				weapon="rhs_weap_M230";
			};
			class muzzle_rot_hmg
			{
				weapon = "rhs_weap_M230";
				source="ammorandom";
			};
			class radar_hide
			{
				source="user";
				animPeriod=0;
				initPhase=0;
				displayname="Remove Longbow Radar";
 				onPhaseChanged = "[(_this # 0),['ActiveRadarSensorComponent',(_this # 1) isEqualTo 0]] remoteExecCall ['enableVehicleSensor',0] ;";
			};
			class FCR_Bearing
			{
				source		= user;
				initPhase	= 0;
				animPeriod	= 0;
			};
			class FCR_Elev
			{
				source		= user;
				initPhase	= rad(-6.25);
				animPeriod	= 0;
			};
			class Hide
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Damper_1_source			{source = damper; wheel = Wheel_1;};
			class Damper_2_source			{source = damper; wheel = Wheel_2;};
			class Damper_3_source			{source = damper; wheel = Wheel_3;};
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source			{source = wheel; wheel = Wheel_3;};
			class Helicopter_Brakes 		{source = user; animPeriod = 0.01; initPhase = 1;};

			ANIM_PYLON(1)
			ANIM_PYLON(2)
			ANIM_PYLON(3)
			ANIM_PYLON(4)
			ANIM_PYLON(5)
			ANIM_PYLON(6)
		};
		class HitPoints: HitPoints
		{
		};
		dammageHalf[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\AH64D_mfd_normal_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\AH64D_mfd_malfc_co.paa"
		};
		dammageFull[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\AH64D_mfd_normal_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\AH64D_mfd_malfc_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_body.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_body_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_body_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_details.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_details_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_details_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_inter.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_inter_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_inter_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_glass.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_glass_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_glass_damage.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_glass_in.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_glass_in_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\ah64\Data\AH64D_glass_in_damage.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};

		//Sensors definition

		receiveRemoteTargets	= 1;
		reportRemoteTargets		= 1;
		reportOwnPosition		= 1;

		class Components : Components
		{
			#include "dynamicLoadouts.hpp"

			class SensorsManagerComponent
			{
				class Components
				{
					/*
					1. A target a minimum of 0.5 km away from the helicopter
					is required. Target must be clearly visible
					and trackable through both FLIR and TV
					sensor NFOV. Target must have the same center
					as viewed in both FLIR and TV sensors.
					*/
					// GFAS could be handled as enabled component when specific weapon is equiped on wingtip pylons
					// Disabled it till it's made
					/*class IRSensorComponent : SensorTemplateIR //GFAS
					{
						SENS_RANGES_WVR(7000,7000)
						animDirection			= "TADSElev";
						angleRangeHorizontal	= 46;
						angleRangeVertical		= 36;
						typeRecognitionDistance	= -1;
						groundNoiseDistanceCoef	= 0.07;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance	= 0;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold		= 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold		= 0;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough		= 0.95;
						minTrackableSpeed		= 0;
						maxTrackableSpeed		= 695;
					};*/
					class VisualSensorComponent : SensorTemplateVisual {
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed		= 70;
						animDirection			= "TADSElev";
						angleRangeHorizontal	= 36;
						angleRangeVertical		= 36;
					};
					class LaserSensorComponent : SensorTemplateLaser{};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar{};
					class DataLinkSensorComponent : SensorTemplateDataLink{};

					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						SENS_RANGES_BVR(8000,8000)
						aimDown					= 0;
						groundNoiseDistanceCoef	= -1;
						maxGroundNoiseDistance	= -1;
						minSpeedThreshold		= 0;
						maxSpeedThreshold		= 0;
						angleRangeHorizontal	= 90;
						angleRangeVertical		= 100;
						typeRecognitionDistance	= 4000;
						maxFogSeeThrough		= 1;
						maxTrackableSpeed		= 555;

						animDirection = "FCR_Elev";
					};
					class ActiveRadarSensorComponent_Air : SensorTemplateActiveRadar
					{
						SENS_RANGES_BVR(11000,11000)
						groundNoiseDistanceCoef	= -1;
						maxGroundNoiseDistance	= -1;
						minSpeedThreshold		= 0;
						maxSpeedThreshold		= 0;
						angleRangeHorizontal	= 360;
						angleRangeVertical		= 100;
						typeRecognitionDistance	= 4000;
						maxFogSeeThrough		= 1;
						minTrackableATL			= 20;
						maxTrackableSpeed		= 555;
					};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components : components
				{
					CI_EMPTY
					CI_NAV
					CI_CREW
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,16000,25000,4000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};

			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components : components
				{
					CI_EMPTY
					CI_NAV
					CI_CREW
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,16000,25000, 4000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};

		enableManualFire=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				showHMD				= 1;
				enableManualFire	= 1;
				isCopilot			= 1;
				gunnerCompartments  = 2;

				gunnerAction	="RHS_AH64_Gunner";
				gunnerInAction	="RHS_AH64_Gunner";

				minElev		= -60;
				maxElev		= 30;
				initElev	= 15;
				minTurn		= -120;
				maxTurn		= 120;
				initTurn	= 0;
				weapons[]=
				{
					"rhs_weap_mastersafe",
					"rhs_weap_fcs_ah64",
					"rhs_weap_M230",
					"rhs_weap_laserDesignator_AI"
				};
				magazines[]=
				{
					"rhs_mag_30x113mm_M789_HEDP_1200",
					"rhs_laserfcsmag",
					"rhs_LaserMag_ai"
				};
				soundServo[]= { "", 0.009, 1};
				body						= "mainTurret";
				gun							= "mainGun";
				gunnerGetInAction			= "RHS_AH64_gunner_getin";
				gunnerGetOutAction			= "RHS_AH64_gunner_getout";
				memoryPointsGetInGunner		= "pos_gunner";
				memoryPointsGetInGunnerDir	= "pos_gunner_dir";
				memorypointgunneroptics		= "gunnerview";
				gunBeg						= "machinegun";
				gunEnd						= "machinegun_end";
				memoryPointGun				= "machinegun";
				memoryPointGunBone[] 		= {"main_elev"};

				turretInfoType="RHS_RscOptics_Heli_Attack_01_gunner";
				discretedistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500};
				discretedistanceinitindex = 3;

				class MFD
				{
					class HMD
					{
						#include "cfgHMD_AH64.hpp"
					};
					class HMD_Gunner
					{
						#include "cfgHMD_AH64_Gunner.hpp"
					};
					#define MFD_CONDITION(numb,val)  condition	= on*(user##numb##>=##val##)*(user##numb##<=##val##);
					#define MFD_MEMORY_MACRO(MFD_NAME)\
						topLeft					= ##MFD_NAME##_TL;\
						topRight				= ##MFD_NAME##_TR;\
						bottomLeft				= ##MFD_NAME##_BL;
					#define MFD_MEMORY_POINTS GUNNER_UFD
					class UFD
					{
						#include "cfgMFD_AH64_UFD.hpp"
					};
					#define MFD_MEMORY_POINTS GUNNER_MFD_L
					#define MFD_CONDITION_NUMBER 6

					class MFD_Left_Flight
					{
						#include "cfgMFD_AH64_Flight.hpp"
					};
					/*class MFD_Left_Navigation
					{
						#include "cfgMFD_AH64_Navigation.hpp"
					};*/
					class MFD_Left_Weapons
					{
						#include "cfgMFD_AH64_Weapons.hpp"
					};
					class MFD_Left_Weapons_Gun
					{
						#include "cfgMFD_AH64_Weapons_Gun.hpp"
					};
					class MFD_Left_Fuel
					{
						#include "cfgMFD_AH64_Fuel.hpp"
					};
					class MFD_Left_Engine
					{
						#include "cfgMFD_AH64_Engine.hpp"
					};
					class MFD_Left_TADS
					{
						#include "cfgMFD_AH64_TADS.hpp"
					};
					class MFD_Left_Radar
					{
						#include "cfgMFD_AH64_Radar.hpp"
					};
					#define MFD_MEMORY_POINTS GUNNER_MFD_R
					#define MFD_CONDITION_NUMBER 7

					class MFD_Right_Flight
					{
						#include "cfgMFD_AH64_Flight.hpp"
					};
					/*class MFD_Right_Navigation
					{
						#include "cfgMFD_AH64_Navigation.hpp"
					};*/
					class MFD_Right_Weapons
					{
						#include "cfgMFD_AH64_Weapons.hpp"
					};
					class MFD_Right_Weapons_Gun
					{
						#include "cfgMFD_AH64_Weapons_Gun.hpp"
					};
					class MFD_Right_Fuel
					{
						#include "cfgMFD_AH64_Fuel.hpp"
					};
					class MFD_Right_Engine
					{
						#include "cfgMFD_AH64_Engine.hpp"
					};
					class MFD_Right_TADS
					{
						#include "cfgMFD_AH64_TADS.hpp"
					};
					class MFD_Right_Radar
					{
						#include "cfgMFD_AH64_Radar.hpp"
					};
				};
				canUseScanners = 0;
				//allowTabLock = 0;

				gunnerOpticsModel="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64";
				class OpticsIn
				{
					class Wide
					{
						hitpoint 			= Hit_Optic_TADS;
						opticsDisplayName	= "W";
						initAngleX			= 0;
						minAngleX			= -30;
						maxAngleX			= 30;
						initAngleY			= 0;
						minAngleY			= -100;
						maxAngleY			= 100;
						initFov				= 0.456;
						minFov				= 0.456;
						maxFov				= 0.456;
						directionStabilized	= 0;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64";
					};
					class Medium: Wide
					{
						directionStabilized	= 1;
						opticsDisplayName	= "M - Stabilized";
						initFov				= __EVAL(0.7/12);
						minFov				= __EVAL(0.7/12);
						maxFov				= __EVAL(0.7/12);
						gunnerOpticsModel	= "\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_2";
					};
					class Narrow: Medium
					{
						opticsDisplayName	= "N - Stabilized";
						gunnerOpticsModel	= "\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_3";
						initFov				= __EVAL(0.7/32);
						minFov				= __EVAL(0.7/32);
						maxFov				= __EVAL(0.7/32);
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components : components
						{
							CI_EMPTY
							CI_NAV
							CI_CREW
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 4000,8000,16000,25000 };
								resource = "RscCustomInfoSensors";
							};
						};
					};

					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class Components : components
						{
							CI_EMPTY
							CI_NAV
							CI_CREW
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 4000,8000,16000,25000 };
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
				class Hitpoints
				{
					class HitTurret		{armor	= -40;explosionShielding = 0;name = "";visual = "-";armorComponent = "Hit_Turret";	passThrough = 0;isTurret = 1;};
					class HitGun		{armor	= -40;explosionShielding = 0;name = "";visual = "-";armorComponent = "Hit_Gun";		passThrough = 0;isGun = 1;};
				};
			};
		};

		class RenderTargets
		{
		};
		class UserActions
		{
			class SAFEMODE {
				displayName		= "<t color='#00FF7F'>MASTERSAFE</t>";
				condition		= "(call rhsusf_fnc_findPlayer) in this";
				statement		= "(call rhsusf_fnc_findPlayer) action ['SwitchWeapon', this, (call rhsusf_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
				position		= "";
				radius			= 10;
				priority		= 10.5;
				onlyforplayer	= 1;
				showWindow		= 0;
				shortcut		="user13";
				hideOnUse		= 1;
			};
			class IHADSS {
				displayName		= "<t color='#FBB829'>IHADSS Toggle</t>";
				condition		= "((call rhsusf_fnc_findPlayer) in this) && (headgear (call rhsusf_fnc_findPlayer) == 'rhsusf_ihadss')";
				statement		= "[this] call rhs_fnc_ah64_ihadss_toggle";
				position		= "";
				radius			= 10;
				priority		= 10.5;
				onlyforplayer	= 1;
				showWindow		= 0;
				shortcut		="user11";
				hideOnUse		= 1;
			};
			class Toggle_Left_MFD
			{
				displayName		= "<t color='#FBB829'>Left MFD Toggle</t>";
				condition		= "(call rhsusf_fnc_findPlayer) in this";
				statement		= "[this,4] call rhs_fnc_ah64_mfd_switch";
				position		= "";
				radius			= 10;
				priority		= 10.5;
				onlyforplayer	= 1;
				showWindow		= 0;
				hideOnUse		= 1;
				shortcut	= "user1";
			};
			class Toggle_Right_MFD: Toggle_Left_MFD
			{
				displayName	= "<t color='#FBB829'>Right MFD Toggle</t>";
				statement		= "[this,5] call rhs_fnc_ah64_mfd_switch";
				shortcut		= "user2";
			};
			class WheelBrakes: SAFEMODE
			{
				displayName	= "Toggle Wheel Brakes";
				shortcut	= "binocular";
				condition	= "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
				statement	= "[this] call rhs_fnc_heli_wheelBrakes";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHSUSF_EventHandlers
			{
				init = "_this call rhs_fnc_ah64_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
			};
			class VhC_Eventhandlers
			{
				init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
			};
		};
	};

	class RHS_AH64DWreck: HelicopterWreck
	{
		scope	= 1;
		model	= "\rhsusf\addons\rhsusf_a2port_air\AH64\Ah64DWreck.p3d";

		faction			= "rhs_faction_usarmy_d";
		vehicleClass	= "rhs_vehclass_helicopter";

		typicalCargo[]		= {};
		irTarget			= 0;
		transportAmmo		= 0;
		transportRepair		= 0;
		transportFuel		= 0;
		transportSoldier	= 0;
	};

	class RHS_AH64D_GS : RHS_AH64D
	{
		scope=1;
		scopeCurator = 2;
		accuracy=1000;
		displayName="AH-64D (Ground-Suppression)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH64D_GS.paa";
		AUTHOR_MACRO_BIS_PORT

		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1 	{attachment = "";};
					class pylon2: pylon2 		{attachment = "rhs_mag_M151_19";			turret[] = {};};
					class pylon3: pylon3 		{attachment = "rhs_mag_M151_19";			turret[] = {};};
					class pylon4: pylon4 		{attachment = "rhs_mag_M151_19";			turret[] = {};};
					class pylon5: pylon5 		{attachment = "rhs_mag_M151_19";			turret[] = {};};
					class pylonTip6: pylonTip6 	{attachment = "";};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};

	class RHS_AH64D_CS : RHS_AH64D
	{
		scope=1;
		scopeCurator = 2;
		accuracy=1000;
		displayName="AH-64D (Close-Support)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH64D_CS.paa";
		AUTHOR_MACRO_BIS_PORT

		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1 	{attachment = "";								turret[] = {};	};
					class pylon2: pylon2 		{attachment = "rhs_mag_AGM114K_4";				turret[] = {0};	};
					class pylon3: pylon3 		{attachment = "rhs_mag_AGM114L_4";				turret[] = {0};	};
					class pylon4: pylon4 		{attachment = "rhs_mag_AGM114L_4";				turret[] = {0};	};
					class pylon5: pylon5 		{attachment = "rhs_mag_AGM114K_4";				turret[] = {0};	};
					class pylonTip6: pylonTip6 	{attachment = "";								turret[] = {};	};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};

	class RHS_AH64D_AA : RHS_AH64D
	{
		scope=1;
		scopeCurator = 2;
		displayName="AH-64D (AA)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH64D_AA.paa";
		AUTHOR_MACRO_BIS_PORT
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1	 {attachment = "rhs_mag_Sidewinder_heli";		turret[] = {};	};
					class pylon2: pylon2 		{attachment = "rhs_mag_M151_19";				turret[] = {};	};
					class pylon3: pylon3 		{attachment = "rhs_mag_AGM114L_4";				turret[] = {0};	};
					class pylon4: pylon4 		{attachment = "rhs_mag_AGM114K_4";				turret[] = {0};	};
					class pylon5: pylon5 		{attachment = "rhs_mag_M151_19";				turret[] = {};	};
					class pylonTip6: pylonTip6 	{attachment = "rhs_mag_Sidewinder_heli";		turret[] = {};	};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};

	#define NoRadar \
	animationList[]={"radar_hide",1};

	class RHS_AH64D_noradar : RHS_AH64D
	{
		displayName="AH-64D (no radar)";
		scope=1;
		NoRadar

		//Sensors definition
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1 	{attachment = "";								turret[] = {};	};
					class pylon2: pylon2 		{attachment = "rhs_mag_M151_19";				turret[] = {};	};
					class pylon3: pylon3 		{attachment = "rhs_mag_AGM114K_4";				turret[] = {0};	};
					class pylon4: pylon4 		{attachment = "rhs_mag_AGM114N_4";				turret[] = {0};	};
					class pylon5: pylon5 		{attachment = "rhs_mag_M151_19";				turret[] = {};	};
					class pylonTip6: pylonTip6 	{attachment = "";								turret[] = {};	};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};
	class RHS_AH64D_noradar_GS : RHS_AH64D_GS
	{
		scope=1;
		scopeCurator = 2;
		displayName="AH-64D (Ground-Suppression/no radar)";
		NoRadar
	};
	class RHS_AH64D_noradar_CS : RHS_AH64D_CS
	{
		scope=1;
		scopeCurator = 2;
		displayName="AH-64D (Close-Support/no radar)";
		NoRadar
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1 	{attachment = "";								turret[] = {};	};
					class pylon2: pylon2 		{attachment = "rhs_mag_AGM114K_4";				turret[] = {0};	};
					class pylon3: pylon3 		{attachment = "rhs_mag_AGM114N_4";				turret[] = {0};	};
					class pylon4: pylon4 		{attachment = "rhs_mag_AGM114N_4";				turret[] = {0};	};
					class pylon5: pylon5 		{attachment = "rhs_mag_AGM114K_4";				turret[] = {0};	};
					class pylonTip6: pylonTip6 	{attachment = "";								turret[] = {};	};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};

	class RHS_AH64D_noradar_AA : RHS_AH64D_AA
	{
		scope=1;
		scopeCurator = 2;
		displayName="AH-64D (AA/no radar)";

		NoRadar

		class components : components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1 	{attachment = "rhs_mag_Sidewinder_heli";		turret[] = {};	};
					class pylon2: pylon2 		{attachment = "rhs_mag_M151_19";				turret[] = {};	};
					class pylon3: pylon3 		{attachment = "rhs_mag_AGM114K_4";				turret[] = {0};	};
					class pylon4: pylon4 		{attachment = "rhs_mag_AGM114N_4";				turret[] = {0};	};
					class pylon5: pylon5 		{attachment = "rhs_mag_M151_19";				turret[] = {};	};
					class pylonTip6: pylonTip6 	{attachment = "rhs_mag_Sidewinder_heli";		turret[] = {};	};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};

	class RHS_AH64D_wd : RHS_AH64D
	{
		CREW_AH64_WD
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH64D_wd.paa";
	};
	class RHS_AH64D_wd_GS : RHS_AH64D_GS
	{
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH64D_wd_GS.paa";
		CREW_AH64_WD
	};
	class RHS_AH64D_wd_CS : RHS_AH64D_CS
	{
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH64D_wd_CS.paa";
		CREW_AH64_WD
	};

	class RHS_AH64D_wd_AA : RHS_AH64D_AA
	{
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH64D_wd_AA.paa";
		CREW_AH64_WD
	};

	class RHS_AH64D_noradar_wd : RHS_AH64D_noradar
	{
		CREW_AH64_WD
	};
	class RHS_AH64D_noradar_wd_GS : RHS_AH64D_noradar_GS
	{
		CREW_AH64_WD
	};
	class RHS_AH64D_noradar_wd_CS : RHS_AH64D_noradar_CS
	{
		CREW_AH64_WD
	};

	class RHS_AH64D_noradar_wd_AA : RHS_AH64D_noradar_AA
	{
		CREW_AH64_WD
	};

	class RHS_AH64DGrey : RHS_AH64D
	{
		accuracy=1000;
		displayName="AH-64D (OIF Grey)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH64DGrey.paa";

		CREW_AH64_D

		textureList[] = {"Grey", 1};
	};
