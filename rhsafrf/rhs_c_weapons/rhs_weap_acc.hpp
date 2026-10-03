class ItemCore;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;

class acc_pointer_IR;
class acc_flashlight : ItemCore
{
	class ItemInfo: InventoryFlashlightItem_Base_F
	{
		class FlashLight;
	};
};

///! Lasers
class rhs_acc_harris_swivel : acc_pointer_IR
{
	//INVENTORY_PICTURE(rhs_acc_harris_swivel)
	dlc = "RHS_AFRF";

	AUTHOR_MACRO
	scope=2;
	model = "\rhsafrf\addons\rhs_accessory\bipods\rhs_Harris_ru";
	picture = "\rhsafrf\addons\rhs_accessory\icons\rhs_harris_swivel_icon_ca.paa";

	displayName = "Harris Bipod";
	descriptionShort = "Harris Bipod.";

	class ItemInfo
	{
		scope = 0;
		deployedPivot = "bipod";
		hasBipod = 1;
		mass = 10;
		type = 302;
		soundBipodDown[]	= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",0.707946,1,20};
		soundBipodUp[]		= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",0.707946,1,20};
	};
	inertia = 0.2;
	type = 131072;
};

///! Custom muzzle flashes, use alternativeFire param to set it up for specific accessory
class rhs_muzzleFlash_dtk: ItemCore
{
	scope = 1;
	//path to custom flash
	model = "rhsafrf\addons\rhs_muzzleflash\models\muzzle_flash_dtk.p3d";
};
class rhs_muzzleFlash_dtk1: rhs_muzzleFlash_dtk
{
	model = "rhsafrf\addons\rhs_muzzleflash\models\muzzle_flash_dtk1.p3d";
};
class rhs_muzzleFlash_dtk2: rhs_muzzleFlash_dtk
{
	model = "rhsafrf\addons\rhs_muzzleflash\models\muzzle_flash_dtk2.p3d";
};
class rhs_muzzleFlash_dtk3: rhs_muzzleFlash_dtk
{
	model = "rhsafrf\addons\rhs_muzzleflash\models\muzzle_flash_dtk3.p3d";
};
class rhs_muzzleFlash_ak5: rhs_muzzleFlash_dtk
{
	model = "rhsafrf\addons\rhs_muzzleflash\models\muzzle_flash_ak5.p3d";
};
class rhs_muzzleFlash_uuk: rhs_muzzleFlash_dtk
{
	model = "rhsafrf\addons\rhs_muzzleflash\models\muzzle_flash_uuk.p3d";
};
class rhs_muzzleflash_pgs64 : rhs_muzzleFlash_dtk {
	model = "rhsafrf\addons\rhs_muzzleflash\models\muzzle_flash_pgs64.p3d";
};
class rhs_muzzleflash_dtkakm : rhs_muzzleFlash_dtk {
	model = "rhsafrf\addons\rhs_muzzleflash\models\muzzle_flash_akm.p3d";
};


class muzzle_snds_H;

///! Muzzle accessories
class rhs_silencer_base : muzzle_snds_H
{
	dlc = "RHS_AFRF";

	scope = 0;
	displayName="$STR_RHS_ACC_TGPA";

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_tgpa_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\tgpa\tgpa.p3d";

	class ItemInfo: InventoryMuzzleItem_Base_F
	{
		mass=7;
		class MagazineCoef
		{
			initSpeed = 1.01;
		};

		class AmmoCoef
		{
			hit				=1;
			visibleFire		=0.2;
			audibleFire		=0.4;
			visibleFireTime	=0.5;
			audibleFireTime	=1.0;
			cost			= 1.0;
			typicalSpeed	= 1;
			airFriction		= 1.0;
		};
		class MuzzleCoef
		{
			dispersionCoef			= "0.8f";
			artilleryDispersionCoef	= "1.0f";
			fireLightCoef			= "0.1f";
			recoilCoef				= "1.0f";
			recoilProneCoef			= "1.0f";
			minRangeCoef			= "1.0f";
			minRangeProbabCoef		= "1.0f";
			midRangeCoef			= "1.0f";
			midRangeProbabCoef		= "1.0f";
			maxRangeCoef			= "1.0f";
			maxRangeProbabCoef		= "1.0f";
		};

		muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
		alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash

		soundTypeIndex = 1;
		inertia=0.2;
	};
};

class rhs_acc_tgpa : rhs_silencer_base
{
	INVENTORY_PICTURE(rhs_acc_tgpa)
	AUTHOR_MACRO
	scope = 2;
};

class rhs_acc_pbs1 : rhs_silencer_base
{
	INVENTORY_PICTURE(rhs_acc_pbs1)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\pbs1\pbs1.p3d";
	displayName="$STR_RHS_ACC_PBS1";

	inertia = 0.1;
};

class rhs_acc_tgpv : rhs_silencer_base
{
	INVENTORY_PICTURE(rhs_acc_tgpv)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\tgpv\tgpv.p3d";
	displayName = "$STR_RHS_ACC_TGPV";
};

class rhs_acc_tgpv2 : rhs_acc_tgpv
{
	INVENTORY_PICTURE(rhs_acc_tgpv2)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons3\acc\muzzle\tgpv2\rhs_tgpv2.p3d";
	displayName = "$STR_RHS_ACC_TGPV2";
};

class rhs_acc_dtk4short : rhs_silencer_base
{
	INVENTORY_PICTURE(rhs_acc_dtk4short)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\dtk4\dtk4_short.p3d";
	displayName="$STR_RHS_ACC_DTK4SHORT";

	inertia = 0.1;
};

class rhs_acc_dtk4long : rhs_silencer_base
{
	INVENTORY_PICTURE(rhs_acc_dtk4long)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\dtk4\dtk4_long.p3d";
	displayName="$STR_RHS_ACC_DTK4LONG";

	inertia = 0.2;
};

class rhs_acc_dtk4screws : rhs_silencer_base
{
	INVENTORY_PICTURE(rhs_acc_dtk4screws)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons\acc\silencers\dtk4_screws\dtk4_screws.p3d";
	displayName="$STR_RHS_ACC_DTK4SCREWS";

	inertia = 0.1;
};

class rhs_acc_pbs4 : rhs_silencer_base
{
	INVENTORY_PICTURE(rhs_acc_pbs4)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons2\acc\silencers\pbs4\pbs4.p3d";
	displayName="$STR_RHS_ACC_PBS4";

	inertia = 0.23;
};

class rhs_acc_6p9_suppressor : rhs_silencer_base
{
	INVENTORY_PICTURE(rhs_acc_6p9_suppressor)
	scope = 2;
	AUTHOR_MACRO
	displayName="$STR_RHS_ACC_PB_SUP";
	model = "rhsafrf\addons\rhs_weapons3\pb6p9\6p9suppressor.p3d";

	inertia = 0.1;
	class ItemInfo: ItemInfo
	{
		mass=7;
		class MagazineCoef
		{
			initSpeed = 1.93;
		};
	};
};

///! Different Attachments


