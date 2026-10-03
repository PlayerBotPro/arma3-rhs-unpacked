
class R_230mm_HE;
class R_230mm_fly;
class Mo_cluster_AP;
// 9M22U
// Масса головной части без взрывателя – 18,4 кг
// Количество осколков:
//- заданного дробления (массой 2,4 г) – 1640 шт
//- от корпуса (средней массой 2,9 кг) – 2280 шт

class rhs_ammo_m21OF_HE: R_230mm_HE
{
	submunitionAmmo		= "rhs_m21OF_fly";
	model 				= "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF";
	proxyShape 			= "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF_in";

	CfgAmmo_CamShakeExplode(122,30);
	CfgAmmo_CamShakeHit(122);
	CfgAmmo_CamShakeFire(122);
	CfgAmmo_CamShakePlayerFire(2);
};
class rhs_m21OF_fly: R_230mm_fly
{
	model 				= "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF_fly";
	hit					= 900;
	indirectHit			= 500;
	indirectHitRange	= 25;
	audibleFire			= 64;

	CfgAmmo_CamShakeExplode(122,30);
	CfgAmmo_CamShakeHit(122);
	CfgAmmo_CamShakeFire(122);
	CfgAmmo_CamShakePlayerFire(2);
};
// 9M28F
// Масса головной части 9Н55 – 21 кг
// Количество осколков:
//- готовых (массой 5,5 г) – 1000 шт
//- от корпуса (средней массой 3,0 г) – 2440 шт
class rhs_ammo_9m28f: rhs_ammo_m21OF_HE
{
	submunitionAmmo		= "rhs_9m28f_fly";
};
class rhs_9m28f_fly: rhs_m21OF_fly
{
	hit					= 1100;
	indirectHit			= 500;
	indirectHitRange	= 45;
};

// 9M28K
// Количество мин ПТМ-3 – 3 шт.
class rhs_ammo_9m28k: rhs_ammo_m21OF_HE
{
	triggerDistance			= 250;
	triggerSpeedCoef[]		= {0.5,1};
	submunitionConeAngle	= 19;
	submunitionConeType[]	= {"randomcenter",3}; // 644/4
	submunitionAmmo[]		= {"rhs_ammo_ptm3_deploy",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
};

// 9M218
// Количество КОБЭ - 45 шт.
// Бронепробиваемость КОБЭ - 160 мм
class rhs_ammo_9m218: rhs_ammo_m21OF_HE
{
	triggerDistance			= 250;
	triggerSpeedCoef[]		= {0.5,1};
	submunitionConeAngle	= 19;
	submunitionConeType[]	= {"randomcenter",45};
	submunitionAmmo[]		= {"rhs_ammo_9m218_submunition",0.93,"Mo_cluster_AP_UXO_deploy",0.07};
};
class rhs_ammo_9m218_submunition: Mo_cluster_AP
{
	HEAT_MACRO(rhs_ammo_9m218_submunition_penetrator)
	model				= \rhsafrf\addons\rhs_airweapons\rhs_m_ptab25m;
	hit					= 50;
	indirectHitRange	= 4;
};
class rhs_ammo_9m218_submunition_penetrator: rhs_ammo_cluster_penetrator
{
	hit						= 130;
	submunitionConeType[]	= {"randomcenter", 5};
	RHA(120,1000)
};

// 9M521
// Масса головной части 9Н55 – 21 кг
// Количество осколков:
//- готовых осколков массой 5,5 г - 1000 шт.
//- осколков корпуса средней массой 3,0 г - 2440 шт.
class rhs_ammo_9m521: rhs_ammo_m21OF_HE
{
	submunitionAmmo		= "rhs_9m521_fly";
};
class rhs_9m521_fly: rhs_m21OF_fly
{
	hit					= 1100;
	indirectHit			= 500;
	indirectHitRange	= 35;
};

// 9M522
// Масса головной части 9Н55 – 25 кг
// Количество осколков:
//- готовых осколков массой 5,5 г - 690 шт.
//- готовых осколков массой 0,78 г - 1800 шт.
//- осколков корпуса средней массой 7,5 г - 1210 шт.
class rhs_ammo_9m522: rhs_ammo_m21OF_HE
{
	submunitionAmmo		= "rhs_9m2522_fly";
};
class rhs_9m2522_fly: rhs_m21OF_fly
{
	hit					= 1400;
	indirectHit			= 800;
	indirectHitRange	= 45;
};

class RocketBase;
class rhs_ammo_rpgShell_base : RocketBase
{
	model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\og9_projectile";

	hit = 85;
	indirectHit = 45;
	indirectHitRange = 6;
	cost = 250;

	typicalspeed = 700;
	explosive = 0.8;

