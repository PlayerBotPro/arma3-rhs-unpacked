class CfgPatches {
    class rhs_c_airweapons {
        units[] = {
            "rhs_mine_pfm1",
            "rhs_mine_ptm1",
            "rhs_uxo_ao1_1",
            "rhs_uxo_ao1_2",
            "rhs_uxo_ao1_3",
            "rhs_uxo_ptab1m_1",
            "rhs_uxo_ptab1m_2",
            "rhs_uxo_ptab1m_3",
            "rhs_uxo_ptab25m_1",
            "rhs_uxo_ptab25m_2",
            "rhs_uxo_ptab25m_3",
            "rhs_uxo_ptab25ko_1",
            "rhs_uxo_ptab25ko_2",
            "rhs_uxo_ptab25ko_3",
            "rhs_mine_pfm1_module",
            "rhs_mine_ptm1_module",
            "rhs_uxo_ao1_module",
            "rhs_uxo_ptab1m_module",
            "rhs_uxo_ptab25m_module",
            "rhs_uxo_ptab25ko_module"
        };
        weapons[] = {};
        requiredVersion = 1.7;
        requiredAddons[] = {"rhs_main", "rhs_c_heavyweapons"};
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
        authorUrl = "http://redhammer.su";
        versionDesc = "RHS";
        text = "QUOTE(RHS 0.1.1.1)";
    };
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo {
    class MissileBase;
    class R_80mm_HE;
    class M_Titan_AT;
    class rhs_ammo_atgmCore_base;
    class rhs_ammo_atgmBase_base: M_Titan_AT {
        class EventHandlers;
    };
    class rhs_ammo_base_penetrator;
    class rhs_ammo_cluster_penetrator;
    class Missile_AA_04_F: MissileBase {
        class Components;
    };
    class Missile_AGM_02_F: MissileBase {
        class Components;
    };
    class Missile_AGM_01_F: Missile_AGM_02_F {
        class Components;
    };
    class rhs_ammo_s8: R_80mm_HE {
        AIAmmoUsageFlags = "64+128+512";
        cost = 100;
        initTime = 0.02;
        sideAirFriction = 0.003;
        proxyShape = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
        model = "\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_fly_F.p3d";
        effectsMissile = "RHS_Rocket_Fired";
        effectsMissileInit = "RHS_Rocket_Init";
        soundFly[] = {
            "A3\Sounds_F\weapons\Rockets\rocket_fly_2",
            1,
            1.5,
            700
        };
        submunitionAmmo = "rhs_ammo_s8_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        missileLockMaxDistance = 4000;
        missileLockMinDistance = 700;
    };
    class rhs_ammo_s8_penetrator: rhs_ammo_base_penetrator {
        submunitionConeType[] = {"randomcenter", 5};
        caliber = 26.6667;
    };
    class rhs_ammo_s8DF: rhs_ammo_s8 {
        AIAmmoUsageFlags = "64+128";
        cost = 100;
        submunitionAmmo = "";
        hit = 210;
        indirectHit = 85;
        indirectHitRange = 20;
        explosive = 1;
        allowAgainstInfantry = 1;
        class CamShakeExplode {
            power = 22;
            duration = 2;
            frequency = 20;
            distance = 123.905;
        };
        class CamShakeHit {
            power = 110;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        explosionEffects = "RHS_FAE_Explosion";
    };
    class rhs_ammo_s8t: rhs_ammo_s8 {
        AIAmmoUsageFlags = "64+128+512";
        submunitionAmmo = "rhs_ammo_s8t_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        indirectHit = 40;
        indirectHitRange = 7;
        craterEffects = "ATRocketCrater";
        explosionEffects = "ATRocketExplosion";
    };
    class rhs_ammo_s8t_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        submunitionConeType[] = {"randomcenter", 5};
        caliber = 26.6667;
    };
    class rhs_ammo_s13b: rhs_ammo_s8 {
        proxyShape = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13_gasket";
        model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13b_fly";
        hit = 470;
        indirectHit = 240;
        indirectHitRange = 10;
        dangerRadiusHit = 1250;
        suppressionRadiusHit = 120;
        sideAirFriction = 0.001;
        thrusttime = 0.6;
        class CamShakeExplode {
            power = 24.4;
            duration = 2.2;
            frequency = 20;
            distance = 208.363;
        };
        class CamShakeHit {
            power = 122;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 3.32346;
            duration = 2.2;
            frequency = 20;
            distance = 88.3629;
        };
        class CamShakePlayerFire {
            power = 2;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
        SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class rhs_ammo_s13of: rhs_ammo_s13b {
        submunitionAmmo = "";
        model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13of_fly";
        hit = 270;
        indirectHit = 120;
        indirectHitRange = 25;
    };
    class rhs_ammo_s13D: rhs_ammo_s13b {
        model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13d_fly";
        AIAmmoUsageFlags = "64+128";
        cost = 100;
        submunitionAmmo = "";
        hit = 210;
        indirectHit = 175;
        indirectHitRange = 15;
        explosive = 1;
        allowAgainstInfantry = 1;
        class CamShakeExplode {
            power = 22;
            duration = 2;
            frequency = 20;
            distance = 123.905;
        };
        class CamShakeHit {
            power = 110;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        explosionEffects = "RHS_FAE_Explosion";
    };
    class rhs_ammo_s13DF: rhs_ammo_s13D {
        model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13df_fly";
        hit = 260;
        indirectHit = 205;
        indirectHitRange = 20;
    };
    class rhs_ammo_s13t: rhs_ammo_s13b {
        AIAmmoUsageFlags = "64+128+512";
        submunitionAmmo = "rhs_ammo_s13t_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13t_fly";
        indirectHit = 30;
        indirectHitRange = 7;
        craterEffects = "ATRocketCrater";
        explosionEffects = "ATRocketExplosion";
    };
    class rhs_ammo_s13t_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        submunitionConeType[] = {"randomcenter", 5};
        caliber = 40;
    };
    class rhs_ammo_s5: rhs_ammo_s8 {
        submunitionAmmo = "";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\s5_rockets\rhs_r_s5m1";
        model = "\rhsafrf\addons\rhs_airweapons\s5_rockets\rhs_r_s5m1_fly";
        hit = 220;
        indirectHit = 20;
        indirectHitRange = 9;
        initTime = 0.02;
        thrusttime = 0.675;
        timetolive = 12.5;
        sideAirFriction = 0.004;
        missileLockMaxDistance = 1800;
        class CamShakeExplode {
            power = 11.4;
            duration = 1.6;
            frequency = 20;
            distance = 140.399;
        };
        class CamShakeHit {
            power = 57;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 2.7477;
            duration = 1.6;
            frequency = 20;
            distance = 60.3987;
        };
        class CamShakePlayerFire {
            power = 2;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_s5m1: rhs_ammo_s5 {
        hit = 200;
        indirectHit = 40;
        indirectHitRange = 12;
    };
    class rhs_ammo_s5k1: rhs_ammo_s5 {
        AIAmmoUsageFlags = "64+128+512";
        submunitionAmmo = "rhs_ammo_s5k1_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        indirectHit = 40;
        indirectHitRange = 7;
        craterEffects = "ATRocketCrater";
        explosionEffects = "ATRocketExplosion";
    };
    class rhs_ammo_s5k1_penetrator: rhs_ammo_base_penetrator {
        submunitionConeType[] = {"randomcenter", 5};
        caliber = 8.66667;
    };
    class rhs_ammo_s5ko: rhs_ammo_s5 {
        AIAmmoUsageFlags = "64+128+512";
        submunitionAmmo = "rhs_ammo_s5ko_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_s5ko_penetrator: rhs_ammo_base_penetrator {
        submunitionConeType[] = {"randomcenter", 5};
        caliber = 11.4667;
    };
    class rhs_ammo_s5_ub16: rhs_ammo_s5 {};
    class rhs_ammo_s5_ub32: rhs_ammo_s5_ub16 {};
    class rhs_ammo_s24_base: rhs_ammo_s13b {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_s24_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_s24";
        hit = 700;
        indirectHit = 140;
        indirectHitRange = 30;
        dangerRadiusHit = 1250;
        suppressionRadiusHit = 150;
        sideAirFriction = 0.055;
        maxspeed = 430;
        class CamShakeExplode {
            power = 48;
            duration = 3;
            frequency = 20;
            distance = 523.935;
        };
        class CamShakeHit {
            power = 240;
            duration = 0.8;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 3.93598;
            duration = 3;
            frequency = 20;
            distance = 123.935;
        };
        class CamShakePlayerFire {
            power = 2;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
        SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class rhs_ammo_s24: rhs_ammo_s24_base {
        effectsMissile = "RHS_Rocket_Fired";
    };
    class rhs_ammo_s24b: rhs_ammo_s24_base {};
    class rhs_ammo_s25_base: rhs_ammo_s24_base {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_s25of_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_s25of";
        hit = 700;
        indirectHit = 160;
        indirectHitRange = 30;
        sideAirFriction = 0.045;
        maxspeed = 700;
        class CamShakeExplode {
            power = 68;
            duration = 3.6;
            frequency = 20;
            distance = 707.513;
        };
        class CamShakeHit {
            power = 340;
            duration = 0.8;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 4.29408;
            duration = 3.6;
            frequency = 20;
            distance = 147.513;
        };
        class CamShakePlayerFire {
            power = 2;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_s25o: rhs_ammo_s25_base {
        proximityExplosionDistance = 10;
    };
    class rhs_ammo_s25of: rhs_ammo_s25_base {
        hit = 650;
        indirectHit = 150;
        indirectHitRange = 35;
    };
    class rhs_ammo_s25l: rhs_ammo_s25_base {
        maxControlRange = 7000;
        missileLockMaxDistance = 7000;
        missileLockMinDistance = 1000;
        weaponLockSystem = "4 + 16";
        class Components {
            class SensorsManagerComponent {
                class Components {
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 7000;
                            maxRange = 7000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 7000;
                            maxRange = 7000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                };
            };
        };
    };
    class rhs_ammo_s25ld: rhs_ammo_s25l {
        maxControlRange = 10000;
        missileLockMaxDistance = 10000;
        class Components {
            class SensorsManagerComponent {
                class Components {
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                };
            };
        };
    };
    class rhs_ammo_9m114: rhs_ammo_atgmBase_base {
        submunitionAmmo = "rhs_ammo_9m114_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        lockType = 0;
        cost = 100;
        hit = 400;
        indirecthit = 26;
        indirecthitrange = 4.6;
        maneuvrability = 13;
        manualcontrol = 1;
        maxcontrolrange = 5000;
        maxspeed = 345;
        sideairfriction = 0.3;
        thrust = 172;
        thrusttime = 3.5;
        timetolive = 15;
        tracklead = 0.95;
        trackoversteer = 0.95;
        whistledist = 3;
        model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
        proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m114";
        maverickWeaponIndexOffset = 30;
        rhs_saclos = 2;
        rhs_ballisticMode = 1;
        rhs_guideMode = "RADIO";
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m114_penetrator: rhs_ammo_base_penetrator {
        hit = 300;
        caliber = 37.3333;
    };
    class rhs_ammo_9m114m: rhs_ammo_9m114 {};
    class rhs_ammo_9m114f: rhs_ammo_9m114 {
        AIAmmoUsageFlags = "64+128";
        allowAgainstInfantry = 1;
        cost = 100;
        submunitionAmmo = "";
        hit = 210;
        indirectHit = 175;
        indirectHitRange = 15;
        explosive = 1;
        class CamShakeExplode {
            power = 22;
            duration = 2;
            frequency = 20;
            distance = 403.905;
        };
        class CamShakeHit {
            power = 110;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        explosionEffects = "RHS_FAE_Explosion";
    };
    class rhs_ammo_9m114m1: rhs_ammo_9m114 {
        maxcontrolrange = 6000;
    };
    class rhs_ammo_9m114m2: rhs_ammo_9m114 {
        maxcontrolrange = 7000;
    };
    class rhs_ammo_9m120: rhs_ammo_atgmBase_base {
        submunitionAmmo = "rhs_ammo_9m120_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        lockType = 0;
        cost = 180;
        hit = 350;
        indirecthit = 26;
        indirecthitrange = 4.6;
        maneuvrability = 13;
        manualcontrol = 1;
        maxcontrolrange = 6000;
        maxspeed = 550;
        sideairfriction = 0.3;
        thrust = 172;
        thrusttime = 3.5;
        timetolive = 25;
        tracklead = 0;
        trackoversteer = 1;
        whistledist = 3;
        model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_9m120";
        maverickWeaponIndexOffset = 30;
        rhs_saclos = 2;
        rhs_ballisticMode = 0;
        rhs_guideMode = "RADIO";
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m120_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        caliber = 53.3333;
    };
    class rhs_ammo_9m120m: rhs_ammo_9m120 {
        submunitionAmmo = "rhs_ammo_9m120m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maxcontrolrange = 8000;
    };
    class rhs_ammo_9m120m_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        hit = 290;
        caliber = 63.3333;
    };
    class rhs_ammo_9m120f: rhs_ammo_9m120 {
        AIAmmoUsageFlags = "64+128";
        allowAgainstInfantry = 1;
        cost = 100;
        submunitionAmmo = "";
        hit = 210;
        indirectHit = 175;
        indirectHitRange = 15;
        explosive = 1;
        class CamShakeExplode {
            power = 22;
            duration = 2;
            frequency = 20;
            distance = 403.905;
        };
        class CamShakeHit {
            power = 110;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        explosionEffects = "RHS_FAE_Explosion";
    };
    class rhs_ammo_9m120o: rhs_ammo_9m120 {
        AIAmmoUsageFlags = "64+128";
        allowAgainstInfantry = 1;
        cost = 100;
        hit = 210;
        indirectHit = 175;
        indirectHitRange = 15;
        explosive = 1;
        proximityExplosionDistance = 12;
        simulation = "shotMissile";
        triggerDistance = 5;
        submunitionAmmo = "rhs_ammo_spall";
        submunitionConeType[] = {"poissondisc", 100};
        submunitionConeAngle = 360;
    };
    class rhs_ammo_9m127: rhs_ammo_9m120 {
        submunitionAmmo = "rhs_ammo_9m127_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m127";
        indirecthit = 86;
        indirecthitrange = 9.6;
        cmImmunity = 0.9;
        maverickWeaponIndexOffset = 0;
        airlock = 1;
        airFriction = 0.075;
        thrust = 342;
        thrusttime = 3;
        maxspeed = 600;
        maxcontrolrange = 10000;
        trackoversteer = 1;
        trackLead = 1;
        lockType = 0;
        manualcontrol = 0;
        maneuvrability = 16;
        weaponLockSystem = "1 + 4";
        rhs_guideMode = "BEAMRIDER";
    };
    class rhs_ammo_9m127_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        hit = 290;
        caliber = 70;
    };
    class rhs_ammo_9m127m: rhs_ammo_9m127 {};
    class rhs_ammo_r27_base: Missile_AA_04_F {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27r_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27r";
        hit = 180;
        indirecthit = 170;
        indirecthitrange = 19;
        proximityExplosionDistance = 29;
        submunitionConeType[] = {"randomcenter", 30};
        submunitionConeAngle = 65;
        submunitionAmmo = "rhs_ammo_he_fragments";
        submunitionDirectionType = "SubmunitionTargetDirection";
        submunitionInitialOffset[] = {0, 0, 0};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1500;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        irlock = 1;
        maxspeed = 850;
        maxcontrolrange = 20000;
        maneuvrability = 14;
        airFriction = 0.014;
        sideAirFriction = 0.18;
        simulationstep = 0.001;
        initTime = 0.1;
        thrust = 340;
        thrusttime = 5;
        timetolive = 120;
    };
    class rhs_ammo_r27r: rhs_ammo_r27_base {
        cmimmunity = 0.885;
        weaponLockSystem = "8 + 16";
        missileLockCone = 60;
        missileLockMaxDistance = 16000;
        missileLockMinDistance = 2000;
        missileLockMaxSpeed = 972;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 16000;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 14000;
                            maxRange = 14000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = -1;
                        angleRangeHorizontal = 45;
                        angleRangeVertical = 45;
                        groundNoiseDistanceCoef = 0.1;
                        aimDown = 0;
                        minSpeedThreshold = 30;
                        maxSpeedThreshold = 40;
                    };
                };
            };
        };
    };
    class rhs_ammo_r27er: rhs_ammo_r27r {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27er_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27er";
        missileLockMaxDistance = 20000;
        timetolive = 80;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 20000;
                            maxRange = 20000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 14000;
                            maxRange = 14000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = -1;
                        angleRangeHorizontal = 45;
                        angleRangeVertical = 45;
                        groundNoiseDistanceCoef = 0.1;
                        aimDown = 0;
                        minSpeedThreshold = 30;
                        maxSpeedThreshold = 40;
                    };
                };
            };
        };
    };
    class rhs_ammo_r27t: rhs_ammo_r27_base {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27t_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27t";
        weaponLockSystem = "2 + 16";
        missileLockCone = 15;
        missileLockMaxDistance = 22000;
        missileLockMinDistance = 1700;
        missileLockMaxSpeed = 700;
        timetolive = 55;
        autoSeekTarget = 1;
        lockSeekRadius = 1000;
        trackLead = 0.5;
        flightProfiles[] = {"Direct", "LoalDistance"};
        class Direct {};
        class LoalDistance {
            lockSeekDistanceFromParent = 2000;
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 4000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 3500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        typeRecognitionDistance = -1;
                        angleRangeHorizontal = 15;
                        angleRangeVertical = 15;
                        maxTrackableSpeed = 1200;
                        aimDown = 0;
                    };
                };
            };
        };
    };
    class rhs_ammo_r27et: rhs_ammo_r27t {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27et_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r27et";
        timetolive = 70;
        missileLockMaxDistance = 26000;
    };
    class rhs_ammo_r60_base: Missile_AA_04_F {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r60_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r60";
        hit = 180;
        indirecthit = 50;
        indirecthitrange = 9;
        proximityExplosionDistance = 12;
        submunitionConeType[] = {"randomcenter", 30};
        submunitionConeAngle = 65;
        submunitionAmmo = "rhs_ammo_he_fragments";
        submunitionDirectionType = "SubmunitionTargetDirection";
        submunitionInitialOffset[] = {0, 0, 0};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1500;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        irlock = 1;
        maxspeed = 850;
        maxcontrolrange = 7000;
        maneuvrability = 34;
        sideAirFriction = 0.18;
        simulationstep = 0.001;
        initTime = 0.1;
        thrust = 340;
        thrusttime = 3;
        timetolive = 18;
        weaponLockSystem = "2 + 16";
    };
    class rhs_ammo_r60: rhs_ammo_r60_base {
        missileLockCone = 24;
        missileKeepLockedCone = 40;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 4500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 24;
                        angleRangeVertical = 24;
                        maxTrackableSpeed = 835;
                        aimDown = 0;
                    };
                };
            };
        };
    };
    class rhs_ammo_r60m: rhs_ammo_r60_base {
        hit = 180;
        indirecthit = 80;
        indirecthitrange = 9;
        maxcontrolrange = 10000;
        missileLockCone = 34;
        missileKeepLockedCone = 60;
        timetolive = 23;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 8500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 40;
                        angleRangeVertical = 40;
                        maxTrackableSpeed = 835;
                        aimDown = 0;
                    };
                };
            };
        };
    };
    class rhs_ammo_r73: Missile_AA_04_F {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r73_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r73";
        cost = 800;
        effectsmissile = "missile3";
        cratereffects = "AAMissileCrater";
        explosioneffects = "AAMissileExplosion";
        soundFly[] = {
            "A3\Sounds_F\weapons\Rockets\rocket_fly_2",
            1,
            1.5,
            700
        };
        hit = 150;
        indirecthit = 90;
        indirecthitrange = 9;
        initTime = 0.1;
        irlock = 1;
        maneuvrability = 28;
        maxcontrolrange = 20000;
        maxspeed = 850;
        sideAirFriction = 0.18;
        simulationstep = 0.001;
        thrust = 340;
        thrusttime = 5;
        timetolive = 20;
        submunitionConeType[] = {"randomcenter", 30};
        submunitionConeAngle = 65;
        submunitionAmmo = "rhs_ammo_he_fragments";
        submunitionDirectionType = "SubmunitionTargetDirection";
        submunitionInitialOffset[] = {0, 0, 0};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1500;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        weaponLockSystem = "1 + 2 + 16";
        missileLockCone = 50;
        missileKeepLockedCone = 90;
        missileLockMaxDistance = 8000;
        missileLockMinDistance = 300;
        missileLockMaxSpeed = 700;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 4500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 90;
                        angleRangeVertical = 90;
                        maxTrackableSpeed = 835;
                        aimDown = 0;
                    };
                };
            };
        };
    };
    class rhs_ammo_r73m: rhs_ammo_r73 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74";
        cmimmunity = 0.92;
        missileLockCone = 60;
        missileKeepLockedCone = 120;
    };
    class rhs_ammo_r74: rhs_ammo_r73m {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74";
        cost = 900;
        hit = 190;
        maneuvrability = 47;
        indirecthit = 135;
        inittime = 0.5;
    };
    class rhs_ammo_r74m2: rhs_ammo_r74 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74m2_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r74m2";
        maneuvrability = 47;
        inittime = 0.5;
        cmimmunity = 0.92;
        missileLockCone = 150;
        missileKeepLockedCone = 150;
        missileLockMaxDistance = 8000;
        missileLockMinDistance = 150;
        missileLockMaxSpeed = 700;
    };
    class rhs_ammo_r77: rhs_ammo_r73 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r77_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r77";
        inittime = 0.5;
        cost = 900;
        hit = 270;
        indirecthit = 150;
        indirecthitrange = 12;
        proximityExplosionDistance = 20;
        maxspeed = 1111;
        timetolive = 120;
        airFriction = 0.014;
        sideairfriction = 0.5;
        cmimmunity = 0.89;
        weaponLockSystem = "8 + 16";
        missileLockCone = 60;
        missileKeepLockedCone = 90;
        missileLockMaxDistance = 22000;
        missileLockMinDistance = 2000;
        missileLockMaxSpeed = 972;
        autoSeekTarget = 1;
        lockSeekRadius = 1000;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 25000;
                            maxRange = 25000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 25000;
                            maxRange = 25000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = -1;
                        angleRangeHorizontal = 45;
                        angleRangeVertical = 45;
                        groundNoiseDistanceCoef = 0.1;
                        aimDown = 0;
                        minSpeedThreshold = 30;
                        maxSpeedThreshold = 40;
                    };
                };
            };
        };
    };
    class rhs_ammo_r77m: rhs_ammo_r77 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_r77m_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_r77m";
        cost = 1000;
        hit = 330;
        indirecthit = 80;
        missileLockMaxSpeed = 1000;
        missileKeepLockedCone = 120;
        cmimmunity = 0.94;
    };
    class rhs_ammo_kh25_base: Missile_AGM_01_F {
        submunitionAmmo = "rhs_ammo_kh25_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        hit = 530;
        indirectHit = 85;
        indirectHitRange = 8;
        maxspeed = 870;
        inittime = 0.8;
        thrust = 350;
        thrusttime = 2;
        timetolive = 30;
        missileLockCone = 30;
        missileKeepLockedCone = 30;
        missileLockMaxDistance = 10000;
        missileLockMinDistance = 2000;
        missileLockMaxSpeed = 55;
        cameraViewAvailable = 0;
        effectsMissile = "RHS_Rocket_Fired";
        class CamShakeExplode {
            power = 102;
            duration = 4.6;
            frequency = 20;
            distance = 900.665;
        };
        class CamShakeHit {
            power = 510;
            duration = 1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_kh25: rhs_ammo_kh25_base {
        maxspeed = 850;
        missileLockMaxDistance = 7000;
        weaponLockSystem = "4 + 16";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 7000;
                            maxRange = 7000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 7000;
                            maxRange = 7000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh25ml: rhs_ammo_kh25_base {
        weaponLockSystem = "4 + 16";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class NVSensorComponent: SensorTemplateNV {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 10000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 8000;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 8000;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh25ma: rhs_ammo_kh25_base {
        weaponLockSystem = "8 + 16";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class RadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 5000;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = -1;
                        maxFogSeeThrough = 0.8;
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 56;
                        minTrackableATL = -1;
                        maxTrackableATL = 40;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh25mt: rhs_ammo_kh25_base {
        maxspeed = 870;
        missileLockCone = 45;
        missileKeepLockedCone = 45;
        missileLockMaxDistance = 10000;
        missileLockMinDistance = 1500;
        weaponLockSystem = "1 + 16";
        cameraViewAvailable = 1;
        rhs_tv_guidance = "BW";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 35;
                        nightRangeCoef = 0.8;
                        angleRangeHorizontal = 45;
                        angleRangeVertical = 45;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh25mtp: rhs_ammo_kh25_base {
        weaponLockSystem = "2 + 16";
        cameraViewAvailable = 1;
        rhs_tv_guidance = "TI";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 9000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 55;
                        angleRangeHorizontal = 30;
                        angleRangeVertical = 30;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh25mp: rhs_ammo_kh25_base {
        maxspeed = 920;
        weaponLockSystem = 16;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class AntiRadiationSensorComponent: SensorTemplateAntiRadiation {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 10000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 55;
                        angleRangeHorizontal = 30;
                        angleRangeVertical = 30;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh25_penetrator: rhs_ammo_base_penetrator {
        hit = 310;
        typicalSpeed = 800;
        caliber = 60;
    };
    class rhs_ammo_kh29_base: Missile_AGM_02_F {
        submunitionAmmo = "rhs_ammo_kh29_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_kh29_fly";
        proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_kh29";
        maverickWeaponIndexOffset = 0;
        hit = 1330;
        indirecthit = 300;
        indirecthitrange = 17;
        cratereffects = "BombCrater";
        effectsMissile = "RHS_Rocket_Fired";
        explosioneffects = "BombExplosion";
        maxspeed = 720;
        maneuvrability = 10;
        maxcontrolrange = 10000;
        sideairfriction = 0.1;
        simulationstep = 0.001;
        inittime = 0.8;
        thrust = 350;
        thrusttime = 2;
        timetolive = 30;
        tracklead = 0.95;
        trackoversteer = 50;
        whistledist = 18;
        irlock = 1;
        laserlock = 1;
        lockType = 0;
        weaponLockSystem = "4 + 16";
        lockSeekRadius = 120;
        missileLockCone = 30;
        missileKeepLockedCone = 30;
        missileLockMaxDistance = 9000;
        missileLockMinDistance = 1500;
        missileLockMaxSpeed = 55;
        cameraViewAvailable = 0;
        class CamShakeExplode {
            power = 180;
            duration = 6;
            frequency = 20;
            distance = 1240;
        };
        class CamShakeHit {
            power = 900;
            duration = 1;
            frequency = 20;
            distance = 1;
        };
        SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class rhs_ammo_kh29l: rhs_ammo_kh29_base {
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh29ml: rhs_ammo_kh29_base {
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class NVSensorComponent: SensorTemplateNV {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh29t: rhs_ammo_kh29_base {
        missileLockCone = 45;
        missileKeepLockedCone = 45;
        missileLockMaxDistance = 9000;
        missileLockMinDistance = 1500;
        weaponLockSystem = "1 + 16";
        cameraViewAvailable = 1;
        rhs_tv_guidance = "BW";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 9000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 35;
                        nightRangeCoef = 0.1;
                        maxFogSeeThrough = 0.1;
                        angleRangeHorizontal = 45;
                        angleRangeVertical = 45;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh29mp: rhs_ammo_kh29_base {
        weaponLockSystem = "8 + 16";
        missileLockCone = 60;
        missileKeepLockedCone = 60;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class RadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 5000;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh29d: rhs_ammo_kh29_base {
        weaponLockSystem = "2 + 16";
        rhs_tv_guidance = "TI";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 9000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 55;
                        angleRangeHorizontal = 30;
                        angleRangeVertical = 30;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh29_penetrator: rhs_ammo_base_penetrator {
        hit = 310;
        typicalSpeed = 800;
        caliber = 33.3333;
    };
    class rhs_ammo_kh38m_base: Missile_AGM_02_F {
        submunitionAmmo = "rhs_ammo_kh38m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38m_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38m";
        hit = 830;
        indirectHit = 105;
        indirectHitRange = 10;
        maxspeed = 748;
        class CamShakeExplode {
            power = 102;
            duration = 4.6;
            frequency = 20;
            distance = 1060.67;
        };
        class CamShakeHit {
            power = 510;
            duration = 1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_kh38mle: rhs_ammo_kh38m_base {
        weaponLockSystem = "4 + 16";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class NVSensorComponent: SensorTemplateNV {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 8000;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 8000;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh38mle_ext: rhs_ammo_kh38mle {
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38m_ext";
    };
    class rhs_ammo_kh38mae: rhs_ammo_kh38m_base {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae";
        weaponLockSystem = "8 + 16";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class RadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 5000;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = -1;
                        maxFogSeeThrough = 0.8;
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 56;
                        minTrackableATL = -1;
                        maxTrackableATL = 40;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh38mae_ext: rhs_ammo_kh38mae {
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae_ext";
    };
    class rhs_ammo_kh38mte: rhs_ammo_kh38m_base {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte";
        weaponLockSystem = "2 + 16";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 6000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 55;
                        angleRangeHorizontal = 30;
                        angleRangeVertical = 30;
                    };
                };
            };
        };
    };
    class rhs_ammo_kh38mte_ext: rhs_ammo_kh38mte {
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte_ext";
    };
    class rhs_ammo_kh38m_penetrator: rhs_ammo_base_penetrator {
        hit = 310;
        typicalSpeed = 800;
        caliber = 73.3333;
    };
    class rhs_ammo_kh55sm: rhs_ammo_kh29l {
        submunitionAmmo = "";
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm";
        CraterEffects = "RHS_HeavyBombCrater";
        explosionEffects = "RHS_HeavyBombExplosion";
        effectsMissile = "missile5";
        hit = 9920;
        indirecthit = 1300;
        indirecthitrange = 56;
        inittime = 6;
        maneuvrability = 10;
        maxcontrolrange = 350000;
        maxspeed = 255;
        sideairfriction = 0.001;
        simulationstep = 0.001;
        thrust = 20;
        thrusttime = 180;
        timetolive = 900;
        tracklead = 0.95;
        trackoversteer = 50;
        whistledist = 25;
        weaponLockSystem = 16;
        lockType = 0;
        irlock = 1;
        laserlock = 1;
        soundFly[] = {
            "A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",
            2.5,
            1.5,
            10800
        };
        SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
        RHS_yield = 50000;
        RHS_FuseRange = 100;
        RHS_WarheadType = "NUKE";
        class CamShakeExplode {
            power = 140;
            duration = 5.2;
            frequency = 20;
            distance = 2011.66;
        };
        class CamShakeHit {
            power = 700;
            duration = 1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_kh55sm_nocamo: rhs_ammo_kh55sm {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm2_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm2";
    };
    class rhs_ammo_kh55sh: rhs_ammo_kh55sm {
        RHS_WarheadType = "EXPLOSIVE";
        RHS_FuseRange = 0;
    };
    class rhs_ammo_kh55sh_nocamo: rhs_ammo_kh55sm_nocamo {
        RHS_WarheadType = "EXPLOSIVE";
    };
    class bomb_04_f;
    class Mo_cluster_AP;
    class UXO_deploy_BombCluster_base_F;
    class ShotDeployBase;
    class APERSMine_Range_Ammo;
    class ATMine_Range_Ammo;
    class rhs_ammo_fab100: bomb_04_f {
        cost = 50;
        flightProfiles[] = {"Direct"};
        class Direct {};
        hit = 1500;
        indirectHit = 650;
        indirectHitRange = 13;
        dangerRadiusHit = 850;
        suppressionRadiusHit = 80;
        explosionForceCoef = 10;
        irLock = 0;
        laserLock = 0;
        allowAgainstInfantry = 1;
        autoSeekTarget = 0;
        aiAmmoUsageFlags = "64 + 128 + 512";
        weaponLockSystem = 1;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab100";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab100";
        soundFakeFall0[] = {
            "a3\Sounds_F\weapons\falling_bomb\fall_01",
            3.16228,
            1,
            1000
        };
        soundFakeFall1[] = {
            "a3\Sounds_F\weapons\falling_bomb\fall_02",
            3.16228,
            1,
            1000
        };
        soundFakeFall2[] = {
            "a3\Sounds_F\weapons\falling_bomb\fall_03",
            3.16228,
            1,
            1000
        };
        soundFakeFall3[] = {
            "a3\Sounds_F\weapons\falling_bomb\fall_04",
            3.16228,
            1,
            1000
        };
        soundFakeFall[] = {
            "soundFakeFall0",
            0.25,
            "soundFakeFall1",
            0.25,
            "soundFakeFall2",
            0.25,
            "soundFakeFall3",
            0.25
        };
        class Components {
            class SensorsManagerComponent {
                class Components {};
            };
        };
    };
    class rhs_ammo_fab250: rhs_ammo_fab100 {
        hit = 5000;
        indirectHit = 1140;
        indirectHitRange = 15;
        dangerRadiusHit = 1250;
        suppressionRadiusHit = 100;
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_fab250";
        proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\rhs_m_fab250";
    };
    class rhs_ammo_fab250_m62: rhs_ammo_fab250 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab250m62";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab250m62";
        sideAirFriction = 0.1;
    };
    class rhs_ammo_ofab250: rhs_ammo_fab250 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ofab250";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_ofab250";
    };
    class rhs_ammo_kab250: bomb_04_f {
        flightProfiles[] = {"LoalAltitude"};
        class Direct {};
        class LoalAltitude {
            lockSeekAltitude = 300;
        };
        hit = 5000;
        indirectHit = 1140;
        indirectHitRange = 15;
        explosionForceCoef = 10;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_kab250.p3d";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_kab250.p3d";
        maverickWeaponIndexOffset = 0;
    };
    class rhs_ammo_rbk250_ao1: rhs_ammo_fab250 {
        laserLock = 0;
        allowAgainstInfantry = 1;
        autoSeekTarget = 0;
        aiAmmoUsageFlags = "64 + 128 + 512";
        weaponLockSystem = 1;
        maverickWeaponIndexOffset = 0;
        simulation = "shotMissile";
        triggerDistance = 250;
        triggerSpeedCoef[] = {0.8, 1};
        submunitionConeAngle = 20;
        submunitionAmmo[] = {
            "rhs_ammo_sub_ao1",
            0.94,
            "rhs_ammo_ao1_uxo_deploy",
            0.06
        };
        submunitionConeType[] = {"randomcenter", 75};
        class Components {
            class SensorsManagerComponent {
                class Components {};
            };
        };
    };
    class rhs_ammo_rbk250_ptab25: rhs_ammo_rbk250_ao1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
        submunitionConeAngle = 8;
        submunitionAmmo[] = {
            "rhs_ammo_sub_ptab25m",
            0.94,
            "rhs_ammo_ptab25m_uxo_deploy",
            0.06
        };
        submunitionConeType[] = {"randomcenter", 60};
    };
    class rhs_ammo_rbk250_zab25t: rhs_ammo_rbk250_ao1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
        submunitionAmmo[] = {"rhs_ammo_sub_zab25t_deploy", 1};
        submunitionConeType[] = {"randomcenter", 24};
    };
    class rhs_ammo_sub_ao1: Mo_cluster_AP {
        hit = 15;
        indirectHit = 8;
        indirectHitRange = 5;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ao1sh";
        effectFly = "";
    };
    class rhs_ammo_ao1_uxo_deploy: UXO_deploy_BombCluster_base_F {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ao1sh";
        submunitionAmmo[] = {
            "rhs_ammo_uxo_ao1_1_deploy",
            0.34,
            "rhs_ammo_uxo_ao1_2_deploy",
            0.33,
            "rhs_ammo_uxo_ao1_3_deploy",
            0.33
        };
    };
    class rhs_ammo_uxo_ao1_1_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_1";
        submunitionAmmo = "rhs_ammo_uxo_ao1_1";
    };
    class rhs_ammo_uxo_ao1_1: APERSMine_Range_Ammo {
        hit = 15;
        indirectHit = 8;
        indirectHitRange = 5;
        icon = "iconExplosiveUXO";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_1";
        mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3";
        defaultMagazine = "";
        mineTrigger = "UXOTrigger1";
        mineCanBeReactivated = 0;
        mineFloating = 10000000;
    };
    class rhs_ammo_uxo_ao1_2_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_2";
        submunitionAmmo = "rhs_ammo_uxo_ao1_2";
    };
    class rhs_ammo_uxo_ao1_2: rhs_ammo_uxo_ao1_1 {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_2";
        mineTrigger = "UXOTrigger2";
    };
    class rhs_ammo_uxo_ao1_3_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3";
        submunitionAmmo = "rhs_ammo_uxo_ao1_3";
    };
    class rhs_ammo_uxo_ao1_3: rhs_ammo_uxo_ao1_1 {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3";
        mineTrigger = "UXOTrigger3";
    };
    class rhs_ammo_sub_ptab25m: rhs_ammo_sub_ao1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25m";
        submunitionAmmo = "rhs_ammo_sub_ptab25m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        hit = 50;
        indirectHitRange = 4;
    };
    class rhs_ammo_sub_ptab25m_penetrator: rhs_ammo_cluster_penetrator {
        hit = 130;
        submunitionConeType[] = {"randomcenter", 5};
        caliber = 8;
    };
    class rhs_ammo_ptab25m_uxo_deploy: UXO_deploy_BombCluster_base_F {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25m";
        submunitionAmmo[] = {
            "rhs_ammo_uxo_ptab25m_1_deploy",
            0.34,
            "rhs_ammo_uxo_ptab25m_2_deploy",
            0.33,
            "rhs_ammo_uxo_ptab25m_3_deploy",
            0.33
        };
    };
    class rhs_ammo_uxo_ptab25m_1_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_1";
        submunitionAmmo = "rhs_ammo_uxo_ptab25m_1";
    };
    class rhs_ammo_uxo_ptab25m_1: APERSMine_Range_Ammo {
        hit = 50;
        indirectHit = 8;
        indirectHitRange = 4;
        icon = "iconExplosiveUXO";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_1";
        mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3";
        defaultMagazine = "";
        mineTrigger = "UXOTrigger1";
        mineCanBeReactivated = 0;
        mineFloating = 10000000;
    };
    class rhs_ammo_uxo_ptab25m_2_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_2";
        submunitionAmmo = "rhs_ammo_uxo_ptab25m_2";
    };
    class rhs_ammo_uxo_ptab25m_2: rhs_ammo_uxo_ptab25m_1 {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_2";
        mineTrigger = "UXOTrigger2";
    };
    class rhs_ammo_uxo_ptab25m_3_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3";
        submunitionAmmo = "rhs_ammo_uxo_ptab25m_3";
    };
    class rhs_ammo_uxo_ptab25m_3: rhs_ammo_uxo_ptab25m_1 {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3";
        mineTrigger = "UXOTrigger3";
    };
    class rhs_ammo_sub_ptab25ko: rhs_ammo_sub_ptab25m {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25ko";
        submunitionAmmo = "rhs_ammo_sub_ptab25ko_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        hit = 50;
        indirectHitRange = 8;
    };
    class rhs_ammo_sub_ptab25ko_penetrator: rhs_ammo_cluster_penetrator {
        hit = 130;
        submunitionConeType[] = {"randomcenter", 5};
        caliber = 8;
    };
    class rhs_ammo_ptab25ko_uxo_deploy: UXO_deploy_BombCluster_base_F {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25ko";
        submunitionAmmo[] = {
            "rhs_ammo_uxo_ptab25ko_1_deploy",
            0.34,
            "rhs_ammo_uxo_ptab25ko_2_deploy",
            0.33,
            "rhs_ammo_uxo_ptab25ko_3_deploy",
            0.33
        };
    };
    class rhs_ammo_uxo_ptab25ko_1_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_1";
        submunitionAmmo = "rhs_ammo_uxo_ptab25ko_1";
    };
    class rhs_ammo_uxo_ptab25ko_1: APERSMine_Range_Ammo {
        hit = 50;
        indirectHit = 8;
        indirectHitRange = 8;
        icon = "iconExplosiveUXO";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_1";
        mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3";
        defaultMagazine = "";
        mineTrigger = "UXOTrigger1";
        mineCanBeReactivated = 0;
        mineFloating = 10000000;
    };
    class rhs_ammo_uxo_ptab25ko_2_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_2";
        submunitionAmmo = "rhs_ammo_uxo_ptab25ko_2";
    };
    class rhs_ammo_uxo_ptab25ko_2: rhs_ammo_uxo_ptab25ko_1 {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_2";
        mineTrigger = "UXOTrigger2";
    };
    class rhs_ammo_uxo_ptab25ko_3_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3";
        submunitionAmmo = "rhs_ammo_uxo_ptab25ko_3";
    };
    class rhs_ammo_uxo_ptab25ko_3: rhs_ammo_uxo_ptab25ko_1 {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3";
        mineTrigger = "UXOTrigger3";
    };
    class rhs_ammo_sub_zab25t_deploy: rhs_ammo_rbk250_ao1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_zab25t";
        hit = 1;
        indirectHit = 1;
        indirectHitRange = 1;
        triggerDistance = 15;
        triggerSpeedCoef[] = {0.1};
        submunitionConeAngle = 1;
        submunitionAmmo[] = {"rhs_ammo_sub_zab25t", 1};
        submunitionConeType[] = {"randomcenter", 1};
        effectFly = "ArtilleryTrails";
        explosionEffects = "";
    };
    class F_40mm_White;
    class rhs_ammo_sub_zab25t: F_40mm_White {
        hit = 1;
        indirectHit = 1;
        indirectHitRange = 1;
        timetolive = 180;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_zab25t";
        effectFlare = "RHS_Incendiary_Bomb";
        craterShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_zab25t";
        explosionEffects = "";
    };
    class rhs_ammo_fab500: rhs_ammo_fab250 {
        hit = 8000;
        indirectHit = 2400;
        indirectHitRange = 25;
        CraterEffects = "RHS_HeavyBombCrater";
        explosionEffects = "RHS_HeavyBombExplosion";
        SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
        class CamShakeExplode {
            power = 240;
            duration = 7;
            frequency = 20;
            distance = 2077.13;
        };
        class CamShakeHit {
            power = 1200;
            duration = 1.2;
            frequency = 20;
            distance = 1;
        };
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab500";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab500";
    };
    class rhs_ammo_fab500_m54: rhs_ammo_fab500 {
        hit = 8000;
        indirectHit = 2000;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab500_m54";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_fab500_m54";
    };
    class rhs_ammo_kab500: rhs_ammo_kab250 {
        hit = 8000;
        indirectHit = 2400;
        indirectHitRange = 25;
        CraterEffects = "RHS_HeavyBombCrater";
        explosionEffects = "RHS_HeavyBombExplosion";
        SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
        class CamShakeExplode {
            power = 240;
            duration = 7;
            frequency = 20;
            distance = 2077.13;
        };
        class CamShakeHit {
            power = 1200;
            duration = 1.2;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_kab500lk: rhs_ammo_kab500 {
        simulation = "shotMissile";
        triggerDistance = 250;
        triggerSpeedCoef[] = {0.8, 1};
        submunitionConeAngle = 20;
        submunitionAmmo[] = {"rhs_ammo_sub_ao25", 1};
        submunitionConeType[] = {"randomcenter", 63};
    };
    class rhs_ammo_kab500od: rhs_ammo_kab500 {
        flightProfiles[] = {"Direct"};
        missileLockMaxDistance = 11000;
        missileLockMinDistance = 2500;
        weaponLockSystem = 1;
        cameraViewAvailable = 1;
        rhs_tv_guidance = "BW";
        class Components {
            class SensorsManagerComponent {
                class Components {
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 11000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 11000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 35;
                        nightRangeCoef = 0.8;
                        angleRangeHorizontal = 5;
                        angleRangeVertical = 5;
                    };
                };
            };
        };
    };
    class rhs_ammo_kab500kr: rhs_ammo_kab500od {
        hit = 8000;
        indirectHitRange = 15;
    };
    class rhs_ammo_kab500s: rhs_ammo_kab500 {
        flightProfiles[] = {"Direct"};
        rhs_tv_guidance = "";
    };
    class rhs_ammo_rbk500_ao25: rhs_ammo_rbk250_ao1 {
        model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_Fly_F";
        proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
        submunitionAmmo[] = {"rhs_ammo_sub_ao25", 1};
        submunitionConeType[] = {"randomcenter", 63};
    };
    class rhs_ammo_rbk500_ofab50: rhs_ammo_rbk500_ao25 {
        submunitionAmmo[] = {"rhs_ammo_sub_ofab50", 1};
        submunitionConeType[] = {"randomcenter", 10};
    };
    class rhs_ammo_rbk500_spbed: rhs_ammo_rbk500_ao25 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk500_spbed";
        submunitionAmmo[] = {"rhs_ammo_sub_spbed", 1};
        submunitionConeType[] = {"randomcenter", 12};
        submunitionConeAngle = 60;
    };
    class rhs_ammo_rbk500_ptab1m: rhs_ammo_rbk250_ptab25 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_rbk500_ptab";
        proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
        submunitionAmmo[] = {
            "rhs_ammo_sub_ptab1m",
            0.94,
            "rhs_ammo_ptab1m_uxo_deploy",
            0.06
        };
        submunitionConeAngle = 8;
        submunitionConeType[] = {"randomcenter", 136};
    };
    class rhs_ammo_rbk500_zab25t: rhs_ammo_rbk500_ao25 {
        submunitionAmmo[] = {"rhs_ammo_sub_zab25t_deploy", 1};
        submunitionConeType[] = {"randomcenter", 57};
    };
    class rhs_ammo_sub_ao25: rhs_ammo_sub_ao1 {
        hit = 20;
        indirectHit = 15;
        indirectHitRange = 7;
        model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
    };
    class rhs_ammo_sub_ofab50: rhs_ammo_sub_ao1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ofab50ud";
        hit = 400;
        indirectHit = 215;
        indirectHitRange = 12;
    };
    class M_Mo_155mm_AT;
    class rhs_ammo_sub_spbed: M_Mo_155mm_AT {
        submunitionAmmo = "rhs_ammo_sub_spbed_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        hit = 60;
        indirectHitRange = 5;
        autoSeekTarget = 1;
        lockSeekRadius = 450;
        weaponLockSystem = 2;
        missileLockCone = 30;
        missileKeepLockedCone = 60;
        missileLockMaxDistance = 400;
        missileLockMinDistance = 10;
        missileLockMaxSpeed = 35;
        weaponType = "missileAA";
        class Components {
            class SensorsManagerComponent {
                class Components {
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 2000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 2000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 15;
                        angleRangeHorizontal = 180;
                        angleRangeVertical = 180;
                        nightRangeCoef = 1;
                    };
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 500;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 15;
                        angleRangeHorizontal = 30;
                        angleRangeVertical = 30;
                    };
                };
            };
        };
    };
    class rhs_ammo_sub_spbed_penetrator: rhs_ammo_cluster_penetrator {
        hit = 130;
        submunitionConeType[] = {"randomcenter", 12};
        caliber = 23.4667;
    };
    class rhs_ammo_sub_ptab1m: rhs_ammo_sub_ptab25m {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab1m";
        submunitionAmmo = "rhs_ammo_sub_ptab1m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        hit = 60;
        indirectHitRange = 5;
    };
    class rhs_ammo_sub_ptab1m_penetrator: rhs_ammo_cluster_penetrator {
        hit = 130;
        submunitionConeType[] = {"randomcenter", 5};
        caliber = 17.8667;
    };
    class rhs_ammo_ptab1m_uxo_deploy: UXO_deploy_BombCluster_base_F {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab1m";
        submunitionAmmo[] = {
            "rhs_ammo_uxo_ptab1m_1_deploy",
            0.34,
            "rhs_ammo_uxo_ptab1m_2_deploy",
            0.33,
            "rhs_ammo_uxo_ptab1m_3_deploy",
            0.33
        };
    };
    class rhs_ammo_uxo_ptab1m_1_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_1";
        submunitionAmmo = "rhs_ammo_uxo_ptab1m_1";
    };
    class rhs_ammo_uxo_ptab1m_1: APERSMine_Range_Ammo {
        hit = 60;
        indirectHit = 8;
        indirectHitRange = 5;
        icon = "iconExplosiveUXO";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_1";
        mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3";
        defaultMagazine = "";
        mineTrigger = "UXOTrigger1";
        mineCanBeReactivated = 0;
        mineFloating = 10000000;
    };
    class rhs_ammo_uxo_ptab1m_2_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_2";
        submunitionAmmo = "rhs_ammo_uxo_ptab1m_2";
    };
    class rhs_ammo_uxo_ptab1m_2: rhs_ammo_uxo_ptab1m_1 {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_2";
        mineTrigger = "UXOTrigger2";
    };
    class rhs_ammo_uxo_ptab1m_3_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3";
        submunitionAmmo = "rhs_ammo_uxo_ptab1m_3";
    };
    class rhs_ammo_uxo_ptab1m_3: rhs_ammo_uxo_ptab1m_1 {
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3";
        mineTrigger = "UXOTrigger3";
    };
    class rhs_ammo_kmgu2_ao25: rhs_ammo_rbk250_ao1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ao25_x12_fly";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_ao25_x12";
        submunitionAmmo[] = {"rhs_ammo_sub_ao25", 1};
        submunitionConeType[] = {"poissondisccenter", 12};
        triggerTime = 2.5;
        submunitionConeAngle = 14;
        triggerSpeedCoef[] = {0.8, 1.1};
    };
    class rhs_ammo_kmgu2_ptab1m: rhs_ammo_kmgu2_ao25 {
        submunitionConeAngle = 8;
        submunitionAmmo[] = {
            "rhs_ammo_sub_ptab1m",
            0.94,
            "rhs_ammo_ptab1m_uxo_deploy",
            0.06
        };
        submunitionConeType[] = {"random", 12};
    };
    class rhs_ammo_kmgu2_pfm1: rhs_ammo_kmgu2_ao25 {
        submunitionAmmo[] = {"rhs_ammo_pfm1_deploy", 1};
        submunitionConeType[] = {"random", 40};
    };
    class rhs_ammo_kmgu2_ptm1: rhs_ammo_kmgu2_ao25 {
        submunitionAmmo[] = {"rhs_ammo_ptm1_deploy", 1};
        submunitionConeType[] = {"random", 12};
    };
    class rhs_ammo_pfm1_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1";
        submunitionAmmo = "rhs_ammo_pfm1";
    };
    class rhs_ammo_ptm1_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1";
        submunitionAmmo = "rhs_ammo_ptm1";
    };
    class rhs_ammo_ptm3_deploy: ShotDeployBase {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1";
        submunitionAmmo = "rhs_ammo_ptm3";
    };
    class rhs_ammo_pfm1: APERSMine_Range_Ammo {
        hit = 9;
        indirectHit = 8;
        indirectHitRange = 2;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d";
        mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d";
        defaultMagazine = "rhs_mag_mine_pfm1";
        cost = 200;
        mineInconspicuousness = 60;
        mineTrigger = "RangeTriggerShort";
        mineFloating = 10000000;
    };
    class rhs_ammo_ptm1: ATMine_Range_Ammo {
        hit = 2000;
        indirectHit = 1250;
        indirectHitRange = 1;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d";
        mineModelDisabled = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d";
        defaultMagazine = "rhs_mag_mine_ptm1";
        mineTrigger = "rhs_tm62Trigger";
        mineFloating = 10000000;
    };
    class rhs_ammo_ptm3: rhs_ammo_ptm1 {
        hit = 3000;
        indirectHit = 1250;
        indirectHitRange = 1;
    };
    class rhs_ammo_ptb1150: rhs_ammo_fab250 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptb1150";
        proxyShape = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptb1150";
        sideAirFriction = -1;
        hit = 50;
        indirectHit = 10;
        weaponType = "special";
        explosive = 0;
    };
    class rhs_ammo_ptb1500: MissileBase {
        simulation = "shotMissile";
        maverickWeaponIndexOffset = 10;
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        thrustTime = 0;
        thrust = 0;
        maxspeed = 0;
        timetolive = 0;
        maneuvrability = 0;
        model = "\A3\Weapons_F\empty.p3d";
        proxyShape = "\A3\Weapons_F\empty.p3d";
        airlock = 0;
        laserLock = 0;
        irLock = 0;
        initTime = 0;
        minRange = 0;
        minRangeProbab = 0;
        midRange = 0;
        midRangeProbab = 0;
        maxRange = 0;
        maxRangeProbab = 0;
        sideAirFriction = 0;
    };
};
class CfgMagazines {
    class SmokeLauncherMag;
    class VehicleMagazine;
    class rhs_mag_s5_32: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_S5";
        displayNameShort = "$STR_RHS_MAG_SH_S5";
        descriptionShort = "General purpose";
        ammo = "rhs_ammo_s5";
        count = 64;
        maxleadspeed = 200;
        initSpeed = 44;
        nameSound = "rockets";
        weight = 256;
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С5";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С5";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonValue1 {
                            type = "text";
                            source = "pylonAmmo";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С5";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.12}, 1};
                            right[] = {{0.035, 0.12}, 1};
                            down[] = {{-0.005, 0.16}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0305474}, 1},
                                {"Center", {0.0135, -0.0264541}, 1},
                                {"Center", {0.023382, -0.0152737}, 1},
                                {"Center", {0.027, 0}, 1},
                                {"Center", {0.023382, 0.0152737}, 1},
                                {"Center", {0.0135, 0.0264541}, 1},
                                {"Center", {0, 0.0305474}, 1},
                                {"Center", {-0.0135, 0.0264541}, 1},
                                {"Center", {-0.023382, 0.0152737}, 1},
                                {"Center", {-0.027, 0}, 1},
                                {"Center", {-0.023382, -0.0152737}, 1},
                                {"Center", {-0.0135, -0.0264541}, 1},
                                {"Center", {0, -0.0305474}, 1},
                                {},
                                {"Center", {0.0124097, -0.0140402}, 1},
                                {"Center", {0.0105005, -0.0118802}, 1},
                                {},
                                {"Center", {0.01755, 0.000000000867926}, 1},
                                {"Center", {0.01485, 0.000000000734399}, 1},
                                {},
                                {"Center", {0.0124097, 0.0140402}, 1},
                                {"Center", {0.0105005, 0.0118802}, 1},
                                {},
                                {"Center", {-0.00000000153427, 0.0198558}, 1},
                                {"Center", {-0.00000000129823, 0.0168011}, 1},
                                {},
                                {"Center", {-0.0124097, 0.0140402}, 1},
                                {"Center", {-0.0105005, 0.0118802}, 1},
                                {},
                                {"Center", {-0.01755, -0.000000000236779}, 1},
                                {"Center", {-0.01485, -0.000000000200351}, 1},
                                {},
                                {"Center", {-0.0124097, -0.0140402}, 1},
                                {"Center", {-0.0105005, -0.0118802}, 1},
                                {},
                                {"Center", {0.00000000306854, -0.0198558}, 1},
                                {"Center", {0.00000000259646, -0.0168011}, 1},
                                {},
                                {"Center", {0.00668216, -0.00756011}, 1},
                                {"Center", {0.00477297, -0.00540008}, 1},
                                {},
                                {"Center", {0.00668216, 0.00756011}, 1},
                                {"Center", {0.00477297, 0.00540008}, 1},
                                {},
                                {"Center", {-0.00668216, 0.00756011}, 1},
                                {"Center", {-0.00477297, 0.00540008}, 1},
                                {},
                                {"Center", {-0.00668216, -0.00756011}, 1},
                                {"Center", {-0.00477297, -0.00540008}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                };
            };
        };
    };
    class rhs_mag_s5_16: rhs_mag_s5_32 {
        count = 16;
        weight = 84;
    };
    class rhs_mag_s5_64: rhs_mag_s5_32 {
        count = 64;
        weight = 276;
    };
    class rhs_mag_s5_128: rhs_mag_s5_32 {
        count = 128;
        weight = 532;
    };
    class rhs_mag_s5_192: rhs_mag_s5_32 {
        count = 192;
        weight = 788;
    };
    class rhs_mag_s5_m1_32: rhs_mag_s5_32 {
        displayName = "$STR_RHS_MAG_s5m1";
        displayNameShort = "$STR_RHS_MAG_SH_s5m1";
        descriptionShort = "HE-FRAG";
        ammo = "rhs_ammo_s5m1";
        count = 64;
        weight = 247.04;
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С5М1";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С5М1";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonValue1 {
                            type = "text";
                            source = "pylonAmmo";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С5М1";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.12}, 1};
                            right[] = {{0.035, 0.12}, 1};
                            down[] = {{-0.005, 0.16}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0305474}, 1},
                                {"Center", {0.0135, -0.0264541}, 1},
                                {"Center", {0.023382, -0.0152737}, 1},
                                {"Center", {0.027, 0}, 1},
                                {"Center", {0.023382, 0.0152737}, 1},
                                {"Center", {0.0135, 0.0264541}, 1},
                                {"Center", {0, 0.0305474}, 1},
                                {"Center", {-0.0135, 0.0264541}, 1},
                                {"Center", {-0.023382, 0.0152737}, 1},
                                {"Center", {-0.027, 0}, 1},
                                {"Center", {-0.023382, -0.0152737}, 1},
                                {"Center", {-0.0135, -0.0264541}, 1},
                                {"Center", {0, -0.0305474}, 1},
                                {},
                                {"Center", {0.0124097, -0.0140402}, 1},
                                {"Center", {0.0105005, -0.0118802}, 1},
                                {},
                                {"Center", {0.01755, 0.000000000867926}, 1},
                                {"Center", {0.01485, 0.000000000734399}, 1},
                                {},
                                {"Center", {0.0124097, 0.0140402}, 1},
                                {"Center", {0.0105005, 0.0118802}, 1},
                                {},
                                {"Center", {-0.00000000153427, 0.0198558}, 1},
                                {"Center", {-0.00000000129823, 0.0168011}, 1},
                                {},
                                {"Center", {-0.0124097, 0.0140402}, 1},
                                {"Center", {-0.0105005, 0.0118802}, 1},
                                {},
                                {"Center", {-0.01755, -0.000000000236779}, 1},
                                {"Center", {-0.01485, -0.000000000200351}, 1},
                                {},
                                {"Center", {-0.0124097, -0.0140402}, 1},
                                {"Center", {-0.0105005, -0.0118802}, 1},
                                {},
                                {"Center", {0.00000000306854, -0.0198558}, 1},
                                {"Center", {0.00000000259646, -0.0168011}, 1},
                                {},
                                {"Center", {0.00668216, -0.00756011}, 1},
                                {"Center", {0.00477297, -0.00540008}, 1},
                                {},
                                {"Center", {0.00668216, 0.00756011}, 1},
                                {"Center", {0.00477297, 0.00540008}, 1},
                                {},
                                {"Center", {-0.00668216, 0.00756011}, 1},
                                {"Center", {-0.00477297, 0.00540008}, 1},
                                {},
                                {"Center", {-0.00668216, -0.00756011}, 1},
                                {"Center", {-0.00477297, -0.00540008}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                };
            };
        };
    };
    class rhs_mag_s5_m1_16: rhs_mag_s5_m1_32 {
        count = 16;
        weight = 81.76;
    };
    class rhs_mag_s5_m1_64: rhs_mag_s5_m1_32 {
        count = 64;
        weight = 267.04;
    };
    class rhs_mag_s5_m1_128: rhs_mag_s5_m1_32 {
        count = 128;
        weight = 514.08;
    };
    class rhs_mag_s5_m1_192: rhs_mag_s5_m1_32 {
        count = 192;
        weight = 761.12;
    };
    class rhs_mag_s5_k1_32: rhs_mag_s5_32 {
        displayName = "$STR_RHS_MAG_s5k1";
        displayNameShort = "$STR_RHS_MAG_SH_s5k1";
        descriptionShort = "HEAT (Penetration: 130mm RHA)";
        ammo = "rhs_ammo_s5k1";
        count = 64;
        weight = 232.96;
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С5К1";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С5К1";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonValue1 {
                            type = "text";
                            source = "pylonAmmo";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С5К1";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.12}, 1};
                            right[] = {{0.035, 0.12}, 1};
                            down[] = {{-0.005, 0.16}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0305474}, 1},
                                {"Center", {0.0135, -0.0264541}, 1},
                                {"Center", {0.023382, -0.0152737}, 1},
                                {"Center", {0.027, 0}, 1},
                                {"Center", {0.023382, 0.0152737}, 1},
                                {"Center", {0.0135, 0.0264541}, 1},
                                {"Center", {0, 0.0305474}, 1},
                                {"Center", {-0.0135, 0.0264541}, 1},
                                {"Center", {-0.023382, 0.0152737}, 1},
                                {"Center", {-0.027, 0}, 1},
                                {"Center", {-0.023382, -0.0152737}, 1},
                                {"Center", {-0.0135, -0.0264541}, 1},
                                {"Center", {0, -0.0305474}, 1},
                                {},
                                {"Center", {0.0124097, -0.0140402}, 1},
                                {"Center", {0.0105005, -0.0118802}, 1},
                                {},
                                {"Center", {0.01755, 0.000000000867926}, 1},
                                {"Center", {0.01485, 0.000000000734399}, 1},
                                {},
                                {"Center", {0.0124097, 0.0140402}, 1},
                                {"Center", {0.0105005, 0.0118802}, 1},
                                {},
                                {"Center", {-0.00000000153427, 0.0198558}, 1},
                                {"Center", {-0.00000000129823, 0.0168011}, 1},
                                {},
                                {"Center", {-0.0124097, 0.0140402}, 1},
                                {"Center", {-0.0105005, 0.0118802}, 1},
                                {},
                                {"Center", {-0.01755, -0.000000000236779}, 1},
                                {"Center", {-0.01485, -0.000000000200351}, 1},
                                {},
                                {"Center", {-0.0124097, -0.0140402}, 1},
                                {"Center", {-0.0105005, -0.0118802}, 1},
                                {},
                                {"Center", {0.00000000306854, -0.0198558}, 1},
                                {"Center", {0.00000000259646, -0.0168011}, 1},
                                {},
                                {"Center", {0.00668216, -0.00756011}, 1},
                                {"Center", {0.00477297, -0.00540008}, 1},
                                {},
                                {"Center", {0.00668216, 0.00756011}, 1},
                                {"Center", {0.00477297, 0.00540008}, 1},
                                {},
                                {"Center", {-0.00668216, 0.00756011}, 1},
                                {"Center", {-0.00477297, 0.00540008}, 1},
                                {},
                                {"Center", {-0.00668216, -0.00756011}, 1},
                                {"Center", {-0.00477297, -0.00540008}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                };
            };
        };
    };
    class rhs_mag_s5_k1_16: rhs_mag_s5_k1_32 {
        count = 16;
        weight = 78.24;
    };
    class rhs_mag_s5_k1_64: rhs_mag_s5_k1_32 {
        count = 64;
        weight = 252.96;
    };
    class rhs_mag_s5_k1_128: rhs_mag_s5_k1_32 {
        count = 128;
        weight = 485.92;
    };
    class rhs_mag_s5_k1_192: rhs_mag_s5_k1_32 {
        count = 192;
        weight = 718.88;
    };
    class rhs_mag_s5_ko_32: rhs_mag_s5_32 {
        displayName = "$STR_RHS_MAG_s5ko";
        displayNameShort = "$STR_RHS_MAG_SH_s5ko";
        descriptionShort = "HEAT-FRAG (Penetration: 130mm RHA)";
        ammo = "rhs_ammo_s5ko";
        count = 64;
        weight = 283.52;
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С5КО";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С5КО";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonValue1 {
                            type = "text";
                            source = "pylonAmmo";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С5КО";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.12}, 1};
                            right[] = {{0.035, 0.12}, 1};
                            down[] = {{-0.005, 0.16}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0305474}, 1},
                                {"Center", {0.0135, -0.0264541}, 1},
                                {"Center", {0.023382, -0.0152737}, 1},
                                {"Center", {0.027, 0}, 1},
                                {"Center", {0.023382, 0.0152737}, 1},
                                {"Center", {0.0135, 0.0264541}, 1},
                                {"Center", {0, 0.0305474}, 1},
                                {"Center", {-0.0135, 0.0264541}, 1},
                                {"Center", {-0.023382, 0.0152737}, 1},
                                {"Center", {-0.027, 0}, 1},
                                {"Center", {-0.023382, -0.0152737}, 1},
                                {"Center", {-0.0135, -0.0264541}, 1},
                                {"Center", {0, -0.0305474}, 1},
                                {},
                                {"Center", {0.0124097, -0.0140402}, 1},
                                {"Center", {0.0105005, -0.0118802}, 1},
                                {},
                                {"Center", {0.01755, 0.000000000867926}, 1},
                                {"Center", {0.01485, 0.000000000734399}, 1},
                                {},
                                {"Center", {0.0124097, 0.0140402}, 1},
                                {"Center", {0.0105005, 0.0118802}, 1},
                                {},
                                {"Center", {-0.00000000153427, 0.0198558}, 1},
                                {"Center", {-0.00000000129823, 0.0168011}, 1},
                                {},
                                {"Center", {-0.0124097, 0.0140402}, 1},
                                {"Center", {-0.0105005, 0.0118802}, 1},
                                {},
                                {"Center", {-0.01755, -0.000000000236779}, 1},
                                {"Center", {-0.01485, -0.000000000200351}, 1},
                                {},
                                {"Center", {-0.0124097, -0.0140402}, 1},
                                {"Center", {-0.0105005, -0.0118802}, 1},
                                {},
                                {"Center", {0.00000000306854, -0.0198558}, 1},
                                {"Center", {0.00000000259646, -0.0168011}, 1},
                                {},
                                {"Center", {0.00668216, -0.00756011}, 1},
                                {"Center", {0.00477297, -0.00540008}, 1},
                                {},
                                {"Center", {0.00668216, 0.00756011}, 1},
                                {"Center", {0.00477297, 0.00540008}, 1},
                                {},
                                {"Center", {-0.00668216, 0.00756011}, 1},
                                {"Center", {-0.00477297, 0.00540008}, 1},
                                {},
                                {"Center", {-0.00668216, -0.00756011}, 1},
                                {"Center", {-0.00477297, -0.00540008}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                };
            };
        };
    };
    class rhs_mag_s5_ko_16: rhs_mag_s5_ko_32 {
        count = 16;
        weight = 90.88;
    };
    class rhs_mag_s5_ko_64: rhs_mag_s5_ko_32 {
        count = 64;
        weight = 303.52;
    };
    class rhs_mag_s5_ko_128: rhs_mag_s5_ko_32 {
        count = 128;
        weight = 587.04;
    };
    class rhs_mag_s5_ko_192: rhs_mag_s5_ko_32 {
        count = 192;
        weight = 870.56;
    };
    class rhs_mag_s8_12: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_S8KOM";
        displayNameShort = "$STR_RHS_MAG_SH_S8KOM";
        descriptionShort = "HEAT (Penetration: 350mm RHA)";
        ammo = "rhs_ammo_s8";
        count = 12;
        initSpeed = 44;
        nameSound = "rockets";
        maxleadspeed = 30;
        weight = 155.6;
    };
    class rhs_mag_s8_20: rhs_mag_s8_12 {
        count = 20;
        weight = 246;
    };
    class rhs_mag_s8_40: rhs_mag_s8_12 {
        count = 40;
        weight = 472;
    };
    class rhs_mag_s8_80: rhs_mag_s8_12 {
        count = 80;
        weight = 924;
    };
    class rhs_mag_s8_120: rhs_mag_s8_12 {
        count = 120;
        weight = 1376;
    };
    class rhs_mag_s8_DF_20: rhs_mag_s8_12 {
        count = 20;
        weight = 268;
        displayName = "$STR_RHS_MAG_S8DF";
        displayNameShort = "$STR_RHS_MAG_SH_S8DF";
        descriptionShort = "Thermobaric";
        ammo = "rhs_ammo_s8df";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С8ДФ";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С8ДФ";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonValue1 {
                            type = "text";
                            source = "pylonAmmo";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С8ДФ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.12}, 1};
                            right[] = {{0.035, 0.12}, 1};
                            down[] = {{-0.005, 0.16}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0339416}, 1},
                                {"Center", {0.015, -0.0293934}, 1},
                                {"Center", {0.02598, -0.0169708}, 1},
                                {"Center", {0.03, 0}, 1},
                                {"Center", {0.02598, 0.0169708}, 1},
                                {"Center", {0.015, 0.0293934}, 1},
                                {"Center", {0, 0.0339416}, 1},
                                {"Center", {-0.015, 0.0293934}, 1},
                                {"Center", {-0.02598, 0.0169708}, 1},
                                {"Center", {-0.03, 0}, 1},
                                {"Center", {-0.02598, -0.0169708}, 1},
                                {"Center", {-0.015, -0.0293934}, 1},
                                {"Center", {0, -0.0339416}, 1},
                                {},
                                {"Center", {0.0137886, -0.0156002}, 1},
                                {"Center", {0.0116673, -0.0132002}, 1},
                                {},
                                {"Center", {0.0195, 0.000000000964363}, 1},
                                {"Center", {0.0165, 0.000000000815999}, 1},
                                {},
                                {"Center", {0.0137886, 0.0156002}, 1},
                                {"Center", {0.0116673, 0.0132002}, 1},
                                {},
                                {"Center", {-0.00000000170474, 0.022062}, 1},
                                {"Center", {-0.00000000144248, 0.0186679}, 1},
                                {},
                                {"Center", {-0.0137886, 0.0156002}, 1},
                                {"Center", {-0.0116673, 0.0132002}, 1},
                                {},
                                {"Center", {-0.0195, -0.000000000263087}, 1},
                                {"Center", {-0.0165, -0.000000000222612}, 1},
                                {},
                                {"Center", {-0.0137886, -0.0156002}, 1},
                                {"Center", {-0.0116673, -0.0132002}, 1},
                                {},
                                {"Center", {0.00000000340949, -0.022062}, 1},
                                {"Center", {0.00000000288495, -0.0186679}, 1},
                                {},
                                {"Center", {0.00742462, -0.00840012}, 1},
                                {"Center", {0.0053033, -0.00600008}, 1},
                                {},
                                {"Center", {0.00742462, 0.00840012}, 1},
                                {"Center", {0.0053033, 0.00600008}, 1},
                                {},
                                {"Center", {-0.00742462, 0.00840012}, 1},
                                {"Center", {-0.0053033, 0.00600009}, 1},
                                {},
                                {"Center", {-0.00742462, -0.00840012}, 1},
                                {"Center", {-0.0053033, -0.00600008}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                };
            };
        };
    };
    class rhs_mag_s8_DF_40: rhs_mag_s8_DF_20 {
        count = 40;
        weight = 556;
    };
    class rhs_mag_s8_DF_80: rhs_mag_s8_DF_20 {
        count = 80;
        weight = 1092;
    };
    class rhs_mag_s8_T_20: rhs_mag_s8_12 {
        count = 20;
        weight = 320;
        displayName = "$STR_RHS_MAG_S8T";
        displayNameShort = "$STR_RHS_MAG_SH_S8T";
        descriptionShort = "Tandem HEAT (Penetration: 440mm RHA)";
        ammo = "rhs_ammo_s8t";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С8Т";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С8Т";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonValue1 {
                            type = "text";
                            source = "pylonAmmo";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С8Т";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.12}, 1};
                            right[] = {{0.035, 0.12}, 1};
                            down[] = {{-0.005, 0.16}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0339416}, 1},
                                {"Center", {0.015, -0.0293934}, 1},
                                {"Center", {0.02598, -0.0169708}, 1},
                                {"Center", {0.03, 0}, 1},
                                {"Center", {0.02598, 0.0169708}, 1},
                                {"Center", {0.015, 0.0293934}, 1},
                                {"Center", {0, 0.0339416}, 1},
                                {"Center", {-0.015, 0.0293934}, 1},
                                {"Center", {-0.02598, 0.0169708}, 1},
                                {"Center", {-0.03, 0}, 1},
                                {"Center", {-0.02598, -0.0169708}, 1},
                                {"Center", {-0.015, -0.0293934}, 1},
                                {"Center", {0, -0.0339416}, 1},
                                {},
                                {"Center", {0.0137886, -0.0156002}, 1},
                                {"Center", {0.0116673, -0.0132002}, 1},
                                {},
                                {"Center", {0.0195, 0.000000000964363}, 1},
                                {"Center", {0.0165, 0.000000000815999}, 1},
                                {},
                                {"Center", {0.0137886, 0.0156002}, 1},
                                {"Center", {0.0116673, 0.0132002}, 1},
                                {},
                                {"Center", {-0.00000000170474, 0.022062}, 1},
                                {"Center", {-0.00000000144248, 0.0186679}, 1},
                                {},
                                {"Center", {-0.0137886, 0.0156002}, 1},
                                {"Center", {-0.0116673, 0.0132002}, 1},
                                {},
                                {"Center", {-0.0195, -0.000000000263087}, 1},
                                {"Center", {-0.0165, -0.000000000222612}, 1},
                                {},
                                {"Center", {-0.0137886, -0.0156002}, 1},
                                {"Center", {-0.0116673, -0.0132002}, 1},
                                {},
                                {"Center", {0.00000000340949, -0.022062}, 1},
                                {"Center", {0.00000000288495, -0.0186679}, 1},
                                {},
                                {"Center", {0.00742462, -0.00840012}, 1},
                                {"Center", {0.0053033, -0.00600008}, 1},
                                {},
                                {"Center", {0.00742462, 0.00840012}, 1},
                                {"Center", {0.0053033, 0.00600008}, 1},
                                {},
                                {"Center", {-0.00742462, 0.00840012}, 1},
                                {"Center", {-0.0053033, 0.00600009}, 1},
                                {},
                                {"Center", {-0.00742462, -0.00840012}, 1},
                                {"Center", {-0.0053033, -0.00600008}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                };
            };
        };
    };
    class rhs_mag_s8_T_40: rhs_mag_s8_T_20 {
        count = 40;
        weight = 620;
    };
    class rhs_mag_s8_T_80: rhs_mag_s8_T_20 {
        count = 80;
        weight = 1220;
    };
    class rhs_mag_s13b_10: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_S13B";
        displayNameShort = "$STR_RHS_MAG_SH_S13B";
        descriptionShort = "Obstacle penetration/HE";
        ammo = "rhs_ammo_s13b";
        count = 10;
        maxleadspeed = 200;
        initSpeed = 44;
        nameSound = "rockets";
        weight = 600;
    };
    class rhs_mag_s13d_10: rhs_mag_s13b_10 {
        displayName = "$STR_RHS_MAG_S13D";
        displayNameShort = "$STR_RHS_MAG_SH_S13D";
        descriptionShort = "Thermobaric (35-40kg TNT equivalent). Introduced in 1995";
        ammo = "rhs_ammo_s13d";
        weight = 680;
    };
    class rhs_mag_s13df_10: rhs_mag_s13b_10 {
        displayName = "$STR_RHS_MAG_S13DF";
        displayNameShort = "$STR_RHS_MAG_SH_S13DF";
        descriptionShort = "Thermobaric (35-40kg TNT equivalent). Introduced in 2018";
        ammo = "rhs_ammo_s13df";
        weight = 680;
    };
    class rhs_mag_s13t_10: rhs_mag_s13b_10 {
        displayName = "$STR_RHS_MAG_S13T";
        displayNameShort = "$STR_RHS_MAG_SH_S13T";
        descriptionShort = "Tandem HEAT (Penetration: 600mm RHA)";
        ammo = "rhs_ammo_s13t";
        weight = 750;
    };
    class rhs_mag_s13of_10: rhs_mag_s13b_10 {
        displayName = "$STR_RHS_MAG_S13OF";
        displayNameShort = "$STR_RHS_MAG_SH_S13OF";
        descriptionShort = "HE-FRAG. Introduced in 1993";
        ammo = "rhs_ammo_s13of";
        weight = 690;
    };
    class rhs_mag_ub16_s5: rhs_mag_s5_32 {
        ammo = "rhs_ammo_s5";
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_ub16.p3d";
        count = 16;
        mass = 118;
        weight = 118;
        pylonWeapon = "rhs_weap_s5";
        hardpoints[] = {"RHS_HP_UB16"};
    };
    class rhs_mag_ub16_s5m1: rhs_mag_ub16_s5 {
        displayName = "$STR_RHS_MAG_s5m1";
        displayNameShort = "$STR_RHS_MAG_SH_s5m1";
        ammo = "rhs_ammo_s5m1";
        mass = 115.76;
        weight = 115.76;
        pylonWeapon = "rhs_weap_s5m1";
    };
    class rhs_mag_ub16_s5k1: rhs_mag_ub16_s5 {
        displayName = "$STR_RHS_MAG_s5k1";
        displayNameShort = "$STR_RHS_MAG_SH_s5k1";
        ammo = "rhs_ammo_s5k1";
        mass = 112.24;
        weight = 112.24;
        pylonWeapon = "rhs_weap_s5k1";
    };
    class rhs_mag_ub16_s5ko: rhs_mag_ub16_s5 {
        displayName = "$STR_RHS_MAG_s5ko";
        displayNameShort = "$STR_RHS_MAG_SH_s5ko";
        ammo = "rhs_ammo_s5ko";
        mass = 124.88;
        weight = 124.88;
        pylonWeapon = "rhs_weap_s5ko";
    };
    class rhs_mag_ub16_ka52_s5: rhs_mag_ub16_s5 {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_ub16_ka52.p3d";
        hardpoints[] = {"RHS_HP_UB16_KA52"};
    };
    class rhs_mag_ub16_ka52_s5m1: rhs_mag_ub16_ka52_s5 {
        displayName = "$STR_RHS_MAG_s5m1";
        displayNameShort = "$STR_RHS_MAG_SH_s5m1";
        ammo = "rhs_ammo_s5m1";
        mass = 115.76;
        weight = 115.76;
        pylonWeapon = "rhs_weap_s5m1";
    };
    class rhs_mag_ub16_ka52_s5k1: rhs_mag_ub16_ka52_s5 {
        displayName = "$STR_RHS_MAG_s5k1";
        displayNameShort = "$STR_RHS_MAG_SH_s5k1";
        ammo = "rhs_ammo_s5k1";
        mass = 112.24;
        weight = 112.24;
        pylonWeapon = "rhs_weap_s5k1";
    };
    class rhs_mag_ub16_ka52_s5ko: rhs_mag_ub16_ka52_s5 {
        displayName = "$STR_RHS_MAG_s5ko";
        displayNameShort = "$STR_RHS_MAG_SH_s5ko";
        ammo = "rhs_ammo_s5ko";
        mass = 124.88;
        weight = 124.88;
        pylonWeapon = "rhs_weap_s5ko";
    };
    class rhs_mag_ub16_bd3_umk2a_s5: rhs_mag_ub16_s5 {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_ub16.p3d";
        hardpoints[] = {"RHS_HP_UB16_BD3_UMK2A"};
    };
    class rhs_mag_ub16_bd3_umk2a_s5m1: rhs_mag_ub16_bd3_umk2a_s5 {
        displayName = "$STR_RHS_MAG_s5m1";
        displayNameShort = "$STR_RHS_MAG_SH_s5m1";
        ammo = "rhs_ammo_s5m1";
        mass = 115.76;
        weight = 115.76;
        pylonWeapon = "rhs_weap_s5m1";
    };
    class rhs_mag_ub16_bd3_umk2a_s5k1: rhs_mag_ub16_bd3_umk2a_s5 {
        displayName = "$STR_RHS_MAG_s5k1";
        displayNameShort = "$STR_RHS_MAG_SH_s5k1";
        ammo = "rhs_ammo_s5k1";
        mass = 112.24;
        weight = 112.24;
        pylonWeapon = "rhs_weap_s5k1";
    };
    class rhs_mag_ub16_bd3_umk2a_s5ko: rhs_mag_ub16_bd3_umk2a_s5 {
        displayName = "$STR_RHS_MAG_s5ko";
        displayNameShort = "$STR_RHS_MAG_SH_s5ko";
        ammo = "rhs_ammo_s5ko";
        mass = 124.88;
        weight = 124.88;
        pylonWeapon = "rhs_weap_s5ko";
    };
    class rhs_mag_ub32_s5: rhs_mag_s5_32 {
        ammo = "rhs_ammo_s5";
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_ub32.p3d";
        count = 32;
        mass = 237;
        weight = 237;
        pylonWeapon = "rhs_weap_s5";
        hardpoints[] = {"RHS_HP_UB32"};
    };
    class rhs_mag_ub32_s5m1: rhs_mag_ub32_s5 {
        displayName = "$STR_RHS_MAG_s5m1";
        displayNameShort = "$STR_RHS_MAG_SH_s5m1";
        ammo = "rhs_ammo_s5m1";
        mass = 232.52;
        weight = 232.52;
        pylonWeapon = "rhs_weap_s5m1";
    };
    class rhs_mag_ub32_s5k1: rhs_mag_ub32_s5 {
        displayName = "$STR_RHS_MAG_s5k1";
        displayNameShort = "$STR_RHS_MAG_SH_s5k1";
        ammo = "rhs_ammo_s5k1";
        mass = 225.48;
        weight = 225.48;
        pylonWeapon = "rhs_weap_s5k1";
    };
    class rhs_mag_ub32_s5ko: rhs_mag_ub32_s5 {
        displayName = "$STR_RHS_MAG_s5ko";
        displayNameShort = "$STR_RHS_MAG_SH_s5ko";
        ammo = "rhs_ammo_s5ko";
        mass = 250.76;
        weight = 250.76;
        pylonWeapon = "rhs_weap_s5ko";
    };
    class rhs_mag_ub32_ka52_s5: rhs_mag_ub32_s5 {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_ub32_ka52.p3d";
        hardpoints[] = {"RHS_HP_UB32_KA52"};
    };
    class rhs_mag_ub32_ka52_s5m1: rhs_mag_ub32_ka52_s5 {
        displayName = "$STR_RHS_MAG_s5m1";
        displayNameShort = "$STR_RHS_MAG_SH_s5m1";
        ammo = "rhs_ammo_s5m1";
        mass = 232.52;
        weight = 232.52;
        pylonWeapon = "rhs_weap_s5m1";
    };
    class rhs_mag_ub32_ka52_s5k1: rhs_mag_ub32_ka52_s5 {
        displayName = "$STR_RHS_MAG_s5k1";
        displayNameShort = "$STR_RHS_MAG_SH_s5k1";
        ammo = "rhs_ammo_s5k1";
        mass = 225.48;
        weight = 225.48;
        pylonWeapon = "rhs_weap_s5k1";
    };
    class rhs_mag_ub32_ka52_s5ko: rhs_mag_ub32_ka52_s5 {
        displayName = "$STR_RHS_MAG_s5ko";
        displayNameShort = "$STR_RHS_MAG_SH_s5ko";
        ammo = "rhs_ammo_s5ko";
        mass = 250.76;
        weight = 250.76;
        pylonWeapon = "rhs_weap_s5ko";
    };
    class rhs_mag_ub32_bd3_umk2a_s5: rhs_mag_ub32_s5 {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_ub32.p3d";
        hardpoints[] = {"RHS_HP_UB32_BD3_UMK2A"};
    };
    class rhs_mag_ub32_bd3_umk2a_s5m1: rhs_mag_ub32_bd3_umk2a_s5 {
        displayName = "$STR_RHS_MAG_s5m1";
        displayNameShort = "$STR_RHS_MAG_SH_s5m1";
        ammo = "rhs_ammo_s5m1";
        mass = 115.76;
        weight = 115.76;
        pylonWeapon = "rhs_weap_s5m1";
    };
    class rhs_mag_ub32_bd3_umk2a_s5k1: rhs_mag_ub32_bd3_umk2a_s5 {
        displayName = "$STR_RHS_MAG_s5k1";
        displayNameShort = "$STR_RHS_MAG_SH_s5k1";
        ammo = "rhs_ammo_s5k1";
        mass = 112.24;
        weight = 112.24;
        pylonWeapon = "rhs_weap_s5k1";
    };
    class rhs_mag_ub32_bd3_umk2a_s5ko: rhs_mag_ub32_bd3_umk2a_s5 {
        displayName = "$STR_RHS_MAG_s5ko";
        displayNameShort = "$STR_RHS_MAG_SH_s5ko";
        ammo = "rhs_ammo_s5ko";
        mass = 124.88;
        weight = 124.88;
        pylonWeapon = "rhs_weap_s5ko";
    };
    class rhs_mag_b8m1_s8kom: rhs_mag_s8_12 {
        ammo = "rhs_ammo_s8";
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b8m1.p3d";
        count = 20;
        mass = 376;
        weight = 376;
        pylonWeapon = "rhs_weap_s8";
        hardpoints[] = {"RHS_HP_B8M1"};
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С8КОМ";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С8КОМ";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonValue1 {
                            type = "text";
                            source = "pylonAmmo";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С8КОМ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.12}, 1};
                            right[] = {{0.035, 0.12}, 1};
                            down[] = {{-0.005, 0.16}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0339416}, 1},
                                {"Center", {0.015, -0.0293934}, 1},
                                {"Center", {0.02598, -0.0169708}, 1},
                                {"Center", {0.03, 0}, 1},
                                {"Center", {0.02598, 0.0169708}, 1},
                                {"Center", {0.015, 0.0293934}, 1},
                                {"Center", {0, 0.0339416}, 1},
                                {"Center", {-0.015, 0.0293934}, 1},
                                {"Center", {-0.02598, 0.0169708}, 1},
                                {"Center", {-0.03, 0}, 1},
                                {"Center", {-0.02598, -0.0169708}, 1},
                                {"Center", {-0.015, -0.0293934}, 1},
                                {"Center", {0, -0.0339416}, 1},
                                {},
                                {"Center", {0.0137886, -0.0156002}, 1},
                                {"Center", {0.0116673, -0.0132002}, 1},
                                {},
                                {"Center", {0.0195, 0.000000000964363}, 1},
                                {"Center", {0.0165, 0.000000000815999}, 1},
                                {},
                                {"Center", {0.0137886, 0.0156002}, 1},
                                {"Center", {0.0116673, 0.0132002}, 1},
                                {},
                                {"Center", {-0.00000000170474, 0.022062}, 1},
                                {"Center", {-0.00000000144248, 0.0186679}, 1},
                                {},
                                {"Center", {-0.0137886, 0.0156002}, 1},
                                {"Center", {-0.0116673, 0.0132002}, 1},
                                {},
                                {"Center", {-0.0195, -0.000000000263087}, 1},
                                {"Center", {-0.0165, -0.000000000222612}, 1},
                                {},
                                {"Center", {-0.0137886, -0.0156002}, 1},
                                {"Center", {-0.0116673, -0.0132002}, 1},
                                {},
                                {"Center", {0.00000000340949, -0.022062}, 1},
                                {"Center", {0.00000000288495, -0.0186679}, 1},
                                {},
                                {"Center", {0.00742462, -0.00840012}, 1},
                                {"Center", {0.0053033, -0.00600008}, 1},
                                {},
                                {"Center", {0.00742462, 0.00840012}, 1},
                                {"Center", {0.0053033, 0.00600008}, 1},
                                {},
                                {"Center", {-0.00742462, 0.00840012}, 1},
                                {"Center", {-0.0053033, 0.00600009}, 1},
                                {},
                                {"Center", {-0.00742462, -0.00840012}, 1},
                                {"Center", {-0.0053033, -0.00600008}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                };
            };
        };
    };
    class rhs_mag_b8m1_s8df: rhs_mag_b8m1_s8kom {
        displayName = "$STR_RHS_MAG_s8df";
        displayNameShort = "$STR_RHS_MAG_SH_s8df";
        ammo = "rhs_ammo_s8df";
        mass = 418;
        weight = 418;
        pylonWeapon = "rhs_weap_s8df";
    };
    class rhs_mag_b8m1_s8t: rhs_mag_b8m1_s8kom {
        displayName = "$STR_RHS_MAG_s8t";
        displayNameShort = "$STR_RHS_MAG_SH_s8t";
        ammo = "rhs_ammo_s8t";
        mass = 450;
        weight = 450;
        pylonWeapon = "rhs_weap_s8t";
    };
    class rhs_mag_b8m1_bd3_umk2a_s8kom: rhs_mag_b8m1_s8kom {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_b8m1.p3d";
        hardpoints[] = {"RHS_HP_B8M1_BD3_UMK2A"};
    };
    class rhs_mag_b8m1_bd3_umk2a_s8df: rhs_mag_b8m1_bd3_umk2a_s8kom {
        displayName = "$STR_RHS_MAG_s8df";
        displayNameShort = "$STR_RHS_MAG_SH_s8df";
        ammo = "rhs_ammo_s8df";
        mass = 391;
        weight = 391;
        pylonWeapon = "rhs_weap_s8df";
    };
    class rhs_mag_b8m1_bd3_umk2a_s8t: rhs_mag_b8m1_bd3_umk2a_s8kom {
        displayName = "$STR_RHS_MAG_s8t";
        displayNameShort = "$STR_RHS_MAG_SH_s8t";
        ammo = "rhs_ammo_s8t";
        mass = 423;
        weight = 423;
        pylonWeapon = "rhs_weap_s8t";
    };
    class rhs_mag_b8v20a_s8kom: rhs_mag_b8m1_s8kom {
        ammo = "rhs_ammo_s8";
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_b8v20a.p3d";
        count = 20;
        mass = 349;
        weight = 349;
        pylonWeapon = "rhs_weap_s8";
        hardpoints[] = {"RHS_HP_B8V20"};
    };
    class rhs_mag_b8v20a_s8df: rhs_mag_b8v20a_s8kom {
        displayName = "$STR_RHS_MAG_s8df";
        displayNameShort = "$STR_RHS_MAG_SH_s8df";
        ammo = "rhs_ammo_s8df";
        mass = 391;
        weight = 391;
        pylonWeapon = "rhs_weap_s8df";
    };
    class rhs_mag_b8v20a_s8t: rhs_mag_b8v20a_s8kom {
        displayName = "$STR_RHS_MAG_s8t";
        displayNameShort = "$STR_RHS_MAG_SH_s8t";
        ammo = "rhs_ammo_s8t";
        mass = 423;
        weight = 423;
        pylonWeapon = "rhs_weap_s8t";
    };
    class rhs_mag_b8v20a_ka52_s8kom: rhs_mag_b8v20a_s8kom {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_b8v20a_ka52.p3d";
        hardpoints[] = {"RHS_HP_B8V20_KA52"};
    };
    class rhs_mag_b8v20a_ka52_s8df: rhs_mag_b8v20a_ka52_s8kom {
        displayName = "$STR_RHS_MAG_s8df";
        displayNameShort = "$STR_RHS_MAG_SH_s8df";
        ammo = "rhs_ammo_s8df";
        mass = 391;
        weight = 391;
        pylonWeapon = "rhs_weap_s8df";
    };
    class rhs_mag_b8v20a_ka52_s8t: rhs_mag_b8v20a_ka52_s8kom {
        displayName = "$STR_RHS_MAG_s8t";
        displayNameShort = "$STR_RHS_MAG_SH_s8t";
        ammo = "rhs_ammo_s8t";
        mass = 423;
        weight = 423;
        pylonWeapon = "rhs_weap_s8t";
    };
    class rhs_mag_b13l_s13b: rhs_mag_s13b_10 {
        ammo = "rhs_ammo_s13b";
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l.p3d";
        count = 5;
        mass = 501.5;
        weight = 501.5;
        pylonWeapon = "rhs_weap_s13";
        hardpoints[] = {"RHS_HP_B13L"};
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С13";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С13";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonValue1 {
                            type = "text";
                            source = "pylonAmmo";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С13";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.12}, 1};
                            right[] = {{0.035, 0.12}, 1};
                            down[] = {{-0.005, 0.16}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0339416}, 1},
                                {"Center", {0.015, -0.0293934}, 1},
                                {"Center", {0.02598, -0.0169708}, 1},
                                {"Center", {0.03, 0}, 1},
                                {"Center", {0.02598, 0.0169708}, 1},
                                {"Center", {0.015, 0.0293934}, 1},
                                {"Center", {0, 0.0339416}, 1},
                                {"Center", {-0.015, 0.0293934}, 1},
                                {"Center", {-0.02598, 0.0169708}, 1},
                                {"Center", {-0.03, 0}, 1},
                                {"Center", {-0.02598, -0.0169708}, 1},
                                {"Center", {-0.015, -0.0293934}, 1},
                                {"Center", {0, -0.0339416}, 1},
                                {},
                                {"Center", {0.0137886, -0.0156002}, 1},
                                {"Center", {0.0116673, -0.0132002}, 1},
                                {},
                                {"Center", {0.0195, 0.000000000964363}, 1},
                                {"Center", {0.0165, 0.000000000815999}, 1},
                                {},
                                {"Center", {0.0137886, 0.0156002}, 1},
                                {"Center", {0.0116673, 0.0132002}, 1},
                                {},
                                {"Center", {-0.00000000170474, 0.022062}, 1},
                                {"Center", {-0.00000000144248, 0.0186679}, 1},
                                {},
                                {"Center", {-0.0137886, 0.0156002}, 1},
                                {"Center", {-0.0116673, 0.0132002}, 1},
                                {},
                                {"Center", {-0.0195, -0.000000000263087}, 1},
                                {"Center", {-0.0165, -0.000000000222612}, 1},
                                {},
                                {"Center", {-0.0137886, -0.0156002}, 1},
                                {"Center", {-0.0116673, -0.0132002}, 1},
                                {},
                                {"Center", {0.00000000340949, -0.022062}, 1},
                                {"Center", {0.00000000288495, -0.0186679}, 1},
                                {},
                                {"Center", {0.00742462, -0.00840012}, 1},
                                {"Center", {0.0053033, -0.00600008}, 1},
                                {},
                                {"Center", {0.00742462, 0.00840012}, 1},
                                {"Center", {0.0053033, 0.00600008}, 1},
                                {},
                                {"Center", {-0.00742462, 0.00840012}, 1},
                                {"Center", {-0.0053033, 0.00600009}, 1},
                                {},
                                {"Center", {-0.00742462, -0.00840012}, 1},
                                {"Center", {-0.0053033, -0.00600008}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class PylonValue1: PylonValue1 {};
                        class Shape: Shape {};
                    };
                };
            };
        };
    };
    class rhs_mag_b13l_s13d: rhs_mag_b13l_s13b {
        displayName = "$STR_RHS_MAG_s13d";
        displayNameShort = "$STR_RHS_MAG_SH_s13d";
        ammo = "rhs_ammo_s13d";
        mass = 500;
        weight = 500;
        pylonWeapon = "rhs_weap_s13d";
    };
    class rhs_mag_b13l_s13df: rhs_mag_b13l_s13b {
        displayName = "$STR_RHS_MAG_s13df";
        displayNameShort = "$STR_RHS_MAG_SH_s13df";
        ammo = "rhs_ammo_s13df";
        mass = 500;
        weight = 500;
        pylonWeapon = "rhs_weap_s13df";
    };
    class rhs_mag_b13l_s13t: rhs_mag_b13l_s13b {
        displayName = "$STR_RHS_MAG_s13t";
        displayNameShort = "$STR_RHS_MAG_SH_s13t";
        ammo = "rhs_ammo_s13t";
        mass = 535;
        weight = 535;
        pylonWeapon = "rhs_weap_s13t";
    };
    class rhs_mag_b13l_s13of: rhs_mag_b13l_s13b {
        displayName = "$STR_RHS_MAG_s13of";
        displayNameShort = "$STR_RHS_MAG_SH_s13of";
        ammo = "rhs_ammo_s13of";
        mass = 505;
        weight = 505;
        pylonWeapon = "rhs_weap_s13of";
    };
    class rhs_mag_b13l_bd3_umk2a_s13b: rhs_mag_b13l_s13b {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_b13l.p3d";
        hardpoints[] = {"RHS_HP_B13L_BD3_UMK2A"};
    };
    class rhs_mag_b13l_bd3_umk2a_s13d: rhs_mag_b13l_bd3_umk2a_s13b {
        displayName = "$STR_RHS_MAG_s13d";
        displayNameShort = "$STR_RHS_MAG_SH_s13d";
        ammo = "rhs_ammo_s13d";
        mass = 480;
        weight = 480;
        pylonWeapon = "rhs_weap_s13d";
    };
    class rhs_mag_b13l_bd3_umk2a_s13df: rhs_mag_b13l_bd3_umk2a_s13b {
        displayName = "$STR_RHS_MAG_s13df";
        displayNameShort = "$STR_RHS_MAG_SH_s13df";
        ammo = "rhs_ammo_s13df";
        mass = 480;
        weight = 480;
        pylonWeapon = "rhs_weap_s13df";
    };
    class rhs_mag_b13l_bd3_umk2a_s13t: rhs_mag_b13l_bd3_umk2a_s13b {
        displayName = "$STR_RHS_MAG_s13t";
        displayNameShort = "$STR_RHS_MAG_SH_s13t";
        ammo = "rhs_ammo_s13t";
        mass = 515;
        weight = 515;
        pylonWeapon = "rhs_weap_s13t";
    };
    class rhs_mag_b13l_bd3_umk2a_s13of: rhs_mag_b13l_bd3_umk2a_s13b {
        displayName = "$STR_RHS_MAG_s13of";
        displayNameShort = "$STR_RHS_MAG_SH_s13of";
        ammo = "rhs_ammo_s13of";
        mass = 485;
        weight = 485;
        pylonWeapon = "rhs_weap_s13of";
    };
    class rhs_mag_b13l1_s13b: rhs_mag_b13l_s13b {
        ammo = "rhs_ammo_s13b";
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l1.p3d";
        count = 5;
        mass = 481.5;
        weight = 481.5;
        pylonWeapon = "rhs_weap_s13";
        hardpoints[] = {"RHS_HP_B13L1"};
    };
    class rhs_mag_b13l1_s13d: rhs_mag_b13l1_s13b {
        displayName = "$STR_RHS_MAG_s13d";
        displayNameShort = "$STR_RHS_MAG_SH_s13d";
        ammo = "rhs_ammo_s13d";
        mass = 480;
        weight = 480;
        pylonWeapon = "rhs_weap_s13d";
    };
    class rhs_mag_b13l1_s13df: rhs_mag_b13l1_s13b {
        displayName = "$STR_RHS_MAG_s13df";
        displayNameShort = "$STR_RHS_MAG_SH_s13df";
        ammo = "rhs_ammo_s13df";
        mass = 480;
        weight = 480;
        pylonWeapon = "rhs_weap_s13df";
    };
    class rhs_mag_b13l1_s13t: rhs_mag_b13l1_s13b {
        displayName = "$STR_RHS_MAG_s13t";
        displayNameShort = "$STR_RHS_MAG_SH_s13t";
        ammo = "rhs_ammo_s13t";
        mass = 515;
        weight = 515;
        pylonWeapon = "rhs_weap_s13t";
    };
    class rhs_mag_b13l1_s13of: rhs_mag_b13l1_s13b {
        displayName = "$STR_RHS_MAG_s13of";
        displayNameShort = "$STR_RHS_MAG_SH_s13of";
        ammo = "rhs_ammo_s13of";
        mass = 485;
        weight = 485;
        pylonWeapon = "rhs_weap_s13of";
    };
    class rhs_mag_b13l1_ka52_s13b: rhs_mag_b13l1_s13b {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l1_ka52.p3d";
        hardpoints[] = {"RHS_HP_B13L1_KA52"};
    };
    class rhs_mag_b13l1_ka52_s13d: rhs_mag_b13l1_ka52_s13b {
        displayName = "$STR_RHS_MAG_s13d";
        displayNameShort = "$STR_RHS_MAG_SH_s13d";
        ammo = "rhs_ammo_s13d";
        mass = 480;
        weight = 480;
        pylonWeapon = "rhs_weap_s13d";
    };
    class rhs_mag_b13l1_ka52_s13df: rhs_mag_b13l1_ka52_s13b {
        displayName = "$STR_RHS_MAG_s13df";
        displayNameShort = "$STR_RHS_MAG_SH_s13df";
        ammo = "rhs_ammo_s13df";
        mass = 480;
        weight = 480;
        pylonWeapon = "rhs_weap_s13df";
    };
    class rhs_mag_b13l1_ka52_s13t: rhs_mag_b13l1_ka52_s13b {
        displayName = "$STR_RHS_MAG_s13t";
        displayNameShort = "$STR_RHS_MAG_SH_s13t";
        ammo = "rhs_ammo_s13t";
        mass = 515;
        weight = 515;
        pylonWeapon = "rhs_weap_s13t";
    };
    class rhs_mag_b13l1_ka52_s13of: rhs_mag_b13l1_ka52_s13b {
        displayName = "$STR_RHS_MAG_s13of";
        displayNameShort = "$STR_RHS_MAG_SH_s13of";
        ammo = "rhs_ammo_s13of";
        mass = 485;
        weight = 485;
        pylonWeapon = "rhs_weap_s13of";
    };
    class rhs_mag_apu68m3_s24: rhs_mag_s13b_10 {
        displayName = "$STR_RHS_MAG_S24";
        displayNameShort = "$STR_RHS_MAG_SH_S24";
        ammo = "rhs_ammo_s24";
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_apu68m3_s24.p3d";
        count = 1;
        mass = 280;
        weight = 280;
        pylonWeapon = "rhs_weap_s24";
        hardpoints[] = {"RHS_HP_APU68M3_S24"};
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С24";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С24";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С24";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_apu68m3_s24b: rhs_mag_apu68m3_s24 {
        displayName = "$STR_RHS_MAG_s24b";
        displayNameShort = "$STR_RHS_MAG_SH_s24b";
        ammo = "rhs_ammo_s24b";
        mass = 280;
        weight = 280;
        pylonWeapon = "rhs_weap_s24b";
    };
    class rhs_mag_apu68_bd3_umk2a_s24: rhs_mag_apu68m3_s24 {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_s24.p3d";
        hardpoints[] = {"RHS_HP_APU68_BD3_UMK2A"};
    };
    class rhs_mag_apu68_bd3_umk2a_s24b: rhs_mag_apu68_bd3_umk2a_s24 {
        displayName = "$STR_RHS_MAG_s24b";
        displayNameShort = "$STR_RHS_MAG_SH_s24b";
        ammo = "rhs_ammo_s24b";
        mass = 280;
        weight = 280;
        pylonWeapon = "rhs_weap_s24b";
    };
    class rhs_mag_o25l_s25o: rhs_mag_apu68m3_s24 {
        displayName = "$STR_RHS_MAG_S25O";
        displayNameShort = "$STR_RHS_MAG_SH_S25O";
        ammo = "rhs_ammo_s25o";
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_o25l.p3d";
        count = 1;
        mass = 290;
        weight = 290;
        pylonWeapon = "rhs_weap_s25";
        hardpoints[] = {"RHS_HP_O25L"};
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С25";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "С25";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "С25";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_o25l_s25of: rhs_mag_o25l_s25o {
        displayName = "$STR_RHS_MAG_s25of";
        displayNameShort = "$STR_RHS_MAG_SH_s25of";
        ammo = "rhs_ammo_s25of";
        mass = 290;
        weight = 290;
        pylonWeapon = "rhs_weap_s25of";
    };
    class rhs_mag_o25l_s25l: rhs_mag_o25l_s25o {
        displayName = "$STR_RHS_MAG_s25l";
        displayNameShort = "$STR_RHS_MAG_SH_s25l";
        ammo = "rhs_ammo_s25l";
        mass = 290;
        weight = 290;
        pylonWeapon = "rhs_weap_s25l";
    };
    class rhs_mag_o25l_s25ld: rhs_mag_o25l_s25o {
        displayName = "$STR_RHS_MAG_s25ld";
        displayNameShort = "$STR_RHS_MAG_SH_s25ld";
        ammo = "rhs_ammo_s25ld";
        mass = 290;
        weight = 290;
        pylonWeapon = "rhs_weap_s25ld";
    };
    class rhs_mag_bd3_usk_a_o25l_s25o: rhs_mag_o25l_s25o {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_usk_a_o25l.p3d";
        mass = 310;
        weight = 310;
        hardpoints[] = {"RHS_HP_BD3_USK_A_O25L"};
    };
    class rhs_mag_bd3_usk_a_o25l_s25of: rhs_mag_bd3_usk_a_o25l_s25o {
        displayName = "$STR_RHS_MAG_s25of";
        displayNameShort = "$STR_RHS_MAG_SH_s25of";
        ammo = "rhs_ammo_s25of";
        mass = 310;
        weight = 310;
        pylonWeapon = "rhs_weap_s25of";
    };
    class rhs_mag_bd3_usk_a_o25l_s25l: rhs_mag_bd3_usk_a_o25l_s25o {
        displayName = "$STR_RHS_MAG_s25l";
        displayNameShort = "$STR_RHS_MAG_SH_s25l";
        ammo = "rhs_ammo_s25l";
        mass = 310;
        weight = 310;
        pylonWeapon = "rhs_weap_s25l";
    };
    class rhs_mag_bd3_usk_a_o25l_s25ld: rhs_mag_bd3_usk_a_o25l_s25o {
        displayName = "$STR_RHS_MAG_s25ld";
        displayNameShort = "$STR_RHS_MAG_SH_s25ld";
        ammo = "rhs_ammo_s25ld";
        mass = 310;
        weight = 310;
        pylonWeapon = "rhs_weap_s25ld";
    };
    class rhs_mag_bd3_umk2a_o25l_s25o: rhs_mag_o25l_s25o {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_o25l.p3d";
        mass = 310;
        weight = 310;
        hardpoints[] = {"RHS_HP_BD3_UMK2A_O25L"};
    };
    class rhs_mag_bd3_umk2a_o25l_s25of: rhs_mag_bd3_umk2a_o25l_s25o {
        displayName = "$STR_RHS_MAG_s25of";
        displayNameShort = "$STR_RHS_MAG_SH_s25of";
        ammo = "rhs_ammo_s25of";
        mass = 310;
        weight = 310;
        pylonWeapon = "rhs_weap_s25of";
    };
    class rhs_mag_bd3_umk2a_o25l_s25l: rhs_mag_bd3_umk2a_o25l_s25o {
        displayName = "$STR_RHS_MAG_s25l";
        displayNameShort = "$STR_RHS_MAG_SH_s25l";
        ammo = "rhs_ammo_s25l";
        mass = 310;
        weight = 310;
        pylonWeapon = "rhs_weap_s25l";
    };
    class rhs_mag_bd3_umk2a_o25l_s25ld: rhs_mag_bd3_umk2a_o25l_s25o {
        displayName = "$STR_RHS_MAG_s25ld";
        displayNameShort = "$STR_RHS_MAG_SH_s25ld";
        ammo = "rhs_ammo_s25ld";
        mass = 310;
        weight = 310;
        pylonWeapon = "rhs_weap_s25ld";
    };
    class rhs_mag_R27R: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r27";
        count = 1;
        initspeed = 100;
        maxleadspeed = 900;
        namesound = "missiles";
        ammo = "rhs_ammo_r27r";
        displayname = "$STR_RHS_R27R_NAME";
        descriptionShort = "Active radar homing. Range: 2km-16km";
        displaynameshort = "ARH";
        mass = 44;
        hardpoints[] = {"RHS_HP_R27"};
        pylonWeapon = "rhs_weap_r27r_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "27Р";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "27Р";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "27Р";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_R27R_APU470: rhs_mag_R27R {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27";
        hardpoints[] = {"RHS_HP_R27_APU470"};
    };
    class rhs_mag_R27ER: rhs_mag_R27R {
        displayname = "$STR_RHS_R27ER_NAME";
        descriptionShort = "Active radar homing. Range: 2km-20km";
        ammo = "rhs_ammo_r27er";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "27ЭР";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "27ЭР";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "27ЭР";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_R27ER_APU470: rhs_mag_R27ER {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27";
        hardpoints[] = {"RHS_HP_R27_APU470"};
    };
    class rhs_mag_R27T: rhs_mag_R27ER {
        displayname = "$STR_RHS_R27T_NAME";
        displaynameshort = "IR";
        descriptionShort = "Infrared homing. Locking radius: ±7.5° off-boresight. Range: 1.7km-22km";
        ammo = "rhs_ammo_r27t";
        pylonWeapon = "rhs_weap_r27t_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "27Т";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "27Т";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "27Т";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_R27T_APU470: rhs_mag_R27T {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27";
        hardpoints[] = {"RHS_HP_R27_APU470"};
    };
    class rhs_mag_R27ET: rhs_mag_R27T {
        displayname = "$STR_RHS_R27ET_NAME";
        descriptionShort = "Infrared homing. Locking radius: ±7.5° off-boresight. Range: 1.7km-26km";
        ammo = "rhs_ammo_r27et";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "27ЭТ";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "27ЭТ";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "27ЭТ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_R27ET_APU470: rhs_mag_R27ET {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27";
        hardpoints[] = {"RHS_HP_R27_APU470"};
    };
    class rhs_mag_R60: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r60";
        count = 1;
        initspeed = 100;
        maxleadspeed = 900;
        namesound = "missiles";
        ammo = "rhs_ammo_r60";
        displayname = "$STR_RHS_R60_NAME";
        displaynameshort = "IR";
        descriptionShort = "Infrared homing. Locking radius: ±12° off-boresight. Range: 0.3km-5km";
        mass = 44;
        hardpoints[] = {"RHS_HP_R60"};
        pylonWeapon = "rhs_weap_r60_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "60";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "60";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "60";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0135766}, 1},
                                {"Center", {0.006, -0.0117574}, 1},
                                {"Center", {0.010392, -0.00678832}, 1},
                                {"Center", {0.012, 0}, 1},
                                {"Center", {0.010392, 0.00678832}, 1},
                                {"Center", {0.006, 0.0117574}, 1},
                                {"Center", {0, 0.0135766}, 1},
                                {"Center", {-0.006, 0.0117574}, 1},
                                {"Center", {-0.010392, 0.00678832}, 1},
                                {"Center", {-0.012, 0}, 1},
                                {"Center", {-0.010392, -0.00678832}, 1},
                                {"Center", {-0.006, -0.0117574}, 1},
                                {"Center", {0, -0.0135766}, 1},
                                {},
                                {"Center", {0.00848528, -0.00960014}, 1},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {},
                                {"Center", {0.00848528, 0.00960014}, 1},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {},
                                {"Center", {-0.00848528, 0.00960014}, 1},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {},
                                {"Center", {-0.00848528, -0.00960013}, 1},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00848528, -0.00960014}, 1}, {"Center", {0.012, 0.000000000593454}, 1}, {"Center", {0.00848528, 0.00960014}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00848528, 0.00960014}, 1}, {"Center", {-0.00000000104907, 0.0135766}, 1}, {"Center", {-0.00848528, 0.00960014}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00848528, 0.00960014}, 1}, {"Center", {-0.012, -0.0000000001619}, 1}, {"Center", {-0.00848528, -0.00960013}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00848528, -0.00960013}, 1}, {"Center", {0.00000000209815, -0.0135766}, 1}, {"Center", {0.00848529, -0.00960013}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_R60_APU60: rhs_mag_R60 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu60_r60";
        hardpoints[] = {"RHS_HP_R60_APU60"};
    };
    class rhs_mag_R60M: rhs_mag_R60 {
        ammo = "rhs_ammo_r60m";
        displayname = "$STR_RHS_R60M_NAME";
        descriptionShort = "Infrared homing. Locking radius: ±17° off-boresight. Range: 0.3km-8km";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "60М";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "60М";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "60М";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0135766}, 1},
                                {"Center", {0.006, -0.0117574}, 1},
                                {"Center", {0.010392, -0.00678832}, 1},
                                {"Center", {0.012, 0}, 1},
                                {"Center", {0.010392, 0.00678832}, 1},
                                {"Center", {0.006, 0.0117574}, 1},
                                {"Center", {0, 0.0135766}, 1},
                                {"Center", {-0.006, 0.0117574}, 1},
                                {"Center", {-0.010392, 0.00678832}, 1},
                                {"Center", {-0.012, 0}, 1},
                                {"Center", {-0.010392, -0.00678832}, 1},
                                {"Center", {-0.006, -0.0117574}, 1},
                                {"Center", {0, -0.0135766}, 1},
                                {},
                                {"Center", {0.00848528, -0.00960014}, 1},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {},
                                {"Center", {0.00848528, 0.00960014}, 1},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {},
                                {"Center", {-0.00848528, 0.00960014}, 1},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {},
                                {"Center", {-0.00848528, -0.00960013}, 1},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00848528, -0.00960014}, 1}, {"Center", {0.012, 0.000000000593454}, 1}, {"Center", {0.00848528, 0.00960014}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00848528, 0.00960014}, 1}, {"Center", {-0.00000000104907, 0.0135766}, 1}, {"Center", {-0.00848528, 0.00960014}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00848528, 0.00960014}, 1}, {"Center", {-0.012, -0.0000000001619}, 1}, {"Center", {-0.00848528, -0.00960013}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00848528, -0.00960013}, 1}, {"Center", {0.00000000209815, -0.0135766}, 1}, {"Center", {0.00848529, -0.00960013}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_R60M_APU60: rhs_mag_R60M {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu60_r60";
        hardpoints[] = {"RHS_HP_R60_APU60"};
    };
    class rhs_mag_R73: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r73_ext";
        count = 1;
        initspeed = 0;
        maxleadspeed = 900;
        namesound = "missiles";
        ammo = "rhs_ammo_r73";
        displayname = "$STR_RHS_R73_NAME";
        descriptionShort = "Infrared homing. Locking radius: ±25° off-boresight. Range: 0.3km-8km";
        displaynameshort = "IR";
        mass = 105;
        hardpoints[] = {"RHS_HP_R73"};
        pylonWeapon = "rhs_weap_r73_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "73";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "73";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "73";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0141423}, 1},
                                {"Center", {0.00625, -0.0122473}, 1},
                                {"Center", {0.010825, -0.00707117}, 1},
                                {"Center", {0.0125, 0}, 1},
                                {"Center", {0.010825, 0.00707117}, 1},
                                {"Center", {0.00625, 0.0122473}, 1},
                                {"Center", {0, 0.0141423}, 1},
                                {"Center", {-0.00625, 0.0122473}, 1},
                                {"Center", {-0.010825, 0.00707117}, 1},
                                {"Center", {-0.0125, 0}, 1},
                                {"Center", {-0.010825, -0.00707117}, 1},
                                {"Center", {-0.00625, -0.0122473}, 1},
                                {"Center", {0, -0.0141423}, 1},
                                {},
                                {"Center", {0.00883884, -0.0100001}, 1},
                                {"Center", {0.0176777, -0.0200003}, 1},
                                {},
                                {"Center", {0.00883884, 0.0100001}, 1},
                                {"Center", {0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.00883883, 0.0100001}, 1},
                                {"Center", {-0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.00883884, -0.0100001}, 1},
                                {"Center", {-0.0176777, -0.0200003}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00883884, -0.0100001}, 1}, {"Center", {0.0125, 0.000000000618181}, 1}, {"Center", {0.00883884, 0.0100001}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00883884, 0.0100001}, 1}, {"Center", {-0.00000000109278, 0.0141423}, 1}, {"Center", {-0.00883883, 0.0100001}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00883883, 0.0100001}, 1}, {"Center", {-0.0125, -0.000000000168646}, 1}, {"Center", {-0.00883884, -0.0100001}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00883884, -0.0100001}, 1}, {"Center", {0.00000000218557, -0.0141423}, 1}, {"Center", {0.00883884, -0.0100001}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_R73_APU73: rhs_mag_R73 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73";
        hardpoints[] = {"RHS_HP_R73_APU73"};
    };
    class rhs_mag_R73M: rhs_mag_R73 {
        ammo = "rhs_ammo_r73m";
        displayname = "$STR_RHS_R73M_NAME";
        descriptionShort = "Infrared homing. Locking radius: ±60° off-boresight. Range: 0.15km-8km";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "73М";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "73М";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "73М";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0141423}, 1},
                                {"Center", {0.00625, -0.0122473}, 1},
                                {"Center", {0.010825, -0.00707117}, 1},
                                {"Center", {0.0125, 0}, 1},
                                {"Center", {0.010825, 0.00707117}, 1},
                                {"Center", {0.00625, 0.0122473}, 1},
                                {"Center", {0, 0.0141423}, 1},
                                {"Center", {-0.00625, 0.0122473}, 1},
                                {"Center", {-0.010825, 0.00707117}, 1},
                                {"Center", {-0.0125, 0}, 1},
                                {"Center", {-0.010825, -0.00707117}, 1},
                                {"Center", {-0.00625, -0.0122473}, 1},
                                {"Center", {0, -0.0141423}, 1},
                                {},
                                {"Center", {0.00883884, -0.0100001}, 1},
                                {"Center", {0.0176777, -0.0200003}, 1},
                                {},
                                {"Center", {0.00883884, 0.0100001}, 1},
                                {"Center", {0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.00883883, 0.0100001}, 1},
                                {"Center", {-0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.00883884, -0.0100001}, 1},
                                {"Center", {-0.0176777, -0.0200003}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00883884, -0.0100001}, 1}, {"Center", {0.0125, 0.000000000618181}, 1}, {"Center", {0.00883884, 0.0100001}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00883884, 0.0100001}, 1}, {"Center", {-0.00000000109278, 0.0141423}, 1}, {"Center", {-0.00883883, 0.0100001}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00883883, 0.0100001}, 1}, {"Center", {-0.0125, -0.000000000168646}, 1}, {"Center", {-0.00883884, -0.0100001}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00883884, -0.0100001}, 1}, {"Center", {0.00000000218557, -0.0141423}, 1}, {"Center", {0.00883884, -0.0100001}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
        pylonWeapon = "rhs_weap_r73m_Launcher";
    };
    class rhs_mag_R73M_APU73: rhs_mag_R73M {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73";
        hardpoints[] = {"RHS_HP_R73_APU73"};
    };
    class rhs_mag_R74: rhs_mag_R73 {
        ammo = "rhs_ammo_r74";
        displayname = "$STR_RHS_R74_NAME";
        descriptionShort = "Infrared homing missile with improved CM resistance. Locking radius: ±60° off-boresight. Range: 0.15km-8km";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "74";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "74";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "74";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0141423}, 1},
                                {"Center", {0.00625, -0.0122473}, 1},
                                {"Center", {0.010825, -0.00707117}, 1},
                                {"Center", {0.0125, 0}, 1},
                                {"Center", {0.010825, 0.00707117}, 1},
                                {"Center", {0.00625, 0.0122473}, 1},
                                {"Center", {0, 0.0141423}, 1},
                                {"Center", {-0.00625, 0.0122473}, 1},
                                {"Center", {-0.010825, 0.00707117}, 1},
                                {"Center", {-0.0125, 0}, 1},
                                {"Center", {-0.010825, -0.00707117}, 1},
                                {"Center", {-0.00625, -0.0122473}, 1},
                                {"Center", {0, -0.0141423}, 1},
                                {},
                                {"Center", {0.00883884, -0.0100001}, 1},
                                {"Center", {0.0176777, -0.0200003}, 1},
                                {},
                                {"Center", {0.00883884, 0.0100001}, 1},
                                {"Center", {0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.00883883, 0.0100001}, 1},
                                {"Center", {-0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.00883884, -0.0100001}, 1},
                                {"Center", {-0.0176777, -0.0200003}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00883884, -0.0100001}, 1}, {"Center", {0.0125, 0.000000000618181}, 1}, {"Center", {0.00883884, 0.0100001}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00883884, 0.0100001}, 1}, {"Center", {-0.00000000109278, 0.0141423}, 1}, {"Center", {-0.00883883, 0.0100001}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00883883, 0.0100001}, 1}, {"Center", {-0.0125, -0.000000000168646}, 1}, {"Center", {-0.00883884, -0.0100001}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00883884, -0.0100001}, 1}, {"Center", {0.00000000218557, -0.0141423}, 1}, {"Center", {0.00883884, -0.0100001}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
        pylonWeapon = "rhs_weap_r74_Launcher";
        hardpoints[] = {"RHS_HP_R74"};
    };
    class rhs_mag_R74_APU73: rhs_mag_R74 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73";
        hardpoints[] = {"RHS_HP_R74_APU73"};
    };
    class rhs_mag_R74M2: rhs_mag_R73 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r74m2";
        count = 1;
        ammo = "rhs_ammo_r74m2";
        displayname = "$STR_RHS_R74M2_NAME";
        displaynameshort = "IR";
        descriptionShort = "Infrared homing. Locking radius: ±75° off-boresight. Range: 0.15km-8km";
        initspeed = 0;
        hardpoints[] = {"RHS_HP_R74M2"};
        pylonWeapon = "rhs_weap_r74m2_Launcher";
    };
    class rhs_mag_R74M2_int: rhs_mag_R74M2 {
        hardpoints[] = {"RHS_HP_R74M2_INT"};
        ejectSpeed[] = {1, 0, 0};
        initSpeed = 0;
        initSpeedY = -25;
        initSpeedZ = 0;
    };
    class rhs_mag_R77: rhs_mag_R73 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77";
        count = 1;
        ammo = "rhs_ammo_r77";
        displayname = "$STR_RHS_R77_NAME";
        displaynameshort = "ARH";
        descriptionShort = "Active radar homing. Range: 2km-25km";
        hardpoints[] = {"RHS_HP_R77"};
        pylonWeapon = "rhs_weap_r77_Launcher";
        mass = 173;
        ejectSpeed[] = {1, 0, 0};
        initSpeed = 0;
        initSpeedY = -25;
        initSpeedZ = 0;
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "77";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "77";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "77";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0169708}, 1},
                                {"Center", {0.0075, -0.0146967}, 1},
                                {"Center", {0.01299, -0.0084854}, 1},
                                {"Center", {0.015, 0}, 1},
                                {"Center", {0.01299, 0.0084854}, 1},
                                {"Center", {0.0075, 0.0146967}, 1},
                                {"Center", {0, 0.0169708}, 1},
                                {"Center", {-0.0075, 0.0146967}, 1},
                                {"Center", {-0.01299, 0.0084854}, 1},
                                {"Center", {-0.015, 0}, 1},
                                {"Center", {-0.01299, -0.0084854}, 1},
                                {"Center", {-0.0075, -0.0146967}, 1},
                                {"Center", {0, -0.0169708}, 1},
                                {},
                                {"Center", {0.0106066, -0.0120002}, 1},
                                {"Center", {0.0212132, -0.0240003}, 1},
                                {},
                                {"Center", {0.0106066, 0.0120002}, 1},
                                {"Center", {0.0212132, 0.0240003}, 1},
                                {},
                                {"Center", {-0.0106066, 0.0120002}, 1},
                                {"Center", {-0.0212132, 0.0240003}, 1},
                                {},
                                {"Center", {-0.0106066, -0.0120002}, 1},
                                {"Center", {-0.0212132, -0.0240003}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0120002}, 1}, {"Center", {0.015, 0.000000000741817}, 1}, {"Center", {0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0120002}, 1}, {"Center", {-0.00000000131134, 0.0169708}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}, {"Center", {-0.015, -0.000000000202375}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}, {"Center", {0.00000000262268, -0.0169708}, 1}, {"Center", {0.0106066, -0.0120002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_R77_AKU170: rhs_mag_R77 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_ext";
        hardpoints[] = {"RHS_HP_R77_AKU170"};
    };
    class rhs_mag_R77_AKU170_MIG29: rhs_mag_R77 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_MiG";
        hardpoints[] = {"RHS_HP_R77_AKU170_MIG29"};
    };
    class rhs_mag_R77M: rhs_mag_R77 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77m";
        count = 1;
        ammo = "rhs_ammo_r77m";
        displayname = "$STR_RHS_R77M_NAME";
        displaynameshort = "ARH";
        descriptionShort = "Active radar homing missile with improved CM resistance. Range: 2km-25km";
        hardpoints[] = {"RHS_HP_R77M"};
        pylonWeapon = "rhs_weap_r77m_Launcher";
        mass = 190;
        ejectSpeed[] = {1, 0, 0};
        initSpeed = 0;
        initSpeedY = -25;
        initSpeedZ = 0;
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "77М";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "77М";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "77М";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0169708}, 1},
                                {"Center", {0.0075, -0.0146967}, 1},
                                {"Center", {0.01299, -0.0084854}, 1},
                                {"Center", {0.015, 0}, 1},
                                {"Center", {0.01299, 0.0084854}, 1},
                                {"Center", {0.0075, 0.0146967}, 1},
                                {"Center", {0, 0.0169708}, 1},
                                {"Center", {-0.0075, 0.0146967}, 1},
                                {"Center", {-0.01299, 0.0084854}, 1},
                                {"Center", {-0.015, 0}, 1},
                                {"Center", {-0.01299, -0.0084854}, 1},
                                {"Center", {-0.0075, -0.0146967}, 1},
                                {"Center", {0, -0.0169708}, 1},
                                {},
                                {"Center", {0.0106066, -0.0120002}, 1},
                                {"Center", {0.0212132, -0.0240003}, 1},
                                {},
                                {"Center", {0.0106066, 0.0120002}, 1},
                                {"Center", {0.0212132, 0.0240003}, 1},
                                {},
                                {"Center", {-0.0106066, 0.0120002}, 1},
                                {"Center", {-0.0212132, 0.0240003}, 1},
                                {},
                                {"Center", {-0.0106066, -0.0120002}, 1},
                                {"Center", {-0.0212132, -0.0240003}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0120002}, 1}, {"Center", {0.015, 0.000000000741817}, 1}, {"Center", {0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0120002}, 1}, {"Center", {-0.00000000131134, 0.0169708}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}, {"Center", {-0.015, -0.000000000202375}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}, {"Center", {0.00000000262268, -0.0169708}, 1}, {"Center", {0.0106066, -0.0120002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_R77M_AKU170: rhs_mag_R77M {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_ext";
        hardpoints[] = {"RHS_HP_R77M_AKU170"};
    };
    class rhs_mag_R77M_AKU170_MIG29: rhs_mag_R77M {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_MiG";
        hardpoints[] = {"RHS_HP_R77M_AKU170_MIG29"};
    };
    class rhs_mag_kh25: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu68_kh25";
        ammo = "rhs_ammo_kh25";
        displayname = "$STR_RHS_KH25_NAME";
        descriptionShort = "Semi-active laser seeker. Range: 2km-10km";
        displaynameshort = "LG";
        namesound = "missiles";
        count = 1;
        initspeed = 0;
        mass = 320;
        hardpoints[] = {"RHS_HP_KH25"};
        pylonWeapon = "rhs_weap_kh25_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х25";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х25";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "Х25";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0113139}, 1},
                                {"Center", {0.005, -0.00979781}, 1},
                                {"Center", {0.00866, -0.00565693}, 1},
                                {"Center", {0.01, 0}, 1},
                                {"Center", {0.00866, 0.00565693}, 1},
                                {"Center", {0.005, 0.00979781}, 1},
                                {"Center", {0, 0.0113139}, 1},
                                {"Center", {-0.005, 0.00979781}, 1},
                                {"Center", {-0.00866, 0.00565693}, 1},
                                {"Center", {-0.01, 0}, 1},
                                {"Center", {-0.00866, -0.00565693}, 1},
                                {"Center", {-0.005, -0.00979781}, 1},
                                {"Center", {0, -0.0113139}, 1},
                                {},
                                {"Center", {0.00707107, -0.00800011}, 1},
                                {"Center", {0.0176777, -0.0200003}, 1},
                                {},
                                {"Center", {0.00707107, 0.00800011}, 1},
                                {"Center", {0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.00707107, 0.00800011}, 1},
                                {"Center", {-0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.00707107, -0.00800011}, 1},
                                {"Center", {-0.0176777, -0.0200003}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, -0.00800011}, 1}, {"Center", {0.01, 0.000000000494545}, 1}, {"Center", {0.00707107, 0.00800011}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, 0.00800011}, 1}, {"Center", {-0.000000000874228, 0.0113139}, 1}, {"Center", {-0.00707107, 0.00800011}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, 0.00800011}, 1}, {"Center", {-0.01, -0.000000000134917}, 1}, {"Center", {-0.00707107, -0.00800011}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, -0.00800011}, 1}, {"Center", {0.00000000174846, -0.0113139}, 1}, {"Center", {0.00707107, -0.00800011}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_kh25ML: rhs_mag_kh25 {
        ammo = "rhs_ammo_kh25ML";
        displayname = "$STR_RHS_KH25ML_NAME";
        descriptionShort = "Semi-active laser seeker. Range: 2km-10km";
        mass = 308;
        pylonWeapon = "rhs_weap_kh25ml_Launcher";
    };
    class rhs_mag_kh25MA: rhs_mag_kh25 {
        ammo = "rhs_ammo_kh25MA";
        displayname = "$STR_RHS_KH25MA_NAME";
        displaynameshort = "AGM";
        descriptionShort = "Active radar homing. Requires radar. Range: 1.5km-10km";
        mass = 308;
        pylonWeapon = "rhs_weap_kh25ma_Launcher";
    };
    class rhs_mag_kh25MT: rhs_mag_kh25 {
        ammo = "rhs_ammo_kh25MT";
        displayname = "$STR_RHS_KH25MT_NAME";
        displaynameshort = "TV";
        descriptionShort = "TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-8km";
        pylonWeapon = "rhs_weap_kh25mt_Launcher";
    };
    class rhs_mag_kh25MTP: rhs_mag_kh25 {
        ammo = "rhs_ammo_kh25MTP";
        displayname = "$STR_RHS_KH25MTP_NAME";
        displaynameshort = "IR";
        descriptionShort = "IR-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
        pylonWeapon = "rhs_weap_kh25mtp_Launcher";
    };
    class rhs_mag_kh25MP: rhs_mag_kh25 {
        ammo = "rhs_ammo_kh25MP";
        displayname = "$STR_RHS_KH25MP_NAME";
        displaynameshort = "Anti-Radar";
        descriptionShort = "Anti radiation missile. Range: 1.5km-10km";
        mass = 323;
        pylonWeapon = "rhs_weap_kh25mp_Launcher";
    };
    class rhs_mag_kh25_apu68_mig29: rhs_mag_kh25 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kh25";
        hardpoints[] = {"RHS_HP_KH25_APU68_MIG29"};
        pylonWeapon = "rhs_weap_kh25_mig29_Launcher";
    };
    class rhs_mag_kh25ML_apu68_mig29: rhs_mag_kh25_apu68_mig29 {
        ammo = "rhs_ammo_kh25ML";
        displayname = "$STR_RHS_KH25ML_NAME";
        mass = 308;
        pylonWeapon = "rhs_weap_kh25ml_mig29_Launcher";
    };
    class rhs_mag_kh25MT_apu68_mig29: rhs_mag_kh25_apu68_mig29 {
        ammo = "rhs_ammo_kh25MT";
        displayname = "$STR_RHS_KH25MT_NAME";
        displaynameshort = "TV";
        descriptionShort = "TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-8km";
        pylonWeapon = "rhs_weap_kh25mt_Launcher";
    };
    class rhs_mag_kh25MTP_apu68_mig29: rhs_mag_kh25_apu68_mig29 {
        ammo = "rhs_ammo_kh25MTP";
        displayname = "$STR_RHS_KH25MTP_NAME";
        displaynameshort = "IR";
        descriptionShort = "IR-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
        pylonWeapon = "rhs_weap_kh25mtp_Launcher";
    };
    class rhs_mag_kh25MP_apu68_mig29: rhs_mag_kh25_apu68_mig29 {
        ammo = "rhs_ammo_kh25MP";
        displayname = "$STR_RHS_KH25MP_NAME";
        displaynameshort = "Anti-Radar";
        descriptionShort = "Anti radiation missile. Range: 1.5km-10km";
        mass = 323;
        pylonWeapon = "rhs_weap_kh25mp_Launcher";
    };
    class rhs_mag_kh29l: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_kh29_aku58";
        ammo = "rhs_ammo_kh29l";
        displayname = "$STR_RHS_KH29L_NAME";
        displaynameshort = "LG";
        descriptionShort = "Semi-active laser seeker. Range: 1.5km-10km";
        namesound = "missiles";
        count = 1;
        initspeed = 0;
        mass = 660;
        hardpoints[] = {"RHS_HP_KH29"};
        pylonWeapon = "rhs_weap_kh29_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "Х29";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_kh29ML: rhs_mag_kh29l {
        ammo = "rhs_ammo_kh29ML";
        displayname = "$STR_RHS_KH29ML_NAME";
        displaynameshort = "LG";
        descriptionShort = "Semi-active laser seeker. Range: 1.5km-10km";
        pylonWeapon = "rhs_weap_kh29ml_Launcher";
    };
    class rhs_mag_kh29T: rhs_mag_kh29l {
        ammo = "rhs_ammo_kh29T";
        displayname = "$STR_RHS_KH29T_NAME";
        displaynameshort = "TV";
        descriptionShort = "TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
        mass = 680;
        pylonWeapon = "rhs_weap_kh29t_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29Т";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29Т";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "Х29Т";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_kh29D: rhs_mag_kh29l {
        ammo = "rhs_ammo_kh29D";
        displayname = "$STR_RHS_KH29D_NAME";
        displaynameshort = "IR";
        descriptionShort = "IR-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
        pylonWeapon = "rhs_weap_kh29d_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29Д";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29Д";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "Х29Д";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_kh29MP: rhs_mag_kh29l {
        ammo = "rhs_ammo_kh29MP";
        displayname = "$STR_RHS_KH29MP_NAME";
        displaynameshort = "AGM";
        descriptionShort = "Active radar homing. Requires radar. Range: 1.5km-9km";
        pylonWeapon = "rhs_weap_kh29mp_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29МП";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29МП";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "Х29МП";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_kh29l_aku58_mig29: rhs_mag_kh29l {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_kh29_aku58_mig";
        pylonWeapon = "rhs_weap_kh29_mig29_Launcher";
        hardpoints[] = {"RHS_HP_KH29_AKU58_MIG29"};
    };
    class rhs_mag_kh29ML_aku58_mig29: rhs_mag_kh29l_aku58_mig29 {
        ammo = "rhs_ammo_kh29ML";
        displayname = "$STR_RHS_KH29ML_NAME";
        displaynameshort = "LG";
        descriptionShort = "Semi-active laser seeker. Range: 1.5km-10km";
        pylonWeapon = "rhs_weap_kh29ml_mig29_Launcher";
    };
    class rhs_mag_kh29T_aku58_mig29: rhs_mag_kh29l_aku58_mig29 {
        ammo = "rhs_ammo_kh29T";
        displayname = "$STR_RHS_KH29T_NAME";
        displaynameshort = "TV";
        descriptionShort = "TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
        mass = 680;
        pylonWeapon = "rhs_weap_kh29t_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29Т";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29Т";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "Х29Т";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_kh29MP_aku58_mig29: rhs_mag_kh29l_aku58_mig29 {
        ammo = "rhs_ammo_kh29MP";
        displayname = "$STR_RHS_KH29MP_NAME";
        displaynameshort = "AGM";
        pylonWeapon = "rhs_weap_kh29mp_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29МП";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х29МП";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "Х29МП";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_Kh38mle: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m_ext";
        ammo = "rhs_ammo_Kh38MLE_ext";
        displayname = "$STR_RHS_KH38MLE_NAME";
        displaynameshort = "LG";
        descriptionShort = "Laser guided. Range: 1km-8km.";
        namesound = "missiles";
        count = 1;
        initspeed = 0;
        mass = 520;
        hardpoints[] = {"RHS_HP_Kh38"};
        pylonWeapon = "rhs_weap_kh38mle_Launcher";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х38";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "Х38";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "Х38";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_Kh38mle_int: rhs_mag_Kh38mle {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m";
        ammo = "rhs_ammo_Kh38MLE";
        hardpoints[] = {"RHS_HP_Kh38_INT"};
        ejectSpeed[] = {1, 0, 0};
        initSpeed = 0;
        initSpeedY = -25;
        initSpeedZ = 0;
    };
    class rhs_mag_Kh38mae: rhs_mag_Kh38mle {
        ammo = "rhs_ammo_Kh38mae_ext";
        displayname = "$STR_RHS_KH38MAE_NAME";
        displaynameshort = "ARH";
        descriptionShort = "Active radar homing. Range: 1km-10km.";
        pylonWeapon = "rhs_weap_kh38mae_Launcher";
    };
    class rhs_mag_Kh38mae_int: rhs_mag_Kh38mae {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m";
        ammo = "rhs_ammo_Kh38mae";
        hardpoints[] = {"RHS_HP_Kh38_INT"};
        ejectSpeed[] = {1, 0, 0};
        initSpeed = 0;
        initSpeedY = -25;
        initSpeedZ = 0;
    };
    class rhs_mag_Kh38mte: rhs_mag_Kh38mle {
        ammo = "rhs_ammo_Kh38MTE_ext";
        displayname = "$STR_RHS_KH38MTE_NAME";
        displaynameshort = "IR";
        descriptionShort = "IR guided. Range: 1km-10km.";
        pylonWeapon = "rhs_weap_kh38mte_Launcher";
    };
    class rhs_mag_Kh38mte_int: rhs_mag_Kh38mte {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m";
        ammo = "rhs_ammo_Kh38MTE";
        hardpoints[] = {"RHS_HP_Kh38_INT"};
        ejectSpeed[] = {1, 0, 0};
        initSpeed = 0;
        initSpeedY = -25;
        initSpeedZ = 0;
    };
    class rhs_mag_kh55sm: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh55sm";
        ammo = "rhs_ammo_kh55sm";
        count = 1;
        displayname = "$STR_RHS_MAG_KH55SM_CAMO";
        displaynameshort = "Kh-55SM";
        descriptionShort = "Tactical nuke";
        initspeed = 0;
        namesound = "missiles";
        mass = 1700;
        pylonWeapon = "rhs_weap_kh55sm_Dummy_Launcher";
        hardpoints[] = {"RHS_HP_KH55SM_INT", "RHS_HP_TU95MS6_INT"};
    };
    class rhs_mag_kh55sm_6: rhs_mag_kh55sm {
        count = 6;
        hardpoints[] = {};
    };
    class rhs_mag_kh55sm_nocamo: rhs_mag_kh55sm {
        displayname = "$STR_RHS_MAG_KH55SM";
        ammo = "rhs_ammo_kh55sm_nocamo";
    };
    class rhs_mag_kh55sm_nocamo_6: rhs_mag_kh55sm_nocamo {
        count = 6;
        hardpoints[] = {};
    };
    class rhs_mag_kh55sh: rhs_mag_kh55sm {
        displayname = "Kh-55Sh HE (camo)";
        displaynameshort = "$STR_RHS_MAG_KH55SH_CAMO";
        descriptionShort = "High explosive";
        ammo = "rhs_ammo_kh55sh";
    };
    class rhs_mag_kh55sh_6: rhs_mag_kh55sh {
        count = 6;
        hardpoints[] = {};
    };
    class rhs_mag_kh55sh_nocamo: rhs_mag_kh55sh {
        displayname = "$STR_RHS_MAG_KH55SH";
        ammo = "rhs_ammo_kh55sh_nocamo";
    };
    class rhs_mag_kh55sh_nocamo_6: rhs_mag_kh55sh_nocamo {
        count = 6;
        hardpoints[] = {};
    };
    class rhs_mag_9m127: VehicleMagazine {
        ammo = "rhs_ammo_9m127m";
        displayname = "$STR_RHS_MAG_9M127M";
        displaynameshort = "$STR_RHS_MAG_9M127M";
        namesound = "missiles";
        count = 6;
        initspeed = 0;
        weight = 270;
        mass = 270;
    };
    class rhs_mag_9m127m: rhs_mag_9m127 {
        ammo = "rhs_ammo_9m127m";
    };
    class rhs_mag_apu6_9m127m_ka52: rhs_mag_9m127m {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m127_6x";
        pylonWeapon = "rhs_weap_9k121_Launcher";
        hardpoints[] = {"RHS_HP_APU6_9m127_KA52"};
    };
    class rhs_mag_fab100: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250";
        scope = 2;
        count = 1;
        initspeed = 0;
        maxleadspeed = 5;
        namesound = "";
        ammo = "rhs_ammo_fab100";
        displayname = "$STR_RHS_MAG_FAB100";
        displayNameShort = "HE";
        hardpoints[] = {"RHS_HP_FAB100"};
        pylonWeapon = "rhs_weap_fab100";
        weight = 100;
        mass = 100;
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "АБ100";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "АБ100";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "АБ100";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0113139}, 1},
                                {"Center", {0.005, -0.00979781}, 1},
                                {"Center", {0.00866, -0.00565693}, 1},
                                {"Center", {0.01, 0}, 1},
                                {"Center", {0.00866, 0.00565693}, 1},
                                {"Center", {0.005, 0.00979781}, 1},
                                {"Center", {0, 0.0113139}, 1},
                                {"Center", {-0.005, 0.00979781}, 1},
                                {"Center", {-0.00866, 0.00565693}, 1},
                                {"Center", {-0.01, 0}, 1},
                                {"Center", {-0.00866, -0.00565693}, 1},
                                {"Center", {-0.005, -0.00979781}, 1},
                                {"Center", {0, -0.0113139}, 1},
                                {},
                                {"Center", {0.00707107, -0.00800011}, 1},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {},
                                {"Center", {0.00707107, 0.00800011}, 1},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {},
                                {"Center", {-0.00707107, 0.00800011}, 1},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {},
                                {"Center", {-0.00707107, -0.00800011}, 1},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, -0.00800011}, 1}, {"Center", {0.01, 0.000000000494545}, 1}, {"Center", {0.00707107, 0.00800011}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.00707107, 0.00800011}, 1}, {"Center", {-0.000000000874228, 0.0113139}, 1}, {"Center", {-0.00707107, 0.00800011}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, 0.00800011}, 1}, {"Center", {-0.01, -0.000000000134917}, 1}, {"Center", {-0.00707107, -0.00800011}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.00707107, -0.00800011}, 1}, {"Center", {0.00000000174846, -0.0113139}, 1}, {"Center", {0.00707107, -0.00800011}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_fab100_ka52: rhs_mag_fab100 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        hardpoints[] = {"RHS_HP_FAB100_KA52"};
    };
    class rhs_mag_fab100_bd3_umk2a: rhs_mag_fab100 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_FAB100_BD3_UMK2A"};
    };
    class rhs_mag_fab100_MBD3_U4T: rhs_mag_fab100 {
        displayname = "FAB-100 MBD3-U4T";
        count = 4;
        weight = 400;
        mass = 400;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_mbd3_u4t_fab100";
        pylonweapon = "rhs_weap_fab100_mbd3_u4t";
        hardpoints[] = {"RHS_HP_FAB100_MBD3_U4T"};
        mirrorMissilesIndexes[] = {3, 4, 1, 2};
    };
    class rhs_mag_fab100_MBD3_U6: rhs_mag_fab100 {
        displayname = "FAB-100 MBD3-U6";
        count = 6;
        weight = 600;
        mass = 600;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_mbd3_u6_fab100";
        pylonweapon = "rhs_weap_fab100_mbd3_u6";
        hardpoints[] = {"RHS_HP_FAB100_MBD3_U6"};
        mirrorMissilesIndexes[] = {3, 4, 1, 2, 5, 6};
    };
    class rhs_mag_fab250: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250";
        scope = 2;
        ammo = "rhs_ammo_fab250";
        count = 1;
        displayname = "$STR_RHS_FAB250_NAME";
        displayNameShort = "HE";
        initspeed = 0;
        maxleadspeed = 5;
        namesound = "";
        hardpoints[] = {"RHS_HP_FAB250"};
        pylonWeapon = "rhs_weap_fab250";
        weight = 266;
        mass = 266;
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "АБ250";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "АБ250";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "АБ250";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0169708}, 1},
                                {"Center", {0.0075, -0.0146967}, 1},
                                {"Center", {0.01299, -0.0084854}, 1},
                                {"Center", {0.015, 0}, 1},
                                {"Center", {0.01299, 0.0084854}, 1},
                                {"Center", {0.0075, 0.0146967}, 1},
                                {"Center", {0, 0.0169708}, 1},
                                {"Center", {-0.0075, 0.0146967}, 1},
                                {"Center", {-0.01299, 0.0084854}, 1},
                                {"Center", {-0.015, 0}, 1},
                                {"Center", {-0.01299, -0.0084854}, 1},
                                {"Center", {-0.0075, -0.0146967}, 1},
                                {"Center", {0, -0.0169708}, 1},
                                {},
                                {"Center", {0.0106066, -0.0120002}, 1},
                                {"Center", {0.0176777, -0.0200003}, 1},
                                {},
                                {"Center", {0.0106066, 0.0120002}, 1},
                                {"Center", {0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.0106066, 0.0120002}, 1},
                                {"Center", {-0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.0106066, -0.0120002}, 1},
                                {"Center", {-0.0176777, -0.0200003}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0120002}, 1}, {"Center", {0.015, 0.000000000741817}, 1}, {"Center", {0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0120002}, 1}, {"Center", {-0.00000000131134, 0.0169708}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}, {"Center", {-0.015, -0.000000000202375}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}, {"Center", {0.00000000262268, -0.0169708}, 1}, {"Center", {0.0106066, -0.0120002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_fab250_2: rhs_mag_fab250 {
        count = 2;
        weight = 532;
        mass = 532;
        hardpoints[] = {""};
    };
    class rhs_mag_fab250_4: rhs_mag_fab250 {
        count = 4;
        weight = 1064;
        mass = 1064;
        hardpoints[] = {""};
    };
    class rhs_mag_fab250_ka52: rhs_mag_fab250 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        hardpoints[] = {"RHS_HP_FAB250_KA52"};
    };
    class rhs_mag_fab250_bd3_umk2a: rhs_mag_fab250 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_FAB250_BD3_UMK2A"};
    };
    class rhs_mag_fab250_m62: rhs_mag_fab250 {
        ammo = "rhs_ammo_fab250_m62";
        displayname = "$STR_RHS_MAG_FAB250_M62";
        pylonWeapon = "rhs_weap_fab250_m62";
    };
    class rhs_mag_fab250_m62_ka52: rhs_mag_fab250_m62 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        hardpoints[] = {"RHS_HP_FAB250_KA52"};
    };
    class rhs_mag_fab250_m62_bd3_umk2a: rhs_mag_fab250_m62 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_FAB250_BD3_UMK2A"};
    };
    class rhs_mag_ofab250: rhs_mag_fab250 {
        ammo = "rhs_ammo_ofab250";
        displayname = "$STR_RHS_OFAB250_NAME";
        displayNameShort = "HE-FRAG";
        pylonWeapon = "rhs_weap_ofab250";
    };
    class rhs_mag_ofab250_ka52: rhs_mag_ofab250 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        hardpoints[] = {"RHS_HP_FAB250_KA52"};
    };
    class rhs_mag_ofab250_bd3_umk2a: rhs_mag_ofab250 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_FAB250_BD3_UMK2A"};
    };
    class rhs_mag_kab250: rhs_mag_fab250 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kab250_ext";
        ammo = "rhs_ammo_kab250";
        displayname = "$STR_RHS_KAB250_NAME";
        displayNameShort = "LGB";
        pylonWeapon = "rhs_weap_kab250";
        hardpoints[] = {"RHS_HP_KAB250"};
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "КАБ250";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "КАБ250";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "КАБ250";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0169708}, 1},
                                {"Center", {0.0075, -0.0146967}, 1},
                                {"Center", {0.01299, -0.0084854}, 1},
                                {"Center", {0.015, 0}, 1},
                                {"Center", {0.01299, 0.0084854}, 1},
                                {"Center", {0.0075, 0.0146967}, 1},
                                {"Center", {0, 0.0169708}, 1},
                                {"Center", {-0.0075, 0.0146967}, 1},
                                {"Center", {-0.01299, 0.0084854}, 1},
                                {"Center", {-0.015, 0}, 1},
                                {"Center", {-0.01299, -0.0084854}, 1},
                                {"Center", {-0.0075, -0.0146967}, 1},
                                {"Center", {0, -0.0169708}, 1},
                                {},
                                {"Center", {0.0106066, -0.0120002}, 1},
                                {"Center", {0.0176777, -0.0200003}, 1},
                                {},
                                {"Center", {0.0106066, 0.0120002}, 1},
                                {"Center", {0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.0106066, 0.0120002}, 1},
                                {"Center", {-0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.0106066, -0.0120002}, 1},
                                {"Center", {-0.0176777, -0.0200003}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0120002}, 1}, {"Center", {0.015, 0.000000000741817}, 1}, {"Center", {0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0120002}, 1}, {"Center", {-0.00000000131134, 0.0169708}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}, {"Center", {-0.015, -0.000000000202375}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}, {"Center", {0.00000000262268, -0.0169708}, 1}, {"Center", {0.0106066, -0.0120002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_kab250_int: rhs_mag_kab250 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kab250";
        hardpoints[] = {"RHS_HP_FAB250", "RHS_HP_KAB250_INT"};
    };
    class rhs_mag_rbk250_ao1: rhs_mag_fab250 {
        ammo = "rhs_ammo_rbk250_ao1";
        displayname = "$STR_RHS_MAG_RBK250_AO1";
        displayNameShort = "Cluster HE";
        pylonWeapon = "rhs_weap_rbk250_ao1";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "РБК250";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "РБК250";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "РБК250";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0169708}, 1},
                                {"Center", {0.0075, -0.0146967}, 1},
                                {"Center", {0.01299, -0.0084854}, 1},
                                {"Center", {0.015, 0}, 1},
                                {"Center", {0.01299, 0.0084854}, 1},
                                {"Center", {0.0075, 0.0146967}, 1},
                                {"Center", {0, 0.0169708}, 1},
                                {"Center", {-0.0075, 0.0146967}, 1},
                                {"Center", {-0.01299, 0.0084854}, 1},
                                {"Center", {-0.015, 0}, 1},
                                {"Center", {-0.01299, -0.0084854}, 1},
                                {"Center", {-0.0075, -0.0146967}, 1},
                                {"Center", {0, -0.0169708}, 1},
                                {},
                                {"Center", {0.0106066, -0.0120002}, 1},
                                {"Center", {0.0176777, -0.0200003}, 1},
                                {},
                                {"Center", {0.0106066, 0.0120002}, 1},
                                {"Center", {0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.0106066, 0.0120002}, 1},
                                {"Center", {-0.0176777, 0.0200003}, 1},
                                {},
                                {"Center", {-0.0106066, -0.0120002}, 1},
                                {"Center", {-0.0176777, -0.0200003}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0120002}, 1}, {"Center", {0.015, 0.000000000741817}, 1}, {"Center", {0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0120002}, 1}, {"Center", {-0.00000000131134, 0.0169708}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}, {"Center", {-0.015, -0.000000000202375}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}, {"Center", {0.00000000262268, -0.0169708}, 1}, {"Center", {0.0106066, -0.0120002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_rbk250_ao1_ka52: rhs_mag_rbk250_ao1 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        hardpoints[] = {"RHS_HP_FAB250_KA52"};
    };
    class rhs_mag_rbk250_ao1_bd3_umk2a: rhs_mag_rbk250_ao1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_FAB250_BD3_UMK2A"};
    };
    class rhs_mag_rbk250_ptab25: rhs_mag_fab250 {
        ammo = "rhs_ammo_rbk250_ptab25";
        displayname = "$STR_RHS_MAG_RBK250_PTAB25";
        displayNameShort = "Cluster HEAT";
        pylonWeapon = "rhs_weap_rbk250_ptab25";
    };
    class rhs_mag_rbk250_ptab25_ka52: rhs_mag_rbk250_ptab25 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        hardpoints[] = {"RHS_HP_FAB250_KA52"};
    };
    class rhs_mag_rbk250_ptab25_bd3_umk2a: rhs_mag_rbk250_ptab25 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_FAB250_BD3_UMK2A"};
    };
    class rhs_mag_rbk250_zab25t: rhs_mag_fab250 {
        ammo = "rhs_ammo_rbk250_zab25t";
        displayname = "$STR_RHS_MAG_RBK250_ZAB25T";
        displayNameShort = "Cluster Incendiary";
        pylonWeapon = "rhs_weap_rbk250_zab25t";
    };
    class rhs_mag_rbk250_zab25t_ka52: rhs_mag_rbk250_zab25t {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        hardpoints[] = {"RHS_HP_FAB250_KA52"};
    };
    class rhs_mag_rbk250_zab25t_bd3_umk2a: rhs_mag_rbk250_zab25t {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_FAB250_BD3_UMK2A"};
    };
    class rhs_mag_fab500: rhs_mag_fab250 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_fab500";
        ammo = "rhs_ammo_fab500";
        displayname = "$STR_RHS_FAB500_M62_NAME";
        weight = 500;
        mass = 500;
        hardpoints[] = {"RHS_HP_FAB500"};
        pylonWeapon = "rhs_weap_fab500";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "АБ500";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "АБ500";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "АБ500";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0247487, -0.0280004}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0247487, 0.0280004}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0247487, 0.0280004}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0247487, -0.0280004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_fab500_bd3_usk_a: rhs_mag_fab500 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_fab500_ext";
        hardpoints[] = {"RHS_HP_FAB500_BD3_USK_A"};
    };
    class rhs_mag_fab500_bd3_umk2a: rhs_mag_fab500 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_FAB500_BD3_UMK2A"};
    };
    class rhs_mag_fab500_ka52: rhs_mag_fab500 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        hardpoints[] = {"RHS_HP_FAB500_KA52"};
    };
    class rhs_mag_fab500_m54: rhs_mag_fab500 {
        ammo = "rhs_ammo_fab500_m54";
        displayname = "$STR_RHS_fab500_M54_NAME";
    };
    class rhs_mag_fab500_m54_bd3_usk_a: rhs_mag_fab500_m54 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_fab500_ext";
        hardpoints[] = {"RHS_HP_FAB500_BD3_USK_A"};
    };
    class rhs_mag_fab500_m54_bd3_umk2a: rhs_mag_fab500_m54 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_FAB500_BD3_UMK2A"};
    };
    class rhs_mag_fab500_m54_ka52: rhs_mag_fab500_m54 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        hardpoints[] = {"RHS_HP_FAB500_KA52"};
    };
    class rhs_mag_kab500: rhs_mag_fab500 {
        ammo = "rhs_ammo_kab500";
        displayname = "$STR_RHS_KAB500L_NAME";
        displayNameShort = "LGB";
        pylonWeapon = "rhs_weap_kab500";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "КАБ500";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "КАБ500";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "КАБ500";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0226277}, 1},
                                {"Center", {0.01, -0.0195956}, 1},
                                {"Center", {0.01732, -0.0113139}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0113139}, 1},
                                {"Center", {0.01, 0.0195956}, 1},
                                {"Center", {0, 0.0226277}, 1},
                                {"Center", {-0.01, 0.0195956}, 1},
                                {"Center", {-0.01732, 0.0113139}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0113139}, 1},
                                {"Center", {-0.01, -0.0195956}, 1},
                                {"Center", {0, -0.0226277}, 1},
                                {},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {"Center", {0.0247487, -0.0280004}, 1},
                                {},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {"Center", {0.0247487, 0.0280004}, 1},
                                {},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {"Center", {-0.0247487, 0.0280004}, 1},
                                {},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {"Center", {-0.0247487, -0.0280004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0160002}, 1}, {"Center", {0.02, 0.00000000098909}, 1}, {"Center", {0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0160002}, 1}, {"Center", {-0.00000000174846, 0.0226277}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0160002}, 1}, {"Center", {-0.02, -0.000000000269833}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0160002}, 1}, {"Center", {0.00000000349691, -0.0226277}, 1}, {"Center", {0.0141421, -0.0160002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_kab500_bd3_umk2a: rhs_mag_kab500 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_KAB500_BD3_UMK2A"};
    };
    class rhs_mag_kab500LK: rhs_mag_fab500 {
        ammo = "rhs_ammo_kab500lk";
        displayname = "$STR_RHS_KAB500LK_NAME";
        displayNameShort = "LG Cluster";
        pylonWeapon = "rhs_weap_kab500LK";
    };
    class rhs_mag_kab500LK_bd3_umk2a: rhs_mag_kab500LK {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_KAB500_BD3_UMK2A"};
    };
    class rhs_mag_kab500kr: rhs_mag_fab500 {
        ammo = "rhs_ammo_kab500kr";
        displayname = "$STR_RHS_KAB500KR_NAME";
        displayNameShort = "TV Bomb";
        pylonWeapon = "rhs_weap_kab500kr";
    };
    class rhs_mag_kab500kr_bd3_umk2a: rhs_mag_kab500kr {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_KAB500_BD3_UMK2A"};
    };
    class rhs_mag_kab500od: rhs_mag_fab500 {
        ammo = "rhs_ammo_kab500od";
        displayname = "$STR_RHS_KAB500OD_NAME";
        displayNameShort = "TV HE Bomb";
        pylonWeapon = "rhs_weap_kab500od";
    };
    class rhs_mag_kab500od_bd3_umk2a: rhs_mag_kab500od {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        hardpoints[] = {"RHS_HP_KAB500_BD3_UMK2A"};
    };
    class rhs_mag_rbk500_ao25: rhs_mag_fab500 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500";
        ammo = "rhs_ammo_rbk500_ao25";
        displayname = "$STR_RHS_MAG_RBK500_AO25";
        displayNameShort = "Cluster HE";
        pylonWeapon = "rhs_weap_rbk500_ao25";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "РБК500";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "РБК500";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
        };
    };
    class rhs_mag_rbk500_ao25_bd3_usk_a: rhs_mag_rbk500_ao25 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ext";
        hardpoints[] = {"RHS_HP_FAB500_BD3_USK_A"};
    };
    class rhs_mag_rbk500_ao25_bd3_umk2a: rhs_mag_rbk500_ao25 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500";
        hardpoints[] = {"RHS_HP_FAB500_BD3_UMK2A"};
    };
    class rhs_mag_rbk500_ao25_ka52: rhs_mag_rbk500_ao25 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ka52";
        hardpoints[] = {"RHS_HP_FAB500_KA52"};
    };
    class rhs_mag_rbk500_ofab50: rhs_mag_fab500 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500";
        ammo = "rhs_ammo_rbk500_ofab50";
        displayname = "$STR_RHS_MAG_RBK500_OFAB50";
        displayNameShort = "Cluster HE-FRAG";
        pylonWeapon = "rhs_weap_rbk500_ofab50";
    };
    class rhs_mag_rbk500_ofab50_bd3_usk_a: rhs_mag_rbk500_ofab50 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ext";
        hardpoints[] = {"RHS_HP_FAB500_BD3_USK_A"};
    };
    class rhs_mag_rbk500_ofab50_bd3_umk2a: rhs_mag_rbk500_ofab50 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500";
        hardpoints[] = {"RHS_HP_FAB500_BD3_UMK2A"};
    };
    class rhs_mag_rbk500_ofab50_ka52: rhs_mag_rbk500_ofab50 {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ka52";
        hardpoints[] = {"RHS_HP_FAB500_KA52"};
    };
    class rhs_mag_rbk500_spbed: rhs_mag_fab500 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_spbed";
        ammo = "rhs_ammo_rbk500_spbed";
        displayname = "$STR_RHS_MAG_RBK500_SPBED";
        displayNameShort = "Cluster Guided HEAT";
        pylonWeapon = "rhs_weap_rbk500_spbed";
    };
    class rhs_mag_rbk500_spbed_bd3_usk_a: rhs_mag_rbk500_spbed {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_spbed_ext";
        hardpoints[] = {"RHS_HP_FAB500_BD3_USK_A"};
    };
    class rhs_mag_rbk500_spbed_bd3_umk2a: rhs_mag_rbk500_spbed {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500_spbed";
        hardpoints[] = {"RHS_HP_FAB500_BD3_UMK2A"};
    };
    class rhs_mag_rbk500_spbed_ka52: rhs_mag_rbk500_spbed {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_spbed_ka52";
        hardpoints[] = {"RHS_HP_FAB500_KA52"};
    };
    class rhs_mag_rbk500_ptab1m: rhs_mag_fab500 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ptab";
        ammo = "rhs_ammo_rbk500_ptab1m";
        displayname = "$STR_RHS_MAG_RBK500_PTAB1M";
        displayNameShort = "Cluster HEAT";
        pylonWeapon = "rhs_weap_rbk500_ptab1m";
    };
    class rhs_mag_rbk500_ptab1m_bd3_usk_a: rhs_mag_rbk500_ptab1m {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ptab_ext";
        hardpoints[] = {"RHS_HP_FAB500_BD3_USK_A"};
    };
    class rhs_mag_rbk500_ptab1m_bd3_umk2a: rhs_mag_rbk500_ptab1m {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500_ptab";
        hardpoints[] = {"RHS_HP_FAB500_BD3_UMK2A"};
    };
    class rhs_mag_rbk500_ptab1m_ka52: rhs_mag_rbk500_ptab1m {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ptab_ka52";
        hardpoints[] = {"RHS_HP_FAB500_KA52"};
    };
    class rhs_mag_rbk500_zab25t: rhs_mag_fab500 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500";
        ammo = "rhs_ammo_rbk500_zab25t";
        displayname = "$STR_RHS_MAG_RBK500_ZAB25T";
        displayNameShort = "Cluster Incendiary";
        pylonWeapon = "rhs_weap_rbk500_zab25t";
    };
    class rhs_mag_rbk500_zab25t_bd3_usk_a: rhs_mag_rbk500_zab25t {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ext";
        hardpoints[] = {"RHS_HP_FAB500_BD3_USK_A"};
    };
    class rhs_mag_rbk500_zab25t_bd3_umk2a: rhs_mag_rbk500_zab25t {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500";
        hardpoints[] = {"RHS_HP_FAB500_BD3_UMK2A"};
    };
    class rhs_mag_rbk500_zab25t_ka52: rhs_mag_rbk500_zab25t {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ka52";
        hardpoints[] = {"RHS_HP_FAB500_KA52"};
    };
    class rhs_mag_kmgu2_ao25: rhs_mag_fab250 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2";
        ammo = "rhs_ammo_kmgu2_ao25";
        displayname = "$STR_RHS_MAG_KMGU2_AO25";
        displayNameShort = "Cluster HE";
        ejectSpeed[] = {1, 0, 0};
        initSpeed = 0;
        initSpeedY = -5;
        initSpeedZ = 0;
        weight = 500;
        mass = 500;
        count = 8;
        hardpoints[] = {"RHS_HP_KMGU2"};
        pylonWeapon = "rhs_weap_kmgu2_ao25";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "КМГ";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "КМГ";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "КМГ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0282847}, 1},
                                {"Center", {0.0125, -0.0244945}, 1},
                                {"Center", {0.02165, -0.0141423}, 1},
                                {"Center", {0.025, 0}, 1},
                                {"Center", {0.02165, 0.0141423}, 1},
                                {"Center", {0.0125, 0.0244945}, 1},
                                {"Center", {0, 0.0282847}, 1},
                                {"Center", {-0.0125, 0.0244945}, 1},
                                {"Center", {-0.02165, 0.0141423}, 1},
                                {"Center", {-0.025, 0}, 1},
                                {"Center", {-0.02165, -0.0141423}, 1},
                                {"Center", {-0.0125, -0.0244945}, 1},
                                {"Center", {0, -0.0282847}, 1},
                                {},
                                {"Center", {0.0176777, -0.0200003}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0176777, 0.0200003}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0176777, 0.0200003}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0176777, -0.0200003}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0176777, -0.0200003}, 1}, {"Center", {0.025, 0.00000000123636}, 1}, {"Center", {0.0176777, 0.0200003}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0176777, 0.0200003}, 1}, {"Center", {-0.00000000218557, 0.0282847}, 1}, {"Center", {-0.0176777, 0.0200003}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0176777, 0.0200003}, 1}, {"Center", {-0.025, -0.000000000337291}, 1}, {"Center", {-0.0176777, -0.0200003}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0176777, -0.0200003}, 1}, {"Center", {0.00000000437114, -0.0282847}, 1}, {"Center", {0.0176777, -0.0200003}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_kmgu2_ao25_bd3_umk2a: rhs_mag_kmgu2_ao25 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kmgu2";
        hardpoints[] = {"RHS_HP_KMGU2_BD3_UMK2A"};
    };
    class rhs_mag_kmgu2_ao25_ka52: rhs_mag_kmgu2_ao25 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2_ka52";
        hardpoints[] = {"RHS_HP_KMGU2_KA52"};
    };
    class rhs_mag_kmgu2_ptab1m: rhs_mag_kmgu2_ao25 {
        ammo = "rhs_ammo_kmgu2_ptab1m";
        displayname = "$STR_RHS_MAG_KMGU2_PTAB1M";
        displayNameShort = "Cluster HEAT";
        pylonWeapon = "rhs_weap_kmgu2_ptab1m";
    };
    class rhs_mag_kmgu2_ptab1m_bd3_umk2a: rhs_mag_kmgu2_ptab1m {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kmgu2";
        hardpoints[] = {"RHS_HP_KMGU2_BD3_UMK2A"};
    };
    class rhs_mag_kmgu2_ptab1m_ka52: rhs_mag_kmgu2_ptab1m {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2_ka52";
        hardpoints[] = {"RHS_HP_KMGU2_KA52"};
    };
    class rhs_mag_kmgu2_pfm1: rhs_mag_kmgu2_ao25 {
        ammo = "rhs_ammo_kmgu2_pfm1";
        displayname = "$STR_RHS_MAG_KMGU2_PFM1";
        displayNameShort = "Cluster AP Mine";
        pylonWeapon = "rhs_weap_kmgu2_pfm1";
    };
    class rhs_mag_kmgu2_pfm1_bd3_umk2a: rhs_mag_kmgu2_pfm1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kmgu2";
        hardpoints[] = {"RHS_HP_KMGU2_BD3_UMK2A"};
    };
    class rhs_mag_kmgu2_pfm1_ka52: rhs_mag_kmgu2_pfm1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2_ka52";
        hardpoints[] = {"RHS_HP_KMGU2_KA52"};
    };
    class rhs_mag_kmgu2_ptm1: rhs_mag_kmgu2_ao25 {
        ammo = "rhs_ammo_kmgu2_ptm1";
        displayname = "$STR_RHS_MAG_KMGU2_PTM1";
        displayNameShort = "Cluster AT Mine";
        pylonWeapon = "rhs_weap_kmgu2_ptm1";
    };
    class rhs_mag_kmgu2_ptm1_bd3_umk2a: rhs_mag_kmgu2_ptm1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kmgu2";
        hardpoints[] = {"RHS_HP_KMGU2_BD3_UMK2A"};
    };
    class rhs_mag_kmgu2_ptm1_ka52: rhs_mag_kmgu2_ptm1 {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2_ka52";
        hardpoints[] = {"RHS_HP_KMGU2_KA52"};
    };
    class ATMine_Range_Mag;
    class rhs_mag_mine_pfm1: ATMine_Range_Mag {
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_PFM1_NAME";
        descriptionShort = "$STR_RHS_CFGMAGAZINES_PMN21";
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d";
        picture = "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_pfm1_ca";
        mass = 4.24;
        ammo = "rhs_ammo_pfm1";
    };
    class rhs_mag_mine_ptm1: ATMine_Range_Mag {
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_PTM1_NAME";
        descriptionShort = "$STR_RHS_CFGMAGAZINES_TM62M1";
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d";
        picture = "\rhsafrf\addons\rhs_weapons\icons\rhs_mine_ptm1_ca";
        mass = 30;
        ammo = "rhs_ammo_ptm1";
    };
    class rhs_mag_ptb1150_ptb: rhs_mag_ofab250_bd3_umk2a {
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_ptb_ptb1150";
        ammo = "rhs_ammo_ptb1150";
        displayname = "$STR_RHS_PTB1150_NAME";
        displayNameShort = "PTB";
        hardpoints[] = {"RHS_HP_PTB1150"};
        pylonWeapon = "rhs_weap_ptb1150";
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "ПТАБ";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "ПТАБ";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "ПТАБ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0169708}, 1},
                                {"Center", {0.0075, -0.0146967}, 1},
                                {"Center", {0.01299, -0.0084854}, 1},
                                {"Center", {0.015, 0}, 1},
                                {"Center", {0.01299, 0.0084854}, 1},
                                {"Center", {0.0075, 0.0146967}, 1},
                                {"Center", {0, 0.0169708}, 1},
                                {"Center", {-0.0075, 0.0146967}, 1},
                                {"Center", {-0.01299, 0.0084854}, 1},
                                {"Center", {-0.015, 0}, 1},
                                {"Center", {-0.01299, -0.0084854}, 1},
                                {"Center", {-0.0075, -0.0146967}, 1},
                                {"Center", {0, -0.0169708}, 1},
                                {},
                                {"Center", {0.0106066, -0.0120002}, 1},
                                {"Center", {0.0141421, -0.0160002}, 1},
                                {},
                                {"Center", {0.0106066, 0.0120002}, 1},
                                {"Center", {0.0141421, 0.0160002}, 1},
                                {},
                                {"Center", {-0.0106066, 0.0120002}, 1},
                                {"Center", {-0.0141421, 0.0160002}, 1},
                                {},
                                {"Center", {-0.0106066, -0.0120002}, 1},
                                {"Center", {-0.0141421, -0.0160002}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, -0.0120002}, 1}, {"Center", {0.015, 0.000000000741817}, 1}, {"Center", {0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0106066, 0.0120002}, 1}, {"Center", {-0.00000000131134, 0.0169708}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, 0.0120002}, 1}, {"Center", {-0.015, -0.000000000202375}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0106066, -0.0120002}, 1}, {"Center", {0.00000000262268, -0.0169708}, 1}, {"Center", {0.0106066, -0.0120002}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_ptb1500: VehicleMagazine {
        scope = 2;
        ammo = "rhs_ammo_ptb1500";
        displayName = "$STR_RHS_PTB1500_NAME";
        count = 1;
        initSpeed = 0;
        sound[] = {};
        reloadSound[] = {};
        nameSound = "";
        model = "\rhsafrf\addons\rhs_airweapons\rhs_pylon_ptb_ptb1500";
        pylonweapon = "rhs_weap_DummyLauncher";
        hardpoints[] = {"RHS_HP_PTB1500"};
        class mfdElements {
            class rhs_rus_ammoname {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "ПТАБ";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_rus_ammoname_right {
                class Bones {};
                class Draw {
                    condition = "PylonSelected";
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "ПТАБ";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{-0.005, 0.02}, 1};
                        right[] = {{0.045, 0.02}, 1};
                        down[] = {{-0.005, 0.065}, 1};
                    };
                };
            };
            class rhs_su25_box {
                class Bones {};
                class Draw {
                    condition = "1-pylonMagazineEmpty";
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Shape {
                        type = "polygon";
                        width = 4;
                        points[] = {{{{-0.022, -0.04}, 1}, {{0.022, -0.04}, 1}, {{0.022, 0.04}, 1}, {{-0.022, 0.04}, 1}}};
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.58, 0.23, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.022, 0.18}, 1}, {{0.022, 0.18}, 1}, {{0.022, 0.26}, 1}, {{-0.022, 0.26}, 1}}};
                        };
                    };
                };
            };
            class rhs_rus_circle {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15, 1};
                    alpha = 0.22;
                    class Default {
                        condition = "1-PylonSelected-pylonMagazineEmpty";
                        color[] = {1, 1, 1};
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "ПТАБ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.005, 0.06}, 1};
                            right[] = {{0.04, 0.06}, 1};
                            down[] = {{-0.005, 0.105}, 1};
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0282847}, 1},
                                {"Center", {0.0125, -0.0244945}, 1},
                                {"Center", {0.02165, -0.0141423}, 1},
                                {"Center", {0.025, 0}, 1},
                                {"Center", {0.02165, 0.0141423}, 1},
                                {"Center", {0.0125, 0.0244945}, 1},
                                {"Center", {0, 0.0282847}, 1},
                                {"Center", {-0.0125, 0.0244945}, 1},
                                {"Center", {-0.02165, 0.0141423}, 1},
                                {"Center", {-0.025, 0}, 1},
                                {"Center", {-0.02165, -0.0141423}, 1},
                                {"Center", {-0.0125, -0.0244945}, 1},
                                {"Center", {0, -0.0282847}, 1},
                                {},
                                {"Center", {0.0176777, -0.0200003}, 1},
                                {"Center", {0.0282843, -0.0320005}, 1},
                                {},
                                {"Center", {0.0176777, 0.0200003}, 1},
                                {"Center", {0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0176777, 0.0200003}, 1},
                                {"Center", {-0.0282843, 0.0320005}, 1},
                                {},
                                {"Center", {-0.0176777, -0.0200003}, 1},
                                {"Center", {-0.0282843, -0.0320004}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon {
                            type = "polygon";
                            width = 4;
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0176777, -0.0200003}, 1}, {"Center", {0.025, 0.00000000123636}, 1}, {"Center", {0.0176777, 0.0200003}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0176777, 0.0200003}, 1}, {"Center", {-0.00000000218557, 0.0282847}, 1}, {"Center", {-0.0176777, 0.0200003}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0176777, 0.0200003}, 1}, {"Center", {-0.025, -0.000000000337291}, 1}, {"Center", {-0.0176777, -0.0200003}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0176777, -0.0200003}, 1}, {"Center", {0.00000000437114, -0.0282847}, 1}, {"Center", {0.0176777, -0.0200003}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "pylonMagazineEmpty";
                        color[] = {1, 0, 0, 1};
                        class PylonText1: PylonText1 {};
                        class Shape: Shape {};
                        class Polygon: Polygon {};
                    };
                };
            };
        };
    };
    class rhs_mag_upk23_ofz: VehicleMagazine {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_g_upk23";
        scope = 2;
        ammo = "rhs_ammo_ofz_23x115mm";
        count = 250;
        displayname = "UPK-23-250 OFZ";
        displayNameShort = "HE";
        initspeed = 720;
        maxleadspeed = 5;
        namesound = "";
        hardpoints[] = {"RHS_HP_UPK23"};
        pylonWeapon = "RHS_Weap_GSh23L";
        muzzlePos = "muzzlePos";
        muzzleEnd = "muzzleEnd";
        weight = 266;
        mass = 266;
        tracersEvery = 1;
    };
    class rhs_mag_upk23_ofzt: rhs_mag_upk23_ofz {
        ammo = "rhs_ammo_ofzt_23x115mm";
        displayname = "UPK-23-250 OFZT";
        displayNameShort = "HE-T";
    };
    class rhs_mag_upk23_btz: rhs_mag_upk23_ofz {
        ammo = "rhs_ammo_bzt_23x115mm";
        displayname = "UPK-23-250 BZT";
        displayNameShort = "AP-T";
    };
    class rhs_mag_upk23_mixed: rhs_mag_upk23_ofz {
        ammo = "rhs_ammo_mixed_23x115mm";
        displayname = "UPK-23-250 Mixed";
        displayNameShort = "Mixed";
    };
    class rhs_mag_upk23_ka52_ofz: rhs_mag_upk23_ofz {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_g_upk23_ka52";
        hardpoints[] = {"RHS_HP_UPK23_KA52"};
    };
    class rhs_mag_upk23_ka52_ofzt: rhs_mag_upk23_ofzt {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_g_upk23_ka52";
        hardpoints[] = {"RHS_HP_UPK23_KA52"};
    };
    class rhs_mag_upk23_ka52_btz: rhs_mag_upk23_btz {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_g_upk23_ka52";
        hardpoints[] = {"RHS_HP_UPK23_KA52"};
    };
    class rhs_mag_upk23_ka52_mixed: rhs_mag_upk23_mixed {
        model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_g_upk23_ka52";
        hardpoints[] = {"RHS_HP_UPK23_KA52"};
    };
};
class Mode_FullAuto;
class CfgWeapons {
    class Default;
    class SmokeLauncher;
    class MissileLauncher;
    class MGun;
    class RocketPods;
    class rockets_Skyfire: RocketPods {
        class Far_AI;
        class Medium_AI;
        class Close_AI;
        class Burst;
    };
    class rhs_weap_s5: rockets_Skyfire {
        aiDispersionCoefY = 1;
        aiDispersionCoefX = 1.5;
        cursor = "missile";
        cursoraim = "EmptyCursor";
        cursorsize = 0;
        displayName = "$STR_RHS_WEAP_S5";
        proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\proxy\ub16";
        class gunClouds {};
        fireLightAmbient[] = {0, 0, 0};
        fireLightDiffuse[] = {0.93, 0.63, 0.25};
        fireLightDuration = 0.051;
        fireLightIntensity = 0.2;
        canLock = 1;
        weaponLockDelay = 8;
        showToPlayer = 1;
        magazines[] = {
            "rhs_mag_s5_192",
            "rhs_mag_s5_128",
            "rhs_mag_s5_64",
            "rhs_mag_s5_32",
            "rhs_mag_s5_16",
            "rhs_mag_ub16_s5",
            "rhs_mag_ub32_s5",
            "rhs_mag_ub16_ka52_s5",
            "rhs_mag_ub32_ka52_s5",
            "rhs_mag_ub16_bd3_umk2a_s5",
            "rhs_mag_ub32_bd3_umk2a_s5"
        };
        modes[] = {"AI_Burst", "Burst"};
        class Far_AI: Far_AI {
            displayName = "$STR_RHS_WEAP_S5";
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
        };
        class Medium_AI: Medium_AI {
            displayName = "$STR_RHS_WEAP_S5";
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
        };
        class Close_AI: Close_AI {
            displayName = "$STR_RHS_WEAP_S5";
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
        };
        class AI_Burst: RocketPods {
            showToPlayer = 0;
            displayName = "$STR_RHS_WEAP_S5";
            maxRange = 1500;
            maxRangeProbab = 0.05;
            dispersion = 0.038;
        };
        class Burst: Burst {
            dispersion = 0.038;
            showToPlayer = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 300;
            displayName = "$STR_RHS_WEAP_S5";
            burst = 1;
            salvo = 2;
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 0;
            midRangeProbab = 0.25;
            maxRange = 0;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_s5_ub32: rhs_weap_s5 {
        magazines[] = {"rhs_mag_s5_16"};
    };
    class rhs_weap_s5ko: rhs_weap_s5 {
        magazines[] = {
            "rhs_mag_s5_ko_192",
            "rhs_mag_s5_ko_128",
            "rhs_mag_s5_ko_64",
            "rhs_mag_s5_ko_32",
            "rhs_mag_s5_ko_16",
            "rhs_mag_ub16_s5ko",
            "rhs_mag_ub32_s5ko",
            "rhs_mag_ub16_ka52_s5ko",
            "rhs_mag_ub32_ka52_s5ko",
            "rhs_mag_ub16_bd3_umk2a_s5ko",
            "rhs_mag_ub32_bd3_umk2a_s5ko"
        };
    };
    class rhs_weap_s5k1: rhs_weap_s5 {
        magazines[] = {
            "rhs_mag_s5_k1_192",
            "rhs_mag_s5_k1_128",
            "rhs_mag_s5_k1_64",
            "rhs_mag_s5_k1_32",
            "rhs_mag_s5_k1_16",
            "rhs_mag_ub16_s5k1",
            "rhs_mag_ub32_s5k1",
            "rhs_mag_ub16_ka52_s5k1",
            "rhs_mag_ub32_ka52_s5k1",
            "rhs_mag_ub16_bd3_umk2a_s5k1",
            "rhs_mag_ub32_bd3_umk2a_s5k1"
        };
    };
    class rhs_weap_s5m1: rhs_weap_s5 {
        magazines[] = {
            "rhs_mag_s5_m1_192",
            "rhs_mag_s5_m1_128",
            "rhs_mag_s5_m1_64",
            "rhs_mag_s5_m1_32",
            "rhs_mag_s5_m1_16",
            "rhs_mag_ub16_s5m1",
            "rhs_mag_ub32_s5m1",
            "rhs_mag_ub16_ka52_s5m1",
            "rhs_mag_ub32_ka52_s5m1",
            "rhs_mag_ub16_bd3_umk2a_s5m1",
            "rhs_mag_ub32_bd3_umk2a_s5m1"
        };
    };
    class rhs_weap_s8: rhs_weap_s5 {
        displayName = "$STR_RHS_WEAP_S8";
        magazines[] = {
            "rhs_mag_s8_12",
            "rhs_mag_s8_20",
            "rhs_mag_s8_40",
            "rhs_mag_s8_80",
            "rhs_mag_s8_120",
            "rhs_mag_b8m1_s8kom",
            "rhs_mag_b8v20a_s8kom",
            "rhs_mag_b8v20a_ka52_s8kom",
            "rhs_mag_b8m1_bd3_umk2a_s8kom"
        };
        class Far_AI: Far_AI {
            displayName = "$STR_RHS_WEAP_S8";
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 500;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.4;
            maxRange = 800;
            maxRangeProbab = 0.01;
        };
        class Medium_AI: Medium_AI {
            displayName = "$STR_RHS_WEAP_S8";
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
        class Close_AI: Close_AI {
            displayName = "$STR_RHS_WEAP_S8";
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.1;
        };
        class AI_Burst: AI_Burst {
            dispersion = 0.032;
            displayName = "$STR_RHS_WEAP_S8";
        };
        class Burst: Burst {
            dispersion = 0.032;
            displayName = "$STR_RHS_WEAP_S8";
        };
    };
    class rhs_weap_s8df: rhs_weap_s8 {
        magazines[] = {
            "rhs_mag_s8_df_20",
            "rhs_mag_s8_df_40",
            "rhs_mag_s8_df_80",
            "rhs_mag_b8m1_s8df",
            "rhs_mag_b8v20a_s8df",
            "rhs_mag_b8v20a_ka52_s8df",
            "rhs_mag_b8m1_bd3_umk2a_s8df"
        };
    };
    class rhs_weap_s8t: rhs_weap_s8 {
        magazines[] = {
            "rhs_mag_s8_t_20",
            "rhs_mag_s8_t_40",
            "rhs_mag_s8_t_80",
            "rhs_mag_b8m1_s8t",
            "rhs_mag_b8v20a_s8t",
            "rhs_mag_b8v20a_ka52_s8t",
            "rhs_mag_b8m1_bd3_umk2a_s8t"
        };
    };
    class rhs_weap_s13: rhs_weap_s8 {
        displayName = "$STR_RHS_WEAP_S13";
        magazines[] = {
            "rhs_mag_s13b_10",
            "rhs_mag_b13l_s13b",
            "rhs_mag_b13l1_s13b",
            "rhs_mag_b13l1_ka52_s13b",
            "rhs_mag_b13l_bd3_umk2a_s13b"
        };
        class AI_Burst: AI_Burst {
            reloadtime = 0.15;
            dispersion = 0.02;
            displayName = "$STR_RHS_WEAP_S13";
        };
        class Burst: Burst {
            reloadtime = 0.15;
            dispersion = 0.02;
            displayName = "$STR_RHS_WEAP_S13";
        };
    };
    class rhs_weap_s13d: rhs_weap_s13 {
        magazines[] = {
            "rhs_mag_s13d_10",
            "rhs_mag_b13l_s13d",
            "rhs_mag_b13l1_s13d",
            "rhs_mag_b13l1_ka52_s13d",
            "rhs_mag_b13l_bd3_umk2a_s13d"
        };
    };
    class rhs_weap_s13df: rhs_weap_s13 {
        magazines[] = {
            "rhs_mag_s13df_10",
            "rhs_mag_b13l_s13df",
            "rhs_mag_b13l1_s13df",
            "rhs_mag_b13l1_ka52_s13df",
            "rhs_mag_b13l_bd3_umk2a_s13df"
        };
    };
    class rhs_weap_s13of: rhs_weap_s13 {
        magazines[] = {
            "rhs_mag_s13of_10",
            "rhs_mag_b13l_s13of",
            "rhs_mag_b13l1_s13of",
            "rhs_mag_b13l1_ka52_s13of",
            "rhs_mag_b13l_bd3_umk2a_s13of"
        };
    };
    class rhs_weap_s13t: rhs_weap_s13 {
        magazines[] = {
            "rhs_mag_s13t_10",
            "rhs_mag_b13l_s13t",
            "rhs_mag_b13l1_s13t",
            "rhs_mag_b13l1_ka52_s13t",
            "rhs_mag_b13l_bd3_umk2a_s13t"
        };
    };
    class rhs_weap_s24: rhs_weap_s13 {
        displayName = "$STR_RHS_WEAP_S24";
        magazines[] = {"rhs_mag_apu68m3_s24", "rhs_mag_apu68_bd3_umk2a_s24"};
        modes[] = {"AI_Burst", "Burst", "Single"};
        class AI_Burst: AI_Burst {
            dispersion = 0.02;
            displayName = "$STR_RHS_WEAP_S24";
        };
        class Burst: Burst {
            dispersion = 0.02;
            displayName = "$STR_RHS_WEAP_S24";
        };
        class Single: Burst {
            autofire = 0;
            displayName = "$STR_RHS_WEAP_S24";
            reloadTime = 0.08;
            showToPlayer = 1;
            burst = 1;
            salvo = 1;
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 0;
            midRangeProbab = 0.25;
            maxRange = 0;
            maxRangeProbab = 0.05;
            textureType = "semi";
        };
    };
    class rhs_weap_s24b: rhs_weap_s24 {
        magazines[] = {"rhs_mag_apu68m3_s24b", "rhs_mag_apu68_bd3_umk2a_s24b"};
    };
    class rhs_weap_s25: rhs_weap_s13 {
        displayName = "$STR_RHS_WEAP_S25O";
        magazines[] = {"rhs_mag_o25l_s25o", "rhs_mag_bd3_usk_a_o25l_s25o", "rhs_mag_bd3_umk2a_o25l_s25o"};
        modes[] = {"AI_Burst", "Burst", "Single"};
        class AI_Burst: AI_Burst {
            dispersion = 0.01;
            displayName = "$STR_RHS_WEAP_S25";
        };
        class Burst: Burst {
            dispersion = 0.01;
            displayName = "$STR_RHS_WEAP_S25";
        };
        class Single: Burst {
            autofire = 0;
            displayName = "$STR_RHS_WEAP_S25";
            reloadTime = 0.08;
            showToPlayer = 1;
            burst = 1;
            salvo = 1;
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 0;
            midRangeProbab = 0.25;
            maxRange = 0;
            maxRangeProbab = 0.05;
            textureType = "semi";
        };
    };
    class rhs_weap_s25of: rhs_weap_s25 {
        displayName = "$STR_RHS_WEAP_S25OF";
        magazines[] = {"rhs_mag_o25l_s25of", "rhs_mag_bd3_usk_a_o25l_s25of", "rhs_mag_bd3_umk2a_o25l_s25of"};
    };
    class rhs_weap_s25l: rhs_weap_s25 {
        displayName = "$STR_RHS_WEAP_S25L";
        magazines[] = {"rhs_mag_o25l_s25l", "rhs_mag_bd3_usk_a_o25l_s25l", "rhs_mag_bd3_umk2a_o25l_s25l"};
        cursor = "missile";
        canLock = 2;
        weaponLockSystem = 4;
        weaponLockDelay = 0.5;
        cmImmunity = 0.3;
        class EventHandlers {
            class RHS_KlenPS {
                fired = "_this call rhs_fnc_klenpsGuide";
            };
        };
    };
    class rhs_weap_s25ld: rhs_weap_s25 {
        displayName = "$STR_RHS_WEAP_S25LD";
        magazines[] = {"rhs_mag_o25l_s25ld", "rhs_mag_bd3_usk_a_o25l_s25ld", "rhs_mag_bd3_umk2a_o25l_s25ld"};
    };
    class Missile_AA_04_Plane_CAS_01_F;
    class rhs_weap_r27r_Launcher: Missile_AA_04_Plane_CAS_01_F {
        cursor = "EmptyCursor";
        cursoraim = "EmptyCursor";
        cursorsize = 0;
        displayname = "$STR_RHS_R27R_NAME";
        magazines[] = {
            "rhs_mag_R27R",
            "rhs_mag_R27R_APU470",
            "rhs_mag_R27ER",
            "rhs_mag_R27ER_APU470"
        };
        airateoffire = 5;
        airateoffiredistance = 16000;
        maxrange = 22000;
        maxrangeprobab = 0.45;
        midrange = 8000;
        midrangeprobab = 0.8;
        minrange = 2000;
        minrangeprobab = 0.4;
        reloadtime = 1;
        canLock = 2;
        weaponLockSystem = 8;
        weaponlockdelay = 2;
        lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 1.316228, 1};
        lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 1.316228, 2.5};
    };
    class rhs_weap_r27t_Launcher: rhs_weap_r27r_Launcher {
        displayname = "$STR_RHS_R27T_NAME";
        magazines[] = {
            "rhs_mag_R27T",
            "rhs_mag_R27T_APU470",
            "rhs_mag_R27ET",
            "rhs_mag_R27ET_APU470"
        };
        airateoffire = 5;
        airateoffiredistance = 6000;
        maxrange = 20000;
        maxrangeprobab = 0.05;
        midrange = 6000;
        midrangeprobab = 0.8;
        minrange = 300;
        minrangeprobab = 0.4;
        weaponLockSystem = 2;
        weaponlockdelay = 3;
    };
    class rhs_weap_r60_Launcher: Missile_AA_04_Plane_CAS_01_F {
        cursor = "EmptyCursor";
        cursoraim = "EmptyCursor";
        cursorsize = 0;
        displayname = "$STR_RHS_R60_NAME";
        canLock = 2;
        magazines[] = {
            "rhs_mag_R60",
            "rhs_mag_R60_APU60",
            "rhs_mag_R60M",
            "rhs_mag_R60M_APU60"
        };
        airateoffire = 5;
        airateoffiredistance = 7000;
        maxrange = 7000;
        maxrangeprobab = 0.05;
        midrange = 4000;
        midrangeprobab = 0.8;
        minrange = 300;
        minrangeprobab = 0.4;
        reloadtime = 1;
        weaponlockdelay = 3;
        lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 1.316228, 1};
        lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 1.316228, 2.5};
    };
    class rhs_weap_r73_Launcher: Missile_AA_04_Plane_CAS_01_F {
        cursor = "EmptyCursor";
        cursoraim = "EmptyCursor";
        cursorsize = 0;
        displayname = "$STR_RHS_R73_NAME";
        canLock = 2;
        magazines[] = {"rhs_mag_R73", "rhs_mag_R73_APU73"};
        airateoffire = 5;
        airateoffiredistance = 10000;
        maxrange = 10000;
        maxrangeprobab = 0.05;
        midrange = 5000;
        midrangeprobab = 0.8;
        minrange = 300;
        minrangeprobab = 0.4;
        reloadtime = 1;
        weaponlockdelay = 3;
        lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 1.316228, 1};
        lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 1.316228, 2.5};
    };
    class rhs_weap_r73m_Launcher: rhs_weap_r73_Launcher {
        displayname = "$STR_RHS_R73M_NAME";
        magazines[] = {"rhs_mag_R73M", "rhs_mag_R73M_APU73"};
    };
    class rhs_weap_r74_Launcher: rhs_weap_r73_Launcher {
        displayname = "$STR_RHS_R74_NAME";
        magazines[] = {"rhs_mag_R74", "rhs_mag_R74_APU73"};
    };
    class rhs_weap_r74m2_Launcher: rhs_weap_r73_Launcher {
        displayname = "$STR_RHS_R74M2_NAME";
        magazines[] = {"rhs_mag_R74M2", "rhs_mag_R74M2_int"};
    };
    class rhs_weap_r77_Launcher: rhs_weap_r74_Launcher {
        displayname = "$STR_RHS_R77_NAME";
        magazines[] = {"rhs_mag_R77", "rhs_mag_R77_AKU170", "rhs_mag_R77_AKU170_MIG29"};
        weaponlockdelay = 2;
        airateoffire = 5;
        airateoffiredistance = 16000;
        maxrange = 25000;
        maxrangeprobab = 0.45;
        midrange = 12000;
        midrangeprobab = 0.8;
        minrange = 900;
        minrangeprobab = 0.4;
    };
    class rhs_weap_r77m_Launcher: rhs_weap_r77_Launcher {
        displayname = "$STR_RHS_R77M_NAME";
        magazines[] = {"rhs_mag_R77M", "rhs_mag_R77M_AKU170", "rhs_mag_R77M_AKU170_MIG29"};
        weaponlockdelay = 2;
    };
    class Missile_AGM_02_Plane_CAS_01_F;
    class rhs_weap_kh25_Launcher: Missile_AGM_02_Plane_CAS_01_F {
        cursor = "missile";
        cursoraim = "EmptyCursor";
        cursorsize = 0;
        displayname = "$STR_RHS_KH25_NAME";
        magazines[] = {"rhs_mag_kh25"};
        airateoffire = 5;
        airateoffiredistance = 8000;
        maxrange = 7000;
        maxrangeprobab = 0.45;
        midrange = 5000;
        midrangeprobab = 0.9;
        minrange = 1000;
        minrangeprobab = 0.5;
        reloadtime = 1;
        canLock = 2;
        weaponLockSystem = 4;
        weaponLockDelay = 0.5;
        cmImmunity = 0.3;
        modes[] = {"this"};
        class EventHandlers {
            class RHS_KlenPS {
                fired = "_this call rhs_fnc_klenpsGuide";
            };
        };
    };
    class rhs_weap_kh25_mig29_Launcher: rhs_weap_kh25_Launcher {
        magazines[] = {"rhs_mag_kh25_apu68_mig29"};
        class EventHandlers {};
    };
    class rhs_weap_kh25ml_Launcher: rhs_weap_kh25_Launcher {
        displayname = "$STR_RHS_KH25ML_NAME";
        magazines[] = {"rhs_mag_kh25ml"};
        maxrange = 10000;
        maxrangeprobab = 0.45;
        midrange = 5000;
        midrangeprobab = 0.9;
        minrange = 1000;
        minrangeprobab = 0.5;
    };
    class rhs_weap_kh25ml_mig29_Launcher: rhs_weap_kh25ml_Launcher {
        magazines[] = {"rhs_mag_kh25ml_apu68_mig29"};
        class EventHandlers {};
    };
    class rhs_weap_kh25ma_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH25MA_NAME";
        magazines[] = {"rhs_mag_kh25ma"};
        weaponLockSystem = 8;
        weaponLockDelay = 1.5;
        class EventHandlers {};
    };
    class rhs_weap_kh25mt_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH25MT_NAME";
        magazines[] = {"rhs_mag_kh25mt", "rhs_mag_kh25mt_apu68_mig29"};
        weaponLockSystem = "CM_Lock_TV";
        weaponLockDelay = 1;
        class EventHandlers {};
    };
    class rhs_weap_kh25mtp_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH25MTP_NAME";
        magazines[] = {"rhs_mag_kh25mtp", "rhs_mag_kh25mtp_apu68_mig29"};
        weaponLockSystem = 2;
        weaponLockDelay = 3;
        class EventHandlers {};
    };
    class rhs_weap_kh25mp_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH25MP_NAME";
        magazines[] = {"rhs_mag_kh25mp", "rhs_mag_kh25mp_apu68_mig29"};
        weaponLockSystem = 0;
        class EventHandlers {};
    };
    class rhs_weap_kh29_Launcher: rhs_weap_kh25_Launcher {
        displayname = "$STR_RHS_KH29L_NAME";
        magazines[] = {"rhs_mag_kh29l"};
        airateoffire = 5;
        airateoffiredistance = 8000;
        maxrange = 10000;
        maxrangeprobab = 0.05;
        midrange = 5000;
        midrangeprobab = 0.9;
        minrange = 2000;
        minrangeprobab = 0.5;
        canLock = 2;
    };
    class rhs_weap_kh29_mig29_Launcher: rhs_weap_kh29_Launcher {
        magazines[] = {"rhs_mag_kh29l_aku58_mig29"};
        class EventHandlers {};
    };
    class rhs_weap_kh29ml_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH29ML_NAME";
        magazines[] = {"rhs_mag_kh29ml"};
    };
    class rhs_weap_kh29ml_mig29_Launcher: rhs_weap_kh29ml_Launcher {
        magazines[] = {"rhs_mag_kh29ml_aku58_mig29"};
        class EventHandlers {};
    };
    class rhs_weap_kh29t_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH29T_NAME";
        magazines[] = {"rhs_mag_kh29t", "rhs_mag_kh29t_aku58_mig29"};
        weaponLockSystem = 1;
        weaponLockDelay = 2;
        cmImmunity = 0.5;
        class EventHandlers {};
    };
    class rhs_weap_kh29mp_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH29MP_NAME";
        magazines[] = {"rhs_mag_kh29mp", "rhs_mag_kh29mp_aku58_mig29"};
        weaponLockSystem = 8;
        weaponLockDelay = 1.5;
        cmImmunity = 0.3;
        class EventHandlers {};
    };
    class rhs_weap_kh29d_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH29D_NAME";
        magazines[] = {"rhs_mag_kh29d"};
        weaponLockSystem = 2;
        weaponLockDelay = 3;
        cmImmunity = 0.3;
        class EventHandlers {};
    };
    class rhs_weap_kh38mle_Launcher: rhs_weap_kh29_Launcher {
        displayname = "$STR_RHS_KH38MLE_NAME";
        magazines[] = {"rhs_mag_kh38mle", "rhs_mag_kh38mle_int"};
        airateoffire = 5;
        airateoffiredistance = 8000;
        maxrange = 10000;
        maxrangeprobab = 0.05;
        midrange = 5000;
        midrangeprobab = 0.9;
        minrange = 2000;
        minrangeprobab = 0.5;
        class EventHandlers {};
    };
    class rhs_weap_kh38mae_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH38MAE_NAME";
        magazines[] = {"rhs_mag_Kh38mae", "rhs_mag_Kh38mae_int"};
        weaponLockSystem = 8;
        weaponLockDelay = 3;
        cmImmunity = 0.3;
    };
    class rhs_weap_kh38mte_Launcher: rhs_weap_kh25ml_Launcher {
        displayname = "$STR_RHS_KH38MTE_NAME";
        magazines[] = {"rhs_mag_Kh38mte", "rhs_mag_Kh38mte_int"};
        weaponLockSystem = 2;
        weaponLockDelay = 3;
        cmImmunity = 0.3;
    };
    class rhs_weap_kh55sm_Launcher: rhs_weap_kh29_Launcher {
        modes[] = {"this"};
        displayname = "$STR_RHS_MKU56_NAME";
        magazines[] = {
            "rhs_mag_kh55sm",
            "rhs_mag_kh55sm_6",
            "rhs_mag_kh55sm_nocamo",
            "rhs_mag_kh55sm_nocamo_6",
            "rhs_mag_kh55sh",
            "rhs_mag_kh55sh_6",
            "rhs_mag_kh55sh_nocamo",
            "rhs_mag_kh55sh_nocamo_6"
        };
        reloadtime = 5;
        class Eventhandlers: EventHandlers {
            class RHS_MissileDeploy {
                fired = "_this call rhs_fnc_tu95_missile_control";
            };
        };
    };
    class rhs_weap_kh55sm_dummy_Launcher: rhs_weap_kh55sm_Launcher {
        showToPlayer = 0;
    };
    class rhs_weap_9k121_Launcher: rhs_weap_kh55sm_Launcher {
        airateoffire = 5;
        airateoffiredistance = 4000;
        displayname = "9K121M";
        magazines[] = {"rhs_mag_apu6_9m127_ka52", "rhs_mag_apu6_9m127m_ka52"};
        canlock = 1;
        reloadtime = 1.5;
        weaponlockdelay = 4;
        modes[] = {"Single", "Burst"};
        class Single: rhs_weap_kh29_Launcher {
            airateoffire = 5;
            airateoffiredistance = 4000;
            maxrange = 11500;
            maxrangeprobab = 0.65;
            midrange = 4000;
            midrangeprobab = 0.95;
            minrange = 50;
            minrangeprobab = 0.6;
            reloadtime = 0.05;
        };
        class Burst: Single {
            reloadtime = 0.05;
            multiplier = 1;
            burst = 2;
            textureType = "burst";
        };
        holdsterAnimValue = 1;
        class Eventhandlers {};
    };
    class rhs_weap_fab250: MissileLauncher {
        cursor = "bomb";
        cursoraim = "EmptyCursor";
        cursorsize = 0;
        displayname = "$STR_RHS_FAB250_NAME";
        magazinereloadtime = 0;
        magazines[] = {
            "rhs_mag_fab250",
            "rhs_mag_fab250_ka52",
            "rhs_mag_fab250_bd3_umk2a",
            "rhs_mag_fab250_bd3_usk_a",
            "rhs_mag_fab250_2",
            "rhs_mag_fab250_4"
        };
        canlock = 0;
        airateoffire = 1;
        airateoffiredistance = 500;
        minRange = 100;
        minRangeProbab = 0.5;
        midRange = 250;
        midRangeProbab = 1;
        maxRange = 550;
        maxRangeProbab = 0.6;
        ballisticsComputer = 8;
        salvo = 1;
        reloadTime = 0.1;
        textureType = "semi";
        sounds[] = {};
        namesound = "";
    };
    class rhs_weap_fab250_m62: rhs_weap_fab250 {
        magazines[] = {
            "rhs_mag_fab250_m62",
            "rhs_mag_fab250_m62_ka52",
            "rhs_mag_fab250_m62_bd3_umk2a",
            "rhs_mag_fab250_m62_bd3_usk_a"
        };
    };
    class rhs_weap_ofab250: rhs_weap_fab250 {
        magazines[] = {
            "rhs_mag_ofab250",
            "rhs_mag_ofab250_ka52",
            "rhs_mag_ofab250_bd3_umk2a",
            "rhs_mag_ofab250_bd3_usk_a"
        };
    };
    class rhs_weap_rbk250: rhs_weap_fab250 {
        displayname = "$STR_RHS_RBK250_NAME";
    };
    class rhs_weap_rbk250_ao1: rhs_weap_rbk250 {
        magazines[] = {
            "rhs_mag_rbk250_ao1",
            "rhs_mag_rbk250_ao1_ka52",
            "rhs_mag_rbk250_ao1_bd3_umk2a",
            "rhs_mag_rbk250_ao1_bd3_usk_a"
        };
    };
    class rhs_weap_rbk250_ptab25: rhs_weap_rbk250 {
        magazines[] = {
            "rhs_mag_rbk250_ptab25",
            "rhs_mag_rbk250_ptab25_ka52",
            "rhs_mag_rbk250_ptab25_bd3_umk2a",
            "rhs_mag_rbk250_ptab25_bd3_usk_a"
        };
    };
    class rhs_weap_rbk250_zab25t: rhs_weap_rbk250 {
        magazines[] = {
            "rhs_mag_rbk250_zab25t",
            "rhs_mag_rbk250_zab25t_ka52",
            "rhs_mag_rbk250_zab25t_bd3_umk2a",
            "rhs_mag_rbk250_zab25t_bd3_usk_a"
        };
    };
    class rhs_weap_fab100: rhs_weap_fab250 {
        displayname = "$STR_RHS_MAG_FAB100";
        magazines[] = {
            "rhs_mag_fab100",
            "rhs_mag_fab100_ka52",
            "rhs_mag_fab100_bd3_umk2a",
            "rhs_mag_fab100_bd3_usk_a",
            "rhs_mag_fab100_mbd3_u4t",
            "rhs_mag_fab100_mbd3_u6"
        };
        reloadTime = 0.1;
    };
    class rhs_weap_fab100_mbd3_u4t: rhs_weap_fab100 {
        magazines[] = {"rhs_mag_fab100_mbd3_u4t"};
        modes[] = {"Single", "Burst"};
        class Single: rhs_weap_fab250 {
            textureType = "semi";
        };
        class Burst: rhs_weap_fab250 {
            minrange = 200;
            burst = 4;
            salvo = 2;
            reloadTime = 0.3;
            textureType = "burst";
        };
    };
    class rhs_weap_fab100_mbd3_u6: rhs_weap_fab100_mbd3_u4t {
        magazines[] = {"rhs_mag_fab100_mbd3_u6"};
        class Burst: Burst {
            burst = 6;
        };
    };
    class rhs_weap_kab250: rhs_weap_fab250 {
        displayname = "$STR_RHS_KAB250_NAME";
        canlock = 1;
        minRange = 300;
        minRangeProbab = 0.4;
        midRange = 1000;
        midRangeProbab = 0.95;
        maxRange = 7000;
        maxRangeProbab = 0.9;
        weaponLockDelay = 0.1;
        weaponLockSystem = 4;
        cmImmunity = 0.3;
        magazines[] = {"rhs_mag_kab250", "rhs_mag_kab250_int"};
        modes[] = {"LoalAltitude"};
        class LoalAltitude: RocketPods {
            textureType = "LOAL";
            displayName = "LOAL";
            minRange = 300;
            minRangeProbab = 0.4;
            midRange = 1000;
            midRangeProbab = 0.95;
            maxRange = 8000;
            maxRangeProbab = 0.9;
        };
    };
    class rhs_weap_fab500: rhs_weap_fab250 {
        displayname = "$STR_RHS_FAB500_NAME";
        magazines[] = {
            "rhs_mag_fab500",
            "rhs_mag_fab500_bd3_usk_a",
            "rhs_mag_fab500_bd3_umk2a",
            "rhs_mag_fab500_ka52",
            "rhs_mag_fab500_m54",
            "rhs_mag_fab500_m54_bd3_usk_a",
            "rhs_mag_fab500_m54_bd3_umk2a",
            "rhs_mag_fab500_m54_ka52"
        };
    };
    class rhs_weap_ptb1150: rhs_weap_fab250 {
        displayname = "$STR_RHS_PTB1150_NAME";
        magazines[] = {"rhs_mag_ptb1150_ptb"};
        airateoffire = 1;
        airateoffiredistance = 200;
        minrange = 100;
        burst = 2;
        reloadTime = 0;
        salvo = 2;
    };
    class rhs_weap_kab500: rhs_weap_kab250 {
        displayname = "$STR_RHS_KAB500_NAME";
        magazines[] = {"rhs_mag_kab500", "rhs_mag_kab500_bd3_umk2a"};
    };
    class rhs_weap_kab500lk: rhs_weap_kab250 {
        displayname = "$STR_RHS_KAB500LK_NAME";
        magazines[] = {"rhs_mag_kab500lk", "rhs_mag_kab500lk_bd3_umk2a"};
    };
    class rhs_weap_kab500KR: rhs_weap_kab250 {
        displayname = "$STR_RHS_KAB500KR_NAME";
        magazines[] = {"rhs_mag_kab500KR", "rhs_mag_kab500KR_bd3_umk2a"};
        modes[] = {"Direct"};
        class Direct: rhs_weap_fab500 {};
    };
    class rhs_weap_kab500OD: rhs_weap_kab250 {
        displayname = "$STR_RHS_KAB500OD_NAME";
        magazines[] = {"rhs_mag_kab500OD", "rhs_mag_kab500OD_bd3_umk2a"};
        modes[] = {"Direct"};
        class Direct: rhs_weap_fab500 {};
    };
    class rhs_weap_rbk500: rhs_weap_fab500 {
        displayname = "$STR_RHS_RBK500_NAME";
    };
    class rhs_weap_rbk500_ao25: rhs_weap_rbk500 {
        magazines[] = {
            "rhs_mag_rbk500_ao25",
            "rhs_mag_rbk500_ao25_ka52",
            "rhs_mag_rbk500_ao25_bd3_umk2a",
            "rhs_mag_rbk500_ao25_bd3_usk_a"
        };
    };
    class rhs_weap_rbk500_ofab50: rhs_weap_rbk500 {
        magazines[] = {
            "rhs_mag_rbk500_ofab50",
            "rhs_mag_rbk500_ofab50_ka52",
            "rhs_mag_rbk500_ofab50_bd3_umk2a",
            "rhs_mag_rbk500_ofab50_bd3_usk_a"
        };
    };
    class rhs_weap_rbk500_spbed: rhs_weap_rbk500 {
        magazines[] = {
            "rhs_mag_rbk500_spbed",
            "rhs_mag_rbk500_spbed_ka52",
            "rhs_mag_rbk500_spbed_bd3_umk2a",
            "rhs_mag_rbk500_spbed_bd3_usk_a"
        };
    };
    class rhs_weap_rbk500_ptab1m: rhs_weap_rbk500 {
        magazines[] = {
            "rhs_mag_rbk500_ptab1m",
            "rhs_mag_rbk500_ptab1m_ka52",
            "rhs_mag_rbk500_ptab1m_bd3_umk2a",
            "rhs_mag_rbk500_ptab1m_bd3_usk_a"
        };
    };
    class rhs_weap_rbk500_zab25t: rhs_weap_rbk500 {
        magazines[] = {
            "rhs_mag_rbk500_zab25t",
            "rhs_mag_rbk500_zab25t_ka52",
            "rhs_mag_rbk500_zab25t_bd3_umk2a",
            "rhs_mag_rbk500_zab25t_bd3_usk_a"
        };
    };
    class rhs_weap_kmgu2: rhs_weap_fab250 {
        displayname = "$STR_RHS_KMGU2_NAME";
        magazines[] = {
            "rhs_mag_kmgu2",
            "rhs_mag_kmgu2_ka52",
            "rhs_mag_kmgu2_bd3_umk2a",
            "rhs_mag_kmgu2_bd3_usk_a"
        };
        airateoffire = 1;
        airateoffiredistance = 200;
        minrange = 100;
        burst = 8;
        reloadTime = 0.4;
        salvo = 2;
        modes[] = {"Instant", "Fast", "Medium", "Slow"};
        class Instant: rhs_weap_fab250 {
            burst = 8;
            reloadTime = 0.05;
            salvo = 2;
            textureType = "fastAuto";
        };
        class Fast: Instant {
            reloadTime = 0.2;
            textureType = "fullAuto";
        };
        class Medium: Instant {
            reloadTime = 1;
            textureType = "burst";
        };
        class Slow: Instant {
            reloadTime = 1.5;
            textureType = "semi";
        };
    };
    class rhs_weap_kmgu2_ptab1m: rhs_weap_kmgu2 {
        magazines[] = {"rhs_mag_kmgu2_ptab1m", "rhs_mag_kmgu2_ptab1m_bd3_umk2a", "rhs_mag_kmgu2_ptab1m_ka52"};
    };
    class rhs_weap_kmgu2_ao25: rhs_weap_kmgu2 {
        magazines[] = {"rhs_mag_kmgu2_ao25", "rhs_mag_kmgu2_ao25_bd3_umk2a", "rhs_mag_kmgu2_ao25_ka52"};
    };
    class rhs_weap_kmgu2_ptm1: rhs_weap_kmgu2 {
        magazines[] = {"rhs_mag_kmgu2_ptm1", "rhs_mag_kmgu2_ptm1_bd3_umk2a", "rhs_mag_kmgu2_ptm1_ka52"};
    };
    class rhs_weap_kmgu2_pfm1: rhs_weap_kmgu2 {
        magazines[] = {"rhs_mag_kmgu2_pfm1", "rhs_mag_kmgu2_pfm1_bd3_umk2a", "rhs_mag_kmgu2_pfm1_ka52"};
    };
    class rhs_weap_DummyLauncher: MissileLauncher {
        showToPlayer = 0;
        magazines[] = {"rhs_mag_ptb1500"};
    };
    class Put: Default {
        muzzles[] += {"Rhs_SmallMine_Muzzle"};
        class PutMuzzle: Default {};
        class Rhs_SmallMine_Muzzle: PutMuzzle {
            magazines[] = {"rhs_mag_mine_pfm1", "rhs_mag_mine_ptm1"};
        };
    };
};
class CfgNonAIVehicles {
    class ProxyWeapon;
    class Proxyrhs_r_s5m1: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\s5_rockets\rhs_r_s5m1";
        simulation = "maverickweapon";
    };
    class Proxyrhs_r_s13b: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13b";
        simulation = "maverickweapon";
    };
    class Proxyrhs_r_s13_gasket: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13_gasket";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kh55sm: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kh55sm2: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm2";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kh38m: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_kh38m";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kh38m_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_kh38m_ext";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kh38mae: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kh38mae_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae_ext";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kh38mte: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kh38mte_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte_ext";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_r27r: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_r27r";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_r27t: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_r27t";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_r60: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_r60";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_r73: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_r73";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_r74: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_r74";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_r74m2: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_r74m2";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_r77: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_r77";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_r77m: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_r77m";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_ao25_x12: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_ao25_x12";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_fab100: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_fab100";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_fab250m62: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_fab250m62";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_rbk250275: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kab250: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_kab250";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_fab500: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_fab500";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_ptb1150: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_ptb1150";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_9m120: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_9m120";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_s24: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_s24";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_s25o: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_s25o";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_s25of: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_s25of";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_s25l: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_m_s25l";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_fab250: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_m_fab250";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_kh29: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_m_kh29";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_9m17: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m17";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_9m114: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m114";
        simulation = "maverickweapon";
    };
    class Proxyrhs_m_9m127: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m127";
        simulation = "maverickweapon";
    };
    class Proxyrhs_pylon_dummy: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_dummy";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_kh55sm: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh55sm";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_kh38m: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_kh38m_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kh38m_ext";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_mbd3_u4t: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_mbd3_u4t";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_mbd3_u6: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_mbd3_u6";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_kab250: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kab250";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_kab250_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kab250_ext";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_fab500: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_fab500";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_fab500_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_fab500_ext";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_kmgu2: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_kmgu2_ka52: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_kmgu2_ka52";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_r73_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r73_ext";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_r74m2: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r74m2";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_r77: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_r77_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_ext";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_r77_MiG: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_MiG";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_r77m: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77m";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_9m120_8x: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_r_b13l: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_r_b13l1: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l1";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_apu68m3_s24: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_apu68m3_s24";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_apu68_kh25: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_apu68_kh25";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_o25l: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_o25l";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_rbk500: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_rbk500_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ext";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_rbk500_ptab: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ptab";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_rbk500_spbed: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_spbed";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_rbk500_ptab_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_ptab_ext";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_rbk500_spbed_ext: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_rbk500_spbed_ext";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_apu470_r27: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_apu60_r60: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_apu60_r60";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_apu73_r73: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_ub16: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_ub16";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_ub32: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_ub32";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_b8m1: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_b8m1";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_b13l: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_b13l";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_fab250: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_fab250";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_rbk500: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_rbk500_ptab: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500_ptab";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_rbk500_spbed: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_rbk500_spbed";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_kh25: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kh25";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_s24: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_s24";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_usk_a_o25l: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_usk_a_o25l";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_ptb_ptb1150: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_ptb_ptb1150";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_ptb_ptb1500: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_ptb_ptb1500";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_bd3_umk2a_kmgu2: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kmgu2";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_g_upk23: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_g_upk23";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_g_upk23_ka52: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_g_upk23_ka52";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_9m17_2x: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m17_2x";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_9m114_2x: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m114_2x";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_9m120_2x: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_9m127_6x: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m127_6x";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_fab250: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_fab250_ka52: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_fab250_ka52";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_rbk500_ka52: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ka52";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_rbk500_ptab_ka52: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_ptab_ka52";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_rbk500_spbed_ka52: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_rbk500_spbed_ka52";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_kh29_aku58: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_kh29_aku58";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_kh29_aku58_MiG: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_kh29_aku58_MiG";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_r73: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_r_b8m1: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_b8m1";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_r_b8v20a: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_b8v20a";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_r_ub16: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_ub16";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_r_ub32: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_ub32";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_r_b8v20a_ka52: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_b8v20a_ka52";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_r_ub16_ka52: ProxyWeapon {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_ub16_ka52";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_r_ub32_ka52: ProxyWeapon {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_r_ub32_ka52";
        simulation = "pylonpod";
    };
};
class cfgVehicles {
    class MineBase;
    class rhs_mine_pfm1: MineBase {
        scope = 2;
        ammo = "rhs_ammo_pfm1";
        editorPreview = "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_pfm1";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_PFM1_NAME";
        icon = "iconExplosiveAP";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhs_mine_ptm1: MineBase {
        scope = 2;
        ammo = "rhs_ammo_ptm1";
        editorPreview = "\rhsafrf\addons\rhs_editorpreviews\data\rhs_mine_ptm1";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_PTM1_NAME";
        icon = "iconExplosiveAT";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhs_uxo_ao1_1: MineBase {
        scope = 2;
        ammo = "rhs_ammo_uxo_ao1_1";
        editorPreview = "\rhsafrf\addons\rhs_editorpreviews\data\rhs_uxo_ao1";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_UXO_AO1_1";
        icon = "iconExplosiveUXO";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_1";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhs_uxo_ao1_2: rhs_uxo_ao1_1 {
        ammo = "rhs_ammo_uxo_ao1_2";
        displayName = "$STR_RHS_UXO_AO1_2";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_2";
    };
    class rhs_uxo_ao1_3: rhs_uxo_ao1_1 {
        ammo = "rhs_ammo_uxo_ao1_3";
        displayName = "$STR_RHS_UXO_AO1_3";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3";
    };
    class rhs_uxo_ptab1m_1: MineBase {
        scope = 2;
        ammo = "rhs_ammo_uxo_ptab1m_1";
        editorPreview = "\rhsafrf\addons\rhs_editorpreviews\data\rhs_uxo_ptab1m";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_UXO_PTAB1M_1";
        icon = "iconExplosiveUXO";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_1";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhs_uxo_ptab1m_2: rhs_uxo_ptab1m_1 {
        ammo = "rhs_ammo_uxo_ptab1m_2";
        displayName = "$STR_RHS_UXO_PTAB1M_2";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_2";
    };
    class rhs_uxo_ptab1m_3: rhs_uxo_ptab1m_1 {
        ammo = "rhs_ammo_uxo_ptab1m_3";
        displayName = "$STR_RHS_UXO_PTAB1M_3";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3";
    };
    class rhs_uxo_ptab25m_1: MineBase {
        scope = 2;
        ammo = "rhs_ammo_uxo_ptab25m_1";
        editorPreview = "\rhsafrf\addons\rhs_editorpreviews\data\rhs_uxo_ptab25m";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_UXO_PTAB25M_1";
        icon = "iconExplosiveUXO";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_1";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhs_uxo_ptab25m_2: rhs_uxo_ptab25m_1 {
        ammo = "rhs_ammo_uxo_ptab25m_2";
        displayName = "$STR_RHS_UXO_PTAB25M_2";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_2";
    };
    class rhs_uxo_ptab25m_3: rhs_uxo_ptab25m_1 {
        ammo = "rhs_ammo_uxo_ptab25m_3";
        displayName = "$STR_RHS_UXO_PTAB25M_3";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3";
    };
    class rhs_uxo_ptab25ko_1: MineBase {
        scope = 2;
        ammo = "rhs_ammo_uxo_ptab25ko_1";
        editorPreview = "\rhsafrf\addons\rhs_editorpreviews\data\rhs_uxo_ptab25ko";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_UXO_PTAB25KO_1";
        icon = "iconExplosiveUXO";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_1";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhs_uxo_ptab25ko_2: rhs_uxo_ptab25ko_1 {
        ammo = "rhs_ammo_uxo_ptab25ko_2";
        displayName = "$STR_RHS_UXO_PTAB25KO_2";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_2";
    };
    class rhs_uxo_ptab25ko_3: rhs_uxo_ptab25ko_1 {
        ammo = "rhs_ammo_uxo_ptab25ko_3";
        displayName = "$STR_RHS_UXO_PTAB25KO_3";
        model = "\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3";
    };
    class ModuleMine_APERSMine_F;
    class rhs_mine_pfm1_module: ModuleMine_APERSMine_F {
        scopeCurator = 2;
        displayName = "$STR_RHS_PFM1_NAME";
        explosive = "rhs_ammo_pfm1";
    };
    class rhs_mine_ptm1_module: ModuleMine_APERSMine_F {
        scopeCurator = 2;
        displayName = "$STR_RHS_PTM1_NAME";
        explosive = "rhs_ammo_ptm1";
    };
    class rhs_uxo_ao1_module: ModuleMine_APERSMine_F {
        scopeCurator = 2;
        displayName = "$STR_RHS_UXO_AO1_NAME";
        explosive = "rhs_ammo_uxo_ao1_1";
    };
    class rhs_uxo_ptab1m_module: ModuleMine_APERSMine_F {
        scopeCurator = 2;
        displayName = "$STR_RHS_UXO_PTAB1M_NAME";
        explosive = "rhs_ammo_uxo_ptab1m_1";
    };
    class rhs_uxo_ptab25m_module: ModuleMine_APERSMine_F {
        scopeCurator = 2;
        displayName = "$STR_RHS_UXO_PTAB25M_NAME";
        explosive = "rhs_ammo_uxo_ptab25m_1";
    };
    class rhs_uxo_ptab25ko_module: ModuleMine_APERSMine_F {
        scopeCurator = 2;
        displayName = "$STR_RHS_UXO_PTAB25KO_NAME";
        explosive = "rhs_ammo_uxo_ptab25ko_1";
    };
    class Site_F;
    class Site_Minefield: Site_F {
        class Arguments {
            class minesType {
                class values {
                    class rhs_pfm1_Mine {
                        name = "$STR_RHS_PFM1_NAME";
                        value = "rhs_mine_pfm1";
                        default = 0;
                    };
                    class rhs_ptm1_mine {
                        name = "$STR_RHS_PTM1_NAME";
                        value = "rhs_mine_ptm1";
                        default = 0;
                    };
                    class rhs_ao1_uxo {
                        name = "$STR_RHS_UXO_AO1_NAME";
                        value = "rhs_uxo_ao1_1";
                        default = 0;
                    };
                    class rhs_ptab1m_uxo {
                        name = "$STR_RHS_UXO_PTAB1M_NAME";
                        value = "rhs_uxo_ptab1m_1";
                        default = 0;
                    };
                    class rhs_ptab25m_uxo {
                        name = "$STR_RHS_UXO_PTAB25M_NAME";
                        value = "rhs_uxo_ptab25m_1";
                        default = 0;
                    };
                    class rhs_ptab25ko_uxo {
                        name = "$STR_RHS_UXO_PTAB25KO_NAME";
                        value = "rhs_uxo_ptab25ko_1";
                        default = 0;
                    };
                };
            };
        };
    };
};
