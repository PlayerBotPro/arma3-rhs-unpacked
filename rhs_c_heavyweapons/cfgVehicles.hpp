#define CTI_Indep_Macro scope = 1;
#define crewMacro(sideN,factionN,crewN) \
		side=sideN; \
		author="Red Hammer Studios";\
		faction=factionN; \
		crew=crewN; \
		typicalCargo[]= {crewN};

//MSV
#define mF1 rhs_faction_msv
//Crew Name Macro
#define mC1 rhs_msv_rifleman
//VDV
#define mF2 rhs_faction_vdv
//Crew Name Macro
#define mC2 rhs_vdv_rifleman
//VMF
#define mF4 rhs_faction_vmf
//Crew Name Macro
#define mC4 rhs_vmf_flora_rifleman
//INSURGENTS
#define mF3 rhs_faction_insurgents
//Crew Name Macro
#define mC3 rhs_g_Soldier_F

#define PICTURE_MACRO(name) picture = \rhsafrf\addons\rhs_heavyweapons\data\ico\##name##.paa;
		//UiPicture = \rhsafrf\addons\rhs_heavyweapons\data\ico\##name##.paa;
#define ASSEMBLE_INFO(bagName, tripodName) \
		class assembleInfo \
		{ \
			primary = 0; \
			base = ""; \
			assembleTo = ""; \
			dissasembleTo[] = {bagName, tripodName}; \
			displayName = ""; \
		};