	maxSpeed = 700;

	airfriction		= 0.45;
	sideAirFriction	= 0.01;
	initTime		= 0.15;
	fuseDistance	= 12;
	thrustTime		= 0.35;
	thrust			= 1400;

	timeToLive			= 8;
	whistleOnFire		= 1;
	whistleDist			= 14;
	tracerScale			= 2;
	tracerStartTime		= 0.1;
	tracerEndTime		= 2.3;
	effectsmissileinit	= "";
	CraterEffects		= "ATRocketCrater";
	explosionEffects	= "ATRocketExplosion";

	soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
};

class rhs_ammo_og9v : rhs_ammo_rpgShell_base
{
	AIAmmoUsageFlags	= "64+128+256";
	thrustTime			=0;
	thrust				=0;
	airfriction			= 0.074;
	//airfriction		= -0.00034;
	sideAirFriction		= 0.5;

	smokeTrail			= 2;
	whistleDist			= 2;
	CraterEffects		= "HEShellCrater";
	CraterWaterEffects	= "ImpactEffectsWaterHE";
	ExplosionEffects	= "HEShellExplosion";
	effectsMissile		= "missile3";
	effectsmissileinit	= "RocketBackEffectsStaticRPG";

	warheadName		= HE;
};
class rhs_ammo_og9vm : rhs_ammo_og9v
{
	hit = 95;
	indirectHit = 55;
};

class rhs_ammo_pg9v : rhs_ammo_rpgShell_base
{
	model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\pg9_projectile";
	hit					= 205;
	indirectHit			= 20;
	indirectHitRange	= 4.2;

	cost				= 200;
	aiAmmoUsageFlags	= "128+512";

	smokeTrail			= 2;
	whistleDist			= 2;
	effectsMissile		= "missile3";
	effectsmissileinit	= "RocketBackEffectsStaticRPG";

	warheadName		= HEAT;
	HEAT_MACRO(rhs_ammo_pg9v_penetrator)
};

class rhs_ammo_pg9v_penetrator : rhs_ammo_base_penetrator
{
	hit = 220;
	RHA(300, 1000)
};

class rhs_ammo_pg9n : rhs_ammo_pg9v
{
	warheadName		= TandemHEAT;
	HEAT_MACRO(rhs_ammo_pg9n_penetrator)
};

class rhs_ammo_pg9n_penetrator : rhs_ammo_base_penetrator
{
	hit = 230;
	RHA(400, 1000)
};

class rhs_ammo_pg9vnt : rhs_ammo_pg9v
{
	warheadName					= TandemHEAT;
	submunitionAmmo				= "rhs_ammo_pg9n_penetrator";
};

class rhs_ammo_pg9vnt_penetrator : rhs_ammo_base_penetrator
{
	hit = 280;
	RHA(550, 1000)
};

class rhs_ammo_rpg15Shell_base : ShellBase
{
	//simulation= "shotSubmunitions";
	simulation = shotShell;
	hit = 85;
	indirectHit = 45;
	indirectHitRange = 5;
	typicalspeed = 350;
	explosive = 0.8;
	deflecting = 2;
	cost = 250;
	tracerScale				= 1;
	tracerStartTime			= 0.001;
	tracerEndTime			= 12;
	initTime = -1;
	model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\pg9_shell";
	airfriction = -0.00017;
	soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
	soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
	soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
	soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
	soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
	multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
	CraterEffects		= "ATRocketCrater";
	explosionEffects	= "ATRocketExplosion";
};

class rhs_ammo_og15v : rhs_ammo_rpg15Shell_base
{
	AIAmmoUsageFlags = "64+128+256";
	airfriction = -0.00011934;
	model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\og9_shell";

	CraterEffects		= "HEShellCrater";
	CraterWaterEffects	= "ImpactEffectsWaterHE";
	ExplosionEffects	= "HEShellExplosion";
	warheadName		= HE;
};
class rhs_ammo_og15v_rocket : rhs_ammo_og9v
{
	effectsmissileinit = "";
};


class rhs_ammo_pg15v : rhs_ammo_rpg15Shell_base
{
	hit = 205;
	indirectHit = 20;
	indirectHitRange = 4.2;
	airfriction = -0.00084;

	warheadName		= HEAT;
	HEAT_MACRO(rhs_ammo_pg15v_penetrator)
};
class rhs_ammo_pg15v_rocket : rhs_ammo_pg9v
{
	hit = 205;
	indirectHit = 20;
	indirectHitRange = 4.2;
	typicalspeed = 800;
	cost = 500;
	effectsmissileinit = "";
};

class rhs_ammo_pg15v_penetrator : rhs_ammo_base_penetrator
{
	hit = 230;
	RHA(400, 1000)
};