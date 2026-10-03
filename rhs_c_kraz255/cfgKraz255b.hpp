
	class Truck_02_base_F: Truck_F
	{

		class HitPoints: HitPoints {
			class HitFuel;
			class HitEngine;
		};
		class AnimationSources: AnimationSources {};
	};

	class O_Truck_02_covered_F: Truck_02_base_F
	{

		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret {};
			class CargoTurret_02: CargoTurret_01 {};
		};
		class EventHandlers;
	};

	class rhs_kraz255_base: O_Truck_02_covered_F
	{
		dlc = "RHS_AFRF";
		scope=1;
		displayName = "KrAZ-255B1";
		model = "rhsafrf\addons\rhs_kraz255\rhs_kraz255b1";
		//picture="";
		#include "PhysX_kraz255b1.hpp"

		rhs_decalParameters[]={
			"['Number', [5,6,7,8], 'Default']"
		};

		category = "Car";
		vehicleClass = rhs_vehclass_truck;
		editorSubcategory = "rhs_EdSubcat_truck";

		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
			"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
			"rhsafrf\addons\rhs_kraz255\data\kuzov_255_co.paa"
		};
		class textureSources
		{
			class Standard
			{
				AUTHOR_MACRO
				displayName = "Standard";
				textures[]=
				{
					"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
					"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
					"rhsafrf\addons\rhs_kraz255\data\kuzov_255_co.paa"
				};
				factions[]= {};
			};
		};

		hideProxyInCombat = 1;
		canHideDriver = 0;
		viewDriverInExternal = 1;
		driverAction = "RHS_kraz255_driver";
		driverInAction = "RHS_kraz255_driver";
		driverLeftLegAnimName = "pedalL";
		driverRightLegAnimName = "pedalR";
		driverRightHandAnimName = "shift";
		tf_hasLRradio_api = 0;


		class Damage
		{
			tex[]={};
			mat[]=
			{
				#define BASIC_KRAZ_DAM\
				"rhsafrf\addons\rhs_kraz255\data\kraz255b1.rvmat",\
				"rhsafrf\addons\rhs_kraz255\data\kraz255b1_dam.rvmat",\
				"rhsafrf\addons\rhs_kraz255\data\kraz255_destr.rvmat",\
				\
				"rhsafrf\addons\rhs_kraz255\data\kol255.rvmat",\
				"rhsafrf\addons\rhs_kraz255\data\kol255_dam.rvmat",\
				"rhsafrf\addons\rhs_kraz255\data\kraz255_destr.rvmat",\
				\
				"rhsafrf\addons\rhs_kraz255\data\kuzov_255.rvmat",\
				"rhsafrf\addons\rhs_kraz255\data\kuzov_255_dam.rvmat",\
				"rhsafrf\addons\rhs_kraz255\data\kraz255_destr.rvmat",\
				\
				"rhsafrf\addons\rhs_kraz255\data\win_int.rvmat",\
				"a3\data_f\glass_veh_armored_damage.rvmat",\
				"a3\data_f\glass_veh_armored_damage.rvmat",\
				\
				"rhsafrf\addons\rhs_kraz255\data\win.rvmat",\
				"a3\data_f\glass_veh_armored_damage.rvmat",\
				"a3\data_f\glass_veh_armored_damage.rvmat"

				BASIC_KRAZ_DAM
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=0.8;
				useFlare=0;
				dayLight=0;
				flareSize=1;
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
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				useFlare=1;
				position="light_R_flare";
				drawLight = false;
			};
			class Left2: Left
			{
				useFlare=1;
				position="light_L_flare";
				drawLight = false;
			};
			class Long_Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_L_Long";
				direction="Light_L_Long_end";
				hitpoint="Light_L";
				selection="Light_L";
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
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Long_Right2: Long_Right
			{
				useFlare=1;
				position="light_R_Long_flare";
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef = 51;
				intensity = 5.0;
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
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef = 11;
				intensity = 5.0;
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
			class cabin
			{
				color[]={800,900,650};
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
				dayLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 1.5;
					hardLimitEnd = 2;
				};
			};
		};
		aggregateReflectors[]=
		{
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			}
		};
		armorLights=0.01;

		class AnimationSources: AnimationSources
		{
			class Door_LF
			{
				source="door";
				animPeriod=0.8;
				sound = "RHS_Ural_Door";
				soundPosition = "DoorL_axis";

				mass=1;
				displayName="open left door";
			};
			class Door_RF: Door_LF
			{
				displayName="open right door";
				soundPosition = "DoorR_axis";
			};
			class HitSpare
			{
				source = "Hit";
				hitpoint = "HitSpare";
				raw = 1;
			};
			class UseSpare : HitSpare {
				hitpoint = "UseSpare";
			};
			class longlights_hide
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide {initPhase = 0;};
			class lights_hide: longlights_hide {initPhase = 0;};
			class cabinlights_hide: longlights_hide {};
			class spare_hide
			{
				mass=1;
				source = "user";
				displayName="hide spare wheel";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class bench_fold
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
			class kraz_fuel 	{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_pmp 		{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_bmkt 	{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_tools 	{source = user;initPhase = 0;animPeriod = 0;};
			class kraz_cargo 	{source = user;initPhase = 0;animPeriod = 0;};
			class turnout1 	{source = user;initPhase = 0;animPeriod = 0;};
			class turnout2 	{source = user;initPhase = 0;animPeriod = 0;};
		};
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				name				= "Hit_Fuel";
				armorComponent		= "Hit_Fuel";
				armor				= -100;
				passThrough			= 1;
				minimalHit			= -0.1;
				explosionShielding	= 1.5;
				radius				= 0.15;
			};
			class HitEngine: HitEngine{
				name				= "Hit_Engine";
				armorComponent		= "Hit_Engine";
				armor				= 0.5;
				passThrough			= 1;
				minimalHit			= 0.01;
				explosionShielding	= 0.5;
				radius				= 0.12;
				visual				= "zbytek";
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
				};
			};
			class HitLFWheel: HitLFWheel	{radius = 0.25; visual = "wheel_1_1_damage"; armorComponent = "wheel_1_1_hide"; HP_WHEEL_TRUCK;};
			class HitLF2Wheel: HitLF2Wheel	{radius = 0.25; visual = "wheel_1_2_damage"; armorComponent = "wheel_1_2_hide"; HP_WHEEL_TRUCK;};
			class HitLMWheel: HitLMWheel	{radius = 0.25; visual = "wheel_1_3_damage"; armorComponent = "wheel_1_3_hide"; HP_WHEEL_TRUCK;};
			class HitLBWheel: HitLBWheel	{radius = 0.25; visual = "wheel_1_4_damage"; armorComponent = "wheel_1_4_hide"; HP_WHEEL_TRUCK;};

			class HitRFWheel: HitRFWheel	{radius = 0.25; visual = "wheel_2_1_damage"; armorComponent = "wheel_2_1_hide"; HP_WHEEL_TRUCK;};
			class HitRF2Wheel: HitRF2Wheel	{radius = 0.25; visual = "wheel_2_2_damage"; armorComponent = "wheel_2_2_hide"; HP_WHEEL_TRUCK;};
			class HitRMWheel: HitRMWheel	{radius = 0.25; visual = "wheel_2_3_damage"; armorComponent = "wheel_2_3_hide"; HP_WHEEL_TRUCK;};
			class HitRBWheel: HitRBWheel	{radius = 0.25; visual = "wheel_2_4_damage"; armorComponent = "wheel_2_4_hide"; HP_WHEEL_TRUCK;};
			#define GLASS_ARMOR(NUMB) \
			class HitGlass##NUMB\
			{\
				name				= glass##NUMB;\
				visual				= glass##NUMB;\
				armorComponent		= glass##NUMB;\
				armor				= -5;\
				passThrough			= 0;\
				explosionShielding	= 3;\
				radius				= 0.33;\
			};
			GLASS_ARMOR(1)
			GLASS_ARMOR(2)
			GLASS_ARMOR(3)
			GLASS_ARMOR(4)
			GLASS_ARMOR(5)
			class HitSpare : HitRF2Wheel
			{
				name = "spare1";
			};
			class UseSpare : HitSpare
			{
				name = "";
				visual = "-";
				armor = 1;
			};
		};
		textureList[]={};
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
				expression = "_this setVariable ['%s', _value];[_this,[['Number', [5,6,7,8], _value]]] call rhs_fnc_decalsInit";
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
				displayName = "Set plate number";
				tooltip = "Set plate number. 4 numbers are required. If 0, random number will be generated";
				property = "rhs_decalNumber";
				control = "Edit";
				validate = "Number";
				typeName = "Number";
				defaultValue = "-1";
				expression = "if(_value >= 0)then{[_this,[['Number', [5,6,7,8], _this getVariable ['rhs_decalNumber_type','Default'], _value]]] call rhs_fnc_decalsInit};";
			};

			class rhs_decalArmy_type {
				displayName = "Define large door roundel type";
				tooltip = "Decal type";
				property = "rhs_decalArmy_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];";
				defaultValue = "0";
				typeName = "STRING";
				class values {
					class Army {
						name = "Army";
						value = "Army";
						defaultValue = "Army";
					};
					class Honor {
						name = "Honor";
						value = "Honor";
					};
					class HonorGDR {
						name = "Honor GDR";
						value = "HonorGDR";
					};
					class Platoon {
						name = "Platoon";
						value = "Platoon";
					};
					class PlatoonGDR {
						name = "Platoon GDR";
						value = "PlatoonGDR";
					};
					class PlatoonVDV {
						name = "Platoon VDV";
						value = "PlatoonVDV";
					};
				};
			};
			class rhs_decalArmy {
				displayName = "Set large door roundel symbol";
				tooltip = "Set large door roundel located on both sides. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property = "rhs_decalArmy";
				control = "Edit";
				validate = "none";
				defaultValue = "-1";
				expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [9],  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoon_type: rhs_decalArmy_type {
				displayName = "Define small door roundel type";
				property = "rhs_decalPlatoon_type";
				expression = "_this setVariable ['%s', _value];";
				defaultValue = "0";
			};
			class rhs_decalPlatoon: rhs_decalArmy {
				displayName = "Set small door roundel symbol";
				tooltip = "Define small door roundel located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property = "rhs_decalPlatoon";
				expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [10],  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
		};

		class UserActions
		{
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
				statement = "[this,0] call rhs_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut = "lockTarget";
				displayName="Toggle cabin lights";
				statement = "[this,1] call rhs_fnc_carLightToggle";
			};
		};

		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_decalsReadParams;";
				postInit = "_this call rhs_fnc_reapplyTextures";
				dammaged = "_this call rhs_fnc_wheelDamaged";
				engine = "_this call rhs_fnc_engineCheckDamage;";
			};
		};

		driverDoor = "Door_LF";
		cargoDoors[] ={"Door_RF",""};
		transportSoldier = 1;
		cargoProxyIndexes[] = {1};
		getInProxyOrder[] = {1};
		cargoAction[]=
		{
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic03still",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"rhs_passenger_apc_narrow_generic03still",
			"rhs_passenger_apc_generic01",
			"rhs_passenger_apc_generic03",
			"rhs_passenger_apc_narrow_generic01",
			"passenger_generic01_leanleft",
			"rhs_passenger_apc_generic03",
			"rhs_passenger_apc_narrow_generic02",
			"rhs_passenger_apc_generic02",
			"rhs_passenger_apc_generic01",
			"passenger_generic01_foldhands",
			"rhs_passenger_apc_generic04",
			"rhs_passenger_apc_generic02",
			"rhs_passenger_apc_generic01",
			"passenger_generic01_leanleft"
		};
		getInAction = "GetInMRAP_01";
		getOutAction = "GetOutLow";
		cargoIsCoDriver[] = {1,0};
		cargoGetInAction[]=
		{
			"GetInMRAP_01",
			"GetInHemttBack"
		};
		cargoGetOutAction[]=
		{
			"GetOutMedium",
			"GetOutHighZamak"
		};
		cargoCompartments[] = {"Compartment1","Compartment2"};
		memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};

		class Turrets {};
		class RenderTargets
		{
			class mirrorL
			{
				renderTarget = "rendertarget0";
				class mirror
				{
					pointPosition = "m1p";
					pointDirection = "m1d";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				PIP_BB(1)
			};
			class mirrorR
			{
				renderTarget = "rendertarget1";
				class mirror
				{
					pointPosition = "m2p";
					pointDirection = "m2d";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				PIP_BB(2)
			};
		};
		class RHS_TowingSystem
		{
			class Carrier
			{
				rhs_maxCargoMass		= 2500;
				rhs_attachPoint			= "";
				rhs_attachPointPos[]	= {0,-3.5,-1.1};
			};
		};
	};
	class rhs_kraz255b1_base: rhs_kraz255_base {};

	///////////
	// Cargo //
	///////////
	class rhs_kraz255b1_cargo_base: rhs_kraz255b1_base
	{
		transportSoldier	= 13;
		cargoProxyIndexes[]	= {1,3,4,5,6,7,8,9,10,13,14,15,16};
		getInProxyOrder[]	= {1,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		class AnimationSources: AnimationSources
		{
			class bench_fold
			{
				source = "user";
				animPeriod = 0.6;
				initPhase = 0;
				useSource = 1;
				displayName = "fold benches";
				lockCargoAnimationPhase = 1;
				lockCargo[]		= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,23,24};
				onPhaseChanged	= "(_this select 0) enableVehicleCargo ((_this select 1) isEqualTo 1);";
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "O_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
			class Carrier
			{
				cargoBayDimensions[] = {"VVT_cargo_1","VVT_cargo_2"};
				disableHeightLimit = 1;
				maxLoadMass = 25000;
				cargoAlignment[] = {"center","front"};
				cargoSpacing[] = {0,0,0};
				exits[] = {"VVT_exit","VVT_exit2"};
				unloadingInterval = 2;
				loadingDistance = 5;
				loadingAngle = 60;
				parachuteClassDefault = "O_Parachute_02_F";
				parachuteHeightLimitDefault = 5;
			};
		};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerInAction = "passenger_inside_2";
				gunnerGetInAction="GetInHemttBack";
				gunnerGetOutAction="GetOutHighZamak";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = "Passenger (Left Seat)";
				gunnerCompartments = "Compartment2";
				proxyIndex = 12;
				maxElev = 15;
				minElev = -15;
				maxTurn = -40;
				minTurn = -115;
				isPersonTurret = 1;
				commanding = -2;
				forceHideGunner=1;
				ViewGunnerInExternal = 1;
				lodTurnedIn		= 0;
				lodTurnedOut	= 0;
				lodOpticsIn		= 0;
				lodOpticsOut	= 0;
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Right Seat)";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				proxyIndex = 11;
				maxTurn = 95;
				minTurn = 20;
				minElev = -45;
			};
		};
		class UserActions: UserActions
		{
			class fold_benches
			{
				displayName		= "Fold benches";
				position		= "fold_bench_action";
				actionNamedSel	= "fold_bench_action";
				radius			= 3;
				priority		= 1.5;
				showWindow		= 1;
				onlyForplayer	= 1;
				condition		= "((this animationSourcePhase 'bench_fold') isEqualTo 0) && {crew this - [driver cursorObject] - [(fullCrew [this,'cargo',true]) # 0 # 0] isEqualTo []}";
				statement		= "this animateSource ['bench_fold',1];this enableVehicleCargo true;for '_i' from 1 to 24 do {this lockCargo [_i,true]};";
			};
			class unfold_benches: fold_benches
			{
				displayName		= "Unfold benches";
				condition		= "((this animationSourcePhase 'bench_fold') isEqualTo 1) && {crew this - [driver cursorObject] - [(fullCrew [this,'cargo',true]) # 0 # 0] isEqualTo []}";
				statement		= "this animateSource ['bench_fold',0];this enableVehicleCargo false;for '_i' from 1 to 24 do {this lockCargo [_i,false]};";
			};
		};
	};

	class rhs_kraz255b1_cargo_open_base: rhs_kraz255b1_cargo_base
	{
		picture = "\rhsafrf\addons\rhs_kraz255\pictures\rhs_kraz255b1_flatbed_ca.paa";
		displayName = "KrAZ-255B1 (Open)";
		transportSoldier = 11;
		cargoProxyIndexes[]	= {1,3,4,5,6,7,8,9,10,15,16};
		getInProxyOrder[]	= {1,3,4,5,6,7,8,9,10,13,14,15,16,23,24};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerInAction = "RHS_Ural_Turnout01";
				//gunnerInAction = "passenger_inside_2";
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				//personTurretAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				animationSourceHatch = "turnout1";
				gunnerGetInAction="GetInHemttBack";
				gunnerGetOutAction="GetOutHighZamak";
				gunnerName = "Passenger (Right Front Seat)";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				gunnerCompartments = "Compartment2";
				proxyIndex = 23;
				maxElev = 45;
				minElev = -25;
				maxTurn = 60;
				minTurn = -85;
				isPersonTurret = 2;
				canHideGunner = 1;
				allowLauncherOut=1;
				commanding = -2;
				forceHideGunner=0;

				class TurnIn
				{
					limitsArrayTop[] = {{45, -85}, , {35, -17},{15, -7}};
					limitsArrayBottom[] = {{12, -85},{2, -17},{0.5, -7}};
				};
				class TurnOut
				{
					limitsArrayTop[] = {{35, -85}, {35, 60}};    /// points for the upper curve
					limitsArrayBottom[] = {{-15, -65},{-25, -49},{-45, -36},{-19, -18},{-9, -7},{-9, 32},{-15, 52},{-25, 60},{-15, 76}}; /// points for the lower curve
					turnOffset = -90;
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerName = "Passenger (Left Front Seat)";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				animationSourceHatch = "turnout2";
				proxyIndex = 24;
				maxTurn = 25;
				minTurn = -60;
				class TurnIn
				{
					limitsArrayTop[] = {{25, 15}, {55, 94}};
					limitsArrayBottom[] = {{0, 15},{0, 35},{12, 94}};
				};
				class TurnOut
				{
					limitsArrayTop[] = {{35, -60}, {35, 95}};    /// points for the upper curve
					limitsArrayBottom[] = {{-19, -60},{-22, -57},{-22, -47},{-12, -42},{-9, -28},{-11, 10},{-15, 25},{-45, 55},{-15, 95}}; /// points for the lower curve
					turnOffset = -90;
				};
			};
		};
	};

	class rhs_kraz255b1_cargo_open_msv: rhs_kraz255b1_cargo_open_base
	{
		EdPrev(rhs_kraz255b1_flatbed_msv)
		FACTION_MSV
	};

	class rhs_kraz255b1_cargo_open_vdv: rhs_kraz255b1_cargo_open_base
	{
		EdPrev(rhs_kraz255b1_flatbed_vdv)
		FACTION_VDV
	};

	class rhs_kraz255b1_cargo_open_vmf: rhs_kraz255b1_cargo_open_base
	{
		EdPrev(rhs_kraz255b1_flatbed_vmf)
		FACTION_VMF
	};

	class rhs_kraz255b1_cargo_open_vv: rhs_kraz255b1_cargo_open_base
	{
		EdPrev(rhs_kraz255b1_flatbed_vv)
		FACTION_VV
	};

	/////////////
	// Flatbed //
	/////////////
	class rhs_kraz255b1_flatbed_base: rhs_kraz255b1_base
	{
		picture = "\rhsafrf\addons\rhs_kraz255\pictures\rhs_kraz255b1_flatbed_ca.paa";
		displayName = "KrAZ-255B1 (Flatbed)";
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "O_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
			class Carrier
			{
				cargoBayDimensions[] = {"VVT_cargo_1","VVT_cargo_2"};
				disableHeightLimit = 1;
				maxLoadMass = 25000;
				cargoAlignment[] = {"center","front"};
				cargoSpacing[] = {0,0,0};
				exits[] = {"VVT_exit","VVT_exit2"};
				unloadingInterval = 2;
				loadingDistance = 5;
				loadingAngle = 60;
				parachuteClassDefault = "O_Parachute_02_F";
				parachuteHeightLimitDefault = 5;
			};
		};
	};
	class rhs_kraz255b1_flatbed_msv: rhs_kraz255b1_flatbed_base
	{
		EdPrev(rhs_kraz255b1_flatbed_msv)
		FACTION_MSV
		forceInGarage = 1;
	};

	class rhs_kraz255b1_flatbed_vdv: rhs_kraz255b1_flatbed_base
	{
		EdPrev(rhs_kraz255b1_flatbed_vdv)
		FACTION_VDV
	};

	class rhs_kraz255b1_flatbed_vmf: rhs_kraz255b1_flatbed_base
	{
		EdPrev(rhs_kraz255b1_flatbed_vmf)
		FACTION_VMF
	};

	class rhs_kraz255b1_flatbed_vv: rhs_kraz255b1_flatbed_base
	{
		EdPrev(rhs_kraz255b1_flatbed_vv)
		FACTION_VV
	};

	////////////////////
	// Fuel TZ-8-255B //
	////////////////////
	class rhs_kraz255b1_fuel_base: rhs_kraz255b1_base
	{
		picture = "\rhsafrf\addons\rhs_kraz255\pictures\rhs_kraz255b1_fuel_ca.paa";
		displayName = "TZ-8-255B1";
		transportfuel = 10000;
		supplyRadius = 9.5;
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
			"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
			"rhsafrf\addons\rhs_kraz255\data\tz8_co.paa"
		};
		class textureSources
		{
			class Standard
			{
				AUTHOR_MACRO
				displayName = "Standard";
				textures[]=
				{
					"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
					"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
					"rhsafrf\addons\rhs_kraz255\data\tz8_co.paa"
				};
				factions[]= {};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				BASIC_KRAZ_DAM,

				"rhsafrf\addons\rhs_kraz255\data\tz8.rvmat",
				"rhsafrf\addons\rhs_kraz255\data\tz8_dam.rvmat",
				"rhsafrf\addons\rhs_kraz255\data\kraz255_destr.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class kraz_fuel 	{source = user;initPhase = 0;animPeriod = 0;};
			class kraz_pmp 		{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_bmkt 	{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_tools 	{source = user;initPhase = 0;animPeriod = 0;};
			class kraz_cargo 	{source = user;initPhase = 1;animPeriod = 0;};
		};
	};
	class rhs_kraz255b1_fuel_msv: rhs_kraz255b1_fuel_base
	{
		EdPrev(rhs_kraz255b1_fuel_msv)
		FACTION_MSV
		forceInGarage = 1;
	};
	class rhs_kraz255b1_fuel_vdv: rhs_kraz255b1_fuel_base
	{
		EdPrev(rhs_kraz255b1_fuel_vdv)
		FACTION_VDV
	};
	class rhs_kraz255b1_fuel_vmf: rhs_kraz255b1_fuel_base
	{
		EdPrev(rhs_kraz255b1_fuel_vmf)
		FACTION_VMF
	};
	class rhs_kraz255b1_fuel_vv: rhs_kraz255b1_fuel_base
	{
		EdPrev(rhs_kraz255b1_fuel_vv)
		FACTION_VV
	};


	///////////////////
	// PMP Transport //
	///////////////////
	class rhs_kraz255b1_pmp_base: rhs_kraz255b1_flatbed_base
	{
		picture = "\rhsafrf\addons\rhs_kraz255\pictures\rhs_kraz255b1_pmp_ca.paa";
		displayName = "KrAZ-255B1 (PMP)";
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
			"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
			"rhsafrf\addons\rhs_kraz255\data\pmp_tr_co.paa"
		};
		class textureSources
		{
			class Standard
			{
				AUTHOR_MACRO
				displayName = "Standard";
				textures[]=
				{
					"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
					"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
					"rhsafrf\addons\rhs_kraz255\data\pmp_tr_co.paa"
				};
				factions[]= {};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				BASIC_KRAZ_DAM,

				"rhsafrf\addons\rhs_kraz255\data\pmp_tr.rvmat",
				"rhsafrf\addons\rhs_kraz255\data\pmp_tr_dam.rvmat",
				"rhsafrf\addons\rhs_kraz255\data\kraz255_destr.rvmat"

			};
		};
		class AnimationSources: AnimationSources
		{
			class kraz_fuel 	{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_pmp 		{source = user;initPhase = 0;animPeriod = 0;};
			class kraz_bmkt 	{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_tools 	{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_cargo 	{source = user;initPhase = 1;animPeriod = 0;};
			class spare_hide 	{source = user;initPhase = 1;animPeriod = 0;};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "O_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
			class Carrier
			{
				cargoBayDimensions[] = {"VVT_cargo_1_big","VVT_cargo_2_big"};
				disableHeightLimit = 1;
				maxLoadMass = 25000;
				cargoAlignment[] = {"center","front"};
				cargoSpacing[] = {0,0,0};
				exits[] = {"VVT_exit"};
				unloadingInterval = 2;
				loadingDistance = 5;
				loadingAngle = 60;
				parachuteClassDefault = "O_Parachute_02_F";
				parachuteHeightLimitDefault = 5;
			};
		};
	};
	class rhs_kraz255b1_pmp_msv: rhs_kraz255b1_pmp_base
	{
		EdPrev(rhs_kraz255b1_pmp_msv)
		FACTION_MSV
		forceInGarage = 1;
	};
	class rhs_kraz255b1_pmp_vdv: rhs_kraz255b1_pmp_base
	{
		EdPrev(rhs_kraz255b1_pmp_vdv)
		FACTION_VDV
	};
	class rhs_kraz255b1_pmp_vmf: rhs_kraz255b1_pmp_base
	{
		EdPrev(rhs_kraz255b1_pmp_vmf)
		FACTION_VMF
	};
	class rhs_kraz255b1_pmp_vv: rhs_kraz255b1_pmp_base
	{
		EdPrev(rhs_kraz255b1_pmp_vv)
		FACTION_VV
	};

	/////////////////////
	// BMK-T transport //
	/////////////////////
	class rhs_kraz255b1_bmkt_base: rhs_kraz255b1_flatbed_base
	{
		picture = "\rhsafrf\addons\rhs_kraz255\pictures\rhs_kraz255b1_bmkt_ca.paa";
		displayName = "KrAZ-255B1 (BMK-T)";
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
			"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
			"rhsafrf\addons\rhs_kraz255\data\bkmt_transp_co.paa"
		};
		class textureSources
		{
			class Standard
			{
				AUTHOR_MACRO
				displayName = "Standard";
				textures[]=
				{
					"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
					"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
					"rhsafrf\addons\rhs_kraz255\data\bkmt_transp_co.paa"
				};
				factions[]= {};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				BASIC_KRAZ_DAM,

				"rhsafrf\addons\rhs_kraz255\data\bkmt_transp.rvmat",
				"rhsafrf\addons\rhs_kraz255\data\bkmt_transp_dam.rvmat",
				"rhsafrf\addons\rhs_kraz255\data\kraz255_destr.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class kraz_fuel 	{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_pmp 		{source = user;initPhase = 1;animPeriod = 0;};
			class kraz_bmkt 	{source = user;initPhase = 0;animPeriod = 0;};
			class kraz_tools 	{source = user;initPhase = 0;animPeriod = 0;};
			class kraz_cargo 	{source = user;initPhase = 1;animPeriod = 0;};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "O_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
			class Carrier
			{
				cargoBayDimensions[] = {"VVT_cargo_1_bmk","VVT_cargo_2_bmk"};
				disableHeightLimit = 1;
				maxLoadMass = 25000;
				cargoAlignment[] = {"center","front"};
				cargoSpacing[] = {0,0,0};
				exits[] = {"VVT_exit"};
				unloadingInterval = 2;
				loadingDistance = 5;
				loadingAngle = 60;
				parachuteClassDefault = "O_Parachute_02_F";
				parachuteHeightLimitDefault = 5;
			};
		};
	};
	class rhs_kraz255b1_bmkt_msv: rhs_kraz255b1_bmkt_base
	{
		EdPrev(rhs_kraz255b1_bmkt_msv)
		FACTION_MSV
		forceInGarage = 1;
	};
	class rhs_kraz255b1_bmkt_vdv: rhs_kraz255b1_bmkt_base
	{
		EdPrev(rhs_kraz255b1_bmkt_vdv)
		FACTION_VDV
	};
	class rhs_kraz255b1_bmkt_vmf: rhs_kraz255b1_bmkt_base
	{
		EdPrev(rhs_kraz255b1_bmkt_vmf)
		FACTION_VMF
	};
	class rhs_kraz255b1_bmkt_vv: rhs_kraz255b1_bmkt_base
	{
		EdPrev(rhs_kraz255b1_bmkt_vv)
		FACTION_VV
	};
