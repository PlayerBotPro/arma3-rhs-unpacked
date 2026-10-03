class rhs_uh1h_base: Helicopter_Base_H
	{
		AUTHOR_MACRO
		forceInGarage			= 0;

		picture					= "rhsgref\addons\rhsgref_air\uh1h\ui\rhs_uh1h_pic_ca.paa";
		icon					= "rhsgref\addons\rhsgref_air\uh1h\ui\icon_uh1h_ca.paa";
		mapSize					= 14;

		model					= "rhsgref\addons\rhsgref_air\uh1h\uh1h.p3d";
		displayName				= "UH1H";
		unitInfoType			= "RHSGREF_RscUnitInfoAir_UH1H";
		unitInfoTypeRTD			= "RHSGREF_RscUnitInfoAirRTDFullDigital_UH1H";
		destrType				= DestructWreck;
		cargoAction[]			= {"passenger_apc_narrow_generic02","passenger_apc_narrow_generic02","passenger_generic02_foldhands","passenger_generic01_leanleft","passenger_flatground_generic02","passenger_flatground_leanleft"};
		GetInAction				= "pilot_Heli_Light_02_Enter";
		GetOutAction			= "pilot_Heli_Light_02_Exit";
		driverAction			= "RHS_UH1H_Pilot";
		driverInAction			= "RHS_UH1H_Pilot";
		driverLeftHandAnimName = "collective";
		driverDoor				= "door_pilot";
		preciseGetInOut			= 1;
		driverOpticsModel		= "";
		transportSoldier		= 6;
		cargoProxyIndexes[]		= {1,2,3,4,5,6,7,8};
		getInProxyOrder[]		= {1,2,3,4,5,6,7,8};
		cargoCompartments[]		= {"compartment3"};
		getInRadius				= 1;
		hideWeaponsDriver		= 0;
		gForceShakeAttenuation	= 0.3;
		minGForce				= 0.05;
		maxGForce				= 0.1;

		class Exhausts								/// describes the particle effects fro exhausts
		{
			class Exhaust1							/// there may be as many exhausts as you wish, bear in mind the particle limitation and performance
			{
				position = "Exhaust";				/// on what position should the particle effect start
				direction = "Exhaust_dir";			/// what is the default direction of the particle effect
				effect = "ExhaustsEffectHeliBig";	/// what class of particle effect is going to be used
			};
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};

		supplyradius = 2;
		epeImpulseDamageCoef = 20;
		damageResistance = 0.01039;
		crewCrashProtection = 0.2;
		//threat[] VSoft, VArmor, VAir
		extCameraPosition[] = {0,2,-17};
		threat[]={0.4, 0, 0};
		showCrewAim = 0;
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		fuelCapacity = 781;
		fuelConsumptionRate = 0.09;
		maxFordingDepth = 1.0;
		driveOnComponent[] = {"Skids"};
		mainBladeRadius = 8.2;
		tailBladeRadius = 1.5;
		washDownStrength = 0.9f;
		maxSpeed = 217;
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 1900;
		radarType = 0;
		liftForceCoef = 1.3;
		cyclicAsideForceCoef = 0.55;
		cyclicForwardForceCoef = 0.5;
		backrotorforcecoef = 0.6;
		bodyFrictionCoef = 0.6;
		sensitivity = 0.5;
		maximumLoad = 4309.128;

		irTarget			= 1;
		irTargetSize		= 0.9;
		visualTarget		= 1;
		visualTargetSize	= 1;
		radarTarget			= 1;
		radarTargetSize		= 1;

		LockDetectionSystem				= "0";
		incomingMissileDetectionSystem	= "0";

		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig = "rhsgref\addons\rhsgref_c_air\uh1h\rtd_uh1h.xml";
			autoHoverCorrection[] = {5, 2.4,0};
			defaultCollective = 0.75;
			starterTime	= 10;
			throttleOffToIdle = 10;
			throttleIdleToOff = 10;
			throttleIdleToFull = 8;
			throttleFullToIdle = 15;
			maxTorque = 2168;
			maxMainRotorStress = 130000;
			maxTailRotorStress = 10000;
			retreatBladeStallWarningSpeed = 63;
			rtd_center = "rtd_center";
		};


		enableManualFire = 0;

		class MFD{};

		class ViewPilot: ViewPilot
		{
			initFov=0.85;
			maxFov = 0.95;
		};

		#include "sounds.hpp"

		class Reflectors
		{
			class Front
			{
				color[] = {11000,7000,5000};
				ambient[] = {11,7,5};
				intensity = 120;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_pos";
				direction = "Light_dir";
				hitpoint = "Light_hitpoint";
				selection = "Light";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 300;
				};
			};
		};
		class MarkerLights
		{
			class CollisionLight_Red
			{
				name = "CollisionLight_Red";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				intensity = 20;
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;

				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 25;
				};
			};
			class Red_Interior: CollisionLight_Red
			{
				name = "Interior_Red";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				intensity = 800;
				blinking = 0;
				drawLightSize = 0;
				drawLightCenterSize = 0;
			};
			class Red_Top_Position: CollisionLight_Red
			{
				name = "CollisionLight_Top_Red";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				intensity = 20;
				blinking = 1;
				blinkingPattern[] = {0.5,0.5};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Green_Position: CollisionLight_Red
			{
				name = "CollisionLight_Green";
				color[] = {0.4,1,0.5};
				ambient[] = {0.04,0.1,0.05};
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 0;
				isCopilot = 1;
				hideWeaponsGunner = 0;
				gunnerAction = "RHS_UH1H_CoPilot";
				gunnerInAction = "RHS_UH1H_CoPilot";
				memoryPointsGetInGunner = "pos Codriver";
				memoryPointsGetInGunnerDir = "pos Codriver dir";
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
				preciseGetInOut = 1;
				GunnerDoor = "door_copilot";
				gunnerLeftHandAnimName = "collective";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "PedalL";
				gunnerRightLegAnimName = "PedalR";
				gunBeg	= "muzzle_copilot";
				gunEnd	= "chamber_copilot";
				primaryGunner = 1;
				proxyIndex = 1;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment2";

				weapons[]=
				{
					"rhs_weap_DummyLauncher",
					"rhs_weap_fcs_nolrf_ammo"
				};
				magazines[]=
				{
					"rhs_laserfcsmag","rhs_laserfcsmag"
				};
				class ViewGunner
				{
					minAngleX=-65;
					maxAngleX=85;
					initAngleX=0;
					minAngleY=-150;
					maxAngleY=150;
					initAngleY=0;
					minFov=0.25;
					maxFov=0.95;
					initFov=0.85;
				};
				class Hitpoints {};
			};

			class RightGunner: MainTurret
			{
				body="RightTurretBase";
				gun="RightTurretGun";
				animationSourceBody="RightTurretBase";
				animationSourceGun="RightTurretGun";
				turretInfoType="RHS_RscWeaponZeroing";
				CanEject = 1;
				isCopilot = 0;
				initelev = 0;
				initturn = -90;
				maxelev = 20;
				maxturn = -25;
				minelev = -55;
				minturn = -135;
				soundServo[]={,db-40,1.0};
				stabilizedInAxes = StabilizedInAxesNone;
				weapons[] = {"rhs_weap_m240H_2"};
				magazines[] = {"rhs_mag_762x51_M240_200_M80","rhs_mag_762x51_M240_200_M80","rhs_mag_762x51_M240_200_M80","rhs_mag_762x51_M240_200_M80","rhs_mag_762x51_M240_200_M80"};
				discreteDistance[]={200,300,400,500,600,700,800};
				discreteDistanceInitIndex=0;
				gunBeg = "muzzle_2"; //gunBeg = endpoint of the gun
				gunEnd = "chamber_2"; //gunEnd = chamber of the gun
				gunnerName = "$STR_A3_RIGHT_GUNNER";
				memoryPointsGetInGunner = "pos Gunner R";
				memoryPointsGetInGunnerDir = "pos Gunner R dir";
				gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOutOpticsShowCursor=1;
				gunnerLeftHandAnimName="OtocHlaven_2";
				gunnerRightHandAnimName="OtocHlaven_2";
				gunnerLeftLegAnimName="gunner_2_leg_left";
				gunnerRightLegAnimName="gunner_2_legs";
				gunnerAction= "RHS_UH1H_Gunner_R";
				gunnerInAction= "RHS_UH1H_Gunner_R";
				selectionFireAnim="zasleh_2";
				primaryGunner=0;
				proxyIndex=3;

				class ViewOptics
				{
					initanglex = 0;
					initangley = 0;
					initfov = 0.7;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 1.1;
					minanglex = -30;
					minangley = -100;
					minfov = 0.25;
				};

				gunnerCompartments = "Compartment3";
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 0;
				class Hitpoints {};
			};

			class LeftGunner: RightGunner
			{
				body="LeftTurretBase";
				gun="LeftTurretGun";
				animationSourceBody="LeftTurretBase";
				animationSourceGun="LeftTurretGun";
				weapons[] = {"rhs_weap_m240H_1"};
				magazines[] = {"rhs_mag_762x51_M240_200_M80","rhs_mag_762x51_M240_200_M80","rhs_mag_762x51_M240_200_M80","rhs_mag_762x51_M240_200_M80","rhs_mag_762x51_M240_200_M80"};
				gunBeg = "muzzle_1"; //gunBeg = endpoint of the gun
				gunEnd = "chamber_1"; //gunEnd = chamber of the gun
				gunnerLeftHandAnimName="OtocHlaven_1";
				gunnerRightHandAnimName="OtocHlaven_1";
				gunnerLeftLegAnimName="gunner_1_leg_left";
				gunnerRightLegAnimName="gunner_1_legs";
				gunnerAction= "RHS_UH1H_Gunner_L";
				gunnerInAction= "RHS_UH1H_Gunner_L";

				memoryPointsGetInGunner = "pos Gunner L";
				memoryPointsGetInGunnerDir = "pos Gunner L dir";
				primaryGunner=0;
				proxyIndex=2;
				memoryPointGunnerOptics="gunnerview_1";
				selectionFireAnim="zasleh_1";
				gunnerName = "$STR_A3_LEFT_GUNNER";
				initelev = 0;
				initturn = 90;
				maxelev = 20;
				maxturn = 125;
				minelev = -55;
				minturn = 30;
			};

			class CargoTurret_01: CargoTurret
			{
				gunnerAction				= "passenger_bench_1";
				gunnerGetInAction			= "GetInHeli_Light_01bench";
				gunnerCompartments			= "compartment3";
				memoryPointsGetInGunner		= "pos Gunner L";
				memoryPointsGetInGunnerDir	= "pos Gunner L dir";
				gunnerName					= "Passenger (Left Door)";
				gunBeg						= "muzzle_copilot";
				gunEnd						= "chamber_copilot";
				proxyIndex					= 7;
				maxElev						= 45;
				minElev						= -55;
				maxTurn						= 70;
				minTurn						= -10;
				isPersonTurret				= 1;
				ejectDeadGunner				= 0;
				playerPosition				= 4;
				soundAttenuationTurret		= "";
				disableSoundAttenuation		= 1;
				weapons[]					= {rhs_weap_DummyLauncher}; // fix for get in order
				class Hitpoints {};
			};

			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments			= "compartment3";
				memoryPointsGetInGunner		= "pos Gunner R";
				memoryPointsGetInGunnerDir	= "pos Gunner R dir";
				gunnerName					= "Passenger (Right Door)";
				proxyIndex					= 8;
				maxTurn						= 35;
				minTurn						= -60;
			};
		};

		class AnimationSources: AnimationSources
		{
			class door_pilot
			{
				source="door";
				animPeriod=0.8;
				initPhase = 0;
				sound = "MetalDoorsSound";
				soundPosition = "axis_door_pilot";
			};
			class door_copilot: door_pilot {
				soundPosition = "axis_door_copilot";
			};
			class rightturretbase 	{source = "user";initPhase = 0;animPeriod = 0;};
			class rightturretgun 	{source = "user";initPhase = 0;animPeriod = 0;};
			class leftturretgun 	{source = "user";initPhase = 0;animPeriod = 0;};
			class leftturretbase 	{source = "user";initPhase = 0;animPeriod = 0;};

			class Hide_mid_doors
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 1;
			};

			class close_cargo_doors
			{
				source = "door";
				sound = "RollDoorsSound";
				soundPosition = "door_sounds";
				animPeriod = 1.5;
				initPhase = 0;
			};

			class hide_crosshair
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};

			class Hide_guns
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};

			class hide_gunmount
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 1;
			};
			class reloadAnim_1
			{
				source="reload";
				weapon="rhs_weap_m240H_1";
			};

			class reloadMagazine_1
			{
				source="reloadmagazine";
				weapon="rhs_weap_m240H_1";
			};

			class revolving_1
			{
				source="revolving";
				weapon="rhs_weap_m240H_1";
			};

			class reloadAnim_2
			{
				source="reload";
				weapon="rhs_weap_m240H_2";
			};

			class reloadMagazine_2
			{
				source="reloadmagazine";
				weapon="rhs_weap_m240H_2";
			};

			class revolving_2
			{
				source="revolving";
				weapon="rhs_weap_m240H_2";
			};
			// dummy entries to prevent rpt errors on non armed variants
			class hit_pylon_1_source {source = user;initPhase = 0;animPeriod = 0;};
			class hit_pylon_2_source {source = user;initPhase = 0;animPeriod = 0;};
			#define GLASS_MACRO(numb) class HitGlass##numb { source="Hit"; hitpoint=HitGlass##numb##; raw=1;};
			GLASS_MACRO(1)
			GLASS_MACRO(2)
			GLASS_MACRO(3)
			GLASS_MACRO(4)
			GLASS_MACRO(5)
			GLASS_MACRO(6)
			GLASS_MACRO(7)
		};


		armor						= 35;
		armorStructural				= 20;
		hullDamageCauseExplosion	= 1;
		hullExplosionDelay[]		= {10, 20};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				simulation			= RHS_Hull_Helicopter;
				armor				= -100;
				minimalHit			= -0.2;
				explosionShielding	= 1;
				radius				= 0.4;
				armorComponent		= Hit_Hull;
				name				= "hit_hull";
				visual				= "zbytek";
				passThrough			= 1;
				class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
			};
			class HitFuel
			{
				armor				= -70;
				name				= "hit_fuel";
				visual				= "-";
				radius				= 0.15;
				explosionShielding	= 1.5;
				passThrough			= 0.2;
			};
			#define HIT_GLASS_MACRO(numb) class HitGlass##numb {armor = -12;	explosionShielding = 1; passThrough = 0.0; minimalHit = -0.10;	radius = 0.2; 	 armorComponent = glass##numb##; 	name = glass##numb##;	visual = glass##numb##;};
			HIT_GLASS_MACRO(1)
			HIT_GLASS_MACRO(2)
			HIT_GLASS_MACRO(3)
			HIT_GLASS_MACRO(4)
			HIT_GLASS_MACRO(5)
			HIT_GLASS_MACRO(6)
			HIT_GLASS_MACRO(7)
			class HitVRotor: HitVRotor
			{
				simulation			= RHS_Hull_Helicopter;
				armorComponent		= Hit_Tail;
				name				= Hit_Rotor_Tail;
				visual				= "tail rotor static";
				armor 				= -80;
				minimalHit			= -0.2;
				radius				= 0.3;
				explosionShielding	= 3;
				passThrough			= 0.5;
			};
			class HitHRotor: HitHRotor
			{
				armorComponent		= Hit_Rotor_Main;
				name 				= Hit_Rotor_Main;
				visual				= "main rotor static";
				armor 				= -90;
				radius				= 0.2;
				explosionShielding	= 0.5;
			};
			class HitAvionics: HitAvionics
			{
				armor				= -40;
				visual				= "";
				name				= "elektronika";
				radius				= 0.05;
				explosionShielding	= 1.5;
			};
			class HitEngine: HitEngine
			{
				armorComponent		= Hit_Engine;
				armor				= -80;
				name				= "motor";
				passThrough			= 0.5;
				minimalHit			= -0.12;
				explosionShielding	= 2;
				radius				= 0.27;
			};
			class HitWinch
			{
				armor		= 999;
				name		= "";
				visual		= "-";
				radius		= 0.001;
				passThrough	= 0;
			};
		};
		class Damage
			{
			tex[]={};
			mat[]={
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_destruct.rvmat",

					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit1.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit1.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit1_destruct.rvmat",

					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit2.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit2.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit2_destruct.rvmat",

					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit3.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit3.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit3_destruct.rvmat",

					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_glass.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_glass_damage.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_glass_damage.rvmat",

					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in_destruct.rvmat",

					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_instruments.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_instruments.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_instruments_destruct.rvmat",

					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_rotor.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_rotor.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_rotor_destruct.rvmat",

					"a3\data_f\default.rvmat",
					"a3\data_f\default.rvmat",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_destruct.rvmat",

					"a3\data_f\default.rvmat",
					"a3\data_f\default.rvmat",
					"a3\data_f\default_destruct.rvmat"
				};
			};
		hiddenSelections[] ={"decals"};
		hiddenSelectionsTextures[] ={"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};

		irScanRangeMin=100;
		irScanRangeMax=1000;
		irScanToEyeFactor=2;

		class Components;

		class textureSources
		{
			class hidf_grey
			{
				displayName = "HIDF Grey";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"
				};
				factions[]=
				{
					"rhsgref_faction_hidf"
				};
			};
			class hidf_summer: hidf_grey
			{
				displayName = "HIDF MERDC (Summer verdant)";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
				};
			};
			class hidf_tropical: hidf_grey
			{
				displayName = "HIDF MERDC (Tropical verdant)";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
				};
			};
			class hidf_olv: hidf_grey
			{
				displayName = "HIDF Olive";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"
				};
			};
			class hidf_tan: hidf_grey
			{
				displayName = "HIDF Tan";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"
				};
			};
			class un
			{
				displayName = "UN";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_un_decals_ca.paa"
				};
				factions[]=
				{
					"rhsgref_faction_un"
				};
			};
			class idap
			{
				displayName = "IDAP";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_idap_decals_ca.paa"
				};
				factions[]=
				{
					"CIV_IDAP_F"
				};
			};
			class us_army
			{
				displayName = "US Army";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"
				};
				factions[]=
				{
					"rhs_faction_usarmy_wd", "rhs_faction_usarmy_d"
				};
			};
			class us_army_med: us_army
			{
				displayName = "US Army (Medevac)";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_med_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"
				};
			};
			class black
			{
				displayName = "Black";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class iraq
			{
				displayName = "Iraqi Air Force";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_iaf_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class takistan
			{
				displayName = "Takistan";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tka_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in_tka_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_tka_co",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class guerilla
			{
				displayName = "Guerilla";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
				};
				factions[]=
				{
					"IND_G_F", "BLU_G_F", "OPF_G_F"
				};
			};

			class tan
			{
				displayName = "Tan";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
				};
				factions[]=
				{
					"IND_G_F", "BLU_G_F", "OPF_G_F", "IND_F"
				};
			};

			class olive: tan
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
				};
			};

			class white: tan
			{
				displayName = "White";
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
					"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
				};
			};
		};
	};

	class rhs_uh1h_hidf: rhs_uh1h_base
	{
		EdPrev(rhs_uh1h_hidf)
		AUTHOR_MACRO
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction= "rhsgref_faction_hidf";
		displayName = "UH-1H";
		crew = "rhsgref_hidf_helipilot";
		typicalCargo[]={"rhsgref_hidf_helipilot"};

	    class TransportMagazines{};
		class TransportItems {};
		class TransportWeapons {};

		enableSweep = 0; // No rockets & no AI rockets runs

		hiddenSelections[] ={"Camo1","Camo2","Camo_mlod","decals"};

		hiddenSelectionsTextures[] =
		{
			"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"
		};

		class textureSources: textureSources
		{
			class hidf_grey:hidf_grey{};
			class hidf_summer:hidf_summer{};
			class hidf_tropical:hidf_tropical{};
			class hidf_olv:hidf_olv{};
			class hidf_tan:hidf_tan{};
			class us_army:us_army{};
			class us_army_med:us_army_med{};
			class black:black{};
			class iraq:iraq{};
			class takistan:takistan{};
			class guerilla:guerilla{};
		};

		class AnimationSources: AnimationSources
		{
			class Hide_mid_doors
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};

		textureList[]={};

		class Attributes
		{
			class uh1h_textures
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Paint";
				tooltip = "Select paint color.";
			};
		};
	};

	class rhs_uh1h_hidf_gunship: rhs_uh1h_hidf
	{
		EdPrev(rhs_uh1h_hidf_gunship)
		AUTHOR_MACRO
		forceInGarage = 1;
		displayName = "UH-1H Gunship";

		availableForSupportTypes[]=
		{
			"CAS_Heli",
			"Drop",
			"Transport"
		};

		enableSweep = 1; // Enable AI rockets run
		class AnimationSources: AnimationSources
		{
			class hide_crosshair
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};

			class Hide_mid_doors
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};

			class hide_gunmount
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			ANIM_PYLON(1)
			ANIM_PYLON(2)
		};
		class Hitpoints: HitPoints
		{
			HP_PYLON(1,0.95)
			HP_PYLON(2,0.95)
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\rhsgref\addons\rhsgref_air\uh1h\ui\RHS_UH1H_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]	= {"RHS_HP_FFAR_ARMY"};
						UIposition[]	= {0.573,0.44};
						maxweight		= 1200;
						priority		= 1;
						attachment		= "rhs_mag_M151_19";
						bay				= -1;
						hitpoint		= HitPylon1;
					};
					class pylon2 : pylon1
					{
						UIposition[]		= {0.10,0.44};
						mirroredMissilePos	= 1;
						hitpoint			= HitPylon2;
					};
				};
				class Presets
				{
					class Empty
					{
						attachment[] =
						{
							"",
							""
						};
						displayname = "<empty>";
					};
					class Light
					{
						attachment[] =
						{
							"rhs_mag_M151_7",
							"rhs_mag_M151_7"
						};
						displayname = "Light";
					};
					class Heavy
					{
						attachment[] =
						{
							"rhs_mag_M151_19",
							"rhs_mag_M151_19"
						};
						displayname = "Heavy";
					};
				};
			};
		};
	};

	class rhs_uh1h_hidf_unarmed: rhs_uh1h_hidf
	{
		EdPrev(rhs_uh1h_hidf_unarmed)
		AUTHOR_MACRO
		forceInGarage = 1;
		displayName = "UH-1H Unarmed";
		cargoAction[]={"passenger_apc_narrow_generic02","passenger_apc_narrow_generic02","passenger_generic02_foldhands","passenger_generic01_leanleft","passenger_flatground_generic02","passenger_flatground_leanleft","Heli_Light_02_cargo","Heli_Light_02_cargo"};
		transportSoldier = 8;
		cargoProxyIndexes[] = {1,2,3,4,5,6,9,10};
		getInProxyOrder[] = {2,3,1,4,5,6,7,8,9,10};

		class AnimationSources: AnimationSources
		{
			class Hide_mid_doors
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};

			class Hide_guns
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};

		class UserActions
		{
			class Open_Side_Doors
			{
				displayName="Open Side Doors";
				onlyforplayer = 1;
				position= "aimpoint";
				radius=2;
				priority = 1;
				condition="this doorPhase 'close_cargo_doors' > 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',0]";
				showWindow = 0;
			};

			class Close_Side_Doors: Open_Side_Doors
			{
				displayName="Close Side Doors";
				condition="this doorPhase 'close_cargo_doors' == 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',1]";
			};
		};

		class Attributes: Attributes
		{
			class uh1h_textures: uh1h_textures{};

			class close_cargo_doors {
				displayName = "Close Side Doors";
				property = "close_cargo_doors";
				control = "CheckboxNumber";
				defaultValue = "0";
				expression = "_this animateDoor ['%s',_value,true]";
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
		};
	};

	class rhs_uh1h_un: rhs_uh1h_base
	{
		EdPrev(rhs_uh1h_un)
		AUTHOR_MACRO
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction= "rhsgref_faction_un";
		displayName = "UH-1H";
		crew = "rhsgref_cdf_un_pilot";
		typicalCargo[]={"rhsgref_cdf_un_pilot"};
		cargoAction[]={"passenger_apc_narrow_generic02","passenger_apc_narrow_generic02","passenger_generic02_foldhands","passenger_generic01_leanleft","passenger_flatground_generic02","passenger_flatground_leanleft","Heli_Light_02_cargo","Heli_Light_02_cargo"};
		transportSoldier = 8;
		cargoProxyIndexes[] = {1,2,3,4,5,6,9,10};
		getInProxyOrder[] = {2,3,1,4,5,6,9,7,8,10};

	    class TransportMagazines{};
		class TransportItems {};
		class TransportWeapons {};

		hiddenSelections[] ={"Camo1","Camo2","Camo_mlod","decals"};

		hiddenSelectionsTextures[] =
		{
			"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_un_decals_ca.paa"
		};

		class AnimationSources: AnimationSources
		{
			class Hide_mid_doors
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};

			class Hide_guns
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};

		class UserActions
		{
			class Open_Side_Doors
			{
				displayName="Open Side Doors";
				onlyforplayer = 1;
				position= "aimpoint";
				radius=2;
				priority = 1;
				condition="this doorPhase 'close_cargo_doors' > 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',0]";
				showWindow = 0;
			};

			class Close_Side_Doors: Open_Side_Doors
			{
				displayName="Close Side Doors";
				condition="this doorPhase 'close_cargo_doors' == 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',1]";
			};
		};

		class Attributes
		{
			class close_cargo_doors {
				displayName = "Close Cargo Doors";
				property = "close_cargo_doors";
				control = "CheckboxNumber";
				defaultValue = "0";
				expression = "_this animateDoor ['%s',_value,true]";
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
		};
	};

	class rhs_uh1h_idap: rhs_uh1h_base
	{
		EdPrev(rhs_uh1h_idap)
		AUTHOR_MACRO
		scope = 2;
		scopeCurator = 2;
		side = 3;
		displayName = "UH-1H";
		faction= "CIV_IDAP_F";
		crew = "C_IDAP_Pilot_01_F";
		typicalCargo[]={"C_IDAP_Pilot_01_F"};
		cargoAction[]={"passenger_apc_narrow_generic02","passenger_apc_narrow_generic02","passenger_generic02_foldhands","passenger_generic01_leanleft","passenger_flatground_generic02","passenger_flatground_leanleft","Heli_Light_02_cargo","Heli_Light_02_cargo"};
		transportSoldier = 8;
		cargoProxyIndexes[] = {1,2,3,4,5,6,9,10};
		getInProxyOrder[] = {2,3,1,4,5,6,9,10};

	    class TransportMagazines{};
		class TransportItems {};
		class TransportWeapons {};

		hiddenSelections[] ={"Camo1","Camo2","Camo_mlod","decals"};

		hiddenSelectionsTextures[] =
		{
			"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_in_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_idap_decals_ca.paa"
		};

		class AnimationSources: AnimationSources
		{
			class Hide_mid_doors
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};

			class Hide_guns
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};

		class UserActions
		{
			class Open_Side_Doors
			{
				displayName="Open Side Doors";
				onlyforplayer = 1;
				position= "aimpoint";
				radius=2;
				priority = 1;
				condition="this doorPhase 'close_cargo_doors' > 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',0]";
				showWindow = 0;
			};

			class Close_Side_Doors: Open_Side_Doors
			{
				displayName="Close Side Doors";
				condition="this doorPhase 'close_cargo_doors' == 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',1]";
			};
		};

		class Attributes
		{
			class close_cargo_doors {
				displayName = "Close Cargo Doors";
				property = "close_cargo_doors";
				control = "CheckboxNumber";
				defaultValue = "0";
				expression = "_this animateDoor ['%s',_value,true]";
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
		};
	};

	class UWreck_base_F;
	class Land_UH1H_Wreck_F: UWreck_base_F
	{
		EdPrev(Land_UH1H_Wreck_F)
		mapSize = 14;
		scope = 2;
		scopeCurator = 2;
		keepHorizontalPlacement = 1;
		displayName = "UH-1H Wreck";
		model = "rhsgref\addons\rhsgref_air\uh1h\uh1h_wreck.p3d";
		icon = "rhsgref\addons\rhsgref_air\uh1h\ui\icon_uh1h_ca.paa";
		editorSubcategory = "EdSubcat_Helicopters";
	};