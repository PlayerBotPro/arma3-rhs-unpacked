class rhs_weap_smaw: Launcher_Base_F
{
	dlc = "RHS_USAF";

	primary = true;
	audiblefire=20;
	AUTHOR_MACRO
	scope = 2;
	displayName = "MK153 Mod 0 SMAW (Black)";
	model = "rhsusf\addons\rhsusf_weapons2\smaw\smaw.p3d";
	picture = "\rhsusf\addons\rhsusf_weapons2\smaw\UI\smaw_black_x_CA.paa";
	handAnim[] ={"OFP2_ManSkeleton","rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_smaw.rtm"};

	class GunParticles
	{
		class effect1
		{
			positionName = "muzzlepos";
			directionName = "muzzleend";
			effectName =   "RifleAssaultCloud";
		};
	};

	optics = 1;
	opticsdisableperipherialvision = 0.67;
	opticsflare = 0;
	opticsid = 0;
	opticsppeffects[] = {};
	opticszoominit = 0.75;
	opticszoommin = 0.34;
	opticszoommax = 1.1;

	weaponInfoType = "rhs_rscOptics_smaw";
	distanceZoomMin = 250;
	distanceZoomMax = 250;
	discreteDistance[] = {250,250,250,250,250,250,250,250,250,250};
	discreteDistanceCameraPoint[] = {"eye","eye","eye","eye","eye","eye","eye","eye","eye"};
	discreteDistanceInitIndex = 0;

	cameraDir = "look";

	recoil = "rhs_weap_smaw_recoil";
	reloadAction = "RHS_ReloadRPG";

	magazines[] = {"rhs_mag_smaw_HEAA","rhs_mag_smaw_HEDP"};
	magazineWell[] = {CBA_SMAW};

	modelOptics = "-";

	modes[] = {"Single"};

	class Single: Mode_SemiAuto
	{
		recoil = "recoil_single_law";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsusf\addons\rhsusf_weapons2\smaw\sound\smaw_s2.wav",db20,1,1200};
			soundBegin[] = {"begin1",1};
		};
		aiRateOfFire = 7.0;
		aiRateOfFireDistance = 600;
		minRange = 10;
		minRangeProbab = 0.8;
		midRange = 400;
		midRangeProbab = 0.8;
		maxRange = 900;
		maxRangeProbab = 0.5;
		dispersion = 0.35;
	};

	muzzles[] = {"this","rhs_weap_smaw_SR"};

	drySound[] = {"\a3\sounds_f\weapons\GM6Lynx\GM6_lynx_dry.wss",0.4466836,1,20};
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_weapons2\smaw\sound\reload.wss",1.0,1,10};
	aiRateOfFire = 7.0;
	aiRateOfFireDistance = 600;
	minRange = 10;
	minRangeProbab = 0.8;
	midRange = 400;
	midRangeProbab = 0.8;
	maxRange = 900;
	maxRangeProbab = 0.5;
	canLock = 0;
	weaponLockDelay = 3.0;
	lockAcquire = 0;
	inertia = 0.55;
	aimTransitionSpeed = 0.5;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		allowedslots[] = {901};
		mass = 165.44;
		class CowsSlot {
			access = 1;
			compatibleitems[] = {"rhs_weap_optic_smaw","rhs_weap_optic_smaw_1","rhs_weap_optic_smaw_2","rhs_weap_optic_smaw_3","rhs_weap_optic_smaw_4","rhs_weap_optic_smaw_5","rhs_weap_optic_smaw_6","rhs_weap_optic_smaw_7","rhs_weap_optic_smaw_8","rhs_weap_optic_smaw_9","rhs_weap_optic_smaw_10",
								"optic_Holosight","rhsusf_acc_eotech_552","rhsusf_acc_ACOG","rhsusf_acc_ACOG_pip","rhsusf_acc_ACOG2","rhsusf_acc_ACOG3","rhsusf_acc_ACOG_USMC","rhsusf_acc_ACOG2_USMC","rhsusf_acc_ACOG3_USMC"};
			displayname = "Optics Slot";
			linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
			scope = 2;
        	iconPosition[] = {0.45, 0.3};
	        iconScale = 0.2;
        	iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
	        iconPinpoint = "Center";
		};
		class PointerSlot: PointerSlot
		{
		    iconPosition[] = {0.20, 0.45};
            iconScale = 0.25;
        	iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
	        iconPinpoint = "Center";
		};
	};

	descriptionShort = "Rocket launcher<br/>Caliber: 83mm<br/>Type: Shoulder-Launched Multipurpose Assault Weapon";
	class Library
	{
		libTextDesc = "Shoulder-launched rocket weapon with the primary function of being a portable assault weapon (e.g. bunker buster) and a secondary anti-armor rocket launcher.";
	};

	useAction = 1;
	showSwitchAction = 1;

	class rhs_weap_smaw_SR: Launcher_Base_F
	{
		primary = true;
		model = "rhsusf\addons\rhsusf_weapons2\smaw\smaw.p3d";

		magazines[] = {"rhs_mag_smaw_SR"};
		magazineWell[] = {CBA_SMAW_Spotting_Rifle};
		magazinereloadtime = 3.75;

		reloadtime = 0.2;
		recoil = "rhs_weap_smaw_SR_recoil";

		modelOptics = "-";

		displayName = "SMAW Spotting Rifle";
		displayNameShort = "SMAW Spotting Rifle";
		descriptionShort = "SMAW Spotting Rifle";
		useActionTitle = "rhs_weap_smaw_useraction";
		useAction = 0;
		showSwitchAction = 0;

		optics = 1;
		opticsdisableperipherialvision = 0.67;
		opticsflare = 0;
		opticsid = 0;
		opticsppeffects[] = {};
		opticszoominit = 0.75;
		opticszoommin = 0.34;
		opticszoommax = 1.1;

		weaponInfoType = "RscWeaponZeroing";
		distanceZoomMin = 250;
		distanceZoomMax = 250;
		discreteDistance[] = {250,250,250,250,250,250,250,250,250,250};
		discreteDistanceCameraPoint[] = {"eye","eye","eye","eye","eye","eye","eye","eye","eye"};
		discreteDistanceInitIndex = 0;

		cameraDir = "look";

		modes[] = {"Single2"};

		reloadAction = "rhs_weap_smaw_sr";

		reloadMagazineSound[] = {"rhsusf\addons\rhsusf_weapons2\smaw\sound\spotting_reload.wav",1.0,1,10};
		drySound[] = {"\a3\sounds_f\weapons\GM6Lynx\GM6_lynx_dry.wss",0.4466836,1,20};

		class Single2: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsusf\addons\rhsusf_weapons2\smaw\sound\smaw_spotting_s2.wav",db18,1,400};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 900;
			maxRangeProbab = 0.5;
		};
	};
};