class rhs_acc_dtk3 : rhs_silencer_base
{
	INVENTORY_PICTURE(rhs_acc_dtk3)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\dtk3\dtk3.p3d";
	displayName="$STR_RHS_ACC_DTK3";
	class ItemInfo: ItemInfo
	{
		mass=5;
		soundTypeIndex=0;
		class MagazineCoef
		{
			initSpeed=1;
		};
		class AmmoCoef
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
		alternativeFire = "rhs_muzzleFlash_dtk3";
	};
	inertia = 0;
};

class rhs_acc_dtk : rhs_acc_dtk3
{
	INVENTORY_PICTURE(rhs_acc_dtk)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\dtk1\dtk.p3d";
	displayName="$STR_RHS_ACC_DTK";
	class ItemInfo: ItemInfo
	{
		class AmmoCoef: AmmoCoef
		{
			visibleFire=0.85;
			visibleFireTime=0.85;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.93f";
			recoilProneCoef="0.93f";
		};
		alternativeFire = "rhs_muzzleFlash_dtk";
	};
};

class rhs_acc_dtkakm : rhs_acc_dtk3
{
	INVENTORY_PICTURE(rhs_acc_dtkakm)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\dtk\dtk.p3d";
	displayName="$STR_RHS_ACC_DTK";
	class ItemInfo: ItemInfo
	{
		class AmmoCoef: AmmoCoef
		{
			visibleFire		= 0.95;
			visibleFireTime	= 0.95;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef	= "0.97f";
			fireLightCoef	= "0.9f";
			recoilCoef		= "0.95f";
			recoilProneCoef	= "0.95f";
		};
		alternativeFire = "rhs_muzzleflash_dtkakm";
	};
};

class rhs_acc_dtk1983 : rhs_acc_dtk
{
	INVENTORY_PICTURE(rhs_acc_dtk1983)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons3\acc\muzzle\dtk1983\rhs_dtk1983.p3d";
	displayName="$STR_RHS_ACC_DTK1983";
	class ItemInfo: ItemInfo
	{
		class AmmoCoef: AmmoCoef
		{
			visibleFire=0.85;
			visibleFireTime=0.85;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.93f";
			recoilProneCoef="0.93f";
		};
		alternativeFire = "rhs_muzzleFlash_dtk";
	};
};
class rhs_acc_dtk1 : rhs_acc_dtk3
{
	INVENTORY_PICTURE(rhs_acc_dtk1)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\dtk1\dtk1.p3d";
	displayName="$STR_RHS_ACC_DTK1";
	class ItemInfo: ItemInfo
	{
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.83f";
			recoilProneCoef="0.83f";
		};
		alternativeFire = "rhs_muzzleFlash_dtk1";
	};
};

class rhs_acc_dtk1l : rhs_acc_dtk1
{
	INVENTORY_PICTURE(rhs_acc_dtk1l)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\dtk1\dtk1.p3d";
	displayName="$STR_RHS_ACC_DTK1L";
	class ItemInfo: ItemInfo
	{
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.83f";
			recoilProneCoef="0.83f";
		};
	};
};
class rhs_acc_dtk1p : rhs_acc_dtk1
{
	INVENTORY_PICTURE(rhs_acc_dtk1p)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons3\acc\muzzle\dtk1p\dtk1p.p3d";
	displayName="$STR_RHS_ACC_DTK1P";
	class ItemInfo: ItemInfo
	{
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.9f";
			recoilCoef="0.83f";
			recoilProneCoef="0.83f";
		};
	};
};
class rhs_acc_dtk2 : rhs_acc_dtk3
{
	INVENTORY_PICTURE(rhs_acc_dtk2)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons3\acc\muzzle\dtk2\dtk2.p3d";
	displayName="$STR_RHS_ACC_DTK2";
	class ItemInfo: ItemInfo
	{
		class AmmoCoef: AmmoCoef
		{
			visibleFire=0.8;
			visibleFireTime=0.8;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="1.1f";
			recoilCoef="0.75f";
			recoilProneCoef="0.75f";
		};
		alternativeFire = "rhs_muzzleflash_dtk2";
	};
};

class rhs_acc_uuk: rhs_acc_dtk3
{
	INVENTORY_PICTURE(rhs_acc_uuk)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons3\acc\muzzle\ak74_uuk\rhs_ak74_uuk.p3d";
	displayName="$STR_RHS_ACC_UUK";
	class ItemInfo: ItemInfo
	{
		alternativeFire = "rhs_muzzleflash_uuk";
		class AmmoCoef: AmmoCoef
		{
			visibleFire=0.75;
			visibleFireTime=0.75;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.85f";
			recoilCoef="0.93f";
			recoilProneCoef="0.93f";
		};
	};
};

class rhs_acc_dtkrpk: rhs_acc_dtk3
{
	INVENTORY_PICTURE(rhs_acc_dtkrpk)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons3\acc\muzzle\dtkrpk\dtk_rpk.p3d";
	displayName="$STR_RHS_ACC_DTKRPK";
	class ItemInfo: ItemInfo
	{
		alternativeFire = "rhs_muzzleflash_uuk";
		class AmmoCoef: AmmoCoef
		{
			visibleFire=0.8;
			visibleFireTime=0.8;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.85f";
			recoilCoef="0.93f";
			recoilProneCoef="0.93f";
		};
	};
};

class rhs_acc_ak5 : rhs_acc_dtk3
{
	INVENTORY_PICTURE(rhs_acc_ak5)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\ak5\ak5.p3d";
	displayName="$STR_RHS_ACC_AK5";
	class ItemInfo: ItemInfo
	{
		alternativeFire = "rhs_muzzleFlash_ak5";
		class AmmoCoef: AmmoCoef
		{
			visibleFire		= 0.25;
			visibleFireTime	= 0.45;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef	= 0.97;
			fireLightCoef	= 0.09;
			recoilCoef		= 0.89;
			recoilProneCoef	= 0.89;
		};
	};

};

class rhs_acc_pgs64 : rhs_acc_dtk
{
	INVENTORY_PICTURE(rhs_acc_pgs64)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons\acc\muzzle\pgs64\pgs64.p3d";
	displayName="$STR_RHS_ACC_PGS64";
	class ItemInfo: ItemInfo
	{
		alternativeFire = "rhs_muzzleflash_pgs64";
		class AmmoCoef: AmmoCoef
		{
			visibleFire=0.95;
			visibleFireTime=0.95;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="0.97f";
			fireLightCoef="0.95f";
			recoilCoef="0.93f";
			recoilProneCoef="0.93f";
		};
	};
};

class rhs_acc_pgs64_74u : rhs_acc_pgs64
{
	INVENTORY_PICTURE(rhs_acc_pgs64_74u)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons2\acc\muzzle\pgs64_74u\pgs64_74u.p3d";
};

class rhs_acc_pgs64_74un : rhs_acc_pgs64_74u
{
	INVENTORY_PICTURE(rhs_acc_pgs64_74un)
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons2\acc\muzzle\pgs64_74u\pgs64_74un.p3d";
};


///! Scopes
class rhs_acc_sniper_base: ItemCore
{
	dlc = "RHS_AFRF";

	scope = 0;

	displayName = $STR_RHS_ACC_PSO1M2;

	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_pso1_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1\rhs_pso1";

