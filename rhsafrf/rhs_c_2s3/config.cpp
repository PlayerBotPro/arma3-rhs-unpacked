class CfgPatches {
    class rhs_c_2s3 {
        units[] = {"rhs_2s3_tv", "rhs_2s3_at_tv"};
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_heavyweapons",
            "rhs_decals",
            "rhs_optics",
            "rhs_c_troops"
        };
        name = "2S3 SPG";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        rhs_2s3_commander = "rhs_2s3_commander";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class 2s3_init {
                file = "rhsafrf\addons\rhs_c_2s3\scripts\rhs_fnc_2s3_init.sqf";
            };
        };
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
        class rhs_2s3_commander: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_2s3\anims\2s3_commander.rtm";
            interpolateTo[] = {"kia_rhs_2s3_commander", 1};
        };
        class kia_rhs_2s3_commander: DefaultDie {
            file = "\rhsafrf\addons\rhs_2s3\anims\2s3_commander.rtm";
        };
    };
};
class RHS_Effects_Tank_Engine_Destruction;
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
    class rhs_2s3tank_base: Tank_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHS2S3NumberPlaces,'Default']"};
        category = "Armored";
        destrType = "DestructDefault";
        availableForSupportTypes[] = {"Artillery"};
        artilleryScanner = 1;
        driveOnComponent[] = {"Track_L", "Track_R", "Slide"};
        unitInfoType = "RscUnitInfoArtillery";
        author = "$STR_RHS_AUTHOR_FULL";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
        displayName = "$STR_2S3M1_Name";
        accuracy = 0.3;
        model = "\rhsafrf\addons\rhs_2s3\rhs_2s3";
        picture = "\rhsafrf\addons\rhs_2s3\ico\rhs_2s3m1_pic_ca.paa";
        Icon = "\rhsafrf\addons\rhs_2s3\ico\ico_2s3_ca.paa";
        crew = "rhs_msv_crew";
        typicalCargo[] = {};
        side = 0;
        faction = "rhs_faction_tv";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        driverAction = "driver_apcwheeled2_out";
        driverInAction = "rhs_2s1_driver";
        driverDoor = "hatchD";
        LODDriverTurnedOut = 0;
        simulation = "tankX";
        normalSpeedForwardCoef = 0.85;
        slowSpeedForwardCoef = 0.5;
        fuelCapacity = 25;
        RHS_fuelCapacity = 1885;
        maxSpeed = 63;
        tankTurnForce = 310000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 4;
        accelAidForceYOffset = -3.6;
        accelAidForceSpd = 2.23;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        torqueCurve[] = {
            {0.35, 0.449733},
            {0.475, 0.80136},
            {0.6, 1},
            {0.7, 1},
            {0.75, 0.97863},
            {0.8, 0.947062},
            {0.9, 0.917921},
            {1.114, 0}
        };
        engineMOI = 10;
        enginePower = 388;
        peakTorque = 2059;
        minOmega = 72;
        maxOmega = 209.44;
        idleRPM = 700;
        redRPM = 2000;
        thrustDelay = 0.3;
        dampingRateFullThrottle = 0.3;
        dampingRateZeroThrottleClutchEngaged = 3;
        dampingRateZeroThrottleClutchDisengaged = 0.25;
        engineLosses = 25;
        transmissionLosses = 15;
        clutchStrength = 20;
        latency = 1.3;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.5,
            0.5,
            0,
            0.9,
            0.5,
            0.9,
            0.7,
            0.9,
            0.7,
            0.95,
            0.75,
            0.95,
            0.75,
            1,
            0.8
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -2.235,
                "N",
                0,
                "D1",
                2,
                "D2",
                1.5,
                "D3",
                1.125,
                "D4",
                0.85,
                "D5",
                0.64,
                "D6",
                0.5
            };
            TransmissionRatios[] = {"High", 12};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                side = "left";
                width = 0.48;
                steering = 0;
                mass = 150;
                MOI = 10.2121;
                maxBrakeTorque = 12000;
                maxDroop = 0.15;
                maxCompression = 0.15;
                sprungMass = 2333.33;
                springStrength = 140000;
                springDamperRate = 7500;
                dampingRate = 230;
                dampingRateInAir = 230;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 4;
                latStiffY = 50;
                longitudinalStiffnessPerUnitGravity = 3000;
                frictionVsSlipGraph[] = {{0, 0.8}, {0.38, 1}, {0.7, 0.65}};
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
            class L9: L2 {
                boneName = "wheel_podkolol9";
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
            class R9: R2 {
                boneName = "wheel_podkolop9";
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
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm1",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm2",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm3",
                    0.8912509,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm4",
                    1,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm5",
                    1.1220185,
                    1,
                    340
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_rpm6",
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
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",
                    0.39810717,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsOutH1 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",
                    0.4466836,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsOutH2 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",
                    0.5011872,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsOutH3 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",
                    0.56234133,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsOutH4 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",
                    0.56234133,
                    1,
                    220
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
            class ThreadsOutS0 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",
                    0.31622776,
                    1,
                    120
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsOutS1 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",
                    0.35481337,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsOutS2 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",
                    0.39810717,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsOutS3 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",
                    0.4466836,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsOutS4 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",
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
        extCameraPosition[] = {0, 2, -15};
        viewDriverInExternal = 1;
        cost = 1500000;
        damageResistance = 0.02;
        crewVulnerable = 0;
        incomingMissileDetectionSystem = 0;
        armor = 300;
        explosionShielding = 10;
        armorStructural = 6;
        minTotalDamageThreshold = 0.1;
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = 0.5;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0.009;
                radius = 0.25;
            };
            class HitEngine: HitEngine {
                armor = 1;
                material = -1;
                name = "motor";
                passThrough = 0;
                minimalHit = 0.24;
                explosionShielding = 0.009;
                radius = 0.33;
                class DestructionEffects: RHS_Effects_Tank_Engine_Destruction {};
            };
            class HitLTrack: HitLTrack {
                armor = 0.5;
                material = -1;
                name = "pas_L";
                passThrough = 0;
                minimalHit = 0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = 0.5;
                material = -1;
                name = "pas_P";
                passThrough = 0;
                minimalHit = 0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
        };
        class TransportMagazines {
            class _xx_rhs_30Rnd_545x39_7N10_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = 10;
            };
            class _xx_rhs_mag_rgd5 {
                magazine = "rhs_mag_rgd5";
                count = 10;
            };
            class _xx_rhs_mag_nspn_red {
                magazine = "rhs_mag_nspn_red";
                count = 10;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 4;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        body = "obsTurret";
                        gun = "obsGun";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        maxHorizontalRotSpeed = 0.45;
                        maxVerticalRotSpeed = 0.07;
                        stabilizedInAxes = 3;
                        soundServo[] = {
                            "A3\Sounds_F\vehicles\armor\noises\servo_best",
                            0.01,
                            1,
                            50
                        };
                        minElev = -6;
                        maxElev = 15;
                        initElev = 0;
                        minTurn = -171;
                        maxTurn = 124;
                        initTurn = 0;
                        memoryPointGun = "usti hlavne3";
                        gunBeg = "usti hlavne3";
                        gunEnd = "konec hlavne3";
                        weapons[] = {"rhs_weap_pkt_2s3"};
                        magazines[] = {
                            "rhs_mag_762x54mm_250",
                            "rhs_mag_762x54mm_250",
                            "rhs_mag_762x54mm_250",
                            "rhs_mag_762x54mm_250",
                            "rhs_mag_762x54mm_250",
                            "rhs_mag_762x54mm_250"
                        };
                        turretInfoType = "RscWeaponZeroing";
                        discreteDistance[] = {
                            100,
                            200,
                            300,
                            400,
                            500,
                            600,
                            700,
                            800,
                            900,
                            1000,
                            1100,
                            1200,
                            1300,
                            1400,
                            1500
                        };
                        discreteDistanceInitIndex = 2;
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
                        gunnerInAction = "rhs_2s3_commander";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        gunnerDoor = "hatchC";
                        gunnerType = "rhs_msv_crew_commander";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        class HitPoints {
                            class HitTurretCom {
                                isTurret = 1;
                                armor = 0.3;
                                material = -1;
                                name = "vezVelitele";
                                visual = "vezVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                            };
                            class HitGunCom {
                                isGun = 1;
                                armor = 0.3;
                                material = -1;
                                name = "zbranVelitele";
                                visual = "zbranVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                            };
                        };
                        selectionFireAnim = "zasleh3";
                        class OpticsIn {
                            class day1 {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.155;
                                minFov = 0.155;
                                maxFov = 0.155;
                                visionMode[] = {"Normal", "NVG"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                            };
                            class day2 {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.047;
                                minFov = 0.047;
                                maxFov = 0.047;
                                visionMode[] = {"Normal", "NVG"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                            };
                            class PZU3 {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.1;
                                minFov = 0.1;
                                maxFov = 0.1;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu3.p3d";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
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
                memoryPointGun = "usti hlavne2";
                selectionFireAnim = "zasleh2";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                weapons[] = {"RHS_Weap_2a33"};
                magazines[] = {
                    "rhs_mag_HE_2a33",
                    "rhs_mag_WP_2a33",
                    "rhs_mag_LASER_2a33",
                    "rhs_mag_SMOKE_2a33",
                    "rhs_mag_ILLUM_2a33"
                };
                minElev = -5;
                maxElev = 66.5;
                initElev = 0;
                maxCamElev = 3.55;
                minCamElev = -3.55;
                elevationMode = 3;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\noises\servo_best",
                    0.01,
                    1,
                    50
                };
                maxHorizontalRotSpeed = 0.45;
                maxVerticalRotSpeed = 0.15;
                turretInfoType = "rhs_gui_optic_2s3_op5_computer";
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                lockWhenVehicleSpeed = 1;
                memoryPointGunnerOptics = "gunnerview";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 1;
                class OpticsIn {
                    class PG4: ViewOptics {
                        opticsDisplayName = "PG4";
                        initFov = 0.189189;
                        minFov = 0.189189;
                        maxFov = 0.189189;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg2.p3d";
                    };
                    class Op5_37: PG4 {
                        opticsDisplayName = "OP5";
                        camPos = "op5_pos";
                        camDir = "op5_dir";
                        initFov = 0.127273;
                        minFov = 0.127273;
                        maxFov = 0.127273;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty.p3d";
                    };
                };
                gunnerAction = "mbt2_slot2a_out";
                gunnerInAction = "mbt2_slot2a_in";
                gunnerDoor = "hatchC";
                forceHideGunner = 1;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                class HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -1;
                        name = "vez";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = 0.15;
                        explosionShielding = 0.009;
                        radius = 0.25;
                    };
                    class HitGun {
                        armor = 0.5;
                        material = -1;
                        name = "zbran";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.15;
                        explosionShielding = 0.001;
                        radius = 0.25;
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
        hiddenSelections[] = {"camo1", "camo2", "camo3", "n1", "n2", "n3"};
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_2s3\data\rhs_2s3_01_co.paa",
            "rhsafrf\addons\rhs_2s3\data\rhs_2s3_02_co.paa",
            "rhsafrf\addons\rhs_2s3\data\rhs_art_wheels_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_2s3\data\rhs_2s3_01_co.paa", "rhsafrf\addons\rhs_2s3\data\rhs_2s3_02_co.paa", "rhsafrf\addons\rhs_2s3\data\rhs_art_wheels_co.paa"};
                factions[] = {"rhs_faction_tv"};
            };
            class rhs_tri {
                displayName = "3-Color Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_01_tri_co.paa", "rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_02_tri_co.paa", "rhsafrf\addons\rhs_2s3\data\rhs_art_wheels_co.paa"};
                factions[] = {"rhs_faction_tv"};
            };
            class rhs_sand {
                displayName = "Sand";
                author = "beaar";
                textures[] = {"rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_01_des_co.paa", "rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_02_des_co.paa", "rhsafrf\addons\rhs_2s3_camo\data\rhs_art_wheels_des_co.paa"};
                factions[] = {};
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHS2S3NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S3NumberPlaces}else{[_this, [['Number', cRHS2S3NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
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
                    class rhs_mag_HE_2a33_46 {
                        name = "$STR_RHS_53WOF27_NAME";
                        value = "rhs_mag_HE_2a33_46";
                        defaultValue = "rhs_mag_HE_2a33_46";
                    };
                    class rhs_mag_53vof546v_46 {
                        name = "$STR_RHS_53VOF546V_NAME";
                        value = "rhs_mag_53vof546v_46";
                        defaultValue = "rhs_mag_53vof546v_46";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 46. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',46,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4','rhs_ammoslot_5','rhs_ammoslot_6','rhs_ammoslot_7']] spawn rhs_fnc_Eden_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [Smoke rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class rhs_mag_SMOKE_2a33_46 {
                        name = "$STR_RHS_53WD546_NAME";
                        value = "rhs_mag_SMOKE_2a33_46";
                        defaultValue = "rhs_mag_SMOKE_2a33_46";
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
                tooltip = "Define type of shell for #3 slot [Illumination rounds]";
                property = "rhs_ammoslot_3_type";
                class values {
                    class rhs_mag_ILLUM_2a33_46 {
                        name = "$STR_RHS_3WS23_NAME";
                        value = "rhs_mag_ILLUM_2a33_46";
                        defaultValue = "rhs_mag_ILLUM_2a33_46";
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
                    class rhs_mag_LASER_2a33_46 {
                        name = "$STR_RHS_3WOF93_NAME";
                        value = "rhs_mag_LASER_2a33_46";
                        defaultValue = "rhs_mag_LASER_2a33_46";
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
                    class rhs_mag_WP_2a33_46 {
                        name = "$STR_RHS_53OCH540_NAME";
                        value = "rhs_mag_WP_2a33_46";
                        defaultValue = "rhs_mag_WP_2a33_46";
                    };
                    class rhs_mag_Atomic_2a33_46 {
                        name = "$STR_RHS_3WB3_NAME";
                        value = "rhs_mag_Atomic_2a33_46";
                        defaultValue = "rhs_mag_Atomic_2a33_46";
                    };
                };
            };
            class rhs_ammoslot_5: rhs_ammoslot_1 {
                displayName = "Ammo slot #5 count";
                tooltip = "Define number of rounds stored inside of type #5. Max 46. Leave -1 for default loadout";
                property = "rhs_ammoslot_5";
            };
            class rhs_ammoslot_6_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #6 type";
                tooltip = "Define type of shell for #5 slot [AP]";
                property = "rhs_ammoslot_6_type";
                class values {
                    class rhs_mag_br540 {
                        name = "$""BR-540""";
                        value = "rhs_mag_br540";
                        defaultValue = "rhs_mag_br540";
                    };
                };
            };
            class rhs_ammoslot_6: rhs_ammoslot_1 {
                displayName = "Ammo slot #6 count";
                tooltip = "Define number of rounds stored inside of type #6. Max 46. Leave -1 for default loadout";
                property = "rhs_ammoslot_6";
            };
            class rhs_ammoslot_7_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #7 type";
                tooltip = "Define type of shell for #75 slot [HEAT]";
                property = "rhs_ammoslot_7_type";
                class values {
                    class rhs_mag_bp540 {
                        name = "$""BP-540""";
                        value = "rhs_mag_bp540";
                        defaultValue = "rhs_mag_bp540";
                    };
                };
            };
            class rhs_ammoslot_7: rhs_ammoslot_1 {
                displayName = "Ammo slot #7 count";
                tooltip = "Define number of rounds stored inside of type #7. Max 46. Leave -1 for default loadout";
                property = "rhs_ammoslot_7";
            };
        };
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
        };
        class AnimationSources: AnimationSources {
            class muzzle_rot_HMG {
                source = "ammorandom";
                weapon = "rhs_weap_pkt_2s3";
            };
            class recoil_source {
                source = "reload";
                weapon = "RHS_Weap_2a33";
            };
            class muzzle_hide_arty {
                source = "reload";
                weapon = "RHS_Weap_2a33";
            };
            class HatchC {
                source = "door";
                animPeriod = 0.8;
            };
            class HatchD: HatchC {};
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_2s3\data\rhs_2s3_01new.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_dam_2s3_01new.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_destr_2s3.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_2s3_02new.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_dam_2s3_02new.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_destr_2s3.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_art_wheels.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_dam_art_wheels.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_destr_2s3.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_dam_art_tracks.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_dam_art_tracks.rvmat",
                "rhsafrf\addons\rhs_2s3\data\rhs_destr_2s3.rvmat",
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
        class Reflectors {
            class Left {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "l svetlo";
                direction = "konec l svetla";
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
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
            class Right2: Right {
                direction = "konec P svetla";
                useFlare = 1;
            };
            class Left2: Left {
                direction = "konec l svetla";
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Left"}, {"Right"}};
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_2s3_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
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
    class rhs_2s3tank_at_base: rhs_2s3tank_base {
        displayName = "2S3M1 (Direct Fire)";
        artilleryScanner = 0;
        availableForSupportTypes[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                elevationMode = 0;
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
                maxElev = 60;
                weapons[] = {"rhs_weap_2a33_at", "rhs_weap_fcs"};
                magazines[] = {
                    "rhs_mag_53vof546v_direct_32",
                    "rhs_mag_br540_10",
                    "rhs_mag_bp540_4",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
            };
        };
    };
    class rhs_2s3_tv: rhs_2s3tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2s3_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
    };
    class rhs_2s3_at_tv: rhs_2s3tank_at_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2s3_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
    };
};
