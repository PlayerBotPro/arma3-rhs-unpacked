
class Sh_125mm_APFSDS;
class Sh_125mm_HE;
class F_40mm_White;
class Laserbeam;
class rhs_Laserbeam : Laserbeam
{
	hit = 0;
	cost = 1000000;
};
class rhs_laserbeam_fcs : BulletBase
{
	simulation = "shotSubmunitions";
	hit = 145;
	indirectHit = 1;
	indirectHitRange = 0;
	cost = 1;
	airFriction = -0.00000001;
	triggerTime = 0.001;
	triggerSpeedCoef = 0.001;
	submunitionConeAngle = 0;
	submunitionCount = 1;
	submunitionAmmo = "rhs_fakeAmmo";
	airLock = 1;
	aiAmmoUsageFlags = "64+32+128+256+512";
};
class rhs_fakeAmmo : BulletBase
{
	model			= "\A3\Weapons_f\empty";
	tracerScale		= 0;
	tracerStartTime	= 0;
	tracerEndTime	= 0;
	whistleOnFire	= 0;
	whistleDist		= 0;

	muzzleEffect		= "";

	explosive			= 0;
	caliber				= 0;

	hit					= 0;
	indirectHit			= 0;
	indirectHitRange	= 0;

	typicalspeed		= 1;
	timeToLive			= 0.002;
	simulationStep		= 0.001;
};
class rhs_ammo_spall: BulletBase
{
	RHA(30,200)
	hit							= 20;
	indirectHit					= 0;
	indirectHitRange			= 0.15;
	typicalSpeed				= 50;
	airfriction					= -0.00001;
	deflecting					= 90;
	deflectionSlowDown			= 2;
	deflectionDirDistribution	= 1;
	penetrationDirDistribution	= 1;
	timeToLive					= 0.5;
};
class rhs_ammo_thermobaric_wave: rhs_ammo_spall
{
	RHA(20,200)
	hit					= 5;
	indirectHit			= 20;
	indirectHitRange	= 2.15;
	typicalSpeed		= 200;
	explosive			= 0.8;
	timeToLive 			= 0.3;
	ExplosionEffects 	= "";
	CraterEffects 		= "";
	deflectionSlowDown	= 0.2;
};
class rhs_ammo_he_fragments: BulletBase
{
	RHA(20,1500)
	hit					= 40;
	indirectHit			= 3;
	indirectHitRange	= 1.15;
	typicalSpeed		= 1500;
	deflecting 			= 9;
	timeToLive 			= 0.5;
	warheadName 		= "HE";
};

class rhs_ammo_br_base : Sh_125mm_APFSDS
{
	hit = 320;
	indirectHit = 20;
	indirectHitRange = 1;
	typicalSpeed = 895;
	cost = 500;
	deflecting = 15;
	model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
};

class rhs_ammo_bm_base : Sh_125mm_APFSDS
{
	cost = 500;

	hit					= 250;
	indirectHit			= 0;
	indirectHitRange	= 0;
	typicalspeed		= 1430;
	explosive			= 0;
	deflecting			= 10;
	caliber				= 33.33;

	timeToLive		= 15;
	whistleOnFire	= 1;
	whistleDist		= 14;

	muzzleEffect		= "";

	model				= "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
};
class rhs_ammo_3bm_base : rhs_ammo_bm_base
{
	indirectHit			= 40;
	indirectHitRange	= 0.5;
	typicalSpeed		= 1700;
	simulationStep		= 0.01;
	effectFly 			= "RHS_125mm_Sabot_Eject";
};

class rhs_ammo_base_penetrator : rhs_ammo_3bm_base
{
	RHA(100, 1000)
	warheadName					= HEAT;
	hit							= 290;
	indirectHit					= 0;
	indirectHitRange			= 0;
	explosive					= 0;
	typicalSpeed				= 1000;
	deflecting					= 0;
	deflectionDirDistribution	= 0;
	penetrationDirDistribution	= 0;

	//dah, key to fix destruction of few vehicles in row was combining short timeToLive with correct simulationStep - previously timeToLive was below simulationStep...
	//'jet stream' travels ~3m after hit. lower values caused problems on greater distances (?)
	timeToLive		= 0.010; // 10 meter max potential life, in practice this goes down to 5m
	simulationStep	= 0.0005;
	airFriction		= -0.5;
	whistleOnFire	= 0;
	whistleDist		= 0;