class rhs_weap_smaw_green : rhs_weap_smaw
{
	AUTHOR_MACRO

	scope = 2;
	displayName = "MK153 Mod 0 SMAW (Green)";

	picture = "\rhsusf\addons\rhsusf_weapons2\smaw\UI\smaw_green_x_CA.paa";

	hiddenSelections[] = {"tube"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\smaw\data\smaw_green_co.paa"};
};

class rhs_weap_maaws: Launcher_Base_F
{
	dlc = "RHS_USAF";
	audiblefire=20;
	AUTHOR_MACRO
	scope = public;
	displayName = "M3 MAAWS";
	model = "rhsusf\addons\rhsusf_weapons2\m3maaws\m3maaws.p3d";
	picture = "\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_m3maaws_X_CA.paa";
	handAnim[] ={"OFP2_ManSkeleton","rhsusf\addons\rhsusf_weapons2\m3maaws\anim\handanim_m3maaws.rtm"};								// {"OFP2_ManSkeleton","\A3\Weapons_F\Launchers\RPG32\data\Anim\RPG32.rtm"};
	reloadAction = "RHS_ReloadRPG";
	modelOptics = "-";

	maxZeroing = 900;
	weaponInfoType = "RscWeaponZeroing";
	distanceZoomMin = 100;
	distanceZoomMax = 900;
	discreteDistance[] = {100,200,300,400,500,600,700,800,900};
	discreteDistanceCameraPoint[] = {"eye_1", "eye_2", "eye_3", "eye_4","eye_5", "eye_6", "eye_7", "eye_8", "eye_9"};
	discreteDistanceInitIndex = 0;

	cameraDir = "look";

	optics = 1;
	opticsdisableperipherialvision = 0.67;
	opticsflare = 0;
	opticsid = 0;
	opticsppeffects[] = {};
	opticsZoomMin=0.25;
	opticsZoomMax=1.25;
	opticsZoomInit=0.75;
//	memorypointcamera = "eye";

