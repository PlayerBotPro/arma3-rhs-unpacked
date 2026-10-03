class CfgPatches {
    class rhs_c_tanks {
        units[] = {
            "rhs_t80",
            "rhs_t80b",
            "rhs_t80bk",
            "rhs_t80bv",
            "rhs_t80bvk",
            "rhs_t80a",
            "rhs_t80u",
            "rhs_t80uk",
            "rhs_t80ue1",
            "rhs_t80um",
            "rhs_t80u45m"
        };
        weapons[] = {};
        requiredVersion = 1.64;
        requiredAddons[] = {
            "rhs_main",
            "rhs_decals",
            "rhs_c_heavyweapons",
            "rhs_c_troops"
        };
        name = "T-80 Series Tanks";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        rhs_t80_commander_out = "rhs_t80_commander_out";
        rhs_t80_commander_in = "rhs_t80_commander_in";
        rhs_t80_gunner_out = "rhs_t80_gunner_out";
        rhs_t80_gunner_in = "rhs_t80_gunner_in";
        rhs_t80a_commander_out = "rhs_t80a_commander_out";
        rhs_t80a_commander_in = "rhs_t80a_commander_in";
        rhs_t80a_gunner_out = "rhs_t80a_gunner_out";
        rhs_t80a_gunner_in = "rhs_t80a_gunner_in";
        rhs_t80old_commander_out = "rhs_t80old_commander_out";
        rhs_t80old_commander_in = "rhs_t80old_commander_in";
        rhs_t80u_commander_out = "rhs_t80u_commander_out";
        rhs_t80u_commander_in = "rhs_t80u_commander_in";
    };
    class Actions {
        class HealActionBase;
        class RHS_Snorkel_mount: HealActionBase {
            Stop = "rhs_snorkel_mount";
            StopRelaxed = "rhs_snorkel_mount";
            medicStop = "rhs_snorkel_mount";
            medicStartUp = "rhs_snorkel_mount";
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
        class rhs_t80old_commander_out: Crew {
            file = "\rhsafrf\addons\rhs_t80\anims\commanderoldout.rtm";
            interpolateTo[] = {"KIA_rhs_t80old_commander_out", 1};
        };
        class rhs_t80old_commander_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_t80\anims\commanderoldin.rtm";
            interpolateTo[] = {"KIA_rhs_t80old_commander_in", 1};
        };
        class rhs_t80_commander_out: Crew {
            file = "\rhsafrf\addons\rhs_t80\anims\commander_t80_out.rtm";
            interpolateTo[] = {"KIA_RHS_T80_Commander", 1};
        };
        class rhs_t80_commander_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_t80\anims\commander_t80_in.rtm";
            interpolateTo[] = {"KIA_RHS_T80_Commander_in", 1};
        };
        class rhs_t80_gunner_out: Crew {
            file = "\rhsafrf\addons\rhs_t80\anims\gunner_t80_out.rtm";
            interpolateTo[] = {"KIA_RHS_T80_gunner", 1};
        };
        class rhs_t80_gunner_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_t80\anims\gunner_t80_in.rtm";
            interpolateTo[] = {"KIA_RHS_T80_gunner_in", 1};
        };
        class rhs_t80a_commander_out: Crew {
            file = "\rhsafrf\addons\rhs_t80\anims\commander_t80a_out.rtm";
            interpolateTo[] = {"KIA_RHS_T80a_Commander", 1};
        };
        class rhs_t80a_commander_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_t80\anims\commander_t80a_in.rtm";
            interpolateTo[] = {"KIA_RHS_T80a_Commander_in", 1};
        };
        class rhs_t80a_gunner_out: Crew {
            file = "\rhsafrf\addons\rhs_t80\anims\gunner_t80a_out.rtm";
            interpolateTo[] = {"KIA_RHS_T80a_gunner", 1};
        };
        class rhs_t80a_gunner_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_t80\anims\gunner_t80a_in.rtm";
            interpolateTo[] = {"KIA_RHS_T80a_gunner_in", 1};
        };
        class rhs_t80u_commander_out: Crew {
            file = "\rhsafrf\addons\rhs_t80\anims\commander_t80u_out.rtm";
            interpolateTo[] = {"KIA_RHS_T80u_Commander", 1};
        };
        class rhs_t80u_commander_in: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_t80\anims\commander_t80u_in.rtm";
            interpolateTo[] = {"KIA_RHS_T80u_Commander_in", 1};
        };
        class KIA_RHS_T80u_Commander: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_t80\anims\kia_commander_t80u_out.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class KIA_RHS_T80a_Commander: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\kia_commander_t80a_out.rtm";
        };
        class KIA_RHS_T80_Commander: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\kia_commander_t80_out.rtm";
        };
        class KIA_rhs_t80old_commander_out: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\kia_commanderoldout.rtm";
        };
        class KIA_RHS_T80a_gunner: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\kia_gunner_t80a_out.rtm";
        };
        class KIA_RHS_T80_gunner: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\kia_gunner_t80_out.rtm";
        };
        class KIA_RHS_T80u_Commander_in: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\commander_t80u_in.rtm";
        };
        class KIA_RHS_T80a_Commander_in: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\commander_t80a_in.rtm";
        };
        class KIA_RHS_T80_Commander_in: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\commander_t80_in.rtm";
        };
        class KIA_rhs_t80old_commander_in: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\commanderoldin.rtm";
        };
        class KIA_RHS_T80a_gunner_in: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\gunner_t80a_in.rtm";
        };
        class KIA_RHS_T80_gunner_in: KIA_RHS_T80u_Commander {
            file = "\rhsafrf\addons\rhs_t80\anims\gunner_t80_in.rtm";
        };
        class AinvPknlMstpSlayWrflDnon_medic;
        class rhs_snorkel_mount: AinvPknlMstpSlayWrflDnon_medic {
            actions = "RHS_Snorkel_mount";
            file = "\a3\Anims_F_EPA\data\Anim\sdr\cts\Custom\A_in\Acts_carFixingWheel.rtm";
            speed = 0.05;
            soundOverride = "Acts_carFixingWheel";
            connectFrom[] = {"AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon", 0.02};
            rightHandIKEnd = 0;
            rightHandIKBeg = 0;
            leftHandIKEnd = 0;
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {};
            rightHandIKCurve[] = {};
            weaponsIK = 0;
        };
    };
};
class DefaultEventHandlers;
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class t80_init {
                file = "\rhsafrf\addons\rhs_c_tanks\scripts\rhs_tank_init.sqf";
                description = "Initialization script for T-80";
            };
            class t80_autoloader {
                file = "\rhsafrf\addons\rhs_c_tanks\scripts\rhs_autoloader.sqf";
                description = "Autoloader gun anim for T-80";
            };
            class t80_habar {
                file = "\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_habar.sqf";
                description = "Habar manager for T-80";
            };
            class t80_mp {
                file = "\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_mp.sqf";
                description = "Snorkel manager for T-80";
            };
            class t80_snorkel_eh {
                file = "\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_snorkel_eh.sqf";
                description = "Snorkel engine event handler";
            };
            class t80_searchlightTexture {
                file = "\rhsafrf\addons\rhs_c_tanks\scripts\rhs_searchlight.sqf";
                description = "Open/close searchlight";
            };
            class engineStartupDelay {
                file = "\rhsafrf\addons\rhs_c_tanks\scripts\rhs_engineStart.sqf";
                description = "Engine startup delay";
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
    class rhs_tank_base: Tank_F {
        dlc = "RHS_AFRF";
        rhs_hasSnorkel = 1;
        rhs_habarType = 2;
        rhs_decalParameters[] = {"['Number',cRHST80NumberPlaces,'Default']", "['Label',cRHST80PlnSymPlaces, 'Platoon',8]"};
        allowTabLock = 0;
        destrType = "DestructDefault";
        scope = 0;
        htMin = 60;
        htMax = 1800;
        afMax = 200;
        mfMax = 100;
        side = 0;
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        simulation = "tankX";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 19.5;
        RHS_fuelCapacity = 1540;
        brakeIdleSpeed = 1.78;
        maxSpeed = 65;
        engineMOI = 20;
        enginePower = 809;
        peakTorque = 4393;
        minOmega = 114.72;
        maxOmega = 350.86;
        idleRPM = 1200;
        redRPM = 3255;
        torqueCurve[] = {
            {0.30722, 0},
            {0.447619, 0.948555},
            {0.526574, 0.897109},
            {0.60553, 0.845664},
            {0.684485, 0.794218},
            {0.763441, 0.742773},
            {0.842396, 0.691327},
            {1.90292, 0}
        };
        thrustDelay = 0.3;
        dampingRateFullThrottle = 0.3;
        dampingRateZeroThrottleClutchEngaged = 3;
        dampingRateZeroThrottleClutchDisengaged = 0.25;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        engineBrakeCoef = 0;
        tracksSpeed = 1.4;
        tankTurnForce = 850000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 3.3;
        accelAidForceYOffset = -4;
        accelAidForceSpd = 2.53;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        engineLosses = 25;
        transmissionLosses = 15;
        clutchStrength = 30;
        latency = 1.3;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.333333,
            0.333333,
            0,
            0.96,
            0.333333,
            0.983333,
            0.7,
            0.983333,
            0.733333,
            0.983333,
            0.733333
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -9.36,
                "N",
                0,
                "D1",
                4.38,
                "D2",
                2.16,
                "D3",
                1.46,
                "D4",
                1
            };
            TransmissionRatios[] = {"High", 12.85};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.9;
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "RHS_T80B_SUSL_1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                side = "left";
                steering = 0;
                width = 0.36;
                mass = 188;
                MOI = 14.0783;
                maxBrakeTorque = 10000;
                sprungMass = 3416.67;
                springStrength = 354000;
                springDamperRate = 11000;
                maxDroop = 0.14;
                maxCompression = 0.14;
                dampingRate = 1382;
                dampingRateInAir = 1382;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 72000;
                frictionVsSlipGraph[] = {{0, 0.4}, {0.18, 1}, {0.7, 0.75}};
            };
            class L3: L2 {
                boneName = "RHS_T80B_SUSL_3";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "RHS_T80B_SUSL_5";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "RHS_T80B_SUSL_7";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "RHS_T80B_SUSL_9";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "RHS_T80B_SUSL_11";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
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
                boneName = "RHS_T80B_SUSR_1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3: R2 {
                boneName = "RHS_T80B_SUSR_3";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2 {
                boneName = "RHS_T80B_SUSR_5";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2 {
                boneName = "RHS_T80B_SUSR_7";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2 {
                boneName = "RHS_T80B_SUSR_9";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7: R2 {
                boneName = "RHS_T80B_SUSR_11";
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
        attenuationEffectType = "TankAttenuation";
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_t80\Sound\t80_engineStart.wav",
            0.56234133,
            1,
            200
        };
        soundEngineOnInt[] = {
            "rhsafrf\addons\rhs_t80\Sound\t80_engineStart.wav",
            0.56234133,
            1,
            200
        };
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\t80turbine",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.95	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
                volume = "engineOn*camPos*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
            };
            class Engine {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\t80turbine",
                    0.8912509,
                    1,
                    240
                };
                frequency = "0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\t80turbine",
                    1.1220185,
                    1,
                    280
                };
                frequency = "0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\t80turbine",
                    1.2589254,
                    1,
                    320
                };
                frequency = "0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\t80turbine",
                    1.4125376,
                    1,
                    360
                };
                frequency = "0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\t80turbine",
                    1.5848932,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\t80turbine",
                    1.7782794,
                    1,
                    440
                };
                frequency = "0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
                volume = "engineOn*camPos*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
            };
            class Idle_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
            };
            class Engine_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
            };
            class Engine1_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
            };
            class Engine2_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
            };
            class Engine3_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
            };
            class Engine4_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
            };
            class Engine5_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
            };
            class NoiseInt {
                sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.5011872, 1};
                frequency = "1";
                volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class NoiseExt {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
                    0.8912509,
                    1,
                    50
                };
                frequency = "1";
                volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class ThreadsOutH0 {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\T80-Treads",
                    0.39810717,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
            };
            class ThreadsOutH1 {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\T80-Treads",
                    0.4466836,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
            };
            class ThreadsOutH2 {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\T80-Treads",
                    0.5011872,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
            };
            class ThreadsOutH3 {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\T80-Treads",
                    0.56234133,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
            };
            class ThreadsOutH4 {
                sound[] = {
                    "rhsafrf\addons\rhs_t80\Sound\T80-Treads",
                    0.56234133,
                    1,
                    220
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
            };
            class ThreadsOutS0 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01",
                    0.31622776,
                    1,
                    120
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
            };
            class ThreadsOutS1 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02",
                    0.35481337,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
            };
            class ThreadsOutS2 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03",
                    0.39810717,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
            };
            class ThreadsOutS3 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04",
                    0.4466836,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
            };
            class ThreadsOutS4 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05",
                    0.5011872,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
            };
            class ThreadsInH0 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01", 0.25118864, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
            };
            class ThreadsInH1 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02", 0.2818383, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
            };
            class ThreadsInH2 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03", 0.31622776, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
            };
            class ThreadsInH3 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04", 0.35481337, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
            };
            class ThreadsInH4 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05", 0.39810717, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
            };
            class ThreadsInS0 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01", 0.31622776, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
            };
            class ThreadsInS1 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02", 0.31622776, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
            };
            class ThreadsInS2 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03", 0.35481337, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
            };
            class ThreadsInS3 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04", 0.35481337, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
            };
            class ThreadsInS4 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05", 0.39810717, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
            };
        };
        model = "\rhsafrf\addons\rhs_t80\T80B1.p3d";
        picture = "\rhsafrf\addons\rhs_t80\data\icon\rhs_t80_pic_ca.paa";
        Icon = "\rhsafrf\addons\rhs_t72\data\icomap_t72_CA.paa";
        mapSize = 9.5;
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80B";
        vehicleClass = "rhs_vehclass_tank";
        editorSubcategory = "rhs_EdSubcat_tank";
        accuracy = 0.2;
        cost = 1500000;
        unitInfoType = "RHS_RscInfoT80";
        tf_range_api = 45000;
        enableGPS = 0;
        incomingMissileDetectionSystem = 0;
        driverCanSee = "2+4+8";
        gunnerCanSee = "2+4+8";
        commanderCanSee = "2+4+8";
        viewCargoShadow = 1;
        viewCargoShadowDiff = 1;
        viewCargoShadowAmb = 1;
        viewDriverShadow = 1;
        viewDriverInExternal = 1;
        forceHideDriver = 0;
        driverForceOptics = 1;
        driverOutForceOptics = 1;
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        driverAction = "driver_apcwheeled2_out";
        driverInAction = "rhs_t72_driver";
        driverDoor = "hatchD";
        memoryPointDriverOutOptics = "Driver_out_view";
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
        LODDriverTurnedIn = 0;
        LODDriverTurnedOut = 0;
        LODDriverOpticsIn = 0;
        extCameraPosition[] = {0, 2.25, -10};
        class DriverOpticsIn {
            class OpticView: ViewPilot {
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
                hitpoint = "Hit_Optic_Driver2";
                initFov = 0.7;
                minFov = 0.7;
                maxFov = 0.7;
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "",
            "Search_random",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t80\data\hull.pac",
            "rhsafrf\addons\rhs_t80\data\turet.paa",
            "",
            "rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_t80\data\hull.pac", "rhsafrf\addons\rhs_t80\data\turet.paa"};
                factions[] = {};
            };
            class r1: standard {
                displayName = "#1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(0.92,0.87,0.92,1)", "#(argb,8,8,3)color(0.92,0.87,0.92,1)"};
            };
            class r2: standard {
                displayName = "#2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(0.07,0.98,0,1)", "#(argb,8,8,3)color(0.07,0.98,0,1)"};
            };
            class r3: standard {
                displayName = "#3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(0,0.11,0.67,1)", "#(argb,8,8,3)color(0,0.11,0.67,1)"};
            };
            class r4: standard {
                displayName = "#4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(0.99,0.27,0.25,1)", "#(argb,8,8,3)color(0.99,0.27,0.25,1)"};
            };
            class r5: standard {
                displayName = "#5";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"#(argb,8,8,3)color(00.41,0.4,0,1)", "#(argb,8,8,3)color(00.41,0.4,0,1)"};
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHST80NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHST80NumberPlaces}else{[_this, [['Number', cRHST80NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
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
                tooltip = "Set platoon symbol located on turret front. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST80PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalArmy_type: rhs_decalPlatoon_type {
                displayName = "Define army symbol type";
                property = "rhs_decalArmy_type";
                class values: values {
                    class Army: Army {};
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                };
            };
            class rhs_decalArmy: rhs_decalPlatoon {
                displayName = "Set army symbol";
                tooltip = "Define symbol located on gunner hatch. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalArmy";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST80ArmSymPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalHonor_type: rhs_decalPlatoon_type {
                displayName = "Define honor symbol type";
                property = "rhs_decalHonor_type";
                class values: values {
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                    class Army: Army {};
                };
            };
            class rhs_decalHonor: rhs_decalPlatoon {
                displayName = "Set honor symbol";
                tooltip = "Define symbol located on IR Lamp. Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalHonor";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST80HnrSymPlaces,  _this getVariable ['rhs_decalHonor_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_ammoslot_1_type {
                displayName = "Ammo slot #1 type";
                tooltip = "Define type of shell for #1 slot [AP rounds]";
                property = "rhs_ammoslot_1_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class rhs_mag_3bm42_10 {
                        name = "$STR_rhs_mag_3bm42";
                        value = "rhs_mag_3bm42";
                        defaultValue = "rhs_mag_3bm42";
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
                    class rhs_mag_3bm42m_10 {
                        name = "$STR_rhs_mag_3bm42m";
                        value = "rhs_mag_3bm42m";
                        defaultValue = "rhs_mag_3bm42m";
                    };
                    class rhs_mag_3bm46_10 {
                        name = "$STR_rhs_mag_3bm46";
                        value = "rhs_mag_3bm46";
                        defaultValue = "rhs_mag_3bm46";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 28. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',28] spawn rhs_fnc_TTanks_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [HEAT rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class rhs_mag_3bk21_8 {
                        name = "$STR_rhs_mag_3bk21";
                        value = "rhs_mag_3bk21";
                        defaultValue = "rhs_mag_3bk21";
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
                    class rhs_mag_3bk29_8 {
                        name = "$STR_rhs_mag_3bk29";
                        value = "rhs_mag_3bk29";
                        defaultValue = "rhs_mag_3bk29";
                    };
                    class rhs_mag_3bk31_8 {
                        name = "$STR_rhs_mag_3bk31";
                        value = "rhs_mag_3bk31";
                        defaultValue = "rhs_mag_3bk31";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 28. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot [HE rounds]";
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
                tooltip = "Define number of rounds stored inside of type #3. Max 28. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
            class rhs_ammoslot_4_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #4 type";
                tooltip = "Define type of shell for #4 slot [ATGM rounds]";
                property = "rhs_ammoslot4_type";
                class values {
                    class rhs_mag_9m112m_6 {
                        name = "$STR_rhs_mag_9m112m";
                        value = "rhs_mag_9m112m";
                        defaultValue = "rhs_mag_9m112m";
                    };
                    class rhs_mag_9m112_6 {
                        name = "$STR_rhs_mag_9m112";
                        value = "rhs_mag_9m112";
                        defaultValue = "rhs_mag_9m112";
                    };
                    class rhs_mag_9m112m2_6 {
                        name = "$STR_rhs_mag_9m112m2";
                        value = "rhs_mag_9m112m2";
                        defaultValue = "rhs_mag_9m112m2";
                    };
                    class rhs_mag_9m124_6 {
                        name = "$STR_rhs_mag_9m124";
                        value = "rhs_mag_9m124";
                        defaultValue = "rhs_mag_9m124";
                    };
                    class rhs_mag_9m128_6 {
                        name = "$STR_rhs_mag_9m128";
                        value = "rhs_mag_9m128";
                        defaultValue = "rhs_mag_9m128";
                    };
                };
            };
            class rhs_ammoslot_4: rhs_ammoslot_1 {
                displayName = "Ammo slot #4 count";
                tooltip = "Define number of rounds stored inside of type #4. Max 28. Leave -1 for default loadout";
                property = "rhs_ammoslot_4";
            };
            class sideskirt_unhide {
                displayName = "Hide side skirt";
                property = "sideskirt_unhide";
                control = "CheckboxNumber";
                expression = "[_this,_value,'%s'] call rhs_fnc_setHabarEden";
                defaultValue = "-1";
            };
            class fbskirt_unhide: sideskirt_unhide {
                displayName = "Hide front bottom rubber skirt";
                property = "fbskirt_unhide";
            };
            class ftskirt_unhide: sideskirt_unhide {
                displayName = "Hide front top rubber skirt";
                property = "ftskirt_unhide";
            };
            class log_unhide: sideskirt_unhide {
                displayName = "Hide back log";
                property = "log_unhide";
            };
            class rhs_disableHabar: sideskirt_unhide {
                displayName = "Disable randomized habar";
                property = "rhs_disableHabar";
                expression = "[_this,_value,'%s',_value] call rhs_fnc_setHabarEden";
                defaultValue = "0";
            };
            class rhs_snorkel: rhs_disableHabar {
                displayName = "Mount snorkel";
                property = "rhs_snorkel";
                expression = "_this  animate ['snorkel_unhide',_value];_this  animate ['snorkel_unhide2',_value];_this animate ['snorkel_hide',1-_value];";
            };
            class rhs_searchlight: rhs_disableHabar {
                displayName = "Close gunner searchlight";
                property = "rhs_searchlight";
                control = "Checkbox";
                expression = "[_this,_value] call rhs_fnc_t80_searchlightTexture ";
            };
        };
        rhs_randomizedHabar[] = {
            "log_unhide",
            "sideskirt_unhide",
            "fbskirt_unhide",
            "ftskirt_unhide"
        };
        wheelCircumference = 2.312;
        damageResistance = 0.02;
        type = 1;
        threat[] = {0.9, 0.8, 0.2};
        driveOnComponent[] = {"Slide"};
        armor = 500;
        armorStructural = 220;
        explosionShielding = 100;
        crewExplosionProtection = 0.9999995;
        minTotalDamageThreshold = 0.5;
        fireResistance = -1;
        crewVulnerable = 0;
        class ViewOptics: ViewOptics {
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
            visionMode[] = {"Normal", "NVG"};
        };
        class HitPoints: HitPoints {
            class Armor_Composite_65 {
                armor = 999;
                material = -1;
                name = "Armor_CE_65_Hit";
                armorComponent = "Armor_CE_65";
                simulation = "RHS_Composite_65";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_70 {
                armor = 999;
                material = -1;
                name = "Armor_CE_70_Hit";
                armorComponent = "Armor_CE_70";
                simulation = "RHS_Composite_70";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
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
            class Armor_Composite_95 {
                armor = 999;
                material = -1;
                name = "Armor_CE_95_Hit";
                armorComponent = "Armor_CE_95";
                simulation = "RHS_Composite_95";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class HitHull: HitHull {
                armor = -100;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.1;
                explosionShielding = 0.01;
                radius = 0.13;
            };
            class HitEngine: HitEngine {
                armor = -150;
                material = -1;
                name = "motor";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0.01;
                radius = 0.23;
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
        insideSoundCoef = 0.9;
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
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "RHS_ExhaustEffectTankGasBack";
            };
            class Exhaust2 {
                position = "vyfuk start 2";
                direction = "vyfuk konec 2";
                effect = "RHS_ExhaustEffectTankGasBack";
            };
        };
        class AnimationSources {
            class kshield_unhide {
                source = "user";
                animPeriod = 0.0000000001;
                mass = -20;
                displayName = "hide commander shield";
                author = "$STR_RHS_AUTHOR_FULL";
            };
            class kdeck_unhide: kshield_unhide {
                displayName = "hide commander deck";
                author = "$STR_RHS_AUTHOR_FULL";
            };
            class sideskirt_unhide: kshield_unhide {
                displayName = "hide side skirt";
                mass = -220;
            };
            class fbskirt_unhide: kshield_unhide {
                displayName = "hide front bottom rubber skirt";
                mass = -100;
            };
            class ftskirt_unhide: kshield_unhide {
                displayName = "hide front top rubber skirt";
                mass = -50;
            };
            class log_unhide: kshield_unhide {
                displayName = "hide back log";
                mass = -100;
            };
            class snorkel_unhide: kshield_unhide {
                displayName = "mount snorkel";
                mass = 1;
                onPhaseChanged = "if(_this select 1 == 0)then{_this select 0 animate ['snorkel_unhide2',0];_this select 0 animate ['snorkel_unhide2',0];_this select 0 animate ['snorkel_hide',1];}else{_this select 0 animate ['snorkel_unhide2',1];_this select 0 animate ['snorkel_unhide2',1];_this select 0 animate ['snorkel_hide',0];}";
            };
            class snorkel_unhide2 {
                source = "user";
                initPhase = 0;
                animPeriod = 0.0000000001;
            };
            class snorkel_hide: snorkel_unhide2 {
                initPhase = 1;
            };
            class TCOverrideTurret {
                source = "user";
                animPeriod = 4;
                initPhase = 0;
            };
            class recoil_source {
                source = "door";
                animPeriod = 6;
                initPhase = 0;
            };
            class reload_source {
                weapon = "rhs_weap_2a46_2";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
            class muzzle_rot_hmg: muzzle_rot_cannon {
                weapon = "rhs_weap_nsvt_t80";
            };
            class muzzle_rot_coax: muzzle_rot_cannon {
                weapon = "rhs_weap_pkt";
            };
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_nsvt_t80";
            };
            class ReloadMagazine: ReloadAnim {
                source = "reloadmagazine";
            };
            class Revolving: ReloadAnim {
                source = "revolving";
            };
            class autoloader {
                source = "user";
                animPeriod = 3.25;
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
                animperiod = 0.001;
            };
            class offset {
                source = "user";
                animperiod = 0.0002;
            };
            class HatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: HatchC {};
            class HatchD: HatchC {};
            class turretHide: autoloader {
                animPeriod = 0.0000000001;
            };
        };
        class Library {
            libTextDesc = "$STR_RHS_T80_T80B_LIB";
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerAction = "rhs_t80_gunner_out";
                gunnerInAction = "rhs_t80_gunner_in";
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                gunnerDoor = "hatchG";
                ejectDeadGunner = 0;
                startEngine = 0;
                soundServo[] = {"rhsafrf\addons\rhs_t80\Sound\servo.ogg", 6, 1, 20};
                armorStructural = 60;
                class HitPoints {
                    class HitTurret {
                        armor = -100;
                        material = -1;
                        name = "vez";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = 0.01;
                        explosionShielding = 0.009;
                        radius = 0.15;
                    };
                    class HitGun {
                        armor = -150;
                        material = -1;
                        name = "zbran";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.001;
                        radius = 0.12;
                    };
                };
                weapons[] = {
                    "rhs_weap_2a46_2",
                    "rhs_weap_pkt",
                    "rhs_weap_902a",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm22_10",
                    "rhs_mag_3bk18m_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_9m112m_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                memoryPointGun = "Mgun";
                selectionFireAnim = "zasleh1";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g42.p3d";
                gunnerOutOpticsModel = "";
                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                nightVision = 1;
                class OpticsIn {
                    class day1: ViewOptics {
                        opticsDisplayName = "DAY";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.179487;
                        minFov = 0.179487;
                        maxFov = 0.179487;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g42.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                    class day2: day1 {
                        opticsDisplayName = "DAYZOOM";
                        initFov = 0.0777778;
                        minFov = 0.0777778;
                        maxFov = 0.0777778;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g42.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                    class Periscope: day1 {
                        opticsDisplayName = "PERISCOPE";
                        initFov = 0.466667;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class night3: day1 {
                        opticsDisplayName = "NIGHT";
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                };
                minElev = -4;
                maxElev = 18;
                minTurn = -360;
                maxTurn = 360;
                initElev = 5;
                initTurn = 13;
                lockWhenDriverOut = 1;
                maxHorizontalRotSpeed = 0.4;
                maxVerticalRotSpeed = 0.07;
                radarType = 0;
                turretInfoType = "rhs_gui_optic_t80_rangefinder";
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                canUseScanners = 0;
                allowTabLock = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                body = "RHS_T80B_MainTurret";
                gun = "RHS_T80B_MainGun";
                stabilizedInAxes = 3;
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
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {};
                        magazines[] = {};
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        gunBeg = "Mgun_end";
                        gunEnd = "Mgun_start";
                        body = "RHS_T80B_com_coppula";
                        gun = "RHS_T80B_com_Gun";
                        gunnerAction = "rhs_t80_commander_out";
                        gunnerInAction = "rhs_T80_Commander_in";
                        gunnerType = "rhs_msv_crew_commander";
                        viewGunnerInExternal = 1;
                        gunnerGetInAction = "GetInMedium";
                        gunnerGetOutAction = "GetOutMedium";
                        memoryPointsGetInGunner = "pos commander";
                        memoryPointsGetInGunnerDir = "pos commander dir";
                        gunnerDoor = "hatchC";
                        ejectDeadGunner = 0;
                        minElev = -15;
                        maxElev = 80;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        lockWhenDriverOut = 0;
                        LodTurnedOut = 1200;
                        LodOpticsOut = 1200;
                        gunnerOutForceOptics = 0;
                        animationSourceHatch = "HatchCommander";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        memoryPointGunnerOptics = "commanderview";
                        memoryPointGunnerOutOptics = "commander_out_view";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                        gunnerOutOpticsModel = "";
                        nightVision = 1;
                        stabilizedInAxes = 3;
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                        gunnerHasFlares = 1;
                        canUseScanners = 0;
                        allowTabLock = 0;
                        turretInfoType = "RHS_RscWeaponTKN3_FCS";
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
                        class ViewOptics: ViewOptics {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.101;
                            minFov = 0.102;
                            maxFov = 0.102;
                            visionMode[] = {"Normal"};
                        };
                        class OpticsIn {
                            class Wide: ViewOptics {
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                                initFov = 0.14;
                            };
                            class Night: Wide {
                                initFov = 0.166667;
                                visionMode[] = {"NVG"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
                            };
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
                            };
                        };
                        startEngine = 0;
                        selectionFireAnim = "";
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
                    };
                    class CommanderMG: CommanderOptics {
                        gunnername = "Commander HMG";
                        proxyindex = 2;
                        dontCreateAi = 1;
                        cantCreateAI = 1;
                        body = "mg_turret";
                        gun = "mg_gun";
                        animationSourceBody = "mg_turret";
                        animationSourceGun = "mg_gun";
                        gunnerDoor = "";
                        stabilizedInAxes = 0;
                        canHideGunner = 0;
                        viewGunnerShadow = 0;
                        LodTurnedOut = 1200;
                        canUseScanners = 0;
                        allowTabLock = 0;
                        memoryPointGunnerOutOptics = "commander_out_view";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        soundAttenuationTurret = "HeliAttenuationGunner";
                        disableSoundAttenuation = 1;
                        animationSourceStickX = "mg_Turret_Inertia";
                        animationSourceStickY = "mg_Gun_Inertia";
                        gunnerLeftHandAnimName = "";
                        gunnerRightHandAnimName = "mg_handle2";
                        maxVerticalRotSpeed = 0.35;
                        minElev = -5;
                        maxElev = 45;
                        initElev = 0;
                        initTurn = 0;
                        LODOpticsOut = 1200;
                        LODOpticsIn = 1200;
                        turretInfoType = "RHS_RscWeaponZeroing";
                        discreteDistance[] = {
                            100,
                            200,
                            300,
                            400,
                            500,
                            600,
                            800,
                            900,
                            1000,
                            1100,
                            1200,
                            1400,
                            1500,
                            1800,
                            1900,
                            2000
                        };
                        discreteDistanceInitIndex = 2;
                        weapons[] = {"rhs_weap_nsvt_t80"};
                        magazines[] = {"rhs_mag_127x108mm_50", "rhs_mag_127x108mm_50", "rhs_mag_127x108mm_50"};
                        selectionFireAnim = "zasleh3";
                        class OpticsIn: OpticsIn {
                            class Wide: Wide {
                                visionMode[] = {"Normal"};
                                initFov = 0.583333;
                                minFov = 0.583333;
                                maxFov = 0.583333;
                            };
                        };
                        gunnercompartments = "Compartment5";
                        class HitPoints {
                            class HitTurretNSVT {
                                isTurret = 1;
                                armor = 0.3;
                                material = -1;
                                name = "nsvt_turret";
                                visual = "-";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                            };
                            class HitGunNSVT {
                                isGun = 1;
                                armor = 0.3;
                                material = -1;
                                name = "nsvt_gun";
                                visual = "-";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                            };
                        };
                    };
                };
            };
        };
        selectionLeftOffset = "pasanimL";
        selectionRightOffset = "pasanimP";
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call RHS_fnc_t80_init;";
                postInit = "_this call rhs_fnc_reapplyTextures";
                fired = "_this call RHS_fnc_t80_autoloader;";
                killed = "[_this select 0,'rhs_Wreck_T80_turret_F'] call rhs_fnc_turretBlow";
                engine = "[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
                getOut = "_this call rhs_fnc_t72_hatch;_this call rhs_fnc_hatchAbandon";
            };
            class RHS_HitSpall {
                hitpart = "_this call rhs_fnc_hitSpall";
            };
        };
        class UserActions {
            class trunk_open {
                displayName = "Use NSVT";
                position = "trunk_action";
                radius = 2;
                onlyForplayer = 0;
                condition = "this animationPhase 'RHS_T80B_Hatch_commander'>0.5 and ((call rhs_fnc_findPlayer) == commander this)";
                statement = "(call rhs_fnc_findPlayer) action ['moveToTurret', this, [0,1]];[this,[[0,0],true]] remoteExecCall ['lockTurret']";
            };
            class trunk_close: trunk_open {
                displayName = "Leave NSVT";
                condition = "vehicle (call rhs_fnc_findPlayer) turretUnit [0,1] == (call rhs_fnc_findPlayer)";
                statement = "(call rhs_fnc_findPlayer) action ['moveToTurret', this, [0,0]];[this,[[0,0],false]] remoteExecCall ['lockTurret']";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t80\data\materials\hull_g.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\hull_g_dam.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\hull_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_bk.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_G_dam.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_G.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_G_dam.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\track.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\track.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\track_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight_destroy.rvmat"
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
    class rhs_t80b: rhs_tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80b.paa";
        scope = 2;
        faction = "rhs_faction_tv";
        author = "$STR_RHS_AUTHOR_FULL";
        crew = "rhs_msv_crew";
        typicalCargo[] = {"rhs_msv_crew", "rhs_msv_crew", "rhs_msv_crew"};
        smokeLauncherGrenadeCount = 6;
        smokeLauncherVelocity = 14;
        smokeLauncherOnTurret = 1;
        smokeLauncherAngle = 60;
        class AnimationSources: AnimationSources {
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class kshield_unhide: kshield_unhide {
                initPhase = 1;
            };
            class kdeck_unhide: kdeck_unhide {
                initPhase = 1;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                initTurn = -13;
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
            class rhs_decalPlatoon: rhs_decalPlatoon {};
            class rhs_decalArmy_type: rhs_decalArmy_type {};
            class rhs_decalArmy: rhs_decalArmy {};
            class rhs_decalHonor_type: rhs_decalHonor_type {};
            class rhs_decalHonor: rhs_decalHonor {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {};
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {};
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {};
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class rhs_ammoslot_4_type: rhs_ammoslot_4_type {};
            class rhs_ammoslot_4: rhs_ammoslot_4 {};
            class sideskirt_unhide: sideskirt_unhide {};
            class fbskirt_unhide: fbskirt_unhide {};
            class ftskirt_unhide: ftskirt_unhide {};
            class log_unhide: log_unhide {};
            class kshield_unhide: sideskirt_unhide {
                displayName = "Unhide commander shield";
                expression = "[_this,1-_value,'%s'] call rhs_fnc_setHabarEden";
                property = "kshield_unhide";
            };
            class rhs_disableHabar: rhs_disableHabar {};
            class rhs_snorkel: rhs_snorkel {};
            class rhs_searchlight: rhs_searchlight {};
        };
    };
    class rhs_t80bk: rhs_t80b {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80bk.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80BK";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t80\data\hull.pac",
            "rhsafrf\addons\rhs_t80\data\turetbk.paa",
            "",
            "rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        hiddenSelectionsMaterials[] = {
            "rhsafrf\addons\rhs_t80\data\materials\hull_g.rvmat",
            "rhsafrf\addons\rhs_t80\data\materials\turret_bk.rvmat",
            "",
            "rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat"
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "rhs_mag_3bm22_14",
                    "rhs_mag_3bk18m_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                    class CommanderMG: CommanderMG {
                        maxElev = 25;
                    };
                };
            };
        };
        class AnimationSources: AnimationSources {
            class kshield_unhide: kshield_unhide {
                initPhase = 0;
            };
            class kdeck_unhide: kdeck_unhide {
                initPhase = 0;
            };
        };
        class Library {
            libTextDesc = "$STR_RHS_T80_T80BK_LIB";
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
            class rhs_decalPlatoon: rhs_decalPlatoon {};
            class rhs_decalArmy_type: rhs_decalArmy_type {};
            class rhs_decalArmy: rhs_decalArmy {};
            class rhs_decalHonor_type: rhs_decalHonor_type {};
            class rhs_decalHonor: rhs_decalHonor {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {};
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {};
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {};
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class sideskirt_unhide: sideskirt_unhide {};
            class fbskirt_unhide: fbskirt_unhide {};
            class ftskirt_unhide: ftskirt_unhide {};
            class log_unhide: log_unhide {};
            class kshield_unhide: sideskirt_unhide {
                displayName = "Hide commander shield";
                expression = "[_this,_value,'%s'] call rhs_fnc_setHabarEden";
                property = "kshield_unhide";
            };
            class rhs_disableHabar: rhs_disableHabar {};
            class rhs_snorkel: rhs_snorkel {};
            class rhs_searchlight: rhs_searchlight {};
        };
    };
    class rhs_t80bv: rhs_t80b {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80bv.paa";
        model = "\rhsafrf\addons\rhs_t80\T80BV.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80BV";
        armor = 550;
        smokeLauncherGrenadeCount = 6;
        smokeLauncherVelocity = 14;
        smokeLauncherOnTurret = 1;
        smokeLauncherAngle = 60;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "rhs_mag_3bm22_10",
                    "rhs_mag_3bk18m_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_9m112m_4",
                    "rhs_mag_3d17",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
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
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {};
                        magazines[] = {};
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        gunBeg = "Mgun_end";
                        gunEnd = "Mgun_start";
                        body = "RHS_T80B_com_coppula";
                        gun = "RHS_T80B_com_Gun";
                        gunnerAction = "rhs_t80_commander_out";
                        gunnerInAction = "rhs_T80_Commander_in";
                        gunnerType = "rhs_msv_crew_commander";
                        viewGunnerInExternal = 1;
                        gunnerGetInAction = "GetInMedium";
                        gunnerGetOutAction = "GetOutMedium";
                        gunnerDoor = "hatchC";
                        ejectDeadGunner = 0;
                        minElev = -15;
                        maxElev = 80;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        lockWhenDriverOut = 0;
                        LodTurnedOut = 1200;
                        gunnerOutForceOptics = 0;
                        animationSourceHatch = "HatchCommander";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        memoryPointGunnerOptics = "commanderview";
                        memoryPointGunnerOutOptics = "commander_out_view";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                        gunnerOutOpticsModel = "";
                        nightVision = 1;
                        stabilizedInAxes = 3;
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                        gunnerHasFlares = 1;
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
                        class ViewOptics: ViewOptics {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.101;
                            minFov = 0.102;
                            maxFov = 0.102;
                            visionMode[] = {"Normal"};
                        };
                        class OpticsIn {
                            class Wide: ViewOptics {
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                                initFov = 0.14;
                            };
                            class Night: Wide {
                                initFov = 0.166667;
                                visionMode[] = {"NVG"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
                            };
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
                            };
                        };
                        startEngine = 0;
                        selectionFireAnim = "";
                    };
                    class CommanderMG: CommanderOptics {
                        gunnername = "Commander HMG";
                        proxyindex = 2;
                        dontCreateAi = 1;
                        cantCreateAI = 1;
                        body = "mg_turret";
                        gun = "mg_gun";
                        animationSourceBody = "mg_turret";
                        animationSourceGun = "mg_gun";
                        gunnerDoor = "";
                        turretInfoType = "RHS_RscWeaponZeroing";
                        discreteDistance[] = {
                            100,
                            200,
                            300,
                            400,
                            500,
                            600,
                            800,
                            900,
                            1000,
                            1100,
                            1200,
                            1400,
                            1500,
                            1800,
                            1900,
                            2000
                        };
                        discreteDistanceInitIndex = 2;
                        stabilizedInAxes = 0;
                        canHideGunner = 0;
                        viewGunnerShadow = 0;
                        LodTurnedOut = 1200;
                        memoryPointGunnerOutOptics = "commander_out_view";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        disableSoundAttenuation = 1;
                        gunnerLeftHandAnimName = "";
                        gunnerRightHandAnimName = "mg_handle2";
                        maxVerticalRotSpeed = 0.35;
                        minElev = -5;
                        maxElev = 45;
                        initElev = 0;
                        initTurn = 0;
                        weapons[] = {"rhs_weap_nsvt_t80"};
                        magazines[] = {"rhs_mag_127x108mm_50", "rhs_mag_127x108mm_50", "rhs_mag_127x108mm_50"};
                        selectionFireAnim = "zasleh3";
                        class OpticsIn: OpticsIn {
                            class Wide: Wide {
                                visionMode[] = {"Normal"};
                                initFov = 0.583333;
                                minFov = 0.583333;
                                maxFov = 0.583333;
                            };
                        };
                        gunnercompartments = "Compartment5";
                    };
                };
            };
        };
        class AnimationSources: AnimationSources {
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class era_1_source {
                source = "Hit";
                hitpoint = "era_1_hitpoint";
            };
            class era_2_source {
                source = "Hit";
                hitpoint = "era_2_hitpoint";
            };
            class era_3_source {
                source = "Hit";
                hitpoint = "era_3_hitpoint";
            };
            class era_4_source {
                source = "Hit";
                hitpoint = "era_4_hitpoint";
            };
            class era_5_source {
                source = "Hit";
                hitpoint = "era_5_hitpoint";
            };
            class era_6_source {
                source = "Hit";
                hitpoint = "era_6_hitpoint";
            };
            class era_7_source {
                source = "Hit";
                hitpoint = "era_7_hitpoint";
            };
            class era_8_source {
                source = "Hit";
                hitpoint = "era_8_hitpoint";
            };
            class era_9_source {
                source = "Hit";
                hitpoint = "era_9_hitpoint";
            };
            class era_10_source {
                source = "Hit";
                hitpoint = "era_10_hitpoint";
            };
            class era_11_source {
                source = "Hit";
                hitpoint = "era_11_hitpoint";
            };
            class era_12_source {
                source = "Hit";
                hitpoint = "era_12_hitpoint";
            };
            class era_13_source {
                source = "Hit";
                hitpoint = "era_13_hitpoint";
            };
            class era_14_source {
                source = "Hit";
                hitpoint = "era_14_hitpoint";
            };
            class era_15_source {
                source = "Hit";
                hitpoint = "era_15_hitpoint";
            };
            class era_16_source {
                source = "Hit";
                hitpoint = "era_16_hitpoint";
            };
            class era_17_source {
                source = "Hit";
                hitpoint = "era_17_hitpoint";
            };
            class era_18_source {
                source = "Hit";
                hitpoint = "era_18_hitpoint";
            };
            class era_19_source {
                source = "Hit";
                hitpoint = "era_19_hitpoint";
            };
            class era_20_source {
                source = "Hit";
                hitpoint = "era_20_hitpoint";
            };
            class era_21_source {
                source = "Hit";
                hitpoint = "era_21_hitpoint";
            };
            class era_22_source {
                source = "Hit";
                hitpoint = "era_22_hitpoint";
            };
            class era_23_source {
                source = "Hit";
                hitpoint = "era_23_hitpoint";
            };
            class era_24_source {
                source = "Hit";
                hitpoint = "era_24_hitpoint";
            };
            class era_25_source {
                source = "Hit";
                hitpoint = "era_25_hitpoint";
            };
            class era_26_source {
                source = "Hit";
                hitpoint = "era_26_hitpoint";
            };
            class era_27_source {
                source = "Hit";
                hitpoint = "era_27_hitpoint";
            };
            class era_28_source {
                source = "Hit";
                hitpoint = "era_28_hitpoint";
            };
        };
        class HitPoints: HitPoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e1";
                armorComponent = "e1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e1";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_2_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e2";
                armorComponent = "e2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e2";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e2";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_3_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e3";
                armorComponent = "e3";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e3";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e3";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_4_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e4";
                armorComponent = "e4";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e4";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e4";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_5_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e5";
                armorComponent = "e5";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e5";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e5";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_6_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e6";
                armorComponent = "e6";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e6";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e6";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_7_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e7";
                armorComponent = "e7";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e7";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e7";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_8_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e8";
                armorComponent = "e8";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e8";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e8";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_9_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e9";
                armorComponent = "e9";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e9";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e9";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_10_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e10";
                armorComponent = "e10";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e10";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e10";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_11_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e11";
                armorComponent = "e11";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e11";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e11";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_12_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e12";
                armorComponent = "e12";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e12";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e12";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_13_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e13";
                armorComponent = "e13";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e13";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e13";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_14_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e14";
                armorComponent = "e14";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e14";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e14";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_15_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e15";
                armorComponent = "e15";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e15";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e15";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_16_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e16";
                armorComponent = "e16";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e16";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e16";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_17_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e17";
                armorComponent = "e17";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e17";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e17";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_18_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e18";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e18";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_19_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e19";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e19";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_20_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e20";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e20";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_21_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e21";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e21";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_22_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e22";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e22";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_23_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e23";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e23";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_24_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e24";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e24";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_25_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e25";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e25";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_26_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e26";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e26";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_27_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e27";
                armorComponent = "e27";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e27";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e27";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_28_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e28";
                armorComponent = "e28";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e28";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e28";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
        };
        class Library {
            libTextDesc = "$STR_RHS_T80_T80BV_LIB";
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalArmy_type: rhs_decalArmy_type {};
            class rhs_decalArmy: rhs_decalArmy {};
            class rhs_decalHonor_type: rhs_decalHonor_type {};
            class rhs_decalHonor: rhs_decalHonor {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {};
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {};
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {};
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class rhs_ammoslot_4_type: rhs_ammoslot_4_type {};
            class rhs_ammoslot_4: rhs_ammoslot_4 {};
            class sideskirt_unhide: sideskirt_unhide {};
            class fbskirt_unhide: fbskirt_unhide {};
            class ftskirt_unhide: ftskirt_unhide {};
            class log_unhide: log_unhide {};
            class kshield_unhide: sideskirt_unhide {
                displayName = "Unhide commander shield";
                expression = "[_this,1-_value,'%s'] call rhs_fnc_setHabarEden";
                property = "kshield_unhide";
            };
            class rhs_disableHabar: rhs_disableHabar {};
            class rhs_snorkel: rhs_snorkel {};
            class rhs_searchlight: rhs_searchlight {};
        };
    };
    class rhs_t80bvk: rhs_t80bv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80bvk.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80BVK";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t80\data\hull.pac",
            "rhsafrf\addons\rhs_t80\data\turetbk.paa",
            "",
            "rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        hiddenSelectionsMaterials[] = {
            "rhsafrf\addons\rhs_t80\data\materials\hull_g.rvmat",
            "rhsafrf\addons\rhs_t80\data\materials\turret_bk.rvmat",
            "",
            "rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat"
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "rhs_mag_3bm22_14",
                    "rhs_mag_3bk18m_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        LodTurnedOut = 1200;
                    };
                    class CommanderMG: CommanderMG {
                        LodTurnedOut = 1200;
                        maxElev = 25;
                    };
                };
            };
        };
        smokeLauncherGrenadeCount = 6;
        smokeLauncherVelocity = 14;
        smokeLauncherOnTurret = 1;
        smokeLauncherAngle = 60;
        class AnimationSources: AnimationSources {
            class kshield_unhide: kshield_unhide {
                initPhase = 0;
            };
            class kdeck_unhide: kdeck_unhide {
                initPhase = 0;
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalArmy_type: rhs_decalArmy_type {};
            class rhs_decalArmy: rhs_decalArmy {};
            class rhs_decalHonor_type: rhs_decalHonor_type {};
            class rhs_decalHonor: rhs_decalHonor {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {};
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {};
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {};
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class sideskirt_unhide: sideskirt_unhide {};
            class fbskirt_unhide: fbskirt_unhide {};
            class ftskirt_unhide: ftskirt_unhide {};
            class log_unhide: log_unhide {};
            class kshield_unhide: sideskirt_unhide {
                displayName = "Hide commander shield";
                expression = "[_this,_value,'%s'] call rhs_fnc_setHabarEden";
                property = "kshield_unhide";
            };
            class rhs_disableHabar: rhs_disableHabar {};
            class rhs_snorkel: rhs_snorkel {};
            class rhs_searchlight: rhs_searchlight {};
        };
        class Library {
            libTextDesc = "$STR_RHS_T80_T80BVK_LIB";
        };
    };
    class rhs_t80: rhs_t80b {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80.paa";
        model = "\rhsafrf\addons\rhs_t80\T80.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80";
        armor = 500;
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t80\data\hull.pac",
            "rhsafrf\addons\rhs_t80\data\turret_ori.paa",
            "",
            "rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                factions[] = {};
                textures[] = {"rhsafrf\addons\rhs_t80\data\hull.pac", "rhsafrf\addons\rhs_t80\data\turret_ori.paa"};
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t80\data\materials\hull_g.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\hull_g_dam.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\hull_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_ori.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_ori_dam.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\track.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\track.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\track_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight_destroy.rvmat"
            };
        };
        class AnimationSources: AnimationSources {
            class recoil_source {
                source = "door";
                animPeriod = 6;
                initPhase = 0;
            };
            class reload_source {
                weapon = "rhs_weap_2a26";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
            class sightHide: autoloader {
                animPeriod = 0.0000000001;
            };
            class sightRange {
                source = "user";
                animPeriod = 0.0005;
                initPhase = 0;
            };
            class sightElevationAPFSDS: sightRange {
                animPeriod = 0.4;
                initPhase = 7.46;
            };
            class sightElevationHEAT: sightRange {
                animPeriod = 0.065;
            };
            class sightElevationHEF: sightRange {
                animPeriod = 0.08;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpd1k.p3d";
                weapons[] = {"rhs_weap_2a26", "rhs_weap_pkt", "rhs_weap_fcs"};
                magazines[] = {
                    "rhs_mag_3bm17_14",
                    "rhs_mag_3bk14_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                turretInfoType = "RHS_RscWeaponT72_FCS";
                class OpticsIn: OpticsIn {
                    class Day: ViewOptics {
                        opticsDisplayName = "DAY";
                        minFov = 0.0777778;
                        maxFov = 0.0777778;
                        initFov = 0.0777778;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpdk1_empty";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class Periscope: Day {
                        opticsDisplayName = "PERISCOPE";
                        initFov = 0.466666;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class Night: Day {
                        opticsDisplayName = "NIGHT";
                        initFov = 0.1;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpd1kn.p3d";
                    };
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {};
                        magazines[] = {};
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        minElev = -25;
                        maxElev = 60;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        LodTurnedOut = 0;
                        LODOpticsIn = 0;
                        gunnerAction = "rhs_t80old_commander_out";
                        gunnerInAction = "rhs_t80old_commander_in";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                        lockWhenDriverOut = 1;
                        gunnerHasFlares = 0;
                    };
                    delete CommanderMG;
                };
            };
        };
        class Library {
            libTextDesc = "$STR_RHS_T80_T8079_LIB";
        };
        class UserActions {};
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalArmy_type: rhs_decalArmy_type {};
            class rhs_decalArmy: rhs_decalArmy {};
            class rhs_decalHonor_type: rhs_decalHonor_type {};
            class rhs_decalHonor: rhs_decalHonor {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {
                class values {
                    class rhs_mag_3bm17_10 {
                        name = "$STR_rhs_mag_3bm17";
                        value = "rhs_mag_3bm17";
                        defaultValue = "rhs_mag_3bm17";
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
                    class rhs_mag_3bm22_10 {
                        name = "$STR_rhs_mag_3bm22";
                        value = "rhs_mag_3bm22";
                        defaultValue = "rhs_mag_3bm22";
                    };
                    class rhs_mag_3bm26_10 {
                        name = "$STR_rhs_mag_3bm26";
                        value = "rhs_mag_3bm26";
                        defaultValue = "rhs_mag_3bm26";
                    };
                };
            };
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {
                class values {
                    class rhs_mag_3bk14_8 {
                        name = "$STR_rhs_mag_3bk14";
                        value = "rhs_mag_3bk14";
                        defaultValue = "rhs_mag_3bk14";
                    };
                    class rhs_mag_3bk12_8 {
                        name = "$STR_rhs_mag_3bk12";
                        value = "rhs_mag_3bk12";
                        defaultValue = "rhs_mag_3bk12";
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
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {};
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class sideskirt_unhide: sideskirt_unhide {};
            class fbskirt_unhide: fbskirt_unhide {};
            class ftskirt_unhide: ftskirt_unhide {};
            class log_unhide: log_unhide {};
            class kshield_unhide: sideskirt_unhide {
                displayName = "Hide commander shield";
                expression = "[_this,_value,'%s'] call rhs_fnc_setHabarEden";
                property = "kshield_unhide";
            };
            class rhs_disableHabar: rhs_disableHabar {};
            class rhs_snorkel: rhs_snorkel {};
            class rhs_searchlight: rhs_searchlight {};
        };
    };
    class rhs_t80a: rhs_t80bv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80a.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80A";
        model = "\rhsafrf\addons\rhs_t80\T80A.p3d";
        accuracy = 0.8;
        armor = 600;
        simulation = "tankX";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 19.5;
        RHS_fuelCapacity = 1540;
        brakeIdleSpeed = 1.78;
        maxSpeed = 65;
        engineMOI = 20;
        enginePower = 895;
        peakTorque = 4393;
        minOmega = 114.72;
        maxOmega = 350.86;
        idleRPM = 1200;
        redRPM = 3255;
        torqueCurve[] = {
            {0.30722, 0},
            {0.447619, 0.948555},
            {0.526574, 0.897109},
            {0.60553, 0.845664},
            {0.684485, 0.794218},
            {0.763441, 0.742773},
            {0.842396, 0.691327},
            {1.90292, 0}
        };
        thrustDelay = 0.3;
        dampingRateFullThrottle = 0.3;
        dampingRateZeroThrottleClutchEngaged = 3;
        dampingRateZeroThrottleClutchDisengaged = 0.25;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        engineBrakeCoef = 0;
        tracksSpeed = 1.4;
        tankTurnForce = 850000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 3.3;
        accelAidForceYOffset = -4;
        accelAidForceSpd = 2.83;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        engineLosses = 25;
        transmissionLosses = 15;
        clutchStrength = 30;
        latency = 1.3;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.333333,
            0.333333,
            0,
            0.96,
            0.333333,
            0.983333,
            0.7,
            0.983333,
            0.733333,
            0.983333,
            0.733333
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -9.36,
                "N",
                0,
                "D1",
                4.38,
                "D2",
                2.16,
                "D3",
                1.46,
                "D4",
                1
            };
            TransmissionRatios[] = {"High", 12.85};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.9;
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "RHS_T80B_SUSL_1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                side = "left";
                steering = 0;
                width = 0.36;
                mass = 188;
                MOI = 14.0783;
                maxBrakeTorque = 10000;
                sprungMass = 3500;
                springStrength = 354000;
                springDamperRate = 11000;
                maxDroop = 0.14;
                maxCompression = 0.14;
                dampingRate = 1385;
                dampingRateInAir = 1385;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 72000;
                frictionVsSlipGraph[] = {{0, 0.4}, {0.18, 1}, {0.7, 0.75}};
            };
            class L3: L2 {
                boneName = "RHS_T80B_SUSL_3";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "RHS_T80B_SUSL_5";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "RHS_T80B_SUSL_7";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "RHS_T80B_SUSL_9";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "RHS_T80B_SUSL_11";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
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
                boneName = "RHS_T80B_SUSR_1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3: R2 {
                boneName = "RHS_T80B_SUSR_3";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2 {
                boneName = "RHS_T80B_SUSR_5";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2 {
                boneName = "RHS_T80B_SUSR_7";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2 {
                boneName = "RHS_T80B_SUSR_9";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7: R2 {
                boneName = "RHS_T80B_SUSR_11";
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
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t80\data\hull.pac",
            "rhsafrf\addons\rhs_t80\data\turreta.paa",
            "",
            "rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                factions[] = {};
                textures[] = {"rhsafrf\addons\rhs_t80\data\hull.pac", "rhsafrf\addons\rhs_t80\data\turreta.paa"};
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t80\data\materials\hull_g.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\hull_g_dam.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\hull_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A_dam.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\track.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\track.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\track_destroy.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight_dam.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight_destroy.rvmat"
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    "rhs_weap_2a46m_2",
                    "rhs_weap_pkt",
                    "rhs_weap_902a",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm42_10",
                    "rhs_mag_3bk21_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                gunnerAction = "rhs_t80a_gunner_out";
                gunnerInAction = "rhs_t80a_gunner_in";
                turretInfoType = "rhs_gui_optic_t80u_rangefinder";
                LodTurnedOut = 0;
                LodTurnedIn = 0;
                class Reflectors {};
                class OpticsIn {
                    class day1 {
                        opticsDisplayName = "DAY";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.179487;
                        minFov = 0.179487;
                        maxFov = 0.179487;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
                        gunnerOpticsEffect[] = {"TankCommanderOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                    class day2: day1 {
                        opticsDisplayName = "DAYZOOM";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                        visionMode[] = {"Normal"};
                    };
                    class Periscope: day1 {
                        opticsDisplayName = "PERISCOPE";
                        initFov = 0.466667;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class night3: day1 {
                        opticsDisplayName = "NIGHT";
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                        gunnerOpticsEffect[] = {"TankCommanderOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gun = "mg_gun";
                        animationSourceGun = "mg_gun";
                        weapons[] = {"rhs_weap_nsvt_t80"};
                        magazines[] = {
                            "rhs_mag_127x108mm_50",
                            "rhs_mag_127x108mm_50",
                            "rhs_mag_127x108mm_50",
                            "rhs_mag_127x108mm_50",
                            "rhs_mag_127x108mm_50",
                            "rhs_mag_127x108mm_50"
                        };
                        minElev = -25;
                        maxElev = 60;
                        initElev = 0;
                        LodTurnedOut = 0;
                        LodTurnedIn = 0;
                        turretInfoType = "rhs_gui_optic_TKN4S_rangefinder";
                        discreteDistance[] = {
                            100,
                            200,
                            300,
                            400,
                            500,
                            600,
                            800,
                            900,
                            1000,
                            1100,
                            1200,
                            1400,
                            1500,
                            1800,
                            1900,
                            2000
                        };
                        discreteDistanceInitIndex = 2;
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        gunnerOpticsEffect[] = {
                            "TankGunnerOptics1",
                            "BWTV",
                            "OpticsBlur2",
                            "OpticsCHAbera3"
                        };
                        class OpticsIn {
                            class day1aa {
                                camPos = "commanderview_aa";
                                hitpoint = "Hit_Optic_NSVT";
                                opticsDisplayName = "AA";
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.291667;
                                minFov = 0.291667;
                                maxFov = 0.291667;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu5.p3d";
                                gunnerOpticsEffect[] = {"OpticsBlur2", "OpticsCHAbera3"};
                            };
                            class day1: day1aa {
                                camPos = "commanderview";
                                hitpoint = "Hit_Optic_TKN4S";
                                opticsDisplayName = "DAY";
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s.p3d";
                                gunnerOpticsEffect[] = {
                                    "TankGunnerOptics1",
                                    "BWTV",
                                    "OpticsBlur2",
                                    "OpticsCHAbera3"
                                };
                            };
                            class day2: day1 {
                                opticsDisplayName = "DAYZOOM";
                                initFov = 0.0875;
                                minFov = 0.0875;
                                maxFov = 0.0875;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s_zoom.p3d";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                            };
                            class night3: day1 {
                                opticsDisplayName = "NIGHT";
                                initFov = 0.1;
                                minFov = 0.1;
                                maxFov = 0.1;
                                visionMode[] = {"NVG"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                                gunnerOpticsEffect[] = {"TankCommanderOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                            };
                        };
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        gunnerAction = "rhs_t80a_commander_out";
                        gunnerInAction = "rhs_t80a_commander_in";
                        personTurretAction = "RHS_passenger_inside_6";
                        isPersonTurret = 1;
                        selectionFireAnim = "zasleh3";
                        lockWhenDriverOut = 1;
                        gunnerHasFlares = 0;
                        maxHorizontalRotSpeed = 0.9;
                        maxVerticalRotSpeed = 0.47;
                    };
                    delete CommanderMG;
                };
            };
        };
        class AnimationSources: AnimationSources {
            class kshield_unhide: kshield_unhide {
                initPhase = 0;
            };
            class kdeck_unhide: kdeck_unhide {
                initPhase = 0;
            };
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class recoil_source {
                source = "door";
                animPeriod = 6;
                initPhase = 0;
            };
            class reload_source {
                weapon = "rhs_weap_2a46m_2";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
            class muzzle_rot_hmg: muzzle_rot_cannon {
                weapon = "rhs_weap_nsvt_t80";
            };
        };
        class Library {
            libTextDesc = "$STR_RHS_T80_T80A_LIB";
        };
        class UserActions {};
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalArmy_type: rhs_decalArmy_type {};
            class rhs_decalArmy: rhs_decalArmy {};
            class rhs_decalHonor_type: rhs_decalHonor_type {};
            class rhs_decalHonor: rhs_decalHonor {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {
                class values {
                    class rhs_mag_3bm42_10 {
                        name = "$STR_rhs_mag_3bm42";
                        value = "rhs_mag_3bm42";
                        defaultValue = "rhs_mag_3bm42";
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
                    class rhs_mag_3bm42m_10 {
                        name = "$STR_rhs_mag_3bm42m";
                        value = "rhs_mag_3bm42m";
                        defaultValue = "rhs_mag_3bm42m";
                    };
                    class rhs_mag_3bm46_10 {
                        name = "$STR_rhs_mag_3bm46";
                        value = "rhs_mag_3bm46";
                        defaultValue = "rhs_mag_3bm46";
                    };
                };
            };
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {
                class values {
                    class rhs_mag_3bk21_8 {
                        name = "$STR_rhs_mag_3bk21";
                        value = "rhs_mag_3bk21";
                        defaultValue = "rhs_mag_3bk21";
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
                    class rhs_mag_3bk29_8 {
                        name = "$STR_rhs_mag_3bk29";
                        value = "rhs_mag_3bk29";
                        defaultValue = "rhs_mag_3bk29";
                    };
                    class rhs_mag_3bk31_8 {
                        name = "$STR_rhs_mag_3bk31";
                        value = "rhs_mag_3bk31";
                        defaultValue = "rhs_mag_3bk31";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {
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
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class rhs_ammoslot_4_type: rhs_ammoslot_4_type {
                class values {
                    class rhs_mag_9m119_6 {
                        name = "$STR_rhs_mag_9m119";
                        value = "rhs_mag_9m119";
                        defaultValue = "rhs_mag_9m119";
                    };
                    class rhs_mag_9m119m_6 {
                        name = "$STR_rhs_mag_9m119m";
                        value = "rhs_mag_9m119m";
                        defaultValue = "rhs_mag_9m119m";
                    };
                    class rhs_mag_9m119f_6 {
                        name = "$STR_rhs_mag_9m119f";
                        value = "rhs_mag_9m119f";
                        defaultValue = "rhs_mag_9m119f";
                    };
                };
            };
            class rhs_ammoslot_4: rhs_ammoslot_4 {};
            class sideskirt_unhide: sideskirt_unhide {};
            class fbskirt_unhide: fbskirt_unhide {};
            class ftskirt_unhide: ftskirt_unhide {};
            class log_unhide: log_unhide {};
            class rhs_disableHabar: rhs_disableHabar {};
            class rhs_snorkel: rhs_snorkel {};
            class rhs_searchlight: rhs_searchlight {};
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call RHS_fnc_t80_init;";
                fired = "_this call RHS_fnc_t80_autoloader;";
                killed = "[_this select 0,'rhs_Wreck_T80_turret_F'] call rhs_fnc_turretBlow";
                engine = "_this spawn rhs_fnc_t80_snorkel_eh;[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
                getOut = "_this call rhs_fnc_hatchAbandon";
            };
        };
    };
    class rhs_t80u: rhs_t80a {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80u.paa";
        rhs_hasSnorkel = 0;
        simulation = "tankX";
        normalSpeedForwardCoef = 0.5;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 19.5;
        RHS_fuelCapacity = 1540;
        brakeIdleSpeed = 1.78;
        maxSpeed = 70;
        engineMOI = 20;
        enginePower = 932;
        peakTorque = 4393;
        minOmega = 114.72;
        maxOmega = 350.86;
        idleRPM = 1200;
        redRPM = 3255;
        torqueCurve[] = {
            {0.30722, 0},
            {0.447619, 0.948555},
            {0.526574, 0.897109},
            {0.60553, 0.845664},
            {0.684485, 0.794218},
            {0.763441, 0.742773},
            {0.842396, 0.691327},
            {1.90292, 0}
        };
        thrustDelay = 0.3;
        dampingRateFullThrottle = 0.3;
        dampingRateZeroThrottleClutchEngaged = 3;
        dampingRateZeroThrottleClutchDisengaged = 0.25;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        engineBrakeCoef = 0;
        tracksSpeed = 1.4;
        tankTurnForce = 650000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 3.3;
        accelAidForceYOffset = -4;
        accelAidForceSpd = 2.83;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        engineLosses = 25;
        transmissionLosses = 15;
        clutchStrength = 30;
        latency = 1.3;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.333333,
            0.333333,
            0,
            0.96,
            0.333333,
            0.983333,
            0.7,
            0.983333,
            0.733333,
            0.983333,
            0.733333
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -10.36,
                "N",
                0,
                "D1",
                4.38,
                "D2",
                2.16,
                "D3",
                1.46,
                "D4",
                1
            };
            TransmissionRatios[] = {"High", 11.55};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.9;
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "RHS_T80B_SUSL_1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                side = "left";
                steering = 0;
                width = 0.396;
                mass = 188;
                MOI = 14.0783;
                maxBrakeTorque = 10000;
                sprungMass = 3833.33;
                springStrength = 254000;
                springDamperRate = 11000;
                maxDroop = 0.14;
                maxCompression = 0.14;
                dampingRate = 1364;
                dampingRateInAir = 1364;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 72000;
                frictionVsSlipGraph[] = {{0, 0.4}, {0.18, 1}, {0.7, 0.75}};
            };
            class L3: L2 {
                boneName = "RHS_T80B_SUSL_3";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "RHS_T80B_SUSL_5";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "RHS_T80B_SUSL_7";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "RHS_T80B_SUSL_9";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "RHS_T80B_SUSL_11";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
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
                boneName = "RHS_T80B_SUSR_1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3: R2 {
                boneName = "RHS_T80B_SUSR_3";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2 {
                boneName = "RHS_T80B_SUSR_5";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2 {
                boneName = "RHS_T80B_SUSR_7";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2 {
                boneName = "RHS_T80B_SUSR_9";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7: R2 {
                boneName = "RHS_T80B_SUSR_11";
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
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80U";
        model = "\rhsafrf\addons\rhs_t80u\rhs_t80u.p3d";
        picture = "\rhsafrf\addons\rhs_t80\data\icon\rhs_t80u_pic_ca.paa";
        enableGPS = 1;
        reportOwnPosition = 1;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "Search_random",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa",
            "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02_co.paa",
            "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa",
            "rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa"
        };
        class textureSources: textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                factions[] = {};
                textures[] = {"rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa"};
            };
            class tricolor: standard {
                displayName = "3-Color Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_01_co.paa", "rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_02_co.paa", "rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_03_co.paa"};
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
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t80u\data\rhs_t80u_01.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_01.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_01.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_02.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_02.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\searchlight_destroy.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gun = "RHS_T80B_com_Gun";
                        animationSourceGun = "obsGun";
                        gunnerAction = "rhs_t80u_commander_out";
                        gunnerInAction = "rhs_t80u_commander_in";
                        personTurretAction = "RHS_passenger_inside_6";
                        isPersonTurret = 1;
                        weapons[] = {};
                        LodTurnedOut = 0;
                        LodTurnedIn = 0;
                        class OpticsIn {
                            class day1 {
                                hitpoint = "Hit_Optic_TKN4S";
                                opticsDisplayName = "DAY";
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
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s.p3d";
                            };
                            class day2: day1 {
                                opticsDisplayName = "DAYZOOM";
                                initFov = 0.0875;
                                minFov = 0.0875;
                                maxFov = 0.0875;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s_zoom.p3d";
                            };
                            class night3: day1 {
                                opticsDisplayName = "NIGHT";
                                initFov = 0.1;
                                minFov = 0.1;
                                maxFov = 0.1;
                                visionMode[] = {"NVG"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                            };
                        };
                    };
                };
                class OpticsIn {
                    class day1 {
                        camPos = "gunnerview";
                        hitpoint = "Hit_Optic_1G46";
                        opticsDisplayName = "DAY";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.179487;
                        minFov = 0.179487;
                        maxFov = 0.179487;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
                        gunnerOpticsEffect[] = {"TankCommanderOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                    class day2: day1 {
                        opticsDisplayName = "DAYZOOM";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                        visionMode[] = {"Normal"};
                    };
                    class Periscope: day1 {
                        camPos = "view_periscope";
                        hitpoint = "Hit_Optic_Periscope";
                        opticsDisplayName = "PERISCOPE";
                        initFov = 0.466667;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class night3: day1 {
                        camPos = "view_TPN4";
                        hitpoint = "Hit_Optic_TPN4";
                        opticsDisplayName = "NIGHT";
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                        gunnerOpticsEffect[] = {"TankCommanderOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                };
                LodTurnedOut = 0;
                LodTurnedIn = 0;
                turretInfoType = "rhs_gui_optic_t80u_rangefinder";
                weapons[] = {
                    "rhs_weap_2a46m_4",
                    "rhs_weap_pkt",
                    "rhs_weap_902a",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm46_10",
                    "rhs_mag_3bk31_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
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
            };
        };
        class AnimationSources: AnimationSources {
            class kshield_unhide {
                source = "user";
                animPeriod = 0.0000000001;
            };
            class kdeck_unhide: kshield_unhide {};
            class sideskirt_unhide: kshield_unhide {};
            class fbskirt_unhide: kshield_unhide {};
            class ftskirt_unhide: kshield_unhide {};
            class log_unhide: kshield_unhide {};
            class snorkel_unhide: kshield_unhide {};
            class nsvtHide {
                source = "user";
                mass = -20;
                displayName = "hide NSVT";
                author = "$STR_RHS_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class recoil_source {
                source = "door";
                animPeriod = 6;
                initPhase = 0;
            };
            class reload_source {
                weapon = "rhs_weap_2a46m_4";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
            class skirt_1_source {
                source = "Hit";
                hitpoint = "sideskirt_1_hitpoint";
            };
            class skirt_2_source {
                source = "Hit";
                hitpoint = "sideskirt_2_hitpoint";
            };
            class skirt_3_source {
                source = "Hit";
                hitpoint = "sideskirt_3_hitpoint";
            };
            class skirt_4_source {
                source = "Hit";
                hitpoint = "sideskirt_4_hitpoint";
            };
            class skirt_5_source {
                source = "Hit";
                hitpoint = "sideskirt_5_hitpoint";
            };
            class skirt_6_source {
                source = "Hit";
                hitpoint = "sideskirt_6_hitpoint";
            };
            class skirt_7_source {
                source = "Hit";
                hitpoint = "sideskirt_7_hitpoint";
            };
            class skirt_8_source {
                source = "Hit";
                hitpoint = "sideskirt_8_hitpoint";
            };
            class skirt_9_source {
                source = "Hit";
                hitpoint = "sideskirt_9_hitpoint";
            };
            class skirt_10_source {
                source = "Hit";
                hitpoint = "sideskirt_10_hitpoint";
            };
            class era_1_source {
                source = "Hit";
                hitpoint = "era_1_hitpoint";
            };
            class era_2_source {
                source = "Hit";
                hitpoint = "era_2_hitpoint";
            };
            class era_3_source {
                source = "Hit";
                hitpoint = "era_3_hitpoint";
            };
            class era_4_source {
                source = "Hit";
                hitpoint = "era_4_hitpoint";
            };
            class era_5_source {
                source = "Hit";
                hitpoint = "era_5_hitpoint";
            };
            class era_6_source {
                source = "Hit";
                hitpoint = "era_6_hitpoint";
            };
            class era_7_source {
                source = "Hit";
                hitpoint = "era_7_hitpoint";
            };
            class era_8_source {
                source = "Hit";
                hitpoint = "era_8_hitpoint";
            };
            class era_9_source {
                source = "Hit";
                hitpoint = "era_9_hitpoint";
            };
            class era_10_source {
                source = "Hit";
                hitpoint = "era_10_hitpoint";
            };
            class era_11_source {
                source = "Hit";
                hitpoint = "era_11_hitpoint";
            };
            class era_12_source {
                source = "Hit";
                hitpoint = "era_12_hitpoint";
            };
            class era_13_source {
                source = "Hit";
                hitpoint = "era_13_hitpoint";
            };
            class era_14_source {
                source = "Hit";
                hitpoint = "era_14_hitpoint";
            };
            class era_15_source {
                source = "Hit";
                hitpoint = "era_15_hitpoint";
            };
            class era_16_source {
                source = "Hit";
                hitpoint = "era_16_hitpoint";
            };
            class era_17_source {
                source = "Hit";
                hitpoint = "era_17_hitpoint";
            };
            class era_18_source {
                source = "Hit";
                hitpoint = "era_18_hitpoint";
            };
            class era_19_source {
                source = "Hit";
                hitpoint = "era_19_hitpoint";
            };
            class era_20_source {
                source = "Hit";
                hitpoint = "era_20_hitpoint";
            };
            class era_21_source {
                source = "Hit";
                hitpoint = "era_21_hitpoint";
            };
            class era_22_source {
                source = "Hit";
                hitpoint = "era_22_hitpoint";
            };
            class era_23_source {
                source = "Hit";
                hitpoint = "era_23_hitpoint";
            };
            class era_24_source {
                source = "Hit";
                hitpoint = "era_24_hitpoint";
            };
            class era_25_source {
                source = "Hit";
                hitpoint = "era_25_hitpoint";
            };
            class era_26_source {
                source = "Hit";
                hitpoint = "era_26_hitpoint";
            };
            class era_27_source {
                source = "Hit";
                hitpoint = "era_27_hitpoint";
            };
            class era_28_source {
                source = "Hit";
                hitpoint = "era_28_hitpoint";
            };
            class era_29_source {
                source = "Hit";
                hitpoint = "era_29_hitpoint";
            };
            class era_30_source {
                source = "Hit";
                hitpoint = "era_30_hitpoint";
            };
            class era_31_source {
                source = "Hit";
                hitpoint = "era_31_hitpoint";
            };
            class era_32_source {
                source = "Hit";
                hitpoint = "era_32_hitpoint";
            };
            class era_33_source {
                source = "Hit";
                hitpoint = "era_33_hitpoint";
            };
            class era_34_source {
                source = "Hit";
                hitpoint = "era_34_hitpoint";
            };
            class era_35_source {
                source = "Hit";
                hitpoint = "era_35_hitpoint";
            };
            class smoketube_1_source: era_1_source {
                hitpoint = "smoketube_1_hitpoint";
            };
            class smoketube_2_source: era_1_source {
                hitpoint = "smoketube_2_hitpoint";
            };
            class smoketube_3_source: era_1_source {
                hitpoint = "smoketube_3_hitpoint";
            };
            class smoketube_4_source: era_1_source {
                hitpoint = "smoketube_4_hitpoint";
            };
            class smoketube_5_source: era_1_source {
                hitpoint = "smoketube_5_hitpoint";
            };
            class smoketube_6_source: era_1_source {
                hitpoint = "smoketube_6_hitpoint";
            };
            class smoketube_7_source: era_1_source {
                hitpoint = "smoketube_7_hitpoint";
            };
            class smoketube_8_source: era_1_source {
                hitpoint = "smoketube_8_hitpoint";
            };
            class mud_1_source: era_1_source {
                hitpoint = "mud_1_hitpoint";
            };
            class mud_2_source: era_1_source {
                hitpoint = "mud_2_hitpoint";
            };
            class mud_3_source: era_1_source {
                hitpoint = "mud_3_hitpoint";
            };
            class mud_4_source: era_1_source {
                hitpoint = "mud_4_hitpoint";
            };
            class mud_5_source: era_1_source {
                hitpoint = "mud_5_hitpoint";
            };
            class mud_6_source: era_1_source {
                hitpoint = "mud_6_hitpoint";
            };
            class mud_7_source: era_1_source {
                hitpoint = "mud_7_hitpoint";
            };
            class mud_8_source: era_1_source {
                hitpoint = "mud_8_hitpoint";
            };
        };
        class HitPoints: HitPoints {
            class Hit_Optic_Driver1 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_driver1";
                armorComponent = "Hit_Optic_Driver1";
                passThrough = 0;
            };
            class Hit_Optic_Driver2 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_driver2";
                armorComponent = "Hit_Optic_Driver2";
                passThrough = 0;
            };
            class Hit_Optic_Driver3 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_driver3";
                armorComponent = "Hit_Optic_Driver3";
                passThrough = 0;
            };
            class Hit_Optic_PeriscopeGun {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_periscopegun";
                armorComponent = "Hit_PeriscopeGun";
                passThrough = 0;
            };
            class Hit_Optic_1G46 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_1g46";
                armorComponent = "Hit_Optic_1G46";
                passThrough = 0;
            };
            class Hit_Optic_TPN4 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_TPN4";
                armorComponent = "Hit_Optic_TPN4";
                passThrough = 0;
            };
            class Hit_Optic_TKN4S {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_tkn4s";
                armorComponent = "Hit_Optic_TKN4S";
                passThrough = 0;
            };
            class Hit_Optic_Periscope1 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_periscope1";
                armorComponent = "Hit_Optic_Periscope1";
                passThrough = 0;
            };
            class Hit_Optic_Periscope2 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_periscope2";
                armorComponent = "Hit_Optic_Periscope2";
                passThrough = 0;
            };
            class Hit_Optic_Periscope3 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_periscope3";
                armorComponent = "Hit_Optic_Periscope3";
                passThrough = 0;
            };
            class Hit_Optic_Periscope4 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_periscope4";
                armorComponent = "Hit_Optic_Periscope4";
                passThrough = 0;
            };
            class Sideskirt_1_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_1";
                armorComponent = "Skirt_1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_2_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_2";
                armorComponent = "Skirt_2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_3_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_3";
                armorComponent = "Skirt_3";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_4_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_4";
                armorComponent = "Skirt_4";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_5_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_5";
                armorComponent = "Skirt_5";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_6_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_6";
                armorComponent = "Skirt_6";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_7_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_7";
                armorComponent = "Skirt_7";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_8_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_8";
                armorComponent = "Skirt_8";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_9_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_9";
                armorComponent = "Skirt_9";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_10_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_10";
                armorComponent = "Skirt_10";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class era_1_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e1";
                armorComponent = "e1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e1";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_2_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e2";
                armorComponent = "e2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e2";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e2";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_3_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e3";
                armorComponent = "e3";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e3";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e3";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_4_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e4";
                armorComponent = "e4";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e4";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e4";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_5_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e5";
                armorComponent = "e5";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e5";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e5";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_6_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e6";
                armorComponent = "e6";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e6";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e6";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_7_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e7";
                armorComponent = "e7";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e7";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e7";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_8_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e8";
                armorComponent = "e8";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e8";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e8";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_9_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e9";
                armorComponent = "e9";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e9";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e9";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_10_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e10";
                armorComponent = "e10";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e10";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e10";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_11_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e11";
                armorComponent = "e11";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e11";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e11";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_12_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e12";
                armorComponent = "e12";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e12";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e12";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_13_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e13";
                armorComponent = "e13";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e13";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e13";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_14_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e14";
                armorComponent = "e14";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e14";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e14";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_15_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e15";
                armorComponent = "e15";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e15";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e15";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_16_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e16";
                armorComponent = "e16";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e16";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e16";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_17_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e17";
                armorComponent = "e17";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e17";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e17";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_18_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e18";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e18";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_19_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e19";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e19";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_20_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e20";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e20";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_21_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e21";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e21";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_22_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e22";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e22";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_23_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e23";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e23";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_24_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e24";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e24";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_25_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e25";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e25";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_26_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e26";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e26";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_27_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e27";
                armorComponent = "e27";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e27";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e27";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_28_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e28";
                armorComponent = "e28";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e28";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e28";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_29_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e29";
                armorComponent = "e29";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e29";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e29";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e29";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e29";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_30_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e30";
                armorComponent = "e30";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e30";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e30";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e30";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e30";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_31_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e31";
                armorComponent = "e31";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e31";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e31";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e31";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e31";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_32_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e32";
                armorComponent = "e32";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e32";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e32";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e32";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e32";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_33_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e33";
                armorComponent = "e33";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e33";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e33";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e33";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e33";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_34_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e34";
                armorComponent = "e34";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e34";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e34";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e34";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e34";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_35_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e35";
                armorComponent = "e35";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e35";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e35";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e35";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e35";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitHull: HitHull {
                armorComponent = "Hit_Carousel";
            };
            class HitEngine: HitEngine {
                armorComponent = "Hit_Engine";
            };
            class HitFuelTank_Left {
                armor = -80;
                material = -1;
                name = "Hit_FuelTank_Left";
                armorComponent = "Hit_FuelTank_Left";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.3;
                explosionShielding = 0;
                radius = 0.1;
            };
            class HitFuelTank_Right: HitFuelTank_Left {
                name = "Hit_FuelTank_Right";
                armorComponent = "Hit_FuelTank_Right";
            };
            class HitFuel {
                armor = 999;
                name = "Hit_Fuel";
                armorComponent = "Hit_Fuel";
                visual = "-";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.01;
                depends = "(HitFuelTank_Left+HitFuelTank_Right)*0.5";
            };
            class HitLTrack: HitLTrack {
                armor = -150;
                armorComponent = "Hit_TrackL";
                passThrough = 0;
                material = -1;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = -150;
                armorComponent = "Hit_TrackR";
                material = -1;
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class smoketube_4_hitpoint {
                armor = 1.2;
                material = -1;
                name = "smoketube4";
                visual = "-";
                passThrough = 0;
                explosionShielding = 0.007;
                minimalHit = 0.08;
                depends = "era_23_hitpoint";
            };
            class smoketube_3_hitpoint: smoketube_4_hitpoint {
                name = "smoketube3";
                depends = "era_23_hitpoint + smoketube_4_hitpoint";
            };
            class smoketube_2_hitpoint: smoketube_4_hitpoint {
                name = "smoketube2";
                depends = "era_22_hitpoint + smoketube_3_hitpoint";
            };
            class smoketube_1_hitpoint: smoketube_4_hitpoint {
                name = "smoketube1";
                depends = "era_22_hitpoint + smoketube_2_hitpoint";
            };
            class smoketube_8_hitpoint: smoketube_4_hitpoint {
                name = "smoketube8";
                depends = "era_28_hitpoint";
            };
            class smoketube_7_hitpoint: smoketube_4_hitpoint {
                name = "smoketube7";
                depends = "era_28_hitpoint + smoketube_8_hitpoint";
            };
            class smoketube_6_hitpoint: smoketube_4_hitpoint {
                name = "smoketube6";
                depends = "era_27_hitpoint + smoketube_7_hitpoint";
            };
            class smoketube_5_hitpoint: smoketube_4_hitpoint {
                name = "smoketube5";
                depends = "era_27_hitpoint + smoketube_6_hitpoint";
            };
            class mud_1_hitpoint {
                armor = 0.7;
                material = -1;
                name = "mud1";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.08;
                explosionShielding = 0.007;
                depends = "era_21_hitpoint";
            };
            class mud_2_hitpoint: mud_1_hitpoint {
                name = "mud2";
                depends = "era_22_hitpoint";
            };
            class mud_3_hitpoint: mud_1_hitpoint {
                name = "mud3";
                depends = "era_23_hitpoint";
            };
            class mud_4_hitpoint: mud_3_hitpoint {
                name = "mud4";
                depends = "era_24_hitpoint";
            };
            class mud_5_hitpoint: mud_1_hitpoint {
                name = "mud5";
                depends = "era_26_hitpoint";
            };
            class mud_6_hitpoint: mud_5_hitpoint {
                name = "mud6";
                depends = "era_27_hitpoint";
            };
            class mud_7_hitpoint: mud_1_hitpoint {
                name = "mud7";
                depends = "era_28_hitpoint";
            };
            class mud_8_hitpoint: mud_7_hitpoint {
                name = "mud8";
                depends = "era_29_hitpoint";
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalHonor_type: rhs_decalHonor_type {};
            class rhs_decalHonor: rhs_decalHonor {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {
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
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {
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
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {
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
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class rhs_ammoslot_4_type: rhs_ammoslot_4_type {
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
            class rhs_ammoslot_4: rhs_ammoslot_4 {};
            class rhs_searchlight: rhs_searchlight {};
            class rhs_hideNSVT {
                displayName = "Hide NSVT";
                property = "rhs_hideNSVT";
                control = "CheckboxNumber";
                expression = "_this animate ['nsvtHide',_value,true]";
                defaultValue = "0";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call RHS_fnc_t80_init;";
                fired = "_this call RHS_fnc_t80_autoloader;";
                killed = "[_this select 0,'rhs_Wreck_T80u_turret_F'] call rhs_fnc_turretBlow";
                engine = "[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
                getOut = "_this call rhs_fnc_hatchAbandon";
            };
        };
    };
    class rhs_t80uk: rhs_t80u {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80uk.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "T-80UK";
        rhs_aps_shtora = 1;
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call RHS_fnc_t80_init; _this spawn RHS_fnc_shtoraInit;";
                incomingmissile = "_this call RHS_fnc_shtoraIncomingMissileEH;";
            };
        };
        lockDetectionSystem = 4;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "n1",
            "n2",
            "n3",
            "dazzler",
            "dazzlerlight"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa",
            "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02a_co.paa",
            "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa",
            "rhsafrf\addons\rhs_t80u\data\shotram_co.paa",
            "",
            "",
            "",
            "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa"
        };
        class textureSources: textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                factions[] = {};
                textures[] = {
                    "rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa",
                    "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02a_co.paa",
                    "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa",
                    "rhsafrf\addons\rhs_t80u\data\shotram_co.paa"
                };
            };
            class tricolor: standard {
                displayName = "3-Color Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_01_co.paa",
                    "rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_02a_co.paa",
                    "rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_03_co.paa",
                    "rhsafrf\addons\rhs_t80u\data\shotram_co.paa"
                };
            };
            class r1: standard {
                displayName = "#1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)"
                };
            };
            class r2: standard {
                displayName = "#2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)"
                };
            };
            class r3: standard {
                displayName = "#3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)"
                };
            };
            class r4: standard {
                displayName = "#4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)"
                };
            };
            class r5: standard {
                displayName = "#5";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)"
                };
            };
        };
        class AnimationSources: AnimationSources {
            class ShtoraTurn {
                source = "user";
                animperiod = 2;
            };
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902b";
            };
            class era_36_source {
                source = "Hit";
                hitpoint = "era_36_hitpoint";
            };
            class smoketube_9_source: era_1_source {
                hitpoint = "smoketube_9_hitpoint";
            };
            class smoketube_10_source: era_1_source {
                hitpoint = "smoketube_10_hitpoint";
            };
            class smoketube_11_source: era_1_source {
                hitpoint = "smoketube_11_hitpoint";
            };
            class smoketube_12_source: era_1_source {
                hitpoint = "smoketube_12_hitpoint";
            };
        };
        class HitPoints: HitPoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e1";
                armorComponent = "e1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e1";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_2_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e2";
                armorComponent = "e2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e2";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e2";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_3_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e3";
                armorComponent = "e3";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e3";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e3";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_4_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e4";
                armorComponent = "e4";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e4";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e4";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_5_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e5";
                armorComponent = "e5";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e5";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e5";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_6_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e6";
                armorComponent = "e6";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e6";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e6";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_7_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e7";
                armorComponent = "e7";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e7";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e7";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_8_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e8";
                armorComponent = "e8";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e8";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e8";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_9_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e9";
                armorComponent = "e9";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e9";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e9";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_10_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e10";
                armorComponent = "e10";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e10";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e10";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_11_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e11";
                armorComponent = "e11";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e11";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e11";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_12_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e12";
                armorComponent = "e12";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e12";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e12";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_13_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e13";
                armorComponent = "e13";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e13";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e13";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_14_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e14";
                armorComponent = "e14";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e14";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e14";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_15_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e15";
                armorComponent = "e15";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e15";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e15";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_16_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e16";
                armorComponent = "e16";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e16";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e16";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_17_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e17";
                armorComponent = "e17";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e17";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e17";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_18_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e18";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e18";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_19_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e19";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e19";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_20_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e20";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e20";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_21_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e21";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e21";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_22_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e22";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e22";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_23_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e23";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e23";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_24_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e24";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e24";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_25_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e25";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e25";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_26_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e26";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e26";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_27_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e27";
                armorComponent = "e27";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e27";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e27";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_28_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e28";
                armorComponent = "e28";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e28";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e28";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_29_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e29";
                armorComponent = "e29";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e29";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e29";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e29";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e29";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_30_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e30";
                armorComponent = "e30";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e30";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e30";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e30";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e30";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_31_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e31";
                armorComponent = "e31";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e31";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e31";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e31";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e31";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_32_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e32";
                armorComponent = "e32";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e32";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e32";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e32";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e32";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_33_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e33";
                armorComponent = "e33";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e33";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e33";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e33";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e33";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_34_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e34";
                armorComponent = "e34";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e34";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e34";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e34";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e34";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_35_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e35";
                armorComponent = "e35";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e35";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e35";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e35";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e35";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_36_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e36";
                armorComponent = "e36";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e36";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e36";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e36";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e36";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class smoketube_12_hitpoint {
                armor = 1.2;
                material = -1;
                name = "smoketube12";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.08;
                explosionShielding = 0.007;
                depends = "era_29_hitpoint";
            };
            class smoketube_9_hitpoint: smoketube_1_hitpoint {
                name = "smoketube2";
                depends = "era_22_hitpoint";
            };
            class smoketube_5_hitpoint: smoketube_1_hitpoint {
                name = "smoketube1";
                depends = "era_21_hitpoint + smoketube_9_hitpoint";
            };
            class smoketube_11_hitpoint: smoketube_1_hitpoint {
                name = "smoketube11";
                depends = "era_21_hitpoint + smoketube_5_hitpoint";
            };
            class smoketube_3_hitpoint: smoketube_1_hitpoint {
                name = "smoketube3";
                depends = "era_22_hitpoint + smoketube_9_hitpoint";
            };
            class smoketube_7_hitpoint: smoketube_1_hitpoint {
                name = "smoketube7";
                depends = "era_23_hitpoint + smoketube_3_hitpoint";
            };
            class smoketube_1_hitpoint: smoketube_1_hitpoint {
                name = "smoketube7";
                depends = "era_23_hitpoint + smoketube_7_hitpoint";
            };
            class smoketube_6_hitpoint: smoketube_1_hitpoint {
                name = "smoketube6";
                depends = "era_29_hitpoint + smoketube_12_hitpoint";
            };
            class smoketube_10_hitpoint: smoketube_1_hitpoint {
                name = "smoketube10";
                depends = "era_28_hitpoint + smoketube_6_hitpoint";
            };
            class smoketube_4_hitpoint: smoketube_1_hitpoint {
                name = "smoketube4";
                depends = "era_28_hitpoint + smoketube_10_hitpoint";
            };
            class smoketube_8_hitpoint: smoketube_1_hitpoint {
                name = "smoketube8";
                depends = "era_27_hitpoint + smoketube_4_hitpoint";
            };
            class smoketube_2_hitpoint: smoketube_1_hitpoint {
                name = "smoketube8";
                depends = "era_27_hitpoint + smoketube_8_hitpoint";
            };
            class Hit_Optic_Agava {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_Agava";
                visual = "vis_optic_Agava";
                armorComponent = "Hit_Optic_Agava";
                passThrough = 0;
            };
        };
        class UserActions {
            class shtora_on {
                displayName = "Shtora: Turn on";
                displayNameDefault = "Shtora: Turn on";
                showWindow = 0;
                position = "camera";
                priority = 1;
                radius = 2;
                onlyForplayer = 0;
                condition = "(this getVariable ['RHS_SHTORA_ENABLED', false]) AND {(this getVariable ['RHS_SHTORA_MODE', 0] < 1)} AND {((call rhs_fnc_findPlayer) == commander this)} AND {!(isTurnedOut (commander this))}";
                statement = "this setVariable ['RHS_SHTORA_MODE', 2, true];";
            };
            class shtora_semi: shtora_on {
                displayName = "Shtora: Switch to semi-auto mode";
                displayNameDefault = "Shtora: Switch to semi-auto mode";
                condition = "(this getVariable ['RHS_SHTORA_ENABLED', false]) AND {(this getVariable ['RHS_SHTORA_MODE', 0] > 0)} AND {(this getVariable ['RHS_SHTORA_MODE', 0] != 1)} AND {((call rhs_fnc_findPlayer) == commander this)} AND {!(isTurnedOut (commander this))}";
                statement = "this setVariable ['RHS_SHTORA_MODE', 1, true];";
            };
            class shtora_auto: shtora_on {
                displayName = "Shtora: Switch to automatic mode";
                displayNameDefault = "Shtora: Switch to automatic mode";
                condition = "(this getVariable ['RHS_SHTORA_ENABLED', false]) AND {(this getVariable ['RHS_SHTORA_MODE', 0] > 0)} AND {(this getVariable ['RHS_SHTORA_MODE', 0] != 2)} AND {((call rhs_fnc_findPlayer) == commander this)} AND {!(isTurnedOut (commander this))}";
                statement = "this setVariable ['RHS_SHTORA_MODE', 2, true];";
            };
            class shtora_off: shtora_on {
                displayName = "Shtora: Turn off";
                displayNameDefault = "Shtora: Turn off";
                condition = "(this getVariable ['RHS_SHTORA_ENABLED', false]) AND {(this getVariable ['RHS_SHTORA_MODE', 0] > 0)} AND {((call rhs_fnc_findPlayer) == commander this)} AND {!(isTurnedOut (commander this))}";
                statement = "this setVariable ['RHS_SHTORA_MODE', 0, true];";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t80u\data\rhs_t80u_01.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_01.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_01.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_02.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_02.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80u\data\shotram.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dazzler.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_03.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        model = "\rhsafrf\addons\rhs_t80u\rhs_t80uk.p3d";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    "rhs_weap_2a46m_4",
                    "rhs_weap_pkt",
                    "rhs_weap_902b",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm46_10",
                    "rhs_mag_3bk31_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17_12",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"rhs_weap_dazzler"};
                        magazines[] = {"rhs_mag_dazzler"};
                    };
                };
                turretInfoType = "RHS_RscWeaponAgava_FCS";
                class OpticsIn {
                    class Periscope: ViewOptics {
                        camPos = "view_periscope";
                        hitpoint = "Hit_Optic_Periscope";
                        opticsDisplayName = "PERISCOPE";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        initFov = 0.466667;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class day1: Periscope {
                        camPos = "gunnerview";
                        hitpoint = "Hit_Optic_1G46";
                        opticsDisplayName = "DAY";
                        minFov = 0.179487;
                        maxFov = 0.179487;
                        initFov = 0.179487;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
                    };
                    class day2: day1 {
                        opticsDisplayName = "DAYZOOM";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                        visionMode[] = {"Normal"};
                    };
                    class thermal1: day1 {
                        camPos = "view_Agava";
                        hitpoint = "Hit_Optic_Agava";
                        opticsDisplayName = "TI1";
                        initFov = 0.466667;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        visionMode[] = {"Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava";
                    };
                    class thermal2: thermal1 {
                        opticsDisplayName = "TI2";
                        initFov = 0.155556;
                        minFov = 0.155556;
                        maxFov = 0.155556;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava_4x";
                    };
                    class thermal3: thermal2 {
                        opticsDisplayName = "TI3";
                        initFov = 0.0388889;
                        minFov = 0.0388889;
                        maxFov = 0.0388889;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava_18x";
                    };
                };
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {
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
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {
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
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {
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
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class rhs_ammoslot_4_type: rhs_ammoslot_4_type {
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
            class rhs_ammoslot_4: rhs_ammoslot_4 {};
            class rhs_hideNSVT: rhs_hideNSVT {};
        };
    };
    class rhs_t80u45m: rhs_t80u {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80u45m.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80U45M";
        model = "\rhsafrf\addons\rhs_t80u\rhs_t80um45.p3d";
    };
    class rhs_t80ue1: rhs_t80a {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80ue1.paa";
        rhs_hasSnorkel = 0;
        enableGPS = 1;
        receiveRemoteTargets = 1;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        simulation = "tankX";
        normalSpeedForwardCoef = 0.5;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 19.5;
        RHS_fuelCapacity = 1540;
        brakeIdleSpeed = 1.78;
        maxSpeed = 70;
        engineMOI = 20;
        enginePower = 932;
        peakTorque = 4393;
        minOmega = 114.72;
        maxOmega = 350.86;
        idleRPM = 1200;
        redRPM = 3255;
        torqueCurve[] = {
            {0.30722, 0},
            {0.447619, 0.948555},
            {0.526574, 0.897109},
            {0.60553, 0.845664},
            {0.684485, 0.794218},
            {0.763441, 0.742773},
            {0.842396, 0.691327},
            {1.90292, 0}
        };
        thrustDelay = 0.3;
        dampingRateFullThrottle = 0.3;
        dampingRateZeroThrottleClutchEngaged = 3;
        dampingRateZeroThrottleClutchDisengaged = 0.25;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        engineBrakeCoef = 0;
        tracksSpeed = 1.4;
        tankTurnForce = 650000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 3.3;
        accelAidForceYOffset = -4;
        accelAidForceSpd = 2.83;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        engineLosses = 25;
        transmissionLosses = 15;
        clutchStrength = 30;
        latency = 1.3;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.333333,
            0.333333,
            0,
            0.96,
            0.333333,
            0.983333,
            0.7,
            0.983333,
            0.733333,
            0.983333,
            0.733333
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -10.36,
                "N",
                0,
                "D1",
                4.38,
                "D2",
                2.16,
                "D3",
                1.46,
                "D4",
                1
            };
            TransmissionRatios[] = {"High", 11.55};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.9;
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "RHS_T80B_SUSL_1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                side = "left";
                steering = 0;
                width = 0.396;
                mass = 188;
                MOI = 14.0783;
                maxBrakeTorque = 10000;
                sprungMass = 3833.33;
                springStrength = 254000;
                springDamperRate = 11000;
                maxDroop = 0.14;
                maxCompression = 0.14;
                dampingRate = 1364;
                dampingRateInAir = 1364;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 72000;
                frictionVsSlipGraph[] = {{0, 0.4}, {0.18, 1}, {0.7, 0.75}};
            };
            class L3: L2 {
                boneName = "RHS_T80B_SUSL_3";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "RHS_T80B_SUSL_5";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "RHS_T80B_SUSL_7";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "RHS_T80B_SUSL_9";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "RHS_T80B_SUSL_11";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
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
                boneName = "RHS_T80B_SUSR_1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3: R2 {
                boneName = "RHS_T80B_SUSR_3";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2 {
                boneName = "RHS_T80B_SUSR_5";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2 {
                boneName = "RHS_T80B_SUSR_7";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2 {
                boneName = "RHS_T80B_SUSR_9";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7: R2 {
                boneName = "RHS_T80B_SUSR_11";
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
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80UE1";
        model = "\rhsafrf\addons\rhs_t80u\rhs_t80ue1.p3d";
        picture = "\rhsafrf\addons\rhs_t80\data\icon\rhs_t80ue_pic_ca.paa";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02b_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa"};
        class textureSources: textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                factions[] = {};
                textures[] = {"rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02b_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa"};
            };
            class tricolor: standard {
                displayName = "3-Color Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_01_co.paa", "rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_02b_co.paa", "rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_03_co.paa"};
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
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gun = "RHS_T80B_com_Gun";
                        animationSourceGun = "obsGun";
                        gunnerAction = "rhs_t80u_commander_out";
                        gunnerInAction = "rhs_t80u_commander_in";
                    };
                };
                weapons[] = {
                    "rhs_weap_2a46m_4",
                    "rhs_weap_pkt",
                    "rhs_weap_902a",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm46_10",
                    "rhs_mag_3bk31_8",
                    "rhs_mag_3of26_6",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                turretInfoType = "RHS_RscWeaponPlissa_FCS";
                class OpticsIn {
                    class Periscope {
                        camPos = "view_periscope";
                        hitpoint = "Hit_Optic_Periscope";
                        opticsDisplayName = "PERISCOPE";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        initFov = 0.466667;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class day1: Periscope {
                        camPos = "view_1g46";
                        hitpoint = "Hit_Optic_1G46";
                        opticsDisplayName = "DAY";
                        initFov = 0.179487;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
                    };
                    class day2: day1 {
                        opticsDisplayName = "DAYZOOM";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                        visionMode[] = {"Normal"};
                    };
                    class thermal1: day1 {
                        camPos = "view_ESSA";
                        hitpoint = "Hit_Optic_ESSA";
                        opticsDisplayName = "TI1";
                        initFov = 0.466667;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        visionMode[] = {"Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
                    };
                    class thermal2: thermal1 {
                        opticsDisplayName = "TI2";
                        initFov = 0.155556;
                        minFov = 0.155556;
                        maxFov = 0.155556;
                    };
                    class thermal3: thermal2 {
                        opticsDisplayName = "TI3";
                        initFov = 0.0388889;
                        minFov = 0.0388889;
                        maxFov = 0.0388889;
                    };
                    class thermal4: thermal3 {
                        opticsDisplayName = "AUTOTRACK";
                        directionStabilized = 1;
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
            };
        };
        class AnimationSources: AnimationSources {
            class kshield_unhide {
                source = "user";
                animPeriod = 0.0000000001;
            };
            class kdeck_unhide: kshield_unhide {};
            class sideskirt_unhide: kshield_unhide {};
            class fbskirt_unhide: kshield_unhide {};
            class ftskirt_unhide: kshield_unhide {};
            class log_unhide: kshield_unhide {};
            class snorkel_unhide: kshield_unhide {};
            class nsvtHide: kshield_unhide {};
            class era_1_source {
                source = "Hit";
                hitpoint = "era_1_hitpoint";
            };
            class era_2_source {
                source = "Hit";
                hitpoint = "era_2_hitpoint";
            };
            class era_3_source {
                source = "Hit";
                hitpoint = "era_3_hitpoint";
            };
            class era_4_source {
                source = "Hit";
                hitpoint = "era_4_hitpoint";
            };
            class era_5_source {
                source = "Hit";
                hitpoint = "era_5_hitpoint";
            };
            class era_6_source {
                source = "Hit";
                hitpoint = "era_6_hitpoint";
            };
            class era_7_source {
                source = "Hit";
                hitpoint = "era_7_hitpoint";
            };
            class era_8_source {
                source = "Hit";
                hitpoint = "era_8_hitpoint";
            };
            class era_9_source {
                source = "Hit";
                hitpoint = "era_9_hitpoint";
            };
            class era_10_source {
                source = "Hit";
                hitpoint = "era_10_hitpoint";
            };
            class era_11_source {
                source = "Hit";
                hitpoint = "era_11_hitpoint";
            };
            class era_12_source {
                source = "Hit";
                hitpoint = "era_12_hitpoint";
            };
            class era_13_source {
                source = "Hit";
                hitpoint = "era_13_hitpoint";
            };
            class era_14_source {
                source = "Hit";
                hitpoint = "era_14_hitpoint";
            };
            class era_15_source {
                source = "Hit";
                hitpoint = "era_15_hitpoint";
            };
            class era_16_source {
                source = "Hit";
                hitpoint = "era_16_hitpoint";
            };
            class era_17_source {
                source = "Hit";
                hitpoint = "era_17_hitpoint";
            };
            class era_18_source {
                source = "Hit";
                hitpoint = "era_18_hitpoint";
            };
            class era_19_source {
                source = "Hit";
                hitpoint = "era_19_hitpoint";
            };
            class era_20_source {
                source = "Hit";
                hitpoint = "era_20_hitpoint";
            };
            class era_21_source {
                source = "Hit";
                hitpoint = "era_21_hitpoint";
            };
            class era_22_source {
                source = "Hit";
                hitpoint = "era_22_hitpoint";
            };
            class era_23_source {
                source = "Hit";
                hitpoint = "era_23_hitpoint";
            };
            class era_24_source {
                source = "Hit";
                hitpoint = "era_24_hitpoint";
            };
            class era_25_source {
                source = "Hit";
                hitpoint = "era_25_hitpoint";
            };
            class era_26_source {
                source = "Hit";
                hitpoint = "era_26_hitpoint";
            };
            class era_27_source {
                source = "Hit";
                hitpoint = "era_27_hitpoint";
            };
            class era_28_source {
                source = "Hit";
                hitpoint = "era_28_hitpoint";
            };
            class era_29_source {
                source = "Hit";
                hitpoint = "era_29_hitpoint";
            };
            class era_30_source {
                source = "Hit";
                hitpoint = "era_30_hitpoint";
            };
            class era_31_source {
                source = "Hit";
                hitpoint = "era_31_hitpoint";
            };
            class era_32_source {
                source = "Hit";
                hitpoint = "era_32_hitpoint";
            };
            class era_33_source {
                source = "Hit";
                hitpoint = "era_33_hitpoint";
            };
            class era_34_source {
                source = "Hit";
                hitpoint = "era_34_hitpoint";
            };
            class era_35_source {
                source = "Hit";
                hitpoint = "era_35_hitpoint";
            };
            class era_36_source {
                source = "Hit";
                hitpoint = "era_36_hitpoint";
            };
            class smoketube_1_source: era_1_source {
                hitpoint = "smoketube_4_hitpoint";
            };
            class smoketube_2_source: era_1_source {
                hitpoint = "smoketube_2_hitpoint";
            };
            class smoketube_3_source: era_1_source {
                hitpoint = "smoketube_3_hitpoint";
            };
            class smoketube_4_source: era_1_source {
                hitpoint = "smoketube_4_hitpoint";
            };
            class smoketube_5_source: era_1_source {
                hitpoint = "smoketube_5_hitpoint";
            };
            class smoketube_6_source: era_1_source {
                hitpoint = "smoketube_6_hitpoint";
            };
            class smoketube_7_source: era_1_source {
                hitpoint = "smoketube_7_hitpoint";
            };
            class smoketube_8_source: era_1_source {
                hitpoint = "smoketube_8_hitpoint";
            };
            class mud_1_source: era_1_source {
                hitpoint = "mud_1_hitpoint";
            };
            class mud_2_source: era_1_source {
                hitpoint = "mud_2_hitpoint";
            };
            class mud_3_source: era_1_source {
                hitpoint = "mud_3_hitpoint";
            };
            class mud_4_source: era_1_source {
                hitpoint = "mud_4_hitpoint";
            };
            class mud_5_source: era_1_source {
                hitpoint = "mud_5_hitpoint";
            };
            class mud_6_source: era_1_source {
                hitpoint = "mud_6_hitpoint";
            };
            class mud_7_source: era_1_source {
                hitpoint = "mud_7_hitpoint";
            };
            class mud_8_source: era_1_source {
                hitpoint = "mud_8_hitpoint";
            };
            class recoil_source {
                source = "door";
                animPeriod = 6;
                initPhase = 0;
            };
            class reload_source {
                weapon = "rhs_weap_2a46m_4";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
        };
        class HitPoints: HitPoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e1";
                armorComponent = "e1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e1";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_2_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e2";
                armorComponent = "e2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e2";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e2";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_3_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e3";
                armorComponent = "e3";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e3";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e3";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_4_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e4";
                armorComponent = "e4";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e4";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e4";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_5_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e5";
                armorComponent = "e5";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e5";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e5";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_6_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e6";
                armorComponent = "e6";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e6";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e6";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_7_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e7";
                armorComponent = "e7";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e7";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e7";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_8_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e8";
                armorComponent = "e8";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e8";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e8";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_9_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e9";
                armorComponent = "e9";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e9";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e9";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_10_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e10";
                armorComponent = "e10";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e10";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e10";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_11_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e11";
                armorComponent = "e11";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e11";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e11";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_12_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e12";
                armorComponent = "e12";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e12";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e12";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_13_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e13";
                armorComponent = "e13";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e13";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e13";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_14_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e14";
                armorComponent = "e14";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e14";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e14";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_15_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e15";
                armorComponent = "e15";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e15";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e15";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_16_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e16";
                armorComponent = "e16";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e16";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e16";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_17_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e17";
                armorComponent = "e17";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e17";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e17";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_18_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e18";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e18";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_19_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e19";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e19";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_20_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e20";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e20";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_21_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e21";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e21";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_22_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e22";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e22";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_23_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e23";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e23";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_24_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e24";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e24";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_25_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e25";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e25";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_26_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e26";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e26";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_27_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e27";
                armorComponent = "e27";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e27";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e27";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_28_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e28";
                armorComponent = "e28";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e28";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e28";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_29_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e29";
                armorComponent = "e29";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e29";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e29";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e29";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e29";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_30_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e30";
                armorComponent = "e30";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e30";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e30";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e30";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e30";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_31_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e31";
                armorComponent = "e31";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e31";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e31";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e31";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e31";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_32_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e32";
                armorComponent = "e32";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e32";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e32";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e32";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e32";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_33_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e33";
                armorComponent = "e33";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e33";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e33";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e33";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e33";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_34_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e34";
                armorComponent = "e34";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e34";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e34";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e34";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e34";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_35_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
                material = -1;
                name = "e35";
                armorComponent = "e35";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e35";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e35";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e35";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e35";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_36_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e36";
                armorComponent = "e36";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e36";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e36";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e36";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e36";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitHull: HitHull {
                armorComponent = "Hit_Carousel";
            };
            class HitEngine: HitEngine {
                armorComponent = "Hit_Engine";
            };
            class HitFuelTank_Left {
                armor = -80;
                material = -1;
                name = "Hit_FuelTank_Left";
                armorComponent = "Hit_FuelTank_Left";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.3;
                explosionShielding = 0;
                radius = 0.1;
            };
            class HitFuelTank_Right: HitFuelTank_Left {
                name = "Hit_FuelTank_Right";
                armorComponent = "Hit_FuelTank_Right";
            };
            class HitFuel {
                armor = 999;
                name = "Hit_Fuel";
                armorComponent = "Hit_Fuel";
                visual = "-";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.01;
                depends = "(HitFuelTank_Left+HitFuelTank_Right)*0.5";
            };
            class HitLTrack: HitLTrack {
                armor = -150;
                armorComponent = "Hit_TrackL";
                passThrough = 0;
                material = -1;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = -150;
                armorComponent = "Hit_TrackR";
                material = -1;
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class smoketube_4_hitpoint {
                armor = 1.2;
                material = -1;
                name = "smoketube4";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.08;
                explosionShielding = 0.007;
                depends = "era_23_hitpoint";
            };
            class smoketube_3_hitpoint: smoketube_4_hitpoint {
                name = "smoketube3";
                depends = "era_23_hitpoint + smoketube_4_hitpoint";
            };
            class smoketube_2_hitpoint: smoketube_4_hitpoint {
                name = "smoketube2";
                depends = "era_22_hitpoint + smoketube_3_hitpoint";
            };
            class smoketube_1_hitpoint: smoketube_4_hitpoint {
                name = "smoketube1";
                depends = "era_22_hitpoint + smoketube_2_hitpoint";
            };
            class smoketube_8_hitpoint: smoketube_4_hitpoint {
                name = "smoketube8";
                depends = "era_28_hitpoint";
            };
            class smoketube_7_hitpoint: smoketube_4_hitpoint {
                name = "smoketube7";
                depends = "era_28_hitpoint + smoketube_8_hitpoint";
            };
            class smoketube_6_hitpoint: smoketube_4_hitpoint {
                name = "smoketube6";
                depends = "era_27_hitpoint + smoketube_7_hitpoint";
            };
            class smoketube_5_hitpoint: smoketube_4_hitpoint {
                name = "smoketube5";
                depends = "era_27_hitpoint + smoketube_6_hitpoint";
            };
            class mud_1_hitpoint {
                armor = 0.8;
                material = -1;
                name = "mud1";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.08;
                explosionShielding = 0.007;
                depends = "era_21_hitpoint";
            };
            class mud_2_hitpoint: mud_1_hitpoint {
                name = "mud2";
                depends = "era_22_hitpoint";
            };
            class mud_3_hitpoint: mud_1_hitpoint {
                name = "mud3";
                depends = "era_23_hitpoint";
            };
            class mud_4_hitpoint: mud_3_hitpoint {
                name = "mud4";
                depends = "era_24_hitpoint";
            };
            class mud_5_hitpoint: mud_1_hitpoint {
                name = "mud5";
                depends = "era_26_hitpoint";
            };
            class mud_6_hitpoint: mud_5_hitpoint {
                name = "mud6";
                depends = "era_27_hitpoint";
            };
            class mud_7_hitpoint: mud_1_hitpoint {
                name = "mud7";
                depends = "era_28_hitpoint";
            };
            class mud_8_hitpoint: mud_7_hitpoint {
                name = "mud8";
                depends = "era_29_hitpoint";
            };
            class Hit_Optic_ESSA {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_Agava";
                visual = "vis_optic_ESSA";
                armorComponent = "Hit_Optic_ESSA";
                passThrough = 0;
            };
            class Hit_Optic_NSVT {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_NSVT";
                visual = "vis_optic_1pz3";
                armorComponent = "Hit_Optic_NSVT";
                passThrough = 0;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t80u\data\rhs_t80u_01.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_01.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_01.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_02.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_02.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_dam_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80u\data\rhs_destr_t80u_03.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A_dam.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {
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
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {
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
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {
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
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class rhs_ammoslot_4_type: rhs_ammoslot_4_type {
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
            class rhs_ammoslot_4: rhs_ammoslot_4 {};
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call RHS_fnc_t80_init;";
                fired = "_this call RHS_fnc_t80_autoloader;";
                killed = "[_this select 0,'rhs_Wreck_T80U_turret_F'] call rhs_fnc_turretBlow";
                engine = "[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
                getOut = "_this call rhs_fnc_hatchAbandon";
            };
        };
    };
    class rhs_t80um: rhs_t80u {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t80um.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_T80UM";
        model = "\rhsafrf\addons\rhs_t80u\rhs_t80um.p3d";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02b_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa"};
        class textureSources: textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                factions[] = {};
                textures[] = {"rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_02b_co.paa", "rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa"};
            };
            class tricolor: standard {
                displayName = "3-Color Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_01_co.paa", "rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_02b_co.paa", "rhsafrf\addons\rhs_t80u_camo\data\rhs_t80u_tricolor_03_co.paa"};
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
        class AnimationSources: AnimationSources {
            class era_36_source {
                source = "Hit";
                hitpoint = "era_36_hitpoint";
            };
        };
        class HitPoints: HitPoints {
            class era_36_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e36";
                armorComponent = "e36";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e36";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e36";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e36";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e36";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class Hit_Optic_Agava {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_Agava";
                visual = "vis_optic_Agava";
                armorComponent = "Hit_Optic_Agava";
                passThrough = 0;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
                turretInfoType = "RHS_RscWeaponAgava_FCS";
                class OpticsIn {
                    class Periscope {
                        camPos = "view_periscope";
                        hitpoint = "Hit_Optic_Periscope";
                        opticsDisplayName = "PERISCOPE";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        initFov = 0.466667;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class day1: Periscope {
                        camPos = "gunnerview";
                        hitpoint = "Hit_Optic_1G46";
                        opticsDisplayName = "DAY";
                        initFov = 0.179487;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
                    };
                    class day2: day1 {
                        opticsDisplayName = "DAYZOOM";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                        visionMode[] = {"Normal"};
                    };
                    class thermal1: day1 {
                        camPos = "view_Agava";
                        hitpoint = "Hit_Optic_Agava";
                        opticsDisplayName = "TI1";
                        initFov = 0.466667;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        visionMode[] = {"Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava";
                    };
                    class thermal2: thermal1 {
                        opticsDisplayName = "TI2";
                        initFov = 0.155556;
                        minFov = 0.155556;
                        maxFov = 0.155556;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava_4x";
                    };
                    class thermal3: thermal2 {
                        opticsDisplayName = "TI3";
                        initFov = 0.0388889;
                        minFov = 0.0388889;
                        maxFov = 0.0388889;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava_18x";
                    };
                };
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {
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
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {
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
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {
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
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class rhs_ammoslot_4_type: rhs_ammoslot_4_type {
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
            class rhs_ammoslot_4: rhs_ammoslot_4 {};
            class rhs_hideNSVT: rhs_hideNSVT {};
        };
    };
    class ThingX;
    class rhs_Wreck_T80_turret_F: ThingX {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Wreck_T80_turret_F.paa";
        mapSize = 8.56;
        author = "RHS";
        reversed = 1;
        scope = 2;
        scopeCurator = 2;
        displayName = "T-80 Wreck (Turret)";
        model = "\rhsafrf\addons\rhs_t80\T80_destTurret";
        icon = "iconObject_1x2";
        vehicleClass = "Wreck";
        destrType = "DestructNo";
    };
    class rhs_Wreck_T80u_turret_F: rhs_Wreck_T80_turret_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Wreck_T80u_turret_F.paa";
        displayName = "T-80U Wreck (Turret)";
        model = "\rhsafrf\addons\rhs_t80u\T80u_destTurret";
    };
};
