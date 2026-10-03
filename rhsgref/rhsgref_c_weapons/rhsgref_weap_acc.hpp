/*class ItemCore;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;*/
//class InventoryOpticsItem_Base_F;

class acc_pointer_IR;
class acc_flashlight;
class muzzle_snds_H;
class rhsusf_acc_compm4;

///! Lasers

///! Scopes
class rhs_acc_scope_base: ItemCore
{
	dlc = "RHS_GREF";

	scope = 0;

	displayName = $STR_RHS_ACC_PSO1M2;

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_pso1_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1\rhs_pso1";

	descriptionShort = $STR_RHS_ACC_PSO1M2_SD;
	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 13.64;
		RMBhint = "Optical Sniper Sight";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pso_scope";
		class OpticsModes
		{
			///! 4X MAGNIFICATION -> 0.2492/4
			class pso1_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100,200,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
				discreteDistanceInitIndex = 2;
				opticsZoomMin = 0.35/4;
				opticsZoomMax = 0.35/4;
				opticsZoomInit = 0.35/4;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
			class rhs_1p29_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye_svd";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
		};
	};

	inertia = 0.2;
};


class rhsgref_acc_RX01_camo : rhsusf_acc_compm4
{
	INVENTORY_PICTURE(rhsgref_acc_RX01_camo)
	dlc = "RHS_GREF";
	AUTHOR_MACRO
	displayName = "$STR_RHSGREF_ACC_RX01_CAMO";

	model = "\rhsgref\addons\rhsgref_weapons\acc\scopes\rx01_camo\rhs_reflexsight_camo.p3d";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};
class rhsgref_acc_RX01_NoFilter_camo : rhsusf_acc_compm4
{
	INVENTORY_PICTURE(rhsgref_acc_RX01_NoFilter_camo)
	dlc = "RHS_GREF";
	AUTHOR_MACRO
	displayName = "$STR_RHSGREF_ACC_RX01NOFILTER_CAMO";

	model = "\rhsgref\addons\rhsgref_weapons\acc\scopes\rx01_camo\rhs_reflexsight_nofilter_camo.p3d";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};
class rhs_acc_mtz : rhs_acc_scope_base
{
	scope=1;
	scopeArsenal=0;
	AUTHOR_MACRO
	weaponInfoType = "rhs_rscOptics_acc_mtz";
	displayName = MTZ Rail;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_npz_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\npz\rhs_npz";

	inertia = 0;
};

///! Custom muzzle flashes, use alternativeFire param to set it up for specific accessory
class rhsgref_muzzleFlash_L1A1: ItemCore
{
	scope = 1;
	//path to custom flash
	model = "rhsgref\addons\rhsgref_muzzleflash\models\muzzle_flash_fnfal.p3d";
};
class rhsgref_silencer_base : muzzle_snds_H
{
	dlc = "RHS_GREF";

	scope = 0;

	class ItemInfo: InventoryMuzzleItem_Base_F
	{
		mass=7;
		class MagazineCoef
		{
			initSpeed = 1.01;
		};

		class AmmoCoef
		{
			hit=1;
			visibleFire=0.2;
			audibleFire=0.4;
			visibleFireTime=0.5;
			audibleFireTime=1.0;
			cost = 1.0;
			typicalSpeed= 1;
			airFriction = 1.0;
		};
		class MuzzleCoef
		{
			dispersionCoef="0.8f";
			artilleryDispersionCoef="1.0f";
			fireLightCoef="0.1f";
			recoilCoef="1.0f";
			recoilProneCoef="1.0f";
			minRangeCoef="1.0f";
			minRangeProbabCoef="1.0f";
			midRangeCoef="1.0f";
			midRangeProbabCoef="1.0f";
			maxRangeCoef="1.0f";
			maxRangeProbabCoef="1.0f";
		};

		muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
		alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash

		soundTypeIndex = 1;
		inertia=0.2;
	};
};

class rhsgref_sdn6_suppressor: rhsgref_silencer_base
{
	AUTHOR_MACRO
	scope = 2;
	scopeArsenal=2;
	displayName="$STR_RHSGREF_SDN6_SUPPRESSOR_DISPLAYNAME";
	picture="\rhsgref\addons\rhsgref_weapons\icons\sdn6.paa";
	model = "\rhsgref\addons\rhsgref_weapons\m38\rhs_sdn6";
};