	class GunParticles
	{
		class effect1
		{
			positionName = "BackBlast2";
			directionName = "BackBlast1";
			//effectName =   "m3maaws_backblast";//"RocketBackEffectsRPGNT";
				effectName =   "RocketBackEffectsRPGNT";
		};
	};

	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsusf\addons\rhsusf_weapons2\m3maaws\sound\m3_x.ogg",db35,1,900};
			begin2[] = {"rhsusf\addons\rhsusf_weapons2\m3maaws\sound\m3_y.ogg",db35,1,900};
			soundBegin[] = {"begin1",1,"begin2",1};
		};
		recoil = "recoil_single_law";
		aiRateOfFire = 7.0;
		aiRateOfFireDistance = 600;
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.8;
		maxRange = 600;
		maxRangeProbab = 0.1;
		dispersion = 0.35;
	};

	magazines[] = {"rhs_mag_maaws_HEAT","rhs_mag_maaws_HEDP","rhs_mag_maaws_HE"/*,"rhs_mag_maaws_SMOKE","rhs_mag_maaws_ILLUM"*/};
	magazineWell[] = {CBA_Carl_Gustaf};

	drySound[] = {"A3\sounds_f\weapons\other\dry6",0.4466836,1,20};
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_weapons2\m3maaws\sound\m3_reload.ogg",1.0,1,10};
	recoil = "rhs_weap_smaw_SR_recoil";
	soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.31622776,1.5,900};
	canLock = 0;
	weaponLockDelay = 3.0;
	lockAcquire = 0;
	inertia = 0.9;
	aimTransitionSpeed = 0.5;
	dexterity = 0.5;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		allowedslots[] = {901};
		mass = 187,4;
		class CowsSlot {
			access = 1;
			compatibleitems[] = {"rhs_optic_maaws"};
			displayname = "Optics Slot";
			linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
			scope = 2;
		};
	};
	descriptionShort = "84mm Anti Tank Rifle";
	class Library
	{
		libTextDesc = "The Carl Gustav M3 is a very effective recoilles rifle produced by Saab, The US Army recommends only firing 6 per day otherwise you may suffer internal hemorrhaging";
	};
};
class rhs_weap_M136 : Launcher_Base_F
{
	dlc = "RHS_USAF";

	scope = 2;
	AUTHOR_MACRO
	displayName = "M136 (HEAT)";
	descriptionShort = "Rocket launcher<br/>Caliber: 84mm<br/>Type: Single-shot Anti-Tank";
	picture = "\rhsusf\addons\rhsusf_weapons\icons\w_m136_launcher_ca.paa";

	rhs_disposable=1;
	magazineReloadTime=1;

	model = "rhsusf\addons\rhsusf_weapons2\M136\at4";
	modelOptics = "-";
	aimTransitionSpeed = 0.75;
	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			//effectName = "RHS_Fired_M136HEAT";
			effectName = "RocketBackEffectsRPGNT";
		};
	};

	magazines[] = {rhs_m136_mag};
	reloadAction = "rhs_GestureReloadAT4";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_at4.rtm"};

	drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_weapons2\m136\sound\at4prep.ogg",0.562341,1,50};
	soundFly[] = {"RHSUSF_120mm_Shot_SoundSet","RHSUSF_autocannon_Tail_SoundSet"};

	recoil = "recoil_single_law";
	minRange = 10;
	minRangeProbab = 0.9;
	midRange = 200;
	midRangeProbab = 0.7;
	maxRange = 300;
	maxRangeProbab = 0.1;
	aiRateOfFire = 7;
	aiRateOfFireDistance = 300;
	dispersion = 0.15;

	weaponInfoType = "rhs_rscOptics_at4";

	optics=1;

	class OpticsModes
	{
		class ironsight
		{
			opticsID=2;

			opticsPPEffects[]=
			{
				"OpticsCHAbera1",
				"OpticsBlur1"
			};

			useModelOptics=0;
			opticsFlare=0;
			opticsDisablePeripherialVision=0;
			opticsZoomMin=0.275;
			opticsZoomMax=1.1;
			opticsZoomInit=0.75;
			visionMode="";
			discreteDistanceInitIndex=0;
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"eye_1", "eye_2", "eye_3", "eye_4","eye_5", "eye_6", "eye_7", "eye_8"};
			memorypointcamera = "eye";
			cameraDir = "look";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
	};

	class Library
	{
		libTextDesc = "The M136 is a Swedish disposable anti-tank rocket launcher licensed and manufactured by the United States.";
	};

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		allowedSlots[] = {901};
		mass = 147.4;
		class PointerSlot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
			compatibleItems[] = {"rhs_acc_at4_handler"};
		};
	};

	class ItemInfo
	{
		priority = 3;
		RMBhint = "M136";
		onHoverText = "M136";
	};
	class Eventhandlers: Eventhandlers {
		class RHS_DisposableWeapon {
			fired = "_this call rhs_fnc_disposable;";
		};
	};
};

