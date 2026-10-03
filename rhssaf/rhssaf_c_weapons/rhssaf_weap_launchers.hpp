class Launcher;
class Launcher_Base_F : Launcher
{
	class WeaponSlotsInfo;
	class Eventhandlers;
};
class rhs_weap_m80 : Launcher_Base_F
{
	INVENTORY_PICTURE(rhs_weap_m80)
	scope = 2;
	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M80;
	descriptionShort = "Rocket launcher<br/>Caliber: 64mm<br/>Type: Single-shot Anti-Tank";
	model = "\rhssaf\addons\rhssaf_m_weapon_m80\rhssaf_m80";

	class GunParticles
	{
		class effect1
		{
			positionName = "konec hlavne";
			directionName = "usti hlavne";
			effectName = "RocketBackEffectsRPGNT";
		};
	};

	sounds[] = {StandardSound};

	class StandardSound
	{
		weaponSoundEffect = "DefaultRifle";
		begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32",1.99526,1,900};
		soundBegin[]={"begin1",1};
	};

	drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_weapons2\m136\sound\at4prep.ogg",0.562341,1,50};
	soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700};

	magazines[] = { rhs_m80_mag };
	reloadAction = "ReloadRPG";
	handAnim[] = {"OFP2_ManSkeleton","\rhssaf\addons\rhssaf_c_weapons\anims\rhssaf_hand_m80.rtm"};
	recoil = "recoil_single_law";

	rhs_disposable=1;
	reloadTime=1;
	magazineReloadTime = 1;
	aimTransitionSpeed = 0.5;

	showToPlayer=1;
	minRange = 10;
	minRangeProbab = 0.9;
	midRange = 200;
	midRangeProbab = 0.7;
	maxRange = 350;
	maxRangeProbab = 0.1;
	aiRateOfFire = 7;
	aiRateOfFireDistance = 300;
	weaponInfoType = "rhs_rscOptics_disposable";
	modelOptics = "-";
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
			opticsZoomMin=0.25;  // 0.0025
			opticsZoomMax=1.20;
			opticsZoomInit=0.70;
			visionMode="";
			discreteDistanceInitIndex=0;
			discreteDistance[] = {150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"op_eye_150","op_eye_200","op_eye_250","op_eye_300","op_eye_350","op_eye_400"};
			memoryPointCamera = "op_look1";
			cameraDir = "op_look";
			distanceZoomMin=150;
			distanceZoomMax=400;
		};
	};

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		allowedSlots[] = {};
		mass = 66;
        	class PointerSlot {ICON_OVERLAY_DISABLED};
	};

	class Library
	{
		libTextDesc = "M80 is a portable one-shot 64 mm unguided anti-tank weapon";
	};

	class ItemInfo
	{
		priority = 3;
		RMBhint = "M80";
		onHoverText = "M80";
	};
	class Eventhandlers: Eventhandlers
	{
		class RHS_DisposableWeapon
		{
			fired = "_this call rhs_fnc_disposable;";
		};
	};
};

class rhs_weap_m80_used: rhs_weap_m80
{

	scope = 1;
	model = "rhssaf\addons\rhssaf_m_weapon_m80\rhssaf_m80_used";
	descriptionShort = "Used rocket launcher<br/>Caliber: 64mm<br/>Type: Used launcher tube";
	displayname = $STR_RHSSAF_WEAP_M80_USED;
	magazines[]={rhs_launcher_dummy_mag};
	weaponInfoType = "RscWeaponZeroing";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		allowedSlots[] = {};
		mass = 34.76;
	};
};
