
	class rhs_btr60_base : rhs_btr_base
	{
		dlc = "RHS_AFRF";

		category = "Armored";

		insideSoundCoef = 0.8;

		#include "physX_btr60.hpp"
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"cover1",
			"cover2",
			"i1",
			"i2",
			"i3",
			"i4",
			"i5",
			"i6",
			"i7",
			"n1",
			"n2",
			"n3",
			"n4",
			"n5",
			"n6",
			"n7",
			"n8",
			"n9",
			"n10",
			"n11",
			"i8",
			"i9",
			"i10",
		};
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_armor\Data\btr60_body_co.paa",
			"rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa",
			"",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_armor\Data\btr60_body_co.paa",
					"rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
			};
			class 3tone  : standard
			{
				displayName="3-Color Camo";
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_armor_camo\data\btr60_body_3tone_co.paa",
					"rhsafrf\addons\rhs_a2port_armor_camo\data\btr60_details_3tone_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
			};
		};
		textureList[]=
		{
		};
		class Attributes: Attributes {
			class ObjectTexture: ObjectTexture {};
			class rhs_decalNumber_type: rhs_decalNumber_type {};
			class rhs_decalNumber: rhs_decalNumber {};

			class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
			class rhs_decalPlatoon: rhs_decalPlatoon {};
			class rhs_decalArmy_type: rhs_decalArmy_type {};
			class rhs_decalArmy: rhs_decalArmy {};

			class rhs_decalRightTurret_type: rhs_decalRightTurret_type {};
			class rhs_decalRightTurret: rhs_decalRightTurret {};

			class rhs_decalFront_type: rhs_decalFront_type {};
			class rhs_decalFront: rhs_decalFront {};

			class rhs_decalVV_type: rhs_decalVV_type {};
			class rhs_decalVV: rhs_decalVV {};

			class crate_l1_unhide: crate_l1_unhide {};
			class crate_l2_unhide: crate_l2_unhide {};
			class crate_l3_unhide: crate_l3_unhide {};
			class crate_r1_unhide: crate_r1_unhide {};
			class crate_r2_unhide: crate_r2_unhide {};
			class wheel_1_unhide: wheel_1_unhide {};

			class rhs_disableHabar: rhs_disableHabar  {};
			class driverViewHatch: driverViewHatch {};
			class commanderViewHatch: commanderViewHatch {};
			class rhs_externalMount: rhs_externalMount {};
		};
		rhs_randomizedHabar[] = {"crate_l1_unhide","crate_l2_unhide","crate_l3_unhide","crate_r1_unhide","crate_r2_unhide","wheel_1_unhide"};

		class RenderTargets {};
		displayName = $STR_RHS_btr60_Name;

		model = "\rhsafrf\addons\rhs_a2port_armor\rhs_btr60.p3d";
		icon = "\rhsafrf\addons\rhs_a2port_armor\Data\icon_btr60_ca.paa";
		picture = "\rhsafrf\addons\rhs_a2port_armor\pictures\rhs_btr60_pic_ca.paa";
		class Library
		{
			libTextDesc = "";
		};


		driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";

		driverForceOptics = 0;
		castdrivershadow = 1;

		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="gear";
		cargoaction[] = {"RHS_BTR60_Cargo01", "RHS_BTR60_Cargo01", "RHS_BTR60_Cargo02", "RHS_BTR60_Cargo03", "RHS_BTR60_Cargo04", "RHS_BTR60_Cargo02", "RHS_BTR60_Cargo03", "RHS_BTR60_Cargo04"};


		memoryPointsGetInCargo[] = {"pos gunner","pos gunner","pos cargo","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos gunner dir","pos gunner dir","pos cargo dir","pos cargo dir"};
		cargoDoors[]=
		{
			"hatchG",
			"hatchG",
			"hatchCL",
			"hatchCL"
		};

		driverAction = "rhs_btr60_driver";
		driverInAction = "rhs_btr60_driver";
		//animationSourceHatch = "hatchDriver";
		animationSourceHatch = "";
		driverDoor="hatchD";

		class ViewPilot: ViewPilot
		{
			initAngleX = -10;
			minAngleX = -85;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 0.7;
			minFov = 0.3;
			maxFov = 1.0;
		};

		hideProxyInCombat = 0;
		viewCargoInExternal = 1;

		class AnimationSources : AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "rhs_weap_kpvt";
			};
			class muzzle_hide_hmg: recoil_source {};
			class muzzle_rot_hmg: recoil_source
			{
				source="ammorandom";
			};
			class muzzle_rot_mg: muzzle_rot_hmg
			{
				weapon = "rhs_weap_pkt_btr";
			};

			class driverViewHatch
			{
				source = "door";
				animPeriod = 2;
				initPhase = 0;
			};

			class commanderViewHatch : driverViewHatch {};
			class HatchC
			{
				source="door";
				animPeriod=0.8;
			};
			class HatchG: HatchC {};
			class HatchD: HatchC {};
			class HatchCL: HatchC {};
			class HatchCommander: HatchC {};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitPeriscope1
			{
				source = "Hit";
				hitpoint = "HitPeriscope1";
			};
			#define HitPeriscopeAnim(num) \
			class HitPeriscope##num##: HitPeriscope1 \
			{\
				hitpoint = HitPeriscope##num##;\
			};
			HitPeriscopeAnim(2)
			HitPeriscopeAnim(3)
			HitPeriscopeAnim(4)
			HitPeriscopeAnim(5)
			HitPeriscopeAnim(6)
			HitPeriscopeAnim(7)
			HitPeriscopeAnim(8)
			HitPeriscopeAnim(9)
			HitPeriscopeAnim(10)
			HitPeriscopeAnim(11)
		};
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor = 2.5;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
				radius = 0.18;
			};
			class HitGlass2: HitGlass1
			{
				name = "glass2";
				visual = "glass2";
			};
			#define PeriscopeMacro(num)			\
			class HitPeriscope##num##: HitGlass1\
			{\
				armor = 0.80;\
				name = periscope##num##;\
				visual = periscope##num##;\
				explosionShielding = 0.5;\
				radius = 0.05; \
			};

			PeriscopeMacro(1)
			PeriscopeMacro(2)
			PeriscopeMacro(3)
			PeriscopeMacro(4)
			PeriscopeMacro(5)
			PeriscopeMacro(6)
			PeriscopeMacro(7)
			PeriscopeMacro(8)
			PeriscopeMacro(9)
			PeriscopeMacro(10)
			PeriscopeMacro(11)
		};

		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffect";
			};
			class Exhaust2: Exhaust1
			{
				position = "vyfuk2 start";
				direction = "vyfuk2 konec";
				effect = "ExhaustsEffect";
			};
		};
		class UserActions
		{
			class openDriverViewHatch
			{
				displayName = $STR_RHS_BTR70_OpenShield;
				position = "driverAction";
				radius = 2.5;
				showWindow = 0;
				condition = "((call rhs_fnc_findPlayer) == driver this) and (this doorPhase 'driverViewHatch' < 0.5)";
				statement = "this animatedoor ['driverViewHatch',1];";
				onlyForPlayer = 1;
			};
			class closeDriverViewHatch:openDriverViewHatch
			{
				displayName = $STR_RHS_BTR70_CloseShield;
				condition = "((call rhs_fnc_findPlayer)  == driver this) and (this doorPhase 'driverViewHatch' > 0.5)";
				statement = "this animatedoor ['driverViewHatch',0];";
			};
			class openCommanderViewHatch: openDriverViewHatch
			{
				position = "comAction";
				condition = "((this turretUnit [1]) == (call rhs_fnc_findPlayer) ) && (this doorPhase 'commanderViewHatch' < 0.5)"; //
				statement = "this animatedoor ['commanderViewHatch',1];";
			};
			class closeCommanderViewHatch: openCommanderViewHatch
			{
				displayName = $STR_RHS_BTR70_CloseShield;
				condition = "((this turretUnit [1]) == (call rhs_fnc_findPlayer) ) && (this doorPhase 'commanderViewHatch' > 0.5)"; //
				statement = "this animatedoor ['commanderViewHatch',0];";
			};
			class hatch_commander: openDriverViewHatch
			{
				displayname = "Turn Out";
				shortcut = "turnOut";
				condition = "(this turretUnit [1] isEqualTo (call rhs_fnc_findPlayer)) AND (this turretUnit [9] isEqualTo objNull)";
				statement = "[this,'HatchC',[[1],[10]],0] spawn rhs_fnc_btr_turnOut";
			};
			class hatch_commander_in: openDriverViewHatch
			{
				displayname = "Turn In";
				shortcut = "turnIn";
				condition = "(this turretUnit [10] isEqualTo (call rhs_fnc_findPlayer))";
				statement = "[this,'HatchC',[[1],[10]],1] spawn rhs_fnc_btr_turnOut";
			};
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cabinlights_hide',[1]] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
		};
		class CargoTurret;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerLeftHandAnimName="handleElev";
				gunnerRightHandAnimName="handleHoriz";
				gunnerGetIn="GetInAMV_cargo";
				gunnerDoor="hatchG";
				ejectDeadGunner = 0;
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=2;
				gunnerHasFlares = 0;
				radarType = 0;
				weapons[] = {"rhs_weap_kpvt","rhs_weap_pkt_btr"};
				magazines[] = {"rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250"};
				//soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate2", db-40, 1.0, 10};
				viewGunnerInExternal = 1;
				minElev = -5;
				maxElev = 30;
				minTurn = -360;
				maxTurn = 360;
				gunnerAction = "rhs_btr60_gunner";
				gunnerInAction = "rhs_btr60_gunner";
				forceHideGunner = 0;
				LodOpticsIn		= 0;
				LodOpticsOut	= 0;
				//LODTurnedIn = 1;
				//LODTurnedOut = 1;
				gunnerOutOpticsModel = "";
				memoryPointGun = "machinegun";
				selectionFireAnim = "zasleh1";
				gunBeg = "usti hlavne";	// endpoint of the gun
				gunEnd = "konec hlavne";	// chamber of the gun
				body = "mainTurret";
				gun = "mainGun";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
				gunnerOpticsEffect[] = {"TankGunnerOptics1", "WeaponsOptics", "OpticsCHAbera3"};
				gunnerOpticsColor[]  = {1, 1, 1, 1};
				animationSourceBody = "mainTurret"; // turret
				animationSourceGun = "mainGun"; // gun
				gunnerForceOptics = 0;
				outGunnerMayFire = 1;
				startEngine = 0;
				primaryGunner = 1;
				primaryObserver = 0;
				stabilizedInAxes = StabilizedInAxesNone;
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
						minimalHit = 0.44;
						radius= 0.2;
					};
					class HitGun
					{
						armor = 0.4;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0.1;
						minimalHit = 0.44;
						radius= 0.2;
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.2;
					maxFov = 0.2;
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};

				class OpticsIn
				{
					class Wide: ViewOptics
					{
						minFov					= __EVAL(0.7/2.6);
						maxFov					= __EVAL(0.7/2.6);
						initFov					= __EVAL(0.7/2.6);
						gunnerOpticsModel		= "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
						gunnerOutOpticsModel	= "\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[]	= {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera3"};
						visionMode[]			= {"Normal"};
					};
					class Night: Wide
					{
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am_night";
					};

				};
				class Turrets{};
			};

			class CommanderOptics: CommanderOptics
			{
				dontCreateAI=1;
				animationSourceHatch = "";
				//animationSourceHatch = "hatchCommander";
				gunnerDoor="hatchC";
				gunnerName = $STR_POSITION_COMMANDER;
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				LodOpticsIn		= 0;
				LodOpticsOut	= 0;
				//LODTurnedIn = 1100;
				//LODTurnedOut = 1100;
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";

				soundServo[] = {"",0.00316228,1.0};

				startEngine = 0;
				minElev = -5;
				maxElev = 10;
				initElev = 0;
				minTurn = -36;
				maxTurn = 36;
				initTurn = 0;

				commanding = 2;
				viewGunnerInExternal = 1;
				outGunnerMayFire = 1;
				radarType = 0;

				gunnerOutOpticsModel = "";
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerOutOpticsColor[] = {1,1,1,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOutOptics = "commander_weapon_view";
				memoryPointGunnerOptics = "commanderview";

				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerPrecise = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				//gunnerUsesPilotView = 1;

				hasGunner = 1;
				//gunnerAction = "rhs_btr60_commanderOut";
				gunnerAction = "rhs_btr60_commander";
				gunnerInAction = "rhs_btr60_commander";
				weapons[] = {};
				magazines[] = {};

				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;

				};

				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera3"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					opticsZoomMin = 0.140000;
					opticsZoomMax = 0.140000;
					initFov = 0.140000;
					minFov = 0.140000;
					maxFov = 0.140000;
					visionMode[] = {"Normal","NVG"};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov					= __EVAL(0.7/5);
						minFov					= __EVAL(0.7/5);
						maxFov					= __EVAL(0.7/5);
						gunnerOpticsModel		= "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpku2b.p3d";
						gunnerOutOpticsModel	= "\A3\weapons_f\reticle\optics_empty";
						visionMode[]			= {"Normal"};
					};
					class Periscope: ViewOptics
					{
						initFov					= __EVAL(0.7/1);
						minFov					= __EVAL(0.7/1);
						maxFov					= __EVAL(0.7/1);
						visionMode[]			= {"Normal"};
						gunnerOpticsModel		= "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
					};
					class NVG: Wide
					{
						initFov			= __EVAL(0.7/4);
						minFov			= __EVAL(0.7/4);
						maxFov			= __EVAL(0.7/4);
						visionMode[]	= {"NVG"};
					};

				};
			};

			class CargoTurret_01: CargoTurret
			{
				//gunnerAction = "passenger_inside_1";
				gunnerAction = "passenger_boat_3";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				commanding = -2;
				weapons[] = {rhs_weap_DummyLauncher}; // fix for get in order

				memoryPointsGetInGunner = "cargo9";
				memoryPointsGetInGunnerDir = "cargo9 dir";
				gunnerName = "Passenger (Top Middle)";
				gunnerCompartments = "Compartment2";
				memoryPointGunnerOptics = "";
				LODTurnedIn		= 0;
				LODTurnedOut	= 0;
				LodOpticsIn		= 0;
				LodOpticsOut	= 0;
				proxyIndex = 9;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				class Hitpoints {};
			};

			class CargoTurret_02: CargoTurret_01
			{
				//gunnerAction = "passenger_inside_2";
				gunnerAction = "rhs_cargosys_btr60_03";
				gunnerName = "Passenger (Top Front Left)";
				memoryPointsGetInGunner = "cargo10";
				memoryPointsGetInGunnerDir = "cargo10 dir";
				proxyIndex =10;
				maxElev = 0;
				minElev = 0;
				maxTurn = 0.1;
				minTurn = -0.1;
				ejectDeadGunner = 1;
				enabledByAnimationSource="cargoHandler1";
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_3";
				gunnerName = "Passenger (Top Rear Left)";
				memoryPointsGetInGunner = "cargo11";
				memoryPointsGetInGunnerDir = "cargo11 dir";
				proxyIndex = 11;
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_4";
				//gunnerAction = "passenger_inside_3";
				memoryPointsGetInGunner = "cargo12";
				memoryPointsGetInGunnerDir = "cargo12 dir";
				gunnerName = "Passenger (Top Left)";
				proxyIndex = 12;
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerAction = "passenger_inside_3";
				gunnerName = "Passenger (Top Rear Right)";
				memoryPointsGetInGunner = "cargo13";
				memoryPointsGetInGunnerDir = "cargo13 dir";
				proxyIndex = 13;
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_4";
				//gunnerAction = "passenger_flatground_3";
				gunnerName = "Passenger (Top Rear)";
				memoryPointsGetInGunner = "cargo14";
				memoryPointsGetInGunnerDir = "cargo14 dir";
				proxyIndex = 14;
				maxTurn = 71;
				minTurn = -75;
			};
			class CargoTurret_07: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_4";
				gunnerName = "Passenger (Top Right Middle)";
				memoryPointsGetInGunner = "cargo15";
				memoryPointsGetInGunnerDir = "cargo15 dir";
				proxyIndex = 15;
			};

			class CargoTurret_08: CargoTurret_01
			{
				//gunnerAction = "passenger_inside_3";
				gunnerAction = "rhs_cargosys_btr60_06";
				gunnerName = "Passenger (Top Front)";
				memoryPointsGetInGunner = "cargo16";
				memoryPointsGetInGunnerDir = "cargo16 dir";
				proxyIndex = 16;
				maxElev = 0;
				minElev = 0;
				maxTurn = 0.1;
				minTurn = 0;
				ejectDeadGunner = 1;
				enabledByAnimationSource="cargoHandler1";
			};
			class Commander_Out: CargoTurret
			{
				gunnerCompartments	="Compartment3";
				gunnerName			= "Commander Out";
				proxyType			= "CPCommander";
				LODTurnedIn			= 0;
				LODTurnedOut		= 0;
				proxyIndex			= 2;
				gunnerAction		= "RHS_VehicleTurnout_1";
				gunnerInAction		= "RHS_VehicleTurnout_1";
				personTurretAction	= "RHS_VehicleTurnout_1";
				weapons[]			= {rhs_weap_DummyLauncher}; // fix for get in order
				class Hitpoints {};
			};
		};

		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		rhs_topPositions[] = {9,10,11,12,13,14,15,16};


		class Damage
		{
			tex[] = {};
			mat[] = {
				"rhsafrf\addons\rhs_a2port_armor\data\btr60_body.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\btr60_body_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\btr60_body_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_armor\data\btr60_details.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\btr60_details_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\btr60_details_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_armor\data\btr60_glass.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_in.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_in_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_in_damage.rvmat",

				"rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",
				"rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
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
		aggregateReflectors[] = {{"Left"},{"Right"}};

		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_btr_init; (_this select 0) addeventhandler ['HandleDamage',{[_this,0.5,0.002,0.9,0.2] spawn rhs_fnc_activeTirePressure; _this select 2;} ];";
				postInit = "_this call rhs_fnc_reapplyTextures";
				engine = "_this call rhs_fnc_btr_handleHatch;_this call rhs_fnc_engineCheckDamage;";
				//hitpart = "_this call rhs_fnc_hitPart";
			};
			class RHS_BTR_Init
			{
				init = "(_this select 0) lockTurret [[10],true];";
				getOut = "(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
				getIn = "(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
			};
		};
	};

	class rhs_btr60_vmf : rhs_btr60_base
	{
		EdPrev(rhs_btr60_vmf)
		scope = 2;
		Faction_VMF
		AUTHOR_MACRO_BIS_PORT
	};

	class rhs_btr60_vdv : rhs_btr60_vmf
	{
		EdPrev(rhs_btr60_vdv)
		AUTHOR_MACRO_BIS_PORT
		Faction_VDV
	};

	class rhs_btr60_vv : rhs_btr60_vmf
	{
		EdPrev(rhs_btr60_vv)
		AUTHOR_MACRO_BIS_PORT
		Faction_VV
	};

	class rhs_btr60_msv : rhs_btr60_vmf
	{
		EdPrev(rhs_btr60_msv)
		AUTHOR_MACRO_BIS_PORT
		Faction_MSV
	};