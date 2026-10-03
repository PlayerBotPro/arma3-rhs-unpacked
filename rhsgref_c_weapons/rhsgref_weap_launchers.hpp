class Launcher;
class Launcher_Base_F : Launcher
{
	class WeaponSlotsInfo;
	class EventHandlers;
};

class rhs_weap_rpg75 : Launcher_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_rpg75)
	dlc = "RHS_GREF";

	scope = 2;
	displayName = "RPG-75";
	descriptionShort = "Rocket launcher<br/>Caliber: 68mm<br/>Type: Single-shot Anti-tank";  //TODO

	rhs_disposable=1;
	reloadTime=1;
	magazineReloadTime = 1;
	model = "\rhsgref\addons\rhsgref_weapons2\rpg75\rhs_rpg75.p3d";
	modelOptics = "-";
	aimTransitionSpeed = 0.75;

	recoil = "recoil_single_law";
	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			//effectName = "RHS_BackEffectsRPG";
			//effectName = "RHS_Fired_RPG26";
			effectName = "RocketBackEffectsRPGNT";
		};
	};

	magazines[] = {rhs_rpg75_mag};
	reloadAction = "ReloadRPG";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_rpg75.rtm"};

 	sounds[] = {StandardSound};
 	class StandardSound
 	{
		soundSetShot[] = {"Launcher_RPG32_Shot_SoundSet","Launcher_RPG32_Tail_SoundSet"};
	};
	drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};

	showToPlayer=1;
	minRange = 10;
	minRangeProbab = 0.9;
	midRange = 200;
	midRangeProbab = 0.7;
	maxRange = 350;
	maxRangeProbab = 0.1;
	aiRateOfFire = 7;
	aiRateOfFireDistance = 300;
	dispersion =0.15;

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
				"WeaponsOptics"
			};
			useModelOptics=0;
			opticsFlare=0;
			opticsDisablePeripherialVision=0;
			opticsZoomMin=0.25;
			opticsZoomMax=0.6;
			opticsZoomInit=0.6;
			visionMode="";
			discreteDistanceInitIndex=0;
			discreteDistance[]={200};
			cameraDir="eye_look";
			discreteDistanceCameraPoint[]=
			{
				"eye"
			};
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
	};


	class Library
	{
		libTextDesc = "The RPG-75 is a portable, disposable, single-shot anti-tank weapon, developed in the 1970s in Czechoslovakia.";
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		allowedSlots[] = {901};
		mass = 70.4;
	};
	class ItemInfo
	{
		priority = 3;
		RMBhint = "$STR_RHS_RPG26_NAME"; //TODO
		onHoverText = "$STR_RHS_RPG26_NAME"; //TODO
	};
	class Eventhandlers: Eventhandlers {
		class RHS_DisposableWeapon {
			fired = "_this call rhs_fnc_disposable;";
		};
	};
};
class rhs_weap_rpg75_used : rhs_weap_rpg75
{
	scope			= 1;
	displayname		= "RPG-75 (used)"; //TODO
	weaponInfoType	= "RscWeaponZeroing";
	magazines[]		= {rhs_launcher_dummy_mag};
	model			= "\rhsgref\addons\rhsgref_weapons2\rpg75\rhs_rpg75_used.p3d";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 52.8;
	};
};
class rhs_weap_panzerfaust60: Launcher_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_panzerfaust60)
	dlc = "RHS_GREF";

	scope = 2;
	displayname		= "Panzerfaust 60"; //TODO
	descriptionShort = "Rocket launcher<br/>Caliber: 149mm<br/>Type: Single-shot Anti-tank";  //TODO

	model = "\rhsgref\addons\rhsgref_weapons2\pzf\rhs_pzf60.p3d";

	weaponInfoType		= "rhs_rscOptics_disposable";
	recoil				= "recoil_single_law";
	rhs_disposable		= 1;
	reloadTime			= 1;
	magazineReloadTime	= 1;
	aimTransitionSpeed	= 0.75;
	inertia 			= 0.8;
	dispersion			= 0.25;

	magazines[] = {rhs_panzerfaust60_mag};
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_pzf60.rtm"};

 	sounds[] = {StandardSound};
 	class StandardSound
 	{
		soundSetShot[] = {"Launcher_RPG32_Shot_SoundSet","Launcher_RPG32_Tail_SoundSet"};
	};
	drySound[]				= {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};

	class GunParticles
	{
		class effect1
		{
			positionName	= "konec hlavne";
			directionName	= "usti hlavne";
			effectName		= "RocketBackEffectsRPGNT";
		};
	};

	showToPlayer			= 1;
	minRange				= 10;
	minRangeProbab			= 0.9;
	midRange				= 60;
	midRangeProbab			= 0.7;
	maxRange				= 80;
	maxRangeProbab			= 0.1;
	aiRateOfFire			= 4;
	aiRateOfFireDistance	= 60;

	optics		= 1;
	modelOptics	= "-";
	class OpticsModes
	{
		class ironsight
		{
			opticsID = 2;
			opticsPPEffects[]=
			{
				"OpticsCHAbera1",
				"WeaponsOptics"
			};
			useModelOptics					= 0;
			opticsFlare						= 0;
			opticsDisablePeripherialVision	= 0;
			opticsZoomMin					= 0.25;
			opticsZoomMax					= 0.6;
			opticsZoomInit					= 0.6;
			visionMode						= "";
			discreteDistanceInitIndex		= 0;
			discreteDistance[]				= {30,60,80};
			cameraDir						= "eye_look";
			discreteDistanceCameraPoint[]	=
			{
				"eye_30",
				"eye_60",
				"eye_80"
			};
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
	};

	baseWeapon = rhs_weap_panzerfaust60;

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		allowedSlots[] = {901};
		mass = 137.5;
	};

	class Eventhandlers: Eventhandlers
	{
		class RHS_DisposableWeapon
		{
			fired = "_this call rhs_fnc_disposable;";
		};
	};
};
class rhs_weap_panzerfaust60_used: rhs_weap_panzerfaust60
{
	scope			= 1;
	displayname		= "Panzerfaust 60 (used)"; //TODO
	weaponInfoType	= "RscWeaponZeroing";
	magazines[]		= {rhs_launcher_dummy_mag};
	model			= "\rhsgref\addons\rhsgref_weapons2\pzf\rhs_pzf60_used.p3d";

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 70.84;
	};
};