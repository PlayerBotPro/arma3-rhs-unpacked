
	class RHS_Ural_BaseTurret: Truck_F
	{
		dlc = "RHS_AFRF";
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']"
		};

		category = "Car";
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural.p3d";
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_ural_ca.paa";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_bm21_pic_ca.paa";
		mapsize=7.0;
		insideSoundCoef = 0.2;
		displayName="$STR_RHS_URAL4320_NAME";
		tf_hasLRradio_api = 0;
		viewDriverInExternal = 1;
		//cargoIsHorizontal = 1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"n1",				// 2 - 4 number system
			"n2",
			"n3",
			"n4",
			"i1",				// 6 - right army
			"i2",				// 7 - left army
			"i3",				// 8 - right platoon
			"i4"
		};

		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"
				};
			};
			class Camo : standard
			{
				displayName="Camo";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"
				};
			};
			class Camo1 : standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_chdkz_co.paa"
				};
			};
			class Camo2 : standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_camo_co.paa"
				};
			};
			class Camo3 : standard
			{
				displayName="Civil Blue";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"
				};
			};
			class Camo4 : standard
			{
				displayName="Civil Yellow";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civ1_co.paa"
				};
			};
			class Camo5 : standard
			{
				displayName="Civil Worker";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ2_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"
				};
			};
			class Camo6 : standard
			{
				displayName="UN";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_un_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_un_co.paa"
				};
			};
			class Camo7 : standard
			{
				displayName="Takistan";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_tka_co.paa"
				};
			};
			class rhs_sand : standard
			{
				displayName="Sand";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_plachta_sand_co.paa"
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
			class rhs_decalNumber_type {
				displayName = "Define font type of plate number";
				tooltip = "Define kind of font that will be drawn on vehicle.";
				property = "rhs_decalNumber_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];[_this,[['Number', cDecals4CarsNumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
				expression = "if( _value >= 0)then{[_this,[['Number', cDecals4CarsNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value]]] call rhs_fnc_decalsInit};";
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
				expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightArmyPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
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
				expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightPlatoonPlaces,  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};

			class rhs_hideLightCover {
				displayName = "Hide light covers";
				property = "rhs_hideLightCover";
				control = "CheckboxNumber";
				expression = "_this animate ['light_hide',_value,true]";
				defaultValue = "0";
			};
			class rhs_hidespare: rhs_hideLightCover {
				displayName = "Remove spare wheel";
				property = "rhs_hidespare";
				expression = "_this animate ['spare_hide',_value,true]";
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
		};


		driverAction="RHS_URAL_driver";
		driverInAction="RHS_URAL_driver";
		attenuationEffectType = "RHS_CarAttenuation";
		soundAttenuationCargo[]={1,1,0.3};

		cost=50000;
		transportMaxBackpacks=6;
		transportSoldier=14;

		vehicleClass = rhs_vehclass_truck;
		editorSubcategory = "rhs_EdSubcat_truck";

		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="shift";
		driverRightLegAnimName = "pedalR";
		driverLeftLegAnimName = "pedalL";

		weapons[]={"TruckHorn3"};
		supplyRadius = 5.5;

		#include "sounds.hpp"

		class Turrets
		{
			class MainTurret: NewTurret
			{
				disableSoundAttenuation=0;
				class ViewOptics;
			};
		};


		memoryPointsGetInCargo[] = {"pos codriver", "pos codriver", "pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos codriver dir","pos cargo dir"};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_RF",
			""
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment1",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		class AnimationSources: AnimationSources
		{
			class Door_LF
			{
				source="door";
				animPeriod=0.8;
				sound = "RHS_Ural_Door";
				soundPosition = "osa_dvere_lp";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "osa_dvere_pp";
			};
			class gearbox: Door_LF
			{
				sound = "RHS_gearbox";
				soundPosition = "gear_axis";
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
				useSource = 1;
				displayName="hide spare wheel";
				animPeriod = 0.1; // ditto
				initPhase = 0; // ditto
			};
			class bench_hide: spare_hide
			{
				displayName="hide cargo bench";
				lockCargo[] = {3,4,5,6,7,8,9,10,11,12,23,24};
				lockCargoAnimationPhase = 1;
			};
			class people_tag_hide: spare_hide
			{
				displayName="hide cargo label";
			};
			class rear_numplate_hide: spare_hide
			{
				displayName="hide rear registration numbers";
				initPhase = 1;
			};
			class light_hide: spare_hide
			{
				displayName="hide light covers";
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
		};

		armor					= 52;
		minTotalDamageThreshold	= 0.13;
		wheelDamageRadiusCoef	= 0.9;
		wheelDestroyRadiusCoef	= 0.4;
		crewCrashProtection		= 0.25;
		fuelExplosionPower		= 0.1;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel	{radius = 0.25; visual = "wheel_1_1_damage"; armorComponent = "wheel_1_1_hide"; HP_WHEEL_TRUCK;};
			class HitLF2Wheel: HitLF2Wheel	{radius = 0.25; visual = "wheel_1_2_damage"; armorComponent = "wheel_1_2_hide"; HP_WHEEL_TRUCK;};
			class HitLMWheel: HitLMWheel	{radius = 0.25; visual = "wheel_1_3_damage"; armorComponent = "wheel_1_3_hide"; HP_WHEEL_TRUCK;};
			class HitLBWheel: HitLBWheel	{radius = 0.25; visual = "wheel_1_4_damage"; armorComponent = "wheel_1_4_hide"; HP_WHEEL_TRUCK;};

			class HitRFWheel: HitRFWheel	{radius = 0.25; visual = "wheel_2_1_damage"; armorComponent = "wheel_2_1_hide"; HP_WHEEL_TRUCK;};
			class HitRF2Wheel: HitRF2Wheel	{radius = 0.25; visual = "wheel_2_2_damage"; armorComponent = "wheel_2_2_hide"; HP_WHEEL_TRUCK;};
			class HitRMWheel: HitRMWheel	{radius = 0.25; visual = "wheel_2_3_damage"; armorComponent = "wheel_2_3_hide"; HP_WHEEL_TRUCK;};
			class HitRBWheel: HitRBWheel	{radius = 0.25; visual = "wheel_2_4_damage"; armorComponent = "wheel_2_4_hide"; HP_WHEEL_TRUCK;};

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
			class HitFuel
			{
				armor			= 0.5;
				radius 			= 0.2;
				name			= Hit_Fuel;
				armorComponent	= Hit_Fuel;
				visual			= "-";
				passThrough		= 0.2;
			};
			class HitEngine
			{
				armor			= 0.5;
				radius 			= 0.2;
				name			= Hit_Engine;
				armorComponent	= Hit_Engine;
				visual			= "zbytek";
				passThrough		= 0.2;
				class DestructionEffects
				{
					ammoExplosionEffect = "";

					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = SmallWreckSmoke;
						position = "engine_smoke";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
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
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "SmokeWreck1";
					};
				};
			};
			class HitBody: HitBody
			{
				name		= "karoserie";
				visual		= "zbytek";
				passThrough	= 1;
				radius		= 0.2;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.05;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.05;
			};
			class HitGlass4: HitGlass4
			{
				visual="glass4";
				armor=0.05;
			};
		};
		cargoAction[]=
		{
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic03still",
			"rhs_passenger_apc_narrow_generic03",
			"passenger_generic01_leanright",
			"rhs_passenger_apc_generic01",
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
			"passenger_generic01_leanleft"
		};
		getInAction="GetInMantis";
		getOutAction="GetOutMedium";

		cargoGetInAction[]=
		{
			"GetInMantis",
			"GetInMantis",
			"GetInHemttBack"
		};
		cargoGetOutAction[]=
		{
			"GetOutMedium",
			"GetOutMedium",
			"GetOutHighZamak"
		};

		memorypointtrackbll = "Stopa ZLL";
		memorypointtrackblr = "Stopa ZLP";
		memorypointtrackbrl = "Stopa ZPL";
		memorypointtrackbrr = "Stopa ZPP";
		memorypointtrackfll = "Stopa PLL";
		memorypointtrackflr = "Stopa PLP";
		memorypointtrackfrl = "Stopa PPL";
		memorypointtrackfrr = "Stopa PPP";

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama_damage.rvmat",

				"rhsafrf\addons\rhs_tigr\data\glass.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"a3\data_f\glass_veh_int.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21.rvmat",
				"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectHTruck";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[]={800,900,650};
				ambient[]={2,2,2};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=30;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=1.5;
				useFlare=1;
				dayLight=0;
				flareSize=0.85000002;
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
			class RSvetla: LSvetla
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				innerAngle=40;
				outerAngle=120;
				intensity=2.5;
			};
			class Right2: RSvetla
			{
				position="Light_R_Flare";
				direction="Light_R_Flare_end";
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
			class Left2: LSvetla
			{
				position="Light_L_Flare";
				direction="Light_L_Flare_end";
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
			class Searchlight: LSvetla
			{
				position="Searchlight_pos";
				direction="Searchlight_dir";
				hitpoint="Searchlight";
				selection="Searchlight";
				useFlare=1;
				innerAngle=35;
				outerAngle=179;
			};
			class Long_Left
			{
				color[]={800,900,650};
				ambient[]={5,5,5};
				position="Light_L_Long";
				direction="Light_L_Long_end";
				hitpoint="L svetlo";
				selection="L svetlo";
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
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Long_Right2: Long_Right
			{
				useFlare=1;
				position="light_R_Long_flare";
				innerAngle=50;
				outerAngle=139;
				coneFadeCoef = 51;
				flareSize = 1;
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
				outerAngle=139;
				coneFadeCoef = 51;
				flareSize = 1;
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
			{"LSvetla"},{"Left2"},{"RSvetla"},{"Right2"},
			{
				"Long_Left2",
				"Long_Right2"
			}
		};
		armorLights = 0.05;

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

		class UserActions {
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
		};

		class RHS_TowingSystem
		{
			class Carrier
			{
				rhs_maxCargoMass		= 2000;
				rhs_attachPoint			= "";
				rhs_attachPointPos[]	= {0,-3.3,-0.7};
			};
		};
		#include "PsyhX_Ural.hpp"
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_a2port_car_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
				engine = "if(_this select 1)then{_this call RHS_fnc_gearSound};_this call rhs_fnc_engineCheckDamage;";
				dammaged = " _this call rhs_fnc_wheelDamaged";
			};
		};
		class Components;
	};
	class RHS_Ural_Base: RHS_Ural_BaseTurret
	{
		EdPrev(rhs_Ural_Base)
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_pic_ca.paa";
		transportSoldier=12;
		insideSoundCoef = 0.2;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,13,14};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
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
	};

	//#include "testVehicles.hpp"

	class RHS_Ural_MSV_Base: RHS_Ural_Base
	{
		EdPrev(rhs_Ural_MSV_Base)
		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_msv";
		crew = "rhs_msv_driver";
		typicalCargo[] = {"rhs_msv_driver"};
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};
	};

	// start open classes
	class RHS_Ural_MSV_01: RHS_Ural_MSV_Base
	{
		EdPrev(rhs_Ural_MSV_01)
		scope=2;
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_VDV_01: RHS_Ural_MSV_Base
	{
		EdPrev(rhs_Ural_VDV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		scope=2;
		faction="rhs_faction_vdv";
		//displayName="Ural-4320";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_VMF_01: RHS_Ural_MSV_Base
	{
		EdPrev(rhs_Ural_VMF_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		scope=2;
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		//displayName="Ural-4320";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_VV_01: RHS_Ural_MSV_Base
	{
		EdPrev(rhs_Ural_VV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		scope=2;
		faction="rhs_faction_vv";
		//displayName="Ural-4320";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Flat_MSV_01: RHS_Ural_MSV_Base
	{
		EdPrev(rhs_Ural_Flat_MSV_01)
		scope=2;
		AUTHOR_MACRO_BIS_PORT
		displayName="Ural-4320 (Flatbed)"; //-need strings!
		class AnimationSources: AnimationSources
		{
			class bench_hide: bench_hide
			{
				initPhase = 1;
			};
		};
		transportSoldier=2;
		cargoProxyIndexes[] = {1,2};
		class Turrets {};
	};
	class RHS_Ural_Flat_VDV_01: RHS_Ural_Flat_MSV_01
	{
		EdPrev(rhs_Ural_Flat_VDV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Flat_VMF_01: RHS_Ural_Flat_MSV_01
	{
		EdPrev(rhs_Ural_Flat_VMF_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Flat_VV_01: RHS_Ural_Flat_MSV_01
	{
		EdPrev(rhs_Ural_Flat_VV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Ural_Open_MSV_01: RHS_Ural_MSV_Base
	{
		EdPrev(rhs_Ural_Open_MSV_01)
		scope=2;
		displayName="$STR_RHS_URAL4320OPEN_NAME";
		AUTHOR_MACRO_BIS_PORT
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open2.p3d";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_open_pic_ca.paa";
		soundAttenuationCargo[]={1,1,0};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		hideProxyInCombat = 1;
		canHideDriver = 0;
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
			};
			class Camo : standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa"
				};
			};
			class Camo1 : standard
			{
				displayName="Takistan";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_tka_co.paa"
				};
			};
			class Camo2 : standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_chdkz_co.paa"
				};
			};
			class rhs_sand : standard
			{
				displayName="Sand";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa"
				};
			};
		};
		textureList[]=
		{
		};
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
		transportSoldier=10;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,23,24};
	};
	class RHS_Ural_Open_VDV_01: RHS_Ural_Open_MSV_01
	{
		EdPrev(rhs_Ural_Open_VDV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Open_VMF_01: RHS_Ural_Open_MSV_01
	{
		EdPrev(rhs_Ural_Open_VMF_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Open_VV_01: RHS_Ural_Open_MSV_01
	{
		EdPrev(rhs_Ural_Open_VV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Open_Flat_MSV_01: RHS_Ural_Open_MSV_01
	{
		EdPrev(rhs_Ural_Open_Flat_MSV_01)
		scope=2;
		AUTHOR_MACRO_BIS_PORT
		displayName="Ural-4320 (Open/Flatbed)"; //-need strings!
		class AnimationSources: AnimationSources
		{
			class bench_hide: bench_hide
			{
				initPhase = 1;
			};
		};
		transportSoldier=2;
		cargoProxyIndexes[] = {1,2};
		class Turrets {};
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
	                exits[] = {"VVT_exit"};
	                unloadingInterval = 2;
	                loadingDistance = 5;
	                loadingAngle = 60;
	                parachuteClassDefault = "O_Parachute_02_F";
	                parachuteHeightLimitDefault = 5;
	        };
		};		
	};
	class RHS_Ural_Open_Flat_VDV_01: RHS_Ural_Open_Flat_MSV_01
	{
		EdPrev(rhs_Ural_Open_Flat_VDV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Open_Flat_VMF_01: RHS_Ural_Open_Flat_MSV_01
	{
		EdPrev(rhs_Ural_Open_Flat_VMF_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Open_Flat_VV_01: RHS_Ural_Open_Flat_MSV_01
	{
		EdPrev(rhs_Ural_Open_Flat_VV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base
	{
		EdPrev(rhs_Ural_Support_MSV_Base_01)
		transportSoldier=2;
		cargoProxyIndexes[] = {1,2};
		getInProxyOrder[] = {1,2};
		class Turrets {};
		//vehicleclass = "Support";
	};

	class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01
	{
		EdPrev(rhs_Ural_Fuel_MSV_01)
		scope=2;
		displayName="$STR_RHS_URAL4320FUEL_NAME";
		AUTHOR_MACRO_BIS_PORT
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_refuel.p3d";
		icon = "\A3\soft_f_gamma\Truck_02\data\UI\Map_Truck_02_fuel_CA.paa";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_fuel_pic_ca.paa";
		transportfuel = 10000;
		supplyRadius = 9.5;
		class Hitpoints: HitPoints
		{
			class HitFuelTank
			{
				armor			= 0.5;
				material		= -1;
				name			= Hit_FuelTank;
				armorComponent	= Hit_FuelTank;
				visual			= "-";
				passThrough		= 0.2;
				// Kaboom
				class DestructionEffects
				{
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"n1",				// 2 - 4 number system
			"n2",
			"n3",
			"n4",
			"i1",				// 6 - right army
			"i2",				// 7 - left army
			"i3",				// 8 - right platoon
			"i4",
			"camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
			};
			class Camo : standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_cdf_co.paa"
				};
			};
			class Camo1 : standard
			{
				displayName="Takistan";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_tka_co.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_tka_co.paa"
				};
			};
			class Camo2 : standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_chdkz_co.paa"
				};
			};
			class rhs_sand : standard
			{
				displayName="Sand";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_fuel_sand_co.paa"
				};
			};
		};
		textureList[]=
		{
		};
	};
	class RHS_Ural_Fuel_VDV_01: RHS_Ural_Fuel_MSV_01
	{
		EdPrev(rhs_Ural_Fuel_VDV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Fuel_VMF_01: RHS_Ural_Fuel_MSV_01
	{
		EdPrev(rhs_Ural_Fuel_VMF_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Fuel_VV_01: RHS_Ural_Fuel_MSV_01
	{
		EdPrev(rhs_Ural_Fuel_VV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Ural_Repair_MSV_01: RHS_Ural_Support_MSV_Base_01
	{
		EdPrev(rhs_Ural_Repair_MSV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};
		scope=2;
		displayName="$STR_RHS_URAL4320Repair_NAME";
		AUTHOR_MACRO_BIS_PORT
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_repair.p3d";
		icon = "\A3\soft_f_beta\Truck_02\data\UI\Map_truck_02_repair_CA.paa";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_repair_pic_ca.paa";
		transportRepair = 2000000000;
		supplyRadius = 9.5;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"n1",				// 2 - 4 number system
			"n2",
			"n3",
			"n4",
			"i1",				// 6 - right army
			"i2",				// 7 - left army
			"i3",				// 8 - right platoon
			"i4"
		};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_tigr\data\glass.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"a3\data_f\glass_veh_int.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_repair.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_repair_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_repair_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
			};
			class Camo : standard
			{
				displayName="3-Color Camo";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
				};
			};
			class Camo1 : standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
				};
			};
			class Camo2 : standard
			{
				displayName="Takistan";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
				};
			};
			class Camo3 : standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
				};
			};
			class rhs_sand : standard
			{
				displayName="Sand";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
				};
			};
		};
		textureList[]=
		{
		};
	};
	class RHS_Ural_Repair_VDV_01: RHS_Ural_Repair_MSV_01
	{
		EdPrev(rhs_Ural_Repair_VDV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Repair_VMF_01: RHS_Ural_Repair_MSV_01
	{
		EdPrev(rhs_Ural_Repair_VMF_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Repair_VV_01: RHS_Ural_Repair_MSV_01
	{
		EdPrev(rhs_Ural_Repair_VV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Ural_Ammo_Base: RHS_Ural_Base
	{
		EdPrev(rhs_Ural_MSV_01)
		accuracy = 0.5;
		side = 0;

		transportAmmo = 60000;
		supplyRadius = 9.5;
		transportSoldier = 2;
		displayName = "Ural-4320 (Ammo)";

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
				initPhase = 1;
			};
		};
		class Turrets {};
	};

	class RHS_Ural_Ammo_MSV_01: RHS_Ural_Ammo_Base
	{
		//EdPrev(RHS_Ural_Ammo_MSV_01)
		scope=2;
		forceingarage = 1;
		faction="rhs_faction_msv";
		crew = "rhs_msv_driver";
		typicalCargo[] = {"rhs_msv_driver"};
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Ammo_VDV_01: RHS_Ural_Ammo_Base
	{
		//EdPrev(RHS_Ural_Ammo_VDV_01)
		scope=2;
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Ammo_VMF_01: RHS_Ural_Ammo_Base
	{
		//EdPrev(RHS_Ural_Ammo_VMF_01)
		scope=2;
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_Ural_Ammo_VV_01: RHS_Ural_Ammo_Base
	{
		//EdPrev(RHS_Ural_Ammo_VV_01)
		scope=2;
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT
	};


	class RHS_BM21_MSV_01:  RHS_Ural_BaseTurret
	{
		EdPrev(RHS_BM21_MSV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};
		scope=2;

		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_msv";
		crew = "rhs_msv_driver";
		typicalCargo[] = {"rhs_msv_driver"};
		editorSubcategory = "rhs_EdSubcat_artillery";

		displayName="$STR_RHS_BM21_NAME";
		AUTHOR_MACRO_BIS_PORT
		transportSoldier=1;
		model="\rhsafrf\addons\rhs_a2port_car\Ural\bm21.p3d";
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_BM21_CA.paa";
		mapsize = 8;

		gunnerCompartments			= "Compartment2";
		unitInfoType				= RscUnitInfoArtillery;
		availableforsupporttypes[]	= {"Artillery"};
		artilleryscanner			= 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding				= 1;
				body					= "mainTurret";
				gun						= "mainGun";
				minElev					= 0;
				maxElev					= 65;
				initElev				= 11.5;
				weapons[]				= {};
				magazines[]				= {};
				gunnerAction			= "passenger_apc_narrow_generic03still";
				gunnerOpticsModel		= "";
				gunnergetInAction		= "GetInHigh";
				gunnergetOutAction		= "GetOutHigh";
				stabilizedInAxes		= StabilizedInAxesNone;
				outGunnerMayFire		= 1;
				turretInfoType			= "RscWeaponRangeArtilleryAuto";
				usePiP					= 1;
				inGunnerMayFire			= 1;
				gunnerForceOptics		= 0;
				gunnerOutForceOptics	= 0;
				startEngine = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
				//oh you funny bis, it's in meters per second!
				lockWhenVehicleSpeed = 1;
				elevationMode = 3;
				class Hitpoints
				{
					class HitLauncher 	{isGun = 1;		armor = -80;	explosionShielding = 0.25; passThrough = 0.20; minimalHit = 0.01;	radius = 0.07; name = "Hit_Launcher";	armorComponent = "Hit_Launcher";visual = "Vis_Launcher";};
					class HitTurret		{isTurret = 1;	armor = -80;	explosionShielding = 0.25; passThrough = 0.20; minimalHit = 0.01;	radius = 0.07; name = "Hit_Turret";		armorComponent = "Hit_Turret";visual = "Vis_Turret";};
				};
			};
		};
		class Components: Components
		{
			#include "dynamicLoadout_BM21.hpp"
		};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
			};
			class Camo : standard
			{
				displayName="3-Color Camo";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_rus_co.paa"
				};
			};
			class Camo1 : standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_chdkz_co.paa"
				};
			};
			class Camo2 : standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_cdf_co.paa"
				};
			};
			class Camo4 : standard
			{
				displayName="Takistan";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_tka_co.paa"
				};
			};
			class rhs_sand : standard
			{
				displayName="Sand";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
					"rhsafrf\addons\rhs_a2port_car_camo\data\ural_bm21_sand_co.paa"
				};
			};
		};
		textureList[]=
		{
		};
	};
	class RHS_BM21_VDV_01: RHS_BM21_MSV_01
	{
		EdPrev(rhs_BM21_VDV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_BM21_VMF_01: RHS_BM21_MSV_01
	{
		EdPrev(rhs_BM21_VMF_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		AUTHOR_MACRO_BIS_PORT
	};
	class RHS_BM21_VV_01: RHS_BM21_MSV_01
	{
		EdPrev(rhs_BM21_VV_01)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT
	};
	/* class RHS_Ural_Ammo_MSV_01: RHS_Ural_Support_MSV_Base_01
	{
		EdPrev(rhs_Ural_Ammo_MSV_01)
		scope=2;
		displayName="Ural-4320 Ammo";
		model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_reammo.p3d";

		transportammo = 2000;
	}; */

	class RHS_Ural_Zu23_Base:  RHS_Ural_BaseTurret
	{

		//displayName="Ural-4320 (Zu-23-2)";
		displayName="$STR_RHS_URAL4320_ZU23_NAME";
		model="\rhsafrf\addons\rhs_a2port_car\Ural\ural_zu23.p3d";
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_zu23_CA.paa";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_zu23_pic_ca.paa";
		mapsize = 8;
		unitInfoType = "RscUnitInfo";
		hideProxyInCombat = 1;
		forceHideDriver = 1;
		threat[] = {0.6,0.1,0.6};
		transportSoldier=2;
		cargoProxyIndexes[] = {1,2};
		getInProxyOrder[] = {1,2,3,4};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body		= "mainTurret";
				gun			= "mainGun";
				minTurn		=-180;
				maxTurn		=180;
				initTurn	=0;
				minElev		=-10;
				maxElev		=85;
				initElev	=10;
				maxHorizontalRotSpeed = 0.55;	// 1 = 45*/sec
				maxVerticalRotSpeed = 0.35;		// 1 = 45*/sec
				weapons[]={rhs_weap_2A14};
				magazines[]=
				{
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh,
					rhs_mag_AZP23_100_veh
				};
				gunnerAction			= "RHS_Zu23_Gunner";
				gunnerInAction			= "RHS_Zu23_Gunner";
				gunnerGetInAction		= "GetInHemttBack";
				gunnerGetOutAction		= "GetOutHighZamak";
				gunnerLeftHandAnimName	= handle_elev_hand;
				gunnerRightHandAnimName	= handle_trav_hand;
				gunnerLeftLegAnimName	= otocVez;
				gunnerRightLegAnimName	= otocVez;
				animationSourceStickX	= MainTurret_Inertia;
				animationSourceStickY	= MainGun_Inertia;
				ViewGunnerInExternal = 1;
				selectionFireAnim = "zasleh";
				gunnerCompartments = "Compartment2";
				gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope";
				soundServo[]			= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret", 2.4, 1.0,30};
				soundServoVertical[]	= {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret_elev", 3, 1.0,30};
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				forceHideGunner		= 1;
				outGunnerMayFire	= 1;
				inGunnerMayFire		= 1;
				gunnerForceOptics	= 0;
				allowTabLock		= 0;
				canUseScanner		= 0;
				startEngine			= 0;
				stabilizedInAxes	= 0;
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
				class TurnIn /// limits for gunner turned in
				{
					limitsArrayTop[] = {{85, -180}, {85, 180}};    /// points for the upper curve
					limitsArrayBottom[] = {{-10, -180},{-8, -35.6867}, {9.3683, -32.6867}, {10, 0},{9.7173, 32.6372},{-8, 36.6867}, {-10,134},{-6,134.5},{-6,178},{-10, 180}}; /// points for the lower curve
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
					class Hit_Optic_Collimator		{armor	= -40;explosionShielding = 0;name = "";visual = "vis_optic_TPN4";				armorComponent = "Hit_Optic_ESSA";			passThrough = 0;};
					class Hit_Optic_T3				{armor	= -40;explosionShielding = 0;name = "";visual = "vis_optic_TPN4";				armorComponent = "Hit_Optic_ESSA";			passThrough = 0;};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "vehicle_coshooter_1";
				gunnerInAction = "vehicle_coshooter_1";

				gunnerGetInAction = "GetInHemttBack";
				gunnerGetOutAction = "GetOutHighZamak";

				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Loader";
				primaryObserver = 0;
				dontCreateAI=0;
				commanding = 4;
				gunnerCompartments = "Compartment2";
				proxyIndex = 3;
				maxElev = 45;
				minElev = -15;
				maxTurn = 84;
				minTurn = -65;
				gunnerUsesPilotView = 1;
				memorypointgunneroptics = "";
				selectionFireAnim="";
				isPersonTurret = 1;
				forceHideGunner = 1;

				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				playerPosition = 1;
				commanding = 2;
				primaryObserver = 0;
				gunnerName = "Passenger (front)";
				proxyIndex = 4;
				isPersonTurret = 2;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
				animationSourceHatch = "gunner_rf_turn";
				allowLauncherOut=1;
				canHideGunner = 1;
				forceHideGunner = 0;
				dontCreateAI=1;
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				minElev = -45;
				class TurnIn /// limits for gunner turned in
				{
					limitsArrayTop[] = {{45, -65}, {45, 84}};    /// points for the upper curve
					limitsArrayBottom[] = {{-7, -65},{-7, -45.6867},{-2, -35.6867}, {5, -22.6867},{5, -12.6867},{-3, -8.6867},{-3, 2.6867}, {-7, 14},{4, 44},{4, 64},{-7, 74}}; /// points for the lower curve
				};
				class TurnOut /// limits for gunner turned in
				{
					limitsArrayTop[] = {{45, -180}, {45, 180}};    /// points for the upper curve
					limitsArrayBottom[] = {{-45, -65},{-42, -45.6867}, {-34, -22.6867}, {-12, 12.6867},{-8, 44},{-11, 74},{-25, 84}}; /// points for the lower curve
					turnOffset = -180;
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				isPersonTurret = 1;
				canHideGunner = 0;
				gunnerName = "Passenger (rear)";
				allowLauncherOut=0;
				proxyIndex = 5;
				gunnerAction = "passenger_flatground_2";
				animationSourceHatch = "";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				minTurn = -65;
				class TurnIn /// limits for gunner turned in
				{
					limitsArrayTop[] = {{45, -65}, {45, 84}};    /// points for the upper curve
					limitsArrayBottom[] = {{-4, -65},{-8, -45.6867}, {-15, -22.6867}, {-11, 24},{-12, 84}}; /// points for the lower curve
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="rhs_weap_2A14";
			};
			class fire_anim: muzzle_source {source="revolving";};
			class muzzleHMG_ROT: muzzle_source {source="ammorandom";};
			class Elevation
			{
				source		= "user";
				animPeriod	= 0.1;
				initPhase	= 5;
			};
		};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_tigr\data\glass.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"a3\data_f\glass_veh_int.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",

				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
			};
			class Camo : standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa"
				};
			};
			class Camo1 : standard
			{
				displayName="Takistan";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_tka_co.paa"
				};
			};
			class Camo2 : standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
					"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_chdkz_co.paa"
				};
			};
		};
		textureList[]=
		{
		};
	};


	class RHS_Ural_Zu23_MSV_01: RHS_Ural_Zu23_Base
	{
		EdPrev(rhs_Ural_Zu23_MSV_01)
		scope=2;
		AUTHOR_MACRO_BIS_PORT

		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};

		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_msv";
		crew = "rhs_msv_driver";
		typicalCargo[] = {"rhs_msv_driver"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {
				gunnerType="rhs_msv_rifleman";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="rhs_msv_sergeant"; //someone with binocular recomended
			};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
		};
	};
	class RHS_Ural_Zu23_VDV_01: RHS_Ural_Zu23_Base
	{
		EdPrev(rhs_Ural_Zu23_VDV_01)
		scope=2;
		AUTHOR_MACRO_BIS_PORT

		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};

		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		typicalCargo[] = {"rhs_msv_driver"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {
				gunnerType="rhs_vdv_rifleman";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="rhs_vdv_sergeant"; //someone with binocular recomended
			};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
		};
	};
	class RHS_Ural_Zu23_VMF_01: RHS_Ural_Zu23_Base
	{
		EdPrev(rhs_Ural_Zu23_VDV_01)
		scope=2;
		AUTHOR_MACRO_BIS_PORT

		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};

		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {
				gunnerType="rhs_vmf_flora_rifleman";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="rhs_vmf_flora_sergeant"; //someone with binocular recomended
			};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
		};
	};
	class RHS_Ural_Zu23_VV_01: RHS_Ural_Zu23_Base
	{
		EdPrev(rhs_Ural_Zu23_VDV_01)
		scope=2;
		AUTHOR_MACRO_BIS_PORT

		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'Default']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};

		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_vv";
		crew = "rhs_mvd_izlom_rifleman";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {
				gunnerType="rhs_mvd_izlom_rifleman";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="rhs_mvd_izlom_sergeant"; //someone with binocular recomended
			};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
		};
	};

	#include "civ.hpp"