
	class RHS_UH1_Base: Heli_Light_03_base_F
	{
		dlc = "RHS_USAF";
		rhs_hasNoRadar=1;

		category = "Air";
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

		//Target params definitions
		irTarget = 1;
		irTargetSize = 0.9;

		visualTarget = 1;
		visualTargetSize = 1;

		radarTarget = 1;
		radarTargetSize = 1;

		LockDetectionSystem = "4 + 8"; //AVR-2A
		incomingMissileDetectionSystem = "2 + 8 + 16";

		gearRetracting=0;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		helmetMountedDisplay=0;
		cargoCanEject=1;
		driverCanEject=0;
		class MFD
		{
		};
		class pilotCamera {};
		unitInfoType = "RHSUSF_RscUnitInfoAir_UH1Y";
		unitInfoTypeRTD = "RHSUSF_RscUnitInfoAirRTDFullDigital_UH1Y";
		vehicleClass = "rhs_vehclass_helicopter";

		weapons[]= {};
		magazines[]= {};

		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		selectionDamage="trup";
		selectionShowDamage="poskozeni";

		slingLoadMaxCargoMass = 4084;

		memoryPointLRocket="l raketa";
		memoryPointRRocket="p raketa";
		memoryPointLMissile="l strela";
		memoryPointRMissile="p strela";

		GetInAction="pilot_Heli_Light_02_Enter";
		GetOutAction="pilot_Heli_Light_02_Exit";
		preciseGetInOut=1;
		getInRadius = 1.5;
		class RenderTargets {};
		class ViewPilot: ViewPilot
		{
			initFov = 0.75;
			minFov = 0.3;
			maxFov = 1.2;
		};
	};
	class RHS_UH1Y_base: RHS_UH1_Base
	{
		scope=0;
		model="\rhsusf\addons\rhsusf_a2port_air2\UH1Y\UH1Y.p3d";
		displayName="UH-1Y (MG)";
		helmetMountedDisplay=0;
		picture="\rhsusf\addons\rhsusf_a2port_air\data\ico\rhs_uh1y_pic_ca.paa";
		icon="\rhsusf\addons\rhsusf_a2port_air2\data\mapico\Icon_UH1Y_CA.paa";
		mapSize=15;
		class MFD {};
		class Library
		{
			libTextDesc = "The UH-1Y Venom is an American medium-size multipurpose utility army helicopter. It is equipped with two external Mk66 70 mm rocket stations and two M240D 7.62 mm machine guns.<br />The UH-1Y is able to carry up to 3 tons of cargo or up to 10 passengers. It can provide close air support missions as well as transportation or reconnaissance.";
		};
		crew="rhsusf_army_ocp_helipilot";
		typicalCargo[]=
		{
			"rhsusf_army_ocp_helicrew",
			"rhsusf_army_ocp_helicrew"
		};
		fuelCapacity=600;
		maxSpeed=295;
		cyclicAsideForceCoef = 1;
		cyclicForwardForceCoef = 0.9;
		mainRotorSpeed=1.2;
		backRotorSpeed=6.1;
		driverDoor="doorR";
		mainBladeRadius = 7.00;
		memoryPointsGetInDriver="pos Driver";
		memoryPointsGetInDriverDir="pos gunner dir";
		memoryPointsGetInDriverPrecise="pos driver";
		memoryPointsGetInGunner="pos gunner";
		memoryPointsGetInGunnerDir="pos gunner dir";

		transportSoldier=1;
		cargoProxyIndexes[] = {5};
		getInProxyOrder[] = {1,2,3,4,5,6,7};
		memoryPointsGetInCargo[]=
		{
			"pos cargo L"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo L dir"
		};
		cargoDoors[]=
		{
			DoorLB
		};

		cargoIsCoDriver[]={0};
		threat[]={0.8,0.1,0.3};
		gunnerCanSee = 2+4+8+16;
		driverCanSee = 2+4+8+16;

		class TransportMagazines
		{
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,12);
			mag_xx(rhs_mag_m67,4);
			mag_xx(rhs_mag_m18_green,2);
			mag_xx(rhs_mag_m18_red,2);
			mag_xx(rhs_mag_an_m8hc,4);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,2);
		};

		class TransportWeapons {
			weap_xx(rhs_weap_m4_carryhandle,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_Parachute,4);
		};

		radarType=0;
		attenuationEffectType="HeliAttenuation";

		occludeSoundsWhenIn=0.56234133;
		obstructSoundsWhenIn=0.31622776;
		driverInAction="RHS_UH1Y_Pilot";
		driverAction="RHS_UH1Y_Pilot";
		cargoAction[]=
		{
			"RHS_UH1Y_Cargo02",
			"RHS_UH1Y_Cargo03",
			"RHS_UH1Y_Cargo03",
			"RHS_UH1Y_Cargo02",
			"RHS_UH1Y_Cargo01"
		};
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
				position="svetlo";
				direction="svetlo konec";
				hitpoint="svetlo";
				selection="svetlo";
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
		armor=30;
		armorStructural = 20;
		hullDamageCauseExplosion = 1;
		hullExplosionDelay[] = {10, 20};
		damageResistance=0.001;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				simulation		= RHS_Hull_Helicopter;
				armor			= -120;
				minimalHit		= -0.1;
				radius			= 0.2;
				name			= "hull_hit";
				armorComponent	= "Hit_Hull";
				visual			= "zbytek";
				passThrough		= 1;
				class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
			};
			class HitAvionics: HitAvionics
			{
				visual="-";
			};
			class HitEngine1: HitEngine1
			{
				armor				= -80;
				radius				= 0.18;
				explosionShielding	= 0.7;
				minimalHit			= -0.05;
				name				= "engine_1_hit";
				armorComponent 		= Hit_Engine_1;
			};
			class HitEngine2: HitEngine1
			{
				name			= "engine_2_hit";
				armorComponent 	= Hit_Engine_2;
			};
			class HitEngine: HitEngine2
			{
				armor			= 999;
				name			= "engine_hit";
				depends			= "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitTail 		{armor = -80;	explosionShielding = 3.0; passThrough = 0.5; minimalHit = -0.2;	radius = 0.3; 	 armorComponent = "Hit_Tail"; name = "tail_rotor_hit";visual = "Vis_Tail";simulation = RHS_Hull_Helicopter;};
			class HitVRotor
			{
				armor			= 3;
				armorComponent	= Hit_Rotor_Rear;
				name="mala vrtule";
				visual			= "mala vrtule staticka";
				passThrough		= 0.5;
				radius			= 0.18;
				depends = "HitTail";
			};
			class HitHRotor
			{
				armor			= 4;
				armorComponent	= Hit_Rotor_Main;
				name			= "velka vrtule";
				visual			= "velka vrtule staticka";
				passThrough		= 0.0;
				radius			= 0.28;
			};
			class HitFuel : HitHull {
				armor = 3;
				explosionShielding = 4;
				name = "fuel_hit";
				passThrough = 0.5;
				visual = "fuel_hit";
				radius = 0.2;
				minimalHit = 0.05;
			};
			class HitGlass7:HitGlass1 {name = "glass7";visual="glass7";};

			HP_PYLON(1,0.7)
			HP_PYLON(2,0.7)
		};
		class AnimationSources: AnimationSources
		{
			class cargolights_hide
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
			};
			class cabinlights_hide: cargolights_hide {};
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
			class DoorRB: DoorL {
				source="user";
				animPeriod=1.5;
				initPhase = 1;
				sound = "MetalOldBigDoorsSound";
				soundPosition = "doorRB_axis";
			};
			class DoorLB: DoorRB {
				soundPosition = "doorLB_axis";
			};
			class doorHandler_L: DoorL
			{
				source="user";
				animPeriod=0.0001;
			};
			class doorHandler_R: doorHandler_L {};
			class pip1_on: doorHandler_L {};
			class pip2_on: pip1_on {};
			class hide_rockets: pip1_on
			{
				//magazines have their own weight
				mass=-50;
			};
			class hide_mg: hide_rockets
			{
				displayName="hide MG";
				mass=-120;
			};
			class hide_FrontDoors: hide_rockets
			{
				displayName="hide front doors";
				initPhase = 0;
				mass=-100;
			};
			class hide_CargoDoors: hide_FrontDoors
			{
				displayName			= "hide cargo doors";
				mass				= -200;
				forceAnimatePhase	= 1;
				forceAnimate[]		= {"DoorRB",1,"DoorLB",1,"doorhandler_L",1,"doorhandler_R",1};
			};
			class HUDAction
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class HUDAction_1: HUDAction
			{
				animPeriod = 0.1;
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
			class HitGlass1;
			class HitGlass7: HitGlass1 {hitpoint="HitGlass7";};

			ANIM_PYLON(1)
			ANIM_PYLON(2)
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{

				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_sklo.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_sklo_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_sklo_damage.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_sklo_in.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_sklo_in_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_sklo_in_damage.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_ext.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_ext_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_ext_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_int.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_int_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_int_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\launcher.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\launcher.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\launcher_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_cockpit.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_cockpit_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air2\UH1Y\data\uh1y_cockpit_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		LockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem=16;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			//range numbers 2-5
			"rn1",
			"rn2",
			"rn3",
			"rn4",
			//time numbers 6-11
			"tn1",
			"tn2",
			"tn3",
			"tn4",
			"tn5",
			"tn6",
			//grid numbers 12-17
			"dn1",
			"dn2",
			"dn3",
			"dn4",
			"dn5",
			"dn6",
			//grid numbers laser target 18-23
			"dn7",
			"dn8",
			"dn9",
			"dn10",
			"dn11",
			"dn12",
			//zoom numbers 24-27
			"zn1",
			"zn2",
			"zn3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_ext_co.paa",
			"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				AUTHOR_MACRO_BIS_PORT
				textures[]=
				{
					"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_ext_co.paa",
					"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa"
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
			class DoorL {
				displayName = "Open left door";
				property = "DoorL";
				control = "CheckboxNumber";
				defaultValue = "0";
				expression = "_this animateDoor ['%s',_value,true]";
			};
			class DoorR: DoorL {
				displayName = "Open right door";
				property = "DoorR";
			};
			class FoldHeli: DoorL {
				displayName = "Fold helicopter rotors";
				property = "FoldHeli";
				expression = "[_this,_value] call rhs_fnc_foldHeli";
			};
		};

		class RotorLibHelicopterProperties
		{
			RTDconfig="rhsusf\addons\rhsusf_c_a2port_air\UH1Y\RTD_UH1Y.xml";
			defaultCollective = 0.75;
			autoHoverCorrection[] = {5,2.4,0};
			maxTorque = 1280;
			maxMainRotorStress = 130000;
			maxTailRotorStress = 50000;
			retreatBladeStallWarningSpeed = 87.4556;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			stressDamagePerSec=0.0033333332;
		};
		numberPhysicalWheels = 0;
		class Components;
	};
	class RHS_UH1Y_US_base: RHS_UH1Y_base
	{
		side=1;
		class Components : Components
		{
			#include "dynamicLoadouts.hpp"

			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR //GFAS
					{
						class AirTarget
						{
							minRange = 2000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};

						class GroundTarget      // ranges for targets with ground background
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						animDirection = "ObsGun";
						angleRangeHorizontal = 40;
						angleRangeVertical = 30;
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
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};

						class GroundTarget {
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = "ObsGun";
						angleRangeHorizontal = 40;
						angleRangeVertical = 30;
					};
					class LaserSensorComponent : SensorTemplateLaser{};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar{};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
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
				class Components
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
	};
	class RHS_UH1Y: RHS_UH1Y_US_base
	{
		scope=2;
		accuracy=1.5;
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH1Y.paa";

		Mac_Inf_USMC_WD

		selectionFireAnim="";
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				primaryObserver = 0;
				primaryGunner = 1;
				primary = 1;
				playerPosition = 0;
				isCopilot = 1;
				usePiP=1;
				class MFD {};

				gunnerName = "Observer";
				weapons[] = {"rhs_weap_laserDesignator_AI"};
				magazines[] = {"rhs_LaserMag_ai"};
				gunnerAction = "RHS_UH1Y_Copilot";
				gunnerInAction = "RHS_UH1Y_Copilot";
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				memoryPointGun = "gun_end";
				memoryPointGunnerOptics="commanderview";

				turretInfoType = "RHS_RscUH1Y_Observer";

				initElev = 0;
				minElev = -80;
				maxElev = 30;
				minTurn = -180;
				maxTurn = 180;

				CanEject=0;
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";

				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
				selectionFireAnim="";

				preciseGetInOut=1;
				GunnerDoor="DoorL";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName	= "";
				gunnerRightLegAnimName	= "";
				proxyIndex=1;
				commanding=-1;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.0218;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						directionStabilized = 1;
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_uh1_flir";
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
						minFov = 0.33;
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
						intensity = 4;
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
							hardLimitStart = 1;
							hardLimitEnd = 1.5;
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
						intensity = 7;
						useFlare = 0;
						coneFadeCoef = .1;
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 70;
							hardLimitStart = 1;
							hardLimitEnd = 1.5;
						};
					};
					class cargo_light_2: cargo_light_1
					{
						position = "cargo_light_2";
						direction = "cargo_light_2_dir";
						hitpoint = "cargo_light_2";
						selection = "cargo_light_2";
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
								range[] = {8000,16000,20000,50000};
								resource = "RscCustomInfoSensors";
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
								range[] = {8000,16000,20000,50000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class MainTurret: MainTurret
			{
				usePiP				= 0;
				isCopilot			= 0;
				showAsCargo			= 1;
				proxyIndex			= 2;
				animationSourceBody	= "mainTurret";
				animationSourceGun	= "mainGun";
				body				= "mainTurret";
				gun					= "mainGun";
				minElev				= -55;
				maxElev				= 20;
				initElev			= 0;
				minTurn				= 0;
				maxTurn				= 170;
				initTurn			= 0;
				soundServo[]=
				{
					"",
					0.01,
					1
				};
				gunnerLeftHandAnimName	= "gunner_1_hand_l";
				gunnerRightHandAnimName	= "gunner_1_hand_r";
				gunnerLeftLegAnimName	= "gunner_1_leg_left";
				gunnerRightLegAnimName	= "gunner_1_leg_right";
				animationSourceStickX	= "MainTurret_1_Inertia";
				animationSourceStickY	= "MainGun_1_Inertia";
				gunnerAction			= "RHS_UH1Y_Gunner_L";
				gunnerInAction			= "RHS_UH1Y_Gunner_L";
				animationSourceHatch	= "";
				stabilizedInAxes		= StabilizedInAxesNone;
				gunBeg					= "muzzle_1";
				gunEnd					= "chamber_1";
				selectionFireAnim		= "zasleh";
				weapons[]=
				{
					"rhs_weap_m134_minigun_1"
				};
				magazines[]=
				{
					"rhs_mag_762x51_m80a1_4000"
				};
				gunnerName="Left door gunner";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "RHS_Heli_Cargo_Exit";
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
				gunnerCompartments		="Compartment2";
				memoryPointGun			="machinegun";
				memoryPointGunnerOptics	= "gunnerview_1";
				soundAttenuationTurret	= "HeliAttenuationGunner";
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
			class RightDoorGun: MainTurret
			{
				body="Turret_2";
				gun="Gun_2";
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				weapons[]=
				{
					"rhs_weap_m134_minigun_2"
				};
				stabilizedInAxes		= StabilizedInAxesNone;
				selectionFireAnim		= "zasleh_1";
				proxyIndex				= 3;
				playerPosition			= 1;
				gunnerName				= "Right door gunner";
				commanding				= -3;
				minElev					= -55;
				maxElev					= 20;
				initElev				= 0;
				minTurn					= -173;
				maxTurn					= -0;
				initTurn				= -170;
				gunBeg					= "muzzle_2";
				gunEnd					= "chamber_2";
				primaryGunner			= 0;
				memoryPointGun			= "machinegun_1";
				memoryPointGunnerOptics	= "gunnerview_2";
				gunnerLeftHandAnimName	= "gunner_2_hand_l";
				gunnerRightHandAnimName	= "gunner_2_hand_r";
				gunnerLeftLegAnimName	= "gunner_2_leg_left";
				gunnerRightLegAnimName	= "gunner_2_legs";
				animationSourceStickX	= "MainTurret_2_inertia";
				animationSourceStickY	= "MainGun_2_Inertia";
				gunnerAction			= "RHS_UH1Y_Gunner_R";
				gunnerInAction			= "RHS_UH1Y_Gunner_R";
				//gunnerDoor="DoorRB";
			};
			class CargoTurret_01: CargoTurret
			{
				weapons[]= {"rhsusf_weap_DummyLauncher"};
				gunnerAction = "passenger_inside_2";

				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "RHS_Heli_Cargo_Exit";

				memoryPointsGetInGunner = "pos cargo R";
				memoryPointsGetInGunnerDir = "pos cargo R dir";
				gunnerName = "Passenger (Right Bench 1)";
				gunnerCompartments = "Compartment2";
				memoryPointGunnerOptics="";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -45;
				maxTurn = -48;
				minTurn = -104;
				isPersonTurret = 1;
				gunnerUsesPilotView = 1;
				selectionFireAnim="";
				gunnerCanEject=1;
				cantCreateAI=1;
				commanding=-1;

				playerPosition = 1;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Right Bench 2)";
				memoryPointsGetInGunner = "pos cargo R4";
				memoryPointsGetInGunnerDir = "pos cargo R4 dir";
				proxyIndex = 3;
				maxTurn = 47;
				minTurn = 22;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Passenger (Right Bench 3)";
				memoryPointsGetInGunner = "pos cargo R2";
				memoryPointsGetInGunnerDir = "pos cargo R2 dir";
				proxyIndex = 6;
				maxTurn = 70;
				minTurn = 22;
			};
			class CargoTurret_04: CargoTurret_01
			{
				memoryPointsGetInGunner = "pos cargo L";
				memoryPointsGetInGunnerDir = "pos cargo L dir";
				gunnerName = "Passenger (Left Bench 1)";
				proxyIndex = 2;
				maxTurn = 104;
				minTurn = 58;
			};
			class CargoTurret_05: CargoTurret_04
			{
				gunnerName = "Passenger (Left Bench 2)";
				memoryPointsGetInGunner = "pos cargo L4";
				memoryPointsGetInGunnerDir = "pos cargo L4 dir";
				proxyIndex = 4;
				maxTurn = -16;
				minTurn = -40;
			};
			class CargoTurret_06: CargoTurret_04
			{
				gunnerName = "Passenger (Left Bench 3)";
				memoryPointsGetInGunner = "pos cargo L2";
				memoryPointsGetInGunnerDir = "pos cargo L2 dir";
				proxyIndex = 7;
				maxTurn = 3;
				minTurn = -55;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source="revolving";
				weapon="rhs_weap_m134_minigun_1";
			};
			class Gatling_2
			{
				source="revolving";
				weapon="rhs_weap_m134_minigun_2";
			};
			class muzzle_rot_hmg: Gatling_1
			{
				source="ammorandom";
			};
			class muzzle_rot_hmg2: Gatling_2
			{
				source="ammorandom";
			};
			class Hide_Scopes
			{
				source		= user;
				initPhase	= 0;
				useSource	= 1;
				animPeriod	= 0.1;
				displayName	= "Hide DCL-120 sights";
			};
		};
		class UserActions
		{
			class HUDoff
			{
				displayName = "HUD on";
				displayNameDefault = "HUD on";
				position = "zamerny";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(player==driver this)and(this animationphase 'HUDAction' !=1)";
				statement = "this animate ['HUDAction',1];this animate ['HUDAction_1',1]";
			};
			class HUDon: HUDoff
			{
				displayName = "HUD off";
				displayNameDefault = "HUD off";
				condition = "(player==driver this)and(this animationphase 'HUDAction' !=0)";
				statement = "this animate ['HUDAction',0];this animate ['HUDAction_1',0]";
			};
			class TogglePIP: HUDoff
			{
				displayName = "Toggle monitor";
				displayNameDefault = "Toggle monitor";
				condition = "( (call rhsusf_fnc_findPlayer)==driver this) or ((call rhsusf_fnc_findPlayer)==this turretUnit [0]) ";
				statement = "call rhs_fnc_uh1_toggleCam";
			};
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
		class EventHandlers: EventHandlers
		{
			class RHSUSF_EventHandlers
			{
				postInit = "_this call rhs_fnc_reapplyTextures";
			};
		};
	};
	class RHS_UH1Y_d : RHS_UH1Y
	{
		Mac_Inf_USMC_D
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH1Y_d.paa";
	};

	class RHS_UH1Y_FFAR : RHS_UH1Y
	{
		displayName		= "UH-1Y";
		forceInGarage	= 1;
		editorPreview	= "rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH1Y_FFAR.paa";
		AUTHOR_MACRO_BIS_PORT

		class AnimationSources: AnimationSources
		{
			class DoorRB: DoorRB
			{
				source="door";
				initPhase = 0;
			};
			class DoorLB: DoorLB
			{
				source="door";
				initPhase = 0;
			};
			class hide_mg: hide_mg {
				initPhase = 1;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerDoor="DoorRB";
				enabledByAnimationSource = "doorRB";
			};
			class CargoTurret_02: CargoTurret_02
			{
				gunnerDoor="DoorRB";
				enabledByAnimationSource = "doorRB";
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerDoor="DoorRB";
				enabledByAnimationSource = "doorRB";
			};
			class CargoTurret_07: CargoTurret_01
			{
				gunnerName = "Passenger (Right Bench 4)";
				memoryPointsGetInGunner = "pos cargo R3";
				memoryPointsGetInGunnerDir = "pos cargo R3 dir";
				proxyIndex = 9;
				maxTurn = 55;
				minTurn = -27;
			};
			class CargoTurret_04: CargoTurret_04
			{
				enabledByAnimationSource = "doorLB";
				gunnerDoor="DoorLB";
			};
			class CargoTurret_05: CargoTurret_05
			{
				enabledByAnimationSource = "doorLB";
				gunnerDoor="DoorLB";
			};
			class CargoTurret_06: CargoTurret_06
			{
				enabledByAnimationSource = "doorLB";
				gunnerDoor="DoorLB";
			};
			class CargoTurret_08: CargoTurret_04
			{
				gunnerName = "Passenger (Left Bench 4)";
				memoryPointsGetInGunner = "pos cargo L3";
				memoryPointsGetInGunnerDir = "pos cargo L3 dir";
				proxyIndex = 8;
				maxTurn = 43;
				minTurn = -40;
			};
		};
		class UserActions: UserActions
		{
			class OpenCargoDoor
			{
				displayName="Open right cargo door";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="(this animationphase 'hide_CargoDoors' !=1) and this doorPhase 'doorRB' == 0 and (alive this) and player in this;";
				statement="this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
				onlyforplayer=1;
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close right cargo door";
				condition="(this animationphase 'hide_CargoDoors' !=1) and this doorPhase 'doorRB' > 0 and (alive this) and player in this;";
				statement="this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
			};
			class OpenCargoLDoor: OpenCargoDoor
			{
				displayName="Open left cargo door";
				condition="(this animationphase 'hide_CargoDoors' !=1) and this doorPhase 'doorLB' == 0 and (alive this) and player in this;";
				statement="this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
				onlyforplayer=1;
			};
			class CloseCargoLDoor: OpenCargoDoor
			{
				displayName="Close left cargo door";
				condition="(this animationphase 'hide_CargoDoors' !=1) and this doorPhase 'doorLB' > 0 and (alive this) and player in this;";
				statement="this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
			};
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
		class Attributes: Attributes {
			class ObjectTexture: ObjectTexture {};
			class DoorL: DoorL {};
			class DoorR: DoorR {};
			class DoorLB: DoorL {
				displayName = "Open right cargo door";
				property = "DoorLB";
				expression = "_this animateDoor ['%s',_value,true];_this animate ['doorHandler_L',_value,true]";
			};
			class DoorRB: DoorLB {
				displayName = "Open right cargo door";
				property = "DoorRB";
				expression = "_this animateDoor ['%s',_value,true];_this animate ['doorHandler_R',_value,true]";
			};
			class FoldHeli: FoldHeli {};
		};
		class EventHandlers: EventHandlers
		{
			class RHSUSF_EventHandlers : RHSUSF_EventHandlers
			{
				getIn = "_this call rhs_fnc_UH60_doors";
				getOut = "_this call rhs_fnc_UH60_doors";
			};
		};
	};
	class RHS_UH1Y_FFAR_d : RHS_UH1Y_FFAR
	{
		Mac_Inf_USMC_D
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH1Y_FFAR_d.paa";
		forceInGarage = 0;
	};

	class RHS_UH1Y_GS: RHS_UH1Y
	{
		scope = 1;
		scopeCurator = 2;
		Mac_Inf_USMC_WD
		displayName = "UH-1Y (Ground-Suppression)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH1Y_GS.paa";

		availableForSupportTypes[]=
		{
			"CAS_Heli",
			"Drop",
			"Transport"
		};

		class AnimationSources: AnimationSources
		{
			class hide_FrontDoors: hide_FrontDoors
			{
				initPhase = 1;
			};
		};
		class components: components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_M151_19_green";};
					class pylon2: pylon2 {attachment = "rhs_mag_M151_19_green";};
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};

	class RHS_UH1Y_d_GS: RHS_UH1Y_GS
	{
		Mac_Inf_USMC_D
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH1Y_d_GS.paa";
		class AnimationSources: AnimationSources
		{
			class hide_CargoDoors: hide_CargoDoors
			{
				initPhase = 1;
			};
		};
	};

	class RHS_UH1Y_UNARMED : RHS_UH1Y_FFAR
	{
		displayName="UH-1Y (Unarmed)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH1Y_UNARMED.paa";
		AUTHOR_MACRO_BIS_PORT
		forceInGarage = 1;
		class AnimationSources: AnimationSources
		{
			class hide_rockets: hide_rockets
			{
				initPhase = 1;
			};
			class Hide_Scopes: Hide_Scopes {displayName = "";};
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air2\data\loadouts\RHS_UH1_EDEN_CA.paa";
				class pylons
				{
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_ANALE39","RHSUSF_cm_ANALE39_x2","RHSUSF_cm_ANALE39_x4"};
						priority		= 1;
						attachment		= "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
			};
		};
	};
	class RHS_UH1Y_UNARMED_d : RHS_UH1Y_UNARMED
	{
		Mac_Inf_USMC_D
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH1Y_UNARMED_d.paa";
		forceInGarage = 0;
	};