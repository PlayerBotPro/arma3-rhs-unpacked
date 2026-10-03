class CfgPatches {
    class rhsusf_c_m113 {
        units[] = {
            "rhsusf_m113_usarmy",
            "rhsusf_m113_usarmy_supply",
            "rhsusf_m113_usarmy_unarmed",
            "rhsusf_m113_usarmy_medical",
            "rhsusf_m113_usarmy_M240",
            "rhsusf_m113_usarmy_MK19",
            "rhsusf_m113_usarmy_M2_90",
            "rhsusf_m113_usarmy_MK19_90",
            "rhsusf_m113d_usarmy",
            "rhsusf_m113d_usarmy_supply",
            "rhsusf_m113d_usarmy_unarmed",
            "rhsusf_m113d_usarmy_medical",
            "rhsusf_m113d_usarmy_M240",
            "rhsusf_m113d_usarmy_MK19"
        };
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops", "rhsusf_c_heavyweapons"};
        name = "M113A3 APC";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_M113_Cargo01 = "RHS_M113_Cargo01";
        RHS_M113_Cargo02 = "RHS_M113_Cargo02";
        RHS_M113_Cargo03 = "RHS_M113_Cargo03";
        RHS_M113_Cargo04 = "RHS_M113_Cargo04";
        RHS_M113_Cargo01_FFV = "RHS_M113_Cargo01_FFV";
        RHS_M113_Cargo02_FFV = "RHS_M113_Cargo02_FFV";
        RHS_M113_Driver = "RHS_M113_Driver";
        RHS_M113_DriverOut = "RHS_M113_DriverOut";
        RHS_M113_Commander_In = "RHS_M113_Commander_In";
        RHS_M113_Commander_Out = "vehicle_turnout_2_Idle";
        RHS_M113_Gunner = "RHS_M113_Gunner";
        RHS_M113_Gunner_M2 = "RHS_M113_Gunner_M2";
        RHS_M113_Gunner_M2_Supply = "RHS_M113_Gunner_M2_Supply";
        RHS_M113_Gunner_M240 = "RHS_M113_Gunner_M240";
        RHS_M113_Gunner_Mk19 = "RHS_M113_Gunner_Mk19";
    };
    class Actions {
        class CargoActions;
        class rhs_m113_commander_in_actions: CargoActions {
            RHS_M113_Commander_out = "rhs_m113_commander_turnout";
        };
        class RifleStandActions;
        class FFV_BaseActions: RifleStandActions {
            RHS_M113_Commander_in = "RHS_M113_Commander_turnin";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class RHS_M113_KIA_Cargo01: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Cargo01";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_M113_KIA_Cargo01_FFV: RHS_M113_KIA_Cargo01 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Cargo01_FFV";
        };
        class RHS_M113_KIA_Cargo02_FFV: RHS_M113_KIA_Cargo01 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Cargo02_FFV";
        };
        class Crew;
        class PreciseCrew;
        class RHS_CrewIn_Base: Crew {};
        class RHS_M113_Cargo01_FFV: Crew {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_FFV";
            interpolateTo[] = {"RHS_M113_KIA_Cargo01_FFV", 1};
            speed = 10000000000;
        };
        class RHS_M113_Cargo02_FFV: Crew {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_FFV";
            interpolateTo[] = {"RHS_M113_KIA_Cargo02_FFV", 1};
            speed = 10000000000;
        };
        class RHS_M113_Cargo01: Crew {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01";
            interpolateTo[] = {"RHS_M113_KIA_Cargo01", 0.1};
            connectTo[] = {
                "RHS_M113_Cargo01",
                0.1,
                "RHS_M113_Cargo01_V1",
                0.1,
                "RHS_M113_Cargo01_V2",
                0.1,
                "RHS_M113_Cargo01_V3",
                0.1,
                "RHS_M113_Cargo01_V4",
                0.1,
                "RHS_M113_Cargo01_V5",
                0.1
            };
            equivalentTo = "RHS_M113_Cargo01";
            variantsAI[] = {
                "RHS_M113_Cargo01",
                0.5,
                "RHS_M113_Cargo01_V1",
                0.12,
                "RHS_M113_Cargo01_V2",
                0.11,
                "RHS_M113_Cargo01_V3",
                0.1,
                "RHS_M113_Cargo01_V4",
                0.09,
                "RHS_M113_Cargo01_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_M113_Cargo01_V1: RHS_M113_Cargo01 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V1.rtm";
            connectTo[] = {"RHS_M113_Cargo01", 0.1};
            speed = 0.245902;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo01_V2: RHS_M113_Cargo01 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V2.rtm";
            connectTo[] = {"RHS_M113_Cargo01", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo01_V3: RHS_M113_Cargo01 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V3.rtm";
            connectTo[] = {"RHS_M113_Cargo01", 0.1};
            speed = 0.333333;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo01_V4: RHS_M113_Cargo01 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V4.rtm";
            connectTo[] = {"RHS_M113_Cargo01", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo01_V5: RHS_M113_Cargo01 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo01_V5.rtm";
            connectTo[] = {"RHS_M113_Cargo01", 0.1};
            speed = 0.177515;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo02: Crew {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02";
            interpolateTo[] = {"RHS_M113_KIA_Cargo01", 0.1};
            connectTo[] = {
                "RHS_M113_Cargo02",
                0.1,
                "RHS_M113_Cargo02_V1",
                0.1,
                "RHS_M113_Cargo02_V2",
                0.1,
                "RHS_M113_Cargo02_V3",
                0.1,
                "RHS_M113_Cargo02_V4",
                0.1,
                "RHS_M113_Cargo02_V5",
                0.1
            };
            equivalentTo = "RHS_M113_Cargo02";
            variantsAI[] = {
                "RHS_M113_Cargo02",
                0.5,
                "RHS_M113_Cargo02_V1",
                0.12,
                "RHS_M113_Cargo02_V2",
                0.11,
                "RHS_M113_Cargo02_V3",
                0.1,
                "RHS_M113_Cargo02_V4",
                0.09,
                "RHS_M113_Cargo02_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_M113_Cargo02_V1: RHS_M113_Cargo02 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V1.rtm";
            connectTo[] = {"RHS_M113_Cargo02", 0.1};
            speed = 0.37037;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo02_V2: RHS_M113_Cargo02 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V2.rtm";
            connectTo[] = {"RHS_M113_Cargo02", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo02_V3: RHS_M113_Cargo02 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V3.rtm";
            connectTo[] = {"RHS_M113_Cargo02", 0.1};
            speed = 0.333333;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo02_V4: RHS_M113_Cargo02 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V4.rtm";
            connectTo[] = {"RHS_M113_Cargo02", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo02_V5: RHS_M113_Cargo02 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo02_V5.rtm";
            connectTo[] = {"RHS_M113_Cargo02", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo03: Crew {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03";
            interpolateTo[] = {"RHS_M113_KIA_Cargo01", 0.1};
            connectTo[] = {
                "RHS_M113_Cargo03",
                0.1,
                "RHS_M113_Cargo03_V1",
                0.1,
                "RHS_M113_Cargo03_V2",
                0.1,
                "RHS_M113_Cargo03_V3",
                0.1,
                "RHS_M113_Cargo03_V4",
                0.1
            };
            equivalentTo = "RHS_M113_Cargo03";
            variantsAI[] = {
                "RHS_M113_Cargo03",
                0.5,
                "RHS_M113_Cargo03_V1",
                0.15,
                "RHS_M113_Cargo03_V2",
                0.13,
                "RHS_M113_Cargo03_V3",
                0.11,
                "RHS_M113_Cargo03_V4",
                0.11
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_M113_Cargo03_V1: RHS_M113_Cargo03 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03_V1.rtm";
            connectTo[] = {"RHS_M113_Cargo03", 0.1};
            speed = 0.29703;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo03_V2: RHS_M113_Cargo03 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03_V2.rtm";
            connectTo[] = {"RHS_M113_Cargo03", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo03_V3: RHS_M113_Cargo03 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03_V3.rtm";
            connectTo[] = {"RHS_M113_Cargo03", 0.1};
            speed = 0.625;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo03_V4: RHS_M113_Cargo03 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo03_V4.rtm";
            connectTo[] = {"RHS_M113_Cargo03", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo04: Crew {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04";
            interpolateTo[] = {"RHS_M113_KIA_Cargo01", 0.1};
            connectTo[] = {
                "RHS_M113_Cargo04",
                0.1,
                "RHS_M113_Cargo04_V1",
                0.1,
                "RHS_M113_Cargo04_V2",
                0.1,
                "RHS_M113_Cargo04_V3",
                0.1,
                "RHS_M113_Cargo04_V4",
                0.1,
                "RHS_M113_Cargo04_V5",
                0.1
            };
            equivalentTo = "RHS_M113_Cargo04";
            variantsAI[] = {
                "RHS_M113_Cargo04",
                0.5,
                "RHS_M113_Cargo04_V1",
                0.12,
                "RHS_M113_Cargo04_V2",
                0.11,
                "RHS_M113_Cargo04_V3",
                0.1,
                "RHS_M113_Cargo04_V4",
                0.09,
                "RHS_M113_Cargo04_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_M113_Cargo04_V1: RHS_M113_Cargo04 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V1.rtm";
            connectTo[] = {"RHS_M113_Cargo04", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo04_V2: RHS_M113_Cargo04 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V2.rtm";
            connectTo[] = {"RHS_M113_Cargo04", 0.1};
            speed = 0.37037;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo04_V3: RHS_M113_Cargo04 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V3.rtm";
            connectTo[] = {"RHS_M113_Cargo04", 0.1};
            speed = 0.333333;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo04_V4: RHS_M113_Cargo04 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V4.rtm";
            connectTo[] = {"RHS_M113_Cargo04", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Cargo04_V5: RHS_M113_Cargo04 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Cargo04_V5.rtm";
            connectTo[] = {"RHS_M113_Cargo04", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Driver";
            interpolateTo[] = {"RHS_M113_KIA_Driver", 1};
            speed = 10000000000;
        };
        class RHS_M113_KIA_Driver: RHS_M113_KIA_Cargo01 {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Driver";
        };
        class RHS_M113_DriverOut: Crew {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_DriverOut";
            interpolateTo[] = {"RHS_M113_KIA_Driver", 1};
            speed = 10000000000;
        };
        class RHS_M113_KIA_DriverOut: RHS_M113_KIA_Driver {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_DriverOut";
        };
        class RHS_M113_Gunner: Crew {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner";
            interpolateTo[] = {"RHS_M113_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_M113_Gunner_M2: RHS_M113_Gunner {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner_M2";
        };
        class RHS_M113_Gunner_M2_Supply: RHS_M113_Gunner {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner_M2_Supply";
        };
        class RHS_M113_Gunner_M240: RHS_M113_Gunner {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner_M240";
        };
        class RHS_M113_Gunner_Mk19: RHS_M113_Gunner {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_Gunner_Mk19";
        };
        class RHS_M113_KIA_Gunner: RHS_M113_KIA_Driver {
            file = "\rhsusf\addons\rhsusf_m113\anim\M113_KIA_Gunner";
        };
        class RHS_M113_Commander_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_m113\anims\rhs_m113_commander_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_M113_Commander_in: RHS_CrewIn_Base {
            actions = "rhs_M113_Commander_in_actions";
            file = "rhsusf\addons\rhsusf_c_m113\anims\rhs_m113_commander_in.rtm";
            interpolateTo[] = {
                "RHS_M113_Commander_in_Dead",
                1,
                "RHS_M113_Commander_turnout",
                0.1
            };
            interpolateFrom[] = {"RHS_M113_Commander_turnin", 0.1};
            variantAfter[] = {5, 5, 5};
        };
        class RHS_M113_Commander_turnout: Crew {
            file = "rhsusf\addons\rhsusf_c_m113\anims\rhs_m113_commander_turnout.rtm";
            speed = 1.25;
            looped = 0;
            minplaytime = 0.8;
            InterpolateTo[] = {"vehicle_turnout_2_Idle", 1.1};
            ConnectTo[] = {"vehicle_turnout_2_Idle", 1};
            boundingSphere = 3;
            interpolationspeed = 3.2;
        };
        class RHS_M113_Commander_turnin: RHS_M113_Commander_turnout {
            file = "rhsusf\addons\rhsusf_c_m113\anims\rhs_m113_commander_turnin.rtm";
            speed = 0.65;
            interpolateFrom[] = {
                "RHS_M113_Commander_turnout",
                1,
                "vehicle_turnout_2_idle_unarmed",
                1,
                "vehicle_turnout_2_Idle",
                1
            };
            connectTo[] = {"RHS_M113_Commander_in", 1};
            interpolateTo[] = {"RHS_M113_Commander_in_Dead", 1};
            variantsAI[] = {"RHS_M113_Commander_in", 1};
            variantsPlayer[] = {"RHS_M113_Commander_in", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            interpolationspeed = 2;
        };
    };
};
class CfgFunctions {
    class RHSUSF {
        tag = "RHSUSF";
        class functions {
            class hatch_control {
                file = "\rhsusf\addons\rhsusf_c_m113\scripts\rhs_hatch_control.sqf";
                description = "Hatch control";
            };
            class hatch_control_ui_eh {
                file = "\rhsusf\addons\rhsusf_c_m113\scripts\rhs_hatch_control_ui_eh.sqf";
                description = "Hatch control";
            };
            class turretAction {
                file = "\rhsusf\addons\rhsusf_c_m113\scripts\rhs_turretAction.sqf";
                description = "Hatch control";
            };
        };
    };
    class RHS {
        tag = "RHS";
        class M113 {
            class m113_commander_turret {
                file = "rhsusf\addons\rhsusf_c_m113\scripts\rhs_m113_commander_turret.sqf";
            };
            class m113_commander_turret_turnout {
                file = "rhsusf\addons\rhsusf_c_m113\scripts\rhs_m113_commander_turret_turnout.sqf";
            };
            class m113_commander_turret_getout {
                file = "rhsusf\addons\rhsusf_c_m113\scripts\rhs_m113_commander_turret_getout.sqf";
            };
        };
    };
};
class RscPicture;
class RscInGameUI {
    class RscUnitInfo;
    class RscWeaponZeroing: RscUnitInfo {
        class WeaponInfoControlsGroupLeft;
    };
    class rhs_m113_hatch: RscWeaponZeroing {
        idd = 300;
        controls[] = {"CA_Zeroing", "RHS_tigr_handler"};
        class RHS_tigr_handler: RscPicture {
            idc = 59999;
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0] call RHSusf_fnc_hatch_control";
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
    };
    class rhsusf_m113tank_base: APC_Tracked_02_base_F {
        dlc = "RHS_USAF";
        category = "Armored";
        destrType = "DestructDefault";
        author = "RHS";
        insideSoundCoef = 0.8;
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_APC_s"};
                speechPlural[] = {"veh_vehicle_APC_p"};
            };
        };
        textSingular = "APC";
        textPlural = "APCs";
        nameSound = "veh_vehicle_APC_s";
        displayName = "$STR_M113A3WD_Name";
        accuracy = 0.3;
        model = "\rhsusf\addons\rhsusf_m113\m113a3_M2";
        picture = "\rhsusf\addons\rhsusf_m113\data\m113_ca";
        Icon = "\rhsusf\addons\rhsusf_m113\data\icom113_ca";
        class RenderTargets {};
        typicalCargo[] = {};
        side = 1;
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_apc_wd";
        crew = "rhsusf_army_ocp_crewman";
        hasGunner = 1;
        hasCommander = 0;
        HeadAimDown = 19;
        incomingMissileDetectionSystem = 0;
        mapSize = 4.8;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        driverDoor = "hatchD";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        driverAction = "RHS_M113_DriverOut";
        driverInAction = "RHS_M113_Driver";
        driverLeftHandAnimName = "driverstick_left";
        driverRightHandAnimName = "driverstick_right";
        cargoProxyIndexes[] = {1, 2, 4, 5, 6, 8, 9, 10, 11};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        cargoDoors[] = {"ramp"};
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        cargoAction[] = {
            "RHS_M113_Cargo01",
            "RHS_M113_Cargo03",
            "RHS_M113_Cargo02",
            "RHS_M113_Cargo02",
            "RHS_M113_Cargo02",
            "RHS_M113_Cargo02",
            "RHS_M113_Cargo03",
            "RHS_M113_Cargo01",
            "RHS_M113_Cargo03",
            "RHS_M113_Cargo03",
            "RHS_M113_Cargo01"
        };
        memoryPointsGetInCargo[] = {
            "pos cargo",
            "pos cargo 1",
            "pos cargo 2",
            "pos cargo 3"
        };
        memoryPointsGetInCargoDir[] = {
            "pos cargo dir",
            "pos cargo 1 dir",
            "pos cargo dir",
            "pos cargo 2 dir",
            "pos cargo 3 dir"
        };
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        simulation = "tankX";
        normalSpeedForwardCoef = 0.82;
        slowSpeedForwardCoef = 0.65;
        maxSpeed = 72;
        fuelCapacity = 24;
        RHS_fuelCapacity = 360;
        tankTurnForce = 400000;
        tankTurnForceAngMinSpd = 0.5;
        tankTurnForceAngSpd = 0.72;
        accelAidForceCoef = 4;
        accelAidForceYOffset = -3.3;
        accelAidForceSpd = 3.23;
        canFloat = 1;
        waterLeakiness = 250;
        maxFordingDepth = 0.1;
        waterResistance = 1;
        waterDamageEngine = 0.9;
        engineShiftY = 0.6;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 1.2;
        waterResistanceCoef = 0.475;
        waterEffectSpeed = 5;
        engineEffectSpeed = 5;
        waterFastEffectSpeed = 28;
        torqueCurve[] = {
            {0.22, 0.584416},
            {0.4, 0.646753},
            {0.5, 0.824675},
            {0.6, 0.968831},
            {0.72, 1},
            {0.8, 0.964935},
            {0.9, 0.924675},
            {1.1056, 0}
        };
        engineMOI = 10;
        enginePower = 205;
        peakTorque = 770;
        minOmega = 60;
        maxOmega = 261.8;
        idleRPM = 550;
        redRPM = 2500;
        thrustDelay = 0.3;
        dampingRateFullThrottle = 0.3;
        dampingRateZeroThrottleClutchEngaged = 3;
        dampingRateZeroThrottleClutchDisengaged = 0.25;
        engineLosses = 25;
        transmissionLosses = 15;
        clutchStrength = 15;
        switchTime = 0.1;
        latency = 0.1;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.4,
            0.4,
            0,
            0.84,
            0.56,
            0.94,
            0.56,
            0.96,
            0.56,
            1,
            0.6
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -6.62,
                "N",
                0,
                "D1",
                4.16,
                "D2",
                2.14,
                "D3",
                1.46,
                "D4",
                1.02
            };
            TransmissionRatios[] = {"High", 12.3};
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
                width = 0.36;
                steering = 0;
                mass = 100;
                MOI = 7.22;
                maxBrakeTorque = 3000;
                maxDroop = 0.15;
                maxCompression = 0.15;
                sprungMass = 1250;
                springStrength = 163500;
                springDamperRate = 7458;
                dampingRate = 700;
                dampingRateInAir = 700;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3;
                latStiffY = 30;
                longitudinalStiffnessPerUnitGravity = 25000;
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
        tracksSpeed = 1.35;
        wheelCircumference = 2.375;
        attenuationEffectType = "TankAttenuation";
        extCameraPosition[] = {0, 2, -11};
        forceHideDriver = 0;
        viewDriverInExternal = 1;
        driverOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
        DriverForceOptics = 0;
        cost = 1500000;
        damageResistance = 0.004;
        crewVulnerable = 1;
        hideproxyincombat = 1;
        transportSoldier = 9;
        LODDriverTurnedIn = 1100;
        LODDriverTurnedOut = 0;
        showNVGGunner = 1;
        headGforceLeaningFactor[] = {0.015, 0.011, 0.015};
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustsEffectBig";
            };
        };
        armor = 200;
        armorStructural = 350;
        explosionShielding = 70;
        minTotalDamageTreshold = 0.4;
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = 5.9;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0.005;
                radius = 0.01;
            };
            class HitEngine: HitEngine {
                armor = 0.45;
                material = -1;
                name = "motor";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.039;
                explosionShielding = 0.009;
                radius = 0.27;
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
            class HitFuel {
                armor = 0.25;
                material = -1;
                name = "palivo";
                visual = "";
                passThrough = 0.5;
                explosionShielding = 0.5;
                minimalHit = 0.7;
                radius = 0.3;
            };
            class Hit_Turret_Glass_l {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "Turret_Glass_l";
                name = "Turret_Glass_l";
                visual = "Turret_Glass_l";
            };
            class Hit_Turret_Glass_r {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "Turret_Glass_r";
                name = "Turret_Glass_r";
                visual = "Turret_Glass_r";
            };
        };
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets {};
                gunnerDoor = "ramp";
                animationsourcehatch = "";
                body = "mainTurret";
                gun = "mainGun";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGun[] = {"usti hlavne"};
                gunnerName = "Commander Gun";
                weapons[] = {"RHS_M2", "rhsusf_weap_M259"};
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
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhsusf_mag_L8A3_8",
                    "rhsusf_mag_L8A3_8",
                    "rhsusf_mag_L8A3_8"
                };
                canUseScanners = 0;
                allowTabLock = 0;
                soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundServoVertical[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                isPersonTurret = 0;
                usePip = 0;
                commanding = 2;
                minElev = -10;
                initElev = 0;
                maxElev = 60;
                gunnerAction = "RHS_M113_Gunner_M2";
                gunnerInAction = "";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                viewGunnerInExternal = 1;
                castGunnerShadow = 1;
                forceHideGunner = 0;
                canHideGunner = 0;
                lodturnedout = 1000;
                lodturnedin = 1000;
                lodopticsout = 1000;
                lodopticsin = 1000;
                stabilizedInAxes = 0;
                gunnerForceOptics = 0;
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
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
                turretInfoType = "RHS_RscWeaponZeroing_TurretAdjust";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                gunnerCompartments = "Compartment1";
                selectionFireAnim = "zasleh";
                primaryGunner = 1;
                primaryObserver = 0;
                startEngine = 0;
                maxhorizontalrotspeed = 1.04;
                maxverticalrotspeed = 1.04;
                soundAttenuationTurret = "HeliAttenuationGunner";
                disableSoundAttenuation = 1;
                gunnerLeftLegAnimName = "legs";
                gunnerRightLegAnimName = "legs";
                gunnerlefthandanimname = "OtocHlaven_Shake";
                gunnerrighthandanimname = "OtocHlaven_Shake";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                class ViewOptics: RCWSOptics {
                    initFov = 0.375;
                    minFov = 0.375;
                    maxFov = 0.375;
                    visionMode[] = {"Normal"};
                };
                class ViewGunner: ViewOptics {
                    initAngleX = 0;
                    minAngleX = -45;
                    maxAngleX = 45;
                    initFov = 0.75;
                    minFov = 0.375;
                    maxFov = 0.75;
                    visionMode[] = {};
                };
                class OpticsIn {
                    class ViewOptics: ViewGunner {
                        gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                    };
                };
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
                class CommanderOptics {};
                class Reflectors {
                    class cabin {
                        color[] = {800, 900, 650};
                        ambient[] = {5, 5, 5};
                        intensity = 0.3;
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
                        color[] = {800, 900, 650};
                        position = "cargo_light_1";
                        direction = "cargo_light_1_dir";
                        hitpoint = "cargo_light_1";
                        selection = "cargo_light_1";
                        intensity = 4;
                        useFlare = 0;
                        coneFadeCoef = 0.1;
                        innerAngle = 140;
                        outerAngle = 175;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 70;
                            hardLimitStart = 0.4;
                            hardLimitEnd = 1.5;
                        };
                    };
                };
            };
            class MainTurret_In: MainTurret {
                class Turrets {};
                memoryPointGunnerOutOptics = "commanderview";
                memoryPointGunnerOptics = "commanderview";
                weapons[] = {"rhsusf_weap_M259"};
                magazines[] = {"rhsusf_mag_L8A3_8", "rhsusf_mag_L8A3_8", "rhsusf_mag_L8A3_8"};
                isPersonTurret = 1;
                outGunnerMayFire = 0;
                inGunnerMayFire = 1;
                dontCreateAI = 1;
                gunnerName = "$STR_POSITION_COMMANDER";
                gunnerAction = "RHS_M113_Commander_out";
                gunnerInAction = "RHS_M113_Commander_in";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                personTurretAction = "vehicle_turnout_2";
                enabledByAnimationSource = "FFV_Commander_Enabled";
                soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundServoVertical[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                turretInfoType = "RHS_RscWeaponZeroing";
                gunnerLeftLegAnimName = "";
                gunnerRightLegAnimName = "";
                gunnerlefthandanimname = "";
                gunnerrighthandanimname = "";
                gun = "";
                body = "";
                animationSourceBody = "";
                animationSourceGun = "";
                minElev = -10;
                maxElev = 40;
                initOutElev = 0;
                minTurn = -115;
                maxTurn = 115;
                initOutTurn = 1;
                selectionFireAnim = "";
                lodturnedin = 1201;
                primaryObserver = 0;
                canHideGunner = 1;
                gunnerOpticsModel = "";
                gunnerOutOpticsModel = "";
                proxyIndex = 2;
                class ViewGunner {
                    initAngleX = 0;
                    initAngleY = 10;
                    initFov = 0.9;
                    minFov = 0.25;
                    maxFov = 1.25;
                    minAngleX = -65;
                    maxAngleX = 85;
                    minAngleY = -150;
                    maxAngleY = 150;
                    minMoveX = -0.075;
                    maxMoveX = 0.075;
                    minMoveY = -0.075;
                    maxMoveY = 0.075;
                    minMoveZ = -0.075;
                    maxMoveZ = 0.1;
                };
                class OpticsIn {};
                startEngine = 0;
                gunnerHasFlares = 1;
                stabilizedInAxes = 3;
                maxHorizontalRotSpeed = 1.8;
                maxVerticalRotSpeed = 1.8;
                viewGunnerInExternal = 1;
            };
            class CargoTurret_01: CargoTurret {
                weapons[] = {"rhsusf_weap_DummyLauncher"};
                gunnerAction = "vehicle_turnout_1";
                gunnerInAction = "RHS_M113_Cargo01_FFV";
                animationSourceHatch = "rear_hatch_handler_1";
                isPersonTurret = 1;
                gunnerGetInAction = "GetInMantis";
                gunnerGetOutAction = "GetOutMantis";
                memoryPointsGetInGunner = "pos cargo 1";
                memoryPointsGetInGunnerDir = "pos cargo 1 dir";
                commanding = -2;
                rhs_hatch_control = 1;
                rhs_hatch_control_depeneds[] = {"rear_hatch_handler_2"};
                enabledByAnimationSource = "rear_hatch";
                gunnerForceOptics = 0;
                gunnerName = "Passenger (Rear Hatch Right)";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "Ramp";
                memoryPointGunnerOptics = "";
                selectionFireAnim = "";
                canHideGunner = 1;
                LODTurnedIn = 1200;
                LODTurnedOut = 1;
                proxyIndex = 3;
                maxElev = 45;
                minElev = -20;
                maxTurn = 160;
                minTurn = -120;
                class TurnIn {
                    limitsArrayTop[] = {{1, -1}, {1, 1}};
                    limitsArrayBottom[] = {{-1, -1}, {-1, 1}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-7.4646, -161.1738},
                        {-7.4264, -106.9807},
                        {-12.8388, -102.0425},
                        {-10.6611, -88.8004},
                        {-18.2532, -59.667},
                        {-7.4306, -49.4319},
                        {-11.1057, -49.3832},
                        {-7.7205, -46.9855},
                        {-10.1225, -44.3478},
                        {-19.7726, -28.4836},
                        {-16.0375, 17.8663},
                        {-11.9149, 29.7774},
                        {-7.7212, 38.3127},
                        {-4.4575, 39.3049},
                        {-5.2729, 43.6182},
                        {-1.9005, 48.6889},
                        {-4.8722, 73.8609},
                        {-3.9671, 78.4205},
                        {6.3736, 79.8659},
                        {15.175, 91.7335},
                        {30.0065, 113.7868},
                        {26.6582, 129.3689},
                        {3.4023, 135.9187},
                        {-15.3679, 144.278},
                        {-16.1314, 160.0867}
                    };
                };
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                proxyIndex = 7;
                isPersonTurret = 1;
                gunnerInAction = "RHS_M113_Cargo02_FFV";
                animationSourceHatch = "rear_hatch_handler_2";
                rhs_hatch_control_depeneds[] = {"rear_hatch_handler_1"};
                gunnerName = "Passenger (Rear Hatch Left)";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                class TurnOut {
                    limitsArrayTop[] = {{45, -120}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-15.0098, -171.6232},
                        {-16.6821, -154.9577},
                        {-11.7215, -148.149},
                        {-9.7461, -147.7804},
                        {-9.8556, -146.7728},
                        {-11.4685, -146.3199},
                        {-11.573, -145.9176},
                        {-16.224, -137.448},
                        {-11.0125, -100.2467},
                        {9.7255, -98.4888},
                        {18.6911, -96.8685},
                        {-9.7613, -96.5088},
                        {23.9199, -91.8655},
                        {27.0373, -83.6022},
                        {27.0452, -68.9423},
                        {21.0796, -57.9417},
                        {19.9345, -56.8518},
                        {12.8666, -54.0844},
                        {-2.7019, -45.4012},
                        {-2.7096, -44.2127},
                        {-0.2736, -43.947},
                        {0.1972, -38.4689},
                        {-1.9929, -37.4971},
                        {-2.2836, -35.1064},
                        {-0.0074, -34.8379},
                        {-0.0715, -32.4873},
                        {-2.0306, -31.7878},
                        {-5.3829, -23.1603},
                        {0.1307, -21.0844},
                        {-8.0524, -10.9118},
                        {-19.3082, 20.7243},
                        {-18.4856, 31.6046},
                        {-12.0216, 43.6287},
                        {-8.3882, 45.7286},
                        {-19.8808, 58.2848},
                        {-18.524, 94.6759},
                        {-14.4017, 104.7679},
                        {-11.3235, 106.2995},
                        {-12.9417, 112.3525},
                        {-14.7703, 127.5907},
                        {-9.6985, 128.7473},
                        {-9.2638, 131.5782},
                        {-9.9322, 162.4235},
                        {-9.1396, 170.7736}
                    };
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_01.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_dam.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_destr.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_02.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_dam.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_destr.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_03.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_dam.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_destr.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int01.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int01_dam.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int01_destr.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int02.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int02_dam.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int02_destr.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_dam.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_destr.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\M23_pintle.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\M23_pintle_dam.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_destr.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_t.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_t_dam.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_t_destr.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_dam.rvmat",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_destr.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class AnimationSources {
            class GunnerAdjust_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.5;
            };
            class cargolights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class cabinlights_hide: cargolights_hide {};
            class Gunner_In_Rotate {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class IFF_Panels_Hide {
                source = "user";
                mass = -20;
                displayName = "hide IFF Panels";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class ReloadAnim {
                source = "reload";
                weapon = "RHS_M2";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_M2";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_M2";
            };
            class muzzle_rot_hmg {
                source = "ammorandom";
                weapon = "RHS_M2";
            };
            class smoke_revolving_source {
                source = "revolving";
                weapon = "rhsusf_weap_M259";
            };
            class HatchD {
                source = "door";
                animPeriod = 2.1;
            };
            class rear_hatch {
                source = "door";
                animPeriod = 0.8;
                initPhase = 0;
            };
            class ramp {
                source = "door";
                animPeriod = 3.285;
                initPhase = 0;
                sound = "rhs_ramp";
                soundPosition = "ramp_axis";
            };
            class hatchGunner {
                source = "door";
                animPeriod = 0.5;
                initPhase = 0;
                displayName = "close commander hatch";
            };
            class FFV_Commander_Enabled {
                source = "door";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class Hide_Turret_Armor_Front {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                displayName = "hide turret armor - front";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_Turret_Armor_Side: Hide_Turret_Armor_Front {
                displayName = "hide turret armor - side";
                forceAnimatePhase = 1;
                forceAnimate[] = {"FFV_Commander_Enabled", 1};
            };
            class Hide_Hull_Front: Hide_Turret_Armor_Front {
                scope = 0;
                displayName = "hide trim vane";
            };
            class Hide_side_skirt: Hide_Turret_Armor_Front {
                scope = 0;
                displayName = "hide side skirts";
                forceAnimatePhase = 1;
                forceAnimate[] = {"Hide_rubber_ski", 1};
            };
            class Hide_rubber_ski: Hide_Turret_Armor_Front {
                scope = 0;
                displayName = "hide rubber skirts";
            };
            class Hide_spare_track: Hide_Turret_Armor_Front {
                scope = 0;
                displayName = "hide spare track";
            };
            class Hide_rear_straps: Hide_Turret_Armor_Front {
                scope = 0;
                displayName = "hide rear straps";
            };
            class HitTurret_Glass_l {
                source = "Hit";
                hitpoint = "Hit_Turret_Glass_l";
                raw = 1;
            };
            class HitTurret_Glass_r {
                source = "Hit";
                hitpoint = "Hit_Turret_Glass_r";
                raw = 1;
            };
        };
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
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
                innerAngle = 30;
                outerAngle = 100;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 1;
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
                position = "p svetlo";
                direction = "konec p svetla";
                hitpoint = "p svetlo";
                selection = "P svetlo";
            };
        };
        aggregateReflectors[] = {{"Left"}, {"Right"}};
        armorLights = 0.1;
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 4;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 50;
            };
            class _xx_rhs_mag_M433_HEDP {
                magazine = "rhs_mag_M433_HEDP";
                count = 20;
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
                count = 11;
            };
            class _xx_rhs_mag_M441_HE {
                magazine = "rhs_mag_M441_HE";
                count = 20;
            };
            class _xx_rhs_mag_M714_white {
                magazine = "rhs_mag_M714_white";
                count = 8;
            };
            class _xx_rhs_mag_M662_red {
                magazine = "rhs_mag_M662_red";
                count = 4;
            };
            class _xx_rhs_mag_m67 {
                magazine = "rhs_mag_m67";
                count = 10;
            };
            class _xx_rhs_mag_m18_green {
                magazine = "rhs_mag_m18_green";
                count = 4;
            };
            class _xx_rhs_mag_m18_red {
                magazine = "rhs_mag_m18_red";
                count = 4;
            };
            class _xx_rhs_mag_an_m8hc {
                magazine = "rhs_mag_an_m8hc";
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
                count = 2;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4_carryhandle {
                weapon = "rhs_weap_m4_carryhandle";
                count = 4;
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                postInit = "_this call rhs_fnc_reapplyTextures";
                getIn = "_this call rhs_fnc_m2_doors";
                getOut = "_this call rhs_fnc_m2_doors";
                turnIn = "([0] + _this)  call rhsusf_fnc_turretAction;";
                turnOut = "([1] + _this) call rhsusf_fnc_turretAction;";
                engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage";
            };
            class RHSUSF_M113_Turret {
                init = "(_this # 0) lockTurret [[1],true]";
                getOut = "_this call rhs_fnc_m113_commander_turret_getout";
                turnIn = "(_this + [false,[1],true]) call rhs_fnc_m113_commander_turret_turnout;";
                turnOut = "(_this + [true,[1],true]) call rhs_fnc_m113_commander_turret_turnout;";
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_wd_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_wd_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        textureList[] = {};
        class ViewPilot: ViewPilot {
            initAngleX = 7;
            minAngleX = -45;
            maxAngleX = 35;
            initAngleY = 0;
            minAngleY = -90;
            maxAngleY = 90;
            minFov = 0.25;
            maxFov = 1.25;
            initFov = 0.75;
        };
        class UserActions {
            class OpenCargoDoor {
                displayName = "Open ramp";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "this doorPhase 'ramp' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
                statement = "this animateDoor ['ramp', 1];this setVariable ['ramp_handler',1,true]";
                onlyforplayer = 1;
                shortcut = "user12";
            };
            class CloseCargoDoor: OpenCargoDoor {
                displayName = "Close ramp";
                condition = "this doorPhase 'ramp' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
                statement = "this animateDoor ['ramp', 0];this setVariable ['ramp_handler',0,true]";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
            class Use_Weapon {
                displayName = "Use mounted weapon";
                position = "";
                radius = 4;
                onlyForplayer = 0;
                shortcut = "turnOut";
                condition = "isTurnedOut (call rhs_fnc_findPlayer) and (this turretUnit [1]) isEqualTo (call rhs_fnc_findPlayer);";
                statement = "[this,'USE_WEAPON'] call rhs_fnc_m113_commander_turret";
            };
            class LeaveTurret: Use_Weapon {
                condition = "(this turretUnit [0]) isEqualTo (call rhs_fnc_findPlayer)";
                displayName = "Leave weapon";
                shortcut = "turnIn";
                statement = "[this,'LEAVE_WEAPON'] call rhs_fnc_m113_commander_turret";
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
            class rhs_openRamp {
                displayName = "Open rear ramp";
                property = "rhs_openRamp";
                control = "CheckboxNumber";
                expression = "_this animateDoor ['ramp',_value,true]";
                defaultValue = "0";
            };
        };
    };
    class rhsusf_m113_usarmy: rhsusf_m113tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_M113A3WD_Name";
        model = "\rhsusf\addons\rhsusf_m113\m113a3_M2";
        picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_M2_ca";
        Icon = "\rhsusf\addons\rhsusf_m113\data\icom113_ca";
    };
    class rhsusf_m113_usarmy_supply: rhsusf_m113_usarmy {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_supply.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_M113A3_AMMO";
        model = "\rhsusf\addons\rhsusf_m113\m113a3_supply";
        picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_AMMO_ca";
        Icon = "\rhsusf\addons\rhsusf_m113\data\icom113_ca";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
        };
        textureList[] = {};
        memoryPointSupply = "doplnovani";
        transportAmmo = 300000;
        supplyRadius = 9.5;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerAction = "RHS_M113_Gunner_M2_Supply";
                gunnerInAction = "";
            };
            class MainTurret_In: MainTurret_In {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
        };
        class AnimationSources: AnimationSources {
            class FFV_Commander_Enabled: FFV_Commander_Enabled {
                initPhase = 1;
            };
            class Hide_Turret_Armor_Front: Hide_Turret_Armor_Side {
                initPhase = 1;
                displayName = "";
            };
            class Hide_Turret_Armor_Side: Hide_Hull_Front {
                initPhase = 1;
                displayName = "";
            };
        };
    };
    class rhsusf_m113_usarmy_unarmed: rhsusf_m113tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_unarmed.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class AnimationSources: AnimationSources {
            class MainTurret: cargolights_hide {};
            class MainGun: cargolights_hide {};
            class FFV_Commander_Enabled: FFV_Commander_Enabled {
                initPhase = 1;
            };
            class Hide_Turret_Armor_Front: Hide_Turret_Armor_Side {
                initPhase = 1;
                displayName = "";
            };
            class Hide_Turret_Armor_Side: Hide_Hull_Front {
                initPhase = 1;
                displayName = "";
            };
        };
        class Turrets: Turrets {
            class MainTurret_In: MainTurret_In {
                proxyIndex = 1;
                dontCreateAI = 0;
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
        };
        scope = 2;
        displayName = "$STR_M113A3_UN";
        model = "\rhsusf\addons\rhsusf_m113\m113a3_unarmed";
        picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_UNARMED_ca";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
                };
            };
            class Desert: Desert {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
                };
            };
            class Olive: Olive {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
                };
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_M113_Turret {
                turnIn = "(_this + [false,[0],false])  spawn rhs_fnc_m113_commander_turret_turnout;";
                turnOut = "(_this + [true,[0],false]) spawn rhs_fnc_m113_commander_turret_turnout;";
            };
        };
        class UserActions: UserActions {
            class Use_Weapon: Use_Weapon {
                condition = 0;
            };
            class LeaveTurret: LeaveTurret {
                condition = 0;
            };
        };
    };
    class rhsusf_m113_usarmy_medical: rhsusf_m113_usarmy_unarmed {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_medical.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_M113A3_MED";
        model = "\rhsusf\addons\rhsusf_m113\m113a3_medical";
        picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_MEDICAL_ca";
        Icon = "\rhsusf\addons\rhsusf_m113\data\icom113_ca";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_med_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_med_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
                };
            };
            class Desert: Desert {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_med_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
                };
            };
            class Olive: Olive {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_med_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
                };
            };
        };
        transportSoldier = 1;
        attendant = 1;
        memoryPointSupply = "doplnovani";
        supplyRadius = 4.5;
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 20;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 2;
            };
        };
    };
    class rhsusf_m113_usarmy_M240: rhsusf_m113tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_M240.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerAction = "RHS_M113_Gunner_M240";
                gunnerInAction = "";
                weapons[] = {"rhs_weap_m240_m113", "rhsusf_weap_M259"};
                magazines[] = {
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhs_mag_762x51_M240_200",
                    "rhsusf_mag_L8A3_8",
                    "rhsusf_mag_L8A3_8",
                    "rhsusf_mag_L8A3_8"
                };
            };
            class MainTurret_In: MainTurret_In {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
        };
        scope = 2;
        displayName = "$STR_M113A3_M240";
        model = "\rhsusf\addons\rhsusf_m113\m113a3_m240";
        picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_M240_ca";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
                };
            };
            class Desert: Desert {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa"
                };
            };
            class Olive: Olive {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
                };
            };
        };
        class AnimationSources: AnimationSources {
            class GunnerAdjust_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.25;
            };
            class FFV_Commander_Enabled: FFV_Commander_Enabled {
                initPhase = 1;
            };
            class Hide_Turret_Armor_Front: Hide_Turret_Armor_Side {
                initPhase = 1;
                displayName = "";
            };
            class Hide_Turret_Armor_Side: Hide_Hull_Front {
                initPhase = 1;
                displayName = "";
            };
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_m240_m113";
            };
            class ReloadMagazine: ReloadAnim {
                source = "reloadmagazine";
            };
            class Revolving: ReloadAnim {
                source = "revolving";
            };
            class muzzle_rot_hmg: ReloadAnim {
                source = "ammorandom";
            };
        };
    };
    class rhsusf_m113_usarmy_MK19: rhsusf_m113tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_MK19.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                discreteDistance[] = {
                    100,
                    200,
                    300,
                    400,
                    500,
                    600,
                    800,
                    1000,
                    1100,
                    1200,
                    1300,
                    1400,
                    1500
                };
                discreteDistanceInitIndex = 2;
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                gunnerAction = "RHS_M113_Gunner_Mk19";
                gunnerInAction = "";
                weapons[] = {"RHS_MK19", "rhsusf_weap_M259"};
                magazines[] = {
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "rhsusf_mag_L8A3_8",
                    "rhsusf_mag_L8A3_8",
                    "rhsusf_mag_L8A3_8"
                };
            };
            class MainTurret_In: MainTurret_In {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
        };
        scope = 2;
        displayName = "$STR_M113A3_MK19";
        model = "\rhsusf\addons\rhsusf_m113\m113a3_Mk19";
        picture = "\rhsusf\addons\rhsusf_m113\UI\M113_MK19_ca";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
            };
            class Desert: Desert {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
                };
            };
            class Olive: Olive {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
            };
        };
        class AnimationSources: AnimationSources {
            class FFV_Commander_Enabled: FFV_Commander_Enabled {
                initPhase = 1;
            };
            class Hide_Turret_Armor_Front: Hide_Turret_Armor_Side {
                initPhase = 1;
                displayName = "";
            };
            class Hide_Turret_Armor_Side: Hide_Hull_Front {
                initPhase = 1;
                displayName = "";
            };
            class belt_rotation {
                source = "reload";
                weapon = "RHS_MK19";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_MK19";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_MK19";
            };
        };
    };
    class rhsusf_m113d_usarmy: rhsusf_m113_usarmy {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_h_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_d_co.paa"
        };
    };
    class rhsusf_m113d_usarmy_supply: rhsusf_m113_usarmy_supply {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy_supply.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa"
        };
    };
    class rhsusf_m113d_usarmy_unarmed: rhsusf_m113_usarmy_unarmed {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy_unarmed.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
        };
    };
    class rhsusf_m113d_usarmy_medical: rhsusf_m113_usarmy_medical {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy_medical.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_med_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
        };
    };
    class rhsusf_m113d_usarmy_M240: rhsusf_m113_usarmy_M240 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy_M240.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa"
        };
    };
    class rhsusf_m113d_usarmy_MK19: rhsusf_m113_usarmy_MK19 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy_MK19.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
    };
    class rhsusf_m113_usarmy_M2_90: rhsusf_m113_usarmy_supply {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_M2_90.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        displayName = "M113A3 (M2/Early)";
        model = "\rhsusf\addons\rhsusf_m113\m113a3_M2_90s";
        picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_M240_ca";
        Icon = "\rhsusf\addons\rhsusf_m113\data\icom113_ca";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_wd_h_90s_co.paa",
            "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_wd_h_90s_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_wd_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_wd_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
                };
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_od_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_od_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
                };
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_d_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_d_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa"
                };
            };
            class MERDC_SV {
                displayName = "MERDC (Summer Verdant)";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_sv_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_sv_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
                };
            };
            class MERDC_WV {
                displayName = "MERDC (Winter Verdant)";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_wv_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_wv_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
                };
            };
        };
        textureList[] = {};
        transportAmmo = 0;
        supplyRadius = 0;
    };
    class rhsusf_m113_usarmy_MK19_90: rhsusf_m113_usarmy_MK19 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_MK19_90.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_apc";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        picture = "\rhsusf\addons\rhsusf_m113\UI\M113_MK19_ca";
        scope = 2;
        displayName = "M113A3 (Mk19/Early)";
        model = "\rhsusf\addons\rhsusf_m113\m113a3_Mk19_90s";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_wd_h_90s_co.paa",
            "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_wd_h_90s_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
            "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_wd_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_wd_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_od_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_od_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_d_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_d_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
                };
            };
            class MERDC_SV {
                displayName = "MERDC (Summer Verdant)";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_sv_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_sv_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
            };
            class MERDC_WV {
                displayName = "MERDC (Winter Verdant)";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_01_wv_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_wv_h_90s_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
            };
        };
        textureList[] = {};
    };
};
class CfgNonAIVehicles {
    class ProxyRetex;
    class ProxyRHS_M113_HULL: ProxyRetex {
        hiddenSelections[] = {"camo1", "camo2"};
        model = "\rhsusf\addons\rhsusf_m113\proxy\RHS_M113_HULL";
    };
    class ProxyRHS_M113_HULL_H: ProxyRHS_M113_HULL {
        model = "\rhsusf\addons\rhsusf_m113\proxy\RHS_M113_HULL_H";
    };
    class ProxyRHS_M113_HULL_H_90s: ProxyRHS_M113_HULL {
        model = "\rhsusf\addons\rhsusf_m113\proxy\RHS_M113_HULL_H_90s";
    };
};
