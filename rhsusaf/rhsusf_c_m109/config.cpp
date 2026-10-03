class CfgPatches {
    class rhsusf_c_m109 {
        units[] = {"rhsusf_m109_usarmy", "rhsusf_m109d_usarmy"};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops", "rhsusf_c_heavyweapons"};
        name = "M109A6 SPH";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_M109_DriverIn = "RHS_M109_DriverIn";
        RHS_M109_DriverOut = "RHS_M109_DriverOut";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_M109_DriverIn: Crew {
            file = "\rhsusf\addons\rhsusf_c_m109\anims\rhs_m109_driverIn";
            connectTo[] = {"RHS_M1A1_KIA_Driver", 1};
            speed = 10000000000;
        };
        class RHS_M109_DriverOut: Crew {
            file = "\rhsusf\addons\rhsusf_c_m109\anims\rhs_m109_driverOut";
            connectTo[] = {"RHS_M1A1_KIA_Driver", 1};
            speed = 10000000000;
        };
        class RHS_M109_KIA_Driver: DefaultDie {
            file = "\rhsusf\addons\rhsusf_c_m109\anims\rhs_m109_driverIn";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
    };
};
class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
        class Sounds;
        class HitPoints;
    };
    class Tank_F: Tank {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;
        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Sounds: Sounds {
            class Engine;
            class Movement;
        };
    };
    class MBT_01_base_F: Tank_F {};
    class MBT_01_arty_base_F: MBT_01_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
            };
        };
        class AnimationSources;
        class EventHandlers;
    };
    class rhsusf_m109tank_base: MBT_01_arty_base_F {
        dlc = "RHS_USAF";
        editorSubcategory = "rhs_EdSubcat_artillery";
        vehicleClass = "rhs_vehclass_artillery";
        category = "Armored";
        destrType = "DestructDefault";
        driveOnComponent[] = {"slide"};
        displayName = "$STR_M109A6WD_Name";
        accuracy = 0.3;
        icon = "\rhsusf\addons\rhsusf_m109\data\sa_m109a6_icon_ca.paa";
        picture = "\rhsusf\addons\rhsusf_m109\UI\m109a6_ca";
        model = "\rhsusf\addons\rhsusf_m109\rhsusf_m109a6";
        class RenderTargets {};
        typicalCargo[] = {};
        side = 1;
        unitInfoType = "RscUnitInfoArtillery";
        driverForceOptics = 1;
        driverOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
        simulation = "tankX";
        normalSpeedForwardCoef = 0.8;
        slowSpeedForwardCoef = 0.65;
        maxSpeed = 56;
        fuelCapacity = 19.5;
        RHS_fuelCapacity = 1885;
        tankTurnForce = 450000;
        tankTurnForceAngMinSpd = 0.5;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 2;
        accelAidForceYOffset = -2.3;
        accelAidForceSpd = 2.73;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        torqueCurve[] = {
            {0.282609, 0.55016},
            {0.434783, 0.811502},
            {0.521739, 0.952077},
            {0.608696, 1},
            {0.695652, 0.977636},
            {0.782609, 0.948882},
            {0.869565, 0.907348},
            {1.34174, 0}
        };
        engineMOI = 19;
        enginePower = 328;
        peakTorque = 1565;
        minOmega = 68;
        maxOmega = 240.86;
        idleRPM = 650;
        redRPM = 2300;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        thrustDelay = 0.3;
        dampingRateFullThrottle = 0.3;
        dampingRateZeroThrottleClutchEngaged = 3;
        dampingRateZeroThrottleClutchDisengaged = 0.25;
        engineLosses = 25;
        transmissionLosses = 15;
        clutchStrength = 15;
        switchTime = 0;
        latency = 1.1;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.826087,
            0.608696,
            0.891304,
            0.608696,
            0.978261,
            0.608696,
            1,
            0.652174
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -2.235,
                "N",
                0,
                "D1",
                4.69,
                "D2",
                3.17,
                "D3",
                1.58,
                "D4",
                0.79
            };
            TransmissionRatios[] = {"High", 10.7};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels {
            class L2 {
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                side = "left";
                width = 0.39;
                steering = 0;
                mass = 150;
                MOI = 8.2668;
                maxBrakeTorque = 10000;
                maxDroop = 0.18;
                maxCompression = 0.18;
                sprungMass = 2857;
                springStrength = 85000;
                springDamperRate = 18428;
                dampingRate = 727;
                dampingRateInAir = 727;
                dampingRateDamaged = 10;
                dampingRadteDestroyed = 10000;
                latStiffX = 1;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 32000;
                frictionVsSlipGraph[] = {{0, 0.4}, {0.18, 1}, {0.7, 0.75}};
            };
            class L3: L2 {
                boneName = "wheel_podkolol2";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "wheel_podkolol3";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L8: L2 {
                boneName = "wheel_podkolol7";
                center = "wheel_1_8_axis";
                boundary = "wheel_1_8_bound";
            };
            class L9: L2 {
                boneName = "";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2: L2 {
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3: R2 {
                boneName = "wheel_podkolop2";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2 {
                boneName = "wheel_podkolop3";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2 {
                boneName = "wheel_podkolop4";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2 {
                boneName = "wheel_podkolop5";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7: R2 {
                boneName = "wheel_podkolop6";
                center = "wheel_2_7_axis";
                boundary = "wheel_2_7_bound";
            };
            class R8: R2 {
                boneName = "wheel_podkolop7";
                center = "wheel_2_8_axis";
                boundary = "wheel_2_8_bound";
            };
            class R9: R2 {
                boneName = "";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        tracksSpeed = 1.35;
        wheelCircumference = 2.375;
        attenuationEffectType = "TankAttenuation";
        extCameraPosition[] = {0, 2, -15};
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        driverDoor = "HatchD";
        driverAction = "RHS_M109_DriverOut";
        driverInAction = "RHS_M109_DriverIn";
        cost = 1500000;
        damageResistance = 0.02;
        crewVulnerable = 0;
        incomingMissileDetectionSystem = 0;
        armor = 200;
        armorStructural = 600;
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = 0.4;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.08;
                explosionShielding = 0;
                radius = 0.25;
            };
            class HitEngine: HitEngine {
                armor = 0.45;
                material = -1;
                name = "motor";
                passThrough = 0;
                minimalHit = 0.139;
                explosionShielding = 0.009;
                radius = 0.27;
            };
            class HitLTrack: HitLTrack {
                armor = -150;
                material = -1;
                name = "pas_L";
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = -150;
                material = -1;
                name = "pas_P";
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 2;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                count = 20;
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            };
            class _xx_rhs_mag_m67 {
                count = 10;
                magazine = "rhs_mag_m67";
            };
            class _xx_rhs_mag_m18_green {
                count = 2;
                magazine = "rhs_mag_m18_green";
            };
            class _xx_rhs_mag_m18_red {
                count = 2;
                magazine = "rhs_mag_m18_red";
            };
            class _xx_rhs_mag_m18_yellow {
                count = 2;
                magazine = "rhs_mag_m18_yellow";
            };
            class _xx_rhs_mag_m18_purple {
                count = 2;
                magazine = "rhs_mag_m18_purple";
            };
            class _xx_rhs_mag_an_m8hc {
                count = 4;
                magazine = "rhs_mag_an_m8hc";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 8;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_weap {
                count = 2;
                weapon = "rhs_weap_m4_carryhandle";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        body = "obsTurret";
                        gun = "obsGun";
                        gunBeg = "com_pos";
                        gunEnd = "com_dir";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        maxHorizontalRotSpeed = 1.8;
                        maxVerticalRotSpeed = 1.8;
                        stabilizedInAxes = 3;
                        soundServo[] = {
                            "A3\Sounds_F\vehicles\armor\noises\servo_best",
                            0.01,
                            1,
                            50
                        };
                        minElev = -5;
                        maxElev = 60;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        maxOutElev = 40;
                        maxOutTurn = 115;
                        minOutTurn = -115;
                        weapons[] = {};
                        magazines[] = {};
                        lodTurnedOut = 0;
                        gunnerForceOptics = 1;
                        memoryPointGunnerOutOptics = "commanderview";
                        memoryPointGunnerOptics = "commanderview";
                        gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
                        gunnerOutOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                        gunnerHasFlares = 1;
                        class ViewOptics: ViewOptics {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.155;
                            minFov = 0.034;
                            maxFov = 0.155;
                            visionMode[] = {"Normal", "TI"};
                            thermalMode[] = {0, 1};
                        };
                        gunnerAction = "mbt2_slot2b_out";
                        gunnerInAction = "mbt2_slot2b_in";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        gunnerDoor = "HatchC";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        class HitPoints {
                            class HitTurretCom {
                                armor = 0.3;
                                material = -1;
                                name = "vezVelitele";
                                visual = "vezVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                                isTurret = 1;
                            };
                            class HitGunCom {
                                armor = 0.3;
                                material = -1;
                                name = "zbranVelitele";
                                visual = "zbranVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                                isGun = 1;
                            };
                        };
                        selectionFireAnim = "zasleh3";
                    };
                };
                weapons[] = {"rhs_weap_m284"};
                magazines[] = {
                    "rhs_mag_155mm_m795_28",
                    "rhs_mag_155mm_m825a1_2",
                    "rhs_mag_155mm_485_2",
                    "rhs_mag_155mm_m712_2",
                    "rhs_mag_155mm_m731_1",
                    "rhs_mag_155mm_raams_1",
                    "rhs_mag_155mm_m864_3"
                };
                memoryPointGun = "usti hlavne2";
                selectionFireAnim = "zasleh2";
                gunBeg = "usti hlavne3";
                gunEnd = "konec hlavne3";
                minElev = -5;
                maxElev = 80;
                initElev = 10;
                maxHorizontalRotSpeed = 0.365;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\noises\servo_best",
                    0.31622776,
                    1,
                    50
                };
                lockWhenVehicleSpeed = 3;
                memoryPointGunnerOptics = "gunnerview";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 1;
                class OpticsIn {
                    class Wide: ViewOptics {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.3;
                        minFov = 0.3;
                        maxFov = 0.3;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {4, 5};
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
                        gunnerOpticsEffect[] = {};
                    };
                    class Medium: Wide {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
                        initFov = 0.07;
                        minFov = 0.07;
                        maxFov = 0.07;
                    };
                    class Narrow: Wide {
                        gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
                        initFov = 0.028;
                        minFov = 0.028;
                        maxFov = 0.028;
                    };
                };
                gunnerAction = "mbt2_slot2a_out";
                gunnerInAction = "mbt2_slot2a_in";
                gunnerDoor = "HatchC";
                forceHideGunner = 1;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                class HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -1;
                        name = "vez";
                        visual = "zbytek";
                        passThrough = 0;
                        minimalHit = 0.14;
                        explosionShielding = 0.001;
                        radius = 0.08;
                    };
                    class HitGun {
                        armor = 0.6;
                        material = -1;
                        name = "zbran";
                        visual = "zbytek";
                        passThrough = 0;
                        minimalHit = 0.13;
                        explosionShielding = 0.001;
                        radius = 0.25;
                    };
                };
            };
        };
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_wd_co.paa",
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_wd_co.paa",
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_wd_ca.paa",
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_wd_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_d_co.paa",
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_d_co.paa",
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_d_ca.paa",
                    "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
        };
        textureList[] = {};
        availableForSupportTypes[] = {"Artillery"};
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_dam_m109a6_01_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_destr_m109.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_dam_m109a6_02_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_destr_m109.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_dam_m109a6_03_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_destr_m109.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_dam_m109a6_mesh_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_destr_m109.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_tracks.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_dam_m109a6_tracks.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_destr_m109.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_dam_m109a6_wheels_d.rvmat",
                "rhsusf\addons\rhsusf_m109\data\rhsusf_destr_m109.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaustr";
                direction = "exhaustr_dir";
                effect = "ExhaustEffectTankSide";
            };
        };
        class Reflectors {
            class Left {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "l svetlo";
                direction = "konec l svetlo";
                hitpoint = "l svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Right: Left {
                position = "P svetlo";
                direction = "konec P svetlo";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
            class Right2: Right {
                direction = "konec P svetlo";
                useFlare = 1;
            };
            class Left2: Left {
                direction = "konec l svetlo";
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Left"}, {"Right"}};
        armorLights = 0.1;
        class AnimationSources: AnimationSources {
            class IFF_Panels_Hide {
                source = "user";
                mass = -20;
                displayName = "hide IFF Panels";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class recoil_source {
                source = "reload";
                weapon = "rhs_weap_m284";
            };
            class muzzle_hide_arty: recoil_source {};
            class HatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchD: HatchC {};
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_hideIFFPanel {
                displayName = "Hide IFF Panel";
                property = "rhs_hideIFFPanel";
                control = "CheckboxNumber";
                expression = "_this animate ['IFF_Panels_Hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_ammoslot_1_type {
                displayName = "Ammo slot #1 type";
                tooltip = "Define type of shell for #1 slot [HE rounds]";
                property = "rhs_ammoslot_1_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class rhs_mag_155mm_m795_28 {
                        name = "M795 HE round";
                        value = "rhs_mag_155mm_m795_28";
                        defaultValue = "rhs_mag_155mm_m795_28";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 46. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',46,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4','rhs_ammoslot_5']] spawn rhs_fnc_Eden_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [Smoke rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class 6Rnd_155mm_Mo_smoke {
                        name = "M825A1 Smoke round";
                        value = "6Rnd_155mm_Mo_smoke";
                        defaultValue = "6Rnd_155mm_Mo_smoke";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 46. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot [Cluster rounds]";
                property = "rhs_ammoslot_3_type";
                class values {
                    class rhs_mag_155mm_m864_3 {
                        name = "M864 Cluster round";
                        value = "rhs_mag_155mm_m864_3";
                        defaultValue = "rhs_mag_155mm_m864_3";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 46. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
            class rhs_ammoslot_4_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #4 type";
                tooltip = "Define type of shell for #4 slot [Laser guided rounds]";
                property = "rhs_ammoslot_4_type";
                class values {
                    class rhs_mag_155mm_m712_2 {
                        name = "M712 LG round";
                        value = "rhs_mag_155mm_m712_2";
                        defaultValue = "rhs_mag_155mm_m712_2";
                    };
                };
            };
            class rhs_ammoslot_4: rhs_ammoslot_1 {
                displayName = "Ammo slot #4 count";
                tooltip = "Define number of rounds stored inside of type #4. Max 46. Leave -1 for default loadout";
                property = "rhs_ammoslot_4";
            };
            class rhs_ammoslot_5_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #5 type";
                tooltip = "Define type of shell for #5 slot [Special rounds]";
                property = "rhs_ammoslot_5_type";
                class values {
                    class rhs_mag_155mm_raams_1 {
                        name = "RAAMS AT mine round";
                        value = "rhs_mag_155mm_raams_1";
                        defaultValue = "rhs_mag_155mm_raams_1";
                    };
                    class rhs_mag_155mm_m731_1 {
                        name = "M731 AP mine round";
                        value = "rhs_mag_155mm_m731_1";
                        defaultValue = "rhs_mag_155mm_m731_1";
                    };
                };
            };
            class rhs_ammoslot_5: rhs_ammoslot_1 {
                displayName = "Ammo slot #5 count";
                tooltip = "Define number of rounds stored inside of type #5. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_5";
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay";
                postInit = "_this call rhs_fnc_reapplyTextures";
            };
        };
    };
    class rhsusf_m109_usarmy: rhsusf_m109tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m109_usarmy.paa";
        scope = 2;
        displayName = "$STR_M109A6WD_Name";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_wd_co.paa",
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_wd_co.paa",
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_wd_co.paa",
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_wd_ca.paa",
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_wd_co.paa"
        };
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
    };
    class rhsusf_m109d_usarmy: rhsusf_m109_usarmy {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m109d_usarmy.paa";
        displayName = "$STR_M109A6D_Name";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_d_co.paa",
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_d_co.paa",
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_d_co.paa",
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_d_ca.paa",
            "rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_d_co.paa"
        };
    };
};
class CfgNonAIVehicles {
    class ProxyRetex;
    class Proxyrhsusf_m109a6_hull: ProxyRetex {
        hiddenSelections[] = {"camo1"};
        model = "\rhsusf\addons\rhsusf_m109\rhsusf_m109a6_hull";
    };
};