	effectFly 		= "";

	// Spall handling
	submunitionConeType[]		= {"randomcenter", 30};
	submunitionAmmo				= rhs_ammo_spall;
	submunitionDirectionType	= SubmunitionModelDirection;
	submunitionInitialOffset[]	= {0,0,-0.4};
	submunitionParentSpeedCoef	= 0;
	submunitionInitSpeed		= 200;
	deleteParentWhenTriggered	= false;
	triggerTime					= 0.003;

	model			= "\A3\Weapons_f\empty";

	// Need dummy soundset - otherwise hitXXX sounds would be played
	SoundSetExplosion[] = {Silence_SoundSet};
};

class rhs_ammo_cluster_penetrator : Sh_125mm_APFSDS
{
	RHA(100, 1000)
	warheadName			= HEAT;
	hit					= 150;
	indirectHit			= 0;
	indirectHitRange	= 0;
	explosive			= 0;
	deflecting			= 0;
	typicalSpeed		= 1000;

	simulationStep	= 0.0005;
	airFriction		= -0.5;
	whistleOnFire	= 0;
	whistleDist		= 0;

	// Spall handling
	submunitionConeType[]		= {"randomcenter", 4};
	submunitionAmmo				= rhs_ammo_spall;
	submunitionDirectionType	= SubmunitionModelDirection;
	submunitionInitialOffset[]	= {0,0,-0.4};
	submunitionParentSpeedCoef	= 0;
	submunitionInitSpeed		= 200;
	deleteParentWhenTriggered	= false;
	triggerTime					= 0.003;

	model			= "\A3\Weapons_f\empty";
	
	// Need dummy soundset - otherwise hitXXX sounds would be played
	SoundSetExplosion[] = {Silence_SoundSet};
};

class rhs_ammo_ap_penetrator: Sh_125mm_APFSDS
{
	warheadName			= AP;

	model			= "\A3\Weapons_f\empty";

	indirectHit			= 11;
	indirectHitRange	= 0.35;

	timetolive 		= 5;
	simulationStep	= 0.0005;
	airFriction		= -0.08;

	// Spall handling
	submunitionConeType[]		= {"randomcenter", 30};
	submunitionAmmo				= rhs_ammo_spall;
	submunitionDirectionType	= SubmunitionModelDirection;
	submunitionInitialOffset[]	= {0,0,-0.4};
	submunitionParentSpeedCoef	= 0;
	submunitionInitSpeed		= 200;
	deleteParentWhenTriggered	= false;
	triggerTime					= 0.002;
	soundVehiclePlateInt1[] 	= {"rhsafrf\addons\rhs_c_heavyweapons\sounds\Inhit.wav", 4.23872, 1, 100};

	hitArmorInt[] =
	{
		soundVehiclePlateInt1, 1
	};
	hitDefaultInt[] =
	{
		soundVehiclePlateInt1, 1
	};
	hitMetalInt[] =
	{
		soundVehiclePlateInt1, 1
	};
	hitMetalPlateInt[] =
	{
		soundVehiclePlateInt1, 1
	};
	multiSoundHitInt[] =
	{
		soundVehiclePlateInt1, 1
	};
	SoundSetExplosion[] = {};
};

class rhs_ammo_br412 : rhs_ammo_br_base {};

class rhs_ammo_br540 : rhs_ammo_br_base
{
	AP_PENETRATION_MACRO(rhs_ammo_br540_penetrator)
	airFriction = -0.000099;
};
class rhs_ammo_br540_penetrator : rhs_ammo_ap_penetrator
{
	hit = 290;
	typicalSpeed = 600;
	// 140mm at 90 deg at 100m
	// 85mm at 4km
	RHA(150, 600)
};

class rhs_ammo_bm25 : rhs_ammo_bm_base
{
	hit = 520;
	typicalspeed = 1425;
	RHA(350, 1430)
};

class rhs_ammo_bm8 : rhs_ammo_bm_base
{
	hit = 470;
	typicalspeed = 1425;
	RHA(260, 1415)
};

class rhs_ammo_bm4 : rhs_ammo_bm_base
{
	hit = 520;
	typicalspeed = 1650;
	RHA(270, 1655)
};

class rhs_ammo_bm23 : rhs_ammo_bm_base
{
	hit = 645;
	typicalspeed = 1650;
	RHA(300, 1650)
};


