class RHS_T50_base: Plane_Base_F
{
	scope		= 1;
	dlc = "RHS_AFRF";
	rhs_decalParameters[]={
		"['Number',cRHSAIRT50NumberPlaces,'AviaBlue']",
		"['Label', cRHSAIRT50SquadPlaces, 'AviationsSquadrons']",
		"['Label', cRHSAIRT50StarPlaces, 'Aviation',1]"
	};
	displayName	= "$STR_T50_name";
	model		= "\rhsafrf\addons\rhs_air\t50\t50";
	picture		= "\rhsafrf\addons\rhs_air\t50\data\ui\pak_fa_icon.paa";
	icon		= "\rhsafrf\addons\rhs_air\t50\data\ui\icomap_pakfa.paa";

	LESH_canBeTowed = 1;
	LESH_towFromFront = 1;
	LESH_AxisOffsetTarget[] = {0,6.8,-2.04};
	LESH_WheelOffset[] = {0,-0.7};

	category = "Air";
	vehicleClass					= "rhs_vehclass_aircraft";
	memoryPointsGetInDriver			="pos driver";
	memoryPointsGetInDriverDir		="pos driver dir";
	memoryPointsGetInDriverPrecise	="pos driver";

	camShakeCoef			= 0.7;
	driverCanEject			= 1;
	driverCompartments		= 1;
	driverLeftHandAnimName	= "lever_pilot";
	driverRightHandAnimName	= "stick_pilot";
	driverLeftLegAnimName	= "pedal_L";
	driverRightLegAnimName	= "pedal_R";
	driverAction			= "rhs_PAKFA_Pilot";
	getinAction				= "RHS_PAKFA_Pilot_getin";
	getoutaction			= "pilot_plane_cas_02_Exit";
	precisegetinout			= 1;
	allowTabLock			= 1;
	destrType				= DestructDefault;
	selectionDamage			= "zbytek";
	incommingMisslieDetectionSystem = 8+16;
	ejectDamageLimit		= 1;
	driverWeaponsInfoType	= "RscOptics_CAS_01_TGP";
	HeadAimDown					= 6;
	headGforceLeaningFactor[] 	= {0.005,0.001,0.015};
	slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
	memoryPointTaskMarker	= "TaskMarker_1_pos";
	memoryPointLMissile		= "missile_1";
	memoryPointLRocket		= "rocket_1";
	memoryPointRMissile		= "missile_2";
	memoryPointRRocket		= "rocket_2";

	class EjectionSystem {};
	class Turrets {};   
	class TransportItems {}; 

	threat[]		= {1,1,1};
	waterLeakiness	= 1.5;
	showAllTargets = 4;
	laserScanner = 1;


	extCameraPosition[] = {0,4.1,-20};
	class Damage
	{
		tex[]=
		{
				"rhsafrf\addons\rhs_air\t50\data\afterburner_ca.paa",
				"#(argb,8,8,3)color(0,0,0,0,co)"
		};
		mat[]=
		{
			"rhsafrf\addons\rhs_air\t50\data\pakfa_glass.rvmat",
			"rhsafrf\addons\rhs_air\t50\data\pakfa_glass_damage.rvmat",
			"rhsafrf\addons\rhs_air\t50\data\pakfa_glass_destruct.rvmat",

			"rhsafrf\addons\rhs_air\t50\data\PakFa.rvmat",
			"rhsafrf\addons\rhs_air\t50\data\PakFa_damage.rvmat",
			"rhsafrf\addons\rhs_air\t50\data\PakFa_destruct.rvmat",

			"a3\data_f\default.rvmat",
			"a3\data_f\default.rvmat",
			"a3\data_f\default_destruct.rvmat"
		};
	};

