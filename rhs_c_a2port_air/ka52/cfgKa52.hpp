
	class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		dlc = "RHS_AFRF";

		rhs_decalParameters[]={
			"['Number',cRHSAIRKA52NumberPlaces,'AviaYellow']"
		};

		category = "Air";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "rhsafrf\addons\rhs_c_a2port_air\ka52\RTD_Heli_Attack_02.xml";
			autoHoverCorrection[] = {3.2,0,0};
			defaultCollective = 0.805;
			retreatBladeStallWarningSpeed = 83;
			maxTorque = 3300;
			stressDamagePerSec = 0.01;
			maxHorizontalStabilizerLeftStress = 8000;
			maxHorizontalStabilizerRightStress = 8000;
			maxVerticalStabilizerStress = 4000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 225000;
			maxTailRotorStress = 225000;
		};
		numberPhysicalWheels 	= 3;
		maxSpeed				= 395;
		bodyFrictionCoef		= 0.426;
		liftForceCoef			= 6.0;
		cyclicForwardForceCoef	= 1.0;
		backRotorForceCoef		= 1.35;
		maxMainRotorDive		= 7;
		minMainRotorDive		= -7;
		neutralMainRotorDive	= 0;
		gearRetracting			= 1;
		mainRotorSpeed			= 1;
		backRotorSpeed			= 1;
		mainBladeRadius			= 6.9;
		tailBladeRadius			= 6.9;
		tailBladeCenter			= "tail_blade_center";
		mainBladeCenter			= "main_blade_center";

		LESH_canBeTowed			= 1;
		LESH_towFromFront		= 1;
		LESH_AxisOffsetTarget[]	= {0,6.5,-1.05};
		LESH_WheelOffset[]		= {0,-1};

		scope			= 0;
		side			= 0;
		faction			= "rhs_faction_vvs";
		crew			= "rhs_pilot_combat_heli";
		typicalCargo[]	= {"rhs_pilot_combat_heli"};

		fuelCapacity		= 1870;
		RHS_fuelCapacity	= 1870;
		driverCanEject		= 1;
		driverCompartments 	= 1;
		ejectSpeed[]		= {1, 0, 11};

		destrType			= DestructWreck;
		accuracy			= 0.55;
		displayName			= "Ka-52";
		vehicleClass		= "rhs_vehclass_helicopter";
		editorSubcategory	= "rhs_EdSubcat_helicopter";
		model				= "\rhsafrf\addons\rhs_a2port_air\ka52\KA52.p3d";
		icon				= "\rhsafrf\addons\rhs_a2port_air\data\map_ico\Icon_ka52_CA.paa";
		picture				= "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_ka52_pic_ca.paa";
		mapSize				= 15;
		castDriverShadow	= 1;
		viewCargoShadow		= 1;
		camShakeCoef 		= 0.8;

		transportsoldier		= 0;
		driverDoor				= "DoorL";
		driverLeftHandAnimName	= "lever_pilot";
		driverRightHandAnimName	= "stick_pilot";
		driveOnComponent[]=
		{
			F_gear_d3,
			L_gear_d3,
			R_gear_d3
		};

		getInRadius						= 1.5;
		precisegetinout					= 1;
		memoryPointsGetInDriverPrecise	= "pos driver";
		getInAction						= "Heli_Attack_01_Pilot_Enter";
		getOutAction					= "Heli_Attack_01_Pilot_Exit";

		selectionHRotorStill	= "velka vrtule staticka";
		selectionHRotorMove		= "velka vrtule blur";
		selectionVRotorStill	= "mala vrtule staticka";
		selectionVRotorMove		= "mala vrtule blur";
		memoryPointLRocket		= "l raketa";
		memoryPointRRocket		= "p raketa";
		memoryPointLMissile		= "l strela";
		memoryPointRMissile		= "p strela";
		memoryPointGun[]		= {"chase01","chase02","chase03","chase04"};
		gunBeg[]				= {"chase01dir","chase02dir","chase03dir","chase04dir"};
		gunEnd[]				= {"chase01","chase02","chase03","chase04"};

		class PilotCamera {};

		unitInfoType = "RHS_RscUnitInfoAir_Ka52";

		//Target params definitions
		receiveRemoteTargets	= 1;
		reportRemoteTargets		= 1;
		reportOwnPosition		= 1;

		irTarget			= 1;
		irTargetSize		= 0.9;
		visualTarget		= 1;
		visualTargetSize	= 0.9;
		radarTarget			= 1;
		radarTargetSize		= 1;

		threat[]={0.6,1,0.8};
		weapons[] =
		{
			rhs_weap_MASTERSAFE,
			rhs_weap_DIRCM_Vitebsk
		};
		magazines[] =
		{
			mag_10(rhs_mag_DIRCM_Vitebsk)
		};
		weaponsGroup1 = 128;
		weaponsGroup4 = 64;

		driverAction	= "RHS_KA52_Pilot";
		driverInAction	= "RHS_KA52_Pilot";

		armor						= 45;
		armorStructural				= 20;
		damageResistance			= 0.00555;
		hullDamageCauseExplosion	= 1;
		epeImpulseDamageCoef		= 1;
		hullExplosionDelay[]		= {10, 20};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				simulation		= RHS_Hull_Helicopter;
				armor			= -150;
				minimalHit		= -0.2;
				radius			= 0.1;
				name			= "hull_hit";
				armorComponent	= "Hit_Hull";
				visual			= "zbytek";
				passThrough		= 1;
				class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
			};
			class HitHRotor: HitHRotor
			{
				armor=0.3;
			};
			class HitGlass1: HitGlass1
			{
				armor=3;
			};
			class HitGlass2: HitGlass2
			{
				armor=3;
			};
			class HitGlass3: HitGlass3
			{
				armor=1;
				class DestructionEffects {
					ammoExplosionEffect = "";
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1N_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2 {
						simulation = "particles";
						type = "BrokenGlass2N_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3 {
						simulation = "particles";
						type = "BrokenGlass3N_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4 {
						simulation = "particles";
						type = "BrokenGlass4N_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5 {
						simulation = "particles";
						type = "BrokenGlass5N_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6 {
						simulation = "particles";
						type = "BrokenGlass6N_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7 {
						simulation = "particles";
						type = "BrokenGlass7N_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S {
						simulation = "particles";
						type = "BrokenGlass1S_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S {
						simulation = "particles";
						type = "BrokenGlass2S_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S {
						simulation = "particles";
						type = "BrokenGlass3S_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S {
						simulation = "particles";
						type = "BrokenGlass4S_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S {
						simulation = "particles";
						type = "BrokenGlass5S_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S {
						simulation = "particles";
						type = "BrokenGlass6S_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S {
						simulation = "particles";
						type = "BrokenGlass7S_0850_2250";
						position = "glass3_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = RHS_ERA_Flash;
						position = glass3_effect;
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation	= "sound";
						type		= RHS_ERA_Explosion_Sound;
						position	= glass3_effect;
						intensity	= 1;
						interval	= 1;
						lifeTime	= 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = RHS_ERA_Smoke;
						position = glass3_effect;
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
				};
			};
			class HitGlass4: HitGlass4
			{
				armor=1;
				class DestructionEffects {
						ammoExplosionEffect = "";
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1N_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2 {
						simulation = "particles";
						type = "BrokenGlass2N_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3 {
						simulation = "particles";
						type = "BrokenGlass3N_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4 {
						simulation = "particles";
						type = "BrokenGlass4N_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5 {
						simulation = "particles";
						type = "BrokenGlass5N_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6 {
						simulation = "particles";
						type = "BrokenGlass6N_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7 {
						simulation = "particles";
						type = "BrokenGlass7N_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S {
						simulation = "particles";
						type = "BrokenGlass1S_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S {
						simulation = "particles";
						type = "BrokenGlass2S_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S {
						simulation = "particles";
						type = "BrokenGlass3S_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S {
						simulation = "particles";
						type = "BrokenGlass4S_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S {
						simulation = "particles";
						type = "BrokenGlass5S_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S {
						simulation = "particles";
						type = "BrokenGlass6S_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S {
						simulation = "particles";
						type = "BrokenGlass7S_0850_2250";
						position = "glass4_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = RHS_ERA_Flash;
						position = glass4_effect;
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation	= "sound";
						type		= RHS_ERA_Explosion_Sound;
						position	= glass4_effect;
						intensity	= 1;
						interval	= 1;
						lifeTime	= 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = RHS_ERA_Smoke;
						position = glass4_effect;
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
				};
			};

			class HitRotor1: HitGlass3
			{
				armor=1;
				class DestructionEffects {
					ammoExplosionEffect = "";

					class RHS_ERA_Flash
					{
						simulation	= "particles";
						type		= RHS_ERA_Flash;
						position	= rotor1_pos;
						intensity	= 0.5;
						interval	= 1;
						lifeTime	= 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation	= "sound";
						type		= RHS_ERA_Explosion_Sound;
						position	= rotor1_pos;
						intensity	= 1;
						interval	= 1;
						lifeTime	= 1;
					};
					class RHS_ERA_Smoke
					{
						simulation	= "particles";
						type		= RHS_ERA_Smoke;
						position	= rotor1_pos;
						intensity	= 0.1;
						interval	= 1;
						lifeTime	= 0.04;
					};
				};
			};
			#define EXP_MACRO(num)  \
			class HitRotor##num##: HitRotor1\
			{\
				class DestructionEffects: DestructionEffects {\
					class RHS_ERA_Flash: RHS_ERA_Flash\
					{\
						position = rotor##num##_pos;\
					};\
					class RHS_ERA_Sound: RHS_ERA_Sound\
					{\
						position = rotor##num##_pos;\
					};\
					class RHS_ERA_Smoke: RHS_ERA_Smoke\
					{\
						position = rotor##num##_pos;\
					};\
				};\
			};

			EXP_MACRO(2)
			EXP_MACRO(3)
			EXP_MACRO(4)
			EXP_MACRO(5)
			EXP_MACRO(6)

			HP_PYLON(1,0.75)
			HP_PYLON(2,0.75)
			HP_PYLON(3,0.75)
			HP_PYLON(4,0.75)
		};


		class TransportMagazines
		{
			mag_xx(rhs_30Rnd_545x39_7N10_AK,6);
			mag_xx(rhs_mag_rgd5,2);
			mag_xx(rhs_mag_nspn_red,4);
			mag_xx(rhs_mag_rdg2_white,4);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,2);
		};
		class TransportWeapons {};
		class TransportBackpacks {};

		gunnerCanSee = __EVAL(1+2+4+16+32);
		driverCanSee = __EVAL(1+2+4+16+32);
		laserScanner=1;
		LockDetectionSystem = "8 + 4";
		incomingMissileDetectionSystem = "8 + 16";

		//Sensors definition
		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(9000,9000)

						angleRangeHorizontal = 75;
						angleRangeVertical = 75;
						typeRecognitionDistance = -1;
						maxGroundNoiseDistance = 0;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						maxFogSeeThrough = 0.3;
						animDirection = "mainGun";
					};

					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar {};

					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						SENS_RANGES_BVR(11000,11000)

						angleRangeHorizontal = 120;
						angleRangeVertical = 100;
						typeRecognitionDistance = 4000;
						maxFogSeeThrough = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						maxTrackableSpeed = 125;
					};
					class DataLinkSensorComponent : SensorTemplateDataLink {};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components : components
				{
					CI_EMPTY
					CI_CREW
					CI_NAV
					CI_FEEDUAV
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,16000,24000, 4000 };
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
					CI_CREW
					CI_NAV
					CI_FEEDUAV
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,16000,24000, 4000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};
			#include "dynamicLoadouts.hpp"
		};

		class ViewPilot
		{
			initAngleX 	= -4.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		class Viewoptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			initFov=0.1;
			minFov=0.1;
			maxFov=1.2;
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"n1",
			"n2",
			"tail_decals",
			"mfd_gun_tex"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_RU_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_RU_co.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"\rhsafrf\addons\rhs_a2port_air\Ka52\Data\rhs_ka52_samshin_wfov.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Grey";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vvs_c, rhs_faction_vvs
				};
			};
			class Camo: standard
			{
				displayName="Camo";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_RU_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_RU_co.paa"
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
			class rhs_decalNumber_type {
				displayName = "Define font type of side number";
				tooltip = "Define kind of font that will be drawn on vehicle";
				property = "rhs_decalNumber_type";
				control = "Combo";
				expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRKA52NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue = 0;
				typeName = "STRING";
				class values {

					class NoChange {
						name = "Default";
						value = "NoChange";
					};
					class AviaYellow {
						name = "Aviation Yellow";
						value = "AviaYellow";
					};
					class AviaBlue {
						name = "Aviation Blue";
						value = "AviaBlue";
						defaultValue = "AviaBlue";
					};
					class AviaRed {
						name = "Aviation Red";
						value = "AviaRed";
					};
					class AviaWhiteOut {
						name = "Aviation White Out";
						value = "AviaWhiteOut";
					};
					class AviaCDF {
						name = "Aviation CDF";
						value = "AviaCDF";
					};
					class Default {
						name = "Default (White)";
						value = "Default";
					};
					class DefaultRed {
						name = "Default (Red)";
						value = "DefaultRed";
					};
					class BoldRed {
						name = "Bold Red";
						value = "BoldRed";
					};
					class CDF {
						name = "CDF";
						value = "CDF";
					};
					class Handpaint {
						name = "Handpaint";
						value = "Handpaint";
					};
					class HandpaintBlack {
						name = "Handpaint Black";
						value = "HandpaintBlack";
					};
					class Iraqi {
						name = "Iraqi";
						value = "Iraqi";
					};
				};
			};
			//typing anywhere HS in exprosion field will (like RHS) will change it into RattributeName (i.e. Rrhs_decalNumber )
			//duuuh
			class rhs_decalNumber {
				displayName = "Set side number";
				tooltip = "Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property = "rhs_decalNumber";
				control = "Edit";
				validate = "Number";
				typeName = "Number";
				defaultValue = "-1";
				expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRKA52NumberPlaces}else{[_this, [['Number', cRHSAIRKA52NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";

			};
			class rhs_decalTail {
				displayName = "Define tail decal";
				tooltip = "Define tail decalthat will be drawn on vehicle";
				property = "rhs_decalTail";
				control = "Combo";
				expression = "[_this,[['Label', cRHSAIRKA52TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
				defaultValue = -1;
				typeName = "Number";
				class values {

					class Default {
						name = "Default";
						value = -1;
					};
					class Empty {
						name = "Empty";
						value = 0;
					};
					class VVS {
						name = "VVS Russia";
						value = 3;
						defaultValue = 3;
					};
				};
			};
		};

		class AnimationSources: AnimationSources
		{
			class DoorL
			{
				source="door";
				animPeriod=1.4;
			};
			class DoorR: DoorL{};
			class landingLights: DoorL{};
			class eject
			{
				source="user";
				animPeriod = 0.0000001;
				initPhase = 0;
			};
			class k37_pilot_rocket_hide: eject {};
			class k37_gunner_rocket_hide: eject {};
			class elev {source="user";animperiod=__EVAL(16/10000);};
			class elev_bank {source="user";animperiod=__EVAL(16/10000);};
			class offset {source="user";animperiod=__EVAL(2/10000);};
			class mfd_right_gun_tg
			{
				source="user";
				animPeriod = 0.0000001;
				initPhase = 1;
			};
			class mfd_right_gun_ta: mfd_right_gun_tg {};
			class mfd_left_toggle: mfd_right_gun_tg {initPhase = 0;};
			class muzzle_rot_cannon
			{
				weapon = "rhs_weap_2a42";
				source="ammorandom";
			};
			class muzzle_hide_upk23
			{
				weapon = "RHS_Weap_GSh23Lx2";
				source = "reload";
			};
			class muzzle_rot_upk23: muzzle_rot_cannon
			{
				weapon = "RHS_Weap_GSh23Lx2";
			};
			ANIM_PYLON(1)
			ANIM_PYLON(2)
			ANIM_PYLON(3)
			ANIM_PYLON(4)
		};

		class UserActions
		{
			class SAFEMODE {
				displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
				condition = "(call rhs_fnc_findPlayer) in this";
				statement = "(call rhs_fnc_findPlayer) action ['SwitchWeapon', this, (call rhs_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
				position = "";
				radius = 10;
				priority = 10.5;
				onlyforplayer = 1;
				showWindow = 0;
				shortcut="user13";
				hideOnUse = 1;
			};
			class MFD_Left_Toggle
			{
				displayName="Toggle MFD";
				position="";
				priority = 0.01;
				radius = 3;
				onlyForplayer = 1;
				showWindow = 0;
				condition = "(call rhs_fnc_findPlayer) isEqualTo (driver this)";
				statement = "this animateSource ['mfd_left_toggle',1-(this animationSourcePhase 'mfd_left_toggle')]";
			};
			class openDoor
			{
				displayName=Lights up;
				position="";
				priority = 0.01;
				radius = 3;
				onlyForplayer = 1;
				showWindow = 0;
				condition = "this doorPhase 'landingLights' < 0.5 AND alive this";
				statement = "this animateDoor ['landingLights',1]";
			};
			class closeDoor: openDoor
			{
				displayName=Lights down;
				condition = "this doorPhase 'landingLights' > 0.5 AND alive this";
				statement = "this animateDoor ['landingLights',0]";
			};

		};

		enableManualFire=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerDoor				="doorR";
				gunnerLeftHandAnimName	="lever_gunner";
				gunnerRightHandAnimName	="stick_gunner";
				gunnerLeftLegAnimName	="pedalL";
				gunnerRightLegAnimName	="pedalR";
				gunnerAction			="RHS_KA52_Gunner";
				gunnerInAction			="RHS_KA52_Gunner";
				gunnerGetInAction		="pilot_Heli_Light_02_Enter";
				gunnerGetOutAction		="pilot_Heli_Light_02_exit";

				isCopilot			= 1;
				startEngine			= 0;
				outGunnerMayFire	= 1;
				commanding			= -1;
				primaryGunner		= 1;
				usePIP				= 1;
				castGunnerShadow	= 1;
				viewGunnerShadow	= 1;
				CanEject			= 1;

				memoryPointsGetInGunner			= "Pos_Gunner";
				memoryPointsGetInGunnerDir		= "Pos_Gunner_dir";
				memoryPointsGetInGunnerPrecise	= "pos gunner";
				precisegetinout					= 1;

				minElev		= -80;
				maxElev		= 15;
				initElev	= 0;
				minTurn		= -120;
				maxTurn		= 120;
				initTurn	= 0;

				gunBeg					= "gunstart";
				gunEnd					= "gunend";
				body					= "MainTurret";
				gun						= "MainGun";
				memoryPointGun			= "machinegun";
				memoryPointGunnerOptics	= "pilotview";
				selectionFireAnim		= "zasleh";

				turretInfoType	= "RHS_RscWeaponKa52_FCS";
				canUseScanners	= 0;
				allowTabLock	= 0;

				class Viewoptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.067;
					minFov=0.019;
					maxFov=0.067;
				};

				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1"
				};
				class OpticsIn
				{
					class Samshin_WFOV
					{
						opticsDisplayName	= "3";
						gunneropticsmodel	= "rhsafrf\addons\rhs_optics\vehicles\rhs_samshin_WFOV";
						initanglex			= 0;
						initangley			= 0;
						maxanglex			= 30;
						maxangley			= 100;
						minanglex			= -30;
						minangley			= -100;
						initfov				= __EVAL(0.7/3);
						maxfov				= __EVAL(0.7/3);
						minfov				= __EVAL(0.7/3);
						thermalmode[]		= {0,1};
						visionmode[]		=
						{
							"Normal","TI"
						};
					};
					class Samshin_NFOV: Samshin_WFOV
					{
						opticsDisplayName	= "15";
						gunneropticsmodel	="rhsafrf\addons\rhs_optics\vehicles\rhs_samshin";
						initfov				= __EVAL(0.7/15);
						maxfov				= __EVAL(0.7/15);
						minfov				= __EVAL(0.7/15);
					};
					class Samshin_NFOV_Stabilised: Samshin_NFOV
					{
						opticsDisplayName	= "22";
						initfov				= __EVAL(0.7/22);
						maxfov				= __EVAL(0.7/22);
						minfov				= __EVAL(0.7/22);
						directionStabilized = 1;
					};
				};

				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components : components
						{
							CI_EMPTY
							CI_CREW
							CI_NAV
							CI_FEEDUAV
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 8000,16000,24000, 4000 };
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
							CI_CREW
							CI_NAV
							CI_FEEDUAV
							class SensorDisplay
							{
								componentType	= "SensorsDisplayComponent";
								resource		= "RscCustomInfoSensors";
								range[] = { 8000,16000,24000, 4000 };
							};
						};
					};
				};

				gunnerForceOptics=0;
				weapons[]=
				{
					"rhs_weap_MASTERSAFE_Holdster15",
					"rhs_weap_fcs_mi24",
					"rhs_weap_2a42"
				};
				magazines[]=
				{
					"rhs_laserfcsmag",
					"rhs_mag_3uor6_230",
					"rhs_mag_3ubr8_230"
				};
				class HitTurret
				{
					armor=0.8;
					material=-1;
					name="gun1";
					visual="gun1";
					passThrough=0.5;
				};
				class HitGun
				{
					armor=0.4;
					material=-1;
					name="gun2";
					visual="gun2";
					passThrough=0.2;
				};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_Pilot
				{
					color[]				= {40,20,20};
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
						hardLimitStart	= 0.5;
						hardLimitEnd	= 0.6;
					};
					point = "light_pilot";
				};
				class Light_Gunner: Light_Pilot
				{
					point = "light_gunner";
				};
			};
			class Comp2: Comp1
			{
				class Light_Pilot: Light_Pilot {};
				class Light_Gunner: Light_Gunner {};
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 5;
				outerAngle = 75;
				coneFadeCoef = 10;

				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				useFlare=0;
				dayLight=0;
				flareSize=0.75;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 200;
					hardLimitEnd = 250;
				};
			};
			class LSvetlaFlare: LSvetla
			{
				position="L_Flare";
				useFlare=1;
				color[]={10,10,9};
				ambient[]={10,10,9};
			};
			class RSvetla: LSvetla
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class RSvetlaFlare: RSvetla
			{
				position="R_Flare";
				useFlare=1;
				color[]={10,10,9};
				ambient[]={10,10,9};
			};
		};

		class markerlights
		{
			class GreenStill
			{
				activeLight=0;
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
				intensity = 55;
				blinking=0;
				brightness=0.01;
				flareSize=0.5;
				name = "zeleny pozicni";
				useFlare=1;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
			class RedStill: GreenStill
			{
				color[] = {0.8,0,0};
				ambient[] = {0.08,0,0};
				name = "cerveny pozicni";
			};
			class WhiteStill: GreenStill
			{
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				name = "bily pozicni";
			};
			class WhiteBlicking: GreenStill
			{
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				blinking=1;
				name = "bily pozicni blik";
			};
			class RedBlinking: WhiteBlicking
			{
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				name = "cerveny pozicni blik";
			};
		};
		dammageHalf[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_CO.paa",
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_caugesmf_CO.paa"
		};
		dammageFull[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_CO.paa",
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_caugesmf_CO.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_in.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_in_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_in_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_light.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_bug.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_bug.rvmat",

				"rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_weapons.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_weapons_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_weapons_destruct.rvmat"
			};
		};
		#include "Ka52_MFD.hpp"
		class EventHandlers : EventHandlers
		{
			hit = ""; // turning off scripted ejection script handling
			class RHS_EventHandlers
			{
				hit		= "_this call RHS_fnc_AI_eject";
				init	= "_this call rhs_fnc_air_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
				getout	= "_this spawn rhs_fnc_ka52_ejection";
				engine	= "_this call rhs_fnc_addParachutes;";
			};
		};
	};

	class RHS_Ka52Black_base: RHS_Ka52_base
	{
		EdPrev(rhs_Ka52Black_base)
		accuracy = 0.5;
		//displayName="Ka-52 (CAS)";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_co.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"\rhsafrf\addons\rhs_a2port_air\Ka52\Data\rhs_ka52_samshin_wfov.paa"
		};
	};

	class RHS_Ka52_vvsc: RHS_Ka52_base
	{
		EdPrev(rhs_Ka52_vvsc)
		scope=2;
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		availableForSupportTypes[] = {"CAS_Heli"};
	};
	class RHS_Ka52_vvs: RHS_Ka52Black_base
	{
		EdPrev(rhs_Ka52_vvs)
		scope=2;
		faction="rhs_faction_vvs";
		AUTHOR_MACRO_BIS_PORT
		availableForSupportTypes[] = {"CAS_Heli"};
	};
	class RHS_Ka52_UPK23_vvs: RHS_Ka52_vvs
	{
		EdPrev(rhs_Ka52_UPK23_vvs)
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		displayName="Ka-52 (UPK)";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_upk23_ka52_mixed";	turret[]= {}; };
					class pylon2: pylon2 {attachment = "rhs_mag_upk23_ka52_mixed";	turret[]= {}; };
					class pylon3: pylon3 {attachment = "rhs_mag_apu6_9m127m_ka52";	turret[]= {0}; };
					class pylon4: pylon4 {attachment = "rhs_mag_apu6_9m127m_ka52";	turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};
	class RHS_Ka52_UPK23_vvsc: RHS_Ka52_vvsc
	{
		EdPrev(rhs_Ka52_UPK23_vvsc)
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		displayName="Ka-52 (UPK)";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_upk23_ka52_mixed";	turret[]= {}; };
					class pylon2: pylon2 {attachment = "rhs_mag_upk23_ka52_mixed";	turret[]= {}; };
					class pylon3: pylon3 {attachment = "rhs_mag_apu6_9m127m_ka52";	turret[]= {0}; };
					class pylon4: pylon4 {attachment = "rhs_mag_apu6_9m127m_ka52";	turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};
	class rhs_ka52_blade: Plane
	{
		EdPrev(rhs_ka52_blade)
		scope				=1;
		scopeArsenal		=0;
		scopeCurator		=0;
		hiddenSelections[]	={};

		AUTHOR_MACRO_BIS_PORT
		displayName="Ka-52 Blade";

		draconicForceXCoef	=17.2;
		draconicForceYCoef	=12.6;
		draconicForceZCoef	=10.15;
		draconicTorqueXCoef	=11.29;
		draconicTorqueYCoef	=13.1;

		Icon	="iconParachute";
		picture	="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		model	="\rhsafrf\addons\rhs_a2port_air\ka52\Ka52_rotor.p3d";

		unitInfoType		="RscUnitInfoSoldier";
		hideUnitInfo		=1;
		hasdriver			=0;
		weapons[]			={};
		magazines[]			={};
		fuelCapacity		= 0;
		secondaryExplosion	= 0;
		fuelExplosionPower	= 0;
		explosionEffect		= "";
		destrType			="DestructNo";
		transportSoldier	=0;
		vehicleClass		="Objects";

		driveOnComponent[]={};
		class Turrets {};
		class UserActions {};
		class Eventhandlers
		{
			HandleDamage = "deleteVehicle (_this select 0)";
		};
		SLX_XEH_DISABLED = 1;
	};
	class Car_f;
	class rhs_ka52_ejection_vest: Car_f
	{
		EdPrev(rhs_ka52_ejection_vest)
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		hiddenSelections[]={};

		AUTHOR_MACRO_BIS_PORT
		displayName="K37-800 Ejection Vest";

		simulation	="carX";
		Icon		="iconParachute";
		picture		="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		model		="\rhsafrf\addons\rhs_a2port_air\ka52\rhs_ka52_ejection_vest.p3d";

		memoryPointsGetInCargo		= "Cargo";
		memoryPointsGetInCargoDir	= "Cargo dir";
		ejectSpeed[]				= {1, 0, 1};
		unitInfoType				="RscUnitInfoSoldier";
		hideUnitInfo				=1;
		cargoAction[]				= {"RHS_ka52_Pilot_Eject"};
		hasdriver					=0;
		weapons[]					={};
		magazines[]					={};
		fuelCapacity				= 0;
		secondaryExplosion			= 0;
		fuelExplosionPower			= 0;
		explosionEffect				= "";
		destrType					="DestructNo";
		castCargoShadow				=1;
		transportSoldier			=1;
		vehicleClass				="Objects";
		occludeSoundsWhenIn			=1;
		obstructSoundsWhenIn		=1;
		driverRightHandAnimName		="handle";
		driverLeftHandAnimName		="handle";

		driveOnComponent[]={};
		class Turrets {};
		class UserActions {};
		class Eventhandlers {};
		SLX_XEH_DISABLED = 1;
	};
	class rhs_ka52_rps_rocket : rhs_ka52_ejection_vest {
		//scope = 2;
		displayName			= "Ka-52 ejection rocket";
		editorCategory		= "EdCat_Things";
		editorSubcategory	= "EdSubcat_Military";
		vehicleClass		= "Small_items";
		model				="\rhsafrf\addons\rhs_a2port_air\ka52\Ka52_rps_rocket.p3d";
		class AnimationSources
		{
			class hide_booster
			{
				source="user";
				animPeriod = 0.6;
				initPhase = 0;
			};
		};


		armor=100000000000;
		class Eventhandlers
		{
			HandleDamage = "deleteVehicle (_this select 0)";
		};
		driveOnComponent[]={};
	};