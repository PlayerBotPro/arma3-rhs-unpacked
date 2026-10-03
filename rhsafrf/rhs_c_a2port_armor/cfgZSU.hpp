
	class rhs_zsutank_base: APC_Tracked_02_base_F
	{
		dlc = "RHS_AFRF";
		rhs_decalParameters[]={
			"['Number',cRHSZSUNumberPlaces,'Default']"
		};

		category = "Armored";

		#include "physX_ZSU.hpp"

		// from tut
		author = "RHS";

		vehicleClass = "rhs_vehclass_aa";
		editorSubcategory = "rhs_EdSubcat_aa";

		displayName = "$STR_RHS_ZSU_Name";
		accuracy = 0.3;
		destrType=DestructDefault;

		model = "\rhsafrf\addons\rhs_a2port_armor\rhs_zsu";
		picture = "\rhsafrf\addons\rhs_a2port_armor\pictures\rhs_zsu23_pic_ca.paa";
		Icon = "\rhsafrf\addons\rhs_a2port_armor\data\icomap_zsu_CA.paa";
		crew = "rhs_msv_crew";
		typicalCargo[] = {};
		side = 0;
		faction = "rhs_faction_tv";
		tracksSpeed = 1;

		//Target params definitions
		irTarget				= 1;
		irTargetSize			= 1;

		visualTarget			= 1;
		visualTargetSize		= 1;

		radarTarget				= 1;
		radarTargetSize			= 1.2;

		receiveRemoteTargets	= 1;

		// AI references
		cost					= 1500000;
		damageResistance		= 0.02;
		crewVulnerable			= 1;

		drivercompartments		= "Compartment1";
		getInAction				= "GetInLow";
		getOutAction			= "GetOutLow";
		driverAction			= "RHS_ZSU_Driver";
		driverInAction			= "RHS_ZSU_Driver";
		driverDoor				= "hatchD";
		forceHideDriver			= 0;
		driverForceOptics		= 1;
		viewDriverInExternal	= 1;
		LODDriverOpticsIn		= 0;
		LODDriverOpticsOut		= 0;
		LODDriverTurnedIn		= 0;
		LODDriverTurnedOut		= 0;

		unitInfoType = "RHS_RscUnitInfoEastTank";
		mapSize = 6.5;
		commanderCanSee = 31;
		gunnerCanSee = "1+16+4+8";

		threat[]={0.5,0.5,1};
		//up to 20km irl
		irScanGround=0;
		irScanRangeMax = 19000;
		radarType = 4;
		incomingMissileDetectionSystem = 0;

		driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";

		// Damage setup
		armor = 200;
		armorStructural=600;

		class ViewOptics: ViewOptics
		{
			initFov         = 0.7;
			minFov          = 0.7;
			maxFov          = 0.7;
		};
		class HitPoints: HitPoints {
			class HitHull: HitHull {
				armor=0.45;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=0;
				minimalHit = 0.14;
				explosionShielding=0.5;
				radius = 0.25;
			};
			class HitEngine
			{
				armor = 0.45;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.01;
				minimalHit = 0.03;
				explosionShielding=0.05;
				radius = 0.2;
				class DestructionEffects {
					ammoExplosionEffect = "";

					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = SmallWreckSmoke;
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = SmallFireFPlace;
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = RHS_FireSparks;
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = WeaponWreckSmoke;
						//type = "CraterSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke
					{
						position = "engine_smoke4";
					};
					class RHS_Engine_Fire2: RHS_Engine_Smoke_small3
					{
						type = SmallFireFPlace;
					};
					class RHS_Engine_Sparks2: RHS_Engine_Smoke_small3
					{
						type = RHS_FireSparks;
					};
				};
			};
			class HitLTrack: HitLTrack {
				armor=0.5;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit = 0.15;
				explosionShielding=0.5;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack {
				armor=0.5;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit = 0.15;
				explosionShielding=0.5;
				radius = 0.3;
			};
		};
		class RenderTargets {};

		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "rhs_30Rnd_545x39_7N10_AK";
				count = "10";
			};
			class _xx_HandGrenade_East
			{
				magazine = "rhs_mag_rgd5";
				count = "10";
			};
			//it should be signal pistol rounds
			class _xx_signal_rounds
			{
				magazine = "rhs_mag_nspn_red";
				count = "10";
			};
		};
		class TransportWeapons
		{
			class _xx_AK74M
			{
				weapon = "rhs_weap_ak74m";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};

		hiddenSelections[] = {"camo1","camo2","camo3",
			"n1",
			"n2",
			"n3"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_co.paa","\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};

		class textureSources
		{
			class standard
			{
				displayName="Standard";
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_co.paa",
					"\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_co.paa",
					"\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vpvo
				};
			};
			class Chdkz
			{
				displayName="Chedaki";
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_gue_co.paa",
					"\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_gue_co.paa",
					"\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_gue_co.paa"
				};
				factions[]={};
			};
			class rhs_sand
			{
				displayName="Sand";
				author = "beaar";
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa",
					"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa",
					"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa"
				};
				factions[]={};
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
				displayName = "Define font type of plate number";
				tooltip = "Define kind of font that will be drawn on vehicle.";
				property = "rhs_decalNumber_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value,true];[_this,[['Number', cRHSZSUNumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue = 0;
				typeName = "STRING";
				class values {
					class Default {
						name = "Default";
						value = "Default";
						defaultValue = "Default";
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
					class LicensePlate {
						name = "License Plate";
						value = "LicensePlate";
					};
				};
			};
			class rhs_decalNumber {
				collapsed = 1;
				displayName = "Set side number";
				tooltip = "Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property = "rhs_decalNumber";
				control = "Edit";
				validate = "Number";
				typeName = "Number";
				defaultValue = "-1";
				expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSZSUNumberPlaces}else{[_this, [['Number', cRHSZSUNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
		};


		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//commander
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						body = "ObsTurret";
						gun = "ObsGun";
						gunnerOutOpticsModel = "";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics= "commanderview";
						LODTurnedOut = 1100;
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
						weapons[] = {};
						magazines[] = {};
						turretInfoType="RscWeaponEmpty";
						forceHideGunner = 0;
						gunnerInAction = "RHS_ZSU_Commander";
						gunnerAction = "RHS_ZSU_CommanderOut";
						gunnerDoor="hatchC";
						gunnerForceOptics = 1;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
						minElev = -10;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						class ViewOptics: ViewOptics
						{
							initFov = 0.111;
							minFov = 0.111;
							maxFov = 0.111;
							visionMode[] = {"Normal","NVG"};
						};
						startEngine = 0;
						outGunnerMayFire = 0;
						maxHorizontalRotSpeed = 2;
						maxVerticalRotSpeed = 2;
						inGunnerMayFire = 1;
						viewGunnerInExternal = 1;
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
								gunnerOutOpticsModel = "";
							};
							class Periscope: ViewOptics
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=+30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=+100;
								initFov = 0.26;
								minFov = 0.26;
								maxFov =0.26;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
							};

						};

						class Components
						{
							class AICarSteeringComponent
							{
								//diag_setAIDrivingParams [1.2,0.1,0.2,0.7,0.3,0.1,0.15]
								// controls working parameters of steering PID controller (Kp, Ki, Kd)
								steeringPIDWeights[] = { 1.2, 0.1, 0.2 };
								// controls working parameters of speed PID controller (Kp, Ki, Kd)
								speedPIDWeights[] = { 1.7,1.3,1.1 };

								// remapping of maxSpeed of vehicle, for fast vehicles we want to lower the used speed
								doRemapSpeed = true;
								remapSpeedRange[] = { 40.0, 50.0 };
								remapSpeedScalar[] = { 1.0, 0.35 };

								// prediction ahead is used for both steering and analysing of shape to modify the speed
								doPredictForward = true;
								predictForwardRange[] = { 0.1, 20 };
								// steer ahead is a point to steer to, saturated down to given range, in meters
								steerAheadSaturation[] = { 0.01, 0.4 };

								// set method of predicting safe speed

								speedPredictionMethod = 1;
								// 0 - three angles method
								// 1 - wheel direction method
								// 2 - combined method
								// three coef's to determine how much given angle should influence slowing down
								wheelAngleCoef = 0.7;
								forwardAngleCoef = 0.7;
								steeringAngleCoef = 1.0;
								differenceAngleCoef = 1.0;

								// for how long we allow to be not moving, before we consider us stuck
								stuckMaxTime = 3.0;

								// overtaking is part of collision avoidance
								allowOvertaking = true;
								allowCollisionAvoidance = true;
								// allow using movement vector as direction
								allowDrifting = false;

								// parameters of predictionMethod = 1
								maxWheelAngleDiff = 0.2616;
								minSpeedToKeep = 0.1;

								// how strong AI will turn when commanded left/right
								commandTurnFactor = 1.0;
							};
							class VehicleSystemsDisplayManagerComponentLeft : VehicleSystemsTemplateLeftCommander
							{
								class Components
								{
									CI_EMPTY
									CI_CREW
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = { 2000,4000,8000,14000 };
										resource = "RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight : VehicleSystemsTemplateRightCommander
							{
								defaultDisplay = "SensorDisplay";
								class Components
								{
									CI_EMPTY
									CI_CREW
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = { 2000,4000,8000,14000 };
										resource = "RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};

				//gunner
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : VehicleSystemsTemplateLeftGunner
					{
						class Components
						{
							CI_EMPTY
							CI_CREW
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 2000,4000,8000,16000 };
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight : VehicleSystemsTemplateRightGunner
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							CI_EMPTY
							CI_CREW
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = { 2000,4000,8000,16000 };
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};

				LODTurnedOut = 1100;
				weapons[] = {"RHS_weap_AZP23"};
				magazines[] = {
					"rhs_mag_AZP23_2000"
				};
				forceHideGunner = 0;
				minElev = -4.5;
				maxElev = 85;
				minTurn = -360;
				maxTurn = 360;
				maxHorizontalRotSpeed = 0.94;	// 1 = 45?/sec
				maxVerticalRotSpeed = 0.6;		// 1 = 45?/sec

				class OpticsIn
				{
					class Wide: ViewOptics
					{
						VEHICLE_ZOOM_LEVEL(2)
						gunnerOpticsModel = "\rhsafrf\addons\rhs_a2port_armor\2Dscope_RUAA8";
						gunnerOutOpticsModel = "";
						visionMode[] = {"Normal"};
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
					class Auto: Wide
					{
						VEHICLE_ZOOM_LEVEL(4)
						directionStabilized = true;
					};
				};
				gunnerAction = "RHS_ZSU_GunnerOut";
				gunnerInAction = "RHS_ZSU_Gunner";
				gunnerForceOptics = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
					visionMode[] = {"Normal","NVG"};
				};
				gunnerDoor="hatchG";
				memoryPointGun[] = {"chase01","chase02","chase03","chase04"};
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				selectionFireAnim = "zasleh";
				viewGunnerInExternal = 1;
				class HitPoints {
					class HitTurret	{
						armor = 0.5;
						material = -1;
						name = "vez";
						visual="vez";
						passThrough = 0;
						minimalHit = 0.14;
						explosionShielding=0.001;
						radius = 0.2;
					};
					class HitGun	{
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual="-";
						passThrough = 0;
						minimalHit = 0.13;
						explosionShielding=0.001;
						radius = 0.2;
					};
				};
			};
		};

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_01.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_01_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_01_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_02.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_02_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_02_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_03.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_03_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_03_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_track.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_track_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\ZSU_track_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class HatchC
			{
				source		= "door";
				animPeriod	= 2.1;
			};
			class HatchG: HatchC {};
			class HatchD: HatchC {};
			class muzzle_rot1
			{
				weapon = "RHS_weap_AZP23";
				source="ammorandom";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] 	= {190, 130, 95};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size 		= 1;
				innerAngle 	= 100;
				outerAngle 	= 179;
				coneFadeCoef = 10;
				intensity 	= 1; //17.5
				useFlare 	= 0;
				dayLight 	= 0;
				flareSize 	= 1.0;
				class Attenuation {
					start 		= 1.0;
					constant 	= 0;
					linear 		= 0;
					quadratic 	= 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {{"Left","Right"}};


		class Exhausts {
			class Exhaust1 {
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankBack";
			};
		};

		//Sensors definition
		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 14000;
							maxRange = 14000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};

						class GroundTarget      // ranges for targets with ground background
						{
							minRange = -1;
							maxRange = -1;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};

						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						typeRecognitionDistance = 4000;
						groundNoiseDistanceCoef = 0.05;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = 60;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 20;        // target speed in km/h above which the target will start to become visible
						maxSpeedThreshold = 90;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxFogSeeThrough = 1;
						aimDown = -35;
						minTrackableSpeed = 25;
						maxTrackableSpeed = 555;
						minTrackableATL = 50;
					};
				};
			};
		};


		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_bmp3_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
				getOut = "_this call rhs_fnc_hatchAbandon";
				engine = "_this call rhs_fnc_engineCheckDamage;";
			};
		};
	};

	class rhs_zsu234_aa: rhs_zsutank_base
	{
		EdPrev(rhs_zsu234_aa)
		author = "RHS";
		scope = 2;
		displayName = "$STR_RHS_ZSU_Name";
		faction = "rhs_faction_vpvo";

		vehicleClass = "rhs_vehclass_aa";
		editorSubcategory = "rhs_EdSubcat_aa";
	};