	class UserActions
	{
		class MFD_top {
			displayName = "$STR_RHS_PAKFA_TOPOGRAPHIC_MAP";
			condition = "this animationPhase 'display2_switch' == 0 and player in this and isengineon this";
			statement = "this animate ['display2_switch',1,true]; [this,0] spawn RHS_fnc_PAKFA_MapData;";
			position = "pilotcontrol";
			radius = 10;
			onlyforplayer = 1;
			showWindow = 0;
			hideOnUse = 1;
		};
		class MFD_glonass {
			displayName = "$STR_RHS_PAKFA_GLONASS_MAP";
			condition = "this animationPhase 'display2_switch' == 1 and player in this and isengineon this";
			statement = "this animate ['display2_switch',2,true]; [this,1] spawn RHS_fnc_PAKFA_MapData;";
			position = "pilotcontrol";
			radius = 10;
			onlyforplayer = 1;
			showWindow = 0;
			hideOnUse = 1;
		};
		class MFD_off {
			displayName = "$STR_RHS_PAKFA_MAP_OFF";
			condition = "this animationPhase 'display2_switch' == 2 and player in this and isengineon this";
			statement = " this animate ['display2_switch',0];[this,2] spawn RHS_fnc_PAKFA_MapData;";
			position = "pilotcontrol";
			radius = 10;
			onlyforplayer = 1;
			showWindow = 0;
			hideOnUse = 1;
		};
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
	};

	weapons[] =
	{
		"rhs_weap_MASTERSAFE_Holdster15",
		"rhs_weap_CMFlareLauncher",
		"rhs_weap_GSh301"
	};

	magazines[] =
	{
		"rhs_mag_gsh30_bt_250",
		"120Rnd_CMFlare_Chaff_Magazine"
	};

