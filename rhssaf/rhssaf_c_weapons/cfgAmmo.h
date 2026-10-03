class CfgAmmo
{
	class BulletBase;
	class rhs_ammo_base_penetrator;

	///! Pistol ammo
	class B_9x21_Ball;
	class rhs_ammo_9x17 : B_9x21_Ball
	{
		hit = 5.07;
		typicalSpeed = 272;
		airFriction = -0.0017671455;
		caliber = 0.838;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class B_556x45_Ball;
	class rhs_B_762x39_Ball;
	///! Rifle bullets
	class rhssaf_ammo_762x39_m82_api: rhs_B_762x39_Ball
	{
		cartridge		= "RHS_Cartridge_762x39";
		hit				= 8.8;
		typicalSpeed	= 718;
		airFriction		= -0.0016519;
		caliber = 0.913;
		deflecting		= 15;
		visibleFire		= 3;
		audibleFire		= 6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime			= 0.151;
		tracerEndTime			= 1;
	};
	class rhssaf_ammo_556x45_EPR: B_556x45_Ball // M855A1
	{
		hit = 8.114581;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		typicalSpeed = 905.256;
		airFriction = -0.0011543788;
		caliber = 0.855;
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 7;
	};
	class rhssaf_ammo_556x45_EPR_Tracer: rhssaf_ammo_556x45_EPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};
	class rhssaf_ammo_556x45_SOST: B_556x45_Ball // MK318
	{
		hit = 9.038702;
		typicalSpeed = 857.0976;
		airFriction = -0.0012817576;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 0.755;
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 5.5;
	};
	class rhssaf_ammo_556x45_SPR: B_556x45_Ball // mk262
	{
		hit = 11.5702505;
		typicalSpeed = 868.68;
		airFriction = -0.0010867938;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 0.615;
		deflecting = 16;
		visibleFire = 2.5;
		audibleFire = 5;
	};
	class B_556x45_Ball_Tracer_Red;
	class rhssaf_ammo_556x45_Ball_Tracer_Dim: B_556x45_Ball_Tracer_Red
	{
		nvgOnly = 1;
	};
	class rhs_ammo_792x57_Ball: BulletBase
	{
		//Ball
		//9.5 g
		hit = 11.55;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;

		//4mm at 300m
		caliber = 0.45;

		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1.2;
		tracerStartTime = 0.045; // seconds
		tracerEndTime = 1.5; // seconds

		airFriction = -0.0006814;
		typicalSpeed = 838;
	};
	///Rifle grenades
	class GrenadeBase;
	class rhssaf_ammo_ttm_m60: GrenadeBase
	{
		simulation = "shotShell";
		model = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\ttm_m60\rhssaf_ttm_m60_fly";
		hit = 100;
		indirectHit = 25;
		indirectHitRange = 15;
		visibleFire = 16;
		audibleFire = 18;
		visibleFireTime = 3;
		explosive = 1;
		cost = 500;
		deflecting = 5;
		airFriction = -0.001500;
		fuseDistance = 30;
		whistleDist = 5;
    };
	class rhssaf_ammo_tkm_m60: GrenadeBase
	{
		simulation = "shotShell";
		model = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\tkm_m60\rhssaf_tkm_m60_fly";
		hit = 150;
		indirectHit = 25;
		indirectHitRange = 25;
		visibleFire = 16;
		audibleFire = 20;
		visibleFireTime = 3;
		explosive = 1;
		cost = 530;
		deflecting = 5;
		airFriction = -0.001500;
		fuseDistance = 30;
		whistleDist = 5;
    };

	///Rockets
	class rhs_ammo_m80_penetrator : rhs_ammo_base_penetrator
	{
		RHA(300,1000)
	};
	class rhs_rpg26_rocket;
	class rhs_ammo_m80_rocket : rhs_rpg26_rocket
	{
		warheadName = HEAT;
		HEAT_MACRO(rhs_ammo_m80_penetrator)

		airFriction=0.26;
		sideAirFriction = 0.001;
		hit = 180;
		indirectHit = 21;
		maxSpeed = 190;
		timeToLive = 4;
	};
	///Hand grenades
	class GrenadeHand;
	class rhssaf_ammo_br_m75: GrenadeHand
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\br_m75\rhssaf_br_m75_throw";
		explosionTime = 4;
	};
	class rhssaf_ammo_br_m84: GrenadeHand
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\br_m84\rhssaf_br_m84_throw";
		explosionTime = 4;
	};

	class SmokeShell;
	class rhssaf_ammo_brd_m83_white: SmokeShell
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_throw";
	};
	class rhssaf_ammo_brd_m83_yellow: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {0.9883,0.8606,0.0719,1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_y_throw";
	};
	class rhssaf_ammo_brd_m83_green: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {0.2125,0.6258,0.4891,1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_g_throw";
	};
	class rhssaf_ammo_brd_m83_red: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {0.8438,0.1383,0.1353,1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_r_throw";
	};
	class rhssaf_ammo_brd_m83_blue: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {0.2549,0.4117,1.0000,1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_b_throw";
	};
	class rhssaf_ammo_brd_m83_orange: rhssaf_ammo_brd_m83_white
	{
		smokeColor[] = {1.0000,0.6470,0.0000,1};
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_o_throw";
	};
	class rhssaf_ammo_rshb_p98: GrenadeHand
	{
		model				= "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\rshb_p98\rhssaf_rshb_p98_throw";
		hit					= 0.1;
		indirectHit			= 0.1;
		indirectHitRange	= 15;
		ExplosionEffects	= "RHSUSF_flashbang_15";
		craterEffects		= "RHSUSF_flashbang_Crater";
		explosionTime		= 1.5;
		cost				= 10;
	};
	class rhssaf_ammo_brz_m88: SmokeShell
	{
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		cost = 150;
		timeToLive = 25;
		effectsSmoke = "RHS_Incendenary_Grenade";
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brz_m88\rhssaf_brz_m88_throw";
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1",0.12589253,1,16.5};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2",0.12589253,1,16.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1",0.5,"SmokeShellSoundLoop2",0.5};
		aiAmmoUsageFlags = "1 + 2 + 64";
	};


	// Throw object
	class rhssaf_ammo_brk_m79 : GrenadeHand
	{
		model 					= "\rhssaf\addons\rhssaf_m_explosives\grenades\brk_m79\rhssaf_brk_m79";
		rhs_submunition			= "rhssaf_ammo_brk_m79_fly";
		rhs_submunition_uxo		= "rhssaf_ammo_brk_m79_uxo";
		rhs_fuseTime[]			= {0.3,0.35,0.4};
		simulationStep			= 0.001;
		explosionTime			= -1;
		timeToLive				= 5;
		explosionEffects		= "";
		CraterEffects			= "";
		SoundSetExplosion[]		= {};
		multiSoundHit[]			= {};
		hit						= 0.1;
		indirectHit				= 0;
	};
	class rhssaf_ammo_brk_m79_uxo : SmokeShell
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brk_m79\rhssaf_brk_m79";
		smokeColor[]			= {0,0,0,0};
		grenadeFireSound[]		= {};
		grenadeBurningSound[]	= {};
	};
	class rhssaf_ammo_brk_m79_fly : GrenadeHand
	{
		rhs_submunition		= "rhssaf_ammo_brk_m79_explosion";
		hit					= 180;
		indirectHit			= 12;
		indirectHitRange	= 3;

		model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brk_m79\brk_m79_throw.p3d";
		explosionTime		= -1;
		SoundSetExplosion[]	= {};
	};
	// Explosion
	class rhssaf_ammo_brk_m79_explosion : BulletBase
	{
		hit						= 140;
		indirectHit				= 8;
		indirectHitRange		= 3;
		simulationStep			= 0.00001;
		simulation				= shotShell;
		deflecting				= 0;
		explosive				= 1;
		timeToLive				= 1;
		explosionTime			= 0;
		explosionSoundEffect	= "DefaultExplosion";
		CraterEffects			= "GrenadeCrater";
		explosionEffects		= "GrenadeExplosion";
		HEAT_MACRO(rhssaf_ammo_brk_m79_penetrator)
	};
	class rhs_ammo_3bk12_penetrator;
	class rhssaf_ammo_brk_m79_penetrator : rhs_ammo_3bk12_penetrator
	{
		// 220mm is under 30 degrees
		// under 0 deg it is effectively 440mm
		RHA(440, 1000)
	};

	//60mm mortar
	class Sh_82mm_AMOS;
	class rhssaf_mortar_M73_HE: Sh_82mm_AMOS
	{
		hit = 100;
		indirectHit = 30;
		indirectHitRange = 10;
	};

	///! Mines and explosives
	class MineBase;
	class DirectionalBombBase;
	class PipeBombBase;
	class rhssaf_mine_pma3_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 3;
		indirectHit = 40;
		indirectHitRange = 0.1;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_d";
		icon = "iconExplosiveAP";

		defaultMagazine = "rhssaf_mine_pma3_mag";

		soundHit[] = {"A3\Sounds_F\weapons\mines\mine_debris_2",3.1622777,1,2000};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 3;
		mineTrigger = "RangeTriggerShort";
	};
	class rhssaf_mine_tma4_ammo: MineBase
	{
		AIAmmoUsageFlags = "16";
		hit = 2200;
		indirectHit = 1250;
		indirectHitRange = 2;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_d";
		icon = "iconExplosiveAT";
		defaultMagazine = "rhssaf_mine_tma4_mag";
		SoundSetExplosion[] = {"ATmine_Exp_SoundSet","ATmine_Tail_SoundSet","Explosion_Debris_SoundSet"};
		explosionEffects = "ATMineExplosion";
		CraterEffects = "ATMineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "rhssaf_tma4Trigger";
		deleteParentWhenTriggered     = false;
    submunitionAmmo[]       = {"rhssaf_mine_tma4_penetrator", 1};
    submunitionConeAngle[]      = {0, 4};
    submunitionConeAngleHorizontal  = 720;
    submunitionAutoleveling     = 1;
    submunitionConeType[]     = {"randomupcone", 1};
    submunitionInitSpeed      = 100;
	};
	class rhssaf_mine_tma4_penetrator: rhs_ammo_base_penetrator
  {
    hit = 240;
    typicalspeed = 100;
    RHA(200,100)
	};
	class rhssaf_mine_mrud_a_ammo: DirectionalBombBase
	{
		AIAmmoUsageFlags = "16";
		hit = 15;
		indirectHit = 15;
		indirectHitRange = 10;
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
		icon = "iconExplosiveAP";
		defaultMagazine = "rhssaf_mine_mrud_a_mag";
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",3.1622777,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1",0.56234133,1,30};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,30};
		soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine",3.1622777,1,1500};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "rhssaf_mrud_a_Trigger";
	};
	class rhssaf_mine_mrud_b_ammo: rhssaf_mine_mrud_a_ammo
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_e";
		defaultMagazine = "rhssaf_mine_mrud_b_mag";
		mineTrigger = "rhssaf_mrud_b_Trigger";
	};
	class rhssaf_mine_mrud_c_ammo: rhssaf_mine_mrud_a_ammo
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_c_e";
		defaultMagazine = "rhssaf_mine_mrud_c_mag";
		mineTrigger = "rhssaf_mrud_c_Trigger";
	};
	class rhssaf_mine_mrud_d_ammo: rhssaf_mine_mrud_a_ammo
	{
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_d_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_d";
		icon = "iconExplosiveAPDirectional";
		defaultMagazine = "rhssaf_mine_mrud_d_mag";
		cost = 400;
		mineTrigger = "RemoteTrigger";
	};
	class rhssaf_tm100_ammo: PipeBombBase
	{
		hit = 200;
		indirectHit = 200;
		indirectHitRange = 1;
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_d";
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",3.1622777,1,1500};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",1.4125376,1,20};
		SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		defaultMagazine = "rhssaf_tm100_mag";
		ExplosionEffects = "MineNondirectionalExplosionSmall";
		CraterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
	};
	class rhssaf_tm100_ammo_scripted: rhssaf_tm100_ammo{};
	class rhssaf_tm200_ammo: rhssaf_tm100_ammo
	{
		hit = 400;
		indirectHit = 400;
		indirectHitRange = 3;
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_d";
		defaultMagazine = "rhssaf_tm200_mag";
	};
	class rhssaf_tm200_ammo_scripted: rhssaf_tm200_ammo{};
	class rhssaf_tm500_ammo: rhssaf_tm100_ammo
	{
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 5;
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_e";
		mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_d";
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		defaultMagazine = "rhssaf_tm500_mag";
		SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};
	class rhssaf_tm500_ammo_scripted: rhssaf_tm500_ammo{};
};
class CfgMineTriggers
{
	class WireTrigger;
	class rhssaf_tma4Trigger: WireTrigger
	{
		mineTriggerRange = 0;
		mineTriggerMass = 200;
		mineMagnetic = 0;
		mineWireStart[] = {0,0,0};
		mineWireEnd[] = {0,0.3,0};
		restrictZoneCenter[] = {0,0,0};
		restrictZoneRadius = 5;
	};
	class rhssaf_mrud_a_Trigger: WireTrigger
	{
		mineTriggerRange = 1;
		mineTriggerActivationRange = 2;
		mineWireStart[] = {0,0.1,0};
		mineWireEnd[] = {0,0.1,3};
		timerStep = 30;
		mineDelay = 0;
	};
	class rhssaf_mrud_b_Trigger: rhssaf_mrud_a_Trigger
	{
		mineWireStart[] = {0,0.1,0};
		mineWireEnd[] = {0,0.1,6};
	};
	class rhssaf_mrud_c_Trigger: rhssaf_mrud_a_Trigger
	{
		mineWireStart[] = {0,0.1,0};
		mineWireEnd[] = {0,0.1,10};
	};
};
