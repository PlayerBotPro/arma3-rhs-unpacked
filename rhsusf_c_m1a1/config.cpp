class CfgPatches {
    class rhsusf_c_m1a1 {
        units[] = {
            "rhsusf_m1a1aimwd_usarmy",
            "rhsusf_m1a1aimd_usarmy",
            "rhsusf_m1a1aim_tuski_wd",
            "rhsusf_m1a1aim_tuski_d",
            "rhsusf_m1a1hc_wd",
            "rhsusf_m1a1fep_wd",
            "rhsusf_m1a1fep_d",
            "rhsusf_m1a1fep_od"
        };
        weapons[] = {};
        requiredVersion = 1.64;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops", "rhsusf_c_heavyweapons"};
        name = "M1A1 Tanks";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored {
    class Wide;
    class Medium;
    class Narrow;
};
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;
class RscInGameUI {
    class RscUnitInfo;
    class RHS_RscWeaponM1_Commander: RscUnitInfo {
        idd = 300;
        onLoad = "if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this spawn RHS_fnc_M1_Comm";
        controls[] = {"CA_Zeroing"};
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class M1_comm {
                file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_m1_comm.sqf";
                description = "Commander M2 Script for M1 Abrams series";
            };
            class M1_init {
                file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_m1_init.sqf";
                description = "M1 Abrams Init";
            };
            class M1_damage {
                file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_m1_damage.sqf";
                description = "M1 Abrams Damage workaround";
            };
            class M1_defineLoadout {
                file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\defineLoadout.sqf";
                description = "M1 Abrams Init";
            };
            class engineStartupDelay {
                file = "\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_engineStart.sqf";
                description = "Engine startup delay";
            };
        };
    };
};
class CfgSounds {
    class RHSUSF_Error {
        name = "Tank beep";
        sound[] = {"\rhsusf\addons\rhsusf_c_m1a1\scripts\alarm_loop1.wss", 0.3548134, 1};
        titles[] = {};
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_M1A1_Driver = "RHS_M1A1_Driver";
        RHS_M1A1_Loader_In = "RHS_m1a1_loader_In";
        RHS_M1A1_Loader_Out = "vehicle_turnout_2_Idle";
    };
    class Actions {
        class CargoActions;
        class rhs_m1a1_loader_in_actions: CargoActions {
            RHS_m1a1_loader_out = "rhs_m1a1_loader_turnout";
        };
        class RifleStandActions;
        class FFV_BaseActions: RifleStandActions {
            RHS_m1a1_loader_in = "RHS_m1a1_loader_turnin";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_CrewIn_Base: Crew {};
        class RHS_M1A1_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_c_m1a1\anims\rhs_m1a1_driver";
            interpolateTo[] = {"RHS_M1A1_KIA_Driver", 1};
        };
        class RHS_M1A1_KIA_Driver: DefaultDie {
            file = "\rhsusf\addons\rhsusf_c_m1a1\anims\rhs_m1a1_driver";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_m1a1_loader_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_m1a1\anims\rhs_m1a1_loader_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_m1a1_loader_in: RHS_CrewIn_Base {
            actions = "rhs_m1a1_loader_in_actions";
            file = "rhsusf\addons\rhsusf_c_m1a1\anims\rhs_m1a1_loader_in.rtm";
            interpolateTo[] = {
                "RHS_m1a1_loader_in_Dead",
                1,
                "RHS_m1a1_loader_turnout",
                0.1
            };
            interpolateFrom[] = {"RHS_m1a1_loader_turnin", 0.1};
            variantAfter[] = {5, 5, 5};
        };
        class RHS_m1a1_loader_turnout: Crew {
            file = "rhsusf\addons\rhsusf_c_m1a1\anims\rhs_m1a1_loader_turnout.rtm";
            speed = 1.25;
            looped = 0;
            minplaytime = 0.8;
            InterpolateTo[] = {"vehicle_turnout_2_Idle", 1.1};
            ConnectTo[] = {"vehicle_turnout_2_Idle", 1};
            boundingSphere = 3;
            interpolationspeed = 3.2;
        };
        class RHS_m1a1_loader_turnin: RHS_m1a1_loader_turnout {
            file = "rhsusf\addons\rhsusf_c_m1a1\anims\rhs_m1a1_loader_turnin.rtm";
            speed = 0.65;
            interpolateFrom[] = {
                "RHS_m1a1_loader_turnout",
                1,
                "vehicle_turnout_2_idle_unarmed",
                1,
                "vehicle_turnout_2_Idle",
                1
            };
            connectTo[] = {"RHS_m1a1_loader_in", 1};
            interpolateTo[] = {"RHS_m1a1_loader_in_Dead", 1};
            variantsAI[] = {"RHS_m1a1_loader_in", 1};
            variantsPlayer[] = {"RHS_m1a1_loader_in", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            interpolationspeed = 2;
        };
    };
};
class CfgSoundSets {
    class RHSUSF_M1_Engine_RMP0_EXT_SoundSet {
        soundShaders[] = {"RHSUSF_M1_Engine_RMP0_EXT_SoundShader"};
        volumeFactor = 3.5;
        spatial = 1;
        loop = 1;
    };
    class RHSUSF_M1_Engine_RMP1_EXT_SoundSet {
        soundShaders[] = {"RHSUSF_M1_Engine_RMP1_EXT_SoundShader"};
        volumeFactor = 1.5;
        spatial = 1;
        loop = 1;
    };
    class RHSUSF_M1_Engine_RMP2_EXT_SoundSet {
        soundShaders[] = {"RHSUSF_M1_Engine_RMP2_EXT_SoundShader"};
        volumeFactor = 1.5;
        spatial = 1;
        loop = 1;
    };
    class RHSUSF_M1_Engine_RMP3_EXT_SoundSet {
        soundShaders[] = {"RHSUSF_M1_Engine_RMP3_EXT_SoundShader"};
        volumeFactor = 1.5;
        spatial = 1;
        loop = 1;
    };
    class RHSUSF_M1_Engine_RMP4_EXT_SoundSet {
        soundShaders[] = {"RHSUSF_M1_Engine_RMP4_EXT_SoundShader"};
        volumeFactor = 1.5;
        spatial = 1;
        loop = 1;
    };
    class RHSUSF_M1_EngineBurst_EXT_SoundSet {
        soundShaders[] = {"RHSUSF_M1_EngineBurst_EXT_SoundShader"};
        volumeFactor = 1;
        playTrigger = "thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1";
        spatial = 1;
        loop = 0;
    };
};
class cfgSoundShaders {
    class RHSUSF_M1_Engine_RMP0_EXT_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_m1a1\sounds\m1eng_high", 1}};
        frequency = "1 * (1 + 1 * ((rpm factor [1300,	3300]) - 0))";
        volume = "engineOn * 1.7 * (rpm factor [600,	1200])* (rpm interpolate [1600,2500,1,0.3])";
        range = 100;
    };
    class RHSUSF_M1_Engine_RMP1_EXT_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble", 1}};
        frequency = "1 * (1 + 1 * ((rpm factor [1200,	3300]) - (1800 - 1100)/(3300 - 1100)))";
        volume = "engineOn * 2 * (((rpm factor [1200,	3300]) factor[ 0 + (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2, (1800 - 1100)/(3300 - 1100) - (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2]) * ((rpm factor [1200,	3300]) factor[ (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]))";
        range = 300;
    };
    class RHSUSF_M1_Engine_RMP2_EXT_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble", 1}};
        frequency = "1 * (1 + 1 * ((rpm factor [1200,	3300]) - (2200 - 1100)/(3300 - 1100)))";
        volume = "engineOn * 2 * (((rpm factor [1200,	3300]) factor[ (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200,	3300]) factor[ (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]))";
        range = 325;
    };
    class RHSUSF_M1_Engine_RMP3_EXT_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble", 1}};
        frequency = "1 * (1 + 1 * ((rpm factor [1200,	3300]) - (3000 - 1100)/(3300 - 1100)))";
        volume = "engineOn * 2 * (((rpm factor [1200,	3300]) factor[ (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200,	3300]) factor[ 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2]))";
        range = 325;
    };
    class RHSUSF_M1_Engine_RMP4_EXT_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble", 1}};
        frequency = "1 * (1 + 1 * ((rpm factor [1200,	3300]) - 1))";
        volume = "engineOn * 2 * ((rpm factor [1200,	3300]) factor[ (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2])";
        range = 350;
    };
    class RHSUSF_M1_EngineBurst_EXT_SoundShader {
        samples[] = {{"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1", 1}, {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1", 1}, {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1", 1}};
        frequency = 1;
        volume = 1;
        range = 250;
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
    };
    class MBT_01_base_F: Tank_F {
        class EventHandlers;
    };
    class rhsusf_m1a1tank_base: MBT_01_base_F {
        dlc = "RHS_USAF";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        category = "Armored";
        destrType = "DestructDefault";
        displayName = "$STR_M1A1AIM_Name";
        accuracy = 0.3;
        model = "\rhsusf\addons\rhsusf_m1a1\m1a1aim";
        picture = "\rhsusf\addons\rhsusf_m1a1\icons\M1A1SIDE_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_m1a1\icons\M1A1AIM.paa";
        typicalCargo[] = {};
        side = 1;
        unitInfoType = "RHSUSF_RscUnitInfoWestTank";
        driverOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_m1_triplex";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        cargoAction[] = {"passenger_flatground_leanleft"};
        transportSoldier = 0;
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        simulation = "tankX";
        normalSpeedForwardCoef = 0.6;
        slowSpeedForwardCoef = 0.45;
        fuelCapacity = 20;
        maxSpeed = 66;
        tankTurnForce = 750000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 3.5;
        accelAidForceYOffset = -3;
        accelAidForceSpd = 2.83;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        torqueCurve[] = {{0.333333, 1}, {1, 0.701027}};
        engineMOI = 15;
        enginePower = 1120;
        peakTorque = 5355;
        minOmega = 100;
        maxOmega = 314.16;
        idleRPM = 1000;
        redRPM = 3000;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        thrustDelay = 0;
        clutchStrength = 35;
        engineLosses = 25;
        transmissionLosses = 15;
        latency = 1.3;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.333333,
            0.333333,
            0,
            0.993333,
            0.333333,
            0.993333,
            0.633333,
            0.983333,
            0.733333,
            0.983333,
            0.766667,
            0.983333,
            0.733333
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -1.67,
                "N",
                0,
                "D1",
                4.85,
                "D2",
                2.65,
                "D3",
                1.48,
                "D4",
                1,
                "D5",
                0.79
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
                steering = 0;
                width = 0.477;
                mass = 150;
                MOI = 10.83;
                maxDroop = 0.18;
                maxCompression = 0.18;
                maxBrakeTorque = 9000;
                sprungMass = 4642.86;
                springStrength = 584000;
                springDamperRate = 15000;
                dampingRate = 205;
                dampingRateInAir = 205;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 60000;
                frictionVsSlipGraph[] = {{0, 0.75}, {0.18, 1}, {0.7, 0.5}};
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
            class R8: R2 {
                boneName = "wheel_podkolop7";
                center = "wheel_2_8_axis";
                boundary = "wheel_2_8_bound";
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
        soundEngineOnInt[] = {
            "rhsusf\addons\rhsusf_m1a1\sounds\m1start",
            1.4125376,
            1,
            200
        };
        soundEngineOffInt[] = {
            "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_stop",
            1.4125376,
            1,
            200
        };
        soundEngineOnExt[] = {
            "rhsusf\addons\rhsusf_m1a1\sounds\m1start",
            3.1622777,
            1,
            200
        };
        soundEngineOffExt[] = {
            "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_ext_stop",
            3.1622777,
            1,
            200
        };
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_ext_rpm1",
                    2.818383,
                    1,
                    150
                };
                frequency = "0.9	+	((rpm/	3000) factor[(850/	3000),(1200/	3000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(750/	3000),(990/	3000)])	*	((rpm/	3000) factor[(1100/	3000),(1000/	3000)]))";
            };
            class Engine {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",
                    3.5481339,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(970/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1450/	3000),(1300/	3000)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm3",
                    2.818383,
                    1,
                    240
                };
                frequency = "0.8	+		((rpm/	3000) factor[(1300/	3000),(1500/	3000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(1350/	3000),(1550/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1750/	3000)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm4",
                    2.5118864,
                    1,
                    280
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1400/	3000),(1900/	3000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(1750/	3000),(2050/	3000)])	*	((rpm/	3000) factor[(2450/	3000),(2300/	3000)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm5",
                    2.2387211,
                    1,
                    320
                };
                frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(2700/	3000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(2350/	3000),(2550/	3000)])	*	((rpm/	3000) factor[(2770/	3000),(2600/	3000)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm6",
                    1.9952624,
                    1,
                    360
                };
                frequency = "0.8	+	((rpm/	3000) factor[(2600/	3000),(3000/	3000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(2550/	3000),(2800/	3000)])	*	((rpm/	3000) factor[(3050/	3000),(2950/	3000)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm7",
                    1.7782794,
                    1,
                    420
                };
                frequency = "0.95	+	((rpm/	3000) factor[(2900/	3000),(3100/	3000)])*0.15";
                volume = "engineOn*camPos*((rpm/	3000) factor[(2850/	3000),(3100/	3000)])";
            };
            class IdleThrust {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1",
                    1.9952624,
                    1,
                    200
                };
                frequency = "0.9	+	((rpm/	3000) factor[(850/	3000),(1200/	3000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(750/	3000),(990/	3000)])	*	((rpm/	3000) factor[(1100/	3000),(1000/	3000)]))";
            };
            class EngineThrust {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm2",
                    1.7782794,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(970/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1450/	3000),(1300/	3000)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm3",
                    1.5848932,
                    1,
                    280
                };
                frequency = "0.8	+		((rpm/	3000) factor[(1300/	3000),(1500/	3000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1350/	3000),(1550/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1750/	3000)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm4",
                    1.4125376,
                    1,
                    320
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1400/	3000),(1900/	3000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1750/	3000),(2050/	3000)])	*	((rpm/	3000) factor[(2450/	3000),(2300/	3000)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm5",
                    1.2589254,
                    1,
                    360
                };
                frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(2700/	3000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2350/	3000),(2550/	3000)])	*	((rpm/	3000) factor[(2770/	3000),(2600/	3000)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm6",
                    1,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	3000) factor[(2600/	3000),(3000/	3000)])*0.3";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2550/	3000),(2800/	3000)])	*	((rpm/	3000) factor[(3050/	3000),(2950/	3000)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm7",
                    1.2589254,
                    1,
                    450
                };
                frequency = "0.9	+	((rpm/	3000) factor[(2900/	3000),(3100/	3000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2850/	3000),(3100/	3000)])";
            };
            class Idle_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2", 2.818383, 1};
                frequency = "0.9	+	((rpm/	3000) factor[(850/	3000),(1200/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(750/	3000),(990/	3000)])	*	((rpm/	3000) factor[(1100/	3000),(1000/	3000)]))";
            };
            class Engine_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2", 2.5118864, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(970/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1450/	3000),(1300/	3000)]))";
            };
            class Engine1_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2", 2.5118864, 1};
                frequency = "0.8	+		((rpm/	3000) factor[(1300/	3000),(1500/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1350/	3000),(1550/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1750/	3000)]))";
            };
            class Engine2_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2", 2.2387211, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1400/	3000),(1900/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1750/	3000),(2050/	3000)])	*	((rpm/	3000) factor[(2450/	3000),(2300/	3000)]))";
            };
            class Engine3_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2", 1.9952624, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(2700/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(2350/	3000),(2550/	3000)])	*	((rpm/	3000) factor[(2770/	3000),(2600/	3000)]))";
            };
            class Engine4_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2", 1.7782794, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(2600/	3000),(3000/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(2550/	3000),(2800/	3000)])	*	((rpm/	3000) factor[(3050/	3000),(2950/	3000)]))";
            };
            class Engine5_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm3", 1.7782794, 1};
                frequency = "0.95	+	((rpm/	3000) factor[(2900/	3000),(3100/	3000)])*0.15";
                volume = "engineOn*(1-camPos)*((rpm/	3000) factor[(2850/	3000),(3100/	3000)])";
            };
            class IdleThrust_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm1", 1.9952624, 1};
                frequency = "0.9	+	((rpm/	3000) factor[(850/	3000),(1200/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(750/	3000),(990/	3000)])	*	((rpm/	3000) factor[(1100/	3000),(1000/	3000)]))";
            };
            class EngineThrust_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm2", 1.9952624, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(970/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1450/	3000),(1300/	3000)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm3", 1.7782794, 1};
                frequency = "0.8	+		((rpm/	3000) factor[(1300/	3000),(1500/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1350/	3000),(1550/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1750/	3000)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm4", 1.5848932, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1400/	3000),(1900/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1750/	3000),(2050/	3000)])	*	((rpm/	3000) factor[(2450/	3000),(2300/	3000)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm5", 1.4125376, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(2700/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2350/	3000),(2550/	3000)])	*	((rpm/	3000) factor[(2770/	3000),(2600/	3000)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm6", 1.4125376, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(2600/	3000),(3000/	3000)])*0.3";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2550/	3000),(2800/	3000)])	*	((rpm/	3000) factor[(3050/	3000),(2950/	3000)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm7", 1.4125376, 1};
                frequency = "0.9	+	((rpm/	3000) factor[(2900/	3000),(3100/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2850/	3000),(3100/	3000)])";
            };
            soundSetsExt[] = {
                "RHSUSF_M1_Engine_RMP0_EXT_SoundSet",
                "RHSUSF_M1_Engine_RMP1_EXT_SoundSet",
                "RHSUSF_M1_Engine_RMP2_EXT_SoundSet",
                "RHSUSF_M1_Engine_RMP3_EXT_SoundSet",
                "RHSUSF_M1_Engine_RMP4_EXT_SoundSet",
                "Tank_Tracks1_01_EXT_SoundSet",
                "Tank_Tracks1_02_EXT_SoundSet",
                "Tank_Tracks1_03_EXT_SoundSet",
                "Tank_Tracks1_04_EXT_SoundSet",
                "Tank_Tracks1_05_EXT_SoundSet",
                "Tank_Hard_Scrape_EXT_SoundSet",
                "Tank_Hard_Slip_EXT_SoundSet"
            };
            soundSetsInt[] = {
                "RHSUSF_M1_Engine_RMP0_EXT_SoundSet",
                "MBT_03_Engine_RMP1_INT_SoundSet",
                "MBT_03_Engine_RMP2_INT_SoundSet",
                "MBT_03_Engine_RMP3_INT_SoundSet",
                "MBT_03_Engine_RMP4_INT_SoundSet",
                "Tank_Tracks1_01_INT_SoundSet",
                "Tank_Tracks1_02_INT_SoundSet",
                "Tank_Tracks1_03_INT_SoundSet",
                "Tank_Tracks1_04_INT_SoundSet",
                "Tank_Tracks1_05_INT_SoundSet",
                "Tank_GenericRumble_INT_SoundSet",
                "Tank_GenericToneOn_INT_SoundSet",
                "Tank_GenericToneOff_INT_SoundSet",
                "Tank_Hard_Scrape_INT_SoundSet"
            };
        };
        driveOnComponent[] = {"Track_L", "Track_R", "slide"};
        tracksSpeed = -1.35;
        wheelCircumference = 2.375;
        attenuationEffectType = "TankAttenuation";
        extCameraPosition[] = {0, 2, -11};
        reportOwnPosition = 1;
        dustFrontLeftPos = "wheel_1_4_bound";
        dustFrontRightPos = "wheel_2_4_bound";
        dustBackLeftPos = "wheel_1_7_bound";
        dustBackRightPos = "wheel_2_7_bound";
        cost = 1500000;
        damageResistance = 0.02;
        crewVulnerable = 0;
        incomingMissileDetectionSystem = 0;
        driverAction = "driver_apcwheeled2_out";
        driverInAction = "RHS_M1A1_Driver";
        driverDoor = "hatchD";
        forceHideDriver = 0;
        driverForceOptics = 1;
        LODDriverTurnedIn = 0;
        LODDriverTurnedOut = 0;
        LODDriverOpticsIn = 0;
        viewDriverInExternal = 1;
        viewCargoShadow = 1;
        viewCargoShadowDiff = 1;
        viewCargoShadowAmb = 1;
        armor = 600;
        armorStructural = 400;
        explosionShielding = 150;
        crewExplosionProtection = 0.9999995;
        minTotalDamageThreshold = 0.5;
        class HitPoints: HitPoints {
            class Armor_Composite_40 {
                armor = 999;
                material = -1;
                name = "Armor_CE_40_Hit";
                armorComponent = "Armor_CE_40";
                simulation = "RHS_Composite_40";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_50 {
                armor = 999;
                material = -1;
                name = "Armor_CE_50_Hit";
                armorComponent = "Armor_CE_50";
                simulation = "RHS_Composite_50";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
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
            class HitFuelTank_Left {
                armor = -80;
                material = -1;
                name = "Hit_FuelTank_Left";
                armorComponent = "Hit_FuelTank_Left";
                visual = "-";
                passThrough = 0;
                minimalHit = -0.2;
                explosionShielding = 0;
                radius = 0.1;
            };
            class HitFuelTank_Right: HitFuelTank_Left {
                name = "Hit_FuelTank_Right";
                armorComponent = "Hit_FuelTank_Right";
            };
            class HitFuel {
                armor = 999;
                material = -1;
                name = "Hit_Fuel";
                visual = "-";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.01;
                depends = "(HitFuelTank_Left+HitFuelTank_Right)*0.5";
            };
            class HitAmmoHull {
                name = "Hit_AmmoHull";
                armorComponent = "Hit_AmmoHull";
                armor = -100;
                material = -1;
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0;
                radius = 0.15;
            };
            class HitAmmo {
                name = "Hit_Ammo";
                armorComponent = "Hit_AmmoTurret";
                armor = -100;
                material = -1;
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0;
                radius = 0.15;
            };
            class HitHull: HitHull {
                armor = 0.8;
                material = -1;
                name = "Hit_Hull";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0;
                radius = 0.21;
                depends = "(HitAmmo factor [0.9,1])+(HitAmmoHull factor [0.9,1])";
            };
            class HitEngine: HitEngine {
                armor = -100;
                material = -1;
                name = "Hit_Engine";
                armorComponent = "Hit_Engine";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0.01;
                radius = 0.18;
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
                    class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1 {
                        position = "engine_smoke4";
                    };
                };
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
                name = "";
                visual = "vis_optic_Driver";
                armorComponent = "Hit_Optic_Driver";
                passThrough = 0;
            };
            class Hit_Optic_DVEA: Hit_Optic_Driver {
                visual = "vis_optic_DVEA";
                armorComponent = "Hit_Optic_DVEA";
            };
            class Hit_Optic_Driver_Rear: Hit_Optic_Driver {
                visual = "vis_optic_Driver_Rear";
                armorComponent = "Hit_Optic_Driver_Rear";
            };
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 4;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 30;
            };
            class _xx_rhsusf_mag_7x45acp_MHP {
                magazine = "rhsusf_mag_7x45acp_MHP";
                count = 3;
            };
            class _xx_rhsusf_mag_15Rnd_9x19_FMJ {
                magazine = "rhsusf_mag_15Rnd_9x19_FMJ";
                count = 12;
            };
            class _xx_rhs_mag_m67 {
                magazine = "rhs_mag_m67";
                count = 10;
            };
            class _xx_rhsusf_100Rnd_762x51 {
                magazine = "rhsusf_100Rnd_762x51";
                count = 5;
            };
            class _xx_rhs_M136_mag {
                magazine = "rhs_M136_mag";
                count = 2;
            };
            class _xx_rhs_mag_m18_green {
                magazine = "rhs_mag_m18_green";
                count = 2;
            };
            class _xx_rhs_mag_m18_red {
                magazine = "rhs_mag_m18_red";
                count = 2;
            };
            class _xx_rhs_mag_m18_purple {
                magazine = "rhs_mag_m18_purple";
                count = 2;
            };
            class _xx_rhs_mag_m18_yellow {
                magazine = "rhs_mag_m18_yellow";
                count = 2;
            };
            class _xx_rhs_mag_an_m8hc {
                magazine = "rhs_mag_an_m8hc";
                count = 2;
            };
            class _xx_rhs_mine_M19_mag {
                magazine = "rhs_mine_M19_mag";
                count = 2;
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
            class _xx_rhs_weap_m4_carryhandle {
                weapon = "rhs_weap_m4_carryhandle";
                count = 2;
            };
            class _xx_rhs_weap_M136 {
                weapon = "rhs_weap_M136";
                count = 2;
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
                        maxHorizontalRotSpeed = 1.8;
                        maxVerticalRotSpeed = 0.18;
                        stabilizedInAxes = 3;
                        soundServo[] = {
                            "A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
                            1,
                            1,
                            30
                        };
                        soundServoVertical[] = {
                            "A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
                            1,
                            1,
                            30
                        };
                        minElev = -10;
                        maxElev = 45;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        memoryPointGun = "usti hlavne3";
                        gunBeg = "usti hlavne3";
                        gunEnd = "konec hlavne3";
                        weapons[] = {"RHS_M2_Abrams_Commander", "rhsusf_weap_M250"};
                        magazines[] = {
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhsusf_mag_L8A3_12"
                        };
                        turretInfoType = "RHS_RscCWSS";
                        discreteDistance[] = {400};
                        discreteDistanceInitIndex = 0;
                        canUseScanners = 0;
                        showCrewAim = 0;
                        allowTabLock = 0;
                        memoryPointGunnerOutOptics = "commanderview";
                        memoryPointGunnerOptics = "commanderview";
                        gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
                        gunnerOutOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                        gunnerHasFlares = 1;
                        gunnerForceOptics = 1;
                        class ViewOptics: ViewOptics {
                            initFov = 0.155;
                            minFov = 0.034;
                            maxFov = 0.155;
                            visionMode[] = {"Normal", "NVG"};
                        };
                        LodTurnedOut = 0;
                        class OpticsIn {
                            class Wide: ViewOptics {
                                opticsDisplayName = "CWS";
                                initFov = 0.233333;
                                minFov = 0.233333;
                                maxFov = 0.233333;
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CWSS";
                                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                                hitpoint = "Hit_Optic_ComM2";
                            };
                            class Periscope: ViewOptics {
                                camPos = "commanderview2";
                                opticsDisplayName = "PERISCOPE";
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                                hitpoint = "Hit_Optic_ComPeriscope";
                            };
                        };
                        gunnerAction = "mbt2_slot2b_out";
                        gunnerInAction = "RHS_M1A1_Commander";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        gunnerDoor = "hatchC";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 0;
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
                            class Hit_Optic_ComPeriscope {
                                armor = -40;
                                explosionShielding = 0;
                                name = "";
                                visual = "vis_optic_ComPeriscope";
                                armorComponent = "Hit_Optic_ComPeriscope";
                                passThrough = 0;
                            };
                            class Hit_Optic_ComM2: Hit_Optic_ComPeriscope {
                                visual = "vis_optic_ComM2";
                                armorComponent = "Hit_Optic_ComM2";
                            };
                            class Hit_Optic_ComCWSS: Hit_Optic_ComPeriscope {
                                visual = "vis_optic_ComCWSS";
                                armorComponent = "Hit_Optic_ComCWSS";
                            };
                        };
                        selectionFireAnim = "zasleh3";
                    };
                    class Loader: CommanderOptics {
                        class HitPoints {
                            class Hit_Optic_LoaderPeriscope {
                                armor = -40;
                                explosionShielding = 0;
                                name = "";
                                visual = "vis_optic_LoaderPeriscope";
                                armorComponent = "Hit_Optic_LoaderPeriscope";
                                passThrough = 0;
                            };
                        };
                        isPersonTurret = 1;
                        lockWhenDriverOut = 0;
                        lodTurnedOut = 1200;
                        minTurn = -140;
                        maxTurn = 140;
                        stabilizedInAxes = 0;
                        gunnerAction = "RHS_M1A1_Loader_out";
                        gunnerInAction = "RHS_M1A1_Loader_in";
                        weapons[] = {};
                        magazines[] = {};
                        gunnerOutForceOptics = 0;
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        inGunnerMayFire = 1;
                        outGunnerMayFire = 1;
                        memoryPointGun = "usti hlavne5";
                        gunBeg = "usti hlavne5";
                        gunEnd = "konec hlavne5";
                        selectionFireAnim = "";
                        soundAttenuationTurret = "HeliAttenuationGunner";
                        disableSoundAttenuation = 0;
                        animationSourceHatch = "HatchGunner";
                        animationSourceBody = "LoaderVisorTurret";
                        animationSourceGun = "LoaderVisorGun";
                        body = "LoaderVisorTurret";
                        gun = "LoaderVisorGun";
                        animationSourceStickX = "";
                        animationSourceStickY = "";
                        commanding = -3;
                        primaryObserver = 0;
                        memoryPointsGetInGunner = "pos gunner";
                        memoryPointsGetInGunnerDir = "pos gunner dir";
                        gunnername = "Loader";
                        memoryPointGunnerOptics = "loadervisor_view";
                        soundServo[] = {"A3\sounds_f\dummysound", 0.000001, 1};
                        gunnerDoor = "hatchL";
                        proxyindex = 2;
                        class OpticsIn {
                            class Periscope: ViewOptics {
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
                                hitpoint = "Hit_Optic_LoaderPeriscope";
                            };
                        };
                    };
                    class LoaderMG: Loader {
                        proxyindex = 3;
                        dontCreateAi = 1;
                        cantCreateAI = 1;
                        isPersonTurret = 0;
                        canHideGunner = 0;
                        gunnername = "Loader MG";
                        gunnercompartments = "Compartment5";
                        animationSourceBody = "LoaderTurret";
                        animationSourceGun = "LoaderGun";
                        memoryPointGunnerOutOptics = "loaderview";
                        memoryPointGunnerOptics = "loaderview";
                        gunnerLeftHandAnimName = "Loader_Gun";
                        gunnerRightHandAnimName = "Loader_Gun";
                        animationSourceStickX = "LoaderTurret_Inertia";
                        animationSourceStickY = "LoaderGun_Inertia";
                        body = "LoaderTurret";
                        gun = "LoaderGun";
                        gunnerAction = "RHS_M1A2_CommanderOUT";
                        minTurn = -34;
                        maxTurn = 140;
                        LODOpticsIn = 1200;
                        LODOpticsOut = 1200;
                        class OpticsIn {};
                        class ViewOptics: ViewOptics {
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class ViewGunner: ViewOptics {};
                        selectionFireAnim = "zasleh5";
                        discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
                        discreteDistanceInitIndex = 2;
                        turretInfoType = "RHS_RscWeaponZeroing";
                        weapons[] = {"rhs_weap_m240_abrams"};
                        magazines[] = {"rhs_mag_762x51_M240_200", "rhs_mag_762x51_M240_200", "rhs_mag_762x51_M240_200"};
                    };
                };
                lockWhenDriverOut = 1;
                animationSourceHatch = "";
                memoryPointGun = "usti hlavne2";
                selectionFireAnim = "zaslehCoax";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                weapons[] = {"rhs_weap_m256", "rhs_weap_m240_abrams_coax", "rhs_weap_fcs"};
                magazines[] = {
                    "rhs_mag_M829A3",
                    "rhs_mag_M830A1",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                minElev = -10;
                maxElev = 22;
                initElev = 5;
                class TurnIn {
                    limitsArrayTop[] = {{22, -180}, {22, 180}};
                    limitsArrayBottom[] = {
                        {1.4, -180},
                        {0.7, -134.6867},
                        {-9.3683, -133.6867},
                        {-10, -53.8748},
                        {-5.8337, -27.0246},
                        {-7.2284, -15.3257},
                        {-9.4928, -10.6161},
                        {-8, 0},
                        {-9.4928, 10.6161},
                        {-7.2284, 15.3257},
                        {-5.8337, 27.0246},
                        {-10, 53.8748},
                        {-9.7173, 133.6372},
                        {0.7, 134.6867},
                        {1.4, 180}
                    };
                };
                soundServo[] = {
                    "rhsusf\addons\rhsusf_m1a1\sounds\traverse",
                    15,
                    1,
                    20
                };
                maxhorizontalrotspeed = 0.7;
                maxverticalrotspeed = 0.44;
                turretInfoType = "RHS_RscWeaponM1_FCS";
                discreteDistance[] = {};
                canUseScanners = 0;
                showCrewAim = 0;
                allowTabLock = 0;
                memoryPointsGetInGunner = "pos commander";
                memoryPointsGetInGunnerDir = "pos commander dir";
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
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        visionMode[] = {"Normal"};
                        thermalMode[] = {2, 3};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2";
                        hitpoint = "Hit_Optic_GPS";
                    };
                    class Medium: Wide {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
                        initFov = 0.07;
                        minFov = 0.07;
                        maxFov = 0.07;
                    };
                    class Wide_TI: Wide {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_ti";
                        visionMode[] = {"Ti"};
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        hitpoint = "Hit_Optic_GPS_TI";
                    };
                    class Wide2_TI: Wide_TI {
                        initFov = 0.116667;
                        minFov = 0.116667;
                        maxFov = 0.116667;
                    };
                    class Medium_TI: Wide_TI {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                        initFov = 0.0538462;
                        minFov = 0.0538462;
                        maxFov = 0.0538462;
                    };
                    class Medium2_TI: Wide_TI {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_3";
                        initFov = 0.028;
                        minFov = 0.028;
                        maxFov = 0.028;
                    };
                    class Narrow_TI: Wide_TI {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_4";
                        initFov = 0.014;
                        minFov = 0.014;
                        maxFov = 0.014;
                    };
                };
                gunnerAction = "mbt2_slot2a_out";
                gunnerInAction = "RHS_M1A1_Gunner";
                gunnerDoor = "hatchC";
                forceHideGunner = 1;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                startEngine = 0;
                LodTurnedOut = 0;
                class HitPoints {
                    class HitTurret {
                        armor = -160;
                        name = "vez";
                        armorComponent = "Hit_Turret";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = -0.24;
                        explosionShielding = 0.001;
                        radius = 0.18;
                        isTurret = 1;
                    };
                    class HitGun {
                        armor = -160;
                        name = "zbran";
                        armorComponent = "Hit_Gun";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = -0.15;
                        explosionShielding = 0;
                        radius = 0.12;
                        isGun = 1;
                    };
                    class Hit_GPS_HeadMirror {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "-";
                        armorComponent = "Hit_HeadMirror";
                        passThrough = 0;
                    };
                    class Hit_GPS_Optical: Hit_GPS_HeadMirror {
                        visual = "vis_optic_GPS";
                        armorComponent = "Hit_Optic_GPS";
                    };
                    class Hit_GPS_TIS: Hit_GPS_HeadMirror {
                        visual = "vis_optic_GPS_TI";
                        armorComponent = "Hit_Optic_GPS_TI";
                    };
                    class Hit_Optic_GPS: Hit_GPS_Optical {
                        visual = "-";
                        armorComponent = "-";
                        depends = "Hit_GPS_HeadMirror max Hit_GPS_Optical";
                    };
                    class Hit_Optic_GPS_TI: Hit_GPS_TIS {
                        visual = "-";
                        armorComponent = "-";
                        depends = "Hit_GPS_HeadMirror max Hit_GPS_TIS";
                    };
                };
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "",
            "",
            "",
            "",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
        };
        class textureSources {
            class woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
                };
            };
            class desert: woodland {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa"
                };
            };
        };
        textureList[] = {};
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aimtusk_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aimtusk_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aimtusk_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aimtusk_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aimtusk_wd_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aimtusk_wd_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aimtusk_wd_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aimtusk_wd_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_tuski_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_tuski_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_tuski_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_tuski_wd.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass_damage.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass_damage.rvmat"
            };
        };
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "TI"};
            thermalMode[] = {2, 3};
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
        };
        class DriverOpticsIn {
            class Wide: ViewOptics {
                camPos = "view_driver";
                opticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_m1_triplex";
                visionMode[] = {"Normal"};
                hitpoint = "Hit_Optic_Driver";
            };
            class DVE_Wide: Wide {
                opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
                visionMode[] = {"TI"};
                initFov = 1.07692;
                minFov = 1.07692;
                maxFov = 1.07692;
                hitpoint = "Hit_Optic_DVEA";
            };
            class DVS_Rear: DVE_Wide {
                opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE2_4x3";
                camPos = "view_rear";
                camDir = "view_rear_dir";
                hitpoint = "Hit_Optic_Driver_Rear";
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaustL1";
                direction = "exhaustL_Dir";
                effect = "RHS_ExhaustEffectTankGasBack";
            };
            class Exhaust1L {
                position = "exhaustL2";
                direction = "exhaustL_Dir";
                effect = "RHS_ExhaustEffectTankGasBack";
            };
            class Exhaust2 {
                position = "exhaustR1";
                direction = "exhaustR_Dir";
                effect = "RHS_ExhaustEffectTankGasBack";
            };
            class Exhaust2R {
                position = "exhaustR2";
                direction = "exhaustR_Dir";
                effect = "RHS_ExhaustEffectTankGasBack";
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
            class Right2: Right {
                position = "light_R_flare";
                useFlare = 1;
            };
            class Left2: Left {
                position = "light_L_flare";
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Left", "Left2"}, {"Right", "Right2"}};
        armorLights = 0.01;
        class AnimationSources {
            class IFF_Panels_Hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
                displayName = "hide IFF panels";
                mass = -20;
            };
            class Miles_Hide: IFF_Panels_Hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide MILES panels";
            };
            class muzzle_rot_CoaxMG {
                source = "ammorandom";
                weapon = "rhs_weap_m240_abrams_coax";
            };
            class muzzle_rot_hmg {
                source = "ammorandom";
                weapon = "RHS_M2_Abrams_Commander";
            };
            class muzzle_rot_cannon {
                source = "ammorandom";
                weapon = "rhs_weap_m256";
            };
            class recoil_source {
                source = "reload";
                weapon = "rhs_weap_m256";
            };
            class muzzle_rot_HMG2 {
                source = "ammorandom";
                weapon = "rhs_weap_m240_abrams";
            };
            class reload1 {
                source = "reload";
                weapon = "rhs_weap_m240_abrams";
            };
            class ReloadMagazine1 {
                source = "reloadmagazine";
                weapon = "rhs_weap_m240_abrams";
            };
            class Revolving1 {
                source = "revolving";
                weapon = "rhs_weap_m240_abrams";
            };
            class smoke_revolving_source {
                source = "revolving";
                weapon = "rhsusf_weap_M250";
            };
            class muzzle_hide_cannon: recoil_source {};
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
            class HatchL: HatchC {};
            class HatchD: HatchC {};
            class Unhide_vis_optic_d_ComCWSS {
                source = "hit";
                hitpoint = "Hit_Optic_ComCWSS";
            };
            class Unhide_vis_optic_d_ComM2 {
                source = "hit";
                hitpoint = "Hit_Optic_ComM2";
            };
            class Unhide_vis_optic_d_ComPeriscope {
                source = "hit";
                hitpoint = "Hit_Optic_ComPeriscope";
            };
            class Unhide_vis_optic_d_GPS {
                source = "hit";
                hitpoint = "Hit_Optic_GPS";
            };
            class Unhide_vis_optic_d_GPS_TI {
                source = "hit";
                hitpoint = "Hit_Optic_GPS_TI";
            };
            class Unhide_vis_optic_d_Driver {
                source = "hit";
                hitpoint = "Hit_Optic_Driver";
            };
            class Unhide_vis_optic_d_LoaderPeriscope {
                source = "hit";
                hitpoint = "Hit_Optic_LoaderPeriscope";
            };
        };
        class RenderTargets {
            class driverView1 {
                renderTarget = "rendertarget1";
                class Camera {
                    pointPosition = "dVis1P";
                    pointDirection = "dVis1D";
                    renderVisionMode = 0;
                    renderQuality = 4;
                    fov = 0.5;
                };
            };
            class driverView2 {
                renderTarget = "rendertarget0";
                class Camera {
                    pointPosition = "dVis2P";
                    pointDirection = "dVis2D";
                    renderVisionMode = 0;
                    renderQuality = 4;
                    fov = 0.5;
                };
            };
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
            class rhs_hideMiles {
                displayName = "Hide Miles Panel";
                property = "rhs_hideMiles";
                control = "CheckboxNumber";
                expression = "_this animate ['Miles_Hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_decalBarrel_type {
                displayName = "Define type of barrel art";
                tooltip = "Define type of barrel art. You can choose between desert & Woodland variants";
                property = "rhs_decalBarrel_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class BarrelArt_Abrams_D {
                        name = "Desert";
                        value = "BarrelArt_Abrams_D";
                        defaultValue = "BarrelArt_Abrams_D";
                    };
                    class BarrelArt_Abrams_WD {
                        name = "Woodland";
                        value = "BarrelArt_Abrams_WD";
                    };
                };
            };
            class rhs_decalBarrel {
                displayName = "Define barrel art";
                tooltip = "Define barrel art. Available numbers from 0 to 55, type number above 55 to clear that place";
                property = "rhs_decalBarrel";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cM1BarrelSymPlaces,  _this getVariable ['rhs_decalBarrel_type','BarrelArt_Abrams_WD'],_value] ] ] call rhsusf_fnc_decalsInit;};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_decalPlatoon_type {
                displayName = "Define type of platoon symbol";
                tooltip = "Define type of platoon symbol. You can choose between desert & Woodland variants";
                property = "rhs_decalPlatoon_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class ArmyPlt_Abrams_D {
                        name = "Desert";
                        value = "ArmyPlt_Abrams_D";
                        defaultValue = "ArmyPlt_Abrams_D";
                    };
                    class ArmyPlt_Abrams_WD {
                        name = "Woodland";
                        value = "ArmyPlt_Abrams_WD";
                    };
                };
            };
            class rhs_decalPlatoon {
                displayName = "Define platoon symbol";
                tooltip = "Define platoon symbol";
                property = "rhs_decalPlatoon";
                control = "Combo";
                expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cM1PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','ArmyPlt_Abrams_D'],_value] ] ] call rhsusf_fnc_decalsInit};";
                defaultValue = "-1";
                typeName = "Number";
                class values {
                    class Random {
                        name = "Random";
                        value = -1;
                        defaultValue = -1;
                    };
                    class Empty {
                        name = "Empty";
                        value = 0;
                        defaultValue = 0;
                    };
                    class Setting1 {
                        name = "1st Platoon, 1st Vehicle";
                        value = 1;
                        defaultValue = 1;
                    };
                    class Setting2 {
                        name = "1st Platoon, 2nd Vehicle";
                        value = 2;
                        defaultValue = 2;
                    };
                    class Setting3 {
                        name = "1st Platoon, 3rd Vehicle";
                        value = 3;
                        defaultValue = 3;
                    };
                    class Setting4 {
                        name = "1st Platoon, 4th Vehicle";
                        value = 4;
                        defaultValue = 4;
                    };
                    class Setting5 {
                        name = "2nd Platoon, 1st Vehicle";
                        value = 5;
                        defaultValue = 5;
                    };
                    class Setting6 {
                        name = "2nd Platoon, 2nd Vehicle";
                        value = 6;
                        defaultValue = 6;
                    };
                    class Setting7 {
                        name = "2nd Platoon, 3rd Vehicle";
                        value = 7;
                        defaultValue = 7;
                    };
                    class Setting8 {
                        name = "2nd Platoon, 4th Vehicle";
                        value = 8;
                        defaultValue = 8;
                    };
                    class Setting9 {
                        name = "3rd Platoon, 1st Vehicle";
                        value = 9;
                        defaultValue = 9;
                    };
                    class Setting10 {
                        name = "3rd Platoon, 2nd Vehicle";
                        value = 10;
                        defaultValue = 10;
                    };
                    class Setting11 {
                        name = "3rd Platoon, 3rd Vehicle";
                        value = 11;
                        defaultValue = 11;
                    };
                    class Setting12 {
                        name = "3rd Platoon, 4th Vehicle";
                        value = 12;
                        defaultValue = 12;
                    };
                };
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
                    class rhs_mag_M829A4 {
                        name = "M829A4 APFSDS-T";
                        value = "rhs_mag_M829A4_max";
                    };
                    class rhs_mag_M829A3 {
                        name = "M829A3 APFSDS-T";
                        value = "rhs_mag_M829A3";
                        defaultValue = "rhs_mag_M829A3_max";
                    };
                    class rhs_mag_M829A2 {
                        name = "M829A2 APFSDS-T";
                        value = "rhs_mag_M829A2_max";
                    };
                    class rhs_mag_M829A1 {
                        name = "M829A1 APFSDS-T";
                        value = "rhs_mag_M829A1_max";
                    };
                    class rhs_mag_M829 {
                        name = "M829 APFSDS-T";
                        value = "rhs_mag_M829_max";
                    };
                    class rhs_mag_M830 {
                        name = "M830 HEAT-FS";
                        value = "rhs_mag_M830_max";
                    };
                    class rhs_mag_M830A1 {
                        name = "M830A1 MPAT";
                        value = "rhs_mag_M830A1_max";
                    };
                    class rhs_mag_M1028 {
                        name = "M1028 Canister";
                        value = "rhs_mag_M1028_max";
                    };
                    class rhs_mag_M1147 {
                        name = "M1147 HE-FRAG";
                        value = "rhs_mag_M1147_max";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 36. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s'] spawn rhs_fnc_m1_defineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot";
                property = "rhs_ammoslot_2_type";
                defaultValue = "0";
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 36. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot";
                property = "rhs_ammoslot_3_type";
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 36. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
        };
        class UserActions {
            class LoaderGun_Use {
                displayName = "Use M240";
                position = "";
                radius = 4;
                onlyForplayer = 0;
                shortcut = "turnOut";
                condition = "this animationPhase 'HatchGunner'>0.5 and ((call rhsusf_fnc_findPlayer) == this turretUnit [0,1])";
                statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,2]];[this,[[0,1],true]] remoteExecCall ['lockTurret']";
            };
            class LoaderGun_Leave: LoaderGun_Use {
                displayName = "Leave M240";
                condition = "vehicle (call rhsusf_fnc_findPlayer) turretUnit [0,2] == (call rhsusf_fnc_findPlayer)";
                shortcut = "turnIn";
                statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,1]];[this,[[0,1],false]] remoteExecCall ['lockTurret']";
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                init = "_this call RHS_fnc_M1_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                getOut = "_this call rhs_fnc_M1_hatch";
                engine = "[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage";
            };
        };
    };
    class rhsusf_m1a1aimwd_usarmy: rhsusf_m1a1tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1aimwd_usarmy.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ucp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_M1A1AIM_Name";
    };
    class rhsusf_m1a1aimd_usarmy: rhsusf_m1a1tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1aimd_usarmy.paa";
        scope = 2;
        displayName = "$STR_M1A1AIM_Name";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ocp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"};
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionstextures[] = {
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa"
        };
    };
    class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1aim_tuski_wd.paa";
        model = "\rhsusf\addons\rhsusf_m1a1\m1a1aim_tuski";
        Icon = "\rhsusf\addons\rhsusf_m1a1\icons\M1A1AIMTUSKI.paa";
        picture = "\rhsusf\addons\rhsusf_m1a1\icons\M1A1TUSKSIDE_ca.paa";
        scope = 2;
        displayName = "$STR_M1A1AIMTUSKIwd_Name";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ucp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "",
            "",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_01_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa"
        };
        class textureSources {
            class woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa"
                };
            };
            class desert: woodland {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa"
                };
            };
        };
        textureList[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        discreteDistance[] = {400};
                        discreteDistanceInitIndex = 0;
                        turretInfoType = "RHS_RscCWSS";
                        class OpticsIn {
                            class CWSS: ViewOptics {
                                camPos = "commanderview_cwss";
                                opticsDisplayName = "CWSS";
                                initFov = 0.233333;
                                minFov = 0.233333;
                                maxFov = 0.233333;
                                visionMode[] = {"Normal", "TI"};
                                thermalMode[] = {2, 3};
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CWSS_Digital";
                                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                                hitpoint = "Hit_Optic_ComCWSS";
                            };
                            class CWSS_2x: CWSS {
                                initFov = 0.116667;
                                minFov = 0.116667;
                                maxFov = 0.116667;
                            };
                            class CWSS_3x: CWSS {
                                initFov = 0.0777778;
                                minFov = 0.0777778;
                                maxFov = 0.0777778;
                            };
                            class Periscope: ViewOptics {
                                camPos = "commanderview2";
                                opticsDisplayName = "PERISCOPE";
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                                hitpoint = "Hit_Optic_ComPeriscope";
                            };
                            class CWS: CWSS {
                                camPos = "commanderview";
                                opticsDisplayName = "CWS";
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CWSS";
                                visionMode[] = {"Normal", "NVG"};
                                hitpoint = "Hit_Optic_ComM2";
                            };
                        };
                        minOutTurn = -30;
                        maxOutTurn = 65;
                    };
                    class Loader: Loader {};
                    class LoaderMG: LoaderMG {
                        minTurn = 9;
                        maxTurn = 117;
                    };
                };
                weapons[] = {
                    "rhs_weap_m256",
                    "RHS_M2_Abrams_Gunner",
                    "rhs_weap_m240_abrams_coax",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_M829A3",
                    "rhs_mag_M830A1",
                    "rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                class Reflectors {
                    class Gunner {
                        color[] = {7000, 7400, 9500};
                        ambient[] = {6, 8, 8};
                        position = "Light_G";
                        direction = "Light_G_end";
                        hitpoint = "Light_G";
                        selection = "Light_G";
                        size = 1;
                        innerAngle = 11;
                        outerAngle = 16;
                        coneFadeCoef = 1;
                        intensity = 7;
                        useFlare = 0;
                        dayLight = 0;
                        flareSize = 1;
                        class Attenuation {
                            start = 0.5;
                            constant = 0;
                            linear = 0;
                            quadratic = 0.05;
                            hardLimitStart = 600;
                            hardLimitEnd = 1200;
                        };
                    };
                    class Gunner2: Gunner {
                        position = "light_G_flare";
                        useFlare = 1;
                        innerAngle = 10;
                        outerAngle = 160;
                        coneFadeCoef = 10;
                        intensity = 1;
                        flareSize = 3.25;
                        class Attenuation {
                            start = 1;
                            constant = 0;
                            linear = 0;
                            quadratic = 0.25;
                            hardLimitStart = 0.5;
                            hardLimitEnd = 0.15;
                        };
                    };
                };
                aggregateReflectors[] = {{"Gunner"}, {"Gunner2"}};
                armorLights = 0.01;
            };
        };
        class AnimationSources: AnimationSources {
            class muzzle_rot_hmg3 {
                source = "ammorandom";
                weapon = "RHS_M2_Abrams_Gunner";
            };
            class muzzle_hide_hmg3: recoil_source {
                weapon = "RHS_M2_Abrams_Gunner";
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
            class SLAT_1_source {
                source = "Hit";
                hitpoint = "SLAT_1_hitpoint";
            };
        };
        class HitPoints: HitPoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e1";
                armorComponent = "e1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e2";
                armorComponent = "e2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e3";
                armorComponent = "e3";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e4";
                armorComponent = "e4";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e5";
                armorComponent = "e5";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e6";
                armorComponent = "e6";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e7";
                armorComponent = "e7";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e8";
                armorComponent = "e8";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e9";
                armorComponent = "e9";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e10";
                armorComponent = "e10";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e11";
                armorComponent = "e11";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e12";
                armorComponent = "e12";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e13";
                armorComponent = "e13";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e14";
                armorComponent = "e14";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e15";
                armorComponent = "e15";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e16";
                armorComponent = "e16";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e17";
                armorComponent = "e17";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e27";
                armorComponent = "e27";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e28";
                armorComponent = "e28";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e29";
                armorComponent = "e29";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e30";
                armorComponent = "e30";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e31";
                armorComponent = "e31";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e32";
                armorComponent = "e32";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e33";
                armorComponent = "e33";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e34";
                armorComponent = "e34";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
            class SLAT_1_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "SLAT_1";
                armorComponent = "SLAT_1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
        };
    };
    class rhsusf_m1a1aim_tuski_d: rhsusf_m1a1aim_tuski_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1aim_tuski_d.paa";
        scope = 2;
        displayName = "$STR_M1A1AIMTUSKIwd_Name";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ocp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"};
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_01_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_d_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa"
        };
    };
    class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1fep_d.paa";
        model = "\rhsusf\addons\rhsusf_m1a1\m1a1fep";
        scope = 2;
        displayName = "$STR_M1A1FEPd_Name";
        rhs_duke_type = "rhsusf_duke_m1a2";
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_usmc_marpat_d_crewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"};
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "duke_tex",
            "",
            "",
            "",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionstextures[] = {
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa",
            "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
        };
        class textureSources {
            class woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
            };
            class desert: woodland {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
                };
            };
            class OD: woodland {
                displayName = "Olive Drab";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
            };
        };
        textureList[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_m256", "rhs_weap_m240_abrams_coax", "rhs_weap_fcs"};
                magazines[] = {
                    "rhs_mag_M829A3",
                    "rhs_mag_M830A1",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"RHS_M2_Abrams_Commander", "rhsusf_weap_M257", "rhsusf_weap_duke"};
                        magazines[] = {
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhsusf_mag_L8A3_16",
                            "rhsusf_mag_duke"
                        };
                        discreteDistance[] = {400};
                        discreteDistanceInitIndex = 0;
                        turretInfoType = "RHS_RscCWSS";
                        class OpticsIn {
                            class CWSS: ViewOptics {
                                camPos = "commanderview_cwss";
                                opticsDisplayName = "CWSS";
                                initFov = 0.233333;
                                minFov = 0.233333;
                                maxFov = 0.233333;
                                visionMode[] = {"Normal", "TI"};
                                thermalMode[] = {2, 3};
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CWSS_Digital";
                                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                                hitpoint = "Hit_Optic_ComCWSS";
                            };
                            class CWSS_2x: CWSS {
                                initFov = 0.116667;
                                minFov = 0.116667;
                                maxFov = 0.116667;
                            };
                            class CWSS_3x: CWSS {
                                initFov = 0.0777778;
                                minFov = 0.0777778;
                                maxFov = 0.0777778;
                            };
                            class Periscope: ViewOptics {
                                camPos = "commanderview2";
                                opticsDisplayName = "PERISCOPE";
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                                hitpoint = "Hit_Optic_ComPeriscope";
                            };
                            class CWS: CWSS {
                                camPos = "commanderview";
                                opticsDisplayName = "CWS";
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CWSS";
                                visionMode[] = {"Normal", "NVG"};
                                hitpoint = "Hit_Optic_ComM2";
                            };
                        };
                    };
                    class Loader: Loader {};
                    class LoaderMG: LoaderMG {};
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1fep_od_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1fep_od_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aimtusk_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aimtusk_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aimtusk_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aimtusk_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aimtusk_wd_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aimtusk_wd_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aimtusk_wd_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aimtusk_wd_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_tuski_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_tuski_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_tuski_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_tuski_wd.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass_damage.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass_damage.rvmat"
            };
        };
        class AnimationSources: AnimationSources {
            class smoke_revolving_source {
                source = "revolving";
                weapon = "rhsusf_weap_M257";
            };
            class DUKE_Hide: IFF_Panels_Hide {
                displayName = "hide DUKE antennas";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                onPhaseChanged = "_this + ([[0,0]]) call rhs_fnc_duke_vg;";
            };
            class HitDuke1 {
                source = "Hit";
                hitpoint = "HitDuke1";
            };
            class HitDuke2: HitDuke1 {
                hitpoint = "HitDuke2";
            };
        };
        class HitPoints: HitPoints {
            class HitDuke1 {
                armor = 0.75;
                material = -1;
                name = "duke1";
                visual = "-";
                passThrough = 0;
                MinimalHit = 0.05;
                explosionShielding = 0.01;
                radius = 0.15;
            };
            class HitDuke2: HitDuke1 {
                name = "duke2";
                visual = "-";
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_hideIFFPanel: rhs_hideIFFPanel {};
            class rhs_hideDUKE: rhs_hideMiles {
                displayName = "hide DUKE antennas";
                property = "rhs_hideDUKE";
                expression = "_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[0,0]]}";
            };
            class rhs_decalBarrel_type: rhs_decalBarrel_type {};
            class rhs_decalBarrel: rhs_decalBarrel {};
            class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
            class rhs_decalPlatoon: rhs_decalPlatoon {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {};
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {};
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {};
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
        };
        class EventHandlers: EventHandlers {
            class rhs_duke {
                handleDamage = "_this call rhs_fnc_duke_destruction";
            };
        };
    };
    class rhsusf_m1a1fep_wd: rhsusf_m1a1fep_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1fep_wd.paa";
        scope = 2;
        displayName = "$STR_M1A1FEPd_Name";
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_usmc_marpat_wd_crewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
        };
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {
                initPhase = 1;
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_hideIFFPanel: rhs_hideIFFPanel {};
            class rhs_hideDUKE: rhs_hideDUKE {
                defaultValue = 1;
            };
            class rhs_decalBarrel_type: rhs_decalBarrel_type {};
            class rhs_decalBarrel: rhs_decalBarrel {};
            class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
            class rhs_decalPlatoon: rhs_decalPlatoon {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {};
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {};
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {};
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
        };
    };
    class rhsusf_m1a1fep_od: rhsusf_m1a1fep_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1fep_od.paa";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        displayName = "$STR_M1A1FEPod_Name";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
        };
    };
    class rhsusf_m1a1hc_wd: rhsusf_m1a1tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1hc_wd.paa";
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_usmc_marpat_wd_crewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        model = "\rhsusf\addons\rhsusf_m1a1\m1a1hc";
        displayName = "$STR_M1A1hcd_Name";
        class AnimationSources: AnimationSources {
            class smoke_revolving_source {
                source = "revolving";
                weapon = "rhsusf_weap_M257";
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "",
            "",
            "",
            "",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
        };
        class textureSources {
            class woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
                };
            };
            class desert: woodland {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa"
                };
            };
            class OD: woodland {
                displayName = "Olive Drab";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
                };
            };
        };
        textureList[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_m256", "rhs_weap_m240_abrams_coax", "rhs_weap_fcs"};
                magazines[] = {
                    "rhs_mag_M829A1",
                    "rhs_mag_M830A1",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                class OpticsIn {
                    class Wide: ViewOptics {
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
                        thermalMode[] = {2, 3};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1";
                        gunnerOpticsEffect[] = {};
                        hitpoint = "Hit_Optic_GPS";
                    };
                    class Medium: Wide {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
                        initFov = 0.07;
                        minFov = 0.07;
                        maxFov = 0.07;
                    };
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"RHS_M2_Abrams_Commander", "rhsusf_weap_M257"};
                        magazines[] = {
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhsusf_mag_L8A3_16"
                        };
                    };
                    class Loader: Loader {};
                    class LoaderMG: LoaderMG {};
                };
            };
        };
        class DriverOpticsIn {
            class Wide: ViewOptics {
                opticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_m1_triplex";
                visionMode[] = {"Normal"};
                hitpoint = "Hit_Optic_Driver";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1fep_od_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1fep_od_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_tuski_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_tuski_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_tuski_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_tuski_wd.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass_damage.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass_damage.rvmat"
            };
        };
        class EventHandlers: EventHandlers {
            class rhs_duke {};
        };
    };
};