	weaponsGroup1 = 128;
	weaponsGroup4 = 64;

	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_air\t50\data\pakfa_generic_co.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
	};

	hiddenselections[] =
	{
		"camo1",
		"n1", 	// Nose Decal Number 1
		"n2", 	// Nose Decal Number 2
		"n3",	// Nose Decal Number 3
		"n4",	// Top Fuselage Number 1
		"n5",	// Top Fuselage Number 2
		"n6",	// Top Fuselage Number 3
		"i1", 	// Sukhoi Decals
		"i2",	// Russian Stars
		"Glonass_map", // glonass map 9
		"display2_wp2" // display wp 10
	};

	class textureSources
	{
		class standard
		{
			displayName = "$STR_T50_blue_name";
			AUTHOR_MACRO
			textures[]=
			{
				"\rhsafrf\addons\rhs_air\t50\data\pakfa_bluecamo_co.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\1_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
			};
			factions[]=
			{
				rhs_faction_vvs_c, rhs_faction_vvs
			};
		};
		class standard2: standard
		{
			displayName = "$STR_T50_blueonblue_name";
			AUTHOR_MACRO
			textures[]=
			{
				"\rhsafrf\addons\rhs_air\t50\data\pakfa_blueonblue_co.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
			};
		};
		class standard3: standard
		{
			displayName = "$STR_T50_grey_name";
			AUTHOR_MACRO
			textures[]=
			{
				"\rhsafrf\addons\rhs_air\t50\data\pakfa_greycamo_co.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\1_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
			};
		};
		class standard4: standard
		{
			displayName = "$STR_T50_bluegeneric_name";
			AUTHOR_MACRO
			textures[]=
			{
				"\rhsafrf\addons\rhs_air\t50\data\pakfa_generic_co.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
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
			displayName = "Define font type of side number";
			tooltip = "Define kind of font that will be drawn on vehicle";
			property = "rhs_decalNumber_type";
			control = "Combo";
			expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRT50NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			defaultValue = 0;
			typeName = "STRING";
			class values {

				class NoChange {
					name = "Default";
					value = "NoChange";
				};
				class AviaBlue {
					name = "Aviation Blue";
					value = "AviaBlue";
					defaultValue = "AviaBlue";
				};
				class AviaYellow {
					name = "Aviation Yellow";
					value = "AviaYellow";
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
			tooltip = "Set side number. 2 numbers are required. Hides on 0";
			property = "rhs_decalNumber";
			control = "Edit";
			validate = "Number";
			defaultValue = "-1";
			expression = "if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRT50NumberPlaces}else{[_this, [['Number', cRHSAIRT50NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaBlue'], _value] ] ] call rhs_fnc_decalsInit}};";
		};
		class rhs_decalNumber_type2: rhs_decalNumber_type {
			displayName = "Define font type of side number (3 digits)";
			tooltip = "Define kind of font that will be drawn on vehicle";
			property = "rhs_decalNumber_type2";
			expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRT50NumberPlaces2, _value]]] call rhs_fnc_decalsInit}";
		};
		class rhs_decalNumber2: rhs_decalNumber {
			displayName = "Set side number (3 digits)";
			tooltip = "Set side number. 3 numbers are required. Hides on 0";
			property = "rhs_decalNumber2";
			expression = "if(_value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRT50NumberPlaces2}else{[_this, [['Number', cRHSAIRT50NumberPlaces2, _this getVariable ['rhs_decalNumber_type2','AviaBlue'], _value] ] ] call rhs_fnc_decalsInit}};";
		};

		class rhs_decalSquadArt {
			displayName = "Define Squadron Art";
			tooltip = "Define Squadron Art texture located on tail wings. Appears on both sides";
			property = "rhs_decalNoseArt";
			control = "Combo";
			expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRT50SquadPlaces, 'AviationsSquadrons',_value] ] ] call rhs_fnc_decalsInit};";
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
				class Seal1 {
					name = "Seal 1";
					value = 1;
				};
				class Polar {
					name = "Polar bear";
					value = 2;
				};
				class Wolf {
					name = "Wolf";
					value = 3;
				};
				class Weird {
					name = "Weird Piece of Decal";
					value = 4;
				};
				class One {
					name = "One";
					value = 5;
				};
				class Snake {
					name = "Snake";
					value = 6;
				};
				class Eagle {
					name = "Eagle";
					value = 7;
				};
				class seal2 {
					name = "Seal 2";
					value = 8;
				};
				class russia {
					name = "Russia Decal";
					value = 9;
				};
				class navy {
					name = "Russian Navy";
					value = 10;
				};
			};
		};
		class rhs_decalStarArt: rhs_decalSquadArt {
			displayName = "Define Stars Art";
			tooltip = "Define Stars Art texture located on wings";
			property = "rhs_decalStarArt";
			expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRT50StarPlaces, 'Aviation',_value] ] ] call rhs_fnc_decalsInit};";
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
				class New {
					name = "New type star";
					value = 1;
				};
				class Old {
					name = "Old type star";
					value = 2;
				};
			};
		};
		class rhs_hideantenna {
			displayName = "Remove antenna";
			property = "rhs_hideantenna";
			control = "CheckboxNumber";
			expression = "_this animate ['antenna_hide',_value,true]";
			defaultValue = "0";
		};
		class rhs_hidesensors: rhs_hideantenna {
			displayName = "Remove sensors";
			property = "rhs_hidesensors";
			expression = "_this animate ['sensors_hide',_value,true]";
		};
	};

	landingAoa					= "rad 10";
	landingSpeed				= 240;
	acceleration				= 1775;
	maxSpeed					= 1800;
	stallSpeed					= 240;
	stallWarningTreshold		= 0.5;
	RHS_AfterBurner_MaxSpeed	= 2100;

	takeoffSpeed					= 180;
	altFullForce					= 9000;
	altNoForce						= 20000;
	aileronSensitivity				= 1.2;
	elevatorSensitivity				= 2.3;
	rudderInfluence					= 0.02;
	aileronControlsSensitivityCoef	= 4;
	elevatorControlsSensitivity		= 5;
	elevatorControlsSensitivityCoef = 3.4;
	rudderControlsSensitivityCoef	= 4;
	elevatorCoef[]					= {0.8, 1.1, 0.7, 0.6, 0.55, 0.5, 0.5};
	aileronCoef[]					= {0.7,1,1,1,0.95,0.9,0.85};
	rudderCoef[]					= {0.7,1,1,1,0.9,0.8,0.7};
	flapsFrictionCoef				= 0.5;
	angleOfIndicence				= 0.04;
	draconicForceXCoef				= 5.4;
	draconicForceYCoef				= 3;
	draconicForceZCoef				= 0.1;
	draconicTorqueXCoef				= 1.2;
	draconicTorqueYCoef				= 3;
	envelope[]						= {0, 0.15, 1.1, 3, 5, 5.83, 6, 5.85, 5.5, 4.8, 3.6, 1.8, 0};
	thrustCoef[]					= {2.5, 2.2, 2.1, 2, 2, 2, 2, 1.9, 1.7, 1.5, 1.3, 1.1, 1, 1, 1, 1};
	airBrake=1;
	gearUpTime=4.5;
	gearDownTime=3;
	wheelSteeringSensitivity=1.5;

	memorypointcm[] = {"flare_launcher1", "flare_launcher2", "flare_launcher3"};
	memorypointcmdir[] = {"flare_launcher1_dir", "flare_launcher2_dir", "flare_launcher3_dir"};


	unitInfoType = "RHS_RscUnitInfoAir_PAKFA";
	driverCanSee = 1+2+4+8+16;

	defaultUserMFDvalues[] = {0.15, 1.0, 0.15,0.4};
	class MFD
	{
		class AirplaneHUD
		{
			#define PosX0Center 0.50
			#define PosY0Center 0.53
			#define PosYCenterHorizont 0.53
			#define SizeX10deg 0.62
			#define SizeY10deg 0.78
			#include "mfd.hpp"
		};
		class HMD
		{
			#undef PosX0Center
			#undef PosY0Center
			#undef PosYCenterHorizont
			#undef SizeX10deg
			#undef SizeY10deg
			#define PosX0Center 0.50 // 502
			#define PosY0Center 0.50 // 49
			#define PosYCenterHorizont 0.50
			#define SizeX10deg 0.274
			#define SizeY10deg 0.270
			topLeft			= "HUD_top_left";
			topRight		= "HUD_top_right";
			bottomLeft		= "HUD_bottom_left";
			#include "cfgHMD_T50.hpp"
		};
	};
	#include "physx_T50.hpp"
	#include "sounds.hpp"

	driveOnComponent[]= {};


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

	class WingVortices
	{
		class WingTipLeft
		{
			effectName="WingVortices";
			position="wing_vortex_l";
		};
		class WingTipRight
		{
			effectName="WingVortices";
			position="wing_vortex_r";
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

	attenuationEffectType = "PlaneAttenuation";
	damageResistance	= 0.00336;
	armor				= 80;
	armorStructural		= 3;
	armorLights = 0.1;
	explosionShielding = 1;
	epeImpulseDamageCoef = 1;
	class Hitpoints
	{
		class HitHull 			{armor = 999;	explosionShielding = 0.00; passThrough = 0.01; minimalHit = 1.00;	radius = 0.15; material = -1; name = "hit_hull";			visual = "-";				depends = "Total";  								};
		class HitAvionics 		{armor = 0.20;	explosionShielding = 0.20; passThrough = 0.01; minimalHit = 0.10;	radius = 0.08; material = -1; name = "hit_avionics";		visual = "vis_avionics";	depends = "0";  									};
		class HitEngine_c 		{armor = 0.70;	explosionShielding = 0.65; passThrough = 0.01; minimalHit = 0.01;	radius = 0.07; material = -1; name = "hit_engine";			visual = "vis_engine";		depends = "0";  									};
		class HitEngine 		{armor = 0.70;	explosionShielding = 0.65; passThrough = 0.01; minimalHit = 0.01;	radius = 0.07; material = -1; name = "hit_engine_l";		visual = "vis_engine_l";	depends = "HitEngine_c*0.7";  						};
		class HitEngine2 		{armor = 0.70;	explosionShielding = 0.65; passThrough = 0.01; minimalHit = 0.01;	radius = 0.07; material = -1; name = "hit_engine_r";		visual = "vis_engine_r";	depends = "HitEngine_c*0.7"; 						};
		class HitFuel 			{armor = 1.10;	explosionShielding = 0.40; passThrough = 0.01; minimalHit = 0.10;	radius = 0.10; material = -1; name = "hit_fuel";			visual = "vis_fuel";		depends = "0";  									};
		class HitFuel_left 		{armor = 1.10;	explosionShielding = 0.40; passThrough = 0.01; minimalHit = 0.10;	radius = 0.10; material = -1; name = "hit_fuel_wing_l";		visual = "vis_wing_l";		depends = "0";  									};
		class HitFuel_right 	{armor = 1.10;	explosionShielding = 0.40; passThrough = 0.01; minimalHit = 0.10;	radius = 0.10; material = -1; name = "hit_fuel_wing_r";		visual = "vis_wing_r";		depends = "0";  									};
		class HitFuel2 			{armor = 1.10;	explosionShielding = 0.40; passThrough = 0.01; minimalHit = 1.00;	radius = 0.01; material = -1; name = "hit_fuel";			visual = "-";				depends = "(HitFuel_left+HitFuel_right)*0.5";  		};
		class HitLAileron_link 	{armor = 0.70;	explosionShielding = 0.70; passThrough = 0.01; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_aileron_link_l";	visual = "-";				depends = "0";  									};
		class HitRAileron_link 	{armor = 0.70;	explosionShielding = 0.70; passThrough = 0.01; minimalHit = 0.10;	radius = 0.12; material = -1; name = "hit_aileron_link_r";	visual = "-";				depends = "0";  									};
		class HitLAileron 		{armor = 0.20;	explosionShielding = 0.30; passThrough = 0.01; minimalHit = 0.10;	radius = 0.13; material = -1; name = "hit_aileron_l";		visual = "vis_wing_l";		depends = "HitLAileron_link*0.7";  					};
		class HitRAileron 		{armor = 0.20;	explosionShielding = 0.30; passThrough = 0.01; minimalHit = 0.10;	radius = 0.13; material = -1; name = "hit_aileron_r";		visual = "vis_wing_r";		depends = "HitRAileron_link*0.7"; 					};
		class HitControlRear	{armor = 0.20;	explosionShielding = 0.30; passThrough = 0.01; minimalHit = 0.10;	radius = 0.04; material = -1; name = "hit_control_link";	visual = "-";				depends = "0";  									};
		class HitLCElevator 	{armor = 0.20;	explosionShielding = 0.30; passThrough = 0.01; minimalHit = 0.10;	radius = 0.15; material = -1; name = "hit_elevator_l";		visual = "vis_elevator_l";	depends = "HitControlRear";							};
		class HitRElevator 		{armor = 0.20;	explosionShielding = 0.30; passThrough = 0.01; minimalHit = 0.10;	radius = 0.15; material = -1; name = "hit_elevator_r";		visual = "vis_elevator_r";	depends = "HitControlRear";							};
		class HitLCRudder 		{armor = 0.20;	explosionShielding = 0.30; passThrough = 0.01; minimalHit = 0.10;	radius = 0.15; material = -1; name = "hit_rudder_l";		visual = "vis_rudder_l";	depends = "HitControlRear";							};
		class HitRightRudder 	{armor = 0.20;	explosionShielding = 0.30; passThrough = 0.01; minimalHit = 0.10;	radius = 0.15; material = -1; name = "hit_rudder_r";		visual = "vis_rudder_r";	depends = "HitControlRear";							};
		class HitGlass1 		{armor = 0.20;	explosionShielding = 0.60; passThrough = 0.01; minimalHit = 0.10;	radius = 0.40; material = -1; name = "glass1";				visual = "glass1";			depends = "0";  									};
		class HitGlass2 		{armor = 0.20;	explosionShielding = 0.60; passThrough = 0.01; minimalHit = 0.10;	radius = 0.40; material = -1; name = "glass2";				visual = "glass2";			depends = "0";  									};
	};

	class AnimationSources
	{
		class Damper_1_source			{source = damper; wheel = Wheel_1;};
		class Damper_2_source			{source = damper; wheel = Wheel_2;};
		class Damper_3_source			{source = damper; wheel = Wheel_3;};
		class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
		class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
		class Wheel_3_source			{source = wheel; wheel = Wheel_3;};
		class CollisionLightRed_source
		{
			source = "MarkerLight";
			markerLight = "CollisionRed";
		};
		class CollisionLightWhite_source: CollisionLightRed_source
		{
			markerLight = "CollisionWhite";
		};

		class Muzzle_flash
		{
			source = "ammorandom";
			weapon = "rhs_weap_GSh30";
		};
		class Cannon_30mm_ammorandom: Muzzle_flash { source = "ammorandom";};
		class Cannon_30mm_revolving: Muzzle_flash {source = "revolving";};


		class Hatch_open
		{
			source = "user";
			initPhase = 0;
			animPeriod = 0.4;
		};

		class Numbers_hide
		{
			source = "user";
			initPhase = 0;
			animPeriod = 0.001;
		};

		class afterburner_source
		{
			source = "user";
			initPhase = 0;
			animPeriod = 1.5;
		};

		class lever_pilot_1
		{
			source = "user";
			initPhase = 0;
			animPeriod = 0.3;
		};

		class pods_hide
		{
			source = "user";
			initPhase = 1;
			animPeriod = 0.001;
		};
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

		class Display2
		{
			source = "user";
			initPhase = 0;
			animPeriod = 0.0001;
		};
		class form_lights_hide : Display2 {};
		class Display2_wp1_rot : Display2 {};
		class Display2_wp1_m : Display2 {};
		class Display2_select_wp : Display2 {};
		class Display2_sector_hide : Display2 {};
		class Display2_sector_rot : Display2 {};
		class Display_Glonass_Map_X : Display2 {};
		class Display_Glonass_Map_Y : Display2 {};
		class display2_wp2_rot : Display2 {};
		class display2_switch : Display2 {animPeriod = 1;};

		class antenna_hide
		{
			source = "user";
			initPhase = 1;
			animPeriod = 0.001;
			mass=1;
			displayName="hide antenna";
		};
		class sensors_hide: antenna_hide
		{
			displayName="hide sensors";
		};
	};

	class MarkerLights
	{
		class PositionRed
		{
			color[] = {0.8,0.0,0.0};
			ambient[] = {0.08,0.0,0.0};
			intensity = 500;
			name = "PositionLight_red_1_pos";
			drawLight = 1.5;
			drawLightSize = 0.25;
			drawLightCenterSize = 0.04;
			activeLight = 0;
			blinking = 0;
			dayLight = 0;
			useFlare = 0;
			class Attenuation
			{
				start = 0;
				constant = 0;
				linear = 25;
				quadratic = 50;
				hardLimitStart = 0.75;
				hardLimitEnd = 1;
			};
		};
		class PositionGreen: PositionRed
		{
			color[] = {0.0,0.8,0.0};
			ambient[] = {0.0,0.08,0.0};
			name = "PositionLight_green_1_pos";
		};
	};

	class RenderTargets
	{
		class right_mirror
		{
			renderTarget = "rendertarget0";

			class CameraView1
			{
				pointPosition = "PIP_mirror_0";
				pointDirection = "PIP_mirror_0_dir";
				renderQuality = 0;
				renderVisionMode = 0;
				fov = 1;
			};
		};

		class Glonass_Camera
		{
			renderTarget = "rendertarget4";

			class CameraView1
			{
				pointPosition = "pip_GPS_1";
				pointDirection = "pip_GPS_1_dir";
				renderQuality = 2;
				renderVisionMode = 0;
				fov = 0.7;
			};
			PIP_BB(4)
		};
	};

	class compartmentsLights
	{
		class Comp1
		{
			class Light_General
			{
				color[]				= {20,40,20};
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
			color[] = {7000, 7500, 10000, 1};
			ambient[] = {100, 100, 100};
			position="l svetlo";
			selection="l svetlo";
			direction="konec l svetla";
			hitpoint="l svetlo";
			innerAngle = 20;
			outerAngle = 60;
			coneFadeCoef = 10;
			intensity = 50;
			useFlare = true;
			dayLight = false;
			FlareSize = 1;
			size = 1;
			class Attenuation
			{
				constant=0;
				linear=0;
				quadratic=4;
				start=1;
				hardLimitStart 	= 150;
				hardLimitEnd 	= 300;
			};
		};
		class Right: Left
		{
			position="p svetlo";
			direction="konec p svetla";
			hitpoint="p svetlo";
			selection="p svetlo";
		};
	};

	aggregateReflectors[]=
	{
		{"Left"},{"Right"}
	};

	class EventHandlers : EventHandlers
	{
		hit = "";
		class RHS_EventHandlers
		{
			hit				= "_this call RHS_fnc_AI_eject";
			init			= "_this call rhs_fnc_air_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
			incomingMissile	= "_this call rhs_fnc_rwr_air";
			getout			= "[_this select 0, _this select 2,'rhs_t50_canopy'] call rhs_fnc_K36D_seatEjection";
			engine			= "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes;";
			//hitpart = "_this call rhs_fnc_hitPart";
		};
	};

	//Target params definitions
	irTarget = 1;
	irTargetSize = 0.5;

	visualTarget = 1;
	visualTargetSize = 1;

	radarTarget = 1;
	radarTargetSize = 0.4;

	LockDetectionSystem = 8;
	incomingMissileDetectionSystem = 16;

	//Sensors definition
	receiveRemoteTargets = 1;
	reportRemoteTargets = 1;
	reportOwnPosition = 1;

	class Components: Components
	{
		#include "dynamicLoadouts.hpp"
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					SENS_RANGES_WVR(16000,12000)
					angleRangeHorizontal	= 360;		// Sensor horizontal (azimuth) coverage (in degrees), define radar cone
					angleRangeVertical		= 120;			// Sensor vertical (elevation) coverage (in degrees), define radar cone
					maxTrackableSpeed		= 500;
				};

				class VisualSensorComponent : SensorTemplateVisual
				{
					SENS_RANGES_WVR(4000,3000)
					angleRangeHorizontal = 26;
					angleRangeVertical = 20;
					maxTrackableSpeed = 100;
					aimDown = 1;
					//animDirection = "pilotCameraRotY";
				};

				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};

				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					SENS_RANGES_BVR(32000,10000)

					typeRecognitionDistance	= 6000;		// Distance in meters at which the sensor recognizes the actual target vehicle type (e.g. Mi-48 Kajman)
					angleRangeHorizontal	= 60;		// Sensor horizontal (azimuth) coverage (in degrees), define radar cone
					angleRangeVertical		= 60;		// Sensor vertical (elevation) coverage (in degrees), define radar cone
					groundNoiseDistanceCoef	= 0.0004;  	// if distance between vehicle and ground in the direction of the target is 1km then the target won't be detected as long as it stays less than 100m close to the ground background
				};

				class LaserSensorComponent: SensorTemplateLaser {};
				class NVSensorComponent: SensorTemplateNV {};
				class DataLinkSensorComponent : SensorTemplateDataLink {};
			};
		};
		class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
		{
			class Components
			{
				CI_EMPTY
				CI_NAV
				CI_FEEDUAV
				class SensorDisplay
				{
					componentType	= "SensorsDisplayComponent";
					resource		= "RscCustomInfoSensors";
					range[]			= { 16000, 35000, 3000,8000 };
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
		{
			defaultDisplay = "SensorDisplay";
			class Components
			{
				CI_EMPTY
				CI_NAV
				CI_FEEDUAV
				class SensorDisplay
				{
					componentType	= "SensorsDisplayComponent";
					resource		= "RscCustomInfoSensors";
					range[]			= { 16000, 35000, 3000,8000 };
				};
			};
		};
	};
};
class RHS_T50_vvs_generic: RHS_T50_base
{
	EdPrev(rhs_T50_vvs_generic)
	AUTHOR_MACRO
	faction = "rhs_faction_vvs";
	crew = "rhs_pilot";
	typicalCargo[] = {"rhs_pilot"};
	scope = 2;
	side = 0;
	accuracy = 0.5;

};

class RHS_T50_vvs_generic_ext: RHS_T50_vvs_generic
{
	AUTHOR_MACRO
	displayName = "T-50 obr. 2011 (external pylons)";
	radarTargetSize = 0.8;
	class AnimationSources: AnimationSources
	{
		class pods_hide: pods_hide {initPhase = 0;};
	};
	class Components: Components
	{
		#include "dynamicLoadouts_external.hpp"
	};
};

class RHS_T50_vvs_051: RHS_T50_vvs_generic
{
	EdPrev(rhs_T50_vvs_051)
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	displayName = "$STR_T50_051_name";
	rhs_decalParameters[]={};
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_air\t50\data\pakfa_bluecamo_co.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\1_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
	};
	class AnimationSources: AnimationSources
	{
		class antenna_hide: antenna_hide {initPhase = 0;};
		class sensors_hide: sensors_hide {initPhase = 0;};
	};
};