	descriptionShort = $STR_RHS_ACC_PSO1M2_SD;
	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 13.64;
		RMBhint = "Optical Sniper Sight";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pso_scope";
		class OpticsModes
		{
			///! 4X MAGNIFICATION -> 0.2492/4
			class pso1_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1","rhs_pso1_Blur"};
				discreteDistance[]				= {100,200,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
				discreteDistanceInitIndex		= 2;
				opticsZoomMin					= __EVAL(0.35/4);
				opticsZoomMax					= __EVAL(0.35/4);
				opticsZoomInit					= __EVAL(0.35/4);
				memoryPointCamera				= "opticView";
				visionMode[]					= {"Normal"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1000;
				cameraDir						= "";
			};
			class rhs_1p29_iron
			{
				opticsID						= 1;
				useModelOptics					= 0;
				opticsPPEffects[]				= {""};
				opticsZoomMin					= 0.25;
				opticsZoomMax					= 1.1;
				opticsZoomInit					= 0.75;
				memoryPointCamera				= "eye_svd";
				discreteDistance[]				= {100};
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

	inertia = 0.2;
};

class rhs_acc_1p29 : rhs_acc_sniper_base
{
	INVENTORY_PICTURE(rhs_acc_1p29)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_1P29;

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\1p29\rhs_1p29";

	descriptionShort = $STR_RHS_ACC_1P29_SD;
	weaponInfoType = "rhs_rscOptics_acc_1p29";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 17.6;
		RMBhint = "Optical Sight";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_1p29_scope";
		class OpticsModes
		{
			///! 4X MAGNIFICATION -> 0.2492/4
			class rhs_1p29_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_1P29_Blur"};
				discreteDistance[] = {400,500,600,700,800,900,1000};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin	= __EVAL(0.35/4);
				opticsZoomMax	= __EVAL(0.35/4);
				opticsZoomInit	= __EVAL(0.35/4);
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
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				discreteDistance[] = {440};
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

	inertia = 0.1;
	rhs_optic_base = "rhs_acc_1p29";
};

class rhs_acc_1p29_pkp : rhs_acc_1p29
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_scope: rhs_1p29_scope {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				memoryPointCamera = "eye3";
				discreteDistance[] = { 100 };
				distanceZoomMax = 100;
			};
		};
	};
};
class rhs_acc_1p29_asval : rhs_acc_1p29
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_scope: rhs_1p29_scope {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				discreteDistance[] = { 100, 150, 200, 220, 250, 270, 300, 320, 350, 370, 400, 420 };
				discreteDistanceCameraPoint[] = {"eye_val","eye_val_150","eye_val_200","eye_val_220","eye_val_250","eye_val_270","eye_val_300","eye_val_320","eye_val_350","eye_val_370","eye_val_400","eye_val_420"};
				cameraDir="eye_val_look";
				distanceZoomMax = 420;
			};
		};
	};
};
class rhs_acc_1p29_3d : rhs_acc_1p29
{
	ArsenalDisabled
	weaponInfoType = "rhs_rscOptics_acc_1p29_3d";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_scope: rhs_1p29_scope
			{
				useModelOptics = 0;
				memoryPointCamera = "opticView_3d";
				opticsZoomMin	= __EVAL(0.35/4);
				opticsZoomMax	= __EVAL(0.75/4);
				opticsZoomInit	= __EVAL(0.35/4);
			};
			class rhs_1p29_iron: rhs_1p29_iron 	{};
		};
	};
};

class rhs_acc_1p29_pkp_3d : rhs_acc_1p29_3d
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_scope: rhs_1p29_scope {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				memoryPointCamera = "eye3";
				discreteDistance[] = { 100 };
				distanceZoomMax = 100;
			};
		};
	};
};
class rhs_acc_1p29_asval_3d : rhs_acc_1p29_3d
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_scope: rhs_1p29_scope {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				discreteDistance[] = { 100, 150, 200, 220, 250, 270, 300, 320, 350, 370, 400, 420 };
				discreteDistanceCameraPoint[] = {"eye_val","eye_val_150","eye_val_200","eye_val_220","eye_val_250","eye_val_270","eye_val_300","eye_val_320","eye_val_350","eye_val_370","eye_val_400","eye_val_420"};
				cameraDir="eye_val_look";
				distanceZoomMax = 420;
			};
		};
	};
};


class rhs_acc_1p78 : rhs_acc_1p29
{
	INVENTORY_PICTURE(rhs_acc_1p78)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_1P78;

	model = "\rhsafrf\addons\rhs_weapons2\acc\scopes\1p78\rhs_1p78";

	descriptionShort = $STR_RHS_ACC_1P78_SD;
	weaponInfoType = "rhs_rscOptics_acc_1p78";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 17.6;
		RMBhint = "Optical Sight";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons2\optics\rhs_1p78_scope";
		class OpticsModes
		{
			///! 2.8X MAGNIFICATION -> 0.2492/2.8
			class rhs_1p29_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur3","rhs_1P78_Blur"};
				discreteDistance[] = {400};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin	= __EVAL(0.35/2.8);
				opticsZoomMax	= __EVAL(0.35/2.8);
				opticsZoomInit	= __EVAL(0.35/2.8);
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
			class rhs_above_sight
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"Default"};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};
		};
	};
	rhs_optic_base = "rhs_acc_1p78";
};
class rhs_acc_1p78_3d : rhs_acc_1p78
{
	ArsenalDisabled
	weaponInfoType = "rhs_rscOptics_acc_1p78_3d";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			///! 2.8X MAGNIFICATION -> 0.2492/2.8
			class rhs_1p29_scope: rhs_1p29_scope
			{
				useModelOptics = 0;
				opticsZoomMin	= __EVAL(0.35/2.8);
				opticsZoomMax	= __EVAL(0.55/2.8);
				opticsZoomInit	= __EVAL(0.55/2.8);
				memoryPointCamera = "opticView_3d";
			};
			class rhs_above_sight: rhs_above_sight 	{};
		};
	};
};

class rhs_acc_pkas : rhs_acc_sniper_base
{
	INVENTORY_PICTURE(rhs_acc_pkas)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_PKAS;

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pkas\rhs_pkas";

	descriptionShort = $STR_RHS_ACC_PKAS_SD;
	weaponInfoType = "rhs_rscOptics_acc_pkas";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 0;
		mass = 8.8;
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
			class rhs_1p29_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				discreteDistance[] = { 440,100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceCameraPoint[] = {"eye_ak","eye_ak_100","eye_ak_200","eye_ak_300","eye_ak_400","eye_ak_500","eye_ak_600","eye_ak_700","eye_ak_800","eye_ak_900","eye_ak_1000"};
				cameraDir="eye_ak_look";
				discreteDistanceInitIndex = 0;
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
	};