class rhs_ammo_3bm9 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm9_penetrator)
};
class rhs_ammo_3bm9_penetrator : rhs_ammo_ap_penetrator
{
	hit = 190;
	typicalSpeed = 1800;
	RHA(245, 1800)
};

class rhs_ammo_3bm12 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm12_penetrator)
};
class rhs_ammo_3bm12_penetrator : rhs_ammo_ap_penetrator
{
	hit = 215;
	typicalSpeed = 1800;
	RHA(280, 1800)
};

class rhs_ammo_3bm15 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm15_penetrator)
};
class rhs_ammo_3bm15_penetrator : rhs_ammo_ap_penetrator
{
	hit = 240;
	typicalSpeed = 1780;
	RHA(310, 1780)
};

class rhs_ammo_3bm17 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm17_penetrator)
};
class rhs_ammo_3bm17_penetrator : rhs_ammo_ap_penetrator
{
	hit = 230;
	typicalSpeed = 1760;
	RHA(290, 1760)
};

class rhs_ammo_3bm22 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm22_penetrator)
};
class rhs_ammo_3bm22_penetrator : rhs_ammo_ap_penetrator
{
	hit = 200;
	typicalSpeed = 1760;
	RHA(380, 1760)
};

class rhs_ammo_3bm26 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm26_penetrator)
};
class rhs_ammo_3bm26_penetrator : rhs_ammo_ap_penetrator
{
	hit = 230;
	typicalSpeed = 1720;
	RHA(410, 1720)
};

class rhs_ammo_3bm29 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm29_penetrator)
};
class rhs_ammo_3bm29_penetrator : rhs_ammo_ap_penetrator
{
	hit = 230;
	RHA(430, 1700)
};

class rhs_ammo_3bm32 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm32_penetrator)
};
class rhs_ammo_3bm32_penetrator : rhs_ammo_ap_penetrator
{
	hit = 230;
	// point blank values
	RHA(540, 1700)
};

class rhs_ammo_3bm42 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm42_penetrator)
};
class rhs_ammo_3bm42_penetrator : rhs_ammo_ap_penetrator
{
	hit = 250;
	RHA(490, 1700)
};

class rhs_ammo_3bm42m : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm42m_penetrator)
	airFriction = -2.50E-05;
};
class rhs_ammo_3bm42m_penetrator : rhs_ammo_ap_penetrator
{
	hit = 270;
	typicalSpeed = 1750;
	RHA(650, 1750)
};

class rhs_ammo_3bm46 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm46_penetrator)
	airFriction = -3.20E-05;
};
class rhs_ammo_3bm46_penetrator : rhs_ammo_ap_penetrator
{
	hit = 300;
	typicalSpeed = 1700;
	RHA(681, 1700)
};
class rhs_ammo_3bm59 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm59_penetrator)
	airFriction = -3.20E-05;
};
class rhs_ammo_3bm59_penetrator : rhs_ammo_ap_penetrator
{
	hit = 300;
	typicalSpeed = 1700;
	// Point blank value
	// ~740 at 2km
	RHA(780, 1700)
};
class rhs_ammo_3bm60 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm60_penetrator)
	airFriction = -3.20E-05;
};
class rhs_ammo_3bm60_penetrator : rhs_ammo_ap_penetrator
{
	hit = 300;
	typicalSpeed = 1700;
	// Point blank value
	// ~660 at 2km
	RHA(690, 1700)
};

class rhs_ammo_3bm69 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm69_penetrator)
	airFriction = -3.20E-05;
};
class rhs_ammo_3bm69_penetrator : rhs_ammo_ap_penetrator
{
	hit = 300;
	typicalSpeed = 2050;
	RHA(960, 1900)
};
class rhs_ammo_3bm70 : rhs_ammo_3bm_base
{
	AP_PENETRATION_MACRO(rhs_ammo_3bm70_penetrator)
	airFriction = -3.20E-05;
};
class rhs_ammo_3bm70_penetrator : rhs_ammo_ap_penetrator
{
	hit = 300;
	typicalSpeed = 2050;
	RHA(890, 1900)
};


class rhs_ammo_bk_base : rhs_ammo_bm_base
{
	warheadName			= HEAT;
	explosive			= 0.4;
	caliber				= 0.5;
	cost				= 260;
	hit					= 200;
	indirectHit			= 15;
	indirectHitRange	= 2;
	typicalspeed		= 900;
	airLock				= 1;
};