/*
class rhsgref_savz61_suppressor: rhsgref_silencer_base
{
	AUTHOR_MACRO
	scope = 0;
	displayName="Sa vz. 61 suppressor";
	picture="\rhsgref\addons\rhsgref_weapons\icons\reak_sa61tlumic.paa";
	model = "\rhsgref\addons\rhsgref_weapons\savz61\rhs_savz61_supp";
};

class rhsgref_acc_oko21 : ItemCore
{
	dlc = "RHS_GREF";

	scope=0;
	AUTHOR_MACRO
	displayName = "Meopta Oko 21";

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\acc_m68cco_ca.paa";
	model = "\rhsgref\addons\rhsgref_weapons\savz61\rhs_oko21";

	descriptionShort = "Oko 21";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 4;
		RMBhint = "Optical Sight";
		optics = 1;

		modelOptics="\A3\Weapons_F\empty";
		class OpticsModes
		{
			class ACO
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="opticview";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				visionMode[]={};
				opticsPPEffects[]=
				{
					"OpticsBlur1"
				};
			};
		};
	};

	inertia = 0.1;
};
*/
class rhsgref_acc_zendl : rhsgref_silencer_base
{
	INVENTORY_PICTURE(rhsgref_acc_zendl)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsgref\addons\rhsgref_weapons\acc\muzzle\zendl_comp\zendl.p3d";
	displayName="$STR_RHSGREF_ACC_ZENDL_DISPLAYNAME";
	class ItemInfo: ItemInfo
	{
		mass=5;
		soundTypeIndex=0;
		class MagazineCoef: MagazineCoef
		{
			initSpeed=1;
		};
		class AmmoCoef: AmmoCoef
		{
			hit=1;
			typicalSpeed=1;
			airFriction=1;
			visibleFire=0.85;
			audibleFire=1.0;
			visibleFireTime=0.85;
			audibleFireTime=1;
			cost=1;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.96f";
			fireLightCoef="0.9f";
			recoilCoef="0.79f";
			recoilProneCoef="0.79f";
		};
		muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
		alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash

		inertia=0.2;
	};
	inertia = 0;
};
class rhsgref_acc_falMuzzle_l1a1 : rhsgref_silencer_base
{
	INVENTORY_PICTURE(rhsgref_acc_falMuzzle_l1a1)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsgref\addons\rhsgref_weapons3\acc\muzzle\rhs_L1A1_flashHider";
	displayName="L1A1 SLR Flash Hider";
	class ItemInfo: ItemInfo
	{
		mass=5;
		soundTypeIndex=0;
		class MagazineCoef: MagazineCoef
		{
			initSpeed=1;
		};
		class AmmoCoef: AmmoCoef
		{
			hit=1;
			typicalSpeed=1;
			airFriction=1;
			visibleFire=0.95;
			audibleFire=1.0;
			visibleFireTime=0.85;
			audibleFireTime=1;
			cost=1;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.95f";
			recoilProneCoef="0.95f";
		};
		muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
		alternativeFire = "rhsgref_muzzleFlash_L1A1";  // class in cfgWeapons with model of muzzle flash
	};
	inertia = 0;
};

/// Kar98k sighthood adder
class rhsgref_K98k_acc_sighthood_add: acc_flashlight
{
	dlc 			 = "RHS_GREF";
	scope            = 2;
	scopeCurator     = 2;
	displayName      = "K98k Sight Hood";
	descriptionShort = "Adds the hood over the K98k's front sight";
	picture          = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_k98k_sighthood_ca.paa";
	model            = "\rhsgref\addons\rhsgref_weapons2\k98k\sighthood_byf44";
	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		mass = 2;
		class Pointer {};

		class FlashLight
		{
			color[]          = {0, 0, 0};
			ambient[]        = {0.000, 0.000, 0.000};
			size             = 0;
			innerAngle       = 0;
			outerAngle       = 0;
			coneFadeCoef     = 10;
			intensity        = 0;
			dayLight         = 0;
			useFlare         = 0;
			FlareSize        = 0.0;
			flareMaxDistance = "100.0f";
			onlyInNvg        = 0;
			position         = "flashdir";
			direction        = "flash";
			class Attenuation
			{
				start          = 0;
				constant       = 0;
				linear         = 0;
				quadratic      = 0;
				hardLimitStart = 0;
				hardLimitEnd   = 0;
			};

			scale[] = {0};
		};
	};

	inertia = 0.1;
};

/// MG42 AA Sight
class rhsgref_mg42_acc_AAsight: ItemCore
{
	dlc         = "RHS_GREF";
	scope       = 2;
	displayName = "MG42 AA Sight";
	picture     = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mg42_AAsight_ca.paa";
	model       = "\rhsgref\addons\rhsgref_weapons2\mg42\rhs_mg42_AAsight";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType   = 1;
		mass        = 4;
		RMBhint     = "Anti-Aircraft Sight";
		optics      = 1;
		modelOptics = "\A3\Weapons_F\empty";
		class OpticsModes
		{
			class ACO
			{
				opticsID                       = 1;
				useModelOptics                 = 0;
				opticsZoomMin                  = 0.25;
				opticsZoomMax                  = 1.1;
				opticsZoomInit                 = 0.75;
				memoryPointCamera              = "opticview";
				opticsFlare                    = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin                = 100;
				distanceZoomMax                = 100;
				cameraDir                      = "";
				visionMode[]                   = {};
				opticsPPEffects[]              = {
					"OpticsBlur1"
				};
			};
		};
	};

	inertia = 0.1;
};
class rhsgref_acc_l2a2: rhs_acc_scope_base
{
	INVENTORY_PICTURE(rhsgref_acc_l1a1_l2a2)
	scope=1;
	AUTHOR_MACRO
	displayName = "L2A2 SUIT";