	inertia = 0.1;
};
class rhs_acc_pkas_asval : rhs_acc_pkas
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class ACO: ACO {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				discreteDistance[] = { 100, 150, 200, 220, 250, 270, 300, 320, 350, 370, 400, 420 };
				discreteDistanceCameraPoint[] = {"eye_val","eye_val_150","eye_val_200","eye_val_220","eye_val_250","eye_val_270","eye_val_300","eye_val_320","eye_val_350","eye_val_370","eye_val_400","eye_val_420"};
				cameraDir="eye_val_look";
				distanceZoomMax = 420;
			};
		};
	};
};
class rhs_acc_pkas_pkp : rhs_acc_pkas
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class ACO: ACO {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				memoryPointCamera = "eye_pkp";
				discreteDistance[]={420,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceCameraPoint[] = {"eye_pkp","eye_pkp_100","eye_pkp_200","eye_pkp_300","eye_pkp_400","eye_pkp_500","eye_pkp_600","eye_pkp_700","eye_pkp_800","eye_pkp_900","eye_pkp_1000","eye_pkp_1100","eye_pkp_1200","eye_pkp_1300","eye_pkp_1400","eye_pkp_1500"};
				distanceZoomMin = 100;
				distanceZoomMax = 1500;
				cameraDir="eye_pkp_look";
			};
		};
	};
};

class rhs_acc_1p63 : rhs_acc_pkas
{
	INVENTORY_PICTURE(rhs_acc_1p63)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_1P63;

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\1p63\rhs_1p63";

	descriptionShort = $STR_RHS_ACC_1P63_SD;
	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 0;
		mass = 8.8;
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
};

class rhs_acc_ekp1 : rhs_acc_1p63
{
	INVENTORY_PICTURE(rhs_acc_ekp1)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_EKP1;
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\ekp1\rhs_ekp1";
	descriptionShort = $STR_RHS_ACC_EKP1_SD;
	weaponInfoType = "RHS_RscOptics_Kobra";
	rhs_accessory_next = "rhs_acc_ekp1b";

	inertia = 0;
};
class rhs_acc_ekp1b : rhs_acc_ekp1
{
	ArsenalDisabled
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\ekp1\rhs_ekp1b";
	rhs_accessory_next = "rhs_acc_ekp1c";
};
class rhs_acc_ekp1c : rhs_acc_ekp1b
{
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\ekp1\rhs_ekp1c";
	rhs_accessory_next = "rhs_acc_ekp1d";
};
class rhs_acc_ekp1d : rhs_acc_ekp1b
{
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\ekp1\rhs_ekp1d";
	rhs_accessory_next = "rhs_acc_ekp1";
};

class rhs_acc_ekp8_02 : rhs_acc_ekp1
{
	INVENTORY_PICTURE(rhs_acc_ekp8_02)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_EKP8_02;
	model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_02";
	descriptionShort = $STR_RHS_ACC_EKP1_SD;
	rhs_accessory_next = "rhs_acc_ekp8_02b";

	inertia = 0;
};
class rhs_acc_ekp8_02b : rhs_acc_ekp8_02
{
	ArsenalDisabled
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_02b";
	rhs_accessory_next = "rhs_acc_ekp8_02c";
};
class rhs_acc_ekp8_02c : rhs_acc_ekp8_02b
{
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_02c";
	rhs_accessory_next = "rhs_acc_ekp8_02d";
};
class rhs_acc_ekp8_02d : rhs_acc_ekp8_02b
{
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_02d";
	rhs_accessory_next = "rhs_acc_ekp8_02";
};
//weaver version

class rhs_acc_ekp8_18 : rhs_acc_ekp8_02
{
	INVENTORY_PICTURE(rhs_acc_ekp8_18)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_EKP8_18;
	model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_18";
	descriptionShort = $STR_RHS_ACC_EKP1_SD;
	inertia = 0;
	rhs_accessory_next = "rhs_acc_ekp8_18b";
};
class rhs_acc_ekp8_18b : rhs_acc_ekp8_18
{
	ArsenalDisabled
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_18b";
	rhs_accessory_next = "rhs_acc_ekp8_18c";
};
class rhs_acc_ekp8_18c : rhs_acc_ekp8_18
{
	ArsenalDisabled
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_18c";
	rhs_accessory_next = "rhs_acc_ekp8_18d";
};
class rhs_acc_ekp8_18d : rhs_acc_ekp8_18
{
	ArsenalDisabled
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_18d";
	rhs_accessory_next = "rhs_acc_ekp8_18";
};

class rhs_acc_1p87 : rhs_acc_1p63
{
	INVENTORY_PICTURE(rhs_acc_1p87)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_1P87;
	model = "\rhsafrf\addons\rhs_accessory\scopes\1p87\rhs_1p87";
	descriptionShort = $STR_RHS_ACC_EKP1_SD;//update

	inertia = 0.02;
};

class rhs_acc_okp7_base: rhs_acc_1p63
{
	scope = 1;
	descriptionShort = $STR_RHS_ACC_EKP1_SD;
	weaponInfoType = "RscWeaponZeroing";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class ACO: ACO
			{
				discreteDistance[]={100};
				discreteDistanceInitIndex = 0;
				//cameraDir = "opticview_dir";
				cameraDir = "";
			};
		};
	};
};
class rhs_acc_okp7_dovetail : rhs_acc_okp7_base
{
	INVENTORY_PICTURE(rhs_acc_okp7_dovetail)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_OKP7;
	model = "\rhsafrf\addons\rhs_weapons2\acc\scopes\okp7\rhs_okp7_dovetail";
	inertia = 0;
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class ACO: ACO{};
			class cowitness: ACO{memoryPointCamera = "cowitness_ak74";};
		};
	};
};

class rhs_acc_okp7_picatinny : rhs_acc_okp7_base
{
	INVENTORY_PICTURE(rhs_acc_okp7_picatinny)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_OKP7_PICATINNY;
	model = "\rhsafrf\addons\rhs_weapons2\acc\scopes\okp7\rhs_okp7_picatinny";
};


class rhs_acc_pso1m2 : rhs_acc_sniper_base
{
	INVENTORY_PICTURE(rhs_acc_pso1m2)
	AUTHOR_MACRO
	weaponInfoType = "rhs_rscOptics_acc_pso1";
	scope=2;
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope {discreteDistanceInitIndex	= "(missionNameSpace getVariable ['rhs_acc_pso_index',2]) min 16 max 0";};
			class rhs_1p29_iron: rhs_1p29_iron {};
		};
	};

	inertia = 0.2;
	rhs_optic_ads		= "rhs_acc_pso1m2_ads";
	rhs_optic_ads_night	= "rhs_acc_pso1m2_ads_night";
	rhs_optic_ads_base	= "rhs_acc_pso1m2";
};
class rhs_acc_pso1m2_ironsight : rhs_acc_pso1m2
{
	AUTHOR_MACRO
	ArsenalDisabled
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_iron: rhs_1p29_iron {};
			class pso1_scope: pso1_scope {};
		};
	};
};