class rhs_weap_M136_hedp :  rhs_weap_M136
{
	AUTHOR_MACRO
	displayName = "M136 (HEDP)";
	descriptionShort = "Rocket launcher<br/>Caliber: 84mm<br/>Type: Single-shot Dual-purpose";
	magazines[] = {rhs_m136_hedp_mag};


	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			//effectName = "RHS_Fired_M136HEDP";
			effectName = "RocketBackEffectsRPGNT";
		};
	};
};

class rhs_weap_M136_hp :  rhs_weap_M136
{
	AUTHOR_MACRO
	displayName = "M136 (HP)";
	descriptionShort = "Rocket launcher<br/>Caliber: 84mm<br/>Type: Single-shot High-penetration";
	magazines[] = {rhs_m136_hp_mag};


	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			//effectName = "RHS_Fired_M136HP";
			effectName = "RocketBackEffectsRPGNT";
		};
	};
};

class rhs_weap_M136_used : rhs_weap_M136
{
	scope=1;
	model = "rhsusf\addons\rhsusf_weapons2\M136\at4_used";
	descriptionShort = "Used rocket launcher<br/>Caliber: 84mm<br/>Type: Used launcher tube";
	displayname = "M136 HEAT (used)";
	magazines[]={rhsusf_launcher_dummy_mag};
	weaponInfoType = "RscWeaponZeroing";
};

class rhs_weap_M136_hedp_used : rhs_weap_M136_used
{
	displayname = "M136 HEDP (used)";
};

class rhs_weap_M136_hp_used : rhs_weap_M136_used
{
	displayname = "M136 HP (used)";
};

class rhs_weap_m72a7 : rhs_weap_M136
{
	scope = 2;
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_M72A7;
	descriptionShort = "Rocket launcher<br/>Caliber: 66mm<br/>Type: Single-shot Anti-Tank";
	picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_m72a7_icon_ca.paa";

	model = "rhsusf\addons\rhsusf_weapons2\M72\RHS_M72";
	modelOptics = "-";


	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			//effectName = "RHS_Fired_M72A7";
			effectName = "RocketBackEffectsRPGNT";
		};
	};

	magazines[] = { rhs_m72a7_mag };
	reloadAction = "rhs_GestureReloadAT4";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m72.rtm"};

	recoil = "recoil_single_law";
	minRange = 10;
	minRangeProbab = 0.9;
	midRange = 200;
	midRangeProbab = 0.7;
	maxRange = 300;
	maxRangeProbab = 0.1;
	aiRateOfFire = 7;
	aiRateOfFireDistance = 300;
	dispersion = 0.20;

	weaponInfoType = "rhs_rscOptics_m72a7";

	optics=1;

	class OpticsModes
	{
		class ironsight
		{
			opticsID=2;

			opticsPPEffects[]=
			{
				"OpticsCHAbera1",
				"OpticsBlur1"
			};

			useModelOptics=0;
			opticsFlare=0;
			opticsDisablePeripherialVision=0;
			opticsZoomMin=0.275;
			opticsZoomMax=1.1;
			opticsZoomInit=0.75;
			discreteDistanceInitIndex=0;
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"eye_1", "eye_2", "eye_3", "eye_4","eye_5", "eye_6", "eye_7"};
			memorypointcamera = "eye";
			cameraDir = "look";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
	};

	class Library
	{
		libTextDesc = "M72A7 LAW is a portable one-shot 66 mm unguided anti-tank weapon";
	};

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 77;
		class PointerSlot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\Side";
			compatibleItems[] = {"rhsusf_acc_anpeq15side"};
		};
	};

	class ItemInfo
	{
		priority = 3;
		RMBhint = "M72A7";
		onHoverText = "M72A7";
	};
};
class rhs_weap_m72a7_used: rhs_weap_m72a7
{
	scope=1;
	model = "rhsusf\addons\rhsusf_weapons2\M72\RHS_M72_used";
	descriptionShort = "Used rocket launcher<br/>Caliber: 66mm<br/>Type: Used launcher tube";
	displayname = "M72A7 (used)";
	magazines[]={rhsusf_launcher_dummy_mag};
	weaponInfoType = "RscWeaponZeroing";
};