	model = "\rhsgref\addons\rhsgref_weapons3\acc\scopes\l2a2\rhs_l2a2.p3d";

	descriptionShort = "Optical Sight<br />Magnification: 4x";
	weaponInfoType = "rhs_rscOptics_acc_l2a2";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 17.6;
		RMBhint = "Optical Sight";
		optics = 1;
		modelOptics = "\rhsgref\addons\rhsgref_weapons3\acc\scopes\l2a2\Optic\rhs_L2A2_SUIT_scope.p3d";

		class OpticsModes
		{
			class rhs_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[]				= {300,500};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= __EVAL(0.35/4);
				opticsZoomMax					= __EVAL(0.35/4);
				opticsZoomInit					= __EVAL(0.35/4);
				memoryPointCamera				= "opticview";
				visionMode[]					= {"Normal"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1000;
				cameraDir						= "";
			};

			class rhs_iron
			{
				opticsID						= 1;
				useModelOptics					= 0;
				opticsPPEffects[]				= {""};
				opticsZoomMin					= 0.275;
				opticsZoomMax					= 1.1;
				opticsZoomInit					= 0.75;
				memoryPointCamera				= "eye2";
				discreteDistance[]				= {440};
				discreteDistanceInitIndex		= 0;
				visionMode[]					= {};
				opticsFlare						= 0;
				opticsDisablePeripherialVision	= 0;
				distanceZoomMin					= 300;
				distanceZoomMax					= 300;
				cameraDir						= "";
			};
		};
	};

	inertia = 0.1;
};
class rhsgref_acc_l2a2_3d: rhsgref_acc_l2a2
{
	weaponInfoType = "rhs_rscOptics_acc_l2a2_3d";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_scope: rhs_scope
			{
				useModelOptics					= 0;
				memoryPointCamera				= "eye";
				opticsZoomMin					= __EVAL(0.35/4);
				opticsZoomMax					= __EVAL(0.6/4);
				opticsZoomInit					= __EVAL(0.35/4);
			};
			class rhs_iron: rhs_iron {};
		};
	};
};
class rhsgref_acc_l1a1_l2a2: rhsgref_acc_l2a2
{
	AUTHOR_MACRO
	scope = 2;
	rhs_optic_base = "rhsgref_acc_l1a1_l2a2";
};
class rhsgref_acc_l1a1_l2a2_3d: rhsgref_acc_l2a2_3d
{
	AUTHOR_MACRO
	scope = 1;
	rhs_optic_base = "rhsgref_acc_l1a1_l2a2";
};
class rhsgref_acc_anpvs2_base : rhs_acc_scope_base
{
	INVENTORY_PICTURE(rhsgref_acc_l1a1_anpvs2)
	scope=0;

	displayName = "AN/PVS-2";

	model = "\rhsgref\addons\rhsgref_weapons3\acc\scopes\pvs2\rhs_pvs2.p3d";

	descriptionShort = $STR_RHS_ACC_1PN931_SD;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 14;
		RMBhint = "Optical Sniper Night Sight";
		optics = 1;

		modelOptics = "\rhsgref\addons\rhsgref_weapons3\acc\scopes\pvs2\Optic\rhs_anpvs2_scope.p3d";
		class OpticsModes
		{
			class 1pn93_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"rhs_ANPVS2_Abera","rhs_ANPVS2_Blur","rhs_ANPVS2_FilmGrain"};
				discreteDistance[]				= {150};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= __EVAL(0.25/4);
				opticsZoomMax					= __EVAL(0.25/4);
				opticsZoomInit					= __EVAL(0.25/4);
				memoryPointCamera				= "opticView";
				visionMode[]					= {"NVG"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 150;
				distanceZoomMax					= 150;
				cameraDir						= "";
			};
			class rhs_1p29_iron
			{
				opticsID						= 1;
				useModelOptics					= 0;
				opticsPPEffects[]				= {""};
				discreteDistance[]				= { 100 };
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= 0.25;
				opticsZoomMax					= 1.1;
				opticsZoomInit					= 0.75;
				memoryPointCamera				= "eye2";
				visionMode[]					= {"Normal"};
				opticsFlare						= 0;
				opticsDisablePeripherialVision	= 0;
				distanceZoomMin					= 300;
				distanceZoomMax					= 300;
				cameraDir						= "";
			};
		};
	};

	inertia = 0.25;
};
class rhsgref_acc_l1a1_anpvs2 : rhsgref_acc_anpvs2_base
{
	AUTHOR_MACRO
	scope = 2;
};