class rhs_ammo_bk4 : rhs_ammo_bk_base
{
	typicalspeed = 1000;
};

class rhs_ammo_bk5 : rhs_ammo_bk_base
{
	HEAT_MACRO(rhs_ammo_bk5_penetrator)
};
class rhs_ammo_bk5_penetrator : rhs_ammo_base_penetrator
{
	RHA(380, 1000)
};

class rhs_ammo_bk6m : rhs_ammo_bk_base
{
	HEAT_MACRO(rhs_ammo_bk6m_penetrator)
	airFriction = -0.00029;
};
class rhs_ammo_bk6m_penetrator : rhs_ammo_base_penetrator
{
	RHA(460, 1000)
};


class rhs_ammo_bk13 : rhs_ammo_bk_base
{
	typicalspeed = 726;
	model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	airFriction = -0.0005; // should be -0,00044
	HEAT_MACRO(rhs_ammo_bk13_penetrator)
};
class rhs_ammo_bk13_penetrator : rhs_ammo_base_penetrator
{
	RHA(500, 1000)
};

class rhs_ammo_bk15 : rhs_ammo_bk_base
{
	typicalspeed = 1060;
	HEAT_MACRO(rhs_ammo_3bk12_penetrator)
};
class rhs_ammo_bk15_penetrator : rhs_ammo_base_penetrator
{
	RHA(420, 1000)
};


class rhs_ammo_bk17 : rhs_ammo_bk_base
{
	HEAT_MACRO(rhs_ammo_bk17_penetrator)
};
class rhs_ammo_bk17_penetrator : rhs_ammo_base_penetrator
{
	RHA(620, 1000)
};



class rhs_ammo_3bk_base : rhs_ammo_bk_base
{
	indirectHit			= 20;
	indirectHitRange	= 3.6;
	typicalSpeed		= 905;
	deflecting			= 7;
};

class rhs_ammo_3bk12 : rhs_ammo_3bk_base
{
	hit = 200;
	HEAT_MACRO(rhs_ammo_3bk12_penetrator)
};

class rhs_ammo_3bk12_penetrator : rhs_ammo_base_penetrator
{
	RHA(420, 1000)
};

class rhs_ammo_3bk14 : rhs_ammo_3bk_base
{
	hit = 210;
	HEAT_MACRO(rhs_ammo_3bk14_penetrator)
};

class rhs_ammo_3bk14_penetrator : rhs_ammo_3bk12_penetrator
{
	RHA(450, 1000)
};

class rhs_ammo_3bk18 : rhs_ammo_3bk_base
{
	hit = 210;
	HEAT_MACRO(rhs_ammo_3bk18_penetrator)
};

class rhs_ammo_3bk18_penetrator : rhs_ammo_3bk12_penetrator
{
	RHA(500, 1000)
};
class rhs_ammo_3bk18M : rhs_ammo_3bk_base
{
	hit = 215;
	HEAT_MACRO(rhs_ammo_3bk18m_penetrator)
};
class rhs_ammo_3bk18m_penetrator : rhs_ammo_3bk12_penetrator
{
	RHA(550, 1000)
};

class rhs_ammo_3bk21 : rhs_ammo_3bk_base
{
	hit = 220;
	HEAT_MACRO(rhs_ammo_3bk21_penetrator)
};
class rhs_ammo_3bk21_penetrator : rhs_ammo_3bk12_penetrator
{
	RHA(550, 1000)
};
// 3BK29 (Tandem)
class rhs_ammo_3bk29 : rhs_ammo_3bk_base
{
	hit				= 230;
	typicalSpeed	= 915;
	warheadName		= TandemHEAT;
	HEAT_MACRO(rhs_ammo_3bk29_penetrator)
};
class rhs_ammo_3bk29_penetrator : rhs_ammo_3bk12_penetrator
{
	RHA(800, 1000)
};
// 3BK31 (Tandem)
class rhs_ammo_3bk31 : rhs_ammo_3bk_base
{
	hit				= 235;
	typicalSpeed	= 915;
	warheadName		= TandemHEAT;
	HEAT_MACRO(rhs_ammo_3bk31_penetrator)
};
class rhs_ammo_3bk31_penetrator : rhs_ammo_3bk12_penetrator
{
	warheadName = TandemHEAT;
	RHA(850, 1000)
};