class rhs_acc_pso1m2_ads : rhs_acc_pso1m2
{
	AUTHOR_MACRO
	ArsenalDisabled

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1\rhs_pso1_ads";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope
			{
				useModelOptics = 0;
				opticsPPEffects[]				= {"OpticsCHAbera2","OpticsBlur2","rhs_pso1_Blur"};

				opticsZoomMin	= __EVAL(0.35/4);
				opticsZoomMax	= __EVAL(0.35/4);
				opticsZoomInit	= __EVAL(0.35/4);
				discreteDistanceInitIndex	= "(missionNameSpace getVariable ['rhs_acc_pso_index',2]) min 16 max 0";
			};
			class rhs_1p29_iron: rhs_1p29_iron {};
		};
	};
};
class rhs_acc_pso1m2_ads_night : rhs_acc_pso1m2_ads
{
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1\rhs_pso1_ads_night";
};
// Need to create variants for each zeroing
//discreteDistance[] = {100,200,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
class rhs_acc_pso1m2_ak : rhs_acc_pso1m2
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				discreteDistance[] = { 440,100,200,300,400,500};
				discreteDistanceCameraPoint[] = {"eye_ak","eye_ak_100","eye_ak_200","eye_ak_300","eye_ak_400","eye_ak_500"};
				cameraDir="eye_ak_look";
			};
		};
	};
};
class rhs_acc_pso1m2_ak_ironsight : rhs_acc_pso1m2_ak
{
	AUTHOR_MACRO
	ArsenalDisabled
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_iron: rhs_1p29_iron {};
			class pso1_scope: pso1_scope {};
		};
	};
};
class rhs_acc_pso1m2_pkp : rhs_acc_pso1m2
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope {};
			class rhs_1p29_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye3";
				discreteDistance[] = { 100 };
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
};
class rhs_acc_pso1m2_pkp_ironsight : rhs_acc_pso1m2_pkp
{
	AUTHOR_MACRO
	ArsenalDisabled
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_iron: rhs_1p29_iron {};
			class pso1_scope: pso1_scope {};
		};
	};
};
class rhs_acc_pso1m2_asval : rhs_acc_pso1m2
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				discreteDistance[] = { 100, 150, 200, 220, 250, 270, 300, 320, 350};
				discreteDistanceCameraPoint[] = {"eye_val","eye_val_150","eye_val_200","eye_val_220","eye_val_250","eye_val_270","eye_val_300","eye_val_320","eye_val_350"};
				cameraDir="eye_val_look";
				distanceZoomMax = 420;
			};
		};
	};
};
class  rhs_acc_pso1m2_asval_ironsight : rhs_acc_pso1m2_asval
{
	AUTHOR_MACRO
	ArsenalDisabled
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_iron: rhs_1p29_iron {};
			class pso1_scope: pso1_scope {};
		};
	};
};

class rhs_acc_pso1m21 : rhs_acc_pso1m2
{
	INVENTORY_PICTURE(rhs_acc_pso1m21)
	AUTHOR_MACRO
	scope=2;

	displayName = $STR_RHS_ACC_PSO1M21;

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1m21\rhs_pso1m21";

	weaponInfoType = "rhs_rscOptics_acc_pso11";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pso1m21_scope";
		class OpticsModes: OpticsModes
		{
			///! 4X MAGNIFICATION -> 0.2492/4
			class pso1_scope: pso1_scope
			{
				discreteDistance[] = {50,75,100,125,150,175,200,225,250,275,300,325,350,375,400};
				discreteDistanceInitIndex	= "(missionNameSpace getVariable ['rhs_acc_pso_index',3]) min 14 max 0";
				distanceZoomMin = 50;
				distanceZoomMax = 400;
			};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				discreteDistance[] = { 100, 150, 200, 220, 250, 270, 300, 320, 350};
				discreteDistanceCameraPoint[] = {"eye_val","eye_val_150","eye_val_200","eye_val_220","eye_val_250","eye_val_270","eye_val_300","eye_val_320","eye_val_350"};
				cameraDir="eye_val_look";
				distanceZoomMax = 420;
			};
		};
	};

	inertia = 0.2;
	rhs_optic_ads		= "rhs_acc_pso1m21_ads";
	rhs_optic_ads_night	= "rhs_acc_pso1m21_ads_night";
	rhs_optic_ads_base	= "rhs_acc_pso1m21";
};
class rhs_acc_pso1m21_ironsight : rhs_acc_pso1m21
{
	AUTHOR_MACRO
	ArsenalDisabled
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_iron: rhs_1p29_iron {};
			class pso1_scope: pso1_scope {};
		};
	};
};
class rhs_acc_pso1m21_ads : rhs_acc_pso1m21
{
	AUTHOR_MACRO
	ArsenalDisabled

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1m21\rhs_pso1m21_ads";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope
			{
				useModelOptics = 0;
				opticsPPEffects[]				= {"OpticsCHAbera2","OpticsBlur2","rhs_pso1_Blur"};

				opticsZoomMin	= __EVAL(0.35/4);
				opticsZoomMax	= __EVAL(0.35/4);
				opticsZoomInit	= __EVAL(0.35/4);
				discreteDistanceInitIndex	= "(missionNameSpace getVariable ['rhs_acc_pso_index',3]) min 16 max 0";
			};
			class rhs_1p29_iron: rhs_1p29_iron {};
		};
	};
};
class rhs_acc_pso1m21_ads_night : rhs_acc_pso1m21_ads
{
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1m21\rhs_pso1m21_ads_night";
};
class rhs_acc_pso1m21_ak : rhs_acc_pso1m21
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				discreteDistance[] = { 440,100,200,300,400,500};
				discreteDistanceCameraPoint[] = {"eye_ak","eye_ak_100","eye_ak_200","eye_ak_300","eye_ak_400","eye_ak_500"};
				cameraDir="eye_ak_look";
			};
		};
	};
};
class rhs_acc_pso1m21_svd : rhs_acc_pso1m21
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope {};
			class rhs_1p29_iron: rhs_1p29_iron
			{
				memoryPointCamera = "eye_svd";
				discreteDistance[] = {100};
				discreteDistanceCameraPoint[] = {"eye_svd"};
				cameraDir="eye_svd_look";
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
	};
};
class rhs_acc_pso1m21_pkp : rhs_acc_pso1m21
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class pso1_scope: pso1_scope {};
			class rhs_1p29_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye3";
				discreteDistance[] = { 100 };
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
};
class rhs_acc_pso1m21_ak_ironsight : rhs_acc_pso1m21_ak
{
	AUTHOR_MACRO
	ArsenalDisabled
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_iron: rhs_1p29_iron {};
			class pso1_scope: pso1_scope {};
		};
	};
};
class  rhs_acc_pso1m21_svd_ironsight : rhs_acc_pso1m21_svd
{
	AUTHOR_MACRO
	ArsenalDisabled
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_iron: rhs_1p29_iron {};
			class pso1_scope: pso1_scope {};
		};
	};
};
class rhs_acc_pso1m21_pkp_ironsight : rhs_acc_pso1m21_pkp
{
	AUTHOR_MACRO
	ArsenalDisabled
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_1p29_iron: rhs_1p29_iron {};
			class pso1_scope: pso1_scope {};
		};
	};
};



class rhs_acc_nita : rhs_acc_pkas
{
	INVENTORY_PICTURE(rhs_acc_nita)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_NITA;

	model = "\rhsafrf\addons\rhs_weapons3\acc\scopes\nit-a\rhs_nita.p3d";

