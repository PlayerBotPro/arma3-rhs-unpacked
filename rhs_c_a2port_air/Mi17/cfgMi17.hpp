//mi8mt
//
	class RHS_Mi8_base:  Heli_Light_02_base_F
	{
		dlc = "RHS_AFRF";

		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {0,7.5,-2.40};
		LESH_WheelOffset[] = {0,0.6};

		Icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_mi17_mg_ca.paa";

		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaYellow']"
		};
		class PilotCamera {};
		category = "Air";
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};

		picture="\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_mi8_pic_ca.paa";
		mapsize = 25;

		#include "simulation.hpp"

		model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_8MT";

		displayname			= "$STR_RHS_MI8_Name";
		crew				= "rhs_pilot_transport_heli";
		typicalCargo[]		= {"rhs_pilot_transport_heli"};
		cargoaction[]		= {"RHS_Mi17_Cargo02"};
		drivercompartments	= "Compartment1";
		cargocompartments[]	= {"Compartment1","Compartment1"};
		audible				= 6;
		camShakeCoef		= 0.8;
		cargoiscodriver[]	= {1, 0};
		cost				= 900000;

		//Target params definitions
		irTarget = 1;
		irTargetSize = 0.9;

		visualTarget = 1;
		visualTargetSize = 1;

		radarTarget = 1;
		radarTargetSize = 1;

		LockDetectionSystem = "0";
		incomingMissileDetectionSystem = "0";

		vehicleClass = "rhs_vehclass_helicopter";
		editorSubcategory = "rhs_EdSubcat_helicopter";

		weapons[] = {};
		magazines[] = {};

		driveraction		= "RHS_Mi8_Pilot";
		driverinaction		= "RHS_Mi8_Pilot";
		unitInfoType		= "RHS_RscUnitInfoAir_Mi8";
		unitInfoTypeRTD		= "RHS_RscUnitInfoAir_RTD_Mi8";
		unitInfoTypeLite	= "RHS_RscUnitInfoAir_RTD_Basic_Mi8";

		precisegetinout	= 0;
		GetInAction		="GetInHeli_Transport_01Cargo";
		getOutAction	="RHS_HIND_Cargo_Exit";
		//getInAction	="pilot_Heli_Light_02_Enter";
		//getOutAction	="pilot_Heli_Light_02_Exit";

		enablemanualfire = 0;
		//enablesweep = 0;


		// PhysX
		#include "physx.hpp"
		gearRetracting		= 0;
		driveOnComponent[]	= {wheels};

		drivercansee = 2+4+16;
		gunnercansee = 2+4+8+16;
		//incommingmissliedetectionsystem = 8;

		//radartype = 0;

		slingLoadMaxCargoMass	= 2700;
		maximumLoad				= 3500;
		supplyradius			= 2.5;
		transportammo			= 0;
		transportmaxbackpacks	= 10;
		transportsoldier		= 15;

		threat[] = {0.5, 0, 0};

		selectionHRotorStill	= "velka vrtule staticka";
		selectionHRotorMove		= "velka vrtule blur";
		selectionVRotorStill	= "mala vrtule staticka";
		selectionVRotorMove		= "mala vrtule blur";
		selectionDamage			= "trup";
		selectionShowDamage		= "poskozeni";

		driverLeftHandAnimName	= "stick_pilot";
		driverRightHandAnimName	= "stick_pilot";


		memoryPointLRocket	= "l raketa";
		memoryPointRRocket	= "p raketa";
		memoryPointLMissile	= "l strela";
		memoryPointRMissile	= "p strela";
		memoryPointGun[]	= {"chase01","chase02","chase03","chase04"};

		class TransportBackpacks
		{
			bag_xx(rhs_d6_Parachute_backpack,8)
		};
		class TransportMagazines
		{
			mag_xx(rhs_30Rnd_545x39_7N10_AK,30)
			mag_xx(rhs_mag_rgd5,10)
			mag_xx(rhs_mag_nspn_red,10)
			mag_xx(rhs_mag_rdg2_white,4)
		};
		class TransportItems
		{
			item_xx(FirstAidKit,8)
			item_xx(Medikit,1)
			item_xx(Toolkit,1)
		};
		class TransportWeapons {};

		class MFD
		{
		};

		/*
		there is additional tail_decals selection to hide
		useful for retexturing
		*/
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] =
		{
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Grey";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa"
				};
				factions[]=
				{
				};
			};
			class Civilian: standard
			{
				displayName="Civilian";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_body_g_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_det_g_co.paa"
				};
			};
			class Camo: standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_cdf_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"
				};
			};
			class Camo1: standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_chdkz_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"
				};
			};
			class Camo2: standard
			{
				displayName="Camo #1";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo1_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa"
				};
			};
			class Camo3: standard
			{
				displayName="Camo #2";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo2_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo2_co.paa"
				};
			};
			class Camo4: standard
			{
				displayName="Camo #3";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo3_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa"
				};
			};
			class Camo5: standard
			{
				displayName="Camo #4";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"
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
				expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI8NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
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
				typeName = "Number";
				defaultValue = "-1";
				expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI8NumberPlaces}else{[_this, [['Number', cRHSAIRMI8NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalTail {
				displayName = "Define tail decal";
				tooltip = "Define tail decalthat will be drawn on vehicle";
				property = "rhs_decalTail";
				control = "Combo";
				expression = "[_this,[['Label', cRHSAIRMI8TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
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

		class Components : Components
		{
			#include "dynamicLoadouts_Mi8AMT.hpp"
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					CI_EMPTY
					CI_CREW
					CI_SLA
				};
			};

			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					CI_EMPTY
					CI_CREW
					CI_SLA
				};
			};
		};

		class Turrets: Turrets {
			class CopilotTurret: CopilotTurret
			{
				proxyindex = 3;

				gunnername = "Co-pilot";
				gunneraction = "RHS_Mi8_Pilot";
				gunnerinaction = "RHS_Mi8_Pilot";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="RHS_HIND_Cargo_Exit";
				gunnercompartments = "Compartment1";

				gunnerLeftHandAnimName="stick_copilot";
				gunnerRightHandAnimName="stick_copilot";

				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";

				precisegetinout = 0;
				canEject = 0;
				commanding = -1;
				class Reflectors
				{
					class cabin
					{
						color[]={830,100,100};
						ambient[] = {5,0,0};
						intensity = 9;
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
						dayLight = 1;
						blinking = 0;
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 50;
							hardLimitStart = 1;
							hardLimitEnd = 1.5;
						};
					};
					class cargo_light_1: cabin
					{
						color[]={830,100,100};
						//color[]={800,900,750};
						position = "cargo_light_1";
						direction = "cargo_light_1_dir";
						hitpoint = "cargo_light_1";
						selection = "cargo_light_1";
						intensity = 10;
						useFlare = 0;
						coneFadeCoef = .1;
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 70;
							hardLimitStart = 2;
							hardLimitEnd = 2.5;
						};
					};
					class cargo_light_2: cargo_light_1
					{
						position = "cargo_light_2";
						direction = "cargo_light_2_dir";
						hitpoint = "cargo_light_2";
						selection = "cargo_light_2";
					};
					class cargo_light_3: cargo_light_1
					{
						position = "cargo_light_3";
						direction = "cargo_light_3_dir";
						hitpoint = "cargo_light_3";
						selection = "cargo_light_3";
					};
				};
				class Hitpoints {};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							CI_EMPTY
							CI_CREW
							CI_SLA
						};
					};
					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						class Components
						{
							CI_EMPTY
							CI_CREW
							CI_SLA
						};
					};
				};
			};
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				gunbeg = "muzzle_1";
				gunend = "chamber_1";
				gunnercompartments = "Compartment1";
				gunneraction = "RHS_Mi8_Gunner";
				gunnerinaction = "RHS_Mi8_Gunner";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				memorypointgun = "muzzle_1";
				memorypointgunneroptics = "gunnerview";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				gunnerLeftLegAnimName="gunner1_leg_left";
				gunnerRightLegAnimName="gunner1_legs";
				LODTurnedOut	= 1000;
				LODTurnedIn		= 1000;
				LODOpticsOut	= 1000;
				LODOpticsIn		= 1000;

				commanding = -2;
				gunnername = "Crew Chief";
				gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
				weapons[] = {"rhs_weap_pkt_v1"};
				magazines[] = {
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100"
				};
				primarygunner = 0;
				initelev = -60;
				initturn = 90;
				maxelev = 25;
				maxturn = 130;
				minelev = -80;
				minturn = 30;
				stabilizedinaxes = StabilizedInAxesNone;
				class ViewOptics {
					initanglex = 0;
					initangley = 0;
					initfov = 0.7;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 1.1;
					minanglex = -30;
					minangley = -100;
					minfov = 0.25;
				};
				isCoPilot=0;
				showAsCargo = 1;
				class Hitpoints {};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							CI_EMPTY
							CI_CREW
						};
					};

					class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "";
						class Components
						{
							CI_EMPTY
							CI_CREW
						};
					};
				};
			};
			class BackTurret: MainTurret
			{
				commanding = -3;

				LODTurnedOut	= 1000;
				LODTurnedIn		= 1000;
				LODOpticsOut	= 1000;
				LODOpticsIn		= 1000;

				animationsourcebody = "Turret_2";
				animationsourcegun = "Gun_2";

				body = "Turret_2";
				gun = "Gun_2";
				gunbeg = "muzzle_2";
				gunend = "chamber_2";
				memorypointgun = "muzzle_2";

				memorypointgunneroptics = "gunnerview2";
				selectionfireanim = "zasleh2";
				gunnerLeftHandAnimName="OtocHlaven2";
				gunnerRightHandAnimName="OtocHlaven2";
				gunnerLeftLegAnimName="gunner2_legs";
				gunnerRightLegAnimName="gunner2_leg_right";

				gunneraction = "rhs_mi8_Gunner";
				gunnerinaction = "rhs_mi8_Gunner";
				gunnercompartments = "Compartment1";
				gunnername = "Rear Gunner";
				initelev = -60;
				initturn = -155;
				maxelev = 25;
				maxturn = -45;
				minelev = -80;
				minturn = -185;
				primarygunner = 0;
				proxyindex = 2;
				stabilizedinaxes = StabilizedInAxesNone;
				weapons[] = {"rhs_weap_pkt_v2"};
				class Hitpoints {};
			};
		};

		armor						= 40;
		armorStructural				= 20;
		hullDamageCauseExplosion	= 1;
		hullExplosionDelay[]		= {10, 20};
		damageresistance			= 0.00172;
		epeImpulseDamageCoef		= 1;
		class HitPoints: HitPoints
		{
			class HitHull
			{
				simulation			= RHS_Hull_Helicopter;
				armor				= -100;
				minimalHit			= -0.2;
				explosionShielding	= 2;
				radius				= 0.4;
				armorComponent		= Hit_Hull;
				name				= "hit_hull";
				visual				= "zbytek";
				passThrough			= 1;
				class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
			};
			class HitFuel: HitFuel
			{
				armor = 10;
				radius = 0.25;
				minimalHit = 0.05;
			};
			class HitEngine1
			{
				armor = 1.2;
				radius = 0.4;
				material = -1;
				explosionShielding = 3;
				minimalHit = 0.1;
				passThrough = 1;
				visual = "motor";
				name = "engine_1_hit";
			};
			class HitEngine2: HitEngine1
			{
				name = "engine_2_hit";
			};
			class HitEngine: HitEngine2
			{
				armor = 999;
				name = "engine_hit";
				depends = "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitAvionics
			{
				armor=0.15*2;
				explosionShielding=1;
				material=51;
				passThrough=1;
				name="avionics_hit";
				visual="-";
			};
			// When tail is destroyed it's assumed that stabilizers & rear rotor is destroyed
			class HitTail 			{armor = -150;	explosionShielding = 0.20; passThrough = 0.10; minimalHit = -0.15;	radius = 0.13; 	 armorComponent = "Hit_Tail";name = "Hit_Tail";		visual = "vis_tail";};
			class HitVRotor
			{
				armor=0.5*2;
				explosionShielding=1;
				passThrough=0.3;
				name="tail_rotor_hit";
				visual="mala vrtule staticka";
				depends = "HitTail";
				armorComponent = "Hit_Rotor_Rear";
			};
			class HitHRotor
			{
				armor=0.5*2;
				explosionShielding=1;
				material=51;
				passThrough=0.1;
				name="main_rotor_hit";
				visual="velka vrtule staticka";
				armorComponent = "Hit_Rotor_Main";
			};
			// RTD Hitpoints
			class HitHydraulics 		{armor = -50;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 name = "hit_hydraulics";		visual = "-";		};
			class HitTransmission 		{armor = -80;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 name = "hit_transmission";		visual = "-";		};

			class HitGlass1 		{armor = -10;	explosionShielding = 1.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.1; 	 armorComponent = "glass1"; name = "glass1";visual = "glass1";};
			class HitGlass2 		{armor = -10;	explosionShielding = 1.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.1; 	 armorComponent = "glass2"; name = "glass2";visual = "glass2";};
			class HitGlass3 		{armor = -10;	explosionShielding = 1.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.1; 	 armorComponent = "glass3"; name = "glass3";visual = "glass3";};
			class HitGlass4 		{armor = -10;	explosionShielding = 1.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.1; 	 armorComponent = "glass4"; name = "glass4";visual = "glass4";};
			class HitGlass5 		{armor = -10;	explosionShielding = 1.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.1; 	 armorComponent = "glass5"; name = "glass5";visual = "glass5";};
			class HitGlass6 		{armor = -10;	explosionShielding = 1.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.1; 	 armorComponent = "glass6"; name = "glass6";visual = "glass6";};
			class HitGlass7 		{armor = -10;	explosionShielding = 1.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.1; 	 armorComponent = "glass7"; name = "glass7";visual = "glass7";};
			class HitGlass8 		{armor = -10;	explosionShielding = 1.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.1; 	 armorComponent = "glass8"; name = "glass8";visual = "glass8";};
			HP_PYLON(1,0.75)
			HP_PYLON(2,0.75)
			HP_PYLON(3,0.75)
			HP_PYLON(4,0.75)
			HP_PYLON(5,0.75)
			HP_PYLON(6,0.75)
		};
		class Reflectors
		{
			class LSvetla
			{
				color[]={1100,1000,900};
				ambient[]={1100,1000,900};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=30;
				outerAngle=120;
				coneFadeCoef=5;
				intensity=100;
				useFlare=1;
				dayLight=0;
				flareSize=0.75;
				class Attenuation
				{
					start=1;
					constant=1;
					linear=0;
					quadratic=15;
				};
			};
			class RSvetla: LSvetla
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
		};

		class MarkerLights
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

		class AnimationSources: AnimationSources
		{
			class cargolights_hide
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
			};
			class cabinlights_hide: cargolights_hide {};
			class bench_hide: cargolights_hide {
				mass=1;
				displayname="hide benches";
				onPhaseChanged = "{(_this select 0) lockCargo [_x,(_this select 1) isEqualTo 1]}foreach [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18];";
			};
			class intake_hide: cargolights_hide {
				mass=1;
				displayname="hide intake covers";
			};
			class LeftDoor
			{
				source="user";
				animPeriod=0.8;
				initPhase = 1;
			};
			class RearDoors
			{
				source=door;
				animPeriod=1.6;
				initPhase = 0;
				sound = "ServoDoorsSound";
				soundPosition = "pos cargo dir";
				mass=1;
				displayname="open rear doors";
				onPhaseChanged = "(_this select 0) animateDoor ['RearDoors',_this select 1]";

			};
			class hide_turrets
			{
				source=user;
				animPeriod=0.000000000000001;
				initPhase = 0;
			};
			class hide_door_hatch
			{
				source=user;
				animPeriod=0.000000000000001;
				initPhase = 1;
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "rhs_weap_pkt_v1";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "rhs_weap_pkt_v1";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "rhs_weap_pkt_v1";
			};
			class ReloadAnim_2
			{
				source = "reload";
				weapon = "rhs_weap_pkt_v2";
			};
			class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "rhs_weap_pkt_v2";
			};
			class Revolving_2
			{
				source = "revolving";
				weapon = "rhs_weap_pkt_v2";
			};
			class muzzle_rot_hmg1: ReloadMagazine
			{
				source="ammorandom";
			};
			class muzzle_rot_hmg2: ReloadMagazine_2
			{
				source="ammorandom";
			};

			class Damper_1_source			{source = damper; wheel = Wheel_1;};
			class Damper_2_source			{source = damper; wheel = Wheel_2;};
			class Damper_3_source			{source = damper; wheel = Wheel_3;};
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source			{source = wheel; wheel = Wheel_3;};
			class Helicopter_Brakes {source = user; animPeriod = 0.01; initPhase = 1;};
		};

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_amt.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_amt_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_amt_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_in.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_in_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_in_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_inter.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_inter_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_inter_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\data\pkm.rvmat",
				"rhsafrf\addons\rhs_a2port_air\data\pkm.rvmat",
				"rhsafrf\addons\rhs_a2port_air\data\pkm_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_mtv.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_mtv_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_mtv_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8t\mi8t_tv2.rvmat",
				"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8t\mi8t_tv2_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8t\mi8t_tv2_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition		= "m1p";
					pointDirection		= "m1d";
					renderQuality		= 2;
					renderVisionMode	= 4;
					fov					= 0.7;
				};
				PIP_BB(0)
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition		= "m2p";
					pointDirection		= "m2d";
					renderQuality		= 2;
					renderVisionMode	= 4;
					fov					= 0.7;
				};
				PIP_BB(1)
			};
		};

		class UserActions
		{
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
			class WheelBrakes: ToggleLight
			{
				displayName	= "Toggle Wheel Brakes";
				shortcut	= "binocular";
				condition	= "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
				statement	= "[this] call rhs_fnc_heli_wheelBrakes";
			};
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
			};
			class BIS_Randomisation
			{
				init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
			};
		};
	};

	//Mi-8 MTV-3

	class rhs_mi8mtv3_base: RHS_Mi8_base
	{
		EdPrev(rhs_mi8mtv3_base)
		transportsoldier = 13;

		cost = 2e+006;

		threat[] = {0.8, 0.8, 0.6};
		drivercompartments = "Compartment1";
		cargocompartments[] = {"Compartment1"};
		cargoiscodriver[] = {0};
		tf_isolatedAmount_api = 0.4;

		LockDetectionSystem = "8";
		incomingMissileDetectionSystem = "8";
		model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_8MTV_3";
		displayName = "$STR_RHS_MI8MTV3_Name";

		class Turrets: Turrets {
			class CopilotTurret: CopilotTurret
			{
				LODTurnedIn		= 1100;
				LODTurnedOut	= 1100;
				LODOpticsOut	= 1100;
				LODOpticsIn		= 1100;
				proxyindex = 4;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							CI_EMPTY
							CI_NAV
							CI_CREW
							CI_SLA
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
						defaultDisplay = "";
						class Components
						{
							CI_EMPTY
							CI_NAV
							CI_CREW
							CI_SLA
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
			class SideTurret: MainTurret {
				commanding = -4;
				gunnername = "Door gunner";
				primarygunner = 0;
				proxyindex = 2;
				gunnercompartments = "Compartment1";
				LODTurnedOut	= 1000;
				LODTurnedIn		= 1000;
				LODOpticsOut	= 1000;
				LODOpticsIn		= 1000;
				class Hitpoints {};
			};
			class BackTurret: BackTurret {
				commanding = -3;
				gunnername = "Rear gunner";
				primarygunner = 0;
				proxyindex = 3;
				gunnerLeftHandAnimName="OtocHlaven2";
				gunnerRightHandAnimName="OtocHlaven2";
				gunnerLeftLegAnimName="gunner2_legs";
				gunnerRightLegAnimName="gunner2_leg_right";
				gunnercompartments = "Compartment1";
			};
			class FrontTurret: MainTurret {
				animationsourcebody = "Turret_3";
				animationsourcegun = "Gun_3";
				body = "Turret_3";
				commanding = -2;
				gun = "Gun_3";
				gunbeg = "muzzle_3";
				gunend = "chamber_3";
				gunnerLeftHandAnimName="OtocHlaven3";
				gunnerRightHandAnimName="OtocHlaven3";
				gunnerLeftLegAnimName="gunner3_legs";
				gunnerRightLegAnimName="gunner3_legs";
				gunneraction = "RHS_Mi8_GunnerFront";
				gunnerinaction = "RHS_Mi8_GunnerFront";
				gunnername = "Crew chief";
				initelev = -10;
				initturn = 0;
				maxelev = 25;
				maxturn = 35;
				memorypointgun = "muzzle_3";
				memorypointgunneroptics = "gunnerview3";
				minelev = -45;
				minturn = -35;
				primarygunner = 0;
				proxyindex = 1;
				selectionfireanim = "zasleh3";
				stabilizedinaxes = StabilizedInAxesNone;
				weapons[] = {"rhs_weap_pkt_v3"};
				LODTurnedOut	= 1000;
				LODTurnedIn		= 1000;
				LODOpticsOut	= 1000;
				LODOpticsIn		= 1000;
				class Hitpoints {};
			};
		};
		class AnimationSources: AnimationSources {

			class RearDoors: RearDoors
			{
				displayName="";
			};

			class bench_hide: cargolights_hide {
				mass=1;
				displayname="hide benches";
				onPhaseChanged = "{(_this select 0) lockCargo [_x,(_this select 1) isEqualTo 1]}foreach [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18];";
			};
			class holder_small_hide
			{
				source		= user;
				animPeriod	= 0.000000000000001;
				initPhase	= 0;
			};

			class exhaust_hide
			{
				source=user;
				animPeriod=0.000000000000001;
				initPhase = 0;
				mass=1;
				displayName="hide exhaust";
			};
			class HIDE_winch: exhaust_hide
			{
				displayName="hide winch";
			};
			class HIDE_front_armor: exhaust_hide
			{
				displayName="hide front armor";
			};

			class HUDaction {
				animperiod = 1;
				initphase = 0;
				source = "user";
			};
			class HUDaction_Hide: HUDaction {};
			class ReloadAnim_3 {
				source = "reload";
				weapon = "rhs_weap_pkt_v3";
			};
			class ReloadMagazine_3 {
				source = "reloadmagazine";
				weapon = "rhs_weap_pkt_v3";
			};
			class Revolving_3 {
				source = "revolving";
				weapon = "rhs_weap_pkt_v3";
			};
			class muzzle_rot_hmg3: ReloadMagazine_3
			{
				source="ammorandom";
			};
			ANIM_PYLON(1)
			ANIM_PYLON(2)
			ANIM_PYLON(3)
			ANIM_PYLON(4)
			ANIM_PYLON(5)
			ANIM_PYLON(6)
		};
		class UserActions
		{
			class HUDoff
			{
				condition = "(player==driver this) and (this animationphase 'HUDAction' !=0)";
				displayname = "$STR_RHS_MI17HudOn_Name";
				displaynamedefault = "$STR_RHS_MI17HudOn_Name";
				onlyforplayer = 1;
				position = "zamerny";
				radius = 1;
				statement = "this animate ['HUDAction',0];this animate ['HUDaction_Hide',0]";
			};
			class HUDon
			{
				condition = "(player==driver this) and (this animationphase 'HUDAction' !=1)";
				displayname = "$STR_RHS_MI17HudOff_Name";
				displaynamedefault = "$STR_RHS_MI17HudOff_Name";
				onlyforplayer = 1;
				position = "zamerny";
				radius = 1;
				statement = "this animate ['HUDAction',1];this animate ['HUDaction_Hide',1]";
			};
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
			class WheelBrakes: ToggleLight
			{
				displayName	= "Toggle Wheel Brakes";
				shortcut	= "binocular";
				condition	= "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
				statement	= "[this] call rhs_fnc_heli_wheelBrakes";
			};
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1h_dir";
				position="exhaust1h";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2h_dir";
				position="exhaust2h";
				effect="ExhaustEffectHeli";
			};
		};
		class Components : Components
		{
			#include "dynamicLoadouts_Mi8MTV.hpp"
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					CI_EMPTY
					CI_NAV
					CI_CREW
					CI_SLA
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
				defaultDisplay = "";
				class Components
				{
					CI_EMPTY
					CI_NAV
					CI_CREW
					CI_SLA
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

	class rhs_mi8mtv3_heavy_base: rhs_mi8mtv3_base
	{
		displayName = "Mi-8MTV-3 (Heavy)";
		class AnimationSources: AnimationSources
		{
			class holder_small_hide: holder_small_hide
			{
				initPhase = 1;
			};
		};
		class Components : Components
		{
			#include "dynamicLoadouts_Mi8MTV_Heavy.hpp"
		};
	};

	//czech Mi-171Sh, might be used as Mi-8AMTSh after slight modification
	class rhs_mi8amtsh_base: rhs_mi8mtv3_base
	{
		EdPrev(rhs_mi8amtsh_base)
		Icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_mi17_ca.paa";

		driveraction = "RHS_Mi8_PilotV2";
		driverinaction = "RHS_Mi8_PilotV2";

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret {
				proxyindex = 4;
				gunnerUsesPilotView = 0;
				LODTurnedOut	= 1200;
				LODTurnedIn		= 1200;
				LODOpticsOut	= 1200;
				LODOpticsIn		= 1200;
			};
			class SideTurret: SideTurret {};
			class BackTurret: BackTurret {

				initturn = 180;
				maxturn = 235;
				maxElev = 15;
				minturn = 130;
				initElev = -41;
				minElev = -51;
				gunnerRightLegAnimName="gunner2_leg_right";
				gunnerLeftLegAnimName="gunner2_leg_left";

				gunneraction = "RHS_Mi17v2_Gunner";
				gunnerinaction = "RHS_Mi17v2_Gunner";
			};
			class FrontTurret: FrontTurret
			{
				initturn = -70;
				maxturn = -30;
				minturn = -121;
				gunnerRightLegAnimName="gunner3_leg_right";
				gunnerLeftLegAnimName="gunner3_leg_left";
				gunnercompartments = "Compartment1";
				gunneraction = "RHS_Mi8_Gunner";
				gunnerinaction = "RHS_Mi8_Gunner";
			};
		};
		model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_171";
		picture="\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_mi8amtsh_pic_ca.paa";
		displayName = "$STR_RHS_MI8AMTSh_Name";

		drivercompartments = "Compartment1";
		cargocompartments[] = {"Compartment1"};
		cargoiscodriver[] = {0};

		hiddenselectionstextures[] =
		{
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi_171_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};

		class textureSources
		{
			class standard
			{
				displayName="Grey";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi_171_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vvs_c, rhs_faction_vvs
				};
			};
			class Civilian: standard
			{
				displayName="Civilian";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_civil_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_det_g_co.paa"
				};
			};
			class Camo: standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_cdf_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"
				};
			};
			class Camo1: standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_chdkz_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"
				};
			};
			class Camo2: standard
			{
				displayName="Camo #1";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo1_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa"
				};
			};
			class Camo3: standard
			{
				displayName="Camo #2";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo2_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo2_co.paa"
				};
			};
			class Camo4: standard
			{
				displayName="Camo #3";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo_mvd_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa"
				};
			};
			class Camo5: standard
			{
				displayName="Camo #4";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo3_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class RearDoors: RearDoors
			{
				displayName="";
			};
			class HIDE_weapon_holders: exhaust_hide
			{
				displayName="hide weapon holders";
			};
		};
		class Components : Components
		{
			#include "dynamicLoadouts_Mi171.hpp"
		};
	};

	//mi8t original series with tv2-117 engine
	class rhs_mi8t_base: rhs_mi8_base
	{
		EdPrev(rhs_mi8t_base)
		displayName = "$STR_RHS_MI8T_Name";
		Icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_mi17_amb_CA.paa";

		model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_8T";
		accuracy = 1.5;
		tf_isolatedAmount_api = 0.5;

		hasGunner = 0;
		driverDoor="LeftDoor";
		cargoDoors[]={"LeftDoor"};

		transportsoldier=13;
		cargoProxyIndexes[] = {1,4,5,6,7,8,9,10,11,12,13,15,16};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

		class Components : Components
		{
			#include "dynamicLoadouts_Mi8T.hpp"
		};

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyindex = 1;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";

				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "RHS_HIND_Cargo_Exit";

				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (Right Rear Doors)";
				gunnerCompartments = "Compartment1";
				proxyIndex = 3;
				maxElev = 15;
				minElev = -45;
				maxTurn = -14;
				minTurn = -85;
				isPersonTurret = 1;
				gunnerUsesPilotView = 1;
				gunnerDoor="LeftDoor";
				memorypointgunneroptics = "";
				selectionFireAnim="";
				commanding=-2;
				weapons[] = {rhs_weap_DummyLauncher}; // fix for get in order

				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
				LODTurnedOut	= 1200;
				LODTurnedIn		= 1200;
				LODOpticsOut	= 1200;
				LODOpticsIn		= 1200;

				enabledByAnimationSource = "RearDoors";
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Left Rear Doors)";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				proxyIndex = 14;
				maxTurn = 85;
				minTurn = 15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Passenger (Left Door)";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 2;
				maxTurn = 35;
				minTurn = -8;
				enabledByAnimationSource = "LeftDoor";
			};

		};

		//
		hiddenSelections[] = {"Camo1","Camo2","Camo8","Camo4","n1","n2","tail_decals"};

		hiddenselectionstextures[] =
		{
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8t_tv2_g_vsr_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};

		class textureSources
		{
			class standard
			{
				displayName="Grey";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8t_tv2_g_vsr_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vvs_c, rhs_faction_vvs
				};
			};
			class Civilian: standard
			{
				displayName="Civilian";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_body_g_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_det_g_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8tcivil_tv2_g_co.paa"
				};
			};
			class Camo: standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_cdf_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_cdf_co.paa"
				};
			};
			class Camo1: standard
			{
				displayName="Chedaki";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_chdkz_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_chdkz_co.paa"
				};
			};
			class Camo2: standard
			{
				displayName="Camo #1";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo1_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo1_co.paa"
				};
			};
			class Camo3: standard
			{
				displayName="Camo #2";
				AUTHOR_MACRO
				textures[]=
					{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo2_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo2_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo2_co.paa"
				};
			};
			class Camo4: standard
			{
				displayName="Camo #3";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo3_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo3_co.paa"
				};
			};
			class Camo5: standard
			{
				displayName="Camo #4";
				AUTHOR_MACRO
				textures[]=
				{
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo4_co.paa"
				};
			};
		};

		class AnimationSources: AnimationSources
		{
			class LeftDoor
			{
				source="door";
				animPeriod=0.8;
				initPhase = 1;
			};
			class hide_turrets: hide_turrets
			{
				initPhase = 1;
			};
			class hide_door_hatch: hide_door_hatch
			{
				initPhase = 0;
			};

			class intake_hide: intake_hide {
				displayname="";
			};

			class antennas_switch {
				source = "user";
				useSource = 1;
				displayname="twin antennas";
				initPhase = 0;
				animPeriod = 0.0001;
				onPhaseChanged = "";
			};
			class hide_antennas: antennas_switch {
				useSource = 0;
				displayname="hide antennas";
			};
			class hide_antenna_aft: hide_antennas {
				initphase = 1;
				displayname="hide aft antenna";
			};
			class reardoors_hide
			{
				displayname = "hide rear doors";
				source=user;
				animPeriod=0.000000000000001;
				initPhase = 0;
				//lockCargoAnimationPhase = 1;
				//lockCargo[] = {14,15};
				onPhaseChanged = "{(_this select 0) lockCargo [_x,(_this select 1) isEqualTo 1]}foreach [14,15];";
				useSource = 1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"RearDoors", 1};
			};
		};
		class Attributes: Attributes {
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type {};
			class rhs_decalNumber: rhs_decalNumber {};
			class rhs_decalTail: rhs_decalTail {};
			class rhs_reardoors {
				displayName = "Open rear doors";
				property = "rhs_opendoors";
				control = "CheckboxNumber";
				expression = "[_this,14,15,true] call rhs_fnc_mi8_checkDoor";
				defaultValue = "0";
			};
			class rhs_leftdoor: rhs_reardoors {
				displayName = "Open left door";
				property = "rhs_leftdoor";
				expression = "_this animateDoor ['LeftDoor',_value,true]";
			};
		};

		class UserActions
		{
			class openDoor
			{
				displayName=Open Rear Doors;
				position="";
				radius = 3;
				priority = 1.5;
				showWindow = 0;
				userActionID = 55;
				onlyForplayer = 1;
				condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
				statement = "[this,14,15] call rhs_fnc_mi8_checkDoor";
			};
			class closeDoor: openDoor
			{
				userActionID = 56;
				displayName=Close Rear Doors;
				condition = "this animationSourcePhase 'RearDoors_Hide' < 0.5 AND this doorPhase 'RearDoors' > 0.5 AND alive this";
			};
			class openDoor_L: openDoor
			{
				userActionID = 57;
				displayName=Open Left Door;
				position="";
				condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
				statement = "this animateDoor ['LeftDoor',1]";
			};
			class closeDoor_L: openDoor
			{
				userActionID = 58;
				displayName=Close Left Door;
				condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
				statement = "this animateDoor ['LeftDoor',0]";
			};
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
			class WheelBrakes: ToggleLight
			{
				displayName	= "Toggle Wheel Brakes";
				shortcut	= "binocular";
				condition	= "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
				statement	= "[this] call rhs_fnc_heli_wheelBrakes";
			};
		};

		attendant = 1;
		threat[] = {0,0,0};
		class Reflectors
		{
			class Left
			{
				color[]={1100,1000,900};
				ambient[]={1100,1000,900};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=30;
				outerAngle=120;
				coneFadeCoef=5;
				intensity=100;
				useFlare=1;
				dayLight=0;
				flareSize=0.75;
				class Attenuation
				{
					start=1;
					constant=1;
					linear=0;
					quadratic=15;
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
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				getIn = "_this call rhs_fnc_mi8_doors";
				getOut = "_this call rhs_fnc_mi8_doors";
			};
		};
	};

	//mi8amt
	class rhs_mi8amt_base: rhs_mi8_base
	{
		EdPrev(rhs_mi8amt_base)
		displayName = "$STR_RHS_MI8AMT_Name";
		Icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_mi17_amb_CA.paa";

		model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_8AMT";
		accuracy = 1.5;
		tf_isolatedAmount_api = 0.5;

		hasGunner = 0;
		driverDoor="LeftDoor";
		cargoDoors[]={"LeftDoor"};

		transportsoldier=13;
		cargoProxyIndexes[] = {1,4,5,6,7,8,9,10,11,12,13,15,16};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyindex = 1;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";

				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "RHS_HIND_Cargo_Exit";

				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (Right Rear Doors)";
				gunnerCompartments = "Compartment1";
				proxyIndex = 3;
				maxElev = 15;
				minElev = -45;
				maxTurn = -14;
				minTurn = -85;
				isPersonTurret = 1;
				gunnerUsesPilotView = 1;
				gunnerDoor="LeftDoor";
				memorypointgunneroptics = "";
				selectionFireAnim="";
				commanding=-2;
				weapons[] = {rhs_weap_DummyLauncher}; // fix for get in order

				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
				LODTurnedOut	= 1200;
				LODTurnedIn		= 1200;
				LODOpticsOut	= 1200;
				LODOpticsIn		= 1200;

				enabledByAnimationSource = "RearDoors";
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Left Rear Doors)";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				proxyIndex = 14;
				maxTurn = 85;
				minTurn = 15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Passenger (Left Door)";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 2;
				maxTurn = 35;
				minTurn = -8;
				enabledByAnimationSource = "LeftDoor";
			};

		};
		class AnimationSources: AnimationSources
		{
			class LeftDoor
			{
				source="door";
				animPeriod=0.8;
				initPhase = 1;
			};
			class hide_turrets: hide_turrets
			{
				initPhase = 1;
			};
			class hide_door_hatch: hide_door_hatch
			{
				initPhase = 0;
			};
			class reardoors_hide
			{
				displayname = "hide rear doors";
				source=user;
				animPeriod=0.000000000000001;
				initPhase = 0;
				//lockCargoAnimationPhase = 1;
				//lockCargo[] = {14,15};
				onPhaseChanged = "{(_this select 0) lockCargo [_x,(_this select 1) isEqualTo 1]}foreach [14,15];";
				useSource = 1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"RearDoors", 1};
			};
		};
		class Attributes: Attributes {
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type {};
			class rhs_decalNumber: rhs_decalNumber {};
			class rhs_decalTail: rhs_decalTail {};
			class rhs_reardoors {
				displayName = "Open rear doors";
				property = "rhs_opendoors";
				control = "CheckboxNumber";
				expression = "[_this,14,15,true] call rhs_fnc_mi8_checkDoor";
				defaultValue = "0";
			};
			class rhs_leftdoor: rhs_reardoors {
				displayName = "Open left door";
				property = "rhs_leftdoor";
				expression = "_this animateDoor ['LeftDoor',_value,true]";
			};
		};

		class UserActions
		{
			class openDoor
			{
				displayName=Open Rear Doors;
				position="";
				radius = 3;
				priority = 1.5;
				showWindow = 0;
				userActionID = 55;
				onlyForplayer = 1;
				condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
				statement = "[this,14,15] call rhs_fnc_mi8_checkDoor";
			};
			class closeDoor: openDoor
			{
				userActionID = 56;
				displayName=Close Rear Doors;
				condition = "this animationSourcePhase 'RearDoors_Hide' < 0.5 AND this doorPhase 'RearDoors' > 0.5 AND alive this";
			};
			class openDoor_L: openDoor
			{
				userActionID = 57;
				displayName=Open Left Door;
				position="";
				condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
				statement = "this animateDoor ['LeftDoor',1]";
			};
			class closeDoor_L: openDoor
			{
				userActionID = 58;
				displayName=Close Left Door;
				condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
				statement = "this animateDoor ['LeftDoor',0]";
			};
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
			class WheelBrakes: ToggleLight
			{
				displayName	= "Toggle Wheel Brakes";
				shortcut	= "binocular";
				condition	= "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
				statement	= "[this] call rhs_fnc_heli_wheelBrakes";
			};
		};

		attendant = 1;
		threat[] = {0,0,0};
		class Reflectors
		{
			class Left
			{
				color[]={1100,1000,900};
				ambient[]={1100,1000,900};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=30;
				outerAngle=120;
				coneFadeCoef=5;
				intensity=100;
				useFlare=1;
				dayLight=0;
				flareSize=0.75;
				class Attenuation
				{
					start=1;
					constant=1;
					linear=0;
					quadratic=15;
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
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				getIn = "_this call rhs_fnc_mi8_doors";
				getOut = "_this call rhs_fnc_mi8_doors";
			};
		};
	};


	class RHS_Mi8_VVS_Base: RHS_Mi8_base
	{
		EdPrev(rhs_Mi8_VVS_Base)
		side = 0;
		typicalCargo[] = {"rhs_pilot_transport_heli"};
		faction="rhs_faction_vvs";
	};
	class RHS_Mi8MTV3_VVS_Base: RHS_Mi8MTV3_base
	{
		EdPrev(rhs_Mi8MTV3_VVS_Base)
		side = 0;
		faction="rhs_faction_vvs";
	};
	class RHS_Mi8MTV3_Heavy_VVS_Base: RHS_Mi8MTV3_heavy_base
	{
		EdPrev(rhs_Mi8MTV3_VVS_Base)
		side = 0;
		faction="rhs_faction_vvs";
	};
	class RHS_Mi8AMTSh_VVS_Base: RHS_Mi8AMTSh_base
	{
		EdPrev(rhs_Mi8AMTSh_VVS_Base)
		side = 0;
		faction="rhs_faction_vvs";
	};
	class RHS_Mi8T_VVS_Base: RHS_Mi8T_base
	{
		EdPrev(rhs_Mi8AMT_VVS_Base)
		side = 0;
		faction="rhs_faction_vvs";
	};
	class RHS_Mi8AMT_VVS_Base: RHS_Mi8AMT_base
	{
		EdPrev(rhs_Mi8AMT_VVS_Base)
		side = 0;
		faction="rhs_faction_vvs";
	};

	class RHS_Mi8mt_vvs: RHS_Mi8_VVS_Base
	{
		EdPrev(rhs_Mi8mt_vvs)
		scope=2;
		displayName="$STR_RHS_MI8MT_Name";
		AUTHOR_MACRO_BIS_PORT
		transportsoldier=14;
	};

	class RHS_Mi8mt_vvsc: RHS_Mi8mt_vvs
	{
		EdPrev(rhs_Mi8mt_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8mt_vdv: RHS_Mi8mt_vvsc
	{
		EdPrev(rhs_Mi8mt_vdv)
		faction="rhs_faction_vdv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8mt_vv: RHS_Mi8mt_vdv
	{
		EdPrev(rhs_Mi8mt_vv)
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo3_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

/* 	class RHS_Mi8_VVS_05: RHS_Mi8_VVS_04
	{
		EdPrev(rhs_Mi8_VVS_05)
		faction="rhs_faction_vvs_c";
		scope=2;
		displayName="Mi-8MT (Desert)";

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo4_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo3_co.paa"
		};
	}; */


	class RHS_Mi8mt_Cargo_vvs: RHS_Mi8mt_vvs
	{
		EdPrev(rhs_Mi8mt_Cargo_vvs)
		displayName="$STR_RHS_MI8MT_CARGO_Name";
		AUTHOR_MACRO_BIS_PORT

		driverDoor="LeftDoor";
		cargoDoors[]={"LeftDoor"};

		transportsoldier=13;
		cargoProxyIndexes[] = {1,3,4,5,6,7,8,9,10,11,12,14,15};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret {};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";

				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "RHS_HIND_Cargo_Exit";

				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (Right Rear Doors)";
				gunnerCompartments = "Compartment1";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -45;
				maxTurn = -14;
				minTurn = -85;
				isPersonTurret = 1;
				gunnerUsesPilotView = 1;
				gunnerDoor="LeftDoor";
				memorypointgunneroptics = "";
				selectionFireAnim="";

				LODTurnedOut	= 1200;
				LODTurnedIn		= 1200;
				LODOpticsOut	= 1200;
				LODOpticsIn		= 1200;

				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;

				weapons[] = {rhs_weap_DummyLauncher}; // fix for get in order
				enabledByAnimationSource = "RearDoors";
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Left Rear Doors)";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				proxyIndex = 13;
				maxTurn = 85;
				minTurn = 15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Passenger (Left Door)";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 16;
				maxTurn = 35;
				minTurn = -8;
				enabledByAnimationSource = "LeftDoor";
			};

		};
		class AnimationSources: AnimationSources
		{
			class LeftDoor
			{
				source="door";
				animPeriod=0.8;
				initPhase = 1;
			};
			class hide_turrets: hide_turrets
			{
				initPhase = 1;
			};
			class hide_door_hatch: hide_door_hatch
			{
				initPhase = 0;
			};
		};

		class Attributes: Attributes {
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type {};
			class rhs_decalNumber: rhs_decalNumber {};
			class rhs_decalTail: rhs_decalTail {};
			class rhs_reardoors {
				displayName = "Open rear doors";
				property = "rhs_opendoors";
				control = "CheckboxNumber";
				expression = "[_this,13,14,true] call rhs_fnc_mi8_checkDoor";
				defaultValue = "0";
			};
			class rhs_leftdoor: rhs_reardoors {
				displayName = "Open left door";
				property = "rhs_leftdoor";
				expression = "_this animateDoor ['LeftDoor',_value,true]";
			};
		};
		class UserActions
		{
			class openDoor
			{
				displayName=Open Rear Doors;
				position="";
				radius = 3;
				priority = 11;
				userActionID = 55;
				onlyForplayer = 1;
				showWindow = 0;
				condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
				statement = "[this,13,14] call rhs_fnc_mi8_checkDoor";
				shortcut="user12";
			};
			class closeDoor: openDoor
			{
				userActionID = 56;
				displayName=Close Rear Doors;
				condition = "this doorPhase 'RearDoors' > 0.5 AND alive this";
			};
			class openDoor_L: openDoor
			{
				userActionID = 57;
				displayName=Open Left Door;
				condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
				statement = "this animateDoor ['LeftDoor',1]";
				shortcut="";
			};
			class closeDoor_L: openDoor_L
			{
				userActionID = 58;
				displayName=Close Left Door;
				condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
				statement = "this animateDoor ['LeftDoor',0]";
			};
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
			class WheelBrakes: ToggleLight
			{
				displayName	= "Toggle Wheel Brakes";
				shortcut	= "binocular";
				condition	= "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
				statement	= "[this] call rhs_fnc_heli_wheelBrakes";
			};

		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				getIn = "_this call rhs_fnc_mi8_doors";
				getOut = "_this call rhs_fnc_mi8_doors";
			};
		};
	};

	class RHS_Mi8mt_Cargo_vvsc: RHS_Mi8mt_Cargo_vvs
	{
		EdPrev(rhs_Mi8mt_Cargo_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8mt_Cargo_vdv: RHS_Mi8mt_Cargo_vvsc
	{
		EdPrev(rhs_Mi8mt_Cargo_vdv)
		faction="rhs_faction_vdv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8mt_Cargo_vv: RHS_Mi8mt_Cargo_vvsc
	{
		EdPrev(rhs_Mi8mt_Cargo_vv)
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo3_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};


	class RHS_Mi8MTV3_vvs: RHS_Mi8MTV3_VVS_Base
	{
		EdPrev(rhs_Mi8MTV3_vvs)
		scope=2;
		displayName="$STR_RHS_MI8MTV3_Name";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi8MTV3_vvsc: RHS_Mi8MTV3_vvs
	{
		EdPrev(rhs_Mi8MTV3_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8MTV3_vdv: RHS_Mi8MTV3_vvsc
	{
		EdPrev(rhs_Mi8MTV3_vdv)
		faction="rhs_faction_vdv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

/* 	class RHS_Mi8MTV3_VVS_04: RHS_Mi8MTV3_VVS_03
	{
		EdPrev(rhs_Mi8MTV3_VVS_04)
		faction="rhs_faction_vvs_c";
		scope=2;
		displayName="Mi-8MTV-3 (Desert)";

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo4_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo3_co.paa"
		};
	}; */

	class RHS_Mi8MTV3_UPK23_vvs: RHS_Mi8MTV3_VVS
	{
		EdPrev(rhs_Mi8MTV3_UPK23_vvs)
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		displayName="$STR_RHS_MI8MTV3_UPK_Name";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_upk23_mixed";		};
					class pylon2: pylon2 {attachment = "rhs_mag_upk23_mixed";		};
					class pylon3: pylon3 {attachment = "rhs_mag_b8v20a_s8kom";		};
					class pylon4: pylon4 {attachment = "rhs_mag_b8v20a_s8kom";		};
					class pylon5: pylon5 {};
					class pylon6: pylon6 {};
					class cmDispenser : cmDispenser {};
				};
			};
		};
		memoryPointGun[] = {"chase01","chase02","chase03","chase04"};
		gunBeg[] = {"chase01dir","chase02dir","chase03dir","chase04dir"};
		gunEnd[] = {"chase01","chase02","chase03","chase04"};
	};

	class RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvs
	{
		EdPrev(rhs_Mi8MTV3_UPK23_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8MTV3_UPK23_vdv: RHS_Mi8MTV3_UPK23_vvsc
	{
		EdPrev(rhs_Mi8MTV3_UPK23_vdv)
		faction="rhs_faction_vdv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8MTV3_FAB_vvs: RHS_Mi8MTV3_VVS
	{
		EdPrev(rhs_Mi8MTV3_FAB_vvs)
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		displayName="$STR_RHS_MI8MTV3_FAB_Name";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_fab250";		};
					class pylon2: pylon2 {attachment = "rhs_mag_fab250";		};
					class pylon3: pylon3 {attachment = "rhs_mag_b8v20a_s8kom";		};
					class pylon4: pylon4 {attachment = "rhs_mag_b8v20a_s8kom";		};
					class pylon5: pylon5 {};
					class pylon6: pylon6 {};
					class cmDispenser : cmDispenser {};
				};
			};
		};
	};

	class RHS_Mi8MTV3_FAB_vvsc: RHS_Mi8MTV3_FAB_vvs
	{
		EdPrev(rhs_Mi8MTV3_FAB_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8MTV3_FAB_vdv: RHS_Mi8MTV3_FAB_vvsc
	{
		EdPrev(rhs_Mi8MTV3_FAB_vdv)
		faction="rhs_faction_vdv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};


	class RHS_Mi8mtv3_Cargo_vvs: RHS_Mi8mtv3_vvs
	{
		EdPrev(RHS_Mi8mtv3_Cargo_vvs)
		displayName="$STR_RHS_Mi8mtv3_CARGO_Name";
		AUTHOR_MACRO_BIS_PORT

		driverDoor="LeftDoor";
		cargoDoors[]={"LeftDoor"};

		transportsoldier=12;
		cargoProxyIndexes[] = {1,2,4,5,6,7,8,9,10,11,13,15};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,16};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret {};
			class FrontTurret: FrontTurret {};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";

				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "RHS_HIND_Cargo_Exit";

				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Passenger (Right Rear Doors)";
				gunnerCompartments = "Compartment1";
				proxyIndex = 3;
				maxElev = 15;
				minElev = -45;
				maxTurn = -14;
				minTurn = -85;
				isPersonTurret = 1;
				gunnerUsesPilotView = 1;
				gunnerDoor="LeftDoor";
				memorypointgunneroptics = "";
				selectionFireAnim="";

				LODTurnedOut	= 1200;
				LODTurnedIn		= 1200;
				LODOpticsOut	= 1200;
				LODOpticsIn		= 1200;
				playerPosition = 3;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;

				weapons[] = {rhs_weap_DummyLauncher}; // fix for get in order
				enabledByAnimationSource = "RearDoors";
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Left Rear Doors)";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				proxyIndex = 12;
				maxTurn = 85;
				minTurn = 15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Passenger (Left Door)";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				proxyIndex = 16;
				maxTurn = 35;
				minTurn = -8;
				enabledByAnimationSource = "LeftDoor";
			};

		};
		class AnimationSources: AnimationSources
		{
			class LeftDoor
			{
				source="door";
				animPeriod=0.8;
				initPhase = 1;
			};
			class hide_turrets: hide_turrets
			{
				initPhase = 1;
			};
			class hide_door_hatch: hide_door_hatch
			{
				initPhase = 0;
			};
		};

		class Attributes: Attributes {
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type {};
			class rhs_decalNumber: rhs_decalNumber {};
			class rhs_decalTail: rhs_decalTail {};
			class rhs_reardoors {
				displayName = "Open rear doors";
				property = "rhs_opendoors";
				control = "CheckboxNumber";
				expression = "[_this,12,14,true] call rhs_fnc_mi8_checkDoor";
				defaultValue = "0";
			};
			class rhs_leftdoor: rhs_reardoors {
				displayName = "Open left door";
				property = "rhs_leftdoor";
				expression = "_this animateDoor ['LeftDoor',_value,true]";
			};
		};
		class UserActions
		{
			class HUDoff
			{
				condition = "(player==driver this) and (this animationphase 'HUDAction' !=0)";
				displayname = "$STR_RHS_MI17HudOn_Name";
				displaynamedefault = "$STR_RHS_MI17HudOn_Name";
				onlyforplayer = 1;
				position = "zamerny";
				radius = 1;
				statement = "this animate ['HUDAction',0];this animate ['HUDaction_Hide',0]";
			};
			class HUDon
			{
				condition = "(player==driver this) and (this animationphase 'HUDAction' !=1)";
				displayname = "$STR_RHS_MI17HudOff_Name";
				displaynamedefault = "$STR_RHS_MI17HudOff_Name";
				onlyforplayer = 1;
				position = "zamerny";
				radius = 1;
				statement = "this animate ['HUDAction',1];this animate ['HUDaction_Hide',1]";
			};
			class openDoor
			{
				displayName=Open Rear Doors;
				position="";
				radius = 3;
				priority = 11;
				userActionID = 55;
				onlyForplayer = 1;
				showWindow = 0;
				condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
				statement = "[this,12,14] call rhs_fnc_mi8_checkDoor";
				shortcut="user12";
			};
			class closeDoor: openDoor
			{
				userActionID = 56;
				displayName=Close Rear Doors;
				condition = "this doorPhase 'RearDoors' > 0.5 AND alive this";
			};
			class openDoor_L: openDoor
			{
				userActionID = 57;
				displayName=Open Left Door;
				condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
				statement = "this animateDoor ['LeftDoor',1]";
				shortcut="";
			};
			class closeDoor_L: openDoor_L
			{
				userActionID = 58;
				displayName=Close Left Door;
				condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
				statement = "this animateDoor ['LeftDoor',0]";
			};
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
			class WheelBrakes: ToggleLight
			{
				displayName	= "Toggle Wheel Brakes";
				shortcut	= "binocular";
				condition	= "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
				statement	= "[this] call rhs_fnc_heli_wheelBrakes";
			};

		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				getIn = "_this call rhs_fnc_mi8_doors";
				getOut = "_this call rhs_fnc_mi8_doors";
			};
		};
	};

	class RHS_Mi8mtv3_Cargo_vvsc: RHS_Mi8mtv3_Cargo_vvs
	{
		EdPrev(RHS_Mi8mtv3_Cargo_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8mtv3_Cargo_vdv: RHS_Mi8mtv3_Cargo_vvsc
	{
		EdPrev(RHS_Mi8mtv3_Cargo_vdv)
		faction="rhs_faction_vdv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8MTV3_heavy_vvs: RHS_Mi8MTV3_heavy_VVS_Base
	{
		EdPrev(rhs_Mi8MTV3_heavy_vvs)
		scope=2;
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi8MTV3_heavy_vvsc: RHS_Mi8MTV3_heavy_vvs
	{
		EdPrev(rhs_Mi8MTV3_heavy_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8MTV3_heavy_vdv: RHS_Mi8MTV3_heavy_vvsc
	{
		EdPrev(rhs_Mi8MTV3_heavy_vdv)
		faction="rhs_faction_vdv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8T_vvs: RHS_Mi8T_VVS_Base
	{
		EdPrev(rhs_Mi8t_vvs)
		scope=2;
		displayName="$STR_RHS_Mi8T_Name";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi8T_vvsc: RHS_Mi8T_vvs
	{
		EdPrev(rhs_Mi8T_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT

		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8T_vdv: RHS_Mi8T_vvsc
	{
		EdPrev(rhs_Mi8T_vdv)
		faction="rhs_faction_vdv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class AnimationSources: AnimationSources
		{
			class antennas_switch: antennas_switch {
				initPhase = 1;
			};
		};
	};

	class RHS_Mi8t_vv: RHS_Mi8t_vvs
	{
		EdPrev(rhs_Mi8t_vv)
		faction="rhs_faction_vv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo3_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo3_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};

		class AnimationSources: AnimationSources
		{
			class hide_antenna_aft: hide_antenna_aft {
				initphase = 0;
			};
		};
	};

	class RHS_Mi8AMT_vvs: RHS_Mi8AMT_VVS_Base
	{
		EdPrev(rhs_Mi8AMT_vvs)
		scope=2;
		displayName="$STR_RHS_Mi8AMT_Name";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi8AMT_vvsc: RHS_Mi8AMT_vvs
	{
		EdPrev(rhs_Mi8AMT_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT

		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8AMT_vdv: RHS_Mi8AMT_vvsc
	{
		EdPrev(rhs_Mi8AMT_vdv)
		faction="rhs_faction_vdv";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi8AMTSh_vvs: RHS_Mi8AMTSh_VVS_Base
	{
		EdPrev(rhs_Mi8AMTSh_vvs)
		scope=2;
		displayName="$STR_RHS_MI8AMTSh_Name";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi8AMTSh_vvsc: RHS_Mi8AMTSh_vvs
	{
		EdPrev(rhs_Mi8AMTSh_vvsc)
		faction="rhs_faction_vvs_c";
		scope=2;
		displayName="$STR_RHS_MI8AMTSh_Name";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

/* 	class RHS_Mi8AMTSh_VVS_03: RHS_Mi8AMTSh_VVS_02
	{
		EdPrev(rhs_Mi8AMTSh_VVS_03)
		faction="rhs_faction_vvs_c";
		scope=0;
		displayName="Mi-8AMTSh (Green)";

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa"
		};
	}; */

/* 	class RHS_Mi8AMTSh_VVS_04: RHS_Mi8AMTSh_VVS_02
	{
		EdPrev(rhs_Mi8AMTSh_VVS_04)
		faction="rhs_faction_vvs_c";
		scope=2;
		displayName="Mi-8AMTSh (Desert)";

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo3_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo3_co.paa"
		};
	};
 */

	class RHS_Mi8AMTSh_UPK23_vvs: RHS_Mi8AMTSh_vvs
	{
		EdPrev(rhs_Mi8AMTSh_UPK23_vvs)
		displayName="$STR_RHS_MI8AMTSh_UPK_Name";
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_upk23_mixed";		};
					class pylon2: pylon2 {attachment = "rhs_mag_upk23_mixed";		};
					class pylon3: pylon3 {attachment = "rhs_mag_b8v20a_s8kom";		};
					class pylon4: pylon4 {attachment = "rhs_mag_b8v20a_s8kom";		};
					class pylon5: pylon5 {attachment = "rhs_mag_b8v20a_s8df";	};
					class pylon6: pylon6 {attachment = "rhs_mag_b8v20a_s8df";	};
					class cmDispenser : cmDispenser {};
				};
			};
		};
		memoryPointGun[] = {"chase01","chase02","chase03","chase04"};
		gunBeg[] = {"chase01dir","chase02dir","chase03dir","chase04dir"};
		gunEnd[] = {"chase01","chase02","chase03","chase04"};
	};

	class RHS_Mi8AMTSh_UPK23_vvsc: RHS_Mi8AMTSh_UPK23_vvs
	{
		EdPrev(rhs_Mi8AMTSh_UPK23_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8AMTSh_FAB_vvs: RHS_Mi8AMTSh_vvs
	{
		EdPrev(rhs_Mi8AMTSh_FAB_vvs)
		displayName="$STR_RHS_MI8AMTSh_FAB_Name";
		AUTHOR_MACRO_BIS_PORT
		Show_Zeus
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_fab250";		};
					class pylon2: pylon2 {attachment = "rhs_mag_fab250";		};
					class pylon3: pylon3 {attachment = "rhs_mag_b8v20a_s8kom";	};
					class pylon4: pylon4 {attachment = "rhs_mag_b8v20a_s8kom";	};
					class pylon5: pylon5 {attachment = "rhs_mag_b8v20a_s8df";	};
					class pylon6: pylon6 {attachment = "rhs_mag_b8v20a_s8df";	};
					class cmDispenser : cmDispenser {};
				};
			};
		};
	};

	class RHS_Mi8AMTSh_FAB_vvsc: RHS_Mi8AMTSh_FAB_vvs
	{
		EdPrev(rhs_Mi8AMTSh_FAB_vvsc)
		faction="rhs_faction_vvs_c";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8amt_civilian: RHS_Mi8amt_vvs
	{
		EdPrev(rhs_Mi8amt_civilian)
		scope=2;
		displayName="$STR_RHS_MI8AMT_Name";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={};

		vehicleClass = "Air";
		editorSubcategory = "rhs_EdSubcat_helicopter";

		side = 3;
		faction = "CIV_F";
		crew = "C_man_1_1_F";

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_body_g_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa"
		};
		class EventHandlers : EventHandlers
		{
		};
		class AnimationSources: AnimationSources
		{
			class intake_hide: intake_hide {
				initPhase	= 1;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class cmDispenser : cmDispenser {attachment = "";};
				};
			};
		};
	};

	class RHS_Mi8t_civilian: RHS_Mi8t_vvs
	{
		EdPrev(rhs_Mi8t_civilian)
		scope=2;
		displayName="$STR_RHS_MI8T_Name";
		AUTHOR_MACRO_BIS_PORT
		rhs_decalParameters[]={};

		vehicleClass = "Air";
		editorSubcategory = "rhs_EdSubcat_helicopter";

		side = 3;
		faction = "CIV_F";
		crew = "C_man_1_1_F";

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_body_g_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_det_g_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8tcivil_tv2_g_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa"
		};
		class EventHandlers : EventHandlers
		{
		};
		class AnimationSources: AnimationSources
		{
			class antennas_switch: antennas_switch {
				initPhase	= 1;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class cmDispenser : cmDispenser {attachment = "";};
				};
			};
		};
	};