class rhs_ammo_bp_base : rhs_ammo_bk_base
{
	hit = 200;
	indirectHit = 15;
	indirectHitRange = 2;
};

// https://весна-инфо.рф/raznoe/2s3m-akaciya-2s3m-akaciya-modernizirovannaya-samoxodnaya-gaubica.html
class rhs_ammo_bp540 : rhs_ammo_bp_base
{
	hit				= 335;
	typicalSpeed	= 676;
	airfriction 	= -0.000204;
	HEAT_MACRO(rhs_ammo_bp540_penetrator)
};
class rhs_ammo_bp540_penetrator : rhs_ammo_3bk12_penetrator
{
	RHA(250, 1000)
};

class rhs_ammo_of_base : Sh_125mm_HE
{
	explosive = 0.7;
	hit = 150;
	indirectHit = 40;
	indirectHitRange = 8;
	typicalspeed = 750;
	deflecting = 1;
	model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	cost = 300;
	CraterEffects = "ArtyShellCrater";
	ExplosionEffects = "ArtyShellExplosion";
};

class rhs_ammo_of412 : rhs_ammo_of_base {};

class rhs_ammo_of11 : rhs_ammo_of_base
{
	hit = 170;
	indirectHit = 55;
};

class rhs_ammo_of28 : rhs_ammo_of_base
{
	hit = 180;
	indirectHit = 60;
	typicalspeed = 800;
};

class rhs_ammo_of29 : rhs_ammo_of_base
{
	hit = 180;
	indirectHit = 60;
	typicalspeed = 800;
};

class rhs_ammo_3of_base : rhs_ammo_of_base
{
	hit = 200;
	indirectHit = 100;
	indirectHitRange = 15;
	typicalSpeed = 850;
	caliber = 5;
	whistleDist = 60;
	rhs_ammo_airburst = "rhs_ammo_3of_airburst";
};

class rhs_ammo_3of_airburst : ShellBase
{
	explosive = 1;
	typicalSpeed = 100;
	hit = 200;
	indirectHit = 100;
	indirectHitRange = 45;

	explosionEffects = "RHS_Airburst_Explosion";
	explosionSoundEffect = "DefaultExplosion";
	CraterEffects = "";
	CraterWaterEffects = "";
	model = "\A3\Weapons_f\empty";
	timeToLive = 1;
	explosionTime = 0.001;
	soundFly[] = { "", 1, 1 };
	soundEngine[] = { "", 1, 4 };
	airFriction = 0;
};

class rhs_ammo_3of11 : rhs_ammo_3of_base {
	airFriction = -0.0002;
	indirectHit = 70;
	indirectHitRange = 14;
};

class rhs_ammo_3of26 : rhs_ammo_3of_base
{
	airFriction = -0.0002;
};


class rhs_ammo_9m41 : ShellBase
{
	hit = 5;
	indirectHit = 0;
	indirectHitRange = 0;
	explosive = 0;
	ExplosionEffects = "";
	soundHit[] = { "", 0, 1 };
	CraterEffects = "";
	whistleDist = 0;// indirect hit range
};

class rhs_ammo_3UOF17 : rhs_ammo_3of_base
{
	hit = 210;
	indirectHit = 50;
	indirectHitRange = 12;
	typicalSpeed = 250;
	explosive = 0.8;
	cost = 300;
	model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
	airFriction = -0.00001;
	simulationStep = 0.01;
	CraterEffects = "ArtyShellCrater";
	ExplosionEffects = "ArtyShellExplosion";
	caliber = 6;
	whistleDist = 40;
	timeToLive = 35;
};

class rhs_ammo_3UOF19 : rhs_ammo_3UOF17
{
	hit = 180; // lighter round compared to the 3UOF17, built for fragmentation
	indirectHit = 40;
	indirectHitRange = 20;
	typicalSpeed = 355;
	explosive = 1.2;
	timeToLive = 35;
};

class rhs_ammo_3UOF191 : rhs_ammo_3UOF19
{
	simulation				= shotSubmunitions;
	submunitionAmmo			= "rhs_ammo_3UOF191_airburst";
	submunitionConeType[]	= {"poissondisc", 1};
	submunitionConeAngle	= 1;
	triggerDistance			= 15; // it's 3d distance, not ATL - that's why it's 15 instead of i.e. 3m
	weaponType				= "cannon";
};
class rhs_ammo_3UOF191_airburst : rhs_ammo_3UOF19
{
	indirectHitRange = 34; // 1.7 times the effective radius

