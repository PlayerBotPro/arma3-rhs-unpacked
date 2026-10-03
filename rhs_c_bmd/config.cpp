class CfgPatches {
    class rhs_c_bmd {
        units[] = {
            "rhs_bmd1",
            "rhs_bmd1k",
            "rhs_bmd1p",
            "rhs_bmd1pk",
            "rhs_bmd1r",
            "rhs_bmd2",
            "rhs_bmd2k",
            "rhs_bmd2m"
        };
        weapons[] = {};
        requiredVersion = 1.42;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_heavyweapons",
            "rhs_decals",
            "rhs_optics",
            "rhs_c_troops"
        };
        name = "BMD-1 & 2 IFV";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        rhs_bmd_commander = "rhs_bmd_commander";
        rhs_bmd_mggunner = "rhs_bmd_mggunner";
        rhs_bmd_gunner = "rhs_bmd_gunner";
        rhs_bmd_commander_in = "rhs_bmd_commander_in";
        rhs_bmd_gunner_in = "rhs_bmd_gunner_in";
        rhs_bmd_gunner_r_in = "rhs_bmd_gunner_r_in";
        rhs_bmd_cargo_in = "rhs_bmd_cargo_in";
        rhs_bmd_cargostatic_01 = "rhs_bmd_cargostatic_01";
        rhs_bmd_cargostatic_02 = "rhs_bmd_cargostatic_02";
        rhs_bmd_cargostatic_03 = "rhs_bmd_cargostatic_03";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class rhs_crew_in: Default {
            actions = "CargoActions";
            aiming = "aimingNo";
            aimingBody = "aimingNo";
            legs = "legsNo";
            head = "headNo";
            disableWeapons = 1;
            interpolationRestart = 1;
            soundEdge[] = {0.45};
            boundingSphere = 2.5;
            canPullTrigger = 0;
            leaning = "crewShake";
            rightHandIKCurve[] = {1};
            leftHandIKCurve[] = {1};
            rightLegIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            ConnectTo[] = {};
            InterpolateTo[] = {"Unconscious", 0.1};
        };
        class KIA_rhs_bmd_commander: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_bmd\anims\kia_rhs_bmd_commanderout.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class KIA_rhs_bmd_gunner: KIA_rhs_bmd_commander {
            file = "\rhsafrf\addons\rhs_bmd\anims\kia_rhs_bmd_gunnerout.rtm";
        };
        class rhs_bmd_commander: Crew {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_commanderout.rtm";
            interpolateTo[] = {"KIA_rhs_bmd_commander", 1};
        };
        class rhs_bmd_mggunner: Crew {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_mggunnerout.rtm";
            interpolateTo[] = {"KIA_rhs_bmd_gunner", 1};
        };
        class rhs_bmd_gunner: Crew {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_gunnerout.rtm";
            interpolateTo[] = {"KIA_rhs_bmd_gunner", 1};
        };
        class rhs_bmd_commander_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd1_commander_in.rtm";
            interpolateTo[] = {"rhs_bmd_commander_in", 1};
        };
        class rhs_bmd_gunner_r_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd1_gunner_r_in.rtm";
            interpolateTo[] = {"rhs_bmd_gunner_r_in", 1};
        };
        class rhs_bmd_gunner_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd1_gunner_in.rtm";
            interpolateTo[] = {"rhs_bmd_gunner_in", 1};
        };
        class rhs_bmd_cargo_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd1_cargo_in.rtm";
            interpolateTo[] = {"rhs_bmd_cargo_in", 1};
        };
        class KIA_rhs_bmd_commander_in: KIA_rhs_bmd_commander {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd1_commander_in.rtm";
        };
        class KIA_rhs_bmd_gunner_r_in: KIA_rhs_bmd_commander {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd1_gunner_r_in.rtm";
        };
        class KIA_rhs_bmd_gunner_in: KIA_rhs_bmd_commander {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd1_gunner_in.rtm";
        };
        class KIA_rhs_bmd_cargo_in: KIA_rhs_bmd_commander {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd1_cargo_in.rtm";
        };
        class rhs_bmd_cargostatic_01: Crew {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_01.rtm";
            interpolateTo[] = {"KIA_rhs_bmd_gunner", 1};
            connectTo[] = {
                "rhs_bmd_cargostatic_01_var0",
                0.2,
                "rhs_bmd_cargostatic_01_var1",
                0.2,
                "rhs_bmd_cargostatic_01_var2",
                0.2,
                "rhs_bmd_cargostatic_01_var3",
                0.2,
                "rhs_bmd_cargostatic_01_var4",
                0.2
            };
            equivalentTo = "rhs_bmd_cargostatic_01";
            variantsPlayer[] = {
                "rhs_bmd_cargostatic_01_var0",
                0.2,
                "rhs_bmd_cargostatic_01_var1",
                0.2,
                "rhs_bmd_cargostatic_01_var2",
                0.2,
                "rhs_bmd_cargostatic_01_var3",
                0.2,
                "rhs_bmd_cargostatic_01_var4",
                0.2
            };
            variantsAI[] = {
                "rhs_bmd_cargostatic_01_var0",
                0.2,
                "rhs_bmd_cargostatic_01_var1",
                0.2,
                "rhs_bmd_cargostatic_01_var2",
                0.2,
                "rhs_bmd_cargostatic_01_var3",
                0.2,
                "rhs_bmd_cargostatic_01_var4",
                0.2
            };
            variantAfter[] = {0.0001, 0.0001, 0.0001};
        };
        class rhs_bmd_cargostatic_01_var0: rhs_bmd_cargostatic_01 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_01_var1: rhs_bmd_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_01_var1.rtm";
            speed = 0.059701;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_01_var2: rhs_bmd_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_01_var2.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_01_var3: rhs_bmd_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_01_var3.rtm";
            speed = 0.033;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_01_var4: rhs_bmd_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_01_var4.rtm";
            speed = 0.074534;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_02: rhs_bmd_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_02.rtm";
            connectTo[] = {
                "rhs_bmd_cargostatic_02_var0",
                0.1,
                "rhs_bmd_cargostatic_02_var1",
                0.1,
                "rhs_bmd_cargostatic_02_var2",
                0.1,
                "rhs_bmd_cargostatic_02_var3",
                0.1
            };
            equivalentTo = "rhs_bmd_cargostatic_02";
            variantsPlayer[] = {
                "rhs_bmd_cargostatic_02_var0",
                0.1,
                "rhs_bmd_cargostatic_02_var1",
                0.1,
                "rhs_bmd_cargostatic_02_var2",
                0.1,
                "rhs_bmd_cargostatic_02_var3",
                0.1
            };
            variantsAI[] = {
                "rhs_bmd_cargostatic_02_var0",
                0.1,
                "rhs_bmd_cargostatic_02_var1",
                0.1,
                "rhs_bmd_cargostatic_02_var2",
                0.1,
                "rhs_bmd_cargostatic_02_var3",
                0.1
            };
            variantAfter[] = {0.0001, 0.0001, 0.0001};
        };
        class rhs_bmd_cargostatic_02_var0: rhs_bmd_cargostatic_02 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_02_var1: rhs_bmd_cargostatic_02 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_02_var1.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_02_var2: rhs_bmd_cargostatic_02 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_02_var2.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_02_var3: rhs_bmd_cargostatic_02 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_02_var3.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
            speed = -30;
        };
        class rhs_bmd_cargostatic_03: rhs_bmd_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_03.rtm";
            connectTo[] = {
                "rhs_bmd_cargostatic_03_var0",
                0.142,
                "rhs_bmd_cargostatic_03_var1",
                0.142,
                "rhs_bmd_cargostatic_03_var2",
                0.142,
                "rhs_bmd_cargostatic_03_var3",
                0.142,
                "rhs_bmd_cargostatic_03_var4",
                0.142,
                "rhs_bmd_cargostatic_03_var5",
                0.142,
                "rhs_bmd_cargostatic_03_var6",
                0.142
            };
            equivalentTo = "rhs_bmd_cargostatic_03";
            variantsPlayer[] = {
                "rhs_bmd_cargostatic_03_var0",
                0.142,
                "rhs_bmd_cargostatic_03_var1",
                0.142,
                "rhs_bmd_cargostatic_03_var2",
                0.142,
                "rhs_bmd_cargostatic_03_var3",
                0.142,
                "rhs_bmd_cargostatic_03_var4",
                0.142,
                "rhs_bmd_cargostatic_03_var5",
                0.142,
                "rhs_bmd_cargostatic_03_var6",
                0.142
            };
            variantsAI[] = {
                "rhs_bmd_cargostatic_03_var0",
                0.142,
                "rhs_bmd_cargostatic_03_var1",
                0.142,
                "rhs_bmd_cargostatic_03_var2",
                0.142,
                "rhs_bmd_cargostatic_03_var3",
                0.142,
                "rhs_bmd_cargostatic_03_var4",
                0.142,
                "rhs_bmd_cargostatic_03_var5",
                0.142,
                "rhs_bmd_cargostatic_03_var6",
                0.142
            };
            variantAfter[] = {0.0001, 0.0001, 0.0001};
        };
        class rhs_bmd_cargostatic_03_var0: rhs_bmd_cargostatic_03 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_03_var1: rhs_bmd_cargostatic_03 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_03_var1.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_03_var2: rhs_bmd_cargostatic_03 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_03_var2.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_03_var3: rhs_bmd_cargostatic_03 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_03_var3.rtm";
            speed = 0.037453;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_03_var4: rhs_bmd_cargostatic_03 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_03_var4.rtm";
            speed = -33;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_03_var5: rhs_bmd_cargostatic_03 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_03_var5.rtm";
            speed = 0.062893;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmd_cargostatic_03_var6: rhs_bmd_cargostatic_03 {
            file = "\rhsafrf\addons\rhs_bmd\anims\rhs_bmd_CargoStatic_03_var6.rtm";
            speed = -30;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
    };
};
class DefaultEventHandlers;
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class BMD {
            name = "BMD Functions";
            description = "BMD Init & FX thing";
            class bmd_init {
                file = "\rhsafrf\addons\rhs_c_bmd\scripts\rhs_bmd_init.sqf";
                description = "bmd init";
            };
            class bmd_habar {
                file = "\rhsafrf\addons\rhs_c_bmd\scripts\bgr_bmd_habar.sqf";
                description = "random habar";
            };
            class bmd_at14_reload {
                file = "\rhsafrf\addons\rhs_c_bmd\scripts\rhs_at14_reload.sqf";
                description = "BMD2M AT14 reload";
            };
        };
        class Habar {
            class setHabarEden {
                file = "\rhsafrf\addons\rhs_c_bmd\scripts\rhs_setHabarEden.sqf";
                description = "Set habar in eden";
            };
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
        class AnimationSources;
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
        class EventHandlers;
        class Components;
    };
    class rhs_bmd_base: Tank_F {
        dlc = "RHS_AFRF";
        rhs_habarType = 2;
        rhs_decalParameters[] = {"['Number', cBMD3NumberPlaces, 'Default']", "['Label', cBMDPlnSymPlaces, 'Platoon',11]", "['Label', cBMDArmySymPlaces, 'Army', 2]"};
        category = "Armored";
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        driveOnComponent[] = {"Track_L", "Track_R", "Slide"};
        destrType = "DestructDefault";
        driverDoor = "hatchD";
        model = "\rhsafrf\addons\rhs_bmd\rhs_bmd2.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMD2_Name";
        vehicleClass = "rhs_vehclass_ifv";
        editorSubcategory = "rhs_EdSubcat_ifv";
        side = 0;
        faction = "rhs_faction_vdv";
        icon = "\rhsafrf\addons\rhs_bmd\rhs_bmd2_icon.paa";
        picture = "\rhsafrf\addons\rhs_bmd\pictures\rhs_bmd2_pic_ca.paa";
        scope = 0;
        mapSize = 5.4;
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_APC_s"};
                speechPlural[] = {"veh_vehicle_APC_p"};
            };
        };
        textSingular = "BMD";
        textPlural = "BMDs";
        nameSound = "veh_vehicle_APC_s";
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        simulation = "tankX";
        normalSpeedForwardCoef = 0.66;
        slowSpeedForwardCoef = 0.35;
        fuelCapacity = 30;
        RHS_fuelCapacity = 300;
        maxSpeed = 60;
        tankTurnForce = 320000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.82;
        accelAidForceCoef = 4;
        accelAidForceYOffset = -2.5;
        accelAidForceSpd = 2.23;
        canFloat = 1;
        waterLeakiness = 250;
        maxFordingDepth = 0.1;
        waterResistance = 1;
        waterDamageEngine = 0.9;
        engineShiftY = 0.2;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 1.2;
        waterResistanceCoef = 0.33;
        waterEffectSpeed = 5;
        engineEffectSpeed = 5;
        waterFastEffectSpeed = 28;
        torqueCurve[] = {
            {0.291667, 0.449604},
            {0.416667, 0.741789},
            {0.5, 0.889015},
            {0.583333, 1},
            {0.666667, 0.988675},
            {0.75, 0.97282},
            {0.833333, 0.938845},
            {1.16917, 0}
        };
        engineMOI = 9;
        enginePower = 179;
        peakTorque = 883;
        minOmega = 75;
        maxOmega = 251.33;
        idleRPM = 700;
        redRPM = 2400;
        brakeIdleSpeed = 1;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        thrustDelay = 0.3;
        clutchStrength = 22;
        engineLosses = 25;
        transmissionLosses = 13;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.384615,
            0.384615,
            0,
            0.769231,
            0.384615,
            0.923077,
            0.538462,
            0.961538,
            0.576923,
            1,
            0.692308
        };
        changeGearMinEffectivity[] = {0.7, 0, 0.5};
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -12.77,
                "N",
                0,
                "D1",
                5.55,
                "D2",
                3.09,
                "D3",
                1.7,
                "D4",
                1
            };
            AmphibiousRatios[] = {"R1", -9.5, "N", 0, "D1", 9.5};
            TransmissionRatios[] = {"High", 7.5};
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
                suspTravelDirection[] = {-0.125, -1, 0};
                width = 0.216;
                steering = 0;
                weight = 100;
                mass = 100;
                MOI = 4.80534;
                maxBrakeTorque = 500;
                maxDroop = 0.18;
                maxCompression = 0.18;
                sprungMass = 760;
                springStrength = 98000;
                springDamperRate = 4600;
                dampingRate = 285;
                dampingRateInAir = 285;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 5;
                latStiffY = 45;
                longitudinalStiffnessPerUnitGravity = 100000;
                frictionVsSlipGraph[] = {{0.17, 1.55}, {0.3, 1.05}, {1, 1}};
            };
            class L3: L2 {
                boneName = "wheel_podkoloL2";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "wheel_podkoloL3";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "wheel_podkoloL4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkoloL5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
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
                suspTravelDirection[] = {0.125, -1, 0};
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
        attenuationEffectType = "TankAttenuation";
        soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.56234133, 1};
        soundGetOut[] = {
            "A3\sounds_f\vehicles\armor\noises\get_in_out",
            0.56234133,
            1,
            20
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_start", 2.7079458, 1};
        soundEngineOnExt[] = {
            "\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
            2.6309574,
            1,
            200
        };
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop", 0.70794576, 1};
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
            0.63095737,
            1,
            200
        };
        buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        soundBuildingCrash[] = {
            "buildCrash0",
            0.25,
            "buildCrash1",
            0.25,
            "buildCrash2",
            0.25,
            "buildCrash3",
            0.25
        };
        WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1, 1, 200};
        WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        soundWoodCrash[] = {
            "woodCrash0",
            0.166,
            "woodCrash1",
            0.166,
            "woodCrash2",
            0.166,
            "woodCrash3",
            0.166,
            "woodCrash4",
            0.166,
            "woodCrash5",
            0.166
        };
        ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.25,
            "ArmorCrash1",
            0.25,
            "ArmorCrash2",
            0.25,
            "ArmorCrash3",
            0.25
        };
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\utd20_alap",
                    8.91251,
                    1,
                    400
                };
                frequency = "0.95	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class Engine {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    0.7943282,
                    1,
                    450
                };
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    0.7943282,
                    1,
                    500
                };
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    0.8912509,
                    1,
                    500
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    1,
                    1,
                    600
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    1.1220185,
                    1,
                    600
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    1.4125376,
                    1,
                    600
                };
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class IdleThrust {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
                    0.8912509,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class EngineThrust {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
                    1.1220185,
                    1,
                    450
                };
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
                    2.2589254,
                    1,
                    500
                };
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
                    2.4125376,
                    1,
                    500
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
                    2.5848932,
                    1,
                    600
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
                    2.7782793,
                    1,
                    600
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
                    2.9952624,
                    1,
                    600
                };
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class Idle_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap", 0.31622776, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class Engine_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_int_thrust_extra {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.9943282, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
                volume = "(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
            };
            class Engine1_int_thrust_extra2 {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h", 1.3943282, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
                volume = "(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
            };
            class Engine1_int {
                sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_int {
                sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_int {
                sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_int {
                sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_int {
                sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class IdleThrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class EngineThrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class NoiseInt {
                sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.56234133, 1};
                frequency = "1";
                volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 25])";
            };
            class NoiseExt {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
                    0.7943282,
                    1,
                    150
                };
                frequency = "1";
                volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 25])";
            };
            class ThreadsOutH0 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.39810717,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsOutH1 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.4466836,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsOutH2 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
                    0.5011872,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsOutH3 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
                    0.56234133,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsOutH4 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
                    0.56234133,
                    1,
                    220
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
            class ThreadsOutS0 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.31622776,
                    1,
                    120
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsOutS1 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.35481337,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsOutS2 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
                    0.39810717,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsOutS3 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
                    0.4466836,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsOutS4 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
                    0.5011872,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
            class ThreadsInH0 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsInH1 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsInH2 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsInH3 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04", 0.5011872, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsInH4 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05", 0.56234133, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
            class ThreadsInS0 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01", 0.35481337, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsInS1 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02", 0.35481337, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsInS2 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03", 0.39810717, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsInS3 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04", 0.39810717, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsInS4 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
        };
        tf_range_api = 17000;
        enableGPS = 0;
        unitInfoType = "RHS_RscUnitInfoEastTank";
        tracksSpeed = 1.35;
        wheelCircumference = 2.375;
        crew = "rhs_vdv_combatcrew";
        hasCommander = 1;
        hasGunner = 1;
        transportSoldier = 0;
        typicalCargo[] = {};
        ejectDeadCargo = 0;
        unloadInCombat = 1;
        forceHideDriver = 0;
        viewCargoShadow = 1;
        viewCargoShadowDiff = 1;
        driverAction = "driver_apcwheeled2_out";
        driverInAction = "rhs_t72_driver";
        cargoAction[] = {"YouShallNotSitHere"};
        cargoCompartments[] = {"Compartment33"};
        LODDriverTurnedOut = 0;
        viewDriverInExternal = 1;
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        accuracy = 0.7;
        incomingMissileDetectionSystem = 0;
        cost = 3000000;
        camouflage = 5;
        hiddenSelections[] = {
            "body1",
            "body2",
            "body3",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_co.paa",
            "rhsafrf\addons\rhs_bmd\data\sa_bmd2_02_co.paa",
            "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_co.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_decalNumber_type {
                displayName = "Define font type of plate number";
                tooltip = "Define kind of font that will be drawn on vehicle.";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cBMD3NumberPlaces, _value]]] call rhs_fnc_decalsInit";
                defaultValue = 0;
                typeName = "STRING";
                class values {
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
                displayName = "Set side number";
                tooltip = "Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBMD3NumberPlaces}else{[_this, [['Number', cBMD3NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
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
                tooltip = "Set platoon symbol located on right & rear of vehicles. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMDPlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalArmy_type: rhs_decalPlatoon_type {
                displayName = "Define army symbol type";
                property = "rhs_decalArmy_type";
                expression = "_this setVariable ['%s', _value];";
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
                displayName = "Set army symbol";
                tooltip = "Define symbol located on left side of vehicle. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalArmy";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMDArmySymPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class crate_l1_unhide {
                displayName = "hide l1 crate";
                property = "crate_l1_unhide";
                control = "CheckboxNumber";
                expression = "[_this,_value,'%s'] call rhs_fnc_setHabarEden";
                defaultValue = "-1";
            };
            class crate_l2_unhide: crate_l1_unhide {
                displayName = "hide l2 crate";
                property = "crate_l2_unhide";
            };
            class crate_l3_unhide: crate_l1_unhide {
                displayName = "hide l3 crate";
                property = "crate_l3_unhide";
            };
            class crate_r1_unhide: crate_l1_unhide {
                displayName = "hide r1 crate";
                property = "crate_r1_unhide";
            };
            class crate_r2_unhide: crate_l1_unhide {
                displayName = "hide r2 crate";
                property = "crate_r2_unhide";
            };
            class crate_r3_unhide: crate_l1_unhide {
                displayName = "hide r3 crate";
                property = "crate_r3_unhide";
            };
            class wood_1_unhide: crate_l1_unhide {
                displayName = "hide wood log 1";
                property = "wood_1_unhide";
            };
            class wood_2_unhide: crate_l1_unhide {
                displayName = "hide wood log 2";
                property = "wood_2_unhide";
            };
            class rhs_disableHabar: crate_l1_unhide {
                displayName = "Disable habar";
                property = "rhs_disableHabar";
                expression = "[_this,_value,'%s',_value] call rhs_fnc_setHabarEden";
                defaultValue = "0";
            };
        };
        rhs_randomizedHabar[] = {
            "crate_l1_unhide",
            "crate_l2_unhide",
            "crate_l3_unhide",
            "crate_r1_unhide",
            "crate_r2_unhide",
            "crate_r3_unhide",
            "wood_1_unhide",
            "wood_2_unhide"
        };
        selectionLeftOffset = "pasanimL";
        selectionRightOffset = "pasanimP";
        animationSourceHatch = "hatchDriver";
        class AnimationSources: AnimationSources {
            class muzzleMG1 {
                source = "ammorandom";
                weapon = "rhs_weap_pkt_bmd_bow1";
            };
            class muzzleMG2: muzzleMG1 {
                weapon = "rhs_weap_pkt_bmd_bow2";
            };
            class muzzleMG3: muzzleMG1 {
                weapon = "rhs_weap_pkt";
            };
            class maljutka_hide {
                source = "user";
                mass = 1;
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class maljutka_reload: maljutka_hide {
                animPeriod = 1.1;
            };
            class maljutka_reload_fins: maljutka_hide {
                animPeriod = 1.25;
            };
            class maljutka_reload_hide {
                source = "ammo";
                weapon = "rhs_weap_9k11";
            };
            class MainGun_fix: maljutka_hide {
                animPeriod = 5.6;
            };
            class at14_ammo_source {
                source = "ammo";
                weapon = "rhs_weap_9m111";
            };
            class crate_l1_unhide: maljutka_hide {
                displayName = "hide l1 crate";
            };
            class crate_l2_unhide: maljutka_hide {
                displayName = "hide l2 crate";
            };
            class crate_l3_unhide: maljutka_hide {
                displayName = "hide l3 crate";
            };
            class crate_r1_unhide: maljutka_hide {
                displayName = "hide r1 crate";
            };
            class crate_r2_unhide: maljutka_hide {
                displayName = "hide r2 crate";
            };
            class crate_r3_unhide: maljutka_hide {
                displayName = "hide r3 crate";
            };
            class wood_1_unhide: maljutka_hide {
                displayName = "hide wood log 1";
            };
            class wood_2_unhide: maljutka_hide {
                displayName = "hide wood log 2";
            };
            class antena2_hide: maljutka_hide {
                initPhase = 1;
                displayName = "hide additional antenna";
            };
            class maljutka_hide_source {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0;
                useSource = 1;
                onPhaseChanged = "params['_v','_p'];if(_p isEqualTo 1)then{_v removeWeaponTurret ['rhs_weap_9k11',[0]];}else{ _v addWeaponTurret ['rhs_weap_9k11',[0]]};";
                displayName = "remove maljutka";
            };
            class HatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: HatchC {};
            class HatchMG: HatchC {};
            class HatchD: HatchC {};
            class cargoHandler1: HatchD {
                initPhase = 1;
            };
        };
        class UserActions {
            class LowerSusp {
                displayName = "$STR_UA_LowerSusp";
                position = "";
                radius = 5;
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this <8400";
                statement = "this setmass [7600*1.7,6];this setVelocity [0.01,0.01,0.01]";
                onlyForPlayer = 1;
            };
            class RaiseSusp: LowerSusp {
                displayName = "$STR_UA_RaiseSusp";
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this >12000";
                statement = "this setmass [7600,6];this setVelocity [0.01,0.01,0.01]";
            };
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
                count = 10;
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
                count = 4;
            };
        };
        transportMaxMagazines = 160;
        transportMaxWeapons = 10;
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_damage.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_destruct.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_02.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_02_damage.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_02_destruct.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_destruct.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_mantle.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_mantle.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_mantle_destruct.rvmat"
            };
        };
        damageResistance = 0.01796;
        secondaryExplosion = -1;
        armor = 260;
        armorStructural = 400;
        threat[] = {0.5, 0.5, 1};
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = 0.4;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.54;
                explosionShielding = 0.15;
                radius = 0.1;
            };
            class HitEngine: HitEngine {
                armor = 0.45;
                material = -1;
                name = "motor";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.139;
                explosionShielding = 0.009;
                radius = 0.11;
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
                };
            };
            class HitLTrack: HitLTrack {
                armor = -150;
                material = -1;
                name = "pas_L";
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.15;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = -150;
                material = -1;
                name = "pas_P";
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.15;
                radius = 0.3;
            };
            class HitFuel {
                armor = 1;
                explosionShielding = 0;
                material = -1;
                passThrough = 1;
                radius = 0.07;
                name = "palivo";
                visual = "-";
            };
        };
        memoryPointGun = "kulas";
        memoryPointsGetInGunner = "pos gunner";
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInCargo = "pos cargo";
        memoryPointsGetInGunnerDir = "pos gunner dir";
        memoryPointsGetInDriverDir = "pos driver dir";
        memoryPointsGetInCargoDir = "pos cargo dir";
        memoryPointSupply = "doplnovani";
        memoryPointTrack1L = "Stopa ll";
        memoryPointTrack1R = "Stopa lr";
        memoryPointTrack2L = "Stopa rl";
        memoryPointTrack2R = "Stopa rr";
        memoryPointDriverOptics = "driverview";
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustEffectTankSide";
            };
            class Exhaust2 {
                position = "vyfuk1 start";
                direction = "vyfuk1 konec";
                effect = "ExhaustEffectTankSide";
            };
        };
        class Reflectors {
            class Driver_FG125_Cover {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 35;
                outerAngle = 75;
                coneFadeCoef = 5;
                intensity = 15;
                useFlare = 0;
                dayLight = 1;
                flareSize = 0.85;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.2;
                    hardLimitStart = 130;
                    hardLimitEnd = 160;
                };
            };
            class Driver_FG125_Cover_Flare: Driver_FG125_Cover {
                intensity = 5;
                innerAngle = 55;
                outerAngle = 155;
                flareSize = 0.3;
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Driver_FG125_Cover", "Driver_FG125_Cover_Flare"}};
        armorLights = 0.1;
        driverForceOptics = 1;
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
        driverOpticsColor[] = {1, 1, 1, 1};
        driverOpticsEffect[] = {"OpticsCHAbera1"};
        driverOutOpticsEffect[] = {};
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
        class Library {
            libTextDesc = "$STR_BMD2_LibDesc,";
        };
        class CargoTurret;
        class Turrets: Turrets {
            class CommanderOptics: NewTurret {
                gunnerDoor = "hatchC";
                proxyType = "CPCommander";
                proxyIndex = 1;
                gunnerName = "$STR_RHS_Commander";
                dontCreateAI = 1;
                primaryGunner = 0;
                primaryObserver = 0;
                stabilizedInAxes = 0;
                animationSourceBody = "sightCommanderSourceY";
                animationSourceGun = "sightCommanderSourceX";
                animationSourceHatch = "hatchCommander";
                ejectDeadGunner = 0;
                commanding = 6;
                outGunnerMayFire = 0;
                inGunnerMayFire = 0;
                viewGunnerInExternal = 1;
                gunnerOutOpticsShowCursor = 0;
                gunnerOpticsShowCursor = 1;
                memoryPointGunnerOptics = "gunnerview2";
                memoryPointsGetInGunner = "pos commander";
                memoryPointsGetInGunnerDir = "pos commander dir";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                gunnerAction = "rhs_bmd_commander";
                gunnerInAction = "rhs_bmd_commander_in";
                startEngine = 0;
                minElev = -15;
                maxElev = 15;
                initElev = 0;
                minTurn = -50;
                maxTurn = 50;
                initTurn = 0;
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_binoc";
                gunnerOpticsEffect[] = {"TankGunnerOptics1", "WeaponsOptics", "OpticsCHAbera3"};
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerOutForceOptics = 0;
                gunnerForceOptics = 1;
                canUseScanners = 0;
                allowTabLock = 0;
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                LODOpticsIn = 0;
                LODOpticsOut = 0;
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -110;
                    maxAngleX = 110;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    opticsZoomMin = 0.14;
                    opticsZoomMax = 0.14;
                    distanceZoomMin = 100;
                    distanceZoomMax = 2000;
                    initFov = 0.14;
                    minFov = 0.14;
                    maxFov = 0.14;
                    visionMode[] = {"Normal", "NVG"};
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
            class MainTurret: MainTurret {
                gunnerDoor = "hatchG";
                viewGunnerInExternal = 1;
                proxyType = "CPGunner";
                proxyIndex = 1;
                primaryGunner = 1;
                primaryObserver = 0;
                stabilizedInAxes = 3;
                gunnerAction = "rhs_bmd_gunner";
                gunnerInAction = "rhs_bmd_gunner_in";
                ejectDeadGunner = 0;
                animationSourceHatch = "hatchGunner";
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGun = "kulas";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                weapons[] = {"rhs_weap_2a42", "rhs_weap_pkt"};
                magazines[] = {
                    "rhs_mag_3uor6_180",
                    "rhs_mag_3ubr8_120",
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
                    "\rhsafrf\addons\rhs_bmp\sounds\turret1.wss",
                    4,
                    1,
                    10
                };
                selectionFireAnim = "zasleh3";
                minElev = -5;
                maxElev = 60;
                initElev = 10;
                minTurn = -360;
                maxTurn = 360;
                initTurn = 35;
                canUseScanners = 0;
                allowTabLock = 0;
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                LODOpticsIn = 0;
                LODOpticsOut = 0;
                lockWhenDriverOut = 1;
                forceHideGunner = 0;
                commanding = 5;
                startEngine = 0;
                memoryPointMissile[] = {"Konec rakety"};
                memoryPointMissileDir[] = {"Spice rakety"};
                class Turrets {};
                class HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -1;
                        name = "vez";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = 0.14;
                        explosionShielding = 0.001;
                        radius = 0.25;
                    };
                    class HitGun {
                        armor = 0.6;
                        material = -1;
                        name = "zbran";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.13;
                        explosionShielding = 0.001;
                        radius = 0.25;
                    };
                };
                GunnerForceOptics = 1;
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerOutOpticsModel = "";
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
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                    class bpk142n {
                        opticsDisplayName = "NIGHT";
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
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                    class pzu812 {
                        opticsDisplayName = "AA";
                        initAngleX = 0;
                        minAngleX = -110;
                        maxAngleX = 110;
                        initAngleY = 0;
                        minAngleY = -110;
                        maxAngleY = 110;
                        opticsZoomMin = 0.25;
                        opticsZoomMax = 0.25;
                        distanceZoomMin = 200;
                        distanceZoomMax = 2000;
                        initFov = 0.25;
                        minFov = 0.25;
                        maxFov = 0.25;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu812";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                };
                class Reflectors {
                    class Searchlight_FG125 {
                        color[] = {1900, 1300, 950};
                        ambient[] = {5, 5, 5};
                        position = "Light_FG125";
                        direction = "Light_FG125_end";
                        hitpoint = "Light_FG125";
                        selection = "Light_FG125";
                        size = 1;
                        innerAngle = 8;
                        outerAngle = 15;
                        coneFadeCoef = 1;
                        intensity = 45;
                        useFlare = 1;
                        dayLight = 1;
                        flareSize = 0.85;
                        class Attenuation {
                            start = 1;
                            constant = 0;
                            linear = 0;
                            quadratic = 0.02;
                            hardLimitStart = 630;
                            hardLimitEnd = 660;
                        };
                    };
                    class Searchlight_FG125_Flare {
                        color[] = {7, 6, 6.5};
                        ambient[] = {22, 22, 22};
                        position = "Light_FG125";
                        direction = "Light_FG125_end";
                        hitpoint = "Light_FG125";
                        selection = "Light_FG125";
                        size = 1;
                        innerAngle = 30;
                        outerAngle = 175;
                        coneFadeCoef = 10;
                        intensity = 100;
                        useFlare = 1;
                        dayLight = 0;
                        flareSize = 1.85;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 0;
                            quadratic = 10;
                            hardLimitStart = 0;
                            hardLimitEnd = 0.9;
                        };
                    };
                };
                armorLights = 0.1;
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
            class GPMGTurret1: NewTurret {
                gunnerDoor = "hatchMG";
                proxyType = "CPGunner";
                proxyIndex = 2;
                body = "obsTurret2";
                gun = "obsGun2";
                animationSourceBody = "obsTurret2";
                animationSourceGun = "obsGun2";
                animationSourceHatch = "hatchMgGunner";
                selectionFireAnim = "zasleh1";
                gunnerName = "$STR_MGFrontRight";
                hasGunner = 1;
                dontCreateAI = 1;
                soundServo[] = {};
                forceHideGunner = 0;
                primaryObserver = 0;
                canUseScanners = 0;
                allowTabLock = 0;
                primaryGunner = 0;
                commanding = 4;
                minElev = -10;
                maxElev = 10;
                minTurn = -10;
                maxTurn = 10;
                weapons[] = {"rhs_weap_pkt_bmd_bow1"};
                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250"
                };
                ejectDeadGunner = 0;
                class CargoLight {
                    ambient[] = {0.6, 0, 0.15, 1};
                    brightness = 0.007;
                    color[] = {0, 0, 0, 0};
                };
                gunBeg = "muzzle2";
                gunEnd = "end2";
                memoryPointGun = "memoryPointGun2";
                memoryPointGunnerOptics = "gunnerview3";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerAction = "rhs_bmd_mggunner";
                gunnerInAction = "rhs_bmd_gunner_r_in";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                viewGunnerInExternal = 1;
                startEngine = 0;
                class Turrets {};
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpp220a_right";
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerForceOptics = 1;
                gunnerOpticsEffect[] = {"TankGunnerOptics1", "WeaponsOptics", "OpticsCHAbera3"};
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    opticsZoomMin = 0.166666;
                    opticsZoomMax = 0.166666;
                    distanceZoomMin = 200;
                    distanceZoomMax = 2000;
                    initFov = 0.166666;
                    minFov = 0.166666;
                    maxFov = 0.166666;
                };
                class HitPoints {};
            };
            class LeftBack: NewTurret {
                showAsCargo = 1;
                body = "lseat_turret";
                gun = "lseat_gun";
                animationSourceBody = "lseat_Turret";
                animationSourceGun = "lseat_Gun";
                animationSourceHatch = "";
                selectionFireAnim = "";
                minElev = 0;
                maxElev = 0;
                initTurn = 60;
                minTurn = 60;
                maxTurn = 60.001;
                maxHorizontalRotSpeed = 0;
                maxVerticalRotSpeed = 0;
                proxyIndex = 3;
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                gunnerName = "$STR_CargoBackLeft";
                commanding = 3;
                gunBeg = "";
                gunEnd = "";
                memoryPointGun = "";
                memoryPointGunnerOptics = "lseat_view";
                gunnerAction = "";
                gunnerInAction = "rhs_bmd_cargo_in";
                weapons[] = {};
                magazines[] = {};
                forceHideGunner = 1;
                viewGunnerInExternal = 1;
                hasGunner = 1;
                dontCreateAI = 1;
                primaryGunner = 0;
                primaryObserver = 0;
                canUseScanners = 0;
                allowTabLock = 0;
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerForceOptics = 1;
                startEngine = 0;
                class ViewOptics {
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
                    initFov = 0.7;
                    minFov = 0.7;
                    maxFov = 0.7;
                };
                class HitPoints {};
            };
            class RightBack: LeftBack {
                body = "rseat_turret";
                gun = "rseat_gun";
                animationSourceBody = "rseat_Turret";
                animationSourceGun = "rseat_Gun";
                initTurn = -60;
                minTurn = -60.001;
                maxTurn = -60;
                gunnerName = "$STR_CargoBackRight";
                memoryPointGunnerOptics = "rseat_view";
                commanding = 2;
                proxyIndex = 4;
            };
            class MainBack: LeftBack {
                body = "bseat_turret";
                gun = "bseat_gun";
                animationSourceBody = "bseat_Turret";
                animationSourceGun = "bseat_Gun";
                initTurn = 180;
                minTurn = 180;
                maxTurn = 180.001;
                gunnerName = "$STR_CargoBackCenter";
                memoryPointGunnerOptics = "bseat_view";
                commanding = 1;
                proxyIndex = 5;
            };
            class CargoTurret_01: CargoTurret {
                gunnerName = "Passenger (Left Rear)";
                gunnerCompartments = "Compartment3";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                memoryPointGunnerOptics = "";
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                LODOpticsIn = 0;
                LODOpticsOut = 0;
                CanHideGunner = 0;
                commanding = -2;
                weapons[] = {"rhs_weap_DummyLauncher"};
                gunnerAction = "passenger_inside_2";
                memoryPointsGetInGunner = "cargo1";
                memoryPointsGetInGunnerDir = "cargo1_dir";
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                proxyIndex = 1;
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerAction = "passenger_inside_2";
                gunnerName = "Passenger (Right Rear)";
                memoryPointsGetInGunner = "cargo2";
                memoryPointsGetInGunnerDir = "cargo2_dir";
                proxyIndex = 2;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerAction = "passenger_boat_3";
                gunnerName = "Passenger (Right Front)";
                memoryPointsGetInGunner = "cargo3";
                memoryPointsGetInGunnerDir = "cargo3_dir";
                proxyIndex = 3;
                maxElev = 45;
                minElev = -15;
                maxTurn = 81;
                minTurn = -25;
            };
            class CargoTurret_04: CargoTurret_01 {
                gunnerAction = "rhs_bmd_cargostatic_01";
                gunnerName = "Passenger (Front Left)";
                memoryPointsGetInGunner = "cargo4";
                memoryPointsGetInGunnerDir = "cargo4_dir";
                proxyIndex = 4;
                ejectDeadGunner = 1;
                maxElev = 0.001;
                minElev = 0;
                maxTurn = 0.001;
                minTurn = 0;
                enabledByAnimationSource = "cargoHandler1";
            };
            class CargoTurret_05: CargoTurret_04 {
                gunnerAction = "rhs_bmd_cargostatic_02";
                gunnerName = "Passenger (Right Middle)";
                memoryPointsGetInGunner = "cargo5";
                memoryPointsGetInGunnerDir = "cargo5_dir";
                proxyIndex = 5;
            };
            class CargoTurret_06: CargoTurret_04 {
                gunnerAction = "rhs_bmd_cargostatic_03";
                gunnerName = "Passenger (Left Middle)";
                memoryPointsGetInGunner = "cargo6";
                memoryPointsGetInGunnerDir = "cargo6_dir";
                proxyIndex = 6;
            };
        };
        cargoProxyIndexes[] = {};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6};
        rhs_topPositions[] = {1, 2, 3, 4, 5, 6};
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_bmd_init;";
                postInit = "_this call rhs_fnc_reapplyTextures";
                engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
                getOut = "_this call rhs_fnc_hatchAbandon";
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
    class rhs_bmd2_base: rhs_bmd_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd2_base.paa";
        scope = 0;
        simulation = "tankX";
        normalSpeedForwardCoef = 0.66;
        slowSpeedForwardCoef = 0.35;
        fuelCapacity = 30;
        RHS_fuelCapacity = 300;
        maxSpeed = 60;
        tankTurnForce = 320000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.82;
        accelAidForceCoef = 4;
        accelAidForceYOffset = -2.5;
        accelAidForceSpd = 2.23;
        canFloat = 1;
        waterLeakiness = 250;
        maxFordingDepth = 0.1;
        waterResistance = 1;
        waterDamageEngine = 0.9;
        engineShiftY = 0.2;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 1.2;
        waterResistanceCoef = 0.33;
        waterEffectSpeed = 5;
        engineEffectSpeed = 5;
        waterFastEffectSpeed = 28;
        torqueCurve[] = {
            {0.291667, 0.449604},
            {0.416667, 0.741789},
            {0.5, 0.889015},
            {0.583333, 1},
            {0.666667, 0.988675},
            {0.75, 0.97282},
            {0.833333, 0.938845},
            {1.16917, 0}
        };
        engineMOI = 9;
        enginePower = 179;
        peakTorque = 883;
        minOmega = 75;
        maxOmega = 251.33;
        idleRPM = 700;
        redRPM = 2400;
        brakeIdleSpeed = 1;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        thrustDelay = 0.3;
        clutchStrength = 22;
        engineLosses = 25;
        transmissionLosses = 13;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.384615,
            0.384615,
            0,
            0.769231,
            0.384615,
            0.923077,
            0.538462,
            0.961538,
            0.576923,
            1,
            0.692308
        };
        changeGearMinEffectivity[] = {0.7, 0, 0.5};
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -12.77,
                "N",
                0,
                "D1",
                5.55,
                "D2",
                3.09,
                "D3",
                1.7,
                "D4",
                1
            };
            AmphibiousRatios[] = {"R1", -9.5, "N", 0, "D1", 9.5};
            TransmissionRatios[] = {"High", 7.5};
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
                suspTravelDirection[] = {-0.125, -1, 0};
                width = 0.216;
                steering = 0;
                weight = 100;
                mass = 100;
                MOI = 4.80534;
                maxBrakeTorque = 500;
                maxDroop = 0.18;
                maxCompression = 0.18;
                sprungMass = 760;
                springStrength = 98000;
                springDamperRate = 4600;
                dampingRate = 285;
                dampingRateInAir = 285;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 5;
                latStiffY = 45;
                longitudinalStiffnessPerUnitGravity = 100000;
                frictionVsSlipGraph[] = {{0.17, 1.55}, {0.3, 1.05}, {1, 1}};
            };
            class L3: L2 {
                boneName = "wheel_podkoloL2";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "wheel_podkoloL3";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "wheel_podkoloL4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkoloL5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
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
                suspTravelDirection[] = {0.125, -1, 0};
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
        weaponsGroup1 = 128;
        weaponsGroup4 = 64;
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_co.paa", "rhsafrf\addons\rhs_bmd\data\sa_bmd2_02_co.paa", "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_chdkz_co.paa", "rhsafrf\addons\rhs_bmd\data\sa_bmd2_02_chdkz_co.paa", "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_chdkz_co.paa"};
            };
        };
        textureList[] = {};
        class AnimationSources: AnimationSources {
            class maljutka_hide_source: maljutka_hide_source {
                displayName = "";
            };
            class 9p135_hide_source {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0;
                useSource = 1;
                displayName = "remove 9P135 launcher";
                onPhaseChanged = "params['_v','_p'];if(_p isEqualTo 1)then{_v removeWeaponTurret ['rhs_weap_9m111',[0,0]];}else{ _v addWeaponTurret ['rhs_weap_9m111',[0,0]]};";
            };
            class recoil_source {
                source = "reload";
                weapon = "rhs_weap_2a42";
            };
            class muzzle_hide_hmg: recoil_source {};
            class muzzle_rot_hmg: recoil_source {
                source = "ammorandom";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "RHS_RscWeaponBPK42_FCS";
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                maxhorizontalrotspeed = 0.61;
                maxverticalrotspeed = 0.104;
                class Turrets: Turrets {
                    class Launcher: CommanderOptics {
                        gunnername = "9P135 Launcher";
                        proxyType = "CPGunner";
                        primaryObserver = 0;
                        proxyindex = 6;
                        dontCreateAi = 1;
                        cantCreateAI = 1;
                        gunnercompartments = "Compartment5";
                        canUseScanners = 0;
                        allowTabLock = 0;
                        body = "9p135_launcher_turret";
                        gun = "9p135_launcher_gun";
                        animationSourceBody = "9p135_launcher_turret";
                        animationSourceGun = "9p135_launcher_gun";
                        animationSourceHatch = "";
                        gunnerDoor = "hatchG";
                        memoryPointGun = "konec rakety";
                        gunBeg = "spice rakety";
                        gunEnd = "konec rakety";
                        stabilizedInAxes = 0;
                        gunnerAction = "rhs_bmp1_gunner_launcher";
                        gunnerInAction = "rhs_bmp1_gunner_launcher";
                        canHideGunner = 0;
                        isPersonTurret = 0;
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        LODTurnedOut = 0;
                        LODTurnedIn = 0;
                        memoryPointGunnerOutOptics = "launcher_view";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
                        gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                        soundAttenuationTurret = "HeliAttenuationGunner";
                        disableSoundAttenuation = 0;
                        gunnerLeftHandAnimName = "elevation_handle";
                        gunnerRightHandAnimName = "horizontal_handle";
                        turretInfoType = "RHS_RscWeaponZeroing";
                        maxHorizontalRotSpeed = 0.35;
                        maxVerticalRotSpeed = 0.15;
                        minElev = -5;
                        maxElev = 20;
                        minTurn = -60;
                        maxTurn = 12;
                        initElev = 0;
                        initTurn = -15;
                        discreteDistance[] = {100};
                        discreteDistanceInitIndex = 0;
                        weapons[] = {"rhs_weap_9m111"};
                        magazines[] = {"rhs_mag_9m113", "rhs_mag_9m113", "rhs_mag_9m113"};
                        selectionFireAnim = "zasleh4";
                        class OpticsIn {
                            class 9Sh119m1 {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.07;
                                minFov = 0.07;
                                maxFov = 0.07;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
                            };
                        };
                        class OpticsOut {
                            class Out {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                minFov = 0.25;
                                maxFov = 1.25;
                                initFov = 0.75;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
                            };
                        };
                        class HitPoints {
                            class HitTurretLauncher {
                                armor = 0.5;
                                material = -1;
                                name = "launcher_base_hit";
                                visual = "launcher_base_hit";
                                passThrough = 0;
                                minimalHit = 0.14;
                                explosionShielding = 0.001;
                                radius = 0.25;
                                isTurret = 1;
                            };
                            class HitGunLauncher {
                                armor = 0.6;
                                material = -1;
                                name = "launcher_hit";
                                visual = "launcher_hit";
                                passThrough = 0;
                                minimalHit = 0.13;
                                explosionShielding = 0.001;
                                radius = 0.25;
                                isGun = 1;
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
                    };
                };
            };
            class CommanderOptics1: CommanderOptics {};
            class GPMGTurretBMD1: GPMGTurret1 {};
            class LeftBack1: LeftBack {};
            class RightBack1: RightBack {};
            class MainBack1: MainBack {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
        class UserActions {
            class LowerSusp {
                displayName = "$STR_UA_LowerSusp";
                position = "";
                radius = 5;
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this <8400";
                statement = "this setmass [8200*1.7,6];this setVelocity [0.01,0.01,0.01]";
                onlyForPlayer = 1;
            };
            class RaiseSusp: LowerSusp {
                displayName = "$STR_UA_RaiseSusp";
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this >13000";
                statement = "this setmass [8200,6];this setVelocity [0.01,0.01,0.01]";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {};
        };
    };
    class rhs_bmd1_base: rhs_bmd_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd1_base.paa";
        scope = 0;
        model = "\rhsafrf\addons\rhs_bmd\rhs_bmd1.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMD1_Name";
        picture = "\rhsafrf\addons\rhs_bmd\pictures\rhs_bmd1_pic_ca.paa";
        icon = "\rhsafrf\addons\rhs_bmd\rhs_bmd1_icon.paa";
        class AnimationSources: AnimationSources {
            class recoil_source_2a28 {
                source = "reload";
                weapon = "rhs_weap_2a28";
            };
            class maljutka_hide_source: maljutka_hide_source {};
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_damage.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_destruct.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd1_02.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_damage.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_destruct.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_destruct.rvmat"
            };
        };
        hiddenSelectionsTextures[] = {
            "\rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_co.paa",
            "\rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_co.paa",
            "\rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_co.paa", "rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_co.paa", "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_chdkz_co.paa", "rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_chdkz_co.paa", "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_chdkz_co.paa"};
            };
        };
        textureList[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                stabilizedInAxes = 0;
                weapons[] = {"rhs_weap_2a28", "rhs_weap_pkt", "rhs_weap_9k11"};
                magazines[] = {
                    "rhs_mag_pg15v_24",
                    "rhs_mag_og15v_16",
                    "rhs_mag_9m14m",
                    "rhs_mag_9m14m",
                    "rhs_mag_9m14m",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250"
                };
                minElev = -4;
                maxElev = 33;
                initElev = 0;
                minTurn = -360;
                maxTurn = 360;
                initTurn = 35;
                lockWhenDriverOut = 1;
                maxHorizontalRotSpeed = 0.4;
                maxVerticalRotSpeed = 0.1;
                class OpticsIn {
                    class pn22m1 {
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
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m1";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                    class pn22m1n {
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
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m1n";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                };
            };
            class CommanderOptics1: CommanderOptics {
                proxyType = "CPCommander";
                proxyIndex = 1;
                gunnerName = "$STR_RHS_Commander";
                primaryGunner = 0;
                primaryObserver = 0;
                stabilizedInAxes = 0;
                selectionFireAnim = "zasleh2";
                animationSourceHatch = "hatchCommander";
                soundServo[] = {};
                ejectDeadGunner = 0;
                commanding = 6;
                outGunnerMayFire = 0;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerOutOpticsShowCursor = 0;
                gunnerOpticsShowCursor = 0;
                memoryPointGunnerOptics = "gunnerview2";
                memoryPointsGetInGunner = "pos commander";
                memoryPointsGetInGunnerDir = "pos commander dir";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                gunnerAction = "rhs_bmd_commander";
                body = "obsTurret";
                gun = "obsGun";
                gunBeg = "muzzle3";
                gunEnd = "end3";
                memoryPointGun = "memoryPointGun";
                animationSourceBody = "sightCommanderSourceY";
                animationSourceGun = "sightCommanderSourceX";
                weapons[] = {"rhs_weap_pkt_bmd_bow2"};
                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250"
                };
                minElev = -10;
                maxElev = 10;
                initElev = 0;
                minTurn = -10;
                maxTurn = 10;
                initTurn = 0;
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpp220a";
                gunnerOpticsEffect[] = {"TankGunnerOptics1", "WeaponsOptics", "OpticsCHAbera3"};
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerOutForceOptics = 0;
                gunnerForceOptics = 1;
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    opticsZoomMin = 0.166666;
                    opticsZoomMax = 0.166666;
                    distanceZoomMin = 200;
                    distanceZoomMax = 2000;
                    initFov = 0.166666;
                    minFov = 0.166666;
                    maxFov = 0.166666;
                };
            };
            class GPMGTurretBMD1: GPMGTurret1 {};
            class LeftBack1: LeftBack {};
            class RightBack1: RightBack {};
            class MainBack1: MainBack {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
    };
    class rhs_bmd1: rhs_bmd1_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd1.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                reloaded = "_this call rhs_fnc_9m14_reload;";
            };
        };
    };
    class rhs_bmd1k: rhs_bmd1_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd1k.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMD1K_Name";
        class AnimationSources: AnimationSources {
            class maljutka_hide_source: maljutka_hide_source {
                initPhase = 1;
            };
            class antena2_hide: antena2_hide {
                initPhase = 0;
            };
        };
        tf_range_api = 17000;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_2a28", "rhs_weap_pkt"};
                magazines[] = {
                    "rhs_mag_pg15v_24",
                    "rhs_mag_og15v_16",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250"
                };
            };
            class CommanderOptics1: CommanderOptics1 {};
            class GPMGTurretBMD1: GPMGTurret1 {};
            class LeftBack1: LeftBack {};
            class RightBack1: RightBack {};
            class MainBack1: MainBack {};
        };
    };
    class rhs_bmd1p: rhs_bmd1_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd1p.paa";
        scope = 2;
        model = "\rhsafrf\addons\rhs_bmd\rhs_bmd1p.p3d";
        picture = "\rhsafrf\addons\rhs_bmd\pictures\rhs_bmd1p_pic_ca.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMD1P_Name";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_2a28", "rhs_weap_pkt"};
                magazines[] = {
                    "rhs_mag_pg15v_24",
                    "rhs_mag_og15v_16",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250"
                };
                class Turrets: Turrets {
                    class Launcher: CommanderOptics {
                        gunnername = "9P135 Launcher";
                        proxyType = "CPGunner";
                        primaryObserver = 0;
                        proxyindex = 6;
                        dontCreateAi = 1;
                        cantCreateAI = 1;
                        gunnercompartments = "Compartment5";
                        body = "9p135_launcher_turret";
                        gun = "9p135_launcher_gun";
                        animationSourceBody = "9p135_launcher_turret";
                        animationSourceGun = "9p135_launcher_gun";
                        animationSourceHatch = "";
                        gunnerDoor = "hatchG";
                        memoryPointGun = "konec rakety";
                        gunBeg = "spice rakety";
                        gunEnd = "konec rakety";
                        stabilizedInAxes = 0;
                        gunnerAction = "rhs_bmp1_gunner_launcher";
                        gunnerInAction = "rhs_bmp1_gunner_launcher";
                        canHideGunner = 0;
                        isPersonTurret = 0;
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        LODTurnedOut = 0;
                        LODTurnedIn = 0;
                        memoryPointGunnerOutOptics = "launcher_view";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
                        gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                        soundAttenuationTurret = "HeliAttenuationGunner";
                        disableSoundAttenuation = 0;
                        gunnerLeftHandAnimName = "elevation_handle";
                        gunnerRightHandAnimName = "horizontal_handle";
                        turretInfoType = "RHS_RscWeaponZeroing";
                        maxHorizontalRotSpeed = 0.35;
                        maxVerticalRotSpeed = 0.15;
                        minElev = -5;
                        maxElev = 20;
                        minTurn = -60;
                        maxTurn = 12;
                        initElev = 0;
                        initTurn = -15;
                        discreteDistance[] = {100};
                        discreteDistanceInitIndex = 0;
                        canUseScanners = 0;
                        allowTabLock = 0;
                        weapons[] = {"rhs_weap_9m111"};
                        magazines[] = {"rhs_mag_9m113", "rhs_mag_9m113", "rhs_mag_9m113"};
                        selectionFireAnim = "zasleh4";
                        class OpticsIn {
                            class 9Sh119m1 {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.07;
                                minFov = 0.07;
                                maxFov = 0.07;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
                            };
                        };
                        class OpticsOut {
                            class Out {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                minFov = 0.25;
                                maxFov = 1.25;
                                initFov = 0.75;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
                            };
                        };
                        class HitPoints {
                            class HitTurretLauncher {
                                armor = 0.5;
                                material = -1;
                                name = "launcher_base_hit";
                                visual = "launcher_base_hit";
                                passThrough = 0;
                                minimalHit = 0.14;
                                explosionShielding = 0.001;
                                radius = 0.25;
                                isTurret = 1;
                            };
                            class HitGunLauncher {
                                armor = 0.6;
                                material = -1;
                                name = "launcher_hit";
                                visual = "launcher_hit";
                                passThrough = 0;
                                minimalHit = 0.13;
                                explosionShielding = 0.001;
                                radius = 0.25;
                                isGun = 1;
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
                    };
                };
            };
            class CommanderOptics1: CommanderOptics1 {};
            class GPMGTurretBMD1: GPMGTurret1 {};
            class LeftBack1: LeftBack {};
            class RightBack1: RightBack {};
            class MainBack1: MainBack {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
        class AnimationSources: AnimationSources {
            class maljutka_hide_source: maljutka_hide_source {
                displayName = "";
            };
            class 9p135_hide_source {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0;
                useSource = 1;
                displayName = "remove 9P135 launcher";
                onPhaseChanged = "params['_v','_p'];if(_p isEqualTo 1)then{_v removeWeaponTurret ['rhs_weap_9m111',[0,0]];}else{ _v addWeaponTurret ['rhs_weap_9m111',[0,0]]};";
            };
            class revolve_launcher {
                source = "revolving";
                weapon = "rhs_weap_9m111";
            };
            class reload_launcher {
                source = "reloadmagazine";
                weapon = "rhs_weap_9m111";
            };
        };
        class UserActions: UserActions {
            class UseLauncher {
                displayName = "<t color='#FE7C1F'>Use 9P135 Launcher</t>";
                position = "trunk_action";
                radius = 2;
                priority = 11;
                showWindow = 0;
                onlyForplayer = 0;
                condition = "((call rhs_fnc_findPlayer) == gunner this)";
                statement = "[this,0] call rhs_fnc_9p135_hatch";
            };
            class LeaveLauncher: UseLauncher {
                displayName = "Leave launcher";
                condition = "vehicle (call rhs_fnc_findPlayer) turretUnit [0,0] == (call rhs_fnc_findPlayer)";
                statement = "[this,1] call rhs_fnc_9p135_hatch";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                getOut = "if((_this select 3) isEqualTo [0,0])then{[(_this select 0),[[0],false]] remoteExecCall ['lockTurret']};_this call rhs_fnc_hatchAbandon";
            };
            class RHS_BMP1P_Lock {
                init = "(_this select 0) lockTurret [[0,0],true]";
                reloaded = "[_this select 0,_this select 1,_this select 4,'rhs_weap_9m111','rhs_weap_9m113_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
            };
        };
    };
    class rhs_bmd1pk: rhs_bmd1_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd1pk.paa";
        scope = 2;
        model = "\rhsafrf\addons\rhs_bmd\rhs_bmd1pk.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMD1PK_Name";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_2a28", "rhs_weap_pkt"};
                magazines[] = {
                    "rhs_mag_pg15v_24",
                    "rhs_mag_og15v_16",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250"
                };
            };
            class CommanderOptics1: CommanderOptics1 {
                proxyType = "CPCommander";
                proxyIndex = 1;
                gunnerName = "$STR_RHS_Commander";
                primaryGunner = 0;
                primaryObserver = 1;
                stabilizedInAxes = 0;
                animationSourceBody = "sightCommanderSourceY";
                animationSourceGun = "sightCommanderSourceX";
                animationSourceHatch = "hatchCommander";
                ejectDeadGunner = 0;
                commanding = 6;
                outGunnerMayFire = 0;
                inGunnerMayFire = 0;
                viewGunnerInExternal = 1;
                gunnerOutOpticsShowCursor = 0;
                gunnerOpticsShowCursor = 1;
                memoryPointGunnerOptics = "gunnerview2";
                memoryPointsGetInGunner = "pos commander";
                memoryPointsGetInGunnerDir = "pos commander dir";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                gunnerAction = "rhs_bmd_commander";
                body = "";
                gun = "";
                weapons[] = {};
                magazines[] = {};
                minElev = -15;
                maxElev = 15;
                initElev = 0;
                minTurn = -50;
                maxTurn = 50;
                initTurn = 0;
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_binoc";
                gunnerOpticsEffect[] = {"TankGunnerOptics1", "WeaponsOptics", "OpticsCHAbera3"};
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerOutForceOptics = 0;
                gunnerForceOptics = 1;
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -110;
                    maxAngleX = 110;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    opticsZoomMin = 0.14;
                    opticsZoomMax = 0.14;
                    distanceZoomMin = 100;
                    distanceZoomMax = 2000;
                    initFov = 0.14;
                    minFov = 0.14;
                    maxFov = 0.14;
                    visionMode[] = {"Normal", "NVG"};
                };
            };
            class GPMGTurretBMD1: GPMGTurret1 {};
            class LeftBack1: LeftBack {};
            class RightBack1: RightBack {};
            class MainBack1: MainBack {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
        class AnimationSources: AnimationSources {
            class maljutka_hide_source: maljutka_hide_source {
                displayName = "";
            };
            class antena2_hide: antena2_hide {
                initPhase = 0;
            };
        };
    };
    class rhs_bmd1r: rhs_bmd1_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd1r.paa";
        scope = 2;
        model = "\rhsafrf\addons\rhs_bmd\rhs_bmd1rock.p3d";
        picture = "\rhsafrf\addons\rhs_bmd\pictures\rhs_bmd1r_pic_ca.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMD1R_Name";
        transportSoldier = 0;
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_damage.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_destruct.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd1_02.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_damage.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_destruct.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_destruct.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd1_grom.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd1_grom_damage.rvmat",
                "rhsafrf\addons\rhs_bmd\data\sa_bmd1_grom_destruct.rvmat"
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                forcehidegunner = 1;
                weapons[] = {"rhs_weap_s8"};
                magazines[] = {"rhs_mag_s8_12"};
            };
            class CommanderOptics1: CommanderOptics1 {};
            class GPMGTurretBMD1: GPMGTurret1 {};
            class LeftBack1: LeftBack {};
            class RightBack1: RightBack {};
            class MainBack1: MainBack {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
        class AnimationSources: AnimationSources {
            class maljutka_hide_source: maljutka_hide_source {
                displayName = "";
            };
            class r_revolving {
                source = "revolving";
                weapon = "rhs_weap_s8";
            };
        };
    };
    class rhs_bmd2: rhs_bmd2_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd2.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        class AnimationSources: AnimationSources {
            class revolve_launcher {
                source = "revolving";
                weapon = "rhs_weap_9m111";
            };
            class reload_launcher {
                source = "reloadmagazine";
                weapon = "rhs_weap_9m111";
            };
        };
        class UserActions: UserActions {
            class UseLauncher {
                displayName = "<t color='#FE7C1F'>Use 9P135 Launcher</t>";
                position = "trunk_action";
                radius = 2;
                priority = 11;
                showWindow = 0;
                onlyForplayer = 0;
                condition = "((call rhs_fnc_findPlayer) == gunner this)";
                statement = "[this,0] call rhs_fnc_9p135_hatch";
            };
            class LeaveLauncher: UseLauncher {
                displayName = "Leave launcher";
                condition = "vehicle (call rhs_fnc_findPlayer) turretUnit [0,0] == (call rhs_fnc_findPlayer)";
                statement = "[this,1] call rhs_fnc_9p135_hatch";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                getOut = "if((_this select 3) isEqualTo [0,0])then{[(_this select 0),[[0],false]] remoteExecCall ['lockTurret']};_this call rhs_fnc_hatchAbandon";
            };
            class RHS_BMD2 {
                init = "(_this select 0) lockTurret [[0,0],true]";
                reloaded = "[_this select 0,_this select 1,_this select 4,'rhs_weap_9m111','rhs_weap_9m113_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
            };
        };
    };
    class rhs_bmd2m: rhs_bmd2 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd2m.paa";
        scope = 2;
        model = "\rhsafrf\addons\rhs_bmd\rhs_bmd2m.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMD2M_Name";
        transportSoldier = 0;
        enableGPS = 1;
        class AnimationSources: AnimationSources {
            class 9p135_hide_source: 9p135_hide_source {
                displayName = "";
            };
            class elev {
                source = "user";
                animperiod = 0.0016;
            };
            class elev_bank {
                source = "user";
                animperiod = 0.0016;
            };
            class lead {
                source = "user";
                animperiod = 0.001;
            };
            class offset {
                source = "user";
                animperiod = 0.0002;
            };
            class at14_ammo_source {
                source = "ammo";
                weapon = "rhs_weap_9k133";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    "rhs_weap_2a42",
                    "rhs_weap_pkt",
                    "rhs_weap_9k133",
                    "rhs_weap_fcs_ammo"
                };
                magazines[] = {
                    "rhs_mag_3uof8_180",
                    "rhs_mag_3ubr8_120",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_9m133_2",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                turretInfoType = "RHS_RscWeaponESSA_FCS";
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                class OpticsIn {
                    class Wide: ViewOptics {
                        opticsDisplayName = "DAY3";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
                    };
                    class Medium: Wide {
                        opticsDisplayName = "DAY12";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                    class Narrow: Medium {
                        opticsDisplayName = "DAY24";
                        initFov = 0.0291667;
                        minFov = 0.0291667;
                        maxFov = 0.0291667;
                    };
                    class Autotrack: Narrow {
                        opticsDisplayName = "AUTOTRACK";
                        directionStabilized = 1;
                    };
                };
                class Turrets {};
            };
            class CommanderOptics2: CommanderOptics1 {};
            class GPMGTurretBMD2: GPMGTurretBMD1 {
                forceHideGunner = 1;
            };
            class LeftBack2: LeftBack1 {};
            class RightBack2: RightBack1 {};
            class MainBack2: MainBack1 {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
        getInProxyOrder[] = {1, 2, 3, 4, 6};
        rhs_topPositions[] = {1, 2, 3, 4, 6};
        class UserActions {
            class LowerSusp {
                displayName = "$STR_UA_LowerSusp";
                position = "";
                radius = 5;
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this <8400";
                statement = "this setmass [7600*1.7,6];this setVelocity [0.01,0.01,0.01]";
                onlyForPlayer = 1;
            };
            class RaiseSusp: LowerSusp {
                displayName = "$STR_UA_RaiseSusp";
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this >12000";
                statement = "this setmass [7600,6];this setVelocity [0.01,0.01,0.01]";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                reloaded = "_this call rhs_fnc_bmd_at14_reload";
            };
            class RHS_BMD2 {};
        };
    };
    class rhs_bmd2k: rhs_bmd2 {
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMD2K_Name";
        class AnimationSources: AnimationSources {
            class antena2_hide: antena2_hide {
                initPhase = 0;
            };
        };
    };
};