#define STATIC_WEAPON_HP class Hitpoints {class HitHull {armor = 1;passThrough = 1;name = telo;};};

	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class EventHandlers;
		class ViewPilot;
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported = 0;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class StaticMGWeapon: StaticWeapon{};
	class StaticATWeapon: StaticWeapon {};
	class StaticAAWeapon: StaticWeapon {};
	class StaticCannon: StaticWeapon {class ViewOptics;};
	class StaticGrenadeLauncher: StaticWeapon {class ViewOptics;};
	class StaticMortar: StaticWeapon {};

	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class EventHandlers;
	};
	class RHS_TowedWeapons_Base: Helicopter_Base_F
	{
		simulation				= helicopterX;
		destrType				= DestructDefault;
		armor					= 80;
		armorStructural			= 50;
		epeImpulseDamageCoef	= 1;
		gearRetracting			= 1;
		hasDriver				= 0;
		secondaryExplosion = 0;
		fuelExplosionPower = 0;
		disableInventory = 1;
		class Hitpoints {};
		class Reflectors {};
		class Turrets {};
		class UserActions
		{
			class Detach: RHS_UserAction_Towing_Detach {};
		};
		class EventHandlers: EventHandlers
		{
			killed = "_this call rhs_fnc_towing_destroyed";
		};
	};
	class RHS_FakeCarrier: StaticWeapon 
	{
		scope = 1;
		model = "\rhsafrf\addons\rhs_heavyweapons\data\rhs_fakeTow";
		accuracy = 1000;
		hiddenSelections[] = {"Camo_1"};
		class Turrets {};
		class RHS_TowingSystem
		{
			class Carrier
			{
				rhs_maxCargoMass		= 9999;
				rhs_attachPoint			= "";
				rhs_attachPointPos[]	= {0,0,0};
			};
		};
	};


	class RHS_ZU23_base: StaticCannon
	{
		dlc = "RHS_AFRF";
		mapSize = 2.5;
		displayname="ZU-23-2";
		model="\rhsafrf\addons\rhs_heavyweapons\ZU23\rhs_zu23";
		class Library
		{
			libTextDesc="ZU-23-2";
		};
		icon= "\rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_zu23_CA.paa";
		PICTURE_MACRO(RHS_ZU23_MSV_ca)
		transportSoldier = 0;
		memoryPointsGetInCargo		= "pos_cargo_dir";
		memoryPointsGetInCargoDir	= "pos_cargo";
		memoryPointsGetInDriver		= "pos_driver_dir";
		memoryPointsGetInDriverDir	= "pos_driver";

		hiddenSelections[]			={};
		hiddenSelectionsTextures[]	={};

		STATIC_WEAPON_HP
		armorStructural = 4;
		explosionShielding = 0.5;
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4","SlingLoadCargo5"};

		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn		= -180;
				maxTurn		= 180;
				initTurn	= 0;
				minElev		= -10;
				maxElev		= 85;
				initElev	= 0;
				maxHorizontalRotSpeed = 0.55;	// 1 = 45*/sec
				maxVerticalRotSpeed = 0.35;		// 1 = 45*/sec
				weapons[]={rhs_weap_2A14};
				canUseScanner = 0;
				magazines[]=
				{
					RHS_mag_AZP23_100,
					RHS_mag_AZP23_100,
					RHS_mag_AZP23_100,
					RHS_mag_AZP23_100,
					RHS_mag_AZP23_100,
					RHS_mag_AZP23_100
				};
				gunnerAction			="RHS_Zu23_Gunner";
				gunnerInAction			="RHS_Zu23_Gunner";
				gunnerGetInAction		= "GetInHeli_Transport_01Cargo";
				gunnerLeftHandAnimName	= handle_elev_hand;
				gunnerRightHandAnimName	= handle_trav_hand;
				gunnerLeftLegAnimName	= otocVez;
				gunnerRightLegAnimName	= otocVez;
				animationSourceStickX	= MainTurret_Inertia;
				animationSourceStickY	= MainGun_Inertia;
				selectionFireAnim		= "zasleh";
				gunnerOpticsModel		= "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope";
				soundServo[]			= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret", 1.4, 1.0,30};
				soundServoVertical[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret_elev", 2, 1.0,30};
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				gunnerForceOptics=0;
				memoryPointGun[] = {"muzzle_1","muzzle_2"};
				lodTurnedIn = 0;
				lodTurnedOut = 0;
				turretInfoType = "RHS_RscWeaponZU23_T3_Optic";
				class ViewGunner
				{
					initAngleX=-0;
					initAngleY=-9;
					minAngleX=-30;
					maxAngleX=30;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.7;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.093;
					minFov=0.093;
					maxFov=0.093;
				};
				class OpticsIn
				{
					class Collimator: ViewOptics
					{
						opticsDisplayName	= "COLLIMATOR";
						VEHICLE_ZOOM_LEVEL(1.1)
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					};
					class CollimatorZoom: Collimator
					{
						VEHICLE_ZOOM_LEVEL(2)
					};
					class T3_Optic
					{
						opticsDisplayName	= "T3";
						camPos				= commanderview;
						camDir				= view_t3_dir;
						initAngleX			= 0;
						minAngleX			= -30;
						maxAngleX			= 30;
						initAngleY			= 0;
						minAngleY			= -100;
						maxAngleY			= 100;
						VEHICLE_ZOOM_LEVEL(3.5)
						visionMode[]		= {"Normal"};
						gunnerOpticsModel	= "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope.p3d";
					};
				};
				disableSoundAttenuation = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor				= -100;
						material			= -1;
						name				= Hit_Turret;
						armorComponent 		= Hit_Turret;
						visual				= "vez";
						passThrough			= 0.015;
						minimalHit			= -0.2;
						explosionShielding	= 0.1;
						radius				= 0.1;
					};
					class HitGun	{
						armor				= -100;
						material			= -1;
						name				= Hit_Gun;
						armorComponent 		= Hit_Gun;
						visual				= "-";
						passThrough			= 0.015;
						minimalHit			= -0.2;
						explosionShielding	= 0.1;
						radius				= 0.1;
					};
					class Hit_Optic_Collimator		{armor	= -40;explosionShielding = 0;name = "";visual = "vis_optic_TPN4";				armorComponent = "Hit_Optic_ESSA";			passThrough = 0;};
					class Hit_Optic_T3				{armor	= -40;explosionShielding = 0;name = "";visual = "vis_optic_TPN4";				armorComponent = "Hit_Optic_ESSA";			passThrough = 0;};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "vehicle_coshooter_1";

				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "Crouch";
				gunnerReversedGetOut = 0;

				memoryPointsGetInGunner = "pos_cargo";
				memoryPointsGetInGunnerDir = "pos_cargo_dir";
				gunnerName = "Loader";
				primaryObserver = 0;
				dontCreateAI=0;
				commanding = 1;
				gunnerCompartments = "Compartment1";
				proxyIndex = 1;
				maxElev = 45;
				minElev = -15;
				maxTurn = 64;
				minTurn = -65;
				isPersonTurret = 1;
				gunnerUsesPilotView = 1;
				memorypointgunneroptics = "";
				selectionFireAnim="";
				lodTurnedIn = 0;
				lodTurnedOut = 0;

				playerPosition = 2;
				//soundAttenuationTurret = "HeliAttenuationGunner";
				//disableSoundAttenuation = 0;
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="rhs_weap_2A14";
			};
			class fire_anim: muzzle_source {source="revolving";};
			class muzzleHMG_ROT: muzzle_source {source="ammorandom";};
			class ReloadMagazine: muzzle_source {source="reloadmagazine";};
			class Unfold 
			{
				displayname = "unfold";
				useSource = 1;
				source="user";
				animPeriod = 1.6;
				initPhase=0;
			};
			class maingunT_source {source="user";animPeriod = 1;initPhase=0; };
			class mainTurretT_source: maingunT_source {};
			class Elevation
			{
				source		= "user";
				animPeriod	= 0.1;
				initPhase	= 5;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_destruct.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class UserActions
		{
			class Fold
			{
				displayNameDefault	= "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' size='3.5' /> Static Mode";
				displayName			= "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' /> Switch to static mode";
				position			= "";
				radius				= 2.51;
				onlyForplayer		= 0;
				priority			= 10;
				condition			= "(alive this) && (this animationPhase 'Unfold' isEqualTo 1) && {this getVariable ['rhs_heavyWeapon_packing,true]}";
				statement			= "[this,0] call rhs_fnc_zu23_pack;";
			};
			class Unfold: Fold
			{
				priority = 0;
				displayNameDefault	= "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' size='3.5' /> Moving Mode";
				displayName			= "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' /> Switch to moving mode";
				condition	= "(alive this) && ((count (crew this)) == 0) && (this  animationPhase 'Unfold' <= 0.01) && {this getVariable ['rhs_heavyWeapon_packing,true]}";
				statement	= "[this,1] call rhs_fnc_zu23_pack;";
			};
			class AttachVehicle: RHS_UserAction_Towing_Attach
			{
				position = "tow_point";
				condition = "(alive this)&& (this  animationPhase 'Unfold' >= 0.99)";
			};
			class DragVehicle: RHS_UserAction_Towing_Drag
			{
				position = "tow_point";
				condition = "(alive this) && (this  animationPhase 'Unfold' >= 0.99)";
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass			= "O_Parachute_02_F";
				parachuteHeightLimit	= 5;
				canBeTransported		= 1;
				dimensions[]			= {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
		class RHS_TowingSystem
		{
			class Cargo
			{
				rhs_fakeVehicle = "rhs_ZU23_towingVehicle"; // Fake helicopterX vehicle which will be used for towing simulation
				rhs_animationsOnAttach[] = // List of animations which will be played when vehicle is attached to carrier
				{
					"Pins_Raise",1 // nameOfAnimation, targetPhase
				};
				rhs_animationsOnDetach[] = 
				{
					"Pins_Raise",0 // nameOfAnimation, targetPhase
				};
				rhs_towedMass = 420;
				rhs_towingPoint = "tow_point"; // Memory point where rope will be attached
				rhs_additionalRopeOffset[] = {0,0,0.6}; // Offset of 2nd, helper rope. That offset is applied to carrier memory point
				rhs_ropeLength = 0.1; // Not used right now
				rhs_maxAttachDistance = 2; // Maximum attach distance
				rhs_dragOffset[] = {0,0,0.5}; // Attach offset when dragging weapon
				rhs_boostCoef = 1.0;
			};
		};
	};

	class RHS_ZU23_MSV: RHS_ZU23_base
	{
		EdPrev(rhs_ZU23_MSV)
		scope=2;
		crewMacro(0,mF1,mC1)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="rhs_msv_sergeant";
			};
		};
	};
	class RHS_ZU23_VDV: RHS_ZU23_base
	{
		EdPrev(rhs_ZU23_VDV)
		scope=2;
		crewMacro(0,mF2,mC2)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="rhs_vdv_sergeant";
			};
		};
	};
	class RHS_ZU23_VMF: RHS_ZU23_base
	{
		EdPrev(rhs_ZU23_VDV)
		scope=2;
		crewMacro(0,mF4,mC4)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="rhs_vmf_flora_sergeant";
			};
		};
	};

	class rhs_ZU23_towingVehicle_base: RHS_TowedWeapons_Base
	{
		reversed					= 0;
		displayname					= "ZU23 Tow";
		model						="\rhsafrf\addons\rhs_heavyweapons\ZU23\rhs_zu23";
		driveOnComponent[]			= {wheel_1_physx,wheel_2_physx};
		hiddenSelections[]			= {"camo1","camo2"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_co.paa","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_co.paa"};
		class AnimationSources
		{

			class Pins_Raise {source="user";animPeriod = 1;initPhase=0; };
			class Unfold {source="user";animPeriod = 1.6;initPhase=1;};
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class maingunT_source 			{source="user";animPeriod = 1;initPhase=0.349066; };
			class mainTurretT_source: maingunT_source {initPhase=0;};

			#define DUMMY_ANIMATION(CLASSNAME) class ##CLASSNAME## {initPhase = 0;animPeriod = 0;source = "user";};
			DUMMY_ANIMATION(mainturret)
			DUMMY_ANIMATION(maingun)
			DUMMY_ANIMATION(fire_anim)
			DUMMY_ANIMATION(muzzlehmg_rot)
		};
		maxOmega = 1000;
		maxSpeed = 40;
		differentialType="all_open";
		frontBias = 1.1;
		class Wheels
		{
			class Wheel_1
			{
				steering					= true;
				side						= "left";
				boneName					= "damper_front";
				suspForceAppPointOffset		= "wheel_1_center";
				tireForceAppPointOffset		= "wheel_1_center";
				center						= "wheel_1_center";
				boundary					= "wheel_1_bound";
				suspTravelDirection[]		= {0, -1, 0};
				width						= 0.27;
				mass						= 115;
				MOI							= __EVAL(0.5*1115*(0.288^2));		// radius 0.288m

				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;

				maxBrakeTorque				= 0;
				maxHandBrakeTorque			= 0;

				maxCompression				= 0.1;
				maxDroop					= 0.2;

				sprungMass					= -1;
				springStrength				= 11600;
				springDamperRate			= 18280;

				longitudinalStiffnessPerUnitGravity	= 15000;
				latStiffX					= 12.5;
				latStiffY					= 18.0;
				frictionVsSlipGraph[]		= {{0, 15}, {0.5, 5}, {1,2}};
			};
			class Wheel_2: Wheel_1
			{
				steering					= true;
				side						= "right";
				boneName					= "damper_left";
				suspForceAppPointOffset		= "wheel_2_center";
				tireForceAppPointOffset		= "wheel_2_center";
				center						= "wheel_2_center";
				boundary					= "wheel_2_bound";
			};
		};
	};
	class rhs_ZU23_towingVehicle: rhs_ZU23_towingVehicle_base
	{
		scope = 1;
	};

	class AT_01_base_F : StaticMGWeapon {};
	//NSV
	class rhs_nsv_tripod_base: StaticMGWeapon
	{
		EdPrev(rhs_nsv_tripod_base)
		dlc = "RHS_AFRF";

		model = "\rhsafrf\addons\rhs_heavyweapons\mg\rhs_nsv_tripod";
		icon = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\icomap_kord_CA.paa";
		PICTURE_MACRO(rhs_KORD_MSV_ca)
		mapSize = 3;

		displayName="NSV (6T7)";
		sensorPosition = "gunnerView";
		STATIC_WEAPON_HP

		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{

				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",

				"rhsafrf\addons\rhs_t80\data\materials\sa_nsvt.rvmat",
				"rhsafrf\addons\rhs_t80\data\materials\sa_nsvt.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]=	{100,200,300,400,500,600,800,900,1000,1100,1200,1400,1500,1800,1900,2000};
				discreteDistanceInitIndex=2;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";

				animationSourceStickX	= MainTurret_Inertia;
				animationSourceStickY	= MainGun_Inertia;
				gunnerLeftHandAnimName	= otochlaven_shake;
				gunnerRightHandAnimName	= otochlaven_shake;
				selectionFireAnim = "zasleh";
				turretInfoType="RHS_RscWeaponZeroing";
				minElev=-15;
				maxelev = 15;
				maxturn = 30;
				minturn = -30;
				weapons[] = {"rhs_weap_nsvt_effects"};
				magazines[] =
				{
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50"
				};
				gunnerAction="RHS_LowKORD_Gunner";
				gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
				gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
				disableSoundAttenuation = 1;
			};
		};

		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="rhs_weap_nsvt_effects";
			};
			class ReloadMagazine: ReloadAnim {source="reloadmagazine";};
			class Revolving: ReloadAnim {source="revolving";};
			class muzzleHMG_ROT: ReloadAnim {source="ammorandom";};
		};
		armorStructural=10.0;

		ASSEMBLE_INFO(RHS_NSV_Gun_Bag,RHS_NSV_Tripod_Bag)

	};

	class RHS_NSV_TriPod_MSV: rhs_nsv_tripod_base
	{
		EdPrev(rhs_NSV_TriPod_MSV)
		scope = 2;
		crewMacro(0,mF1,mC1)
	};
	class RHS_NSV_TriPod_VDV: rhs_nsv_tripod_base
	{
		EdPrev(rhs_NSV_TriPod_VDV)
		scope = 2;
		crewMacro(0,mF2,mC2)
	};
	class RHS_NSV_TriPod_VMF: rhs_nsv_tripod_base
	{
		EdPrev(rhs_NSV_TriPod_VMF)
		scope = 2;
		crewMacro(0,mF4,mC4)
	};
	class RHS_NSV_TriPod_INS: rhs_nsv_tripod_base
	{
		EdPrev(rhs_NSV_TriPod_INS)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
	};


	//KORD
	class RHS_KORD_Base: rhs_nsv_tripod_base
	{
		EdPrev(rhs_KORD_Base)
		model="\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\kord";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord_CA.paa";
		PICTURE_MACRO(rhs_KORD_MSV_ca)
		mapSize=3;
		displayName="$STR_RHS_DN_KORD_LOW";

		class Damage
		{
			tex[]={};
			mat[]=
			{

				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};

		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				animationSourceStickX	= MainTurret_Inertia;
				animationSourceStickY	= MainGun_Inertia;
				gunnerLeftHandAnimName	= otochlaven_shake;
				gunnerRightHandAnimName	= otochlaven_shake;
				gunnerLeftLegAnimName	= leg_left;
				gunnerRightLegAnimName	= leg_right;
				minElev=-20;
				maxelev = 15;
				weapons[]=
				{
					"rhs_weap_KORD"
				};
				magazines[]=
				{
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50"
				};
				gunnerAction="rhs_LowKORD_Gunner";
				gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
				gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
				minTurn=-60;
				maxTurn=60;
				initTurn=0;
				optics=1;
				discreteDistance[]={100,200,300,400,500,600,800,1000,1200,1500,1700,2000};
				discreteDistanceInitIndex=2;
				selectionFireAnim = "zasleh";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="rhs_weap_KORD";
			};
			class ReloadMagazine: ReloadAnim
			{
				source="reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source="revolving";
			};
			class muzzleHMG_ROT: ReloadAnim {source="ammorandom";};
		};
		armorStructural=10;
		class Library
		{
			libTextDesc="$STR_rhs_LIB_KORD";
		};
		ASSEMBLE_INFO(rhs_Kord_Gun_Bag,rhs_Kord_Tripod_Bag)
	};
	class rhs_KORD_MSV: RHS_KORD_Base
	{
		EdPrev(rhs_KORD_MSV)
		scope=2;
		crewMacro(0,mF1,mC1)
	};
	class rhs_KORD_VDV: RHS_KORD_Base
	{
		EdPrev(rhs_KORD_VDV)
		scope=2;
		crewMacro(0,mF2,mC2)
	};
	class rhs_KORD_VMF: RHS_KORD_Base
	{
		EdPrev(rhs_KORD_VDV)
		scope=2;
		crewMacro(0,mF4,mC4)
	};
	class rhs_KORD_INS: RHS_KORD_Base
	{
		EdPrev(rhs_KORD_INS)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
	};
	class RHS_KORD_high_base: RHS_KORD_Base
	{
		EdPrev(rhs_KORD_high_base)
		displayName="$STR_rhs_DN_KORD";

		model="\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\KORD_6u16sp";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord6u16sp_CA.paa";
		PICTURE_MACRO(rhs_KORD_high_MSV_ca)

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-7;
				maxelev = 45;
				gunnerAction="rhs_KORD_Gunner";
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				turretInfoType = "RHS_RscWeaponZeroing";
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
			};
		};
	};
	class rhs_KORD_high_MSV: RHS_KORD_high_Base
	{
		EdPrev(rhs_KORD_high_MSV)
		scope=2;
		crewMacro(0,mF1,mC1)
	};
	class rhs_KORD_high_VDV: RHS_KORD_high_Base
	{
		EdPrev(rhs_KORD_high_VDV)
		scope=2;
		crewMacro(0,mF2,mC2)
	};
	class rhs_KORD_high_VMF: RHS_KORD_high_Base
	{
		EdPrev(rhs_KORD_high_VDV)
		scope=2;
		crewMacro(0,mF4,mC4)
	};
	class rhs_KORD_high_INS: RHS_KORD_high_Base
	{
		EdPrev(rhs_KORD_high_INS)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
	};

	// DSHKM
	class rhs_DSHKM_base: StaticMGWeapon
	{
		EdPrev(rhs_DSHKM_base)
		dlc = "RHS_AFRF";
		model="\rhsafrf\addons\rhs_heavyweapons\DShKM\DShKM_mg";
		icon= "\rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_DShKM_CA.paa";
		PICTURE_MACRO(rhs_DSHKM_ins_ca)
		mapSize = 2;
		displayName=$STR_rhs_DN_DSHKM;
		sensorPosition = "gunnerView";
		STATIC_WEAPON_HP

		class Damage
		{
			tex[]={};
			mat[]=
			{

				"rhsafrf\addons\rhs_heavyweapons\dshkm\data\dshk.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\dshkm\data\dshk_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\dshkm\data\tripod_dshk.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\dshkm\data\tripod_dshk.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};

		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				animationSourceStickX	= MainTurret_Inertia;
				animationSourceStickY	= MainGun_Inertia;
				gunnerLeftHandAnimName	= otochlaven_shake;
				gunnerRightHandAnimName	= otochlaven_shake;
				gunnerLeftLegAnimName	= leg_left;
				gunnerRightLegAnimName	= leg_right;
				minElev=-20;
				maxelev = 60;
				minturn = -180;
				maxturn = 180;
				weapons[]={rhs_weap_DSHKM};
				turretInfoType="RHS_RscWeaponZeroing";
				discreteDistance[]={100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				magazines[]=
				{
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50"
				};
				gunnerAction = "rhs_DShKM_Gunner";
				selectionFireAnim = "zasleh";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				disableSoundAttenuation = 1;
				ejectDeadGunner = 1;
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="rhs_weap_DSHKM";
			};
			class ReloadAnim: muzzle_source {source="reload";};
			class ReloadMagazine: muzzle_source {source="reloadmagazine";};
			class Revolving: muzzle_source {source="revolving";};
			class muzzleHMG_ROT: muzzle_source {source="ammorandom";};
		};
		class Library {libTextDesc = $STR_rhs_LIB_DSHKM;};
		ASSEMBLE_INFO(rhs_DShkM_Gun_Bag,rhs_DShkM_TripodHigh_Bag)
		/*class EventHandlers {
			getout = "_this spawn {sleep 1.1;(_this # 2) switchmove 'RHS_DShKM_Gunner';systemchat format['dood %1',_this # 2];};";
		};*/
	};

	class rhs_DSHKM_ins: rhs_DSHKM_base
	{
		EdPrev(rhs_DSHKM_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
	};

	class rhs_DSHkM_Mini_TriPod_base: rhs_DSHKM_base
	{
		EdPrev(rhs_DSHkM_Mini_TriPod_base)
		displayname = "DSHkM Minitripod";
		model = "rhsafrf\addons\rhs_heavyweapons\DShKM\DShKM_mg2";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="RHS_RscInfoStaticWeapon";
				gunneraction = "rhs_LowTripod_Gunner";
				gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
				gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
				initturn = 0;
				maxturn = 90;
				minturn = -90;
				maxelev = 20;
			};
		};
		ASSEMBLE_INFO(rhs_DShkM_Gun_Bag,rhs_DShkM_TripodLow_Bag)
	};
	class rhs_DSHKM_Mini_TriPod_ins: rhs_DSHkM_Mini_TriPod_base
	{
		EdPrev(rhs_DSHKM_Mini_TriPod_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
	};

	//AGS30
	class RHS_AGS30_TriPod_base: StaticGrenadeLauncher
	{
		EdPrev(rhs_AGS30_TriPod_base)
		dlc = "RHS_USAF";
		displayName="AGS-30 (6P17)";
		model="\rhsafrf\addons\rhs_heavyweapons\AGS30\AGS_static";
		icon= "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_ags_CA.paa";
		PICTURE_MACRO(RHS_AGS30_TriPod_MSV_ca)
		mapSize = 2.5;
		sensorPosition = "gunnerView";

		STATIC_WEAPON_HP

		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\ags30\data\ags30.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\ags30\data\ags30.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				gunnerOpticsModel = \rhsafrf\addons\rhs_heavyweapons\data\optika_AGS30;
				minElev=-10;maxelev = 32;
				minTurn=-78; maxTurn=+78; initTurn=0;
				turretInfoType="RHS_RscInfoStaticWeapon";
				weapons[]={RHS_weap_AGS30};
				//Малая масса АГС-30 позволяет увеличить носимый боекомплект без увеличения нагрузки на расчет. Так, при суммарной носимой массе комплекса 75 кг боекомплект АГС-17 составляет 87 выстрелов, а у АГС-30 - 120 выстрелов, что увеличивает площадь поражения примерно в 1,4 раза.
				magazines[]=
				{
					RHS_mag_VOG30_30,
					RHS_mag_VOG30_30,
					RHS_mag_VOG30_30,
					RHS_mag_VOG30_30/*,
					//magazine proxies
					rhs_proxy_ags30_mag,
					rhs_proxy_ags30_mag,
					rhs_proxy_ags30_mag,
					rhs_proxy_ags30_mag*/
				};
				gunnerAction = "rhs_AGS_Gunner";
				gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
				gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
				selectionFireAnim = "zasleh";

				class ViewGunner
				{
					initAngleX=5; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				class ViewOptics : ViewOptics
				{
					initFov=0.250; minFov=0.250; maxFov=0.250; // FOV 28 deg
				};
			};
		};
		class AnimationSources
		{
			class belt_rotation {source="reload";weapon="RHS_weap_AGS30";};
			class ReloadMagazine{source="reloadmagazine";weapon="RHS_weap_AGS30";};
			class Revolving{source="revolving";weapon="RHS_weap_AGS30";};
			class muzzle_rot_MG: belt_rotation {source = "ammorandom";};
		};
		ASSEMBLE_INFO(RHS_AGS30_Gun_Bag,RHS_AGS30_Tripod_Bag)
	};

	class RHS_AGS30_TriPod_MSV: RHS_AGS30_TriPod_base
	{
		EdPrev(rhs_AGS30_TriPod_MSV)
		scope = 2;
		crewMacro(0,mF1,mC1)
	};
	class RHS_AGS30_TriPod_VDV: RHS_AGS30_TriPod_base
	{
		EdPrev(rhs_AGS30_TriPod_VDV)
		scope = 2;
		crewMacro(0,mF2,mC2)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					RHS_mag_GPD30_30,
					RHS_mag_GPD30_30,
					RHS_mag_GPD30_30,
					RHS_mag_GPD30_30/*,
					//magazine proxies
					rhs_proxy_ags30_mag,
					rhs_proxy_ags30_mag,
					rhs_proxy_ags30_mag,
					rhs_proxy_ags30_mag*/
				};
			};
		};
	};
	class RHS_AGS30_TriPod_VMF: RHS_AGS30_TriPod_base
	{
		EdPrev(rhs_AGS30_TriPod_VMF)
		scope = 2;
		crewMacro(0,mF4,mC4)
	};
	class RHS_AGS30_TriPod_INS: RHS_AGS30_TriPod_base
	{
		EdPrev(rhs_AGS30_TriPod_INS)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					RHS_mag_VOG17m_30,
					RHS_mag_VOG17m_30,
					RHS_mag_VOG17m_30,
					RHS_mag_VOG17m_30/*,
					//magazine proxies
					rhs_proxy_ags30_mag,
					rhs_proxy_ags30_mag,
					rhs_proxy_ags30_mag,
					rhs_proxy_ags30_mag*/
				};
			};
		};
	};

	//SPG9
	class rhs_SPG9_base: AT_01_base_F
	{
		dlc = "RHS_AFRF";
		displayName=$STR_rhs_DN_SPG9;
		model = "\rhsafrf\addons\rhs_heavyweapons\spg9\spg9.p3d";
		icon= "rhsafrf\addons\rhs_heavyweapons\data\mapico\icon_spg9_CA.paa";
		PICTURE_MACRO(rhs_SPG9_INS_ca)
		mapSize = 3;
		nameSound="cannon";
		transportSoldier = 0;
		gunnerHasFlares = true;
		sensorPosition = "gunnerView";
		STATIC_WEAPON_HP
		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};

		hiddenSelections[] = {};

		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="rhs_weap_SPG9";
			};
		};

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_heavyweapons\spg9\data\spg9.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\spg9\data\spg9.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={
					rhs_weap_SPG9
				};
				magazines[]=
				{
					rhs_mag_PG9V,
					rhs_mag_OG9V,
					rhs_mag_OG9V,
					rhs_mag_OG9V,
					rhs_mag_OG9V,
					rhs_mag_OG9V,
					rhs_mag_OG9V,
					rhs_mag_PG9V,
					rhs_mag_PG9V,
					rhs_mag_PG9V,
					rhs_mag_PG9V,
					rhs_mag_PG9V,
					rhs_mag_PG9V
				};

				gunnerLeftHandAnimName="otochlaven";
				gunnerAction = "rhs_SPG_Gunner";
				gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
				gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";

				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgo9_scope";

				gunnerOpticsEffect[] = {
					"OpticsCHAbera1",
					"OpticsBlur2",
					"TankGunnerOptics1"
				};

				memoryPointGunnerOptics = "gunnerview";

				minTurn=-45;
				maxTurn=+45;
				initTurn=0;
				minElev=-10;
				maxElev=+40;
				initElev=0;

				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
				turretInfoType="RHS_RscInfoStaticWeapon";

				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=+30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=+100;
					initFov=0.7;
					minFov=0.25;
					maxFov=1.1;
				};

				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=+30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=+100;
					initFov=0.111;
					minFov=0.111;
					maxFov=0.111;
				};
			};
		};

		class Library
		{
			libTextDesc = $STR_rhs_LIB_SPG9;
		};

		ASSEMBLE_INFO(rhs_SPG9_Gun_Bag,rhs_SPG9_Tripod_Bag)
	};

	class rhs_SPG9M_base: rhs_SPG9_base
	{
		displayName=$STR_rhs_DN_SPG9M;

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					rhs_mag_OG9VM,
					rhs_mag_OG9VM,
					rhs_mag_OG9VM,
					rhs_mag_OG9VM,
					rhs_mag_OG9VM,
					rhs_mag_OG9VM,
					rhs_mag_OG9VM,
					rhs_mag_PG9N,
					rhs_mag_PG9N,
					rhs_mag_PG9N,
					rhs_mag_PG9N,
					rhs_mag_PG9VNT,
					rhs_mag_PG9VNT
				};

				class OpticsIn
				{
					class HEAT: ViewOptics
					{
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_kum_scope.p3d";
					};
					class HE: ViewOptics
					{
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_of_scope.p3d";
					};
				};
			};
		};
	};

	class rhs_SPG9_INS: rhs_SPG9_base
	{
		EdPrev(rhs_SPG9_INS)

		CTI_Indep_Macro

		crewMacro(2,mF3,mC3)
	};

	class rhs_SPG9M_MSV: rhs_SPG9M_base
	{
		EdPrev(rhs_SPG9M_MSV)

		scope = 2;

		crewMacro(0,mF1,mC1)
	};

	class rhs_SPG9M_VDV: rhs_SPG9M_base
	{
		EdPrev(rhs_SPG9M_VDV)

		scope = 2;

		crewMacro(0,mF2,mC2)
	};

	class rhs_SPG9M_VMF: rhs_SPG9M_base
	{
		EdPrev(rhs_SPG9M_VDV)

		scope = 2;

		crewMacro(0,mF4,mC4)
	};

	class rhs_Igla_AA_pod_Base : StaticAAWeapon
	{
		dlc = "RHS_AFRF";
		gunnercansee = "2+4+8+32";
		displayName=$STR_rhs_DN_IGLA_AA_POD_EAST;
		mapsize = 2.8;
		model = "rhsafrf\addons\rhs_heavyweapons\igla\igla_AA_pod";
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_igla_aa_pod_CA.paa";
		PICTURE_MACRO(rhs_Igla_AA_pod_msv_ca)
		
		STATIC_WEAPON_HP
		armorStructural = 4;
		explosionShielding = 0.5;

		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_roof.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_roof.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_seats.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_seats.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};

		memoryPointMissile[] = {"Rocket_2", "Rocket_1"};
		memoryPointMissileDir[] = {"Rocket_2_End", "Rocket_1_End"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-180;
				maxTurn=180;
				gunneraction = "RHS_IglaPod_Gunner";
				gunneropticseffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
				gunnerLeftHandAnimName	= OtocHlaven;
				gunnerRightHandAnimName	= OtocHlaven;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				weapons[] = {"rhs_weap_Igla_twice"};
				magazines[] = {
					"rhs_mag_2Rnd_Igla",
					"rhs_mag_2Rnd_Igla",
					"rhs_mag_2Rnd_Igla",
					"rhs_mag_2Rnd_Igla",
					"rhs_mag_2Rnd_Igla"
				};
				maxelev = 120;
				minelev = -10;
				class ViewOptics
				{
					initanglex = 0;
					initangley = 0;
					initfov = 0.155;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 0.155;
					minanglex = -30;
					minangley = -100;
					minfov = 0.047;
				};
				disableSoundAttenuation = 1;
			};
		};
		class AnimationSources
		{
			class MagazineReload{source="reloadmagazine";weapon="rhs_weap_Igla_twice";};
			class Revolving{source="revolving";weapon="rhs_weap_Igla_twice";};
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				fired = "_this call rhs_fnc_fired_IglaAA";
			};
		};

	};

	class rhs_Igla_AA_pod_msv : rhs_Igla_AA_pod_Base
	{
		EdPrev(rhs_Igla_AA_pod_msv)
		scope=2;
		crewMacro(0,mF1,mC1)
	};
	class rhs_Igla_AA_pod_vdv : rhs_Igla_AA_pod_Base
	{
		EdPrev(rhs_Igla_AA_pod_vdv)
		scope=2;
		crewMacro(0,mF2,mC2)
	};
	class rhs_Igla_AA_pod_vmf : rhs_Igla_AA_pod_Base
	{
		EdPrev(rhs_Igla_AA_pod_vdv)
		scope=2;
		crewMacro(0,mF4,mC4)
	};
	class rhs_Igla_AA_pod_ins : rhs_Igla_AA_pod_Base
	{
		EdPrev(rhs_Igla_AA_pod_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
	};

	//Podnos Mortar
	class rhs_2b14_82mm_Base: StaticMortar
	{
		EdPrev(rhs_2b14_82mm_Base)
		dlc = "RHS_AFRF";
		availableForSupportTypes[]={"Artillery"};
		displayname=$STR_rhs_DN_2B14;

		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";

		class Library
		{
			libTextDesc="$STR_rhs_LIB_2B14";
		};
		model="\rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\podnos_2b14_82mm";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_podnos_2b14_CA.paa";
		PICTURE_MACRO(rhs_2b14_82mm_msv_ca)

		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\data\podnos_2b14_82mm_co.paa"};

		transportSoldier=1;
		cargoAction[]=
		{
			"rhs_D30_Cargo"
		};
		mapSize=1.5;
		unitInfoType = RscUnitInfoMortar;

		STATIC_WEAPON_HP

		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\data\podnos_2b14_82mm.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\data\podnos_2b14_82mm.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				gunnerAction="rhs_D30_Cargo";
				turretInfoType="rhs_gui_optic_mortar";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg1";
				gunnerOpticsEffect[]	= {"TankGunnerOptics2","OpticsBlur2","OpticsCHAbera3"};

				class OpticsIn
				{
					class PanoramicSight
					{
						hitpoint 			= Hit_Optic_MPM44M;
						initAngleX			= 0;
						minAngleX			= -30;
						maxAngleX			= 30;
						initAngleY			= 0;
						minAngleY			= -100;
						maxAngleY			= 100;
						VEHICLE_ZOOM_LEVEL(4)
						visionMode[]		= {"Normal"};
						gunnerOpticsModel	= "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg1m.p3d";
					};
				};
				weapons[]=
				{
					"rhs_weap_2b14"
				};
				magazines[]=
				{
					"rhs_mag_3vo18_10", //82-мм осколочная мина
					"rhs_mag_3vo18_10", //82-мм осколочная мина
					"rhs_mag_3vs25m_10", //Осветительные, выстрелы раздельного заряжания с С боеприпасами
					"rhs_mag_d832du_10" //smoke
				};
				cameraDir = "usti hlavne";
				memoryPointGunnerOptics = "gunnerview";
				elevationMode = 1;
				initCamElev = 0;
				minCamElev = -15;
				maxCamElev = 35;
				initElev=0;
				initTurn=0;
				minElev=-15;
				maxElev=30;
				minTurn=-180;
				maxTurn=180;
				usePiP = 2;
				disableSoundAttenuation = 1;
				stabilizedInAxes		= StabilizedInAxesNone;
				class HitPoints
				{
					class Hit_Optic_MPM44M		{armor	= -40;explosionShielding = 0.1;name = "Hit_Optic";	visual = "vis_optic";	armorComponent = "Hit_Optic";			passThrough = 0;};
				};
			};
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		artilleryScanner = 1;
		ASSEMBLE_INFO(rhs_Podnos_Gun_Bag,rhs_Podnos_Bipod_Bag)
		class Attributes {
			class rhs_ammoslot_1_type {
				displayName = "Ammo slot #1 type";
				tooltip = "Define type of shell for #1 slot [HE rounds]";
				property = "rhs_ammoslot_1_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];";
				defaultValue = 0;
				typeName = "STRING";
				class values {
					LoadoutAmmoMacro(rhs_mag_3vo18,10)
				};
			};
			class rhs_ammoslot_1 {
				displayName = "Ammo slot #1 count";
				tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_1";
				control = "Edit";
				expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3']] spawn rhs_fnc_Eden_DefineLoadout};";
				defaultValue = "-1";
				validate = "NUMBER";
				typeName = "NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #2 type";
				tooltip = "Define type of shell for #2 slot [Illumination rounds]";
				property = "rhs_ammoslot_2_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_3vs25m,10)
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1 {
				displayName = "Ammo slot #2 count";
				tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #3 type";
				tooltip = "Define type of shell for #3 slot [Smoke rounds]";
				property = "rhs_ammoslot_3_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_d832du,10)
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1 {
				displayName = "Ammo slot #3 count";
				tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_3";
			};
		};
	};
	class rhs_2b14_82mm_msv: rhs_2b14_82mm_Base
	{
		EdPrev(rhs_2b14_82mm_msv)
		scope=2;
		crewMacro(0,mF1,mC1)
	};
	class rhs_2b14_82mm_vdv: rhs_2b14_82mm_Base
	{
		EdPrev(rhs_2b14_82mm_vdv)
		scope=2;
		crewMacro(0,mF2,mC2)
	};
	class rhs_2b14_82mm_vmf: rhs_2b14_82mm_Base
	{
		EdPrev(rhs_2b14_82mm_vdv)
		scope=2;
		crewMacro(0,mF4,mC4)
	};
	class rhs_2b14_82mm_ins: rhs_2b14_82mm_Base
	{
		EdPrev(rhs_2b14_82mm_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
	};
	//Metis
	class rhs_Metis_Base: AT_01_base_F
	{
		EdPrev(rhs_Metis_Base)
		dlc = "RHS_AFRF";
		ASSEMBLE_INFO(rhs_Metis_Gun_Bag,rhs_Metis_Tripod_Bag)

		scope = 0;
		displayname = $STR_rhs_DN_AT13M;
		class Library {libTextDesc = $STR_rhs_LIB_AT13;};
		model = "\rhsafrf\addons\rhs_heavyweapons\metis_at_13\metis.p3d";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_metis_at13_CA.paa";
		PICTURE_MACRO(rhs_Metis_9k115_2_msv_ca)
		mapSize = 1.5;

		hiddenSelections[] = {};
		STATIC_WEAPON_HP

		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={rhs_weap_9K115_2_launcher};
				magazines[]={rhs_mag_9M131m,rhs_mag_9M131m,rhs_mag_9M131m,rhs_mag_9M131f};
				gunnerAction = "rhs_Metis_Gunner";
				gunnerGetInAction = "RHS_StaticWeapon_GetOut_Low";
				gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Low";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_Metis";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				turretInfoType="RHS_RscInfoStaticWeapon";
				memorypointgunneroptics = "gunnerview";
				minTurn=-45; maxTurn=+45; initTurn=0;
				minElev=-10; maxElev=+40; initElev=0;
				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
				class ViewGunner
				{
					initAngleX=5; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.078; minFov=0.078; maxFov=0.078; // 6x zoom
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={4,5};
				};
				disableSoundAttenuation = 1;
			};
		};
		class AnimationSources
		{
			class revolving{source="revolving";weapon="rhs_weap_9K115_2_launcher";};
			class ReloadMagazine{source="reloadmagazine";weapon="rhs_weap_9K115_2_launcher";};
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				reloaded = "[_this select 0,_this select 1,_this select 4,'rhs_weap_9K115_2_launcher','rhs_weap_9K115_launcher_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
			};
		};
	};
	class rhs_Metis_9k115_2_msv: rhs_Metis_Base
	{
		EdPrev(rhs_Metis_9k115_2_msv)
		scope = 2;
		crewMacro(0,mF1,mC1)
	};
	class rhs_Metis_9k115_2_vdv: rhs_Metis_Base
	{
		EdPrev(rhs_Metis_9k115_2_vdv)
		scope = 2;
		crewMacro(0,mF2,mC2)
	};
	class rhs_Metis_9k115_2_vmf: rhs_Metis_Base
	{
		EdPrev(rhs_Metis_9k115_2_vdv)
		scope = 2;
		crewMacro(0,mF4,mC4)
	};
	class rhs_Metis_9k115_2_ins: rhs_Metis_Base
	{
		EdPrev(rhs_Metis_9k115_2_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
	};
	class rhs_Metis_9k115_1_ins: rhs_Metis_Base
	{
		EdPrev(rhs_Metis_9k115_1_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
		displayname = $STR_rhs_DN_AT13;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={rhs_weap_9K115_1_launcher};
				magazines[]={rhs_mag_9M131,rhs_mag_9M131,rhs_mag_9M131,rhs_mag_9M131};
			};
		};
		class AnimationSources
		{
			class revolving{source="revolving";weapon="rhs_weap_9K115_1_launcher";};
			class ReloadMagazine{source="reloadmagazine";weapon="rhs_weap_9K115_1_launcher";};
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				reloaded = "[_this select 0,_this select 1,'rhs_weap_9K115_1_launcher','rhs_weap_9K115_launcher_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
			};
		};
	};

	// D30
	class rhs_D30_base: StaticCannon
	{
		EdPrev(rhs_D30_base)
		dlc = "RHS_AFRF";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3"};
		accuracy = 0.12;
		cost = 10000;
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		artilleryScanner = 1;
		displayName=$STR_rhs_DN_D30;

		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";

		unitInfoType = RscUnitInfoMortar;

		model="\rhsafrf\addons\rhs_heavyweapons\D30\D30";
		icon= "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_d30_CA.paa";
		PICTURE_MACRO(rhs_D30_msv_ca)

		mapSize = 4.5;
		cargoAction[] = {rhs_D30_Cargo,rhs_D30_Commander};
		typicalCargo[]={};
		transportSoldier = 2;
		gunnerHasFlares = true;
		driveOnComponent[]={wheels};

		memoryPointsGetInCargo = "pos_cargo_dir";
		memoryPointsGetInCargoDir = "pos_cargo";

		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_heavyweapons\d30\data\d30_co.paa"};

		STATIC_WEAPON_HP
		armorStructural = 4;
		explosionShielding = 0.5;
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				weapons[]={rhs_weap_D30};
				magazines[] =
				{
					"rhs_mag_3of56_10",
					"rhs_mag_d462_2",
					"rhs_mag_s463_2",
					"rhs_mag_3of69m_2"
				};
				gunnerLeftHandAnimName="handleElev";
				gunnerRightHandAnimName="handleHoriz";
				gunnerAction = "rhs_D30_Gunner";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_D30_panoramic";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				elevationMode = 1;
				turretInfoType="rhs_gui_optic_d30_op4";
				maxHorizontalRotSpeed = 0.35;	// 1 = 45*/sec
				maxVerticalRotSpeed = 0.25;		// 1 = 45*/sec
				gunnerForceOptics = 0;
				minElev	= -9;
				maxelev	= 72;
				minTurn	= -180;
				maxTurn	= 180;
				class ViewOptics: ViewOptics
				{
					initFov=0.096; minFov=0.096; maxFov=0.096; //FOV 11 deg
				};
				class OpticsIn
				{
					class PanoramicSight: ViewOptics
					{
						opticsDisplayName = "PG1";
						hitpoint = Hit_Optic_PG1M;
						VEHICLE_ZOOM_LEVEL(4)
						gunnerOpticsModel	= "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg1m.p3d";
						visionMode[]		= {"Normal"};
					};
					class OP4M_45
					{
						opticsDisplayName 	= "OP4";
						hitpoint 			= Hit_Optic_OP4M;
						camPos				= view_op4m;
						camDir				= view_op4m_dir;
						initAngleX			= 0;
						minAngleX			= -30;
						maxAngleX			= 30;
						initAngleY			= 0;
						minAngleY			= -100;
						maxAngleY			= 100;
						VEHICLE_ZOOM_LEVEL(5.5) 
						// http://www.ipz.com.ua/index.php?option=com_content&view=article&id=172:-4&catid=51:2012-05-17-07-19-02&Itemid=97
						// https://airgun.org.ru/forum/viewtopic.php?f=34&t=11023
						// http://bookwu.net/book_artileriya_993/29_5.2-optichnij-pricil-op4m-45
						visionMode[]		= {"Normal"};
						gunnerOpticsModel	= "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty.p3d";
					};
				};
				disableSoundAttenuation = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor				= -100;
						material			= -1;
						name				= Hit_Turret;
						armorComponent 		= Hit_Turret;
						visual				= "vez";
						passThrough			= 0;
						minimalHit			= -0.2;
						explosionShielding	= 0.1;
						radius				= 0.1;
					};
					class HitGun	{
						armor				= -100;
						material			= -1;
						name				= Hit_Gun;
						armorComponent 		= Hit_Gun;
						visual				= "-";
						passThrough			= 0;
						minimalHit			= -0.2;
						explosionShielding	= 0.1;
						radius				= 0.1;
					};
					class Hit_Optic_PG1M		{armor	= -40;explosionShielding = 0.1;name = "Hit_Optic_Panoramic";	visual = "vis_optic_pg1m";	armorComponent = "Hit_Optic_Panoramic";			passThrough = 0;};
					class Hit_Optic_OP4M		{armor	= -40;explosionShielding = 0.1;name = "Hit_Optic_Direct";		visual = "vis_optic_op4m";	armorComponent = "Hit_Optic_Direct";			passThrough = 0;};
				};
			};
		};
		class AnimationSources
		{
			class recoil
			{
				source="door";
				animPeriod=6;
			};

			class leftT_source {source="user";animPeriod = 1;initPhase=0; };
			class rightT_source: leftT_source {initPhase=0; };
			class leftW_source: leftT_source {initPhase=0; };
			class rightW_source: leftW_source {};
			class maingunT_source {source="user";animPeriod = 1;initPhase=0; };
			class mainTurretT_source: maingunT_source {};
			class szpilki_source {source="user";animPeriod = 0.1;initPhase=0; };
			class body_source {source="user";animPeriod = 0.6;initPhase=0; };
			class d30_kolo {source="user";animPeriod = 0.6;initPhase=0; };
			class Wheel_1_source			{source = user; animPeriod = 1;initPhase=0;};
			class Wheel_2_source			{source = user; animPeriod = 1;initPhase=0;};
			class RaiseWheels 				{source = user; animPeriod = 1;initPhase=0;};
			class fold_arty_handler: leftT_source {
				mass=-1;
				displayName="fold gun";
				AUTHOR_MACRO_BIS_PORT
				onPhaseChanged = "[_this select 0,_this select 1] call rhs_fnc_d30_pack;";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]={
				"rhsafrf\addons\rhs_heavyweapons\D30\data\d30.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\D30\data\d30_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};
		class Library {libTextDesc = $STR_rhs_LIB_D30;};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 450;
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				fired = "_this spawn rhs_fnc_fired_d30";
			};
		};
		class UserActions
		{
			class Fold
			{
				displayNameDefault	= "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' size='3.5' /> Moving Mode";
				displayName			= "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' /> Switch to moving mode";
				position = "aimpoint";
				radius = 2.51;
				onlyForplayer = 0;
				condition = "(alive this)&& ((count (crew this)) == 0) && (this animationPhase 'leftT' <= 0.1)";
				statement = "[this,1] call rhs_fnc_d30_pack;";
			};
			class Unfold: Fold
			{
				displayNameDefault	= "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' size='3.5' /> Static Mode";
				displayName			= "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' /> Switch to static mode";
				condition = "(alive this)&& (this  animationPhase 'leftT' >= 2.2)";
				statement = "[this,0] call rhs_fnc_d30_pack;";
			};
			class AttachVehicle: RHS_UserAction_Towing_Attach
			{
				position	= "tow_point";
				condition	= "(alive this)&& (this  animationPhase 'leftT' >= 2.2)";
			};
			class DragVehicle: RHS_UserAction_Towing_Drag
			{
				position	= "tow_point";
				condition	= "(alive this)&& (this  animationPhase 'leftT' >= 2.2)";
			};
		};

		class Attributes {
			class ObjectTexture {
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rhs_caseDeleteTime {
				displayName = "Spent case liftime";
				tooltip = "Define how long spent caseses are rendred in game. Type -1 for infinitve time";
				property = "rhs_caseDeleteTime";
				control = "Edit";
				validate = "Number";
				typeName = "Number";
				defaultValue = "120";
				expression = "_this setVariable ['rhs_caseDeleteTime',_value]";
			};
			class rhs_ammoslot_1_type {
				displayName = "Ammo slot #1 type";
				tooltip = "Define type of shell for #1 slot [HE rounds]";
				property = "rhs_ammoslot_1_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];";
				defaultValue = 0;
				typeName = "STRING";
				class values {
					LoadoutAmmoMacro(rhs_mag_3of56,10)
					LoadoutAmmoMacro(rhs_mag_of462,10)
				};
			};
			class rhs_ammoslot_1 {
				displayName = "Ammo slot #1 count";
				tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_1";
				control = "Edit";
				expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4']] spawn rhs_fnc_Eden_DefineLoadout};";
				defaultValue = "-1";
				validate = "NUMBER";
				typeName = "NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #2 type";
				tooltip = "Define type of shell for #2 slot [Smoke rounds]";
				property = "rhs_ammoslot_2_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_d462,2)
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1 {
				displayName = "Ammo slot #2 count";
				tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #3 type";
				tooltip = "Define type of shell for #3 slot [Illumination rounds]";
				property = "rhs_ammoslot_3_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_s463,2)
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1 {
				displayName = "Ammo slot #3 count";
				tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #4 type";
				tooltip = "Define type of shell for #4 slot [Laser guided rounds]";
				property = "rhs_ammoslot_4_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_3of69m,2)
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1 {
				displayName = "Ammo slot #4 count";
				tooltip = "Define number of rounds stored inside of type #4. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_4";
			};
		};
		class RHS_TowingSystem
		{
			class Cargo
			{
				rhs_fakeVehicle = "rhs_D30_towingVehicle";
				rhs_animationsOnAttach[] = // List of animations which will be played when vehicle is attached to carrier
				{
					"RaiseWheels",1 // nameOfAnimation, targetPhase
				};
				rhs_animationsOnDetach[] = 
				{
					"RaiseWheels",0 // nameOfAnimation, targetPhase
				};
				rhs_towedMass = 1420;
				rhs_towingPoint = "tow_point"; // Memory point where rope will be attached
				rhs_additionalRopeOffset[] = {0,0,0.6}; // Offset of 2nd, helper rope. That offset is applied to carrier memory point
				rhs_ropeLength = 0.1;
				rhs_maxAttachDistance = 2;
				rhs_dragOffset[] = {0,0.6,0.9}; // Attach offset when dragging weapon
			};
		};
	};
	class rhs_tow_pin : ThingX
	{
		EdPrev(rhs_tow_pin)
		scope = 1;
		collisionEffect = "";
		scopeCurator = 0;
		model="\rhsafrf\addons\rhs_heavyweapons\D30\pin";
		accuracy = 1000;
		animated = 0;
		countsForScoreboard = 0;
		class DestructionEffects {};
	};
	class rhs_D30_msv: rhs_D30_base
	{
		EdPrev(rhs_D30_msv)
		scope=2;
		crewMacro(0,mF1,mC1)
	};
	class rhs_D30_vdv: rhs_D30_base
	{
		EdPrev(rhs_D30_vdv)
		scope=2;
		crewMacro(0,mF2,mC2)
	};
	class rhs_D30_vmf: rhs_D30_base
	{
		EdPrev(rhs_D30_vdv)
		scope=2;
		crewMacro(0,mF4,mC4)
	};
	class rhs_D30_ins: rhs_D30_base
	{
		EdPrev(rhs_D30_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					"rhs_mag_of462_10",
					"rhs_mag_d462_2",
					"rhs_mag_s463_2",
					"rhs_mag_3of69m_2"
				};
			};
		};
	};

	class rhs_D30_AT_base: rhs_D30_base
	{
		EdPrev(rhs_D30_AT_base)
		displayName=$STR_rhs_DN_d30_AT;
		AUTHOR_MACRO_BIS_PORT
		availableForSupportTypes[]={};
		artilleryScanner = 0;
		sensorPosition = "gunnerView";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode = 0;
				maxVerticalRotSpeed = 0.105;		// 1 = 45*/sec
				weapons[]={rhs_weap_D30_at,rhs_weap_fcs_noLRF};
				memoryPointGunnerOptics = "gunnerview";
				maxElev=+70;
				magazines[] =
				{
					"rhs_mag_bk6m","rhs_mag_bk6m", //2 shells in single crate
					"rhs_mag_bk6m","rhs_mag_bk6m",
					"rhs_mag_bk6m","rhs_mag_bk6m",
					"rhs_mag_bk6m","rhs_mag_bk6m",
					"rhs_mag_bk6m","rhs_mag_bk6m",
					"rhs_mag_of462_direct","rhs_mag_of462_direct",
					"rhs_mag_of462_direct","rhs_mag_of462_direct",
					"rhs_laserfcsmag","rhs_laserfcsmag"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil
			{
				source="door";
				animPeriod=6;
			};
		};
		class Attributes: Attributes {
			class rhs_caseDeleteTime: rhs_caseDeleteTime {};
			class rhs_ammoslot_1_type {
				displayName = "Ammo slot #1 type";
				tooltip = "Define type of shell for #1 slot [HE rounds]";
				property = "rhs_ammoslot_1_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];";
				defaultValue = 0;
				typeName = "STRING";
				class values {
					LoadoutAmmoMacro(rhs_mag_3of56_direct,10)
					LoadoutAmmoMacro(rhs_mag_of462_direct,10)
				};
			};
			class rhs_ammoslot_1 {
				displayName = "Ammo slot #1 count";
				tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_1";
				control = "Edit";
				expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4','rhs_ammoslot_5']] spawn rhs_fnc_Eden_DefineLoadout};";
				defaultValue = "-1";
				validate = "NUMBER";
				typeName = "NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #2 type";
				tooltip = "Define type of shell for #2 slot [Smoke rounds]";
				property = "rhs_ammoslot_2_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_d462,2)
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1 {
				displayName = "Ammo slot #2 count";
				tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #3 type";
				tooltip = "Define type of shell for #3 slot [Illumination rounds]";
				property = "rhs_ammoslot_3_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_s463,2)
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1 {
				displayName = "Ammo slot #3 count";
				tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #4 type";
				tooltip = "Define type of shell for #4 slot [Laser guided rounds]";
				property = "rhs_ammoslot_4_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_3of69m,2)
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1 {
				displayName = "Ammo slot #4 count";
				tooltip = "Define number of rounds stored inside of type #4. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_4";
			};
			class rhs_ammoslot_5_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #5 type";
				tooltip = "Define type of shell for #5 slot [HEAT rounds]";
				property = "rhs_ammoslot_5_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_bk6m,26)
					LoadoutAmmoMacro(rhs_mag_bk13,26)
				};
			};
			class rhs_ammoslot_5: rhs_ammoslot_1 {
				displayName = "Ammo slot #5 count";
				tooltip = "Define number of rounds stored inside of type #5. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_5";
			};
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				fired = "_this spawn rhs_fnc_fired_d30;";
			};
		};
	};
	class rhs_D30_at_msv: rhs_D30_AT_base
	{
		EdPrev(rhs_D30_at_msv)
		scope=2;
		crewMacro(0,mF1,mC1)
	};
	class rhs_D30_at_vdv: rhs_D30_AT_base
	{
		EdPrev(rhs_D30_at_vdv)
		scope=2;
		crewMacro(0,mF2,mC2)
	};
	class rhs_D30_at_vmf: rhs_D30_AT_base
	{
		EdPrev(rhs_D30_at_vdv)
		scope=2;
		crewMacro(0,mF4,mC4)
	};
	class rhs_D30_at_ins: rhs_D30_AT_base
	{
		EdPrev(rhs_D30_at_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					"rhs_mag_bk6m","rhs_mag_bk6m", //2 shells in single crate
					"rhs_mag_bk6m","rhs_mag_bk6m",
					"rhs_mag_bk6m","rhs_mag_bk6m",
					"rhs_mag_bk6m","rhs_mag_bk6m",
					"rhs_mag_bk6m","rhs_mag_bk6m",
					"rhs_mag_of462","rhs_mag_of462",
					"rhs_mag_of462","rhs_mag_of462"
				};
			};
		};
	};

	class rhs_D30_towingVehicle_base: RHS_TowedWeapons_Base
	{
		displayname = "D30 Tow";
		model="\rhsafrf\addons\rhs_heavyweapons\D30\D30";
		driveOnComponent[] = {wheels};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_heavyweapons\d30\data\d30_co.paa"};
		class AnimationSources
		{

			class leftT_source {source="user";animPeriod = 1;initPhase=2.3; };
			class rightT_source: leftT_source {initPhase=2.3; };
			class leftW_source: leftT_source {initPhase=0.7; };
			class rightW_source: leftW_source {};
			class maingunT_source {source="user";animPeriod = 1;initPhase=-0.165; };
			class mainTurretT_source: maingunT_source {initPhase=0;};
			class szpilki_source {source="user";animPeriod = 0.1;initPhase=0.7; };
			class body_source {source="user";animPeriod = 0.6;initPhase=0; };
			class d30_kolo {source="user";animPeriod = 0.6;initPhase=0; };
			class fold_arty_handler {source="user";animPeriod = 0.6;initPhase=0;};
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class RaiseWheels 				{source = user; animPeriod = 1;initPhase=0;};
		};
		maxOmega = 1000;
		maxSpeed = 40;
		class Wheels
		{
			class Wheel_1
			{
				steering					= true;
				side						= "left";
				boneName					= "damper_front";
				suspForceAppPointOffset		= "wheel_1_center";
				tireForceAppPointOffset		= "wheel_1_center";
				center						= "wheel_1_center";
				boundary					= "wheel_1_bound";
				suspTravelDirection[]		= {0, -1, 0};
				width						= 0.27;
				mass						= 115;
				MOI							= __EVAL(0.5*1215*(0.288^2));		// radius 0.288m

				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;

				maxBrakeTorque				= 0;
				maxHandBrakeTorque			= 0;

				maxCompression				= 0.1;
				maxDroop					= 0.1;

				sprungMass					= -1;
				springStrength				= 11600;
				springDamperRate			= 3280;

				longitudinalStiffnessPerUnitGravity	= 25000;
				latStiffX					= 12.5;
				latStiffY					= 18.0;
				frictionVsSlipGraph[]		= {{0, 5}, {0.5, 2}, {1,1}};
			};
			class Wheel_2: Wheel_1
			{
				steering					= true;
				side						= "right";
				boneName					= "damper_left";
				suspForceAppPointOffset		= "wheel_2_center";
				tireForceAppPointOffset		= "wheel_2_center";
				center						= "wheel_2_center";
				boundary					= "wheel_2_bound";
			};
		};
	};
	class rhs_D30_towingVehicle: rhs_D30_towingVehicle_base
	{
		scope=1;
	};

	//Kornet
	class rhs_Kornet_Base: AT_01_base_F
	{
		EdPrev(rhs_Kornet_Base)
		dlc = "RHS_AFRF";
		ASSEMBLE_INFO(rhs_Kornet_Gun_Bag,rhs_Kornet_Tripod_Bag)

		scope = 0;
		displayname = $STR_rhs_DN_kornet;
		class Library {libTextDesc = $STR_rhs_LIB_AT13;};
		model = "\rhsafrf\addons\rhs_heavyweapons\kornet\kornet.p3d";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_metis_at13_CA.paa";
		PICTURE_MACRO(rhs_Kornet_9M133_2_msv_ca)
		mapSize = 1.5;
		sensorPosition = "gunnerView";
		STATIC_WEAPON_HP

		class ViewPilot: ViewPilot
		{
			initAngleX 	= -0.0; 		initAngleY 	= 0;
			VIEW_FOV(FOV_WIDE)
			VIEW_6DOF_DEFAULT_ROTATION
			VIEW_6DOF_LIMITED_TRANSLATION
		};
		hiddenSelections[] = {};

		/*
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};
		*/

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={rhs_weap_9K133_launcher};
				magazines[]={rhs_mag_9m133,rhs_mag_9m133,rhs_mag_9m133};
				gunnerAction = "RHS_Kornet_Gunner";
				gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
				gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
				memorypointgunneroptics = "gunnerview";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn79_6x";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				gunnerRightHandAnimName = "horizontal_handle";
				gunnerLeftHandAnimName = "vertical_handle";
				turretInfoType="RHS_RscInfoStaticWeapon";
				maxHorizontalRotSpeed = 0.35;
				maxVerticalRotSpeed = 0.35;
				minTurn=-45; maxTurn=+45; initTurn=0;
				minElev=-10; maxElev=+20; initElev=0;
				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
				class ViewGunner
				{
					initAngleX=5; minAngleX=-10; maxAngleX=+20;
					initAngleY=0; minAngleY=-60; maxAngleY=+60;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=5; minAngleX=-10; maxAngleX=+20;
					initAngleY=0; minAngleY=-60; maxAngleY=+60;
					initFov=0.058; minFov=0.058; maxFov=0.058; // 6x zoom
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={4,5};
				};
				disableSoundAttenuation = 1;

				class OpticsIn
				{
					class Wide : ViewOptics
					{
						opticsDisplayName = "W";
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn79_6x";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov=0.0292; minFov=0.0292; maxFov=0.0292; // 12x zoom
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn79_12x";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						initFov=0.0175; minFov=0.0175; maxFov=0.0175; // 20x zoom
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn79_20x";
					};
				};

				class OpticsOut
				{
					class ViewGunner: ViewGunner
					{
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
		class AnimationSources
		{
			class revolving{source="revolving";weapon="rhs_weap_9K133_launcher";};
			class ReloadMagazine{source="reloadmagazine";weapon="rhs_weap_9K133_launcher";};
		};
	};
	class rhs_Kornet_9M133_2_msv: rhs_Kornet_Base
	{
		EdPrev(rhs_Kornet_9M133_2_msv)
		scope = 2;
		crewMacro(0,mF1,mC1)
	};
	class rhs_Kornet_9M133_2_vdv: rhs_Kornet_Base
	{
		EdPrev(rhs_Kornet_9M133_2_vdv)
		scope = 2;
		crewMacro(0,mF2,mC2)
	};
	class rhs_Kornet_9M133_2_vmf: rhs_Kornet_Base
	{
		EdPrev(rhs_Kornet_9M133_2_vdv)
		scope = 2;
		crewMacro(0,mF4,mC4)
	};
	class rhs_Kornet_9M133_2_ins: rhs_Kornet_Base
	{
		EdPrev(rhs_Kornet_9M133_2_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
	};
	class rhs_Kornet_9M133_1_ins: rhs_Kornet_Base
	{
		EdPrev(rhs_Kornet_9M133_1_ins)
		CTI_Indep_Macro
		crewMacro(2,mF3,mC3)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={rhs_weap_9K115_1_launcher};
				magazines[]={rhs_mag_9M131,rhs_mag_9M131,rhs_mag_9M131,rhs_mag_9M131};
			};
		};
		class AnimationSources
		{
			class revolving{source="revolving";weapon="rhs_weap_9K115_1_launcher";};
			class ReloadMagazine{source="reloadmagazine";weapon="rhs_weap_9K115_1_launcher";};
		};
	};


	#include "cfgBags.hpp"
