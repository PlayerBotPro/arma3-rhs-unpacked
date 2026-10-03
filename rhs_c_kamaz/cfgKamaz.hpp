
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

	class rhs_kamaz5350: O_Truck_02_covered_F
	{
		dlc = "RHS_AFRF";
		scope=1;
		displayName = "KamAZ-5350";
		model = "rhsafrf\addons\rhs_kamaz\rhs_kamaz5350";
		//picture="";
		#include "PhysX_Kamaz5350.hpp"

		rhs_decalParameters[]={
			"['Number', [5,6,7,8], 'Default']"
		};

		category = "Car";
		vehicleClass = rhs_vehclass_truck;
		editorSubcategory = "rhs_EdSubcat_truck";

		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3", // base
			"camo4", // bed
			"", // camo5 cover
			"n1",				// 5 - 8 number system
			"n2",
			"n3",
			"n4",
			"i2",				// 9 - left army
			"i4"
		};
		hiddenSelectionsTextures[] = {
			"\rhsafrf\addons\rhs_kamaz\data\Kamaz5350_cabin_co.paa",
			"\rhsafrf\addons\rhs_kamaz\data\Kamaz5350_cargo_co.paa",
			"\rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_co.paa",
			"\rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed_co.paa",
			"\rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover_co.paa"
		};

		hideProxyInCombat = 1;
		canHideDriver = 0;
		viewDriverInExternal = 1;
		driverAction = "driver_Truck_02";
		driverInAction = "driver_Truck_02";
		driverLeftLegAnimName = "pedalL";
		driverRightLegAnimName = "pedalR";
		driverRightHandAnimName = "shift";
		tf_hasLRradio_api = 0;


		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama_damage.rvmat",

				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_destruct.rvmat",

				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cabin.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cabin_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cabin_destruct.rvmat",

				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cargo.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cargo_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cargo_destruct.rvmat",

				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_damage.rvmat",

				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_in.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_in_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_in_damage.rvmat",

				"rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_destruct.rvmat",

				"rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_destruct.rvmat",

				"A3\soft_f_beta\Truck_02\Data\Truck_02_int.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_destruct.rvmat",

				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_VP.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_destruct.rvmat",

				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_destruct.rvmat",

				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_VP.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_destruct.rvmat"
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
			};
			class Left2: Left
			{
				useFlare=1;
				position="light_L_flare";
			};
			class Searchlight: Left
			{
				position="Searchlight_pos";
				direction="Searchlight_dir";
				hitpoint="Searchlight";
				selection="Searchlight";
				useFlare=1;
				intensity=0.5;
				innerAngle=35;
				outerAngle=179;
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
			class reverse_light: Left
			{
				color[]={1900,1300,950};
				ambient[] = {5,0,0};
				intensity = .8;
				useFlare = 1;
				innerAngle=50;
				outerAngle=179;
				position = "reverse_light_pos";
				direction = "reverse_light_dir";
				hitpoint = "reverse_light_hit";
				selection = "reverse_light";
			};
		};
		aggregateReflectors[]=
		{

			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			},
			{
				"Long_Left2",
				"Long_Right2"
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
				//onPhaseChanged="(_this select 0) animateDoor ['Door_LF',(_this select 1)];";
			};
			class Door_RF: Door_LF
			{
				displayName="open right door";
				soundPosition = "DoorR_axis";
				//onPhaseChanged="(_this select 0) animateDoor ['Door_RF',(_this select 1)];";
			};
			class Hatch: Door_LF
			{
				sound = "";
				soundPosition = "";
				displayName="open top hatch";
				//onPhaseChanged="(_this select 0) animateDoor ['Hatch',(_this select 1)];";
			};
			class gearbox: Door_LF
			{
				sound = "RHS_gearbox";
				soundPosition = "gear_axis";
				displayName="";
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
			class searchlight_hide: longlights_hide {};
			class cabinlights_hide: longlights_hide {};
			class searchlight_rot
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class turnout1 {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class turnout2: turnout1 {};

			class ammo_cargo_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class spare_hide
			{
				mass=1;
				source = "user";
				displayName="hide spare wheel";
				animPeriod = 0.1; // ditto
				initPhase = 0; // ditto
			};
			class bench_hide: spare_hide
			{
				displayName="hide cargo bench";
				onPhaseChanged="(_this select 0) animateSource ['bench_hide',(_this select 1),true];";
			};
			class bench_l1_fold: spare_hide
			{
				displayName = "fold left rear bench";
				lockCargoAnimationPhase = 1;
				useSource = 1;
				lockCargo[]		= {9,11,13};
				onPhaseChanged	= "(_this select 0) enableVehicleCargo ((_this select 1) isEqualTo 1);";
			};
			class bench_l2_fold: bench_l1_fold
			{
				displayName = "fold left front bench";
				lockCargo[]		= {1,7,3,5};
			};
			class bench_r1_fold: bench_l1_fold
			{
				displayName = "fold right rear bench";
				lockCargo[]		= {12,14,10,16};
			};
			class bench_r2_fold: bench_l1_fold
			{
				displayName = "fold right front bench";
				lockCargo[]		= {2,4,6,8};
			};
			class cover_hide: spare_hide
			{
				displayName="hide cover";
				onPhaseChanged="(_this select 0) animateSource ['cover_hide',(_this select 1),true];";
			};
			class back_door: spare_hide
			{
				displayName="open back door";
				onPhaseChanged="(_this select 0) animateSource ['back_door',(_this select 1),true];";
			};
			class cover_end_hide: spare_hide
			{
				displayName="open cover end";
				source = "door";
				initPhase=1;
				onPhaseChanged="(_this select 0) animateDoor ['cover_end_hide',(_this select 1),true];";
			};
			class side_walls_hide: spare_hide
			{
				displayName="hide side walls";
				useSource = 1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"cover_hide",1,"bench_hide",1,"cover_end_hide",1};
			};
			/*class light_hide: spare_hide
			{
				displayName="hide light covers";
			};*/
		};
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor=8;
				passThrough=1;
				minimalHit=0.01;
				explosionShielding=1.5;
				radius=0.15;
			};
			class HitEngine: HitEngine{
				armor=0.5;
				passThrough=1;
				minimalHit=0.01;
				explosionShielding=0.5;
				radius=0.12;
				visual = "zbytek";
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
			#define Glass_Armor \
				armor=0.1;\
				passThrough=0;\
				explosionShielding=3;\
				radius=0.33;
			class HitGlass1: HitGlass1
			{
				Glass_Armor
			};
			class HitGlass2: HitGlass2
			{
				Glass_Armor
			};
			class HitGlass3: HitGlass3
			{
				Glass_Armor
			};
			class HitGlass4: HitGlass4
			{
				Glass_Armor
			};
			class HitGlass5: HitGlass5
			{
				Glass_Armor
			};
			class HitGlass6: HitGlass6
			{
				Glass_Armor
			};
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
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				textures[]=
				{
					"\rhsafrf\addons\rhs_kamaz\data\Kamaz5350_cabin_co.paa",
					"\rhsafrf\addons\rhs_kamaz\data\Kamaz5350_cargo_co.paa",
					"\rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_co.paa",
					"\rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed_co.paa",
					"\rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover_co.paa"
				};
				factions[]=
				{
					rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
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

			class rhs_hidespare {
				displayName = "Remove spare wheel";
				property = "rhs_hidespare";
				control = "CheckboxNumber";
				expression = "_this animate ['spare_hide',_value,true]";
				defaultValue = "0";
			};
			class rhs_hidebench: rhs_hidespare {
				displayName = "Remove cargo bench";
				property = "rhs_hidebench";
				expression = "_this animateSource ['bench_hide',_value,true];";
			};
			class Door_LF: rhs_hidespare {
				displayName = "Open front left door";
				property = "Door_LF";
				expression = "_this animateDoor ['%s',_value,true]";
			};
			class Door_RF: Door_LF {
				displayName = "Open front right door";
				property = "Door_RF";
			};
			class back_door: Door_LF {
				displayName = "Open back door";
				property = "back_door";
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
			class searchlight_toggle: lights_toggle
			{
				shortcut = "";
				displayName="Toggle searchlight";
				statement = "[this,3] call rhs_fnc_carLightToggle";
			};
			class searchlight_adjust: lights_toggle
			{
				shortcut = "";
				displayName="Adjust searchlight";
				condition = "((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this) AND (this animationPhase 'searchlight_hide' == 0)";
				statement = "[this] spawn rhs_fnc_adjustSearchlight";
			};
			class open_rear: lights_toggle
			{
				shortcut = "";
				displayName="Lower rear cover";
				condition = "(((call rhs_fnc_findPlayer)) in (crew this)) && (this doorPhase 'cover_end_hide' > 0)";
				statement = "this animateDoor ['cover_end_hide',0,true]";
			};
			class close_rear: open_rear
			{
				displayName="Raise rear cover";
				condition = "(((call rhs_fnc_findPlayer)) in (crew this)) && (this doorPhase 'cover_end_hide' < 1)";
				statement = "this animateDoor ['cover_end_hide',1,true]";
			};
			class fold_benches
			{
				displayName		= "Fold benches";
				position		= "fold_bench_action";
				actionNamedSel	= "fold_bench_action";
				radius			= 3;
				priority		= 1.5;
				showWindow		= 1;
				onlyForplayer	= 1;
				condition		= "((this animationSourcePhase 'bench_l1_fold') isEqualTo 0) && {crew this - [driver this] - [(fullCrew [this,'cargo',true]) # 0 # 0] isEqualTo []}";
				statement		= "{this animateSource [_x,1]}foreach ['bench_l1_fold','bench_l2_fold','bench_r1_fold','bench_r2_fold'];this enableVehicleCargo true;for '_i' from 1 to 12 do {this lockCargo [_i,true]};";
			};
			class unfold_benches: fold_benches
			{
				displayName		= "Unfold benches";
				condition		= "((this animationSourcePhase 'bench_l1_fold') isEqualTo 1)";
				statement		= "{this animateSource [_x,0]}foreach ['bench_l1_fold','bench_l2_fold','bench_r1_fold','bench_r2_fold'];this enableVehicleCargo false;for '_i' from 1 to 12 do {this lockCargo [_i,false]};";
			};
		};

		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_decalsReadParams;(_this select 0) animateDoor ['cover_end_hide',1,true]";
				postInit = "_this call rhs_fnc_reapplyTextures";
				turnIn = "([0] + _this)  call rhs_fnc_turretAction;";
				turnOut = "([1] + _this) call rhs_fnc_turretAction;";
				engine = "if(_this select 1)then{_this call RHS_fnc_gearSound};_this call rhs_fnc_engineCheckDamage;";
				dammaged = "_this call rhs_fnc_wheelDamaged";
				getout = "if( (_this select 3) isEqualTo [2] )then{(_this select 0) animateDoor ['hatch',0]}";
			};
		};

		driverDoor = "Door_LF";
		cargoDoors[] ={
			"Door_RF",
			""
		};
		transportSoldier = 13;
		cargoProxyIndexes[] = {2,3,4,5,6,7,8,9,10,11,12,13,14};
		getInProxyOrder[] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,1};
		cargoAction[] = {"passenger_apc_narrow_generic03still_ns","passenger_apc_narrow_generic03","passenger_generic01_leanright","passenger_apc_generic01","passenger_apc_generic01","passenger_apc_generic03","passenger_apc_narrow_generic01","passenger_generic01_leanleft","passenger_apc_generic03","passenger_apc_narrow_generic02","passenger_apc_generic02","passenger_apc_generic01","passenger_generic01_foldhands","passenger_apc_generic04","passenger_generic01_leanleft"};
		getInAction = "GetInMRAP_01";
		getOutAction = "GetOutLow";
		cargoIsCoDriver[] = {1,0};
		cargoGetInAction[] = {"GetInMRAP_01","GetInHemttBack"};
		cargoGetOutAction[] = {"GetOutLow","GetOutHighZamak"};
		cargoCompartments[] = {"Compartment1","Compartment2"};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01 {
				gunnerForceOptics			= 0;
				gunnerInAction				= "passenger_inside_2";
				gunnerCompartments			= "Compartment2";
				gunnerGetInAction			= "GetInHemttBack";
				gunnerGetOutAction			= "GetOutHighZamak";
				enabledByAnimationSource	= "cover_end_hide";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{-5.9650998,-65.868103},
						{17.3442001,-42.642502},
						{19.0928998,-7.8701},
						{-2.3450999,2.5708001}
					};
					limitsArrayBottom[]=
					{
						{-44.4687,-70.9972},
						{-23.562599,5.0429001}
					};
				};
				class TurnOut 
				{
					limitsArrayTop[] = {{65, -179.9}, {65, 179.9}};	/// points for the upper curve
					limitsArrayBottom[] = {{-45, -179.9},{-45, 179.9}}; /// points for the lower curve
				};
				commanding=-2;
				forceHideGunner = 1;
				viewGunnerInExternal = 1;
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_02 {
				gunnerInAction = "passenger_inside_2";
				gunnerCompartments="Compartment2";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{-9.8149996,-4.5300999},
						{-1.5719,-1.2185},
						{17.5050001,16.3857},
						{19.0039999,46.8344},
						{-14.3588,76.119301},
						{-21.8244,80}
					};
					limitsArrayBottom[]=
					{
						{-22.8074,-7.2107},
						{-44.752102,10.6169},
						{-44.846699,80}
					};
				};
				gunnerGetInAction			= "GetInHemttBack";
				gunnerGetOutAction			= "GetOutHighZamak";
				enabledByAnimationSource	= "cover_end_hide";
				forceHideGunner				= 1;
				viewGunnerInExternal		= 1;
				commanding					=-2;
				class Hitpoints {};
			};
			class CargoTurret_03: CargoTurret_01 {
				animationSourceHatch		= "hatch_h";
				isPersonTurret				= 1;
				canHideGunner				= 1;
				forceHideGunner				= 0;
				gunnerInAction				= "RHS_Kamaz_Cargo01";
				gunnerAction				= "vehicle_turnout_2";
				personTurretAction			= "vehicle_turnout_2";
				gunnerGetInAction			= "GetInMRAP_01";
				gunnerGetOutAction			= "GetOutLow";
				memoryPointsGetInGunner		= "pos codriver";
				memoryPointsGetInGunnerDir	= "pos codriver dir";
				enabledByAnimationSource	= "hatch";
				rhs_hatch_control			= 1;
				//turretInfoType			= "rhs_kamaz_hatch";
				gunnerCompartments			= "Compartment1";
				gunnerName					= "Passenger (Cabin Seat)";
				proxyIndex					= 1;
				gunnerDoor					= "Door_RF";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{-5.9650998,-65.868103},
						{17.3442001,-42.642502},
						{19.0928998,-7.8701},
						{-2.3450999,2.5708001}
					};
					limitsArrayBottom[]=
					{
						{-44.4687,-70.9972},
						{-23.562599,5.0429001}
					};
				};
			};
		};
		class RenderTargets
		{
			class mirrorL
			{
				renderTarget = "rendertarget0";
				class mirror
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				PIP_BB(0)
			};
			class mirrorR
			{
				renderTarget = "rendertarget1";
				class mirror
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				PIP_BB(1)
			};
			class mirror_low
			{
				renderTarget = "rendertarget2";
				class mirror
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
				PIP_BB(2)
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
				disableHeightLimit = 0;
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
		class RHS_TowingSystem
		{
			class Carrier
			{
				rhs_maxCargoMass		= 2000;
				rhs_attachPoint			= "";
				rhs_attachPointPos[]	= {0,-3.4,-1.2};
			};
		};
	};
	class rhs_kamaz5350_msv: rhs_kamaz5350
	{
		EdPrev(rhs_kamaz5350_msv)
		Faction_MSV
	};

	class rhs_kamaz5350_vdv: rhs_kamaz5350
	{
		EdPrev(rhs_kamaz5350_vdv)
		Faction_VDV
	};

	class rhs_kamaz5350_vmf: rhs_kamaz5350
	{
		EdPrev(rhs_kamaz5350_vmf)
		Faction_VMF
	};

	class rhs_kamaz5350_vv: rhs_kamaz5350
	{
		EdPrev(rhs_kamaz5350_vv)
		Faction_VV
	};

	class rhs_kamaz5350_ammo_base: rhs_kamaz5350
	{
		transportAmmo = 60000;
		supplyRadius = 9.5;
		transportSoldier = 1;
		displayName = "KamAZ-5350 (Ammo)";

		class AnimationSources: AnimationSources
		{

			class ammo_cargo_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class bench_hide: bench_hide
			{
				displayName="";
				initPhase = 1;
			};
			class bench_l1_fold: bench_l1_fold
			{
				displayName="";
			};
			class bench_l2_fold: bench_l2_fold
			{
				displayName="";
			};
			class bench_r1_fold: bench_r1_fold
			{
				displayName="";
			};
			class bench_r2_fold: bench_r2_fold
			{
				displayName="";
			};
			class cover_hide: cover_hide
			{
				displayName="";
			};
			class back_door: spare_hide
			{
				displayName="open back door";
				onPhaseChanged="(_this select 0) animateSource ['back_door',(_this select 1),true];";
			};
			class side_walls_hide: side_walls_hide
			{
				displayName="";
			};
		};

		class Turrets: Turrets 
		{
			class CargoTurret_03: CargoTurret_03 {};
		};
		class UserActions: UserActions
		{
			class fold_benches: fold_benches
			{
				condition = "false";
			};
			class unfold_benches: fold_benches
			{
				condition = "false";
			};
		};
	};

	class rhs_kamaz5350_ammo_msv: rhs_kamaz5350_ammo_base
	{
		EdPrev(rhs_kamaz5350_msv)
		Faction_MSV
		forceingarage = 1;
	};

	class rhs_kamaz5350_ammo_vdv: rhs_kamaz5350_ammo_base
	{
		EdPrev(rhs_kamaz5350_vdv)
		Faction_VDV
	};

	class rhs_kamaz5350_ammo_vmf: rhs_kamaz5350_ammo_base
	{
		EdPrev(rhs_kamaz5350_vmf)
		Faction_VMF
	};

	class rhs_kamaz5350_ammo_vv: rhs_kamaz5350_ammo_base
	{
		EdPrev(rhs_kamaz5350_vv)
		Faction_VV
	};

	class rhs_kamaz5350_open: rhs_kamaz5350
	{
		scope = 1;
		displayName = "KamAZ-5350 (Open)";
		hideProxyInCombat = 1;

		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerInAction = "RHS_Kamaz_Turnout01";
				//gunnerInAction = "passenger_inside_2";
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				//personTurretAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				animationSourceHatch = "turnout1";
				gunnerGetInAction="GetInHemttBack";
				gunnerGetOutAction="GetOutHighZamak";
				gunnerName = "Passenger (Right Front Seat)";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerCompartments = "Compartment2";
				proxyIndex = 23;
				maxElev = 45;
				minElev = -45;
				maxTurn = 60;
				minTurn = -85;
				isPersonTurret = 2;
				canHideGunner = 1;
				allowLauncherOut=1;
				forceHideGunner = 0;
				viewGunnerInExternal = 1;
				class TurnIn
				{
					limitsArrayTop[] = {{45, -85}, , {35, -17},{15, -15}};
					limitsArrayBottom[] = {{10.85, -85},{6, -31},{-22, -25},{-13.5, -15}};
				};
				class TurnOut
				{
					limitsArrayTop[] = {{35, -85}, {35, 80}};
					limitsArrayBottom[] = {{-25, -65},{-25, -49},{-3, -46},{-2, -41},{-0.4, 11},{-1.6, 52},{-4.5, 55},{-45, 60},{-42, 74},{-29, 78},{-15, 80}};
					turnOffset = -90;
				};
			};
			class CargoTurret_05: CargoTurret_04
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
					limitsArrayTop[] = {{25, 20}, {55, 94}};
					limitsArrayBottom[] = {{-14, 20},{-10, 23},{-14, 28},{4.21, 30},{9.27, 81},{7, 94}};
				};
				class TurnOut
				{
					limitsArrayTop[] = {{35, -60}, {35, 95}};
					limitsArrayBottom[] = {{-28, -66},{-21, -55},{-0.4, -54},{-0.32, -37},{-0.2, -1},{-2, 40},{-4, 43},{-14, 47},{-42, 54},{-45, 61},{-15, 95}};
					turnOffset = -90;
				};
			};
		};

		class AnimationSources: AnimationSources
		{
			class cover_hide: cover_hide
			{
				displayName = "";
				initPhase = 1;
			};
			class bench_l1_fold: bench_l1_fold
			{
				displayName = "fold left front bench";
				lockCargo[]		= {11,7,9};
			};
			class bench_l2_fold: bench_l2_fold
			{
				displayName = "fold left rear bench";
				lockCargo[]		= {14,1,3,5};
			};
			class bench_r1_fold: bench_r1_fold
			{
				lockCargo[]		= {8,12,10};
			};
			class bench_r2_fold: bench_r2_fold
			{
				lockCargo[]		= {6,2,4,13};
			};
		};

		transportSoldier=11;
		cargoProxyIndexes[] = {2,5,6,7,8,9,10,11,12,13,14};
		getInProxyOrder[] = {2,5,6,7,8,9,10,11,12,13,14,15,16,23,24,1};
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
			class searchlight_toggle: lights_toggle
			{
				shortcut = "";
				displayName="Toggle searchlight";
				statement = "[this,3] call rhs_fnc_carLightToggle";
			};
			class searchlight_adjust: lights_toggle
			{
				shortcut = "";
				displayName="Adjust searchlight";
				condition = "((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this) AND (this animationPhase 'searchlight_hide' == 0)";
				statement = "[this] spawn rhs_fnc_adjustSearchlight";
			};
			class fold_benches
			{
				displayName		= "Fold benches";
				position		= "fold_bench_action";
				actionNamedSel	= "fold_bench_action";
				radius			= 3;
				priority		= 1.5;
				showWindow		= 1;
				onlyForplayer	= 1;
				condition		= "((this animationSourcePhase 'bench_l1_fold') isEqualTo 0) && {crew this - [driver this] - [(fullCrew [this,'cargo',true]) # 0 # 0] isEqualTo []}";
				statement		= "{this animateSource [_x,1]}foreach ['bench_l1_fold','bench_l2_fold','bench_r1_fold','bench_r2_fold'];this enableVehicleCargo true;for '_i' from 1 to 12 do {this lockCargo [_i,true]};";
			};
			class unfold_benches: fold_benches
			{
				displayName		= "Unfold benches";
				condition		= "((this animationSourcePhase 'bench_l1_fold') isEqualTo 1)";
				statement		= "{this animateSource [_x,0]}foreach ['bench_l1_fold','bench_l2_fold','bench_r1_fold','bench_r2_fold'];this enableVehicleCargo false;for '_i' from 1 to 12 do {this lockCargo [_i,false]};";
			};
		};
	};

	class rhs_kamaz5350_open_msv: rhs_kamaz5350_open
	{
		EdPrev(rhs_kamaz5350_open_msv)
		Faction_MSV
		forceingarage = 1;
	};

	class rhs_kamaz5350_open_vdv: rhs_kamaz5350_open
	{
		EdPrev(rhs_kamaz5350_open_vdv)
		Faction_VDV
	};

	class rhs_kamaz5350_open_vmf: rhs_kamaz5350_open
	{
		EdPrev(rhs_kamaz5350_open_vmf)
		Faction_VMF
	};

	class rhs_kamaz5350_open_vv: rhs_kamaz5350_open
	{
		EdPrev(rhs_kamaz5350_open_vv)
		Faction_VV
	};

	class rhs_kamaz5350_flatbed: rhs_kamaz5350_open
	{
		displayName = "KamAZ-5350 (Open/Flatbed)";
		transportSoldier=1;
		cargoProxyIndexes[] = {2};
		getInProxyOrder[] = {1,2};
		class Turrets: Turrets {
			class CargoTurret_03: CargoTurret_03 {};
		};
		class AnimationSources: AnimationSources
		{
			class bench_hide: bench_hide
			{
				displayName = "";
				initPhase = 1;
			};
			class bench_l1_fold: bench_l1_fold
			{
				displayName="";
			};
			class bench_l2_fold: bench_l2_fold
			{
				displayName="";
			};
			class bench_r1_fold: bench_r1_fold
			{
				displayName="";
			};
			class bench_r2_fold: bench_r2_fold
			{
				displayName="";
			};
		};
		class VehicleTransport: VehicleTransport
		{
			class Cargo: Cargo {};
			class Carrier: Carrier
			{
				disableHeightLimit = 1;
			};
		};
		class UserActions: UserActions
		{
			class fold_benches: fold_benches
			{
				condition = "false";
			};
			class unfold_benches: fold_benches
			{
				condition = "false";
			};
		};
	};

	class rhs_kamaz5350_flatbed_msv: rhs_kamaz5350_flatbed
	{
		EdPrev(rhs_kamaz5350_flatbed_msv)
		Faction_MSV
	};

	class rhs_kamaz5350_flatbed_vdv: rhs_kamaz5350_flatbed
	{
		EdPrev(rhs_kamaz5350_flatbed_vdv)
		Faction_VDV
	};

	class rhs_kamaz5350_flatbed_vmf: rhs_kamaz5350_flatbed
	{
		EdPrev(rhs_kamaz5350_flatbed_vmf)
		Faction_VMF
	};

	class rhs_kamaz5350_flatbed_vv: rhs_kamaz5350_flatbed
	{
		EdPrev(rhs_kamaz5350_flatbed_vv)
		Faction_VV
	};

	class rhs_kamaz5350_flatbed_cover: rhs_kamaz5350_flatbed
	{
		displayName = "KamAZ-5350 (Flatbed)";
		class AnimationSources: AnimationSources
		{
			class cover_hide: cover_hide
			{
				displayName = "";
				initPhase = 0;
			};
		};
		class VehicleTransport: VehicleTransport
		{
			class Cargo: Cargo {};
			class Carrier: Carrier
			{
				disableHeightLimit = 0;
			};
		};
	};

	class rhs_kamaz5350_flatbed_cover_msv: rhs_kamaz5350_flatbed_cover
	{
		EdPrev(rhs_kamaz5350_flatbed_cover_msv)
		Faction_MSV
	};

	class rhs_kamaz5350_flatbed_cover_vdv: rhs_kamaz5350_flatbed_cover
	{
		EdPrev(rhs_kamaz5350_flatbed_cover_vdv)
		Faction_VDV
	};

	class rhs_kamaz5350_flatbed_cover_vmf: rhs_kamaz5350_flatbed_cover
	{
		EdPrev(rhs_kamaz5350_flatbed_cover_vmf)
		Faction_VMF
	};

	class rhs_kamaz5350_flatbed_cover_vv: rhs_kamaz5350_flatbed_cover
	{
		EdPrev(rhs_kamaz5350_flatbed_cover_vv)
		Faction_VV
	};