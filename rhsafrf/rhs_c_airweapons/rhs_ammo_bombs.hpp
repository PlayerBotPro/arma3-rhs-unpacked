class bomb_04_f;
class Mo_cluster_AP;
class UXO_deploy_BombCluster_base_F;
class ShotDeployBase;
class APERSMine_Range_Ammo;
class ATMine_Range_Ammo;
class rhs_ammo_fab100: bomb_04_f
{
	cost 						= 50;

	flightProfiles[]	= {"Direct"};
	class Direct{};

	hit							= 1500;
	indirectHit					= 650;
	indirectHitRange			= 13;
	dangerRadiusHit 			= 850;
	suppressionRadiusHit		= 80;
	explosionForceCoef			= 10;

	irLock						= 0;
	laserLock					= 0;
	allowAgainstInfantry		= 1;
	autoSeekTarget 				= false;
	aiAmmoUsageFlags			= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
	weaponLockSystem			= CM_Lock_Visual;

	model						= \rhsafrf\addons\rhs_airweapons\rhs_m_fab100;
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_fab100;

	soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",3.16228,1,1000};
	soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02",3.16228,1,1000};
	soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03",3.16228,1,1000};
	soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04",3.16228,1,1000};
	soundFakeFall[] = {"soundFakeFall0",0.25,"soundFakeFall1",0.25,"soundFakeFall2",0.25,"soundFakeFall3",0.25};
	// dumb bomb - no sensors
	class Components
	{
		class SensorsManagerComponent
		{
			class Components {};
		};
	};
};
class rhs_ammo_fab250: rhs_ammo_fab100
{
	hit							= 5000;
	indirectHit					= 1140;
	indirectHitRange			= 15;
	dangerRadiusHit 			= 1250;
	suppressionRadiusHit		= 100;

	model						= \rhsafrf\addons\rhs_a2port_air\data\rhs_m_fab250;
	proxyShape					= \rhsafrf\addons\rhs_a2port_air\data\rhs_m_fab250;
};

// placeholder entry, just a different model + maybe smaller air friction?
class rhs_ammo_fab250_m62: rhs_ammo_fab250
{
	model						= \rhsafrf\addons\rhs_airweapons\rhs_m_fab250m62;
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_fab250m62;
	sideAirFriction			= 0.1;
};
class rhs_ammo_ofab250: rhs_ammo_fab250
{
	model						= \rhsafrf\addons\rhs_airweapons\rhs_m_ofab250;
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_ofab250;
};
class rhs_ammo_kab250: bomb_04_f
{
	flightProfiles[]	= {"LoalAltitude"};
	class Direct{};
	class LoalAltitude{lockSeekAltitude = 300;};

	hit							= 5000;
	indirectHit					= 1140;
	indirectHitRange			= 15;
	explosionForceCoef			= 10;

	model						= \rhsafrf\addons\rhs_airweapons\rhs_m_kab250.p3d;
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_kab250.p3d;
	maverickWeaponIndexOffset	= 0;
};
class rhs_ammo_rbk250_ao1: rhs_ammo_fab250
{
	laserLock					= 0;
	allowAgainstInfantry		= 1;
	autoSeekTarget 				= false;
	aiAmmoUsageFlags			= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour;
	weaponLockSystem			= CM_Lock_Visual;
	// placeholder
	//model						= \rhsafrf\addons\rhs_a2port_air\data\proxy\rhs_m_fab250;
	//proxyShape				= \rhsafrf\addons\rhs_a2port_air\data\proxy\rhs_m_fab250;
	maverickWeaponIndexOffset	= 0;

