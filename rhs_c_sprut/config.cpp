class CfgPatches {
    class rhs_c_sprut {
        units[] = {
            "rhs_sprut_vdv",
            "rhs_bmd4_vdv",
            "rhs_bmd4m_vdv",
            "rhs_bmd4ma_vdv"
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
        name = "BMD-4 & Sprut-SD";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class bmd4_autoloader {
                file = "\rhsafrf\addons\rhs_c_sprut\scripts\rhs_autoloader_bmd.sqf";
                description = "Autoloader gun anim & stub ejection for BMD4/BMP3";
            };
            class sprut_autoloader {
                file = "\rhsafrf\addons\rhs_c_sprut\scripts\rhs_autoloader_sprut.sqf";
                description = "Autoloader gun anim & stub ejection for Sprut-SD";
            };
            class sprut_init {
                file = "\rhsafrf\addons\rhs_c_sprut\scripts\rhs_sprut_init.sqf";
                description = "Initialization script for Sprut-SD / BMD4";
            };
        };
    };
};
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        rhs_sprut_commander = "rhs_sprut_commander";
        rhs_sprut_gunner = "rhs_sprut_gunner";
        rhs_bmd4_commander_in = "rhs_bmd4_commander_in";
        rhs_bmd4_gunner_in = "rhs_bmd4_gunner_in";
        rhs_bmd4_cargo_in = "rhs_bmd4_cargo_in";
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
        class rhs_sprut_commander: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_sprut_commander.rtm";
            interpolateTo[] = {"kia_rhs_sprut_commander", 1};
        };
        class kia_rhs_sprut_commander: DefaultDie {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_sprut_commander.rtm";
        };
        class rhs_sprut_gunner: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_sprut_gunner.rtm";
            interpolateTo[] = {"kia_rhs_sprut_gunner", 1};
        };
        class kia_rhs_sprut_gunner: DefaultDie {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_sprut_gunner.rtm";
        };
        class rhs_bmd4_commander_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_bmd4_commander_in.rtm";
            interpolateTo[] = {"kia_rhs_bmd4_commander_in", 1};
        };
        class kia_rhs_bmd4_commander_in: DefaultDie {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_bmd4_commander_in.rtm";
        };
        class rhs_bmd4_gunner_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_bmd4_gunner_in.rtm";
            interpolateTo[] = {"kia_rhs_bmd4_gunner_in", 1};
        };
        class kia_rhs_bmd4_gunner_in: DefaultDie {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_bmd4_gunner_in.rtm";
        };
        class rhs_bmd4_cargo_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_bmd4_cargo_in.rtm";
            interpolateTo[] = {"kia_rhs_bmd4_cargo_in", 1};
        };
        class kia_rhs_bmd4_cargo_in: DefaultDie {
            file = "\rhsafrf\addons\rhs_c_sprut\anims\rhs_bmd4_cargo_in.rtm";
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
    class rhs_a3spruttank_base: Tank_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHSSPRUTNumberPlaces,'Default']", "['Label',cRHSSPRUTPlnSymPlaces, 'Platoon',11]"};
        scope = 0;
        category = "Armored";
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        driveOnComponent[] = {"Track_L", "Track_R", "Slide"};
        destrType = "DestructDefault";
        vehicleClass = "rhs_vehclass_tank";
        editorSubcategory = "rhs_EdSubcat_tank";
        displayName = "$STR_SPRUT_Name";
        accuracy = 0.3;
        model = "\rhsafrf\addons\rhs_sprut\rhs_sprut";
        picture = "\rhsafrf\addons\rhs_sprut\icon\rhs_2s25_pic_ca.paa";
        Icon = "\rhsafrf\addons\rhs_sprut\icon\ico_sprutsd_ca.paa";
        mapSize = 11;
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        crew = "rhs_vdv_combatcrew";
        typicalCargo[] = {};
        side = 0;
        faction = "rhs_faction_vdv";
        driverCanSee = "2+4+8";
        gunnerCanSee = "2+4+8";
        commanderCanSee = "2+4+8";
        unitInfoType = "RHS_RscInfoSprut";
        tf_range_api = 35000;
        incomingMissileDetectionSystem = 0;
        enableGPS = 1;
        reportOwnPosition = 1;
        driverDoor = "hatchD";
        driverAction = "driver_apcwheeled2_out";
        driverInAction = "rhs_t72_driver";
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
        LODDriverTurnedOut = 0;
        viewDriverInExternal = 1;
        simulation = "tankX";
        normalSpeedForwardCoef = 0.85;
        slowSpeedForwardCoef = 0.5;
        fuelCapacity = 25;
        RHS_fuelCapacity = 560;
        tankTurnForce = 550000;
        tankTurnForceAngMinSpd = 0.5;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 2;
        accelAidForceYOffset = -7;
        accelAidForceSpd = 2.23;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        canFloat = 1;
        waterLeakiness = 250;
        maxFordingDepth = 0.1;
        waterResistance = 1;
        waterDamageEngine = 0.9;
        engineShiftY = 1.7;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 1.2;
        waterResistanceCoef = 0.35;
        waterEffectSpeed = 5;
        engineEffectSpeed = 5;
        waterFastEffectSpeed = 28;
        torqueCurve[] = {
            {0.304348, 0.4},
            {0.434783, 0.723757},
            {0.521739, 0.953039},
            {0.608696, 1},
            {0.695652, 0.966851},
            {0.782609, 0.900553},
            {0.869565, 0.812155},
            {1.13522, 0}
        };
        engineMOI = 25;
        enginePower = 336;
        peakTorque = 1810;
        minOmega = 67.86;
        maxOmega = 240.86;
        idleRPM = 700;
        redRPM = 2300;
        thrustDelay = 0.25;
        engineLosses = 32;
        transmissionLosses = 20;
        clutchStrength = 15;
        switchTime = 0.1;
        latency = 0.1;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.913043,
            0.608696,
            0.956522,
            0.608696,
            0.956522,
            0.608696,
            1,
            0.652174,
            1,
            0.652174
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -3.31,
                "N",
                0,
                "D1",
                3.31,
                "D2",
                1.934,
                "D3",
                1.132,
                "D4",
                0.862,
                "D5",
                0.61
            };
            TransmissionRatios[] = {"High", 11.8};
            AmphibiousRatios[] = {"R1", -10, "N", 0, "D1", 10};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.6;
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                side = "left";
                width = 0.32;
                steering = 0;
                mass = 100;
                MOI = 5.5112;
                maxDroop = 0.18;
                maxCompression = 0.18;
                maxBrakeTorque = 1500;
                sprungMass = 1500;
                springStrength = 285400;
                springDamperRate = 7500;
                dampingRate = 611;
                dampingRateInAir = 611;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 42000;
                frictionVsSlipGraph[] = {{0, 0.45}, {0.18, 1}, {0.7, 0.75}};
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
                suspTravelDirection[] = {0.125, -1, 0};
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
        soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.56234133, 1};
        soundGetOut[] = {
            "A3\sounds_f\vehicles\armor\noises\get_in_out",
            0.56234133,
            1,
            20
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_start", 0.70794576, 1};
        soundEngineOnExt[] = {
            "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_start",
            0.63095737,
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
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_idle",
                    0.70794576,
                    1,
                    200
                };
                frequency = "0.95	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class Engine {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    0.8912509,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    1,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    1.1220185,
                    1,
                    340
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
                    1.4125376,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class IdleThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_idle",
                    0.8912509,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class EngineThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm1",
                    1.1220185,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm2",
                    1.2589254,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm3",
                    1.4125376,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm4",
                    1.5848932,
                    1,
                    350
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm5",
                    1.7782794,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm6",
                    1.9952624,
                    1,
                    450
                };
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class Idle_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_idle", 0.31622776, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class Engine_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm1", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm2", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm3", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm4", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm5", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm6", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class IdleThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_idle", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class EngineThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm1", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm2", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm3", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm4", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm5", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm6", 0.63095737, 1};
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
        tracksSpeed = 1.35;
        wheelCircumference = 2.01;
        attenuationEffectType = "TankAttenuation";
        cost = 1500000;
        armor = 200;
        armorStructural = 500;
        damageResistance = 0.02;
        crewVulnerable = 0;
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = 0.4;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.54;
                explosionShielding = 0;
                radius = 0.15;
            };
            class HitEngine: HitEngine {
                armor = 0.45;
                material = -1;
                name = "motor";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.139;
                explosionShielding = 0.009;
                radius = 0.17;
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
        };
        class TransportMagazines {
            class _xx_30Rnd_545x39_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = "10";
            };
            class _xx_HandGrenade_East {
                magazine = "rhs_mag_rgd5";
                count = "10";
            };
            class _xx_signal_rounds {
                magazine = "rhs_mag_nspn_red";
                count = "10";
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
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerDoor = "hatchC";
                        body = "obsTurret";
                        gun = "obsGun";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        maxHorizontalRotSpeed = 1.8;
                        maxVerticalRotSpeed = 1.8;
                        stabilizedInAxes = 3;
                        soundServo[] = {
                            "A3\Sounds_F\vehicles\armor\noises\servo_best",
                            0.31622776,
                            1,
                            50
                        };
                        minElev = -5;
                        maxElev = 60;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        memoryPointGun = "usti hlavne3";
                        gunBeg = "usti hlavne3";
                        gunEnd = "konec hlavne3";
                        weapons[] = {};
                        magazines[] = {};
                        turretInfoType = "RHS_RscWeapon1k13_FCS";
                        discreteDistance[] = {};
                        discreteDistanceInitIndex = 0;
                        canUseScanners = 0;
                        allowTabLock = 0;
                        memoryPointGunnerOutOptics = "commanderview";
                        memoryPointGunnerOptics = "commanderview";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_1x.p3d";
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
                        class OpticsIn {
                            class DayMain: ViewOptics {
                                opticsDisplayName = "DAY1";
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_1x.p3d";
                                gunnerOpticsEffect[] = {};
                            };
                            class Day2: DayMain {
                                opticsDisplayName = "DAY5";
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_5x.p3d";
                                initFov = 0.14;
                                minFov = 0.14;
                                maxFov = 0.14;
                            };
                            class Day3: DayMain {
                                opticsDisplayName = "DAY14";
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_14x.p3d";
                                initFov = 0.05;
                                minFov = 0.05;
                                maxFov = 0.05;
                            };
                            class night: DayMain {
                                opticsDisplayName = "NIGHT";
                                initFov = 0.14;
                                minFov = 0.14;
                                maxFov = 0.14;
                                visionMode[] = {"NVG"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_5x_nvg.p3d";
                            };
                        };
                        gunnerAction = "mbt2_slot2b_out";
                        gunnerInAction = "rhs_sprut_commander";
                        isPersonTurret = 1;
                        personTurretAction = "RHS_VehicleTurnout_Sprut_1";
                        minOutElev = -30;
                        maxOutElev = 35;
                        initOutElev = 0;
                        minOutTurn = -90;
                        maxOutTurn = 90;
                        initOutTurn = 0;
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        gunnerType = "rhs_vdv_crew_commander";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        LodTurnedOut = 0;
                        LodTurnedIn = 0;
                        class HitPoints {
                            class HitTurretCom {
                                isTurret = 1;
                                armor = 0.7;
                                material = -1;
                                name = "vezVelitele";
                                visual = "vezVelitele";
                                passThrough = 0;
                                minimalHit = 0.13;
                                explosionShielding = 0.001;
                                radius = 0.12;
                            };
                            class HitGunCom {
                                isGun = 1;
                                armor = 0.7;
                                material = -1;
                                name = "zbranVelitele";
                                visual = "zbranVelitele";
                                passThrough = 0;
                                minimalHit = 0.13;
                                explosionShielding = 0.001;
                                radius = 0.12;
                            };
                        };
                        selectionFireAnim = "zasleh3";
                        class Components {
                            class VehicleSystemsDisplayManagerComponentLeft {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                                class MinimapDisplay {
                                    componentType = "MinimapDisplayComponent";
                                    resource = "RscCustomInfoMiniMap";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
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
                                class MinimapDisplay {
                                    componentType = "MinimapDisplayComponent";
                                    resource = "RscCustomInfoMiniMap";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
                                };
                            };
                        };
                    };
                };
                gunnerDoor = "hatchG";
                memoryPointGun = "usti hlavne2";
                selectionFireAnim = "zasleh2";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                weapons[] = {
                    "rhs_weap_2a75",
                    "rhs_weap_pkt_bmd_coax",
                    "rhs_weap_PL1",
                    "rhs_weap_902a",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm46_10",
                    "rhs_mag_3bk29_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_9m119rx_6",
                    "rhs_mag_3d17_6",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_lasermag",
                    "rhs_laserfcsmag"
                };
                maxHorizontalRotSpeed = 0.53;
                maxVerticalRotSpeed = 0.12;
                minElev = -5;
                maxElev = 16;
                initElev = 10;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\noises\servo_best",
                    3.1622777,
                    1,
                    50
                };
                startEngine = 0;
                lockWhenDriverOut = 1;
                isPersonTurret = 1;
                personTurretAction = "RHS_VehicleTurnout_1";
                minOutElev = -30;
                maxOutElev = 35;
                initOutElev = 0;
                minOutTurn = -90;
                maxOutTurn = 90;
                initOutTurn = 0;
                LodTurnedOut = 0;
                LodTurnedIn = 0;
                LodOpticsIn = 0;
                turretInfoType = "RHS_RscWeaponSprutSD_FCS";
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                canUseScanners = 0;
                allowTabLock = 0;
                memoryPointGunnerOptics = "gunnerview";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {"TankGunnerOptics1", "WeaponsOptics", "OpticsCHAbera3"};
                gunnerForceOptics = 1;
                class OpticsIn {
                    class DayMain: ViewOptics {
                        opticsDisplayName = "DAY";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.0777778;
                        minFov = 0.0777778;
                        maxFov = 0.0777778;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sprut.p3d";
                        gunnerOpticsEffect[] = {};
                    };
                    class Rocket: DayMain {
                        opticsDisplayName = "ATGM";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k113.p3d";
                        initFov = 0.0875;
                        minFov = 0.0875;
                        maxFov = 0.0875;
                    };
                    class Periscope: DayMain {
                        opticsDisplayName = "PERISCOPE";
                        initFov = 0.466666;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class night: DayMain {
                        opticsDisplayName = "NIGHT";
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                    };
                };
                gunnerAction = "mbt2_slot2a_out";
                gunnerInAction = "rhs_sprut_gunner";
                forceHideGunner = 0;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
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
                        class MinimapDisplay {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
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
                        class MinimapDisplay {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                    };
                };
            };
        };
        hiddenSelections[] = {"camo1", "camo2", "camo3", "n1", "n2", "n3", "i1"};
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_sprut\data\sprut_hull_co.paa",
            "rhsafrf\addons\rhs_sprut\data\sprut_turret_co.paa",
            "rhsafrf\addons\rhs_sprut\data\bmd34roadwheel_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_sprut\data\sprut_hull_co.paa", "rhsafrf\addons\rhs_sprut\data\sprut_turret_co.paa", "rhsafrf\addons\rhs_sprut\data\bmd34roadwheel_co.paa"};
                factions[] = {};
            };
            class r1: standard {
                displayName = "#1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(0.92,0.87,0.92,1)", "#(argb,8,8,3)color(0.92,0.87,0.92,1)", "#(argb,8,8,3)color(0.92,0.87,0.92,1)"};
            };
            class r2: standard {
                displayName = "#2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(0.07,0.98,0,1)", "#(argb,8,8,3)color(0.07,0.98,0,1)", "#(argb,8,8,3)color(0.07,0.98,0,1)"};
            };
            class r3: standard {
                displayName = "#3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(0,0.11,0.67,1)", "#(argb,8,8,3)color(0,0.11,0.67,1)", "#(argb,8,8,3)color(0,0.11,0.67,1)"};
            };
            class r4: standard {
                displayName = "#4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(0.99,0.27,0.25,1)", "#(argb,8,8,3)color(0.99,0.27,0.25,1)", "#(argb,8,8,3)color(0.99,0.27,0.25,1)"};
            };
            class r5: standard {
                displayName = "#5";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(00.41,0.4,0,1)", "#(argb,8,8,3)color(00.41,0.4,0,1)", "#(argb,8,8,3)color(00.41,0.4,0,1)"};
            };
        };
        textureList[] = {};
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHSSPRUTNumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSSPRUTNumberPlaces}else{[_this, [['Number', cRHSSPRUTNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
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
                        defaultValue = "Army";
                    };
                    class Honor {
                        name = "Honor";
                        value = "Honor";
                    };
                    class HonorGDR {
                        name = "Honor GDR";
                        value = "HonorGDR";
                    };
                };
            };
            class rhs_decalPlatoon {
                displayName = "Set platoon symbol";
                tooltip = "Set platoon symbol located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHSSPRUTPlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_ammoslot_1_type {
                displayName = "Ammo slot #1 type";
                tooltip = "Define type of shell for #1 slot";
                property = "rhs_ammoslot_1_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class rhs_mag_3bm46_10 {
                        name = "$STR_rhs_mag_3bm46";
                        value = "rhs_mag_3bm46";
                        defaultValue = "rhs_mag_3bm46";
                    };
                    class rhs_mag_3bm9_10 {
                        name = "$STR_rhs_mag_3bm9";
                        value = "rhs_mag_3bm9";
                        defaultValue = "rhs_mag_3bm9";
                    };
                    class rhs_mag_3bm12_10 {
                        name = "$STR_rhs_mag_3bm12";
                        value = "rhs_mag_3bm12";
                        defaultValue = "rhs_mag_3bm12";
                    };
                    class rhs_mag_3bm15_10 {
                        name = "$STR_rhs_mag_3bm15";
                        value = "rhs_mag_3bm15";
                        defaultValue = "rhs_mag_3bm15";
                    };
                    class rhs_mag_3bm17_10 {
                        name = "$STR_rhs_mag_3bm17";
                        value = "rhs_mag_3bm17";
                        defaultValue = "rhs_mag_3bm17";
                    };
                    class rhs_mag_3bm22_10 {
                        name = "$STR_rhs_mag_3bm22";
                        value = "rhs_mag_3bm22";
                        defaultValue = "rhs_mag_3bm22";
                    };
                    class rhs_mag_3bm29_10 {
                        name = "$STR_rhs_mag_3bm29";
                        value = "rhs_mag_3bm29";
                        defaultValue = "rhs_mag_3bm29";
                    };
                    class rhs_mag_3bm26_10 {
                        name = "$STR_rhs_mag_3bm26";
                        value = "rhs_mag_3bm26";
                        defaultValue = "rhs_mag_3bm26";
                    };
                    class rhs_mag_3bm32_10 {
                        name = "$STR_rhs_mag_3bm32";
                        value = "rhs_mag_3bm32";
                        defaultValue = "rhs_mag_3bm32";
                    };
                    class rhs_mag_3bm42_10 {
                        name = "$STR_rhs_mag_3bm42";
                        value = "rhs_mag_3bm42";
                        defaultValue = "rhs_mag_3bm42";
                    };
                    class rhs_mag_3bm42m_10 {
                        name = "$STR_rhs_mag_3bm42m";
                        value = "rhs_mag_3bm42m";
                        defaultValue = "rhs_mag_3bm42m";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 22. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',22] spawn rhs_fnc_TTanks_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot";
                property = "rhs_ammoslot_2_type";
                class values {
                    class rhs_mag_3bk31_8 {
                        name = "$STR_rhs_mag_3bk31";
                        value = "rhs_mag_3bk31";
                        defaultValue = "rhs_mag_3bk31";
                    };
                    class rhs_mag_3bk12_8 {
                        name = "$STR_rhs_mag_3bk12";
                        value = "rhs_mag_3bk12";
                        defaultValue = "rhs_mag_3bk12";
                    };
                    class rhs_mag_3bk14_8 {
                        name = "$STR_rhs_mag_3bk14";
                        value = "rhs_mag_3bk14";
                        defaultValue = "rhs_mag_3bk14";
                    };
                    class rhs_mag_3bk18_8 {
                        name = "$STR_rhs_mag_3bk18";
                        value = "rhs_mag_3bk18";
                        defaultValue = "rhs_mag_3bk18";
                    };
                    class rhs_mag_3bk18m_8 {
                        name = "$STR_rhs_mag_3bk18m";
                        value = "rhs_mag_3bk18m";
                        defaultValue = "rhs_mag_3bk18m";
                    };
                    class rhs_mag_3bk21_8 {
                        name = "$STR_rhs_mag_3bk21";
                        value = "rhs_mag_3bk21";
                        defaultValue = "rhs_mag_3bk21";
                    };
                    class rhs_mag_3bk29_8 {
                        name = "$STR_rhs_mag_3bk29";
                        value = "rhs_mag_3bk29";
                        defaultValue = "rhs_mag_3bk29";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 22. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot";
                property = "rhs_ammoslot_3_type";
                class values {
                    class rhs_mag_3of26_6 {
                        name = "$STR_rhs_mag_3of26";
                        value = "rhs_mag_3of26";
                        defaultValue = "rhs_mag_3of26";
                    };
                    class rhs_mag_3of11_6 {
                        name = "$STR_rhs_mag_3of11";
                        value = "rhs_mag_3of11";
                        defaultValue = "rhs_mag_3of11";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 22. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
            class rhs_ammoslot_4_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #4 type";
                tooltip = "Define type of shell for #4 slot";
                property = "rhs_ammoslot4_type";
                class values {
                    class rhs_mag_9m119m_6 {
                        name = "$STR_rhs_mag_9m119m";
                        value = "rhs_mag_9m119m";
                        defaultValue = "rhs_mag_9m119m";
                    };
                    class rhs_mag_9m119_6 {
                        name = "$STR_rhs_mag_9m119";
                        value = "rhs_mag_9m119";
                        defaultValue = "rhs_mag_9m119";
                    };
                    class rhs_mag_9m119f_6 {
                        name = "$STR_rhs_mag_9m119f";
                        value = "rhs_mag_9m119f";
                        defaultValue = "rhs_mag_9m119f";
                    };
                };
            };
            class rhs_ammoslot_4: rhs_ammoslot_1 {
                displayName = "Ammo slot #4 count";
                tooltip = "Define number of rounds stored inside of type #4. Max 22. Leave -1 for default loadout";
                property = "rhs_ammoslot_4";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_sprut\data\rhs_sprut_hull.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_dam_sprut_hull.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_destr_sprut_hull.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_sprut_turret.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_dam_sprut_turret.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_destr_sprut_turret.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_bmd34track.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_dam_bmd34track.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_destr_bmd34track.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_bmd34roadwheel.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_dam_bmd34roadwheel.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_destr_bmd34roadwheel.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        smokeLauncherGrenadeCount = 3;
        smokeLauncherVelocity = 17;
        smokeLauncherOnTurret = 1;
        smokeLauncherAngle = 60;
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaustl";
                direction = "exhaustl_dir";
                effect = "ExhaustEffectTankBack";
            };
            class Exhaust2 {
                position = "exhaustr";
                direction = "exhaustr_dir";
                effect = "ExhaustEffectTankBack";
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
        class EventHandlers: DefaultEventhandlers {
            class RHS_EventHandlers {
                init = "_this call RHS_fnc_sprut_init;";
                postInit = "_this call rhs_fnc_reapplyTextures";
                fired = "_this call RHS_fnc_Sprut_autoloader;";
                hitpart = "_this call rhs_fnc_hitSpall";
                engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
                getOut = "_this call rhs_fnc_hatchAbandon";
            };
        };
        class AnimationSources {
            class muzzle_rot_coax {
                source = "ammorandom";
                weapon = "rhs_weap_pkt_bmd_coax";
            };
            class recoil_source {
                source = "door";
                animPeriod = 6;
                initPhase = 0;
            };
            class reload_source {
                weapon = "rhs_weap_2a75";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
            class autoloader {
                source = "user";
                animPeriod = 1.25;
                initPhase = 0;
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
                animperiod = 0.0016;
            };
            class offset {
                source = "user";
                animperiod = 0.0002;
            };
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class hatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: hatchC {};
            class HatchD: hatchC {};
        };
        class UserActions {
            class LowerSusp {
                displayName = "$STR_UA_LowerSusp";
                position = "";
                radius = 5;
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this <19000";
                statement = "this setmass [(getmass this)*5,6];this setVelocity [0.01,0.01,0.01]";
                onlyForPlayer = 1;
            };
            class RaiseSusp: LowerSusp {
                displayName = "$STR_UA_RaiseSusp";
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this >19000";
                statement = "this setmass [18000,6];this setVelocity [0.01,0.01,0.01]";
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
    class rhs_sprut_vdv: rhs_a3spruttank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_sprut_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_SPRUT_Name";
    };
    class rhs_bmd4_vdv: rhs_a3spruttank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd4_vdv.paa";
        rhs_decalParameters[] = {"['Number',cRHSBMD4NumberPlaces,'Default']", "['Label',cRHSBMD4PlnSymPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
        vehicleClass = "rhs_vehclass_ifv";
        editorSubcategory = "rhs_EdSubcat_ifv";
        scope = 2;
        model = "\rhsafrf\addons\rhs_bmd_34\rhs_bmd_4.p3d";
        displayName = "$STR_BMD4_Name";
        simulation = "tankX";
        normalSpeedForwardCoef = 0.85;
        slowSpeedForwardCoef = 0.5;
        fuelCapacity = 560;
        RHS_fuelCapacity = 560;
        brakeIdleSpeed = 1;
        tankTurnForce = 350000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.85;
        accelAidForceCoef = 2;
        accelAidForceYOffset = -6;
        accelAidForceSpd = 2.23;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        canFloat = 1;
        waterLeakiness = 250;
        maxFordingDepth = 10.1;
        waterResistance = 1;
        waterDamageEngine = 0.9;
        engineShiftY = 0.7;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 1.2;
        waterResistanceCoef = 0.375;
        waterEffectSpeed = 5;
        engineEffectSpeed = 5;
        waterFastEffectSpeed = 28;
        torqueCurve[] = {
            {0.304348, 0.4},
            {0.434783, 0.723757},
            {0.521739, 0.953039},
            {0.608696, 1},
            {0.695652, 0.966851},
            {0.782609, 0.900553},
            {0.869565, 0.812155},
            {1.13522, 0}
        };
        engineMOI = 25;
        enginePower = 336;
        peakTorque = 1810;
        minOmega = 67.86;
        maxOmega = 240.86;
        idleRPM = 700;
        redRPM = 2300;
        thrustDelay = 0.25;
        engineLosses = 32;
        transmissionLosses = 20;
        clutchStrength = 25;
        switchTime = 0.1;
        latency = 0.1;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.913043,
            0.608696,
            0.956522,
            0.608696,
            0.956522,
            0.608696,
            1,
            0.652174
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -4.31,
                "N",
                0,
                "D1",
                3.31,
                "D2",
                1.934,
                "D3",
                1.132,
                "D4",
                0.662
            };
            AmphibiousRatios[] = {"R1", -9.5, "N", 0, "D1", 9.5};
            TransmissionRatios[] = {"High", 11.5};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.6;
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                side = "left";
                width = 0.32;
                steering = 0;
                mass = 100;
                MOI = 5.5112;
                maxDroop = 0.18;
                maxCompression = 0.18;
                maxBrakeTorque = 1500;
                sprungMass = 1380;
                springStrength = 235400;
                springDamperRate = 8500;
                dampingRate = 605;
                dampingRateInAir = 605;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 42000;
                frictionVsSlipGraph[] = {{0, 0.45}, {0.18, 1}, {0.7, 0.9}};
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
                suspTravelDirection[] = {0.125, -1, 0};
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
                sprungMass = 1700;
                springStrength = 45500;
                springDamperRate = 7500;
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        Icon = "\rhsafrf\addons\rhs_bmd_34\data\icons\bmd4_mapicon_ca.paa";
        picture = "\rhsafrf\addons\rhs_bmd_34\data\pictures\rhs_bmd4_pic_ca.paa";
        mapSize = 6.5;
        transportSoldier = 0;
        unloadInCombat = 1;
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        weaponsGroup1 = "1 + 16";
        weaponsGroup2 = 128;
        weaponsGroup3 = 2;
        weaponsGroup4 = 4;
        cargoAction[] = {"YouShallNotSitHere"};
        cargoCompartments[] = {"Compartment3"};
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_APC_s"};
                speechPlural[] = {"veh_vehicle_APC_p"};
            };
        };
        textSingular = "BMD";
        textPlural = "BMDs";
        nameSound = "veh_vehicle_APC_s";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "n1",
            "n2",
            "n3",
            "i1"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd3_01_co.paa",
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02_co.paa",
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa",
            "rhsafrf\addons\rhs_sprut\data\bmd34roadwheel_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd3_01_co.paa",
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02_co.paa",
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa",
                    "rhsafrf\addons\rhs_sprut\data\bmd34roadwheel_co.paa"
                };
            };
            class r1: r1 {
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)"
                };
            };
            class r2: r2 {
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)"
                };
            };
            class r3: r3 {
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)"
                };
            };
            class r4: r4 {
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)"
                };
            };
            class r5: r5 {
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)"
                };
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHSBMD4NumberPlaces, _value]]] call rhs_fnc_decalsInit";
            };
            class rhs_decalNumber: rhs_decalNumber {
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSBMD4NumberPlaces}else{[_this, [['Number', cRHSBMD4NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
            class rhs_decalPlatoon: rhs_decalPlatoon {
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHSBMD4PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        body = "obsTurret";
                        gun = "obsGun";
                        gunnerDoor = "hatchC";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        commanding = 5;
                        primaryObserver = 0;
                        maxHorizontalRotSpeed = 1.8;
                        maxVerticalRotSpeed = 1.8;
                        stabilizedInAxes = 3;
                        soundServo[] = {
                            "A3\Sounds_F\vehicles\armor\noises\servo_best",
                            0.31622776,
                            1,
                            50
                        };
                        minElev = -5;
                        maxElev = 60;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        memoryPointGun = "usti hlavne3";
                        gunBeg = "usti hlavne3";
                        gunEnd = "konec hlavne3";
                        weapons[] = {};
                        magazines[] = {};
                        turretInfoType = "RHS_RscWeaponESSA_commander_FCS";
                        discreteDistance[] = {};
                        discreteDistanceInitIndex = 0;
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
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
                                initFov = 0.0583333;
                                minFov = 0.0583333;
                                maxFov = 0.0583333;
                            };
                            class Narrow: Medium {
                                opticsDisplayName = "DAY24";
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
                                initFov = 0.0291667;
                                minFov = 0.0291667;
                                maxFov = 0.0291667;
                            };
                        };
                        gunnerAction = "mbt2_slot2b_out";
                        gunnerInAction = "rhs_bmd4_commander_in";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        personTurretAction = "RHS_VehicleTurnout_1";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        dontCreateAI = 1;
                        class HitPoints {
                            class HitTurretCom {
                                armor = 0.7;
                                material = -1;
                                name = "vezVelitele";
                                visual = "vezVelitele";
                                passThrough = 0;
                                minimalHit = 0.13;
                                explosionShielding = 0.001;
                                radius = 0.12;
                                isTurret = 1;
                            };
                            class HitGunCom {
                                armor = 0.7;
                                material = -1;
                                name = "zbranVelitele";
                                visual = "zbranVelitele";
                                passThrough = 0;
                                minimalHit = 0.13;
                                explosionShielding = 0.001;
                                radius = 0.12;
                                isTurret = 1;
                            };
                        };
                        selectionFireAnim = "zasleh3";
                        class Components {
                            class VehicleSystemsDisplayManagerComponentLeft {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                                class MinimapDisplay {
                                    componentType = "MinimapDisplayComponent";
                                    resource = "RscCustomInfoMiniMap";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
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
                                class MinimapDisplay {
                                    componentType = "MinimapDisplayComponent";
                                    resource = "RscCustomInfoMiniMap";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
                                };
                            };
                        };
                    };
                };
                gunnerDoor = "hatchG";
                memoryPointGun = "usti hlavne2";
                selectionFireAnim = "zasleh2";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                weapons[] = {
                    "rhs_weap_2a70",
                    "rhs_weap_2a72",
                    "rhs_weap_pkt_bmd_coax",
                    "rhs_weap_902a",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3UOF17_22",
                    "rhs_mag_9m117m_8",
                    "rhs_mag_3uof8_237",
                    "rhs_mag_3ubr11_227",
                    "rhs_mag_762x54mm_2000",
                    "rhs_mag_3d17_6",
                    "rhs_laserfcsmag"
                };
                maxHorizontalRotSpeed = 0.55;
                maxVerticalRotSpeed = 0.55;
                minElev = -5;
                maxElev = 60;
                initElev = 10;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\noises\servo_best",
                    0.31622776,
                    1,
                    50
                };
                startEngine = 0;
                turretInfoType = "RHS_RscWeaponESSA_FCS";
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                memoryPointGunnerOptics = "gunnerview";
                gunnerOutOpticsModel = "";
                gunnerOpticsEffect[] = {};
                gunnerOutOpticsEffect[] = {"TankGunnerOptics1", "BWTV"};
                gunnerForceOptics = 1;
                commanding = 3;
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
                    class Narrow: Wide {
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
                gunnerAction = "mbt2_slot2a_out";
                gunnerInAction = "rhs_bmd4_gunner_in";
                forceHideGunner = 0;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
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
                class Reflectors {};
            };
            class GPMGTurret1: NewTurret {
                proxyType = "CPGunner";
                proxyIndex = 2;
                body = "obsTurret2";
                gun = "obsGun2";
                animationSourceBody = "obsTurret2";
                animationSourceGun = "obsGun2";
                animationSourceHatch = "";
                gunnerDoor = "hatchCR";
                selectionFireAnim = "zasleh3";
                gunnerName = "$STR_MGFrontRight";
                hasGunner = 1;
                dontCreateAI = 1;
                forceHideGunner = 1;
                primaryObserver = 0;
                primaryGunner = 0;
                commanding = 1;
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
                memoryPointsGetInGunner = "pos cargo R";
                memoryPointsGetInGunnerDir = "pos cargo R dir";
                gunnerAction = "mbt2_slot2a_out";
                gunnerInAction = "rhs_bmd4_cargo_in";
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
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
                unloadInCombat = 1;
                class HitPoints {};
            };
            class LeftBack: NewTurret {
                proxyType = "CPGunner";
                body = "LB_Seat_turret";
                gun = "LB_Seat_Gun";
                animationSourceBody = "LB_Seat_Turret";
                animationSourceGun = "LB_Seat_Gun";
                animationSourceHatch = "";
                selectionFireAnim = "";
                gunnerDoor = "hatchCL";
                minElev = 0;
                maxElev = 0;
                initTurn = 60;
                minTurn = 60;
                maxTurn = 60.001;
                maxHorizontalRotSpeed = 0;
                maxVerticalRotSpeed = 0;
                proxyIndex = 4;
                memoryPointsGetInGunner = "pos cargo L";
                memoryPointsGetInGunnerDir = "pos cargo L dir";
                gunnerName = "$STR_CargoBackLeft";
                commanding = 2;
                gunBeg = "";
                gunEnd = "";
                memoryPointGun = "";
                memoryPointGunnerOptics = "lseat_view";
                gunnerAction = "mbt2_slot2a_out";
                gunnerInAction = "rhs_bmd4_cargo_in";
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
                weapons[] = {};
                magazines[] = {};
                forceHideGunner = 1;
                hasGunner = 1;
                dontCreateAI = 1;
                primaryGunner = 0;
                primaryObserver = 0;
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
                unloadInCombat = 1;
                viewGunnerInExternal = 1;
                class HitPoints {};
            };
            class RightBack: LeftBack {
                body = "RB_Seat_Turret";
                gun = "RB_Seat_gun";
                animationSourceBody = "RB_Seat_Turret";
                animationSourceGun = "RB_Seat_Gun";
                initTurn = -60;
                minTurn = -60.001;
                maxTurn = -60;
                gunnerName = "$STR_CargoBackRight";
                memoryPointGunnerOptics = "rseat_view";
                gunnerDoor = "hatchCR";
                commanding = 2;
                proxyIndex = 5;
                memoryPointsGetInGunner = "pos cargo R";
                memoryPointsGetInGunnerDir = "pos cargo R dir";
            };
            class MainFront: LeftBack {
                body = "LF_Seat_turret";
                gun = "LF_Seat_gun";
                animationSourceBody = "LF_Seat_Turret";
                animationSourceGun = "LF_Seat_Gun";
                initTurn = 0;
                minTurn = 0;
                maxTurn = 0.001;
                gunnerName = "Front Cargo";
                memoryPointGunnerOptics = "gunnerView2";
                commanding = 1;
                proxyIndex = 3;
            };
        };
        class AnimationSources {
            class recoil_source {
                source = "reload";
                weapon = "rhs_weap_2a70";
            };
            class recoil_source2 {
                source = "reload";
                weapon = "rhs_weap_2a72";
            };
            class muzzle_hide_cannon: recoil_source {};
            class muzzle_rot_cannon: recoil_source {
                source = "ammorandom";
            };
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class muzzle_hide_hmg: recoil_source2 {};
            class muzzle_rot_hmg: recoil_source2 {
                source = "ammorandom";
            };
            class muzzle_rot_mg1: muzzle_rot_hmg {
                weapon = "rhs_weap_pkt_bmd_coax";
            };
            class muzzle_rot_mg2: muzzle_rot_hmg {
                weapon = "rhs_weap_pkt_bmd_bow1";
            };
            class autoloader {
                source = "user";
                animPeriod = 1.25;
                initPhase = 0;
            };
            class elev {
                source = "user";
                animperiod = 0.0009;
            };
            class elev_bank {
                source = "user";
                animperiod = 0.0009;
            };
            class lead {
                source = "user";
                animperiod = 0.0016;
            };
            class offset {
                source = "user";
                animperiod = 0.0002;
            };
            class hatchCL {
                source = "door";
                animPeriod = 2.1;
            };
            class hatchCLB: hatchCL {};
            class hatchCR: hatchCL {};
            class HatchC: hatchCL {};
            class HatchG: HatchC {};
            class HatchD: HatchC {};
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd3_01.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd3_01.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd3_01.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_03.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_03.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_bmd34track.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_dam_bmd34track.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_destr_bmd34track.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_bmd34roadwheel.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_dam_bmd34roadwheel.rvmat",
                "rhsafrf\addons\rhs_sprut\data\rhs_destr_bmd34roadwheel.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class UserActions {
            class LowerSusp {
                displayName = "$STR_UA_LowerSusp";
                position = "";
                radius = 5;
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this <15000";
                statement = "this setmass [(getmass this)*4,7];this setVelocity [0.01,0.01,0.01]";
                onlyForPlayer = 1;
            };
            class RaiseSusp: LowerSusp {
                displayName = "$STR_UA_RaiseSusp";
                condition = "(player == driver this) && (2 > speed this) && !(surfaceIsWater getPos this) && getmass this >15000";
                statement = "this setmass [(getmass this)/4,7];this setVelocity [0.01,0.01,0.01]";
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
                count = 4;
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
                count = 10;
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
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call RHS_fnc_sprut_init;";
                fired = "_this call RHS_fnc_BMD4_autoloader;";
                hitpart = "_this call rhs_fnc_hitSpall";
                engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
                getOut = "_this call rhs_fnc_hatchAbandon";
            };
        };
    };
    class rhs_bmd4m_vdv: rhs_bmd4_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd4m_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        simulation = "tankX";
        normalSpeedForwardCoef = 0.85;
        slowSpeedForwardCoef = 0.5;
        torqueCurve[] = {
            {0.288462, 0.45},
            {0.384615, 0.692708},
            {0.461538, 0.890625},
            {0.561538, 1},
            {0.615385, 0.942708},
            {0.769231, 0.859375},
            {0.884615, 0.765625},
            {1.11962, 0}
        };
        enginePower = 373;
        peakTorque = 1920;
        maxOmega = 272.27;
        idleRPM = 750;
        redRPM = 2600;
        class Wheels: Wheels {
            class L2: L2 {
                dampingRate = 611;
                dampingRateInAir = 611;
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
                suspTravelDirection[] = {0.125, -1, 0};
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
        model = "\rhsafrf\addons\rhs_bmd_34\rhs_bmd_4m.p3d";
        picture = "\rhsafrf\addons\rhs_bmd_34\data\pictures\rhs_bmd4m_pic_ca.paa";
        displayName = "$STR_BMD4M_Name";
        class Hitpoints: HitPoints {
            class Armor_Composite_75 {
                armor = 999;
                material = -1;
                name = "Armor_CE_75_Hit";
                armorComponent = "Armor_CE_75";
                simulation = "RHS_Composite_75";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_85 {
                armor = 999;
                material = -1;
                name = "Armor_CE_85_Hit";
                armorComponent = "Armor_CE_85";
                simulation = "RHS_Composite_85";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_01_co.paa",
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_02a_co.paa",
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa",
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_w_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_01_co.paa",
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_02a_co.paa",
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa",
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_w_co.paa"
                };
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
                magazines[] = {
                    "rhs_mag_3UOF191_22",
                    "rhs_mag_9m117m1_8",
                    "rhs_mag_3uof8_237",
                    "rhs_mag_3ubr11_227",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17_6",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
            };
            class GPMGTurret1: GPMGTurret1 {};
            class GPMGTurret2: GPMGTurret1 {
                weapons[] = {"rhs_weap_pkt_bmd_bow2"};
                body = "LF_Seat_turret";
                gun = "LF_Seat_gun";
                animationSourceBody = "LF_Seat_Turret";
                animationSourceGun = "LF_Seat_Gun";
                gunnerName = "Left Hull Gunner";
                memoryPointGunnerOptics = "gunnerView2";
                commanding = 1;
                gunnerDoor = "hatchCL";
                memoryPointsGetInGunner = "pos cargo L";
                memoryPointsGetInGunnerDir = "pos cargo L dir";
                memoryPointGun = "memoryPointGun3";
                gunBeg = "muzzle3";
                gunEnd = "end3";
                selectionFireAnim = "zasleh4";
                proxyIndex = 3;
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpp220a";
            };
            class RightBack: RightBack {};
            class LeftBack: LeftBack {
                gunnerDoor = "hatchCLB";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
            };
            class MiddleBack: LeftBack {
                gunnerName = "Middle Rear Cargo";
                body = "RB_Seat_Turret";
                gun = "RB_Seat_gun";
                animationSourceBody = "";
                animationSourceGun = "";
                memoryPointGunnerOptics = "rseat_view";
                proxyIndex = 6;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_03.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_03.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_01.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4m_01.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4m_01.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_01a.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4m_01a.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4m_01a.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_02a.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4m_02a.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4m_02a.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_a.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4m_a.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4m_a.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_t.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4m_t.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4m_t.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_w.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4m_w.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4m_w.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaustl";
                direction = "exhaustl_dir";
                effect = "ExhaustEffectTankSide";
            };
            class Exhaust2 {
                position = "exhaustr";
                direction = "exhaustr_dir";
                effect = "ExhaustEffectTankSide";
            };
        };
        class AnimationSources: AnimationSources {
            class muzzle_rot_mg3 {
                source = "ammorandom";
                weapon = "rhs_weap_pkt_bmd_bow2";
            };
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
        };
    };
    class rhs_bmd4ma_vdv: rhs_bmd4m_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmd4ma_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_bmd_34\rhs_bmd_4ma.p3d";
        displayName = "$STR_BMD4MA_Name";
        class Hitpoints: Hitpoints {
            class Armor_Composite_60 {
                armor = 999;
                material = -1;
                name = "Armor_CE_60_Hit";
                armorComponent = "Armor_CE_60";
                simulation = "RHS_Composite_60";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_80 {
                armor = 999;
                material = -1;
                name = "Armor_CE_80_Hit";
                armorComponent = "Armor_CE_80";
                simulation = "RHS_Composite_80";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_01a_co.paa",
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_02a_co.paa",
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa",
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_w_co.paa",
            "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_a_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_01a_co.paa",
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_02a_co.paa",
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa",
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_w_co.paa",
                    "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_a_co.paa"
                };
            };
        };
    };
};
class CfgNonAIVehicles {
    class ProxyRetex;
    class Proxyhull_proxy_bmd4: ProxyRetex {
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        model = "\rhsafrf\addons\rhs_bmd_34\hull_proxy_bmd4";
    };
    class Proxyhull_proxy_bmd4m: Proxyhull_proxy_bmd4 {
        model = "\rhsafrf\addons\rhs_bmd_34\hull_proxy_bmd4m";
    };
    class Proxyhull_proxy_bmd4ma: Proxyhull_proxy_bmd4 {
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
        model = "\rhsafrf\addons\rhs_bmd_34\hull_proxy_bmd4ma";
    };
    class Proxyturret_proxy_bmd4: Proxyhull_proxy_bmd4 {
        model = "\rhsafrf\addons\rhs_bmd_34\turret_proxy_bmd4";
    };
    class Proxyturret_proxy_bmd4m: Proxyhull_proxy_bmd4 {
        model = "\rhsafrf\addons\rhs_bmd_34\turret_proxy_bmd4m";
    };
    class Proxyturret_proxy_bmd4ma: Proxyhull_proxy_bmd4ma {
        model = "\rhsafrf\addons\rhs_bmd_34\turret_proxy_bmd4ma";
    };
    class Proxyproxy_skirtL_bmd4ma: Proxyhull_proxy_bmd4ma {
        model = "\rhsafrf\addons\rhs_bmd_34\proxy_skirtL_bmd4ma";
    };
    class Proxyproxy_skirtR_bmd4ma: Proxyhull_proxy_bmd4ma {
        model = "\rhsafrf\addons\rhs_bmd_34\proxy_skirtR_bmd4ma";
    };
};
