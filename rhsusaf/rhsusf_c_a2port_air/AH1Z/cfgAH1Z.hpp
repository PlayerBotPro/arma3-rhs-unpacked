	class RHS_AH1Z_base: Heli_Attack_01_base_F
	{
		dlc = "RHS_USAF";
		rhs_hasNoRadar=1;

		category = "Air";
		driveOnComponent[]=
		{
			"Skids"
		};
		gearRetracting=0;
		liftForceCoef=1;
		bodyFrictionCoef=0.5;
		altFullForce=3000;
		altNoForce=5000;
		mainBladeRadius = 7.00;
		displayName="AH-1Z";
		side=1;
		accuracy=0.5;
		unitInfoType		= "RHSUSF_RscUnitInfoAir_AH64";
		unitInfoTypeRTD		= "RHSUSF_RscUnitInfoAirRTDFullDigital_AH64";
		//unitInfoTypeLite	= "RHSUSF_RscUnitInfoAirRTD_Basic_AH64";
		class Library
		{
			libTextDesc = "The AH-1Z Super Cobra is the Marine Corps’ primary attack helicopter, providing close air support, reconnaissance, point target attacks and anti armor capabilities.<br />It is armed with 8 air-to-ground Hellfire missile platforms, a dual Hydra rocket system, dual AIM-9 air-to-air guided missile platforms and a 20mm gatling gun.";
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
		visualTargetSize = 0.8;

		radarTarget = 1;
		radarTargetSize = 1;

		radarType=1;
		LockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem = "8 + 16";
		threat[]={0.8,1,0.6};
		gunnerCanSee = __EVAL(1+2+4+16+32);
		driverCanSee = __EVAL(1+2+4+16+32);

		weaponsGroup1 = WEAPONGROUP_CANNONS + WEAPONGROUP_MGUNS;
		weaponsGroup2 = WEAPONGROUP_BOMBS + WEAPONGROUP_ROCKETS + WEAPONGROUP_SPECIAL;
		weaponsGroup3 = WEAPONGROUP_ATMISSILES + WEAPONGROUP_MISSILES;
		weaponsGroup4 = WEAPONGROUP_AAMISSILES;


		Mac_Inf_USMC_D
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
				initFov				= 0.093;
				minFov				= 0.093;
				maxFov				= 0.093;
				opticsModel			= "\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_2";
			};
			class Narrow: Medium
			{
				opticsDisplayName	="N - Stabilized";
				opticsModel			="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_3";
				initFov				=0.029;
				minFov				=0.029;
				maxFov				=0.029;
			};
		};
		class PilotCamera {};

		defaultUserMFDvalues[] =
		{
			0.1,	// r
			1,		// g
			0.1,	// b
			1,		// alpha
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
		};
		/*
			userText0 - Camera feed mode
			userText1 - Time to waypoints
			userText2 - Remaining fuel time
		*/
		// m/s to knots
		#define SPEED_FACTOR 1.94384449
		#define HEIGHT_FACTOR 3.2808399
		class MFD
		{
			class HMD
			{
				#include "cfgHMD_AH64.hpp"
			};
			#define MFD_CONDITION(numb,val)  condition	= on*(user##numb##>=##val##)*(user##numb##<=##val##);
			#define MFD_MEMORY_MACRO(MFD_NAME)\
				topLeft					= ##MFD_NAME##_TL;\
				topRight				= ##MFD_NAME##_TR;\
				bottomLeft				= ##MFD_NAME##_BL;
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

		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"",
			"Pilot_MFD_L",
			"Pilot_MFD_R",
			"Gunner_MFD_L",
			"Gunner_MFD_R"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
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
					"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_co.paa"
				};
				factions[]=
				{
					rhs_faction_usmc_wd,
					rhs_faction_usmc_d
				};
			};
		};
		textureList[]=
		{
			"standard", 1
		};
		class Attributes {
			class ObjectTexture {
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class FoldHeli {
				control = "CheckboxNumber";
				defaultValue = "0";
				displayName = "Fold helicopter rotors";
				property = "FoldHeli";
				expression = "[_this,_value] call rhs_fnc_foldHeli";
			};
		};
		selectionHRotorStill="mainRotorStatic";
		selectionHRotorMove="mainRotorBlurred";
		selectionVRotorStill="tailRotorStatic";
		selectionVRotorMove="tailRotorBlurred";
		selectionDamage="trup";
		selectionShowDamage="poskozeni";

		memoryPointLRocket="l raketa";
		memoryPointRRocket="p raketa";
		memoryPointLMissile="l strela";
		memoryPointRMissile="p strela";

		class Components;

		armor				= 40;
		armorStructural 	= 20;
		damageResistance	= 0.00555;
		hullDamageCauseExplosion = 1;
		epeImpulseDamageCoef = 1;
		class HitPoints: HitPoints
		{
			class HitHull
			{
				simulation			= RHS_Hull_Helicopter;
				armor				= -100;
				minimalHit			= -0.2;
				explosionShielding	= 2;
				radius				= 0.4;
				armorComponent		= Hit_Hull;
				name				= "hull_hit";
				visual				= "zbytek";
				passThrough			= 1;
				class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
			};
			class HitFuel: HitFuel
			{
				armor = 1;
				radius = 0.25;
				minimalHit = 0.05;
			};
			class HitAvionics: HitAvionics
			{
				armor = 2;
				radius = 0.4;
				minimalHit = 0.05;
				name = "avionics_hit";
				visual = "elektronika";
			};
			class HitMissiles: HitMissiles
			{
				armor = 1;
				radius = 0.15;
				minimalHit = 0.05;
				name = "ammot_hit";
				visual = "munice";
			};
			class HitEngine1
			{
				armor				= -80;
				radius				= 0.18;
				explosionShielding	= 0.5;
				minimalHit			= -0.01;
				passThrough			= 0.4;
				visual				= "";
				name				= "engine_1_hit";
				armorComponent		= Hit_Engine_1;
			};
			class HitEngine2: HitEngine1
			{
				name			= "engine_2_hit";
				armorComponent 	= Hit_Engine_2;
			};
			class HitEngine: HitEngine2
			{
				armor			= -200;
				armorComponent	= "Hit_Engine";
				name			= "engine_hit";
				depends			= "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor = 4;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				armorComponent		= Hit_Rotor_Main;
			};
			// When tail is destroyed it's assumed that stabilizers & rear rotor is destroyed
			class HitTail 			{armor = -150;	explosionShielding = 0.20; passThrough = 0.50; minimalHit = -0.15;	radius = 0.13; 	 armorComponent = "Hit_Tail";name = "Hit_Tail";		visual = "vis_tail";simulation = RHS_Hull_Helicopter;};
			class HitVRotor: HitVRotor
			{
				armor				= 3;
				radius				= 0.06;
				minimalHit			= 0.05;
				explosionShielding	= 6;
				name				= "mala vrtule";
				visual				= "mala vrtule staticka";
				armorComponent		= Hit_Rotor_Rear;
				depends				= "HitTail";
			};
			class HitGlass1: HitGlass1
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass2: HitGlass2
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass3: HitGlass3
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass4: HitGlass4
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass5: HitGlass5
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};
			class HitGlass6: HitGlass6
			{
				armor = 2;
				radius = 0.4;
				explosionShielding = 6;
			};

			HP_PYLON(1,0.95)
			HP_PYLON(2,0.95)
			HP_PYLON(3,0.95)
			HP_PYLON(4,0.95)
			HP_PYLON(5,0.95)
			HP_PYLON(6,0.95)
		};

		class RotorLibHelicopterProperties
		{
			RTDconfig="rhsusf\addons\rhsusf_c_a2port_air\AH1Z\RTD_AH1Z.xml";
			defaultCollective = 0.75;
			autoHoverCorrection[] = {5,2.4,0};
			maxTorque = 1280;
			maxMainRotorStress = 130000;
			maxTailRotorStress = 50000;
			retreatBladeStallWarningSpeed = 114.207;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			stressDamagePerSec=0.0033333332;

		};
		numberPhysicalWheels = 0;
	};
	class RHS_AH1Z: RHS_AH1Z_base
	{
		side=1;
		scope=2;
		accuracy=5;
		cost=10000000;
		model="\rhsusf\addons\rhsusf_a2port_air2\AH1Z\AH1Z";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH1Z.paa";
		armor=50;
		driverCanEject=0;
		damageResistance=0.00555;
		laserScanner=1;
		MainRotorSpeed=-1;
		backRotorSpeed=3;
		driverRightHandAnimName="stick_pilot";
		driverLeftHandAnimName="lever_pilot";
		weapons[]=
		{
			"rhs_weap_mastersafe"
		};
		magazines[]=
		{
		};
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
		attenuationEffectType="HeliAttenuation";
		soundDammage[]=
		{
			"rhsusf\addons\rhsusf_a2port_air\data\sounds\int-alarm_loop",
			0.56234133,
			1
		};
		//soundEngineOnInt[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\UH1Y\int\int-start-final",0.0316228,1}; // !MISSING FILE
		soundEngineOnExt[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\UH1Y\ext\ext-motor-start",1.77828,1,700};
		//soundEngineOffInt[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\UH1Y\int\int-stop-final",0.0316228,1}; // !MISSING FILE
		soundEngineOffExt[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\UH1Y\ext\ext-motor-stop",1.77828,1,700};
		class Sounds
		{
			class EngineExt
			{
				sound[]= {"rhsusf\addons\rhsusf_a2port_air2\sounds\ah1\ext\ext-ah1z-engine-01", 3.2622777, 1,800};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class EngineInt {
				sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_int_engine", 1.4, 1};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class DistanceSound
			{
				sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_distant",2.31,1,3200};
				frequency = "rotorSpeed";
				volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
			};
		};
		class SoundsExt
		{
			class SoundEvents {
			};
			class Sounds: Sounds {
				class EngineExt
				{
					sound[]= {"rhsusf\addons\rhsusf_a2port_air2\sounds\ah1\ext\ext-ah1z-engine-01", 2.7622777, 1,800};
					frequency="rotorSpeed";
					volume="camPos*((rotorSpeed-0.72)*4)";
				};
				class EngineInt {
					sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_int_engine", 1.4, 1};
					frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class DistanceSound
				{
					sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_distant",2.31,1,3200};
					frequency = "rotorSpeed";
					volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
				};
			};
		};
		picture="\rhsusf\addons\rhsusf_a2port_air\data\ico\rhs_ah1z_pic_ca.paa";
		icon="\rhsusf\addons\rhsusf_a2port_air2\data\mapico\icomap_ah1z_ca.paa";
		mapSize=15.5;
		maxSpeed=393;
		displayName="AH-1Z";

		Mac_Inf_USMC_D

		driverAction="RHS_AH1Z_pilot";
		driverInAction="RHS_AH1Z_pilot";
		getInAction="pilot_Heli_Light_02_Enter";
		getOutAction="pilot_Heli_Light_02_Exit";
		driverDoor="doorR";
		destrType="DestructWreck";
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		selectionFireAnim="zasleh";
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliCom";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name="bily pozicni";
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				intensity=75;
				blinkingPattern[]={0.1,0.9};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.04;
			};
			class RedStill
			{
				name="cerveny pozicni";
				color[]={0.8,0,0};
				ambient[]={0.08,0,0};
				intensity=75;
				drawLight=1;
				drawLightSize=0.15;
				drawLightCenterSize=0.04;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class GreenStill: RedStill
			{
				name="zeleny pozicni";
				color[]={0,0.8,0};
				ambient[]={0,0.08,0};
			};
			class RedBlinking
			{
				name="bily pozicni blik";
				color[]={0.9,0.15,0.1};
				ambient[]={0.09,0.015,0.01};
				intensity=75;
				blinking=1;
				blinkingPattern[]={0.1,0.9};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.04;
			};
			class WhiteBlinking: RedBlinking
			{
				name="cerveny pozicni blik";
				color[]={0.9,0.15,0.1};
				ambient[]={0.09,0.015,0.01};
				blinkingPattern[]={0.2,1.3};
				drawLightSize=0.25;
				drawLightCenterSize=0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=6;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=4;
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
		};
		class TransportWeapons {
			weap_xx(rhs_weap_m4_carryhandle,2);
		};

		class AnimationSources
		{
			class HitAvionics
			{
				source = "hit";
				hitpoint = "HitAvionics";
				raw = 1;
			};
			class HitFuel
			{
				source = "hit";
				hitpoint = "HitFuel";
				raw = 1;
			};
			class DoorL
			{
				source="door";
				animPeriod=0.8;
				initPhase = 0;
				sound = "MetalDoorsSound";
				soundPosition = "doorL_axis";
			};
			class DoorR: DoorL {
				soundPosition = "doorR_axis";
			};
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
			class 20mmBarrels
			{
				source="revolving";
				weapon="rhs_weap_M197";
			};
			class muzzle_rot_hmg
			{
				weapon = "rhs_weap_M197";
				source="ammorandom";
			};
			class Hide
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class mainRotor_folded
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass=1;
				displayName="fold main rotor";
				onPhaseChanged = "_this call rhs_fnc_foldHeli";
			};

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
		dammageHalf[] = {"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitor_glass_ca.paa","\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitor_glass_destr_co.paa"};
		dammageFull[] = {"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitor_glass_ca.paa","\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitor_glass_destr_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_damage.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_in.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_in_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_glass_in_damage.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_cockpit.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_cockpit.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_cockpit_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitors.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitors.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_monitors_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		enableManualFire=1;

		//Sensors definition
		sensorPosition = "gunnerview";
		class Components : Components
		{
			#include "dynamicloadouts.hpp"

			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR //GFAS
					{
						SENS_RANGES_WVR(7000,7000)
						animDirection = "Sensors";
						angleRangeHorizontal = 46;
						angleRangeVertical = 36;
						typeRecognitionDistance = -1;
						minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = 0;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 0.95;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 695;
					};
					class VisualSensorComponent : SensorTemplateVisual {
						SENS_RANGES_WVR(4000,4000)
						maxTrackableSpeed = 70;
						animDirection = "Sensors";
						angleRangeHorizontal = 46;
						angleRangeVertical = 36;
					};
					class LaserSensorComponent : SensorTemplateLaser{};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar{};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components : components
				{
					CI_EMPTY
					CI_NAV
					CI_CREW
					CI_FEED(PrimaryGunner)
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,16000,25000, 4000 };
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
					CI_FEED(PrimaryGunner)
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,16000,25000, 4000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportCountermeasuresComponent {};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				showHMD				= 1;
				enableManualFire	=1;
				isCopilot			=1;

				gunnerAction			= "rhs_AH1Z_Gunner";
				gunnerInAction			= "rhs_AH1Z_Gunner";
				gunnerRightHandAnimName	= "stick_copilot";
				gunnerLeftHandAnimName	= "lever_copilot";
				gunnerGetInAction		= "Heli_Attack_01_Pilot_enter";
				gunnerGetOutAction		= "Heli_Attack_01_Pilot_exit";

				minElev		= -60;
				maxElev		= 10;
				initElev	= 0;
				minTurn		= -70;
				maxTurn		= 70;
				initTurn	= 0;

				weapons[]=
				{
					"rhs_weap_mastersafe",
					"rhs_weap_fcs_ah64",
					"rhs_weap_M197",
					"rhs_weap_laserDesignator_AI"
				};
				magazines[]=
				{
					"rhs_mag_M197_750",
					"rhs_laserfcsmag",
					"rhs_LaserMag_ai"
				};
				class MFD
				{
					class HMD
					{
						#include "cfgHMD_AH64.hpp"
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
				gunnerDoor = "doorL";
				memoryPointsGetInGunner		= "pos_gunner";
				memoryPointsGetInGunnerDir	= "pos_gunner_dir";
				memorypointgunneroptics		= "gunnerview";
				gunBeg						= "machinegun";
				gunEnd						= "machinegun_end";
				memoryPointGun				= "machinegun";

				turretInfoType="RHS_RscOptics_Heli_Attack_01_gunner";
				discretedistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discretedistanceinitindex	= 3;
				canUseScanners				= 0;
				allowTabLock				= 0;

				gunnerOpticsModel="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.456;
						minFov=0.456;
						maxFov=0.456;
						directionStabilized = 0;
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
						directionStabilized = 1;
						opticsDisplayName="M - Stabilized";
						initFov=0.093;
						minFov=0.093;
						maxFov=0.093;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_2";
					};
					class Narrow: Medium
					{
						opticsDisplayName="N - Stabilized";
						gunnerOpticsModel="\rhsusf\addons\rhsusf_a2port_air\ah64\gunnerOptics_ah64_3";
						initFov=0.029;
						minFov=0.029;
						maxFov=0.029;
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
							CI_FEED(PrimaryGunner)
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
							CI_FEED(PrimaryGunner)
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 4000,8000,16000,25000 };
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};

		class RenderTargets
		{
		};
		class UserActions
		{
			class SAFEMODE {
				displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
				condition = "(call rhsusf_fnc_findPlayer) in this";
				statement = "(call rhsusf_fnc_findPlayer) action ['SwitchWeapon', this, (call rhsusf_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
				position = "";
				radius = 10;
				priority = 10.5;
				onlyforplayer = 1;
				showWindow = 0;
				shortcut="user13";
				hideOnUse = 1;
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
		};
		class EventHandlers: EventHandlers
		{
			class RHSUSF_EventHandlers
			{
				postInit = "_this call rhs_fnc_reapplyTextures";
			};
		};
	};
	class RHS_AH1ZWreck: HelicopterWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\rhsusf\addons\rhsusf_a2port_air2\AH1Z\AH1ZWreck.p3d";

		vehicleClass = "rhs_vehclass_helicopter";

		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=0;
		class Eventhandlers;
	};

	class RHS_AH1Z_GS : RHS_AH1Z
	{
		scope = 1;
		scopeCurator = 2;
		accuracy=1000;
		displayName="AH-1Z (Ground-Suppression)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH1Z_GS.paa";
		AUTHOR_MACRO_BIS_PORT
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1 {attachment = "rhs_mag_Sidewinder_heli";};
					class pylon2: pylon2 {attachment = "rhs_mag_M151_19_green";};
					class pylon3: pylon3 {attachment = "rhs_mag_M151_19_green";};
					class pylon4: pylon4 {attachment = "rhs_mag_M151_19_green";};
					class pylon5: pylon5 {attachment = "rhs_mag_M151_19_green";};
					class pylonTip6: pylonTip6 {attachment = "rhs_mag_Sidewinder_heli";};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};
	class RHS_AH1Z_CS : RHS_AH1Z
	{
		scope = 1;
		scopeCurator = 2;
		accuracy=1000;
		displayName="AH-1Z (Close-Support)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH1Z_CS.paa";
		AUTHOR_MACRO_BIS_PORT
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1 {attachment = "rhs_mag_Sidewinder_heli_2";};
					class pylon2: pylon2 {attachment = "rhs_mag_AGM114K_4";};
					class pylon3: pylon3 {attachment = "rhs_mag_AGM114K_4";};
					class pylon4: pylon4 {attachment = "rhs_mag_AGM114K_4";};
					class pylon5: pylon5 {attachment = "rhs_mag_AGM114K_4";};
					class pylonTip6: pylonTip6 {attachment = "rhs_mag_Sidewinder_heli_2";};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};


	class RHS_AH1Z_wd : RHS_AH1Z
	{
		accuracy=1000;

		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH1Z_wd.paa";
		Mac_Inf_USMC_WD
	};


	class RHS_AH1Z_wd_GS : RHS_AH1Z_wd
	{
		scope = 1;
		scopeCurator = 2;
		displayName="AH-1Z (Ground-Suppression)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH1Z_wd_GS.paa";
		AUTHOR_MACRO_BIS_PORT
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1 {attachment = "rhs_mag_Sidewinder_heli_2";};
					class pylon2: pylon2 {attachment = "rhs_mag_M151_19_green";};
					class pylon3: pylon3 {attachment = "rhs_mag_M151_19_green";};
					class pylon4: pylon4 {attachment = "rhs_mag_M151_19_green";};
					class pylon5: pylon5 {attachment = "rhs_mag_M151_19_green";};
					class pylonTip6: pylonTip6 {attachment = "rhs_mag_Sidewinder_heli_2";};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};
	class RHS_AH1Z_wd_CS : RHS_AH1Z_wd
	{
		scope = 1;
		scopeCurator = 2;
		displayName="AH-1Z (Close-Support)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_AH1Z_wd_CS.paa";
		AUTHOR_MACRO_BIS_PORT
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonTip1: pylonTip1 {attachment = "rhs_mag_Sidewinder_heli_2";};
					class pylon2: pylon2 {attachment = "rhs_mag_AGM114K_4";};
					class pylon3: pylon3 {attachment = "rhs_mag_AGM114K_4";};
					class pylon4: pylon4 {attachment = "rhs_mag_AGM114K_4";};
					class pylon5: pylon5 {attachment = "rhs_mag_AGM114K_4";};
					class pylonTip6: pylonTip6 {attachment = "rhs_mag_Sidewinder_heli_2";};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};