class CfgPatches {
    class rhsgref_c_airweapons {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.6;
        requiredAddons[] = {"rhsgref_main"};
        author[] = {"RHS Team"};
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
class CfgAmmo {
    class MissileBase;
    class R_80mm_HE;
    class rhs_ammo_atgmCore_base;
    class rhs_ammo_atgmBase_base;
    class rhs_ammo_3bk12_penetrator;
    class rhs_ammo_9m112_penetrator;
    class rhsusf_ammo_basic_penetrator;
    class Missile_AGM_02_F: MissileBase {
        class Components;
    };
    class rhs_ammo_zt3: rhs_ammo_atgmBase_base {
        submunitionAmmo = "rhs_ammo_zt3_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        cost = 50;
        hit = 270;
        indirecthit = 26;
        indirecthitrange = 3.6;
        lockType = 0;
        manualcontrol = 0;
        maxcontrolrange = 5000;
        maxspeed = 250;
        maneuvrability = 18;
        tracklead = 1;
        trackoversteer = 1;
        sideairfriction = 0.03;
        initTime = 0.3;
        thrust = 172;
        thrusttime = 10;
        timetolive = 30;
        whistledist = 3;
        model = "\rhsgref\addons\rhsgref_airweapons\zt3\rhs_m_zt3_fly";
        proxyShape = "\rhsgref\addons\rhsgref_airweapons\zt3\rhs_m_zt3";
        AIAmmoUsageFlags = "64+128+512";
        missileManualControlCone = 45;
        rhs_saclos = 1;
        rhs_ballisticMode = 0;
        rhs_guideMode = "BEAMRIDER";
        class EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_zt3_penetrator: rhs_ammo_9m112_penetrator {
        warheadName = "TandemHEAT";
        hit = 290;
        caliber = 56;
    };
    class rhs_ammo_zt6: Missile_AGM_02_F {
        submunitionAmmo = "rhs_ammo_zt6_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maverickWeaponIndexOffset = 0;
        model = "\rhsgref\addons\rhsgref_airweapons\zt6\rhs_m_zt6_fly";
        proxyShape = "\rhsgref\addons\rhsgref_airweapons\zt6\rhs_m_zt6";
        hit = 400;
        indirectHit = 35;
        indirectHitRange = 8;
        cost = 100;
        maxSpeed = 530;
        airLock = 0;
        irLock = 0;
        laserLock = 1;
        manualControl = 1;
        maxControlRange = 10000;
        trackOversteer = 1;
        trackLead = 1;
        maneuvrability = 18;
        timeToLive = 30;
        simulationStep = 0.01;
        airFriction = 0.1;
        sideAirFriction = 0.3;
        initTime = 0;
        thrustTime = 4.1;
        thrust = 300;
        class Direct {};
        flightProfiles[] = {"Direct"};
        fuseDistance = 50;
        whistleDist = 4;
        muzzleEffect = "";
        effectsMissileInit = "MissileDAR1";
        effectsMissile = "missile1";
        aiAmmoUsageFlags = "64+128 + 512";
        lockSeekRadius = 120;
        missileLockMaxDistance = 10000;
        missileLockMinDistance = 200;
        missileLockMaxSpeed = 56;
        missileLockCone = 50;
        missileKeepLockedCone = 50;
        missileManualControlCone = 45;
        weaponLockSystem = "2 + 16";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 2000;
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
                        angleRangeHorizontal = 50;
                        angleRangeVertical = 50;
                        typeRecognitionDistance = -1;
                        maxGroundNoiseDistance = 0;
                        maxFogSeeThrough = 0.3;
                    };
                };
            };
        };
    };
    class rhs_ammo_zt6_penetrator: rhsusf_ammo_basic_penetrator {
        warheadName = "TandemHEAT";
        hit = 310;
        caliber = 66.6667;
    };
    class rhs_ammo_l159_fuelpod_proxy: rhs_ammo_atgmBase_base {};
    class rhs_ammo_20mm_AP;
    class rhs_ammo_20x139mm_AP: rhs_ammo_20mm_AP {
        hit = 60;
        explosive = 0;
        indirectHit = 1;
        indirectHitRange = 0.3;
        typicalSpeed = 1050;
        caliber = 2.92063;
        dangerRadiusBulletClose = 16;
        dangerRadiusHit = 40;
        suppressionRadiusBulletClose = 10;
        suppressionRadiusHit = 14;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerEndTime = 1.5;
        class CamShakeHit {
            power = 20;
            duration = "((round (20^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = "(19^0.25)";
            duration = "((round (19^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((19^0.5)*8)";
        };
        class CamShakePlayerFire {
            power = 0.01;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_20x139mm_HE: rhs_ammo_20x139mm_AP {
        hit = 20;
        explosive = 0.8;
        indirectHit = 4;
        indirectHitRange = 6.9;
        typicalSpeed = 1100;
        caliber = 1.4;
        dangerRadiusBulletClose = 20;
        dangerRadiusHit = 60;
        suppressionRadiusBulletClose = 12;
        suppressionRadiusHit = 24;
        tracerEndTime = 2;
        class CamShakeExplode {
            power = "(19*0.2)";
            duration = "((round (19^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((2 + 19^0.5)*8)";
        };
        class CamShakeHit {
            power = 19;
            duration = "((round (19^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
    class SubmunitionBase;
    class rhs_ammo_20x139mm_mixed: SubmunitionBase {
        cost = 10;
        model = "\A3\Weapons_f\empty";
        submunitionAmmo[] = {
            "rhs_ammo_20x139mm_AP",
            0.8,
            "rhs_ammo_20x139mm_HE",
            0.2
        };
        weaponType = "cannon";
        simulation = "shotSubmunitions";
        triggerTime = 0.01;
    };
};
class CfgMagazines {
    class SmokeLauncherMag;
    class VehicleMagazine;
    class rhs_mag_zt3: VehicleMagazine {
        ammo = "rhs_ammo_zt3";
        displayname = "ZT3 Ingwe";
        displaynameshort = "ZT3";
        namesound = "missiles";
        count = 1;
        initspeed = 80;
        weight = 37.5;
        maxLeadSpeed = 33;
    };
    class rhs_mag_zt3_4: rhs_mag_zt3 {
        scope = 2;
        model = "rhsgref\addons\rhsgref_airweapons\zt3\rhs_pylon_m_zt3_launcher.p3d";
        count = 4;
        pylonWeapon = "rhs_weap_zt3_Launcher";
        hardpoints[] = {"RHS_HP_INGWE"};
        mirrorMissilesIndexes[] = {2, 1, 4, 3};
        weight = 150;
        mass = 150;
    };
    class rhs_mag_zt6: VehicleMagazine {
        ammo = "rhs_ammo_zt6";
        displayName = "ZT6 Mokopa";
        displaynameshort = "ZT6";
        nameSound = "missiles";
        count = 1;
        initSpeed = 0;
        maxLeadSpeed = 35;
        weight = 50;
    };
    class rhs_mag_zt6_4: rhs_mag_zt6 {
        scope = 2;
        model = "rhsgref\addons\rhsgref_airweapons\zt6\rhs_pylon_m_zt6_launcher.p3d";
        count = 4;
        pylonWeapon = "rhs_weap_zt6_Launcher";
        hardpoints[] = {"RHS_HP_MOKOPA"};
        mirrorMissilesIndexes[] = {2, 1, 4, 3};
        weight = 200;
        mass = 200;
    };
    class rhs_mag_l159_fuelpod: VehicleMagazine {
        model = "rhsgref\addons\rhsgref_airweapons\rhs_pylon_fuelpod";
        ammo = "rhs_ammo_l159_fuelpod_proxy";
        displayName = "Fuel Pod";
        displayNameShort = "Fuel Pod";
        count = 1;
        weight = 100;
        pylonweapon = "rhsusf_weap_DummyLauncher";
        hardpoints[] = {"RHS_HP_L159_FUELPOD"};
    };
    class rhs_mag_l159_fuelpod_grey: rhs_mag_l159_fuelpod {
        displayName = "Fuel Pod (Grey)";
        displayNameShort = "Fuel Pod (Grey)";
        model = "rhsgref\addons\rhsgref_airweapons\rhs_pylon_L159_fuelpod_grey";
    };
    class rhs_mag_GI2_420_HE: VehicleMagazine {
        scope = 2;
        displayname = "20x139mm High-Explosive Indenciary";
        displaynameshort = "HEI";
        ammo = "rhs_ammo_20x139mm_HE";
        count = 420;
        initSpeed = 1050;
        maxLeadSpeed = 200;
        tracersEvery = 4;
        nameSound = "cannon";
    };
    class rhs_mag_GI2_420_AP: VehicleMagazine {
        scope = 2;
        displayname = "20x139mm Armor-Piercing Capped";
        displaynameshort = "APC";
        ammo = "rhs_ammo_20x139mm_AP";
        count = 420;
        initSpeed = 1100;
        maxLeadSpeed = 200;
        tracersEvery = 4;
        nameSound = "cannon";
    };
    class rhs_mag_zpl20_hei: VehicleMagazine {
        scope = 2;
        model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
        displayname = "20x139mm High-Explosive Indenciary";
        displaynameshort = "HEI";
        nameSound = "cannon";
        ammo = "rhs_ammo_20x139mm_HE";
        count = 210;
        initSpeed = 1020;
        maxLeadSpeed = 200;
        tracersEvery = 4;
        muzzlePos = "muzzlePos";
        muzzleEnd = "muzzleEnd";
        hardpoints[] = {"RHS_HP_ZPL20"};
        pylonWeapon = "RHS_weap_zpl20";
    };
    class rhs_mag_zpl20_apit: rhs_mag_zpl20_hei {
        displayname = "20x139mm Armor-Piercing Incendary Traced";
        displaynameshort = "API-T";
        ammo = "rhs_ammo_20x139mm_AP";
    };
    class rhs_mag_zpl20_mixed: rhs_mag_zpl20_hei {
        displayname = "20x139mm Mixed";
        displaynameshort = "Mixed";
        ammo = "B_20mm";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons {
    class gatling_30mm;
    class rhs_weap_M197: gatling_30mm {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };
    class rhs_weap_gi2_base: rhs_weap_M197 {
        aidispersioncoefx = 2;
        aidispersioncoefy = 4;
        class manual: manual {
            displayName = "GI-2";
            autoFire = 1;
            reloadTime = 0.08333;
            dispersion = 0.00125;
            burst = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 6;
            burstRangeMax = 12;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 200;
            midRangeProbab = 0.95;
            maxRange = 500;
            maxRangeProbab = 0.6;
        };
        class short: close {
            burst = 6;
            burstRangeMax = 10;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 300;
            minRangeProbab = 0.7;
            midRange = 600;
            midRangeProbab = 0.9;
            maxRange = 800;
            maxRangeProbab = 0.6;
        };
        class medium: close {
            burst = 3;
            burstRangeMax = 8;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 700;
            minRangeProbab = 0.7;
            midRange = 900;
            midRangeProbab = 0.85;
            maxRange = 1000;
            maxRangeProbab = 0.6;
        };
        class far: close {
            burst = 3;
            burstRangeMax = 6;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 1000;
            minRangeProbab = 0.3;
            midRange = 1200;
            midRangeProbab = 0.85;
            maxRange = 1400;
            maxRangeProbab = 0.6;
        };
    };
    class rhs_weap_gi2: rhs_weap_M197 {
        displayName = "GI-2";
        class GunParticles {
            class Effect {
                effectName = "MachineGun2";
                positionName = "z_gun_muzzle";
                directionName = "z_gun_chamber";
            };
        };
        magazines[] = {};
        muzzles[] = {"HE", "AP"};
        class HE: rhs_weap_gi2_base {
            displayName = "GI-2 HE";
            magazines[] = {"rhs_mag_GI2_420_HE"};
        };
        class AP: rhs_weap_M197 {
            displayName = "GI-2 AP";
            magazines[] = {"rhs_mag_GI2_420_AP"};
        };
    };
    class RHS_weap_zpl20: gatling_30mm {
        scope = 2;
        aidispersioncoefx = 4;
        aidispersioncoefy = 4;
        canlock = 2;
        cursor = "mg";
        cursorsize = 0;
        displayname = "ZPL-20 Plamen";
        initspeed = 820;
        shotFromTurret = 0;
        ballisticsComputer = 28;
        class gunParticles {
            class effect2 {
                directionname = "kulomet";
                positionname = "chamber_1";
                effectname = "MachineGun2";
            };
        };
        magazines[] = {"rhs_mag_zpl20_hei", "rhs_mag_zpl20_apit", "rhs_mag_zpl20_mixed"};
        namesound = "cannon";
        soundcontinuous = 1;
        flash = "gunfire";
        flashSize = 0.5;
        muzzles[] = {"this"};
        modes[] = {
            "manual",
            "manual_low",
            "close",
            "short",
            "medium",
            "far"
        };
        class manual: Mode_FullAuto {
            airateoffire = 0.5;
            airateoffiredistance = 50;
            autofire = 1;
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "A3\Sounds_F\weapons\30mm\30mm_st_02",
                    0.7,
                    1,
                    1500
                };
                soundBegin[] = {"begin1", 1};
            };
            burst = 2;
            dispersion = 0.006;
            displayname = "ZPL-20 HI";
            maxrange = 3;
            maxrangeprobab = 0.01;
            midrange = 2;
            midrangeprobab = 0.01;
            minrange = 1;
            minrangeprobab = 0.01;
            multiplier = 1;
            reloadtime = 0.023;
            flash = "gunfire";
            flashSize = 0.5;
            showtoplayer = 1;
            sound[] = {"", 10, 1};
            soundburst = 0;
            soundcontinuous = 0;
        };
        class manual_low: manual {
            displayname = "ZPL-20 LO";
            reloadtime = 0.077;
            textureType = "semi";
            burst = 0;
        };
        class close: manual {
            airateoffire = 0.001;
            airateoffiredistance = 50;
            aiRateOfFireDispersion = 3;
            burst = 1;
            maxrange = 300;
            maxrangeprobab = 0.04;
            midrange = 100;
            midrangeprobab = 0.88;
            minrange = 0;
            minrangeprobab = 0.5;
            showtoplayer = 0;
            soundburst = 0;
        };
        class short: close {
            aiRateOfFire = 0.25;
            airateoffiredistance = 300;
            aiRateOfFireDispersion = 3;
            burst = "10 + random 5";
            maxrange = 800;
            midrange = 500;
            minrange = 200;
        };
        class medium: manual_low {
            airateoffire = 3;
            airateoffiredistance = 600;
            burst = "7 + random 5";
            maxrangeprobab = 0.04;
            midrangeprobab = 0.88;
            minrangeprobab = 0.5;
            maxrange = 1000;
            midrange = 800;
            minrange = 600;
            showtoplayer = 0;
        };
        class far: medium {
            airateoffire = 4;
            airateoffiredistance = 1000;
            aiRateOfFireDispersion = 3;
            burst = "4 + random 5";
            maxrange = 1250;
            maxrangeprobab = 0.11;
            midrange = 1050;
            midrangeprobab = 0.4;
            minrange = 850;
            minrangeprobab = 0.15;
        };
    };
    class MissileLauncher;
    class Missile_AGM_02_Plane_CAS_01_F;
    class rhs_weap_zt3_Launcher: MissileLauncher {
        cursor = "missile";
        cursoraim = "EmptyCursor";
        cursorsize = 0;
        displayname = "ZT3 Ingwe";
        magazines[] = {"rhs_mag_zt3", "rhs_mag_zt3_4"};
        airateoffire = 2.5;
        airateoffiredistance = 500;
        maxrange = 5000;
        maxrangeprobab = 0.6;
        midrange = 3000;
        midrangeprobab = 1;
        minrange = 250;
        minrangeprobab = 0.9;
        reloadtime = 1.5;
        autoreload = 0;
        magazineReloadTime = 30;
        holdsterAnimValue = 1;
        textureType = "semi";
        canlock = 1;
        weaponLockType = 1;
    };
    class rhs_weap_zt6_Launcher: Missile_AGM_02_Plane_CAS_01_F {
        scope = 2;
        autoFire = 0;
        displayName = "ZT-6 Mokopa";
        missileLockCone = 65;
        cursorSize = 0;
        cursor = "missile";
        cursorAim = "EmptyCursor";
        aiRateOfFire = 5;
        aiRateOfFireDistance = 4000;
        maxrange = 10000;
        maxrangeprobab = 0.5;
        midrange = 5000;
        midrangeprobab = 0.9;
        minrange = 250;
        minrangeprobab = 0.8;
        modes[] = {"this"};
        nameSound = "MissileLauncher";
        reloadTime = 1;
        magazines[] = {"rhs_mag_zt6_4", "rhs_mag_zt6"};
        canLock = 2;
        weaponLockDelay = 3;
    };
};
class CfgNonAIVehicles {
    class ProxyWeapon;
    class Proxyrhs_pylon_L159_fuelpod: ProxyWeapon {
        model = "rhsgref\addons\rhsgref_airweapons\rhs_pylon_L159_fuelpod";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_L159_fuelpod_grey: ProxyWeapon {
        model = "rhsgref\addons\rhsgref_airweapons\rhs_pylon_L159_fuelpod_grey";
        simulation = "pylonpod";
    };
    class Proxyrhs_pylon_m_zt3_launcher: ProxyWeapon {
        model = "rhsgref\addons\rhsgref_airweapons\zt3\rhs_pylon_m_zt3_launcher";
        simulation = "pylonpod";
    };
    class Proxyrhs_m_zt3: ProxyWeapon {
        model = "rhsgref\addons\rhsgref_airweapons\zt3\rhs_m_zt3";
        simulation = "maverickweapon";
    };
    class Proxyrhs_pylon_m_zt6_launcher: ProxyWeapon {
        model = "rhsgref\addons\rhsgref_airweapons\zt6\rhs_pylon_m_zt6_launcher";
        simulation = "pylonpod";
    };
    class Proxyrhs_m_zt6: ProxyWeapon {
        model = "rhsgref\addons\rhsgref_airweapons\zt6\rhs_m_zt6";
        simulation = "maverickweapon";
    };
};
