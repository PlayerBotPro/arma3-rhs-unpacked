
	class RHS_su25_base: O_Plane_CAS_02_F
	{
		dlc = "RHS_AFRF";
		rhs_decalParameters[]={
			"['Number',cRHSAIRSU25NumberPlaces,'AviaRed']",  // Set number (random)
			"['Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt']",
			"['Label', cRHSAIRSU25SidePlaces, 'Su25Ex']"
		};
		//Target params definitions
		irTarget			= 1;
		irTargetSize		= 1;
		visualTarget		= 1;
		visualTargetSize	= 0.9;
		radarTarget			= 1;
		radarTargetSize		= 1;

		LESH_canBeTowed			= 1;
		LESH_towFromFront		= 1;
		LESH_AxisOffsetTarget[]	= {0,6.8,-2.04};
		LESH_WheelOffset[]		= {0,-0.7};

		category = "Air";
		crew = "rhs_pilot";
		typicalCargo[] = {"rhs_pilot"};

		scope=0;
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		model					= "\rhsafrf\addons\rhs_a2port_air\su25\su25";
		picture					= "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_su25sm_pic_ca.paa";
		icon					= "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_su25.paa";
		mapSize					= 20;
		textSingular			= "Su25";
		displayname				= "$STR_RHS_SU25_Name";
		driverAction			= "rhs_su25_pilot";
		driverLeftHandAnimName	= "lever_pilot";
		driverRightHandAnimName	= "stick_pilot";
		driverLeftLegAnimName	= "pedal_L";
		driverRightLegAnimName	= "pedal_R";

		memoryPointsGetInDriver			= "pos driver";
		memoryPointsGetInDriverDir		= "pos driver dir";
		memoryPointsGetInDriverPrecise	= "pos driver";
		unitInfoType					= "RHS_RscUnitInfoAir_Su25";
		driverWeaponsInfoType			= "RHS_RscOptics_Su25_KlenPS";

		HeadAimDown					= 6;
		headGforceLeaningFactor[]	= {0.005,0.001,0.015};
		camShakeCoef				= 0.7;
		driverCanSee				= 2+4+8+16;
		//canUseScanners			= 0;
		allowTabLock				= 0;
		driverCanEject				= 1;
		driverCompartments			= 1;
		class EjectionSystem {};
		ejectDamageLimit			= 1;

		memoryPointDriverOptics = "pilotCamera";
		class PilotCamera //targeting pod
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName	= "WFOV";
					initAngleX=0; minAngleX=0; maxAngleX=0;
					initAngleY=0; minAngleY=0; maxAngleY=0;
					initFov				= A3_FOV_DEG(10);
					minFov				= A3_FOV_DEG(60);
					maxFov				= A3_FOV_DEG(60);
					directionStabilized	= 1;
					visionMode[]		= {"Normal"};
					//gunneropticsmodel="rhsafrf\addons\rhs_a2port_air\mi35\rhs_sight_9s475_x3";
					gunneropticsmodel = "";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
			};

			minTurn					= -12;
			maxTurn					= +12;
			initTurn				= 0;
			minElev					= -6;
			maxElev					= 16;
			initElev				= 0;
			maxXRotSpeed			= 1.0;
			maxYRotSpeed			= 1.0;
			maxMouseXRotSpeed		= 0.5;
			maxMouseYRotSpeed		= 0.5;
			pilotOpticsShowCursor	= 1;
			controllable			= true;
		};

		class ViewPilot: ViewPilot
		{
			initAngleX = -0.0;
		};
		weapons[]=
		{
			"rhs_weap_MASTERSAFE",
			"rhs_weap_klen_ps",
			"rhs_weap_GSh302"
		};
		magazines[]=
		{
			"rhs_lasermag",
			"rhs_mag_gsh30_bt_250"
		};
		weaponsGroup1		= 128;
		weaponsGroup4		= 64;
		memoryPointGun[]	= {"kulomet","kulomet2"};
		gunBeg[]			= {"muzzle_1","muzzle_2"};
		gunEnd[]			= {"chamber_1","chamber_2"};
		selectionFireAnim	= "zasleh";
		memoryPointLDust	= "levy prach";
		memoryPointRDust	= "pravy prach";

		memoryPointLRocket	= "rocket_1";
		memoryPointRRocket	= "rocket_2";
		memoryPointLMissile	= "missile_1";
		memoryPointRMissile	= "missile_2";
		memorypointcm[]		= {"flare_launcher1", "flare_launcher2"};
		memorypointcmdir[]	= {"flare_launcher1_dir", "flare_launcher2_dir"};

		selectionDamage		= "trup";
		selectionShowDamage	= "poskozeni";

		armor					= 60;
		damageResistance		= 0.0048;
		armorStructural			= 2;
		epeImpulseDamageCoef	= 1;
		class Hitpoints
		{
			class HitHull 			{armor = 999;	explosionShielding = 0.00; passThrough = 0.01; minimalHit = 1.00;	radius = 0.15; material = -1; name = "hit_hull";			visual = "-";				depends = "Total";  								};
			class HitAvionics 		{armor = 1.00;	explosionShielding = 0.60; passThrough = 0.05; minimalHit = 0.10;	radius = 0.08; material = -1; name = "hit_avionics";		visual = "vis_avionics";	depends = "0";  									};
			class HitEngine 		{armor = 1.00;	explosionShielding = 0.25; passThrough = 0.20; minimalHit = 0.01;	radius = 0.07; material = -1; name = "hit_engine_l";		visual = "vis_engine_l";	depends = "0";  									};
			class HitEngine2 		{armor = 1.00;	explosionShielding = 0.25; passThrough = 0.20; minimalHit = 0.01;	radius = 0.07; material = -1; name = "hit_engine_r";		visual = "vis_engine_r";	depends = "0"; 										};
			class HitFuel 			{armor = 1.40;	explosionShielding = 0.20; passThrough = 0.10; minimalHit = 0.10;	radius = 0.10; material = -1; name = "hit_fuel";			visual = "vis_fuel";		depends = "0";  									};
			class HitFuel_left 		{armor = 1.00;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.10; material = -1; name = "hit_fuel_wing_l";		visual = "vis_wing_l";		depends = "0";  									};
			class HitFuel_right 	{armor = 1.00;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.10; material = -1; name = "hit_fuel_wing_r";		visual = "vis_wing_r";		depends = "0";  									};
			class HitFuel2 			{armor = 999;	explosionShielding = 0.00; passThrough = 0.10; minimalHit = 1.00;	radius = 0.01; material = -1; name = "hit_fuel";			visual = "ind_fuel_r";		depends = "(HitFuel_left+HitFuel_right)*0.5";  		};
			class HitLAileron_link 	{armor = 0.60;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_aileron_link_l";	visual = "-";				depends = "0";  									};
			class HitRAileron_link 	{armor = 0.60;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_aileron_link_r";	visual = "-";				depends = "0";  									};
			class HitLAileron 		{armor = 0.60;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; material = -1; name = "hit_aileron_l";		visual = "vis_wing_l";		depends = "HitLAileron_link*0.7";  					};
			class HitRAileron 		{armor = 0.60;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; material = -1; name = "hit_aileron_r";		visual = "vis_wing_r";		depends = "HitRAileron_link*0.7"; 					};
			class HitControlRear	{armor = 0.60;	explosionShielding = 0.10; passThrough = 0.10; minimalHit = 0.10;	radius = 0.04; material = -1; name = "hit_control_rear";	visual = "-";				depends = "0";  									};
			class HitLCElevator 	{armor = 0.60;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_elevator_l";		visual = "vis_elevator_l";	depends = "HitControlRear";							};
			class HitRElevator 		{armor = 0.60;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_elevator_r";		visual = "vis_elevator_r";	depends = "HitControlRear";							};
			class HitLCRudder 		{armor = 0.60;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_rudder";			visual = "vis_rudder";		depends = "HitControlRear";							};
			class HitGlass1 		{armor = 0.50;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.30; material = -1; name = "glass1";				visual = "glass1";			depends = "0";  									};
			class HitGlass2 		{armor = 0.50;	explosionShielding = 0.60; passThrough = 0.10; minimalHit = 0.10;	radius = 0.30; material = -1; name = "glass2";				visual = "glass2";			depends = "0";  									};
			class Ind_Fire1 		{armor = 999;	explosionShielding = 0.00; passThrough = 0.00; minimalHit = 1.00;	radius = 0.01; material = -1; name = "hit_fuel";			visual = "ind_fire";		depends = "HitEngine*0.5";  						};
			class Ind_Fire2 		{armor = 999;	explosionShielding = 0.00; passThrough = 0.00; minimalHit = 1.00;	radius = 0.01; material = -1; name = "hit_fuel";			visual = "ind_fire";		depends = "HitEngine2*0.5";  						};
			class Ind_Hydr_L 		{armor = 999;	explosionShielding = 0.00; passThrough = 0.00; minimalHit = 1.00;	radius = 0.01; material = -1; name = "hit_fuel";			visual = "ind_hydr_l";		depends = "(HitLAileron+HitLCElevator+HitLCRudder)*0.5"; };
			class Ind_Hydr_R 		{armor = 999;	explosionShielding = 0.00; passThrough = 0.00; minimalHit = 1.00;	radius = 0.01; material = -1; name = "hit_fuel";			visual = "ind_hydr_r";		depends = "(HitRAileron+HitRElevator)*0.5"; };
			HP_PYLON(1,0.75)
			HP_PYLON(2,0.75)
			HP_PYLON(3,0.75)
			HP_PYLON(4,0.75)
			HP_PYLON(5,0.75)
			HP_PYLON(6,0.75)
			HP_PYLON(7,0.75)
			HP_PYLON(8,0.75)
			HP_PYLON(9,0.75)
			HP_PYLON(10,0.75)
		};

		vehicleClass = "rhs_vehclass_aircraft";

		incomingMissileDetectionSystem	= 8;
		lockDetectionSystem				= 8;

		hiddenselections[] = {"camo1", "camo2","n1","n2","i1","i2","tail_decals"};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_rus_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_rus_co.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Blue";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_alt_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_alt_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vvs
				};
			};
			class standard2: standard
			{
				displayName="Grey";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_co.paa"
				};
			};
			class Camo: standard
			{
				displayName="Camo #1";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_rus_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_rus_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vvs_c
				};
			};
			class Camo1: Camo
			{
				displayName="Camo #2";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body1_camo1_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body2_camo1_co.paa"
				};
			};
			class Camo2: standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_cdf_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_cdf_co.paa"
				};
			};
		};
		textureList[]=
		{
		};

		//Components definition
		class Components
		{
			#include "dynamicLoadouts.hpp"
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar{};
				};
			};
			class TransportCountermeasuresComponent	 {};
		};

		class Attributes {
			class ObjectTexture {
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rhs_decalNumber_type {
				displayName = "Define font type of side number";
				tooltip = "Define kind of font that will be drawn on vehicle";
				property = "rhs_decalNumber_type";
				control = "Combo";
				expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRSU25NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue = 0;
				typeName = "STRING";
				class values {

					class NoChange {
						name = "Default";
						value = "NoChange";
					};
					class AviaYellow {
						name = "Aviation Yellow";
						value = "AviaYellow";
					};
					class AviaBlue {
						name = "Aviation Blue";
						value = "AviaBlue";
						defaultValue = "AviaBlue";
					};
					class AviaRed {
						name = "Aviation Red";
						value = "AviaRed";
					};
					class AviaWhiteOut {
						name = "Aviation White Out";
						value = "AviaWhiteOut";
					};
					class AviaCDF {
						name = "Aviation CDF";
						value = "AviaCDF";
					};
					class Default {
						name = "Default (White)";
						value = "Default";
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
				};
			};
			class rhs_decalNumber {
				displayName = "Set side number";
				tooltip = "Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property = "rhs_decalNumber";
				control = "Edit";
				validate = "Number";
				defaultValue = "-1";
				typeName = "Number";
				expression = "if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRSU25NumberPlaces}else{[_this, [['Number', cRHSAIRSU25NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNoseArt {
				displayName = "Define Nose Art";
				tooltip = "Define Nose Art texture located near the cabin. Appears on both sides";
				property = "rhs_decalNoseArt";
				control = "Combo";
				expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt',_value] ] ] call rhs_fnc_decalsInit};";
				defaultValue = "-1";
				typeName = "Number";
				class values {
					class Random {
						name = "Random";
						value = -1;
						defaultValue = -1;
					};
					class Empty {
						name = "Empty";
						value = 0;
					};
					class Arrows {
						name = "Aviation emblem";
						value = 1;
					};
					class Thunders {
						name = "Thunders";
						value = 2;
					};
					class Eyes {
						name = "Eyes";
						value = 3;
					};
					class Stars {
						name = "Stars";
						value = 4;
					};
				};
			};
			class rhs_decalSideArt: rhs_decalNoseArt {
				displayName = "Define Side Art";
				tooltip = "Define Side Art texture located near the jet intake. Appears on both sides";
				property = "rhs_decalSideArt";
				expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRSU25SidePlaces, 'Su25Ex',_value] ] ] call rhs_fnc_decalsInit};";
				class values {
					class Random {
						name = "Random";
						value = -1;
						defaultValue = -1;
					};
					class Empty {
						name = "Empty";
						value = 0;
					};
					class Crow {
						name = "Crow";
						value = 1;
					};
					class Russia {
						name = "Russia emblem";
						value = 2;
					};
				};
			};
			class rhs_decalTail {
				displayName = "Define tail decal";
				tooltip = "Define tail decal that will be drawn on vehicle";
				property = "rhs_decalTail";
				control = "Combo";
				expression = "[_this,[['Label', cRHSAIRSU25TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
				defaultValue = -1;
				typeName = "Number";
				class values {

					class Default {
						name = "Default";
						value = -1;
					};
					class Empty {
						name = "Empty";
						value = 0;
					};
					class VVS {
						name = "VVS Russia";
						value = 3;
						defaultValue = 3;
					};
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect = "ExhaustsEffectPlaneHP";

				engineIndex = 0;
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect = "ExhaustsEffectPlaneHP";

				engineIndex = 1;
			};
		};
		class RenderTargets
		{
			class Periscope
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition		= "PIP0_pos";
					pointDirection		= "PIP0_dir";
					renderVisionMode 	= 0;
					renderQuality 		= 2;
					fov 				= 0.5;
				};
				//PIP_BB(0)
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_General
				{
					color[]				= {40,20,20};
					ambient[]			= {0,0,0};
					intensity			= 2.5;
					size				= 0;
					useFlare			= 0;
					flareSize			= 0.0;
					flareMaxDistance	= 0;
					dayLight			= 0;
					blinking			= 0;
					class Attenuation
					{
						start			= 0;
						constant		= 0;
						linear			= 1;
						quadratic		= 70;
						hardLimitStart	= 1.45;
						hardLimitEnd	= 2.45;
					};
					point = "light_general";
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				ambient[]={100,100,100,0};
				color[]={7000,7500,10000,1};
				coneFadeCoef=10;
				dayLight=0;
				direction="konec l svetla";
				flareSize=4;
				hitpoint="l svetlo";
				innerAngle=20;
				intensity=50;
				outerAngle=60;
				position="l svetlo";
				selection="l svetlo";
				size=1;
				useFlare=1;
				class Attenuation
				{
					constant=0;
					linear=0;
					quadratic=4;
					start=1;
				};
			};
			class Left_Flare: Left
			{
				intensity = .5;
				useFlare=1;
				innerAngle = 5;
				outerAngle = 175;
			};
			class Right: Left
			{
				position="p svetlo";
				direction="konec p svetla";
				hitpoint="p svetlo";
				selection="p svetlo";
			};
			class Right_Flare: Right
			{
				intensity = .5;
				useFlare=1;
				innerAngle = 5;
				outerAngle = 175;
			};
		};
		aggregateReflectors[]=
		{

			{"Left","Left_Flare"},{"Right","Right_Flare"}
		};
		class markerlights
		{
			class GreenStill
			{
				activeLight=0;
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
				intensity = 55;
				blinking=0;
				brightness=0.01;
				flareSize=0.5;
				name = "zeleny pozicni";
				useFlare=1;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
			class RedStill: GreenStill
			{
				color[] = {0.8,0,0};
				ambient[] = {0.08,0,0};
				name = "cerveny pozicni";
			};
			class WhiteStill: GreenStill
			{
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				name = "bily pozicni";
			};
			class WhiteBlicking: GreenStill
			{
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				blinking=1;
				name = "bily pozicni blik";
			};
			class RedBlinking: WhiteBlicking
			{
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				name = "cerveny pozicni blik";
			};
		};
		class Damage
		{
			tex[]=
			{
				"rhsafrf\addons\rhs_a2port_air\su25\data\rhs_su25_warningLights_empty_ca.paa",
				"rhsafrf\addons\rhs_a2port_air\su25\data\rhs_su25_warningLights_ca.paa"
			};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_in.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_in_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_in_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class eject
			{
				source="door";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class eject_hide
			{
				source="user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class throttle_source: eject_hide {animPeriod	= 10;};
			class rwr_lights_lock
			{
				source="user";
				initPhase=0;
				animPeriod=8;
			};
			class rwr_lock_dir_primary: rwr_lights_lock
			{
				animPeriod=0.1;
			};
			class rwr_lock_primary: rwr_lights_lock {
				animPeriod=0.0000001;
			};
			class rwr_signal_strenght: rwr_lights_lock {
				animPeriod=0.0000001;
			};

			class rwr_lights: rwr_lock_primary {};
			ANIM_PYLON(1)
			ANIM_PYLON(2)
			ANIM_PYLON(3)
			ANIM_PYLON(4)
			ANIM_PYLON(5)
			ANIM_PYLON(6)
			ANIM_PYLON(7)
			ANIM_PYLON(8)
			ANIM_PYLON(9)
			ANIM_PYLON(10)
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="cerveny pozicni";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="zeleny pozicni";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
		};

		threat[]={1,1,1};


		driveOnComponent[]=
		{
			"gear_f1",
			"gear_l1",
			"gear_r1"
		};
		defaultUserMFDvalues[] = {0, 0,0,0,0,0};
		#include "cfgHUD_SU25.hpp"
		#include "physx_su25.hpp"
		#include "flightModel.hpp"

		soundIncommingMissile[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\alarm_beep",1.098107,1};
		//soundLocked[] = {"\rhsafrf\addons\rhs_optics\sounds\long_beep.wav",db+4,1};
		soundLocked[] = {"",db+4,1};

		class UserActions
		{
			class SAFEMODE {
				displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
				condition = "(call rhs_fnc_findPlayer) in this";
				statement = "(call rhs_fnc_findPlayer) action ['SwitchWeapon', this, (call rhs_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
				position = "";
				radius = 10;
				priority = 10.5;
				onlyforplayer = 1;
				showWindow = 0;
				shortcut="user13";
				hideOnUse = 1;
			};
			class RETICLE {
				displayName		= "<t color='#FBB829'>Toggle reticle</t>";
				position		= "";
				radius			= 10;
				priority		= 10.5;
				onlyforplayer	= 1;
				showWindow		= 0;
				hideOnUse		= 1;
				condition		= "(call rhs_fnc_findPlayer) in this";
				shortcut		= "user10";
				statement		= "if(((getUserMFDvalue this) select 5) isEqualTo 0)then{this setUserMFDvalue [5,1];}else{this setUserMFDvalue [5,0];};";
			};
		};
		class EventHandlers : EventHandlers
		{
			hit = ""; // turning off scripted ejection script handling
			class RHS_EventHandlers
			{
				hit					= "_this call RHS_fnc_AI_eject";
				init				= "_this call rhs_fnc_air_init";
				postInit 			= "_this call rhs_fnc_reapplyTextures";
				getout				= "[_this select 0, _this select 2,'rhs_su25_canopy'] call rhs_fnc_K36D_seatEjection";
				engine				= "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes;";
			};
		};
	};

	class RHS_Su25_VVS_Base: RHS_Su25_base
	{
		EdPrev(rhs_Su25_VVS_Base)
		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_vvs_c";
		vehicleClass = "rhs_vehclass_aircraft";

	};

	class RHS_Su25SM_vvs: RHS_Su25_VVS_Base
	{
		EdPrev(rhs_Su25SM_vvs)
		faction="rhs_faction_vvs";
		scope=2;
		displayName="$STR_RHS_SU25_Name";
		AUTHOR_MACRO_BIS_PORT
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_co.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Su25SM_KH29_vvs: RHS_Su25SM_vvs
	{
		EdPrev(rhs_Su25SM_KH29_vvs)
		displayName="$STR_RHS_SU25_KH29_Name";
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_kh29l";};
					class pylon2: pylon2 {attachment = "rhs_mag_kh29l";};
					class pylon3: pylon3 {attachment = "rhs_mag_kh25ML";};
					class pylon4: pylon4 {attachment = "rhs_mag_kh25ML";};
					class pylon5: pylon5 {attachment = "rhs_mag_kh25ML";};
					class pylon6: pylon6 {attachment = "rhs_mag_kh25ML";};
					class pylon7: pylon7 {};
					class pylon8: pylon8 {};
					class pylon9: pylon9 {};
					class pylon10: pylon10 {};
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};
	class RHS_Su25SM_CAS_vvs: RHS_Su25SM_vvs
	{
		EdPrev(rhs_Su25SM_CAS_vvs)
		displayName="$STR_RHS_SU25_CAS_Name";
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus

		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_b8m1_s8kom";};
					class pylon2: pylon2 {attachment = "rhs_mag_b8m1_s8kom";};
					class pylon3: pylon3 {attachment = "rhs_mag_b8m1_s8kom";};
					class pylon4: pylon4 {attachment = "rhs_mag_b8m1_s8kom";};
					class pylon5: pylon5 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon6: pylon6 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon7: pylon7 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon8: pylon8 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon9: pylon9 {};
					class pylon10: pylon10 {};
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};
	class RHS_Su25SM_Cluster_vvs: RHS_Su25SM_vvs
	{
		displayName="$STR_RHS_SU25_Cluster_Name";
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus

		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_rbk250_ao1";};
					class pylon2: pylon2 {attachment = "rhs_mag_rbk250_ao1";};
					class pylon3: pylon3 {attachment = "rhs_mag_rbk250_ao1";};
					class pylon4: pylon4 {attachment = "rhs_mag_rbk250_ao1";};
					class pylon5: pylon5 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon6: pylon6 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon7: pylon7 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon8: pylon8 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon9: pylon9 {};
					class pylon10: pylon10 {};
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};


	class RHS_Su25SM_vvsc: RHS_Su25SM_vvs
	{
		EdPrev(rhs_Su25SM_vvsc)
		faction="rhs_faction_vvs_c";
		scope=2;
		//displayName="Su-25SM";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRSU25NumberPlaces,'AviaBlue']",  // Set number (random)
			"['Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt']",
			"['Label', cRHSAIRSU25SidePlaces, 'Su25Ex']"
		};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Su25\DATA\camo\su25_body1_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Su25\DATA\camo\su25_body2_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Su25SM_KH29_vvsc: RHS_Su25SM_vvsc
	{
		EdPrev(rhs_Su25SM_KH29_vvsc)
		displayName="$STR_RHS_SU25_KH29_Name";
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus

		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_kh29l";};
					class pylon2: pylon2 {attachment = "rhs_mag_kh29l";};
					class pylon3: pylon3 {attachment = "rhs_mag_kh25ML";};
					class pylon4: pylon4 {attachment = "rhs_mag_kh25ML";};
					class pylon5: pylon5 {attachment = "rhs_mag_kh25ML";};
					class pylon6: pylon6 {attachment = "rhs_mag_kh25ML";};
					class pylon7: pylon7 {};
					class pylon8: pylon8 {};
					class pylon9: pylon9 {};
					class pylon10: pylon10 {};
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};
	class RHS_Su25SM_CAS_vvsc: RHS_Su25SM_vvsc
	{
		EdPrev(rhs_Su25SM_CAS_vvsc)
		displayName="$STR_RHS_SU25_CAS_Name";
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus

		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_b8m1_s8kom";};
					class pylon2: pylon2 {attachment = "rhs_mag_b8m1_s8kom";};
					class pylon3: pylon3 {attachment = "rhs_mag_b8m1_s8kom";};
					class pylon4: pylon4 {attachment = "rhs_mag_b8m1_s8kom";};
					class pylon5: pylon5 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon6: pylon6 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon7: pylon7 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon8: pylon8 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon9: pylon9 {};
					class pylon10: pylon10 {};
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};
	class RHS_Su25SM_Cluster_vvsc: RHS_Su25SM_vvsc
	{
		displayName="$STR_RHS_SU25_Cluster_Name";
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus

		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_rbk250_ao1";};
					class pylon2: pylon2 {attachment = "rhs_mag_rbk250_ao1";};
					class pylon3: pylon3 {attachment = "rhs_mag_rbk250_ao1";};
					class pylon4: pylon4 {attachment = "rhs_mag_rbk250_ao1";};
					class pylon5: pylon5 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon6: pylon6 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon7: pylon7 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon8: pylon8 {attachment = "rhs_mag_b8m1_s8df";};
					class pylon9: pylon9 {};
					class pylon10: pylon10 {};
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};