	simulation 						= shotMissile;
	triggerDistance 				= 250;
	triggerSpeedCoef[] 				= {0.8,1};
	submunitionConeAngle 			= 20;
	submunitionAmmo[] 				= {"rhs_ammo_sub_ao1",0.94,"rhs_ammo_ao1_uxo_deploy",0.06};
	// суббоеприпасы AO-1, 150 шт
	// dividing amount of bomblets by 2 due to engine handling
	submunitionConeType[] 			= {"randomcenter",75};

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
class rhs_ammo_rbk250_ptab25: rhs_ammo_rbk250_ao1
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275;
	proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275;
	submunitionConeAngle 	= 8;
	submunitionAmmo[]		= {"rhs_ammo_sub_ptab25m",0.94,"rhs_ammo_ptab25m_uxo_deploy",0.06};
	submunitionConeType[]	= {"randomcenter",60};
};
class rhs_ammo_rbk250_zab25t: rhs_ammo_rbk250_ao1
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275;
	proxyShape				= \rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275;
	submunitionAmmo[]		= {"rhs_ammo_sub_zab25t_deploy",1};
	submunitionConeType[]	= {"randomcenter",24}; //half or real cargo
};
// AO-1SCh - HE
// 150 in RBK-250
class rhs_ammo_sub_ao1: Mo_cluster_AP
{
	hit 							= 15;
	indirectHit 					= 8;
	indirectHitRange 				= 5;
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ao1sh;

	effectFly						= "";
};
class rhs_ammo_ao1_uxo_deploy: UXO_deploy_BombCluster_base_F
{
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ao1sh;
	submunitionAmmo[] 				= {"rhs_ammo_uxo_ao1_1_deploy",0.34,"rhs_ammo_uxo_ao1_2_deploy",0.33,"rhs_ammo_uxo_ao1_3_deploy",0.33};
};
class rhs_ammo_uxo_ao1_1_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_1;
	submunitionAmmo	= rhs_ammo_uxo_ao1_1;
};
class rhs_ammo_uxo_ao1_1: APERSMine_Range_Ammo
{
	hit								= 15;
	indirectHit						= 8;
	indirectHitRange				= 5;
	icon							= "iconExplosiveUXO";
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_1;
	mineModelDisabled				= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3;
	defaultMagazine					= "";
	mineTrigger						= UXOTrigger1;
	mineCanBeReactivated			= 0;
	mineFloating					= 1e7;
};
class rhs_ammo_uxo_ao1_2_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_2;
	submunitionAmmo	= rhs_ammo_uxo_ao1_2;
};
class rhs_ammo_uxo_ao1_2: rhs_ammo_uxo_ao1_1
{
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_2;
	mineTrigger						= UXOTrigger2;
};
class rhs_ammo_uxo_ao1_3_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3;
	submunitionAmmo	= rhs_ammo_uxo_ao1_3;
};
class rhs_ammo_uxo_ao1_3: rhs_ammo_uxo_ao1_1
{
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3;
	mineTrigger						= UXOTrigger3;
};
// PTAB-2.5 - Dumb HEAT
// 30 in RBK-250, 120mm penetration of RHA
// http://www.russianarms.ru/forum/index.php?topic=1140.0
class rhs_ammo_sub_ptab25m: rhs_ammo_sub_ao1
{
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ptab25m;
	HEAT_MACRO(rhs_ammo_sub_ptab25m_penetrator)
	hit 							= 50;
	indirectHitRange 				= 4;
};
class rhs_ammo_sub_ptab25m_penetrator: rhs_ammo_cluster_penetrator
{
	hit						= 130;
	submunitionConeType[]	= {"randomcenter", 5};
	RHA(120,1000)
};
class rhs_ammo_ptab25m_uxo_deploy: UXO_deploy_BombCluster_base_F
{
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ptab25m;
	submunitionAmmo[] 				= {"rhs_ammo_uxo_ptab25m_1_deploy",0.34,"rhs_ammo_uxo_ptab25m_2_deploy",0.33,"rhs_ammo_uxo_ptab25m_3_deploy",0.33};
};
class rhs_ammo_uxo_ptab25m_1_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_1;
	submunitionAmmo	= rhs_ammo_uxo_ptab25m_1;
};
class rhs_ammo_uxo_ptab25m_1: APERSMine_Range_Ammo
{
	hit								= 50;
	indirectHit						= 8;
	indirectHitRange				= 4;
	icon							= "iconExplosiveUXO";
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_1;
	mineModelDisabled				= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3;
	defaultMagazine					= "";
	mineTrigger						= UXOTrigger1;
	mineCanBeReactivated			= 0;
	mineFloating					= 1e7;
};
class rhs_ammo_uxo_ptab25m_2_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_2;
	submunitionAmmo	= rhs_ammo_uxo_ptab25m_2;
};
class rhs_ammo_uxo_ptab25m_2: rhs_ammo_uxo_ptab25m_1
{
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_2;
	mineTrigger						= UXOTrigger2;
};
class rhs_ammo_uxo_ptab25m_3_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3;
	submunitionAmmo	= rhs_ammo_uxo_ptab25m_3;
};
class rhs_ammo_uxo_ptab25m_3: rhs_ammo_uxo_ptab25m_1
{
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3;
	mineTrigger						= UXOTrigger3;
};
class rhs_ammo_sub_ptab25ko: rhs_ammo_sub_ptab25m
{
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ptab25ko;
	HEAT_MACRO(rhs_ammo_sub_ptab25ko_penetrator)
	hit 							= 50;
	indirectHitRange 				= 8;
};
class rhs_ammo_sub_ptab25ko_penetrator: rhs_ammo_cluster_penetrator
{
	hit						= 130;
	submunitionConeType[]	= {"randomcenter", 5};
	RHA(120,1000)
};
class rhs_ammo_ptab25ko_uxo_deploy: UXO_deploy_BombCluster_base_F
{
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ptab25ko;
	submunitionAmmo[] 				= {"rhs_ammo_uxo_ptab25ko_1_deploy",0.34,"rhs_ammo_uxo_ptab25ko_2_deploy",0.33,"rhs_ammo_uxo_ptab25ko_3_deploy",0.33};
};
class rhs_ammo_uxo_ptab25ko_1_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_1;
	submunitionAmmo	= rhs_ammo_uxo_ptab25ko_1;
};
class rhs_ammo_uxo_ptab25ko_1: APERSMine_Range_Ammo
{
	hit								= 50;
	indirectHit						= 8;
	indirectHitRange				= 8;
	icon							= "iconExplosiveUXO";
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_1;
	mineModelDisabled				= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3;
	defaultMagazine					= "";
	mineTrigger						= UXOTrigger1;
	mineCanBeReactivated			= 0;
	mineFloating					= 1e7;
};
class rhs_ammo_uxo_ptab25ko_2_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_2;
	submunitionAmmo	= rhs_ammo_uxo_ptab25ko_2;
};
class rhs_ammo_uxo_ptab25ko_2: rhs_ammo_uxo_ptab25ko_1
{
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_2;
	mineTrigger						= UXOTrigger2;
};
class rhs_ammo_uxo_ptab25ko_3_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3;
	submunitionAmmo	= rhs_ammo_uxo_ptab25ko_3;
};
class rhs_ammo_uxo_ptab25ko_3: rhs_ammo_uxo_ptab25ko_1
{
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3;
	mineTrigger						= UXOTrigger3;
};
// ZAB-2.5 - Incendary
// 48 in RBK-250
class rhs_ammo_sub_zab25t_deploy: rhs_ammo_rbk250_ao1
{
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_zab25t;
	hit						= 1;
	indirectHit				= 1;
	indirectHitRange		= 1;
	triggerDistance			= 15;
	triggerSpeedCoef[]		= {0.1};
	submunitionConeAngle	= 1;
	submunitionAmmo[]		= {"rhs_ammo_sub_zab25t",1};
	submunitionConeType[]	= {"randomcenter",1};
	effectFly				= "ArtilleryTrails";
	explosionEffects		= "";
};
class F_40mm_White;
class rhs_ammo_sub_zab25t: F_40mm_White
{
	hit 							= 1;
	indirectHit 					= 1;
	indirectHitRange 				= 1;
	timetolive 						= 180;
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_zab25t;

