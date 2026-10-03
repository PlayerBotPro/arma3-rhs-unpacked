class Launcher;
class Launcher_Base_F : Launcher
{
	class WeaponSlotsInfo;
	class EventHandlers;
};
class launch_RPG32_F: Launcher_Base_F {};

class rhs_weap_rpg26 : Launcher_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_rpg26)
	dlc = "RHS_AFRF";

	scope = 2;
	displayName = "$STR_RHS_RPG26_NAME";
	descriptionShort = "Rocket launcher<br/>Caliber: 72.5mm<br/>Type: Single-shot Anti-tank";

	rhs_disposable=1;
	reloadTime=1;
	magazineReloadTime = 1;
	model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26";
	modelOptics = "-";
	aimTransitionSpeed = 0.75;

	recoil = "rhs_recoil_rpg26";
	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			effectName = "RocketBackEffectsRPGNT";
		};
	};

	magazines[] = {rhs_rpg26_mag};
	reloadAction = "ReloadRPG";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\RPG26.rtm"};

 	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32",1.99526,1,900};
		soundBegin[]={"begin1",1};
	};
	drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
	reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};
	soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700};


	// Added AI modes so there is difference when AI is using PGO-7
	modes[]=
	{
		"single"
	};
	class single: Mode_SemiAuto
	{
		showToPlayer			= 1;
		reloadTime				= 1;
		minRange				= 10;
		minRangeProbab			= 0.9;
		midRange				= 200;
		midRangeProbab			= 0.7;
		maxRange				= 350;
		maxRangeProbab			= 0.1;
		aiRateOfFire			= 7;
		aiRateOfFireDistance	= 300;
		dispersion				= 0.18;
	};

	weaponInfoType = "rhs_rscOptics_disposable";

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
			opticsZoomMin=0.25;
			opticsZoomMax=0.6;
			opticsZoomInit=0.6;
			visionMode="";
			discreteDistanceInitIndex=0;
			discreteDistance[]={100,0};
			cameraDir="op_look2";
			discreteDistanceCameraPoint[]=
			{
				"eye_ironsight","eye_rangefinder"
			};
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class ironsight2: ironsight
		{
			opticsID=1;
			discreteDistance[] = {50,150,250};
			discreteDistanceCameraPoint[] = {"eye","OP_eye1","OP_eye2"};
			cameraDir="op_look";
			distanceZoomMin=50;
			distanceZoomMax=250;
		};
	};


	class Library
	{
		libTextDesc = "The RPG-26 Aglen is a disposable anti-tank rocket launcher developed by the Soviet Union.";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		allowedSlots[] = {901};
		mass = 63.8;
	};
	class ItemInfo
	{
		priority = 3;
		RMBhint = "$STR_RHS_RPG26_NAME";
		onHoverText = "$STR_RHS_RPG26_NAME";
	};
	class VirtualArsenal
	{
		class Eventhandlers
		{
			itemSelected	= "(_this # 0) call RHS_fnc_disposable_load";
		};
	};
	class Eventhandlers: Eventhandlers {
		class RHS_DisposableWeapon {
			fired = "_this call rhs_fnc_disposable;";
		};
	};
};
class rhs_weap_rpg26_used : rhs_weap_rpg26
{
	scope=1;
	descriptionShort = "Used rocket launcher<br/>Caliber: 72.5mm<br/>Type: Used launcher tube";
	displayname = "$STR_RHS_RPG26USED_NAME";
	weaponInfoType = "RscWeaponZeroing";
	magazines[]={rhs_launcher_dummy_mag};
	model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26_unloaded";
};

class rhs_weap_rpg18 : rhs_weap_rpg26
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_rpg18)
	dlc = "RHS_AFRF";
	scope=2;

	displayName = "$STR_RHS_RPG18_NAME";
	descriptionShort = "64mm, single-shot weapon.";
	model = "\rhsafrf\addons\rhs_weapons3\RPG18\rpg18";
	magazines[] = {rhs_rpg18_mag};

	discreteDistance[] = {50,100,150,200};
	discreteDistanceCameraPoint[] = {"eye","OP_eye1","OP_eye2","OP_eye3"};
	dispersion =0.20;

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		allowedSlots[] = {901};
		mass = 57.2;
	};
	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			effectName = "RocketBackEffectsRPGNT";
		};
	};
};

class rhs_weap_rpg18_used : rhs_weap_rpg18
{
	scope=1;
	descriptionshort = "Used launcher tube";
	displayname = "$STR_RHS_RPG18USED_NAME";
	weaponInfoType = "RscWeaponZeroing";
	magazines[]={rhs_launcher_dummy_mag};
};