class RHS_T50_vvs_052: RHS_T50_vvs_051
{
	EdPrev(rhs_T50_vvs_052)
	displayName = "$STR_T50_052_name";
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_air\t50\data\pakfa_greycamo_co.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\0_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\2_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
	};
};

class RHS_T50_vvs_053: RHS_T50_vvs_051
{
	EdPrev(rhs_T50_vvs_053)
	displayName = "$STR_T50_053_name";
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_air\t50\data\pakfa_bluecamo_co.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\0_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\3_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
	};
	class AnimationSources: AnimationSources
	{
		class antenna_hide: antenna_hide {initPhase = 1;};
	};
};

class RHS_T50_vvs_054: RHS_T50_vvs_051
{
	EdPrev(rhs_T50_vvs_054)
	displayName = "$STR_T50_054_name";
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_air\t50\data\pakfa_bluecamo_co.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\0_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\4_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
	};
	class AnimationSources: AnimationSources
	{
		class antenna_hide: antenna_hide {initPhase = 1;};
		class sensors_hide: sensors_hide {initPhase = 1;};
	};
};

class RHS_T50_vvs_blueonblue: RHS_T50_vvs_051
{
	EdPrev(rhs_T50_vvs_blueonblue)
	displayName = "$STR_T50_055_name";
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_air\t50\data\pakfa_blueonblue_co.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\0_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
	};
	class AnimationSources: AnimationSources
	{
		class antenna_hide: antenna_hide {initPhase = 0;};
		class sensors_hide: sensors_hide {initPhase = 1;};
	};
};