	model			= "\A3\Weapons_f\empty";
	timeToLive		= 1;
	explosionTime	= 0.001;
	simulationStep 	= 0.0005;
	airFriction		= 0;
};

class G_40mm_HE;
//HE
class rhs_ammo_VOG30: G_40mm_HE
{
	hit=40;
	indirectHit = 7;
	//Площадь поражения, м2 - 110m2 ~ 4.174 radius
	indirectHitRange = 4.174;
	dangerRadiusHit = 50;
	suppressionRadiusHit = 20;
	timetolive = 26;
	class CamShakeExplode {
		power = "(30*0.2)";
		duration = "((round (30^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((3 + 30^0.5)*8)";
	};
	class CamShakeHit {
		power = 20;
		duration = "((round (30^0.25))*0.2 max 0.2)";
		frequency = 20;
		distance = 1;
	};
	class CamShakeFire {
		power = "(0^0.25)";
		duration = "((round (0^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((0^0.5)*8)";
	};
	class CamShakePlayerFire {
		power = 0;
		duration = 0.1;
		frequency = 20;
		distance = 1;
	};
	submunitionAmmo="rhs_ammo_VOG30_explosion";
	submunitionConeType[]={"randomcenter",1};
	submunitionConeAngle=0;
	triggerTime=25;
};

class rhs_ammo_VOG30_explosion: G_40mm_HE
{
	explosionTime = 0.001;
};
class rhs_ammo_GPD30: rhs_ammo_VOG30
{
	//http://oruzheika.blogspot.com/2014/05/rossiyskie-granatometnye-vystrely-vog.html
	hit=50;
	indirectHit = 7;
	airFriction = -0.00079; //увеличить максимальную дальность стрельбы на 21,4 %
	//170m
	indirectHitRange = 5.192;
	submunitionAmmo="rhs_ammo_GPD30_explosion";
};
class rhs_ammo_GPD30_explosion: G_40mm_HE
{
	explosionTime = 0.001;
};
class rhs_ammo_VOG17m: rhs_ammo_VOG30
{
	hit=35;
	indirectHit = 4;
	//http://www.megasword.ru/index.php?pg=802
	//Площадь поражения, м2 - 70m2 ~ 3.328 radius
	indirectHitRange = 3.328;
	submunitionAmmo="rhs_ammo_VOG17m_explosion";
};
class rhs_ammo_VOG17m_explosion: G_40mm_HE
{
	explosionTime = 0.001;
};

//arty thing

class Sh_155mm_AMOS;
class rhs_ammo_3WOF27 : Sh_155mm_AMOS
{
	cost = 100;
	artilleryLock = 1;
	hit = 300;
	indirectHit = 105;
	indirectHitRange = 28;
	timetolive = 220;
	airFriction = -0.00008;
};
class rhs_ammo_3WOF27_direct : rhs_ammo_3WOF27
{
	artilleryLock = 0;
};
class rhs_ammo_53OF546 : rhs_ammo_3WOF27
{
};
class rhs_ammo_53OF546_direct : rhs_ammo_53OF546
{
	artilleryLock = 0;
};

//atom?wka
class rhs_ammo_3WB3 : rhs_ammo_3WOF27
{
	cost					= 100;
	artilleryLock			= 1;
	simulation				= shotSubmunitions;
	submunitionAmmo			= "rhs_ammo_3WB3_submunition";
	submunitionConeType[]	= {"poissondisc", 1};
	submunitionConeAngle	= 1;
	simulationStep			= 0.01;
	triggerDistance			= 15;
	aimAboveTarget[]		= {10};
	aimAboveDefault			= 0;
};
class rhs_ammo_3WB3_submunition : rhs_ammo_3WOF27
{
	hit					= 3000;
	indirectHit			= 3000;
	indirectHitRange	= 500;
	explosionTime 		= 0.01;