	descriptionShort = $STR_RHS_ACC_PKAS_SD;
	weaponInfoType = "rhs_rscOptics_acc_nita";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 0;
		mass = 11.64;
		RMBhint = "Collimated Optic";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons3\acc\scopes\optics\rhs_nita_scope";
		class OpticsModes
		{
			///! 1X MAGNIFICATION -> 0.2492
			class rhs_nita_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {440};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.2492;
				opticsZoomMax = 0.2492;
				opticsZoomInit = 0.2492;
				memoryPointCamera = "opticview";
				visionMode[] = {"Normal"};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 1;//0?
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
			class rhs_nita_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				discreteDistance[] = {440};
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
	rhs_optic_base = "rhs_acc_nita";
};

class rhs_acc_nita_3d : rhs_acc_nita
{
	ArsenalDisabled
	AUTHOR_MACRO

	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			///! 1X MAGNIFICATION -> 0.2492
			class rhs_nita_scope: rhs_nita_scope
			{
				useModelOptics = 0;
				memoryPointCamera = "opticview_3d";
			};
			class rhs_nita_iron : rhs_nita_iron {};
		};
	};
};


class rhs_acc_npz : rhs_acc_ekp1
{
	INVENTORY_PICTURE(rhs_acc_npz)
	ArsenalDisabled
	AUTHOR_MACRO
	weaponInfoType = "rhs_rscOptics_acc_npz";
	displayName = "Rail Adapter";
	//displayName = $STR_RHS_ACC_NPZ;
	//descriptionShort = $STR_RHS_ACC_NPZ_SD;
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\npz\rhs_npz";

	inertia = 0;
};

class rhs_acc_pgo7v : rhs_acc_sniper_base
{
	INVENTORY_PICTURE(rhs_acc_pgo7v)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_PGO7V;

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pgo7v\rhs_pgo7v";

	descriptionShort = $STR_RHS_ACC_PGO7V_SD;
	weaponInfoType = "rhs_rscOptics_acc_pgo7";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 13.64;
		RMBhint = "Optical Sight";
		optics = 1;


		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v_scope";
		class OpticsModes
		{
			///! 2.7X MAGNIFICATION -> 0.2492/2.7
			class rhs_pgo7v_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[]				= {500};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= __EVAL(0.35/2.7);
				opticsZoomMax					= __EVAL(0.35/2.7);
				opticsZoomInit					= __EVAL(0.35/2.7);
				memoryPointCamera				= "opticView";
				visionMode[]					= {"Normal"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1000;
				cameraDir						= "direction";
			};
			class rhs_pgo7v_iron
			{
				opticsID						= 1;
				useModelOptics					= 0;
				opticsPPEffects[]				= {""};
				opticsZoomMin					= 0.25;
				opticsZoomMax					= 1.1;
				opticsZoomInit					= 0.75;
				discreteDistance[]				= {100,150,200,300};
				discreteDistanceCameraPoint[]	= {"eye_100","eye_150","eye_200","eye_300"};
				discreteDistanceInitIndex		= 0;
				cameraDir						="eye_look";
				visionMode[]					= {};
				opticsFlare						= 0;
				opticsDisablePeripherialVision	= 0;
				distanceZoomMin					= 100;
				distanceZoomMax					= 300;
			};
		};
	};

	inertia = 0.1;
};
class rhs_acc_pgo7v2 : rhs_acc_pgo7v
{
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_PGO7V2;
	weaponInfoType = "rhs_rscOptics_acc_pgo7v2";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v2_scope";
	};
};
class rhs_acc_pgo7v3 : rhs_acc_pgo7v
{
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_PGO7V3;
	weaponInfoType = "rhs_rscOptics_acc_pgo7v3";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v3_scope";
	};
};

class rhs_acc_pgo7v_ak : rhs_acc_pgo7v
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_pgo7v_scope: rhs_pgo7v_scope {};
			class rhs_pgo7v_iron
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				discreteDistance[] = { 440,100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceCameraPoint[] = {"eye_ak","eye_ak_100","eye_ak_200","eye_ak_300","eye_ak_400","eye_ak_500","eye_ak_600","eye_ak_700","eye_ak_800","eye_ak_900","eye_ak_1000"};
				cameraDir="eye_ak_look";
				discreteDistanceInitIndex = 0;
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
	};
};
class rhs_acc_pgo7v2_ak : rhs_acc_pgo7v_ak
{
	displayName = $STR_RHS_ACC_PGO7V2;
	weaponInfoType = "rhs_rscOptics_acc_pgo7v2";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v2_scope";
	};
};
class rhs_acc_pgo7v3_ak : rhs_acc_pgo7v_ak
{
	displayName = $STR_RHS_ACC_PGO7V3;
	weaponInfoType = "rhs_rscOptics_acc_pgo7v3";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v3_scope";
	};
};
class rhs_acc_pgo7v_asval : rhs_acc_pgo7v_ak
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_pgo7v_scope: rhs_pgo7v_scope {};
			class rhs_pgo7v_iron: rhs_pgo7v_iron
			{
				discreteDistance[] = { 100, 150, 200, 220, 250, 270, 300, 320, 350, 370, 400, 420 };
				discreteDistanceCameraPoint[] = {"eye_val","eye_val_150","eye_val_200","eye_val_220","eye_val_250","eye_val_270","eye_val_300","eye_val_320","eye_val_350","eye_val_370","eye_val_400","eye_val_420"};
				cameraDir="eye_val_look";
				distanceZoomMax = 420;
			};
		};
	};
};
class rhs_acc_pgo7v2_asval : rhs_acc_pgo7v_asval
{
	displayName = $STR_RHS_ACC_PGO7V2;
	weaponInfoType = "rhs_rscOptics_acc_pgo7v2";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v2_scope";
	};
};
class rhs_acc_pgo7v3_asval : rhs_acc_pgo7v_asval
{
	displayName = $STR_RHS_ACC_PGO7V3;
	weaponInfoType = "rhs_rscOptics_acc_pgo7v3";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v3_scope";
	};
};
class rhs_acc_pgo7v_pkp : rhs_acc_pgo7v_ak
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class rhs_pgo7v_scope: rhs_pgo7v_scope {};
			class rhs_pgo7v_iron: rhs_pgo7v_iron
			{
				memoryPointCamera = "eye_pkp";
				discreteDistance[]={420,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceCameraPoint[] = {"eye_pkp","eye_pkp_100","eye_pkp_200","eye_pkp_300","eye_pkp_400","eye_pkp_500","eye_pkp_600","eye_pkp_700","eye_pkp_800","eye_pkp_900","eye_pkp_1000","eye_pkp_1100","eye_pkp_1200","eye_pkp_1300","eye_pkp_1400","eye_pkp_1500"};
				distanceZoomMin = 100;
				distanceZoomMax = 1500;
				cameraDir="eye_pkp_look";
			};
		};
	};
};
class rhs_acc_pgo7v2_pkp : rhs_acc_pgo7v_pkp
{
	displayName = $STR_RHS_ACC_PGO7V2;
	weaponInfoType = "rhs_rscOptics_acc_pgo7v2";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v2_scope";
	};
};
class rhs_acc_pgo7v3_pkp : rhs_acc_pgo7v_pkp
{
	displayName = $STR_RHS_ACC_PGO7V2;
	weaponInfoType = "rhs_rscOptics_acc_pgo7v3";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pgo7v3_scope";
	};
};

class rhs_acc_1pn93_base : rhs_acc_sniper_base
{
	scope=0;

	displayName = $STR_RHS_ACC_1PN931;

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\1pn93\rhs_1pn93_1";

