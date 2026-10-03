#define Mac_Inf_USMC_WD faction = "rhs_faction_usmc_wd";\
	vehicleClass = "rhs_vehclass_helicopter";\
	crew= "rhsusf_usmc_marpat_wd_helipilot";\
	typicalCargo[] = {"rhsusf_usmc_marpat_wd_helicrew"};\
	author="Rocket, RHS";

#define Mac_Inf_USMC_D faction = "rhs_faction_usmc_d";\
	vehicleClass = "rhs_vehclass_helicopter";\
	crew="rhsusf_usmc_marpat_d_helipilot";\
	typicalCargo[] = {"rhsusf_usmc_marpat_d_helicrew"};\
	author="Rocket, RHS";

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;

class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgAnimationSourceSounds
{
	class CH53_Rampsound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_ramp",1.0,1,60};
			sound[] = {"sound0",1};
		};
		class DoorMovementDone1
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.9,0.99])";
			sound0[] = {"A3\Sounds_F\structures\doors\ServoDoors\ServoDoorsSlam",1.0,1,60};
			sound[] = {"sound0",1};
		};
		class DoorMovementDone2
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.05])";
			sound0[] = {"A3\Sounds_F\structures\doors\ServoDoors\ServoDoorsSlam",1.0,1,60};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
			sound0[] = {"A3\Sounds_F\structures\doors\ServoDoors\ServoDoorsSlam",1.0,1,60};
			sound[] = {"sound0",1};
		};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
		};
		class Eventhandlers;
		class Components;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Components;

	};
	class rhsusf_CH53E_USMC: Helicopter_Base_H
	{
		rhs_decalParameters[]={
			"['Number', cCH53NumberPlaces, _typeNum,_randomNum]"
		};
		rhs_paraRamp = "ramp";
		rhs_paraOff= -15;
		rhs_rampAnim = "ramp_bottom";
		rhs_gearAnim = "Gear_Nose_1";
		rhs_paraScript = "rhs_fnc_vehPara";
		rhs_hasNoRadar=1;
		scope = 2;
		model = "\rhsusf\addons\rhsusf_ch53\rhsusf_ch53_e.p3d";
		displayName = "CH-53E";
		expansion = 3;
		dlc = "RHS_USAF";
		mapSize = 40;
		Icon = "\rhsusf\addons\rhsusf_ch53\data\ui\ch53_icon_ca.paa";
		Picture = "\rhsusf\addons\rhsusf_ch53\data\ui\ch53_picture_ca.paa";
		EdPrev(rhsusf_CH53E_USMC)

		//Target params definitions
		irTarget = 1;
		irTargetSize = 1.2;

		visualTarget = 1;
		visualTargetSize = 1.3;

		radarTarget = 1;
		radarTargetSize = 1.12;

		radarType = 4;
		LockDetectionSystem = "8";
		incomingMissileDetectionSystem = "2 + 8 + 16";

		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {0,9.8,0.9};
		LESH_WheelOffset[] = {0,-3.6};

		side = 1;

		Mac_Inf_USMC_WD

		destrType = "DestructWreck";

		availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"

		transportSoldier = 24;
		maxSpeed = 315;
		//AUTHOR_MACRO
		accuracy = 0.5;
		usePreciseGetInAction = 0;
		memoryPointsGetInDriverPrecise = "pos driver";
		memoryPointsGetInCargoPrecise[] = {"pos cargo"};
		preciseGetInOut = 0;
		cargoPreciseGetInOut[] = {0};
		GetInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		driverDoor = "";
		cargoDoors[] = {};
		castCargoShadow = 1;

		driverAction = "RHS_CH53_Pilot"; //replace with MH60S ones
		cargoAction[] = {"ChopperHeavy_LP_Static_H"}; //replace with MH60S ones

		maximumLoad = 14500;
		cargoCanEject = 1;
		driverCanEject = 0;
		hideWeaponsCargo = 1;
		cost = 10000000;
		fuelCapacity = 2500;
		fuelConsumptionRate = 0.138;
		extCameraPosition[] = {0,5,-30};

		threat[] = {0.3,0.2,0.3};
		maxFordingDepth = 1.65;
		waterLeakiness = 0.2;

		//multiplier of lift force
		liftForceCoef = 1.5;	//1.0 doesn't have enough strenght to lift a hunter, 1.5 has enough to lift even the hemtt
		//multiplier of body friction
		bodyFrictionCoef = 1.00;
		//multiplier of bank force
		cyclicAsideForceCoef = 0.5;
		//multiplier of dive force
		cyclicForwardForceCoef = 0.3;
		//multiplier of back rotor force
		backRotorForceCoef = 0.3;
		mainBladeRadius = 6;
		tailBladeRadius = 1;
		tailBladeCenter = "mala osa";
		mainBladeCenter = "velka osa";

		// PhysX
		#include "physx.hpp"
		gearRetracting		= 1;
		driveOnComponent[]	= {wheels};
		gearUpTime = 3;
		gearDownTime = 3;

		hiddenSelections[] = {"camo","camo1","n1","n2"};

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_ch53\data\ch53_1_co.paa",
			"rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa",
			"rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa",
			"rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				textures[]=
				{
					"rhsusf\addons\rhsusf_ch53\data\ch53_1_co.paa",
					"rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa"
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
		};

		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";

		#include "Sounds.h"

#define Glass_Macro(num) 	class HitGlass##num##: HitGlass1 {name = glass##num##;visual = glass##num##;};

		armor=40;
		armorStructural = 20;
		hullDamageCauseExplosion = 1;
		hullExplosionDelay[] = {10, 20};
		damageResistance=0.001;
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
				name 				= "NEtrup";
				visual				= "zbytek";
				passThrough			= 1;
				class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
			};
			class HitEngine1
			{
				armor				= -80;
				radius				= 0.18;
				explosionShielding	= 0.7;
				minimalHit			= -0.05;
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
				armorComponent	= "";
				name			= "engine_hit";
				depends			= "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitFuel 		{armor = -70;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = -0.10;	radius = 0.4; 	 armorComponent = "hit_fuel_1"; name = "hit_fuel_1";visual = "palivo";};
			class HitFuel2 		{armor = -70;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = -0.10;	radius = 0.4; 	 armorComponent = "hit_fuel_2"; name = "hit_fuel_2";visual = "palivo";};

			class HitAvionics: HitAvionics
			{
				armor		= 0.15;
				minimalHit	= -0.1;
				name		= "elektronika";
				visual		= "elektronika";
				passThrough	= 1;
			};
			class HitTail 		{armor = -80;	explosionShielding = 3.0; passThrough = 0.5; minimalHit = -0.2;	radius = 0.3; 	 armorComponent = "Hit_Tail"; name = "tail_rotor_hit";visual = "Vis_Tail";simulation = RHS_Hull_Helicopter;};
			class HitVRotor: HitVRotor
			{
				armor			= -80;
				minimalHit 		= -0.1;
				name			= "mala vrtule";
				visual			= "mala vrtule staticka";
				passThrough		= 0;
				armorComponent	= "Hit_Rotor_Rear";
				depends			= "HitTail";
			};
			class HitHRotor: HitHRotor
			{
				armor			= -80;
				minimalHit 		= -0.1;
				name			= "velka vrtule";
				visual			= "velka vrtule staticka";
				passThrough		= 0;
				armorComponent	= "Hit_Rotor_Main";
			};
			HIT_GLASS(1,0.37,-5,2.0,0.1)
			HIT_GLASS(2,0.37,-5,1.5,0.1)
			HIT_GLASS(3,0.25,-5,1.5,0.1)
			HIT_GLASS(4,0.25,-5,1.5,0.1)
			HIT_GLASS(5,0.34,-5,2.0,0.1)
			HIT_GLASS(6,0.34,-5,1.5,0.1)
			HIT_GLASS(7,0.34,-5,1.5,0.1)
			HIT_GLASS(8,0.34,-5,1.5,0.1)
			HIT_GLASS(9,0.24,-5,1,0.1)
			HIT_GLASS(10,0.24,-5,1,0.1)
			HIT_GLASS(11,0.24,-5,1,0.1)
			HIT_GLASS(12,0.24,-5,1,0.1)
			HIT_GLASS(13,0.24,-5,1,0.1)
			HIT_GLASS(14,0.24,-5,1,0.1)
			HIT_GLASS(15,0.24,-5,1,0.1)
			HIT_GLASS(16,0.24,-5,1,0.1)
			HIT_GLASS(17,0.24,-5,1,0.1)
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"rhsusf\addons\rhsusf_ch53\data\ch53_1.rvmat",
				"rhsusf\addons\rhsusf_ch53\data\ch53_1_damage.rvmat",
				"rhsusf\addons\rhsusf_ch53\data\ch53_1_destruct.rvmat",

				"rhsusf\addons\rhsusf_ch53\data\ch53_2.rvmat",
				"rhsusf\addons\rhsusf_ch53\data\ch53_2_damage.rvmat",
				"rhsusf\addons\rhsusf_ch53\data\ch53_2_destruct.rvmat",

				"rhsusf\addons\rhsusf_ch53\data\glass.rvmat",
				"rhsusf\addons\rhsusf_ch53\data\glass_damage.rvmat",
				"rhsusf\addons\rhsusf_ch53\data\glass_damage.rvmat",

				"rhsusf\addons\rhsusf_ch53\data\glassint.rvmat",
				"rhsusf\addons\rhsusf_ch53\data\glassint_damage.rvmat", //they work, even if the effect is barely visible, go figure
				"rhsusf\addons\rhsusf_ch53\data\glassint_damage.rvmat"
			};
		};

		#include "CfgHMD.h"

		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1_pos";
				direction = "exhaust_1_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position = "exhaust_2_pos";
				direction = "exhaust_2_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust3
			{
				position = "exhaust_3_pos";
				direction = "exhaust_3_dir";
				effect = "ExhaustsEffectHeliBig";
			};
		};

		#include "cfgRTD_Heli_Transport_03.h"

		class Eventhandlers: Eventhandlers
		{
			class RHSUSF_EventHandlers
			{
				init = "_this call rhsusf_fnc_ch53_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
			};
		};