	effectFlare 					= RHS_Incendiary_Bomb;
	craterShape 					= "\rhsafrf\addons\rhs_airweapons\rhs_m_zab25t";
	explosionEffects				= "";
	//craterEffects					= "ImpactEffectsDummy_Orange";
};

class rhs_ammo_fab500: rhs_ammo_fab250
{
	// 300kg explosive material
	hit							= 8000;
	indirectHit					= 2400;
	indirectHitRange			= 25;

	CraterEffects		= RHS_HeavyBombCrater;
	explosionEffects	= RHS_HeavyBombExplosion;
	SoundSetExplosion[]	= {"BombsHeavy_Exp_SoundSet","BombsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};

	CfgAmmo_CamShakeExplode(1200,225);
	CfgAmmo_CamShakeHit(1200);

	model						= \rhsafrf\addons\rhs_airweapons\rhs_m_fab500;
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_fab500;
};
class rhs_ammo_fab500_m54: rhs_ammo_fab500
{
	// 201kg explosive material
	hit							= 8000;
	indirectHit					= 2000;
	model						= \rhsafrf\addons\rhs_airweapons\rhs_m_fab500_m54;
	proxyShape					= \rhsafrf\addons\rhs_airweapons\rhs_m_fab500_m54;
};
// KAB-500
// L variant
class rhs_ammo_kab500: rhs_ammo_kab250
{
	hit					= 8000;
	indirectHit			= 2400;
	indirectHitRange	= 25;
	CraterEffects		= RHS_HeavyBombCrater;
	explosionEffects	= RHS_HeavyBombExplosion;
	SoundSetExplosion[]	= {"BombsHeavy_Exp_SoundSet","BombsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};

	CfgAmmo_CamShakeExplode(1200,225);
	CfgAmmo_CamShakeHit(1200);
};
// LGB cluster
class rhs_ammo_kab500lk: rhs_ammo_kab500
{
	simulation 						= shotMissile;
	triggerDistance 				= 250;
	triggerSpeedCoef[] 				= {0.8,1};
	submunitionConeAngle 			= 20;
	submunitionAmmo[] 				= {"rhs_ammo_sub_ao25",1};
	// dividing amount of bomblets by 2 due to engine handling
	submunitionConeType[] 			= {"randomcenter",63};
};
// TV Guided
class rhs_ammo_kab500od: rhs_ammo_kab500
{
	flightProfiles[]	= {"Direct"};
	missileLockMaxDistance	= 11000;
	missileLockMinDistance	= 2500;
	weaponLockSystem		= CM_Lock_Visual;
	cameraViewAvailable 	= true;
	rhs_tv_guidance 		= "BW";
	class Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class VisualSensorComponent : SensorTemplateVisual
				{
					SENS_RANGES_WVR(11000,11000)
					maxTrackableSpeed = 35;
					nightRangeCoef = 0.8;
					angleRangeHorizontal = 5;
					angleRangeVertical = 5;
				};
			};
		};
	};
};
// bunk buster, TV Guided
class rhs_ammo_kab500kr: rhs_ammo_kab500od
{
	hit							= 8000;
	indirectHitRange			= 15;
};
// satelite
class rhs_ammo_kab500s: rhs_ammo_kab500
{
	flightProfiles[]	= {"Direct"};
	rhs_tv_guidance 		= "";
};

