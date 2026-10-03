class RHS_TU95MS_base: Plane_Base_F
{
	EdPrev(RHS_TU95MS_vvs_old)
	faction = "rhs_faction_vvs";
	dlc = "RHS_AFRF";
	category = "Air";
	side = 0;
	rhs_decalParameters[]=
	{
		"['Number',cRHSAIRTU95NumberPlaces,'AviaRed2']"
	};
	scope		= 0;
	displayName	= "$STR_TU95_name";
	model		= "\rhsafrf\addons\rhs_air\tu95ms\rhs_tu95ms";
	destrType	= "DestructWreck";
	picture		="\rhsafrf\addons\rhs_air\tu95ms\data\ui\tu95_icon.paa";
	icon		="\rhsafrf\addons\rhs_air\tu95ms\data\ui\icomap_tu95.paa";

	memoryPointsGetInDriver			="pos driver";
	memoryPointsGetInDriverDir		="pos driver dir";
	memoryPointsGetInDriverPrecise	="pos driver";

	driverLeftHandAnimName	="pilotyoke";
	driverRightHandAnimName	="pilotyoke";
	driverLeftLegAnimName	= "pilotpedal_L";
	driverRightLegAnimName	= "pilotpedal_R";


	AUTHOR_MACRO
	driverAction = "RHS_TU95_Pilot";
	crew = "rhs_pilot";
	typicalCargo[] = {"rhs_pilot","rhs_pilot","rhs_pilot","rhs_pilot","rhs_pilot","rhs_pilot","rhs_pilot"};

	memoryPointsGetInCargo[]=
	{
		"pos driver"
	};
	memoryPointsGetInCargoDir[]=
	{
		"pos driver dir"
	};

	cargoAction[]=
	{
		"Truck_Cargo01",
		"Truck_Cargo04",
		"Truck_Cargo04",
		"Truck_Cargo02",
		"Truck_Cargo01",
		"Truck_Cargo04",
		"Truck_Cargo01"
	};

	transportSoldier=0;
	gunnerUsesPilotView=1;
	cargoIsCoDriver[]={0,0};
	getInAction = RHS_HIND_Cargo_Enter;
	getOutAction = GetOutHigh;
	cargoGetInAction[] = {"RHS_HIND_Cargo_Enter"};
	cargoGetOutAction[] = {"GetOutHigh"};

	#include "sound_config.hpp"
	class Components: Components
	{
		#include "dynamicLoadouts.hpp"

		class SensorsManagerComponent
		{
			class Components
			{
				class PassiveRadarSensorComponent : SensorTemplatePassiveRadar {};
			};
		};

		class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
		{
			class Components : components
			{
				CI_EMPTY
				CI_CREW
			};
		};

		class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
		{
			defaultDisplay = "SensorDisplay";
			class Components : components
			{
				CI_EMPTY
				CI_CREW
			};
		};
	};

	armor=50;

	//Target params definitions
	irTarget = 1;
	irTargetSize = 1.2;

	visualTarget = 1;
	visualTargetSize = 1.6;

	radarTarget = 1;
	radarTargetSize = 1.6;

	gearUpTime=26;
	gearDownTime=24;
	wheelSteeringSensitivity=2.5;

	cabinOpening = 0;
	airBrake = 0;
	lightOnGear = 1;
	driverCanEject = 0;
	class EjectionSystem {};

	landingAoa			="rad 10";
	angleOfIndicence	="rad 3";
	landingSpeed		=240;
	acceleration		=1775;
	takeoffSpeed		=290;

	altFullForce = 9000;
	altNoForce = 20000;

	maxSpeed				=920;
	slowSpeedForwardCoef	= 0.6;

	aileronSensitivity				=0.35;
	elevatorSensitivity				=0.45;
	rudderInfluence					=0.015;
	aileronControlsSensitivityCoef	=1.2;
	elevatorControlsSensitivity		=1;
	rudderControlsSensitivityCoef	=0.8;
	elevatorCoef[]					={ 0, 0.6, 1.15, 1.45, 1.65, 1.65, 1.65, 1.35, 0.9, 0.57, 0.35, 0.2, 0.1,0,0,0};
	aileronCoef[]					={0,0.4,0.75,0.9,1.0,1.0,1.0,1.0,0.85,0.65,0.4,0.1,0,0,0,0};
	rudderCoef[]					={0,0.1,0.35,0.5,0.6,0.6,0.45,0.35,0.2,0.1,0,0,0,0,0,0};

	flapsFrictionCoef=0.5;

	draconicForceXCoef=10.0;
	draconicForceYCoef=0.25;
	draconicForceZCoef=0.1;

	draconicTorqueXCoef=0.15;
	draconicTorqueYCoef=0.1;

	// More Realistic
	envelope[]={ 0.1, 0.1, 0.65, 1.75, 2.5, 3, 3, 2.5, 1.75, 1.35, 1, 0.5, 0};
	//envelope[]={ 0.1, 0.1, 0.55, 1, 2, 2.5, 2.5, 2.05, 1.75, 1.35, 1, 0.5, 0};
	thrustCoef[]={ 0.45, 0.65, 0.65, 0.75, 0.95, 1.25, 1.25, 1.4, 1.35, 1.25, 1.2, 1.1, 1,0.75,0.55,0};


	class Turrets: Turrets
	{
		class MainTurret: NewTurret
		{
			proxyindex = 1;
			isCopilot=1;
			primaryGunner=0;
			canEject=0;
			body="";
			gun="";
			startEngine = 0;
			animationSourceBody="";
			animationSourceGun="";
			weapons[]={};
			magazines[]={};
			gunnerAction="RHS_TU95_Pilot";
			gunnerInAction="RHS_TU95_Pilot";
			gunnerName="$STR_A3_COPILOT";
			gunnerGetInAction = "RHS_HIND_Cargo_Enter";
			gunnerNotSpawned=0;
			gunnerUsesPilotView=1;
			gunnerCompartments = "Compartment1";
			hasGunner=1;
			memoryPointsGetInGunner="pos driver";
			memoryPointsGetInGunnerDir="pos driver dir";
			minElev=-50;
			maxElev=30;
			initElev=11;
			minTurn=-170;
			maxTurn=170;
			initTurn=0;
			maxHorizontalRotSpeed=3;
			maxVerticalRotSpeed=3;
			class ViewGunner: ViewGunner
			{
				minAngleX=-65;
				maxAngleX=85;
				initAngleX=0;
				minAngleY=-150;
				maxAngleY=150;
				initAngleY=0;
				minFov=0.3;
				maxFov=1.2;
				initFov=1;
			};
			commanding=-1;
			gunnerLeftHandAnimName="copilotyoke";
			gunnerRightHandAnimName="copilotyoke";
			gunnerLeftLegAnimName="copilotpedal_L";
			gunnerRightLegAnimName="copilotpedal_R";
			turretCanSee=15;
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
				{
					class Components : components
					{
						CI_EMPTY
						CI_CREW
					};
				};

				class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
				{
					defaultDisplay = "SensorDisplay";
					class Components : components
					{
						CI_EMPTY
						CI_CREW
					};
				};
			};
			class Hitpoints {};
		};

		class MainTurret2: MainTurret
		{
			proxyindex = 2;
			isCopilot = 0;
			showAsCargo = 1;
			primaryGunner=0;
			gunnerName="$STR_RHS_FLIGHTENGINEER";
			gunnerAction="Truck_Cargo01";
			gunnerInAction="Truck_Cargo01";
			gunnerLeftHandAnimName="";
			gunnerRightHandAnimName="";
			gunnerLeftLegAnimName="";
			gunnerRightLegAnimName="";
		};

		class MainTurret3: MainTurret2
		{
			proxyindex = 3;
			gunnerName="$STR_RHS_RADIOOPERATOR";
		};

		class MainTurret4: MainTurret2
		{
			proxyindex = 4;
			gunnerName="$STR_RHS_WEAPONSENGINEER";
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
				{
					class Components : components
					{
						CI_EMPTY
						CI_CREW
						class SensorDisplay
						{
							componentType	= "SensorsDisplayComponent";
							resource		= "RscCustomInfoSensors";
							range[]			= { 3000,8000,16000,35000 };
						};
					};
				};

				class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
				{
					defaultDisplay = "SensorDisplay";
					class Components : components
					{
						CI_EMPTY
						CI_CREW
						class SensorDisplay
						{
							componentType	= "SensorsDisplayComponent";
							resource		= "RscCustomInfoSensors";
							range[]			= { 3000,8000,16000,35000 };
						};
					};
				};
			};
		};

		class MainTurret5: MainTurret4
		{
			proxyindex = 6;
			gunnerName="$STR_RHS_NAVIGATIONPLOTTER";
			primaryGunner =1 ; // engine show magazine proxies only for pilot & primaryGunner
			showAsCargo = 0;
			weapons[] =
			{
				//"rhs_weap_kh55sm_Dummy_Launcher"
			};

			magazines[] =
			{
				//"rhs_mag_kh55sh_6"
			};
			weaponsOnUnDeploy[] = {"rhs_weap_kh55sm_Dummy_Launcher"};
			weaponsOnDeploy[] = {"rhs_weap_kh55sm_Launcher"};
			missileBeg = "missile_pos";
			missileEnd = "missile_dir";
		};

		class RearTurret: MainTurret2
		{
			proxyindex = 7;
			canEject=1;
			gunnerName="Rear Gunner";
			memoryPointsGetInGunner="reargunner_pos";
			memoryPointsGetInGunnerDir="reargunner_dir";

			gunnerAction="RHS_TU95_RearGunner";
			gunnerInAction="RHS_TU95_RearGunner";
			gunnerLeftHandAnimName="collimator_turret";
			gunnerRightHandAnimName="collimator_turret";
			gunnerLeftLegAnimName="reargunner_leg_left";
			gunnerRightLegAnimName="reargunner_leg_right";
			gunnerCompartments = "Compartment2";
			lodTurnedIn=1200;
			lodTurnedOut=1200;
			lodOpticsIn=1200;
			lodOpticsOut=1200;

			body="gunnerballY";
			gun="gunnerballX";
			animationSourceBody="rear_turret";
			animationSourceGun="rear_gun";
			memoryPointGun[] = {"chase01","chase02","chase03","chase04"};
			//gunBeg[] = {"chase01dir","chase02dir","chase03dir","chase04dir"};
			//gunEnd[] = {"chase01","chase02","chase03","chase04"};
			gunBeg = "chase01dir";
			gunEnd = "chase01";
			selectionFireAnim="rearFlash";
			castGunnerShadow=1;
			viewGunnerShadow=1;

			weapons[]=
			{
				"RHS_Weap_GSh23Lx2"
			};
			magazines[]=
			{
				"rhs_mag_AM23_500"
			};

			minElev=-35;
			maxElev=35;
			initElev=0;
			minTurn=-245;
			maxTurn=-115;
			initTurn=-180;
			canUseScanners = 0;
			allowTabLock = 0;
			outGunnerMayFire=1;
			stabilizedInAxes=3;
			memoryPointGunnerOptics="reargunnerview";
			gunnerForceOptics=0;
			class OpticsIn
			{
				class KPS53AV
				{
					opticsDisplayName = "KPS53AV";
					gunneropticsmodel= "\A3\weapons_f\reticle\optics_empty";
					initanglex=0;
					initangley=0;
					maxanglex=30;
					maxangley=100;
					minfov = 0.275;
					maxfov = 1.1;
					initfov = 0.75;
					minanglex=-30;
					minangley=-100;
					thermalmode[]={0,1};
				};
			};
			class OpticsOut
			{
				class KPS53AV
				{
					gunneropticsmodel= "\A3\weapons_f\reticle\optics_empty";
					initanglex=0;
					initangley=0;
					maxanglex=30;
					maxangley=100;
					minfov = 0.275;
					maxfov = 1.1;
					initfov = 0.75;
					minanglex=-30;
					minangley=-100;
					thermalmode[]={0,1};
					visionmode[]=
					{
						"Normal"
					};
				};
			};
		};
		class MainTurret6: MainTurret2
		{
			proxyindex = 5;
			gunnerName="$STR_RHS_INSTRUCTOR";
			dontCreateAI = 1;
		};
	};


	//Slightly unrealistic. Startable on Stratis and Tanoa
	//envelope[] = {0,0.15,0.95,1.6,2.5,3.0,3.0,3.0,2.9,2.6,2.1,1.35,0};
	//thrustCoef[] = {1.0,1.2,1.4,1.6,1.5,1.2,0.9,0.6,0.2,0.1,0.05,0.05,0,0,0,0};



	class Damage
	{
		tex[]={};
		mat[]=
		{
			"rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_body.rvmat",
			"rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_body_damage.rvmat",
			"rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_destr.rvmat",

			"rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_wing.rvmat",
			"rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_wing_damage.rvmat",
			"rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_destr.rvmat",

			"a3\data_f\default.rvmat",
			"a3\data_f\default.rvmat",
			"rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_destr.rvmat"
		};
	};

	class UserActions
	{
		class ControlPanel
		{
			displayName = $STR_RHS_ss21_control_panel;
			position = "zamerny";
			radius = 10.010000;
			onlyForplayer = 0;
			condition = (alive this)&&((call rhs_fnc_findPlayer)==(gunner this));
			statement = "createDialog 'tu95_main_dialog'";
		};
		// emergency eject
		class crewEject
		{
			displayName="Eject";
			position="";
			radius = 52;
			priority = 1.5;
			showWindow = 0;
			onlyForplayer = 1;
			condition = (findPlayer in this) AND (findPlayer != this turretUnit [5]) AND (this animationSourcePhase 'gear' < 0.4);
			statement = moveOut findPlayer;
		};
	};

	weapons[] =
	{
	};

	magazines[] =
	{
	};

	hiddenselections[] =
	{
		"i1", 	// City Coat of Arms
		"i2",		// City Name
		"i3",		// Russian Stars
		"n1", 	// Nose Decal Number 1
		"n2" 		// Nose Decal Number 2
	};

	hiddenselectionstextures[] =
	{
		"",
		"",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_old_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
	};

	class textureSources
	{
		class Old
		{
			displayName = "$STR_TU95_name";
			AUTHOR_MACRO
			textures[]=
			{
				"",
				"",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_old_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
			};
			factions[]=
			{
				rhs_faction_vvs
			};
		};

		class standard: Old
		{
			displayName = "$STR_TU95_chelyabinsk_name";
			AUTHOR_MACRO
			textures[]=
			{
				"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_chelyabinsk_coa_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_chelyabinsk_name_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa"
			};
		};
		class standard2: standard
		{
			displayName = "$STR_TU95_dubna_name";
			AUTHOR_MACRO
			textures[]=
			{
				"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_dubna_coa_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_dubna_name_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed2\2_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed2\0_ca.paa"
			};
		};
		class standard3: standard
		{
			displayName = "$STR_TU95_irkutsk_name";
			AUTHOR_MACRO
			textures[]=
			{
				"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_irkutsk_coa_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_irkutsk_name_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\0_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\1_ca.paa"
			};
		};
		class standard4: standard
		{
			displayName = "$STR_TU95_tambov_name";
			AUTHOR_MACRO
			textures[]=
			{
				"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_tambov_coa_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_tambov_name_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
				"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
			};
		};
	};
	textureList[]=
	{
	};

	class Attributes {
		class rhs_decalNumber_type {
			displayName = "Define font type of side number";
			tooltip = "Define kind of font that will be drawn on vehicle";
			property = "rhs_decalNumber_type";
			control = "Combo";
			expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRTU95NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			defaultValue = 0;
			typeName = "STRING";
			class values {
				class AviaRed {
					name = "Aviation Red 1";
					value = "AviaRed";
				};

				class AviaRed2 {
					name = "Aviation Red 2";
					value = "AviaRed2";
				};

				class AviaRed3 {
					name = "Aviation Red 3";
					value = "AviaRed3";
				};

				class AviaRed4 {
					name = "Aviation Red 4";
					value = "AviaRed4";
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
			expression = "if(parseNumber _value >= 0)then{if(parseNumber _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRTU95NumberPlaces}else{[_this, [['Number', cRHSAIRTU95NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaBlue'],parseNumber _value] ] ] call rhs_fnc_decalsInit}};";
		};

		class rhs_decalNames {
			displayName = "Define City Names Art";
			tooltip = "Define City Names texture located on side under the cockpit. Appears on both sides";
			property = "rhs_decalNoseArt";
			control = "Combo";
			expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRTU95NamePlaces, 'AviationsSquadrons',_value] ] ] call rhs_fnc_decalsInit};";
			defaultValue = "-1";
			typeName = "Number";
			class values
			{
				class Random {
					name = "Random";
					value = -1;
					defaultValue = -1;
				};
				class Empty {
					name = "Empty";
					value = 0;
				};
			};
		};

		class rhs_decalCoA {
			displayName = "Define City Coat of Arms Art";
			tooltip = "Define City Coat of Arms texture located on nose. Appears on both sides";
			property = "rhs_decalNoseArt";
			control = "Combo";
			expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRTU95COAPlaces, 'AviationsSquadrons',_value] ] ] call rhs_fnc_decalsInit};";
			defaultValue = "-1";
			typeName = "Number";
			class values
			{
				class Random {
					name = "Random";
					value = -1;
					defaultValue = -1;
				};
				class Empty {
					name = "Empty";
					value = 0;
				};
			};
		};
		class rhs_decalStarArt: rhs_decalCoA {
			displayName = "Define Stars Art";
			tooltip = "Define Stars Art texture located on wings";
			property = "rhs_decalStarArt";
			expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRTU95StarPlaces, 'Aviation',_value] ] ] call rhs_fnc_decalsInit};";
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
		class bbcpoccnn_decals1_hide {
			displayName = "Remove Part One of VVS Decal";
			property = "bbcpoccnn_decals1_hide";
			control = "CheckboxNumber";
			expression = "_this animate ['bbcpoccnn_decals1_hide',_value,true]";
			defaultValue = "1";
		};

		class bbcpoccnn_decals2_hide {
			displayName = "Remove Part Two of VVS Decal";
			property = "bbcpoccnn_decals2_hide";
			control = "CheckboxNumber";
			expression = "_this animate ['bbcpoccnn_decals2_hide',_value,true]";
			defaultValue = "1";
		};
		class rf_decals_hide: bbcpoccnn_decals2_hide {
			displayName = "Remove RF- Decal";
			property = "rf_decals_hide";
			expression = "_this animate ['rf_decals_hide',_value,true]";
			defaultValue = "1";
		};
	};


	class HitPoints: HitPoints
	{
		class HitHull: HitHull
		{
			armor = 3;
			explosionShielding = 5;
			name = "HitHull";
			passThrough = 0.5;
			visual = "hull_hit";
			radius = 0.3;
			minimalHit = 0.02;
			depends = "Total";
			material = -1;
		};
		class HitEngine_1: HitHull
		{
			armor = 1.5;
			explosionShielding = 2;
			name = "engine_1_hit";
			passThrough = 0.5;
			visual = "engine_1_vis";
			radius = 0.55;
			minimalHit = 0.1;
		};
		class HitEngine_2: HitHull
		{
			armor = 1.5;
			explosionShielding = 2;
			name = "engine_2_hit";
			passThrough = 0.5;
			visual = "engine_2_vis";
			radius = 0.55;
			minimalHit = 0.1;
		};
		class HitEngine: HitHull
		{
			armor = 1.5;
			explosionShielding = 2;
			name = "engine_1_hit";
			passThrough = 0.5;
			visual = "-";
			radius = 0.55;
			minimalHit = 0.1;
			depends = "(HitEngine_1 + HitEngine_2)*0.5";
		};
		class HitEngine_3: HitHull
		{
			armor = 1.5;
			explosionShielding = 2;
			name = "engine_3_hit";
			passThrough = 0.5;
			visual = "engine_3_vis";
			radius = 0.55;
			minimalHit = 0.1;
		};
		class HitEngine_4: HitHull
		{
			armor = 1.5;
			explosionShielding = 2;
			name = "engine_4_hit";
			passThrough = 0.5;
			visual = "engine_4_vis";
			radius = 0.55;
			minimalHit = 0.1;
		};
		class HitEngine2: HitEngine
		{
			armor = 1.5;
			explosionShielding = 2;
			name = "engine_2_hit";
			passThrough = 0.5;
			visual = "-";
			radius = 0.55;
			minimalHit = 0.1;
			depends = "(HitEngine_3 + HitEngine_4)*0.5";
		};
		class HitAvionics: HitHull
		{
			armor = 3;
			explosionShielding = 1;
			name = "HitAvionics";
			passThrough = 0.2;
			visual = "-";
			radius = 0.2;
		};
		class HitAmmo: HitHull
		{
			armor = 3;
			explosionShielding = 1;
			name = "revolver_hit";
			passThrough = 0;
			visual = "-";
			radius = 0.3;
		};
		class HitFuel: HitHull
		{
			armor = 3;
			explosionShielding = 4;
			name = "fuel_central";
			passThrough = 0.5;
			visual = "-";
			radius = 0.3;
			minimalHit = 0.1;
		};
		class HitFuel_left_wing: HitFuel
		{
			name = "fuel_left_wing";
			visual = "Aileron_1";
		};
		class HitFuel_right_wing: HitFuel
		{
			name = "fuel_right_wing";
			visual = "Aileron_2";
		};
		class HitFuel2: HitFuel
		{
			armor = 3;
			explosionShielding = 4;
			name = "fuel_central";
			passThrough = 0.5;
			visual = "-";
			radius = 0.3;
			minimalHit = 0.1;
			depends = "(HitFuel_left_wing + HitFuel_right_wing)*0.5";
		};
		class HitLAileron: HitHull
		{
			armor = 1.5;
			explosionShielding = 3;
			name = "HitLAileron";
			passThrough = 0.1;
			visual = "Aileron_1";
			radius = 0.2;
			minimalHit = 0.1;
		};
		class HitRAileron: HitLAileron
		{
			armor = 1.5;
			explosionShielding = 3;
			name = "HitRAileron";
			passThrough = 0.1;
			visual = "Aileron_2";
			radius = 0.2;
			minimalHit = 0.1;
		};
		class HitLCRudder: HitHull
		{
			armor = 1.5;
			explosionShielding = 3;
			name = "HitRudder";
			passThrough = 0.1;
			visual = "Rudder_1_vis";
			radius = 0.2;
			minimalHit = 0.1;
		};
		class HitLCElevator: HitHull
		{
			armor = 1.5;
			explosionShielding = 3;
			name = "HitLCElevator";
			passThrough = 0.1;
			visual = "Elevator_1_vis";
			radius = 0.2;
			minimalHit = 0.1;
		};
		class HitRElevator: HitLCElevator
		{
			armor = 1.5;
			explosionShielding = 3;
			name = "HitRElevator";
			passThrough = 0.1;
			visual = "Elevator_2_vis";
			radius = 0.2;
			minimalHit = 0.1;
		};
	};

	extCameraPosition[]={0,5,-65};

	unitInfoType = "RHS_RscUnitInfoAirPlane";
	//driverCanSee = 1+2+4+8+16;
	driverCompartments = "Compartment1";

	#include "physx_Tu95.hpp"

	driveOnComponent[]= {};

	class Exhausts
	{
		class Exhaust1
		{
			position="exhaust1";
			direction="exhaust1_dir";
			effect="ExhaustsEffectPlaneBig";
		};
		class Exhaust2
		{
			position="exhaust2";
			direction="exhaust2_dir";
			effect="ExhaustsEffectPlaneBig";
		};
		class Exhaust3
		{
			position="exhaust3";
			direction="exhaust3_dir";
			effect="ExhaustsEffectPlaneBig";
		};
		class Exhaust4
		{
			position="exhaust4";
			direction="exhaust4_dir";
			effect="ExhaustsEffectPlaneBig";
		};
	};

	class Reflectors
	{
		class Left
		{
			color[] = {7000, 7500, 10000, 1};
			ambient[] = {100, 100, 100};
			position="gearlight_1_pos";
			selection="gearlight_1_sel";
			direction="gearlight_1_dir";
			hitpoint="l svetlo";
			innerAngle = 20;
			outerAngle = 60;
			coneFadeCoef = 10;
			intensity = 50;
			useFlare = true;
			dayLight = false;
			FlareSize = 2;
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
		class Left_Flare: Left
		{
			innerAngle = 20;
			outerAngle = 178;
		};
		class Right: Left
		{
			position="gearlight_2_pos";
			selection="gearlight_2_sel";
			direction="gearlight_2_dir";
			hitpoint="p svetlo";
		};
		class Right_Flare: Right
		{
			innerAngle = 20;
			outerAngle = 178;
		};
		class Center: Left
		{
			position="gearlight_3_pos";
			selection="gearlight_3_sel";
			direction="gearlight_3_dir";
			hitpoint="svetlo";
		};
		class Center_Flare: Center
		{
			innerAngle = 20;
			outerAngle = 178;
		};
	};

	aggregateReflectors[]=
	{

		{"Left","Left_Flare","Right","Right_Flare","Center","Center_Flare"}
	};

	class MarkerLights
	{
		class PositionRed1
		{
			color[] = {0.8,0.0,0.0};
			ambient[] = {0.08,0.0,0.0};
			intensity = 750;
			name = "PositionLight_red_1_pos";
			drawLight = 2.5;
			drawLightSize = 0.35;
			drawLightCenterSize = 0.14;
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
		class PositionRed2: PositionRed1
		{
			name = "PositionLight_red_2_pos";
		};
		class PositionGreen1: PositionRed1
		{
			color[] = {0.0,0.8,0.0};
			ambient[] = {0.0,0.08,0.0};
			name = "PositionLight_green_1_pos";
		};

		class PositionGreen2: PositionGreen1
		{
			name = "PositionLight_green_2_pos";
		};
		class PositionWhite1: PositionGreen2
		{
			color[]={1,1,1};
			ambient[]={0.1,0.1,0.1};
			name = "PositionLight_white_1_pos";
		};
		class PositionWhite2: PositionWhite1
		{
			name = "PositionLight_white_2_pos";
		};
		class CollisionWhite1: PositionRed1
		{
			color[]={1,1,1};
			ambient[]={0.1,0.1,0.1};
			name="CollisionLight_white_1_pos";
			blinking=1;
			blinkingPattern[]={0.1,0.89999998};
			blinkingPatternGuarantee=0;
			drawLightSize=1.5;
			drawLightCenterSize=0.7;
		};
		class CollisionWhite2: CollisionWhite1
		{
			name="CollisionLight_white_2_pos";
		};
	};

	class AnimationSources
	{
		class Damper_1_source			{source = damper; wheel = Wheel_1;};
		class Damper_2_source			{source = damper; wheel = Wheel_2;};
		class Damper_3_source			{source = damper; wheel = Wheel_3;};
		class Damper_4_source			{source = damper; wheel = Wheel_4;};
		class Damper_5_source			{source = damper; wheel = Wheel_5;};
		class Damper_6_source			{source = damper; wheel = Wheel_6;};
		class muzzle_hide_hmg
		{
			weapon = "RHS_Weap_GSh23Lx2";
			source = "reload";
		};
		class muzzle_rot_hmg
		{
			weapon = "RHS_Weap_GSh23Lx2";
			source="ammorandom";
		};
		class missilebay
		{
			source = "door";
			initPhase = 1;
			animPeriod = 5;
			sound = "ServoRampSound_2";
			soundPosition = "missile_pos";
		};
		class missile_revolver
		{
			weapon = "rhs_weap_kh55sm_Launcher";
			source="revolving";
		};
		class reload_source: missile_revolver
		{
			source="reload";
		};
		class lader_source
		{
			source = "user";
			initPhase = 0;
			animPeriod = 0.001;
			mass=1;
			displayName="hide lader";
			onPhaseChanged="(_this select 0) animateSource ['lader_source',(_this select 1)];";
		};
		class bbcpoccnn_decals1_hide
		{
			source = "user";
			initPhase = 1;
			animPeriod = 0.001;
			mass=1;
			displayName="hide vvs decal 1";
		};
		class bbcpoccnn_decals2_hide :bbcpoccnn_decals1_hide
		{
			displayName="hide vvs decal 2";
		};
		class rf_decals_hide: bbcpoccnn_decals1_hide
		{
			displayName="hide rf decal";
		};
	};

	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			backpack = "rhs_d6_Parachute_backpack";
			count = 8;
		};
	};

	class RenderTargets {};
	class EventHandlers : EventHandlers
	{
		class RHS_EventHandlers
		{
			init	= "_this call rhs_fnc_air_init;";
			postInit = "_this call rhs_fnc_reapplyTextures";
			engine	= "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay";
		};
	};
};
class RHS_TU95MS_vvs_old: RHS_TU95MS_base
{
	scope = 2;
	AUTHOR_MACRO
	side = 0;
	vehicleClass = "rhs_vehclass_aircraft";
	editorSubcategory = "EdSubcat_Planes";
	rhs_decalParameters[]={};
	displayName = "$STR_TU95_name";
	faction = "rhs_faction_vvs";
	dlc = "RHS_AFRF";
	hiddenselectionstextures[] =
	{
		"",
		"",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_old_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
	};