	ExplosionEffects	= "RHS_NukeExplosion5";
	CraterEffects		= "";
	SoundSetExplosion[] = {"rhs_nuke_explosion_soundset","Shell155mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
	CfgAmmo_CamShakeExplode(500,1615);
	CfgAmmo_CamShakeHit(500);
	CfgAmmo_CamShakeFire(500);
	CfgAmmo_CamShakePlayerFire(2);
};
class rhs_ammo_152_WP : rhs_ammo_3WOF27
{
	hit = 60;
	indirectHit = 50;
	indirectHitRange = 30;
	explosive = 0.8;
	ExplosionEffects = "WPExplosion";
	CraterEffects = "ExploAmmoCrater";
};
class Sh_155mm_AMOS_LG;
class rhs_ammo_3WOF93 : Sh_155mm_AMOS_LG {

};
class Flare_82mm_AMOS_White;
class rhs_ammo_3WS23 : SubmunitionBase
{
	hit					= 8;
	indirectHit			= 0;
	indirectHitRange	= 0;
	explosive			= 0;
	ExplosionEffects	= "";
	soundHit[]			= { "", 0, 1 };
	CraterEffects		= "";
	whistleDist			= 0;
	timeToLive			= 90;
	aimAboveTarget[]	= {400, 450, 500, 550, 600, 650, 700};
	aimAboveDefault		= 3;
	model				= "\A3\weapons_f\ammo\shell";
	submunitionAmmo[]	= {"rhs_ammo_flare_3WS23",1};
};
class rhs_ammo_flare_3WS23: F_40mm_White
{
	triggerTime			= 0;
	brightness			= 5000;
	lightColor[]		= {100, 100, 100, 100};
	timeToLive			= 45;
	intensity			= 50000;
	flareSize			= 70;
	flareMaxDistance	= 3000;
	affectedByWind		= 1;
};
class Smoke_120mm_AMOS_White;
class rhs_ammo_53WD546U : Smoke_120mm_AMOS_White
{
	hit								= 8;
	indirectHit						= 2;
	indirectHitRange				= 4;
	explosive						= 0.9;
	suppressionRadiusHit			= 60;
	ExplosionEffects				= "RHS_D832DUEffect";
	soundHit[]						= { "", 0, 1 };
	CraterEffects					= "";
	whistleDist						= 0;
	triggerDistance					= -1;
	triggerOnImpact					= true;
	deleteParentWhenTriggered		= false;
	submunitionAmmo					= rhs_ammo_d832du_smoke;
	submunitionConeAngle[]			= {120, 220};
	submunitionConeAngleHorizontal	= 720;
	submunitionAutoleveling			= 1;
	submunitionInitSpeed			= 14;
	submunitionParentSpeedCoef  	= 0;
	submunitionInitialOffset[]		= {0,0,-7};
	submunitionConeType[]			= {"randomupcone", 5};
	SoundSetExplosion[]				= {"GrenadeHe_Exp_SoundSet","GrenadeHe_Tail_SoundSet","Explosion_Debris_SoundSet"};
};
//d30

class rhs_ammo_of462 : Sh_155mm_AMOS
{
	cost = 10;
	artilleryLock = 1;
	hit = 150;
	indirectHit = 105;
	indirectHitRange = 28;
	timetolive = 220;
	class CamShakeExplode
	{
		power = "(122*0.2)*10";
		duration = "((round (122^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((30 + 122^0.5))";
	};
	class CamShakeHit
	{
		power = 122 * 10;
		duration = "((round (122^0.25))*0.2 max 0.2)";
		frequency = 20;
		distance = 1;
	};
	class CamShakeFire
	{
		power = "(122^0.25)*10";
		duration = "((round (122^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((122^0.5))";
	};
	aiAmmoUsageFlags = "64+32+128+256";
};
class rhs_ammo_of462_direct : rhs_ammo_of462
{
	artilleryLock = 0;
	airFriction = -0.00012;
};

class rhs_ammo_3of56 : rhs_ammo_of462
{
	hit = 160;
	indirectHit = 50;
	indirectHitRange = 30;
};
class rhs_ammo_3of56_direct : rhs_ammo_3of56
{
	artilleryLock = 0;
	airFriction = -0.00017;
};

class rhs_ammo_3of69m : Sh_155mm_AMOS_LG {};

class rhs_ammo_s463 : SubmunitionBase
{
	hit					= 8;
	indirectHit			= 0;
	indirectHitRange	= 0;
	explosive			= 0;
	ExplosionEffects	= "";
	soundHit[]			= { "", 0, 1 };
	CraterEffects		= "";
	whistleDist			= 0;
	timeToLive			= 90;
	aimAboveTarget[]	= {300, 350, 400, 450, 500, 550, 580};
	aimAboveDefault		= 2;
	model				= "\A3\weapons_f\ammo\shell";
	submunitionAmmo[]	= {"rhs_ammo_flare_s463",1};
};
class rhs_ammo_flare_s463: F_40mm_White
{
	triggerTime			= 0;
	brightness			= 5000;
	lightColor[]		= {100, 100, 100, 100};
	timeToLive			= 30;
	intensity			= 50000;
	flareSize			= 70;
	flareMaxDistance	= 3000;
	affectedByWind		= 1;
};
class rhs_ammo_s463_direct : rhs_ammo_s463
{
	artilleryLock = 1;
	airFriction = -0.00012;
};
class rhs_ammo_d462 : Smoke_120mm_AMOS_White
{
	hit								= 8;
	indirectHit						= 2;
	indirectHitRange				= 4;
	explosive						= 0.9;
	suppressionRadiusHit			= 60;
	ExplosionEffects				= "RHS_D832DUEffect";
	soundHit[]						= { "", 0, 1 };
	CraterEffects					= "";
	whistleDist						= 0;
	triggerDistance					= -1;
	triggerOnImpact					= true;
	deleteParentWhenTriggered		= false;
	submunitionAmmo					= rhs_ammo_d832du_smoke;
	submunitionConeAngle[]			= {120, 220};
	submunitionConeAngleHorizontal	= 720;
	submunitionAutoleveling			= 1;
	submunitionInitSpeed			= 14;
	submunitionParentSpeedCoef  	= 0;
	submunitionInitialOffset[]		= {0,0,-7};
	submunitionConeType[]			= {"randomupcone", 5};
	SoundSetExplosion[]				= {"GrenadeHe_Exp_SoundSet","GrenadeHe_Tail_SoundSet","Explosion_Debris_SoundSet"};
};
class rhs_ammo_d462_direct : rhs_ammo_d462
{
	artilleryLock = 0;
	airFriction = -0.00012;
};

//2b14 podnos
class Sh_82mm_AMOS;
class rhs_ammo_3vo18: Sh_82mm_AMOS
{
	hit = 145;
	indirectHit = 42;
	indirectHitRange = 18;
};

class rhs_ammo_3vs25m : SubmunitionBase
{
	hit					= 5;
	indirectHit			= 0;
	indirectHitRange	= 0;
	explosive			= 0;
	ExplosionEffects	= "";
	soundHit[]			= { "", 0, 1 };
	CraterEffects		= "";
	whistleDist			= 0;
	timeToLive			= 90;
	aimAboveTarget[]	= {160, 180, 200, 240, 300, 340, 360};
	aimAboveDefault		= 4;
	model				= "\A3\weapons_f\ammo\shell";
	submunitionAmmo[]	= {"rhs_ammo_flare_3vs25m",1};
};
class rhs_ammo_flare_3vs25m: F_40mm_White
{
	triggerTime			= 0;
	brightness			= 8500;
	lightColor[]		= {100, 100, 100, 100};
	timeToLive			= 35;
	intensity			= 8500;
	flareSize			= 30;
	flareMaxDistance	= 3000;
	affectedByWind		= 1;
};
class rhs_ammo_d832du : Smoke_120mm_AMOS_White
{
	hit								= 8;
	indirectHit						= 2;
	indirectHitRange				= 4;
	explosive						= 0.9;
	suppressionRadiusHit			= 60;
	ExplosionEffects				= "RHS_D832DUEffect";
	soundHit[]						= { "", 0, 1 };
	CraterEffects					= "";
	whistleDist						= 0;
	triggerDistance					= -1;
	triggerOnImpact					= true;
	deleteParentWhenTriggered		= false;
	submunitionAmmo					= rhs_ammo_d832du_smoke;
	submunitionConeAngle[]			= {120, 220};
	submunitionConeAngleHorizontal	= 720;
	submunitionAutoleveling			= 1;
	submunitionInitSpeed			= 14;
	submunitionParentSpeedCoef  	= 0;
	submunitionInitialOffset[]		= {0,0,-7};
	submunitionConeType[]			= {"randomupcone", 5};
	SoundSetExplosion[]				= {"GrenadeHe_Exp_SoundSet","GrenadeHe_Tail_SoundSet","Explosion_Debris_SoundSet"};
};
class rhs_ammo_d832du_smoke: SmokeShell
{
	simulation		= "shotSmoke";
	effectsSmoke	= "RHS_D832DUBurnEffect";
	model			= "\A3\weapons_f\ammo\shell_smoke";
};