class rhs_ammo_rbk500_ao25: rhs_ammo_rbk250_ao1
{
	model 							= \a3\Weapons_F_Orange\Ammo\BombCluster_02_Fly_F;
	proxyShape						= \a3\Weapons_F_Orange\Ammo\BombCluster_02_F;
	submunitionAmmo[] 				= {"rhs_ammo_sub_ao25",1};
	// dividing amount of bomblets by 2 due to engine handling
	submunitionConeType[] 			= {"randomcenter",63};
};
class rhs_ammo_rbk500_ofab50: rhs_ammo_rbk500_ao25
{
	submunitionAmmo[] 				= {"rhs_ammo_sub_ofab50",1};
	submunitionConeType[] 			= {"randomcenter",10};
};
class rhs_ammo_rbk500_spbed: rhs_ammo_rbk500_ao25
{
	model 							= \rhsafrf\addons\rhs_airweapons\rhs_m_rbk500_spbed;
	submunitionAmmo[] 				= {"rhs_ammo_sub_spbed",1};
	submunitionConeType[] 			= {"randomcenter",12};
	submunitionConeAngle 			= 60;
};
class rhs_ammo_rbk500_ptab1m: rhs_ammo_rbk250_ptab25
{
	model 							= \rhsafrf\addons\rhs_airweapons\rhs_m_rbk500_ptab;
	proxyShape						= \a3\Weapons_F_Orange\Ammo\BombCluster_02_F;
	submunitionAmmo[] 				= {"rhs_ammo_sub_ptab1m",0.94,"rhs_ammo_ptab1m_uxo_deploy",0.06};
	submunitionConeAngle 			= 8;
	// dividing amount of bomblets by 2 due to engine handling
	submunitionConeType[] 			= {"randomcenter",136};
};
class rhs_ammo_rbk500_zab25t: rhs_ammo_rbk500_ao25
{
	submunitionAmmo[] 				= {"rhs_ammo_sub_zab25t_deploy",1};
	submunitionConeType[] 			= {"randomcenter",57}; // half of real cargo
};
// AO-2.5RT - HE
// 126 in RBK-500
class rhs_ammo_sub_ao25: rhs_ammo_sub_ao1
{
	hit 							= 20;
	indirectHit 					= 15;
	indirectHitRange 				= 7;
	model							= \a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F;
	//model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ao25;
};
// OFAB-50 - HE Frag
// 10 in RBK-500
class rhs_ammo_sub_ofab50: rhs_ammo_sub_ao1
{
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ofab50ud;
	hit 							= 400;
	indirectHit 					= 215;
	indirectHitRange 				= 12;
};
// SPBE-D - Guided HEAT rounds
// 30 deg sensor, 12 in RBK-500
// maybe another parachute stage should be added?
	class M_Mo_155mm_AT;
