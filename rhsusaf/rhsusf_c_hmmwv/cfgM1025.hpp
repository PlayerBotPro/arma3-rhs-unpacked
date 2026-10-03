
	#define Macro_Mar2 \
	class Exhausts \
	{\
		class exhaust1\
		{\
			position = "exhaust2_1";\
			direction = "exhaust2_2";\
			effect ="ExhaustsEffect";\
		};\
	};\
	\
	class AnimationSources: AnimationSources\
	{\
		class  hide_snorkel: hide_snorkel {\
			initPhase=0;\
		};\
	};\
	\
	maxFordingDepth = 0;

	//M1025s!
	class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop
	{
		EdPrev(rhsusf_m1025_w)
		Mac_car_Army_WD

		#include "PhysX_m1025.hpp"
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025.paa";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1025_ca.paa";
		displayname = "M1025A2 (Unarmed)";
		forceHideDriver = 1;

		hiddenSelections[] =
		{
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"camo1",
			"camo2",
			"unitdecals_1",
			"unitdecals_2",

			//hide rest of stuff
			"ind_wait",
			"ind_brake",
			"ind_highbeam"
		};
		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};

		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa"
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

		crewExplosionProtection = 0.95;
		attenuationEffectType = "RHS_CarAttenuation";
		class AnimationSources: AnimationSources
		{
			class  trunk
			{
				source = "user";
				animPeriod = 1.1;
				initPhase=0;
			};
			class  ani_window_1
			{
				source = "door";
				animPeriod = 1.1;
				initPhase=0;
			};
			class  ani_window_2: ani_window_1
			{
			};
			class  ani_window_3: ani_window_1
			{
			};
			class  ani_window_4: ani_window_1
			{
			};
		};
		class UserActions: UserActions
		{
			class trunk_open
			{
				displayName="Open Trunk";
				position="trunk_action";
				radius=2;
				onlyForplayer= false;
				condition = "this animationPhase 'ani_trunk_1'<0.5";
				statement = "this animate ['ani_trunk_1', 1];";
			};
			class trunk_close: trunk_open
			{
				displayName="Close Trunk";
				condition = "this animationPhase 'ani_trunk_1'==1";
				statement = "this animate ['ani_trunk_1', 0]";
			};
			class window_action
			{
				userActionID = 101;
				displayName="Raise/Lower window";
				//position="";
				position="pos_driverpos";
				radius=14;
				onlyForplayer= false;
				condition = "((call rhsusf_fnc_findPlayer) in this) AND ((gunner this) != (call rhsusf_fnc_findPlayer) )";
				statement = "this call rhs_fnc_m1025_windowHandler";
			};
			class door_action: window_action
			{
				userActionID = 102;
				displayName="Door toggle";
				condition = "((call rhsusf_fnc_findPlayer) in this)";
				statement = "call rhs_fnc_m1025_doorToggle";
			};
		};

		//windows with armored glass
		class HitPoints: HitPoints
		{
			class hitwindshield_1: hitwindshield_1
			{
				armor = 2.29;
			};
			class hitwindshield_2: hitwindshield_2
			{
				armor = 2.29;
			};
			class HitGlass1: HitGlass1
			{
				armor = 2.09;
			};
			class HitGlass2: HitGlass2
			{
				armor = 2.09;
			};
			class HitGlass3: HitGlass3
			{
				armor = 2.09;
			};
			class HitGlass4: HitGlass4
			{
				armor = 2.09;
			};
		};

		class TransportBackpacks
		{
			bag_xx(rhsusf_falconii,2);
		};

		class TransportMagazines {
			mag_xx(rhs_m136_hedp_mag,2);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,20);
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
			item_xx(FirstAidKit,4);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_m4_carryhandle,2);
			weap_xx(rhs_weap_M136_hedp,2);
		};


		transportSoldier = 0;
		cargoAction[] = {"RHS_HMMWV_Cargo","RHS_HMMWV_Cargo","RHS_HMMWV_Cargo"};

		memoryPointsGetInCargo[] = {"pos_cargo_RF","pos_cargo_RB","pos_cargo_LB"};
		memoryPointsGetInCargoDir[] = {"pos_cargo_RF_dir","pos_cargo_RB_dir","pos_cargo_LB_dir"};
		cargoProxyIndexes[] = {};
		getInProxyOrder[] = {1,2,3};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				weapons[]= {"rhsusf_weap_DummyLauncher"};
				gunnerAction = "passenger_inside_1";
				gunnerName = "Passenger (Right Front)";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				memoryPointsGetInGunner = "pos_cargo_RF";
				memoryPointsGetInGunnerDir = "pos_cargo_RF_dir";
				memoryPointGunnerOptics = "";
				gunnerDoor="Door_RF";
				proxyIndex = 1;
				maxTurn = -34;
				minTurn = -75;
				maxElev = 15;
				minElev = -7;
				class dynamicViewLimits {};
				enabledByAnimationSource = "ani_window_2";
				selectionFireAnim = "";
				class Hitpoints {};
				showAsCargo = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Passenger (Right Back)";
				memoryPointsGetInGunner = "pos_cargo_RB";
				memoryPointsGetInGunnerDir = "pos_cargo_RB_dir";
				proxyIndex = 2;
				enabledByAnimationSource = "ani_window_4";
				gunnerDoor="Door_RB";
				maxTurn = -37;
				minTurn = -65;
				maxElev = 9;
				minElev = -15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Passenger (Left Back)";
				memoryPointsGetInGunner = "pos_cargo_LB";
				memoryPointsGetInGunnerDir = "pos_cargo_LB_dir";
				proxyIndex = 3;
				maxTurn = 90;
				minTurn = 54;
				maxElev = 9;
				minElev = -15;
				enabledByAnimationSource = "ani_window_3";
				gunnerDoor="Door_LB";
			};
		};
		class Attributes: Attributes {
			class ObjectTexture: ObjectTexture {};
			class rhs_decalMask: rhs_decalMask {};
			class rhs_decalDoors: rhs_decalDoors {};
			class rhs_hideCIP: rhs_hideCIP {};
			class rhs_hideBFT: rhs_hideBFT {};
			class rhs_hideAntennas: rhs_hideAntennas {};
			class rhs_hideA2Parts: rhs_hideA2Parts {};
			class Door_LF: Door_LF {};
			class ani_window_1: Door_LF {
				displayName = "Open front left window";
				property = "ani_window_1";
			};
			class Door_RF: Door_RF {};
			class ani_window_2: Door_LF {
				displayName = "Open front right window";
				property = "ani_window_2";
			};
			class Door_LB: Door_LB {};
			class ani_window_3: Door_LF {
				displayName = "Open back left window";
				property = "ani_window_3";
			};
			class Door_RB: Door_RB {};
			class ani_window_4: Door_LF {
				displayName = "Open back right window";
				property = "ani_window_4";
			};
			class ani_trunk_1: Door_LF {
				displayName = "Open trunk";
				property = "ani_trunk_1";
				expression = "_this animate ['%s',_value,true]";
				control = "Slider";
			};
		};
		class EventHandlers: EventHandlers
		{
			class rhs_m1025_eh
			{
				getOut = "_this call rhs_fnc_m1025_doorHandler";
			};
		};
		RHS_TOWPOS_TWEAK(-0.06,-2.45,-1.15)
	};
	class rhsusf_m1025_d: rhsusf_m1025_w
	{
		EdPrev(rhsusf_m1025_d)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};
	};
	class rhsusf_m1025_w_s: rhsusf_m1025_w
	{
		Macro_Mar2

		EdPrev(rhsusf_m1025_w_s)

		Mac_car_USMC_WD

		displayname = "M1025A2 (Unarmed/Snorkel)";

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};

	class rhsusf_m1025_d_s: rhsusf_m1025_w_s
	{
		EdPrev(rhsusf_m1025_d_s)

		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};

	};

	class rhsusf_m1025_w_m2: rhsusf_m1025_w
	{
		EdPrev(rhsusf_m1025_w_m2)

		Mac_car_Army_WD

		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_m2";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_m2.paa";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1025_m2_ca.paa";
		displayname = "M1025A2 (M2)";
		attenuationEffectType = "RHS_CarAttenuation";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};

		textSingular = "alpha victor (MRAP)";
		textPlural = "alpha victors";
		nameSound = "veh_vehicle_armedcar_s";

		class AnimationSources: AnimationSources
		{
			class GunnerAdjust_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.25;
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "RHS_M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "RHS_M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "RHS_M2";
			};
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "RHS_M2";
			};
		};

		//windows with armored glass
		class HitPoints: HitPoints
		{
		};
		threat[] = {0.9,0.3,0.1};
		showNVGGunner = 1;
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerLeftHandAnimName		= "OtocHlaven_Shake";
				gunnerRightHandAnimName		= "OtocHlaven_Shake";
				gunnerLeftLegAnimName		="leg_left";
				gunnerRightLegAnimName		="leg_right";
				body						= "mainTurret";
				gun							= "mainGun";
				animationSourceBody			= "mainTurret";
				animationSourceGun			= "mainGun";
				animationSourceStickX		= MainTurret_Inertia;
				animationSourceStickY		= MainGun_Inertia;
				turretInfoType				= "RHS_RscWeaponZeroing_TurretAdjust";
				discreteDistance[]			= {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex	= 2;
				gunnerForceOptics			= 0;
				gunnerOutOpticsShowCursor	= 0;
				weapons[]					= {RHS_M2};
				magazines[]=
				{
					rhs_mag_100rnd_127x99_mag_Tracer_Red,
					rhs_mag_100rnd_127x99_mag_Tracer_Red,
					rhs_mag_100rnd_127x99_mag_Tracer_Red,
					rhs_mag_100rnd_127x99_mag_Tracer_Red,
					rhs_mag_100rnd_127x99_mag_Tracer_Red,
					rhs_mag_100rnd_127x99_mag_Tracer_Red
				};
				minElev = -10;
				maxElev = 40;
				soundServo[] = {"A3\sounds_f\dummysound",1e-006,1};
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 1;
				gunnerAction = "RHS_HMMWV_Gunner03";
				gunnerInAction = "RHS_HMMWV_Gunner03a_in";
				lodTurnedIn=0;
				lodTurnedOut=1000;
				lodOpticsOut=1000;
				canhideGunner=1;
				inGunnerMayFire = 0;
				outGunnerMayFire = 1;
				viewGunnerInExternal=1;
				gunnerDoor="Door_RB";
				gunnerCompartments = "Compartment1";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "";
				memoryPointGunnerOutOptics = "gunnerview";
				gunnerOpticsModel = "";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				optics = 0;
				memoryPointsGetInGunner = "pos_cargo_RB";
				memoryPointsGetInGunnerDir = "pos_cargo_RB_dir";
				class ViewOptics: ViewOptics
				{
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics
				{
				};
			};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
		};
		hiddenSelections[] =
		{
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"camo1",
			"camo2",
			"camo3",
			"unitdecals_1",
			"unitdecals_2",

			//hide rest of stuff
			"ind_wait",
			"ind_brake",
			"ind_highbeam"
		};
		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};

		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
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
		RHS_TOWPOS_TWEAK(-0.06,-2.45,-1.40)
	};

	class rhsusf_m1025_d_m2: rhsusf_m1025_w_m2
	{
		EdPrev(rhsusf_m1025_d_m2)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};
	};

	class rhsusf_m1025_w_s_m2: rhsusf_m1025_w_m2
	{
		EdPrev(rhsusf_m1025_w_s_m2)

		Mac_car_USMC_WD

		Macro_Mar2

		displayname = "M1025A2 (M2/Snorkel)";
		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};

	class rhsusf_m1025_d_s_m2: rhsusf_m1025_w_s_m2
	{
		EdPrev(rhsusf_m1025_d_s_m2)
		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2
	{
		EdPrev(rhsusf_m1025_w_mk19)
		Mac_car_Army_WD

		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_mk19";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_mk19.paa";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1025_mk19_ca.paa";
		displayname = "M1025A2 (Mk19)";
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				discreteDistance[]			= {100,200,300,400,500,600,800,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex	= 2;
				gunnerLeftHandAnimName		= "OtocHlaven";
				gunnerRightHandAnimName		= "OtocHlaven";
				weapons[]					= {RHS_MK19};
				magazines[]=
				{
					mag_6(RHS_48Rnd_40mm_MK19_M430A1),
					RHS_48Rnd_40mm_MK19_M1001
				};
			};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
		};
		class AnimationSources: AnimationSources
		{
			class belt_rotation {source="reload";weapon="RHS_MK19";};
			class ReloadMagazine{source="reloadmagazine";weapon="RHS_MK19";};
			class Revolving{source="revolving";weapon="RHS_MK19";};
		};
		RHS_TOWPOS_TWEAK(-0.06,-2.45,-1.25)
	};
	class rhsusf_m1025_d_Mk19: rhsusf_m1025_w_Mk19
	{
		EdPrev(rhsusf_m1025_d_Mk19)
		Mac_car_Army_D


		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};
	};
	class rhsusf_m1025_w_s_Mk19: rhsusf_m1025_w_Mk19
	{
		EdPrev(rhsusf_m1025_w_s_Mk19)
		Mac_car_USMC_WD
		Macro_Mar2

		displayname = "M1025A2 (Mk19/Snorkel)";

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m1025_d_s_Mk19: rhsusf_m1025_w_s_Mk19
	{
		EdPrev(rhsusf_m1025_d_s_Mk19)
		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};

	//M966 TOW carrier (M1025 with TOW launcher on top)
	class rhsusf_m966_w: rhsusf_m1025_w
	{
		EdPrev(rhsusf_m966_w)

		Mac_car_Army_WD

		model					= "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_TOW";
		Icon					= "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_m2.paa";
		Picture					= "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m966_ca.paa";
		displayname				= "M966A1 (M220A2)";
		attenuationEffectType	= "RHS_CarAttenuation";

		class RenderTargets: RenderTargets
		{
			class Optic
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition		= "gunnerview";
					pointDirection		= "gunnerview_dir";
					renderQuality		= 2;
					renderVisionMode	= 4;
					fov					= __EVAL(0.7/13);
					turret[] 			= {0};
				};
				PIP_BB(3)
			};
		};

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};

		textSingular = "alpha victor (MRAP)";
		textPlural = "alpha victors";
		nameSound = "veh_vehicle_armedcar_s";

		class AnimationSources: AnimationSources
		{
			class Revolving 		{source	= "revolving";		weapon = "rhs_weap_tow_launcher_static";};
			class ReloadMagazine 	{source	= "reloadmagazine";	weapon = "rhs_weap_tow_launcher_static";};
		};

		class HitPoints: HitPoints
		{
			class Hit_Ammo {armor = -100; minimalHit = -0.20; explosionShielding = 0.0; armorComponent = "Hit_Ammo"; 	name = "Hit_Ammo";		visual = "-";	passThrough = 0.1; 	radius = 0.2;};
			class HitHull: HitHull {depends = "Hit_Ammo";};
		};
		threat[] = {0.9,0.3,0.1};
		showNVGGunner = 1;
		class Turrets: Turrets
		{
			class TOW_Turret: MainTurret
			{
				body = "mainTurret";
				gun = "maingun";
				minElev = -10;
				maxElev = 30;
				minturn = -180;
				maxturn = 180;
				weapons[] = {"rhs_weap_tow_launcher_static"};
				magazines[] = {
					rhs_mag_TOW2A,
					rhs_mag_TOW2A,
					rhs_mag_TOW2b,
					rhs_mag_TOW2b,
					rhs_mag_TOW2bb,
					rhs_mag_TOW2bb
				};
				turretInfoType				= "RscOptics_Offroad_01";
				gunnerAction				= "RHS_HMMWV_Gunner_TOW";
				gunnerInAction				= "RHS_HMMWV_Gunner03a_in";
				memoryPointsGetInGunner		= "pos_cargo_RB";
				memoryPointsGetInGunnerDir	= "pos_cargo_RB_dir";
				gunnerLeftHandAnimName		= "handle_Elev2";
				gunnerRightHandAnimName		= "handle_Horiz2";
				gunnerLeftLegAnimName		= "leg_left";
				gunnerRightLegAnimName		= "leg_right";
				inGunnerMayFire				= 0;
				outGunnerMayFire			= 1;
				gunnerForceOptics			= 0;
				gunnerOutOpticsShowCursor	= 0;
				maxHorizontalRotSpeed		= 0.25;	// 1 = 45*/sec
				maxVerticalRotSpeed			= 0.15;		// 1 = 45*/sec
				viewGunnerInExternal		= 1;
				ejectDeadGunner				= 0;
				castGunnerShadow			= 1;
				stabilizedInAxes			= 0;
				gunnerDoor					= "Door_RB";
				soundServo[]				= {"A3\sounds_f\dummysound",1e-006,1};
				soundAttenuationTurret		= "HeliAttenuationGunner";
				class ViewGunner
				{
					initAngleX	= 5;
					minAngleX	= -30;
					maxAngleX	= 30;
					initAngleY	= 0;
					minAngleY	= -100;
					maxAngleY	= 100;
					initFov		= 0.7;
					minFov		= 0.25;
					maxFov		= 1.1;
				};
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				class OpticsIn
				{
					//Source: http://www.steelbeasts.com/sbwiki/index.php?title=TOW
					//Wide FOV day sight: 3x
					class Wide : ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.7/3;
						minFov = 0.7/3;
						maxFov = 0.7/3;
						visionMode[] = {"Normal"};
						//Red LED display according to AN/TAS-4A manual
						thermalMode[] = {4};

						gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_optic";
					};
					//Narrow FOV day sight: 13x
					class Narrow : Wide
					{
						initFov = 0.7/13;
						minFov = 0.7/13;
						maxFov = 0.7/13;

						gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_optic";
					};
					//Wide FOV night sight: 4x
					class Wide_TI : Wide
					{
						initFov = 0.7/4;
						minFov = 0.7/4;
						maxFov = 0.7/4;
						visionMode[] = {"TI"};

						gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_TI";
					};
					//Narrow FOV night sight: 14x
					//According to AN/TAS-4A manual it should be 12x? (http://sin.thecthulhu.com/library/military/training/US/Archive_By_Year/1989_US_Army_NIGHT_SIGHT_(AN_TAS-4A)__76p.pdf)
					class Narrow_TI : Wide_TI
					{
						initFov = 0.7/12;
						minFov = 0.7/12;
						maxFov = 0.7/12;

						gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_TI_Narrow";
					};
				};
			};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
		};
		hiddenSelections[] =
		{
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"camo1",
			"camo2",
			"camo3",
			"unitdecals_1",
			"unitdecals_2",

			//hide rest of stuff
			"ind_wait",
			"ind_brake",
			"ind_highbeam"
		};
		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};

		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
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
		animationList[] =
		{
			"Hide_A2Bumper", 1,
			"Hide_Brushguard", .5
		};
		RHS_TOWPOS_TWEAK(-0.06,-2.22,-1.25)
	};

	class rhsusf_m966_d: rhsusf_m966_w
	{
		EdPrev(rhsusf_m966_d)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};
	};


	//M1043s! (M1025 with supplemental armor kit on doors)
	class rhsusf_m1043_w: rhsusf_m1025_w
	{
		EdPrev(rhsusf_m1043_w)
		Mac_car_Army_WD

		#include "PhysX_m1025.hpp"
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1043";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025.paa";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1043_ca.paa";
		displayname = "M1043A2 (Unarmed)";

		hiddenSelections[] =
		{
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"camo1",
			"camo2",
			"unitdecals_1",
			"unitdecals_2",

			//hide rest of stuff
			"ind_wait",
			"ind_brake",
			"ind_highbeam"
		};
		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};

		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa"
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
	};
	class rhsusf_m1043_d: rhsusf_m1043_w
	{
		EdPrev(rhsusf_m1043_d)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa"
		};
	};
	class rhsusf_m1043_w_s: rhsusf_m1043_w
	{
		Macro_Mar2

		EdPrev(rhsusf_m1043_w_s)

		Mac_car_USMC_WD

		displayname = "M1043A2 (Unarmed/Snorkel)";

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m1043_d_s: rhsusf_m1043_w_s
	{
		EdPrev(rhsusf_m1043_d_s)

		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};

	class rhsusf_m1043_w_m2: rhsusf_m1025_w_m2
	{
		EdPrev(rhsusf_m1043_w_m2)
		Mac_car_Army_WD

		displayname = "M1043A2 (M2)";
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1043_m2";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1043_m2_ca.paa";

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};

		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
		};
	};
	class rhsusf_m1043_d_m2: rhsusf_m1043_w_m2
	{
		EdPrev(rhsusf_m1043_d_m2)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
		};
	};
	class rhsusf_m1043_w_s_m2: rhsusf_m1043_w_m2
	{
		EdPrev(rhsusf_m1043_w_s_m2)

		Mac_car_USMC_WD

		Macro_Mar2

		displayname = "M1043A2 (M2/Snorkel)";
		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m1043_d_s_m2: rhsusf_m1043_w_s_m2
	{
		EdPrev(rhsusf_m1043_d_s_m2)
		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};

	class rhsusf_m1043_w_mk19: rhsusf_m1025_w_mk19
	{
		EdPrev(rhsusf_m1043_w_mk19)
		Mac_car_Army_WD

		displayname = "M1043A2 (Mk19)";
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1043_mk19";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1043_mk19_ca.paa";

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};

		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
		};
	};
	class rhsusf_m1043_d_mk19: rhsusf_m1043_w_mk19
	{
		EdPrev(rhsusf_m1043_d_mk19)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
		};
	};
	class rhsusf_m1043_w_s_mk19: rhsusf_m1043_w_mk19
	{
		EdPrev(rhsusf_m1043_w_s_Mk19)
		Mac_car_USMC_WD
		Macro_Mar2

		displayname = "M1043A2 (Mk19/Snorkel)";

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m1043_d_s_mk19: rhsusf_m1043_w_s_mk19
	{
		EdPrev(rhsusf_m1043_d_s_Mk19)
		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};

	//M1045s TOW carrier (M1043 with TOW launcher on top)
	class rhsusf_m1045_w: rhsusf_m966_w
	{
		EdPrev(rhsusf_m1045_w)
		Mac_car_Army_WD

		displayname = "M1045A2 (M220A2)";
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1045";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1045_ca.paa";

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};

		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
			class Olive
			{
				displayName="Olive";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
		};
		animationList[] = {};
		RHS_TOWPOS_TWEAK(-0.06,-2.45,-1.25)
	};
	class rhsusf_m1045_d: rhsusf_m1045_w
	{
		EdPrev(rhsusf_m1045_d)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
		};
	};
	class rhsusf_m1045_w_s: rhsusf_m1045_w
	{
		EdPrev(rhsusf_m1045_w_s)

		Mac_car_USMC_WD

		Macro_Mar2

		displayname = "M1045A2 (M220A2/Snorkel)";
		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m1045_d_s: rhsusf_m1045_w_s
	{
		EdPrev(rhsusf_m1045_d_s)
		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};