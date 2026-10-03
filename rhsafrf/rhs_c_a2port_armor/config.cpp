class CfgPatches {
    class rhs_c_a2port_armor {
        units[] = {
            "rhs_zsu234_aa",
            "rhs_btr60_vmf",
            "rhs_btr60_vdv",
            "rhs_btr60_vv",
            "rhs_btr60_msv"
        };
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_heavyweapons",
            "rhs_decals",
            "rhs_optics",
            "rhs_c_troops",
            "rhs_c_btr"
        };
        name = "A2 ported armor";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_ZSU_Commander = "RHS_ZSU_Commander";
        RHS_ZSU_CommanderOUT = "RHS_ZSU_CommanderOUT";
        RHS_ZSU_Gunner = "RHS_ZSU_Gunner";
        RHS_ZSU_GunnerOut = "RHS_ZSU_GunnerOut";
        RHS_ZSU_Driver = "RHS_ZSU_Driver";
        RHS_BTR60_Driver = "RHS_BTR60_Driver";
        RHS_BTR60_DriverOut = "RHS_BTR60_DriverOut";
        RHS_BTR60_Commander = "RHS_BTR60_Commander";
        RHS_BTR60_CommanderOut = "RHS_BTR60_CommanderOut";
        RHS_BTR60_Gunner = "RHS_BTR60_Gunner";
        RHS_BTR60_Cargo01 = "RHS_BTR60_Cargo01";
        RHS_BTR60_Cargo02 = "RHS_BTR60_Cargo02";
        RHS_BTR60_Cargo03 = "RHS_BTR60_Cargo03";
        RHS_BTR60_Cargo04 = "RHS_BTR60_Cargo04";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class KIA_RHS_ZSU_Commander: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_ZSU_Commander.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class KIA_RHS_ZSU_Driver: KIA_RHS_ZSU_Commander {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\ZSU_Driver.rtm";
        };
        class KIA_RHS_ZSU_Gunner: KIA_RHS_ZSU_Commander {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_ZSU_Gunner.rtm";
        };
        class RHS_ZSU_Gunner: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\ZSU_Gunner.rtm";
            interpolateTo[] = {"KIA_RHS_ZSU_Gunner", 1};
        };
        class RHS_ZSU_GunnerOut: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\ZSU_GunnerOut.rtm";
            interpolateTo[] = {"KIA_RHS_ZSU_Gunner", 1};
        };
        class RHS_ZSU_Commander: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\ZSU_Commander.rtm";
            interpolateTo[] = {"KIA_RHS_ZSU_Commander", 1};
        };
        class RHS_ZSU_CommanderOut: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\ZSU_CommanderOut.rtm";
            interpolateTo[] = {"KIA_RHS_ZSU_Commander", 1};
        };
        class RHS_ZSU_Driver: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\ZSU_Driver.rtm";
            interpolateTo[] = {"KIA_RHS_ZSU_Driver", 1};
        };
        class RHS_BTR60_Driver: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Driver.rtm";
            interpolateTo[] = {"KIA_RHS_BTR60_Driver", 1};
        };
        class RHS_BTR60_Commander: RHS_BTR60_Driver {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Commander.rtm";
            interpolateTo[] = {"KIA_RHS_BTR60_Commander", 1};
        };
        class RHS_BTR60_Gunner: RHS_BTR60_Driver {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Gunner.rtm";
            interpolateTo[] = {"KIA_RHS_BTR60_Gunner", 1};
        };
        class RHS_BTR60_DriverOut: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_DriverOut.rtm";
            interpolateTo[] = {"KIA_RHS_BTR60_DriverOut", 1};
        };
        class RHS_BTR60_CommanderOut: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_CommanderOut.rtm";
            interpolateTo[] = {"KIA_RHS_BTR60_CommanderOut", 1};
        };
        class KIA_RHS_BTR60_Gunner: KIA_RHS_ZSU_Commander {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_BTR60_Gunner.rtm";
        };
        class KIA_RHS_BTR60_Driver: KIA_RHS_ZSU_Commander {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_BTR60_Driver.rtm";
        };
        class KIA_RHS_BTR60_Commander: KIA_RHS_ZSU_Commander {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_BTR60_Commander.rtm";
        };
        class KIA_RHS_BTR60_DriverOut: KIA_RHS_ZSU_Commander {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_BTR60_DriverOut.rtm";
        };
        class KIA_RHS_BTR60_CommanderOut: KIA_RHS_ZSU_Commander {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_BTR60_CommanderOut.rtm";
        };
        class KIA_RHS_BTR60_Cargo01: KIA_RHS_ZSU_Commander {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_BTR60_Cargo01.rtm";
        };
        class KIA_RHS_BTR60_Cargo02: KIA_RHS_ZSU_Commander {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\KIA_BTR60_Cargo02.rtm";
        };
        class RHS_BTR60_Cargo01: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01";
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo01", 0.1};
            connectTo[] = {
                "RHS_BTR60_Cargo01",
                0.1,
                "RHS_BTR60_Cargo01_V1",
                0.1,
                "RHS_BTR60_Cargo01_V2",
                0.1,
                "RHS_BTR60_Cargo01_V3",
                0.1,
                "RHS_BTR60_Cargo01_V4",
                0.1,
                "RHS_BTR60_Cargo01_V5",
                0.1
            };
            equivalentTo = "RHS_BTR60_Cargo01";
            variantsAI[] = {
                "RHS_BTR60_Cargo01",
                0.5,
                "RHS_BTR60_Cargo01_V1",
                0.12,
                "RHS_BTR60_Cargo01_V2",
                0.11,
                "RHS_BTR60_Cargo01_V3",
                0.1,
                "RHS_BTR60_Cargo01_V4",
                0.09,
                "RHS_BTR60_Cargo01_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_BTR60_Cargo01_V1: RHS_BTR60_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V1.rtm";
            connectTo[] = {"RHS_BTR60_Cargo01", 0.1};
            speed = 0.245902;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo01", 0.1};
        };
        class RHS_BTR60_Cargo01_V2: RHS_BTR60_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V2.rtm";
            connectTo[] = {"RHS_BTR60_Cargo01", 0.1};
            speed = 0.37037;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo01", 0.1};
        };
        class RHS_BTR60_Cargo01_V3: RHS_BTR60_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V3.rtm";
            connectTo[] = {"RHS_BTR60_Cargo01", 0.1};
            speed = 0.625;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo01", 0.1};
        };
        class RHS_BTR60_Cargo01_V4: RHS_BTR60_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V4.rtm";
            connectTo[] = {"RHS_BTR60_Cargo01", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo01", 0.1};
        };
        class RHS_BTR60_Cargo01_V5: RHS_BTR60_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo01_V5.rtm";
            connectTo[] = {"RHS_BTR60_Cargo01", 0.1};
            speed = 0.177515;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo01", 0.1};
        };
        class RHS_BTR60_Cargo02: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02";
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
            connectTo[] = {
                "RHS_BTR60_Cargo02",
                0.1,
                "RHS_BTR60_Cargo02_V1",
                0.1,
                "RHS_BTR60_Cargo02_V2",
                0.1,
                "RHS_BTR60_Cargo02_V3",
                0.1,
                "RHS_BTR60_Cargo02_V4",
                0.1,
                "RHS_BTR60_Cargo02_V5",
                0.1
            };
            equivalentTo = "RHS_BTR60_Cargo02";
            variantsAI[] = {
                "RHS_BTR60_Cargo02",
                0.5,
                "RHS_BTR60_Cargo02_V1",
                0.12,
                "RHS_BTR60_Cargo02_V2",
                0.11,
                "RHS_BTR60_Cargo02_V3",
                0.1,
                "RHS_BTR60_Cargo02_V4",
                0.09,
                "RHS_BTR60_Cargo02_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_BTR60_Cargo02_V1: RHS_BTR60_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V1.rtm";
            connectTo[] = {"RHS_BTR60_Cargo02", 0.1};
            speed = 0.3125;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo02_V2: RHS_BTR60_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V2.rtm";
            connectTo[] = {"RHS_BTR60_Cargo02", 0.1};
            speed = 0.29703;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo02_V3: RHS_BTR60_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V3.rtm";
            connectTo[] = {"RHS_BTR60_Cargo02", 0.1};
            speed = 0.333333;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo02_V4: RHS_BTR60_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V4.rtm";
            connectTo[] = {"RHS_BTR60_Cargo02", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo02_V5: RHS_BTR60_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo02_V5.rtm";
            connectTo[] = {"RHS_BTR60_Cargo02", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo03: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03";
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
            connectTo[] = {
                "RHS_BTR60_Cargo03",
                0.1,
                "RHS_BTR60_Cargo03_V1",
                0.1,
                "RHS_BTR60_Cargo03_V2",
                0.1,
                "RHS_BTR60_Cargo03_V3",
                0.1,
                "RHS_BTR60_Cargo03_V4",
                0.1,
                "RHS_BTR60_Cargo03_V5",
                0.1
            };
            equivalentTo = "RHS_BTR60_Cargo03";
            variantsAI[] = {
                "RHS_BTR60_Cargo03",
                0.5,
                "RHS_BTR60_Cargo03_V1",
                0.12,
                "RHS_BTR60_Cargo03_V2",
                0.11,
                "RHS_BTR60_Cargo03_V3",
                0.1,
                "RHS_BTR60_Cargo03_V4",
                0.09,
                "RHS_BTR60_Cargo03_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_BTR60_Cargo03_V1: RHS_BTR60_Cargo03 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V1.rtm";
            connectTo[] = {"RHS_BTR60_Cargo03", 0.1};
            speed = 0.37037;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo03_V2: RHS_BTR60_Cargo03 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V2.rtm";
            connectTo[] = {"RHS_BTR60_Cargo03", 0.1};
            speed = 0.29703;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo03_V3: RHS_BTR60_Cargo03 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V3.rtm";
            connectTo[] = {"RHS_BTR60_Cargo03", 0.1};
            speed = 0.333333;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo03_V4: RHS_BTR60_Cargo03 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V4.rtm";
            connectTo[] = {"RHS_BTR60_Cargo03", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo03_V5: RHS_BTR60_Cargo03 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo03_V5.rtm";
            connectTo[] = {"RHS_BTR60_Cargo03", 0.1};
            speed = 0.177515;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo04: Crew {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04";
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
            connectTo[] = {
                "RHS_BTR60_Cargo04",
                0.1,
                "RHS_BTR60_Cargo04_V1",
                0.1,
                "RHS_BTR60_Cargo04_V2",
                0.1,
                "RHS_BTR60_Cargo04_V3",
                0.1,
                "RHS_BTR60_Cargo04_V4",
                0.1,
                "RHS_BTR60_Cargo04_V5",
                0.1
            };
            equivalentTo = "RHS_BTR60_Cargo04";
            variantsAI[] = {
                "RHS_BTR60_Cargo04",
                0.5,
                "RHS_BTR60_Cargo04_V1",
                0.12,
                "RHS_BTR60_Cargo04_V2",
                0.11,
                "RHS_BTR60_Cargo04_V3",
                0.1,
                "RHS_BTR60_Cargo04_V4",
                0.09,
                "RHS_BTR60_Cargo04_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_BTR60_Cargo04_V1: RHS_BTR60_Cargo04 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V1.rtm";
            connectTo[] = {"RHS_BTR60_Cargo04", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo04_V2: RHS_BTR60_Cargo04 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V2.rtm";
            connectTo[] = {"RHS_BTR60_Cargo04", 0.1};
            speed = 0.29703;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo04_V3: RHS_BTR60_Cargo04 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V3.rtm";
            connectTo[] = {"RHS_BTR60_Cargo04", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo04_V4: RHS_BTR60_Cargo04 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V4.rtm";
            connectTo[] = {"RHS_BTR60_Cargo04", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
        class RHS_BTR60_Cargo04_V5: RHS_BTR60_Cargo04 {
            file = "\rhsafrf\addons\rhs_a2port_armor\anim\BTR60_Cargo04_V5.rtm";
            connectTo[] = {"RHS_BTR60_Cargo04", 0.1};
            speed = 0.177515;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"KIA_RHS_BTR60_Cargo02", 0.1};
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {};
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
    };
    class APC_Tracked_02_base_F: Tank_F {
        class Components;
    };
    class Car;
    class Car_F: Car {
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
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class EventHandlers;
        class CommanderOptics;
    };
    class rhs_btr_base: Wheeled_APC_F {
        class HitPoints: HitPoints {};
        class AnimationSources;
        class Attributes {
            class ObjectTexture;
            class rhs_decalNumber_type;
            class rhs_decalNumber;
            class rhs_decalPlatoon_type;
            class rhs_decalPlatoon;
            class rhs_decalArmy_type;
            class rhs_decalArmy;
            class rhs_decalRightTurret_type;
            class rhs_decalRightTurret;
            class rhs_decalLeftTurret_type;
            class rhs_decalLeftTurret;
            class rhs_decalFront_type;
            class rhs_decalFront;
            class rhs_decalLowerFront_type;
            class rhs_decalLowerFront;
            class rhs_decalFlag_type;
            class rhs_decalFlag;
            class rhs_decalVV_type;
            class rhs_decalVV;
            class crate_l1_unhide;
            class crate_l2_unhide;
            class crate_l3_unhide;
            class crate_r1_unhide;
            class crate_r2_unhide;
            class wheel_1_unhide;
            class rhs_disableHabar;
            class driverViewHatch;
            class commanderViewHatch;
            class rhs_externalMount;
        };
        class ViewPilot;
    };
    class rhs_btr60_base: rhs_btr_base {
        dlc = "RHS_AFRF";
        category = "Armored";
        insideSoundCoef = 0.8;
        simulation = "carx";
        normalSpeedForwardCoef = 0.9;
        turnCoef = 4.5;
        terrainCoef = 1.5;
        dampersBumpCoef = 6;
        precision = 10;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 80;
        fuelCapacity = 22.5;
        RHS_fuelCapacity = 290;
        wheelCircumference = 3.66;
        brakeIdleSpeed = 0;
        waterLeakiness = 2.5;
        canFloat = 1;
        waterAngularDampingCoef = 10;
        waterLinearDampingCoefX = 2;
        waterLinearDampingCoefY = 2;
        waterPPInVehicle = 0;
        waterResistanceCoef = 0.178;
        engineShiftY = 0.3;
        engineShiftZ = -3;
        rudderForceCoef = 3.5;
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
            TransmissionRatios[] = {"High", 7.2};
            AmphibiousRatios[] = {"R1", -10, "N", 0, "D1", 35};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.9};
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
            {0.229, 0.92},
            {0.286, 0.95},
            {0.371, 0.98},
            {0.457, 1},
            {0.514, 1},
            {0.686, 0.95},
            {0.857, 0.9},
            {1, 0.81}
        };
        maxOmega = 366.52;
        enginePower = 132;
        peakTorque = 442;
        idleRPM = 800;
        redRPM = 3500;
        engineMOI = 4;
        engineLosses = 14;
        thrustDelay = 0.3;
        engineBrakeCoef = 0.3;
        antiRollbarForceCoef = 0;
        antiRollbarForceLimit = 0.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 40;
        class Wheels {
            class LF {
                width = "0.32";
                steering = 1;
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                mass = 160;
                MOI = 15;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 12500;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {-0.125, -1, 0};
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                maxCompression = 0.12;
                maxDroop = 0.11;
                sprungMass = 1125.5;
                springStrength = 45025;
                springDamperRate = 7700;
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
            "rhsafrf\addons\rhs_a2port_armor\Data\btr60_body_co.paa",
            "rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa",
            "",
            "rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
            "rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                textures[] = {"rhsafrf\addons\rhs_a2port_armor\Data\btr60_body_co.paa", "rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class 3tone: standard {
                displayName = "3-Color Camo";
                textures[] = {"rhsafrf\addons\rhs_a2port_armor_camo\data\btr60_body_3tone_co.paa", "rhsafrf\addons\rhs_a2port_armor_camo\data\btr60_details_3tone_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
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
        class RenderTargets {};
        displayName = "$STR_RHS_btr60_Name";
        model = "\rhsafrf\addons\rhs_a2port_armor\rhs_btr60.p3d";
        icon = "\rhsafrf\addons\rhs_a2port_armor\Data\icon_btr60_ca.paa";
        picture = "\rhsafrf\addons\rhs_a2port_armor\pictures\rhs_btr60_pic_ca.paa";
        class Library {
            libTextDesc = "";
        };
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
        driverForceOptics = 0;
        castdrivershadow = 1;
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "gear";
        cargoaction[] = {
            "RHS_BTR60_Cargo01",
            "RHS_BTR60_Cargo01",
            "RHS_BTR60_Cargo02",
            "RHS_BTR60_Cargo03",
            "RHS_BTR60_Cargo04",
            "RHS_BTR60_Cargo02",
            "RHS_BTR60_Cargo03",
            "RHS_BTR60_Cargo04"
        };
        memoryPointsGetInCargo[] = {
            "pos gunner",
            "pos gunner",
            "pos cargo",
            "pos cargo"
        };
        memoryPointsGetInCargoDir[] = {
            "pos gunner dir",
            "pos gunner dir",
            "pos cargo dir",
            "pos cargo dir"
        };
        cargoDoors[] = {"hatchG", "hatchG", "hatchCL", "hatchCL"};
        driverAction = "rhs_btr60_driver";
        driverInAction = "rhs_btr60_driver";
        animationSourceHatch = "";
        driverDoor = "hatchD";
        class ViewPilot: ViewPilot {
            initAngleX = -10;
            minAngleX = -85;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
            initFov = 0.7;
            minFov = 0.3;
            maxFov = 1;
        };
        hideProxyInCombat = 0;
        viewCargoInExternal = 1;
        class AnimationSources: AnimationSources {
            class recoil_source {
                source = "reload";
                weapon = "rhs_weap_kpvt";
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
                initPhase = 0;
            };
            class commanderViewHatch: driverViewHatch {};
            class HatchC {
                source = "door";
                animPeriod = 0.8;
            };
            class HatchG: HatchC {};
            class HatchD: HatchC {};
            class HatchCL: HatchC {};
            class HatchCommander: HatchC {};
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
            class HitPeriscope11: HitPeriscope1 {
                hitpoint = "HitPeriscope11";
            };
        };
        class HitPoints: HitPoints {
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
                armor = 0.8;
                name = "periscope1";
                visual = "periscope1";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope2: HitGlass1 {
                armor = 0.8;
                name = "periscope2";
                visual = "periscope2";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope3: HitGlass1 {
                armor = 0.8;
                name = "periscope3";
                visual = "periscope3";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope4: HitGlass1 {
                armor = 0.8;
                name = "periscope4";
                visual = "periscope4";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope5: HitGlass1 {
                armor = 0.8;
                name = "periscope5";
                visual = "periscope5";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope6: HitGlass1 {
                armor = 0.8;
                name = "periscope6";
                visual = "periscope6";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope7: HitGlass1 {
                armor = 0.8;
                name = "periscope7";
                visual = "periscope7";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope8: HitGlass1 {
                armor = 0.8;
                name = "periscope8";
                visual = "periscope8";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope9: HitGlass1 {
                armor = 0.8;
                name = "periscope9";
                visual = "periscope9";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope10: HitGlass1 {
                armor = 0.8;
                name = "periscope10";
                visual = "periscope10";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope11: HitGlass1 {
                armor = 0.8;
                name = "periscope11";
                visual = "periscope11";
                explosionShielding = 0.5;
                radius = 0.05;
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustsEffect";
            };
            class Exhaust2: Exhaust1 {
                position = "vyfuk2 start";
                direction = "vyfuk2 konec";
                effect = "ExhaustsEffect";
            };
        };
        class UserActions {
            class openDriverViewHatch {
                displayName = "$STR_RHS_BTR70_OpenShield";
                position = "driverAction";
                radius = 2.5;
                showWindow = 0;
                condition = "((call rhs_fnc_findPlayer) == driver this) and (this doorPhase 'driverViewHatch' < 0.5)";
                statement = "this animatedoor ['driverViewHatch',1];";
                onlyForPlayer = 1;
            };
            class closeDriverViewHatch: openDriverViewHatch {
                displayName = "$STR_RHS_BTR70_CloseShield";
                condition = "((call rhs_fnc_findPlayer)  == driver this) and (this doorPhase 'driverViewHatch' > 0.5)";
                statement = "this animatedoor ['driverViewHatch',0];";
            };
            class openCommanderViewHatch: openDriverViewHatch {
                position = "comAction";
                condition = "((this turretUnit [1]) == (call rhs_fnc_findPlayer) ) && (this doorPhase 'commanderViewHatch' < 0.5)";
                statement = "this animatedoor ['commanderViewHatch',1];";
            };
            class closeCommanderViewHatch: openCommanderViewHatch {
                displayName = "$STR_RHS_BTR70_CloseShield";
                condition = "((this turretUnit [1]) == (call rhs_fnc_findPlayer) ) && (this doorPhase 'commanderViewHatch' > 0.5)";
                statement = "this animatedoor ['commanderViewHatch',0];";
            };
            class hatch_commander: openDriverViewHatch {
                displayname = "Turn Out";
                shortcut = "turnOut";
                condition = "(this turretUnit [1] isEqualTo (call rhs_fnc_findPlayer)) AND (this turretUnit [9] isEqualTo objNull)";
                statement = "[this,'HatchC',[[1],[10]],0] spawn rhs_fnc_btr_turnOut";
            };
            class hatch_commander_in: openDriverViewHatch {
                displayname = "Turn In";
                shortcut = "turnIn";
                condition = "(this turretUnit [10] isEqualTo (call rhs_fnc_findPlayer))";
                statement = "[this,'HatchC',[[1],[10]],1] spawn rhs_fnc_btr_turnOut";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cabinlights_hide',[1]] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
        };
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerLeftHandAnimName = "handleElev";
                gunnerRightHandAnimName = "handleHoriz";
                gunnerGetIn = "GetInAMV_cargo";
                gunnerDoor = "hatchG";
                ejectDeadGunner = 0;
                turretInfoType = "RscWeaponZeroing";
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
                discreteDistanceInitIndex = 2;
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
                    "rhs_mag_762x54mm_250"
                };
                viewGunnerInExternal = 1;
                minElev = -5;
                maxElev = 30;
                minTurn = -360;
                maxTurn = 360;
                gunnerAction = "rhs_btr60_gunner";
                gunnerInAction = "rhs_btr60_gunner";
                forceHideGunner = 0;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                gunnerOutOpticsModel = "";
                memoryPointGun = "machinegun";
                selectionFireAnim = "zasleh1";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                body = "mainTurret";
                gun = "mainGun";
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
                    initFov = 0.2;
                    minFov = 0.2;
                    maxFov = 0.2;
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
                        minFov = 0.269231;
                        maxFov = 0.269231;
                        initFov = 0.269231;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        gunnerOpticsEffect[] = {"TankGunnerOptics2", "OpticsBlur1", "OpticsCHAbera3"};
                        visionMode[] = {"Normal"};
                    };
                    class Night: Wide {
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am_night";
                    };
                };
                class Turrets {};
            };
            class CommanderOptics: CommanderOptics {
                dontCreateAI = 1;
                animationSourceHatch = "";
                gunnerDoor = "hatchC";
                gunnerName = "$STR_POSITION_COMMANDER";
                primaryGunner = 0;
                primaryObserver = 0;
                gunnerOpticsShowCursor = 0;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                body = "ObsTurret";
                gun = "ObsGun";
                animationSourceBody = "obsTurret";
                animationSourceGun = "obsGun";
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
                outGunnerMayFire = 1;
                radarType = 0;
                gunnerOutOpticsModel = "";
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerOutOpticsColor[] = {1, 1, 1, 1};
                gunnerForceOptics = 0;
                gunnerOutForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                memoryPointGunnerOutOptics = "commander_weapon_view";
                memoryPointGunnerOptics = "commanderview";
                memoryPointsGetInGunner = "pos commander";
                memoryPointsGetInGunnerPrecise = "pos commander";
                memoryPointsGetInGunnerDir = "pos commander dir";
                hasGunner = 1;
                gunnerAction = "rhs_btr60_commander";
                gunnerInAction = "rhs_btr60_commander";
                weapons[] = {};
                magazines[] = {};
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
                class OpticsIn {
                    class Wide: ViewOptics {
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpku2b.p3d";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        visionMode[] = {"Normal"};
                    };
                    class Periscope: ViewOptics {
                        initFov = 0.7;
                        minFov = 0.7;
                        maxFov = 0.7;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
                    };
                    class NVG: Wide {
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        visionMode[] = {"NVG"};
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
                gunnerAction = "rhs_cargosys_btr60_03";
                gunnerName = "Passenger (Top Front Left)";
                memoryPointsGetInGunner = "cargo10";
                memoryPointsGetInGunnerDir = "cargo10 dir";
                proxyIndex = 10;
                maxElev = 0;
                minElev = 0;
                maxTurn = 0.1;
                minTurn = -0.1;
                ejectDeadGunner = 1;
                enabledByAnimationSource = "cargoHandler1";
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerAction = "passenger_flatground_3";
                gunnerName = "Passenger (Top Rear Left)";
                memoryPointsGetInGunner = "cargo11";
                memoryPointsGetInGunnerDir = "cargo11 dir";
                proxyIndex = 11;
            };
            class CargoTurret_04: CargoTurret_01 {
                gunnerAction = "passenger_flatground_4";
                memoryPointsGetInGunner = "cargo12";
                memoryPointsGetInGunnerDir = "cargo12 dir";
                gunnerName = "Passenger (Top Left)";
                proxyIndex = 12;
            };
            class CargoTurret_05: CargoTurret_01 {
                gunnerAction = "passenger_inside_3";
                gunnerName = "Passenger (Top Rear Right)";
                memoryPointsGetInGunner = "cargo13";
                memoryPointsGetInGunnerDir = "cargo13 dir";
                proxyIndex = 13;
            };
            class CargoTurret_06: CargoTurret_01 {
                gunnerAction = "passenger_flatground_4";
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
                maxElev = 0;
                minElev = 0;
                maxTurn = 0.1;
                minTurn = 0;
                ejectDeadGunner = 1;
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
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8};
        getInProxyOrder[] = {
            1,
            2,
            3,
            4,
            5,
            6,
            7,
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
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_body.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_body_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_body_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_details.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_details_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_details_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_glass.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_in.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\btr60_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_destroyed.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class Reflectors {
            class Left {
                color[] = {190, 130, 95};
                ambient[] = {0.1, 0.1, 0.1, 1};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
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
        };
        aggregateReflectors[] = {{"Left"}, {"Right"}};
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_btr_init; (_this select 0) addeventhandler ['HandleDamage',{[_this,0.5,0.002,0.9,0.2] spawn rhs_fnc_activeTirePressure; _this select 2;} ];";
                postInit = "_this call rhs_fnc_reapplyTextures";
                engine = "_this call rhs_fnc_btr_handleHatch;_this call rhs_fnc_engineCheckDamage;";
            };
            class RHS_BTR_Init {
                init = "(_this select 0) lockTurret [[10],true];";
                getOut = "(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
                getIn = "(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
            };
        };
    };
    class rhs_btr60_vmf: rhs_btr60_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr60_vmf.paa";
        scope = 2;
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']", "['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_btr60_vdv: rhs_btr60_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr60_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']", "['Label', cBTRBackArmSymPlaces, 'Army',2]", "['Label', cBTRPlnSymPlaces, 'Platoon',11]"};
    };
    class rhs_btr60_vv: rhs_btr60_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr60_vv.paa";
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
    class rhs_btr60_msv: rhs_btr60_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_btr60_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_armoredcrew";
        rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'DefaultRed']", "['Label', cBTRPlnSymPlaces, 'Platoon',12]"};
    };
    class rhs_zsutank_base: APC_Tracked_02_base_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHSZSUNumberPlaces,'Default']"};
        category = "Armored";
        driveOnComponent[] = {"Slide"};
        simulation = "tankX";
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        maxSpeed = 50;
        enginePower = 209;
        peakTorque = 1176;
        minOmega = 61;
        maxOmega = 209.44;
        idleRpm = 600;
        redRpm = 2000;
        torqueCurve[] = {
            {0, 0},
            {0.3, 0.757238},
            {0.4, 0.868597},
            {0.6, 0.957684},
            {0.7, 1},
            {0.8, 0.746102},
            {1, 0.534521},
            {1.5, 0}
        };
        thrustDelay = 0.6;
        clutchStrength = 80;
        fuelCapacity = 30;
        RHS_fuelCapacity = 520;
        brakeIdleSpeed = 1.78;
        latency = 1.1;
        tankTurnForce = 330000;
        tankTurnForceAngMinSpd = 0.6;
        tankTurnForceAngSpd = 0.91;
        accelAidForceYOffset = -3.5;
        accelAidForceCoef = 4;
        accelAidForceSpd = 1.9;
        engineLosses = 25;
        transmissionLosses = 15;
        normalSpeedForwardCoef = 0.7;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.7,
            0.75,
            0.55,
            0.65,
            0.5,
            0.75,
            0.7,
            0.75,
            0.7,
            0.75,
            0.55,
            1,
            0.5
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R2",
                -7,
                "N",
                0,
                "D1",
                1.25,
                "D2",
                1.2,
                "D3",
                1.15,
                "D4",
                1.05,
                "D5",
                0.95
            };
            TransmissionRatios[] = {"High", 15.8};
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
                side = "left";
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                steering = 0;
                width = 0.33;
                mass = 150;
                MOI = 10;
                maxBrakeTorque = 8000;
                sprungMass = -1;
                springStrength = 150000;
                springDamperRate = 11000;
                dampingRate = 2114;
                dampingRateInAir = 2114;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                maxDroop = 0.18;
                maxCompression = 0.18;
                latStiffX = 3.5;
                latStiffY = 35;
                longitudinalStiffnessPerUnitGravity = 14000;
                frictionVsSlipGraph[] = {{0, 0.45}, {0.18, 1}, {0.6, 0.6}};
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
        author = "RHS";
        vehicleClass = "rhs_vehclass_aa";
        editorSubcategory = "rhs_EdSubcat_aa";
        displayName = "$STR_RHS_ZSU_Name";
        accuracy = 0.3;
        destrType = "DestructDefault";
        model = "\rhsafrf\addons\rhs_a2port_armor\rhs_zsu";
        picture = "\rhsafrf\addons\rhs_a2port_armor\pictures\rhs_zsu23_pic_ca.paa";
        Icon = "\rhsafrf\addons\rhs_a2port_armor\data\icomap_zsu_CA.paa";
        crew = "rhs_msv_crew";
        typicalCargo[] = {};
        side = 0;
        faction = "rhs_faction_tv";
        tracksSpeed = 1;
        irTarget = 1;
        irTargetSize = 1;
        visualTarget = 1;
        visualTargetSize = 1;
        radarTarget = 1;
        radarTargetSize = 1.2;
        receiveRemoteTargets = 1;
        cost = 1500000;
        damageResistance = 0.02;
        crewVulnerable = 1;
        drivercompartments = "Compartment1";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        driverAction = "RHS_ZSU_Driver";
        driverInAction = "RHS_ZSU_Driver";
        driverDoor = "hatchD";
        forceHideDriver = 0;
        driverForceOptics = 1;
        viewDriverInExternal = 1;
        LODDriverOpticsIn = 0;
        LODDriverOpticsOut = 0;
        LODDriverTurnedIn = 0;
        LODDriverTurnedOut = 0;
        unitInfoType = "RHS_RscUnitInfoEastTank";
        mapSize = 6.5;
        commanderCanSee = 31;
        gunnerCanSee = "1+16+4+8";
        threat[] = {0.5, 0.5, 1};
        irScanGround = 0;
        irScanRangeMax = 19000;
        radarType = 4;
        incomingMissileDetectionSystem = 0;
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
        armor = 200;
        armorStructural = 600;
        class ViewOptics: ViewOptics {
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
        };
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = 0.45;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0.5;
                radius = 0.25;
            };
            class HitEngine {
                armor = 0.45;
                material = -1;
                name = "motor";
                visual = "zbytek";
                passThrough = 0.01;
                minimalHit = 0.03;
                explosionShielding = 0.05;
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
            class HitLTrack: HitLTrack {
                armor = 0.5;
                material = -1;
                name = "pas_L";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = 0.5;
                material = -1;
                name = "pas_P";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.5;
                radius = 0.3;
            };
        };
        class RenderTargets {};
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
        class TransportWeapons {
            class _xx_AK74M {
                weapon = "rhs_weap_ak74m";
                count = 1;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 4;
            };
        };
        hiddenSelections[] = {"camo1", "camo2", "camo3", "n1", "n2", "n3"};
        hiddenSelectionsTextures[] = {
            "\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_co.paa",
            "\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_co.paa",
            "\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                textures[] = {"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_co.paa", "\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_co.paa", "\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_co.paa"};
                factions[] = {"rhs_faction_vpvo"};
            };
            class Chdkz {
                displayName = "Chedaki";
                textures[] = {"\rhsafrf\addons\rhs_a2port_armor\data\zsu_01_gue_co.paa", "\rhsafrf\addons\rhs_a2port_armor\data\zsu_02_gue_co.paa", "\rhsafrf\addons\rhs_a2port_armor\data\zsu_03_gue_co.paa"};
                factions[] = {};
            };
            class rhs_sand {
                displayName = "Sand";
                author = "beaar";
                textures[] = {"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa", "\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa", "\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa"};
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
                expression = "_this setVariable ['%s', _value,true];[_this,[['Number', cRHSZSUNumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSZSUNumberPlaces}else{[_this, [['Number', cRHSZSUNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunBeg = "gun_muzzle";
                        gunEnd = "gun_chamber";
                        body = "ObsTurret";
                        gun = "ObsGun";
                        gunnerOutOpticsModel = "";
                        memoryPointGunnerOutOptics = "commanderview";
                        memoryPointGunnerOptics = "commanderview";
                        LODTurnedOut = 1100;
                        gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                        weapons[] = {};
                        magazines[] = {};
                        turretInfoType = "RscWeaponEmpty";
                        forceHideGunner = 0;
                        gunnerInAction = "RHS_ZSU_Commander";
                        gunnerAction = "RHS_ZSU_CommanderOut";
                        gunnerDoor = "hatchC";
                        gunnerForceOptics = 1;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                        minElev = -10;
                        maxElev = 60;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        class ViewOptics: ViewOptics {
                            initFov = 0.111;
                            minFov = 0.111;
                            maxFov = 0.111;
                            visionMode[] = {"Normal", "NVG"};
                        };
                        startEngine = 0;
                        outGunnerMayFire = 0;
                        maxHorizontalRotSpeed = 2;
                        maxVerticalRotSpeed = 2;
                        inGunnerMayFire = 1;
                        viewGunnerInExternal = 1;
                        class OpticsIn {
                            class Wide: ViewOptics {
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                                gunnerOutOpticsModel = "";
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
                                gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                            };
                        };
                        class Components {
                            class AICarSteeringComponent {
                                steeringPIDWeights[] = {1.2, 0.1, 0.2};
                                speedPIDWeights[] = {1.7, 1.3, 1.1};
                                doRemapSpeed = 1;
                                remapSpeedRange[] = {40, 50};
                                remapSpeedScalar[] = {1, 0.35};
                                doPredictForward = 1;
                                predictForwardRange[] = {0.1, 20};
                                steerAheadSaturation[] = {0.01, 0.4};
                                speedPredictionMethod = 1;
                                wheelAngleCoef = 0.7;
                                forwardAngleCoef = 0.7;
                                steeringAngleCoef = 1;
                                differenceAngleCoef = 1;
                                stuckMaxTime = 3;
                                allowOvertaking = 1;
                                allowCollisionAvoidance = 1;
                                allowDrifting = 0;
                                maxWheelAngleDiff = 0.2616;
                                minSpeedToKeep = 0.1;
                                commandTurnFactor = 1;
                            };
                            class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander {
                                class Components {
                                    class EmptyDisplay {
                                        componentType = "EmptyDisplayComponent";
                                    };
                                    class CrewDisplay {
                                        componentType = "CrewDisplayComponent";
                                        resource = "RscCustomInfoCrew";
                                    };
                                    class SensorDisplay {
                                        componentType = "SensorsDisplayComponent";
                                        range[] = {2000, 4000, 8000, 14000};
                                        resource = "RscCustomInfoSensors";
                                    };
                                };
                            };
                            class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander {
                                defaultDisplay = "SensorDisplay";
                                class Components {
                                    class EmptyDisplay {
                                        componentType = "EmptyDisplayComponent";
                                    };
                                    class CrewDisplay {
                                        componentType = "CrewDisplayComponent";
                                        resource = "RscCustomInfoCrew";
                                    };
                                    class SensorDisplay {
                                        componentType = "SensorsDisplayComponent";
                                        range[] = {2000, 4000, 8000, 14000};
                                        resource = "RscCustomInfoSensors";
                                    };
                                };
                            };
                        };
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner {
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {2000, 4000, 8000, 16000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner {
                        defaultDisplay = "SensorDisplay";
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {2000, 4000, 8000, 16000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                };
                LODTurnedOut = 1100;
                weapons[] = {"RHS_weap_AZP23"};
                magazines[] = {"rhs_mag_AZP23_2000"};
                forceHideGunner = 0;
                minElev = -4.5;
                maxElev = 85;
                minTurn = -360;
                maxTurn = 360;
                maxHorizontalRotSpeed = 0.94;
                maxVerticalRotSpeed = 0.6;
                class OpticsIn {
                    class Wide: ViewOptics {
                        initFov = 0.35;
                        minFov = 0.35;
                        maxFov = 0.35;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_a2port_armor\2Dscope_RUAA8";
                        gunnerOutOpticsModel = "";
                        visionMode[] = {"Normal"};
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class Auto: Wide {
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        directionStabilized = 1;
                    };
                };
                gunnerAction = "RHS_ZSU_GunnerOut";
                gunnerInAction = "RHS_ZSU_Gunner";
                gunnerForceOptics = 1;
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.2;
                    minFov = 0.058;
                    maxFov = 0.2;
                    visionMode[] = {"Normal", "NVG"};
                };
                gunnerDoor = "hatchG";
                memoryPointGun[] = {"chase01", "chase02", "chase03", "chase04"};
                turretInfoType = "RscWeaponZeroing";
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
                discreteDistanceInitIndex = 5;
                selectionFireAnim = "zasleh";
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
                        radius = 0.2;
                    };
                    class HitGun {
                        armor = 0.6;
                        material = -1;
                        name = "zbran";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.13;
                        explosionShielding = 0.001;
                        radius = 0.2;
                    };
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_01.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_01_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_01_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_02.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_02_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_02_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_03.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_03_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_03_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_track.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_track_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_armor\data\ZSU_track_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class AnimationSources {
            class HatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: HatchC {};
            class HatchD: HatchC {};
            class muzzle_rot1 {
                weapon = "RHS_weap_AZP23";
                source = "ammorandom";
            };
        };
        class Reflectors {
            class Left {
                color[] = {190, 130, 95};
                ambient[] = {0.1, 0.1, 0.1, 1};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
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
        };
        aggregateReflectors[] = {{"Left", "Right"}};
        class Exhausts {
            class Exhaust1 {
                position = "exhaust";
                direction = "exhaust_dir";
                effect = "ExhaustEffectTankBack";
            };
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 14000;
                            maxRange = 14000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = -1;
                            maxRange = -1;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 100;
                        typeRecognitionDistance = 4000;
                        groundNoiseDistanceCoef = 0.05;
                        maxGroundNoiseDistance = 60;
                        minSpeedThreshold = 20;
                        maxSpeedThreshold = 90;
                        maxFogSeeThrough = 1;
                        aimDown = -35;
                        minTrackableSpeed = 25;
                        maxTrackableSpeed = 555;
                        minTrackableATL = 50;
                    };
                };
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_bmp3_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                getOut = "_this call rhs_fnc_hatchAbandon";
                engine = "_this call rhs_fnc_engineCheckDamage;";
            };
        };
    };
    class rhs_zsu234_aa: rhs_zsutank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zsu234_aa.paa";
        author = "RHS";
        scope = 2;
        displayName = "$STR_RHS_ZSU_Name";
        faction = "rhs_faction_vpvo";
        vehicleClass = "rhs_vehclass_aa";
        editorSubcategory = "rhs_EdSubcat_aa";
    };
};