class launch_Titan_base;
class launch_O_Titan_F: launch_Titan_base
{
	class Eventhandlers;
};

class rhs_weap_fim92 : launch_O_Titan_F
{
	dlc = "RHS_USAF";

	scope = 2;
	displayName="FIM-92F";
	descriptionShort = "Missile launcher<br/>Caliber: 70mm<br/>Type: Surface-to-air";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_weapons\FIM92\stinger_launcher";
	picture = "\rhsusf\addons\rhsusf_weapons\icons\w_fim92_ca.paa";
	modelOptics = "-";
	magazines[]={rhs_fim92_mag};

	shotPos = "usti hlavne";
	shotEnd = "konec hlavne";
	cmImmunity = 0.9;

	handAnim[]={"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_fim92.rtm"};

	sounds[] = {StandardSound};

	class StandardSound
	{
		weaponSoundEffect = "DefaultRifle";
		begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32",1.99526,1,900};
		soundBegin[]={"begin1",1};
	};

	class WeaponSlotsInfo
	{
		allowedslots[] = {};
		mass = 92.4;
	};

	drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
	reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};
	soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700};

	class OpticsModes
	{
		class StepScope
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsFlare = 1;
			opticsZoomMin = 0.275;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.75;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			memoryPointCamera = "eye";
			cameraDir = "";
			visionMode[] = {"Normal"};
			thermalMode[] = {};
			opticsDisablePeripherialVision = 1;
		};
	};

	value = 20;
	canLock=2;
	lockAcquire = 1;
	weaponLockDelay = 5;
	weaponLockSystem = CM_Lock_IR;
	recoil = "recoil_single_law";
	reloadAction = "RHS_ReloadRPG";
	cursorAim = "";
	cursorAimOn = "";

	minRange=10;
	minRangeProbab=0.30;
	midRange=2500;
	midRangeProbab=0.8;
	maxRange=4800;
	maxRangeProbab=0.10;
	aiRateOfFire=5.0;
	aiRateOfFireDistance=2500;

	weaponInfoType = "RscWeaponZeroing";

	class Library {libTextDesc = "The FIM-92 Stinger is a personal portable infrared homing surface-to-air missile (SAM), which can be adapted to fire from ground vehicles or helicopters (as an AAM), developed in the United States and entered into service in 1981.";};
};


class rhs_weap_fgm148: launch_O_Titan_F
{
	dlc = "RHS_USAF";

	scope = 2;
	AUTHOR_MACRO
	displayName = "FGM-148 Javelin";
	descriptionShort = "Missile launcher<br/>Caliber: 127mm<br/>Type: Anti-tank";
	picture = "\rhsusf\addons\rhsusf_weapons\FGM148\data\UI\w_fgm148_ca.paa";

	model = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_clu_loaded";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\anim_fgm148.rtm"};

	magazines[] = {rhs_fgm148_magazine_AT,rhs_fgm148_magazine_AT_empty};
	magazineReloadTime = 12;
	reloadTime = 0.5;
	autoReload = 0;
	reloadAction = "RHS_ReloadRPG";

	shotPos = "usti hlavne";
	shotEnd = "konec hlavne";

	modes[] = {Cruise,TopDown};
	backgroundReload = 0;
	class Single: Mode_SemiAuto
	{
		reloadtime 				= 10;
		aiRateOfFire			= 7.0;
		aiRateOfFireDistance	= 1500;

		minRange				= 170;
		minRangeProbab			= 0.9;
		midRange				= 700;
		midRangeProbab			= 0.8;
		maxRange				= 1000;
		maxRangeProbab			= 0.70;
	};
	class Cruise: Single
	{
	};
	class TopDown: Single
	{
		textureType = "topDown";
		displayName = "Top-down Attack";

		aiRateOfFire			= 7.0;
		aiRateOfFireDistance	= 1500;

		minRange				= 470;
		minRangeProbab			= 0.9;
		midRange				= 1700;
		midRangeProbab			= 0.8;
		maxRange				= 4000;
		maxRangeProbab			= 0.70;
	};

	dexterity = 1.7;
	aimTransitionSpeed = 0.5;

	class Library
	{
		libTextDesc = "LONG DESCRIPTION FOR THE MISSILE LAUNCHER";
	};

	class ItemInfo
	{
		priority = 3;
		RMBhint = "FGM-148";
		onHoverText = "TODO FGM148 DSS";
	};

	optics = 1;
	forceoptics = 0;
	lockAcquire = 0;
	autoAimEnabled = 0;
	canLock = 2;
	weaponLockDelay = 5;
	weaponLockSystem = CM_Lock_IR;

	opticsZoomMin = 0.025;
	opticsZoomMax = 0.95;
	opticsZoomInit = 0.42;
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
	cursorAim = "";
	cursorAimOn = "";

	class WeaponSlotsInfo
	{
		mass = 105.79;
	};
	class EventHandlers: Eventhandlers
	{
		class RHS_Fired_EH
		{
			fired = "_this call rhs_fnc_addEmptyTube";
		};
	};
};