class Car_f;
class rhs_k36d5_seat: Car_f
{
	EdPrev(rhs_k36d5_seat)
	scope=1;
	scopeArsenal=0;
	scopeCurator=0;
	hiddenSelections[]={};

	AUTHOR_MACRO_BIS_PORT
	displayName = "K36D-5 Ejection Seat";

	Icon	= "iconParachute";
	picture	= "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
	model	= "\rhsafrf\addons\rhs_air\t50\rhs_k36d.p3d";

	simulation 					= "motorcycle";
	isBicycle	 				= 0;
	textureTrackWheel 			= "";
	memoryPointTrack1L 			= "";
	memoryPointTrack2L 			= "";
	memoryPointsGetInCargo		= "Cargo";
	memoryPointsGetInCargoDir	= "Cargo dir";
	ejectSpeed[]				= {10, 0, 10};
	unitInfoType				= "RscUnitInfoSoldier";
	hideUnitInfo				= 1;
	cargoAction[]				= {"RHS_K36D_PilotEject"};
	hasdriver					= 0;
	weapons[]					= {};
	magazines[]					= {};
	fuelCapacity				= 0;
	secondaryExplosion			= 0;
	fuelExplosionPower			= 0;
	explosionEffect				= "";
	destrType					= "DestructNo";
	castCargoShadow				= 1;
	transportSoldier			= 1;
	vehicleClass				= "Objects";
	occludeSoundsWhenIn			= 1;
	obstructSoundsWhenIn		= 1;
	driverRightHandAnimName		= "handle";
	driverLeftHandAnimName		= "handle";