#define Glass_MacroHit(num) 	class HitGlass##num##: HitGlass1 {hitpoint = HitGlass##num##;};

		class AnimationSources
		{
			class cargolights_hide
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
			};
			class cabinlights_hide: cargolights_hide {};
			class mainRotor_folded
			{
				source = "door";
				animPeriod = 10;
				initPhase = 0;
			};

			class Ramp
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
				sound = "CH53_Rampsound";
			};

			class hmg_hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class hide_winch
			{
				source = "user";
				displayname = "hide winch";
				animPeriod = 0;
				initPhase = 0;
			};
			class hide_ANAAQ24
			{
				source = "user";
				displayname = "hide DIRCM";
				animPeriod = 0;
				initPhase = 0;
			};
			class mainRotor_folded_handler: Ramp
			{

				animPeriod = 0.00001;
				initPhase = 0;
				mass=1;
				displayName="fold rotors";
				onPhaseChanged = "_this call rhsusf_fnc_ch53_fold";
			};
			class  hide_cargo
			{
				source = "user";
				mass=-20;
				displayName="hide cargo benches";
				animPeriod = 0.00001;
				initPhase=0;
				onPhaseChanged = "(_this select 0) lockCargo ((_this select 1)==1)";
			};
			class HitGlass1 {
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			Glass_MacroHit(2)
			Glass_MacroHit(3)
			Glass_MacroHit(4)
			Glass_MacroHit(5)
			Glass_MacroHit(6)
			Glass_MacroHit(7)
			Glass_MacroHit(8)
			Glass_MacroHit(9)
			Glass_MacroHit(10)
			Glass_MacroHit(11)
			Glass_MacroHit(12)
			Glass_MacroHit(13)
			Glass_MacroHit(14)
			Glass_MacroHit(15)
			Glass_MacroHit(16)
			Glass_MacroHit(17)
			class Damper_1_source	{source = damper; wheel = Wheel_1;};
			class Damper_2_source	{source = damper; wheel = Wheel_2;};
     		class Damper_3_source	{source = damper; wheel = Wheel_3;};
			class Wheel_1_source	{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source	{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source	{source = wheel; wheel = Wheel_3;};
			// RPT error fix
			class muzzle_rot_hmg_1 {source = "user";animPeriod = 0; initPhase = 0;};
			class reload_hmg_1 {source = "user";animPeriod = 0; initPhase = 0;};
			class mainturret {source = "user";animPeriod = 0; initPhase = 0;};
			class maingun {source = "user";animPeriod = 0; initPhase = 0;};
			class ramp_hmg {source = "user";animPeriod = 0; initPhase = 0;};
		};
		weapons[] =
		{
			"rhsusf_weap_ANAAQ24"
		};
		magazines[] =
		{
			mag_10(rhsusf_mag_DIRCM)
		};
		numberPhysicalWheels = 3;
		unitInfoType = "RHSUSF_RscUnitInfoAir";
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		class UserActions
		{
			class Pack
			{
				displayName="Pack";
				displayNameDefault="Pack";
				position=PackAction;
				radius=10;
				onlyForPlayer=true;
				condition="(!isEngineOn this) AND {(this doorPhase 'mainRotor_folded' isEqualTo 0) AND ((driver this) isEqualTo (call rhs_fnc_findPlayer)) AND (speed this == 0)}";
				statement="[this,1] call rhsusf_fnc_ch53_fold";
			};
			class unPack
			{
				displayName="UnPack";
				displayNameDefault="Unpack";
				position=PackAction;
				radius=10;
				onlyForPlayer=true;
				condition="(this doorPhase 'mainRotor_folded' isEqualTo 1) AND ((driver this) isEqualTo (call rhs_fnc_findPlayer))";
				statement="[this,0] call rhsusf_fnc_ch53_fold";
			};

			class RampOpen
			{
				displayName = "Open Ramp";
				position = "ramp action";
				showWindow = 0;
				radius = 5;
				condition = "this animationPhase 'ramp_bottom' <= 0.56 && ((driver this) isEqualTo (call rhs_fnc_findPlayer));";
				statement = "this animate ['ramp_bottom',1];this animate ['ramp_top',1];[this] call rhs_fnc_cargoDetach";
				onlyforplayer = 0;
				shortcut="user12";
			};
			class RampLevel: RampOpen
			{
				displayName = "Level Ramp";
				condition = "this animationPhase 'ramp_bottom' != 0.56 && ((driver this) isEqualTo (call rhs_fnc_findPlayer));";
				statement = "this animate ['ramp_bottom',0.56];this animate ['ramp_top',1];";
				shortcut="user13";
			};
			class RampClose: RampOpen
			{
				displayName = "Close Ramp";
				condition = "this animationPhase 'ramp_bottom' >= 0.56 && ((driver this) isEqualTo (call rhs_fnc_findPlayer));";
				statement = "this animate ['ramp_bottom',0];this animate ['ramp_top',0];[this] call rhs_fnc_cargoAttach";
			};
			class VehicleParadrop: RampOpen
			{
				displayName="Paradrop cargo";
				condition="(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this)";
				statement="[this] spawn rhs_fnc_vehPara";
				shortcut="";
			};
			/*class BasketDeploy: RampOpen {
				displayName = "<t color='#cbb8b4'>Deploy Basket</t>";
				condition = "alive this and (driver this == player or gunner this == player) and (this getVariable ['rhs_basket_deployed', 0]) isEqualTo 0";
				statement = "this spawn RHSUSF_fnc_basket_deploy;";
			};
			class BasketRecover: RampOpen {
				displayName = "<t color='#cbb8b4'>Recover Basket</t>";
				condition = "alive this and (driver this == player or gunner this == player) and (this getVariable ['rhs_basket_deployed', 0]) isEqualTo 1";
				statement = "this spawn RHSUSF_fnc_basket_recover;";	
				priority = 4;	
			};
			class BasketLower: RampOpen {
				displayName = "<t color='#cbb8b4'>Lower Basket</t>";
				condition = "alive this and (driver this == player or gunner this == player) and (this getVariable ['rhs_basket_deployed', 0]) isEqualTo 1";
				statement = "this spawn RHSUSF_fnc_basket_lower;";
				priority = 5;
			};
			class BasketRaise: RampOpen {
				displayName = "<t color='#cbb8b4'>Raise Basket</t>";
				condition = "alive this and (driver this == player or gunner this == player) and (this getVariable ['rhs_basket_deployed', 0]) isEqualTo 1";
				statement = "this spawn RHSUSF_fnc_basket_raise;";
				priority = 5;
			};*/		
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_ch53\data\loadouts\RHS_CH53_EDEN_CA.paa";
				class pylons
				{
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_ANALE39","RHSUSF_cm_ANALE39_x2"};
						priority		= 1;
						attachment		= "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x2";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR //GFAS
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};

						class GroundTarget      // ranges for targets with ground background
						{
							minRange = 500;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						animDirection = "ObsGun";
						angleRangeHorizontal = 98;
						angleRangeVertical = 72;
						typeRecognitionDistance = -1;
						minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = 0;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 0.95;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 695;
					};
					class VisualSensorComponent : SensorTemplateVisual {
						class AirTarget {
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};

						class GroundTarget {
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = "ObsGun";
						angleRangeHorizontal = 98;
						angleRangeVertical = 72;
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
					CI_SLA
					class SensorDisplay
					{
						componentType	= "SensorsDisplayComponent";
						resource		= "RscCustomInfoSensors";
						range[]			= { 3000,8000,16000,35000 };
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
					CI_SLA
					class SensorDisplay
					{
						componentType	= "SensorsDisplayComponent";
						resource		= "RscCustomInfoSensors";
						range[]			= { 3000,8000,16000,35000 };
					};
				};
			};
			class TransportCountermeasuresComponent
			{
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				gunnerAction = "RHS_CH53_Pilot";
				gunnerInAction = "RHS_CH53_Pilot";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				GunnerDoor = ""; //door_back_L but i don't think we need this
				LODTurnedIn = 1000; //view_gunner
				LODTurnedOut = 1000; //do not change
				body="ObsTurret";
				gun="ObsGun";
				animationSourceBody="ObsTurret";
				animationSourceGun="ObsGun";
				gunBeg="flir_end"; //gunBeg=endpoint of the gun
				gunEnd="flir_begin"; //gunEnd=chamber of the gun
				memoryPointGun="flir_end";
				memoryPointGunnerOptics = "commanderview";
				stabilizedInAxes = 3;
				minElev = -90;
				maxElev = 38.2;
				initElev = 0;
				minTurn = -70; //THIS IS TO AVOID SHOWING HOLES IN THE 3D MODEL, DO NOT CHANGE WITHOUT TESTING
				maxTurn = 70; //THIS IS TO AVOID SHOWING HOLES IN THE 3D MODEL, DO NOT CHANGE WITHOUT TESTING
				initTurn = 0;
				gunnerName = "$STR_A3_COPILOT";
				isCopilot = 1;
				turretInfoType = "RHS_RscUH1Y_Observer";
				soundServo[] = {"",0.01,1.0,30};
				weapons[] = {"rhs_weap_laserDesignator_AI"};
				magazines[] = {"rhs_LaserMag_ai"};
				inGunnerMayFire = 1;
				precisegetinout = 0;
				gunnerOpticsEffect[] = {};
				gunnerOpticsModel = "";
				gunnerLeftHandAnimName = "lever_copilot"; //these don't work for now, anims and inverse kinematics need to be added
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "pedalL";
				gunnerRightLegAnimName = "pedalR";
				usePiP=1;

				CanEject = 1;
				primaryGunner = 1;
				proxyIndex = 1;
				commanding = -1;
				gunnerOpticsShowCursor = 1;
				showgunneroptics = 1;
				gunnerForceOptics = 0;
				gunnerOpticsColor[] = {0.227,0.769,0.24,1};
				gunnerForceOutOptics = 0;
				gunnerUsesPilotView = 0;
				hasGunner = 1;
				hideWeaponsGunner = 1;
				lockWhenDriverOut = 0;
				enableManualFire = 1;
				maxHorizontalRotSpeed = 3.2;
				maxVerticalRotSpeed = 3.2;
				outGunnerMayFire = 1;
				showHMD = 0;

				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -80;
						maxAngleX = 20;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1;
						minFov = 1;
						maxFov = 1;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {1,0,0,0};
						gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
						directionStabilized = 0;
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -80;
						maxAngleX = 20;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {1,0,0,0};
						gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
						directionStabilized = 1;
						stabilizedInAxes = 3;
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class Reflectors
				{
					class cabin
					{
						color[]={830,100,100};
						ambient[] = {5,0,0};
						intensity = 9;
						size = 1;
						innerAngle = 90;
						outerAngle = 165;
						coneFadeCoef = 1;
						position = "cabin_light";
						direction = "cabin_light_dir";
						hitpoint = "cabin_light";
						selection = "cabin_light";
						useFlare = 1;
						flareSize = 1;
						flareMaxDistance = 5;
						dayLight = 1;
						blinking = 0;
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 50;
							hardLimitStart = 2;
							hardLimitEnd = 2.5;
						};
					};
					class cargo_light_1: cabin
					{
						color[]={830,100,100};
						//color[]={800,900,750};
						position = "cargo_light_1";
						direction = "cargo_light_1_dir";
						hitpoint = "cargo_light_1";
						selection = "cargo_light_1";
						intensity = 21;
						useFlare = 0;
						coneFadeCoef = .1;
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 70;
							hardLimitStart = 2;
							hardLimitEnd = 3;
						};
					};
					class cargo_light_2: cargo_light_1
					{
						position = "cargo_light_2";
						direction = "cargo_light_2_dir";
						hitpoint = "cargo_light_2";
						selection = "cargo_light_2";
					};
					class cargo_light_3: cargo_light_1
					{
						position = "cargo_light_3";
						direction = "cargo_light_3_dir";
						hitpoint = "cargo_light_3";
						selection = "cargo_light_3";
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 4000,8000,16000,25000 };
								resource = "RscCustomInfoSensors";
							};
							class VehicleGunnerDisplay  //Camera feed from gunner's optics
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
						};
					};

					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 4000,8000,16000,25000 };
								resource = "RscCustomInfoSensors";
							};
							class VehicleGunnerDisplay  //Camera feed from gunner's optics
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
						};
					};
				};
				startEngine = 0;
				gunnerHasFlares = 0;
			};
			/*
			class CargoTurret_01: CargoTurret
			{
				weapons[]= {"rhsusf_weap_DummyLauncher"};
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex = 5;
				maxElev = 0;
				minElev = -25;
				maxTurn = 90;
				minTurn = 60;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "CargoRamp_Open";
				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				maxTurn = -55;
				minTurn = -87;
				minElev = -30;
				proxyIndex = 6;
			};
			*/

		};
		cargoCompartments[] = {"Compartment2"};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.5;
					minFov = 0.5;
					maxFov = 0.5;
					directionStabilized = 1;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics = 0;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			minElev = 80;
			maxElev = 80;
			initElev = 80;
			maxXRotSpeed = 0.5;
			maxYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 0;
		};
		memoryPointDriverOptics = "slingCamera";
		slingLoadMaxCargoMass = 14000;
		class MarkerLights
		{
			class PositionRed
			{
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				name = "PositionLight_red_1_pos";
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class PositionGreen: PositionRed
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "PositionLight_green_1_pos";
			};
			class PositionWhite: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "PositionLight_white_1_pos";
				drawLightSize = 0.2;
			};
			class CollisionRed: PositionRed
			{
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				name = "CollisionLight_red_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
			class CollisionWhite: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "CollisionLight_white_1_pos";
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class InteriorBlue
			{
				name = "light_interior_blue";
				color[] = {0.07,0.99,0.89};
				ambient[] = {0.007,0.099,0.089};
				intensity = 75;
				blinking = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 2.25;
					hardLimitEnd = 3;
				};
			};
		};
		/* ACE CARGO : */
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 16;
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
				expression = "_this setVariable ['%s', _value];[_this,[['Number', cCH53NumberPlaces, _value]]] call rhsusf_fnc_decalsInit";
				defaultValue = 0;
				typeName = "STRING";
				class values {
					class USMCGrey {
						name = "USMC (Grey)";
						value = "USMCGrey";
						defaultValue = "USMCGrey";
					};
					class USMCBlackShadow {
						name = "USMC (Black Shadow)";
						value = "USMCBlackShadow";
					};
				};
			};
			//typing anywhere HS in exprosion field will (like RHS) will change it into RattributeName (i.e. Rrhs_decalNumber )
			//duuuh
			class rhs_decalNumber {
				displayName = "Set side number";
				tooltip = "Set side number. 2 numbers are required. If 0, random number will be generated";
				property = "rhs_decalNumber";
				control = "Edit";
				validate = "Number";
				typeName = "Number";
				defaultValue = "-1";
				expression = "if( _value >= 0)then{[_this, [['Number', cCH53NumberPlaces, _this getVariable ['rhs_decalNumber_type','USMCGrey'], _value] ] ] call rhsusf_fnc_decalsInit};";
			};

			class rhs_openRamp {
				displayName = "Open rear ramp";
				property = "rhs_openRamp";
				control = "slider";
				expression = "_this animate ['ramp_bottom',_value];_this animate ['ramp_top',_value];";
				defaultValue = "0";
			};
			class FoldHeli {
				control = "CheckboxNumber";
				defaultValue = "0";
				displayName = "Fold helicopter rotors";
				property = "FoldHeli";
				expression = "[_this,_value,true] call rhsusf_fnc_ch53_fold";
			};
			class hide_cargo: rhs_openRamp {
				displayName = "Hide cargo benches";
				property = "hide_cargo";
				control = "CheckboxNumber";
				expression = "_this animate ['%s',_value,true];_this lockCargo (_value == 1)";
			};
			class rhs_attachCargo: FoldHeli {
				displayName = "Attach cargo";
				tooltip = "Attaching cargo (using attachTo command) just like when you use ramp action";
				property = "rhs_attachCargo";
				expression = "if(_value == 1)then{[_this] spawn rhs_fnc_cargoAttach}else{{if(not(_x isKindOf 'Man'))then{detach _x}}foreach attachedObjects _this};";
			};
		};
		class VehicleTransport	{
			class Carrier
			{
				cargoBayDimensions[]        = {"VTV_limit_1", "VTV_limit_2"};   // Memory points in model defining cargo space
				disableHeightLimit          = 1;                             // If set to 1 disable height limit of transported vehicles
				maxLoadMass                 = 9000;                           // Maximum cargo weight (in Kg) which the vehicle can transport
				cargoAlignment[]            = {"front", "center"};                 // Array of 2 elements defining alignment of vehicles in cargo space. Possible values are left, right, center, front, back. Order is important.
				cargoSpacing[]              = {0.075, 0.075, 0.075};                     // Offset from X,Y,Z axes (in metres)
				exits[]                     = {"VTV_exit_1"};     // Memory points in model defining loading ramps, could have multiple
				unloadingInterval           = 2;                                // Time between unloading vehicles (in seconds)
				loadingDistance             = 15;                               // Maximal distance for loading in exit point (in meters).
				loadingAngle                = 60;                               // Maximal sector where cargo vehicle must be to for loading (in degrees).
				parachuteClassDefault       = B_Parachute_02_F;                 // Type of parachute used when dropped in air. Can be overridden by parachuteClass in Cargo.
				parachuteHeightLimitDefault = 25;                               // Minimal height above terrain when parachute is used. Can be overriden by parachuteHeightLimit in Cargo.
			};
		};	
		
	};

	class rhsusf_CH53E_USMC_GAU21: rhsusf_CH53E_USMC
	{
		displayName = "CH-53E (GAU-21)";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
			class GAU21: MainTurret
			{
				gunnerType = "rhsusf_usmc_marpat_wd_helicrew";
				usePiP = 0;
				isCopilot = 0;
				showAsCargo = 1;
				proxyIndex=2;
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				body = "mainTurret";
				gun = "mainGun";
				minElev=-60;
				maxElev=7;
				initElev=0;
				minTurn=90;
				maxTurn=270;
				initTurn=180;
				lodturnedout	= 1200;
				lodturnedin		= 1200;
				lodopticsout	= 1200;
				lodopticsin		= 1200;
				soundServo[]=
				{
					"",
					0.01,
					1
				};
				gunnerLeftHandAnimName="OtocHlaven_1";
				gunnerRightHandAnimName="OtocHlaven_1";
				gunnerLeftLegAnimName="gunner_1_leg_left";
				gunnerRightLegAnimName="gunner_1_legs";
				gunnerAction= "RHS_Ch53_Gunner_Ramp";
				gunnerInAction= "RHS_Ch53_Gunner_Ramp";
				animationSourceHatch="";
				stabilizedInAxes="StabilizedInAxesNone";
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				selectionFireAnim="zasleh_1";
				weapons[]=
				{
					"rhs_weap_gau21_1"
				};
				magazines[]=
				{
					"rhs_mag_300rnd_127x99_mag_Tracer_Red",
					"rhs_mag_300rnd_127x99_mag_Tracer_Red",
					"rhs_mag_300rnd_127x99_mag_Tracer_Red"
				};
				gunnerName="Ramp GAU-21";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				preciseGetInOut=0;
				turretInfoType = "RscWeaponZeroing";
				commanding=-2;
				playerPosition = 1;
				primaryGunner=0;
				class ViewOptics
				{
					initanglex = 0;
					initangley = 0;
					initfov = 0.7;
					maxanglex = 75;
					maxangley = 100;
					maxfov = 1.1;
					minanglex = -75;
					minangley = -100;
					minfov = 0.25;
				};
				class ViewGunner: ViewOptics
				{
					initanglex = 0;
					initangley = 0;
					initfov = 0.7;
					maxanglex = 75;
					maxangley = 100;
					maxfov = 1.1;
					minanglex = -75;
					minangley = -100;
					minfov = 0.25;
					visionMode[]={};
				};
				class OpticsIn
				{
					class ViewOptics: ViewGunner
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					};
				};
				gunnerCompartments="Compartment2";
				memoryPointGun="muzzle_1";
				memoryPointGunnerOptics="gunnerview_1";
				soundAttenuationTurret = "HeliAttenuationGunner";
				//gunnerDoor="DoorLB";
				class Reflectors {};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							CI_EMPTY
							CI_CREW
						};
					};

					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							CI_EMPTY
							CI_CREW
						};
					};
				};
				class Hitpoints {};
			};
		};
		class AnimationSources: AnimationSources
		{
			class hmg_hide: hmg_hide
			{
				initPhase = 0;
			};
			class Ramp: Ramp
			{
				initPhase = 0.56;
			};
			class Ramp_hmg: Ramp
			{
				initPhase = 1;
			};
			class muzzle_rot_hmg_1
			{
				weapon="rhs_weap_gau21_1";
				source="ammorandom";
			};
			class reload_hmg_1 : muzzle_rot_hmg_1
			{
				source="reload";
			};			
		};
		class UVAnimations
		{
			class hmg_ammo_1
			{
				type			= translation;
				source			= reload_hmg_1;
				sourceAddress	= loop;
				section			= hmg_ammo_1;
				minValue		= 0;
				maxValue		= 1;
				offset0[]		= {0,0};
				offset1[]		= {0.038,0};
			};
		};
		class UserActions: UserActions
		{
			class RampClose: RampClose {condition = false;};
			class VehicleParadrop: VehicleParadrop {condition = false;};
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
				expression = "_this setVariable ['%s', _value];[_this,[['Number', cCH53NumberPlaces, _value]]] call rhsusf_fnc_decalsInit";
				defaultValue = 0;
				typeName = "STRING";
				class values {
					class USMCGrey {
						name = "USMC (Grey)";
						value = "USMCGrey";
						defaultValue = "USMCGrey";
					};
					class USMCBlackShadow {
						name = "USMC (Black Shadow)";
						value = "USMCBlackShadow";
					};
				};
			};
			//typing anywhere HS in exprosion field will (like RHS) will change it into RattributeName (i.e. Rrhs_decalNumber )
			//duuuh
			class rhs_decalNumber {
				displayName = "Set side number";
				tooltip = "Set side number. 2 numbers are required. If 0, random number will be generated";
				property = "rhs_decalNumber";
				control = "Edit";
				validate = "Number";
				typeName = "Number";
				defaultValue = "-1";
				expression = "if( _value >= 0)then{[_this, [['Number', cCH53NumberPlaces, _this getVariable ['rhs_decalNumber_type','USMCGrey'], _value] ] ] call rhsusf_fnc_decalsInit};";
			};

			class rhs_openRamp {
				displayName = "Open rear ramp";
				property = "rhs_openRamp";
				control = "slider";
				expression = "_this animate ['ramp_bottom',_value];";
				defaultValue = "0";
			};
			class FoldHeli {
				control = "CheckboxNumber";
				defaultValue = "0";
				displayName = "Fold helicopter rotors";
				property = "FoldHeli";
				expression = "[_this,_value,true] call rhsusf_fnc_ch53_fold";
			};
		};
	};

	class rhsusf_CH53E_USMC_D: rhsusf_CH53E_USMC
	{
		Mac_Inf_USMC_D
		EdPrev(rhsusf_CH53E_USMC_D)
	};
	class rhsusf_CH53E_USMC_GAU21_D: rhsusf_CH53E_USMC_GAU21
	{
		Mac_Inf_USMC_D
		EdPrev(rhsusf_CH53E_USMC_D)
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
			class GAU21: GAU21
			{
				gunnerType = "rhsusf_usmc_marpat_d_helicrew";
			};
		};
	};

	class rhsusf_CH53e_USMC_cargo: rhsusf_CH53E_USMC
	{
		displayName = "CH-53E (Cargo)";
		class AnimationSources: AnimationSources
		{
			class  hide_cargo: hide_cargo
			{
				displayName="";
				initPhase = 1;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret {};
		};
		transportSoldier = 0;
		class VehicleTransport: VehicleTransport	
		{
			class Carrier: Carrier
			{
				cargoBayDimensions[]        = {"VTV_limit_1_big", "VTV_limit_2_big"};
			};
		};	
	};

	class rhsusf_CH53e_USMC_D_cargo: rhsusf_CH53E_USMC_D
	{
		displayName = "CH-53E (Cargo)";
		class AnimationSources: AnimationSources
		{
			class  hide_cargo: hide_cargo
			{
				displayName="";
				initPhase = 1;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret {};
		};
		transportSoldier = 0;
		class VehicleTransport: VehicleTransport	
		{
			class Carrier: Carrier
			{
				cargoBayDimensions[]        = {"VTV_limit_1_big", "VTV_limit_2_big"};
			};
		};	
	};

};