class rhs_weap_rshg2 : rhs_weap_rpg26
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_rshg2)
	scope = 2;
	displayName = "$STR_RHS_RSHG2_NAME";
	descriptionShort = "Rocket launcher<br/>Caliber: 72.5mm<br/>Type: Single-shot Assault-weapon";
	magazines[] = {rhs_rshg2_mag};

	model = "\rhsafrf\addons\rhs_weapons\rpg26\rshg2";
	modelOptics = "-";
	dispersion =0.18;

	class OpticsModes: OpticsModes
	{
		class ironsight: ironsight {};
		class ironsight2: ironsight2
		{
			opticsID=1;
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6"};
			cameraDir="op_look";
			distanceZoomMin=50;
			distanceZoomMax=350;
		};
	};

	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			//effectName = "RHS_Fired_Rshg2";
			effectName = "RocketBackEffectsRPGNT";
		};
	};
	class Library
	{
		libTextDesc = "The RShG-2 is a disposable thermobaric rocket launcher derived from the RPG-26.";
	};
	class ItemInfo
	{
		priority = 3;
		RMBhint = "$STR_RHS_RSHG2_NAME";
		onHoverText = "$STR_RHS_RSHG2_NAME";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		allowedSlots[] = {901};
		mass = 83.6;
	};
};
class rhs_weap_rshg2_used : rhs_weap_rshg2
{
	scope=1;
	descriptionShort = "Used rocket launcher<br/>Caliber: 72.5mm<br/>Type: Used launcher tube";
	displayname = "$STR_RHS_RSHG2USED_NAME";
	weaponInfoType = "RscWeaponZeroing";
	magazines[]={rhs_launcher_dummy_mag};
	model = "\rhsafrf\addons\rhs_weapons\rpg26\rshg2_unloaded";

};


class rhs_weap_rpg7 : Launcher_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_rpg7)
	dlc = "RHS_AFRF";

	scope				= 2;
	displayName			= "$STR_RHS_RPG7V2_NAME";
	descriptionShort	= "Rocket launcher<br/>Caliber: 70mm<br/>Type: Rocket-propelled grenade launcher";

	model		= "\rhsafrf\addons\rhs_weapons\rpg7\rhs_rpg7v2";
	modelOptics	= "-";

	reloadAction	= "RHS_GestureReloadRPG7";
	handAnim[]		= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\RPG7gripPrevraceny.rtm"};

	class GunParticles
	{
		class effect1
		{
			positionName	= "konec hlavne";
			directionName	= "usti hlavne";
			effectName		= "RocketBackEffectsRPGNT";
		};
	};

	magazineReloadSwitchPhase = 0.3;
	magazines[] = {
		rhs_rpg7_PG7VL_mag,
		rhs_rpg7_PG7V_mag,
		rhs_rpg7_PG7VM_mag,
		rhs_rpg7_PG7VS_mag,
		rhs_rpg7_PG7VR_mag,
		rhs_rpg7_OG7V_mag,
		rhs_rpg7_TBG7V_mag,
		rhs_rpg7_TYPE69_airburst_mag
	};
	magazineWell[] =
	{
		RPG7,
		CBA_RPG7
	};

	// Added AI modes so there is difference when AI is using PGO-7
	modes[]=
	{
		"single",
		"single_optics1",
		"single_optics2"
	};
	class single: Mode_SemiAuto
	{
		reloadTime				= 0.1;
		minRange				= 10;
		minRangeProbab			= 0.5;
		midRange				= 100;
		midRangeProbab			= 0.7;
		maxRange				= 200;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 6;
		aiRateOfFireDistance	= 300;
		aiRateOfFireDispersion	= 6;
		dispersion 				= 0.013;
	};
	class single_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 10;
		minRangeProbab			= 0.4;
		midRange				= 250;
		midRangeProbab			= 0.7;
		maxRange				= 400;
		maxRangeProbab			= 0.2;
	};
	class single_optics2: single_optics1
	{
		requiredOpticType		= 2;
		minRange				= 10;
		midRange				= 300;
		maxRange				= 400;
	};

	weaponInfoType 					= "rhs_rscOptics_RPG7";
	//VL modes avaiable only
	discreteDistance[]				= {100,150,200,300};
	discreteDistanceCameraPoint[]	= {"eye_100","eye_150","eye_200","eye_300"};
	//discreteDistance[]			= {50,100,150,200,300,400,500};
	//discreteDistanceCameraPoint[]	= {"eye_50","eye_100","eye_150","eye_200","eye_300","eye_400","eye_500"};
	discreteDistanceInitIndex		= 0;
	cameraDir						= "eye_look";
	inertia							= 0.8;
	dexterity						= 1.2;
	aimTransitionSpeed				= 0.5;
	maxZeroing 						= 500;
	recoil 							= "rhs_recoil_rpg7";

	sound[]					= {"A3\Sounds_F\weapons\Launcher\rpg32",1.99526,1,800};
	drySound[]				= {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
	reloadMagazineSound[]	= {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};

	class Library
	{
		libTextDesc = "The RPG-7V2 is a portable, unguided, shoulder-launched, anti-tank rocket-propelled grenade launcher.";
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 126.7;
		class CowsSlot: rhs_russian_rpg7_scopes_slot{};
		class PointerSlot {};
	};
	class ItemInfo
	{
		priority = 3;
		RMBhint = "$STR_RHS_RPG7V2_NAME";
		onHoverText = "$STR_RHS_RPG7V2_NAME";
	};

	baseWeapon		= "rhs_weap_rpg7";
	rhs_pgo7v_type	= "rhs_acc_pgo7v";
	rhs_pgo7v2_type	= "rhs_acc_pgo7v2";
	rhs_pgo7v3_type	= "rhs_acc_pgo7v3";
};