class rhs_ammo_sub_spbed: M_Mo_155mm_AT
{
	HEAT_MACRO(rhs_ammo_sub_spbed_penetrator)
	hit						= 60;
	indirectHitRange		= 5;

	autoSeekTarget			= true;
	lockSeekRadius			= 450;
	weaponLockSystem		= CM_Lock_IR;

	missileLockCone			= 30;
	missileKeepLockedCone	= 60;
	missileLockMaxDistance 	= 400;
	missileLockMinDistance	= 10;
	missileLockMaxSpeed		= 35;

	weaponType 				= "missileAA";
	class Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
					class VisualSensorComponent : SensorTemplateVisual
					{
						SENS_RANGES_WVR(2000,2000)
						maxTrackableSpeed = 15;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						nightRangeCoef = 1; // full range at night; if undef
					};
				class IRSensorComponent : SensorTemplateIR
				{
					SENS_RANGES_WVR(500,500)
					maxTrackableSpeed		= 15;
					angleRangeHorizontal	= 30;
					angleRangeVertical		= 30;
				};
			};
		};
	};
};
class rhs_ammo_sub_spbed_penetrator: rhs_ammo_cluster_penetrator
{
	hit						= 130;
	submunitionConeType[]	= {"randomcenter", 12};
	RHA(352,1000)
};
// PTAB-1M - Dumb HEAT
// 252 in RBK-500
// They are intended to strike the top armour of armoured fighting vehicles, which is often thinner than frontal or side armour, and are capable of penetrating a minimum 200 mm of rolled homogeneous armour (RHA).
class rhs_ammo_sub_ptab1m: rhs_ammo_sub_ptab25m
{
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ptab1m;
	HEAT_MACRO(rhs_ammo_sub_ptab1m_penetrator)
	hit 							= 60;
	indirectHitRange 				= 5;
};
class rhs_ammo_sub_ptab1m_penetrator: rhs_ammo_cluster_penetrator
{
	hit						= 130;
	submunitionConeType[]	= {"randomcenter", 5};
	RHA(268,1000)
};
class rhs_ammo_ptab1m_uxo_deploy: UXO_deploy_BombCluster_base_F
{
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ptab1m;
	submunitionAmmo[] 				= {"rhs_ammo_uxo_ptab1m_1_deploy",0.34,"rhs_ammo_uxo_ptab1m_2_deploy",0.33,"rhs_ammo_uxo_ptab1m_3_deploy",0.33};
};
class rhs_ammo_uxo_ptab1m_1_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_1;
	submunitionAmmo	= rhs_ammo_uxo_ptab1m_1;
};
class rhs_ammo_uxo_ptab1m_1: APERSMine_Range_Ammo
{
	hit								= 60;
	indirectHit						= 8;
	indirectHitRange				= 5;
	icon							= "iconExplosiveUXO";
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_1;
	mineModelDisabled				= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3;
	defaultMagazine					= "";
	mineTrigger						= UXOTrigger1;
	mineCanBeReactivated			= 0;
	mineFloating					= 1e7;
};
class rhs_ammo_uxo_ptab1m_2_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_2;
	submunitionAmmo	= rhs_ammo_uxo_ptab1m_2;
};
class rhs_ammo_uxo_ptab1m_2: rhs_ammo_uxo_ptab1m_1
{
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_2;
	mineTrigger						= UXOTrigger2;
};
class rhs_ammo_uxo_ptab1m_3_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3;
	submunitionAmmo	= rhs_ammo_uxo_ptab1m_3;
};
class rhs_ammo_uxo_ptab1m_3: rhs_ammo_uxo_ptab1m_1
{
	model							= \rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3;
	mineTrigger						= UXOTrigger3;
};
// KMGU-2 submunition
class rhs_ammo_kmgu2_ao25: rhs_ammo_rbk250_ao1
{
	model							= \rhsafrf\addons\rhs_airweapons\rhs_m_ao25_x12_fly;
	proxyShape						= \rhsafrf\addons\rhs_airweapons\rhs_m_ao25_x12;
	submunitionAmmo[] 				= {"rhs_ammo_sub_ao25",1};
	// dividing amount of bomblets by 2 due to engine handling
	submunitionConeType[] 			= {"poissondisccenter",12};
	triggerTime						= 2.5;
	submunitionConeAngle 			= 14;
	triggerSpeedCoef[] 				= {0.8,1.1};
};
class rhs_ammo_kmgu2_ptab1m: rhs_ammo_kmgu2_ao25
{
	submunitionConeAngle 			= 8;
	submunitionAmmo[] 				= {"rhs_ammo_sub_ptab1m",0.94,"rhs_ammo_ptab1m_uxo_deploy",0.06};
	submunitionConeType[] 			= {"random",12};
};
class rhs_ammo_kmgu2_pfm1: rhs_ammo_kmgu2_ao25
{
	submunitionAmmo[] 				= {"rhs_ammo_pfm1_deploy",1};
	submunitionConeType[] 			= {"random",40};
};
class rhs_ammo_kmgu2_ptm1: rhs_ammo_kmgu2_ao25
{
	submunitionAmmo[] 				= {"rhs_ammo_ptm1_deploy",1};
	submunitionConeType[] 			= {"random",12};
};
class rhs_ammo_pfm1_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_m_pfm1;
	submunitionAmmo	= rhs_ammo_pfm1;
};
class rhs_ammo_ptm1_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_m_ptm1;
	submunitionAmmo	= rhs_ammo_ptm1;
};
class rhs_ammo_ptm3_deploy: ShotDeployBase
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_m_ptm1;
	submunitionAmmo	= rhs_ammo_ptm3;
};
class rhs_ammo_pfm1: APERSMine_Range_Ammo
{
	hit						= 9;
	indirectHit				= 8;
	indirectHitRange		= 2;
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d;
	mineModelDisabled		= \rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d;

