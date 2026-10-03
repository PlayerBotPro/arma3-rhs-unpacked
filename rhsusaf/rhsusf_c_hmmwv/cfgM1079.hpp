
	#define Macro_Mar \
	class Exhausts\
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
		class hide_snorkel: light_bo\
		{\
			initPhase=0;\
		};\
	};\
	\
	maxFordingDepth = 0;


	//M998, 1-1/14 ton, cargo carrier, woodland, open (US Army)
	class rhsusf_m998_w_2dr: rhsusf_hmmwe_base
	{
		EdPrev(rhsusf_m998_w_2dr)

		Mac_car_Army_WD

		side = 1;
		scope = 2;

		#include "PhysX_m1097.hpp"
		typicalCargo[] = {"rhsusf_army_ocp_driver"};

		nameSound="Car";
		attenuationEffectType="OpenCarAttenuation";
		soundAttenuationCargo[]={0};

		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_2dr";
		displayname = "M1097A2 (2D/Open)";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m998_2dr_ca.paa";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_2dr_open.paa";

		class Library{libTextDesc = "M998, 1-1/4 ton, cargo carrier, wood (open)";};

		//insideSoundCoef = 1;
		damperSize = 0.15;
		damperForce = 1;
		damperDamping = 1;
		selectionBrakeLights="light_brake";
		selectionBackLights="light_drive";

		hiddenSelections[] =
		{
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"interior_wood",
			"2drcargocomplete",
			"camo1",
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
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
			""
		};

		driverAction = "RHS_HMMWV_Driver";
		driverInAction = "RHS_HMMWV_Driver";
		cargoAction[] = {"RHS_HMMWV_Cargo","Truck_Cargo01","Truck_Cargo02","Truck_Cargo03","Truck_Cargo01","Truck_Cargo02","RHS_HMMWV_Cargo"};

		cargoDoors[]={};
		driverDoor="";

		memoryPointsGetInCargo[] = {"pos_cargo_RF","pos_cargo"};
		memoryPointsGetInCargoDir[] = {"pos_cargo_RF_dir","pos_cargo_dir"};
		memoryPointsGetInCoDriver = "pos_codriver";
		memoryPointsGetInCoDriverDir = "pos_codriver_dir";
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";

		cargoCompartments[] = {1, 2};
		transportMaxBackpacks = 7;
		threat[] = {0.0,0.0,0.0};
		castDriverShadow = 1;
		castCargoShadow = 1;

		class TransportBackpacks
		{
			class _xx_rhsusf_falconii
			{
				backpack="rhsusf_falconii";
				count=1;
			};
		};

		class TransportMagazines {
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,12);
			mag_xx(rhs_mag_M441_HE,8);
			mag_xx(rhs_mag_m67,4);
			mag_xx(rhs_mag_m18_green,2);
			mag_xx(rhs_mag_m18_red,2);
			mag_xx(rhs_mag_an_m8hc,4);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,4);
		};
		class TransportWeapons{};

		crewExplosionProtection = 0.55;
		transportSoldier = 4;
		cargoProxyIndexes[] = {2,3,5,6};
		getInProxyOrder[] = {1,2,3,4,5,6,7};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerGetInAction="GetInOffroadBack";
				gunnerGetOutAction="GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = "Passenger (Left Seat)";
				gunnerCompartments = "Compartment2";
				proxyIndex = 7;
				maxElev = 55;
				minElev = -45;
				maxTurn = -10;
				minTurn = -105;
				isPersonTurret = 1;
				selectionFireAnim = "";
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Right Seat)";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				proxyIndex = 4;
				maxTurn = 105;
				minTurn = 20;
				minElev = -45;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Passenger (Right Front)";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				memoryPointsGetInGunner = "pos_cargo_RF";
				memoryPointsGetInGunnerDir = "pos_cargo_RF_dir";
				proxyIndex = 1;
				maxTurn = -34;
				minTurn = -95;
			};
		};

		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_half_d.rvmat",
				//"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_full_d.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_half_d.rvmat",
				//"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_full_d.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_half_d.rvmat",
				//"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_full_d.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\m1025.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\m998_chassis.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m998_chassis.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_half_d.rvmat",
				//"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_full_d.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_half_d.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_full_d.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_tire.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_tire_half_d.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_tire_full_d.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\m998_windows.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m998_windows_half_d.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m998_windows_half_d.rvmat",

				"rhsusf\addons\rhsusf_hmmwv\textures\m998_tarpwindows.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m998_tarpwindows_half_d.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\m998_tarpwindows_half_d.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide {initPhase = 0;};
			class lights_hide: longlights_hide {initPhase = 0;};
			class  light_bo
			{
				source = "user";
				animPeriod = 0.00001;
				initPhase=1;
			};
			class  light_stop: light_bo
			{
				initPhase=0;
			};
			class  hide_backTop: light_bo
			{
				initPhase=1;
				mass=-80;
				displayName="hide back top";
				AUTHOR_MACRO
				forceAnimatePhase = 0;
				forceAnimate[] = {"hide_middleTop",0};
			};
			class  hide_frontTop: hide_backTop {
				displayName="hide front top";
				AUTHOR_MACRO
				forceAnimate[] = {};
			};
			class  hide_snorkel: hide_backTop {
				initPhase=1;
				displayName="hide snorkel";
				AUTHOR_MACRO
				forceAnimate[] = {};
			};
			class  hide_middleTop: light_bo {
				useSource = 1;
				displayName="unhide middle top";
				AUTHOR_MACRO
			};
			class  hide_CIP: light_bo {
				displayName="hide CIP";
				AUTHOR_MACRO
				initPhase=0;
			};
			class  hide_BFT: light_bo {
				displayName="hide BFT";
				AUTHOR_MACRO
				initPhase=0;
			};
			class  hide_Antenna: light_bo {
				displayName="hide Antennas";
				AUTHOR_MACRO
				initPhase=0;
				useSource = 1;
			};
			class  hide_A2_Parts: light_bo {
				displayName="hide A2 Parts";
				AUTHOR_MACRO
				initPhase=0;
			};
			class A1_bumper: light_bo {
				initPhase=0;
			};
			class  Hide_A2Bumper: light_bo {
				displayName="switch to old bumper";
				AUTHOR_MACRO

				initPhase=0;
				forceAnimatePhase = 1;
				forceAnimate[] = {"A1_bumper", 1};
				forceAnimate2[] = {"A1_bumper", 0};
			};
			class Hide_Brushguard: light_bo {
				initPhase=1;
				displayName="hide brushguard";
				AUTHOR_MACRO
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.8;
				sound = "RHS_HMMWV_Door";
				soundPosition = "door_1_axis";
			};
			class Door_RF: Door_LF {
				soundPosition = "door_2_axis";
			};
			class Door_LB: Door_LF {
				soundPosition = "door_3_axis";
			};
			class Door_RB: Door_LF {
				soundPosition = "door_4_axis";
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
			class Door_RF: Door_RF {};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="m1p";
					pointDirection="m1d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.7;
				};
				PIP_BB(1)
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="m2p";
					pointDirection="m2d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.7;
				};
				PIP_BB(2)
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={800,900,650};
				ambient[]={2,2,2};
				position="light_hd_1";
				direction="light_hd_1_dir";
				hitpoint="light_hd_1";
				selection="light_hd_1";
				size=1;
				innerAngle=30;
				outerAngle=100;
				coneFadeCoef=5;
				intensity=2.5;
				useFlare=0;
				dayLight=0;
				flareSize=0.85;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Left_Flare: Left
			{
				useFlare=1;
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Right: Left
			{
				position="light_hd_2";
				direction="light_hd_2_dir";
				hitpoint="light_hd_2";
				selection="light_hd_2";
			};
			class Right_Flare: Right
			{
				useFlare=1;
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left
			{
				color[]={800,900,650};
				ambient[]={5,5,5};
				position="Light_L_Long";
				direction="Light_L_Long_end";
				hitpoint="light_hd_1";
				selection="light_hd_1";
				size=1;
				innerAngle = 22;
				outerAngle = 29;
				coneFadeCoef = 1;
				intensity = 100;
				useFlare=0;
				dayLight=0;
				flareSize = 1.5;
				flareMaxDistance = 750;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 500;
					hardLimitEnd = 750;
				};
			};
			class Long_Right: Long_Left
			{
				position="Light_R_Long";
				direction="Light_R_Long_end";
				hitpoint="light_hd_2";
				selection="light_hd_2";
			};
			class Long_Right2: Long_Right
			{
				useFlare=1;
				position="light_R_Long_flare";
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left2: Long_Left
			{
				useFlare=1;
				position="light_L_Long_flare";
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
		};
		aggregateReflectors[]=
		{
			{"Left","Right"}
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03, 0.003, 0.003, 1};
				ambient[] = {0.003, 0.0003, 0.0003, 1};
				brightness = 0.001;
				blinking = true;
			};
		};
		class UserActions
		{
			class light_bo_off
			{
				displayName="B.O. Light off";
				position="pos_driverpos";
				radius=2;
				onlyForplayer= false;
				condition = "(player == driver this) && this animationPhase 'light_bo'<0.5;";
				statement = "this animate ['light_bo', 1];this animate ['light_brake_bo', 1]";
			};
			class light_bo_on: light_bo_off
			{
				displayName="B.O. Light on";
				condition = "(player == driver this) && this animationPhase 'light_bo'==1;";
				statement = "this animate ['light_bo', 0];this animate ['light_brake_bo', 0]";
			};
			class light_stop_off: light_bo_off
			{
				displayName="Stop Light off";
				condition = "(player == driver this) && this animationPhase 'light_stop'<0.5";
				statement = "this animate ['light_stop', 1]";
			};
			class light_stop_on: light_bo_off
			{
				displayName="Stop Light on";
				condition = "(player == driver this) && this animationPhase 'light_stop'==1";
				statement = "this animate ['light_stop', 0]";
			};
			class lights_toggle
			{
				displayName="Toggle short/long lights";
				position="";
				shortcut = "vehLockTargets";
				radius = 12;
				priority = 1.5;
				showWindow = 0;
				onlyForplayer = 1;
				condition = "(player == driver this) AND (isLightOn this)";
				statement = "[this,2] call rhsusf_fnc_carLightToggle";
			};
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
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

	class rhsusf_m998_d_2dr: rhsusf_m998_w_2dr
	{
		EdPrev(rhsusf_m998_d_2dr)
		Mac_car_Army_D

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};
	};
	class rhsusf_m998_w_s_2dr: rhsusf_m998_w_2dr
	{
		EdPrev(rhsusf_m998_w_s_2dr)

		Macro_Mar

		Mac_car_USMC_WD

		displayname = "M1123 (2D/Open/Snorkel)";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};

	class rhsusf_m998_d_s_2dr: rhsusf_m998_w_s_2dr
	{
		EdPrev(rhsusf_m998_d_s_2dr)

		Macro_Mar

		Mac_car_USMC_D

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};

	//HALF SOFT TOPS
	class rhsusf_m998_w_2dr_halftop: rhsusf_m998_w_2dr
	{
		EdPrev(rhsusf_m998_w_2dr_halftop)

		Mac_car_Army_WD

		displayname = "M1097A2 (2D/Half)";

		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_2dr_hopen.paa";

		soundAttenuationCargo[]={1,0};

		transportSoldier = 5;
		cargoProxyIndexes[] = {8,2,3,5,6};
		getInProxyOrder[] = {8,2,3,4,5,6,7};

		driverDoor="Door_LF";

		cargoDoors[]=
		{
			"Door_RF",
			""
		};

		class AnimationSources: AnimationSources
		{
			class  hide_frontTop: light_bo
			{
				initPhase=0;
			};
		};

		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
		};
	};
	class rhsusf_m998_d_2dr_halftop: rhsusf_m998_w_2dr_halftop
	{
		EdPrev(rhsusf_m998_d_2dr_halftop)
		Mac_car_Army_D

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};
	};
	class rhsusf_m998_w_s_2dr_halftop: rhsusf_m998_w_2dr_halftop
	{
		EdPrev(rhsusf_m998_w_s_2dr_halftop)
		Macro_Mar

		Mac_car_USMC_WD

		displayname = "M1123 (2D/Half/Snorkel)";
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m998_d_s_2dr_halftop: rhsusf_m998_w_s_2dr_halftop
	{
		EdPrev(rhsusf_m998_d_s_2dr_halftop)

		Macro_Mar

		Mac_car_USMC_D

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};


	//FULL SOFT TOPS
	class rhsusf_m998_w_2dr_fulltop: rhsusf_m998_w_2dr_halftop
	{
		EdPrev(rhsusf_m998_w_2dr_fulltop)
		Mac_car_Army_WD

		displayname = "M1097A2 (2D)";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_2dr.paa";
		attenuationEffectType = "RHS_CarAttenuation";
		soundAttenuationCargo[]={1};
		insideSoundCoef = 0.6;
		class AnimationSources: AnimationSources
		{
			class  hide_backTop: light_bo
			{
				initPhase=0;
			};
		};
		class Sounds: Sounds
		{
		    class RainIn
		    {
		      	sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", db+3,1 };
		  	frequency	=	1;
		  	volume = rain*(1-camPos);
		    };
		    class RainExt
		    {
		      	sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", db+3,1 };
		  	frequency	=	1;
		  	volume = rain*camPos;
		    };
		};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
				maxElev = 15;
			};
			class CargoTurret_02: CargoTurret_02
			{
				maxElev = 15;
			};
		};
	};
	class rhsusf_m998_d_2dr_fulltop: rhsusf_m998_w_2dr_fulltop
	{
		EdPrev(rhsusf_m998_d_2dr_fulltop)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};
	};
	class rhsusf_m998_w_s_2dr_fulltop: rhsusf_m998_w_2dr_fulltop
	{
		EdPrev(rhsusf_m998_w_s_2dr_fulltop)
		Macro_Mar

		Mac_car_USMC_WD

		displayname = "M1123 (2D/Snorkel)";
		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m998_d_s_2dr_fulltop: rhsusf_m998_w_s_2dr_fulltop
	{
		EdPrev(rhsusf_m998_d_s_2dr_fulltop)
		Macro_Mar

		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};


	//4 D R  C A R G O
	//4 D R  C A R G O / T R O O P  C A R R I E R
	//WOODLAND
	//OPEN
	class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr
	{
		EdPrev(rhsusf_m998_w_4dr)
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_4dr";
		displayname = "M1097A2 (4D/Open)";

		Mac_car_Army_WD

		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_4dr_open.paa";
		Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m998_4dr_ca.paa";

		hiddenSelections[] =
		{
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"interior_wood",
			"4drcargocomplete",
			"camo1",
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
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
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
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[]=
				{
					rhs_faction_usarmy_wd
				};
			};
		};
		textureList[]= {};

		transportSoldier = 0;
		cargoAction[] = {"RHS_HMMWV_Cargo","RHS_HMMWV_Cargo","RHS_HMMWV_Cargo"};

		memoryPointsGetInCargo[] = {"pos_cargo_RF","pos_cargo_RB","pos_cargo_LB"};
		memoryPointsGetInCargoDir[] = {"pos_cargo_RF_dir","pos_cargo_RB_dir","pos_cargo_LB_dir"};
		cargoProxyIndexes[] = {};
		getInProxyOrder[] = {1,2,3,4,5};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerGetInAction="GetInOffroadBack";
				gunnerGetOutAction="GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = "Passenger (Left Back Seat)";
				gunnerCompartments = "Compartment2";
				proxyIndex = 5;
				maxElev = 55;
				minElev = -45;
				maxTurn = 80;
				minTurn = -105;
				isPersonTurret = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {-105,-20};
				};
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Right Back Seat)";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				proxyIndex = 4;
				maxTurn = 105;
				minTurn = -80;
				minElev = -45;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {20,105};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_inside_2";
				gunnerName = "Passenger (Right Front)";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				memoryPointsGetInGunner = "pos_cargo_RF";
				memoryPointsGetInGunnerDir = "pos_cargo_RF_dir";
				proxyIndex = 1;
				maxTurn = -34;
				minTurn = -95;
				class dynamicViewLimits {};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerName = "Passenger (Right Middle)";
				memoryPointsGetInGunner = "pos_cargo_RB";
				memoryPointsGetInGunnerDir = "pos_cargo_RB_dir";
				proxyIndex = 2;
				maxTurn = -20;
				minTurn = -95;
			};
			class CargoTurret_05: CargoTurret_03
			{
				gunnerName = "Passenger (Left Middle)";
				memoryPointsGetInGunner = "pos_cargo_LB";
				memoryPointsGetInGunnerDir = "pos_cargo_LB_dir";
				proxyIndex = 3;
				maxTurn = 95;
				minTurn = 38;
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
			class Door_RF: Door_RF {};
			class Door_LB: Door_LB {};
			class Door_RB: Door_RB {};
		};

	};
	class rhsusf_m998_d_4dr: rhsusf_m998_w_4dr
	{
		EdPrev(rhsusf_m998_d_4dr)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};

	};
	class rhsusf_m998_w_s_4dr: rhsusf_m998_w_4dr
	{
		EdPrev(rhsusf_m998_w_s_4dr)
		Macro_Mar

		Mac_car_USMC_WD

		displayname = "M1123 (4D/Open/Snorkel)";
		hiddenSelections[] =
		{
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"interior_wood",
			"4drcargocomplete",
			"camo1",
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
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m998_d_s_4dr: rhsusf_m998_w_s_4dr
	{
		EdPrev(rhsusf_m998_d_s_4dr)
		Macro_Mar

		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};

	//HALF SOFTTOP
	class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr
	{
		EdPrev(rhsusf_m998_w_4dr_halftop)

		Mac_car_Army_WD

		displayname = "M1097A2 (4D/Half)";

		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_4dr_hopen.paa";
		soundAttenuationCargo[]={1,0};
		class AnimationSources: AnimationSources
		{
			class  hide_frontTop: light_bo
			{
				initPhase=0;
			};
			class  hide_middleTop: light_bo
			{
				initPhase=1;
			};
		};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_RB",
			"Door_LB"
		};
		transportSoldier = 3;
		cargoProxyIndexes[] = {6,7,8};
		getInProxyOrder[] = {6,7,8,4,5};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
		};
	};
	class rhsusf_m998_d_4dr_halftop: rhsusf_m998_w_4dr_halftop
	{
		EdPrev(rhsusf_m998_d_4dr_halftop)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};


	};
	class rhsusf_m998_w_s_4dr_halftop: rhsusf_m998_w_4dr_halftop
	{
		EdPrev(rhsusf_m998_w_s_4dr_halftop)
		Macro_Mar

		Mac_car_USMC_WD

		displayname = "M1123 (4D/Half/Snorkel)";

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m998_d_s_4dr_halftop: rhsusf_m998_w_s_4dr_halftop
	{
		EdPrev(rhsusf_m998_d_s_4dr_halftop)
		Macro_Mar

		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	//FULL SOFTTOP
	class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop
	{
		EdPrev(rhsusf_m998_w_4dr_fulltop)
		Mac_car_Army_WD

		displayname = "M1097A2 (4D)";
		Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_4dr.paa";
		attenuationEffectType = "RHS_CarAttenuation";
		soundAttenuationCargo[]={1};
		class AnimationSources: AnimationSources
		{
			class  hide_backTop: light_bo
			{
				initPhase=0;
			};
			class  hide_middleTop: light_bo
			{
				initPhase=0;
			};
		};
		class Sounds: Sounds
		{
		    class RainIn
		    {
		      	sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", db+3,1 };
		  	frequency	=	1;
		  	volume = rain*(1-camPos);
		    };
		    class RainExt
		    {
		      	sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", db+3,1 };
		  	frequency	=	1;
		  	volume = rain*camPos;
		    };
		};
		cargoProxyIndexes[] = {6,7,8};
		getInProxyOrder[] = {6,7,8};
		class CargoTurret;
		class Turrets: Turrets {};
	};
	class rhsusf_m998_d_4dr_fulltop: rhsusf_m998_w_4dr_fulltop
	{
		EdPrev(rhsusf_m998_d_4dr_fulltop)
		Mac_car_Army_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
		};

	};
	class rhsusf_m998_w_s_4dr_fulltop: rhsusf_m998_d_4dr_fulltop
	{
		EdPrev(rhsusf_m998_w_s_4dr_fulltop)
		Macro_Mar

		Mac_car_USMC_WD

		displayname = "M1123 (4D/Snorkel)";


		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};
	class rhsusf_m998_d_s_4dr_fulltop: rhsusf_m998_w_s_4dr_fulltop
	{
		EdPrev(rhsusf_m998_d_s_4dr_fulltop)
		Macro_Mar

		Mac_car_USMC_D

		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};