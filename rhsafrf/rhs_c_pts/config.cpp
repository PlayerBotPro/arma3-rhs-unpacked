class CfgPatches {
    class rhs_c_pts {
        units[] = {"rhs_pts_vmf"};
        weapons[] = {};
        requiredVersion = 1.42;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_heavyweapons",
            "rhs_decals",
            "rhs_optics",
            "rhs_c_troops"
        };
        name = "PTS";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class pts_init {
                file = "\rhsafrf\addons\rhs_c_pts\scripts\rhs_pts_init.sqf";
            };
            class pts_cargoAttach {
                file = "\rhsafrf\addons\rhs_c_pts\scripts\cargo_attach.sqf";
                description = "Attach cargo to the PTS";
            };
            class pts_cargoDetach {
                file = "\rhsafrf\addons\rhs_c_pts\scripts\cargo_detach.sqf";
                description = "Detach cargo from the PTS";
            };
        };
    };
};
class DefaultEventhandlers;
class RCWSOptics;
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
        class CommanderOptics;
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
    };
    class APC_Tracked_02_base_F: Tank_F {
        class EventHandlers;
        class Components;
    };
    class rhs_pts_base: APC_Tracked_02_base_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHSPTSNumberPlaces,'Default']", "['Label',cRHSPTSPlnSymPlaces, 'Platoon',12]"};
        category = "Armored";
        destrType = "DestructDefault";
        author = "$STR_RHS_AUTHOR_FULL";
        enableGPS = 0;
        incomingMissileDetectionSystem = 0;
        weapons[] = {};
        magazines[] = {};
        class UserActions {
            class OpenRamp {
                displayName = "Open Cargo Ramp";
                position = "ramp";
                onlyforplayer = 1;
                radius = 6;
                showWindow = 0;
                condition = "(this doorPhase 'ramp' == 0) AND {Alive(this)} AND {(call RHS_fnc_findPlayer) in this} AND {((getPosASLW this) select 2) > -1}";
                statement = "this animateDoor ['ramp',1];this engineOn false;[this] call rhs_fnc_pts_cargoDetach";
                shortcut = "user12";
            };
            class CloseRamp: OpenRamp {
                displayName = "Close Cargo Ramp";
                condition = "(this doorPhase 'ramp' == 1) AND {Alive(this)} AND {(call RHS_fnc_findPlayer) in this}";
                statement = "this animateDoor ['ramp',0];[this] call rhs_fnc_pts_cargoAttach";
            };
        };
        rhs_maxCargoMassCoeff = 0.00000005;
        vehicleClass = "rhs_vehclass_apc";
        editorSubcategory = "rhs_EdSubcat_apc";
        displayName = "$STR_RHSAFRF_PTSM";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        accuracy = 0.3;
        side = 0;
        class RenderTargets {};
        model = "\rhsafrf\addons\rhs_pts\rhs_pts";
        picture = "\rhsafrf\addons\rhs_pts\ui\pts_ca.paa";
        Icon = "\rhsafrf\addons\rhs_c_pts\ptsm_map_ca.paa";
        driverOpticsModel = "";
        mapSize = 11;
        forceHideDriver = 0;
        hideProxyInCombat = 0;
        cargoIsCoDriver[] = {1};
        driverIsCommander = 1;
        viewCargoShadow = 1;
        typicalCargo[] = {
            "rhs_vmf_flora_crew_commander",
            "rhs_vmf_flora_crew",
            "rhs_vmf_flora_crew",
            ""
        };
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        transportsoldier = 1;
        unloadInCombat = 1;
        tf_range_api = 35000;
        cargoAction[] = {"RHS_BMP3_Cargo"};
        driveOnComponent[] = {"Track_L", "Track_R", "Slide"};
        driverDoor = "hatchD";
        driverAction = "RHS_BMP3_driverout";
        driverInAction = "RHS_BMP3_driver";
        driverLeftHandAnimName = "steering";
        driverRightHandAnimName = "steering";
        driverForceOptics = 0;
        simulation = "tankX";
        normalSpeedForwardCoef = 0.85;
        slowSpeedForwardCoef = 0.5;
        fuelCapacity = 672;
        RHS_fuelCapacity = 672;
        maxSpeed = 46;
        tankTurnForce = 200000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.82;
        accelAidForceCoef = 4;
        accelAidForceYOffset = -4.1;
        accelAidForceSpd = 2.23;
        canFloat = 1;
        waterLeakiness = 250;
        maxFordingDepth = 0.1;
        waterResistance = 1;
        waterDamageEngine = 0.9;
        engineShiftY = 0.1;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 1.2;
        waterResistanceCoef = 0.175;
        waterEffectSpeed = 5;
        engineEffectSpeed = 5;
        waterFastEffectSpeed = 28;
        memoryPointsLeftEngineEffect = "EngineEffectL";
        memoryPointsRightEngineEffect = "EngineEffectR";
        torqueCurve[] = {
            {0, 0},
            {0.478261, 0.866667},
            {0.521739, 0.984848},
            {0.565217, 1},
            {0.608696, 0.987879},
            {0.695652, 0.909091},
            {0.869565, 0.8},
            {1.13217, 0}
        };
        engineMOI = 10;
        enginePower = 261;
        peakTorque = 1650;
        minOmega = 85;
        maxOmega = 240.86;
        idleRPM = 800;
        redRPM = 2300;
        thrustDelay = 0.3;
        dampingRateFullThrottle = 0.3;
        dampingRateZeroThrottleClutchEngaged = 3;
        dampingRateZeroThrottleClutchDisengaged = 0.25;
        engineLosses = 25;
        transmissionLosses = 15;
        clutchStrength = 18;
        latency = 0.7;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.913043,
            0.608696,
            0.934783,
            0.652174,
            0.934783,
            0.652174,
            1,
            0.73913
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
                0.662
            };
            AmphibiousRatios[] = {"R1", -9.5, "N", 0, "D1", 9.5};
            TransmissionRatios[] = {"High", 18.5};
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
                width = 0.2;
                steering = 0;
                mass = 93;
                MOI = 10.3595;
                maxBrakeTorque = 25000;
                maxDroop = 0.18;
                maxCompression = 0.18;
                sprungMass = 1306;
                springStrength = 92969;
                springDamperRate = 7663;
                dampingRate = 955;
                dampingRateInAir = 955;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3.5;
                latStiffY = 35;
                longitudinalStiffnessPerUnitGravity = 14000;
                frictionVsSlipGraph[] = {{0, 0.55}, {0.18, 1}, {0.65, 0.7}};
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
            "\rhsafrf\addons\rhs_bmp\sounds\utd20_start.wss",
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
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    0.8912509,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    1,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    1.1220185,
                    1,
                    340
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
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
        driverCanSee = "2+4+8";
        gunnerCanSee = "2+4+8";
        commanderCanSee = "2+4+8";
        tracksSpeed = 1.35;
        wheelCircumference = 1.922;
        attenuationEffectType = "TankAttenuation";
        textSingular = "PTS";
        textPlural = "PTS";
        nameSound = "veh_vehicle_APC_s";
        extCameraPosition[] = {0, 2, -15};
        cost = 1500000;
        damageResistance = 0.00845;
        crewVulnerable = 1;
        armor = 50;
        armorStructural = 500;
        class TransportMagazines {};
        class TransportWeapons {};
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
        };
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = 0.4;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.44;
                explosionShielding = 0.5;
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
        class Turrets: Turrets {};
        hiddenSelections[] = {"n1", "n2", "n3"};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa", "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa", "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHSPTSNumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                tooltip = "Set side number. 3 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSPTSNumberPlaces}else{[_this, [['Number', cRHSPTSNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_openramp {
                displayName = "Open ramp";
                property = "rhs_opendoors";
                control = "CheckboxNumber";
                expression = "_this animateDoor ['ramp',_value];";
                defaultValue = "0";
            };
            class rhs_attachCargo: rhs_openramp {
                displayName = "Attach cargo";
                tooltip = "Attaching cargo (using attachTo command) just like when you use ramp action";
                property = "rhs_attachCargo";
                expression = "if(_value == 1)then{[_this] spawn rhs_fnc_pts_cargoAttach}else{[_this] call rhs_fnc_pts_cargoDetach};";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {"rhsafrf\addons\rhs_pts\data\rhs_pts.rvmat", "rhsafrf\addons\rhs_pts\data\rhs_dam_pts.rvmat", "rhsafrf\addons\rhs_pts\data\rhs_destr_pts.rvmat"};
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
        class AnimationSources {
            class ramp {
                source = "door";
                initPhase = 0;
                animPeriod = 5;
                sound = "ServoRampSound_2";
                soundPosition = "Ramp_01_axis";
            };
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "O_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
            class Carrier {
                cargoBayDimensions[] = {"VVT_cargo_1", "VVT_cargo_2"};
                disableHeightLimit = 1;
                maxLoadMass = 25000;
                cargoAlignment[] = {"center", "front"};
                cargoSpacing[] = {0, 0, 0};
                exits[] = {"VVT_exit"};
                unloadingInterval = 2;
                loadingDistance = 5;
                loadingAngle = 60;
                parachuteClassDefault = "O_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
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
        aggregateReflectors[] = {{"Left", "Left2"}};
        armorLights = 0.1;
        class ViewPilot: ViewPilot {
            initAngleX = -12;
            minAngleX = -35;
            maxAngleX = 25;
            initAngleY = 0;
            minAngleY = -135;
            maxAngleY = 135;
            initFov = 0.7;
            minFov = 0.3;
            maxFov = 1;
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_pts_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                engine = "if((_this select 0) doorPhase 'ramp'> 0)then{_this select 0 engineOn false}else{[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay};";
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
    class rhs_pts_vmf: rhs_pts_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_pts_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
    };
};