	defaultMagazine			= "rhs_mag_mine_pfm1";

	cost					= 200;
	mineInconspicuousness	= 60;
	mineTrigger				= RangeTriggerShort;
	mineFloating			= 1e7;
};
class rhs_ammo_ptm1: ATMine_Range_Ammo
{
	hit						= 2000;
	indirectHit				= 1250;
	indirectHitRange		= 1;
	model					= \rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d;
	mineModelDisabled		= \rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d;
	defaultMagazine			= "rhs_mag_mine_ptm1";
	mineTrigger				= "rhs_tm62Trigger";
	mineFloating			= 1e7;
};
class rhs_ammo_ptm3: rhs_ammo_ptm1
{
	hit						= 3000;
	indirectHit				= 1250;
	indirectHitRange		= 1;
	//defaultMagazine			= "rhs_mag_mine_ptm3";
};


// ptb 1150 fuel tank, needs to be adjusted
class rhs_ammo_ptb1150 : rhs_ammo_fab250
{
	model			= \rhsafrf\addons\rhs_airweapons\rhs_m_ptb1150;
	proxyShape		= \rhsafrf\addons\rhs_airweapons\rhs_m_ptb1150;
	sideAirFriction	= -1;
	hit				= 50;
	indirectHit		= 10;
	weaponType		= "special";
	explosive		= 0;
};

class rhs_ammo_ptb1500 : MissileBase
{
	simulation					= "shotMissile";
	maverickWeaponIndexOffset	= 10;
	hit							= 0;
	indirectHit					= 0;
	indirectHitRange			= 0;
	thrustTime					= 0;
	thrust						= 0;
	maxspeed					= 0;
	timetolive					= 0;
	maneuvrability				= 0;
	model						= "\A3\Weapons_F\empty.p3d";
	proxyShape					= "\A3\Weapons_F\empty.p3d";
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