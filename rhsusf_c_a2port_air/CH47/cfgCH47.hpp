
	class RHS_CH_47F_base: Heli_Transport_02_base_F
	{
		rhs_paraRamp = "ramp_anim";
		rhs_paraOff= -8.5;
		rhs_rampAnim = "ramp";
		rhs_paraScript = "rhs_fnc_vehPara";
		dlc = "RHS_USAF";
		rhs_hasNoRadar=1;

		LESH_canBeTowed = 1;
		LESH_towFromFront = 0;
		LESH_AxisOffsetTarget[] = {0,-8,-2.5};
		LESH_WheelOffset[] = {0,3};

		category = "Air";

		// PhysX
		#include "physx.hpp"
		
		gearRetracting		= 0;
		gearUpTime			= 1;
		gearDownTime		= 1;
		backRotorForceCoef	= 0.9;
		driveOnComponent[]	= {wheels};


		fuelCapacity			=3200;
		fuelConsumptionRate		=0.398;
		slingLoadMaxCargoMass	= 12700;

		canFloat				= 1;
		waterLeakiness			= 0.02;
		maxFordingDepth			= 1.5;
		waterResistanceCoef		= 0.5;
		waterResistance			= 10;
		waterLinearDampingCoefY	= 5;
		waterLinearDampingCoefX	= 2;
		waterAngularDampingCoef	= 5;

		mainRotorSpeed			= 1;
		backRotorSpeed			= 1;
		mainBladeRadius			= 9.15;
		tailBladeRadius			= 9.15;
		tailBladeVertical		= 0;
		liftForceCoef			= 1.7;
		cyclicAsideForceCoef	= 1;
		cyclicForwardForceCoef	= 1;
		bodyFrictionCoef		= 0.9;
		useRoadwayForVehicles	= 1;
		class RotorLibHelicopterProperties
		{

			//RTDconfig = "G:\Projekty\Arma3\rhsusf\addons\rhsusf_c_a2port_air\CH47\RTD_Heli_Transport_02.xml";
			RTDconfig = "rhsusf\addons\rhsusf_c_a2port_air\CH47\Rotorlib_CH47.xml";
			autoHoverCorrection[] = {4.7,3.8,0};
			defaultCollective = 0.665;
			retreatBladeStallWarningSpeed = 92.583;
			maxTorque = 4014;
			stressDamagePerSec = 0.00333333;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 185000;
			maxTailRotorStress = 185000;
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		class pilotCamera {};


		unitInfoType		= "RHSUSF_RscUnitInfoAir_CH47";
		unitInfoTypeRTD		= "RHSUSF_RscUnitInfoAirRTDFullDigital";
		selectionFireAnim	= "";
		destrType			= DestructWreck;
		scope				= 0;
		displayName			= "CH-47F";
		side				= 1;
		accuracy			= 0.5;
		showNVGCargo[]		= {1};

		maxSpeed=293;
		nameSound="veh_helicopter";
		model="\rhsusf\addons\rhsusf_a2port_air\CH47\CH_47F";
		picture="\rhsusf\addons\rhsusf_a2port_air\data\ico\rhs_ch47_pic_ca.paa";
		icon="\rhsusf\addons\rhsusf_a2port_air\data\mapico\Icon_ch47f_CA.paa";
		mapSize=25;

		driverAction="RHS_CH47_Pilot";
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";

		memoryPointsGetInCargo[]=
		{
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir"
		};
		cargoaction[] = {"RHS_CH47_Cargo01", "RHS_CH47_Cargo01", "RHS_CH47_Cargo01", "RHS_CH47_Cargo02", "RHS_CH47_Cargo03", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo03", "RHS_CH47_Cargo01", "RHS_CH47_Cargo02", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02", "RHS_CH47_Cargo01", "RHS_CH47_Cargo03", "RHS_CH47_Cargo02"};
		cargoiscodriver[] = {0};
		cargoCompartments[] = {"Compartment1"};

		transportSoldier=22;
		cargoProxyIndexes[] = {1,3,4,5,6,7,8,9,10,11,12,14,15,16,17,18,19,20,22,23,24,25};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
		transportMaxBackpacks=10;

		//Sensors definition
		reportOwnPosition = 1;
		
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
				name				= "hit_hull";
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
			class HitVRotor
			{
				armor			= -80;
				minimalHit 		= -0.1;
				name			= "mala vrtule";
				visual			= "mala vrtule staticka";
				passThrough		= 0.5;
				armorComponent	= Hit_Rotor_Rear;
			};
			class HitHRotor
			{
				armor			= -80;
				minimalHit 		= -0.1;
				name			= "velka vrtule";
				visual			= "velka vrtule staticka";
				passThrough		= 0.5;
				armorComponent	= Hit_Rotor_Main;
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
		};

		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_CH47_EDEN_CA.paa";
				class pylons
				{
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_M130","RHSUSF_cm_M130_x2","RHSUSF_cm_M130_x4","RHSUSF_cm_M130_x8"};
						priority		= 1;
						attachment		= "rhsusf_M130_CMFlare_Chaff_Magazine_x8";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
			};

			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar {};
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
		};

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				isCopilot=1;
				CanEject=0;
				gunnerAction="RHS_CH47_Pilot";
				gunnerInAction="RHS_CH47_Pilot";

				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";

				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				gunnerName="Co-Pilot";
				preciseGetInOut=0;
				GunnerDoor="";

				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";

				proxyIndex=4;
				gunnerCompartments="Compartment3";
				commanding=-3;
				selectionFireAnim="";
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
							hardLimitEnd = 2.5;
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
			};
			class MainTurret: MainTurret
			{
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				minElev=-30;
				maxElev=30;
				initElev=-10;
				minTurn=36;
				maxTurn=140;
				initTurn=0;
				soundServo[]=
				{
					"",
					0.01,
					1
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGun="machinegun_1";
				animationSourceHatch="";
				stabilizedInAxes="StabilizedInAxesNone";
				selectionFireAnim="zasleh";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				weapons[]=
				{
					"rhs_weap_m134_minigun_1"
				};
				magazines[]=
				{
					"rhs_mag_762x51_m80a1_4000"
				};
				gunnerName="Crew Chief";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction="RHS_CH47_Gunner";
				gunnerInAction="RHS_CH47_Gunner";
				gunnerLeftHandAnimName = "OtocHlaven";
				gunnerRightHandAnimName = "OtocHlaven";
				gunnerLeftLegAnimName="gunner1_leg_left";
				gunnerRightLegAnimName="gunner1_leg_right";
				animationSourceStickX	= "MainTurret_1_Inertia";
				animationSourceStickY	= "MainGun_1_Inertia";
				gunnerForceOptics=0;
				commanding=-1;
				primaryGunner=1;
				outGunnerMayFire=1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.7;
					minFov=0.25;
					maxFov=1.1;
				};
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
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
				isCopilot=0;
				body="Turret2";
				gun="Gun_2";
				minTurn=-140;
				maxTurn=-36;
				initTurn=0;
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				stabilizedInAxes="StabilizedInAxesNone";
				selectionFireAnim="zasleh_1";
				proxyIndex=2;
				weapons[]=
				{
					"rhs_weap_m134_minigun_2"
				};
				magazines[]=
				{
					"rhs_mag_762x51_m80a1_4000"
				};
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerName="Door Gunner";
				gunnerLeftHandAnimName = "otochlaven_2";
				gunnerRightHandAnimName = "otochlaven_2";
				gunnerLeftLegAnimName="gunner2_leg_left";
				gunnerRightLegAnimName="gunner2_leg_right";
				animationSourceStickX	= "MainTurret_2_inertia";
				animationSourceStickY	= "MainGun_2_Inertia";
				commanding=-2;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				primaryGunner=0;
				preciseGetInOut=1;
				memoryPointGun="machinegun_2";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
			};
			class CargoTurret_01: CargoTurret
			{
				weapons[]= {"rhsusf_weap_DummyLauncher"};
				gunnerAction = "passenger_inside_1";

				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "RHS_Heli_Cargo_Exit";

				memoryPointsGetInGunner = "pos cargo L";
				memoryPointsGetInGunnerDir = "pos cargo L dir";
				gunnerName = "Passenger (Left Ramp)";
				gunnerCompartments = "Compartment1";
				proxyIndex = 21;
				maxElev = 6;
				minElev = -25;
				maxTurn = -37;
				minTurn = -95;
				isPersonTurret = 1;
				gunnerUsesPilotView = 1;
				gunnerDoor="Door_Cargo";
				selectionFireAnim="";

				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
				memoryPointGunnerOptics="";

				enabledByAnimationSource = "ramp_anim";
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Right Ramp)";
				memoryPointsGetInGunner = "pos cargo R";
				memoryPointsGetInGunnerDir = "pos cargo R dir";
				proxyIndex = 13;
				maxTurn = 84;
				minTurn = 37;
			};
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
			class ramp_anim
			{
				sound = "ServoRampSound_2";
				soundPosition = "osa_ramp";
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Hide_Scopes
			{
				source		= user;
				initPhase	= 0;
				useSource	= 1;
				animPeriod	= 0.1;
				displayName	= "Hide DCL-120 sights";
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
			#define GLASS_MACRO(numb) class HitGlass##numb { source="Hit"; hitpoint=HitGlass##numb##; raw=1;};
			GLASS_MACRO(1)
			GLASS_MACRO(2)
			GLASS_MACRO(3)
			GLASS_MACRO(4)
			GLASS_MACRO(5)
			GLASS_MACRO(6)
			GLASS_MACRO(7)
			GLASS_MACRO(8)
			GLASS_MACRO(9)
			GLASS_MACRO(10)
			GLASS_MACRO(11)
			GLASS_MACRO(12)
			GLASS_MACRO(13)
			GLASS_MACRO(14)
			GLASS_MACRO(15)
			class Damper_1_1_source	{source = damper; wheel = Wheel_1_1;};
			class Damper_1_2_source	{source = damper; wheel = Wheel_1_2;};
     		class Damper_2_1_source	{source = damper; wheel = Wheel_2_1;};
			class Damper_2_2_source	{source = damper; wheel = Wheel_2_2;};
			class Wheel_1_1_source	{source = wheel; wheel = Wheel_1_1;};
			class Wheel_1_2_source	{source = wheel; wheel = Wheel_1_2;};
			class Wheel_2_1_source	{source = wheel; wheel = Wheel_2_1;};
			class Wheel_2_2_source	{source = wheel; wheel = Wheel_2_2;};
			class Helicopter_Brakes {source = user; animPeriod = 0.01; initPhase = 1;};
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Open Ramp";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this animationSourcePhase 'ramp_anim' < 1 and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0)";
				statement="this animateSource ['ramp_anim', 1];[this] call rhs_fnc_cargoDetach";
				onlyforplayer=1;
				shortcut="user12";
			};
			class LevelRamp: OpenCargoDoor
			{
				displayName="Level Ramp";
				condition="this animationSourcePhase 'ramp_anim' != 0.6 and (alive this) and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0);";
				statement="this animateSource ['ramp_anim', 0.6];";
				shortcut="user13";
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close Ramp";
				condition="this animationSourcePhase 'ramp_anim' > 0 and (alive this) and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0);";
				statement="this animateSource ['ramp_anim', 0];[this] call rhs_fnc_cargoAttach";
			};
			class VehicleParadrop: OpenCargoDoor
			{
				displayName="Paradrop cargo";
				condition="(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this)";
				statement="[this] spawn rhs_fnc_vehPara";
				shortcut="";
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
			class WheelBrakes: OpenCargoDoor
			{
				displayName	= "Toggle Wheel Brakes";
				shortcut	= "binocular";
				condition	= "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
				statement	= "[this] call rhs_fnc_heli_wheelBrakes";
			};
		};

		weapons[]=
		{
			"rhsusf_weap_ANALQ212"
		};
		magazines[]=
		{
			mag_10(rhsusf_mag_DIRCM)
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

		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		selectionDamage="trup";
		selectionShowDamage="poskozeni";

		memoryPointLRocket="l raketa";
		memoryPointRRocket="p raketa";
		memoryPointLMissile="l strela";
		memoryPointRMissile="p strela";

		enableManualFire=0;
		threat[]={0.8,1,0.60000002};
		helmetMountedDisplay=0;
		cargoCanEject=1;
		driverCanEject=0;
		class MFD
		{
		};
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

		class Library
		{
			libTextDesc="CH-47F";
		};
		#include "sounds.hpp"
		class MarkerLights
		{
			class WhiteStill
			{
				name="bily pozicni";
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				intensity=75;
				blinkingPattern[]={0.1,0.09};
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
			class GreenStill
			{
				name="zeleny pozicni";
				color[]={0,0.8,0};
				ambient[]={0,0.08,0};
				intensity=75;
				drawLight=1;
				drawLightSize=0.15;
				drawLightCenterSize=0.04;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class RedBlinking
			{
				name="bily pozicni blik";
				color[]={0.09,0.15,0.1};
				ambient[]={0.09,0.015,0.01};
				intensity=75;
				blinking=1;
				blinkingPattern[]={0.1,0.09};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.04;
			};
			class WhiteBlinking
			{
				name="cerveny pozicni blik";
				color[]={0.09,0.15,0.1};
				intensity=75;
				ambient[]={0.09,0.015,0.01};
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
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
		class Exhausts
		{
			class Exhaust1
			{
				direction="exhaust1_dir";
				effect="ExhaustEffectHeli";
				position="exhaust1";
			};
			class Exhaust2
			{
				direction="exhaust2_dir";
				effect="ExhaustEffectHeli";
				position="exhaust2";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_int.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_int.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_1_int_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_int.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_int.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_2_int_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_in.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_in_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_in_damage.rvmat",

				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_air\CH47\data\ch47_sklo_damage.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		irScanRangeMin=0;
		irScanRangeMax=1000;
		irScanToEyeFactor=2;
		gunnerCanSee = 2+4+8+16;
		driverCanSee = 2+4+8+16;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"
		};

		class textureSources
		{
			class standard
			{
				displayName="Standard";
				AUTHOR_MACRO_BIS_PORT
				textures[]=
				{
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd,
					rhs_faction_usarmy_d
				};
			};
			class Desert
			{
				displayName="Desert";
				AUTHOR_MACRO_BIS_PORT
				textures[]=
				{
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_light_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_light_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_light_mlod_co.paa"
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
			class ramp_anim {
				displayName = "Open ramp";
				property = "ramp_anim";
				control = "slider";
				defaultValue = "0";
				expression = "_this animateSource ['%s',_value,true]";
			};
			class hide_cargo: ramp_anim {
				displayName = "Hide cargo benches";
				property = "hide_cargo";
				control = "CheckboxNumber";
				expression = "_this animate ['%s',_value,true];_this lockCargo (_value == 1)";
			};
			class rhs_attachCargo: hide_cargo {
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
	class RHS_CH_47F_cargo_base: RHS_CH_47F_base
	{
		displayName = "CH-47F (Cargo)";
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
			class MainTurret: MainTurret {};
			class RightDoorGun: RightDoorGun {};
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
	class RHS_CH_47F: RHS_CH_47F_base
	{
		Mac_helo_Army_WD
		accuracy=1000;
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_CH_47F.paa";
		scope=2;
	};
	class RHS_CH_47F_cargo: RHS_CH_47F_cargo_base
	{
		Mac_helo_Army_WD
		accuracy=1000;
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_CH_47F.paa";
		scope=2;
	};
	class RHS_CH_47F_10: RHS_CH_47F
	{
		Mac_helo_Army_D
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_CH_47F_10.paa";
	};
	class RHS_CH_47F_10_cargo: RHS_CH_47F_cargo
	{
		Mac_helo_Army_D
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_CH_47F_10.paa";
	};
	class RHS_CH_47F_light: RHS_CH_47F
	{
		scope=2;

		Mac_helo_Army_D

		displayName="CH-47F (D)";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_CH_47F_light.paa";

		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_light_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_light_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_light_mlod_co.paa"
		};


	};
	class CH_47FWreck: HelicopterWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\rhsusf\addons\rhsusf_a2port_air\CH47\CH_47FWreck.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=0;
		class Eventhandlers;
	};