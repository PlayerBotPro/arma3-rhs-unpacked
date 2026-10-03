
	class RHS_L159_base: Plane_Fighter_03_base_F
	{
		model		= "rhsgref\addons\rhsgref_air\L159\rhs_l159.p3d";
		displayName	= "$STR_RHSGREF_AIR_L159_NAME";
		dlc			= "RHS_GREF";

		vehicleClass = "rhs_vehclass_aircraft";

		selectionDashboard 	= "podsvit pristroju";
		unitInfoType		= "RHSGREF_RscUnitInfoJet";

		driverLeftHandAnimName	="throttle_pilot";
		driverRightHandAnimName	="stick_pilot";

		class pilotCamera {};
		class EjectionSystem {};
		driverCanEject = 1;

		class EventHandlers : EventHandlers
		{
			hit = "";
			class RHS_EventHandlers
			{
				hit		= "_this call RHS_fnc_AI_eject";
				init	= "_this call rhs_fnc_decalsReadParams";
				postInit = "_this call rhs_fnc_reapplyTextures";
				getout	= "[_this select 0, _this select 2] call rhs_fnc_vs1_seatEjection";
				engine	= "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes";
			};
		};
		class UserActions {};

		class HitPoints: HitPoints
		{
			class HitGlass2
			{
				armor=1;
				material = -1;
				name = "glass2";
				convexComponent = "glass2";
				visual = "glass2";
				passThrough = 0;
				class DestructionEffects {
					ammoExplosionEffect = "";
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1N_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2 {
						simulation = "particles";
						type = "BrokenGlass2N_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3 {
						simulation = "particles";
						type = "BrokenGlass3N_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4 {
						simulation = "particles";
						type = "BrokenGlass4N_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5 {
						simulation = "particles";
						type = "BrokenGlass5N_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6 {
						simulation = "particles";
						type = "BrokenGlass6N_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7 {
						simulation = "particles";
						type = "BrokenGlass7N_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass1S {
						simulation = "particles";
						type = "BrokenGlass1S_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2S {
						simulation = "particles";
						type = "BrokenGlass2S_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass3S {
						simulation = "particles";
						type = "BrokenGlass3S_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass4S {
						simulation = "particles";
						type = "BrokenGlass4S_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass5S {
						simulation = "particles";
						type = "BrokenGlass5S_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass6S {
						simulation = "particles";
						type = "BrokenGlass6S_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass7S {
						simulation = "particles";
						type = "BrokenGlass7S_0850_2250";
						position = "glass2_effect";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class RHS_ERA_Flash
					{
						simulation	= "particles";
						type		= RHS_ERA_Flash;
						position	= glass2_effect;
						intensity	= 0.5;
						interval	= 1;
						lifeTime	= 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation	= "sound";
						type		= RHS_ERA_Explosion_Sound;
						position	= glass2_effect;
						intensity	= 1;
						interval	= 1;
						lifeTime	= 0.005;
					};
					class RHS_ERA_Smoke
					{
						simulation	= "particles";
						type		= RHS_ERA_Smoke;
						position	= glass2_effect;
						intensity	= 0.1;
						interval	= 1;
						lifeTime	= 0.04;
					};
				};
			};

			HP_PYLON(1,0.7)
			HP_PYLON(2,0.7)
			HP_PYLON(3,0.7)
			HP_PYLON(4,0.7)
			HP_PYLON(5,0.7)
			HP_PYLON(6,0.7)
			HP_PYLON(7,0.7)
			};
		class AnimationSources: AnimationSources{
			class HitGlass2 {
				source = "Hit";
				hitpoint = "HitGlass2";
				raw = 1;
			};
			class eject
			{
				source="user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class eject_hide
			{
				source="user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class Damper_1_source			{source = damper; wheel = Wheel_1;};
			class Damper_2_source			{source = damper; wheel = Wheel_2;};
			class Damper_3_source			{source = damper; wheel = Wheel_3;};
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source			{source = wheel; wheel = Wheel_3;};

			ANIM_PYLON(1)
			ANIM_PYLON(2)
			ANIM_PYLON(3)
			ANIM_PYLON(4)
			ANIM_PYLON(5)
			ANIM_PYLON(6)
			ANIM_PYLON(7)
		};
		hiddenselections[] =
		{
			"camo1",
			"camo2",
			"i1",
			"i2",
			"n1",
			"n2"
		};
		hiddenselectionstextures[] =
		{
			"\rhsgref\addons\rhsgref_air\l159\data\l159_body_1_co.paa",
			"\rhsgref\addons\rhsgref_air\l159\Data\l159_body_2_co.paa"
		};


		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_Plane_Fighter_03_base_F_Library0";
		};

		class MarkerLights
		{
			class PositionRed
			{
				color[] = {1,0.0,0.0};
				ambient[] = {0.1,0.0,0.0};
				intensity = 75;
				name = "cerveny pozicni";
				drawLight = 1;
				drawLightSize = 0.15;
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
				color[] = {0.0,1,0.0};
				ambient[] = {0.0,0.1,0.0};
				name = "zeleny pozicni";
			};
			class PositionWhite: PositionRed
			{
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				name = "light_nav_back";
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
			class Center: Left
			{
				position="svetlo";
				direction="svetlo dir";
				hitpoint="svetlo";
				selection="svetlo";
			};
		};

		aggregateReflectors[]=
		{

			{"Left"},{"Right"},{"Center"}
		};

		class Exhausts
		{
			class Exhaust_1
			{
				position = "exhaust_start";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectJet";
			};
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

		//driverAction	= Plane_Fighter_03_pilot;
		driverAction = RHS_L159_pilot;
		envelope[]			= {0.0,0.15,1.1,3,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0};

		weapons[] = {};
		magazines[] = {};

		class Damage
		{
			tex[]={};
			mat[]=
			{
			"rhsgref\addons\rhsgref_air\L159\data\L159_body_1.rvmat",
			"rhsgref\addons\rhsgref_air\L159\data\L159_body_1_damage.rvmat",
			"rhsgref\addons\rhsgref_air\L159\data\L159_body_1_destruct.rvmat",

			"rhsgref\addons\rhsgref_air\L159\data\L159_body_2.rvmat",
			"rhsgref\addons\rhsgref_air\L159\data\L159_body_2_damage.rvmat",
			"rhsgref\addons\rhsgref_air\L159\data\L159_body_2_destruct.rvmat",

			"rhsgref\addons\rhsgref_air\L159\data\L159_glass.rvmat",
			"rhsgref\addons\rhsgref_air\L159\data\L159_glass_damage.rvmat",
			"rhsgref\addons\rhsgref_air\L159\data\L159_glass_destruct.rvmat",

			"rhsgref\addons\rhsgref_air\L159\data\L159_glass_in.rvmat",
			"rhsgref\addons\rhsgref_air\L159\data\L159_glass_damage.rvmat",
			"rhsgref\addons\rhsgref_air\L159\data\L159_glass_destruct.rvmat"
			};
		};
		//#include "mfd.hpp"
		class Components: Components
		{
			#include "dynamicLoadouts_L159.hpp"
		};
	};
	class rhs_l159_CDF: RHS_L159_base
	{
		EdPrev(rhs_l159_CDF)
		AUTHOR_MACRO_BIS_PORT
		scope = 2;
		side = 2;
		dlc = "RHS_GREF";

		rhs_decalParameters[]={
			"['Number',[4,5],'AviaCDF']",
			"['Label',[2],'Aviation', 5]",
			"['Label',[3],'AviationSquadronsCDFGrey']"
		};

		faction = "rhsgref_faction_cdf_air";
		crew = "rhsgref_cdf_air_pilot";
		typicalCargo[] = {"rhsgref_cdf_air_pilot"};
	};

	class rhs_l159_CDF_plamen: rhs_l159_CDF
	{
		EdPrev(rhs_l159_CDF_plamen)
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		displayName = "L-159 (Plamen)";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Pylons: Pylons
				{
					class Pylons1: Pylons1 {};
					class Pylons2: Pylons2 {};
					class Pylons3: Pylons3 {attachment = rhs_mag_agm65b;};
					class Pylons4: Pylons4 {attachment = rhs_mag_zpl20_mixed;};
					class Pylons5: Pylons5 {attachment = rhs_mag_agm65b;};
					class Pylons6: Pylons6 {};
					class Pylons7: Pylons7 {};
					class cmDispenser: cmDispenser {};
				};
			};
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
	};
	class rhs_l159_CDF_CAP: rhs_l159_CDF
	{
		EdPrev(rhs_l159_CDF_CAP)
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		displayName = "L-159 (CAP)";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Pylons: Pylons
				{
					class Pylons1: Pylons1 {};
					class Pylons2: Pylons2 {attachment = rhs_mag_aim120;};
					class Pylons3: Pylons3 {attachment = rhs_mag_aim120;};
					class Pylons4: Pylons4 {};
					class Pylons5: Pylons5 {attachment = rhs_mag_aim120;};
					class Pylons6: Pylons6 {attachment = rhs_mag_aim120;};
					class Pylons7: Pylons7 {};
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};
	class rhs_l159_CDF_CAS: rhs_l159_CDF
	{
		EdPrev(rhs_l159_CDF_CAS)
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		displayName = "L-159 (CAS)";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Pylons: Pylons
				{
					class Pylons1: Pylons1 {};
					class Pylons2: Pylons2 {attachment = rhs_mag_FFAR_7_USAF;};
					class Pylons3: Pylons3 {attachment = rhs_mag_FFAR_7_USAF;};
					class Pylons4: Pylons4 {attachment = rhs_mag_zpl20_mixed;};
					class Pylons5: Pylons5 {attachment = rhs_mag_FFAR_7_USAF;};
					class Pylons6: Pylons6 {attachment = rhs_mag_FFAR_7_USAF;};
					class Pylons7: Pylons7 {};
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};

	class RHS_L39_base: RHS_L159_base
	{
		scope					= 0;
		dlc						= "RHS_GREF";
		displayName				= "$STR_RHSGREF_AIR_L39C_NAME";
		model					= "rhsgref\addons\rhsgref_air\L39\rhs_l39.p3d";
		driverAction			= RHS_L39_pilot;
		driverLeftHandAnimName	= "throttle_lever";

		thrustCoef[] = {1.8,1.5,1.4,1.3,1.3,1.3,1.3,1.2,1.1,0.8,0.6,0.4,0.3,0.0,0.0,0.0};
		envelope[] = {0.0,0.15,1.1,3,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "cerveny pozicni";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "zeleny pozicni";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vertex_left";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vertex_right";
			};
		};

		class AnimationSources: AnimationSources{};
		rhs_decalParameters[]={
			"['Number',[4,5],'AviaCDF']",
			"['Label',[2],'Aviation', 4]",
			"['Label',[3],'AviationSquadronsCDF', 2]"
		};

		hiddenselectionstextures[] =
		{
			"\rhsgref\addons\rhsgref_air\L39\Data\l-39_body_co.paa",
			"\rhsgref\addons\rhsgref_air\L39\Data\l-39_body_1_co.paa"
		};

		class Damage
			{
				tex[]={};
				mat[]=
				{
					"rhsgref\addons\rhsgref_air\L39\Data\l-39_body_1.rvmat",
					"rhsgref\addons\rhsgref_air\L39\data\l-39_body_1_damage.rvmat",
					"rhsgref\addons\rhsgref_air\L39\data\l-39_body_1_destruct.rvmat",

					"rhsgref\addons\rhsgref_air\L39\data\l-39_body.rvmat",
					"rhsgref\addons\rhsgref_air\L39\data\l-39_body_damage.rvmat",
					"rhsgref\addons\rhsgref_air\L39\data\l-39_body_destruct.rvmat",

					"rhsgref\addons\rhsgref_air\L39\data\l-39_glass.rvmat",
					"rhsgref\addons\rhsgref_air\L39\data\l-39_glass_damage.rvmat",
					"rhsgref\addons\rhsgref_air\L39\data\l-39_glass_destruct.rvmat",

					"rhsgref\addons\rhsgref_air\L39\data\l-39_glass_in.rvmat",
					"rhsgref\addons\rhsgref_air\L39\data\l-39_glass_damage.rvmat",
					"rhsgref\addons\rhsgref_air\L39\data\l-39_glass_destruct.rvmat"
				};
			};
		#include "mfd_l39.hpp"
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar{};
				};
			};
			#include "dynamicLoadouts_L39.hpp"
		};
	};
	class rhs_l39_cdf: RHS_L39_base
	{
		EdPrev(rhs_l39_cdf)
		AUTHOR_MACRO_BIS_PORT
		scope			= 2;
		side			= 2;
		faction			= "rhsgref_faction_cdf_air";
		crew			= "rhsgref_cdf_air_pilot";
		typicalCargo[]	= {"rhsgref_cdf_air_pilot"};
	};
class Car_f;
class rhs_vs1_seat: Car_f
{
	scope=1;
	scopeArsenal=0;
	scopeCurator=0;
	hiddenSelections[]={};

	AUTHOR_MACRO_BIS_PORT
	displayName = "VS-1 Ejection Seat";

	Icon	= "iconParachute";
	picture	= "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
	model	= "rhsgref\addons\rhsgref_air\L39\rhs_vs1.p3d";

	simulation 					= "motorcycle";
	isBicycle	 				= 0;
	textureTrackWheel 			= "";
	memoryPointTrack1L 			= "";
	memoryPointTrack2L 			= "";
	memoryPointsGetInCargo		= "Cargo";
	memoryPointsGetInCargoDir	= "Cargo dir";
	ejectSpeed[]				= {1, 0, 1};
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
	class UserActions {};
	driveOnComponent[]={};
	class Eventhandlers {};
	SLX_XEH_DISABLED = 1;
};

//BLUFOR VARIANTS

#define CDF_BLUFOR_MACRO \
	faction = rhsgref_faction_cdf_air_b; \
	crew = "rhsgref_cdf_b_air_pilot";\
	side = 1; \
	author=$STR_RHS_AUTHOR_FULL;\
	forceInGarage = 0;\
	scope = 2;\
	scopeCurator = 2;

#define CDF_BLUFOR_MACRO_ZEUS \
	faction = rhsgref_faction_cdf_air_b; \
	crew = "rhsgref_cdf_b_air_pilot";\
	side = 1; \
	author=$STR_RHS_AUTHOR_FULL;\
	forceInGarage = 0;\
	scope = 1;\
	scopeCurator = 2;

class rhs_l159_cdf_b_CDF: rhs_l159_CDF {EdPrev(rhs_l159_cdf_b_CDF) CDF_BLUFOR_MACRO};
class rhs_l159_cdf_b_CDF_plamen: rhs_l159_CDF_plamen {EdPrev(rhs_l159_cdf_b_CDF_plamen) CDF_BLUFOR_MACRO_ZEUS};
class rhs_l159_cdf_b_CDF_CAP: rhs_l159_CDF_CAP {EdPrev(rhs_l159_cdf_b_CDF_CAP) CDF_BLUFOR_MACRO_ZEUS};
class rhs_l159_cdf_b_CDF_CAS: rhs_l159_CDF_CAS {EdPrev(rhs_l159_cdf_b_CDF_CAS) CDF_BLUFOR_MACRO_ZEUS};
class rhs_l39_cdf_b_cdf: rhs_l39_cdf {EdPrev(rhs_l39_cdf_b_cdf) CDF_BLUFOR_MACRO};
