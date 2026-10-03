/* - - - [ MACRO ] - - - */
#define Mac_IFV_Army_WD faction = "rhs_faction_usarmy_wd";\
	crew="rhsusf_army_ucp_crewman";\
	AUTHOR_MACRO

#define Mac_IFV_Army_D faction = "rhs_faction_usarmy_d";\
	crew="rhsusf_army_ocp_crewman";\
	AUTHOR_MACRO

#define Mac_AA_Army_WD faction = "rhs_faction_usarmy_wd";\
	vehicleClass = "rhs_vehclass_aa";\
	crew="rhsusf_army_ucp_crewman";\
	AUTHOR_MACRO

#define Mac_AA_Army_D faction = "rhs_faction_usarmy_d";\
	vehicleClass = "rhs_vehclass_aa";\
	crew="rhsusf_army_ocp_crewman";\
	AUTHOR_MACRO


	class RHS_M2A2_Base: APC_Tracked_03_base_F
	{
		dlc = "RHS_USAF";

		category = "Armored";
		destrType = DestructDefault;
		scope = 0;
		#include "cfgSounds.hpp"
		#include "physX.hpp"

		Mac_IFV_Army_D

		vehicleClass = "rhs_vehclass_ifv";
		editorSubcategory = "rhs_EdSubcat_ifv";

		class SpeechVariants
		{
			class Default {
				speechSingular[] = {"veh_vehicle_APC_s"};
				speechPlural[] = {"veh_vehicle_APC_p"};
			};
		};
		textSingular	= "IFV";
		textPlural		= "IFVs";
		nameSound		= "veh_vehicle_APC_s";

		driveOnComponent[]	={"slide","trackL","trackR"};
		unitInfoType		= "RHSUSF_RscUnitInfoWestTank";

		model						= "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A2";
		picture						= "\rhsusf\addons\rhsusf_a2port_armor\pictures\rhs_m2a2_pic_ca.paa";
		Icon						= "\rhsusf\addons\rhsusf_a2port_armor\Data\UI\Icon_m2a2_CA.paa";
		MapSize						= 7;
		displayname					= "M2 Bradley";
		accuracy					= 0.3;
		transportSoldier			= 6;
		getInAction					= "GetInHigh";
		getOutAction				= "GetOutHigh";
		cargoGetInAction[]			= {"GetInLow"};
		cargoGetOutAction[]			= {"GetOutLow"};
		memoryPointsGetInCargo[]	= {"pos cargo","pos cargo 1","pos cargo 2","pos cargo 3"};
		memoryPointsGetInCargoDir[]	= {"pos cargo dir","pos cargo 1 dir","pos cargo dir","pos cargo 2 dir","pos cargo 3 dir"};

		cargoProxyIndexes[] = {1,2,3,4,5,6};
		getInProxyOrder[] = {1,2,3,4,5,6};

		weapons[]	= {rhs_weap_smokegen};
		magazines[]	= {rhs_mag_smokegen};
		rhs_hasSmokeCap = 1;
		reportOwnPosition		= 1;
		delayBetweenEjects = 0.5;

		LODDriverTurnedIn		= 1100;
		LODDriverTurnedOut		= 0;
		LODDriverOpticsIn		= 0;
		viewDriverInExternal	= 1;
		viewCargoShadow			= 1;
		viewCargoShadowDiff		= 0.05;
		viewCargoShadowAmb		= 0.5;
		headGforceLeaningFactor[] 	= {0.015,0.011,0.015};
		maximumLoad = 6000;
		class RenderTargets {};

		driverLeftHandAnimName = yoke;
		driverRightHandAnimName = yoke;

		hiddenSelections[] = {"camo1","camo2","camo3","selection_stinger","selection_tow"};
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Desert
			{
				displayName="Desert";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_d
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
		};
		textureList[]=
		{
		};
		//driverOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
		driverOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
		forceHideDriver = 0;
		DriverForceOptics = 0;
		driverDoor="hatchD";
		dustFrontLeftPos = "wheel_1_4_bound";
		dustFrontRightPos = "wheel_2_4_bound";
		dustBackLeftPos = "wheel_1_7_bound";
		dustBackRightPos = "wheel_2_7_bound";

		radarType = 1;
		LockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		irtarget = 1;
		irScanGround = 0;
		threat[] = {0.9,0.9,0.4};

		// Damage setup
		armor				= 290;
		armorStructural		= 280;
		explosionShielding	= 15;

		class HitPoints: HitPoints
		{
			class HitHull_Structural
			{
				armor				= -600;
				name				= Hit_Engine;
				visual				= "-";
				passThrough			= 0;
				minimalHit			= -0.22;
				explosionShielding	= 0.0;
				radius				= 0.0;
			};
			class HitHull: HitHull
			{
				armor				= -110;
				name				= Hit_Hull;
				armorComponent 		= Hit_Hull;
				visual				= zbytek;
				passThrough			= 0;
				minimalHit			= -0.15;
				explosionShielding	= 0.01;
				radius				= 0.1;
				depends 			= "HitHull_Structural";
			};
			class HitEngine: HitEngine
			{
				armor				= -100;
				name				= Hit_Engine;
				armorComponent 		= Hit_Engine;
				visual				= "zbytek";
				passThrough			= 0;
				minimalHit			= 0.14;
				explosionShielding	= 0.009;
				radius				= 0.17;
				class DestructionEffects
				{
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
				};
			};
			class HitLTrack: HitLTrack
			{
				armor				= -150;
				armorComponent 		= Hit_TrackL;
				name				= Hit_TrackL;
				passThrough			= 0;
				minimalHit			= -0.25;
				explosionShielding	= 0.5;
				radius				= 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor				= -150;
				armorComponent 		= Hit_TrackR;
				name				= Hit_TrackR;
				passThrough			= 0;
				minimalHit			= -0.25;
				explosionShielding	= 0.5;
				radius				= 0.3;
			};
			class Hit_LightL
			{
				armor				= -10;
				name				= "l svetlo";
				visual				= "-";
				passThrough			= 0;
				minimalHit			= -0.1;
				explosionShielding	= 1.0;
				radius				= 0.0;
			};
			class Hit_LightR: Hit_LightL
			{
				name				= "p svetlo";
			};
			class Hit_Optics_Dvr_Peri
			{
				armor				= -40;
				explosionShielding	= 0;
				name				= "";
				visual				= "vis_optics_Dvr_Peri";
				armorComponent		= "Hit_Optics_Dvr_Peri";
				passThrough = 0;
			};
		};

		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				lockWhenDriverOut=1;
				turretInfoType = "RHS_RscODS_ISU";
				/*
					Range knob adjusts in increments of 200 for ranges of 0 to 3000 meters.
					400 meters is the default zero.

					https://i.imgur.com/mALMIXA.jpg
				*/
				discreteDistance[] = {0,200,400,600,800,1000,1200,1400,1600,1800,2000,2200,2400,2600,2800,3000};
				discreteDistanceInitIndex = 2;
				gunnerHasFlares = 0;
				gunnerForceOptics = 1;
				gunnerAction = "RHS_M2A2_GunnerOut";
				gunnerInAction = "RHS_M2A2_Gunner";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerDoor="hatchG";
				minElev = -9;
				maxElev = 57;
				initElev = 0;
				viewGunnerInExternal = 1;
				showCrewAim = 0;
				allowTabLock = 0;

				maxhorizontalrotspeed = 1.04;
				maxverticalrotspeed = 1.04;
				stabilizedinaxes = 3;
				startengine = 0;
				hideWeaponsGunner = 1;

				selectionFireAnim = "zasleh2";

				weapons[] = {"RHS_weap_M242BC","rhs_weap_m240_bradley_coax","Rhs_weap_TOW_Launcher","rhs_weap_fcs_ammo"};
				magazines[]=
				{
					rhs_mag_1100Rnd_762x51_M240,
					rhs_mag_1100Rnd_762x51_M240,

					rhs_mag_230Rnd_25mm_M242_HEI,
					rhs_mag_230Rnd_25mm_M242_HEI,
					rhs_mag_230Rnd_25mm_M242_HEI,

					rhs_mag_70Rnd_25mm_M242_APFSDS,
					rhs_mag_70Rnd_25mm_M242_APFSDS,
					rhs_mag_70Rnd_25mm_M242_APFSDS,

					rhs_mag_2Rnd_TOW2A,
					rhs_mag_2Rnd_TOW2A,
					rhs_mag_2Rnd_TOW2A,
					rhs_mag_2Rnd_TOW2BB,
					rhs_laserfcsmag
				};

				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WIDE";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						VEHICLE_ZOOM_LEVEL(4)
						visionMode[] = {"Normal","Ti"};
						//thermalMode[] = {0,1};
						thermalMode[] = {4}; //red hot chilli
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_ISU";
						gunnerOpticsEffect[] = {};
						hitPoint = Hit_Optics_Gnr;
					};
					class Narrow: Wide
					{
						opticsDisplayName = "NARROW";
						VEHICLE_ZOOM_LEVEL(12)
					};
					//Add gunner's auxillary sight here at some point in the future?
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						memoryPointGunnerOptics= "commanderview";
						minElev = -5;
						maxElev = 5;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						hideWeaponsGunner = 1;
						weapons[] =
						{
							rhsusf_weap_M257_8
						};
						magazines[] =
						{
							rhsusf_mag_L8A3_8
						};
						turretInfoType = "RHS_RscODS_ISU";
						gunnerAction = "RHS_M2A2_CommanderOut";
						gunnerInAction = "RHS_M2A2_Commander";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						gunnerForceOptics = 1;
						gunnerDoor="hatchC";
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\gunnerOptics_M2A2_2";
						gunnerOpticsEffect[] = {};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.067;
							maxFov = 0.155;
						};
						class OpticsIn
						{
							//Mem point should be moved over commander's hatch (corresponds to vision blocks around hatch)
							//Also, current "turret" that rotates on the model is the gunner's auxillary sight, and should be
							//stuck in a forward, fixed position, not rotating.
							class VisionBlock
							{
								opticsDisplayName = "periscope";
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initfov = 0.7;
								minFov = 0.7;
								maxFov = 0.7;
								visionMode[] = {"Normal","NVG"};
								gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
								gunnerOpticsEffect[] = {};
								hitPoint = Hit_Optics_Cdr_Peri;
							};
							//Possibly add gunner's auxillary sight here? It can be used by commander just like GPSE.
							class Wide
							{
								camPos = "gunnerview";
								opticsDisplayName = "WIDE";
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								VEHICLE_ZOOM_LEVEL(4)
								visionMode[] = {"Normal","Ti"};
								//thermalMode[] = {0,1};
								thermalMode[] = {4}; //red hot chilli
								gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_ISU";
								gunnerOpticsEffect[] = {};
								hitPoint = Hit_Optics_Gnr;
							};
							class Narrow: Wide
							{
								opticsDisplayName = "NARROW";
								//gunnerOpticsModel = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\gunnerOptics_M2A2_2";
								VEHICLE_ZOOM_LEVEL(12)
							};
						};
						startEngine = 0;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
						outGunnerMayFire = 1;	// Turn off to make player able to look around freely outside optics view.
						inGunnerMayFire = 1;
						showCrewAim = 0;
						allowTabLock = 0;
						class HitPoints {
							class HitTurretCom
							{
								armor = 0.3;
								material = -1;
								name = "vezVelitele";
								visual="vezVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding=0.001;
								radius = 0.25;
								isTurret = 1;
							};
							class HitGunCom
							{
								armor = 0.3;
								material = -1;
								name = "zbranVelitele";
								visual="zbranVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding=0.001;
								radius = 0.25;
								isGun = 1;
							};
							class Hit_Optics_Cdr_Peri
							{
								armor = -40;
								explosionShielding = 0;
								name = "";
								visual = "vis_optics_Cdr_Peri";
								armorComponent = "Hit_Optics_Cdr_Peri";
								passThrough = 0;
							};
						};
						class Reflectors
						{
							class cabin
							{
								color[]={800,900,650};
								ambient[] = {5,5,5};
								intensity = .3;
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
								color[]={800,900,650};
								position = "cargo_light_1";
								direction = "cargo_light_1_dir";
								hitpoint = "cargo_light_1";
								selection = "cargo_light_1";
								intensity = 3;
								useFlare = 0;
								coneFadeCoef = .1;
								innerAngle = 140;
								outerAngle = 175;
								class Attenuation
								{
									start = 0;
									constant = 0;
									linear = 1;
									quadratic = 70;
									hardLimitStart = 1.4;
									hardLimitEnd = 2.0;
								};
							};
						};
					};
					/*class CargoTurret_01: CargoTurret
					{
						weapons[]= {"rhsusf_weap_DummyLauncher"};
						gunnerAction = "vehicle_turnout_1";
						gunnerInAction = "RHS_M113_Cargo01_FFV";
						animationSourceHatch = "rear_hatch_handler_1";
						isPersonTurret = 1;
						gunnerGetInAction = "GetInMantis";
						gunnerGetOutAction = "GetOutMantis";
						memoryPointsGetInGunner = "pos cargo 2";
						memoryPointsGetInGunnerDir = "pos cargo 2 dir";
						commanding=-2;
						rhs_hatch_control=1;
						rhs_hatch_control_depeneds[]={"rear_hatch_handler_1"};
						enabledByAnimationSource = "rear_hatch";
						//turretInfoType = "rhs_m113_hatch";

						gunnerForceOptics = 0;
						gunnerName = "Passenger (Rear Hatch Right)";
						gunnerCompartments = "Compartment1";
						gunnerDoor="Ramp";
						memoryPointGunnerOptics = "";
						selectionFireAnim = "";
						canHideGunner=1;
						LODTurnedIn = 1200;
						LODTurnedOut = 0;
						proxyIndex = 4;
						maxElev = 45;
						minElev = -20;
						maxTurn = 160;
						minTurn = -120;

						class TurnIn /// limits for gunner turned in
						{
							limitsArrayTop[] = {{1, -1}, {1, 1}};    /// points for the upper curve
							limitsArrayBottom[] = {{-1, -1},{-1, 1}}; /// points for the lower curve
						};
						class TurnOut
						{
							limitsArrayTop[] = {{45,-160},{45,160}};
							limitsArrayBottom[] = {{-7.4646, -161.1738}, {-7.4264, -106.9807}, {-12.8388, -102.0425}, {-10.6611, -88.8004}, {-18.2532, -59.6670}, {-7.4306, -49.4319}, {-11.1057, -49.3832}, {-7.7205, -46.9855}, {-10.1225, -44.3478}, {-19.7726, -28.4836}, {-16.0375, 17.8663}, {-11.9149, 29.7774}, {-7.7212, 38.3127}, {-4.4575, 39.3049}, {-5.2729, 43.6182}, {-1.9005, 48.6889}, {-4.8722, 73.8609}, {-3.9671, 78.4205}, {6.3736, 79.8659}, {15.1750, 91.7335}, {30.0065, 113.7868}, {26.6582, 129.3689}, {3.4023, 135.9187}, {-15.3679, 144.2780}, {-16.1314, 160.0867}};

						};
					};
					class CargoTurret_02: CargoTurret_01
					{
						proxyIndex = 3;
						isPersonTurret = 1;
						gunnerInAction = "RHS_M113_Cargo02_FFV";
						animationSourceHatch = "rear_hatch_handler_2";
						rhs_hatch_control_depeneds[]={"rear_hatch_handler_2"};
						gunnerName = "Passenger (Rear Hatch Left)";
						memoryPointsGetInGunner = "pos cargo";
						memoryPointsGetInGunnerDir = "pos cargo dir";

						class TurnOut
						{
							limitsArrayTop[] = {{45,-120},{45,160}};
							limitsArrayBottom[] = {{-15.0098, -171.6232}, {-16.6821, -154.9577}, {-11.7215, -148.1490}, {-9.7461, -147.7804}, {-9.8556, -146.7728}, {-11.4685, -146.3199}, {-11.5730, -145.9176}, {-16.2240, -137.4480}, {-11.0125, -100.2467}, {9.7255, -98.4888}, {18.6911, -96.8685}, {-9.7613, -96.5088}, {23.9199, -91.8655}, {27.0373, -83.6022}, {27.0452, -68.9423}, {21.0796, -57.9417},{19.9345, -56.8518}, {12.8666, -54.0844}, {-2.7019, -45.4012}, {-2.7096, -44.2127}, {-0.2736, -43.9470}, {0.1972, -38.4689}, {-1.9929, -37.4971}, {-2.2836, -35.1064}, {-0.0074, -34.8379}, {-0.0715, -32.4873}, {-2.0306, -31.7878}, {-5.3829, -23.1603}, {0.1307, -21.0844}, {-8.0524, -10.9118}, {-19.3082, 20.7243}, {-18.4856, 31.6046}, {-12.0216, 43.6287}, {-8.3882, 45.7286}, {-19.8808, 58.2848}, {-18.5240, 94.6759}, {-14.4017, 104.7679}, {-11.3235, 106.2995}, {-12.9417, 112.3525}, {-14.7703, 127.5907}, {-9.6985, 128.7473}, {-9.2638, 131.5782}, {-9.9322, 162.4235}, {-9.1396, 170.7736}};
						};
					};*/
				};

				class HitPoints {
					class HitTurret
					{
						armor				= -60;
						armorComponent 		= Hit_Turret;
						name				= "vez";
						visual				= "vez";
						passThrough			= 0;
						minimalHit			= -0.3;
						explosionShielding	= 0.001;
						radius				= 0.08;
						isTurret 			= 1;
					};
					class HitGun
					{
						armor				= -60;
						armorComponent 		= Hit_Gun;
						name				= "zbran";
						visual				= "-";
						passThrough			= 0;
						minimalHit			= -0.3;
						explosionShielding	= 0.001;
						radius				= 0.1;
						isGun 				= 1;
					};
					class Hit_Optics_Gnr
					{
						armor				= -40;
						explosionShielding	= 0;
						name				= "";
						visual				= "vis_optics_Gnr";
						armorComponent		= "Hit_Optics_Gnr";
						passThrough			= 0;
					};
				};
			};
		};
		driverAction = "RHS_M2A2_DriverOut";
		driverInAction = "RHS_M2A2_Driver";
		cargoAction[] = {"RHS_M113_Cargo03","RHS_M113_Cargo03","RHS_M113_Cargo03","RHS_M113_Cargo02","RHS_M113_Cargo02","RHS_M113_Cargo02"};
		insideSoundCoef = 0.9;
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectTankSide";
			};

		};
		class ViewPilot: ViewPilot
		{
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		class ViewOptics: ViewOptics {
			visionMode[]	= {"Normal","NVG"};
			initFov			= 0.7;
			minFov			= 0.7;
			maxFov			= 0.7;
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				opticsModel		= "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
				hitpoint		= Hit_Optics_Dvr_Peri;
			};
		};

		class TransportBackpacks
		{
			bag_xx(rhsusf_falconii,8);
		};
		class TransportMagazines {
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,75);
			mag_xx(rhsusf_100Rnd_556x45_soft_pouch,11);
			mag_xx(rhsusf_100Rnd_762x51,11);
			mag_xx(rhs_fgm148_magazine_AT,4);
			mag_xx(rhs_mag_M441_HE,20);
			mag_xx(rhs_mag_M714_white,8);
			mag_xx(rhs_mag_M662_red,4);
			mag_xx(rhs_mag_m67,10);
			mag_xx(rhs_mag_m18_green,4);
			mag_xx(rhs_mag_m18_red,4);
			mag_xx(rhs_mag_an_m8hc,10);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,2);
			item_xx(Toolkit,1);
		};
		class TransportWeapons {
			weap_xx(rhs_weap_m4_carryhandle_pmag,4);
			weap_xx(rhs_weap_fgm148,2);
		};
		class EventHandlers: EventHandlers
		{
			class RHSUSF_EventHandlers
			{
				postInit = "_this call rhs_fnc_reapplyTextures";
				getIn	= "_this call rhs_fnc_m2_doors";
				getOut	= "_this call rhs_fnc_m2_doors";
				engine	= "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage";
				//turnIn	= "([0] + _this)  call rhsusf_fnc_turretAction;";
				//turnOut	= "([1] + _this) call rhsusf_fnc_turretAction;";
			};
		};
		class Reflectors {
			class Left {
				color[]			= {1900, 1300, 950};
				ambient[]		= {5,5,5};
				position		= "l svetlo";
				direction		= "konec l svetla";
				hitpointClass	= "Hit_LightL";
				selection		= "L svetlo";
				size			= 1;
				innerAngle		= 30;
				outerAngle		= 100;
				coneFadeCoef	= 10;
				intensity		= 1; //17.5
				useFlare		= 1;
				dayLight		= 0;
				flareSize		= 1.0;
				class Attenuation {
					start			= 1.0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.25;
					hardLimitStart	= 30;
					hardLimitEnd	= 60;
				};
			};
			class Right: Left {
				position		= "p svetlo";
				direction		= "konec p svetla";
				hitpointClass	= "Hit_LightR";
				selection		= "P svetlo";
			};
		};
		aggregateReflectors[] = {{"Left"},{"Right"}};
		armorLights = 0.1;

		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Open ramp";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'ramp' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 1];this setVariable ['ramp_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close ramp";
				condition="this doorPhase 'ramp' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 0];this setVariable ['ramp_handler',0,true]";
			};
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide',[0,0]] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
		};

		class Attributes {
			class ObjectTexture {
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rhs_hideIFFPanel {
				displayName = "Hide IFF Panel";
				property = "rhs_hideIFFPanel";
				control = "CheckboxNumber";
				expression = "_this animate ['IFF_Panels_Hide',_value,true]";
				defaultValue = "0";
			};
			class OpenRamp {
				control = "CheckboxNumber";
				defaultValue = "0";
				displayName = "Open rear ramp";
				property = "OpenRamp";
				expression = "_this animateDoor ['ramp', _value,true];_this setVariable ['ramp_handler',_value,true]";
			};
		};
	};

	class RHS_M2A2: RHS_M2A2_Base
	{
		scope = 2;

		Mac_IFV_Army_D
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A2.paa";

		displayName = "M2A2ODS";
		side = 1;
		class Library
		{
			libTextDesc = "The M2 Bradley IFV (Infantry Fighting Vehicle) is an US infantry fighting vehicle. It is designed to transport infantry with armor protection while providing covering fire to suppressing enemy troops and armored vehicles.<br/>The A2 variant features improvements based on lessons learned during Gulf War in 1991.";
		};
		model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A2";
		cargoDoors[]={"ramp"};
		damageResistance = 0.01189;
		class Damage
		{
			tex[] = {};
			mat[] = {
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class smoke_revolving_source
			{
				source = "revolving";
				weapon = "rhsusf_weap_M257_8";
			};
			class cargolights_hide
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
			};
			class cabinlights_hide: cargolights_hide {};
			class IFF_Panels_Hide
			{
				source = "user";
				mass=-20;
				displayName="hide IFF Panels";
				AUTHOR_MACRO
				animPeriod = 0.00001;
				initPhase=0;
			};
			class recoil_source
			{
				source = "reload";
				weapon = "RHS_weap_M242BC";
			};
			class muzzle_hide_hmg: recoil_source {};
			class muzzle_rot_hmg: recoil_source
			{
				source="ammorandom";
			};
			class muzzle_rot_hmg2: muzzle_rot_hmg
			{
				weapon = "rhs_weap_m240_bradley_coax";
			};
			class Select_TOW
			{
				AUTHOR_MACRO
				displayName="add Stinger launcher";
				forceAnimatePhase=1;
				forceAnimate[] = {"Select_Stinger",0};
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class Select_Stinger: Select_TOW
			{
				initPhase = 1;
				forceAnimatePhase=1;
				displayName="add TOW launcher";
				forceAnimate[] = {"Select_TOW",0};
				onPhaseChanged="_this call rhs_fnc_m2_handleWeaponVG";
			};
			class HatchC
			{
				source="door";
				animPeriod=2.1;
			};
			class HatchG: HatchC {};
			class HatchD: HatchC {};
			class ramp
			{
				source = "door";
				animPeriod = 3.285;
				initPhase = 0;
				sound = "rhs_ramp";
				soundPosition = "ramp_axis";
			};
			class rear_hatch
			{
				source="door";
				animPeriod=0.8;
				initPhase = 0;
			};
		};
	};

	//Needs older style M2A0/A1 ISU sight modeled
	class RHS_M2A2_early: RHS_M2A2
	{
		scope = 0;
		//forceInGarage=1;

		displayName = "M2A2";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] =
				{
					"RHS_weap_M242BC_manual",
					"rhs_weap_m240veh",
					"rhs_weap_TOW_Launcher"
				};
				magazines[]=
				{
					rhs_mag_1100Rnd_762x51_M240,
					rhs_mag_1100Rnd_762x51_M240,

					rhs_mag_230Rnd_25mm_M242_HEI,
					rhs_mag_230Rnd_25mm_M242_HEI,
					rhs_mag_230Rnd_25mm_M242_HEI,

					rhs_mag_70Rnd_25mm_M242_APFSDS,
					rhs_mag_70Rnd_25mm_M242_APFSDS,
					rhs_mag_70Rnd_25mm_M242_APFSDS,

					rhs_mag_2Rnd_TOW2,
					rhs_mag_2Rnd_TOW2,
					rhs_mag_2Rnd_TOW2,
					rhs_mag_2Rnd_TOW2
				};

				turretInfoType = "RHS_Rsc_ISU";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType = "RHS_Rsc_ISU";
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source: recoil_source
			{
				weapon = "RHS_weap_M242BC_manual";
			};
			class muzzle_hide_hmg: recoil_source {};
			class muzzle_rot_hmg: recoil_source
			{
				source="ammorandom";
			};
			class muzzle_rot_hmg2: muzzle_rot_hmg
			{
				weapon = "rhs_weap_m240veh";
			};
		};
	};

	class RHS_M2A2_BUSKI : RHS_M2A2
	{

		Mac_IFV_Army_D

		displayName = "M2A2ODS (BUSK I)";
		model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A2_ERA";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A2_BUSKI.paa";
		damageResistance = 0.01101;

		hiddenSelections[] = {"camo1","camo2","camo3","selection_stinger","selection_tow"};
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_buski_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Desert
			{
				displayName="Desert";
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_buski_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_d
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Select_TOW: Select_TOW
			{
				scope = 0;
			};
			class Select_Stinger: Select_Stinger
			{
				scope = 0;
			};
			ANIM_ERA(1)
			ANIM_ERA(2)
			ANIM_ERA(3)
			ANIM_ERA(4)
			ANIM_ERA(5)
			ANIM_ERA(6)
			ANIM_ERA(7)
			ANIM_ERA(8)
			ANIM_ERA(9)
			ANIM_ERA(10)
			ANIM_ERA(11)
			ANIM_ERA(12)
			ANIM_ERA(13)
			ANIM_ERA(14)
			ANIM_ERA(15)
			ANIM_ERA(16)
			ANIM_ERA(17)
			ANIM_ERA(18)
			ANIM_ERA(19)
			ANIM_ERA(20)
			ANIM_ERA(21)
			ANIM_ERA(22)
			ANIM_ERA(23)
			ANIM_ERA(24)
			ANIM_ERA(25)
			ANIM_ERA(26)
			ANIM_ERA(27)
			ANIM_ERA(28)
			ANIM_ERA(29)
			ANIM_ERA(30)
			ANIM_ERA(31)
			ANIM_ERA(32)
			ANIM_ERA(33)
			ANIM_ERA(34)
			ANIM_ERA(35)
			ANIM_ERA(36)
			ANIM_ERA(37)
			ANIM_ERA(38)
			ANIM_ERA(39)
			ANIM_ERA(40)
			ANIM_ERA(41)
			ANIM_ERA(42)
			ANIM_ERA(43)
			ANIM_ERA(44)
			ANIM_ERA(45)
		};

		class HitPoints: HitPoints
		{
			HP_ERA_BUSK(1)
			HP_ERA_BUSK(2)
			HP_ERA_BUSK(3)
			HP_ERA_BUSK(4)
			HP_ERA_BUSK(5)
			HP_ERA_BUSK(6)
			HP_ERA_BUSK(7)
			HP_ERA_BUSK(8)
			HP_ERA_BUSK(9)
			HP_ERA_BUSK(10)
			HP_ERA_BUSK(11)
			HP_ERA_BUSK(12)
			HP_ERA_BUSK(13)
			HP_ERA_BUSK(14)
			HP_ERA_BUSK(15)
			HP_ERA_BUSK(16)
			HP_ERA_BUSK(17)
			HP_ERA_BUSK(18)
			HP_ERA_BUSK(19)
			HP_ERA_BUSK(20)
			HP_ERA_BUSK(21)
			HP_ERA_BUSK(22)
			HP_ERA_BUSK(23)
			HP_ERA_BUSK(24)
			HP_ERA_BUSK(25)
			HP_ERA_BUSK(26)
			HP_ERA_BUSK(27)
			HP_ERA_BUSK(28)
			HP_ERA_BUSK(29)
			HP_ERA_BUSK(30)
			HP_ERA_BUSK(31)
			HP_ERA_BUSK(32)
			HP_ERA_BUSK(33)
			HP_ERA_BUSK(34)
			HP_ERA_BUSK(35)
			HP_ERA_BUSK(36)
			HP_ERA_BUSK(37)
			HP_ERA_BUSK(38)
			HP_ERA_BUSK(39)
			HP_ERA_BUSK(40)
			HP_ERA_BUSK(41)
			HP_ERA_BUSK(42)
			HP_ERA_BUSK(43)
			HP_ERA_BUSK(44)
			HP_ERA_BUSK(45)
		};
	};

	class RHS_M2A3 : RHS_M2A2
	{
		Mac_IFV_Army_D

		displayName = "M2A3";
		model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A3";
		picture = "\rhsusf\addons\rhsusf_a2port_armor\pictures\rhs_m2a3_pic_ca.paa";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3.paa";
		damageResistance = 0.01189;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Desert
			{
				displayName="Desert";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_d
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
		};
		class AnimationSources
		{
			class smoke_revolving_source
			{
				source = "revolving";
				weapon = "rhsusf_weap_M257_8";
			};
			class cargolights_hide
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
			};
			class cabinlights_hide: cargolights_hide {};
			class  IFF_Panels_Hide
			{
				source = "user";
				mass=-20;
				displayName="hide IFF Panels";
				AUTHOR_MACRO
				animPeriod = 0.00001;
				initPhase=0;
			};

			class recoil_source
			{
				source = "reload";
				weapon = "RHS_weap_M242BC";
			};
			class muzzle_hide_hmg: recoil_source {};
			class muzzle_rot_hmg: recoil_source
			{
				source="ammorandom";
			};
			class muzzle_rot_hmg2: muzzle_rot_hmg
			{
				weapon = "rhs_weap_m240_bradley_coax";
			};
			class HatchC
			{
				source="door";
				animPeriod=2.1;
			};
			class HatchG: HatchC {};
			class HatchD: HatchC {};
			class ramp
			{
				source = "door";
				animPeriod = 5;
				initPhase = 0;
				sound = "ServoRampSound_2";
				soundPosition = "ramp_axis";
			};
		};
		class HitPoints: HitPoints
		{
			class Hit_Optics_Dvr_DVE
			{
				armor				= -40;
				explosionShielding	= 0;
				name				= "";
				visual				= "vis_optics_Dvr_RVE";
				armorComponent		= "Hit_Optics_Dvr_DVE";
				passThrough = 0;
			};
			class Hit_Optics_Dvr_RearCam
			{
				armor				= -40;
				explosionShielding	= 0;
				name				= "";
				visual				= "vis_optics_Dvr_RearCam";
				armorComponent		= "Hit_Optics_Dvr_RearCam";
				passThrough = 0;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RHS_RscIBAS";

				magazines[]=
				{
					rhs_mag_1100Rnd_762x51_M240,
					rhs_mag_1100Rnd_762x51_M240,

					rhs_mag_230Rnd_25mm_M242_HEI,
					rhs_mag_230Rnd_25mm_M242_HEI,
					rhs_mag_230Rnd_25mm_M242_HEI,

					rhs_mag_70Rnd_25mm_M242_APFSDS,
					rhs_mag_70Rnd_25mm_M242_APFSDS,
					rhs_mag_70Rnd_25mm_M242_APFSDS,

					rhs_mag_2Rnd_TOW2B_AERO,
					rhs_mag_2Rnd_TOW2B_AERO,
					rhs_mag_2Rnd_TOW2A,
					rhs_mag_2Rnd_TOW2BB,
					rhs_laserfcsmag
				};

				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "60HZ";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						VEHICLE_ZOOM_LEVEL(4)
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_4x";
						gunnerOpticsEffect[] = {};
						hitPoint = Hit_Optics_Gnr;
					};
					class Narrow: Wide
					{
						opticsDisplayName = "60HZ";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_12x";
						VEHICLE_ZOOM_LEVEL(12)
					};
					class Narrow2x: Narrow
					{
						opticsDisplayName = "60HZ 2X";
						//From the manual: "The Bradley M2A3 gun reticle has no zoom."
						//gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_24x";
						VEHICLE_ZOOM_LEVEL(24)
					};
					class Narrow4x: Narrow
					{
						opticsDisplayName = "60HZ 4X";
						//gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_48x";
						VEHICLE_ZOOM_LEVEL(48)
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType = "RHS_RscCIV";
						stabilizedInAxes = "StabilizedInAxesBoth";
						gunnerOpticsModel = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\comTI_M2A2";
						gunnerOpticsEffect[] = {};
						class ViewOptics: ViewOptics
						{
							initFov = 0.466;
							minFov = 0.015;
							maxFov = 0.466;
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {0,1};
						};
						minElev = -22;
						maxElev = 60;
						minTurn = -360;
						maxTurn = 360;
						class OpticsIn
						{
							//1X optical sight
							//Not sure if real or not... only one picture suggests it exists
							class Ultrawide
							{
								opticsDisplayName = "60HZ";
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								VEHICLE_ZOOM_LEVEL(1)
								visionMode[] = {"Normal","Ti"};
								thermalMode[] = {0,1};
								gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_1x";
								gunnerOpticsEffect[] = {};
								hitPoint = Hit_Optics_Cdr_CIV;
							};
							//4X optical zoom
							class Wide: Ultrawide
							{
								opticsDisplayName = "60HZ";
								VEHICLE_ZOOM_LEVEL(4)
								gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_4x";
							};
							//12X optical zoom
							class Narrow: Ultrawide
							{
								opticsDisplayName = "60HZ";
								gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_12x";
								VEHICLE_ZOOM_LEVEL(12)
							};
							//Digital zoom
							class Narrow2x: Narrow
							{
								opticsDisplayName = "60HZ 2X";
								//From the manual: "The Bradley M2A3 gun reticle has no zoom."
								//gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_24x";
								VEHICLE_ZOOM_LEVEL(24)
							};
							//Digital zoom
							class Narrow4x: Narrow
							{
								opticsDisplayName = "60HZ 4X";
								//gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_48x";
								VEHICLE_ZOOM_LEVEL(48)
							};
						};
						class HitPoints: HitPoints
						{
							class Hit_Optics_Cdr_CIV
							{
								armor = -40;
								explosionShielding = 0;
								name = "";
								visual = "vis_optics_Cdr_CIV";
								armorComponent = "Hit_Optics_Cdr_CIV";
								passThrough = 0;
							};
						};
					};
				};
			};
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				camPos			= view_driver;
				opticsModel		= "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
				visionMode[]	= {"Normal"};
				hitpoint		= Hit_Optics_Dvr_Peri;
			};
			class DVE_Wide: Wide
			{
				camPos			= view_DVE;
				opticsModel		= "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
				visionMode[]	= {"TI"};
				thermalMode[] 	= {0,1};
				initFov			= __EVAL(0.7/0.65);
				minFov			= __EVAL(0.7/0.65);
				maxFov			= __EVAL(0.7/0.65);
				hitpoint		= Hit_Optics_Dvr_DVE;
			};
			class DVS_Rear: DVE_Wide
			{
				camPos			= view_rear;
				camDir			= view_rear_dir;
				opticsModel		= "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE2_4x3";
				hitpoint		= Hit_Optics_Dvr_RearCam;
			};
		};
	};

	class RHS_M2A3_BUSKI : RHS_M2A3
	 {
		Mac_IFV_Army_D

		rhs_duke_type = "rhsusf_duke_m1a2";

		displayName = "M2A3 (BUSK I)";
		model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A3_ERA";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_BUSKI.paa";
		damageResistance = 0.01189;
		hiddenSelections[] = {"camo1","camo2","camo3","duke_tex"};
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_buski_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
			"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Desert
			{
				displayName="Desert";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_buski_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
					"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_d
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class  DUKE_Hide
			{
				source = "user";
				mass=-20;
				displayName="hide DUKE antennas";
				animPeriod = 0.00001;
				initPhase=0;
				onPhaseChanged = "_this + ([[0,0]]) call rhs_fnc_duke_vg;";
			};
			class HitDuke1
			{
				source = "Hit";
				hitpoint = "HitDuke1";
			};
			class HitDuke2: HitDuke1
			{
				hitpoint = "HitDuke2";
			};
			ANIM_ERA(1)
			ANIM_ERA(2)
			ANIM_ERA(3)
			ANIM_ERA(4)
			ANIM_ERA(5)
			ANIM_ERA(6)
			ANIM_ERA(7)
			ANIM_ERA(8)
			ANIM_ERA(9)
			ANIM_ERA(10)
			ANIM_ERA(11)
			ANIM_ERA(12)
			ANIM_ERA(13)
			ANIM_ERA(14)
			ANIM_ERA(15)
			ANIM_ERA(16)
			ANIM_ERA(17)
			ANIM_ERA(18)
			ANIM_ERA(19)
			ANIM_ERA(20)
			ANIM_ERA(21)
			ANIM_ERA(22)
			ANIM_ERA(23)
			ANIM_ERA(24)
			ANIM_ERA(25)
			ANIM_ERA(26)
			ANIM_ERA(27)
			ANIM_ERA(28)
			ANIM_ERA(29)
			ANIM_ERA(30)
			ANIM_ERA(31)
			ANIM_ERA(32)
			ANIM_ERA(33)
			ANIM_ERA(34)
			ANIM_ERA(35)
			ANIM_ERA(36)
			ANIM_ERA(37)
			ANIM_ERA(38)
			ANIM_ERA(39)
			ANIM_ERA(40)
			ANIM_ERA(41)
			ANIM_ERA(42)
			ANIM_ERA(43)
			ANIM_ERA(44)
			ANIM_ERA(45)
		};

		class HitPoints: HitPoints
		{
			class HitDuke1
			{
				armor = 0.75;
				material = -1;
				name = "duke1";
				visual = "-";
				passThrough = 0;
				MinimalHit = 0.05;
				explosionShielding = 0.01;
				radius = 0.15;
			};
			class HitDuke2: HitDuke1
			{
				name = "duke2";
				visual = "-";
			};
			HP_ERA_BUSK(1)
			HP_ERA_BUSK(2)
			HP_ERA_BUSK(3)
			HP_ERA_BUSK(4)
			HP_ERA_BUSK(5)
			HP_ERA_BUSK(6)
			HP_ERA_BUSK(7)
			HP_ERA_BUSK(8)
			HP_ERA_BUSK(9)
			HP_ERA_BUSK(10)
			HP_ERA_BUSK(11)
			HP_ERA_BUSK(12)
			HP_ERA_BUSK(13)
			HP_ERA_BUSK(14)
			HP_ERA_BUSK(15)
			HP_ERA_BUSK(16)
			HP_ERA_BUSK(17)
			HP_ERA_BUSK(18)
			HP_ERA_BUSK(19)
			HP_ERA_BUSK(20)
			HP_ERA_BUSK(21)
			HP_ERA_BUSK(22)
			HP_ERA_BUSK(23)
			HP_ERA_BUSK(24)
			HP_ERA_BUSK(25)
			HP_ERA_BUSK(26)
			HP_ERA_BUSK(27)
			HP_ERA_BUSK(28)
			HP_ERA_BUSK(29)
			HP_ERA_BUSK(30)
			HP_ERA_BUSK(31)
			HP_ERA_BUSK(32)
			HP_ERA_BUSK(33)
			HP_ERA_BUSK(34)
			HP_ERA_BUSK(35)
			HP_ERA_BUSK(36)
			HP_ERA_BUSK(37)
			HP_ERA_BUSK(38)
			HP_ERA_BUSK(39)
			HP_ERA_BUSK(40)
			HP_ERA_BUSK(41)
			HP_ERA_BUSK(42)
			HP_ERA_BUSK(43)
			HP_ERA_BUSK(44)
			HP_ERA_BUSK(45)
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						isPersonTurret=0;
						gunnerInAction = "RHS_M2A3_Commander";

						weapons[] =
						{
							rhsusf_weap_M257_8,
							rhsusf_weap_duke
						};
						magazines[] =
						{
							rhsusf_mag_L8A3_8,
							rhsusf_mag_duke
						};
					};
				};
			};
		};
		class Attributes: Attributes {
			class ObjectTexture: ObjectTexture {};
			class rhs_hideIFFPanel: rhs_hideIFFPanel {};
			class rhs_hideDUKE : rhs_hideIFFPanel {
				displayName="hide DUKE antennas";
				property = "rhs_hideDUKE";
				expression = "_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[0,0]]};";
			};
			class OpenRamp: OpenRamp {};
		};
		class EventHandlers: EventHandlers
		{
			class rhs_duke
			{
				handleDamage = "_this call rhs_fnc_duke_destruction";
			};
		};
	};

	class RHS_M2A3_BUSKIII : RHS_M2A3_BUSKI
	 {

		Mac_IFV_Army_D

		rhs_duke_type = "rhsusf_duke";

		displayName = "M2A3 (BUSK III)";
		model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A3_ERA2";
		picture = "\rhsusf\addons\rhsusf_a2port_armor\pictures\rhs_m2a3b_pic_ca.paa";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_BUSKIII.paa";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","duke_tex"};
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii_co.paa",
			"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
					"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Desert
			{
				displayName="Desert";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii_co.paa",
					"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_d
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
					"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
		};
		damageResistance = 0.01189;
		class AnimationSources: AnimationSources
		{
			ANIM_ERA(46)
			ANIM_ERA(47)
			ANIM_ERA(48)
			ANIM_ERA(49)
			ANIM_ERA(50)
			ANIM_ERA(51)
			ANIM_ERA(52)
			ANIM_ERA(53)
			ANIM_ERA(54)
			ANIM_ERA(55)
			ANIM_ERA(56)
			ANIM_ERA(57)
			ANIM_ERA(58)
			ANIM_ERA(59)
		};
		class HitPoints: HitPoints
		{
			HP_ERA_BUSK(46)
			HP_ERA_BUSK(47)
			HP_ERA_BUSK(48)
			HP_ERA_BUSK(49)
			HP_ERA_BUSK(50)
			HP_ERA_BUSK(51)
			HP_ERA_BUSK(52)
			HP_ERA_BUSK(53)
			HP_ERA_BUSK(54)
			HP_ERA_BUSK(55)
			HP_ERA_BUSK(56)
			HP_ERA_BUSK(57)
			HP_ERA_BUSK(58)
			HP_ERA_BUSK(59)
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\BUSKIII.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\BUSKIII_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\BUSKIII_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
	};

	class RHS_M2A3_BUSKIII_wd : RHS_M2A3_BUSKIII
	 {

		Mac_IFV_Army_WD
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_BUSKIII_wd.paa";

		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
			"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
		};
	};

	class RHS_M6: RHS_M2A2_Base
	{

		Mac_IFV_Army_D

		scope = 2;
		displayName = "M6A2";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M6.paa";
		side = 1;
		damageResistance = 0.01101;
		cargoDoors[]={"ramp"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"RHS_weap_M242BC","rhs_weap_m240_bradley_coax","Rhs_weap_stinger_Launcher","rhs_weap_fcs_ammo"};
				magazines[] = {"rhs_mag_1100Rnd_762x51_M240","rhs_mag_1100Rnd_762x51_M240","Rhs_mag_4Rnd_stinger","Rhs_mag_4Rnd_stinger","Rhs_mag_4Rnd_stinger","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_230Rnd_25mm_M242_HEI","rhs_laserfcsmag","rhs_laserfcsmag"};
			};
		};
		class Library
		{
			libTextDesc = "The M6 Linebacker is an air-defense variant of the M2A2 Bradley. It features two four-tube Stinger missile pods. The Linebacker is due to be retired from U.S. service.";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_destruct.rvmat",

				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_damage.rvmat",
				"rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class  IFF_Panels_Hide
			{
				source = "user";
				mass=-20;
				displayName="hide IFF Panels";
				AUTHOR_MACRO
				animPeriod = 0.00001;
				initPhase=0;
			};
			class recoil_source
			{
				source = "reload";
				weapon = "RHS_weap_M242BC";
			};

			class muzzle_hide_hmg: recoil_source {};
			class muzzle_rot_hmg: recoil_source
			{
				source="ammorandom";
			};
			class muzzle_rot_hmg2: muzzle_rot_hmg
			{
				weapon = "rhs_weap_m240_bradley_coax";
			};
			class Select_TOW
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 1;
			};
			class Select_Stinger: Select_TOW
			{
				initPhase = 0;
			};
			class HatchC
			{
				source="door";
				animPeriod=2.1;
			};
			class HatchG: HatchC {};
			class HatchD: HatchC {};
			class ramp
			{
				source = "door";
				animPeriod = 5;
				initPhase = 0;
				sound = "ServoRampSound_2";
				soundPosition = "ramp_axis";
			};
		};
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
			""
		};
		threat[] = {0.9,0.3,1};

		class TransportMagazines
		{
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,75);
			mag_xx(rhsusf_100Rnd_556x45_soft_pouch,11);
			mag_xx(rhsusf_100Rnd_762x51,11);
			mag_xx(rhs_fim92_mag,4);
			mag_xx(rhs_mag_M441_HE,20);
			mag_xx(rhs_mag_M714_white,8);
			mag_xx(rhs_mag_M662_red,4);
			mag_xx(rhs_mag_m67,10);
			mag_xx(rhs_mag_m18_green,4);
			mag_xx(rhs_mag_m18_red,4);
			mag_xx(rhs_mag_an_m8hc,10);
			mag_xx(rhs_M136_mag,2);
		};

		class TransportWeapons {
			weap_xx(rhs_weap_m4_carryhandle_pmag,4);
			weap_xx(rhs_weap_fim92,2);
			weap_xx(rhs_weap_M136,2);
		};
	};

	class RHS_M2A2_wd : RHS_M2A2
	{
		scope = 2;

		Mac_IFV_Army_WD
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A2_wd.paa";

		hiddenSelections[] = {"camo1","camo2","camo3","selection_stinger","selection_tow"};
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"
		};

	};

	class RHS_M2A2_BUSKI_WD : RHS_M2A2_BUSKI
	{
		scope = 2;

		Mac_IFV_Army_WD
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A2_BUSKI_WD.paa";

		hiddenSelections[] = {"camo1","camo2","camo3","selection_stinger","selection_tow"};
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"
		};
	};

	class RHS_M2A3_BUSKI_wd : RHS_M2A3_BUSKI
	{
		scope = 2;

		Mac_IFV_Army_WD
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_BUSKI_wd.paa";

		hiddenSelections[] = {"camo1","camo2","camo3","duke_tex"};
		hiddenSelectionsTextures[] =
		{
		"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
		"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa",
		"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
		"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
		};
	};
	class RHS_M2A3_wd : RHS_M2A3
	{
		scope = 2;

		Mac_IFV_Army_WD
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_wd.paa";

			hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] =
		{
		"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
		"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa",
		"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa"
		};
	};

	class RHS_M6_wd : RHS_M6
	{
		scope = 2;
		displayName = "M6A2";
		editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M6_wd.paa";

		Mac_IFV_Army_WD

		hiddenSelections[] = {"camo1","camo2","camo3","selection_stinger","selection_tow"};
		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
			""
		};
	};