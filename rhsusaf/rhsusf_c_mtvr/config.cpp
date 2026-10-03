class CfgPatches {
    class rhsusf_c_mtvr {
        units[] = {"rhsusf_mtvr_mk23_wd"};
        weapons[] = {};
        requiredVersion = "REQUIRED_VERSION";
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops", "A3_Soft_F_MRAP_01"};
        name = "MTVR";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class NewTurret;
        class ViewOptics;
    };
    class Car_F: Car {
        class AnimationSources;
        class HitPoints;
        class EventHandlers;
    };
    class Truck_F: Car_F {
        class ViewPilot;
        class HitPoints: HitPoints {
            class HitLFWheel;
            class HitLBWheel;
            class HitLMWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRBWheel;
            class HitRMWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class AnimationSources;
    };
    class Truck_01_base_F: Truck_F {
        class AnimationSources: AnimationSources {
            class HitGlass1;
        };
    };
    class rhsusf_mtvr_base: Truck_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        side = 1;
        editorSubcategory = "rhs_EdSubcat_truck";
        vehicleClass = "rhs_vehclass_truck";
        insideSoundCoef = 0.4;
        displayName = "MTVR";
        model = "\rhsusf\addons\rhsusf_mtvr\rhs_mtvr_mk23";
        picture = "\rhsusf\addons\rhsusf_main\data\WIP_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        mapSize = 8.02;
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        showNVGGunner = 1;
        supplyRadius = 4.5;
        tf_hasLRradio_api = 0;
        driverAction = "RHS_FMTV_Driver";
        memoryPointsGetInCargo[] = {"pos codriver", "pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos codriver dir", "pos cargo dir"};
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", "Door_RF", ""};
        cargoCompartments[] = {1, 1, 2};
        class HitPoints: HitPoints {
            class HitFuel {
                armor = 0.5;
                material = -1;
                name = "palivo";
                visual = "-";
                passThrough = 0.2;
            };
            class HitEngine {
                armor = 0.5;
                material = -1;
                name = "motor";
                visual = "-";
                passThrough = 0.2;
            };
            class HitBody: HitBody {
                name = "";
                visual = "zbytek";
                passThrough = 1;
            };
        };
        class Reflectors {
            class Left {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
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
                position = "Light_R";
                direction = "Light_R_end";
                hitpoint = "Light_R";
                selection = "Light_R";
            };
        };
        aggregateReflectors[] = {{"Left"}, {"Right"}};
        armorLights = 0.01;
        normalSpeedForwardCoef = 0.9;
        turnCoef = 3;
        terrainCoef = 2;
        waterSpeedFactor = 0.4;
        simulation = "carx";
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 98;
        fuelCapacity = 78;
        wheelCircumference = 3.705;
        brakeIdleSpeed = 0;
        maxFordingDepth = 0.4;
        waterResistance = 1;
        waterLeakiness = 10;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -6.03,
                "N",
                0,
                "D1",
                6.93,
                "D2",
                4.19,
                "D3",
                2.24,
                "D4",
                1.69,
                "D5",
                1.2,
                "D5",
                0.9,
                "D6",
                0.78
            };
            TransmissionRatios[] = {"High", 7.8};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.55, 0.55, 0.55, 0.55, 0.85, 0.85, 0.85};
        switchTime = 0.65;
        latency = 1.5;
        transmissionLosses = 5;
        dampersBumpCoef = 6;
        differentialType = "all_limited";
        frontRearSplit = 0.3;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 35;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 2;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {"(650/2400)", "(785/1254)"},
            {"(1200/2400)", "(1010/1254)"},
            {"(1440/2400)", "(1254/1254)"},
            {"(1600/2400)", "(1240/1254)"},
            {"(1800/2400)", "(1185/1254)"},
            {"(2000/2400)", "(1120/1254)"},
            {"(2200/2400)", "(1064/1254)"},
            {"(2626/2400)", "(0/1254)"}
        };
        maxOmega = 251.33;
        enginePower = 268;
        peakTorque = 1254;
        idleRPM = 650;
        redRPM = 2400;
        engineLosses = 12;
        thrustDelay = 0.5;
        engineBrakeCoef = 0.8;
        antiRollbarForceCoef = 20;
        antiRollbarForceLimit = 35;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 60;
        class Wheels {
            class L1 {
                boneName = "wheel_1_1_damper";
                steering = 1;
                side = "left";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                width = "0.2";
                mass = 60;
                MOI = 12;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 10000;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {0, -1, 0};
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                maxCompression = 0.13;
                mMaxDroop = 0.13;
                sprungMass = 1500;
                springStrength = 137363;
                springDamperRate = 35462;
                longitudinalStiffnessPerUnitGravity = 4464;
                latStiffX = 25;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class L2: L1 {
                boneName = "wheel_1_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
            };
            class L3: L1 {
                boneName = "wheel_1_3_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
            };
            class R1: L1 {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                steering = 1;
                side = "right";
            };
            class R2: R1 {
                boneName = "wheel_2_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
            class R3: R1 {
                boneName = "wheel_2_3_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustEffectHEMTT";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {};
        };
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        transportSoldier = 12;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 14};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {};
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                count = 10;
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            };
            class _xx_rhs_mag_m67 {
                count = 2;
                magazine = "rhs_mag_m67";
            };
            class _xx_rhs_mag_m18_green {
                count = 2;
                magazine = "rhs_mag_m18_green";
            };
            class _xx_rhs_rhs_mag_m18_red {
                count = 2;
                magazine = "rhs_mag_m18_red";
            };
            class _xx_rhs_mag_an_m8hc {
                count = 4;
                magazine = "rhs_mag_an_m8hc";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 4;
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
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
    };
    class rhsusf_mtvr_mk23_wd: rhsusf_mtvr_base {
        displayName = "Mk23 MTVR";
        scope = 0;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_driver";
        author = "$STR_RHSUSF_AUTHOR_FULL";
    };
};
