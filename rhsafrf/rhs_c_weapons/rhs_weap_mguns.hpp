
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		dlc = "RHS_AFRF";

		scope = 0;
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";

		magazines[] =
		{
			rhs_100Rnd_762x54mmR,
			rhs_100Rnd_762x54mmR_green,
			rhs_100Rnd_762x54mmR_7N13,
			rhs_100Rnd_762x54mmR_7N26,
			rhs_100Rnd_762x54mmR_7BZ3
		};
		magazineWell[] =
		{
			PK_762x54R,
			CBA_762x54R_LINKS
		};

		reloadAction = "GestureReloadM200";

		cursor = "mg";
		cursorAim = "EmptyCursor";
		nameSound = "Mgun";
		hasBipod = 1;

		maxRecoilSway = 0.0150;
		swayDecaySpeed = 1.25;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		dexterity = 2.8;
		aimTransitionSpeed = 0.5;
		descriptionShort = "Machine Gun<br/>Caliber: 7.62x54mmR";
		recoil = "rhs_recoil_pkm";

		class ItemInfo
		{
			priority = 1;
			RMBhint = "PKP";
			onHoverText = "TODO PKP DSS";
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot {};
			class CowsSlot: rhs_russian_rifle_scopes_slot{};
			class PointerSlot {};
		};

		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne up";
				effectName = "RHS_BarrelRefract";
			};
		};
		changeFiremodeSound[]= { "A3\sounds_f\weapons\closure\firemode_changer_2", 0.56234133, 1, 20 };

		class SAFE: RHS_SAFE_BASE {};
		muzzles[]={"this","SAFE"};
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		discreteDistance[]={420,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000","eye_1100","eye_1200","eye_1300","eye_1400","eye_1500"};
		discreteDistanceInitIndex=0;
		cameraDir="eye_look";
		maxZeroing = 1500;

		class FullAuto: Mode_FullAuto
		{
			reloadTime			= 0.092;
			dispersion			= DISPERSION_MOA(5);
			soundContinuous		= 0;
			soundBurst			= 0;
			minRange			= 0;
			minRangeProbab		= 0.9;
			midRange			= 15;
			midRangeProbab		= 0.7;
			maxRange			= 30;
			maxRangeProbab		= 0.1;
			aiBurstTerminable	= 1;
			aiRateOfFire		= 1e-006;
			showToPlayer		= 1;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime		= 0.092;
			dispersion		= 0.00101;
			autoFire		= 0;
			soundContinuous	= 0;
			soundBurst		= 0;
			minRange		= 2;
			minRangeProbab	= 0.01;
			midRange		= 200;
			midRangeProbab	= 0.01;
			maxRange		= 400;
			maxRangeProbab	= 0.01;
			showToPlayer	= 0;
		};
		class close: FullAuto
		{
			burst					= 6;
			burstRangeMax			= 12;
			aiRateOfFire			= 0.5;
			aiRateOfFireDistance	= 50;
			minRange				= 0;
			minRangeProbab			= 0.05;
			midRange				= 30;
			midRangeProbab			= 0.7;
			maxRange				= 50;
			maxRangeProbab			= 0.04;
			showToPlayer			= 0;
		};
		class short: close
		{
			burst					= 5;
			burstRangeMax			= 10;
			aiRateOfFire			= 2;
			aiRateOfFireDistance	= 300;
			minRange				= 50;
			minRangeProbab			= 0.05;
			midRange				= 150;
			midRangeProbab			= 0.7;
			maxRange				= 300;
			maxRangeProbab			= 0.04;
		};
		class medium: close
		{
			burst					= 4;
			burstRangeMax			= 8;
			aiRateOfFire			= 4;
			aiRateOfFireDistance	= 600;
			minRange				= 200;
			minRangeProbab			= 0.05;
			midRange				= 400;
			midRangeProbab			= 0.60000002;
			maxRange				= 600;
			maxRangeProbab			= 0.1;
		};
		class far_optic1: close
		{
			requiredOpticType		= 1;
			showToPlayer			= 0;
			burst					= 3;
			burstRangeMax			= 6;
			aiRateOfFire			= 9;
			aiRateOfFireDistance	= 900;
			minRange				= 350;
			minRangeProbab			= 0.04;
			midRange				= 550;
			midRangeProbab			= 0.5;
			maxRange				= 700;
			maxRangeProbab			= 0.01;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType	= 2;
			autoFire			= 0;
			burst				= 2;
			burstRangeMax		= 3;
			minRange			= 400;
			minRangeProbab		= 0.05;
			midRange			= 800;
			midRangeProbab		= 0.5;
			maxRange			= 1000;
			maxRangeProbab		= 0.01;
		};
		aiDispersionCoefY			= 14;
		aiDispersionCoefX			= 8;
		magazineReloadSwitchPhase	= 0.46;

		rhs_pkas_type		= "rhs_acc_pkas_pkp";
		rhs_pso1m2_type		= "rhs_acc_pso1m2_pkp";
		rhs_pso1m21_type	= "rhs_acc_pso1m21_pkp";
		rhs_pgo7v_type		= "rhs_acc_pgo7v_pkp";
		rhs_pgo7v2_type		= "rhs_acc_pgo7v2_pkp";
		rhs_pgo7v3_type		= "rhs_acc_pgo7v3_pkp";
		rhs_1p29_type		= "rhs_acc_1p29_pkp";
	};

	class rhs_weap_pkp: rhs_pkp_base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_weap_pkp)
		baseWeapon="rhs_weap_pkp";
		inertia = 0.8;
		dexterity = 1.2;
		scope = 2;
		displayName = "$STR_RHS_PKP_NAME";
		model = "\rhsafrf\addons\rhs_weapons\pkp_bis\PKP.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\pkp_bis\data\pecheneg_co.paa"};

		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkp.rtm"};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 191.4;
		};
		weaponInfoType = "rhs_rscOptics_pkp";
	};
	class rhs_weap_pkm: rhs_weap_pkp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_weap_pkm)
		baseWeapon="rhs_weap_pkm";
		scope=2;
		inertia = 0.85;
		dexterity = 1.0;
		displayName = $STR_RHS_WEAP_PKM;
		weaponInfoType = "rhs_rscOptics_pkm";
		recoil = "recoil_zafir";

		model = "\rhsafrf\addons\rhs_weapons\pkm\pkm.p3d";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\pkm\pkm_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkm.rtm"};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 165;
			class MuzzleSlot 	{ICON_OVERLAY_DISABLED};
			class CowsSlot 		{ICON_OVERLAY_DISABLED};
			class PointerSlot 	{ICON_OVERLAY_DISABLED};
		};

		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual: FullAuto
		{
			reloadTime			= 0.092;
			dispersion			= DISPERSION_MOA(5.5);
			soundContinuous		= 0;
			soundBurst			= 0;
			aiBurstTerminable	= 1;
			minRange			= 0;
			minRangeProbab		= 0.3;
			midRange			= 5;
			midRangeProbab		= 0.7;
			maxRange			= 10;
			maxRangeProbab		= 0.04;
			showToPlayer		= 1;
		};
		class close: manual
		{
			burst					= 6;
			burstRangeMax			= 12;
			aiRateOfFire			= 0.5;
			aiRateOfFireDistance	= 50;
			minRange				= 10;
			minRangeProbab			= 0.05;
			midRange				= 20;
			midRangeProbab			= 0.7;
			maxRange				= 50;
			maxRangeProbab			= 0.04;
			showToPlayer			= 0;
		};
		class short: close
		{
			burst					= 6;
			burstRangeMax			= 10;
			aiRateOfFire			= 2;
			aiRateOfFireDistance	= 300;
			minRange				= 50;
			minRangeProbab			= 0.05;
			midRange				= 150;
			midRangeProbab			= 0.7;
			maxRange				= 300;
			maxRangeProbab			= 0.04;
		};
		class medium: close
		{
			burst					= 5;
			burstRangeMax			= 9;
			aiRateOfFire			= 4;
			aiRateOfFireDistance	= 600;
			minRange				= 200;
			minRangeProbab			= 0.05;
			midRange				= 300;
			midRangeProbab			= 0.7;
			maxRange				= 500;
			maxRangeProbab			= 0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType		= 1;
			showToPlayer			= 0;
			burst					= 3;
			burstRangeMax			= 6;
			aiRateOfFire			= 10;
			aiRateOfFireDistance	= 1000;
			minRange				= 300;
			minRangeProbab			= 0.05;
			midRange				= 500;
			midRangeProbab			= 0.4;
			maxRange				= 650;
			maxRangeProbab			= 0.009;
		};
		class far_optic2: far_optic1
		{
			burst					= 3;
			burstRangeMax			= 6;
			requiredOpticType		= 2;
			minRange				= 400;
			minRangeProbab			= 0.05;
			midRange				= 750;
			midRangeProbab			= 0.7;
			maxRange				= 900;
			maxRangeProbab			= 0.009;
			aiRateOfFire			= 10;
			aiRateOfFireDistance	= 900;
		};

	};

	#define ITEM_RPK74_MASS 			103.4
	#define ITEM_RPK74M_MASS 			103.4

	class rhs_weap_rpk_base: Rifle_Long_Base_F
	{
		dlc								= "RHS_AFRF";

		descriptionShort				= "Light Machine Gun<br/>Caliber: 5.45x39mm";
		cursor							= "mg";
		cursorAim						= "EmptyCursor";
		nameSound						= "Mgun";
		UiPicture						= "\A3\weapons_f\data\UI\icon_mg_CA.paa";

		cameraDir						= "eye_look";
		discreteDistanceCameraPoint[]	= {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		discreteDistance[]				= {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex		= 2;

		BULLET_SOUNDS_762
		magazines[] =
		{
			"rhs_45Rnd_545x39_7N6M_AK"
		};
		magazineWell[] =
		{
			AK_545x39,
			CBA_545x39_AK,
			CBA_545x39_RPK
		};


		class SAFE: RHS_SAFE_BASE {};
		muzzles[]={"this","SAFE"};
		modes[]=
		{
			"single",
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		aidispersioncoefx = 5;
		aidispersioncoefy = 8;
		class Single: Mode_SemiAuto
		{
			reloadTime=0.092;
			dispersion=0.00123;

			autoFire=0;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.01;
			midRange=0;
			midRangeProbab=0.01;
			maxRange=0;
			maxRangeProbab=0.01;
			showToPlayer=1;
		};
		class Manual: Mode_FullAuto
		{
			reloadTime=0.092;
			dispersion=0.00123;
			aiBurstTerminable = 1;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.3;
			midRange=5;
			midRangeProbab=0.7;
			maxRange=10;
			maxRangeProbab=0.04;
			showToPlayer=1;
		};
		class close: Manual
		{
			burst=6;
			burstRangeMax = 12;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.05;
			midRange=20;
			midRangeProbab=0.7;
			maxRange=50;
			maxRangeProbab=0.04;
			showToPlayer=0;
		};
		class short: close
		{
			burst=5;
			burstRangeMax = 10;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.05;
			midRange=150;
			midRangeProbab=0.7;
			maxRange=300;
			maxRangeProbab=0.04;
		};
		class medium: close
		{
			burst=5;
			burstRangeMax = 8;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.05;
			midRange=300;
			midRangeProbab=0.7;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax = 6;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.05;
			midRange=500;
			midRangeProbab=0.4;
			maxRange=650;
			maxRangeProbab=0.009;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			burstRangeMax = 6;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.05;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=900;
			maxRangeProbab=0.009;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
	};
	// RPK-74
	class rhs_weap_rpk74_base: rhs_weap_rpk_base
	{
		initSpeed						= -1.0666;
		inertia							= 0.7;
		dexterity						= 1.25;
		aimTransitionSpeed				= 0.7;
		reloadAction					= "RHS_GestureReloadAK762";
		magazineReloadSwitchPhase		= 0.5;
		recoil							= "rhs_recoil_rpk74";
		class Single: Single
		{
			dispersion=0.00090;
		};
		class Manual: Manual
		{
			dispersion=0.00090;
		};
	};
	class rhs_weap_rpk74: rhs_weap_rpk74_base
	{
		AUTHOR_MACRO
		//INVENTORY_PICTURE(rhs_weap_rpk74)
		baseWeapon						= "rhs_weap_rpk74";
		weaponInfoType					= "rhs_rscOptics_rpk74";
		scope							= 1;
		displayName						= $STR_RHS_WEAP_RPK74;
		model							= "\rhsafrf\addons\rhs_weapons4\RPK74\RPK74.p3d";
		hiddenSelections[]				= {""};
		handAnim[]						= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = __EVAL(ITEM_RPK74_MASS);
			class MuzzleSlot: rhs_russian_rpk74_muzzle_slot {};
			class CowsSlot 		{ICON_OVERLAY_DISABLED};
			class PointerSlot : rhs_russian_ak_barrel_slot {};
		};

	};
	class rhs_weap_rpk74n: rhs_weap_rpk74
	{
		AUTHOR_MACRO
		//INVENTORY_PICTURE(rhs_weap_rpk74n)
		weaponInfoType				= "rhs_rscOptics_rpk74n";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = __EVAL(ITEM_RPK74_MASS + ITEM_DOVETAIL_MASS);
			class CowsSlot: rhs_russian_rifle_scopes_slot{};
			class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		};
	};
	class rhs_weap_rpk74n_npz: rhs_weap_rpk74n
	{
	};
	// RPKS-74

	// RPK-74M
	class rhs_weap_rpk74m: rhs_weap_rpk74n
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_weap_rpk74m)
		scope						= 2;
		dexterity					= 1.3;
		weaponInfoType				= "rhs_rscOptics_rpk74m";
		displayName					= $STR_RHS_WEAP_RPK74M;
		model						= "\rhsafrf\addons\rhs_weapons3\rpk74\rhs_rpk74m.p3d";
		hiddenSelections[]			= {"camo","camo2"};
		hiddenSelectionsTextures[]	= {"rhsafrf\addons\rhs_weapons3\rpk74\data\rhs_rpk74_base_co.paa","rhsafrf\addons\rhs_weapons3\rpk74\data\rhs_rpk74_stock_co.paa"};

		class FOLD: RHS_FOLD_BASE {};
		muzzles[]={"this","SAFE","FOLD"};

		baseWeapon			= "rhs_weap_rpk74m";
		rhs_pkas_type		= "rhs_acc_pkas";
		rhs_1p29_type		= "rhs_acc_1p29";
		rhs_pso1m2_type		= "rhs_acc_pso1m2_ak";
		rhs_pso1m21_type	= "rhs_acc_pso1m21_ak";
		rhs_pgo7v_type		= "rhs_acc_pgo7v_ak";
		rhs_pgo7v2_type		= "rhs_acc_pgo7v2_ak";
		rhs_pgo7v3_type		= "rhs_acc_pgo7v3_ak";
		rhs_fold			= "rhs_weap_rpk74m_folded";
		rhs_fold_anim		= "RHS_GestureFoldAK74M";
		rhs_fold_sound[]	= {"rhsafrf\addons\rhs_c_weapons\sounds\stock_folding.wss", 1.42, 1, 20};
		rhs_npz				= "rhs_weap_rpk74m_npz";

		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhs_acc_dtkrpk";
			};
		};
	};
	class rhs_weap_rpk74m_npz: rhs_weap_rpk74m
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_weap_rpk74m_npz)
		displayName		= "RPK-74M (B-13)";
		model			= "\rhsafrf\addons\rhs_weapons3\rpk74\rhs_rpk74m_npz.p3d";
		rhs_npz			= "rhs_weap_rpk74m";
		weaponInfoType	= "rhs_rscOptics_rpk74m_npz";
		baseWeapon		= "rhs_weap_rpk74m_npz";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = __EVAL(ITEM_RPK74M_MASS + ITEM_DOVETAIL_MASS + ITEM_NPZ_MASS);
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
			class rhs_npz_slot {};
		};
	};
	class rhs_weap_rpk74m_folded: rhs_weap_rpk74m
	{
		AUTHOR_MACRO
		//INVENTORY_PICTURE(rhs_weap_rpk74m_folded)
		scope = 1;
		displayName		= "RPK-74M (Folded)";
		class DUMMY: RHS_DUMMYMUZZLE_BASE {
			discreteDistance[]			= {0,1};
			discreteDistanceInitIndex	= 1;
		};
		muzzles[]={"this","SAFE","DUMMY","FOLD"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = __EVAL((ITEM_RPK74M_MASS + ITEM_DOVETAIL_MASS) * ITEM_FOLDED_MODIFIER);
			class CowsSlot {};
			class rhs_npz_slot {};
		};
		inertia = 0.7;
		recoil		= "rhs_recoil_rpk74_folded";
		rhs_fold		= "rhs_weap_rpk74m";
		rhs_fold_anim	= "RHS_GestureUnfoldAK74M";
		baseWeapon		= "rhs_weap_rpk74m_folded";
	};