class rhs_weap_mk40_sraw: launch_O_Titan_F
{
	dlc = "RHS_USAF";

	scope = 0;
	AGM_enableTopDownAttack = 1;
	AUTHOR_MACRO
	displayName = "Mk 40 Mod 0 SRAW";
	descriptionShort = "Missile launcher<br/>Caliber: 139mm<br/>Type: Anti-tank";
	picture = "\rhsusf\addons\rhsusf_weapons\FGM148\data\UI\w_fgm148_ca.paa";

	model = "\rhsusf\addons\rhsusf_weapons2\sraw\sraw.p3d";

	reloadAction = "rhs_GestureReloadAT4";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_at4.rtm"};

	magazines[] = {rhs_fgm172a_magazine_AT};
	magazineReloadTime = 12;
	reloadTime = 0.5;
	autoReload = 0;

	shotPos = "usti hlavne";
	shotEnd = "konec hlavne";

	dexterity = 1.7;

	class Library
	{
		libTextDesc = "LONG DESCRIPTION FOR THE MISSILE LAUNCHER";
	};

	class ItemInfo
	{
		priority = 3;
		RMBhint = "FGM-172A";
		onHoverText = "TODO FGM172 DSS";
	};

	class WeaponSlotsInfo
	{
		mass = 72.6;
	};

	optics = 1;
	forceoptics = 0;
	lockAcquire = 0;
	autoAimEnabled = 0;
	canLock = 2;
	weaponLockDelay = 10;
	opticsZoomMin = 0.025;
	opticsZoomMax = 0.95;
	opticsZoomInit = 0.42;
	opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};

	/*modelOptics = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_interface";
	class OpticsModes
	{
		class StepScope
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsFlare = 0;
			opticsDisablePeripherialVision = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			//
			opticsZoomMin = 0.08333;
			opticsZoomMax = 0.04167;
			//
			opticsZoomInit = 0.08333;
			//
			discretefov[] = {0.08333,0.04167};
			discreteInitIndex = 0;
			//
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			//
			memoryPointCamera = "eye";
			cameraDir = "look";
			//
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
	};*/

	aiRateOfFire = 10.0;
	aiRateOfFireDistance = 200;
	minRange = 65;
	minRangeProbab = 0.30;
	midRange = 400;
	midRangeProbab = 0.58;
	maxRange = 600;
	maxRangeProbab = 0.04;
};

class rhs_weap_mk41_sraw: rhs_weap_mk40_sraw
{
	dlc = "RHS_USAF";

	scope = 0;
	AGM_enableTopDownAttack = 1;
	AUTHOR_MACRO
	displayName = "Mk 41 Mod 0 SRAW-MPV";
	descriptionShort = "Missile launcher<br/>Caliber: 139mm<br/>Type: Multi-purpose";

	magazines[] = {rhs_fgm172b_magazine_MPV};

	class ItemInfo
	{
		priority = 3;
		RMBhint = "FGM-172";
		onHoverText = "TODO FGM172B DSS";
	};

	class WeaponSlotsInfo
	{
		mass = 72.6;
	};

	aiRateOfFire = 10.0;
	aiRateOfFireDistance = 200;
	minRange = 65;
	minRangeProbab = 0.30;
	midRange = 400;
	midRangeProbab = 0.58;
	maxRange = 600;
	maxRangeProbab = 0.04;
};