	class AnimationSources: AnimationSources
	{
		class bbcpoccnn_decals1_hide: bbcpoccnn_decals1_hide {initPhase = 1;};
		class bbcpoccnn_decals2_hide: bbcpoccnn_decals2_hide {initPhase = 1;};
		class rf_decals_hide: rf_decals_hide {initPhase = 1;};
	};
};

class RHS_TU95MS_vvs_dubna: RHS_TU95MS_base
{
	EdPrev(RHS_TU95MS_vvs_dubna)
	scope = 2;
	AUTHOR_MACRO
	side = 0;
	vehicleClass = "rhs_vehclass_aircraft";
	editorSubcategory = "EdSubcat_Planes";
	rhs_decalParameters[]={};
	displayName = "$STR_TU95_dubna_name";
	faction = "rhs_faction_vvs";
	dlc = "RHS_AFRF";
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_dubna_coa_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_dubna_name_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed2\2_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed2\0_ca.paa"
	};

	class AnimationSources: AnimationSources
	{
		class bbcpoccnn_decals1_hide: bbcpoccnn_decals1_hide {initPhase = 0;};
		class bbcpoccnn_decals2_hide: bbcpoccnn_decals2_hide {initPhase = 0;};
		class rf_decals_hide: rf_decals_hide {initPhase = 0;};
	};
};

