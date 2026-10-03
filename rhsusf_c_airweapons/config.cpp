class CfgPatches {
    class rhsusf_c_airweapons {
        units[] = {
            "rhsusf_mine_blu91",
            "rhsusf_mine_blu92",
            "rhsusf_uxo_blu97",
            "rhsusf_mine_blu91_module",
            "rhsusf_mine_blu92_module",
            "rhsusf_uxo_blu97_module"
        };
        weapons[] = {
            "rhs_weap_SidewinderLauncher",
            "rhs_weap_AIM120",
            "rhs_weap_AIM12D",
            "rhs_weap_FFARLauncher",
            "rhs_weap_FFARLauncher_M229",
            "rhs_weap_HellfireLauncher",
            "rhs_weap_AGM114L_Launcher",
            "rhs_weap_AGM114K_Launcher",
            "rhs_weap_AGM114M_Launcher",
            "rhs_weap_AGM114N_Launcher",
            "rhs_weap_DAGR_launcher",
            "rhs_weap_agm65",
            "Rhs_weap_stinger_Launcher",
            "Rhs_weap_stinger_Launcher_static",
            "rhs_weap_gbu12",
            "rhs_weap_mk82",
            "rhsusf_M61A2"
        };
        requiredVersion = 1.7;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_heavyweapons"};
        name = "RHSUSF Air Weapons";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
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
class CfgNonAIVehicles {
    class ProxyWeapon;
    class Proxyrhsusf_b_GBU12: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_GBU12";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_b_CBU87: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_CBU87";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_b_CBU89: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_CBU89";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_m_AGM65B: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM65B";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_m_AGM65D: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM65D";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_m_AGM65E: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM65E";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_m_AGM65F: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM65F";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_m_AGM65H: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM65H";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_m_AGM114K: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_m_AIM120D: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AIM120D";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_r_DAGR: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_DAGR";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_r_M151: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_r_M229: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_r_M255A1: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M255A1";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_m_aim9x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_m_aim9x";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_m_agm65: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_m_agm65";
        simulation = "maverickweapon";
    };
    class Proxyrhsusf_pylon_dummy: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_dummy";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_atas_2x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_atas_2x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_agm114_1x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_agm114_2x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_agm114_4x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_agm114_1x_airplane: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x_airplane";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_agm114_2x_airplane: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x_airplane";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_LAU117_1x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU117_1x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_LAU142_1x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU142_1x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_LAU142_2x_F22_lBay: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU142_2x_F22_lBay";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_LAU142_2x_F22_rBay: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU142_2x_F22_rBay";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_aim9_1x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_aim9_1x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_DAGR_4x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_4x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_DAGR_8x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_8x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_DAGR_16x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_16x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_DAGR_4x_airplane: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_4x_airplane";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_DAGR_8x_airplane: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_8x_airplane";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_FFAR_7x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_FFAR_7x_green: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_green";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_FFAR_7x_LAU68: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_LAU68";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_FFAR_7x_LAU131: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_LAU131";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_FFAR_7x_LAU131AA: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_LAU131AA";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_FFAR_19x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_r_FFAR_19x_green: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x_green";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_aim9_heli_grey: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_heli_grey";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_aim9_heli_od: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_heli_od";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_agm65_1x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_agm65_1x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_aim9_2x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_2x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_m_mk82_3x: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_mk82_3x";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_alq_131: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_alq_131";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_Fuel_UH60: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_Fuel_UH60";
        simulation = "pylonpod";
    };
    class Proxyrhsusf_pylon_Fuel_UH60MEV: ProxyWeapon {
        model = "rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_Fuel_UH60MEV";
        simulation = "pylonpod";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class AGM114_helper {
                file = "rhsusf\addons\rhsusf_c_airweapons\scripts\rhs_fnc_agm114_helper.sqf";
            };
        };
    };
};
class CfgAmmo {
    class RocketBase;
    class MissileCore;
    class MissileBase: MissileCore {
        class Components;
    };
    class M_Titan_AA: MissileBase {
        class Components;
    };
    class Missile_AA_04_F: MissileBase {
        class Components;
    };
    class rhs_ammo_Sidewinder_AA: Missile_AA_04_F {
        model = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_fly_F";
        proxyShape = "\A3\Weapons_F_Jets\Ammo\Missile_AA_08_F";
        hit = 150;
        indirectHit = 90;
        indirectHitRange = 14;
        proximityExplosionDistance = 19;
        maneuvrability = 30;
        simulationStep = 0.001;
        airLock = 2;
        irLock = 1;
        cost = 1500;
        maxSpeed = 1029;
        timeToLive = 35;
        sideAirFriction = 0.2;
        trackOversteer = 0.95;
        trackLead = 0.75;
        initTime = 0;
        thrustTime = 3;
        thrust = 390;
        fuseDistance = 300;
        explosionAngle = 60;
        CraterEffects = "AAMissileCrater";
        explosionEffects = "AAMissileExplosion";
        effectsMissile = "rhs_missile3";
        whistleDist = 20;
        cmImmunity = 0.96;
        missileLockMaxDistance = 8000;
        missileLockMinDistance = 300;
        missileLockMaxSpeed = 555;
        missileLockCone = 180;
        missileKeepLockedCone = 180;
        weaponLockSystem = "2 + 16";
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
                            maxRange = 8000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        typeRecognitionDistance = -1;
                        angleRangeHorizontal = 120;
                        angleRangeVertical = 120;
                        groundNoiseDistanceCoef = 0.03;
                        maxGroundNoiseDistance = -1;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = 0;
                        maxFogSeeThrough = 0.8;
                        minTrackableSpeed = -10000000000;
                        maxTrackableSpeed = 555;
                        minTrackableATL = 20;
                        maxTrackableATL = 10000000000;
                    };
                };
            };
        };
    };
    class rhs_ammo_aim9: rhs_ammo_Sidewinder_AA {};
    class rhs_ammo_aim9m: rhs_ammo_Sidewinder_AA {
        model = "\a3\Weapons_F_EPC\Ammo\Missile_AA_04_fly_F.p3d";
        proxyShape = "\a3\Weapons_F_EPC\Ammo\Missile_AA_04_F.p3d";
        maneuvrability = 30;
        cmImmunity = 0.9;
        missileLockCone = 90;
        missileKeepLockedCone = 90;
    };
    class rhs_ammo_aim9m_ah64: rhs_ammo_aim9m {
        weaponType = "bomb";
    };
    class rhs_ammo_aim9x: rhs_ammo_Sidewinder_AA {};
    class rhs_ammo_aim9x_ah64: rhs_ammo_aim9x {
        weaponType = "bomb";
    };
    class rhs_ammo_aim120: rhs_ammo_Sidewinder_AA {
        proxyShape = "\A3\Weapons_F\Ammo\Missile_AA_02_F.p3d";
        model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
        cmimmunity = 0.92;
        timeToLive = 120;
        inittime = 0.5;
        cost = 1000;
        hit = 230;
        indirecthit = 140;
        indirecthitrange = 16;
        proximityExplosionDistance = 25;
        maverickWeaponIndexOffset = 0;
        airFriction = 0.014;
        sideAirFriction = 0.23;
        trackOversteer = 0.9;
        trackLead = 1;
        thrustTime = 5;
        thrust = 260;
        maxSpeed = 1300;
        missileLockMaxDistance = 22000;
        missileLockMinDistance = 2000;
        missileLockMaxSpeed = 833;
        missileLockCone = 60;
        missileKeepLockedCone = 90;
        weaponLockSystem = "8 + 16";
        autoSeekTarget = 1;
        lockSeekRadius = 1000;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 30000;
                            maxRange = 30000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 30000;
                            maxRange = 30000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = -1;
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                        groundNoiseDistanceCoef = 0.1;
                        maxGroundNoiseDistance = 200;
                        minSpeedThreshold = 12;
                        maxSpeedThreshold = 42;
                        maxFogSeeThrough = 1;
                        minTrackableSpeed = 12;
                        maxTrackableSpeed = 833;
                        minTrackableATL = 70;
                        maxTrackableATL = 10000000000;
                    };
                };
            };
        };
    };
    class rhs_ammo_aim120d: rhs_ammo_aim120 {
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AIM120D";
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AIM120D_fly.p3d";
        missileLockMaxDistance = 28000;
        missileLockMinDistance = 2000;
        missileLockMaxSpeed = 3000;
        missileLockCone = 60;
        missileKeepLockedCone = 90;
        thrustTime = 9;
        thrust = 260;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 30000;
                            maxRange = 30000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 30000;
                            maxRange = 30000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = -1;
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                        groundNoiseDistanceCoef = 0.1;
                        maxGroundNoiseDistance = 200;
                        minSpeedThreshold = 12;
                        maxSpeedThreshold = 42;
                        maxFogSeeThrough = 1;
                        minTrackableSpeed = 12;
                        maxTrackableSpeed = 833;
                        minTrackableATL = 70;
                        maxTrackableATL = 10000000000;
                    };
                };
            };
        };
    };
    class Missile_AGM_02_F: MissileBase {
        class Components;
        class Eventhandlers;
    };
    class rhs_ammo_Hellfire_AT: Missile_AGM_02_F {
        submunitionAmmo = "rhs_ammo_Hellfire_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
        cost = 300;
        hit = 400;
        indirectHit = 20;
        indirectHitRange = 5;
        irLock = 1;
        laserLock = 0;
        airLock = 0;
        maxSpeed = 425;
        simulationStep = 0.005;
        airFriction = 0.03;
        sideAirFriction = 0.15;
        initTime = 0;
        thrustTime = 3;
        thrust = 199;
        fuseDistance = 5;
        manualControl = 0;
        maxControlRange = 8000;
        trackOversteer = 1;
        trackLead = 0.2;
        maneuvrability = 21;
        timeToLive = 70;
        whistleDist = 4;
        effectsMissileInit = "MissileDAR1";
        effectsMissile = "rhs_missile2";
        missileLockMaxDistance = 8000;
        missileLockMinDistance = 200;
        missileLockMaxSpeed = 56;
        missileLockCone = 90;
        missileKeepLockedCone = 90;
        lockSeekRadius = 2000;
        autoSeekTarget = 1;
        weaponLockSystem = "2 + 16";
        maneuvDependsOnSpeedCoef = 0.018;
        flightProfiles[] = {"TopDown", "LoalDistance", "Cruise"};
        class Direct {};
        class TopDown {
            ascendAngle = 39;
            ascendHeight = 360;
            minDistance = 600;
            descendDistance = 3000;
        };
        class LoalDistance {
            lockSeekDistanceFromParent = 1000;
        };
        class Cruise {
            preferredFlightAltitude = 500;
            lockDistanceToTarget = 500;
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class RadarSensorComponent: SensorTemplateActiveRadar {
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
                        typeRecognitionDistance = -1;
                        angleRangeHorizontal = 90;
                        angleRangeVertical = 90;
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = -1;
                        maxFogSeeThrough = 0.8;
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 56;
                        minTrackableATL = -1;
                        maxTrackableATL = 1000;
                    };
                };
            };
        };
        class Eventhandlers: Eventhandlers {
            class RHS_EH {
                fired = "_this call rhs_fnc_agm114_helper";
            };
        };
    };
    class rhsusf_ammo_basic_penetrator;
    class rhs_ammo_cluster_penetrator;
    class rhs_ammo_Hellfire_AT_penetrator: rhsusf_ammo_basic_penetrator {
        warheadName = "TandemHEAT";
        hit = 310;
        caliber = 66.6667;
    };
    class RHS_ammo_AGM_114L: rhs_ammo_Hellfire_AT {
        activeSensorAlwaysOn = 0;
        missileLockCone = 90;
        missileKeepLockedCone = 90;
        flightProfiles[] = {"TopDown", "LoalDistance"};
        class TopDown {
            ascendAngle = 26.5;
            ascendHeight = 850;
            minDistance = 1000;
            descendDistance = 1200;
        };
    };
    class RHS_ammo_AGM_114K: rhs_ammo_Hellfire_AT {
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
        indirectHit = 35;
        indirectHitRange = 8;
        cost = 250;
        airLock = 0;
        irLock = 1;
        laserLock = 1;
        muzzleEffect = "";
        effectsMissileInit = "MissileDAR1";
        effectsMissile = "rhs_missile2";
        whistleDist = 4;
        aiAmmoUsageFlags = "64+128 + 512";
        missileLockMaxDistance = 8000;
        missileLockMinDistance = 400;
        missileLockMaxSpeed = 56;
        missileLockCone = 40;
        missileKeepLockedCone = 40;
        missileManualControlCone = 40;
        weaponLockSystem = "4 + 16";
        lockSeekRadius = 1000;
        weaponType = "missileAA";
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
                        angleRangeHorizontal = 30;
                        angleRangeVertical = 50;
                        typeRecognitionDistance = -1;
                        maxGroundNoiseDistance = 0;
                        maxFogSeeThrough = 0.3;
                        allowsMarking = 1;
                    };
                };
            };
        };
    };
    class RHS_ammo_AGM_114M: RHS_ammo_AGM_114K {
        submunitionAmmo = "";
        indirectHit = 140;
        indirectHitRange = 11;
        dangerRadiusHit = 1250;
        suppressionRadiusHit = 120;
        class CamShakeExplode {
            power = "(122*0.2)";
            duration = "((round (122^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((10 + 122^0.5)*8)";
        };
        class CamShakeHit {
            power = 122;
            duration = "((round (122^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = "(122^0.25)";
            duration = "((round (122^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((122^0.5)*8)";
        };
        class CamShakePlayerFire {
            power = 2;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
        SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class RHS_ammo_AGM_114N: RHS_ammo_AGM_114M {
        AIAmmoUsageFlags = "64+128";
        cost = 100;
        hit = 210;
        indirectHit = 85;
        indirectHitRange = 20;
        explosive = 1;
        allowAgainstInfantry = 1;
        class CamShakeExplode {
            power = "(110*0.2)";
            duration = "((round (110^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((5 + 110^0.5)*8)";
        };
        explosionEffects = "RHS_FAE_Explosion";
    };
    class RHS_Ammo_DAGR: MissileBase {
        maverickWeaponIndexOffset = 80;
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_DAGR_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_DAGR";
        hit = 220;
        indirectHit = 50;
        indirectHitRange = 10;
        cost = 100;
        maxSpeed = 720;
        irLock = 0;
        airLock = 0;
        laserLock = 1;
        maxControlRange = 8000;
        trackOversteer = 1;
        trackLead = 1;
        maneuvrability = 14;
        timeToLive = 20;
        simulationStep = 0.01;
        airFriction = 0.1;
        sideAirFriction = 0.3;
        initTime = 0.002;
        thrustTime = 1.57;
        thrust = 825;
        fuseDistance = 50;
        whistleDist = 4;
        muzzleEffect = "";
        effectsMissileInit = "MissileDAR1";
        effectsMissile = "rhs_missile1";
        explosionEffects = "ATMissileExplosion";
        weaponLockSystem = 4;
        manualControl = 1;
        aiAmmoUsageFlags = "64 + 128+512";
        autoSeekTarget = 1;
        lockSeekRadius = 1000;
        missileLockMaxDistance = 6000;
        missileLockMinDistance = 1000;
        missileLockMaxSpeed = 56;
        missileLockCone = 25;
        missileKeepLockedCone = 25;
        flightProfiles[] = {"Direct", "LoalDistance"};
        class Direct {};
        class LoalDistance {
            lockSeekDistanceFromParent = 200;
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 5000;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 5000;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 55;
                        angleRangeHorizontal = 14;
                        angleRangeVertical = 14;
                        maxGroundNoiseDistance = 0;
                        maxFogSeeThrough = 0.3;
                    };
                };
            };
        };
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
    };
    class rhs_ammo_agm65: rhs_ammo_Hellfire_AT {
        submunitionAmmo = "rhs_ammo_agm65_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_m_agm65_fly.p3d";
        proxyShape = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_m_agm65.p3d";
        cost = 1000;
        hit = 400;
        indirectHit = 250;
        indirectHitRange = 10.5;
        whistleDist = 8;
        simulationStep = 0.002;
        airLock = 0;
        irLock = 0;
        laserLock = 0;
        cmimmunity = 0.8;
        manualControl = 1;
        maxControlRange = 11000;
        maneuvrability = 14;
        trackOversteer = 1;
        flightProfiles[] = {"Direct"};
        maxSpeed = 320;
        timeToLive = 45;
        airFriction = 0.07;
        sideAirFriction = 0.08;
        trackLead = 1;
        initTime = 0.15;
        thrustTime = 2;
        thrust = 246;
        fuseDistance = 500;
        CraterEffects = "ATRocketCrater";
        explosionEffects = "ATRocketExplosion";
        effectsMissileInit = "PylonBackEffects";
        muzzleEffect = "";
        class Hiteffects {
            hitWater = "ImpactEffectsSmall";
        };
        weaponLockSystem = "0 + 16";
        maverickWeaponIndexOffset = 50;
        missileLockCone = 60;
        missileLockMaxDistance = 4000;
        missileLockMinDistance = 100;
    };
    class rhs_ammo_agm65_penetrator: rhsusf_ammo_basic_penetrator {
        hit = 320;
        caliber = 73.3333;
    };
    class rhs_ammo_agm65e: rhs_ammo_agm65 {
        manualControl = 0;
        laserLock = 1;
        weaponLockSystem = "4 + 16";
        missileLockMaxDistance = 20000;
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65e_fly.p3d";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65e.p3d";
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
                        angleRangeHorizontal = 120;
                        angleRangeVertical = 120;
                        typeRecognitionDistance = -1;
                        maxFogSeeThrough = 0.3;
                    };
                };
            };
        };
    };
    class rhs_ammo_agm65b: rhs_ammo_agm65 {
        weaponLockSystem = "1 + 16";
        missileLockMaxDistance = 4000;
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65b_fly.p3d";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65b.p3d";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 1000;
                            maxRange = 4000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 1000;
                            maxRange = 4000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 15;
                        minTrackableATL = -1;
                        maxTrackableATL = 1000;
                        nightRangeCoef = 0;
                        angleRangeHorizontal = 120;
                        angleRangeVertical = 120;
                    };
                };
            };
        };
    };
    class rhs_ammo_agm65h: rhs_ammo_agm65 {
        weaponLockSystem = "1 + 16";
        missileLockMaxDistance = 10000;
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65h_fly.p3d";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65h.p3d";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 2000;
                            maxRange = 20000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 2000;
                            maxRange = 20000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 30;
                        minTrackableATL = -1;
                        maxTrackableATL = 1000;
                        nightRangeCoef = 0.2;
                        angleRangeHorizontal = 120;
                        angleRangeVertical = 120;
                    };
                };
            };
        };
    };
    class rhs_ammo_agm65d: rhs_ammo_agm65 {
        manualControl = 0;
        missileLockMaxDistance = 11000;
        irLock = 1;
        weaponLockSystem = "2 + 16";
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65d_fly.p3d";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65d.p3d";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 5000;
                            maxRange = 20000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 5000;
                            maxRange = 20000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 30;
                        minTrackableATL = -1;
                        maxTrackableATL = 1000;
                        angleRangeHorizontal = 120;
                        angleRangeVertical = 120;
                    };
                };
            };
        };
    };
    class rhs_ammo_agm65f: rhs_ammo_agm65d {
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65f_fly.p3d";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65f.p3d";
        missileLockMaxDistance = 16000;
        class Components: Components {
            class SensorsManagerComponent: SensorsManagerComponent {
                class Components: Components {
                    class IRSensorComponent: IRSensorComponent {
                        class AirTarget: AirTarget {
                            minRange = 16000;
                            maxRange = 24000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget: GroundTarget {};
                        maxTrackableSpeed = 15;
                    };
                };
            };
        };
    };
    class Rocket_04_HE_F;
    class rhs_ammo_Hydra_HE_Heli: Rocket_04_HE_F {
        maverickweapon = 0;
        hit = 220;
        indirectHit = 50;
        indirectHitRange = 10;
        cost = 75;
        maxSpeed = 740;
        thrustTime = 1.1;
        thrust = 800;
        sideAirFriction = 0.004;
        timeToLive = 60;
        fuseDistance = 40;
        whistleDist = 24;
    };
    class rhs_ammo_FFAR_M151: rhs_ammo_Hydra_HE_Heli {
        maverickweapon = 1;
        maverickWeaponIndexOffset = 0;
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151_FFAR_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151";
    };
    class rhs_ammo_Hydra_M151: rhs_ammo_Hydra_HE_Heli {
        maverickweapon = 1;
        maverickWeaponIndexOffset = 0;
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151";
    };
    class rhs_ammo_Hydra_M229: rhs_ammo_Hydra_M151 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229";
        indirecthitrange = 15;
    };
    class rhs_ammo_Hydra_M257: rhs_ammo_Hydra_M151 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M257_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M257";
        explosive = 0;
        hit = 10;
        indirectHit = 8;
        indirecthitrange = 1;
        triggerTime = 8;
        airFriction = 0.225;
        submunitionAmmo[] = {"rhs_ammo_flare_M257", 1};
        submunitionConeType[] = {"random", 1};
        submunitionConeAngle = 5;
        submunitionParentSpeedCoef = 0.1;
    };
    class F_40mm_White;
    class rhs_ammo_flare_M257: F_40mm_White {
        triggerTime = 2;
        model = "rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_r_m257_drogue";
        brightness = 10000;
        lightColor[] = {100, 100, 100, 100};
        timeToLive = 120;
        intensity = 100000;
        flareSize = 90;
        flareMaxDistance = 3000;
        affectedByWind = 1;
    };
    class Bomb_04_F;
    class Bo_Mk82;
    class rhs_ammo_gbu12: Bomb_04_F {
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu12_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu12";
        initTime = 0.2;
        maneuvrability = 22;
        airFriction = 0.06;
        sideAirFriction = 3.2;
    };
    class rhs_ammo_gbu32: Bomb_04_F {
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu32";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_gbu32";
    };
    class rhs_ammo_mk82: Bo_Mk82 {
        hit = 5000;
        indirectHit = 1150;
        cost = 50;
        sideAirFriction = 0.25;
        aiAmmoUsageFlags = "64 + 128 + 512";
        maverickWeaponIndexOffset = 0;
    };
    class Mo_cluster_AP;
    class rhs_ammo_cbu_base: rhs_ammo_mk82 {
        cost = 70;
        laserLock = 0;
        autoSeekTarget = 0;
        weaponLockSystem = 1;
        model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
        proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_F";
        simulation = "shotMissile";
        triggerSpeedCoef[] = {0.8, 1};
        submunitionConeAngle = 20;
        class Components {
            class SensorsManagerComponent {
                class Components {};
            };
        };
    };
    class rhs_ammo_cbu100: rhs_ammo_cbu_base {
        allowAgainstInfantry = 0;
        aiAmmoUsageFlags = "128 + 512";
        triggerTime = 4;
        submunitionAmmo[] = {"rhs_ammo_sub_mk118", 1};
        submunitionConeType[] = {"randomcenter", 123};
    };
    class rhs_ammo_sub_mk118: Mo_cluster_AP {
        model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_sub_F";
        submunitionAmmo = "rhs_ammo_sub_mk118_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        hit = 50;
        indirectHitRange = 4;
        effectFly = "";
    };
    class rhs_ammo_sub_mk118_penetrator: rhs_ammo_cluster_penetrator {
        hit = 130;
        caliber = 8;
    };
    class rhs_ammo_cbu87: rhs_ammo_cbu_base {
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu87_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu87";
        initTime = 0.2;
        allowAgainstInfantry = 1;
        aiAmmoUsageFlags = "64 + 128 + 512";
        triggerDistance = 250;
        submunitionAmmo[] = {
            "rhs_ammo_sub_blu97",
            0.95,
            "rhs_ammo_blu97_deploy",
            0.05
        };
        submunitionConeType[] = {"randomcenter", 101};
    };
    class rhs_ammo_cbu89: rhs_ammo_cbu87 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu89_fly";
        proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_b_cbu89";
        submunitionAmmo[] = {
            "rhs_ammo_blu91_deploy",
            0.76,
            "rhs_ammo_blu92_deploy",
            0.24
        };
        submunitionConeType[] = {"randomcenter", 94};
    };
    class ShotDeployBase;
    class rhs_ammo_blu91_deploy: ShotDeployBase {
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_fly";
        submunitionAmmo = "rhs_ammo_blu91";
    };
    class rhs_ammo_blu92_deploy: ShotDeployBase {
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_fly";
        submunitionAmmo = "rhs_ammo_blu92";
    };
    class APERSMine_Range_Ammo;
    class ATMine_Range_Ammo;
    class rhs_ammo_blu91: ATMine_Range_Ammo {
        hit = 2000;
        indirectHit = 1250;
        indirectHitRange = 1;
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_d";
        mineModelDisabled = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_d";
        defaultMagazine = "";
        mineTrigger = "TankTriggerMagnetic";
        mineCanBeReactivated = 0;
        mineFloating = 10000000;
    };
    class rhs_ammo_blu92: APERSMine_Range_Ammo {
        hit = 9;
        indirectHit = 8;
        indirectHitRange = 2;
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_d";
        mineModelDisabled = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_d";
        defaultMagazine = "";
        mineTrigger = "RangeTriggerShort";
        mineCanBeReactivated = 0;
        mineFloating = 10000000;
    };
    class rhs_ammo_sub_blu97: Mo_cluster_AP {
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_fly";
        submunitionAmmo = "rhs_ammo_sub_blu97_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        hit = 8;
        indirectHitRange = 10;
        effectFly = "";
    };
    class rhs_ammo_sub_blu97_penetrator: rhs_ammo_cluster_penetrator {
        hit = 130;
        caliber = 13.3333;
    };
    class rhs_ammo_blu97_deploy: ShotDeployBase {
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_fly";
        submunitionAmmo = "rhs_ammo_uxo_blu97";
    };
    class rhs_ammo_uxo_blu97: APERSMine_Range_Ammo {
        hit = 9;
        indirectHit = 8;
        indirectHitRange = 2;
        icon = "iconExplosiveUXO";
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_d";
        mineModelDisabled = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_d";
        defaultMagazine = "";
        mineTrigger = "RangeTriggerShort";
        mineCanBeReactivated = 0;
        mineFloating = 10000000;
    };
    class rhs_ammo_ANALQ131: MissileBase {
        simulation = "shotMissile";
        model = "\A3\Weapons_F\empty.p3d";
        proxyShape = "\A3\Weapons_F\empty.p3d";
        maverickWeaponIndexOffset = 10;
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        thrustTime = 0;
        thrust = 0;
        maxspeed = 0;
        timetolive = 0;
        maneuvrability = 0;
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
    class B_20mm_Tracer_Red;
    class rhsusf_ammo_M61A2: B_20mm_Tracer_Red {
        hit = 50;
        indirectHit = 3;
        indirectHitRange = 0.5;
        visibleFire = 25;
        audibleFire = 28;
        visibleFireTime = 4;
        cost = 80;
        explosive = 0;
        airlock = 2;
        irLock = 1;
        aiAmmoUsageFlags = 256;
    };
};
class CfgMagazines {
    class VehicleMagazine;
    class 24Rnd_missiles;
    class 24Rnd_PG_missiles;
    class rhs_mag_Sidewinder: VehicleMagazine {
        scope = 2;
        displayName = "AIM-9X";
        displaynameshort = "IR";
        displayNameMFDFormat = "%1 AIM-9X";
        descriptionShort = "Sidewinder, IR-homing";
        ammo = "rhs_ammo_Sidewinder_AA";
        count = 1;
        initSpeed = 0;
        maxLeadSpeed = 450;
        nameSound = "missiles";
        model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
        pylonWeapon = "rhs_weap_SidewinderLauncher";
        hardpoints[] = {"RHS_HP_AIM9", "RHS_HP_AIM9_2x"};
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "MFD_PYLON_NAME";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class rhs_f22_pylon {
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0.15, 1, 0.15};
                        alpha = 0.22;
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0205729}, 1},
                                {"Center", {0.01, -0.0178161}, 1},
                                {"Center", {0.01732, -0.0102865}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0102865}, 1},
                                {"Center", {0.01, 0.0178161}, 1},
                                {"Center", {0, 0.0205729}, 1},
                                {"Center", {-0.01, 0.0178161}, 1},
                                {"Center", {-0.01732, 0.0102865}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0102865}, 1},
                                {"Center", {-0.01, -0.0178161}, 1},
                                {"Center", {0, -0.0205729}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "M";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {"Center", 1, {-0, -0.015}, 1};
                            right[] = {"Center", 1, {0.03, -0.015}, 1};
                            down[] = {"Center", 1, {-0, 0.02}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        alpha = 1;
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background {
                            type = "polygon";
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0145472}, 1}, {"Center", {0.02, 0.000000000899271}, 1}, {"Center", {0.0141421, 0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0145472}, 1}, {"Center", {-0.00000000174846, 0.0205729}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}, {"Center", {-0.02, -0.00000000024533}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}, {"Center", {0.00000000349691, -0.0205729}, 1}, {"Center", {0.0141421, -0.0145472}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background: Background {};
                    };
                };
            };
        };
    };
    class rhs_mag_aim9m: rhs_mag_Sidewinder {
        displayName = "AIM-9M";
        displayNameMFDFormat = "%1 AIM-9M";
        ammo = "rhs_ammo_aim9m";
        pylonWeapon = "rhs_weap_aim9m";
    };
    class rhs_mag_Sidewinder_int: rhs_mag_Sidewinder {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_aim9_1x";
        hardpoints[] = {"RHS_HP_AIM9_int"};
    };
    class rhs_mag_aim9m_int: rhs_mag_Sidewinder_int {
        displayName = "AIM-9M";
        displayNameMFDFormat = "%1 AIM-9M";
        ammo = "rhs_ammo_aim9m";
        pylonWeapon = "rhs_weap_aim9m";
    };
    class rhs_mag_Sidewinder_2: rhs_mag_Sidewinder {
        count = 2;
        displayName = "AIM-9X (LAU-114/A)";
        descriptionShort = "×2 Sidewinder, IR-homing";
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_2x";
        hardpoints[] = {"RHS_HP_AIM9_2x"};
        class mfdElements: mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "AIM";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}, {{{0.02, -0.04}, 1}, {{0.05, -0.04}, 1}, {{0.05, 0.04}, 1}, {{0.02, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
        };
        displayNameMFDFormat = "AIM\%1";
    };
    class rhs_mag_aim9m_2: rhs_mag_Sidewinder_2 {
        displayName = "AIM-9M (LAU-114/A)";
        displayNameMFDFormat = "%1 AIM-9M";
        ammo = "rhs_ammo_aim9m";
        pylonWeapon = "rhs_weap_aim9m";
    };
    class rhs_mag_Sidewinder_heli: rhs_mag_Sidewinder {
        ammo = "rhs_ammo_aim9m_ah64";
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_heli_od";
        hardpoints[] = {"RHS_HP_AIM9_HELI_ARMY"};
        displayName = "AIM-9M";
        displaynameshort = "IR";
        displayNameMFDFormat = "%1 AIM-9M";
    };
    class rhs_mag_Sidewinder_heli_2: rhs_mag_Sidewinder_heli {
        displayName = "AIM-9M";
        displayNameMFDFormat = "%1 AIM-9M";
        ammo = "rhs_ammo_aim9m";
        pylonWeapon = "rhs_weap_aim9m";
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_heli_grey";
        hardpoints[] = {"RHS_HP_AIM9_HELI_USMC"};
    };
    class rhs_mag_ATAS_2: VehicleMagazine {
        scope = 2;
        displayName = "ATAS";
        displayNameMFDFormat = "%1 AIM-92";
        descriptionShort = "×2 Stinger, IR-homing";
        ammo = "rhs_ammo_fim92_missile";
        count = 2;
        initSpeed = 40;
        maxLeadSpeed = 450;
        nameSound = "missiles";
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_atas_2x.p3d";
        pylonWeapon = "rhs_weap_ATAS_launcher";
        hardpoints[] = {"RHS_HP_ATAS", "RHS_HP_MELB", "RHS_HP_MELB_L"};
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "AIM";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class rhs_f22_pylon {
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0.15, 1, 0.15};
                        alpha = 0.22;
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0205729}, 1},
                                {"Center", {0.01, -0.0178161}, 1},
                                {"Center", {0.01732, -0.0102865}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0102865}, 1},
                                {"Center", {0.01, 0.0178161}, 1},
                                {"Center", {0, 0.0205729}, 1},
                                {"Center", {-0.01, 0.0178161}, 1},
                                {"Center", {-0.01732, 0.0102865}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0102865}, 1},
                                {"Center", {-0.01, -0.0178161}, 1},
                                {"Center", {0, -0.0205729}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "M";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {"Center", 1, {-0, -0.015}, 1};
                            right[] = {"Center", 1, {0.03, -0.015}, 1};
                            down[] = {"Center", 1, {-0, 0.02}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        alpha = 1;
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background {
                            type = "polygon";
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0145472}, 1}, {"Center", {0.02, 0.000000000899271}, 1}, {"Center", {0.0141421, 0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0145472}, 1}, {"Center", {-0.00000000174846, 0.0205729}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}, {"Center", {-0.02, -0.00000000024533}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}, {"Center", {0.00000000349691, -0.0205729}, 1}, {"Center", {0.0141421, -0.0145472}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background: Background {};
                    };
                };
            };
        };
    };
    class rhs_mag_ATAS_AH64_2: rhs_mag_ATAS_2 {
        ammo = "rhs_ammo_fim92_ah64";
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_atas_ah64_2x.p3d";
        hardpoints[] = {"RHS_HP_ATAS_AH64"};
    };
    class rhs_mag_aim120: rhs_mag_Sidewinder {
        model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
        hardpoints[] = {"RHS_HP_AIM120"};
        displayName = "AIM-120";
        displaynameshort = "Radar";
        displayNameMFDFormat = "%1 AIM-120";
        descriptionShort = "Radar-homing, BVRAAM";
        ammo = "rhs_ammo_aim120";
        count = 1;
        initSpeed = 0;
        maxLeadSpeed = 450;
        nameSound = "missiles";
        pylonWeapon = "rhs_weap_AIM120";
        class mfdElements {
            class rhs_f22_pylon {
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0.15, 1, 0.15};
                        alpha = 0.22;
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0205729}, 1},
                                {"Center", {0.01, -0.0178161}, 1},
                                {"Center", {0.01732, -0.0102865}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0102865}, 1},
                                {"Center", {0.01, 0.0178161}, 1},
                                {"Center", {0, 0.0205729}, 1},
                                {"Center", {-0.01, 0.0178161}, 1},
                                {"Center", {-0.01732, 0.0102865}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0102865}, 1},
                                {"Center", {-0.01, -0.0178161}, 1},
                                {"Center", {0, -0.0205729}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "C";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {"Center", 1, {-0, -0.015}, 1};
                            right[] = {"Center", 1, {0.03, -0.015}, 1};
                            down[] = {"Center", 1, {-0, 0.02}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        alpha = 1;
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background {
                            type = "polygon";
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0145472}, 1}, {"Center", {0.02, 0.000000000899271}, 1}, {"Center", {0.0141421, 0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0145472}, 1}, {"Center", {-0.00000000174846, 0.0205729}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}, {"Center", {-0.02, -0.00000000024533}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}, {"Center", {0.00000000349691, -0.0205729}, 1}, {"Center", {0.0141421, -0.0145472}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background: Background {};
                    };
                };
            };
        };
    };
    class rhs_mag_aim120d: rhs_mag_aim120 {
        displayName = "AIM-120D";
        displayNameMFDFormat = "%1 AIM-120D";
        ammo = "rhs_ammo_aim120d";
        pylonWeapon = "rhs_weap_AIM120D";
    };
    class rhs_mag_aim120d_int: rhs_mag_aim120d {
        ammo = "rhs_ammo_aim120d";
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU142_1x";
        hardpoints[] = {"RHS_HP_aim120_int"};
        pylonWeapon = "rhs_weap_AIM120D";
        class mfdElements {
            class rhs_f22_pylon {
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0.15, 1, 0.15};
                        alpha = 0.22;
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0205729}, 1},
                                {"Center", {0.01, -0.0178161}, 1},
                                {"Center", {0.01732, -0.0102865}, 1},
                                {"Center", {0.02, 0}, 1},
                                {"Center", {0.01732, 0.0102865}, 1},
                                {"Center", {0.01, 0.0178161}, 1},
                                {"Center", {0, 0.0205729}, 1},
                                {"Center", {-0.01, 0.0178161}, 1},
                                {"Center", {-0.01732, 0.0102865}, 1},
                                {"Center", {-0.02, 0}, 1},
                                {"Center", {-0.01732, -0.0102865}, 1},
                                {"Center", {-0.01, -0.0178161}, 1},
                                {"Center", {0, -0.0205729}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "C";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {"Center", 1, {-0, -0.015}, 1};
                            right[] = {"Center", 1, {0.03, -0.015}, 1};
                            down[] = {"Center", 1, {-0, 0.02}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        alpha = 1;
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background {
                            type = "polygon";
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0145472}, 1}, {"Center", {0.02, 0.000000000899271}, 1}, {"Center", {0.0141421, 0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0145472}, 1}, {"Center", {-0.00000000174846, 0.0205729}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}, {"Center", {-0.02, -0.00000000024533}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}, {"Center", {0.00000000349691, -0.0205729}, 1}, {"Center", {0.0141421, -0.0145472}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background: Background {};
                    };
                };
            };
        };
    };
    class rhs_mag_aim120d_2_F22_l: rhs_mag_aim120d_int {
        displayName = "AIM-120D (×2)";
        count = 2;
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU142_2x_F22_lBay";
        hardpoints[] = {"RHS_HP_F22_lBay"};
        class mfdElements {
            class rhs_f22_pylon {
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {-0.025, 0};
                    };
                    class Center2 {
                        type = "fixed";
                        pos[] = {0.02, -0};
                    };
                };
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0.15, 1, 0.15};
                        alpha = 0.22;
                        class Missile1 {
                            condition = "PylonAmmo>=2";
                            class Shape {
                                type = "line";
                                width = 4;
                                points[] = {
                                    {"Center", {0, -0.0205729}, 1},
                                    {"Center", {0.01, -0.0178161}, 1},
                                    {"Center", {0.01732, -0.0102865}, 1},
                                    {"Center", {0.02, 0}, 1},
                                    {"Center", {0.01732, 0.0102865}, 1},
                                    {"Center", {0.01, 0.0178161}, 1},
                                    {"Center", {0, 0.0205729}, 1},
                                    {"Center", {-0.01, 0.0178161}, 1},
                                    {"Center", {-0.01732, 0.0102865}, 1},
                                    {"Center", {-0.02, 0}, 1},
                                    {"Center", {-0.01732, -0.0102865}, 1},
                                    {"Center", {-0.01, -0.0178161}, 1},
                                    {"Center", {0, -0.0205729}, 1},
                                    {}
                                };
                            };
                        };
                        class Missile2 {
                            condition = "PylonAmmo>=1";
                            class Shape {
                                type = "line";
                                width = 4;
                                points[] = {
                                    {"Center2", {0, -0.0205729}, 1},
                                    {"Center2", {0.01, -0.0178161}, 1},
                                    {"Center2", {0.01732, -0.0102865}, 1},
                                    {"Center2", {0.02, 0}, 1},
                                    {"Center2", {0.01732, 0.0102865}, 1},
                                    {"Center2", {0.01, 0.0178161}, 1},
                                    {"Center2", {0, 0.0205729}, 1},
                                    {"Center2", {-0.01, 0.0178161}, 1},
                                    {"Center2", {-0.01732, 0.0102865}, 1},
                                    {"Center2", {-0.02, 0}, 1},
                                    {"Center2", {-0.01732, -0.0102865}, 1},
                                    {"Center2", {-0.01, -0.0178161}, 1},
                                    {"Center2", {0, -0.0205729}, 1},
                                    {}
                                };
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "C";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {"Center", 1, {0, -0.015}, 1};
                            right[] = {"Center", 1, {0.03, -0.015}, 1};
                            down[] = {"Center", 1, {0, 0.02}, 1};
                        };
                        class PylonText2 {
                            type = "text";
                            source = "static";
                            text = "C";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {"Center2", 1, {0, -0.015}, 1};
                            right[] = {"Center2", 1, {0.03, -0.015}, 1};
                            down[] = {"Center2", 1, {0, 0.02}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmo/2)/2";
                        alpha = 1;
                        class Missile1: Missile1 {
                            class Shape: Shape {};
                            class Background {
                                type = "polygon";
                                points[] = {
                                    {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, -0.0145472}, 1}, {"Center", {0.02, 0.000000000899271}, 1}, {"Center", {0.0141421, 0.0145472}, 1}},
                                    {{"Center", 1, {0, 0}, 1}, {"Center", {0.0141421, 0.0145472}, 1}, {"Center", {-0.00000000174846, 0.0205729}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}},
                                    {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, 0.0145472}, 1}, {"Center", {-0.02, -0.00000000024533}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}},
                                    {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0141421, -0.0145472}, 1}, {"Center", {0.00000000349691, -0.0205729}, 1}, {"Center", {0.0141421, -0.0145472}, 1}}
                                };
                            };
                        };
                        class Missile2: Missile2 {
                            class Shape: Shape {};
                            class Background {
                                type = "polygon";
                                points[] = {
                                    {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0141421, -0.0145472}, 1}, {"Center2", {0.02, 0.000000000899271}, 1}, {"Center2", {0.0141421, 0.0145472}, 1}},
                                    {{"Center2", 1, {0, 0}, 1}, {"Center2", {0.0141421, 0.0145472}, 1}, {"Center2", {-0.00000000174846, 0.0205729}, 1}, {"Center2", {-0.0141421, 0.0145472}, 1}},
                                    {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0141421, 0.0145472}, 1}, {"Center2", {-0.02, -0.00000000024533}, 1}, {"Center2", {-0.0141421, -0.0145472}, 1}},
                                    {{"Center2", 1, {0, 0}, 1}, {"Center2", {-0.0141421, -0.0145472}, 1}, {"Center2", {0.00000000349691, -0.0205729}, 1}, {"Center2", {0.0141421, -0.0145472}, 1}}
                                };
                            };
                        };
                        class PylonText1: PylonText1 {};
                        class PylonText2: PylonText2 {};
                    };
                    class HalfEmpty: Selected {
                        alpha = 0.15;
                        condition = "PylonAmmoRelative <= 1";
                        color[] = {1, 0, 0, 1};
                        class Missile1: Missile1 {
                            condition = "PylonAmmo<=1";
                            class Shape: Shape {};
                            class Background: Background {};
                        };
                        class Missile2: Missile2 {
                            condition = "PylonAmmo<=0";
                            class Shape: Shape {};
                            class Background: Background {};
                        };
                    };
                    class Empty: HalfEmpty {
                        condition = "PylonAmmoRelative <= 0";
                        class PylonText1: PylonText1 {};
                        class PylonText2: PylonText2 {};
                    };
                };
            };
        };
    };
    class rhs_mag_aim120d_2_F22_r: rhs_mag_aim120d_2_F22_l {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU142_2x_F22_rBay";
        hardpoints[] = {"RHS_HP_F22_rBay"};
    };
    class rhs_mag_4Rnd_stinger: VehicleMagazine {
        scope = 2;
        ammo = "rhs_ammo_fim92_missile";
        displayname = "FIM-92F Stinger";
        displaynameshort = "FIM-92F";
        initspeed = 40;
        maxLeadSpeed = 850;
        nameSound = "missiles";
        count = 4;
    };
    class rhs_mag_2Rnd_stinger: rhs_mag_4Rnd_stinger {
        count = 2;
    };
    class rhs_mag_DAGR_4: 24Rnd_PG_missiles {
        count = 4;
        ammo = "RHS_Ammo_DAGR";
        displayName = "DAGR";
        displayNameShort = "SALH";
        descriptionShort = "×4 Laser-homing 70mm rockets";
        weight = 32;
        hardpoints[] = {"RHS_HP_HELLFIRE_SINGLE", "RHS_HP_LONGBOW_SINGLE"};
        pylonWeapon = "RHS_weap_DAGR_Launcher";
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_4x";
        mirrorMissilesIndexes[] = {2, 1, 4, 3};
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "LG";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class rhs_ah64_ammoname {
                class Bones {};
                class Draw {
                    condition = "pylonSelected";
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "LG";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                    class PylonAmmo {
                        type = "text";
                        source = "ammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.015, 0.02}, 1};
                        right[] = {{0.06, 0.02}, 1};
                        down[] = {{0.015, 0.105}, 1};
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class BackgroundGroup {
                            color[] = {0, 0, 0};
                            class Background {
                                type = "polygon";
                                points[] = {{{{-0.0225, -0.06}, 1}, {{0.0225, -0.06}, 1}, {{0.0225, 0.03}, 1}, {{-0.0225, 0.03}, 1}}};
                            };
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.0225, -0.06}, 1},
                                {{0.0225, -0.06}, 1},
                                {{0.0225, 0.03}, 1},
                                {{-0.0225, 0.03}, 1},
                                {{-0.0225, -0.06}, 1},
                                {},
                                {{-0.0225, -0.06}, 1},
                                {{-0.02025, -0.06625}, 1},
                                {{-0.018, -0.0675}, 1},
                                {{-0.01575, -0.06625}, 1},
                                {{-0.0135, -0.06}, 1},
                                {},
                                {{-0.0135, -0.06}, 1},
                                {{-0.01125, -0.06625}, 1},
                                {{-0.009, -0.0675}, 1},
                                {{-0.00675, -0.06625}, 1},
                                {{-0.0045, -0.06}, 1},
                                {},
                                {{-0.0045, -0.06}, 1},
                                {{-0.00225, -0.06625}, 1},
                                {{-0.00000000186265, -0.0675}, 1},
                                {{0.00225, -0.06625}, 1},
                                {{0.0045, -0.06}, 1},
                                {},
                                {{0.0045, -0.06}, 1},
                                {{0.00675, -0.06625}, 1},
                                {{0.009, -0.0675}, 1},
                                {{0.01125, -0.06625}, 1},
                                {{0.0135, -0.06}, 1},
                                {},
                                {{0.0135, -0.06}, 1},
                                {{0.01575, -0.06625}, 1},
                                {{0.018, -0.0675}, 1},
                                {{0.02025, -0.06625}, 1},
                                {{0.0225, -0.06}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "LG";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{"0.03+-0.03", -0.01}, 1};
                            right[] = {{0.015, -0.01}, 1};
                            down[] = {{"0.03+-0.03", 0.005}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {
                            width = 8;
                        };
                        class BackgroundGroup: BackgroundGroup {
                            color[] = {0.99, 0.94, 0.59};
                            alpha = 0.1;
                            class Background: Background {};
                        };
                        class BlackText: Default {
                            color[] = {0, 0, 0};
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class BlackText: BlackText {
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "DAGR";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LG";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                    class PylonAmo {
                        type = "text";
                        source = "pylonammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.16, 0.054}, 1};
                        right[] = {{0.185, 0.054}, 1};
                        down[] = {{0.16, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_DAGR_8: rhs_mag_DAGR_4 {
        count = 8;
        displayName = "DAGR (M310)";
        descriptionShort = "×8 Laser-homing 70mm rockets";
        weight = 64;
        hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_LONGBOW_RACK", "RHS_HP_MELB"};
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_8x";
        mirrorMissilesIndexes[] = {2, 1, 4, 3, 6, 5, 8, 7};
    };
    class rhs_mag_DAGR_16: rhs_mag_DAGR_8 {
        count = 16;
        displayName = "DAGR (M299)";
        descriptionShort = "×16 Laser-homing 70mm rockets";
        weight = 128;
        hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_LONGBOW_RACK"};
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_16x";
        mirrorMissilesIndexes[] = {
            2,
            1,
            4,
            3,
            8,
            7,
            6,
            5,
            12,
            11,
            10,
            9,
            14,
            13,
            16,
            15
        };
    };
    class rhs_mag_Hellfire_base: VehicleMagazine {
        scope = 2;
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x";
        displayName = "AGM-114L Hellfire II";
        ammo = "rhs_ammo_Hellfire_AT";
        count = 8;
        nameSound = "missiles";
        initSpeed = 0;
        maxLeadSpeed = 50;
        weight = 360;
        class mfdElements {
            class RHS_AH64_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.005, -0.03}, 1}, {{0.065, -0.03}, 1}, {{0.065, 0.15}, 1}, {{-0.005, 0.15}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.0553333, 0.00176638}, 1},
                                {{0.0313333, 0.0174929}, 1},
                                {{0.00600001, 0.00176638}, 1},
                                {},
                                {{0.0553333, 0.135442}, 1},
                                {{0.0553333, 0.00176638}, 1},
                                {{0.0553333, -0.00609687}, 1},
                                {{0.0526667, -0.0126496}, 1},
                                {{0.05, -0.0178917}, 1},
                                {{0.0446667, -0.0205128}, 1},
                                {{0.0393333, -0.0231339}, 1},
                                {{0.0353333, -0.0244445}, 1},
                                {{0.0313333, -0.025755}, 1},
                                {{0.03, -0.025755}, 1},
                                {{0.026, -0.0244445}, 1},
                                {{0.022, -0.0231339}, 1},
                                {{0.0166667, -0.0205128}, 1},
                                {{0.0126667, -0.0178917}, 1},
                                {{0.00866666, -0.0126496}, 1},
                                {{0.00733334, -0.00609687}, 1},
                                {{0.00600001, 0.00176638}, 1},
                                {{0.00600001, 0.135442}, 1},
                                {{0.0553333, 0.135442}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "L";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.03, 0.05}, 1};
                            right[] = {{0.06, 0.05}, 1};
                            down[] = {{0.03, 0.075}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                    };
                };
            };
            class RHS_AH64_Weap_MFD_Inventory {
                class Bones {};
                class Draw {};
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.022, -0.05}, 1}, {{0.022, -0.05}, 1}, {{0.022, 0.034}, 1}, {{-0.022, 0.034}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.0132609, -0.0382749}, 1},
                                {{-0.00239129, -0.0303647}, 1},
                                {{-0.018913, -0.0382749}, 1},
                                {},
                                {{0.0132609, 0.0289621}, 1},
                                {{0.0132609, -0.0382749}, 1},
                                {{0.0132609, -0.04223}, 1},
                                {{0.0115217, -0.045526}, 1},
                                {{0.00978261, -0.0481627}, 1},
                                {{0.00630435, -0.0494811}, 1},
                                {{0.00282609, -0.0507994}, 1},
                                {{0.000217393, -0.0514586}, 1},
                                {{-0.00239129, -0.0521178}, 1},
                                {{-0.00326087, -0.0521178}, 1},
                                {{-0.00586955, -0.0514586}, 1},
                                {{-0.00847825, -0.0507994}, 1},
                                {{-0.0119565, -0.0494811}, 1},
                                {{-0.0145652, -0.0481627}, 1},
                                {{-0.0171739, -0.045526}, 1},
                                {{-0.0180435, -0.04223}, 1},
                                {{-0.018913, -0.0382749}, 1},
                                {{-0.018913, 0.0289621}, 1},
                                {{0.0132609, 0.0289621}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "AGM-114K";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LASER";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_AGM114L: rhs_mag_Hellfire_base {
        ammo = "rhs_ammo_AGM_114L";
        displayName = "AGM-114L";
        displaynameshort = "Radar";
        descriptionShort = "Longbow Hellfire, Radar-homing";
        hardpoints[] = {"RHS_HP_LONGBOW_SINGLE"};
        pylonWeapon = "rhs_weap_AGM114L_Launcher";
        class mfdElements {
            class RHS_AH64_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.005, -0.03}, 1}, {{0.065, -0.03}, 1}, {{0.065, 0.15}, 1}, {{-0.005, 0.15}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.0553333, 0.00176638}, 1},
                                {{0.0313333, 0.0174929}, 1},
                                {{0.00600001, 0.00176638}, 1},
                                {},
                                {{0.0553333, 0.135442}, 1},
                                {{0.0553333, 0.00176638}, 1},
                                {{0.0553333, -0.00609687}, 1},
                                {{0.0526667, -0.0126496}, 1},
                                {{0.05, -0.0178917}, 1},
                                {{0.0446667, -0.0205128}, 1},
                                {{0.0393333, -0.0231339}, 1},
                                {{0.0353333, -0.0244445}, 1},
                                {{0.0313333, -0.025755}, 1},
                                {{0.03, -0.025755}, 1},
                                {{0.026, -0.0244445}, 1},
                                {{0.022, -0.0231339}, 1},
                                {{0.0166667, -0.0205128}, 1},
                                {{0.0126667, -0.0178917}, 1},
                                {{0.00866666, -0.0126496}, 1},
                                {{0.00733334, -0.00609687}, 1},
                                {{0.00600001, 0.00176638}, 1},
                                {{0.00600001, 0.135442}, 1},
                                {{0.0553333, 0.135442}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "R";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.03, 0.05}, 1};
                            right[] = {{0.06, 0.05}, 1};
                            down[] = {{0.03, 0.075}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                    };
                };
            };
            class RHS_AH64_Weap_MFD_Inventory {
                class Bones {};
                class Draw {};
            };
        };
    };
    class rhs_mag_AGM114L_2: rhs_mag_AGM114L {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x";
        count = 2;
        displayName = "AGM-114L (M310)";
        descriptionShort = "×2 Longbow Hellfire, Radar-homing";
        weight = 90;
        hardpoints[] = {"RHS_HP_LONGBOW_RACK"};
        mirrorMissilesIndexes[] = {2, 1};
    };
    class rhs_mag_AGM114L_4: rhs_mag_AGM114L_2 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x";
        count = 4;
        displayName = "AGM-114L (M299)";
        descriptionShort = "×4 Longbow Hellfire, Radar-homing";
        weight = 180;
        hardpoints[] = {"RHS_HP_LONGBOW_RACK"};
        mirrorMissilesIndexes[] = {2, 1, 4, 3};
        class mfdElements {
            class RHS_AH64_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        alpha = 1;
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.045, -0.05}, 1}, {{0.045, -0.05}, 1}, {{0.045, 0.17}, 1}, {{-0.045, 0.17}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.011, -0.0586752}, 1},
                                {{-0.029, -0.0468804}, 1},
                                {{-0.048, -0.0586752}, 1},
                                {},
                                {{-0.011, 0.0415812}, 1},
                                {{-0.011, -0.0586752}, 1},
                                {{-0.011, -0.0645727}, 1},
                                {{-0.013, -0.0694872}, 1},
                                {{-0.015, -0.0734188}, 1},
                                {{-0.019, -0.0753846}, 1},
                                {{-0.023, -0.0773505}, 1},
                                {{-0.026, -0.0783333}, 1},
                                {{-0.029, -0.0793162}, 1},
                                {{-0.03, -0.0793162}, 1},
                                {{-0.033, -0.0783333}, 1},
                                {{-0.036, -0.0773505}, 1},
                                {{-0.04, -0.0753846}, 1},
                                {{-0.043, -0.0734188}, 1},
                                {{-0.046, -0.0694872}, 1},
                                {{-0.047, -0.0645727}, 1},
                                {{-0.048, -0.0586752}, 1},
                                {{-0.048, 0.0415812}, 1},
                                {{-0.011, 0.0415812}, 1},
                                {},
                                {{0.039, -0.0586752}, 1},
                                {{0.021, -0.0468804}, 1},
                                {{0.00200001, -0.0586752}, 1},
                                {},
                                {{0.039, 0.0415812}, 1},
                                {{0.039, -0.0586752}, 1},
                                {{0.039, -0.0645727}, 1},
                                {{0.037, -0.0694872}, 1},
                                {{0.035, -0.0734188}, 1},
                                {{0.031, -0.0753846}, 1},
                                {{0.027, -0.0773505}, 1},
                                {{0.024, -0.0783333}, 1},
                                {{0.021, -0.0793162}, 1},
                                {{0.02, -0.0793162}, 1},
                                {{0.017, -0.0783333}, 1},
                                {{0.014, -0.0773505}, 1},
                                {{0.01, -0.0753846}, 1},
                                {{0.007, -0.0734188}, 1},
                                {{0.004, -0.0694872}, 1},
                                {{0.00300001, -0.0645727}, 1},
                                {{0.00200001, -0.0586752}, 1},
                                {{0.00200001, 0.0415812}, 1},
                                {{0.039, 0.0415812}, 1},
                                {},
                                {{-0.011, 0.0743248}, 1},
                                {{-0.029, 0.0861197}, 1},
                                {{-0.048, 0.0743248}, 1},
                                {},
                                {{-0.011, 0.174581}, 1},
                                {{-0.011, 0.0743248}, 1},
                                {{-0.011, 0.0684274}, 1},
                                {{-0.013, 0.0635128}, 1},
                                {{-0.015, 0.0595812}, 1},
                                {{-0.019, 0.0576154}, 1},
                                {{-0.023, 0.0556496}, 1},
                                {{-0.026, 0.0546667}, 1},
                                {{-0.029, 0.0536838}, 1},
                                {{-0.03, 0.0536838}, 1},
                                {{-0.033, 0.0546667}, 1},
                                {{-0.036, 0.0556496}, 1},
                                {{-0.04, 0.0576154}, 1},
                                {{-0.043, 0.0595812}, 1},
                                {{-0.046, 0.0635128}, 1},
                                {{-0.047, 0.0684274}, 1},
                                {{-0.048, 0.0743248}, 1},
                                {{-0.048, 0.174581}, 1},
                                {{-0.011, 0.174581}, 1},
                                {},
                                {{0.039, 0.0743248}, 1},
                                {{0.021, 0.0861197}, 1},
                                {{0.00200001, 0.0743248}, 1},
                                {},
                                {{0.039, 0.174581}, 1},
                                {{0.039, 0.0743248}, 1},
                                {{0.039, 0.0684274}, 1},
                                {{0.037, 0.0635128}, 1},
                                {{0.035, 0.0595812}, 1},
                                {{0.031, 0.0576154}, 1},
                                {{0.027, 0.0556496}, 1},
                                {{0.024, 0.0546667}, 1},
                                {{0.021, 0.0536838}, 1},
                                {{0.02, 0.0536838}, 1},
                                {{0.017, 0.0546667}, 1},
                                {{0.014, 0.0556496}, 1},
                                {{0.01, 0.0576154}, 1},
                                {{0.007, 0.0595812}, 1},
                                {{0.004, 0.0635128}, 1},
                                {{0.00300001, 0.0684274}, 1},
                                {{0.00200001, 0.0743248}, 1},
                                {{0.00200001, 0.174581}, 1},
                                {{0.039, 0.174581}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "R";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.02, 0.01}, 1};
                            right[] = {{0.05, 0.01}, 1};
                            down[] = {{0.02, 0.035}, 1};
                        };
                        class PylonText2 {
                            type = "text";
                            source = "static";
                            text = "R";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.02, 0.14}, 1};
                            right[] = {{0.05, 0.14}, 1};
                            down[] = {{0.02, 0.165}, 1};
                        };
                        class PylonText3 {
                            type = "text";
                            source = "static";
                            text = "R";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.025, 0.01}, 1};
                            right[] = {{0.005, 0.01}, 1};
                            down[] = {{-0.025, 0.035}, 1};
                        };
                        class PylonText4 {
                            type = "text";
                            source = "static";
                            text = "R";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.025, 0.14}, 1};
                            right[] = {{0.005, 0.14}, 1};
                            down[] = {{-0.025, 0.165}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class PylonText2: PylonText2 {};
                        class PylonText3: PylonText3 {};
                        class PylonText4: PylonText4 {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class PylonText2: PylonText2 {};
                        class PylonText3: PylonText3 {};
                        class PylonText4: PylonText4 {};
                    };
                };
            };
            class RHS_AH64_Weap_MFD_Inventory {
                class Bones {};
                class Draw {};
            };
        };
    };
    class rhs_mag_AGM114K: rhs_mag_Hellfire_base {
        displayName = "AGM-114K";
        displaynameshort = "LG";
        descriptionShort = "Hellfire, Laser-homing ";
        ammo = "RHS_ammo_AGM_114K";
        maxLeadSpeed = 100;
        count = 1;
        weight = 45;
        pylonWeapon = "RHS_weap_AGM114K_Launcher";
        hardpoints[] = {"RHS_HP_HELLFIRE_SINGLE", "RHS_HP_LONGBOW_SINGLE"};
    };
    class rhs_mag_AGM114K_2: rhs_mag_AGM114K {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x";
        count = 2;
        displayName = "AGM-114K (M310)";
        descriptionShort = "×2 Hellfire, Laser-homing ";
        weight = 90;
        hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_LONGBOW_RACK", "RHS_HP_MELB"};
        mirrorMissilesIndexes[] = {2, 1};
        class mfdElements: mfdElements {
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.044, -0.05}, 1}, {{0.044, -0.05}, 1}, {{0.044, 0.034}, 1}, {{-0.044, 0.034}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.00923913, -0.0382749}, 1},
                                {{-0.0248913, -0.0303647}, 1},
                                {{-0.041413, -0.0382749}, 1},
                                {},
                                {{-0.00923913, 0.0289621}, 1},
                                {{-0.00923913, -0.0382749}, 1},
                                {{-0.00923913, -0.04223}, 1},
                                {{-0.0109783, -0.045526}, 1},
                                {{-0.0127174, -0.0481627}, 1},
                                {{-0.0161956, -0.0494811}, 1},
                                {{-0.0196739, -0.0507994}, 1},
                                {{-0.0222826, -0.0514586}, 1},
                                {{-0.0248913, -0.0521178}, 1},
                                {{-0.0257609, -0.0521178}, 1},
                                {{-0.0283696, -0.0514586}, 1},
                                {{-0.0309783, -0.0507994}, 1},
                                {{-0.0344565, -0.0494811}, 1},
                                {{-0.0370652, -0.0481627}, 1},
                                {{-0.0396739, -0.045526}, 1},
                                {{-0.0405435, -0.04223}, 1},
                                {{-0.041413, -0.0382749}, 1},
                                {{-0.041413, 0.0289621}, 1},
                                {{-0.00923913, 0.0289621}, 1},
                                {}
                            };
                        };
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Default2 {
                        condition = "PylonAmmoRelative>0.5";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.0357609, -0.0382749}, 1},
                                {{0.0201087, -0.0303647}, 1},
                                {{0.00358697, -0.0382749}, 1},
                                {},
                                {{0.0357609, 0.0289621}, 1},
                                {{0.0357609, -0.0382749}, 1},
                                {{0.0357609, -0.04223}, 1},
                                {{0.0340217, -0.045526}, 1},
                                {{0.0322826, -0.0481627}, 1},
                                {{0.0288044, -0.0494811}, 1},
                                {{0.0253261, -0.0507994}, 1},
                                {{0.0227174, -0.0514586}, 1},
                                {{0.0201087, -0.0521178}, 1},
                                {{0.0192391, -0.0521178}, 1},
                                {{0.0166304, -0.0514586}, 1},
                                {{0.0140217, -0.0507994}, 1},
                                {{0.0105435, -0.0494811}, 1},
                                {{0.00793479, -0.0481627}, 1},
                                {{0.0053261, -0.045526}, 1},
                                {{0.00445653, -0.04223}, 1},
                                {{0.00358697, -0.0382749}, 1},
                                {{0.00358697, 0.0289621}, 1},
                                {{0.0357609, 0.0289621}, 1},
                                {}
                            };
                        };
                    };
                    class Empty2: Default2 {
                        condition = "PylonAmmoRelative <= 0.5";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                    class Selected2: Default2 {
                        condition = "((PylonSelected +  PylonAmmoRelative)/2)*(PylonAmmoRelative >= 1)";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "AGM-114K";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LASER";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                    class PylonAmo {
                        type = "text";
                        source = "pylonammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.16, 0.054}, 1};
                        right[] = {{0.185, 0.054}, 1};
                        down[] = {{0.16, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_AGM114K_4: rhs_mag_AGM114K_2 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x";
        count = 4;
        displayName = "AGM-114K (M299)";
        descriptionShort = "×4 Hellfire, Laser-homing ";
        weight = 180;
        hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_LONGBOW_RACK"};
        mirrorMissilesIndexes[] = {2, 1, 4, 3};
        class mfdElements {
            class RHS_AH64_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        alpha = 1;
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.045, -0.05}, 1}, {{0.045, -0.05}, 1}, {{0.045, 0.17}, 1}, {{-0.045, 0.17}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.011, -0.0586752}, 1},
                                {{-0.029, -0.0468804}, 1},
                                {{-0.048, -0.0586752}, 1},
                                {},
                                {{-0.011, 0.0415812}, 1},
                                {{-0.011, -0.0586752}, 1},
                                {{-0.011, -0.0645727}, 1},
                                {{-0.013, -0.0694872}, 1},
                                {{-0.015, -0.0734188}, 1},
                                {{-0.019, -0.0753846}, 1},
                                {{-0.023, -0.0773505}, 1},
                                {{-0.026, -0.0783333}, 1},
                                {{-0.029, -0.0793162}, 1},
                                {{-0.03, -0.0793162}, 1},
                                {{-0.033, -0.0783333}, 1},
                                {{-0.036, -0.0773505}, 1},
                                {{-0.04, -0.0753846}, 1},
                                {{-0.043, -0.0734188}, 1},
                                {{-0.046, -0.0694872}, 1},
                                {{-0.047, -0.0645727}, 1},
                                {{-0.048, -0.0586752}, 1},
                                {{-0.048, 0.0415812}, 1},
                                {{-0.011, 0.0415812}, 1},
                                {},
                                {{0.039, -0.0586752}, 1},
                                {{0.021, -0.0468804}, 1},
                                {{0.00200001, -0.0586752}, 1},
                                {},
                                {{0.039, 0.0415812}, 1},
                                {{0.039, -0.0586752}, 1},
                                {{0.039, -0.0645727}, 1},
                                {{0.037, -0.0694872}, 1},
                                {{0.035, -0.0734188}, 1},
                                {{0.031, -0.0753846}, 1},
                                {{0.027, -0.0773505}, 1},
                                {{0.024, -0.0783333}, 1},
                                {{0.021, -0.0793162}, 1},
                                {{0.02, -0.0793162}, 1},
                                {{0.017, -0.0783333}, 1},
                                {{0.014, -0.0773505}, 1},
                                {{0.01, -0.0753846}, 1},
                                {{0.007, -0.0734188}, 1},
                                {{0.004, -0.0694872}, 1},
                                {{0.00300001, -0.0645727}, 1},
                                {{0.00200001, -0.0586752}, 1},
                                {{0.00200001, 0.0415812}, 1},
                                {{0.039, 0.0415812}, 1},
                                {},
                                {{-0.011, 0.0743248}, 1},
                                {{-0.029, 0.0861197}, 1},
                                {{-0.048, 0.0743248}, 1},
                                {},
                                {{-0.011, 0.174581}, 1},
                                {{-0.011, 0.0743248}, 1},
                                {{-0.011, 0.0684274}, 1},
                                {{-0.013, 0.0635128}, 1},
                                {{-0.015, 0.0595812}, 1},
                                {{-0.019, 0.0576154}, 1},
                                {{-0.023, 0.0556496}, 1},
                                {{-0.026, 0.0546667}, 1},
                                {{-0.029, 0.0536838}, 1},
                                {{-0.03, 0.0536838}, 1},
                                {{-0.033, 0.0546667}, 1},
                                {{-0.036, 0.0556496}, 1},
                                {{-0.04, 0.0576154}, 1},
                                {{-0.043, 0.0595812}, 1},
                                {{-0.046, 0.0635128}, 1},
                                {{-0.047, 0.0684274}, 1},
                                {{-0.048, 0.0743248}, 1},
                                {{-0.048, 0.174581}, 1},
                                {{-0.011, 0.174581}, 1},
                                {},
                                {{0.039, 0.0743248}, 1},
                                {{0.021, 0.0861197}, 1},
                                {{0.00200001, 0.0743248}, 1},
                                {},
                                {{0.039, 0.174581}, 1},
                                {{0.039, 0.0743248}, 1},
                                {{0.039, 0.0684274}, 1},
                                {{0.037, 0.0635128}, 1},
                                {{0.035, 0.0595812}, 1},
                                {{0.031, 0.0576154}, 1},
                                {{0.027, 0.0556496}, 1},
                                {{0.024, 0.0546667}, 1},
                                {{0.021, 0.0536838}, 1},
                                {{0.02, 0.0536838}, 1},
                                {{0.017, 0.0546667}, 1},
                                {{0.014, 0.0556496}, 1},
                                {{0.01, 0.0576154}, 1},
                                {{0.007, 0.0595812}, 1},
                                {{0.004, 0.0635128}, 1},
                                {{0.00300001, 0.0684274}, 1},
                                {{0.00200001, 0.0743248}, 1},
                                {{0.00200001, 0.174581}, 1},
                                {{0.039, 0.174581}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "L";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.02, 0.01}, 1};
                            right[] = {{0.05, 0.01}, 1};
                            down[] = {{0.02, 0.035}, 1};
                        };
                        class PylonText2 {
                            type = "text";
                            source = "static";
                            text = "L";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.02, 0.14}, 1};
                            right[] = {{0.05, 0.14}, 1};
                            down[] = {{0.02, 0.165}, 1};
                        };
                        class PylonText3 {
                            type = "text";
                            source = "static";
                            text = "L";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.025, 0.01}, 1};
                            right[] = {{0.005, 0.01}, 1};
                            down[] = {{-0.025, 0.035}, 1};
                        };
                        class PylonText4 {
                            type = "text";
                            source = "static";
                            text = "L";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{-0.025, 0.14}, 1};
                            right[] = {{0.005, 0.14}, 1};
                            down[] = {{-0.025, 0.165}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class PylonText2: PylonText2 {};
                        class PylonText3: PylonText3 {};
                        class PylonText4: PylonText4 {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class PylonText2: PylonText2 {};
                        class PylonText3: PylonText3 {};
                        class PylonText4: PylonText4 {};
                    };
                };
            };
            class RHS_AH64_Weap_MFD_Inventory {
                class Bones {};
                class Draw {};
            };
        };
    };
    class rhs_mag_AGM114M: rhs_mag_AGM114K {
        displayName = "AGM-114M";
        displaynameshort = "LG HE";
        descriptionShort = "HE/FRAG Hellfire, Laser-homing";
        ammo = "RHS_ammo_AGM_114M";
        maxLeadSpeed = 100;
        count = 1;
        weight = 45;
        pylonWeapon = "RHS_weap_AGM114M_Launcher";
        class mfdElements: mfdElements {
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.022, -0.05}, 1}, {{0.022, -0.05}, 1}, {{0.022, 0.034}, 1}, {{-0.022, 0.034}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.0132609, -0.0382749}, 1},
                                {{-0.00239129, -0.0303647}, 1},
                                {{-0.018913, -0.0382749}, 1},
                                {},
                                {{0.0132609, 0.0289621}, 1},
                                {{0.0132609, -0.0382749}, 1},
                                {{0.0132609, -0.04223}, 1},
                                {{0.0115217, -0.045526}, 1},
                                {{0.00978261, -0.0481627}, 1},
                                {{0.00630435, -0.0494811}, 1},
                                {{0.00282609, -0.0507994}, 1},
                                {{0.000217393, -0.0514586}, 1},
                                {{-0.00239129, -0.0521178}, 1},
                                {{-0.00326087, -0.0521178}, 1},
                                {{-0.00586955, -0.0514586}, 1},
                                {{-0.00847825, -0.0507994}, 1},
                                {{-0.0119565, -0.0494811}, 1},
                                {{-0.0145652, -0.0481627}, 1},
                                {{-0.0171739, -0.045526}, 1},
                                {{-0.0180435, -0.04223}, 1},
                                {{-0.018913, -0.0382749}, 1},
                                {{-0.018913, 0.0289621}, 1},
                                {{0.0132609, 0.0289621}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "AGM-114M";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LASER";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_AGM114M_2: rhs_mag_AGM114M {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x";
        count = 2;
        displayName = "AGM-114M (M310)";
        descriptionShort = "×2 HE/FRAG Hellfire, Laser-homing";
        weight = 90;
        hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_LONGBOW_RACK", "RHS_HP_MELB"};
        mirrorMissilesIndexes[] = {2, 1};
    };
    class rhs_mag_AGM114M_4: rhs_mag_AGM114M_2 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x";
        count = 4;
        displayName = "AGM-114M (M299)";
        descriptionShort = "×4 HE/FRAG Hellfire, Laser-homing";
        weight = 180;
        hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_LONGBOW_RACK"};
        mirrorMissilesIndexes[] = {2, 1, 4, 3};
    };
    class rhs_mag_AGM114N: rhs_mag_AGM114K {
        displayName = "AGM-114N";
        displaynameshort = "LG TB";
        descriptionShort = "Thermobaric Hellfire, Laser-homing";
        ammo = "RHS_ammo_AGM_114N";
        maxLeadSpeed = 100;
        count = 1;
        weight = 45;
        pylonWeapon = "RHS_weap_AGM114N_Launcher";
        class mfdElements: mfdElements {
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.022, -0.05}, 1}, {{0.022, -0.05}, 1}, {{0.022, 0.034}, 1}, {{-0.022, 0.034}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.0132609, -0.0382749}, 1},
                                {{-0.00239129, -0.0303647}, 1},
                                {{-0.018913, -0.0382749}, 1},
                                {},
                                {{0.0132609, 0.0289621}, 1},
                                {{0.0132609, -0.0382749}, 1},
                                {{0.0132609, -0.04223}, 1},
                                {{0.0115217, -0.045526}, 1},
                                {{0.00978261, -0.0481627}, 1},
                                {{0.00630435, -0.0494811}, 1},
                                {{0.00282609, -0.0507994}, 1},
                                {{0.000217393, -0.0514586}, 1},
                                {{-0.00239129, -0.0521178}, 1},
                                {{-0.00326087, -0.0521178}, 1},
                                {{-0.00586955, -0.0514586}, 1},
                                {{-0.00847825, -0.0507994}, 1},
                                {{-0.0119565, -0.0494811}, 1},
                                {{-0.0145652, -0.0481627}, 1},
                                {{-0.0171739, -0.045526}, 1},
                                {{-0.0180435, -0.04223}, 1},
                                {{-0.018913, -0.0382749}, 1},
                                {{-0.018913, 0.0289621}, 1},
                                {{0.0132609, 0.0289621}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "AGM-114N";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LASER";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_AGM114N_2: rhs_mag_AGM114N {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x";
        count = 2;
        displayName = "AGM-114N (M310)";
        descriptionShort = "×2 Thermobaric Hellfire, Laser-homing";
        weight = 90;
        hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_LONGBOW_RACK", "RHS_HP_MELB"};
        mirrorMissilesIndexes[] = {2, 1};
    };
    class rhs_mag_AGM114N_4: rhs_mag_AGM114N_2 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_4x";
        count = 4;
        displayName = "AGM-114N (M299)";
        descriptionShort = "×4 Thermobaric Hellfire, Laser-homing";
        weight = 180;
        hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_LONGBOW_RACK"};
        mirrorMissilesIndexes[] = {2, 1, 4, 3};
    };
    class rhs_mag_DAGR_4_plane: rhs_mag_DAGR_4 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_4x_airplane";
        hardpoints[] = {"RHS_HP_HELLFIRE_PLANE", "RHS_HP_LONGBOW_PLANE"};
    };
    class rhs_mag_DAGR_8_plane: rhs_mag_DAGR_8 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_DAGR_8x_airplane";
        hardpoints[] = {"RHS_HP_HELLFIRE_PLANE_RACK", "RHS_HP_LONGBOW_PLANE_RACK"};
    };
    class rhs_mag_AGM114L_plane: rhs_mag_AGM114L {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x_airplane";
        hardpoints[] = {"RHS_HP_LONGBOW_PLANE"};
    };
    class rhs_mag_AGM114L_2_plane: rhs_mag_AGM114L_2 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x_airplane";
        hardpoints[] = {"RHS_HP_LONGBOW_PLANE_RACK"};
    };
    class rhs_mag_AGM114K_plane: rhs_mag_AGM114K {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x_airplane";
        hardpoints[] = {"RHS_HP_HELLFIRE_PLANE", "RHS_HP_LONGBOW_PLANE"};
    };
    class rhs_mag_AGM114K_2_plane: rhs_mag_AGM114K_2 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x_airplane";
        hardpoints[] = {"RHS_HP_HELLFIRE_PLANE_RACK", "RHS_HP_LONGBOW_PLANE_RACK"};
    };
    class rhs_mag_AGM114M_plane: rhs_mag_AGM114M {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x_airplane";
        hardpoints[] = {"RHS_HP_HELLFIRE_PLANE", "RHS_HP_LONGBOW_PLANE"};
    };
    class rhs_mag_AGM114M_2_plane: rhs_mag_AGM114M_2 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x_airplane";
        hardpoints[] = {"RHS_HP_HELLFIRE_PLANE_RACK", "RHS_HP_LONGBOW_PLANE_RACK"};
    };
    class rhs_mag_AGM114N_plane: rhs_mag_AGM114N {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_1x_airplane";
        hardpoints[] = {"RHS_HP_HELLFIRE_PLANE", "RHS_HP_LONGBOW_PLANE"};
    };
    class rhs_mag_AGM114N_2_plane: rhs_mag_AGM114N_2 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x_airplane";
        hardpoints[] = {"RHS_HP_HELLFIRE_PLANE_RACK", "RHS_HP_LONGBOW_PLANE_RACK"};
    };
    class rhs_mag_agm65: rhs_mag_Hellfire_base {
        scope = 0;
        displayName = "AGM-65";
        displayNameShort = "AGM-65";
        ammo = "rhs_ammo_agm65";
        initSpeed = 0;
        maxLeadSpeed = 220;
        count = 1;
        pylonWeapon = "rhs_weap_agm65";
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_LAU117_1x";
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "AGM";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
        };
        displayNameMFDFormat = "\%1";
    };
    class rhs_mag_agm65_x3: rhs_mag_agm65 {
        count = 3;
        displayName = "AGM-65 x3";
        model = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F";
        mirrorMissilesIndexes[] = {2, 1, 3};
        class mfdElements: mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "AGM";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}, {{{0.02, -0.04}, 1}, {{0.05, -0.04}, 1}, {{0.05, 0.04}, 1}, {{0.02, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
        };
    };
    class rhs_mag_agm65b: rhs_mag_agm65 {
        scope = 2;
        displayName = "AGM-65B";
        displayNameShort = "TV";
        descriptionShort = "TV-guided Maverick";
        ammo = "rhs_ammo_agm65b";
        hardpoints[] = {"RHS_HP_AGM65", "RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65b";
    };
    class rhs_mag_agm65b_3: rhs_mag_agm65_x3 {
        scope = 2;
        displayName = "AGM-65B (LAU-88/A)";
        descriptionShort = "×3 TV-guided Maverick";
        displayNameShort = "TV";
        ammo = "rhs_ammo_agm65b";
        hardpoints[] = {"RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65b";
    };
    class rhs_mag_agm65d: rhs_mag_agm65 {
        scope = 2;
        displayName = "AGM-65D";
        displayNameShort = "IR";
        ammo = "rhs_ammo_agm65d";
        descriptionShort = "IR-guided Maverick";
        hardpoints[] = {"RHS_HP_AGM65", "RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65d";
    };
    class rhs_mag_agm65d_3: rhs_mag_agm65_x3 {
        scope = 2;
        displayName = "AGM-65D (LAU-88/A)";
        displayNameShort = "IR";
        descriptionShort = "×3 IR-guided Maverick";
        ammo = "rhs_ammo_agm65d";
        hardpoints[] = {"RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65d";
    };
    class rhs_mag_agm65e: rhs_mag_agm65 {
        scope = 2;
        displayName = "AGM-65E";
        displayNameShort = "LASER";
        descriptionShort = "Laser-guided Maverick";
        ammo = "rhs_ammo_agm65e";
        hardpoints[] = {"RHS_HP_AGM65", "RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65e";
    };
    class rhs_mag_agm65e_3: rhs_mag_agm65_x3 {
        scope = 2;
        displayName = "AGM-65E (LAU-88/A)";
        displayNameShort = "LASER";
        descriptionShort = "×3 Laser-guided Maverick";
        ammo = "rhs_ammo_agm65e";
        hardpoints[] = {"RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65e";
    };
    class rhs_mag_agm65f: rhs_mag_agm65 {
        scope = 2;
        displayName = "AGM-65F";
        displayNameShort = "IR";
        descriptionShort = "IR-guided Anti-Ship Maverick";
        ammo = "rhs_ammo_agm65f";
        hardpoints[] = {"RHS_HP_AGM65", "RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65f";
    };
    class rhs_mag_agm65f_3: rhs_mag_agm65_x3 {
        scope = 2;
        displayName = "AGM-65F (LAU-88/A)";
        displayNameShort = "IR";
        descriptionShort = "×3 IR-guided Anti-Ship Maverick";
        ammo = "rhs_ammo_agm65f";
        hardpoints[] = {"RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65f";
    };
    class rhs_mag_agm65h: rhs_mag_agm65 {
        scope = 2;
        displayName = "AGM-65H";
        displayNameShort = "CCD";
        descriptionShort = "Improved TV-guided Maverick";
        ammo = "rhs_ammo_agm65h";
        hardpoints[] = {"RHS_HP_AGM65", "RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65h";
    };
    class rhs_mag_agm65h_3: rhs_mag_agm65_x3 {
        scope = 2;
        displayName = "AGM-65H (LAU-88/A)";
        displayNameShort = "CCD";
        descriptionShort = "×3 Improved TV-guided Maverick";
        ammo = "rhs_ammo_agm65h";
        hardpoints[] = {"RHS_HP_AGM65_3x"};
        pylonWeapon = "rhs_weap_agm65h";
    };
    class rhs_mag_M151_7: VehicleMagazine {
        scope = 2;
        count = 7;
        initSpeed = 44;
        maxLeadSpeed = 200;
        nameSound = "rockets";
        weight = 48;
        ammo = "rhs_ammo_Hydra_M151";
        displayname = "M151 Hydra (M260)";
        displayNameShort = "HE";
        descriptionShort = "×7 10lb HE Hydra";
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x";
        hardpoints[] = {"RHS_HP_FFAR_ARMY", "RHS_HP_MELB"};
        pylonWeapon = "rhs_weap_FFARLauncher";
        displayNameMFDFormat = "RKT\%2\%1";
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "RKT";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class rhs_ah64_ammoname {
                class Bones {};
                class Draw {
                    condition = "pylonSelected";
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "6PD";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                    class PylonAmmo {
                        type = "text";
                        source = "ammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.015, 0.02}, 1};
                        right[] = {{0.06, 0.02}, 1};
                        down[] = {{0.015, 0.105}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_M151_7_green: rhs_mag_M151_7 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_green";
        displayname = "M151 Hydra (LAU-68)";
        hardpoints[] = {"RHS_HP_FFAR_USMC"};
    };
    class rhs_mag_M151_19: rhs_mag_M151_7 {
        count = 19;
        weight = 131;
        displayname = "M151 Hydra (M261)";
        descriptionShort = "×19 10lb HE Hydra";
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x";
        class mfdElements: mfdElements {
            class RHS_AH64_Weap_MFD {
                class Bones {};
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class BackgroundGroup {
                            color[] = {0, 0, 0};
                            class Background {
                                type = "polygon";
                                points[] = {{{{-0.035, -0.04}, 1}, {{0.035, -0.04}, 1}, {{0.035, 0.15}, 1}, {{-0.035, 0.15}, 1}}};
                            };
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.035, -0.04}, 1},
                                {{0.035, -0.04}, 1},
                                {{0.035, 0.15}, 1},
                                {{-0.035, 0.15}, 1},
                                {{-0.035, -0.04}, 1},
                                {},
                                {{-0.035, -0.04}, 1},
                                {{-0.0315, -0.04625}, 1},
                                {{-0.028, -0.0475}, 1},
                                {{-0.0245, -0.04625}, 1},
                                {{-0.021, -0.04}, 1},
                                {},
                                {{-0.021, -0.04}, 1},
                                {{-0.0175, -0.04625}, 1},
                                {{-0.014, -0.0475}, 1},
                                {{-0.0105, -0.04625}, 1},
                                {{-0.007, -0.04}, 1},
                                {},
                                {{-0.007, -0.04}, 1},
                                {{-0.0035, -0.04625}, 1},
                                {{0, -0.0475}, 1},
                                {{0.0035, -0.04625}, 1},
                                {{0.007, -0.04}, 1},
                                {},
                                {{0.007, -0.04}, 1},
                                {{0.0105, -0.04625}, 1},
                                {{0.014, -0.0475}, 1},
                                {{0.0175, -0.04625}, 1},
                                {{0.021, -0.04}, 1},
                                {},
                                {{0.021, -0.04}, 1},
                                {{0.0245, -0.04625}, 1},
                                {{0.028, -0.0475}, 1},
                                {{0.0315, -0.04625}, 1},
                                {{0.035, -0.04}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "6PD";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{"0.03+-0.03", 0.02}, 1};
                            right[] = {{0.025, 0.02}, 1};
                            down[] = {{"0.03+-0.03", 0.045}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        class Shape: Shape {
                            width = 8;
                        };
                        class BackgroundGroup: BackgroundGroup {
                            color[] = {0, 0.12, 0};
                            alpha = 0.3;
                            class Background: Background {};
                        };
                        class BlackText: Default {
                            color[] = {0, 0, 0};
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class BlackText: BlackText {
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                };
            };
            class RHS_AH64_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "6PD";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.03, 0.02}, 1};
                        down[] = {{0, 0.05}, 1};
                    };
                    class PylonAmo {
                        type = "text";
                        source = "pylonammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.03, 0.054}, 1};
                        down[] = {{0, 0.084}, 1};
                    };
                    class PylonSelected {
                        condition = "PylonSelected";
                        class Static {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.005, 0.005}, 1},
                                {{0.08, 0.005}, 1},
                                {{0.08, 0.095}, 1},
                                {{-0.005, 0.095}, 1},
                                {{-0.005, 0.005}, 1}
                            };
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class BackgroundGroup {
                            color[] = {0, 0, 0};
                            class Background {
                                type = "polygon";
                                points[] = {{{{-0.0225, -0.06}, 1}, {{0.0225, -0.06}, 1}, {{0.0225, 0.03}, 1}, {{-0.0225, 0.03}, 1}}};
                            };
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.0225, -0.06}, 1},
                                {{0.0225, -0.06}, 1},
                                {{0.0225, 0.03}, 1},
                                {{-0.0225, 0.03}, 1},
                                {{-0.0225, -0.06}, 1},
                                {},
                                {{-0.0225, -0.06}, 1},
                                {{-0.02025, -0.06625}, 1},
                                {{-0.018, -0.0675}, 1},
                                {{-0.01575, -0.06625}, 1},
                                {{-0.0135, -0.06}, 1},
                                {},
                                {{-0.0135, -0.06}, 1},
                                {{-0.01125, -0.06625}, 1},
                                {{-0.009, -0.0675}, 1},
                                {{-0.00675, -0.06625}, 1},
                                {{-0.0045, -0.06}, 1},
                                {},
                                {{-0.0045, -0.06}, 1},
                                {{-0.00225, -0.06625}, 1},
                                {{-0.00000000186265, -0.0675}, 1},
                                {{0.00225, -0.06625}, 1},
                                {{0.0045, -0.06}, 1},
                                {},
                                {{0.0045, -0.06}, 1},
                                {{0.00675, -0.06625}, 1},
                                {{0.009, -0.0675}, 1},
                                {{0.01125, -0.06625}, 1},
                                {{0.0135, -0.06}, 1},
                                {},
                                {{0.0135, -0.06}, 1},
                                {{0.01575, -0.06625}, 1},
                                {{0.018, -0.0675}, 1},
                                {{0.02025, -0.06625}, 1},
                                {{0.0225, -0.06}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "6PD";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{"0.03+-0.03", -0.01}, 1};
                            right[] = {{0.015, -0.01}, 1};
                            down[] = {{"0.03+-0.03", 0.005}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {
                            width = 8;
                        };
                        class BackgroundGroup: BackgroundGroup {
                            color[] = {0.99, 0.94, 0.59};
                            alpha = 0.1;
                            class Background: Background {};
                        };
                        class BlackText: Default {
                            color[] = {0, 0, 0};
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class BlackText: BlackText {
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "M151";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "6PD";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                    class PylonAmo {
                        type = "text";
                        source = "pylonammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.16, 0.054}, 1};
                        right[] = {{0.185, 0.054}, 1};
                        down[] = {{0.16, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_M151_19_green: rhs_mag_M151_19 {
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x_green";
        displayname = "M151 Hydra (LAU-61)";
        hardpoints[] = {"RHS_HP_FFAR_USMC"};
    };
    class rhs_mag_M229_7: rhs_mag_M151_7 {
        ammo = "rhs_ammo_Hydra_M229";
        displayname = "M229 Hydra (M260)";
        descriptionShort = "×7 17lb HE Hydra";
        pylonWeapon = "rhs_weap_FFARLauncher_M229";
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "RKT";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class rhs_ah64_ammoname {
                class Bones {};
                class Draw {
                    condition = "pylonSelected";
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "6RC";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                    class PylonAmmo {
                        type = "text";
                        source = "ammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.015, 0.02}, 1};
                        right[] = {{0.06, 0.02}, 1};
                        down[] = {{0.015, 0.105}, 1};
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class BackgroundGroup {
                            color[] = {0, 0, 0};
                            class Background {
                                type = "polygon";
                                points[] = {{{{-0.0225, -0.06}, 1}, {{0.0225, -0.06}, 1}, {{0.0225, 0.03}, 1}, {{-0.0225, 0.03}, 1}}};
                            };
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.0225, -0.06}, 1},
                                {{0.0225, -0.06}, 1},
                                {{0.0225, 0.03}, 1},
                                {{-0.0225, 0.03}, 1},
                                {{-0.0225, -0.06}, 1},
                                {},
                                {{-0.0225, -0.06}, 1},
                                {{-0.02025, -0.06625}, 1},
                                {{-0.018, -0.0675}, 1},
                                {{-0.01575, -0.06625}, 1},
                                {{-0.0135, -0.06}, 1},
                                {},
                                {{-0.0135, -0.06}, 1},
                                {{-0.01125, -0.06625}, 1},
                                {{-0.009, -0.0675}, 1},
                                {{-0.00675, -0.06625}, 1},
                                {{-0.0045, -0.06}, 1},
                                {},
                                {{-0.0045, -0.06}, 1},
                                {{-0.00225, -0.06625}, 1},
                                {{-0.00000000186265, -0.0675}, 1},
                                {{0.00225, -0.06625}, 1},
                                {{0.0045, -0.06}, 1},
                                {},
                                {{0.0045, -0.06}, 1},
                                {{0.00675, -0.06625}, 1},
                                {{0.009, -0.0675}, 1},
                                {{0.01125, -0.06625}, 1},
                                {{0.0135, -0.06}, 1},
                                {},
                                {{0.0135, -0.06}, 1},
                                {{0.01575, -0.06625}, 1},
                                {{0.018, -0.0675}, 1},
                                {{0.02025, -0.06625}, 1},
                                {{0.0225, -0.06}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "6RC";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{"0.03+-0.03", -0.01}, 1};
                            right[] = {{0.015, -0.01}, 1};
                            down[] = {{"0.03+-0.03", 0.005}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {
                            width = 8;
                        };
                        class BackgroundGroup: BackgroundGroup {
                            color[] = {0.99, 0.94, 0.59};
                            alpha = 0.1;
                            class Background: Background {};
                        };
                        class BlackText: Default {
                            color[] = {0, 0, 0};
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class BlackText: BlackText {
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "M229";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "6RC";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                    class PylonAmo {
                        type = "text";
                        source = "pylonammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.16, 0.054}, 1};
                        right[] = {{0.185, 0.054}, 1};
                        down[] = {{0.16, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_M229_7_green: rhs_mag_M151_7_green {
        ammo = "rhs_ammo_Hydra_M229";
        displayname = "M229 Hydra (LAU-68)";
        pylonWeapon = "rhs_weap_FFARLauncher_M229";
    };
    class rhs_mag_M229_19: rhs_mag_M151_19 {
        ammo = "rhs_ammo_Hydra_M229";
        displayname = "M229 Hydra (M261)";
        descriptionShort = "×19 17lb HE Hydra";
        pylonWeapon = "rhs_weap_FFARLauncher_M229";
        class mfdElements: mfdElements {
            class RHS_AH64_Weap_MFD {
                class Bones {};
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class BackgroundGroup {
                            color[] = {0, 0, 0};
                            class Background {
                                type = "polygon";
                                points[] = {{{{-0.035, -0.04}, 1}, {{0.035, -0.04}, 1}, {{0.035, 0.15}, 1}, {{-0.035, 0.15}, 1}}};
                            };
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.035, -0.04}, 1},
                                {{0.035, -0.04}, 1},
                                {{0.035, 0.15}, 1},
                                {{-0.035, 0.15}, 1},
                                {{-0.035, -0.04}, 1},
                                {},
                                {{-0.035, -0.04}, 1},
                                {{-0.0315, -0.04625}, 1},
                                {{-0.028, -0.0475}, 1},
                                {{-0.0245, -0.04625}, 1},
                                {{-0.021, -0.04}, 1},
                                {},
                                {{-0.021, -0.04}, 1},
                                {{-0.0175, -0.04625}, 1},
                                {{-0.014, -0.0475}, 1},
                                {{-0.0105, -0.04625}, 1},
                                {{-0.007, -0.04}, 1},
                                {},
                                {{-0.007, -0.04}, 1},
                                {{-0.0035, -0.04625}, 1},
                                {{0, -0.0475}, 1},
                                {{0.0035, -0.04625}, 1},
                                {{0.007, -0.04}, 1},
                                {},
                                {{0.007, -0.04}, 1},
                                {{0.0105, -0.04625}, 1},
                                {{0.014, -0.0475}, 1},
                                {{0.0175, -0.04625}, 1},
                                {{0.021, -0.04}, 1},
                                {},
                                {{0.021, -0.04}, 1},
                                {{0.0245, -0.04625}, 1},
                                {{0.028, -0.0475}, 1},
                                {{0.0315, -0.04625}, 1},
                                {{0.035, -0.04}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "6RC";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{"0.03+-0.03", 0.02}, 1};
                            right[] = {{0.025, 0.02}, 1};
                            down[] = {{"0.03+-0.03", 0.045}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        class Shape: Shape {
                            width = 8;
                        };
                        class BackgroundGroup: BackgroundGroup {
                            color[] = {0, 0.12, 0};
                            alpha = 0.3;
                            class Background: Background {};
                        };
                        class BlackText: Default {
                            color[] = {0, 0, 0};
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class BlackText: BlackText {
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                };
            };
            class RHS_AH64_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "6RC";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.03, 0.02}, 1};
                        down[] = {{0, 0.05}, 1};
                    };
                    class PylonAmo {
                        type = "text";
                        source = "pylonammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.03, 0.054}, 1};
                        down[] = {{0, 0.084}, 1};
                    };
                    class PylonSelected {
                        condition = "PylonSelected";
                        class Static {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.005, 0.005}, 1},
                                {{0.08, 0.005}, 1},
                                {{0.08, 0.095}, 1},
                                {{-0.005, 0.095}, 1},
                                {{-0.005, 0.005}, 1}
                            };
                        };
                    };
                };
            };
        };
    };
    class rhs_mag_M229_19_green: rhs_mag_M151_19_green {
        ammo = "rhs_ammo_Hydra_M229";
        displayname = "M229 Hydra (LAU-61)";
        pylonWeapon = "rhs_weap_FFARLauncher_M229";
    };
    class rhs_mag_M257_7: rhs_mag_M151_7 {
        ammo = "rhs_ammo_Hydra_M257";
        displayname = "M257 Hydra (M260)";
        displayNameShort = "ILLUM";
        descriptionShort = "×7 ILLUM Hydra";
        pylonWeapon = "rhs_weap_FFARLauncher_M257";
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "ILU";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class rhs_ah64_ammoname {
                class Bones {};
                class Draw {
                    condition = "pylonSelected";
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "ILU";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                    class PylonAmmo {
                        type = "text";
                        source = "ammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.015, 0.02}, 1};
                        right[] = {{0.06, 0.02}, 1};
                        down[] = {{0.015, 0.105}, 1};
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class BackgroundGroup {
                            color[] = {0, 0, 0};
                            class Background {
                                type = "polygon";
                                points[] = {{{{-0.0225, -0.06}, 1}, {{0.0225, -0.06}, 1}, {{0.0225, 0.03}, 1}, {{-0.0225, 0.03}, 1}}};
                            };
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.0225, -0.06}, 1},
                                {{0.0225, -0.06}, 1},
                                {{0.0225, 0.03}, 1},
                                {{-0.0225, 0.03}, 1},
                                {{-0.0225, -0.06}, 1},
                                {},
                                {{-0.0225, -0.06}, 1},
                                {{-0.02025, -0.06625}, 1},
                                {{-0.018, -0.0675}, 1},
                                {{-0.01575, -0.06625}, 1},
                                {{-0.0135, -0.06}, 1},
                                {},
                                {{-0.0135, -0.06}, 1},
                                {{-0.01125, -0.06625}, 1},
                                {{-0.009, -0.0675}, 1},
                                {{-0.00675, -0.06625}, 1},
                                {{-0.0045, -0.06}, 1},
                                {},
                                {{-0.0045, -0.06}, 1},
                                {{-0.00225, -0.06625}, 1},
                                {{-0.00000000186265, -0.0675}, 1},
                                {{0.00225, -0.06625}, 1},
                                {{0.0045, -0.06}, 1},
                                {},
                                {{0.0045, -0.06}, 1},
                                {{0.00675, -0.06625}, 1},
                                {{0.009, -0.0675}, 1},
                                {{0.01125, -0.06625}, 1},
                                {{0.0135, -0.06}, 1},
                                {},
                                {{0.0135, -0.06}, 1},
                                {{0.01575, -0.06625}, 1},
                                {{0.018, -0.0675}, 1},
                                {{0.02025, -0.06625}, 1},
                                {{0.0225, -0.06}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "ILU";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{"0.03+-0.03", -0.01}, 1};
                            right[] = {{0.015, -0.01}, 1};
                            down[] = {{"0.03+-0.03", 0.005}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {
                            width = 8;
                        };
                        class BackgroundGroup: BackgroundGroup {
                            color[] = {0.99, 0.94, 0.59};
                            alpha = 0.1;
                            class Background: Background {};
                        };
                        class BlackText: Default {
                            color[] = {0, 0, 0};
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class BlackText: BlackText {
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "M257";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "ILU";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                    class PylonAmo {
                        type = "text";
                        source = "pylonammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.16, 0.054}, 1};
                        right[] = {{0.185, 0.054}, 1};
                        down[] = {{0.16, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_M257_7_green: rhs_mag_M151_7_green {
        ammo = "rhs_ammo_Hydra_M257";
        displayname = "M257 Hydra (LAU-68)";
        displayNameShort = "ILLUM";
        descriptionShort = "×7 ILLUM Hydra";
        pylonWeapon = "rhs_weap_FFARLauncher_M257";
    };
    class rhs_mag_FFAR_7_USAF: VehicleMagazine {
        scope = 2;
        displayname = "M151 FFAR (LAU-68)";
        displayNameShort = "HE";
        descriptionShort = "×7 10lb HE FFAR";
        ammo = "rhs_ammo_FFAR_M151";
        count = 7;
        initSpeed = 44;
        maxLeadSpeed = 200;
        nameSound = "rockets";
        hardpoints[] = {"RHS_HP_FFAR_USAF", "RHS_HP_FFAR_USAF_green"};
        pylonWeapon = "rhs_weap_FFARLauncher";
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_LAU68";
        displayNameMFDFormat = "RKT\%2\%1";
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "RKT";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}, {{{0.02, -0.04}, 1}, {{0.05, -0.04}, 1}, {{0.05, 0.04}, 1}, {{0.02, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class BackgroundGroup {
                            color[] = {0, 0, 0};
                            class Background {
                                type = "polygon";
                                points[] = {{{{-0.0225, -0.06}, 1}, {{0.0225, -0.06}, 1}, {{0.0225, 0.03}, 1}, {{-0.0225, 0.03}, 1}}};
                            };
                        };
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{-0.0225, -0.06}, 1},
                                {{0.0225, -0.06}, 1},
                                {{0.0225, 0.03}, 1},
                                {{-0.0225, 0.03}, 1},
                                {{-0.0225, -0.06}, 1},
                                {},
                                {{-0.0225, -0.06}, 1},
                                {{-0.02025, -0.06625}, 1},
                                {{-0.018, -0.0675}, 1},
                                {{-0.01575, -0.06625}, 1},
                                {{-0.0135, -0.06}, 1},
                                {},
                                {{-0.0135, -0.06}, 1},
                                {{-0.01125, -0.06625}, 1},
                                {{-0.009, -0.0675}, 1},
                                {{-0.00675, -0.06625}, 1},
                                {{-0.0045, -0.06}, 1},
                                {},
                                {{-0.0045, -0.06}, 1},
                                {{-0.00225, -0.06625}, 1},
                                {{-0.00000000186265, -0.0675}, 1},
                                {{0.00225, -0.06625}, 1},
                                {{0.0045, -0.06}, 1},
                                {},
                                {{0.0045, -0.06}, 1},
                                {{0.00675, -0.06625}, 1},
                                {{0.009, -0.0675}, 1},
                                {{0.01125, -0.06625}, 1},
                                {{0.0135, -0.06}, 1},
                                {},
                                {{0.0135, -0.06}, 1},
                                {{0.01575, -0.06625}, 1},
                                {{0.018, -0.0675}, 1},
                                {{0.02025, -0.06625}, 1},
                                {{0.0225, -0.06}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "6RC";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{"0.03+-0.03", -0.01}, 1};
                            right[] = {{0.015, -0.01}, 1};
                            down[] = {{"0.03+-0.03", 0.005}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {
                            width = 8;
                        };
                        class BackgroundGroup: BackgroundGroup {
                            color[] = {0.99, 0.94, 0.59};
                            alpha = 0.1;
                            class Background: Background {};
                        };
                        class BlackText: Default {
                            color[] = {0, 0, 0};
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class BlackText: BlackText {
                            class PylonText1: PylonText1 {};
                            class PylonText2: PylonText1 {};
                            class PylonText3: PylonText1 {};
                            class PylonText4: PylonText1 {};
                            class PylonText5: PylonText1 {};
                            class PylonText6: PylonText1 {};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "M151";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "6RC";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                    class PylonAmo {
                        type = "text";
                        source = "pylonammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.16, 0.054}, 1};
                        right[] = {{0.185, 0.054}, 1};
                        down[] = {{0.16, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_FFAR_21_USAF_LAU68_3: rhs_mag_FFAR_7_USAF {
        count = 21;
        weight = 200;
        displayName = "M151 FFAR (BRU-42 + LAU-68)";
        descriptionShort = "×21 10lb HEDP FFAR";
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_r_lau68_3x";
        hardpoints[] = {"RHS_HP_FFAR_USAF_3x"};
    };
    class rhs_mag_FFAR_19_USAF: rhs_mag_FFAR_7_USAF {
        count = 19;
        weight = 131;
        displayName = "M151 FFAR (LAU-61)";
        descriptionShort = "×19 10lb HE FFAR";
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_19x_LAU61";
        hardpoints[] = {"RHS_HP_FFAR_HEAVY_USAF"};
    };
    class rhs_mag_FFAR_57_USAF_LAU61_3: rhs_mag_FFAR_7_USAF {
        count = 57;
        weight = 450;
        displayName = "M151 FFAR (BRU-42 + LAU-61)";
        descriptionShort = "×57 10lb HE FFAR";
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_r_lau61_3x";
        hardpoints[] = {"RHS_HP_FFAR_HEAVY_USAF_3x"};
    };
    class rhs_mag_M151_7_USAF_LAU131: rhs_mag_FFAR_7_USAF {
        displayname = "M151 Hydra (LAU-131)";
        descriptionShort = "×7 10lb HE Hydra";
        ammo = "rhs_ammo_Hydra_M151";
        hardpoints[] = {"RHS_HP_Hydra_USAF"};
        model = "\rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_r_FFAR_7x_LAU131";
    };
    class rhs_mag_M151_21_USAF_LAU131_3: rhs_mag_M151_7_USAF_LAU131 {
        count = 21;
        weight = 200;
        displayName = "M151 Hydra (BRU-42 + LAU-131)";
        descriptionShort = "×21 10lb HE Hydra";
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_r_lau131_3x";
        hardpoints[] = {"RHS_HP_Hydra_USAF_3x"};
    };
    class rhs_mag_M257_7_USAF_LAU131: rhs_mag_M151_7_USAF_LAU131 {
        displayname = "M257 Hydra (LAU-131)";
        displayNameShort = "ILLUM";
        descriptionShort = "×7 ILLUM Hydra";
        pylonWeapon = "rhs_weap_FFARLauncher_M257";
        ammo = "rhs_ammo_Hydra_M257";
    };
    class 4Rnd_Bomb_04_F;
    class 2Rnd_Mk82;
    class rhs_mag_mk82: 2Rnd_Mk82 {
        count = 1;
        displayName = "Mk82";
        descriptionShort = "500lb bomb";
        ammo = "rhs_ammo_mk82";
        model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
        hardpoints[] = {"RHS_HP_BOMB_500", "RHS_HP_LGB_500", "RHS_HP_JDAM_500"};
        pylonWeapon = "rhs_weap_mk82";
        displayNameMFDFormat = "MK82\%1";
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "BOMB";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.019, -0.07}, 1}, {{0.029, -0.07}, 1}, {{0.029, 0.05}, 1}, {{-0.019, 0.05}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.00859459, 0.0258108}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {},
                                {{-0.00302703, 0.0258108}, 1},
                                {{0.000486486, 0.0258108}, 1},
                                {},
                                {{-0.00762162, -0.0468919}, 1},
                                {{0.0167027, -0.0468919}, 1},
                                {},
                                {{-0.00762162, 0.00932432}, 1},
                                {{0.0167027, 0.00932432}, 1},
                                {},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.000756755, 0.0182432}, 1},
                                {{0.00291892, 0.0168919}, 1},
                                {{0.00454054, 0.0163513}, 1},
                                {{0.00859459, 0.0201351}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {},
                                {{0.00454054, 0.0528378}, 1},
                                {{0.00724325, 0.0517568}, 1},
                                {{0.00805406, 0.049054}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {{0.0196757, 0.0504054}, 1},
                                {{0.0196757, 0.0290541}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {{0.0167027, 0.00959459}, 1},
                                {{0.0167027, -0.0463514}, 1},
                                {{0.0167027, -0.0531081}, 1},
                                {{0.0153514, -0.0582432}, 1},
                                {{0.0137297, -0.0612162}, 1},
                                {{0.011027, -0.0636486}, 1},
                                {{0.00832433, -0.065}, 1},
                                {{0.00454054, -0.0655405}, 1},
                                {{0.000756755, -0.065}, 1},
                                {{-0.00194594, -0.0633784}, 1},
                                {{-0.00464865, -0.060946}, 1},
                                {{-0.00627027, -0.057973}, 1},
                                {{-0.00762162, -0.0531081}, 1},
                                {{-0.00762162, -0.0463514}, 1},
                                {{-0.00762162, 0.00959459}, 1},
                                {{-0.00302703, 0.0258108}, 1},
                                {{-0.0103243, 0.0293243}, 1},
                                {{-0.0103243, 0.0498649}, 1},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.00454054, 0.0528378}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "MK-82";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "FIXED";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_mk82_3: rhs_mag_mk82 {
        count = 3;
        displayName = "Mk82 (BRU-42)";
        descriptionShort = "×3 500lb bomb";
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_mk82_3x";
        hardpoints[] = {"RHS_HP_BOMB_500_3x", "RHS_HP_LGB_500_3x", "RHS_HP_JDAM_500_3x"};
        mirrorMissilesIndexes[] = {2, 1, 3};
        class mfdElements: mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "MK-82";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}, {{{0.02, -0.04}, 1}, {{0.05, -0.04}, 1}, {{0.05, 0.04}, 1}, {{0.02, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.019, -0.07}, 1}, {{0.029, -0.07}, 1}, {{0.029, 0.05}, 1}, {{-0.019, 0.05}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.00859459, 0.0258108}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {},
                                {{-0.00302703, 0.0258108}, 1},
                                {{0.000486486, 0.0258108}, 1},
                                {},
                                {{-0.00762162, -0.0468919}, 1},
                                {{0.0167027, -0.0468919}, 1},
                                {},
                                {{-0.00762162, 0.00932432}, 1},
                                {{0.0167027, 0.00932432}, 1},
                                {},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.000756755, 0.0182432}, 1},
                                {{0.00291892, 0.0168919}, 1},
                                {{0.00454054, 0.0163513}, 1},
                                {{0.00859459, 0.0201351}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {},
                                {{0.00454054, 0.0528378}, 1},
                                {{0.00724325, 0.0517568}, 1},
                                {{0.00805406, 0.049054}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {{0.0196757, 0.0504054}, 1},
                                {{0.0196757, 0.0290541}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {{0.0167027, 0.00959459}, 1},
                                {{0.0167027, -0.0463514}, 1},
                                {{0.0167027, -0.0531081}, 1},
                                {{0.0153514, -0.0582432}, 1},
                                {{0.0137297, -0.0612162}, 1},
                                {{0.011027, -0.0636486}, 1},
                                {{0.00832433, -0.065}, 1},
                                {{0.00454054, -0.0655405}, 1},
                                {{0.000756755, -0.065}, 1},
                                {{-0.00194594, -0.0633784}, 1},
                                {{-0.00464865, -0.060946}, 1},
                                {{-0.00627027, -0.057973}, 1},
                                {{-0.00762162, -0.0531081}, 1},
                                {{-0.00762162, -0.0463514}, 1},
                                {{-0.00762162, 0.00959459}, 1},
                                {{-0.00302703, 0.0258108}, 1},
                                {{-0.0103243, 0.0293243}, 1},
                                {{-0.0103243, 0.0498649}, 1},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.00454054, 0.0528378}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "MK82";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "FIXED";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_gbu12: 4Rnd_Bomb_04_F {
        count = 1;
        displayName = "GBU-12";
        descriptionShort = "500lb Paveway II";
        ammo = "rhs_ammo_gbu12";
        model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
        hardpoints[] = {"RHS_HP_LGB_500"};
        pylonWeapon = "rhs_weap_gbu12";
        displayNameMFDFormat = "GBU12\%1";
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "GBU";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.02, -0.08}, 1}, {{0.03, -0.08}, 1}, {{0.03, 0.06}, 1}, {{-0.02, 0.06}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.00825, 0.0265625}, 1},
                                {{0.0123125, 0.0265625}, 1},
                                {},
                                {{-0.0051875, 0.0265625}, 1},
                                {{-0.001125, 0.0265625}, 1},
                                {},
                                {{-0.0105, -0.0575}, 1},
                                {{0.017625, -0.0575}, 1},
                                {},
                                {{-0.0105, 0.00749999}, 1},
                                {{0.017625, 0.00749999}, 1},
                                {},
                                {{-0.000812501, 0.050625}, 1},
                                {{-0.000812501, 0.0178125}, 1},
                                {{0.0016875, 0.01625}, 1},
                                {{0.0035625, 0.015625}, 1},
                                {{0.00825, 0.02}, 1},
                                {{0.007625, 0.0503125}, 1},
                                {},
                                {{0.0035625, 0.0578125}, 1},
                                {{0.0066875, 0.0565625}, 1},
                                {{0.007625, 0.0534375}, 1},
                                {{0.007625, 0.0503125}, 1},
                                {{0.0210625, 0.055}, 1},
                                {{0.0210625, 0.0303125}, 1},
                                {{0.0123125, 0.0265625}, 1},
                                {{0.017625, 0.0078125}, 1},
                                {{0.017625, -0.056875}, 1},
                                {{0.017625, -0.0646875}, 1},
                                {{0.0160625, -0.070625}, 1},
                                {{0.0141875, -0.0740625}, 1},
                                {{0.0110625, -0.076875}, 1},
                                {{0.0079375, -0.0784375}, 1},
                                {{0.0035625, -0.0790625}, 1},
                                {{-0.000812501, -0.0784375}, 1},
                                {{-0.00393751, -0.0765625}, 1},
                                {{-0.0070625, -0.07375}, 1},
                                {{-0.0089375, -0.0703125}, 1},
                                {{-0.0105, -0.0646875}, 1},
                                {{-0.0105, -0.056875}, 1},
                                {{-0.0105, 0.0078125}, 1},
                                {{-0.0051875, 0.0265625}, 1},
                                {{-0.013625, 0.030625}, 1},
                                {{-0.013625, 0.054375}, 1},
                                {{-0.000812501, 0.050625}, 1},
                                {{0.0035625, 0.0578125}, 1}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "GBU-12";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LOAL";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_gbu32: 4Rnd_Bomb_04_F {
        count = 1;
        displayName = "GBU-32";
        descriptionShort = "1000lb JDAM";
        ammo = "rhs_ammo_gbu32";
        model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
        hardpoints[] = {"RHS_HP_JDAM_1000"};
        pylonWeapon = "rhs_weap_gbu32";
        displayNameMFDFormat = "GBU32\%1";
        mass = 459;
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "GBU";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class rhs_f22_pylon {
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Center {
                        type = "fixed";
                        pos[] = {0, 0};
                    };
                };
                class Draw {
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0.15, 1, 0.15};
                        alpha = 0.22;
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Center", {0, -0.0257161}, 1},
                                {"Center", {0.0125, -0.0222702}, 1},
                                {"Center", {0.02165, -0.0128581}, 1},
                                {"Center", {0.025, 0}, 1},
                                {"Center", {0.02165, 0.0128581}, 1},
                                {"Center", {0.0125, 0.0222702}, 1},
                                {"Center", {0, 0.0257161}, 1},
                                {"Center", {-0.0125, 0.0222702}, 1},
                                {"Center", {-0.02165, 0.0128581}, 1},
                                {"Center", {-0.025, 0}, 1},
                                {"Center", {-0.02165, -0.0128581}, 1},
                                {"Center", {-0.0125, -0.0222702}, 1},
                                {"Center", {0, -0.0257161}, 1},
                                {}
                            };
                        };
                        class PylonText1 {
                            type = "text";
                            source = "static";
                            text = "G";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {"Center", 1, {-0, -0.015}, 1};
                            right[] = {"Center", 1, {0.03, -0.015}, 1};
                            down[] = {"Center", 1, {-0, 0.02}, 1};
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        alpha = 1;
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background {
                            type = "polygon";
                            points[] = {
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0176777, -0.0181841}, 1}, {"Center", {0.025, 0.00000000112409}, 1}, {"Center", {0.0176777, 0.0181841}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {0.0176777, 0.0181841}, 1}, {"Center", {-0.00000000218557, 0.0257161}, 1}, {"Center", {-0.0176777, 0.0181841}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0176777, 0.0181841}, 1}, {"Center", {-0.025, -0.000000000306662}, 1}, {"Center", {-0.0176777, -0.0181841}, 1}},
                                {{"Center", 1, {0, 0}, 1}, {"Center", {-0.0176777, -0.0181841}, 1}, {"Center", {0.00000000437114, -0.0257161}, 1}, {"Center", {0.0176777, -0.0181841}, 1}}
                            };
                        };
                    };
                    class Empty: Selected {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                        class PylonText1: PylonText1 {};
                        class Background: Background {};
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.02, -0.08}, 1}, {{0.03, -0.08}, 1}, {{0.03, 0.06}, 1}, {{-0.02, 0.06}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.00825, 0.0265625}, 1},
                                {{0.0123125, 0.0265625}, 1},
                                {},
                                {{-0.0051875, 0.0265625}, 1},
                                {{-0.001125, 0.0265625}, 1},
                                {},
                                {{-0.0105, -0.0575}, 1},
                                {{0.017625, -0.0575}, 1},
                                {},
                                {{-0.0105, 0.00749999}, 1},
                                {{0.017625, 0.00749999}, 1},
                                {},
                                {{-0.000812501, 0.050625}, 1},
                                {{-0.000812501, 0.0178125}, 1},
                                {{0.0016875, 0.01625}, 1},
                                {{0.0035625, 0.015625}, 1},
                                {{0.00825, 0.02}, 1},
                                {{0.007625, 0.0503125}, 1},
                                {},
                                {{0.0035625, 0.0578125}, 1},
                                {{0.0066875, 0.0565625}, 1},
                                {{0.007625, 0.0534375}, 1},
                                {{0.007625, 0.0503125}, 1},
                                {{0.0210625, 0.055}, 1},
                                {{0.0210625, 0.0303125}, 1},
                                {{0.0123125, 0.0265625}, 1},
                                {{0.017625, 0.0078125}, 1},
                                {{0.017625, -0.056875}, 1},
                                {{0.017625, -0.0646875}, 1},
                                {{0.0160625, -0.070625}, 1},
                                {{0.0141875, -0.0740625}, 1},
                                {{0.0110625, -0.076875}, 1},
                                {{0.0079375, -0.0784375}, 1},
                                {{0.0035625, -0.0790625}, 1},
                                {{-0.000812501, -0.0784375}, 1},
                                {{-0.00393751, -0.0765625}, 1},
                                {{-0.0070625, -0.07375}, 1},
                                {{-0.0089375, -0.0703125}, 1},
                                {{-0.0105, -0.0646875}, 1},
                                {{-0.0105, -0.056875}, 1},
                                {{-0.0105, 0.0078125}, 1},
                                {{-0.0051875, 0.0265625}, 1},
                                {{-0.013625, 0.030625}, 1},
                                {{-0.013625, 0.054375}, 1},
                                {{-0.000812501, 0.050625}, 1},
                                {{0.0035625, 0.0578125}, 1}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "GBU-32";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "GPS-INS";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_cbu87: rhs_mag_mk82 {
        ammo = "rhs_ammo_cbu87";
        displayname = "CBU-87";
        displayNameShort = "Cluster CEM";
        descriptionShort = "SUU-65/B Dispenser (×101 BLU-97B/B CEM)";
        hardpoints[] = {"RHS_HP_BOMB_1000", "RHS_HP_LGB_1000"};
        pylonWeapon = "rhs_weap_cbu87";
        displayNameMFDFormat = "CBU87\%1";
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "GBU-32";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.019, -0.07}, 1}, {{0.029, -0.07}, 1}, {{0.029, 0.05}, 1}, {{-0.019, 0.05}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.00859459, 0.0258108}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {},
                                {{-0.00302703, 0.0258108}, 1},
                                {{0.000486486, 0.0258108}, 1},
                                {},
                                {{-0.00762162, -0.0468919}, 1},
                                {{0.0167027, -0.0468919}, 1},
                                {},
                                {{-0.00762162, 0.00932432}, 1},
                                {{0.0167027, 0.00932432}, 1},
                                {},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.000756755, 0.0182432}, 1},
                                {{0.00291892, 0.0168919}, 1},
                                {{0.00454054, 0.0163513}, 1},
                                {{0.00859459, 0.0201351}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {},
                                {{0.00454054, 0.0528378}, 1},
                                {{0.00724325, 0.0517568}, 1},
                                {{0.00805406, 0.049054}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {{0.0196757, 0.0504054}, 1},
                                {{0.0196757, 0.0290541}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {{0.0167027, 0.00959459}, 1},
                                {{0.0167027, -0.0463514}, 1},
                                {{0.0167027, -0.0531081}, 1},
                                {{0.0153514, -0.0582432}, 1},
                                {{0.0137297, -0.0612162}, 1},
                                {{0.011027, -0.0636486}, 1},
                                {{0.00832433, -0.065}, 1},
                                {{0.00454054, -0.0655405}, 1},
                                {{0.000756755, -0.065}, 1},
                                {{-0.00194594, -0.0633784}, 1},
                                {{-0.00464865, -0.060946}, 1},
                                {{-0.00627027, -0.057973}, 1},
                                {{-0.00762162, -0.0531081}, 1},
                                {{-0.00762162, -0.0463514}, 1},
                                {{-0.00762162, 0.00959459}, 1},
                                {{-0.00302703, 0.0258108}, 1},
                                {{-0.0103243, 0.0293243}, 1},
                                {{-0.0103243, 0.0498649}, 1},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.00454054, 0.0528378}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "CBU-87";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LOAL";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_cbu87_3: rhs_mag_mk82_3 {
        ammo = "rhs_ammo_cbu87";
        displayname = "CBU-87 (BRU-42)";
        displayNameShort = "Cluster CEM";
        descriptionShort = "×3 SUU-65/B Dispenser (×101 BLU-97B/B CEM)";
        hardpoints[] = {"RHS_HP_BOMB_1000_3x", "RHS_HP_LGB_1000_3x"};
        pylonWeapon = "rhs_weap_cbu87";
        displayNameMFDFormat = "CBU87\%1";
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "CBU-87";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.019, -0.07}, 1}, {{0.029, -0.07}, 1}, {{0.029, 0.05}, 1}, {{-0.019, 0.05}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.00859459, 0.0258108}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {},
                                {{-0.00302703, 0.0258108}, 1},
                                {{0.000486486, 0.0258108}, 1},
                                {},
                                {{-0.00762162, -0.0468919}, 1},
                                {{0.0167027, -0.0468919}, 1},
                                {},
                                {{-0.00762162, 0.00932432}, 1},
                                {{0.0167027, 0.00932432}, 1},
                                {},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.000756755, 0.0182432}, 1},
                                {{0.00291892, 0.0168919}, 1},
                                {{0.00454054, 0.0163513}, 1},
                                {{0.00859459, 0.0201351}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {},
                                {{0.00454054, 0.0528378}, 1},
                                {{0.00724325, 0.0517568}, 1},
                                {{0.00805406, 0.049054}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {{0.0196757, 0.0504054}, 1},
                                {{0.0196757, 0.0290541}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {{0.0167027, 0.00959459}, 1},
                                {{0.0167027, -0.0463514}, 1},
                                {{0.0167027, -0.0531081}, 1},
                                {{0.0153514, -0.0582432}, 1},
                                {{0.0137297, -0.0612162}, 1},
                                {{0.011027, -0.0636486}, 1},
                                {{0.00832433, -0.065}, 1},
                                {{0.00454054, -0.0655405}, 1},
                                {{0.000756755, -0.065}, 1},
                                {{-0.00194594, -0.0633784}, 1},
                                {{-0.00464865, -0.060946}, 1},
                                {{-0.00627027, -0.057973}, 1},
                                {{-0.00762162, -0.0531081}, 1},
                                {{-0.00762162, -0.0463514}, 1},
                                {{-0.00762162, 0.00959459}, 1},
                                {{-0.00302703, 0.0258108}, 1},
                                {{-0.0103243, 0.0293243}, 1},
                                {{-0.0103243, 0.0498649}, 1},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.00454054, 0.0528378}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "CBU-87";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LOAL";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_cbu89: rhs_mag_cbu87 {
        ammo = "rhs_ammo_cbu89";
        displayname = "CBU-89";
        displayNameShort = "Cluster Mine";
        descriptionShort = "SUU-64/B Dispenser (×71 BLU-91/B AT & ×22 BLU-92/B APERS mines)";
        pylonWeapon = "rhs_weap_cbu89";
        displayNameMFDFormat = "CBU89\%1";
    };
    class rhs_mag_cbu89_3: rhs_mag_cbu87_3 {
        ammo = "rhs_ammo_cbu89";
        displayname = "CBU-89 (BRU-42)";
        displayNameShort = "Cluster Mine";
        descriptionShort = "×3 SUU-64/B Dispenser (×71 BLU-91/B AT & ×22 BLU-92/B APERS mines)";
        pylonWeapon = "rhs_weap_cbu89";
        displayNameMFDFormat = "CBU89\%1";
    };
    class rhs_mag_cbu100: rhs_mag_mk82 {
        ammo = "rhs_ammo_cbu100";
        displayname = "CBU-100";
        displayNameShort = "Cluster HEAT";
        descriptionShort = "SUU-76/B Dispenser (×123 Mk 118 HEAT)";
        pylonWeapon = "rhs_weap_cbu100";
        displayNameMFDFormat = "CBU100\%1";
        hardpoints[] = {"RHS_HP_BOMB_500", "RHS_HP_LGB_500"};
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "CBU";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.019, -0.07}, 1}, {{0.029, -0.07}, 1}, {{0.029, 0.05}, 1}, {{-0.019, 0.05}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.00859459, 0.0258108}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {},
                                {{-0.00302703, 0.0258108}, 1},
                                {{0.000486486, 0.0258108}, 1},
                                {},
                                {{-0.00762162, -0.0468919}, 1},
                                {{0.0167027, -0.0468919}, 1},
                                {},
                                {{-0.00762162, 0.00932432}, 1},
                                {{0.0167027, 0.00932432}, 1},
                                {},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.000756755, 0.0182432}, 1},
                                {{0.00291892, 0.0168919}, 1},
                                {{0.00454054, 0.0163513}, 1},
                                {{0.00859459, 0.0201351}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {},
                                {{0.00454054, 0.0528378}, 1},
                                {{0.00724325, 0.0517568}, 1},
                                {{0.00805406, 0.049054}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {{0.0196757, 0.0504054}, 1},
                                {{0.0196757, 0.0290541}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {{0.0167027, 0.00959459}, 1},
                                {{0.0167027, -0.0463514}, 1},
                                {{0.0167027, -0.0531081}, 1},
                                {{0.0153514, -0.0582432}, 1},
                                {{0.0137297, -0.0612162}, 1},
                                {{0.011027, -0.0636486}, 1},
                                {{0.00832433, -0.065}, 1},
                                {{0.00454054, -0.0655405}, 1},
                                {{0.000756755, -0.065}, 1},
                                {{-0.00194594, -0.0633784}, 1},
                                {{-0.00464865, -0.060946}, 1},
                                {{-0.00627027, -0.057973}, 1},
                                {{-0.00762162, -0.0531081}, 1},
                                {{-0.00762162, -0.0463514}, 1},
                                {{-0.00762162, 0.00959459}, 1},
                                {{-0.00302703, 0.0258108}, 1},
                                {{-0.0103243, 0.0293243}, 1},
                                {{-0.0103243, 0.0498649}, 1},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.00454054, 0.0528378}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "CBU-100";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LOAL";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_cbu100_3: rhs_mag_mk82_3 {
        ammo = "rhs_ammo_cbu100";
        displayname = "CBU-100 (BRU-42)";
        displayNameShort = "Cluster HEAT";
        descriptionShort = "×3 SUU-76/B Dispenser (×123 Mk 118 HEAT)";
        pylonWeapon = "rhs_weap_cbu100";
        displayNameMFDFormat = "CBU100\%1";
        hardpoints[] = {"RHS_HP_BOMB_500_3x", "RHS_HP_LGB_500_3x"};
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "CBU-100";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
            class RHS_A29_Weap_MFD {
                class Bones {};
                class Draw {
                    class BackgroundGroup {
                        color[] = {0, 0, 0};
                        class Background {
                            type = "polygon";
                            points[] = {{{{-0.019, -0.07}, 1}, {{0.029, -0.07}, 1}, {{0.029, 0.05}, 1}, {{-0.019, 0.05}, 1}}};
                        };
                    };
                    class Default {
                        condition = "PylonAmmoRelative>0";
                        color[] = {0, 0.12, 0};
                        class Shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{0.00859459, 0.0258108}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {},
                                {{-0.00302703, 0.0258108}, 1},
                                {{0.000486486, 0.0258108}, 1},
                                {},
                                {{-0.00762162, -0.0468919}, 1},
                                {{0.0167027, -0.0468919}, 1},
                                {},
                                {{-0.00762162, 0.00932432}, 1},
                                {{0.0167027, 0.00932432}, 1},
                                {},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.000756755, 0.0182432}, 1},
                                {{0.00291892, 0.0168919}, 1},
                                {{0.00454054, 0.0163513}, 1},
                                {{0.00859459, 0.0201351}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {},
                                {{0.00454054, 0.0528378}, 1},
                                {{0.00724325, 0.0517568}, 1},
                                {{0.00805406, 0.049054}, 1},
                                {{0.00805406, 0.0463514}, 1},
                                {{0.0196757, 0.0504054}, 1},
                                {{0.0196757, 0.0290541}, 1},
                                {{0.0121081, 0.0258108}, 1},
                                {{0.0167027, 0.00959459}, 1},
                                {{0.0167027, -0.0463514}, 1},
                                {{0.0167027, -0.0531081}, 1},
                                {{0.0153514, -0.0582432}, 1},
                                {{0.0137297, -0.0612162}, 1},
                                {{0.011027, -0.0636486}, 1},
                                {{0.00832433, -0.065}, 1},
                                {{0.00454054, -0.0655405}, 1},
                                {{0.000756755, -0.065}, 1},
                                {{-0.00194594, -0.0633784}, 1},
                                {{-0.00464865, -0.060946}, 1},
                                {{-0.00627027, -0.057973}, 1},
                                {{-0.00762162, -0.0531081}, 1},
                                {{-0.00762162, -0.0463514}, 1},
                                {{-0.00762162, 0.00959459}, 1},
                                {{-0.00302703, 0.0258108}, 1},
                                {{-0.0103243, 0.0293243}, 1},
                                {{-0.0103243, 0.0498649}, 1},
                                {{0.000756755, 0.0466216}, 1},
                                {{0.00454054, 0.0528378}, 1},
                                {}
                            };
                        };
                    };
                    class Selected: Default {
                        condition = "(PylonSelected +  PylonAmmoRelative)/2";
                        color[] = {0.99, 0.94, 0.59};
                        class Shape: Shape {};
                    };
                    class Empty: Default {
                        condition = "PylonAmmoRelative <= 0";
                        color[] = {1, 0, 0, 1};
                        class Shape: Shape {};
                    };
                };
            };
            class RHS_A29_Weap_MFD_Inventory {
                class Bones {};
                class Draw {
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "CBU-100";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.02}, 1};
                        right[] = {{0.025, 0.02}, 1};
                        down[] = {{0, 0.04}, 1};
                    };
                    class PylonText2 {
                        type = "text";
                        source = "static";
                        text = "LOAL";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0, 0.054}, 1};
                        right[] = {{0.025, 0.054}, 1};
                        down[] = {{0, 0.074}, 1};
                    };
                };
            };
        };
    };
    class rhs_mag_ANALQ131: VehicleMagazine {
        scope = 2;
        ammo = "rhs_ammo_ANALQ131";
        displayName = "AN/ALQ-131(V)";
        descriptionShort = "Electronic Countermeasures (ECM) Pod";
        count = 1;
        initSpeed = 0;
        sound[] = {};
        reloadSound[] = {};
        nameSound = "";
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_ALQ_131";
        pylonweapon = "rhsusf_weap_DummyLauncher";
        hardpoints[] = {"RHS_HP_ECM"};
        class mfdElements {
            class rhs_a10a_ammoname {
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 1;
                    class PylonText1 {
                        type = "text";
                        source = "static";
                        text = "ECM";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.005, 0.02}, 1};
                        right[] = {{0.05, 0.02}, 1};
                        down[] = {{0.005, 0.105}, 1};
                    };
                };
            };
            class rhs_a10a_box {
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    class Default {
                        condition = "PylonAmmoRelative>=0.001";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, -0.04}, 1}, {{0.015, -0.04}, 1}, {{0.015, 0.04}, 1}, {{-0.015, 0.04}, 1}}};
                        };
                    };
                    class Selected {
                        condition = "PylonSelected*(PylonAmmoRelative>=0.001)";
                        color[] = {0.15, 1, 0.15, 1};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{-0.015, 0.05}, 1}, {{0.015, 0.05}, 1}, {{0.015, 0.13}, 1}, {{-0.015, 0.13}, 1}}};
                        };
                    };
                    class Empty {
                        condition = "PylonAmmoRelative<=0";
                        color[] = {0.87, 0, 0};
                        alpha = 0.22;
                        class Shape {
                            type = "polygon";
                            width = 4;
                            points[] = {{{{0.02, 0.05}, 1}, {{0.05, 0.05}, 1}, {{0.05, 0.13}, 1}, {{0.02, 0.13}, 1}}};
                        };
                    };
                };
            };
        };
    };
    class rhs_mag_fueltank_UH60: VehicleMagazine {
        scope = 2;
        ammo = "rhs_ammo_ANALQ131";
        displayName = "Fuel Tank (empty)";
        count = 1;
        initSpeed = 0;
        sound[] = {};
        reloadSound[] = {};
        nameSound = "";
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhs_pylon_Fuel_UH60";
        pylonweapon = "rhsusf_weap_DummyLauncher";
        hardpoints[] = {"RHS_HP_Fuel_ARMY"};
    };
    class rhs_mag_fueltank_UH60MEV: rhs_mag_fueltank_UH60 {
        model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhs_pylon_Fuel_UH60MEV";
        hardpoints[] = {"RHS_HP_Fuel_ARMY_MEV"};
        displayName = "Fuel Tank (MEV)";
    };
    class rhsusf_20mm_M61A2: VehicleMagazine {
        scope = 2;
        displayName = "M61A2";
        displayNameMFDFormat = "M61A2: %1";
        ammo = "rhsusf_ammo_M61A2";
        count = 480;
        initSpeed = 1080;
    };
    class rhs_mag_gau19_air_base: VehicleMagazine {
        scope = 0;
        ammo = "rhs_ammo_127x99_SLAP_Tracer_Red";
        count = 1300;
        displayname = "GAU-19/A";
        displayNameShort = "12.7x99mm";
        descriptionShort = "×1300 12.7×99mm M962 (SLAP-T)";
        initspeed = 1210;
        maxleadspeed = 200;
        pylonWeapon = "RHS_weap_gau19";
        muzzlePos = "muzzlePos";
        muzzleEnd = "muzzleEnd";
        weight = 200;
        mass = 200;
        tracersEvery = 1;
    };
    class rhsusf_mag_gau19_melb_right: rhs_mag_gau19_air_base {
        scope = 2;
        hardpoints[] = {"RHS_HP_MELB_R"};
        model = "\rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_GAU19_R";
    };
    class rhsusf_mag_gau19_melb_left: rhs_mag_gau19_air_base {
        scope = 2;
        hardpoints[] = {"RHS_HP_MELB_L"};
        model = "\rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_GAU19_L";
    };
    class rhs_mag_m134_pylon_base: VehicleMagazine {
        scope = 0;
        ammo = "rhs_ammo_762x51_M61_AP";
        displayname = "M134";
        displayNameShort = "7.62x51 mm";
        initspeed = 910;
        pylonWeapon = "RHS_weap_m134_pylon";
        muzzlePos = "muzzlePos";
        muzzleEnd = "muzzleEnd";
        weight = 180;
        mass = 180;
        tracersEvery = 3;
        lastRoundsTracer = 4;
        model = "\rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_m134";
    };
    class rhs_mag_m134_pylon_3000: rhs_mag_m134_pylon_base {
        descriptionShort = "×3000 7.62×51mm M61/M62 (AP/T)";
        scope = 2;
        hardpoints[] = {"RHS_HP_MELB_M134"};
        count = 3000;
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons {
    class RocketPods;
    class MissileLauncher;
    class missiles_DAR;
    class rhsusf_weap_DummyLauncher: MissileLauncher {
        showToPlayer = 0;
        magazines[] = {"rhs_mag_ANALQ131", "rhs_mag_fueltank_UH60", "rhs_mag_fueltank_UH60MEV"};
    };
    class rhs_weap_SidewinderLauncher: MissileLauncher {
        scope = 2;
        displayName = "AIM-9X";
        displayNameMagazine = "AIM-9X";
        shortNameMagazine = "AIM-9X";
        minRange = 300;
        minRangeProbab = 0.25;
        midRange = 2500;
        midRangeProbab = 0.9;
        maxRange = 9000;
        maxRangeProbab = 0.3;
        sounds[] = {"StandardSound"};
        holdsterAnimValue = 1;
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "A3\Sounds_F\weapons\Rockets\missile_2",
                1.1220185,
                1.3,
                1000
            };
            soundBegin[] = {"begin1", 1};
        };
        lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 1.316228, 1};
        lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 1.316228, 2.5};
        weaponSoundEffect = "DefaultRifle";
        reloadTime = 0.1;
        magazineReloadTime = 30;
        magazines[] = {
            "rhs_mag_Sidewinder",
            "rhs_mag_Sidewinder_2",
            "rhs_mag_Sidewinder_int",
            "rhs_mag_Sidewinder_heli",
            "rhs_mag_Sidewinder_heli_2"
        };
        cursorSize = 0;
        cursor = "missile";
        cursorAim = "EmptyCursor";
        aiRateOfFire = 5;
        aiRateOfFireDistance = 2000;
        canLock = 2;
        weaponLockDelay = 3;
        weaponLockSystem = 2;
    };
    class rhs_weap_AIM9M: rhs_weap_SidewinderLauncher {
        displayName = "AIM-9M";
        displayNameMagazine = "AIM-9M";
        shortNameMagazine = "AIM-9M";
        magazines[] = {
            "rhs_mag_Sidewinder_heli",
            "rhs_mag_Sidewinder_heli_2",
            "rhs_mag_aim9m",
            "rhs_mag_aim9m_2",
            "rhs_mag_aim9m_int"
        };
    };
    class rhs_weap_AIM120: rhs_weap_SidewinderLauncher {
        displayName = "AIM-120";
        displayNameMagazine = "AIM-120";
        shortNameMagazine = "AIM-120";
        magazineReloadTime = 0.1;
        weaponLockSystem = 8;
        minRange = 2000;
        minRangeProbab = 0.25;
        midRange = 6500;
        midRangeProbab = 0.9;
        maxRange = 22000;
        maxRangeProbab = 0.3;
        magazines[] = {"rhs_mag_aim120"};
    };
    class rhs_weap_AIM120D: rhs_weap_AIM120 {
        displayName = "AIM-120D";
        displayNameMagazine = "AIM-120D";
        shortNameMagazine = "AIM-120D";
        magazineReloadTime = 0.1;
        maxRange = 28000;
        magazines[] = {
            "rhs_mag_aim120d",
            "rhs_mag_aim120d_int",
            "rhs_mag_aim120d_2_F22_l",
            "rhs_mag_aim120d_2_F22_r"
        };
    };
    class rhs_weap_FFARLauncher: RocketPods {
        magazines[] = {
            "rhs_mag_M151_19",
            "rhs_mag_M151_19_green",
            "rhs_mag_M151_7",
            "rhs_mag_M151_7_green",
            "rhs_mag_M151_7_USAF_LAU131",
            "rhs_mag_M151_21_USAF_LAU131_3",
            "rhs_mag_FFAR_7_USAF",
            "rhs_mag_FFAR_21_USAF_LAU68_3",
            "rhs_mag_FFAR_19_USAF",
            "rhs_mag_FFAR_57_USAF_LAU61_3"
        };
        displayName = "Hydra (M151 HE)";
        modes[] = {
            "Far_AI",
            "Single",
            "Two",
            "Four",
            "Eight",
            "Twelve",
            "TwentyFour",
            "Burst"
        };
        cursor = "rocket";
        cursorAim = "EmptyCursor";
        cursorSize = 0;
        class Far_AI: RocketPods {
            displayName = "Hydra";
            burst = 1;
            reloadTime = 0.08;
            autoFire = 0;
            showToPlayer = 0;
            soundBurst = 0;
            dispersion = 0.011;
            minRange = 150;
            minRangeProbab = 0.6;
            midRange = 600;
            midRangeProbab = 0.9;
            maxRange = 2500;
            maxRangeProbab = 0.12;
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "\rhsusf\addons\rhsusf_a2port_air\data\Sounds\RocketLauncher_Shot21",
                    3.2,
                    1,
                    1100
                };
                soundBegin[] = {"begin1", 1};
            };
        };
        class Burst: RocketPods {
            displayName = "ALL";
            burst = 1;
            salvo = 2;
            reloadTime = 0.08;
            soundContinuous = 0;
            autoFire = 1;
            aiDispersionCoefX = 1.5;
            aiDispersionCoefY = 1;
            dispersion = 0.012;
            textureType = "fullAuto";
            minRange = 1;
            minRangeProbab = 0.001;
            midRange = 2;
            midRangeProbab = 0.001;
            maxRange = 3;
            maxRangeProbab = 0.001;
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "\rhsusf\addons\rhsusf_a2port_air\data\Sounds\RocketLauncher_Shot21",
                    3.2,
                    1,
                    1100
                };
                soundBegin[] = {"begin1", 1};
            };
            soundBurst = 0;
        };
        class Single: Burst {
            displayName = "1";
            autoFire = 0;
            salvo = 1;
            textureType = "semi";
        };
        class Two: Single {
            displayName = "2";
            salvo = 2;
            burst = 1;
        };
        class Four: Single {
            displayName = "4";
            salvo = 2;
            burst = 2;
        };
        class Eight: Four {
            displayName = "8";
            burst = 8;
        };
        class Twelve: Four {
            displayName = "12";
            burst = 12;
        };
        class TwentyFour: Four {
            displayName = "24";
            burst = 24;
        };
    };
    class rhs_weap_FFARLauncher_M229: rhs_weap_FFARLauncher {
        displayName = "Hydra (M229 HEPD)";
        magazines[] = {
            "rhs_mag_M229_19",
            "rhs_mag_M229_19_green",
            "rhs_mag_M229_7",
            "rhs_mag_M229_7_green"
        };
    };
    class rhs_weap_FFARLauncher_M257: rhs_weap_FFARLauncher {
        displayName = "Hydra (M257 ILLUM)";
        magazines[] = {"rhs_mag_M257_7", "rhs_mag_M257_7_green", "rhs_mag_M257_7_USAF_LAU131"};
        modes[] = {"Far_AI", "Single"};
        class Far_AI: Far_AI {
            minRange = 3000;
            minRangeProbab = 0.6;
            midRange = 4000;
            midRangeProbab = 0.9;
            maxRange = 6000;
            maxRangeProbab = 0.6;
        };
    };
    class Missile_AGM_02_Plane_CAS_01_F;
    class rhs_weap_HellfireLauncher: Missile_AGM_02_Plane_CAS_01_F {
        scope = 2;
        autoFire = 0;
        displayName = "AGM-114L Hellfire II";
        cursorSize = 0;
        cursor = "missile";
        cursorAim = "EmptyCursor";
        aiRateOfFire = 5;
        aiRateOfFireDistance = 1000;
        maxrange = 8000;
        maxrangeprobab = 0.6;
        midrange = 2000;
        midrangeprobab = 0.9;
        minrange = 250;
        minrangeprobab = 0.6;
        nameSound = "MissileLauncher";
        reloadTime = 1;
        magazines[] = {"rhs_mag_AGM114L_4", "rhs_mag_AGM114L_2", "rhs_mag_AGM114L"};
        canLock = 2;
        weaponLockDelay = 3;
        modes[] = {"TopDown", "LoalDistance"};
        class TopDown: Mode_SemiAuto {
            textureType = "topDown";
            displayName = "LOBL";
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            maxrange = 8000;
            maxrangeprobab = 0.6;
            midrange = 2000;
            midrangeprobab = 0.9;
            minrange = 250;
            minrangeprobab = 0.6;
        };
        class LoalDistance: TopDown {
            displayName = "LOAL-DIR";
        };
        class Cruise: TopDown {
            displayName = "LOAL-HI";
        };
    };
    class rhs_weap_AGM114L_Launcher: rhs_weap_HellfireLauncher {
        displayName = "AGM-114L Hellfire II";
        magazines[] = {
            "rhs_mag_AGM114L_4",
            "rhs_mag_AGM114L_2",
            "rhs_mag_AGM114L",
            "rhs_mag_AGM114L_2_plane",
            "rhs_mag_AGM114L_plane"
        };
    };
    class rhs_weap_AGM114K_base_Launcher: rhs_weap_HellfireLauncher {
        displayName = "AGM-114K Hellfire II";
        magazines[] = {
            "rhs_mag_agm114K_4",
            "rhs_mag_agm114K_2",
            "rhs_mag_agm114K",
            "rhs_mag_AGM114K_2_plane",
            "rhs_mag_AGM114K_plane"
        };
        class EventHandlers {
            fired = "_this call rhs_fnc_LOALGuide";
        };
        canLock = 1;
        aiRateOfFire = 8;
        aiRateOfFireDistance = 500;
        class TopDown: TopDown {
            aiRateOfFire = 8;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_AGM114K_Launcher: rhs_weap_AGM114K_base_Launcher {
        muzzles[] = {"this", "LOAL_LO", "LOAL_HI"};
        class LOAL_LO: rhs_weap_AGM114K_base_Launcher {
            modes[] = {"LoalDistance"};
            class LoalDistance: TopDown {
                displayName = "LOAL-LO";
            };
            class EventHandlers {
                fired = "_this call rhs_fnc_LOALGuide";
            };
        };
        class LOAL_HI: rhs_weap_AGM114K_base_Launcher {
            modes[] = {"LoalDistance"};
            class LoalDistance: TopDown {
                displayName = "LOAL-HI";
            };
            class EventHandlers {
                fired = "_this call rhs_fnc_LOALGuide";
            };
        };
    };
    class rhs_weap_AGM114M_base_Launcher: rhs_weap_HellfireLauncher {
        displayName = "AGM-114M Hellfire II";
        magazines[] = {
            "rhs_mag_agm114M_4",
            "rhs_mag_agm114M_2",
            "rhs_mag_agm114M",
            "rhs_mag_AGM114M_2_plane",
            "rhs_mag_AGM114M_plane"
        };
    };
    class rhs_weap_AGM114M_Launcher: rhs_weap_AGM114M_base_Launcher {
        muzzles[] = {"this", "LOAL_LO", "LOAL_HI"};
        class LOAL_LO: rhs_weap_AGM114K_base_Launcher {
            modes[] = {"LoalDistance"};
            class LoalDistance: TopDown {
                displayName = "LOAL-LO";
            };
            class EventHandlers {
                fired = "_this call rhs_fnc_LOALGuide";
            };
        };
        class LOAL_HI: rhs_weap_AGM114K_base_Launcher {
            modes[] = {"LoalDistance"};
            class LoalDistance: TopDown {
                displayName = "LOAL-HI";
            };
            class EventHandlers {
                fired = "_this call rhs_fnc_LOALGuide";
            };
        };
    };
    class RHS_weap_AGM114N_base_Launcher: rhs_weap_HellfireLauncher {
        displayName = "AGM-114N Hellfire II";
        magazines[] = {
            "rhs_mag_agm114N_4",
            "rhs_mag_agm114N_2",
            "rhs_mag_agm114N",
            "rhs_mag_AGM114N_2_plane",
            "rhs_mag_AGM114N_plane"
        };
    };
    class RHS_weap_AGM114N_Launcher: RHS_weap_AGM114N_base_Launcher {
        muzzles[] = {"this", "LOAL_LO", "LOAL_HI"};
        class LOAL_LO: rhs_weap_AGM114K_base_Launcher {
            modes[] = {"LoalDistance"};
            class LoalDistance: TopDown {
                displayName = "LOAL-LO";
            };
            class EventHandlers {
                fired = "_this call rhs_fnc_LOALGuide";
            };
        };
        class LOAL_HI: rhs_weap_AGM114K_base_Launcher {
            modes[] = {"LoalDistance"};
            class LoalDistance: TopDown {
                displayName = "LOAL-HI";
            };
            class EventHandlers {
                fired = "_this call rhs_fnc_LOALGuide";
            };
        };
    };
    class rhs_weap_DAGR_Launcher: rhs_weap_HellfireLauncher {
        scope = 2;
        autoFire = 0;
        CanLock = 2;
        displayName = "DAGR";
        weight = 40;
        nameSound = "MissileLauncher";
        lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.31622776, 1};
        lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.31622776, 2.5};
        reloadTime = 0.1;
        magazineReloadTime = 0.1;
        magazines[] = {
            "rhs_mag_DAGR_4",
            "rhs_mag_DAGR_8",
            "rhs_mag_DAGR_16",
            "rhs_mag_DAGR_4_plane",
            "rhs_mag_DAGR_8_plane"
        };
        weaponLockDelay = 3;
        cursorAim = "EmptyCursor";
        cursor = "EmptyCursor";
        showAimCursorInternal = 0;
        class Direct: TopDown {
            textureType = "semi";
            displayName = "LOBL";
            aiRateOfFire = 5;
            aiRateOfFireDistance = 4000;
            minRange = 600;
            minRangeProbab = 0.6;
            midRange = 2000;
            midRangeProbab = 0.9;
            maxRange = 4000;
            maxRangeProbab = 0.1;
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "rhsusf\addons\rhsusf_melb\Sound\M260\M260_1",
                    2.6,
                    1,
                    1800
                };
                begin2[] = {
                    "rhsusf\addons\rhsusf_melb\Sound\M260\M260_2",
                    2.6,
                    1,
                    1800
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            };
        };
        class LoalDistance: TopDown {
            displayName = "LOAL-DIR";
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "rhsusf\addons\rhsusf_melb\Sound\M260\M260_1",
                    2.6,
                    1,
                    1800
                };
                begin2[] = {
                    "rhsusf\addons\rhsusf_melb\Sound\M260\M260_2",
                    2.6,
                    1,
                    1800
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            };
        };
        modes[] = {"Direct", "LoalDistance"};
    };
    class rhs_weap_agm65: rhs_weap_HellfireLauncher {
        displayName = "AGM-65 Maverick";
        displayNameMagazine = "AGM-65 Maverick";
        shortNameMagazine = "AGM-65";
        missileLockCone = 65;
        magazines[] = {"rhs_mag_agm65", "rhs_mag_agm65b_x3"};
        reloadTime = 0.1;
        magazineReloadTime = 0.1;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 500;
        nameSound = "MissileLauncher";
        weaponSoundEffect = "DefaultRifle";
        modes[] = {"this"};
        weaponLockDelay = 3;
        textureType = "semi";
        minRange = 300;
        minRangeProbab = 0.25;
        midRange = 2500;
        midRangeProbab = 0.9;
        maxRange = 9000;
        maxRangeProbab = 0.01;
    };
    class rhs_weap_agm65b: rhs_weap_agm65 {
        magazines[] = {"rhs_mag_agm65b", "rhs_mag_agm65b_3"};
    };
    class rhs_weap_agm65d: rhs_weap_agm65 {
        magazines[] = {"rhs_mag_agm65d", "rhs_mag_agm65d_3"};
    };
    class rhs_weap_agm65e: rhs_weap_agm65 {
        magazines[] = {"rhs_mag_agm65e", "rhs_mag_agm65e_3"};
    };
    class rhs_weap_agm65f: rhs_weap_agm65 {
        magazines[] = {"rhs_mag_agm65f", "rhs_mag_agm65f_3"};
    };
    class rhs_weap_agm65h: rhs_weap_agm65 {
        magazines[] = {"rhs_mag_agm65h", "rhs_mag_agm65h_3"};
    };
    class rhs_weap_TOW_Launcher;
    class rhs_weap_stinger_Launcher: rhs_weap_TOW_Launcher {
        displayName = "FIM-92F Stinger";
        reloadTime = 4;
        magazineReloadTime = 5;
        canLock = 2;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 1500;
        minRange = 50;
        minRangeProbab = 0.5;
        midRange = 1450;
        midRangeProbab = 1;
        maxRange = 4050;
        maxRangeProbab = 0.6;
        weaponLockSystem = 2;
        magazines[] = {"rhs_mag_4Rnd_stinger", "rhs_mag_2Rnd_stinger"};
    };
    class rhs_weap_stinger_Launcher_static: rhs_weap_stinger_Launcher {
        autoReload = 1;
        magazineReloadTime = 20;
    };
    class rhs_weap_ATAS_launcher: rhs_weap_TOW_Launcher {
        displayName = "ATAS";
        reloadTime = 4;
        magazineReloadTime = 0;
        canLock = 2;
        autoReload = 1;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 1500;
        minRange = 50;
        minRangeProbab = 0.5;
        midRange = 1450;
        midRangeProbab = 1;
        maxRange = 4050;
        maxRangeProbab = 0.6;
        weaponLockSystem = 2;
        magazines[] = {"rhs_mag_ATAS_2", "rhs_mag_ATAS_AH64_2"};
    };
    class Bomb_04_Plane_CAS_01_F;
    class Mk82BombLauncher;
    class rhs_weap_gbu12: Bomb_04_Plane_CAS_01_F {
        displayName = "GBU-12";
        cursorSize = 0;
        cursor = "bomb";
        cursorAim = "EmptyCursor";
        minRange = 150;
        minRangeProbab = 0.5;
        midRange = 550;
        midRangeProbab = 1;
        maxRange = 1550;
        maxRangeProbab = 0.6;
        magazines[] = {"rhs_mag_gbu12"};
    };
    class rhs_weap_gbu32: Bomb_04_Plane_CAS_01_F {
        displayName = "GBU-32";
        cursorSize = 0;
        cursor = "bomb";
        cursorAim = "EmptyCursor";
        minRange = 150;
        minRangeProbab = 0.5;
        midRange = 550;
        midRangeProbab = 1;
        maxRange = 1550;
        maxRangeProbab = 0.6;
        magazines[] = {"rhs_mag_gbu32"};
    };
    class rhs_weap_mk82: Mk82BombLauncher {
        displayName = "Mk 82";
        cursorSize = 0;
        cursor = "bomb";
        cursorAim = "EmptyCursor";
        airateoffire = 1;
        airateoffiredistance = 500;
        minRange = 50;
        minRangeProbab = 0.5;
        midRange = 250;
        midRangeProbab = 1;
        maxRange = 550;
        maxRangeProbab = 0.6;
        magazines[] = {"rhs_mag_mk82", "rhs_mag_mk82_3"};
    };
    class rhs_weap_cbu100: rhs_weap_mk82 {
        displayName = "CBU-100";
        magazines[] = {"rhs_mag_cbu100", "rhs_mag_cbu100_3"};
    };
    class rhs_weap_cbu87: rhs_weap_mk82 {
        displayName = "CBU-87";
        magazines[] = {"rhs_mag_cbu87", "rhs_mag_cbu87_3"};
    };
    class rhs_weap_cbu89: rhs_weap_cbu87 {
        displayName = "CBU-89";
        magazines[] = {"rhs_mag_cbu89", "rhs_mag_cbu89_3"};
    };
    class CannonCore;
    class weapon_Fighter_Gun20mm_AA: CannonCore {
        class manual;
    };
    class rhsusf_M61A2: weapon_Fighter_Gun20mm_AA {
        scope = 2;
        displayName = "M61A2";
        displayNameMagazine = "M61A2";
        shortNameMagazine = "20mm";
        class manual: manual {
            reloadTime = 0.01;
            displayName = "M61A2";
        };
        cursorAim = "EmptyCursor";
        holdsterAnimValue = 1.5;
        initSpeed = 900;
        CanLock = 2;
        optics = 1;
        aiDispersionCoefX = 1;
        aiDispersionCoefY = 1;
        magazines[] = {"rhsusf_20mm_M61A2"};
    };
};
class cfgVehicles {
    class MineBase;
    class rhsusf_mine_blu91: MineBase {
        scope = 2;
        ammo = "rhs_ammo_blu91";
        editorPreview = "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_mine_blu91";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayName = "BLU-91/B";
        icon = "iconExplosiveAT";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU91_d";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhsusf_mine_blu92: MineBase {
        scope = 2;
        ammo = "rhs_ammo_blu92";
        editorPreview = "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_mine_blu92";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayName = "BLU-92/B";
        icon = "iconExplosiveAP";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU92_d";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhsusf_uxo_blu97: MineBase {
        scope = 2;
        ammo = "rhs_ammo_uxo_blu97";
        editorPreview = "\rhsusf\addons\rhsusf_editorpreviews\data\rhsusf_uxo_blu97";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayName = "$STR_RHSUSF_UXO_BLU97";
        icon = "iconExplosiveUXO";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_BLU97_d";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class ModuleMine_APERSMine_F;
    class rhsusf_mine_blu91_module: ModuleMine_APERSMine_F {
        scopeCurator = 2;
        displayName = "BLU-91/B";
        explosive = "rhs_ammo_blu91";
    };
    class rhsusf_mine_blu92_module: ModuleMine_APERSMine_F {
        scopeCurator = 2;
        displayName = "BLU-92/B";
        explosive = "rhs_ammo_blu92";
    };
    class rhsusf_uxo_blu97_module: ModuleMine_APERSMine_F {
        scopeCurator = 2;
        displayName = "$STR_RHSUSF_UXO_BLU97";
        explosive = "rhs_ammo_uxo_blu97";
    };
    class Site_F;
    class Site_Minefield: Site_F {
        class Arguments {
            class minesType {
                class values {
                    class rhsusf_blu91_Mine {
                        name = "BLU-91/B";
                        value = "rhsusf_mine_blu91";
                        default = 0;
                    };
                    class rhsusf_blu92_mine {
                        name = "BLU-92/B";
                        value = "rhsusf_mine_blu92";
                        default = 0;
                    };
                    class rhsusf_blu97_uxo {
                        name = "$STR_RHSUSF_UXO_BLU97";
                        value = "rhsusf_uxo_blu97";
                        default = 0;
                    };
                };
            };
        };
    };
};
