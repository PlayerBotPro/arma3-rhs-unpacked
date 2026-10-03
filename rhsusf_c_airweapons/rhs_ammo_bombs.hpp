
// Bombs

	class Bomb_04_F;
	class Bo_Mk82;

	class rhs_ammo_gbu12: Bomb_04_F
	{
		//maverickWeaponIndexOffset=0;
		//simulation="shotMissile";
		model			= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu12_fly";
		proxyShape		= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu12";
		initTime		= 0.2;
		maneuvrability	= 22;
		airFriction		= 0.06;
		sideAirFriction	= 3.2;
	};
	class rhs_ammo_gbu32: Bomb_04_F
	{
		model					= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu32";
		proxyShape				= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu32";
	};
	class rhs_ammo_mk82: Bo_Mk82
	{
		hit			= 5000;
		indirectHit	= 1150;
		cost		= 50;
		sideAirFriction = 0.25;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
		maverickWeaponIndexOffset=0;
	};

// Cluster Bombs

	class Mo_cluster_AP;

	class rhs_ammo_cbu_base: rhs_ammo_mk82
	{
		cost				= 70;
		laserLock			= 0;
		autoSeekTarget		= false;
		weaponLockSystem	= CM_Lock_Visual;
		//Jets DLC Mk.7 dispenser, replace with SUU-65B for CBU-87, CBU-107 etc.
		model					= "\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
		proxyShape				= "\a3\Weapons_F_Orange\Ammo\BombCluster_01_F";

		simulation				= shotMissile;
		triggerSpeedCoef[]		= {0.8,1};
		submunitionConeAngle	= 20;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
	};
	class rhs_ammo_cbu100: rhs_ammo_cbu_base
	{
		allowAgainstInfantry	= 0;
		aiAmmoUsageFlags		= AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;

		triggerTime				= 4.0;
		submunitionAmmo[]		= {"rhs_ammo_sub_mk118",1};
		submunitionConeType[]	= {"randomcenter",123}; //Half of 247 carried IRL
	};
	class rhs_ammo_sub_mk118: Mo_cluster_AP
	{
		model					= "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
		HEAT_MACRO(rhs_ammo_sub_mk118_penetrator)
		hit						= 50;
		indirectHitRange		= 4;

		effectFly				= "";
	};
	class rhs_ammo_sub_mk118_penetrator: rhs_ammo_cluster_penetrator
	{
		hit					= 130;
		RHA(120,1000)
	};
	class rhs_ammo_cbu87: rhs_ammo_cbu_base
	{
		model					= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu87_fly";
		proxyShape				= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu87";
		initTime				= 0.2;

		allowAgainstInfantry	= 1;
		aiAmmoUsageFlags		= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;

		triggerDistance			= 250;
		submunitionAmmo[]		= {"rhs_ammo_sub_blu97",0.95,"rhs_ammo_blu97_deploy",0.05};
		submunitionConeType[]	= {"randomcenter",101}; //Half of 202 carried IRL
	};

	class rhs_ammo_cbu89: rhs_ammo_cbu87
	{
		model					= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu89_fly";
		proxyShape				= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu89";

		submunitionAmmo[]		= {"rhs_ammo_blu91_deploy",0.76,"rhs_ammo_blu92_deploy",0.24};
		submunitionConeType[]	= {"randomcenter",94};
	};
/*
	class rhs_ammo_cbu107: rhs_ammo_cbu_base
	{
	allowAgainstInfantry			= 1;
	aiAmmoUsageFlags			= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;

	triggerDistance 			= 250;
	submunitionAmmo[] 			= {"rhs_ammo_sub_PAW",1};
	submunitionConeType[] 			= {"randomcenter",101}; //3,750 carried IRL
	};
	class rhs_ammo_sub_PAW: Mo_cluster_AP
	{
		explosive = 0;
		model					= "";
		hit 					= 30;
		indirectHitRange 			= 0;

		effectFly				= "";
	};
*/

//Submunitions

	class ShotDeployBase;
	class rhs_ammo_blu91_deploy: ShotDeployBase
	{
		model			= \rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_fly;
		submunitionAmmo	= rhs_ammo_blu91;
	};
	class rhs_ammo_blu92_deploy: ShotDeployBase
	{
		model			= \rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_fly;
		submunitionAmmo	= rhs_ammo_blu92;
	};
	class APERSMine_Range_Ammo;
	class ATMine_Range_Ammo;
	class rhs_ammo_blu91: ATMine_Range_Ammo
	{
		hit						= 2000;
		indirectHit				= 1250;
		indirectHitRange		= 1;
		model					= \rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_d;
		mineModelDisabled		= \rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_d;
		defaultMagazine			= "";
		mineTrigger				= "TankTriggerMagnetic";
		mineCanBeReactivated	= 0;
		mineFloating			= 1e7;
	};
	class rhs_ammo_blu92: APERSMine_Range_Ammo
	{
		hit						= 9;
		indirectHit				= 8;
		indirectHitRange		= 2;
		model					= \rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_d;
		mineModelDisabled		= \rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_d;
		defaultMagazine			= "";
		mineTrigger				= RangeTriggerShort;
		mineCanBeReactivated	= 0;
		mineFloating			= 1e7;
	};

	class rhs_ammo_sub_blu97: Mo_cluster_AP
	{
		model					= "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_fly";
		HEAT_MACRO(rhs_ammo_sub_blu97_penetrator)
		hit						= 8;
		indirectHitRange		= 10;

		effectFly				= "";
	};
	class rhs_ammo_sub_blu97_penetrator: rhs_ammo_cluster_penetrator
	{
		hit					= 130;
		RHA(200,1000)
	};
	class rhs_ammo_blu97_deploy: ShotDeployBase
	{
		model			= \rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_fly;
		submunitionAmmo	= rhs_ammo_uxo_blu97;
	};
	class rhs_ammo_uxo_blu97: APERSMine_Range_Ammo
	{
		hit						= 9;
		indirectHit				= 8;
		indirectHitRange		= 2;
		icon					= "iconExplosiveUXO";
		model					= \rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_d;
		mineModelDisabled		= \rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_d;
		defaultMagazine			= "";
		mineTrigger				= RangeTriggerShort;
		mineCanBeReactivated	= 0;
		mineFloating			= 1e7;
	};

// Misc; fuel tanks and electronics pods

	class rhs_ammo_ANALQ131: MissileBase
	{
		simulation					= "shotMissile";
		model						= "\A3\Weapons_F\empty.p3d";
		proxyShape					= "\A3\Weapons_F\empty.p3d";
		maverickWeaponIndexOffset	= 10;
		hit							= 0;
		indirectHit					= 0;
		indirectHitRange			= 0;
		thrustTime					= 0;
		thrust						= 0;
		maxspeed					= 0;
		timetolive					= 0;
		maneuvrability				= 0;
		airlock						= 0;
		laserLock					= 0;
		irLock						= 0;
		initTime					= 0;
		minRange					= 0;
		minRangeProbab				= 0;
		midRange					= 0;
		midRangeProbab				= 0;
		maxRange					= 0;
		maxRangeProbab				= 0;
		sideAirFriction				= 0;
	};