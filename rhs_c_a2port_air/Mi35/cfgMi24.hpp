
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
		rhs_decalParameters[]={
			"['Number',cRHSAIRMI24NumberPlaces,'AviaYellow']"
		};

		dlc = "RHS_AFRF";

		category = "Air";
		crew = "rhs_pilot_combat_heli";
		typicalCargo[] = {"rhs_pilot_combat_heli"};
		//symulacja
		#include "simulation.hpp"

		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
		audible				= 7;
		camShakeCoef		= 0.8;
		class PilotCamera {};

		scope=1;
		mapSize=16;

		vehicleClass = "rhs_vehclass_helicopter";
		editorSubcategory = "rhs_EdSubcat_helicopter";

		//displayName			= "$STR_RHS_MI24P_Name";
		displayName			= "Mi-24P";
		icon				= "rhsafrf\addons\rhs_a2port_air\data\map_ico\icon_mi24_ca.paa";
		picture				= "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_mi24p_pic_ca.paa";
		getInRadius			= 2;
		gunnerUsesPilotView	= 0;

		// PhysX
		#include "physx.hpp"
		gearRetracting		= 1;
		driveOnComponent[]	= {wheels};

		defaultUserMFDvalues[] = {0.5,0.5};
		#include "MFD_Mi24_ASP17.hpp"

		gunnerCanSee = 2+4+8+16;
		driverCanSee = 2+4+8+16;


		//Target params definitions
		irTarget = 1;
		irTargetSize = 1;

		visualTarget = 1;
		visualTargetSize = 1.2;

		radarTarget = 1;
		radarTargetSize = 1;

		incomingMissileDetectionSystem = 8;
		lockDetectionSystem = 8;

		soundIncommingMissile[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\alarm_beep",1.098107,1};
		//soundLocked[] = {"\rhsafrf\addons\rhs_optics\sounds\long_beep.wav",db+4,1};
		soundLocked[] = {"",db+4,1};

		unitInfoType		= "RHS_RscUnitInfoAir_Mi24";
		unitInfoTypeRTD		= "RHS_RscUnitInfoAir_RTD_Mi24";
		unitInfoTypeLite	= "RHS_RscUnitInfoAir_RTD_Basic_Mi24";
		hideWeaponsCargo=0;
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
		class TransportBackpacks {};

		driverDoor="Door_Pilot";
		cargoaction[] = {"RHS_HIND_Cargo"};
		cargoDoors[]={"Door_Cargo"};
		driverCompartments = 1;
		cargoCompartments[] = {"Compartment3"};
		cargoGetInAction[]=
		{
			"GetInHeli_Transport_01Cargo"
		};
		cargoGetOutAction[]=
		{
			"RHS_HIND_Cargo_Exit"
		};

		model="\rhsafrf\addons\rhs_a2port_air\mi35\mi24_p";
		/*
		there is additional tail_decals selection to hide
		useful for retexturing

		+ changed hidden selection order for better compatibility with virtual garage - if decals selections are not at the end they are replaced by VG texture function
		*/
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"exhaust",
			"tail_decals",
			"n1",
			"n2",
			"moving_map"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_001_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_002_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa",
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
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_001_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_002_co.paa",
					"rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa"
				};
				factions[]=// This source should be available only for these factions
				{
					rhs_faction_vvs_c, rhs_faction_vvs
				};
			};
			class Camo: standard
			{
				displayName="Camo #1";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24v_001_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24v_002_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
				};
			};
			class Camo1: standard
			{
				displayName="Camo #2";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo1_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo1_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
				};
			};
			class Camo2: standard
			{
				displayName="Camo #3";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo2_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo2_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa"
				};
			};
			class Camo3: standard
			{
				displayName="Camo #4";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"
				};
			};
			class Camo4: standard
			{
				displayName="Soot Camo #1";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot1_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot1_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
				};
			};
			class Camo5: standard
			{
				displayName="Soot Camo #2";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot2_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot2_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
				};
			};
			class Camo6: standard
			{
				displayName="Soot Camo #3";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot3_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot3_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
				};
			};
			class Camo7: standard
			{
				displayName="CDF";
				AUTHOR_MACRO
				textures[]=
				{
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
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
			class rhs_hideExhaust {
				displayName = "Hide exhaust cover";
				tooltip = "Hide exhaust cover. WARNING: DUE TO HOW ENGINE WORKS IT DOESN'T CHANGE EXHAUST MEMORY POINTS";
				property = "rhs_hideExhaust";
				control = "CheckboxNumber";
				expression = "_this animate ['exhaust_hide',_value,true]";
				defaultValue = "0";
			};
			class rhs_opendoors {
				displayName = "Open cargo doors";
				property = "rhs_opendoors";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['Door_Cargo',_value,true]";
				defaultValue = "0";
			};
			class rhs_decalNumber_type {
				displayName = "Define font type of side number";
				tooltip = "Define kind of font that will be drawn on vehicle";
				property = "rhs_decalNumber_type";
				control = "Combo";
				expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI24NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
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
				expression = "if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI24NumberPlaces}else{[_this, [['Number', cRHSAIRMI24NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalTail {
				displayName = "Define tail decal";
				tooltip = "Define tail decalthat will be drawn on vehicle";
				property = "rhs_decalTail";
				control = "Combo";
				expression = "[_this,[['Label', cRHSAIRMI24TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
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

		selectionHRotorStill	="velka vrtule staticka";
		selectionHRotorMove		="velka vrtule blur";
		selectionVRotorStill	="mala vrtule staticka";
		selectionVRotorMove		="mala vrtule blur";

		selectionDamage="trup";
		selectionShowDamage="poskozeni";

		slingLoadMaxCargoMass = 2400;
		precisegetinout					= 1;
		driverAction					="rhs_hind_pilot";
		driverInAction					="rhs_hind_pilot";
		getInAction						="pilot_Heli_Light_02_Enter";
		getOutAction					="pilot_Heli_Light_02_Exit";
		memoryPointsGetInDriverPrecise	="pos driver";
		//memoryPointsGetInDriverDirPrecise="pos dir";

		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";

		driverLeftHandAnimName="stick_pilot";
		driverRightHandAnimName="stick_pilot";

		memoryPointLRocket	="rocket_1";
		memoryPointRRocket	="rocket_2";
		memoryPointLMissile	="missile_1";
		memoryPointRMissile	="missile_2";


		//gun="mainGun";
		//gunBeg="muzzle_1";
		//gunEnd="chamber_1";
		//memoryPointGun="machinegun";
		//animationSourceGun="mainGun";
		memoryPointGun[] = {"machinegun","machinegun2"};
		gunBeg[] = {"muzzle_1","muzzle_2"};
		gunEnd[] = {"chamber_1","chamber_2"};

		particlesPos="chamber_1";
		particlesDir="muzzle_1";

		selectionFireAnim="zasleh";
		primaryGunner=2;
		weaponsGroup1 = 128;
		weaponsGroup4 = 64;

		weapons[]=
		{
			rhs_weap_MASTERSAFE,
			rhs_weap_DIRCM_Lipa,
			rhs_weap_gsh30
		};
		magazines[]=
		{
			rhs_mag_gsh30_ofzt_750,
			mag_10(rhs_mag_DIRCM_Lipa)
		};

		transportsoldier=4;
//ffv config
		cargoProxyIndexes[] = {1,2,3,4};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8};

		class Turrets: Turrets
		{

			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_MASTERSAFE",
					"rhs_weap_fcs_mi24"
				};
				magazines[]=
				{
					"rhs_laserfcsmag"
				};

				gunnerAction					= "rhs_hind_gunner";
				gunnerInAction					= "rhs_hind_gunner";
				gunnerGetInAction				= "Heli_Attack_01_Pilot_enter";
				gunnerGetOutAction				= "Heli_Attack_01_Pilot_exit";
				memoryPointsGetInGunnerPrecise	= "pos gunner";
				memoryPointsGetInGunner			= "pos gunner";
				memoryPointsGetInGunnerDir		= "pos gunner dir";
				gunnerLeftHandAnimName			= "stick_gunner";
				gunnerRightHandAnimName			= "stick_gunner";
				animationSourceStickX			= "MainTurret_Inertia";
				animationSourceStickY			= "MainGun_Inertia";
				gunnerCompartments				= "Compartment2";
				castGunnerShadow				= 1;
				viewGunnerShadow				= 1;
				precisegetinout					= 1;
				outGunnerMayFire				= 1;
				commanding						= 0;
				primaryGunner					= 1;
				isCopilot						= 1; //lol, that's the fix for ai dumbness with gsh cannon

				selectionFireAnim	= "";
				memoryPointGun		=  "";
				gunBeg				= "";
				gunEnd				= "";

				initelev	= 4;
				initturn	= 0;
				maxelev		= 20;
				minelev		= -60;
				maxturn		= 60;
				minturn		= -60;

				particlesPos	= "";
				particlesDir	= "";
				canHideGunner	= 0;
				usePiP			= 1;
				lodTurnedIn		= 1000;
				lodTurnedOut	= 1000;

				stabilizedInAxes			= 3;
				memoryPointGunnerOptics		= "gunnerview2";
				memoryPointGunnerOutOptics	= "gunnerview2"; //not werfing
				turretinfotype				= "RHS_RscWeaponMi24_FCS";
				gunnerDoor					= "door_gunner";
				canUseScanners				= 0;
				allowTabLock				= 0;

				class ViewOptics
				{
					initanglex	= 0;
					initangley	= 0;
					initfov		= 0.155;
					maxanglex	= 50;
					maxangley	= 100;
					maxfov		= 0.155;
					minanglex	= -50;
					minangley	= -100;
					minfov		= 0.047;
				};
				gunneropticseffect[]=
				{
					"OpticsBlur2",
					"OpticsCHAbera2"
				};
				//gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				class OpticsIn
				{
					class KPS53AV
					{
						opticsDisplayName	= "KPS53AV";
						gunneropticsmodel	= "\A3\weapons_f\reticle\optics_empty";
						initanglex			= 0;
						initangley			= 0;
						maxanglex			= 30;
						maxangley			= 100;
						initfov				= __EVAL(0.7/1);
						maxfov				= __EVAL(0.7/1);
						minfov				= __EVAL(0.7/1);
						minanglex			= -30;
						minangley			= -100;
						thermalmode[]		= {0,1};
					};
					class 9S475_3
					{
						camPos				= "view_9s475";
						hitpoint			= Hit_Optic_9S475;
						opticsDisplayName	= "9S475_3";
						gunneropticsmodel	= "rhsafrf\addons\rhs_a2port_air\mi35\rhs_sight_9s475_x3";
						initanglex			= 0;
						initangley			= 0;
						maxanglex			= 30;
						maxangley			= 100;
						initfov				= __EVAL(0.7/3.3);
						maxfov				= __EVAL(0.7/3.3);
						minfov				= __EVAL(0.7/3.3);
						minanglex			= -30;
						minangley			= -100;
						thermalmode[]		= {0,1};
						visionmode[]		=
						{
							"Normal"
						};
					};
					class 9S475_10: 9S475_3
					{
						opticsDisplayName	= "9S475_10";
						gunneropticsmodel	= "rhsafrf\addons\rhs_a2port_air\mi35\rhs_sight_9s475_x10";
						initfov				= __EVAL(0.7/10);
						maxfov				= __EVAL(0.7/10);
						minfov				= __EVAL(0.7/10);
						directionStabilized	= 1;
					};
				};
				class OpticsOut
				{
					class KPS53AV
					{
						gunneropticsmodel	= "\A3\weapons_f\reticle\optics_empty";
						initanglex			= 0;
						initangley			= 0;
						maxanglex			= 30;
						maxangley			= 100;
						initfov				= __EVAL(0.7/1);
						maxfov				= __EVAL(0.7/1);
						minfov				= __EVAL(0.7/1);
						minanglex			= -30;
						minangley			= -100;
						thermalmode[]		= {0,1};
						visionmode[]		=
						{
							"Normal"
						};
					};
				};
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
						useFlare = 0;
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
				};
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
						class Components
						{
							CI_EMPTY
							CI_CREW
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";

				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "RHS_HIND_Cargo_Exit";

				memoryPointsGetInGunner		= "pos cargo R2";
				memoryPointsGetInGunnerDir	= "pos cargo R2 dir";
				gunnerName					= "Passenger (Right Bench 2)";
				gunnerCompartments			= "Compartment3";
				proxyIndex					= 5;
				maxElev						= 15;
				minElev						= -45;
				maxTurn						= 40;
				minTurn						= -15;
				lodTurnedIn					= 1200;
				lodTurnedOut				= 1200;
				lodOpticsIn					= 1200;
				lodOpticsOut				= 1200;
				isPersonTurret				= 1;
				gunnerUsesPilotView			= 0;
				gunnerDoor					= "Door_Cargo";
				selectionFireAnim			= "";
				commanding					= -2;
				weapons[]					= {rhs_weap_DummyLauncher}; // fix for get in order

				cantCreateAI=1;
				playerPosition = 2;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;

				enabledByAnimationSource = "Door_Cargo";
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Right Bench 1)";
				memoryPointsGetInGunner = "pos cargo R";
				memoryPointsGetInGunnerDir = "pos cargo R dir";
				proxyIndex = 7;
				maxTurn = 34;
				minTurn = -30;
			};
			class CargoTurret_03: CargoTurret_01
			{
				memoryPointsGetInGunner = "pos cargo L2";
				memoryPointsGetInGunnerDir = "pos cargo L2 dir";
				gunnerName = "Passenger (Left Bench 2)";
				proxyIndex = 6;
				maxTurn = 25;
				minTurn = -44;
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerName = "Passenger (Left Bench 1)";
				memoryPointsGetInGunner = "pos cargo L";
				memoryPointsGetInGunnerDir = "pos cargo L dir";
				proxyIndex = 8;
				maxTurn = 31;
				minTurn = -25;
			};
		};

		//Sensors definition
		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					// AI helper
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(2000,3200)
						animDirection			= "mainGun";
						maxTrackableSpeed		= 30;
						angleRangeHorizontal	= 28;
						angleRangeVertical		= 22;
						maxFogSeeThrough		= 0.35;
						nightRangeCoef			= 0.1;
					};
				};
			};

			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components : components
				{
					CI_CREW
				};
			};

			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				class Components : components
				{
					CI_CREW
				};
			};
			#include "dynamicLoadouts.hpp"
		};

		class UserActions
		{
			class SAFEMODE {
				displayName		= "<t color='#00FF7F'>MASTERSAFE</t>";
				condition		= "(call rhs_fnc_findPlayer) isEqualTo (driver this) || (call rhs_fnc_findPlayer) isEqualTo (gunner this)";
				statement		= "(call rhs_fnc_findPlayer) action ['SwitchWeapon', this, (call rhs_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
				position		= "";
				radius			= 10;
				priority		= 10.5;
				onlyforplayer	= 1;
				showWindow		= 0;
				shortcut		= "user13";
				hideOnUse		= 1;
			};
			class openDoor
			{
				displayName		= "Open Door";
				position		="";
				radius			= 3;
				priority		= 11;
				showWindow		= 0;
				onlyForplayer	= 1;
				condition		= "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
				statement		= "this animateDoor ['Door_Cargo',1]";
				shortcut		="user12";
			};
			class closeDoor: openDoor
			{
				displayName	= "Close Door";
				condition	= "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
				statement	= "this animateDoor ['Door_Cargo',0]";
			};
			class ToggleLight
			{
				displayName		="Toggle interior light";
				position		="pos driver";
				radius			=15;
				showwindow		=0;
				condition		="player in this;";
				statement		="[this,'cabinlights_hide',[0]] call rhs_fnc_toggleIntLight";
				onlyforplayer	=1;
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
		armor						= 50;
		armorStructural				= 20;
		damageresistance			= 0.000345;
		hullDamageCauseExplosion	= 1;
		epeImpulseDamageCoef		= 1;
		hullExplosionDelay[]		= {10, 20};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				simulation		= RHS_Hull_Helicopter;
				armor			= -200;
				minimalHit		= -0.15;
				radius			= 0.2;
				name			= "hull_hit";
				armorComponent	= "Hit_Hull";
				visual			= "zbytek";
				passThrough		= 1;
				class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
			};
			class HitFuel : HitFuel {
				armor = 1.3;
				radius = 0.125;
				minimalHit = 0.05;
				explosionShielding = 2;
			};
			class HitAvionics : HitAvionics {
				armor = 1.6;
				radius = 0.4;
				minimalHit = 0.15;
				explosionShielding = 1.5;
				visual = "podsvit pristroju";
			};
			class HitEngine1 : HitEngine1
			{
				armor = 1.63;
				radius = 0.35;
				explosionShielding = 3;
				minimalHit = 0.1;
				name = "engine_1_hit";
			};
			class HitEngine2 : HitEngine1 {
				name = "engine_2_hit";
			};
			class HitEngine : HitEngine2 {
				armor = 999;
				visual = "camo2";
				name = "engine_hit";
				convexComponent = "engine_hit";
				depends = "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitTail 			{armor = -150;	explosionShielding = 0.20; passThrough = 0.50; minimalHit = -0.2;	radius = 0.13; 	 armorComponent = "Hit_Tail";name = "Hit_Tail";		visual = "-";simulation = RHS_Hull_Helicopter;};
			class HitVRotor
			{
				armor				= 0.5;
				explosionShielding	= 1;
				passThrough			= 0.3;
				name				= "tail_rotor_hit";
				visual				= "mala vrtule staticka";
				depends				= "HitTail";
			};
			class HitHRotor
			{
				armor=0.5;
				explosionShielding=1;
				material=51;
				passThrough=0.1;
				name="main_rotor_hit";
				visual="velka vrtule staticka";
			};
			// RTD Hitpoints
			class HitHydraulics 		{armor = -50;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 name = "hit_hydraulics";		visual = "-";		};
			class HitTransmission 		{armor = -80;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 name = "transmission";	visual = "-";};
			// Stabilizers - Left/Right/Vertical
			class HitHStabilizerL1 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 name = "hstabilizerl1";		visual = "-";};
			class HitHStabilizerR1 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 name = "hstabilizerr1";		visual = "-";};
			class HitVStabilizer1 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	 name = "vstabilizer1";		visual = "-";};
			// Those are affecting output of RTD sources
			// airspeedIndicatorRTD
			class HitPitotTube 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13; 	name = "pitot tube";		visual = "-";		depends = "";  					};
			// altBaroRTD
			class HitStaticPort 	{armor = -30;	explosionShielding = 0.50; passThrough = 0.10; minimalHit = 0.10;	radius = 0.13;name = "static port";		visual = "-";		depends = "";  					};

			class HitGlass1: HitGlass1
			{
				armor=14.75;
				explosionShielding = 2;
				radius = 0.35;
				minimalHit = 0.001;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.45;
				armorComponent = "glass2";
				explosionShielding = 1.5;
				radius = 0.2;
				minimalHit = 0.01;
			};
			class HitGlass3: HitGlass3
			{
				armor=14.75;
				armorComponent = "glass3";
				explosionShielding = 2;
				radius = 0.35;
				minimalHit = 0.001;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.45;
				armorComponent = "glass4";
				explosionShielding = 1.5;
				radius = 0.35;
				minimalHit = 0.01;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.45;
				armorComponent = "glass5";
				explosionShielding = 1.5;
				radius = 0.3;
				minimalHit = 0.01;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.45;
				armorComponent = "glass6";
				explosionShielding = 1.5;
				radius = 0.35;
				minimalHit = 0.05;
			};
			class Hit_Optic_9S475		{armor	= -40;explosionShielding = 0;name = "";visual = "-";armorComponent = "Hit_Optic_9S475";	passThrough = 0;};
			HP_PYLON(1,0.7)
			HP_PYLON(2,0.7)
			HP_PYLON(3,0.7)
			HP_PYLON(4,0.7)
			HP_PYLON(5,0.7)
			HP_PYLON(6,0.7)
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_interier.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_interier_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_interier_damage.rvmat",

				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002_destruct.rvmat",

				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_003.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_003_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_003_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class cabinlights_hide
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
			};
			class Door_Gunner
			{
				source="door";
				animPeriod=0.8;
			};
			class Door_Pilot
			{
				source="door";
				animPeriod=0.8;
			};
			class Door_Cargo
			{
				source=door;
				animPeriod=1.0;
				initPhase = 0;
				sound = "ServoDoorsSound";
				soundPosition = "pos cargo dir";
			};
			class muzzle_rot_hmg
			{
				weapon	= "rhs_weap_gsh30";
				source	= "ammorandom";
			};
			class muzzle_hide_hmg
			{
				weapon	= "rhs_weap_gsh30";
				source	= "reload";
			};
			class exhaust_hide
			{
				source="user";
				initPhase=0;
				animPeriod=0.00001;
				mass=1;
				displayName="hide exhaust";

			};
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

			class damper_1_1_source	{source = damper; wheel = wheel_1_1;};
			class damper_2_1_source	{source = damper; wheel = wheel_2_1;};
     		class damper_2_2_source	{source = damper; wheel = wheel_2_2;};
			class wheel_1_1_source	{source = wheel; wheel = wheel_1_1;};
			class wheel_2_1_source	{source = wheel; wheel = wheel_2_1;};
			class wheel_2_2_source	{source = wheel; wheel = wheel_2_2;};
			ANIM_PYLON(1)
			ANIM_PYLON(2)
			ANIM_PYLON(3)
			ANIM_PYLON(4)
			ANIM_PYLON(5)
			ANIM_PYLON(6)
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_Pilot
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
						hardLimitStart	= 0.55;
						hardLimitEnd	= 0.95;
					};
					point = "light_pilot";
				};
			};
			class Comp2
			{
				class Light_Gunner
				{
					color[]				= {40,20,20};
					ambient[]			= {0,0,0};
					intensity			= 3.5;
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
						hardLimitStart	= 0.75;
						hardLimitEnd	= 1.05;
					};
					point = "light_gunner";
				};
			};
		};
		class Reflectors
		{
			class Light
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 5;
				outerAngle = 75;
				coneFadeCoef = 10;

				position="l svetlo";
				direction="l svetlo konec";
				hitpoint="l svetlo";
				selection="l svetlo";
				useFlare=0;
				dayLight=0;
				flareSize=0.75;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 200;
					hardLimitEnd = 250;
				};
			};
			class Light_Flare: Light
			{
				intensity = .5;
				useFlare=1;
				innerAngle = 5;
				outerAngle = 175;
			};
		};
		aggregateReflectors[]=
		{

			{
				"Light","Light_Flare"
			}
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
				//PIP_BB(0)
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
				//PIP_BB(1)
			};
		};

		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init";
				postInit = "_this call rhs_fnc_reapplyTextures";
				//incomingMissile = "_this spawn rhs_fnc_rwr_mi24";
				getIn = "_this call rhs_fnc_mi24_doors";
				getOut = "_this call rhs_fnc_mi24_doors";
				//hitpart = "_this call rhs_fnc_hitPart";
			};
		};
	};

	class RHS_Mi24V_Base: RHS_Mi24_base
	{
		EdPrev(rhs_Mi24V_Base)
		displayName="Mi-24V";
		//displayName="$STR_RHS_MI24V_Name";
		model="\rhsafrf\addons\rhs_a2port_air\mi35\mi24_v";
		picture="\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_mi24v_pic_ca.paa";
		tf_isolatedAmount_api = 0.6;

		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {-0.12,8.5,-2.21};
		LESH_WheelOffset[] = {-0.12,1};

		weapons[]=
		{
			rhs_weap_MASTERSAFE,
			rhs_weap_DIRCM_Lipa
		};
		magazines[]=
		{
			mag_10(rhs_mag_DIRCM_Lipa)
		};
		selectionFireAnim="";

		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "rhs_weap_yakB";
			};
			class muzzle_rot_hmg
			{
				weapon	= "rhs_weap_yakB";
				source	= "ammorandom";
			};
			class muzzle_hide_hmg
			{
				weapon	= "rhs_weap_yakB";
				source	= "reload";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body	="mainTurret";
				gun		="mainGun";

				weapons[]={
					"rhs_weap_MASTERSAFE",
					"rhs_weap_yakB",
					"rhs_weap_fcs_mi24"
				};
				magazines[]={
					"rhs_mag_127x108mm_1SLT_1470",
					"rhs_laserfcsmag"
				};

				gunBeg			="muzzle_1";
				gunEnd			="chamber_1";
				memoryPointGun	="chamber_1";

				particlesPos	="chamber_1";
				particlesDir	="muzzle_1";

				selectionFireAnim		= "";
				maxhorizontalrotspeed	= 1.6;
				maxverticalrotspeed		= 1.6;
				//memorypointgun		= "machinegun";
				initelev				= 4;
				initturn				= 0;
				maxelev					= 20;
				minelev					= -60;
				maxturn					= 60;
				minturn					= -60;
				primarygunner			= 1;
				stabilizedInAxes		= 2;
			};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_04 {};
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon2: pylon2 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon3: pylon3 {attachment = "rhs_mag_b8v20a_s8df";		turret[]= {}; };
					class pylon4: pylon4 {attachment = "rhs_mag_b8v20a_s8df";		turret[]= {}; };
					class pylon5: pylon5 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon6: pylon6 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
		memoryPointGun[] = {"chase01","chase02","chase03","chase04"};
		gunBeg[] = {"chase01dir","chase02dir","chase03dir","chase04dir"};
		gunEnd[] = {"chase01","chase02","chase03","chase04"};
	};
	class RHS_Mi24D_Base: RHS_Mi24V_Base
	{
		EdPrev(rhs_Mi24V_Base)
		displayName="$STR_RHS_MI24D_Name";

		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=0.00001;
			};
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};

		weapons[]=	{"rhs_weap_MASTERSAFE"};
		magazines[]=	{};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={
					rhs_weap_MASTERSAFE,
					rhs_weap_yakB
				};
				magazines[]={
					rhs_mag_127x108mm_1SLT_1470
				};
			};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_04 {};
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_ub32_s5ko";			turret[]= {}; };
					class pylon2: pylon2 {attachment = "rhs_mag_ub32_s5ko";			turret[]= {}; };
					class pylon3: pylon3 {attachment = "rhs_mag_ub32_s5k1";			turret[]= {}; };
					class pylon4: pylon4 {attachment = "rhs_mag_ub32_s5k1";			turret[]= {}; };
					class pylon5: pylon5 {attachment = "rhs_mag_9M17P_Mi24_2x";		turret[]= {0}; };
					class pylon6: pylon6 {attachment = "rhs_mag_9M17P_Mi24_2x";		turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};
	class RHS_Mi24D_Early_Base: RHS_Mi24D_Base
	{
		displayName="$STR_RHS_MI24D_Early_Name";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_ub32_s5ko";			turret[]= {}; };
					class pylon2: pylon2 {attachment = "rhs_mag_ub32_s5ko";			turret[]= {}; };
					class pylon3: pylon3 {attachment = "rhs_mag_ub32_s5k1";			turret[]= {}; };
					class pylon4: pylon4 {attachment = "rhs_mag_ub32_s5k1";			turret[]= {}; };
					class pylon5: pylon5 {attachment = "rhs_mag_9M17_Mi24_2x";		turret[]= {0}; };
					class pylon6: pylon6 {attachment = "rhs_mag_9M17_Mi24_2x";		turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};

	class RHS_Mi24P_VVS_Base: RHS_Mi24_base
	{
		EdPrev(rhs_Mi24P_VVS_Base)
		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_vvs";

		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {0.5,8.5,-2.21};
		LESH_WheelOffset[] = {0.5,1};
	};

	class RHS_Mi24P_vvs : RHS_Mi24P_VVS_Base
	{
		EdPrev(rhs_Mi24P_vvs)
		scope=2;
		//displayName="$STR_RHS_MI24P_Name";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi24P_vvsc: RHS_Mi24P_vvs
	{
		EdPrev(rhs_Mi24P_vvsc)
		faction="rhs_faction_vvs_c";
		scope=2;
		//displayName="Mi-24P";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};

	class RHS_Mi24P_CAS_VVS_Base: RHS_Mi24P_VVS_Base
	{
		EdPrev(rhs_Mi24P_CAS_VVS_Base)

		displayName="$STR_RHS_MI24P_CAS_Name";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon2: pylon2 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon3: pylon3 {attachment = "rhs_mag_b8v20a_s8df";			turret[]= {}; };
					class pylon4: pylon4 {attachment = "rhs_mag_b8v20a_s8df";			turret[]= {}; };
					class pylon5: pylon5 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon6: pylon6 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};

	class RHS_Mi24P_CAS_vvs : RHS_Mi24P_CAS_VVS_Base
	{
		EdPrev(rhs_Mi24P_CAS_vvs)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi24P_CAS_vvsc: RHS_Mi24P_CAS_vvs
	{
		EdPrev(rhs_Mi24P_CAS_vvsc)
		faction="rhs_faction_vvs_c";
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};

	class RHS_Mi24P_CAS_vdv : RHS_Mi24P_CAS_VVS_Base
	{
		EdPrev(rhs_Mi24P_CAS_vdv)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
		faction="rhs_faction_vdv";

		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=0.00001;
			};
		};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};

	class RHS_Mi24P_AT_VVS_Base: RHS_Mi24P_VVS_Base
	{
		EdPrev(rhs_Mi24P_AT_VVS_Base)

		displayName="$STR_RHS_MI24P_AT_Name";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon2: pylon2 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon3: pylon3 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon4: pylon4 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon5: pylon5 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon6: pylon6 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};

	class RHS_Mi24P_AT_vvs : RHS_Mi24P_AT_VVS_Base
	{
		EdPrev(rhs_Mi24P_AT_vvs)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvs
	{
		EdPrev(rhs_Mi24P_AT_vvsc)
		faction="rhs_faction_vvs_c";
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};

	class RHS_Mi24P_AT_vdv : RHS_Mi24P_AT_VVS_Base
	{
		EdPrev(rhs_Mi24P_AT_vdv)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
		faction="rhs_faction_vdv";

		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=0.00001;
			};
		};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};

	class RHS_Mi24P_vdv: RHS_Mi24P_vvsc
	{
		EdPrev(rhs_Mi24P_vdv)
		faction="rhs_faction_vdv";
		//displayName="Mi-24P";
		AUTHOR_MACRO_BIS_PORT
		scope=2;

		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=0.00001;
			};
		};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};

	class RHS_Mi24V_VVS_Base: RHS_Mi24V_base
	{
		EdPrev(rhs_Mi24V_VVS_Base)
		accuracy = 0.5;
		side = 0;
		faction="rhs_faction_vvs";
	};

	class RHS_Mi24V_vvs: RHS_Mi24V_VVS_Base
	{
		EdPrev(rhs_Mi24V_vvs)
		scope=2;
		//displayName="Mi-24V";
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi24V_vvsc: RHS_Mi24V_vvs
	{
		EdPrev(rhs_Mi24V_vvsc)
		faction="rhs_faction_vvs_c";
		scope=2;
		//displayName="Mi-24V";
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};

	class RHS_Mi24V_FAB_VVS_Base: RHS_Mi24V_VVS_Base
	{
		EdPrev(rhs_Mi24V_FAB_VVS_Base)
		faction="rhs_faction_vvs";
		displayName="$STR_RHS_MI24V_FAB_Name";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_fab250";			turret[]= {0}; };
					class pylon2: pylon2 {attachment = "rhs_mag_fab250";			turret[]= {0}; };
					class pylon3: pylon3 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon4: pylon4 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon5: pylon5 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon6: pylon6 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};

	class RHS_Mi24V_FAB_vvs: RHS_Mi24V_FAB_VVS_Base
	{
		EdPrev(rhs_Mi24V_FAB_vvs)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi24V_FAB_vvsc:  RHS_Mi24V_fab_vvs
	{
		faction="rhs_faction_vvs_c";
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};

	class RHS_Mi24V_FAB_vdv: RHS_Mi24V_FAB_VVS_Base
	{
		EdPrev(rhs_Mi24V_FAB_vdv)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
		faction="rhs_faction_vdv";

		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=0.00001;
			};
		};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};

	class RHS_Mi24V_UPK23_VVS_Base: RHS_Mi24V_VVS_Base
	{
		EdPrev(rhs_Mi24V_UPK23_VVS_Base)
		faction="rhs_faction_vvs";
		displayName="$STR_RHS_MI24V_UPK_Name";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_upk23_mixed";		turret[]= {}; };
					class pylon2: pylon2 {attachment = "rhs_mag_upk23_mixed";		turret[]= {}; };
					class pylon3: pylon3 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon4: pylon4 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon5: pylon5 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon6: pylon6 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};

	class RHS_Mi24V_UPK23_vvs: RHS_Mi24V_UPK23_VVS_Base
	{
		EdPrev(rhs_Mi24V_UPK23_vvs)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi24V_UPK23_vvsc:  RHS_Mi24V_upk23_vvs
	{
		faction="rhs_faction_vvs_c";
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};

	class RHS_Mi24V_UPK23_vdv: RHS_Mi24V_UPK23_VVS_Base
	{
		EdPrev(rhs_Mi24V_UPK23_vdv)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
		faction="rhs_faction_vdv";

		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=0.00001;
			};
		};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};

	class RHS_Mi24V_AT_VVS_Base: RHS_Mi24V_VVS_Base
	{
		EdPrev(rhs_Mi24V_AT_VVS_Base)
		faction="rhs_faction_vvs";
		displayName="$STR_RHS_MI24V_AT_Name";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon2: pylon2 {attachment = "rhs_mag_b8v20a_s8kom";		turret[]= {}; };
					class pylon3: pylon3 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon4: pylon4 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon5: pylon5 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class pylon6: pylon6 {attachment = "rhs_mag_9M120M_Mi24_2x";	turret[]= {0}; };
					class cmDispenser: cmDispenser {};
				};
			};
		};
	};

	class RHS_Mi24V_AT_vvs: RHS_Mi24V_AT_VVS_Base
	{
		EdPrev(rhs_Mi24V_AT_vvs)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
	};

	class RHS_Mi24V_AT_vvsc:  RHS_Mi24V_AT_vvs
	{
		faction="rhs_faction_vvs_c";
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};

	class RHS_Mi24V_AT_vdv: RHS_Mi24V_AT_VVS_Base
	{
		EdPrev(rhs_Mi24V_AT_vdv)
		Show_Zeus
		AUTHOR_MACRO_BIS_PORT
		faction="rhs_faction_vdv";

		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=0.00001;
			};
		};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};

	class RHS_Mi24Vt_vvs: RHS_Mi24V_vvs
	{
		EdPrev(rhs_Mi24Vt_vvs)
		scope=2;
		displayName="$STR_RHS_MI24Vt_Name";
		AUTHOR_MACRO_BIS_PORT
		model="\rhsafrf\addons\rhs_a2port_air\mi35\mi24_vt";
		slingLoadMaxCargoMass = 2400;
		slingLoadMemoryPoint = "slingLoad0";

		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {-0.12,8.5,-2.21};
		LESH_WheelOffset[] = {-0.12,1};

		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft : VehicleSystemsDisplayManagerComponentLeft
			{
				class Components
				{
					CI_EMPTY
					CI_CREW
					CI_SLA
				};
			};
			class VehicleSystemsDisplayManagerComponentRight : VehicleSystemsDisplayManagerComponentRight
			{
				class Components
				{
					CI_EMPTY
					CI_CREW
					CI_SLA
				};
			};
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons
				{
				UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi24_EDEN_CA.paa";
					class cmDispenser
					{
						hardpoints[]	= {"RHS_cm_ASO2","RHS_cm_ASO2_x2","RHS_cm_ASO2_x4"};
						priority		= 1;
						attachment		= "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
			};
		};
	};

	class RHS_Mi24Vt_vvsc: RHS_Mi24Vt_vvs
	{
		EdPrev(rhs_Mi24Vt_vvsc)
		faction="rhs_faction_vvs_c";
		scope=2;
		AUTHOR_MACRO_BIS_PORT

		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers : EventHandlers
		{
			class RHS_EventHandlers : RHS_EventHandlers
			{
				init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};

	class RHS_Mi24V_vdv : RHS_Mi24V_vvsc
	{
		EdPrev(rhs_Mi24V_vdv)
		faction="rhs_faction_vdv";
		//displayName="Mi-24V";
		AUTHOR_MACRO_BIS_PORT
		scope=2;

		class AnimationSources: AnimationSources
		{
			class exhaust_hide
			{
				source="user";
				initPhase=1;
				animPeriod=0.00001;
			};
		};
		hiddenselectionstextures[] =
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};
