	class RHS_AN2_Base: Plane_Base_F
	{
		cabinOpening=0;
		dlc = "RHS_GREF";
		simulation = "airplaneX";
		destrType = "DestructWreck";
		scope = 0;

		vehicleClass = "rhs_vehclass_aircraft";

		model	= rhsgref\addons\rhsgref_air\AN2\AN2.p3d;
		picture	= rhsgref\addons\rhsgref_air\AN2\data\UI\picture_an2_CA.paa;
		icon	= rhsgref\addons\rhsgref_air\AN2\data\UI\icon_an2_CA.paa;
		mapSize	= 20;

		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};

		memoryPointsGetInDriver = "pos cargo";  // only one door
		memoryPointsGetInDriverDir = "pos cargo dir";  // only one door

		getInAction			= GetInHigh;
		getOutAction		= GetOutHigh;
		cargoGetInAction[]	= {"GetInHigh"};
		cargoGetOutAction[]	= {"GetOutHigh"};

		accuracy = 0.15;
		cost = 20000;

		//disable gear retracting
		gearRetracting = false;


		driverAction		= "RHS_AN2_Pilot";
		cargoAction[]		= {"RHS_AN2_Cargo01", "RHS_AN2_Cargo02", "RHS_AN2_Cargo01", "RHS_AN2_Cargo03", "RHS_AN2_Cargo02", "RHS_AN2_Cargo01", "RHS_AN2_Cargo03", "RHS_AN2_Cargo01", "RHS_AN2_Cargo03", "RHS_AN2_Cargo02", "RHS_AN2_Cargo01", "RHS_AN2_Cargo02", "RHS_AN2_Cargo02", "RHS_AN2_Cargo03"};
		cargoIsCoDriver[]	= {true,false};
		transportSoldier	= 12;
		driverCompartments	= Compartment1;
		cargoCompartments[]	= {Compartment1};

		#include "sound.h"

		weapons[]	= {};
		magazines[]	= {};
		threat[]	={0.0, 0.0, 0.0};

		airBrake			= 0;
		maxSpeed			= 258;
		landingSpeed		= 85;
		takeoffSpeed		= 90;
		landingAoa			= rad(10);
		flapsFrictionCoef	= 0.95;
		rudderInfluence		= 0.5;
		aileronSensitivity	= 0.4;
		elevatorSensitivity	= 0.4;
		envelope[]=	{0,0,0.43,1.2,2.3,2.42,3.53,7.12,8.56,11.05,9.39,7.94,5.2,2.82,0};


		angleOfIndicence = 0;
		draconicForceXCoef = 3.15;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 3.15;
		thrustCoef[] = {1.4,1.3,1.2,1.2,1.1,1.1,1.0,1.0,0.9,0.7,0.5,0.3,0.1,0.0,0.0,0.0};

		#include "physx.hpp"

		wheelSteeringSensitivity = 2; //0.5
		ejectSpeed[] = {0, 0, 0};
		extCameraPosition[]={0,5,-20};
		lightOnGear = 0;

		driverLeftHandAnimName="left_stick_aileron";
		driverRightHandAnimName="left_stick_aileron";


		armor				= 25;
		damageResistance	= 0.00278;
		class HitPoints: HitPoints
		{
			class HitHull			{armor = 1.5;	explosionShielding = 1;		passThrough = 0.5;	minimalHit = 0;		material = -1;	radius = 0.30;	name = "HitHull";				visual = "vis_hull";		depends = "Total";				};
			class HitEngine			{armor = 0.50;	explosionShielding = 1;		passThrough = 0.2;	minimalHit = 0.1;	material = -1;	radius = 0.15;	name = "hit_engine";			visual = "vis_engine";		depends = "0";					};
			class HitFuel			{armor = 1.5;	explosionShielding = 2;		passThrough = 0.2;	minimalHit = 0;		material = -1;	radius = 0.10;	name = "hit_fuel_l";			visual = "vis_wing_lh";		depends = "0";					};
			class HitFuel2			{armor = 1.5;	explosionShielding = 2;		passThrough = 0.2;	minimalHit = 0;		material = -1;	radius = 0.10;	name = "hit_fuel_r";			visual = "vis_wing_rh";		depends = "0";					};
			class HitLAileron_link 	{armor = 0.30;	explosionShielding = 0.90; 	passThrough = 0.01;	minimalHit = 0.03;	material = -1; 	radius = 0.10;	name = "hit_aileron_link_l";	visual = "";				depends = "0";					};
			class HitLAileron_1		{armor = 1.5;	explosionShielding = 3;		passThrough = 0.1;	minimalHit = 0.1;	material = -1;	radius = 0.12;	name = "hit_aileron_lh";		visual = "vis_wing_lh";		depends = "HitLAileron_link*0.7";		};
			class HitLAileron_2		{armor = 1.5;	explosionShielding = 3;		passThrough = 0.1;	minimalHit = 0.1;	material = -1;	radius = 0.10;	name = "hit_aileron_ld";		visual = "vis_wing_ld";		depends = "0";					};
			class HitLAileron		{armor = 1.5;	explosionShielding = 3;		passThrough = 0.1;	minimalHit = 0.1;	material = -1;	radius = 0.12;	name = "hit_aileron_lh";		visual = "vis_wing_lh";		depends = "(HitLAileron_1 + HitLAileron_2)*0.5";};
			class HitRAileron_link 	{armor = 0.30;	explosionShielding = 0.90; 	passThrough = 0.01;	minimalHit = 0.03;	material = -1; 	radius = 0.10;	name = "hit_aileron_link_r";	visual = "";				depends = "0";					};
			class HitRAileron_1		{armor = 1.5;	explosionShielding = 3;		passThrough = 0.1;	minimalHit = 0.1;	material = -1;	radius = 0.12;	name = "hit_aileron_rh";		visual = "vis_wing_rh";		depends = "HitRAileron_link*0.7";		};
			class HitRAileron_2		{armor = 1.5;	explosionShielding = 3;		passThrough = 0.1;	minimalHit = 0.1;	material = -1;	radius = 0.10;	name = "hit_aileron_rd";		visual = "vis_wing_rd";		depends = "0";					};
			class HitRAileron		{armor = 1.5;	explosionShielding = 3;		passThrough = 0.1;	minimalHit = 0.1;	material = -1;	radius = 0.12;	name = "hit_aileron_rh";		visual = "vis_wing_rh";		depends = "(HitRAileron_1 + HitRAileron_2)*0.5";};
			class HitControlRear	{armor = 0.60;	explosionShielding = 0.10; 	passThrough = 0.10; minimalHit = 0.10;	radius = 0.04; 	material = -1; 	name = "hit_control_rear";		visual = "-";				depends = "0";  									};
			class HitLCRudder		{armor = 1.5;	explosionShielding = 3;		passThrough = 0.1;	minimalHit = 0.1;	material = -1;	radius = 0.15;	name = "hit_rudder";			visual = "vis_rudder";		depends = "HitControlRear";			};
			class HitLCElevator		{armor = 1.5;	explosionShielding = 3;		passThrough = 0.1;	minimalHit = 0.1;	material = -1;	radius = 0.11;	name = "hit_elevator_l";		visual = "vis_elevator_l";	depends = "HitControlRear";			};
			class HitRElevator		{armor = 1.5;	explosionShielding = 3;		passThrough = 0.1;	minimalHit = 0.1;	material = -1;	radius = 0.11;	name = "hit_elevator_r";		visual = "vis_elevator_r";	depends = "HitControlRear";			};
			class HitGlass1 {armor=0.1;material=-1;name="glass1";visual="glass1";passThrough=0;};
			class HitGlass2 {armor=0.1;material=-1;name="glass2";visual="glass2";passThrough=0;};
			class HitGlass3 {armor=0.1;material=-1;name="glass3";visual="glass3";passThrough=0;};
			class HitGlass4 {armor=0.1;material=-1;name="glass4";visual="glass4";passThrough=0;};

		};
		class AnimationSources
		{
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1"; // name of hitpoints class
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="HitGlass4";
			};

			class hideDoor
			{
				displayName = "Hide Door...";
				author = "Community Upgrade Project";
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;

				forceAnimatePhase = 0;
				forceAnimate[] =  {};

				mass = 20;
			};

			class door
			{
				source=user;
				animPeriod= 2.5;
				sound = "ServoRampSound_2";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]={
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_1.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_1_damage.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_1_destruct.rvmat",

				"rhsgref\addons\rhsgref_air\AN2\Data\an2_2.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_2_damage.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_2_destruct.rvmat",

				"rhsgref\addons\rhsgref_air\AN2\Data\an2_interier.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_interier_damage.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_interier_destruct.rvmat",

				"rhsgref\addons\rhsgref_air\AN2\Data\an2_cockpit.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_cockpit_damage.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_cockpit_destruct.rvmat",

				"rhsgref\addons\rhsgref_air\AN2\Data\an2_wings.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_wings_damage.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_wings_destruct.rvmat",

				"rhsgref\addons\rhsgref_air\AN2\Data\an2_window.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_window_damage.rvmat",
				"rhsgref\addons\rhsgref_air\AN2\Data\an2_window_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};

		driveOnComponent[]= {};

		driverLeftLegAnimName = "pedal_l";
		driverRightLegAnimName = "pedal_r";

		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				startEngine = false;
				outGunnerMayFire = true;
				commanding = -1;
				weapons[] = {};
				magazines[] = {};
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				gunnerName = "Copilot";
				selectionFireAnim = "zasleh";
				castGunnerShadow = true;
				viewGunnerShadow = true;
				minElev = -50;
				maxElev = 30;
				initElev = 11;
				minTurn = -170;
				maxTurn = 170;
				initTurn = 0;
				gunnerAction = "RHS_AN2_Cargo";
				gunnerInAction = "RHS_AN2_Cargo";
				gunnerOpticsModel = "\A3\Weapons_F\empty.p3d";
				gunnerForceOptics = false;
				enableManualFire = false;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;

				class ViewPilot: ViewPilot
				{
					minAngleX = -65;
					maxAngleX = 85;
					initAngleX = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initAngleY = 0;
					minFov = 0.3;
					maxFov = 1.2;
					initFov = 1;
				};

				isCopilot = true;
				primaryGunner = false;
				canEject = false;
				gunnerNotSpawned = false;
				gunnerUsePilotView = true;
				class HitPoints {};

				// left hand doesnt move
				gunnerLeftHandAnimName = "yoke_copilot";

				gunnerRightHandAnimName = "right_stick_aileron";
				gunnerLeftLegAnimName = "pedal_l_copilot";
				gunnerRightLegAnimName = "pedal_r_copilot";
				turretCanSee = 15;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components : components
						{
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
						};
					};

					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "";
						class Components : components
						{
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
						};
					};
				};
			};
		};
		class Components
		{
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components : components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
				};
			};

			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "";
				class Components : components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
				};
			};
		};


		class Reflectors
		{
			class Left
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "light_l";
				direction = "light_l_dir";
				hitpoint = "light_l";
				selection = "light_l";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
			class Right : Left
			{
				position = "light_r";
				direction = "light_r_dir";
				hitpoint = "light_r";
				selection = "light_r";
			};
		};

		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectPlane";
				position = "exhaust1";
			};
		};

		hiddenSelections[] ={"Camo1","Camo2","Camo3", "n1", "n2", "i1", "i2"};
		hiddenSelectionsTextures[] ={
			"rhsgref\addons\rhsgref_air\an2\data\an2_1_co.paa",
			"rhsgref\addons\rhsgref_air\an2\data\an2_2_co.paa",
			"rhsgref\addons\rhsgref_air\an2\data\an2_wings_co.paa"
		};

		class textureSources
		{
			class standardCDF
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsgref\addons\rhsgref_air\an2\data\an2_1_co.paa",
					"rhsgref\addons\rhsgref_air\an2\data\an2_2_co.paa",
					"rhsgref\addons\rhsgref_air\an2\data\an2_wings_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhsgref_faction_cdf_air
				};
			};
			class aeroschrot
			{
				displayname = "АэроШрот";
				author = $STR_A3_Bohemia_Interactive;
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\AN2\data\an2_1_A_CO",
					"rhsgref\addons\rhsgref_air\AN2\data\an2_2_A_CO",
					"rhsgref\addons\rhsgref_air\AN2\data\an2_wings_A_CO"
				};
				factions[] = {};
			};

			class airtak
			{
				displayName = "AirTak";
				author = $STR_A3_Bohemia_Interactive;
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\AN2\data\an2_1_B_CO",
					"rhsgref\addons\rhsgref_air\AN2\data\an2_2_B_CO",
					"rhsgref\addons\rhsgref_air\AN2\data\an2_wings_B_CO"
				};
				factions[] = {};
			};

			class military
			{
				displayName = "Military";
				author = $STR_A3_Bohemia_Interactive;
				textures[] =
				{
					"rhsgref\addons\rhsgref_air\AN2\data\an2_1_CO",
					"rhsgref\addons\rhsgref_air\AN2\data\an2_2_CO",
					"rhsgref\addons\rhsgref_air\AN2\data\an2_wings_CO"
				};
				factions[] = {};
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
				displayName = "Define font type of side number";
				tooltip = "Define kind of font that will be drawn on vehicle";
				property = "rhs_decalNumber_type";
				control = "Combo";
				expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', [3,4], _value]]] call rhs_fnc_decalsInit}";
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
						defaultValue = "AviaCDF";
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
				expression = "if( _value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach [3,4]}else{[_this, [['Number', [3,4], _this getVariable ['rhs_decalNumber_type','AviaCDF'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalTail {
				displayName = "Define tail decal";
				tooltip = "Define tail decal that will be drawn on vehicle";
				property = "rhs_decalTail";
				control = "Combo";
				expression = "[_this,[['Label', [5], 'Aviation',_value]]] call rhs_fnc_decalsInit";
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
					class Star {
						name = "Red Star";
						value = 2;
					};
					class CDF {
						name = "CDF";
						value = 4;
						defaultValue = 4;
					};
				};
			};
			class door {
				displayName = "Open Door";
				property = "door";
				control = "slider";
				expression = "_this animate ['door',_value];";
				defaultValue = "0";
			};
		};

		class MarkerLights {
			class WhiteStill {
				name = "pos_light_still_white";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 1;
			};

			class RedStill {
				name = "pos_light_still_red";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 1;
			};

			class GreenStill {
				name = "pos_light_still_green";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 1;
			};

			class RedBlinking {
				name = "pos_light_blink_red";
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				intensity = 75;
				blinking = 1;
				blinkingStartsOn = 0;
				blinkingPattern[] = {2.9, 0.1};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};

			class WhiteBlinking1 {
				name = "pos_light_blink1_white";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				intensity = 100;
				blinking = 1;
				blinkingPattern[] = {0.1, 2.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.35;
				drawLightCenterSize = 0.08;
			};
			class WhiteBlinking2 : WhiteBlinking1{
				name = "pos_light_blink2_white";
			};
			class WhiteBlinking3: WhiteBlinking1 {
				name = "pos_light_blink3_white";
			};
		};

		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";// name of the effect
				position = "body_vapour_L_E"; // name of the memory point in model
			};

			class WingTipRight
			{
				effectName = "WingVortices"; // name of the effect
				position = "body_vapour_R_E";// name of the memory point in model
			};
			class BodyLeft
			{
				effectName = "BodyVortices";// name of the effect
				position = "body_vapour_L_S"; // name of the memory point in model
			};

			class BodyRight
			{
				effectName = "BodyVortices"; // name of the effect
				position = "body_vapour_R_S";// name of the memory point in model
			};
			class WingTipLeftTop
			{
				effectName = "WingVortices";// name of the effect
				position = "body_vapour_L_E_T"; // name of the memory point in model
			};

			class WingTipRightTop
			{
				effectName = "WingVortices"; // name of the effect
				position = "body_vapour_R_E_T";// name of the memory point in model
			};
			class BodyLeftTop
			{
				effectName = "BodyVortices";// name of the effect
				position = "body_vapour_L_S_T"; // name of the memory point in model
			};
			class BodyRightTop
			{
				effectName = "BodyVortices"; // name of the effect
				position = "body_vapour_R_S_T";// name of the memory point in model
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
		};

		class UserActions
		{
			class DoorOpen
			{
				displayName="Open Doors";
				displayNameDefault="Open doors";
				position="cargo_door_handle";
				radius=2;
				showwindow = 0;
				onlyForPlayer=true;
				condition = "this animationPhase 'door' == 0 && (alive this) && (player in crew this) && (this animationPhase 'hideDoor' < 0.5);";
				statement="this animate ['door',1, false];";
			};
			class DoorClose
			{
				displayName="Close Doors";
				displayNameDefault="Close doors";
				position="cargo_door_handle";
				radius=2;
				showwindow = 0;
				onlyForPlayer=true;
				condition = "this animationPhase 'door' == 1 && (alive this) && (player in crew this) && (this animationPhase 'hideDoor' < 0.5);";
				statement="this animate ['door',0, false];";
			};
		};

		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
			};
		};
	};

	class RHS_AN2 : RHS_AN2_Base
	{
		EdPrev(RHS_AN2)
		accuracy = 0.5;
		AUTHOR_MACRO_BIS_PORT
		scope = 2;
		side = 2;
		faction = "rhsgref_faction_cdf_air";
		crew = "rhsgref_cdf_air_pilot";
		typicalCargo[] = {"rhsgref_cdf_air_pilot"};

		displayName = "$STR_RHSGREF_AIR_AN2_NAME";

		rhs_decalParameters[]={
			"['Number',[3,4],'AviaCDF']",
			"['Label',[5],'Aviation', 4]",
			"['Label',[6],'AviationSquadronsCDF']"
		};


		//textureList[] = {"aeroschrot"};
	};
	class RHS_AN2_B : RHS_AN2
	{
		AUTHOR_MACRO_BIS_PORT
		scope = 2;
		side = 1;
		faction = "rhsgref_faction_cdf_air_b";
		crew = "rhsgref_cdf_b_air_pilot";
		typicalCargo[] = {"rhsgref_cdf_b_air_pilot"};
	};