	descriptionShort = $STR_RHS_ACC_1PN931_SD;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 14;
		RMBhint = "Optical Sniper Night Sight";
		optics = 1;

		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_1pn93_sniper_scope";
		class OpticsModes
		{
			class 1pn93_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};
				discreteDistance[]				= {100};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= __EVAL(0.35/4);
				opticsZoomMax					= __EVAL(0.35/4);
				opticsZoomInit					= __EVAL(0.35/4);
				memoryPointCamera				= "opticView";
				visionMode[]					= {"NVG"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1000;
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
				memoryPointCamera				= "eye";
				visionMode[]					= {"Normal"};
				opticsFlare						= 0;
				opticsDisablePeripherialVision	= 0;
				distanceZoomMin					= 300;
				distanceZoomMax					= 300;
				cameraDir						= "";
			};
		};
	};

	inertia = 0.2;
};

class rhs_acc_1pn93_1 : rhs_acc_1pn93_base
{
	INVENTORY_PICTURE(rhs_acc_1pn93_1)
	AUTHOR_MACRO
	scope = 2;
};

class rhs_acc_1pn93_2 : rhs_acc_pgo7v
{
	INVENTORY_PICTURE(rhs_acc_1pn93_2)
	AUTHOR_MACRO
	scope = 2;

	displayName = $STR_RHS_ACC_1PN932;

	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\1pn93\rhs_1pn93_2";

	descriptionShort = $STR_RHS_ACC_1PN932_SD;

	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 13.64;
		RMBhint = "Optical Sight";
		optics = 1;


		modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_1pn932_sniper_scope";

		class OpticsModes
		{
			///! 2.7X MAGNIFICATION -> 0.2492/2.7
			class rhs_pgo7v_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[]				= {500};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= __EVAL(0.35/2.7);
				opticsZoomMax					= __EVAL(0.35/2.7);
				opticsZoomInit					= __EVAL(0.35/2.7);
				memoryPointCamera				= "opticView";
				visionMode[]					= {"NVG"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1000;
				cameraDir						= "direction";
			};
		};
	};

	inertia = 0.2;
};

class rhs_acc_1pn34 : rhs_acc_1pn93_base
{
	INVENTORY_PICTURE(rhs_acc_1pn34)
	scope=2;

	displayName = $STR_RHS_ACC_1PN34;
	descriptionShort = "Night vision scope<br />Magnification: 3.5x";

	model = "\rhsafrf\addons\rhs_accessory\scopes\1pn34\1pn34";


	class ItemInfo: ItemInfo
	{
		mass = 18;
		modelOptics = "\rhsafrf\addons\rhs_accessory\scopes\1pn34\NV_nspu_optic";

		class OpticsModes
		{
			class 1pn34_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"rhs_NSPU_Abera","rhs_NSPU_Blur","rhs_NSPU_RadialBlur","rhs_NSPU_FilmGrain"};
				discreteDistance[]				= {100};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= __EVAL(0.35/3.5);
				opticsZoomMax					= __EVAL(0.35/3.5);
				opticsZoomInit					= __EVAL(0.35/3.5);
				memoryPointCamera				= "opticView";
				visionMode[]					= {"NVG"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1000;
				cameraDir						= "";
			};
			class rhs_1pn34_iron
			{
				opticsID						= 1;
				useModelOptics					= 0;
				opticsPPEffects[]				= {""};
				discreteDistance[]				= {100};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= 0.25;
				opticsZoomMax					= 1.1;
				opticsZoomInit					= 0.75;
				memoryPointCamera				= "eye_svd";
				visionMode[]					= {"Normal"};
				opticsFlare						= 0;
				opticsDisablePeripherialVision	= 0;
				distanceZoomMin					= 300;
				distanceZoomMax					= 300;
				cameraDir						= "eye_svd_look";
			};
		};
	};

	inertia = 0.35;
};

class rhs_acc_dh520x56 : ItemCore
{
	INVENTORY_PICTURE(rhs_acc_dh520x56)
	scope = 2;
	dlc = "RHS_AFRF";

	AUTHOR_MACRO
	displayName = "DH 5-20x56";
	model = "\rhsafrf\addons\rhs_accessory\scopes\dedal\dh_5-20";
	descriptionShort = "Russian sniper scope<br />Magnification: 5-20x";
	inertia = 0.2;
	weaponInfoType = "RscWeaponZeroing";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 13.64;
		RMBhint = "Optical Sight";
		optics = 1;


		modelOptics = "\rhsafrf\addons\rhs_accessory\scopes\dedal\optic\dedal_20x";

		class OpticsModes
		{
			///! 2.7X MAGNIFICATION -> 0.2492/2.7
			class dedal_520
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[]				= {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex		= 3;
				opticsZoomMin					= __EVAL(0.35/20);
				opticsZoomMax					= __EVAL(0.35/5);
				opticsZoomInit					= __EVAL(0.35/20);
				memoryPointCamera				= "opticView";
				visionMode[]					= {"Normal"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1000;
				cameraDir						= "";
			};
		};
	};
};

class rhs_acc_2dpZenit : acc_flashlight
{
	INVENTORY_PICTURE(rhs_acc_2dpZenit)
	dlc = "RHS_AFRF";

	AUTHOR_MACRO
	scope = 2;

	displayName = $STR_RHS_ACC_2DPZENIT;
	descriptionShort = $STR_RHS_ACC_2DPZENIT_SD;

	model = "\rhsafrf\addons\rhs_weapons2\acc\flashlights\2dpZenit\rhs_2dpZenit.p3d";

	class ItemInfo : ItemInfo
	{
		mass = 2;
		class Pointer {};
		class FlashLight : FlashLight
		{
			color[]={25,22,20};
			ambient[]={0.001,0.001,0.001};
			size=1;
			innerAngle=50;
			outerAngle=120;
			coneFadeCoef=10;
			intensity=330;
			useFlare=1;
			dayLight=1;
			FlareSize=0.7;
			onlyInNvg=0;
			position = "flashdir";
			direction = "flash";
			class Attenuation
			{
				start=0;
				constant=2;
				linear=1;
				quadratic=75;
			};
			scale[]={0};
		};
	};

	inertia = 0.1;
};

class rhs_acc_2dpZenit_ris : rhs_acc_2dpZenit
{
	INVENTORY_PICTURE(rhs_acc_2dpZenit_ris)
	dlc = "RHS_AFRF";

	AUTHOR_MACRO
	scope = 2;

	displayName = $STR_RHS_ACC_2DPZENIT_RIS;

	model = "\rhsafrf\addons\rhs_weapons2\acc\flashlights\2dpZenit\rhs_2dpZenit_ris.p3d";
};

class rhs_acc_perst1ik: acc_pointer_IR
{
	INVENTORY_PICTURE(rhs_acc_perst1ik)
	dlc = "RHS_AFRF";
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_PERST1IK;
	scope=2;

	model = "rhsafrf\addons\rhs_weapons2\acc\laser\perst1ik\rhs_perst1ik.p3d";
	class ItemInfo: InventoryFlashLightItem_Base_F
		{
			RMBhint="IR Laser";
			mass = 8;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight{

			};
		};

	inertia = 0.2;
};

