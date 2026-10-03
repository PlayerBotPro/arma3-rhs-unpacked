// Lasers

//- Muzzle accessories
class muzzle_snds_H;

class rhssaf_silencer_base : muzzle_snds_H
{
	DLC_AUTHOR;

	SCOPE_PROTECTED;

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

class rhssaf_acc_G36_Rotex : rhssaf_silencer_base
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	//INVENTORY_PICTURE(rhssaf_acc_G36_Rotex)
	model = "\rhssaf\addons\rhssaf_m_weapon_g36\G36_rotex_muzzle.p3d";
	displayName="G36 Rotex adapter";
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
			visibleFire=1;
			audibleFire=1.0;
			visibleFireTime=1;
			audibleFireTime=1;
			cost=1;
		};
		class MuzzleCoef: MuzzleCoef
		{
			dispersionCoef="1f";
			fireLightCoef="1f";
			recoilCoef="1f";
			recoilProneCoef="1f";
		};
		muzzleEnd = "mf"; // memory point in muzzle supressor's model
		alternativeFire = "rhsusf_acc_muzzleFlash_ar15";  // class in cfgWeapons with model of muzzle flash

		inertia=0.2;
	};
	inertia = 0;
};

// Scopes
class rhs_acc_scope_base: ItemCore
{
	DLC_AUTHOR;

	SCOPE_PROTECTED;

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
class rhs_acc_mtz : rhs_acc_scope_base
{
	SCOPE_PRIVATE;
	DLC_AUTHOR;
	weaponInfoType = "rhs_rscOptics_acc_mtz";
	displayName = $STR_RHS_ACC_MTZ_DISPLAYNAME;
	picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_npz_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons\acc\scopes\npz\rhs_npz";

	inertia = 0;
};