	class AnimationSources
	{
		class hide_booster
		{
			source="user";
			animPeriod = 0.6;
			initPhase = 0;
		};
		class handle_move: hide_booster {};
	};
	class Turrets {};
	class MFD {};
	class RenderTargets {};
	class UserActions {};
	driveOnComponent[]={};
	class Eventhandlers {};
	SLX_XEH_DISABLED = 1;
};
class rhs_t50_canopy : ThingX {
	scope					= 1;
	scopeArsenal			= 0;
	scopeCurator			= 0;
	hiddenSelections[]		= {};
	displayName				= "T-50 Canopy";
	editorCategory			= "EdCat_Things";
	editorSubcategory		= "EdSubcat_Military";
	vehicleClass			= "Small_items";
	model					= "\rhsafrf\addons\rhs_air\t50\t50_canopy.p3d";
	armor					= 100;
	gearsUpFrictionCoef 	= 0.01;
	hasdriver				= 0;
	weapons[]				= {};
	magazines[]				= {};
	fuelCapacity			= 0;
	secondaryExplosion		= 0;
	fuelExplosionPower		= 0;
	explosionEffect			= "";
	destrType				="DestructNo";
	castCargoShadow			=1;
	transportSoldier		=0;
	occludeSoundsWhenIn		=1;
	obstructSoundsWhenIn	=1;
	class Eventhandlers
	{
		HandleDamage = "deleteVehicle (_this select 0)";
	};
	class MFD {};
	class RenderTargets {};
	class UserActions {};
	driveOnComponent[]={};
	SLX_XEH_DISABLED = 1;
};

class rhs_su25_canopy : rhs_t50_canopy {
	scope		= 1;
	displayName	= "Su-25 Canopy";
	model		="\rhsafrf\addons\rhs_a2port_air\su25\su25_canopy";
};