class rhs_acc_perst1ik_ris: rhs_acc_perst1ik
{
	INVENTORY_PICTURE(rhs_acc_perst1ik_ris)
	dlc = "RHS_AFRF";
	AUTHOR_MACRO
	scope = 2;
	displayName = $STR_RHS_ACC_PERST1IK_RIS;
	model = "rhsafrf\addons\rhs_weapons2\acc\laser\perst1ik\rhs_perst1ik_ris.p3d";
};

class rhs_acc_perst3: rhs_acc_perst1ik
{
	INVENTORY_PICTURE(rhs_acc_perst3)
	dlc = "RHS_AFRF";
	AUTHOR_MACRO
	scope = 2;
	displayName = $STR_RHS_ACC_PERST3;
	model = "rhsafrf\addons\rhs_weapons3\acc\lasers\lcu3\rhs_lcu3_side.p3d";
};

class rhs_acc_perst3_top: rhs_acc_perst3
{
	dlc = "RHS_AFRF";
	AUTHOR_MACRO
	scope = 2;
	displayName = $STR_RHS_ACC_PERST3_TOP;
	weaponInfoType = "RHS_LaserTopRU1";
	rhs_anpeq15_base = "rhs_acc_perst3_top";
	model = "rhsafrf\addons\rhs_weapons3\acc\lasers\lcu3\rhs_lcu3_MR.p3d";
};

class rhs_acc_perst3_top_h: rhs_acc_perst3_top
{
	dlc = "RHS_AFRF";
	AUTHOR_MACRO
	ArsenalDisabled
	displayName = $STR_RHS_ACC_PERST3_TOP;
	model = "rhsafrf\addons\rhs_weapons3\acc\lasers\lcu3\rhs_lcu3.p3d";
};

class rhs_acc_perst3_2dp: rhs_acc_perst3
{
	INVENTORY_PICTURE(rhs_acc_perst3_2dp)
	dlc = "RHS_AFRF";
	AUTHOR_MACRO
	ArsenalDisabled
	displayName = $STR_RHS_ACC_PERST3_2DP_SIDE;
	weaponInfoType = "RHS_FlashlightRU";
	rhs_anpeq15_base = "rhs_acc_perst3_2dp";
	rhs_acc_combo = "rhs_acc_perst3_2dp_light";
	rhs_acc_combo_text = "Switched to Flashlight";
	model = "rhsafrf\addons\rhs_weapons3\acc\lasers\lcu3\rhs_lcu3_2dp_MR.p3d";
};

class rhs_acc_perst3_2dp_light: rhs_acc_perst3_2dp
{
	INVENTORY_PICTURE(rhs_acc_perst3_2dp_light)
	dlc = "RHS_AFRF";
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_PERST3_2DP_SIDE_LIGHT;

	rhs_anpeq15_base = "rhs_acc_perst3_2dp_light";
	rhs_acc_combo = "rhs_acc_perst3_2dp";
	rhs_acc_combo_text = "Switched to Laser";

	class ItemInfo: ItemInfo
	{
		RMBhint="Flashlight";
		mass = 8;

		class Pointer {};

		class FlashLight
		{
			color[] = {25,22,20};
			ambient[]={0.001,0.001,0.001};
			position = "flashdir";
			direction = "flash";
			size = 1;
			innerAngle = 50;
			outerAngle = 120;
			coneFadeCoef = 10;
			intensity = 330;
			useFlare = 1;
			dayLight = 1;
			FlareSize = 0.7;
			onlyInNvg = 0;

			class Attenuation
			{
				start = 0;
				constant = 2;
				linear = 1;
				quadratic = 75;
			};

			scale[] = {0};
		};
	};
};

class rhs_acc_perst3_2dp_h: rhs_acc_perst3_2dp
{
	INVENTORY_PICTURE(rhs_acc_perst3_2dp_h)
	dlc = "RHS_AFRF";
	AUTHOR_MACRO
	ArsenalEnabled
	rhs_acc_combo = "rhs_acc_perst3_2dp_light_h";
	rhs_acc_combo_text = "Switched to Flashlight";
	model = "rhsafrf\addons\rhs_weapons3\acc\lasers\lcu3\rhs_lcu3_2dp_side.p3d";
};

class rhs_acc_perst3_2dp_light_h: rhs_acc_perst3_2dp_light
{
	INVENTORY_PICTURE(rhs_acc_perst3_2dp_light_h)
	dlc = "RHS_AFRF";
	AUTHOR_MACRO
	ArsenalEnabled
	rhs_acc_combo = "rhs_acc_perst3_2dp_h";
	rhs_acc_combo_text = "Switched to Laser";
	model = "rhsafrf\addons\rhs_weapons3\acc\lasers\lcu3\rhs_lcu3_2dp_side.p3d";
};

class rhs_acc_rakursPM : rhs_acc_1p63
{
	INVENTORY_PICTURE(rhs_acc_rakursPM)
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHS_ACC_RakursPM;

	model = "\rhsafrf\addons\rhs_weapons2\acc\scopes\Rakurs\rhs_RakursPM";

	descriptionShort = $STR_RHS_ACC_RakursPM_SD;
	weaponInfoType = "RscWeaponZeroing";

	inertia = 0.1;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 0;
		mass = 4;
		RMBhint = "Optical Sight";
		optics = 1;
		modelOptics="\A3\Weapons_F\empty";

		class OpticsModes
		{
			class rhs_rakurs_collimator
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
				//visionMode[]={"Normal","NVG"};
				opticsPPEffects[]={"OpticsCHAbera5","OpticsBlur5"};
			};
		};
	};
};

//- Vertical Grips
class rhs_acc_grip_rk2 : acc_pointer_IR
{
	INVENTORY_PICTURE(rhs_acc_grip_rk2)
	dlc = "RHS_AFRF";

	AUTHOR_MACRO
	scope=2;
	model = "\rhsafrf\addons\rhs_weapons3\acc\grips\rk2";

	displayName = "RK-2";
	descriptionShort = "Zenitco RK-2 grip";

	weaponInfoType = "RHS_Grip_RK2";

	class ItemInfo
	{
		deployedPivot = "bipod";
		hasBipod = 0;
		mass = 10;
		type = 302;
	};
	inertia = -0.2;
	type = 131072;
	rhs_grip_type="rhs_grip1_change";
};

class rhs_acc_grip_rk6 : rhs_acc_grip_rk2
{
	INVENTORY_PICTURE(rhs_acc_grip_rk6)
	AUTHOR_MACRO
	displayName = "RK-6";
	descriptionShort = "Zenitco RK-6 hand-stop";
	model = "\rhsafrf\addons\rhs_weapons3\acc\grips\rk6";
	weaponInfoType = "RHS_Grip_RK6";
	class ItemInfo: ItemInfo
	{
		hasBipod = 0;
	};
	inertia = -0.2;
	rhs_grip_type="rhs_grip1_change";
};

class rhs_acc_grip_ffg2 : rhs_acc_grip_rk6
{
	INVENTORY_PICTURE(rhs_acc_grip_ffg2)
	AUTHOR_MACRO
	displayName = "FFG-2";
	descriptionShort = "Folding vertical grip";
	model = "\rhsafrf\addons\rhs_weapons3\acc\grips\ffg2";
	weaponInfoType = "RHS_Grip_FFG2";
	inertia = -0.2;
	rhs_grip_type="rhs_grip3_change";
};
