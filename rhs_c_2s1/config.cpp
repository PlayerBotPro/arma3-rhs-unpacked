class CfgPatches {
    class rhs_c_2s1 {
        units[] = {
            "rhs_2s1_tv",
            "rhs_2s1_vmf",
            "rhs_2s1_at_tv",
            "rhs_2s1_at_vmf"
        };
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_heavyweapons",
            "rhs_decals",
            "rhs_optics",
            "rhs_c_troops"
        };
        name = "2S1 SPG";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RHS_Effects_Tank_Engine_Destruction;
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class 2s1_ejection {
                file = "rhsafrf\addons\rhs_c_2s1\scripts\rhs_fnc_2s1_ejection.sqf";
            };
            class 2s1_init {
                file = "rhsafrf\addons\rhs_c_2s1\scripts\rhs_fnc_2s1_init.sqf";
            };
        };
    };
};
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        rhs_2s1_driver = "rhs_2s1_driver";
        rhs_2s1_commander = "rhs_2s1_commander";
        rhs_2s1_commander_out = "rhs_2s1_commander_out_settlein";
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
        class rhs_2s1_commander: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_2s1\anims\2s1_commander.rtm";
            interpolateTo[] = {"kia_rhs_2s1_commander", 1};
        };
        class rhs_2s1_commander_out_settlein: Crew {
            file = "\A3\cargoposes_F\Anim\mbt2_slot2b_settlein.rtm";
            speed = -1;
            looped = 0;
            connectTo[] = {"rhs_2s1_commander_out", 0.1};
            interpolateTo[] = {"KIA_crew_tank01", 1};
            variantsAI[] = {"rhs_2s1_commander_out", 1};
            variantsPlayer[] = {"rhs_2s1_commander_out", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_2s1_commander_out: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_2s1\anims\2s1_commander_out.rtm";
            interpolateTo[] = {"KIA_crew_tank01", 1, "mbt2_slot2b_in", 1};
        };
        class kia_rhs_2s1_commander: DefaultDie {
            file = "\rhsafrf\addons\rhs_c_2s1\anims\2s1_commander.rtm";
        };
        class rhs_2s1_driver: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_2s1\anims\2s1_driver.rtm";
            interpolateTo[] = {"kia_rhs_2s1_driver", 1};
        };
        class kia_rhs_2s1_driver: DefaultDie {
            file = "\rhsafrf\addons\rhs_c_2s1\anims\2s1_driver.rtm";
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
    class rhs_2s1tank_base: Tank_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',[cRHS2S1BackSmallNumberPlaces, cRHS2S1FrontTurretNumberPlaces],'Default']", "['Label', [cRHS2S1BackSymbol, cRHS2S1TurretFrontLeftSymbol, cRHS2S1TurretFrontRightSymbol], 'Platoon', 9]"};
        category = "Armored";
        destrType = "DestructDefault";
        availableForSupportTypes[] = {"Artillery"};
        artilleryScanner = 1;
        driveOnComponent[] = {"Track_L", "Track_R", "Slide"};
        unitInfoType = "RscUnitInfoArtillery";
        author = "$STR_RHS_AUTHOR_FULL";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
        displayName = "$STR_2S1_Name";
        accuracy = 0.3;
        model = "\rhsafrf\addons\rhs_2s1\rhs_2s1";
        picture = "\rhsafrf\addons\rhs_2s1\ico\rhs_2s1_pic_ca.paa";
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
        LODDriverTurnedIn = 0;
        simulation = "tankX";
        normalSpeedForwardCoef = 0.85;
        slowSpeedForwardCoef = 0.5;
        fuelCapacity = 25;
        RHS_fuelCapacity = 1885;
        maxSpeed = 60;
        canFloat = 1;
        waterLeakiness = 250;
        maxFordingDepth = 0.05;
        waterResistance = 2;
        waterDamageEngine = 0.9;
        engineShiftY = 0.7;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 7.2;
        waterResistanceCoef = 1.75;
        waterEffectSpeed = 5;
        engineEffectSpeed = 5;
        waterFastEffectSpeed = 28;
        rudderForceCoef = 4.5;
        tankTurnForce = 310000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 4;
        accelAidForceYOffset = -3.6;
        accelAidForceSpd = 2.23;
        torqueCurve[] = {
            {0.35, 0.546867},
            {0.475, 0.80136},
            {0.6, 1},
            {0.7, 1},
            {0.75, 0.97863},
            {0.8, 0.947062},
            {0.9, 0.917921},
            {1.114, 0}
        };
        engineMOI = 10;
        enginePower = 220;
        peakTorque = 1079;
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
                2.6,
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
            AmphibiousRatios[] = {"R1", -40, "N", 0, "D1", 40};
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
                width = 0.33;
                steering = 0;
                mass = 150;
                MOI = 8.16966;
                maxBrakeTorque = 12000;
                maxDroop = 0.15;
                maxCompression = 0.15;
                sprungMass = 1142.86;
                springStrength = 140000;
                springDamperRate = 7500;
                dampingRate = 1120;
                dampingRateInAir = 1120;
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
        armorStructural = 6;
        explosionShielding = 10;
        minTotalDamageThreshold = 0.5;
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = -100;
                name = "telo";
                armorComponent = "Hit_Ammo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.04;
                explosionShielding = 0.01;
                radius = 0.1;
            };
            class HitFuelTank_1 {
                armor = -80;
                material = -1;
                name = "Hit_FuelTank_1";
                armorComponent = "Hit_FuelTank_1";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.3;
                explosionShielding = 0;
                radius = 0.1;
            };
            class HitFuelTank_2: HitFuelTank_1 {
                name = "Hit_FuelTank_2";
                armorComponent = "Hit_FuelTank_2";
            };
            class HitFuelTank_3: HitFuelTank_1 {
                name = "Hit_FuelTank_3";
                armorComponent = "Hit_FuelTank_3";
            };
            class HitFuelTank_4: HitFuelTank_1 {
                name = "Hit_FuelTank_4";
                armorComponent = "Hit_FuelTank_4";
            };
            class HitFuel {
                armor = 999;
                name = "Hit_FuelTank_1";
                armorComponent = "Hit_FuelTank_1";
                visual = "-";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.01;
                depends = "HitFuelTank_1*0.3+HitFuelTank_2*0.3+HitFuelTank_3*0.2+HitFuelTank_4*0.2";
            };
            class HitEngine: HitEngine {
                armor = -150;
                material = -1;
                name = "motor";
                armorComponent = "Hit_Engine";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0.009;
                radius = 0.18;
                class DestructionEffects: RHS_Effects_Tank_Engine_Destruction {};
            };
            class HitLTrack: HitLTrack {
                armor = -150;
                armorComponent = "Hit_TrackL";
                name = "Hit_TrackL";
                passThrough = 0;
                material = -1;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = -150;
                armorComponent = "Hit_TrackR";
                name = "Hit_TrackR";
                material = -1;
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class Hit_Optic_Driver {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_Driver";
                visual = "-";
                armorComponent = "Hit_Optic_Driver";
                passThrough = 0;
            };
            class Hit_Optic_Periscope {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_Periscope";
                visual = "-";
                armorComponent = "Hit_Optic_Periscope";
                passThrough = 0;
            };
            class Hit_Optic_PG2 {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_PG2";
                visual = "-";
                armorComponent = "Hit_Optic_PG2";
                passThrough = 0;
            };
            class Hit_Optic_OP5_37 {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_OP5_37";
                visual = "-";
                armorComponent = "Hit_Optic_OP5_37";
                passThrough = 0;
            };
            class Hit_Optic_TKN3 {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_TKN3";
                visual = "-";
                armorComponent = "Hit_Optic_TKN3";
                passThrough = 0;
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
                        weapons[] = {};
                        magazines[] = {};
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
                            visionMode[] = {"Normal"};
                            thermalMode[] = {0, 1};
                        };
                        commanding = 3;
                        gunnerAction = "rhs_2s1_commander_out";
                        gunnerInAction = "rhs_2s1_commander";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        gunnerDoor = "hatchC";
                        gunnerType = "rhs_msv_crew_commander";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        LODTurnedIn = 0;
                        LODTurnedOut = 0;
                        LODOpticsIn = 0;
                        LODOpticsOut = 0;
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
                            class Wide: ViewOptics {
                                opticsDisplayName = "TKN3";
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                                initFov = 0.14;
                                minFov = 0.14;
                                maxFov = 0.14;
                                hitpoint = "Hit_Optic_TKN3";
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
                    class LoaderOptics: CommanderOptics {
                        body = "LdrTurret";
                        gun = "LdrGun";
                        animationSourceBody = "LdrTurret";
                        animationSourceGun = "LdrGun";
                        memoryPointGunnerOutOptics = "loaderview";
                        memoryPointGunnerOptics = "loaderview";
                        gunnerOutOpticsModel = "";
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
                            visionMode[] = {"Normal"};
                            thermalMode[] = {0, 1};
                        };
                        gunnerName = "Loader";
                        proxyIndex = 2;
                        commanding = 2;
                        gunnerAction = "Commander_MBT_01_cannon_F_out";
                        gunnerInAction = "rhs_2s1_commander";
                        personTurretAction = "vehicle_passenger_stand_2";
                        isPersonTurret = 1;
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        animationSourceHatch = "hatchLoader";
                        gunnerDoor = "HatchL";
                        gunnerType = "rhs_msv_crew";
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 0;
                        LODTurnedIn = 0;
                        LODTurnedOut = 0;
                        LODOpticsIn = 0;
                        LODOpticsOut = 0;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        class OpticsIn {
                            class Periscope: ViewOptics {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.26;
                                minFov = 0.26;
                                maxFov = 0.26;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                                hitpoint = "Hit_Optic_Periscope";
                            };
                        };
                        class HitPoints {};
                    };
                };
                memoryPointGun = "usti hlavne2";
                selectionFireAnim = "zasleh2";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                weapons[] = {"rhs_weap_2a31"};
                magazines[] = {"rhs_mag_3of56_35", "rhs_mag_bk13_5"};
                minElev = -5;
                maxElev = 72;
                initElev = 10;
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
                turretInfoType = "rhs_gui_optic_2s1_op5_computer";
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                lockWhenVehicleSpeed = 1;
                memoryPointGunnerOptics = "gunnerview";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 1;
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                LODOpticsIn = 0;
                LODOpticsOut = 0;
                class OpticsIn {
                    class PG2: ViewOptics {
                        hitpoint = "Hit_Optic_PG2";
                        opticsDisplayName = "PG2";
                        initFov = 0.189189;
                        minFov = 0.189189;
                        maxFov = 0.189189;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg2.p3d";
                    };
                    class Op5_37: PG2 {
                        hitpoint = "Hit_Optic_OP5_37";
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
                        armor = -150;
                        material = -1;
                        name = "vez";
                        armorComponent = "Hit_Turret";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.0009;
                        radius = 0.1;
                    };
                    class HitGun {
                        armor = -150;
                        material = -1;
                        name = "zbran";
                        armorComponent = "Hit_Gun";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.0001;
                        radius = 0.1;
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
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo_sprocket",
            "camo_idler",
            "camo_wheel1",
            "camo_wheel2",
            "camo_wheel3",
            "camo_wheel4",
            "camo_wheel5",
            "camo_wheel6",
            "camo_wheel7",
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
            "n12",
            "n13",
            "n14",
            "n15",
            "n16",
            "n17",
            "n18",
            "n19",
            "n20",
            "i1",
            "i2",
            "i3",
            "i4",
            "i5",
            "i6",
            "i7"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
            "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_co.paa"
                };
                materials[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat"
                };
                factions[] = {"rhs_faction_tv", "rhs_faction_vmf"};
            };
            class light {
                displayName = "Light Green";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_hull_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_turret_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa"
                };
                materials[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat"
                };
                factions[] = {"rhs_faction_tv", "rhs_faction_vmf"};
            };
            class sand {
                displayName = "Sand";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_hull_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_turret_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_sand_suspension_co.paa"
                };
                materials[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat"
                };
                factions[] = {"rhs_faction_tv", "rhs_faction_vmf"};
            };
            class standard_dirty {
                displayName = "Green Weathered 1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_hull_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_turret_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_co.paa"
                };
                materials[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_hull.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_turret.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat"
                };
                factions[] = {"rhs_faction_tv", "rhs_faction_vmf"};
            };
            class light_dirty {
                displayName = "Green Weathered 2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_hull_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_turret_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_co.paa",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_co.paa"
                };
                materials[] = {
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_hull.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_turret.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
                    "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat"
                };
                factions[] = {"rhs_faction_tv", "rhs_faction_vmf"};
            };
        };
        textureList[] = {
            "standard",
            0.8,
            "light",
            0.8,
            "standard_dirty",
            0.2,
            "light_dirty",
            0.2
        };
        class UserActions {
            class light_cateyes_off {
                displayName = "Cat Eyes Off";
                position = "pos_driverpos";
                priority = 0.5;
                showWindow = 0;
                radius = 2;
                onlyForplayer = 0;
                condition = "(call rhs_fnc_findPlayer isEqualTo driver this) && {this animationPhase 'light_cateyes'<0.5};";
                statement = "this animate ['light_cateyes', 1];";
            };
            class light_cateyes_on: light_cateyes_off {
                displayName = "Cat Eyes On";
                condition = "(call rhs_fnc_findPlayer isEqualTo driver this) && this animationPhase 'light_cateyes'==1;";
                statement = "this animate ['light_cateyes', 0];";
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
                displayName = "Define font type of side hull number (3 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle. 3 digits";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
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
                displayName = "Set side hull number (3 digits)";
                tooltip = "Set side number. 3 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "0";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1NumberPlaces}else{[_this, [['Number', cRHS2S1NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNumber_type2: rhs_decalNumber_type {
                displayName = "Define font type of back small numbers (3 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle. 3 digits";
                property = "rhs_decalNumber_type2";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1BackSmallNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
            };
            class rhs_decalNumber2: rhs_decalNumber {
                displayName = "Set back small number (3 digits)";
                tooltip = "Set back small number. 3 numbers are required. Hides on 0";
                property = "rhs_decalNumber2";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1BackSmallNumberPlaces}else{[_this, [['Number', cRHS2S1BackSmallNumberPlaces, _this getVariable ['rhs_decalNumber_type2','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNumber_type3: rhs_decalNumber_type {
                displayName = "Define font type of back large numbers (3 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle. 3 digits";
                property = "rhs_decalNumber_type3";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1BackLargeNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
            };
            class rhs_decalNumber3: rhs_decalNumber {
                displayName = "Set back large number (3 digits)";
                tooltip = "Set back large number. 3 numbers are required. Hides on 0";
                property = "rhs_decalNumber3";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1BackLargeNumberPlaces}else{[_this, [['Number', cRHS2S1BackLargeNumberPlaces, _this getVariable ['rhs_decalNumber_type3','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNumber_type4: rhs_decalNumber_type {
                displayName = "Define font type of back turret number (3 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle. 3 digits";
                property = "rhs_decalNumber_type4";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1BackTurretNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
            };
            class rhs_decalNumber4: rhs_decalNumber {
                displayName = "Set back turret number (3 digits)";
                tooltip = "Set back turret number. 3 numbers are required. Hides on 0";
                property = "rhs_decalNumber4";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1BackTurretNumberPlaces}else{[_this, [['Number', cRHS2S1BackTurretNumberPlaces, _this getVariable ['rhs_decalNumber_type4','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNumber_type5: rhs_decalNumber_type {
                displayName = "Define font type of front turret number (3 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle. 3 digits";
                property = "rhs_decalNumber_type5";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1FrontTurretNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
            };
            class rhs_decalNumber5: rhs_decalNumber {
                displayName = "Set front turret number (3 digits)";
                tooltip = "Set front turret number. 3 numbers are required. Hides on 0";
                property = "rhs_decalNumber5";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1FrontTurretNumberPlaces}else{[_this, [['Number', cRHS2S1FrontTurretNumberPlaces, _this getVariable ['rhs_decalNumber_type5','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNumber_type6: rhs_decalNumber_type {
                displayName = "Define font type of front turret number (5 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle. 5 digits";
                property = "rhs_decalNumber_type6";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1SerbianNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
            };
            class rhs_decalNumber6: rhs_decalNumber {
                displayName = "Set front turret number (5 digits, Serbian)";
                tooltip = "Set front turret number. 5 numbers are required. Hides on 0";
                property = "rhs_decalNumber6";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1SerbianNumberPlaces}else{[_this, [['Number', cRHS2S1SerbianNumberPlaces, _this getVariable ['rhs_decalNumber_type6','CDF'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalPlatoonBack_type {
                displayName = "Define back door platoon symbol type";
                tooltip = "Decal type";
                property = "rhs_decalPlatoonBack_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
                typeName = "STRING";
                class values {
                    class Platoon {
                        name = "Platoon";
                        value = "Platoon";
                        defaultValue = "1";
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
            class rhs_decalPlatoonBack {
                displayName = "Set platoon symbol";
                tooltip = "Set platoon symbol located on the back of the vehicle. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1BackSymbol],  _this getVariable ['rhs_decalPlatoonBack_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalPlatoonTurretBackRight_type: rhs_decalPlatoonBack_type {
                displayName = "Define back turret right symbol type";
                property = "rhs_decalPlatoonTurretBackRight_type";
                class values: values {
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                    class Army: Army {};
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                };
            };
            class rhs_decalPlatoonTurretBackRight: rhs_decalPlatoonBack {
                displayName = "Set back turret right symbol";
                tooltip = "Define symbol located on right back side of vehicle turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoonTurretBackRight";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1TurretBackRightSymbol],  _this getVariable ['rhs_decalPlatoonTurretBackRight_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalPlatoonTurretBackLeft_type: rhs_decalPlatoonBack_type {
                displayName = "Define back turret left symbol type";
                property = "rhs_decalPlatoonTurretBackLeft_type";
                class values: values {
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                    class Army: Army {};
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                };
            };
            class rhs_decalPlatoonTurretBackLeft: rhs_decalPlatoonBack {
                displayName = "Set back turret left symbol";
                tooltip = "Define symbol located on left back side of vehicle turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoonTurretBackLeft";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1TurretBackLeftSymbol],  _this getVariable ['rhs_decalPlatoonTurretBackLeft_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalPlatoonTurretFrontRight_type: rhs_decalPlatoonBack_type {
                displayName = "Define front turret right symbol type";
                property = "rhs_decalPlatoonTurretFrontRight_type";
                class values: values {
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                    class Army: Army {};
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                };
            };
            class rhs_decalPlatoonTurretFrontRight: rhs_decalPlatoonBack {
                displayName = "Set front turret right symbol";
                tooltip = "Define symbol located on right front side of vehicle turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoonTurretFrontRight";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1TurretFrontRightSymbol],  _this getVariable ['rhs_decalPlatoonTurretFrontRight_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalPlatoonTurretFrontLeft_type: rhs_decalPlatoonBack_type {
                displayName = "Define front turret left symbol type";
                property = "rhs_decalPlatoonTurretFrontLeft_type";
                class values: values {
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                    class Army: Army {};
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                };
            };
            class rhs_decalPlatoonTurretFrontLeft: rhs_decalPlatoonBack {
                displayName = "Set front turret left symbol";
                tooltip = "Define symbol located on left front side of vehicle turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoonTurretFrontLeft";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1TurretFrontLeftSymbol],  _this getVariable ['rhs_decalPlatoonTurretFrontLeft_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalPlatoonHullLeft_type: rhs_decalPlatoonBack_type {
                displayName = "Define hull left symbol type";
                property = "rhs_decalPlatoonHullLeft_type";
                class values: values {
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                    class Army: Army {};
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                };
            };
            class rhs_decalPlatoonHullLeft: rhs_decalPlatoonBack {
                displayName = "Set hull left symbol";
                tooltip = "Define symbol located on left side of vehicle hull. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoonHullLeft";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1HullLeftSymbol],  _this getVariable ['rhs_decalPlatoonHullLeft_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalPlatoonHullRight_type: rhs_decalPlatoonBack_type {
                displayName = "Define hull right symbol type";
                property = "rhs_decalPlatoonHullRight_type";
                class values: values {
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                    class Army: Army {};
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                };
            };
            class rhs_decalPlatoonHullRight: rhs_decalPlatoonBack {
                displayName = "Set hull right symbol";
                tooltip = "Define symbol located on right side of vehicle hull. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoonHullRight";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1HullRightSymbol],  _this getVariable ['rhs_decalPlatoonHullRight_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
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
                    class rhs_mag_of462 {
                        name = "$STR_RHS_MAG_of462";
                        value = "rhs_mag_of462";
                        defaultValue = "rhs_mag_of462";
                    };
                    class rhs_mag_3of56 {
                        name = "$STR_RHS_MAG_3of56";
                        value = "rhs_mag_3of56";
                        defaultValue = "rhs_mag_3of56";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4','rhs_ammoslot_5']] spawn rhs_fnc_Eden_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [Smoke rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class rhs_mag_d462 {
                        name = "$STR_RHS_MAG_d462";
                        value = "rhs_mag_d462";
                        defaultValue = "rhs_mag_d462";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot [Illumination rounds]";
                property = "rhs_ammoslot_3_type";
                class values {
                    class rhs_mag_s463 {
                        name = "$STR_RHS_MAG_s463";
                        value = "rhs_mag_s463";
                        defaultValue = "rhs_mag_s463";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
            class rhs_ammoslot_4_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #4 type";
                tooltip = "Define type of shell for #4 slot [HEAT rounds]";
                property = "rhs_ammoslot_4_type";
                class values {
                    class rhs_mag_bk6m {
                        name = "$STR_RHS_MAG_bk6m";
                        value = "rhs_mag_bk6m";
                        defaultValue = "rhs_mag_bk6m";
                    };
                    class rhs_mag_bk13 {
                        name = "$STR_RHS_MAG_bk13";
                        value = "rhs_mag_bk13";
                        defaultValue = "rhs_mag_bk13";
                    };
                };
            };
            class rhs_ammoslot_4: rhs_ammoslot_1 {
                displayName = "Ammo slot #4 count";
                tooltip = "Define number of rounds stored inside of type #4. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_4";
            };
        };
        driverForceOptics = 1;
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
        driverOpticsColor[] = {1, 1, 1, 1};
        driverOpticsEffect[] = {"OpticsCHAbera1"};
        driverOutOpticsEffect[] = {};
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
        class AnimationSources: AnimationSources {
            class reload_source {
                weapon = "rhs_weap_2a31";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_hide_arty {
                source = "reload";
                weapon = "rhs_weap_2a31";
            };
            class HatchC {
                source = "door";
                animPeriod = 0.8;
            };
            class HatchD: HatchC {};
            class turretHide {
                source = "user";
                initPhase = 0;
                animPeriod = 0.0000000001;
            };
            class hide_shields_hull {
                source = "user";
                mass = 1;
                animPeriod = 0.000001;
                initPhase = 1;
                displayName = "Hide Hull Watershields";
                forceAnimatePhase = 0;
                forceAnimate[] = {"hide_shields_turret", 1};
            };
            class hide_shields_turret: hide_shields_hull {
                displayName = "Hide Turret Watershields";
                initPhase = 0;
                forceAnimatePhase = 0;
                forceAnimate[] = {"hide_shields_hull", 1};
            };
            class hide_backframe: hide_shields_hull {
                displayName = "Hide Watershield Frame";
                initPhase = 0;
            };
            class light_cateyes {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
            };
        };
        animationList[] = {
            "hide_shields_hull",
            0.5,
            "hide_backframe",
            0.4,
            "hide_shields_turret",
            0.2
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_hull.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_hull_dam.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_hull_des.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_turret.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_turret_dam.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_turret_des.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_dam.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension_des.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_hull.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_hull_dam.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_hull_des.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_turret.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_turret_dam.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_turret_des.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_dam.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension_des.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull_dam.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull_des.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret_dam.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret_des.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_dam.rvmat",
                "rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension_des.rvmat",
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
            class Left2: Left {
                direction = "konec l svetla";
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Left"}};
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_2s1_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                fired = "_this call RHS_fnc_2s1_ejection;";
                engine = "[_this # 0,_this # 1,2] call rhs_fnc_engineStartupDelay";
                killed = "[_this # 0,'rhs_Wreck_2s1_turret_F',50] call rhs_fnc_turretBlow";
            };
            class BIS_Randomisation {
                init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
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
    class rhs_2s1tank_at_base: rhs_2s1tank_base {
        displayName = "2S1 (Direct Fire)";
        artilleryScanner = 0;
        availableForSupportTypes[] = {};
        class AnimationSources: AnimationSources {
            class reload_source {
                source = "reload";
                weapon = "rhs_weap_2a31_at";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_hide_arty {
                source = "reload";
                weapon = "rhs_weap_2a31_at";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                elevationMode = 0;
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                    class LoaderOptics: LoaderOptics {};
                };
                maxElev = 70;
                weapons[] = {"rhs_weap_2a31_at", "rhs_weap_fcs_noLRF"};
                magazines[] = {
                    "rhs_mag_3of56_direct_30",
                    "rhs_mag_bk13_10",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
            };
        };
    };
    class rhs_2s1_tv: rhs_2s1tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2s1_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_2s1\rhs_2s1";
        scope = 2;
        rhs_decalParameters[] = {"['Number', cRHS2S1BackTurretNumberPlaces,'Default']", "['Label', [cRHS2S1TurretBackRightSymbol, cRHS2S1TurretBackLeftSymbol], 'Platoon', 17]"};
        textureList[] = {
            "standard",
            1,
            "light",
            1,
            "standard_dirty",
            0.2,
            "light_dirty",
            0.2
        };
    };
    class rhs_2s1_vmf: rhs_2s1_tv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2s1_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',[cRHS2S1BackSmallNumberPlaces, cRHS2S1FrontTurretNumberPlaces],'Default']", "['Label', [cRHS2S1BackSymbol, cRHS2S1TurretFrontLeftSymbol, cRHS2S1TurretFrontRightSymbol], 'Platoon', 16]"};
        faction = "rhs_faction_vmf";
    };
    class rhs_2s1_at_tv: rhs_2s1tank_at_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2s1_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_2s1\rhs_2s1";
        scope = 2;
        rhs_decalParameters[] = {"['Number', cRHS2S1BackTurretNumberPlaces,'Default']", "['Label', [cRHS2S1TurretBackRightSymbol, cRHS2S1TurretBackLeftSymbol], 'Platoon', 17]"};
        textureList[] = {
            "standard",
            1,
            "light",
            1,
            "standard_dirty",
            0.2,
            "light_dirty",
            0.2
        };
    };
    class rhs_2s1_at_vmf: rhs_2s1_at_tv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2s1_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',[cRHS2S1BackSmallNumberPlaces, cRHS2S1FrontTurretNumberPlaces],'Default']", "['Label', [cRHS2S1BackSymbol, cRHS2S1TurretFrontLeftSymbol, cRHS2S1TurretFrontRightSymbol], 'Platoon', 16]"};
        faction = "rhs_faction_vmf";
    };
    class ThingX;
    class rhs_Wreck_2s1_turret_F: ThingX {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Wreck_2s1_turret_F.paa";
        mapSize = 8.56;
        author = "$STR_RHS_AUTHOR_FULL";
        reversed = 1;
        scope = 2;
        scopeCurator = 2;
        displayName = "2S1 Wreck (Turret)";
        model = "\rhsafrf\addons\rhs_2s1\rhs_2s1_destTurret";
        icon = "iconObject_1x2";
        vehicleClass = "Wreck";
        destrType = "DestructNo";
    };
};
