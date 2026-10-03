
	class RHS_UAZ_Base: Offroad_01_base_F
	{
		dlc = "RHS_AFRF";
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};

		category = "Car";
		insideSoundCoef = 0.2;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		model="\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ.p3d";
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_uaz_ca.paa";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_uaz_pic_ca.paa";
		mapsize=4;
		displayName="$STR_RHS_UAZ469_NAME";
		tf_hasLRradio_api = 0;

		hiddenSelections[]=
		{
			"camo1",
			"camo2g",
			"n1",				// 2 - 4 number system
			"n2",
			"n3",
			"n4",
			"i1",				// 6 - right army
			"i2",				// 7 - left army
			"i3",				// 8 - right platoon
			"i4"				// 9 - left platoon
		};

		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_msv,rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
			};
			class Camo : standard
			{
				displayName="Camo";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"
				};
			};
			class Camo1 : standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"
				};
			};
			class Camo2 : standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_002_co.paa"
				};
			};
			class Camo3 : standard
			{
				displayName="Civil";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_civil_co.paa"
				};
			};
			class Camo4 : standard
			{
				displayName="UN";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_un_co.paa"
				};
			};
		};
		textureList[]= {};
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
				expression = "if(_value >= 0)then{[_this,[['Number', cDecals4CarsNumberPlaces, _this getVariable ['rhs_decalNumber_type','LicensePlate'], _value]]] call rhs_fnc_decalsInit};";
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
			class Door_LB: Door_LF {
				displayName = "Open left back door";
				property = "Door_LB";
			};
			class Door_RB: Door_LF {
				displayName = "Open right back door";
				property = "Door_RB";
			};
		};

		driverAction="RHS_UAZ_driver";
		driverInAction="RHS_UAZ_driver";
		hideProxyInCombat = 0;
		attenuationEffectType = "RHS_CarAttenuation";
		//attenuationEffectType="CarAttenuation";


		cost=50000;
		transportMaxBackpacks=6;
		transportSoldier=6;

		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="shift";
		driverRightLegAnimName = "pedalR";
		driverLeftLegAnimName = "pedalL";

		soundAttenuationCargo[]={1};

		vehicleClass = rhs_vehclass_car;
		editorSubcategory = "rhs_EdSubcat_car";

		#include "sounds.hpp"
		class Turrets: Turrets
		{
		};


		memoryPointsGetInCargo[] = {"pos codriver","pos cargo 2","pos cargo 2","pos cargo 1"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir 2","pos cargo dir 2","pos cargo dir 1"};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_LB",
			"Door_LB",
			"Door_RB"
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		class AnimationSources
		{
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
			class HitLFWheel {
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel : HitLFWheel {
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel : HitLFWheel {
				hitpoint = "HitLF2Wheel";
			};
			class HitRBWheel : HitLFWheel {
				hitpoint = "HitRF2Wheel";
			};
			class HitLF2Wheel : HitLFWheel {
				hitpoint = "HitLBWheel";
			};
			class HitRF2Wheel : HitLFWheel {
				hitpoint = "HitRBWheel";
			};
			class HitLMWheel : HitLFWheel {
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel : HitLFWheel {
				hitpoint = "HitRMWheel";
			};
			class HitSpare : HitLFWheel {
				hitpoint = "HitSpare";
			};
			class UseSpare : HitLFWheel {
				hitpoint = "UseSpare";
			};
			class HitGlass1 {
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1 {hitpoint="HitGlass2";};
			class HitGlass3: HitGlass1 {hitpoint="HitGlass3";};
			class HitGlass4: HitGlass1 {hitpoint="HitGlass4";};
			class HitGlass5: HitGlass1 {hitpoint="HitGlass5";};
			class HitGlass6: HitGlass1 {hitpoint="HitGlass6";};

			class HitDoor_1_1 : HitGlass1 { hitpoint = "HitDoor_1_1"; };
			class HitDoor_1_2 : HitGlass1 { hitpoint = "HitDoor_1_2"; };
			class HitDoor_2_1 : HitGlass1 { hitpoint = "HitDoor_2_1"; };
			class HitDoor_2_2 : HitGlass1 { hitpoint = "HitDoor_2_2"; };

			class HitHood : HitGlass1 { hitpoint = "HitHood"; };

			class Door_LF
			{
				source="door";
				animPeriod=0.8;
				sound = "RHS_UAZ_Door";
				soundPosition = "osa_dvere_lp";
				//sound = "GenericDoorsSound";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "osa_dvere_pp";
			};
			class Door_LB: Door_LF
			{
				soundPosition = "osa_dvere_lz";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "osa_dvere_pz";
			};
			class gearbox: Door_LF
			{
				sound = "RHS_gearbox";
				soundPosition = "gear_axis";
			};
			class wiper
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class spare_hide: wiper
			{
				mass=1;
				animPeriod = 0.00000000001;
				displayName="hide spare wheel";
			};
			class light_hide: spare_hide
			{
				displayName="hide light covers";
				onPhaseChanged="(_this select 0) animateSource ['light_hide',(_this select 1),true];";
			};
			class wipers : Door_LF
			{
				animPeriod = 1;
				sound = "RHS_Wipers";
				soundPosition = "wiper_1_axis";
			};
		};

		armor					= 52;
		minTotalDamageThreshold	= 0.21;
		wheelDamageRadiusCoef	= 0.9;
		wheelDestroyRadiusCoef	= 0.4;
		crewCrashProtection		= 0.25;
		fuelExplosionPower		= 0.1;
		class HitPoints: HitPoints
		{
			#define UAZ_WHEEL_HIT		\
				radius		= 0.15;		\
				armor		= 0.175;	\
				passThrough	= 0.3;

			class HitLFWheel: HitLFWheel
			{
				UAZ_WHEEL_HIT
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				UAZ_WHEEL_HIT
			};
			class HitRFWheel: HitRFWheel
			{
				UAZ_WHEEL_HIT
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				UAZ_WHEEL_HIT
			};
			class HitSpare : HitRF2Wheel
			{
				name = "spare1";
				visual = "-";
			};
			class UseSpare : HitSpare
			{
				name = "";
				visual = "-";
				armor = 1;
			};
			class HitLightL
			{
				armor=0.02;
				minimalHit = 0.1;
				material=-1;
				name="L svetlo";
				visual="-";
				passThrough=0.0;
				radius = 0.1;
			};
			class HitLightR: HitLightL 		{name="P svetlo";};
			class HitSearchlight: HitLightL {name="searchlight";};
			class HitHull
			{
				armor		= 0.5;
				material	= -1;
				name		= "hull";
				visual		= "-";
				passThrough	= 0.2;
				radius		= 0.1;
			};
			class HitFuel
			{
				armor			= 0.5;
				material		= -1;
				name			= Hit_Fuel;
				visual			= "-";
				passThrough		= 0.2;
				radius			= 0.1;
			};
			class HitEngine
			{
				armor			= 0.5;
				material		= -1;
				name			= Hit_Engine;
				armorComponent	= Hit_Engine;
				visual			= zbytek;
				passThrough		= 0.2;
				radius			= 0.16;
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
				name="karoserie";
				visual="camo1";
				passThrough=1;
				radius = 0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor	= 0.1;
				radius	= 0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor	= 0.05;
				radius	= 0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor	= 0.05;
				radius	= 0.2;
			};
			class HitGlass4: HitGlass4
			{
				visual	= "glass4";
				armor	= 0.05;
				radius	= 0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor	= 0.05;
				radius	= 0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor	= 0.05;
				radius	= 0.2;
			};
			class HitDoor_1_1
			{
				armor = 0.2;
				minimalHit = 0.075;
				material = -1;
				name = "door11";
				visual = "-";
				//visual = "door_1_1";
				passThrough = 0.1;
				radius = 0.17;
				explosionShielding = 0.5;
			};
			class HitDoor_1_2 : HitDoor_1_1
			{
				name = "door12";
				//visual = "door_1_2";
			};
			class HitDoor_2_1 : HitDoor_1_1
			{
				name = "door21";
				//visual = "door_2_1";
			};
			class HitDoor_2_2 : HitDoor_1_1
			{
				name = "door22";
				//visual = "door_2_2";
			};
			class Hithood : HitDoor_1_1
			{
				armor = 0.3;
				name = "hood1";
				//visual = "hood";
			};
		};
		cargoaction[] = {"RHS_UAZ_Cargo01", "RHS_UAZ_Cargo01", "RHS_UAZ_Cargo01", "RHS_UAZ_Cargo01", "RHS_UAZ_Cargo01", "RHS_UAZ_Cargo02"};
		getInAction="GetInOffroad";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			//"chopperLight_C_Rin_H","chopperLight_C_Rin_H",
			//"chopperLight_C_Lin_H","chopperLight_C_Lin_H",
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memoryPointTrackFLL="TrackFLL";
		memoryPointTrackFLR="TrackFLR";
		memoryPointTrackBLL="TrackBLL";
		memoryPointTrackBLR="TrackBLR";
		memoryPointTrackFRL="TrackFRL";
		memoryPointTrackFRR="TrackFRR";
		memoryPointTrackBRL="TrackBRL";
		memoryPointTrackBRR="TrackBRR";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_skla.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_skla_in.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\data\drziaky.rvmat",
				"rhsafrf\addons\rhs_a2port_car\data\drziaky.rvmat",
				"rhsafrf\addons\rhs_a2port_car\data\drziaky_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_mount.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_mount_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_mount_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\rhs_uaz_wheels.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\rhs_uaz_wheels_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\UAZ\Data\rhs_uaz_wheels_damage.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectOffroad";
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
				hitPointClass = "HitLightL";
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
				hitPointClass = "HitLightR";
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
				hitPointClass = "HitSearchlight";
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
				hitPointClass = "HitLightL";
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
				hitPointClass = "HitLightR";
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
					renderQuality=1;
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
					renderQuality=1;
					renderVisionMode=4;
					fov=0.7;
				};
				PIP_BB(2)
			};
			class BackMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="m3p";
					pointDirection="m3d";
					renderQuality=0;
					renderVisionMode=4;
					fov=0.7;
				};
				PIP_BB(3)
			};
		};

		class UserActions
		{
			class wiperson
			{
				displayName=$STR_RHS_WIPERSON;
				position="";
				radius = 2;
				priority = 1.5;
				showWindow = 0;
				onlyForplayer = 1;
				condition = "(player == driver this) AND isengineon (this) AND this animationPhase 'wipers' < 0.5";
				statement = "[this,0] spawn rhs_fnc_wipers";
			};
			class wipersoff: wiperson
			{
				displayName=$STR_RHS_WIPERSOFF;
				condition = "(player == driver this) AND this animationPhase 'wipers' > 0.5";
				statement = "[this,1] spawn rhs_fnc_wipers";
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
				condition = "((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this)";
				statement = "[this,2] call rhs_fnc_carLightToggle";
			};
			class searchlight_toggle: lights_toggle
			{
				shortcut = "lockTarget";
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
				rhs_maxCargoMass		= 800;
				rhs_attachPoint			= "";
				rhs_attachPointPos[]	= {0,-1.85,-0.55};
			};
		};

		#include "PsyhX_UAZ.hpp"
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_a2port_car_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
				engine = "if(_this select 1)then{_this call RHS_fnc_gearSound};_this call rhs_fnc_engineCheckDamage;";
				dammaged = "_this call rhs_fnc_wheelDamaged";
			};
		};
	};
	//AAF side vehicles for testing
	//#include "testVehicles.hpp"

	class rhs_uaz_open_Base: RHS_UAZ_Base
	{
		EdPrev(rhs_uaz_open_Base)
		model="\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ_open.p3d";
		picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_uaz_open_pic_ca.paa";
		displayName="$STR_RHS_UAZ469OPEN_NAME";
		attenuationEffectType="OpenCarAttenuation";
		insideSoundCoef = 0.1;
		//open vehicle rain sound needed
		transportSoldier=1;
		memoryPointsGetInCargo[] = {"pos cargo 1"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir 1"};
		cargoDoors[]=
		{
			"Door_RB"
		};

		showNVGGunner = 1;
		showNVGDriver = 1;
		showNVGCargo[] = {1};
		cargoProxyIndexes[] = {5};
		getInProxyOrder[] = {1,2,3,4,5,6};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = "Passenger (Back Left Seat)";
				gunnerCompartments = "Compartment2";
				LODTurnedIn = 1200;
				LODTurnedOut = 1200;
				proxyIndex = 3;
				maxElev = 45;
				minElev = -35;
				maxTurn = 10;
				minTurn = -105;
				isPersonTurret = 1;
				gunnerUsesPilotView = 0;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {-105,-40};
				};
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Back Right Seat)";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				proxyIndex = 6;
				maxTurn = 105;
				minTurn = -10;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {40,105};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Passenger (Front Right Seat)";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				proxyIndex = 1;
				gunnerDoor="Door_RF";
				maxTurn = -41;
				minTurn = -95;
				class dynamicViewLimits {};
			};
			class CargoTurret_04: CargoTurret_01
			{
				memoryPointsGetInGunner = "pos cargo 2";
				memoryPointsGetInGunnerDir = "pos cargo dir 2";
				gunnerName = "Passenger (Left Seat)";
				proxyIndex = 2;
				gunnerDoor="Door_LB";
				maxTurn = 95;
				minTurn = 18;
				class dynamicViewLimits {};
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerName = "Passenger (Right Seat)";
				memoryPointsGetInGunner = "pos cargo 1";
				memoryPointsGetInGunnerDir = "pos cargo dir 1";
				proxyIndex = 4;
				gunnerDoor="Door_RB";
				maxTurn = -11;
				minTurn = -95;
				class dynamicViewLimits {};
			};
		};


	};

	class RHS_UAZ_DShKM_Base: RHS_UAZ_Base
	{
		EdPrev(rhs_UAZ_DShKM_Base)
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};
		textSingular = "alpha victor (MRAP)";
		textPlural = "alpha victors";
		nameSound = "veh_vehicle_armedcar_s";

		//displayName="$STR_RHS_UAZ469OPEN_NAME";
		displayName="UAZ-3151 (DShKM)";
		model="\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ_mg.p3d";

		attenuationEffectType="OpenCarAttenuation";
		insideSoundCoef = 0.1;
		threat[] = {0.9, 0.3, 0.1};
		Icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_Uaz_mg_CA.paa";

		transportSoldier=0;
		cargoProxyIndexes[] = {};
		getInProxyOrder[] = {1};
		memoryPointsGetInCargo[] = {};
		memoryPointsGetInCargoDir[] = {};
		cargoDoors[]={};

		showNVGGunner = 1;
		showNVGDriver = 1;
		showNVGCargo[] = {1};
		unitInfoType = "RscUnitInfo";

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
			"i4"				// 9 - left platoon
		};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa",
			"rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_mount_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vmf, rhs_faction_vdv,rhs_faction_vdv,rhs_faction_vv
				};
			};
			class Camo : standard
			{
				displayName="Camo";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa"
				};
			};
			class Camo1 : standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"
				};
			};
			class Camo2 : standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_002_co.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_002_co.paa"
				};
			};
			class Camo4 : standard
			{
				displayName="UN";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_un_co.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa"
				};
			};
		};
		textureList[]=
		{
		};

		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";

				animationSourceStickX		= MainTurret_Inertia;
				animationSourceStickY		= MainGun_Inertia;
				gunnerLeftHandAnimName		= otochlaven_shake;
				gunnerRightHandAnimName		= otochlaven_shake;
				gunnerLeftLegAnimName		= leg_left;
				gunnerRightLegAnimName		= leg_right;
				memoryPointsGetInGunner		= "pos gunner";
				memoryPointsGetInGunnerDir	= "pos gunner dir";
				usePip = 2;
				outGunnerMayFire = 1;
				forceHideGunner = 0;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerForceOptics = 0;
				turretInfoType="RHS_RscWeaponZeroing";
				discreteDistance[]={100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				weapons[]={rhs_weap_DSHKM};
				magazines[]=
				{
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50"
				};
				gunnerAction = "RHS_UAZ_Gunner01";
				gunnerInAction = "RHS_UAZ_Gunner01";
				selectionFireAnim = "zasleh";
				ejectDeadGunner = 1;
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 1;

				minElev = -25;
				maxElev = 60;

				stabilizedInAxes = 0;
				class ViewGunner
				{
					initAngleX=5; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.35; maxFov=1;
				};
				class OpticsIn
				{
					class Sight : ViewOptics
					{
						gunnerOpticsModel = \A3\weapons_f\reticle\optics_empty;
						initFov=0.7; minFov=0.35; maxFov=0.7; // FOV 28 deg
					};
				};
				class Hitpoints
				{
					class HitTurret
					{
						armor				= -40;
						material			= -1;
						name				= Hit_Turret;
						armorComponent 		= Hit_Turret;
						visual				= "vez";
						passThrough			= 0;
						minimalHit			= 0.01;
						explosionShielding	= 0.009;
						radius				= 0.15;
					};
					class HitGun
					{
						armor				= -30;
						material			= -1;
						name				= Hit_Gun;
						armorComponent 		= Hit_Gun;
						visual				= "-";
						passThrough			= 0;
						minimalHit			= 0.01;
						explosionShielding	= 0.001;
						radius				= 0.12;
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";

				gunnerName = "Passenger (Front Right Seat)";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				proxyIndex = 1;
				gunnerDoor="Door_RF";
				maxTurn = 55;
				minTurn = -95;
				selectionFireAnim = "";

				LODTurnedIn = 1200;
				LODTurnedOut = 1200;
				maxElev = 45;
				minElev = -35;
				isPersonTurret = 1;
				gunnerUsesPilotView = 0;
				class dynamicViewLimits
				{
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "rhs_weap_DSHKM";
			};
			class ReloadMagazine: ReloadAnim
			{
				source = "reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source = "revolving";
			};
			class muzzle_rot_MG: ReloadAnim
			{
				source = "ammorandom";
			};
		};
		class RenderTargets {};
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
				statement = "[this,2] call rhs_fnc_carLightToggle";
			};
			class searchlight_toggle: lights_toggle
			{
				shortcut = "lockTarget";
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

	};
	class RHS_UAZ_AGS30_Base: RHS_UAZ_DShKM_Base
	{
		EdPrev(rhs_UAZ_AGS30_Base)
		displayName="UAZ-3151 (AGS-30)";
		model="\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ_ags.p3d";

		attenuationEffectType="OpenCarAttenuation";
		insideSoundCoef = 0.1;
		threat[] = {0.9, 0.3, 0.1};
		Icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_Uaz_gl_CA.paa";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="otochlaven";
				gunnerRightHandAnimName="otochlaven";
				gunnerLeftLegAnimName="leg_left";
				gunnerRightLegAnimName="leg_right";
				discreteDistance[]={};
				discreteDistanceInitIndex=0;
				gunnerOpticsModel = \rhsafrf\addons\rhs_heavyweapons\data\optika_AGS30;

				weapons[]={RHS_weap_AGS30};
				magazines[]=
				{
					RHS_mag_VOG30_30,
					RHS_mag_VOG30_30,
					RHS_mag_VOG30_30,
					RHS_mag_VOG30_30,
					RHS_mag_VOG30_30,
					RHS_mag_VOG30_30
				};
				gunnerAction = "RHS_UAZ_Gunner02";
				gunnerInAction = "RHS_UAZ_Gunner02";

				class OpticsIn
				{
					class Sight : ViewOptics
					{
						gunnerOpticsModel = \rhsafrf\addons\rhs_heavyweapons\data\optika_AGS30;
						initFov=0.250; minFov=0.250; maxFov=0.250; // FOV 28 deg
					};
				};
			};
			class CargoTurret_01: CargoTurret_01 {};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "RHS_weap_AGS30";
			};
			class muzzle_rot_MG: ReloadMagazine
			{
				source = "ammorandom";
			};
		};
	};

	class RHS_UAZ_SPG9_Base: RHS_UAZ_DShKM_Base
	{
		EdPrev(rhs_UAZ_SPG9_Base)
		displayName="UAZ-3151 (SPG-9)";
		model="\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ_spg9.p3d";

		threat[] = {0.9, 0.6, 0.1};
		Icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_Uaz_spg9_CA.paa";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				discreteDistance[]={};
				discreteDistanceInitIndex=0;

				weapons[]={rhs_weap_SPG9};
				magazines[]=
				{
					rhs_mag_OG9V,
					rhs_mag_OG9V,rhs_mag_OG9V,rhs_mag_OG9V,rhs_mag_OG9V,rhs_mag_OG9V,rhs_mag_OG9V,
					rhs_mag_PG9V,rhs_mag_PG9V,rhs_mag_PG9V,rhs_mag_PG9V,rhs_mag_PG9V,rhs_mag_PG9V
				};
				gunnerAction = "RHS_UAZ_Gunner03";
				gunnerInAction = "RHS_UAZ_Gunner03";

				minElev=-10; maxElev=+30; initElev=0;
				class ViewGunner
				{
					initAngleX=5; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				class OpticsIn
				{
					class Sight : ViewOptics
					{
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgo9_scope";
						initFov=0.111; minFov=0.111; maxFov=0.111; // 4.2x zoom
					};
				};
			};
			class CargoTurret_01: CargoTurret_01 {};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reloadmagazine";
				weapon = "rhs_weap_SPG9";
			};
		};
	};



	class RHS_UAZ_MSV_Base: RHS_UAZ_Base
	{
		EdPrev(rhs_UAZ_MSV_Base)
		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_msv";
		crew = "rhs_msv_driver";
		typicalCargo[] = {"rhs_msv_driver"};
	};
	class rhs_uaz_open_MSV_Base: rhs_uaz_open_Base
	{
		EdPrev(rhs_uaz_open_MSV_Base)
		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_msv";
		crew = "rhs_msv_driver";
		typicalCargo[] = {"rhs_msv_driver"};
	};

	class RHS_UAZ_MSV_01: RHS_UAZ_MSV_Base
	{
		EdPrev(rhs_UAZ_MSV_01)
		scope=2;
		//displayName="UAZ-469";
		AUTHOR_MACRO_BIS_PORT
	};

	class rhs_uaz_vdv: RHS_UAZ_MSV_01
	{
		EdPrev(rhs_uaz_vdv)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};

	class rhs_uaz_vmf: RHS_UAZ_MSV_01
	{
		EdPrev(rhs_uaz_vmf)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		AUTHOR_MACRO_BIS_PORT
	};

	class rhs_uaz_vv: RHS_UAZ_MSV_01
	{
		EdPrev(rhs_uaz_vv)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT
	};



	class rhs_uaz_open_MSV_01: rhs_uaz_open_MSV_Base
	{
		EdPrev(rhs_uaz_open_MSV_01)
		scope=2;
		AUTHOR_MACRO_BIS_PORT
	};

	class rhs_uaz_open_vdv: rhs_uaz_open_MSV_01
	{
		EdPrev(rhs_uaz_open_vdv)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		faction="rhs_faction_vdv";
		crew = "rhs_vdv_driver";
		AUTHOR_MACRO_BIS_PORT
	};

	class rhs_uaz_open_vmf: rhs_uaz_open_MSV_01
	{
		EdPrev(rhs_uaz_open_vmf)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		faction="rhs_faction_vmf";
		crew = "rhs_vmf_flora_driver";
		AUTHOR_MACRO_BIS_PORT
	};

	class rhs_uaz_open_vv: rhs_uaz_open_MSV_01
	{
		EdPrev(rhs_uaz_open_vv)
		rhs_decalParameters[]={
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",  // Set number (random)
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT
	};