class rhs_weap_rpg7_pgo : rhs_weap_rpg7
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhs_acc_pgo7v3";
		};
	};
};

class rhs_weap_rpg7_1pn93 : rhs_weap_rpg7
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhs_acc_1pn93_1";
		};
	};
};

class launch_O_Titan_F;
class rhs_weap_strela: launch_O_Titan_F
{
	dlc = "RHS_AFRF";

	scope=1;

	htmax=420;
	htmin=1;
	afmax=0;
	mfact=1;
	mfmax=0;
	tbody=100;
	value=15;

	mass = 114.4;
	cmImmunity = 0.6;

	lockAcquire=1;
	//canlock=2;
	weaponlockdelay=5;
	weaponlocksystem = CM_Lock_IR;
	shotPos = "usti hlavne";
	shotEnd = "konec hlavne";
	cursorsize=1;
	cursorAim = "";
	cursorAimOn = "";
	displayname="$STR_RHS_CFGMAGAZINES_9K32_NAME";

	class WeaponSlotsInfo
	{
		mass = 114.4;
	};

	magazines[]=
	{
		"rhs_mag_9k32_rocket"
	};
	class OpticsModes
	{
		class StepScope
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsFlare = 1;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.75;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			memoryPointCamera = "eye";
			cameraDir = "look";
			visionMode[] = {"Normal"};
			thermalMode[] = {};
			opticsDisablePeripherialVision = 1;
		};
	};

	maxrange				=4200;
	maxrangeprobab			=0.1;
	midrange				=2350;
	midrangeprobab			=0.8;
	minrange				=10;
	minrangeprobab			=0.3;
	airateoffire			=5;
	airateoffiredistance	=2350;
	recoil					= "rhs_recoil_igla";

	modeloptics="-";
	weaponInfoType = "RscWeaponZeroing";

	sounds[] = {StandardSound};
	class StandardSound
	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,900};
		begin2[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_2",2.35,1,900};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};

	class GunParticles
	{
		class effect1
		{
			positionName = "missile_start";
			directionName = "missile_end";
			effectName = "RHS_9k32_Backfire";
		};
	};

	class Library
	{
		libtextdesc="$STR_RHS_CFGMAGAZINES_9K32_LIB";
		/*
		libtextdesc="The 9K32 Strela-2 (NATO name SA-7 Grail) is a man-portable, shoulder-fired surface-to-air missile (SAM) with passive infrared homing guidance, similar to the US Army Stinger.<br/>The 9K32 is a tail-chase missile dependent on the operatoro??s ability to lock it onto the heat source of low-flying jets and helicopters.";*/
	};
};
class rhs_weap_igla: rhs_weap_strela
{
	AUTHOR_MACRO
	scope=2;

	displayname="$STR_RHS_CFGMAGAZINES_9K38_IGLA_NAME";
	descriptionShort = "Missile launcher<br/>Caliber: 72mm<br/>Type: Surface-to-air";
	model="rhsafrf\addons\rhs_weapons\igla_bis\igla";
	picture="\rhsafrf\addons\rhs_weapons\icons\w_igla_ca.paa";
	handanim[]=
	{
		"OFP2_ManSkeleton",
		"\rhsafrf\addons\rhs_c_weapons\anims\igla.rtm"
	};
	magazines[]=
	{
		"rhs_mag_9k38_rocket"
	};

	cmimmunity = 0.8;
	airateoffire = 5;
	airateoffiredistance = 3100;
	maxleadspeed = 320;
	dexterity = 0.5;

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 156.2;
	};
	reloadMagazineSound[] = {"A3\Sounds_F\weapons\Reloads\reload_magazine_MissileLauncher",0.891251,1,10};
	sounds[] = {"StandardSound"};
	class StandardSound
	{
		begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_4",1.41254,1,1100};
		soundBegin[] = {"begin1",1};
		weaponSoundEffect = "DefaultRifle";
	};

	//class Library
	//{
		//libtextdesc = "The Igla (in English: Needle) is a Russian, man-portable infrared homing surface-to-air missile weapon. This weapon is designated as "SA-18" in the US and its NATO reporting name is "Grouse." <br/>The Igla uses 9M39 missiles. This weaponis highly valued for its resistance to countermeasures. Because of its easy availability on the black market it has often been used in terrorist attacks on civilian aircraft over last 30 years, mostly in Africa.";
	//};
};