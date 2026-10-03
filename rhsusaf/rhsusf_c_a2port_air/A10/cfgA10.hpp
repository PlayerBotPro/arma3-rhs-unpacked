
	class RHS_A10: Plane_CAS_01_base_F
	{
		rhs_gearAnim="Gear_1";
		dlc = "RHS_USAF";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_a10.paa";
		scope=2;

		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {0,8,0.27};
		LESH_WheelOffset[] = {0,0};

		category = "Air";
		side=1;
		crew="rhsusf_airforce_jetpilot";
		typicalCargo[]=
		{
			"rhsusf_airforce_jetpilot"
		};

		vehicleClass = "rhs_vehclass_aircraft";
		faction = "rhs_faction_usaf";

		displayName="A-10A";
		AUTHOR_MACRO_BIS_PORT

		model	= "\rhsusf\addons\rhsusf_a2port_air\a10\A10.p3d";
		picture	= "\rhsusf\addons\rhsusf_a2port_air\data\ico\rhs_a10a_pic_ca.paa";
		icon	= "\rhsusf\addons\rhsusf_a2port_air\data\mapico\icon_a10_ca.paa";
		mapSize	= 17;

		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"screen",
			"pip"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsusf\addons\rhsusf_a2port_air\a10\data\a10_01_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air\a10\data\a10_02_co.paa",
			"",
			""
		};
		driverCanEject					= 1;
		ejectDamageLimit				= 1;
		driverCompartments				= 1;
		camouflage						= 10;
		audible							= 6;
		accuracy						= 0.2;
		supplyRadius					= 8;
		LockDetectionSystem				= "8 + 4";
		incomingMissileDetectionSystem	= "8";
		radarType						= 4;
		laserScanner					= 1;
		irScanRangeMin					= 100;
		irScanRangeMax					= 10500;
		irScanToEyeFactor				= 2;
		irScanGround					= 1;
		minFireTime						= 10;
		HeadAimDown						= 0;
		camShakeCoef					= 0.6;
		headGforceLeaningFactor[] 		= {0.005,0.001,0.015};
		allowTabLock					= 0;
		class EjectionSystem {};
		soundLocked[] = {"a3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",db+1,1};

		//Target params definitions
		irTarget			= 1;
		irTargetSize		= 1;
		visualTarget		= 1;
		visualTargetSize	= 1;
		radarTarget			= 1;
		radarTargetSize		= 1;


		unitInfoType			= "RHSUSF_RscUnitInfoJet";
		driverWeaponsInfoType	= "RHSUSF_RscOptics_A10A_TVM";

		driverAction					= "rhs_A10_Pilot";
		driverLeftHandAnimName			= "lever_pilot";
		driverRightHandAnimName			= "stick_pilot";
		driverLeftLegAnimName			= "pedal_l";
		driverRightLegAnimName			= "pedal_r";
		cabinOpening					= 1;
		precisegetinout					= 1;
		memoryPointsGetInDriver			= "pos driver";
		memoryPointsGetInDriverDir		= "pos driver dir";
		memoryPointsGetInDriverPrecise	= "pos driver";

		selectionFireAnim	= "zasleh";
		memoryPointLRocket	= "L Raketa";
		memoryPointRRocket	= "P Raketa";
		memoryPointLDust	= "levy prach";
		memoryPointRDust	= "pravy prach";
		memorypointcm[]		= {"flare_launcher1", "flare_launcher2"};
		memorypointcmdir[]	= {"flare_launcher1_dir", "flare_launcher2_dir"};

		weapons[]=
		{
			rhs_weap_MASTERSAFE,
			RHS_weap_gau8
		};
		//stations numbering created according to this document
		//http://smg.photobucket.com/user/britgliderpilot/media/a-10aloadout.jpg.html
		magazines[]=
		{
			rhs_mag_1150Rnd_30x173_mixed
		};
		threat[]={1,1,1};
		class Turrets {};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "DEFAULT";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov	= __EVAL(0.35/3);
					minFov	= __EVAL(0.35/3);
					maxFov	= __EVAL(0.35/3);
					directionStabilized = 0;
					visionMode[] = {"Ti"};
					thermalMode[] = {0};
					gunnerOpticsModel = "rhsusf\addons\rhsusf_a2port_air\A10\rhs_tvm_3x.p3d";
				};
				class Narrow : Wide
				{
					opticsDisplayName = "ZOOM";
					initFov	= __EVAL(0.35/6);
					minFov	= __EVAL(0.35/6);
					maxFov	= __EVAL(0.35/6);
					gunnerOpticsModel = "rhsusf\addons\rhsusf_a2port_air\A10\rhs_tvm_6x.p3d";
				};
			};
			minElev = -60;
			maxElev = 60;
			initElev = -0;
			minTurn = -60;
			maxTurn = 60;

			maxXRotSpeed = 0.25;
			maxYRotSpeed = 0.25;
			pilotOpticsShowCursor = 0;
			controllable = 1;
		};
		memoryPointDriverOptics = "tvm1";

		//Sensors definition
		class Components
		{
			#include "dynamicloadouts.hpp"
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(4000,4000)

						angleRangeHorizontal = 25;
						angleRangeVertical = 20;
						typeRecognitionDistance = -1;
						groundNoiseDistanceCoef = 0.07;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = 0;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 0;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = 0;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 0.95;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 695;
						animDirection = "PilotCamera_V";
					};

					class LaserSensorComponent : SensorTemplateLaser
					{
						SENS_RANGES_BVR(10000,10000)

						angleRangeHorizontal = 25;
						angleRangeVertical = 20;
						typeRecognitionDistance = -1;
						maxGroundNoiseDistance = 0;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						maxFogSeeThrough = 0.3;
						animDirection = "PilotCamera_V";
					};

					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar{};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					CI_EMPTY
				};
			};

			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					CI_EMPTY
				};
			};
			class ForcedCam
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "VehicleDriverDisplay";
				x = 11;
				y = 11;
				class Components
				{
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
				};
			};
			class TransportCountermeasuresComponent
			{
			};
		};

		class AnimationSources: AnimationSources
		{
			class gatling
			{
				weapon	="RHS_weap_GAU8";
				source	="revolving";
			};
			class muzzle_rot_hmg
			{
				weapon	="RHS_weap_GAU8";
				source	="ammorandom";
			};
			class eject
			{
				source		="door";
				animPeriod	= 0.6;
				initPhase	= 0;
			};
			class eject_hide
			{
				source		="user";
				animPeriod	= 0.6;
				initPhase	= 0;
			};
			class Hide_Monitor
			{
				source		= user;
				animPeriod	= 0.00001;
				initPhase	= 0;
			};
			class tvm_locked: Hide_Monitor {};
			class ind_beacon_source: Hide_Monitor {};
			class throttle_source: Hide_Monitor {animPeriod	= 10;};
			class HitFuel_1_source			{source = hit; hitpoint = HitFuel;};
			class HitFuel_2_source			{source = hit; hitpoint = HitFuel2;};
			class Damper_1_source			{source = damper; wheel = Wheel_1;};
			class Damper_2_source			{source = damper; wheel = Wheel_2;};
			class Damper_3_source			{source = damper; wheel = Wheel_3;};
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source			{source = wheel; wheel = Wheel_3;};
			class mirror_fold
			{
				source		= "user";
				animPeriod	= 0.6;
				initPhase	= 0;
			};

			ANIM_PYLON(1)
			ANIM_PYLON(2)
			ANIM_PYLON(3)
			ANIM_PYLON(4)
			ANIM_PYLON(5)
			ANIM_PYLON(6)
			ANIM_PYLON(7)
			ANIM_PYLON(8)
			ANIM_PYLON(9)
			ANIM_PYLON(10)
			ANIM_PYLON(11)
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_General
				{
					color[]				= {20,30,30};
					ambient[]			= {0,0,0};
					intensity			= 8.05;
					size				= 0;
					useFlare			= 0;
					flareSize			= 0.0;
					flareMaxDistance	= 0;
					dayLight			= 1;
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
					point = "light_general";
				};
			};
		}; // compartmentsLights
		class Reflectors
		{
			class Gear_Light
			{
				color[]			= {70,75,100,1};
				ambient[]		= {1,1,1,0};
				position		= "L svetlo";
				direction		= "konec L svetla";
				hitpoint		= "L svetlo";
				selection		= "L svetlo";
				size			= 1;
				innerAngle		= 20;
				outerAngle		= 50;
				coneFadeCoef	= 3;
				intensity		= 1000;
				useFlare		= 0;
				dayLight		= 1;
				FlareSize		= 4;
				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.15;
					hardLimitStart	= 55;
					hardLimitEnd	= 100;
				};
			};
			class Gear_Light_Flare: Gear_Light
			{
				outerAngle		= 179;
				useFlare		= 1;
				intensity		= 50;
				coneFadeCoef	= 13;
				class Attenuation
				{
					start		= 1;
					constant	= 0;
					linear		= 0;
					quadratic	= 20;
				};
			};
		};
		aggregateReflectors[] = {{Gear_Light},{Gear_Light_Flare}};
		class MarkerLights
		{
			class CollisionRed
			{
				color[]						= {0.8,0,0};
				ambient[]					= {0.09,0,0};
				intensity					= 75;
				name						= "cerveny pozicni";
				drawLight					= 1;
				drawLightSize				= 0.25;
				drawLightCenterSize			= 0.05;
				activeLight					= 0;
				blinking					= 1;
				dayLight					= 0;
				useFlare					= 0;
				blinkingPattern[]			= {0.2,1.3};
				blinkingPatternGuarantee	= 0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class CollisionGreen: CollisionRed
			{
				color[]				={0,0.8,0};
				ambient[]			={0,0.08,0};
				name				= "zeleny pozicni";
				blinkingPattern[]	={0.2,0.9};
			};
			class PositionWhiteTop: CollisionRed
			{
				color[]			={1,1,1};
				ambient[]		={0.1,0.1,0.1};
				name			= "bily pozicni";
				drawLightSize	=0.2;
				blinking		=0;
			};
			class CollisionWhiteRear: CollisionRed
			{
				color[]						={1,1,1};
				ambient[]					={0.1,0.1,0.1};
				name						= "cerveny pozicni blik";
				blinkingPatternGuarantee	=0;
				drawLightSize				=0.25;
				drawLightCenterSize			=0.04;
			};
		};
		class RenderTargets
		{
			class Mirror
			{
				renderTarget = "rendertarget0";

				class CameraView1
				{
					pointPosition		= "PIP_mirror_0";
					pointDirection		= "PIP_mirror_0_dir";
					renderQuality		= 0;
					renderVisionMode	= 0;
					fov					= 1;
				};
				PIP_BB(0)
			};
		};
		damageResistance=0.0048;
		epeImpulseDamageCoef = 1;

//flight model
		maxSpeed						= 834;
		landingAoa						= "rad 10";
		landingSpeed					= 220;
		gearUpTime						= 4.5;
		gearDownTime					= 3;
		angleOfIndicence				= 0.052359872;
		draconicForceXCoef				= 7.2;
		draconicForceYCoef				= 2.6;
		draconicForceZCoef				= 0.15;
		draconicTorqueXCoef				= 1.29;
		draconicTorqueYCoef				= 3.1;
		thrustCoef[]					= {0.91,0.84,0.9,1.3,1.2,1.2,1.1,1,0.93,0.2,0.1,0,0};
		envelope[]						= {0,0.1,0.61,2.2,3.7,4.9,6,5.5,5.8,4.7,3.4,1.8,0};
		aileronControlsSensitivityCoef	= 3;
		elevatorControlsSensitivity		= 2;
		rudderControlsSensitivityCoef	= 4;
		elevatorCoef[]					= {0.7,0.9,0.55,0.4,0.39,0.3,0.3};
		aileronCoef[]					= {0.6,1,0.97,0.9,0.85,0.87,0.75};
		rudderCoef[]					= {0.7,1,1,0.9,0.82,0.73,0.6};
		brakeDistance					= 85;
		aileronSensitivity				= 0.75;
		elevatorSensitivity				= 1.9;
		wheelSteeringSensitivity		= 1.6;
		flapsFrictionCoef				= 0.6;
		airFriction0[]					= {100,60,12};
		airFriction1[]					= {100,60,12};
		airFriction2[]					= {100,60,12};

		class TransportMagazines {
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,4);
			mag_xx(rhs_mag_m18_green,2);
			mag_xx(rhs_mag_m18_yellow,2);
			mag_xx(rhs_mag_m18_red,2);
			mag_xx(rhs_mag_m18_purple,2);
			mag_xx(rhs_mag_an_m8hc,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,2);
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName="BodyVortices";
				position="body_vapour_L_S";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="body_vapour_R_S";
			};
		};
		attenuationEffectType="HeliAttenuation";
		class Damage
		{
			tex[]=
			{
				"rhsusf\addons\rhsusf_a2port_air\a10\data\rhs_a10_warning_lights_off_ca.paa",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\rhs_a10_warning_lights_ca.paa"
			};
			mat[]=
			{
				"rhsusf\addons\rhsusf_a2port_air\a10\data\a10_skla.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\a10_skla_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\a10_skla_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\a10_cockpit_glass_in.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\a10_cockpit_glass_in_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\a10_cockpit_glass_in_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\A10_01.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\A10_01_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\A10_01_destruct.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\A10_02.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\A10_02_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\A10_02_destruct.rvmat"
			};
		};
		class Library
		{
			libEnable=1;
			libTextDesc="The Fairchild Republic A-10 Thunderbolt II is an American twin/single-seat, twin-engine, straight-wing jet aircraft developed by Fairchild-Republic in the early 1970s. The A-10 was designed around the GAU-8 Avenger, a rotary cannon that is the airplane's primary armament and the heaviest such cannon mounted on an aircraft. The A-10's airframe was designed for survivability, with protective measures such as 1,200 pounds (540 kg) of armor to enable the aircraft to continue flying after taking significant damage.";
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		armor			= 60;
		armorStructural	= 2;
		class Hitpoints
		{
			class HitHull 			{armor = 999;	explosionShielding = 0.00; passThrough = 0.01; minimalHit = 1.00;	radius = 0.15; material = -1; name = "hit_hull";			visual = "-";				depends = "Total";  								};
			class HitAvionics 		{armor = 0.20;	explosionShielding = 0.60; passThrough = 0.01; minimalHit = 0.10;	radius = 0.08; material = -1; name = "hit_avionics";		visual = "vis_avionics";	depends = "0";  									};
			class HitEngine 		{armor = 0.50;	explosionShielding = 0.25; passThrough = 0.20; minimalHit = 0.01;	radius = 0.07; material = -1; name = "hit_engine_l";		visual = "vis_engine_l";	depends = "0";  									};
			class HitEngine2 		{armor = 0.50;	explosionShielding = 0.25; passThrough = 0.20; minimalHit = 0.01;	radius = 0.07; material = -1; name = "hit_engine_r";		visual = "vis_engine_r";	depends = "0"; 										};
			class HitFuel 			{armor = 1.00;	explosionShielding = 0.20; passThrough = 0.10; minimalHit = 0.10;	radius = 0.10; material = -1; name = "hit_fuel";			visual = "vis_fuel";		depends = "0";  									};
			class HitFuel_left 		{armor = 0.50;	explosionShielding = 0.70; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_fuel_wing_l";		visual = "vis_wing_l";		depends = "0";  									};
			class HitFuel_right 	{armor = 0.50;	explosionShielding = 0.70; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_fuel_wing_r";		visual = "vis_wing_r";		depends = "0";  									};
			class HitFuel2 			{armor = 999;	explosionShielding = 0.00; passThrough = 0.10; minimalHit = 1.00;	radius = 0.01; material = -1; name = "hit_fuel";			visual = "-";				depends = "(HitFuel_left+HitFuel_right)*0.5";  		};
			class HitLAileron_link 	{armor = 0.60;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_aileron_link_l";	visual = "-";				depends = "0";  									};
			class HitRAileron_link 	{armor = 0.60;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_aileron_link_r";	visual = "-";				depends = "0";  									};
			class HitLAileron 		{armor = 0.60;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; material = -1; name = "hit_aileron_l";		visual = "vis_wing_l";		depends = "HitLAileron_link*0.7";  					};
			class HitRAileron 		{armor = 0.60;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; material = -1; name = "hit_aileron_r";		visual = "vis_wing_r";		depends = "HitRAileron_link*0.7"; 					};
			class HitControlRear	{armor = 0.60;	explosionShielding = 0.10; passThrough = 0.10; minimalHit = 0.10;	radius = 0.17; material = -1; name = "hit_control_rear";	visual = "-";				depends = "0";  									};
			class HitLCElevator 	{armor = 0.60;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_elevator_l";		visual = "vis_elevator_l";	depends = "HitControlRear";							};
			class HitRElevator 		{armor = 0.60;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_elevator_r";		visual = "vis_elevator_r";	depends = "HitControlRear";							};
			class HitLCRudder 		{armor = 0.70;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.02;	radius = 0.12; material = -1; name = "hit_rudder_l";		visual = "vis_rudder_l";	depends = "HitControlRear";							};
			class HitRRudder 		{armor = 0.70;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.02;	radius = 0.12; material = -1; name = "hit_rudder_r";		visual = "vis_rudder_r";	depends = "HitControlRear";							};
			class HitGlass1 		{armor = 0.60;	explosionShielding = 0.70; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "glass_1";				visual = "glass_1";			depends = "0";										};

			class WarningElevator 	{armor = 9999;	explosionShielding = 0.00; passThrough = 0.00; minimalHit = 1.00;	radius = 0.00; material = -1; name = "hit_elevator_r";		visual = "ind_elevator";	depends = "HitLCElevator+HitRElevator";				};
			class WarningAileron 	{armor = 9999;	explosionShielding = 0.00; passThrough = 0.00; minimalHit = 1.00;	radius = 0.00; material = -1; name = "hit_elevator_r";		visual = "ind_aileron";		depends = "HitLAileron+HitRAileron";				};

			HP_PYLON(1,0.7)
			HP_PYLON(2,0.7)
			HP_PYLON(3,0.7)
			HP_PYLON(4,0.7)
			HP_PYLON(5,0.7)
			HP_PYLON(6,0.7)
			HP_PYLON(7,0.7)
			HP_PYLON(8,0.7)
			HP_PYLON(9,0.7)
			HP_PYLON(10,0.7)
			HP_PYLON(11,0.7)
		};

		class UserActions
		{
			class SAFEMODE {
				displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
				condition = "(call rhsusf_fnc_findPlayer) in this";
				statement = "(call rhsusf_fnc_findPlayer) action ['SwitchWeapon', this, (call rhsusf_fnc_findPlayer), -1];";
				position = "";
				radius = 10;
				priority = 10.5;
				onlyforplayer = 1;
				showWindow = 0;
				shortcut="user13";
				hideOnUse = 1;
			};
			class Toggle_LandingMode {
				displayName = "Toggle Landing Mode";
				condition = "(call rhsusf_fnc_findPlayer) in this && currentWeapon this == ''";
				statement = "this setUserMFDvalue [4, abs(((getUserMFDvalue this) select 4)-1)]";
				position = "";
				radius = 10;
				priority = 10.5;
				onlyforplayer = 1;
				showWindow = 0;
				shortcut="user14";
				hideOnUse = 1;
			};
			class Mirrors {
				displayName		= "<t color='#FBB829'>Toggle mirrors</t>";
				position		= "";
				radius			= 10;
				priority		= 10.5;
				onlyforplayer	= 1;
				showWindow		= 0;
				hideOnUse		= 1;
				condition		= "(call rhs_fnc_findPlayer) in this";
				shortcut		= "";
				statement		= "this animateSource ['mirror_fold',abs((this animationSourcePhase 'mirror_fold') -1)]";
			};
		};
		class EventHandlers : EventHandlers
		{
			hit = "";
			class RHSUSF_EventHandlers
			{
				hit		= "_this call RHS_fnc_AI_eject";
				postInit = "_this call rhs_fnc_reapplyTextures";
				getout	= "[_this select 0, _this select 2,'rhs_a10_canopy'] call rhs_fnc_ACESII_seatEjection";
				engine	= "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes;";
			};
		};
		defaultUserMFDvalues[] = {0.15, 1.0, 0.15,1,0};
		class MFD
		{
			class AirplaneHUD
			{
				#define PosX0Center 0.498
				#define PosY0Center 0.485
				#define PosYCenterHorizont 0.48
				#define PosY0CenterAdjust 0.13
				#define SizeX10deg (0.658+0.1) //0.94+0.03
				#define SizeY10deg (0.825+0.1) //1.3-0.2
				#define SizeX10degHorizon 0.684*1.8
				#define SizeY10degHorizon 0.780*1.8
				#include "cfgHUD_A10A.hpp"
			};
			#include "cfgMFD_A10A.hpp"
		};
		#include "physx.hpp"
	};
	class RHS_A10_AT: RHS_A10
	{
		scope = 1;
		scopecurator = 2;
		AUTHOR_MACRO_BIS_PORT
		displayName="A-10A (AT)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_A10_AT.paa";
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_ANALQ131";};
					class pylon2: pylon2 {attachment = "rhs_mag_FFAR_7_USAF";};
					class pylon3: pylon3 {attachment = "rhs_mag_agm65d_3";};
					class pylon4: pylon4 {attachment = "rhs_mag_gbu12";};
					class pylon5: pylon5 {attachment = "rhs_mag_gbu12";};
					class pylon6: pylon6 {attachment = "";};
					class pylon7: pylon7 {attachment = "rhs_mag_gbu12";};
					class pylon8: pylon8 {attachment = "rhs_mag_gbu12";};
					class pylon9: pylon9 {attachment = "rhs_mag_agm65d_3";};
					class pylon10: pylon10 {attachment = "rhs_mag_FFAR_7_USAF";};
					class pylon11: pylon11 {attachment = "rhs_mag_Sidewinder_2";};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};
	class RHS_A10_CBU: RHS_A10
	{
		scope = 1;
		scopecurator = 2;
		AUTHOR_MACRO_BIS_PORT
		displayName="A-10A (Cluster)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_A10_AT.paa";
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_ANALQ131";};
					class pylon2: pylon2 {attachment = "rhs_mag_FFAR_7_USAF";};
					class pylon3: pylon3 {attachment = "rhs_mag_agm65d";};
					class pylon4: pylon4 {attachment = "rhs_mag_cbu87";};
					class pylon5: pylon5 {attachment = "rhs_mag_cbu87";};
					class pylon6: pylon6 {attachment = "";};
					class pylon7: pylon7 {attachment = "rhs_mag_cbu87";};
					class pylon8: pylon8 {attachment = "rhs_mag_cbu87";};
					class pylon9: pylon9 {attachment = "rhs_mag_agm65d";};
					class pylon10: pylon10 {attachment = "rhs_mag_FFAR_7_USAF";};
					class pylon11: pylon11 {attachment = "rhs_mag_Sidewinder_2";};
					class cmDispenser: cmDispenser	{};
				};
			};
		};
	};
	class Car_F;
	class rhs_a10_acesII_seat: Car_F
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		hiddenSelections[]={};

		AUTHOR_MACRO_BIS_PORT
		displayName="Aces II Ejection Seat";

		Icon	= "iconParachute";
		picture	= "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		model	= "\rhsusf\addons\rhsusf_a2port_air\A10\acesII.p3d";

		simulation 					= "motorcycle";
		isBicycle	 				= 0;
		textureTrackWheel 			= "";
		memoryPointTrack1L 			= "";
		memoryPointTrack2L 			= "";
		memoryPointsGetInCargo		= "Cargo";
		memoryPointsGetInCargoDir	= "Cargo dir";
		ejectSpeed[]				= {1, 0, 1};
		unitInfoType				= "RscUnitInfoSoldier";
		hideUnitInfo				= 1;
		cargoAction[]				= {"rhs_A10_Pilot"};
		hasdriver					= 0;
		weapons[]					= {};
		magazines[]					= {};
		fuelCapacity				= 0;
		secondaryExplosion			= 0;
		fuelExplosionPower			= 0;
		explosionEffect				= "";
		destrType					= "DestructNo";
		castCargoShadow				= 1;
		transportSoldier			= 1;
		vehicleClass				= "Objects";
		occludeSoundsWhenIn			= 1;
		obstructSoundsWhenIn		= 1;
		class AnimationSources
		{
			class hide_booster
			{
				source="user";
				animPeriod = 0.6;
				initPhase = 0;
			};
		};
		class Turrets {};
		class UserActions {};
		driveOnComponent[]={};
		class Eventhandlers {};
		SLX_XEH_DISABLED = 1;
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class rhs_a10_canopy : ThingX {
		scope				= 1;
		scopeArsenal		= 0;
		scopeCurator		= 0;
		displayName			= "A-10 Canopy";
		editorCategory		= "EdCat_Things";
		editorSubcategory	= "EdSubcat_Military";
		vehicleClass		= "Small_items";
		model				= "\rhsusf\addons\rhsusf_a2port_air\A10\a10_canopy.p3d";
		armor				= 100;

		memoryPointsGetInCargo		= "Cargo";
		memoryPointsGetInCargoDir	= "Cargo dir";
		ejectSpeed[]				= {1, 0, 1};
		gearsUpFrictionCoef			= 0.01;
		unitInfoType				= "RscUnitInfoSoldier";
		hideUnitInfo				= 1;
		cargoAction[]				= {"rhs_A10_Pilot"};
		hasdriver					= 0;
		weapons[]					= {};
		magazines[]					= {};
		fuelCapacity				= 0;
		secondaryExplosion			= 0;
		fuelExplosionPower			= 0;
		explosionEffect				= "";
		destrType					="DestructNo";
		castCargoShadow				=1;
		transportSoldier			=0;
		occludeSoundsWhenIn			=1;
		obstructSoundsWhenIn		=1;
		class Eventhandlers
		{
			HandleDamage = "deleteVehicle (_this select 0)";
		};
		class UserActions {};
		driveOnComponent[]={};
		SLX_XEH_DISABLED = 1;
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};