class RHS_TU95MS_vvs_irkutsk: RHS_TU95MS_base
{
	EdPrev(RHS_TU95MS_vvs_irkutsk)
	scope = 2;
	AUTHOR_MACRO
	side = 0;
	vehicleClass = "rhs_vehclass_aircraft";
	editorSubcategory = "EdSubcat_Planes";
	displayName = "$STR_TU95_irkutsk_name";
	faction = "rhs_faction_vvs";
	dlc = "RHS_AFRF";
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_irkutsk_coa_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_irkutsk_name_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\0_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\1_ca.paa"
	};
};

class RHS_TU95MS_vvs_tambov: RHS_TU95MS_base
{
	EdPrev(RHS_TU95MS_vvs_tambov)
	scope = 2;
	AUTHOR_MACRO
	side = 0;
	vehicleClass = "rhs_vehclass_aircraft";
	editorSubcategory = "EdSubcat_Planes";
	displayName = "$STR_TU95_tambov_name";
	faction = "rhs_faction_vvs";
	dlc = "RHS_AFRF";
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_tambov_coa_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_tambov_name_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
	};
};

class RHS_TU95MS_vvs_chelyabinsk: RHS_TU95MS_base
{
	EdPrev(RHS_TU95MS_vvs_chelyabinsk)
	scope = 2;
	AUTHOR_MACRO
	side = 0;
	vehicleClass = "rhs_vehclass_aircraft";
	editorSubcategory = "EdSubcat_Planes";
	displayName = "$STR_TU95_chelyabinsk_name";
	faction = "rhs_faction_vvs";
	dlc = "RHS_AFRF";
	hiddenselectionstextures[] =
	{
		"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_chelyabinsk_coa_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_chelyabinsk_name_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
		"\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa"
	};
};

class Land_rhs_tu95_wreck: Wreck_base_F
{
	EdPrev(Land_rhs_tu95_wreck)
	AUTHOR_MACRO
	scope = 2;
	scopeCurator = 2;
	displayName = "Tu-95MS6 Wreck";
	class Armory
	{
		disabled = 1;
	};
	model = "\rhsafrf\addons\rhs_air\tu95ms\rhs_tu95_wreck";
	icon = "iconObject_1x2";
	mapSize = 30.04;
	editorSubcategory = "EdSubcat_Planes";
};