class CfgPatches {
    class rhs_c_btr {
        units[] = {
            "rhs_btr70_vmf",
            "rhs_btr70_vdv",
            "rhs_btr70_vv",
            "rhs_btr70_msv",
            "rhs_btr80_msv",
            "rhs_btr80_vdv",
            "rhs_btr80_vv",
            "rhs_btr80_vmf",
            "rhs_btr80a_msv",
            "rhs_btr80a_vdv",
            "rhs_btr80a_vv",
            "rhs_btr80a_vmf"
        };
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_heavyweapons",
            "rhs_decals",
            "rhs_optics",
            "rhs_c_troops"
        };
        name = "BTR-70 & 80";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        rhs_btr70_driver = "rhs_btr70_driver";
        rhs_btr70_gunner = "rhs_btr70_gunner";
        rhs_btr70_commander = "rhs_btr70_commander";
        rhs_btr80_driver = "rhs_btr80_driver";
        rhs_btr80a_gunner = "rhs_btr80a_gunner";
        rhs_cargosys_btr60_03 = "rhs_cargosys_btr60_03";
        rhs_cargosys_btr60_06 = "rhs_cargosys_btr60_06";
        rhs_cargosys_btr70_04 = "rhs_cargosys_btr70_04";
        rhs_cargosys_btr70_12 = "rhs_cargosys_btr70_12";
        rhs_cargosys_btr70_14 = "rhs_cargosys_btr70_14";
        rhs_cargosys_btr80_01 = "rhs_cargosys_btr80_01";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class rhs_cargosys_btr60_06: Crew {
            file = "\rhsafrf\addons\rhs_btr70\anims\cargo6.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Driver", 1};
            connectTo[] = {
                "rhs_cargosys_btr60_01_var0",
                0.25,
                "rhs_cargosys_btr60_01_var1",
                0.25,
                "rhs_cargosys_btr60_01_var2",
                0.25,
                "rhs_cargosys_btr60_01_var3",
                0.25
            };
            variantsPlayer[] = {
                "rhs_cargosys_btr60_01_var0",
                0.25,
                "rhs_cargosys_btr60_01_var1",
                0.25,
                "rhs_cargosys_btr60_01_var2",
                0.25,
                "rhs_cargosys_btr60_01_var3",
                0.25
            };
            variantsAI[] = {
                "rhs_cargosys_btr60_01_var0",
                0.25,
                "rhs_cargosys_btr60_01_var1",
                0.25,
                "rhs_cargosys_btr60_01_var2",
                0.25,
                "rhs_cargosys_btr60_01_var3",
                0.25
            };
            variantAfter[] = {0, 0, 0};
        };
        class rhs_cargosys_btr60_01_var0: rhs_cargosys_btr60_06 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_cargosys_btr60_01_var1: rhs_cargosys_btr60_06 {
            file = "\rhsafrf\addons\rhs_btr70\anims\cargo6_var1.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_cargosys_btr60_01_var2: rhs_cargosys_btr60_06 {
            file = "\rhsafrf\addons\rhs_btr70\anims\cargo6_var2.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_cargosys_btr60_01_var3: rhs_cargosys_btr60_06 {
            file = "\rhsafrf\addons\rhs_btr70\anims\cargo6_var3.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_cargosys_btr60_03: Crew {
            file = "\rhsafrf\addons\rhs_btr70\anims\cargo3.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Driver", 1};
        };
        class rhs_cargosys_btr70_04: Crew {
            file = "\rhsafrf\addons\rhs_btr70\anims\cargo4.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Driver", 1};
            connectTo[] = {
                "rhs_cargosys_btr70_04_var0",
                0.5,
                "rhs_cargosys_btr70_04_var1",
                0.5
            };
            variantsPlayer[] = {
                "rhs_cargosys_btr70_04_var0",
                0.5,
                "rhs_cargosys_btr70_04_var1",
                0.5
            };
            variantsAI[] = {
                "rhs_cargosys_btr70_04_var0",
                0.5,
                "rhs_cargosys_btr70_04_var1",
                0.5
            };
            variantAfter[] = {0, 0, 0};
        };
        class rhs_cargosys_btr70_04_var0: rhs_cargosys_btr70_04 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_cargosys_btr70_04_var1: rhs_cargosys_btr70_04 {
            file = "\rhsafrf\addons\rhs_btr70\anims\cargo4_var1.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_cargosys_btr70_14: Crew {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic01.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Driver", 1};
            equivalentTo = "rhs_cargosys_btr70_14";
            connectTo[] = {
                "passenger_flatground_1_Idle",
                0.55,
                "passenger_flatground_2_Idle",
                0.15,
                "passenger_flatground_3_Idle",
                0.15,
                "passenger_flatground_4_Idle",
                0.15
            };
            variantsPlayer[] = {
                "passenger_flatground_1_Idle",
                0.55,
                "passenger_flatground_2_Idle",
                0.15,
                "passenger_flatground_3_Idle",
                0.15,
                "passenger_flatground_4_Idle",
                0.15
            };
            variantsAI[] = {
                "passenger_flatground_1_Idle",
                0.55,
                "passenger_flatground_2_Idle",
                0.15,
                "passenger_flatground_3_Idle",
                0.15,
                "passenger_flatground_4_Idle",
                0.15
            };
            variantAfter[] = {0, 0, 0};
        };
        class rhs_cargosys_btr70_12: rhs_cargosys_btr70_14 {
            equivalentTo = "rhs_cargosys_btr70_12";
            connectTo[] = {
                "passenger_flatground_1_Idle",
                0.25,
                "passenger_flatground_2_Idle",
                0.25,
                "passenger_flatground_3_Idle",
                0.25,
                "passenger_flatground_4_Idle",
                0.25
            };
            variantsPlayer[] = {
                "passenger_flatground_1_Idle",
                0.25,
                "passenger_flatground_2_Idle",
                0.25,
                "passenger_flatground_3_Idle",
                0.25,
                "passenger_flatground_4_Idle",
                0.25
            };
            variantsAI[] = {
                "passenger_flatground_1_Idle",
                0.25,
                "passenger_flatground_2_Idle",
                0.25,
                "passenger_flatground_3_Idle",
                0.25,
                "passenger_flatground_4_Idle",
                0.25
            };
        };
        class rhs_cargosys_btr80_01: Crew {
            file = "\rhsafrf\addons\rhs_btr80\anims\cargo1.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Driver", 1};
            connectTo[] = {
                "rhs_cargosys_btr80_01_var0",
                0.25,
                "rhs_cargosys_btr80_01_var1",
                0.25,
                "rhs_cargosys_btr80_01_var2",
                0.25,
                "rhs_cargosys_btr80_01_var3",
                0.25
            };
            variantsPlayer[] = {
                "rhs_cargosys_btr80_01_var0",
                0.25,
                "rhs_cargosys_btr80_01_var1",
                0.25,
                "rhs_cargosys_btr80_01_var2",
                0.25,
                "rhs_cargosys_btr80_01_var3",
                0.25
            };
            variantsAI[] = {
                "rhs_cargosys_btr80_01_var0",
                0.25,
                "rhs_cargosys_btr80_01_var1",
                0.25,
                "rhs_cargosys_btr80_01_var2",
                0.25,
                "rhs_cargosys_btr80_01_var3",
                0.25
            };
            variantAfter[] = {0, 0, 0};
        };
        class rhs_cargosys_btr80_01_var0: rhs_cargosys_btr80_01 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_cargosys_btr80_01_var1: rhs_cargosys_btr80_01 {
            file = "\rhsafrf\addons\rhs_btr80\anims\cargo1_var1.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_cargosys_btr80_01_var2: rhs_cargosys_btr80_01 {
            file = "\rhsafrf\addons\rhs_btr80\anims\cargo1_var2.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_cargosys_btr80_01_var3: rhs_cargosys_btr80_01 {
            file = "\rhsafrf\addons\rhs_btr80\anims\cargo1_var3.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_btr70_driver: Crew {
            file = "\rhsafrf\addons\rhs_btr70\anims\driver.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Driver", 1};
        };
        class rhs_btr80_driver: Crew {
            file = "\rhsafrf\addons\rhs_btr80\anims\driver.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Driver", 1};
        };
        class rhs_btr70_gunner: Crew {
            file = "\rhsafrf\addons\rhs_btr70\anims\gunner.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Gunner", 1};
        };
        class rhs_btr80a_gunner: Crew {
            file = "\rhsafrf\addons\rhs_btr80\anims\gunner.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Gunner", 1};
        };
        class rhs_btr70_commander: Crew {
            file = "\rhsafrf\addons\rhs_btr70\anims\commander.rtm";
            interpolateTo[] = {"KIA_RHS_BTR70_Commander", 1};
        };
        class rhs_btr70_commander_out: Crew {
            file = "\rhsafrf\addons\rhs_btr70\anims\commanderout.rtm";
        };
        class KIA_RHS_BTR70_Commander: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_btr70\anims\KIA_Commander.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class KIA_RHS_BTR70_Driver: KIA_RHS_BTR70_Commander {
            file = "\rhsafrf\addons\rhs_btr70\anims\KIA_Driver.rtm";
        };
        class KIA_RHS_BTR70_Gunner: KIA_RHS_BTR70_Commander {
            file = "\rhsafrf\addons\rhs_btr70\anims\KIA_Gunner.rtm";
        };
    };
};
class DefaultEventhandlers;
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class BTR {
            name = "BTR Functions";
            description = "BTR Init & FX thing";
            class btr_init {
                file = "\rhsafrf\addons\rhs_c_btr\scripts\rhs_btr_init.sqf";
                description = "btr's init";
            };
            class btr_habar {
                file = "\rhsafrf\addons\rhs_c_btr\scripts\bgr_btr_habar.sqf";
                description = "random habar";
            };
            class btr_handleHatch {
                file = "\rhsafrf\addons\rhs_c_btr\scripts\handleHatch.sqf";
                description = "handle hatch";
            };
            class btr_hatch {
                file = "\rhsafrf\addons\rhs_c_btr\scripts\rhs_btr_hatch.sqf";
                description = "handle hatch";
            };
            class btr_turnOut {
                file = "\rhsafrf\addons\rhs_c_btr\scripts\rhs_btr_turnOut.sqf";
                description = "BTRs turn out handling";
            };
            class activeTirePressure {
                file = "\rhsafrf\addons\rhs_c_btr\scripts\bgr_podkachka.sqf";
                description = "Active Tire Pressure script";
            };
        };
    };
};
class CfgVehicles {
    class Car;
    class Car_F: Car {
        class ViewPilot;
        class NewTurret;
        class Sounds;
        class HitPoints {
            class HitBody;
            class HitEngine;
            class HitFuel;
            class HitLFWheel;
            class HitLBWheel;
            class HitLMWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRBWheel;
            class HitRMWheel;
            class HitRF2Wheel;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
    };
    class Wheeled_APC_F: Car_F {
        class ViewOptics;
        class ViewCargo;
        class Sounds: Sounds {
            class Engine;
            class Movement;
        };
        class NewTurret;
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
            };
        };
        class AnimationSources;
        class EventHandlers;
        class CommanderOptics;
        class Components;
    };
    class rhs_btr_base: Wheeled_APC_F {
        dlc = "RHS_AFRF";
        rhs_habarType = 2;
        insideSoundCoef = 0.8;
        category = "Armored";
        htMin = 60;
        htMax = 1800;
        afMax = 200;
        mfMax = 100;
        tf_isolatedAmount_api = 0.8;
        tf_range_api = 17000;
        side = 0;
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']", "['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_BTR70_Name";
        vehicleClass = "rhs_vehclass_apc";
        editorSubcategory = "rhs_EdSubcat_apc";
        picture = "\rhsafrf\addons\rhs_c_btr\icons\rhs_btr70_pic_ca.paa";
        Icon = "\rhsafrf\addons\rhs_btr70\rhs_btr70_mapicon_ca.paa";
        canHideDriver = 0;
        mapSize = 8;
        normalSpeedForwardCoef = 0.6;
        slowSpeedForwardCoef = 0.45;
        terrainCoef = 1.2;
        turnCoef = 2.5;
        simulation = "carx";
        dampersBumpCoef = 6;
        precision = 10;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 75;
        fuelCapacity = 25;
        RHS_fuelCapacity = 350;
        wheelCircumference = 3.51;
        brakeIdleSpeed = 0.7;
        canFloat = 1;
        waterLeakiness = 2.5;
        waterSpeedFactor = 0.8;
        maxFordingDepth = 1.2;
        waterResistance = 0.5;
        waterDamageEngine = 0.9;
        waterAngularDampingCoef = 5;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterPPInVehicle = 0;
        waterResistanceCoef = 0.145;
        engineShiftY = 0.3;
        engineShiftZ = -3;
        rudderForceCoef = 3.7;
        rudderForceCoefAtMaxSpeed = 0.3;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -7.9,
                "N",
                0,
                "D1",
                6.48,
                "D2",
                2.5,
                "D3",
                1.4,
                "D4",
                1
            };
            AmphibiousRatios[] = {"R1", -20, "N", 0, "D1", 47};
            TransmissionRatios[] = {"High", 8};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.85, 0.85, 0.85, 0.85};
        switchTime = 0.81;
        latency = 1.5;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 55;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.166667, 0.827465},
            {0.277778, 0.929577},
            {0.388889, 0.961268},
            {0.5, 0.982394},
            {0.555556, 1},
            {0.694444, 1},
            {0.888889, 0.933099},
            {1.11222, 0}
        };
        enginePower = 89;
        peakTorque = 284;
        maxOmega = 376.99;
        minOmega = 60;
        idleRPM = 600;
        redRPM = 3600;
        engineLosses = 14;
        thrustDelay = 2;
        engineBrakeCoef = 0.3;
        antiRollbarForceCoef = 0;
        antiRollbarForceLimit = 0.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 40;
        accelAidForceYOffset = -0.5;
        class Wheels {
            class LF {
                width = "0.33";
                steering = 1;
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                mass = 160;
                MOI = 22;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 12500;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {-0.125, -1, 0};
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                maxCompression = 0.15;
                mMaxDroop = 0.15;
                MaxDroop = 0.15;
                sprungMass = 925.5;
                springStrength = 108150;
                springDamperRate = 9990;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 3.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1.13}, {1, 1}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
            };
            class LR2: LR {
                steering = 0;
                boneName = "wheel_1_3_damper";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
                maxHandBrakeTorque = 10000;
            };
            class LR3: LR2 {
                boneName = "wheel_1_4_damper";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
                suspForceAppPointOffset = "wheel_1_4_axis";
                tireForceAppPointOffset = "wheel_1_4_axis";
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                steering = 1;
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
            class RR2: RR {
                steering = 0;
                boneName = "wheel_2_3_damper";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
                maxHandBrakeTorque = 10000;
            };
            class RR3: RR2 {
                boneName = "wheel_2_4_damper";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
                suspForceAppPointOffset = "wheel_2_4_axis";
                tireForceAppPointOffset = "wheel_2_4_axis";
            };
        };
        radarType = 0;
        incomingMissileDetectionSystem = 0;
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        unitInfoType = "RHS_RscUnitInfoBTR";
        hideProxyInCombat = 0;
        driverDoor = "dHatch";
        cargoDoors[] = {
            "r_door",
            "l_door",
            "r_door",
            "l_door",
            "r_door",
            "l_door",
            "r_door",
            "l_door"
        };
        memoryPointsGetInCargo[] = {
            "pos cargo",
            "pos gunner",
            "pos cargo",
            "pos gunner",
            "pos cargo",
            "pos gunner",
            "pos cargo",
            "pos gunner",
            "pos gunner"
        };
        memoryPointsGetInCargoDir[] = {
            "pos cargo dir",
            "pos gunner dir",
            "pos cargo dir",
            "pos gunner dir",
            "pos cargo dir",
            "pos gunner dir",
            "pos cargo dir",
            "pos gunner dir"
        };
        cargoProxyIndexes[] = {1, 5, 2, 6, 3, 7, 4, 8};
        getInProxyOrder[] = {
            1,
            5,
            2,
            6,
            3,
            7,
            4,
            8,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            16
        };
        rhs_topPositions[] = {9, 10, 11, 12, 13, 14, 15, 16};
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment1"};
        class AnimationSources: AnimationSources {
            class cabinlights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class recoil_source {
                source = "reload";
                weapon = "rhs_weap_kpvt";
            };
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class muzzle_hide_hmg: recoil_source {};
            class muzzle_rot_hmg: recoil_source {
                source = "ammorandom";
            };
            class muzzle_rot_mg: muzzle_rot_hmg {
                weapon = "rhs_weap_pkt_btr";
            };
            class driverViewHatch {
                source = "door";
                animPeriod = 2;
                initPhase = 1;
            };
            class commanderViewHatch: driverViewHatch {};
            class dHatch: driverViewHatch {
                initPhase = 0;
                animPeriod = 1.7;
            };
            class cHatch: dHatch {};
            class l_door: dHatch {};
            class r_door: l_door {};
            class windows: l_door {};
            class t_door_1: l_door {};
            class t_door_2: l_door {};
            class engineHatches: l_door {};
            class propDoor: l_door {};
            class cargoHandler1: l_door {
                initPhase = 1;
            };
            class HitLFWheel {
                source = "Hit";
                hitpoint = "HitLFWheel";
                raw = 1;
            };
            class HitRFWheel: HitLFWheel {
                hitpoint = "HitRFWheel";
            };
            class HitLBWheel: HitLFWheel {
                hitpoint = "HitLBWheel";
            };
            class HitRBWheel: HitLFWheel {
                hitpoint = "HitRBWheel";
            };
            class HitLF2Wheel: HitLFWheel {
                hitpoint = "HitLF2Wheel";
            };
            class HitRF2Wheel: HitLFWheel {
                hitpoint = "HitRF2Wheel";
            };
            class HitLMWheel: HitLFWheel {
                hitpoint = "HitLMWheel";
            };
            class HitRMWheel: HitLFWheel {
                hitpoint = "HitRMWheel";
            };
            class crate_l1_unhide {
                source = "user";
                animPeriod = 0.0000001;
                initPhase = 0;
                sourceAddress = "clamp";
                mass = -20;
                displayName = "hide crate L1";
                author = "$STR_A3_Bohemia_Interactive";
            };
            class crate_l2_unhide: crate_l1_unhide {
                displayName = "hide crate L2";
            };
            class crate_l3_unhide: crate_l1_unhide {
                displayName = "hide crate L3";
            };
            class crate_l4_unhide: crate_l1_unhide {
                displayName = "hide crate L4";
            };
            class crate_r1_unhide: crate_l1_unhide {
                displayName = "hide crate R1";
            };
            class crate_r2_unhide: crate_l1_unhide {
                displayName = "hide crate R2";
            };
            class crate_r3_unhide: crate_l1_unhide {
                displayName = "hide crate R3";
            };
            class crate_r4_unhide: crate_l1_unhide {
                displayName = "hide crate R4";
            };
            class water_1_unhide: crate_l1_unhide {
                displayName = "hide water crate 1";
            };
            class water_2_unhide: crate_l1_unhide {
                displayName = "hide water crate 2";
            };
            class wheel_1_unhide: crate_l1_unhide {
                displayName = "hide spare wheel 1";
            };
            class wheel_2_unhide: crate_l1_unhide {
                displayName = "hide spare wheel 2";
            };
            class HitGlass1 {
                source = "Hit";
                hitpoint = "HitGlass1";
                raw = 1;
            };
            class HitGlass2: HitGlass1 {
                hitpoint = "HitGlass2";
            };
            class HitPeriscope1 {
                source = "Hit";
                hitpoint = "HitPeriscope1";
            };
            class HitPeriscope2: HitPeriscope1 {
                hitpoint = "HitPeriscope2";
            };
            class HitPeriscope3: HitPeriscope1 {
                hitpoint = "HitPeriscope3";
            };
            class HitPeriscope4: HitPeriscope1 {
                hitpoint = "HitPeriscope4";
            };
            class HitPeriscope5: HitPeriscope1 {
                hitpoint = "HitPeriscope5";
            };
            class HitPeriscope6: HitPeriscope1 {
                hitpoint = "HitPeriscope6";
            };
            class HitPeriscope7: HitPeriscope1 {
                hitpoint = "HitPeriscope7";
            };
            class HitPeriscope8: HitPeriscope1 {
                hitpoint = "HitPeriscope8";
            };
            class HitPeriscope9: HitPeriscope1 {
                hitpoint = "HitPeriscope9";
            };
            class HitPeriscope10: HitPeriscope1 {
                hitpoint = "HitPeriscope10";
            };
            class HitMainSight: HitPeriscope1 {
                hitpoint = "Hit_Optic_MainSight";
            };
            class HitComSight: HitPeriscope1 {
                hitpoint = "Hit_optic_ComSight";
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_decalNumber_type {
                displayName = "Define font type of side number (3 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle. 3 digits";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTR3NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class NoChange {
                        name = "Default defined";
                        value = "NoChange";
                    };
                    class Default {
                        name = "Default";
                        value = "Default";
                        defaultValue = "Default";
                    };
                    class DefaultRed {
                        name = "Default (Red)";
                        value = "DefaultRed";
                    };
                    class BoldRed {
                        name = "Bold Red";
                        value = "BoldRed";
                    };
                    class CDF {
                        name = "CDF";
                        value = "CDF";
                    };
                    class Handpaint {
                        name = "Handpaint";
                        value = "Handpaint";
                    };
                    class HandpaintBlack {
                        name = "Handpaint Black";
                        value = "HandpaintBlack";
                    };
                    class Iraqi {
                        name = "Iraqi";
                        value = "Iraqi";
                    };
                    class LicensePlate {
                        name = "License Plate";
                        value = "LicensePlate";
                    };
                };
            };
            class rhs_decalNumber {
                collapsed = 1;
                displayName = "Set side number (3 digits)";
                tooltip = "Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTR3NumberPlaces}else{[_this, [['Number', cBTR3NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNumber_type2: rhs_decalNumber_type {
                displayName = "Define font type of side number (2 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle. 2 digits";
                property = "rhs_decalNumber_type2";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTR2NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
            };
            class rhs_decalNumber2: rhs_decalNumber {
                displayName = "Set side number (2 digits)";
                tooltip = "Set side number. 2 numbers are required. Hides on 0";
                property = "rhs_decalNumber2";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTR2NumberPlaces}else{[_this, [['Number', cBTR2NumberPlaces, _this getVariable ['rhs_decalNumber_type2','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNumber_type3: rhs_decalNumber_type {
                displayName = "Define font type of side number (4 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle. 4 digits";
                property = "rhs_decalNumber_type3";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTR4NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
            };
            class rhs_decalNumber3: rhs_decalNumber {
                displayName = "Set side number (4 digits)";
                tooltip = "Set side number. 4 numbers are required. Hides on 0";
                property = "rhs_decalNumber3";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTR4NumberPlaces}else{[_this, [['Number', cBTR4NumberPlaces, _this getVariable ['rhs_decalNumber_type3','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNumber_type4: rhs_decalNumber_type {
                displayName = "Define font type of side number (4 digits CDF)";
                tooltip = "Define kind of font that will be drawn on vehicle. 4 digits, CDF style numbering";
                property = "rhs_decalNumber_type4";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTRCDF4NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
            };
            class rhs_decalNumber4: rhs_decalNumber {
                displayName = "Set side number (4 digits CDF)";
                tooltip = "Set side number. 4 numbers are required. Hides on 0";
                property = "rhs_decalNumber4";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTRCDF4NumberPlaces}else{[_this, [['Number', cBTRCDF4NumberPlaces, _this getVariable ['rhs_decalNumber_type4','CDF'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalPlatoon_type {
                displayName = "Define platoon symbol type";
                tooltip = "Decal type";
                property = "rhs_decalPlatoon_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
                typeName = "STRING";
                class values {
                    class Platoon {
                        name = "Platoon";
                        value = "Platoon";
                    };
                    class PlatoonGDR {
                        name = "Platoon GDR";
                        value = "PlatoonGDR";
                    };
                    class PlatoonVDV {
                        name = "Platoon VDV";
                        value = "PlatoonVDV";
                    };
                    class Army {
                        name = "Army";
                        value = "Army";
                        defaultValue = "1";
                    };
                    class Honor {
                        name = "Honor";
                        value = "Honor";
                        defaultValue = "0";
                    };
                    class HonorGDR {
                        name = "Honor GDR";
                        value = "HonorGDR";
                    };
                };
            };
            class rhs_decalPlatoon {
                displayName = "Set platoon symbol";
                tooltip = "Set platoon symbol located on all 4 sides of vehicle. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRPlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalArmy_type: rhs_decalPlatoon_type {
                displayName = "Define back army symbol type";
                property = "rhs_decalArmy_type";
                class values: values {
                    class Army: Army {};
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                };
            };
            class rhs_decalArmy: rhs_decalPlatoon {
                displayName = "Set back army symbol";
                tooltip = "Define symbol located on right back side of vehicle hull. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalArmy";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRBackArmSymPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalRightTurret_type: rhs_decalArmy_type {
                displayName = "Define right turret side symbol type";
                property = "rhs_decalRightTurret_type";
                class values: values {
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                    class Army: Army {};
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                };
            };
            class rhs_decalRightTurret: rhs_decalPlatoon {
                displayName = "Set right turret side symbol";
                tooltip = "Define right turret side symbol. Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalRightTurret";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRRightGvardSymPlaces,  _this getVariable ['rhs_decalRightTurret_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalLeftTurret_type: rhs_decalRightTurret_type {
                displayName = "Define left turret symbol type";
                property = "rhs_decalLeftTurret_type";
            };
            class rhs_decalLeftTurret: rhs_decalRightTurret {
                displayName = "Set left turret symbol";
                tooltip = "Define symbol located on left side of vehicle turret. Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalLeftTurret";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRLeftGvardSymPlaces,  _this getVariable ['rhs_decalLeftTurret_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalFront_type: rhs_decalArmy_type {
                displayName = "Define front side roundels type";
                property = "rhs_decalFront_type";
            };
            class rhs_decalFront: rhs_decalPlatoon {
                displayName = "Set front side roundels";
                tooltip = "Define symbol located on front of vehicle hull. Usually used for OMON symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalFront";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTROMONSymbolPlaces,  _this getVariable ['rhs_decalFront_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalLowerFront_type: rhs_decalArmy_type {
                displayName = "Define front hull symbol type";
                property = "rhs_decalLowerFront_type";
            };
            class rhs_decalLowerFront: rhs_decalPlatoon {
                displayName = "Set front hull symbol";
                tooltip = "Define symbol located on front of vehicle hull. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalLowerFront";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRFrontPlatePlaces,  _this getVariable ['rhs_decalLowerFront_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalFlag_type: rhs_decalArmy_type {
                displayName = "Define flag/side marking type";
                property = "rhs_decalFlag_type";
            };
            class rhs_decalFlag: rhs_decalPlatoon {
                displayName = "Set flag/side marking";
                tooltip = "Define symbol located on front of vehicle hull. Usually used for navy flag symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalFlag";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRFlagSymPlaces,  _this getVariable ['rhs_decalFlag_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalVV_type: rhs_decalPlatoon_type {
                displayName = "Define VV letter type";
                property = "rhs_decalVV_type";
            };
            class rhs_decalVV: rhs_decalPlatoon {
                displayName = "Set VV letter";
                tooltip = "Define symbol next to VV 2 digits numbering system decal. Usually used for VV T letter for numbering system (code 13). -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalVV";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRVVLetterSymPlaces,  _this getVariable ['rhs_decalVV_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class crate_l1_unhide {
                displayName = "hide l1 crate";
                property = "crate_l1_unhide";
                control = "CheckboxNumber";
                expression = "[_this,_value,'%s'] call rhs_fnc_setHabarEden";
                defaultValue = "-1";
            };
            class crate_l2_unhide: crate_l1_unhide {
                displayName = "Hide l2 crate";
                property = "crate_l2_unhide";
            };
            class crate_l3_unhide: crate_l1_unhide {
                displayName = "Hide l3 crate";
                property = "crate_l3_unhide";
            };
            class crate_l4_unhide: crate_l1_unhide {
                displayName = "Hide l4 crate";
                property = "crate_l4_unhide";
            };
            class crate_r1_unhide: crate_l1_unhide {
                displayName = "Hide r1 crate";
                property = "crate_r1_unhide";
            };
            class crate_r2_unhide: crate_l1_unhide {
                displayName = "Hide r2 crate";
                property = "crate_r2_unhide";
            };
            class crate_r3_unhide: crate_l1_unhide {
                displayName = "Hide r3 crate";
                property = "crate_r3_unhide";
            };
            class crate_r4_unhide: crate_l1_unhide {
                displayName = "Hide r4 crate";
                property = "crate_r4_unhide";
            };
            class water_1_unhide: crate_l1_unhide {
                displayName = "Hide water tank 1";
                property = "water_1_unhide";
            };
            class water_2_unhide: crate_l1_unhide {
                displayName = "Hide water tank 2";
                property = "water_2_unhide";
            };
            class wheel_1_unhide: crate_l1_unhide {
                displayName = "Hide spare wheel 1";
                property = "wheel_1_unhide";
            };
            class wheel_2_unhide: crate_l1_unhide {
                displayName = "Hide spare wheel 2";
                property = "wheel_2_unhide";
            };
            class rhs_disableHabar: crate_l1_unhide {
                displayName = "Disable habar";
                property = "rhs_disableHabar";
                expression = "[_this,_value,'%s',_value] call rhs_fnc_setHabarEden";
                defaultValue = "0";
            };
            class dHatch: rhs_disableHabar {
                displayName = "Open driver top hatch";
                property = "dHatch";
                expression = "_this animateDoor ['%s',_value,true]";
            };
            class cHatch: dHatch {
                displayName = "Open commander top hatch";
                property = "cHatch";
            };
            class l_door: dHatch {
                displayName = "Open left door";
                property = "l_door";
            };
            class r_door: dHatch {
                displayName = "Open right door";
                property = "r_door";
            };
            class windows: dHatch {
                displayName = "Open firing ports";
                property = "windows";
            };
            class t_door_1: dHatch {
                displayName = "Open top hatch 1";
                property = "t_door_1";
            };
            class t_door_2: dHatch {
                displayName = "Open top hatch 2";
                property = "t_door_2";
            };
            class engineHatches: dHatch {
                displayName = "Open engine hatches";
                property = "engineHatches";
            };
            class propDoor: dHatch {
                displayName = "Open propulsion cover";
                property = "propDoor";
            };
            class driverViewHatch: dHatch {
                displayName = "Open driver view hatch";
                property = "driverViewHatch";
            };
            class commanderViewHatch: dHatch {
                displayName = "Open commander view hatch";
                property = "commanderViewHatch";
            };
            class rhs_externalMount: rhs_disableHabar {
                displayName = "Disable external mount";
                property = "rhs_externalMount";
                control = "Checkbox";
                expression = "[_this,_value] call rhs_fnc_lockTop";
            };
        };
        rhs_randomizedHabar[] = {
            "crate_l1_unhide",
            "crate_l2_unhide",
            "crate_l3_unhide",
            "crate_l4_unhide",
            "crate_r1_unhide",
            "crate_r2_unhide",
            "crate_r3_unhide",
            "crate_r4_unhide",
            "wheel_1_unhide",
            "wheel_2_unhide",
            "water_1_unhide",
            "water_2_unhide"
        };
        model = "\rhsafrf\addons\rhs_btr70\rhs_btr70.p3d";
        class Library {
            libTextDesc = "$STR_RHS_BTR70_LIB";
        };
        class TransportMagazines {
            class _xx_rhs_30Rnd_545x39_7N10_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = 30;
            };
            class _xx_rhs_10Rnd_762x54mmR_7N1 {
                magazine = "rhs_10Rnd_762x54mmR_7N1";
                count = 10;
            };
            class _xx_rhs_100Rnd_762x54mmR {
                magazine = "rhs_100Rnd_762x54mmR";
                count = 3;
            };
            class _xx_rhs_mag_rdg2_white {
                magazine = "rhs_mag_rdg2_white";
                count = 2;
            };
            class _xx_rhs_mag_rgd5 {
                magazine = "rhs_mag_rgd5";
                count = 9;
            };
            class _xx_rhs_VOG25 {
                magazine = "rhs_VOG25";
                count = 20;
            };
            class _xx_rhs_vg40op_white {
                magazine = "rhs_vg40op_white";
                count = 5;
            };
            class _xx_rhs_GRD40_white {
                magazine = "rhs_GRD40_white";
                count = 5;
            };
            class _xx_rhs_rpg26_mag {
                magazine = "rhs_rpg26_mag";
                count = 2;
            };
            class _xx_rhs_rpg7_OG7V_mag {
                magazine = "rhs_rpg7_OG7V_mag";
                count = 2;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_ak74m {
                weapon = "rhs_weap_ak74m";
                count = 2;
            };
            class _xx_rhs_weap_rpg26 {
                weapon = "rhs_weap_rpg26";
                count = 2;
            };
            class _xx_rhs_weap_rpg7 {
                weapon = "rhs_weap_rpg7";
                count = 1;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 4;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportBackpacks {
            class _xx_rhs_sidor {
                backpack = "rhs_sidor";
                count = 7;
            };
            class _xx_rhs_rpg {
                backpack = "rhs_rpg";
                count = 1;
            };
        };
        threat[] = {1, 0.6, 0.6};
        armor = 100;
        damageResistance = 0.018849;
        minTotalDamageThreshold = 0.4;
        crewVulnerable = 0;
        armorStructural = 6;
        fuelExplosionPower = 0.1;
        secondaryExplosion = -1;
        class HitPoints: HitPoints {
            class HitEngine {
                armor = 1;
                material = -1;
                name = "engine";
                visual = "zbytek";
                passThrough = 0.2;
                radius = 0.2;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Engine_Smoke {
                        simulation = "particles";
                        type = "SmallWreckSmoke";
                        position = "engine_smoke1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                    };
                    class RHS_Engine_Fire: RHS_Engine_Smoke {
                        type = "SmallFireFPlace";
                    };
                    class RHS_Engine_Sparks: RHS_Engine_Smoke {
                        type = "RHS_FireSparks";
                    };
                    class RHS_Engine_Sounds: RHS_Engine_Smoke {
                        simulation = "sound";
                        type = "Fire";
                    };
                    class RHS_Engine_Smoke_small1: RHS_Engine_Smoke {
                        type = "WeaponWreckSmoke";
                        position = "engine_smoke2";
                    };
                    class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1 {
                        position = "engine_smoke3";
                    };
                    class RHS_Engine_Smoke_small3: RHS_Engine_Smoke {
                        position = "engine_smoke4";
                    };
                    class RHS_Engine_Fire2: RHS_Engine_Smoke_small3 {
                        type = "SmallFireFPlace";
                    };
                    class RHS_Engine_Sparks2: RHS_Engine_Smoke_small3 {
                        type = "RHS_FireSparks";
                    };
                };
            };
            class HitFuel {
                armor = 4;
                material = -1;
                name = "palivo";
                passThrough = 0;
                radius = 0.15;
            };
            class HitHull {
                armor = 0.8;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 1;
                minimalHit = 0.44;
                explosionShielding = 1;
                radius = 0.25;
            };
            class HitLBWheel: HitLBWheel {
                name = "wheel_1_4_steering";
                armor = 4;
                passThrough = 0.1;
                explosionShielding = 0.9;
                radius = 0.26;
            };
            class HitLMWheel: HitLMWheel {
                name = "wheel_1_3_steering";
                armor = 4;
                passThrough = 0.1;
                explosionShielding = 0.9;
                radius = 0.26;
            };
            class HitLF2Wheel: HitLF2Wheel {
                name = "wheel_1_2_steering";
                armor = 4;
                passThrough = 0.1;
                explosionShielding = 0.9;
                radius = 0.26;
            };
            class HitLFWheel: HitLFWheel {
                name = "wheel_1_1_steering";
                armor = 4;
                passThrough = 0.1;
                explosionShielding = 0.9;
                radius = 0.26;
            };
            class HitRBWheel: HitRBWheel {
                name = "wheel_2_4_steering";
                armor = 4;
                passThrough = 0.1;
                explosionShielding = 0.9;
                radius = 0.26;
            };
            class HitRMWheel: HitRMWheel {
                name = "wheel_2_3_steering";
                armor = 4;
                passThrough = 0.1;
                explosionShielding = 0.9;
                radius = 0.26;
            };
            class HitRF2Wheel: HitRF2Wheel {
                name = "wheel_2_2_steering";
                armor = 4;
                passThrough = 0.1;
                explosionShielding = 0.9;
                radius = 0.26;
            };
            class HitRFWheel: HitRFWheel {
                name = "wheel_2_1_steering";
                armor = 4;
                passThrough = 0.1;
                explosionShielding = 0.9;
                radius = 0.26;
            };
            class HitGlass1 {
                armor = 2.5;
                material = -1;
                name = "glass1";
                visual = "glass1";
                passThrough = 0;
                radius = 0.18;
            };
            class HitGlass2: HitGlass1 {
                name = "glass2";
                visual = "glass2";
            };
            class HitPeriscope1: HitGlass1 {
                armor = -10;
                name = "periscope1";
                visual = "periscope1";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope2: HitGlass1 {
                armor = -10;
                name = "periscope2";
                visual = "periscope2";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope3: HitGlass1 {
                armor = -10;
                name = "periscope3";
                visual = "periscope3";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope4: HitGlass1 {
                armor = -10;
                name = "periscope4";
                visual = "periscope4";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope5: HitGlass1 {
                armor = -10;
                name = "periscope5";
                visual = "periscope5";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope6: HitGlass1 {
                armor = -10;
                name = "periscope6";
                visual = "periscope6";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope7: HitGlass1 {
                armor = -10;
                name = "periscope7";
                visual = "periscope7";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope8: HitGlass1 {
                armor = -10;
                name = "periscope8";
                visual = "periscope8";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope9: HitGlass1 {
                armor = -10;
                name = "periscope9";
                visual = "periscope9";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope10: HitGlass1 {
                armor = -10;
                name = "periscope10";
                visual = "periscope10";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class Hit_Optic_MainSight: HitGlass6 {
                armor = -40;
                explosionShielding = 0.3;
                name = "mainSight";
                visual = "mainSight";
                radius = 0.05;
            };
            class Hit_Optic_ComSight: Hit_Optic_MainSight {
                name = "comSight";
                visual = "comSight";
            };
        };
        cargoGetInAction[] = {"GetInAMV_cargo"};
        cargoGetOutAction[] = {"GetOutLow"};
        getInAction = "GetInHigh";
        getOutAction = "GetOutHigh";
        attenuationEffectType = "TankAttenuation";
        soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 1.5623413, 1};
        soundGetOut[] = {
            "A3\sounds_f\vehicles\armor\noises\get_in_out",
            1.5623413,
            1,
            20
        };
        soundDammage[] = {"", 1.5623413, 1};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start", 1.3981072, 1};
        soundEngineOnExt[] = {
            "A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start",
            1.5623413,
            1,
            200
        };
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop", 1.3981072, 1};
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop",
            1.5623413,
            1,
            200
        };
        buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        soundBuildingCrash[] = {
            "buildCrash0",
            1.25,
            "buildCrash1",
            1.25,
            "buildCrash2",
            1.25,
            "buildCrash3",
            1.25
        };
        WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1, 1, 200};
        WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        soundWoodCrash[] = {
            "woodCrash0",
            1.166,
            "woodCrash1",
            1.166,
            "woodCrash2",
            1.166,
            "woodCrash3",
            1.166,
            "woodCrash4",
            1.166,
            "woodCrash5",
            1.166
        };
        ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        soundArmorCrash[] = {
            "ArmorCrash0",
            1.25,
            "ArmorCrash1",
            1.25,
            "ArmorCrash2",
            1.25,
            "ArmorCrash3",
            1.25
        };
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01",
                    1.3548133,
                    1,
                    200
                };
                frequency = "0.95	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
                volume = "engineOn*camPos*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
            };
            class Engine {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02",
                    1.3981072,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03",
                    1.4466836,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06",
                    1.5011872,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07",
                    1.5623413,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08",
                    1.6309574,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10",
                    1.7079457,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
                volume = "engineOn*camPos*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
            };
            class IdleThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01",
                    1.5623413,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
            };
            class EngineThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02",
                    1.6309574,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03",
                    1.6309574,
                    1,
                    230
                };
                frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06",
                    1.7079457,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07",
                    1.7079457,
                    1,
                    350
                };
                frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08",
                    1,
                    1,
                    350
                };
                frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10",
                    1.1220185,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
            };
            class Idle_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01", 1.3162278, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
            };
            class Engine_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02", 1.3548133, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
            };
            class Engine1_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03", 1.3981072, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
            };
            class Engine2_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06", 1.4466836, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
            };
            class Engine3_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07", 1.5011872, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
            };
            class Engine4_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08", 1.5623413, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
            };
            class Engine5_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10", 1.6309574, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
            };
            class IdleThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01", 1.3548133, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
            };
            class EngineThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02", 1.3981072, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03", 1.4466836, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06", 1.4466836, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07", 1.5011872, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08", 1.5623413, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10", 1.6309574, 1};
                frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
            };
            class NoiseInt {
                sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 1.5011872, 1};
                frequency = "1";
                volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class NoiseExt {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
                    1.6309574,
                    1,
                    150
                };
                frequency = "1";
                volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class TiresRockOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*rock*(speed factor[2, 20])";
            };
            class TiresSandOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*sand*(speed factor[2, 20])";
            };
            class TiresGrassOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*grass*(speed factor[2, 20])";
            };
            class TiresMudOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*mud*(speed factor[2, 20])";
            };
            class TiresGravelOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*asphalt*(speed factor[2, 20])";
            };
            class NoiseOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
                    1.5848932,
                    1,
                    90
                };
                frequency = "1";
                volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
            };
            class TiresRockIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", 1.7079457, 1};
                frequency = "1";
                volume = "(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 1.7079457, 1};
                frequency = "1";
                volume = "(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", 1.7079457, 1};
                frequency = "1";
                volume = "(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 1.7079457, 1};
                frequency = "1";
                volume = "(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", 1.7079457, 1};
                frequency = "1";
                volume = "(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", 1.7079457, 1};
                frequency = "1";
                volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 1.5011872, 1};
                frequency = "1";
                volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
            };
            class breaking_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
            };
            class turn_left_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
            };
            class turn_left_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 1, 1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
            };
            class turn_left_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 1, 1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
            };
            class turn_left_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
        };
        class RenderTargets {
            class driverView1 {
                renderTarget = "rendertarget0";
                class Camera {
                    pointPosition = "pp0";
                    pointDirection = "pd0";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
            class driverView2 {
                renderTarget = "rendertarget1";
                class Camera {
                    pointPosition = "pp1";
                    pointDirection = "pd1";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
            class driverView3 {
                renderTarget = "rendertarget2";
                class Camera {
                    pointPosition = "pp2";
                    pointDirection = "pd2";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
            class driverView4 {
                renderTarget = "rendertarget3";
                class Camera {
                    pointPosition = "pp3";
                    pointDirection = "pd3";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_4_TL", "PIP_4_TR", "PIP_4_BL", "PIP_4_BR"};
            };
            class commanderView1 {
                renderTarget = "rendertarget4";
                class Camera {
                    pointPosition = "pp4";
                    pointDirection = "pd4";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_5_TL", "PIP_5_TR", "PIP_5_BL", "PIP_5_BR"};
            };
            class commanderView2 {
                renderTarget = "rendertarget5";
                class Camera {
                    pointPosition = "pp5";
                    pointDirection = "pd5";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_6_TL", "PIP_6_TR", "PIP_6_BL", "PIP_6_BR"};
            };
            class commanderView3 {
                renderTarget = "rendertarget6";
                class Camera {
                    pointPosition = "pp6";
                    pointDirection = "pd6";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_7_TL", "PIP_7_TR", "PIP_7_BL", "PIP_7_BR"};
            };
        };
        engineEffectSpeed = 5;
        memoryPointsLeftEngineEffect = "EngineEffectL";
        memoryPointsRightEngineEffect = "EngineEffectR";
        enableGPS = 0;
        gunnerCanSee = 14;
        commanderCanSee = 14;
        forceHideDriver = 0;
        gunnerHasFlares = 1;
        weapons[] = {};
        magazines[] = {};
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
        memoryPointDriverOptics = "driverview";
        driverForceOptics = 0;
        class DriverOpticsIn {
            class OpticView: ViewPilot {
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
                hitpoint = "Hit_Optic_Driver";
                initFov = 0.7;
                minFov = 0.7;
                maxFov = 0.7;
            };
        };
        class ViewOptics {
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
            initAngleX = 0;
            minAngleX = -110;
            maxAngleX = 110;
            initAngleY = 0;
            minAngleY = -110;
            maxAngleY = 110;
            opticsZoomMin = 0.7;
            opticsZoomMax = 0.7;
            distanceZoomMin = 20;
            distanceZoomMax = 2000;
        };
        class ViewPilot: ViewPilot {
            initAngleX = 0;
            minAngleX = -85;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
            initFov = 0.7;
            minFov = 0.3;
            maxFov = 1;
        };
        transportSoldier = 8;
        typicalCargo[] = {"rhs_msv_armoredcrew", "rhs_msv_armoredcrew", "rhs_msv_armoredcrew"};
        DriverAction = "rhs_btr70_driver";
        driverInAction = "rhs_btr70_driver";
        cargoaction[] = {
            "RHS_BTR60_Cargo01",
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo",
            "RHS_BTR60_Cargo01",
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo"
        };
        viewCargoShadow = 1;
        viewDriverShadow = 1;
        viewGunnerShadow = 1;
        viewCargoShadowDiff = 0.05;
        viewDriverShadowDiff = 0.05;
        viewGunnerShadowDiff = 0.05;
        transportAmmo = 0;
        supplyRadius = 4.7;
        memoryPointSupply = "doplnovani";
        transportMaxMagazines = 160;
        transportMaxWeapons = 10;
        class Reflectors {
            class Left {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "l svetlo";
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
                    quadratic = 0.15;
                    hardLimitStart = 30;
                    hardLimitEnd = 120;
                };
            };
            class Right: Left {
                position = "Light_R";
                direction = "Light_R_end";
                hitpoint = "p svetlo";
                selection = "Light_R";
            };
            class Right2: Right {
                position = "light_R_flare";
                useFlare = 1;
            };
            class Left2: Left {
                position = "light_L_flare";
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Left", "Right", "Left2", "Right2"}};
        armorLights = 0.1;
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustsEffect";
            };
            class Exhaust2: Exhaust1 {
                position = "vyfuk start 2";
                direction = "vyfuk konec 2";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_btr70\data\btr_main.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main_destruct.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main2.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main2_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main2_destruct.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_in.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_in.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_in_destruct.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",
                "rhsafrf\addons\rhs_btr70\data\scope_glass.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",
                "rhsafrf\addons\rhs_btr70\data\Kamaz_glass.rvmat",
                "rhsafrf\addons\rhs_btr70\data\Kamaz_glass_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\Kamaz_glass_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\Kamaz_glass_in.rvmat",
                "rhsafrf\addons\rhs_btr70\data\Kamaz_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\Kamaz_glass_in_damage.rvmat"
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "cover1",
            "cover2",
            "i1",
            "i2",
            "i3",
            "i4",
            "i5",
            "i6",
            "i7",
            "n1",
            "n2",
            "n3",
            "n4",
            "n5",
            "n6",
            "n7",
            "n8",
            "n9",
            "n10",
            "n11",
            "i8",
            "i9",
            "i10"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_btr70\data\btr70_1_co.paa",
            "rhsafrf\addons\rhs_btr70\data\btr70_2_co.paa",
            "",
            "rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
            "rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
        };
        class UserActions {
            class openDriverViewHatch {
                displayName = "$STR_RHS_BTR70_OpenShield";
                position = "";
                radius = 5;
                hideWindow = 0;
                condition = "((call rhs_fnc_findPlayer)  == driver this) && (this doorPhase 'driverViewHatch' < 0.5)";
                statement = "this animateDoor ['driverViewHatch',1];";
                onlyForPlayer = 1;
            };
            class closeDriverViewHatch: openDriverViewHatch {
                displayName = "$STR_RHS_BTR70_CloseShield";
                condition = "((call rhs_fnc_findPlayer)  == driver this) && (this doorPhase 'driverViewHatch' > 0.5)";
                statement = "this animateDoor ['driverViewHatch',0];";
            };
            class openCommanderViewHatch: openDriverViewHatch {
                condition = "((this turretUnit [1]) == (call rhs_fnc_findPlayer) ) && (this doorPhase 'commanderViewHatch' < 0.5)";
                statement = "this animateDoor ['commanderViewHatch',1];";
            };
            class closeCommanderViewHatch: closeDriverViewHatch {
                condition = "((this turretUnit [1]) == (call rhs_fnc_findPlayer) ) && (this doorPhase 'commanderViewHatch' > 0.5)";
                statement = "this animateDoor ['commanderViewHatch',0];";
            };
            class openl_door: openDriverViewHatch {
                displayName = "$STR_RHS_BTR70_Openl_door";
                position = "l_door";
                radius = 2;
                showwindow = 0;
                condition = "((this animationPhase 'l_door' == 0)&&(speed this <= 10)&&(!surfaceIsWater [(getposASL this select 0), (getposASL this select 1)]))";
                statement = "this animateDoor ['l_door',1];";
            };
            class closel_door: openl_door {
                displayName = "$STR_RHS_BTR70_Closel_door";
                condition = "(this animationPhase 'l_door' == 1)";
                statement = "this animateDoor ['l_door',0];";
            };
            class openr_door: openl_door {
                displayName = "$STR_RHS_BTR70_Openr_door";
                condition = "((this animationPhase 'r_door' == 0)&&(speed this <= 10)&&(!surfaceIsWater [(getposASL this select 0), (getposASL this select 1)]))";
                statement = "this animateDoor ['r_door',1];";
            };
            class closer_door: openr_door {
                displayName = "$STR_RHS_BTR70_Closer_door";
                condition = "(this animationPhase 'r_door' == 1)";
                statement = "this animateDoor ['r_door',0];";
            };
            class opent_door: openr_door {
                displayName = "$STR_RHS_BTR70_Opent_door";
                condition = "((this animationPhase 't_door_1' == 0)&&((speed this > 10)||(surfaceIsWater [(getposASL this select 0), (getposASL this select 1)])))";
                statement = "this animateDoor ['t_door_1',1];";
            };
            class closet_door: openr_door {
                displayName = "$STR_RHS_BTR70_Closet_door";
                condition = "(this animationPhase 't_door_1' == 1)";
                statement = "this animateDoor ['t_door_1',0];";
            };
            class hatch_commander: openDriverViewHatch {
                displayname = "Turn Out";
                shortcut = "turnOut";
                condition = "(this turretUnit [1] isEqualTo (call rhs_fnc_findPlayer)) AND (this turretUnit [9] isEqualTo objNull)";
                statement = "[this,'cHatch',[[1],[10]],0] spawn rhs_fnc_btr_turnOut";
            };
            class hatch_commander_in: openDriverViewHatch {
                displayname = "Turn In";
                shortcut = "turnIn";
                condition = "(this turretUnit [10] isEqualTo (call rhs_fnc_findPlayer))";
                statement = "[this,'cHatch',[[1],[10]],1] spawn rhs_fnc_btr_turnOut";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "(call rhs_fnc_findPlayer) in this;";
                statement = "[this,'cabinlights_hide',[1]] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
        };
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerLeftHandAnimName = "handleElev";
                gunnerRightHandAnimName = "handleHoriz";
                turretInfoType = "RscWeaponZeroing";
                gunnerHasFlares = 0;
                radarType = 0;
                weapons[] = {"rhs_weap_kpvt", "rhs_weap_pkt_btr"};
                magazines[] = {
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250"
                };
                soundServo[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret",
                    7,
                    1,
                    30
                };
                soundServoVertical[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret_elev",
                    7,
                    1,
                    30
                };
                viewGunnerInExternal = 1;
                minElev = -5;
                maxElev = 30;
                minTurn = -360;
                maxTurn = 360;
                maxHorizontalRotSpeed = 0.65;
                maxVerticalRotSpeed = 0.35;
                class TurnIn {
                    limitsArrayTop[] = {{30, -180}, {30, 180}};
                    limitsArrayBottom[] = {
                        {-5, -180},
                        {-5, -21},
                        {4, -20},
                        {7, -15},
                        {4, -10.9683},
                        {-5, -9.1},
                        {-5, 180}
                    };
                };
                gunnerAction = "rhs_btr70_gunner";
                gunnerInAction = "rhs_btr70_gunner";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                gunnerDoor = "l_door";
                usePiP = 2;
                forceHideGunner = 0;
                canHideGunner = 0;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                LODTurnedIn = 1000;
                LODTurnedOut = 1000;
                gunnerOutOpticsModel = "";
                memoryPointGun = "kulas";
                selectionFireAnim = "zasleh1";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                body = "mainturret";
                gun = "maingun";
                visionMode[] = {"Normal"};
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
                gunnerOpticsEffect[] = {"TankGunnerOptics1", "WeaponsOptics", "OpticsCHAbera3"};
                gunnerOpticsColor[] = {1, 1, 1, 1};
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                gunnerForceOptics = 0;
                outGunnerMayFire = 1;
                startEngine = 0;
                primaryGunner = 1;
                primaryObserver = 0;
                stabilizedInAxes = 0;
                canUseScanners = 0;
                allowTabLock = 0;
                gunnerUsesPilotView = 1;
                class HitPoints: HitPoints {
                    class HitTurret {
                        armor = 0.8;
                        material = -1;
                        name = "vez";
                        visual = "vez";
                        passThrough = 1;
                        minimalHit = 0.44;
                        radius = 0.2;
                    };
                    class HitGun {
                        armor = 0.4;
                        material = -1;
                        name = "zbran";
                        visual = "zbran";
                        passThrough = 0.1;
                        minimalHit = 0.44;
                        radius = 0.2;
                    };
                };
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.241379;
                    minFov = 0.241379;
                    maxFov = 0.241379;
                };
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -65;
                    maxAngleX = 85;
                    initAngleY = 0;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class OpticsIn {
                    class Wide: ViewOptics {
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
                        initFov = 0.269231;
                        maxFov = 0.269231;
                        minFov = 0.269231;
                        visionMode[] = {"Normal"};
                        hitpoint = "Hit_Optic_MainSight";
                    };
                    class Night: Wide {
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am_night";
                    };
                    class RearView: Wide {
                        camPos = "view_turret_rear";
                        camDir = "view_turret_rear_dir";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
                        initFov = 0.7;
                        maxFov = 0.7;
                        minFov = 0.7;
                        visionMode[] = {"Normal"};
                        hitpoint = "HitPeriscope10";
                    };
                };
                class Turrets {};
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                };
            };
            class CommanderOptics: CommanderOptics {
                dontCreateAI = 1;
                gunnerDoor = "cHatch";
                proxyType = "CPCommander";
                proxyIndex = 1;
                gunnerName = "$STR_POSITION_COMMANDER";
                primaryGunner = 0;
                primaryObserver = 0;
                gunnerOpticshideCursor = 0;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                LODTurnedIn = 1100;
                LODTurnedOut = 1100;
                canHideGunner = 0;
                body = "obsTurret";
                gun = "obsGun";
                animationSourceBody = "obsTurret";
                animationSourceGun = "obsGun";
                animationSourceHatch = "commanderHatch";
                outGunnerMayFire = 1;
                soundServo[] = {"", 0.00316228, 1};
                startEngine = 0;
                minElev = -5;
                maxElev = 10;
                initElev = 0;
                minTurn = -36;
                maxTurn = 36;
                initTurn = 0;
                commanding = 2;
                viewGunnerInExternal = 1;
                radarType = 0;
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpku2b.p3d";
                gunnerOutOpticsModel = "";
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerOutOpticsColor[] = {1, 1, 1, 1};
                gunnerForceOptics = 0;
                gunnerOutForceOptics = 0;
                gunnerOutOpticshideCursor = 0;
                memoryPointGunnerOutOptics = "obsView_out";
                memoryPointGunnerOptics = "obsView";
                memoryPointsGetInGunner = "pos commander";
                memoryPointsGetInGunnerDir = "pos commander dir";
                gunnerUsesPilotView = 1;
                canUseScanners = 0;
                allowTabLock = 0;
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -65;
                    maxAngleX = 85;
                    initAngleY = 0;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                gunnerOpticsEffect[] = {"TankGunnerOptics2", "OpticsBlur1", "OpticsCHAbera3"};
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    opticsZoomMin = 0.14;
                    opticsZoomMax = 0.14;
                    initFov = 0.14;
                    minFov = 0.14;
                    maxFov = 0.14;
                    visionMode[] = {"Normal", "NVG"};
                };
                hasGunner = 1;
                gunnerAction = "rhs_btr70_commander";
                gunnerInAction = "rhs_btr70_commander";
                weapons[] = {};
                magazines[] = {};
                class Reflectors {
                    class cabin {
                        color[] = {40, 350, 960};
                        ambient[] = {5, 0, 0};
                        intensity = 4;
                        size = 1;
                        innerAngle = 90;
                        outerAngle = 165;
                        coneFadeCoef = 1;
                        position = "cabin_light";
                        direction = "cabin_light_dir";
                        hitpoint = "cabin_light";
                        selection = "cabin_light";
                        useFlare = 1;
                        flareSize = 1;
                        flareMaxDistance = 5;
                        dayLight = 1;
                        blinking = 0;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 50;
                            hardLimitStart = 1;
                            hardLimitEnd = 1.5;
                        };
                    };
                    class cargo_light_1: cabin {
                        color[] = {40, 350, 960};
                        position = "cargo_light_1";
                        direction = "cargo_light_1_dir";
                        hitpoint = "cargo_light_1";
                        selection = "cargo_light_1";
                        intensity = 3;
                        useFlare = 0;
                        coneFadeCoef = 0.1;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 70;
                            hardLimitStart = 0.5;
                            hardLimitEnd = 1;
                        };
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                };
                class Hitpoints {};
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_boat_3";
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
                commanding = -2;
                weapons[] = {"rhs_weap_DummyLauncher"};
                memoryPointsGetInGunner = "cargo9";
                memoryPointsGetInGunnerDir = "cargo9 dir";
                gunnerName = "Passenger (Top Middle)";
                gunnerCompartments = "Compartment2";
                memoryPointGunnerOptics = "";
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                proxyIndex = 9;
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerAction = "passenger_inside_2";
                gunnerName = "Passenger (Top Front Left)";
                memoryPointsGetInGunner = "cargo10";
                memoryPointsGetInGunnerDir = "cargo10 dir";
                proxyIndex = 10;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerAction = "passenger_flatground_3";
                gunnerName = "Passenger (Top Front Right)";
                memoryPointsGetInGunner = "cargo11";
                memoryPointsGetInGunnerDir = "cargo11 dir";
                proxyIndex = 11;
            };
            class CargoTurret_04: CargoTurret_01 {
                gunnerAction = "rhs_cargosys_btr70_12";
                memoryPointsGetInGunner = "cargo12";
                memoryPointsGetInGunnerDir = "cargo12 dir";
                gunnerName = "Passenger (Top Left)";
                proxyIndex = 12;
            };
            class CargoTurret_05: CargoTurret_01 {
                gunnerAction = "passenger_inside_3";
                gunnerName = "Passenger (Top Rear Left)";
                memoryPointsGetInGunner = "cargo13";
                memoryPointsGetInGunnerDir = "cargo13 dir";
                proxyIndex = 13;
            };
            class CargoTurret_06: CargoTurret_01 {
                gunnerAction = "rhs_cargosys_btr70_14";
                gunnerName = "Passenger (Top Rear)";
                memoryPointsGetInGunner = "cargo14";
                memoryPointsGetInGunnerDir = "cargo14 dir";
                proxyIndex = 14;
                maxTurn = 71;
                minTurn = -75;
            };
            class CargoTurret_07: CargoTurret_01 {
                gunnerAction = "passenger_flatground_4";
                gunnerName = "Passenger (Top Right Middle)";
                memoryPointsGetInGunner = "cargo15";
                memoryPointsGetInGunnerDir = "cargo15 dir";
                proxyIndex = 15;
            };
            class CargoTurret_08: CargoTurret_01 {
                gunnerAction = "rhs_cargosys_btr60_06";
                gunnerName = "Passenger (Top Front)";
                memoryPointsGetInGunner = "cargo16";
                memoryPointsGetInGunnerDir = "cargo16 dir";
                proxyIndex = 16;
                ejectDeadGunner = 1;
                maxElev = 0.001;
                minElev = 0;
                maxTurn = 0.001;
                minTurn = 0;
                enabledByAnimationSource = "cargoHandler1";
            };
            class Commander_Out: CargoTurret {
                gunnerCompartments = "Compartment3";
                gunnerName = "Commander Out";
                proxyType = "CPCommander";
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                proxyIndex = 2;
                gunnerAction = "RHS_VehicleTurnout_1";
                gunnerInAction = "RHS_VehicleTurnout_1";
                personTurretAction = "RHS_VehicleTurnout_1";
                weapons[] = {"rhs_weap_DummyLauncher"};
                class Hitpoints {};
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_btr_init;(_this select 0) addeventhandler ['HandleDamage',{[_this,0.1,0.002,0.9,0.2] spawn rhs_fnc_activeTirePressure; _this select 2;} ];";
                postInit = "_this call rhs_fnc_reapplyTextures";
                engine = "_this call rhs_fnc_btr_handleHatch;_this call rhs_fnc_engineCheckDamage;";
            };
            class RHS_BTR_Init {
                init = "(_this select 0) lockTurret [[10],true];";
                getOut = "(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
                getIn = "(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
            };
        };
        class Components: Components {
            class VehicleSystemsDisplayManagerComponentLeft {
                class EmptyDisplay {
                    componentType = "EmptyDisplayComponent";
                };
                class CrewDisplay {
                    componentType = "CrewDisplayComponent";
                    resource = "RscCustomInfoCrew";
                };
            };
            class VehicleSystemsDisplayManagerComponentRight {
                class EmptyDisplay {
                    componentType = "EmptyDisplayComponent";
                };
                class CrewDisplay {
                    componentType = "CrewDisplayComponent";
                    resource = "RscCustomInfoCrew";
                };
            };
        };
    };
    class rhs_btr70_vmf: rhs_btr_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr70_vmf.paa";
        scope = 2;
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']", "['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"};
        driverRightLegAnimName = "pedalR";
        driverLeftLegAnimName = "pedalL";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_BTR70_Name";
        vehicleClass = "rhs_vehclass_apc";
        editorSubcategory = "rhs_EdSubcat_apc";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_btr70\data\btr70_1_co.paa",
            "rhsafrf\addons\rhs_btr70\data\btr70_2_co.paa",
            "",
            "rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
            "rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr70\data\btr70_1_co.paa", "rhsafrf\addons\rhs_btr70\data\btr70_2_co.paa"};
                factions[] = {
                    "rhs_faction_msv",
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class chdkz {
                displayName = "CHDKZ";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr70\data\btr70_chdkz_1_co.paa", "rhsafrf\addons\rhs_btr70\data\btr70_chdkz_2_co.paa"};
                factions[] = {};
            };
        };
        textureList[] = {};
    };
    class rhs_btr70_vdv: rhs_btr70_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr70_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']", "['Label', cBTRBackArmSymPlaces, 'Army',2]", "['Label', cBTRPlnSymPlaces, 'Platoon',11]"};
    };
    class rhs_btr70_vv: rhs_btr70_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr70_vv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_armoredcrew";
        rhs_decalParameters[] = {
            "['Number', cBTR3NumberPlaces, 'Default']",
            "_gvard1",
            "_gvard2",
            "_gvard3",
            "['Label', cBTRVVLetterSymPlaces, 'Platoon',13]",
            "['Label', cBTROMONSymbolPlaces,'Army',10]"
        };
    };
    class rhs_btr70_msv: rhs_btr70_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr70_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'DefaultRed']", "['Label', cBTRPlnSymPlaces, 'Platoon',12]"};
    };
    class rhs_btr80_msv: rhs_btr70_msv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr80_msv.paa";
        Icon = "\rhsafrf\addons\rhs_c_btr\icons\rhs_btr80_icon_ca.paa";
        picture = "\rhsafrf\addons\rhs_c_btr\icons\rhs_btr80_pic_ca.paa";
        driverForceOptics = 0;
        DriverAction = "rhs_btr80_driver";
        class UserActions {
            class openDriverViewHatch {
                displayName = "$STR_RHS_BTR70_OpenShield";
                position = "";
                radius = 5;
                hideWindow = 0;
                condition = "((call rhs_fnc_findPlayer)  == driver this) && (this animationPhase 'driverViewHatch' < 0.5)";
                statement = "this animateDoor ['driverViewHatch',1];";
                onlyForPlayer = 1;
            };
            class closeDriverViewHatch: openDriverViewHatch {
                displayName = "$STR_RHS_BTR70_CloseShield";
                condition = "((call rhs_fnc_findPlayer) == driver this) && (this animationPhase 'driverViewHatch' > 0.5)";
                statement = "this animateDoor ['driverViewHatch',0];";
            };
            class openCommanderViewHatch: openDriverViewHatch {
                condition = "((this turretUnit [1]) == (call rhs_fnc_findPlayer) ) && (this animationPhase 'commanderViewHatch' < 0.5)";
                statement = "this animateDoor ['commanderViewHatch',1];";
            };
            class closeCommanderViewHatch: closeDriverViewHatch {
                condition = "((this turretUnit [1]) == (call rhs_fnc_findPlayer) ) && (this animationPhase 'commanderViewHatch' > 0.5)";
                statement = "this animateDoor ['commanderViewHatch',0];";
            };
            class hatch_commander: openDriverViewHatch {
                displayname = "Turn Out";
                shortcut = "turnOut";
                condition = "(this turretUnit [1] isEqualTo (call rhs_fnc_findPlayer)) AND (this turretUnit [9] isEqualTo objNull)";
                statement = "[this,'cHatch',[[1],[11]],0] spawn rhs_fnc_btr_turnOut";
            };
            class hatch_commander_in: openDriverViewHatch {
                displayname = "Turn In";
                shortcut = "turnIn";
                condition = "(this turretUnit [11] isEqualTo (call rhs_fnc_findPlayer))";
                statement = "[this,'cHatch',[[1],[11]],1] spawn rhs_fnc_btr_turnOut";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "(call rhs_fnc_findPlayer) in this;";
                statement = "[this,'cabinlights_hide',[1]] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
        };
        class AnimationSources: AnimationSources {
            class HitPeriscope11: HitPeriscope1 {
                hitpoint = "HitPeriscope11";
            };
            class HitPeriscope12: HitPeriscope1 {
                hitpoint = "HitPeriscope12";
            };
            class HitPeriscope13: HitPeriscope1 {
                hitpoint = "HitPeriscope13";
            };
            class HitPeriscope14: HitPeriscope1 {
                hitpoint = "HitPeriscope14";
            };
            class HitPeriscope15: HitPeriscope1 {
                hitpoint = "HitPeriscope15";
            };
            class Hit_Optic_Turret_Rear: HitPeriscope1 {
                hitpoint = "Hit_Optic_Turret_Rear";
            };
        };
        class HitPoints: HitPoints {
            class HitPeriscope11: HitGlass1 {
                armor = -10;
                name = "periscope11";
                visual = "periscope11";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope12: HitGlass1 {
                armor = -10;
                name = "periscope12";
                visual = "periscope12";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope13: HitGlass1 {
                armor = -10;
                name = "periscope13";
                visual = "periscope13";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope14: HitGlass1 {
                armor = -10;
                name = "periscope14";
                visual = "periscope14";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope15: HitGlass1 {
                armor = -10;
                name = "periscope15";
                visual = "periscope15";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class Hit_Optic_Turret_Rear: Hit_Optic_MainSight {
                name = "Hit_Optic_Turret_Rear";
                visual = "Hit_Optic_Turret_Rear";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                minElev = -4;
                maxElev = 60;
                minTurn = -360;
                maxTurn = 360;
                class TurnIn {
                    limitsArrayTop[] = {{60, -180}, {60, 180}};
                    limitsArrayBottom[] = {
                        {2, -180},
                        {-4, -150},
                        {-4, 0},
                        {-4, 150},
                        {2, 180}
                    };
                };
                turretInfoType = "RHS_RscWeapon1PZ32_FCS";
                gunnerForceOptics = 0;
                weapons[] = {"rhs_weap_kpvt", "rhs_weap_pkt_btr", "rhs_weap_902a"};
                magazines[] = {
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_145x115mm_50",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17_6"
                };
                class OpticsIn {
                    class 1pz3x12 {
                        opticsDisplayName = "DAY";
                        initAngleX = 0;
                        minAngleX = -110;
                        maxAngleX = 110;
                        initAngleY = 0;
                        minAngleY = -110;
                        maxAngleY = 110;
                        opticsZoomMin = 0.14;
                        opticsZoomMax = 0.14;
                        distanceZoomMin = 200;
                        distanceZoomMax = 2000;
                        initFov = 0.583333;
                        minFov = 0.583333;
                        maxFov = 0.583333;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pz32s";
                        hitpoint = "Hit_Optic_MainSight";
                    };
                    class 1pz3x4: 1pz3x12 {
                        opticsDisplayName = "DAY4";
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pz32";
                    };
                    class bpk142n: 1pz3x12 {
                        opticsDisplayName = "NIGHT";
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                        hitpoint = "Hit_Optic_MainSight";
                    };
                    class RearView: 1pz3x12 {
                        opticsDisplayName = "REAR";
                        camPos = "view_turret_rear";
                        camDir = "view_turret_rear_dir";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
                        initFov = 0.7;
                        maxFov = 0.7;
                        minFov = 0.7;
                        visionMode[] = {"Normal"};
                        hitpoint = "Hit_Optic_Turret_Rear";
                    };
                };
            };
            class CommanderOptics: CommanderOptics {
                gunnerForceOptics = 0;
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                class Reflectors {
                    class cabin {
                        color[] = {40, 350, 960};
                        ambient[] = {5, 0, 0};
                        intensity = 4;
                        size = 1;
                        innerAngle = 90;
                        outerAngle = 165;
                        coneFadeCoef = 1;
                        position = "cabin_light";
                        direction = "cabin_light_dir";
                        hitpoint = "cabin_light";
                        selection = "cabin_light";
                        useFlare = 1;
                        flareSize = 1;
                        flareMaxDistance = 5;
                        dayLight = 1;
                        blinking = 0;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 50;
                            hardLimitStart = 1;
                            hardLimitEnd = 1.5;
                        };
                    };
                    class cargo_light_1: cabin {
                        color[] = {40, 350, 960};
                        position = "cargo_light_1";
                        direction = "cargo_light_1_dir";
                        hitpoint = "cargo_light_1";
                        selection = "cargo_light_1";
                        intensity = 3;
                        useFlare = 0;
                        coneFadeCoef = 0.1;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 70;
                            hardLimitStart = 0.5;
                            hardLimitEnd = 1.5;
                        };
                    };
                };
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_boat_3";
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
                commanding = -2;
                weapons[] = {"rhs_weap_DummyLauncher"};
                memoryPointsGetInGunner = "cargo9";
                memoryPointsGetInGunnerDir = "cargo9 dir";
                gunnerName = "Passenger (Top Middle)";
                gunnerCompartments = "Compartment2";
                memoryPointGunnerOptics = "";
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                proxyIndex = 9;
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerAction = "passenger_inside_2";
                gunnerName = "Passenger (Top Front Left)";
                memoryPointsGetInGunner = "cargo10";
                memoryPointsGetInGunnerDir = "cargo10 dir";
                proxyIndex = 10;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerAction = "passenger_flatground_3";
                gunnerName = "Passenger (Top Front Right)";
                memoryPointsGetInGunner = "cargo11";
                memoryPointsGetInGunnerDir = "cargo11 dir";
                proxyIndex = 11;
            };
            class CargoTurret_04: CargoTurret_01 {
                gunnerAction = "rhs_cargosys_btr70_12";
                memoryPointsGetInGunner = "cargo12";
                memoryPointsGetInGunnerDir = "cargo12 dir";
                gunnerName = "Passenger (Top Left)";
                proxyIndex = 12;
            };
            class CargoTurret_05: CargoTurret_01 {
                gunnerAction = "passenger_inside_3";
                gunnerName = "Passenger (Top Rear Left)";
                memoryPointsGetInGunner = "cargo13";
                memoryPointsGetInGunnerDir = "cargo13 dir";
                proxyIndex = 13;
            };
            class CargoTurret_06: CargoTurret_01 {
                gunnerAction = "rhs_cargosys_btr70_14";
                gunnerName = "Passenger (Top Back Left)";
                memoryPointsGetInGunner = "cargo14";
                memoryPointsGetInGunnerDir = "cargo14 dir";
                proxyIndex = 14;
                maxTurn = 71;
                minTurn = -75;
            };
            class CargoTurret_07: CargoTurret_01 {
                gunnerAction = "passenger_flatground_4";
                gunnerName = "Passenger (Top Right Middle)";
                memoryPointsGetInGunner = "cargo15";
                memoryPointsGetInGunnerDir = "cargo15 dir";
                proxyIndex = 15;
            };
            class CargoTurret_08: CargoTurret_01 {
                gunnerAction = "rhs_cargosys_btr80_01";
                gunnerName = "Passenger (Top Front)";
                memoryPointsGetInGunner = "cargo16";
                memoryPointsGetInGunnerDir = "cargo16 dir";
                proxyIndex = 16;
                ejectDeadGunner = 1;
                maxElev = 0.001;
                minElev = 0;
                maxTurn = 0.001;
                minTurn = 0;
                enabledByAnimationSource = "cargoHandler1";
            };
            class CargoTurret_09: CargoTurret_08 {
                proxyIndex = 17;
                gunnerName = "Passenger (Top Back Right)";
                gunnerAction = "rhs_cargosys_btr70_04";
                memoryPointsGetInGunner = "cargo17";
                memoryPointsGetInGunnerDir = "cargo17 dir";
            };
            class Commander_Out: Commander_Out {};
        };
        rhs_topPositions[] = {9, 10, 11, 12, 13, 14, 15, 16, 17};
        getInProxyOrder[] = {
            1,
            5,
            2,
            6,
            3,
            7,
            4,
            8,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            16,
            17
        };
        normalSpeedForwardCoef = 0.6;
        slowSpeedForwardCoef = 0.45;
        terrainCoef = 1.2;
        turnCoef = 2.5;
        simulation = "carx";
        dampersBumpCoef = 3;
        precision = 10;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 85;
        fuelCapacity = 30;
        RHS_fuelCapacity = 300;
        wheelCircumference = 3.55;
        brakeIdleSpeed = 1;
        canFloat = 1;
        waterLeakiness = 2.5;
        waterSpeedFactor = 0.8;
        maxFordingDepth = 1.2;
        waterResistance = 0.5;
        waterDamageEngine = 0.9;
        waterAngularDampingCoef = 5;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterPPInVehicle = 0;
        waterResistanceCoef = 0.195;
        engineShiftY = 0.3;
        engineShiftZ = -3;
        rudderForceCoef = 3.7;
        rudderForceCoefAtMaxSpeed = 0.3;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -7.38,
                "N",
                0,
                "D1",
                7.82,
                "D2",
                4.03,
                "D3",
                2.5,
                "D4",
                1.53,
                "D5",
                1
            };
            AmphibiousRatios[] = {"R1", -20, "N", 0, "D1", 25};
            TransmissionRatios[] = {"High", 6.13};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.85, 0.85, 0.85, 0.85, 0.85};
        switchTime = 0.6;
        latency = 1.5;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 75;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.204778, 0.550318},
            {0.341297, 0.898089},
            {0.546075, 1},
            {0.614334, 1},
            {0.682594, 0.955414},
            {0.750853, 0.904459},
            {0.819113, 0.847134},
            {1.18601, 0}
        };
        maxOmega = 306.83;
        enginePower = 194;
        peakTorque = 785;
        idleRPM = 600;
        redRPM = 2930;
        engineLosses = 14;
        thrustDelay = 0.5;
        engineBrakeCoef = 0.7;
        antiRollbarForceCoef = 0;
        antiRollbarForceLimit = 0.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 40;
        class Wheels {
            class LF {
                width = 0.33;
                steering = 1;
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                mass = 160;
                MOI = 23;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 12500;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {-0.125, -1, 0};
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                maxCompression = 0.14;
                mMaxDroop = 0.14;
                MaxDroop = 0.14;
                sprungMass = 1595;
                springStrength = 135000;
                springDamperRate = 12471;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 3.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1.13}, {1, 1}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
            };
            class LR2: LR {
                steering = 0;
                boneName = "wheel_1_3_damper";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
                maxHandBrakeTorque = 10000;
            };
            class LR3: LR2 {
                boneName = "wheel_1_4_damper";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
                suspForceAppPointOffset = "wheel_1_4_axis";
                tireForceAppPointOffset = "wheel_1_4_axis";
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                steering = 1;
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
            class RR2: RR {
                steering = 0;
                boneName = "wheel_2_3_damper";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
                maxHandBrakeTorque = 10000;
            };
            class RR3: RR2 {
                boneName = "wheel_2_4_damper";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
                suspForceAppPointOffset = "wheel_2_4_axis";
                tireForceAppPointOffset = "wheel_2_4_axis";
            };
        };
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_BTR80_Name";
        model = "\rhsafrf\addons\rhs_btr80\rhs_btr80.p3d";
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_btr70\data\btr_main.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main_destruct.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main2.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main2_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_main2_destruct.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_in.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_in.rvmat",
                "rhsafrf\addons\rhs_btr70\data\btr_in_destruct.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_btr80_01.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_dam_btr80_01.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_destr_btr80_01.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_btr80_02.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_dam_btr80_02.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_destr_btr80_02.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_btr80_03.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_dam_btr80_03.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_destr_btr80_03.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_btr80_04.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_dam_btr80_04.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_destr_btr80_04.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_btr80_01_int.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_btr80_01_int.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_destr_btr80_01.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_btr80_02_int.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_btr80_02_int.rvmat",
                "rhsafrf\addons\rhs_btr80\data\rhs_destr_btr80_01.rvmat",
                "rhsafrf\addons\rhs_btr70\data\scope_glass.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_std_co.paa",
            "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_std_co.paa",
            "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_std_co.paa",
            "rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
            "rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_std_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_std_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_std_co.paa"};
                factions[] = {
                    "rhs_faction_msv",
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class tricolourhard {
                displayName = "Tri-Colour (hard-edge)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_tri01_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_tri01_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_tri01_co.paa"};
                factions[] = {
                    "rhs_faction_msv",
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class tricolourparade {
                displayName = "Tri-Colour (parade)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_tri02_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_tri02_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_tri02_co.paa"};
                factions[] = {
                    "rhs_faction_msv",
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class rhs_sand {
                displayName = "Sand";
                author = "beaar";
                textures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa"};
                factions[] = {};
            };
        };
        textureList[] = {};
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
            class rhs_decalPlatoon: rhs_decalPlatoon {};
            class rhs_decalArmy_type: rhs_decalArmy_type {};
            class rhs_decalArmy: rhs_decalArmy {};
            class rhs_decalRightTurret_type: rhs_decalRightTurret_type {};
            class rhs_decalRightTurret: rhs_decalRightTurret {};
            class rhs_decalFront_type: rhs_decalFront_type {};
            class rhs_decalFront: rhs_decalFront {};
            class rhs_decalVV_type: rhs_decalVV_type {};
            class rhs_decalVV: rhs_decalVV {};
            class crate_l1_unhide: crate_l1_unhide {};
            class crate_l2_unhide: crate_l2_unhide {};
            class crate_l3_unhide: crate_l3_unhide {};
            class crate_r1_unhide: crate_r1_unhide {};
            class crate_r2_unhide: crate_r2_unhide {};
            class wheel_1_unhide: wheel_1_unhide {};
            class rhs_disableHabar: rhs_disableHabar {};
            class driverViewHatch: driverViewHatch {};
            class commanderViewHatch: commanderViewHatch {};
            class rhs_externalMount: rhs_externalMount {};
        };
        rhs_randomizedHabar[] = {
            "crate_l1_unhide",
            "crate_l2_unhide",
            "crate_l3_unhide",
            "crate_r1_unhide",
            "crate_r2_unhide",
            "wheel_1_unhide"
        };
        class EventHandlers: EventHandlers {
            class RHS_BTR_Init {
                init = "(_this select 0) lockTurret [[11],true];";
                getOut = "(_this + [[11],[9]]) call rhs_fnc_btr_hatch";
                getIn = "(_this + [[11],[9]]) call rhs_fnc_btr_hatch";
            };
        };
    };
    class rhs_btr80_vdv: rhs_btr80_msv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr80_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']", "['Label', cBTRBackArmSymPlaces, 'Army',2]", "['Label', cBTRPlnSymPlaces, 'Platoon',11]"};
    };
    class rhs_btr80_vv: rhs_btr80_msv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr80_vv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_armoredcrew";
        rhs_decalParameters[] = {
            "['Number', cBTR3NumberPlaces, 'Default']",
            "_gvard1",
            "_gvard2",
            "_gvard3",
            "['Label', cBTRVVLetterSymPlaces, 'Platoon',13]",
            "['Label', cBTROMONSymbolPlaces,'Army',10]"
        };
    };
    class rhs_btr80_vmf: rhs_btr80_msv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr80_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']", "['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"};
    };
    class rhs_btr80a_msv: rhs_btr80_msv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr80a_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_BTR80A_Name";
        model = "\rhsafrf\addons\rhs_btr80\rhs_btr80a.p3d";
        Icon = "\rhsafrf\addons\rhs_c_btr\icons\rhs_btr80a_icon_ca.paa";
        picture = "\rhsafrf\addons\rhs_c_btr\icons\rhs_btr80a_pic_ca.paa";
        transportSoldier = 7;
        weaponsGroup1 = 128;
        weaponsGroup4 = 64;
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_std_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_std_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_std_co.paa"};
                factions[] = {};
            };
            class tricolourhard {
                displayName = "Tri-Colour (hard-edge)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_tri01_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_tri01_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_tri01_co.paa"};
                factions[] = {};
            };
            class rhs_sand {
                displayName = "Sand";
                author = "beaar";
                textures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa", "rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa"};
                factions[] = {};
            };
        };
        textureList[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "RHS_RscWeaponBPK42_BTR80A_FCS";
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                gunnerAction = "rhs_btr80a_gunner";
                gunnerLeftHandAnimName = "handleHoriz";
                gunnerRightHandAnimName = "handleElev";
                minElev = -7;
                maxElev = 70;
                minTurn = -360;
                maxTurn = 360;
                class TurnIn {
                    limitsArrayTop[] = {{70, -180}, {70, 180}};
                    limitsArrayBottom[] = {
                        {-1.5, -180},
                        {-1, -169},
                        {1, -163},
                        {-1, -157},
                        {-7, -155},
                        {-7, 0},
                        {-7, 154},
                        {-2, 157},
                        {-1.5, 180}
                    };
                };
                class OpticsIn {
                    class bpk142 {
                        opticsDisplayName = "DAY";
                        initAngleX = 0;
                        minAngleX = -110;
                        maxAngleX = 110;
                        initAngleY = 0;
                        minAngleY = -110;
                        maxAngleY = 110;
                        opticsZoomMin = 0.14;
                        opticsZoomMax = 0.14;
                        distanceZoomMin = 200;
                        distanceZoomMax = 2000;
                        initFov = 0.125;
                        minFov = 0.125;
                        maxFov = 0.125;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                        hitpoint = "Hit_Optic_MainSight";
                    };
                    class bpk142n: bpk142 {
                        opticsDisplayName = "NIGHT";
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
                    };
                };
                weapons[] = {"rhs_weap_2a72_btr", "rhs_weap_pkt_btr80a", "rhs_weap_902a"};
                magazines[] = {
                    "rhs_mag_3uof8_150",
                    "rhs_mag_3ubr11_150",
                    "rhs_mag_762x54mm_2000",
                    "rhs_mag_3d17_6"
                };
            };
            class CommanderOptics: CommanderOptics {};
            class CargoTurret_01: CargoTurret_01 {
                gunnerName = "Passenger (Top Right)";
                gunnerAction = "passenger_flatground_2";
            };
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
            class CargoTurret_07: CargoTurret_07 {};
            class CargoTurret_08: CargoTurret_08 {};
            class CargoTurret_09: CargoTurret_09 {};
            class Commander_Out: Commander_Out {};
        };
        cargoProxyIndexes[] = {4, 1, 2, 6, 3, 7, 5};
        getInProxyOrder[] = {
            4,
            1,
            2,
            6,
            3,
            7,
            5,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            16,
            17
        };
        rhs_topPositions[] = {9, 10, 11, 12, 13, 14, 15, 16, 17};
        class AnimationSources: AnimationSources {
            class recoil_source {
                source = "reload";
                weapon = "rhs_weap_2a72_btr";
            };
            class muzzle_hide_hmg: recoil_source {};
            class muzzle_rot_hmg: recoil_source {
                source = "ammorandom";
            };
            class muzzle_rot_mg: muzzle_rot_hmg {
                weapon = "rhs_weap_pkt_btr80a";
            };
        };
    };
    class rhs_btr80a_vdv: rhs_btr80a_msv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr80a_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']", "['Label', cBTRBackArmSymPlaces, 'Army',2]", "['Label', cBTRPlnSymPlaces, 'Platoon',11]"};
    };
    class rhs_btr80a_vv: rhs_btr80a_msv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr80a_vv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_armoredcrew";
        rhs_decalParameters[] = {
            "['Number', cBTR3NumberPlaces, 'Default']",
            "_gvard1",
            "_gvard2",
            "_gvard3",
            "['Label', cBTRVVLetterSymPlaces, 'Platoon',13]",
            "['Label', cBTROMONSymbolPlaces,'Army',10]"
        };
    };
    class rhs_btr80a_vmf: rhs_btr80a_msv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr80a_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']", "['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"};
    };
};
class CfgNonAIVehicles {
    class ProxyRetex;
    class Proxyrhs_wheel_1: ProxyRetex {
        hiddenSelections[] = {"camo1", "camo2", "camo3", "cover1", "cover2"};
        model = "\rhsafrf\addons\rhs_btr70\habar\rhs_wheel_1";
    };
    class Proxyrhs_wheel_2: Proxyrhs_wheel_1 {
        model = "\rhsafrf\addons\rhs_btr70\habar\rhs_wheel_2";
    };
};
