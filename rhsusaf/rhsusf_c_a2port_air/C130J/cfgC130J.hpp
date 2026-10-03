	class RHS_C130J_Base: Plane_Base_F
	{
		rhs_paraRamp = "ramp";
		rhs_paraOff= -7;
		rhs_rampAnim = "ramp_bottom";
		rhs_gearAnim = "Gear_1_1";
		rhs_paraScript = "rhs_fnc_vehPara";
		dlc = "RHS_USAF";

		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {0,15,1.17};
		LESH_WheelOffset[] = {0,2};

		enableSweep = 0;

		//Target params definitions
		irTarget = 1;
		irTargetSize = 1.2;

		visualTarget = 1;
		visualTargetSize = 1.5;

		radarTarget = 1;
		radarTargetSize = 1.5;

		LockDetectionSystem = "8";
		incomingMissileDetectionSystem = "2 + 8 + 16";

		destrType="DestructWreck";

		unitInfoType = "RHSUSF_RscUnitInfoAirPlane";


		displayname		= "C-130J";
		category = "Air";
		vehicleClass = "rhs_vehclass_aircraft";
		faction = "rhs_faction_usaf";
		crew = "rhsusf_airforce_pilot";
		typicalCargo[]=
		{
			"rhsusf_airforce_pilot",
			"rhsusf_airforce_pilot"
		};
		model="\rhsusf\addons\rhsusf_a2port_air\C130J\c130j.p3d";
		picture="\rhsusf\addons\rhsusf_a2port_air\data\ico\rhs_c130j_pic_ca.paa";
		icon="\rhsusf\addons\rhsusf_a2port_air\data\mapico\icon_c130j_CA.paa";
		editorPreview	= "rhsusf\addons\rhsusf_editorPreviews\data\RHS_C130J.paa";
		mapSize=25;
		accuracy=0.15;
		cost=20000;
		getInRadius=2.5;
		showNVGCargo[] = {1};
		cabinOpening=0;

		driverDoor="Door_1";
		//precisegetinout = 1;
		//memoryPointsGetInDriverPrecise="pos driver";
		getinaction="GetInLow";
		getoutaction="GetInLow";
		//getinaction="RHS_C130_Pilot_GetIn";
		//getoutaction="RHS_Heli_Cargo_Exit";
		driverAction="RHS_C130_Pilot";
		driverRightHandAnimName="pilot_control";
		driverLeftHandAnimName="pilot_control";
		maximumLoad = 15000;

		altFullForce = 8535;
		altNoForce = 17000;
		maxSpeed=648;
		stallSpeed = 180;
		stallWarningTreshold = 0.5;
		envelope[] = {0.1,0.1,0.9,2.8,3.5,3.7,3.8,3.8,3.6,3.3,2.7};
		thrustCoef[] = {0.9,0.8,0.9,1.3,1.2,1.2,1.1,1,0.9,0.2,0.1,0,0};
		angleOfIndicence = -0.0174532925;
		rudderInfluence = 0.866;
		rudderControlsSensitivityCoef = 1.5;
		rudderCoef[] = {0,0.4,1,1.4,1.8,2,2.2,2.3,2.4,2.5,2.5,2.5,2.6};
		aileronSensitivity=1;
		aileronControlsSensitivityCoef = 1;
		aileronCoef[] = {0,0.5,1,1.2,1.4,1.5,1.6};
		elevatorSensitivity=1;
		elevatorControlsSensitivityCoef = 3;
		elevatorCoef[] = {0,1,1.2,1.4,1.5,1.6,1.6};
		//noseDownCoef=1;
		flapsFrictionCoef = 0.2;
		wheelSteeringSensitivity=2;
		draconicForceXCoef = 4.3;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.2;
		draconicTorqueXCoef[] = {16.0,15.5,15.0,14.5,14.0,14.0,14.5,15.0,16.0,17.0,18.0};
		draconicTorqueYCoef[] = {3.2,2.5,1,,0,0,0,0,0,0,0,0,0,0,0};

		class Exhausts
		{
			class Engine_L1
			{
				position	= "fx_engine_l1_pos";
				direction	= "fx_engine_l1_dir";
				effect		= "RHS_EngineEffectAirPlaneHP";
				engineIndex = 0;
			};
			class Engine_L2
			{
				position	= "fx_engine_l2_pos";
				direction	= "fx_engine_l2_dir";
				effect		= "RHS_EngineEffectAirPlaneHP";
				engineIndex = 0;
			};
			class Engine_R1
			{
				position	= "fx_engine_r1_pos";
				direction	= "fx_engine_r1_dir";
				effect		= "RHS_EngineEffectAirPlaneHP";
				engineIndex = 1;
			};
			class Engine_R2
			{
				position	= "fx_engine_r2_pos";
				direction	= "fx_engine_r2_dir";
				effect		= "RHS_EngineEffectAirPlaneHP";
				engineIndex = 1;
			};
		};
		cargocaneject=1;
		cargoIsCoDriver[]={0,0};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		memoryPointsGetInCargo[]=
		{
			"pos driver",

			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2",
			"pos cargo1",
			"pos cargo2"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos driver dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo1 dir",
			"pos cargo2 dir"
		};
		cargoDoors[]=
		{
			Door_1,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2,
			Door_2_1,
			Door_2_2
		};
		cargoAction[]=
		{
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo02"
		};
		transportSoldier=25;
		gunnerUsesPilotView=1;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		attenuationEffectType = "OpenHeliAttenuation";

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_sklo.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_sklo_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_sklo_damage.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_sklo_in.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_sklo_in_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_sklo_in_damage.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_body.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_body_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_body_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_interior.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_interior_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_interior_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_wings.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_wings_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\C130J\data\c130j_wings_destruct.rvmat"
			};
		};
		selectionDamage="zbytek";
		selectionShowDamage="zbytek";

		//Sensors definition
		reportOwnPosition = 1;

		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_C130_EDEN_CA.paa";
				class pylons
				{
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_ANALE40_x2","RHSUSF_cm_ANALE40_x4","RHSUSF_cm_ANALE40_x8","RHSUSF_cm_ANALE40_x16"};
						priority		= 1;
						attachment		= "rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
			};

			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					CI_EMPTY
					CI_NAV
					CI_CREW
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
				class Components
				{
					CI_EMPTY
					CI_NAV
					CI_CREW
					class SensorDisplay
					{
						componentType	= "SensorsDisplayComponent";
						resource		= "RscCustomInfoSensors";
						range[]			= { 3000,8000,16000,35000 };
					};
				};
			};
		};

		class EventHandlers : EventHandlers
		{
			class RHSUSF_EventHandlers
			{
				postInit = "_this call rhs_fnc_reapplyTextures";
				getIn = "_this call rhs_fnc_C130_doors";
				getOut = "_this call rhs_fnc_C130_doors";
			};
		};
		class TransportMagazines
		{
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,30);
			mag_xx(rhsusf_100Rnd_556x45_soft_pouch,8);
			mag_xx(rhs_mag_M441_HE,16);
			mag_xx(rhs_mag_M714_white,4);
			mag_xx(rhs_mag_M662_red,2);
			mag_xx(rhs_mag_m67,4);
			mag_xx(rhs_mag_m18_green,2);
			mag_xx(rhs_mag_m18_red,2);
			mag_xx(rhs_mag_an_m8hc,4);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,20);
			item_xx(Medikit,4);
			item_xx(Toolkit,1);
		};

		class TransportWeapons {
			weap_xx(rhs_weap_m4_carryhandle,2);
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=14;
			};
		};
		#include "sounds.hpp"

		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				brightness=50;
				useFlare=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=1;
				brightness=1;
				useFlare=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
			class Left2
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				position="L2 svetlo";
				direction="konec L2 svetla";
				hitpoint="L2 svetlo";
				selection="L2 svetlo";
				size=1;
				brightness=1;
				useFlare=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
			class Right2
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				position="P2 svetlo";
				direction="konec P2 svetla";
				hitpoint="P2 svetlo";
				selection="P2 svetlo";
				size=1;
				brightness=1;
				useFlare=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
		};
		weapons[]=
		{
			rhsusf_weap_ANAAQ24
		};
		magazines[]=
		{
			mag_10(rhsusf_mag_DIRCM)
		};
		threat[]={0.1,0.5,0.8};
		ejectSpeed[]={0,0,0};
		landingAoa="rad 7";
		landingSpeed=200;
		extCameraPosition[]={0,5,-40};
		gearUpTime=4.5;
		gearDownTime=3;
		driveOnComponent[]=
		{
		};
		canFloat="false";
		waterResistanceCoef=0.004;
		waterLeakiness=25;
		class AnimationSources
		{
			class jumplight
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
			};
			class cabinlights_hide: jumplight {};
			class cargolights_hide: cabinlights_hide {};

			class ramp
			{
				source="user";
				initPhase=0;
				animPeriod=5;
				sound = "ServoRampSound_2";
				soundPosition = "ramp_bottom_axis";
			};
			class  hide_cargo
			{
				source = "user";
				mass=-20;
				displayName="hide cargo benches";
				animPeriod = 0.00001;
				initPhase=0;
				onPhaseChanged = "for '_i' from 1 to 24 do {(_this select 0) lockCargo [_i,(_this select 1)==1]}";
			};
			class door_2_2: ramp
			{
				animPeriod=4;
				source = "door";
				sound = "ServoRampSound_2";
				soundPosition = "door_2_2_axis2";
			};
			class door_2_1: door_2_2 {
				soundPosition = "door_2_1_axis2";
			};
			class door_1: door_2_2 {
				soundPosition = "Door_1_axis";
			};
			class CollisionLightRed_source
			{
				source="MarkerLight";
				markerLight="CollisionRed";
			};
			class CollisionLightWhite_source
			{
				source="MarkerLight";
				markerLight="CollisionWhite";
			};
			class Damper_1_1_source			{source = damper; wheel = Wheel_1_1;};
			class Damper_2_1_source			{source = damper; wheel = Wheel_2_1;};
			class Damper_2_2_source			{source = damper; wheel = Wheel_2_2;};
			class Damper_3_1_source			{source = damper; wheel = Wheel_3_1;};
			class Damper_3_2_source			{source = damper; wheel = Wheel_3_2;};
			class Wheel_1_1_source			{source = wheel; wheel = Wheel_1_1;};
			class Wheel_2_1_source			{source = wheel; wheel = Wheel_2_1;};
			class Wheel_2_2_source			{source = wheel; wheel = Wheel_2_2;};
			class Wheel_3_1_source			{source = wheel; wheel = Wheel_3_1;};
			class Wheel_3_2_source			{source = wheel; wheel = Wheel_3_2;};
		};
		class UserActions
		{
			class OpenRamp
			{
				displayName="Open Cargo Ramp";
				position="pos_gunner";
				onlyforplayer=1;
				showWindow = 0;
				radius=6;
				condition="(this animationSourcePhase 'ramp' <= 0.65) AND Alive(this)";
				statement="this animateSource ['ramp',1];[this] call rhs_fnc_cargoDetach";
				shortcut="user12";
			};
			class LevelRamp: OpenRamp
			{
				displayName="Level Ramp";
				condition="this animationSourcePhase 'ramp' != 0.65 and (alive this)";
				statement="this animateSource ['ramp', 0.65];";
				shortcut="user13";
			};
			class CloseRamp: OpenRamp
			{
				displayName="Close Cargo Ramp";
				condition="(this animationSourcePhase 'ramp' >= 0.65) AND Alive(this)";
				statement="this animateSource ['ramp',0];[this] call rhs_fnc_cargoAttach";
				shortcut="user12";
			};
			class VehicleParadrop: OpenRamp
			{
				displayName="Paradrop cargo";
				condition="(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this)";
				statement="[this] spawn rhs_fnc_vehPara";
				shortcut="";
			};
			class OpenMenu
 			{
 				userActionID = 74;
				priority = 11.008;
 				displayName = "<t color='#FDDE00'>Open control panel</t>";
 				position = "pos_gunner";
 				radius = 10;
 				animPeriod = 2;
 				onlyForplayer = 1;
 				condition = "((call rhsusf_fnc_findPlayer) in this)";
 				statement = "[this] call rhs_fnc_c130j_openMenu";
 			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[]={0.8,0,0};
				ambient[]={0.08,0,0};
				intensity=75;
				name="PositionLight_Red_1_pos";
				drawLight=1;
				drawLightSize=0.4;
				drawLightCenterSize=0.04;
				activeLight=0;
				blinking=0;
				dayLight=1;
				useFlare=0;
			};
			class PositionGreen: PositionRed
			{
				color[]={0,0.8,0};
				ambient[]={0,0.08,0};
				name="PositionLight_Green_1_pos";
			};
			class PositionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_1_pos";
				drawLightSize=0.4;
			};
			class PositionWhite2: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_2_pos";
				drawLightSize=0.4;
			};
			class PositionWhite3: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_3_pos";
				drawLightSize=0.4;
			};
			class PositionWhite4: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_4_pos";
				drawLightSize=0.4;
			};
			class CollisionRed: PositionRed
			{
				color[]={0.9,0.15,0.1};
				ambient[]={0.09,0.015,0.01};
				name="CollisionLight_Red_1_pos";
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				drawLightSize=0.4;
				drawLightCenterSize=0.08;
			};
			class CollisionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="CollisionLight_White_1_pos";
				blinking=1;
				blinkingPattern[]={0.1,0.9};
				blinkingPatternGuarantee=0;
				drawLightSize=0.4;
				drawLightCenterSize=0.04;
			};
		};
		
		armor 			= 250;
		armorStructural	= 4;
		epeImpulseDamageCoef = 1;
		#define ENIGNE_DESTR_FX(POS)\
		class DestructionEffects: RHS_Effects_Airplane_Engine_Destruction {\
			class RHS_Hull_Smoke: RHS_Hull_Smoke {position = ##POS##;};\
			class RHS_Hull_Fire: RHS_Hull_Fire {position = ##POS##;};\
			class RHS_Hull_Sparks: RHS_Hull_Sparks {position = ##POS##;};\
			class RHS_Hull_Sounds: RHS_Hull_Sounds {position = ##POS##;};\
			class RHS_Hull_Smoke_small1: RHS_Hull_Smoke_small1 {position = ##POS##;};\
			class RHS_Hull_Smoke_small2: RHS_Hull_Smoke_small2 {position = ##POS##;};\
			class RHS_Hull_Fire_2: RHS_Hull_Fire_2 {position = ##POS##;};\
			class RHS_Hull_Fire_3: RHS_Hull_Fire_3 {position = ##POS##;};\
		}
		
		class Hitpoints
		{
			class HitHull 			{armor = -380;	explosionShielding = 0.7; passThrough = 1.00; minimalHit = -0.05;	radius = 0.15; material = -1; name = "hit_hull";			armorComponent = "hit_hull";				visual = "zbytek";				depends = "Total";  								};
			class HitAvionics 		{armor = -80;	explosionShielding = 0.60; passThrough = 0.01; minimalHit = -0.10;	radius = 0.08; material = -1; name = "hit_avionics";						visual = "vis_avionics";	depends = "0";  									};
			class HitEngine_L1 		{armor = -80;	explosionShielding = 1.25; passThrough = 0.01; minimalHit = -0.05;	radius = 0.07; material = -1; name = "hit_engine_l1";		armorComponent = "hit_engine_l1";	visual = "vis_engine_l";	depends = "0"; ENIGNE_DESTR_FX(fx_engine_l1_fire);};
			class HitEngine_L2 		{armor = -80;	explosionShielding = 1.25; passThrough = 0.01; minimalHit = -0.05;	radius = 0.07; material = -1; name = "hit_engine_l2";		armorComponent = "hit_engine_l2";	visual = "vis_engine_2";	depends = "0"; ENIGNE_DESTR_FX(fx_engine_l2_fire);};
			class HitEngine_R1 		{armor = -80;	explosionShielding = 1.25; passThrough = 0.01; minimalHit = -0.05;	radius = 0.07; material = -1; name = "hit_engine_r1";		armorComponent = "hit_engine_r1";	visual = "vis_engine_3";	depends = "0"; ENIGNE_DESTR_FX(fx_engine_r1_fire);};
			class HitEngine_R2 		{armor = -80;	explosionShielding = 1.25; passThrough = 0.01; minimalHit = -0.05;	radius = 0.07; material = -1; name = "hit_engine_r2";		armorComponent = "hit_engine_r2";	visual = "vis_engine_4";	depends = "0"; ENIGNE_DESTR_FX(fx_engine_r2_fire);};
			class HitEngine 		{armor = 999;	explosionShielding = 0.25; passThrough = 0.01; minimalHit = -0.01;	radius = 0.01; material = -1; name = "hit_engine_l";						visual = "vis_engine_1";	depends = "(HitEngine_L1 + HitEngine_L1)*0.5";  	};
			class HitEngine2 		{armor = 999;	explosionShielding = 0.25; passThrough = 0.01; minimalHit = -0.01;	radius = 0.01; material = -1; name = "hit_engine_r";						visual = "vis_engine_3";	depends = "(HitEngine_R1 + HitEngine_R1)*0.5"; 		};
			class HitFuel 			{armor = -60;	explosionShielding = 0.20; passThrough = 0.01; minimalHit = -0.05;	radius = 0.10; material = -1; name = "hit_fuel_l";							visual = "vis_wing_l";		depends = "0";  									};
			class HitFuel2 			{armor = -60;	explosionShielding = 0.20; passThrough = 0.01; minimalHit = -0.05;	radius = 0.10; material = -1; name = "hit_fuel_r";							visual = "vis_wing_r";		depends = "0";  									};
			class HitLAileron_link 	{armor = -40;	explosionShielding = 0.90; passThrough = 0.01; minimalHit = -0.03;	radius = 0.12; material = -1; name = "hit_aileron_link_l";					visual = "";				depends = "0";  									};
			class HitRAileron_link 	{armor = -40;	explosionShielding = 0.90; passThrough = 0.01; minimalHit = -0.03;	radius = 0.12; material = -1; name = "hit_aileron_link_r";					visual = "";				depends = "0";  									};
			class HitLAileron 		{armor = -40;	explosionShielding = 1.60; passThrough = 0.01; minimalHit = -0.03;	radius = 0.13; material = -1; name = "hit_aileron_l";		armorComponent = "hit_wing_l";				visual = "vis_wing_l";		depends = "HitLAileron_link*0.7";  					};
			class HitRAileron 		{armor = -40;	explosionShielding = 1.60; passThrough = 0.01; minimalHit = -0.03;	radius = 0.13; material = -1; name = "hit_aileron_r";		armorComponent = "hit_wing_r";				visual = "vis_wing_r";		depends = "HitRAileron_link*0.7"; 					};
			class HitControlRear	{armor = -40;	explosionShielding = 0.10; passThrough = 0.01; minimalHit = -0.03;	radius = 0.17; material = -1; name = "hit_control_rear";					visual = "";				depends = "0";  									};
			class HitLCElevator 	{armor = -60;	explosionShielding = 2.00; passThrough = 0.01; minimalHit = -0.03;	radius = 0.12; material = -1; name = "hit_elevator_l";		armorComponent = "hit_elevator_l";				visual = "vis_elevator_l";	depends = "HitControlRear";							};
			class HitRElevator 		{armor = -60;	explosionShielding = 2.00; passThrough = 0.01; minimalHit = -0.03;	radius = 0.12; material = -1; name = "hit_elevator_r";		armorComponent = "hit_elevator_r";				visual = "vis_elevator_r";	depends = "HitControlRear";							};
			class HitLCRudder 		{armor = -70;	explosionShielding = 2.00; passThrough = 0.01; minimalHit = -0.02;	radius = 0.12; material = -1; name = "hit_rudder";			armorComponent = "hit_rudder";				visual = "vis_rudder";		depends = "HitControlRear";							};

			class HitLFWheel 		{armor = 1.00;	explosionShielding = 1.00; passThrough = 0.00; minimalHit = -0.10;	radius = 0.12; material = -1; name = "wheel_1_1";							visual = "wheel_1_1";		depends = "0";										};
			class HitLF2Wheel 		{armor = 1.00;	explosionShielding = 1.00; passThrough = 0.00; minimalHit = -0.10;	radius = 0.12; material = -1; name = "wheel_2_1";							visual = "wheel_2_1";		depends = "0";										};
			class HitLRF2Wheel 		{armor = 1.00;	explosionShielding = 1.00; passThrough = 0.00; minimalHit = -0.10;	radius = 0.12; material = -1; name = "wheel_2_2";							visual = "wheel_2_2";		depends = "0";										};
			class HitLBWheel 		{armor = 1.00;	explosionShielding = 1.00; passThrough = 0.00; minimalHit = -0.10;	radius = 0.12; material = -1; name = "wheel_3_1";							visual = "wheel_3_1";		depends = "0";										};
			class HitRBWheel 		{armor = 1.00;	explosionShielding = 1.00; passThrough = 0.00; minimalHit = -0.10;	radius = 0.12; material = -1; name = "wheel_3_2";							visual = "wheel_3_2";		depends = "0";										};
		};
		#include "mfd.hpp"
		#include "physx.hpp"

		class Turrets: Turrets
		{
			class CopilotTurret: NewTurret
			{
				isCopilot=1;
				primaryGunner=0;
				canEject=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				weapons[]={};
				magazines[]={};

				gunnerAction="RHS_C130_Pilot";
				gunnerInAction="RHS_C130_Pilot";
				gunnerName="$STR_A3_COPILOT";
				gunnerDoor="Door_1";

				gunnerNotSpawned=0;
				gunnerUsesPilotView=1;
				hasGunner=1;
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				class ViewGunner: ViewGunner
				{
					initAngleX 	= -5; 		initAngleY 	= 0;
					VIEW_FOV(FOV_WIDE)
					VIEW_6DOF_DEFAULT_ROTATION
					VIEW_6DOF_LIMITED_TRANSLATION
				};
				commanding=-1;
				gunnerLeftHandAnimName="copilot_control";
				gunnerRightHandAnimName="copilot_control";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				gunnerForceOptics=0;
				turretCanSee=15;
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
							hardLimitStart = 3;
							hardLimitEnd = 3.5;
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
							hardLimitStart = 3;
							hardLimitEnd = 3.5;
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
					class cargo_light_4: cargo_light_1
					{
						position = "cargo_light_4";
						direction = "cargo_light_4_dir";
						hitpoint = "cargo_light_4";
						selection = "cargo_light_4";
					};
				};
				class Hitpoints {};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				AUTHOR_MACRO_BIS_PORT
				textures[]=
				{
					"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
				};
				factions[]=
				{
					rhs_faction_usaf
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
			class door_1 {
				displayName = "Open crew door";
				property = "door_1";
				control = "CheckboxNumber";
				defaultValue = "0";
				expression = "_this animateDoor ['%s',_value,true]";
			};
			class door_2_1: door_1 {
				displayName = "Open left door";
				property = "door_2_1";
			};
			class door_2_2: door_1 {
				displayName = "Open right door";
				property = "door_2_2";
			};
			class Ramp: door_1 {
				displayName = "Open cargo bay";
				property = "Ramp";
				control = "slider";
				expression = "_this animateSource ['%s',_value,true]";
			};
			class hide_cargo: door_1 {
				displayName = "Hide cargo benches";
				property = "hide_cargo";
				expression = "_this animate ['%s',_value,true];for '_i' from 1 to 24 do {_this lockCargo [_i,(_value == 1)]}";
			};
			class rhs_attachCargo: door_1 {
				displayName = "Attach cargo";
				tooltip = "Attaching cargo (using attachTo command) just like when you use ramp action";
				property = "rhs_attachCargo";
				expression = "if(_value == 1)then{[_this] spawn rhs_fnc_cargoAttach}else{{if(not(_x isKindOf 'Man'))then{detach _x}}foreach attachedObjects _this};";
			};
		};
		class VehicleTransport	{
			class Carrier
			{
				cargoBayDimensions[]		= {"VTV_limit_1", "VTV_limit_2_mini"};
				disableHeightLimit			= 0;
				maxLoadMass					= 28000;
				cargoAlignment[]			= {"front", "center"};
				cargoSpacing[]				= {0, 0.1, 0};
				exits[]						= {"VTV_exit_1"};
				unloadingInterval			= 2;
				loadingDistance				= 15;
				loadingAngle				= 60;
				parachuteClassDefault		= B_Parachute_02_F;
				parachuteHeightLimitDefault	= 25;
			};
		};		
	};	
	class RHS_C130J_Cargo_Base: RHS_C130J_Base
	{
		displayname = "C-130J (Cargo)";
		class AnimationSources: AnimationSources
		{
			class  hide_cargo: hide_cargo
			{
				displayName="";
				initPhase = 1;
			};
		};
		transportSoldier = 1;
		class VehicleTransport: VehicleTransport	
		{
			class Carrier: Carrier
			{
				cargoBayDimensions[]		= {"VTV_limit_1", "VTV_limit_2"};
			};
		};	
	};
	class RHS_C130J: RHS_C130J_Base
	{
		AUTHOR_MACRO_BIS_PORT
		scope			= 2;
		side			= 1;
	};
	class RHS_C130J_Cargo: RHS_C130J_Cargo_Base
	{
		AUTHOR_MACRO_BIS_PORT
		scope			= 2;
		side			= 1;
	};
