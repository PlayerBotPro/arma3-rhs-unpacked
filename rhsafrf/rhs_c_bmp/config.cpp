class CfgPatches {
    class rhs_c_bmp {
        units[] = {
            "rhs_bmp1_vdv",
            "rhs_bmp1p_vdv",
            "rhs_bmp1k_vdv",
            "rhs_bmp1d_vdv",
            "rhs_bmp1_msv",
            "rhs_bmp1p_msv",
            "rhs_bmp1k_msv",
            "rhs_bmp1d_msv",
            "rhs_bmp1_tv",
            "rhs_bmp1p_tv",
            "rhs_bmp1k_tv",
            "rhs_bmp1d_tv",
            "rhs_bmp1_vv",
            "rhs_bmp1p_vv",
            "rhs_bmp1k_vv",
            "rhs_bmp1d_vv",
            "rhs_bmp1_vmf",
            "rhs_bmp1p_vmf",
            "rhs_bmp1k_vmf",
            "rhs_bmp1d_vmf",
            "rhs_brm1k_vdv",
            "rhs_brm1k_msv",
            "rhs_brm1k_tv",
            "rhs_brm1k_vv",
            "rhs_prp3_msv",
            "rhs_prp3_vdv",
            "rhs_prp3_tv",
            "rhs_prp3_vv",
            "rhs_bmp2_vmf",
            "rhs_bmp2e_vmf",
            "rhs_bmp2k_vmf",
            "rhs_bmp2d_vmf",
            "rhs_bmp2_msv",
            "rhs_bmp2e_msv",
            "rhs_bmp2k_msv",
            "rhs_bmp2d_msv",
            "rhs_bmp2_tv",
            "rhs_bmp2e_tv",
            "rhs_bmp2k_tv",
            "rhs_bmp2d_tv",
            "rhs_bmp2_vdv",
            "rhs_bmp2e_vdv",
            "rhs_bmp2k_vdv",
            "rhs_bmp2d_vdv",
            "rhs_bmp2_vv",
            "rhs_bmp2e_vv",
            "rhs_bmp2k_vv",
            "rhs_bmp2d_vv",
            "rhs_Ob_681_2"
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
        name = "BMP-1 & 2 IFV";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class bmp_init {
                file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_bmp_init.sqf";
                description = "Init for BMP-1/2 vehicles";
            };
            class bmp_doors {
                file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_bmp_doors.sqf";
                description = "Door handler for BMP-1/2 vehicles";
            };
            class bmp_konkurs_reload {
                file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_konkurs_reload.sqf";
                description = "BMP-2 Konkurs reload";
            };
            class prp3_autoloader {
                file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_prp3_load.sqf";
                description = "Autoloader gun anim for PRP-3";
            };
            class psnr5k_init {
                file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_psnr5k_init.sqf";
                description = "PSNR-5K Radar init";
            };
            class psnr5k_deploy {
                file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_psnr5k_deploy.sqf";
                description = "PSNR-5K Radar deploy";
            };
            class lockTop {
                file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_lockTop.sqf";
                description = "Disable all top (external) positions on designated vehicle";
            };
            class 9p135_hatch {
                file = "\rhsafrf\addons\rhs_c_bmp\scripts\rhs_9p135_hatch.sqf";
                description = "9P135 top hatch handler";
            };
        };
    };
};
class CfgAnimationSourceSounds {
    class RHS_PSzNR5 {
        class Deploy_Radar {
            loop = 0;
            terminate = 0;
            trigger = "direction";
            sound0[] = {
                "rhsafrf\addons\rhs_bmp\sounds\TallMike_deploy.wav",
                1,
                1,
                25
            };
            sound[] = {"sound0", 1};
        };
        class Retract_Radar {
            loop = 0;
            terminate = 0;
            trigger = "(1 - direction)";
            sound0[] = {
                "rhsafrf\addons\rhs_bmp\sounds\TallMike_hide.wav",
                1,
                1,
                25
            };
            sound[] = {"sound0", 1};
        };
    };
};
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        rhs_bmp1_commander = "rhs_bmp1_commander";
        rhs_bmp1_gunner = "rhs_bmp1_gunner";
        rhs_bmp1_gunner_launcher = "rhs_bmp1_gunner_launcher";
        rhs_bmp1_commanderIn = "rhs_bmp1_commanderIn";
        rhs_bmp1_gunnerIn = "rhs_bmp1_gunnerIn";
        rhs_bmp2_driver = "rhs_bmp2_driver";
        rhs_bmp2_commander = "rhs_bmp2_commander";
        rhs_bmp2_commanderIn = "rhs_bmp2_commanderIn";
        rhs_bmp2_gunner = "rhs_bmp2_gunner";
        rhs_bmp2_gunnerIn = "rhs_bmp2_gunnerIn";
        rhs_brmk1_commanderIn = "rhs_brmk1_commanderIn";
        rhs_bmp_Cargo = "rhs_BMP_Cargo01";
        rhs_bmp_cargostatic_01 = "rhs_bmp_cargostatic_01";
        rhs_bmp_cargostatic_02 = "rhs_bmp_cargostatic_02";
        rhs_bmp_cargostatic_03 = "rhs_bmp_cargostatic_03";
        rhs_bmp_cargostatic_04 = "rhs_bmp_cargostatic_04";
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
        class rhs_bmp1_commander: Crew {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_comm.rtm";
            interpolateTo[] = {"KIA_rhs_bmp1_commander", 1};
        };
        class rhs_bmp1_commanderIn: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_commanderIn.rtm";
            interpolateTo[] = {"KIA_rhs_bmp1_commanderin", 1};
        };
        class rhs_bmp1_gunner: Crew {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_gunner.rtm";
            interpolateTo[] = {"KIA_rhs_bmp1_gunner", 1};
        };
        class rhs_bmp1_gunner_launcher: Crew {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_gunner_launcher.rtm";
            interpolateTo[] = {"KIA_rhs_bmp1_gunner", 1};
        };
        class rhs_bmp1_gunnerIn: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_gunnerIn.rtm";
            interpolateTo[] = {"KIA_rhs_bmp1_gunnerin", 1};
        };
        class rhs_BMP2_Driver: Crew {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_BMP2_Driver.rtm";
            interpolateTo[] = {"KIA_rhs_BMP2_Driver", 1};
        };
        class KIA_rhs_BMP2_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_kia_BMP2_Driver.rtm";
            connectTo[] = {"Unconscious", 0.1};
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
        };
        class rhs_bmp2_commander: Crew {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_comm.rtm";
            interpolateTo[] = {"KIA_rhs_bmp2_commander", 1};
        };
        class rhs_bmp2_commanderIn: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_commanderIn.rtm";
            interpolateTo[] = {"KIA_rhs_bmp2_commanderIn", 1};
        };
        class rhs_bmp2_gunner: Crew {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_gunner.rtm";
            interpolateTo[] = {"KIA_rhs_bmp2_gunner", 1};
        };
        class rhs_bmp2_gunnerIn: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_gunnerIn.rtm";
            interpolateTo[] = {"KIA_rhs_bmp2_gunnerin", 1};
        };
        class rhs_brmk1_commanderIn: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_brmk1_commanderIn.rtm";
            interpolateTo[] = {"KIA_rhs_bmp2_commanderIn", 1};
        };
        class KIA_rhs_bmp1_commander: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_bmp\anims\KIA_rhs_bmp1_comm.rtm";
        };
        class KIA_rhs_bmp1_gunner: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_bmp\anims\KIA_rhs_bmp1_gunner.rtm";
        };
        class KIA_rhs_bmp2_commander: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_bmp\anims\KIA_rhs_bmp2_comm.rtm";
        };
        class KIA_rhs_bmp2_gunner: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_bmp\anims\KIA_rhs_bmp2_gunner.rtm";
        };
        class KIA_rhs_bmp1_commanderIn: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_commanderIn.rtm";
        };
        class KIA_rhs_bmp1_gunnerIn: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp1_gunnerIn.rtm";
        };
        class KIA_rhs_bmp2_commanderIn: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_commanderIn.rtm";
        };
        class KIA_rhs_bmp2_gunnerIn: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_bmp2_gunnerIn.rtm";
        };
        class KIA_rhs_brmk1_commanderIn: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_bmp\anims\rhs_brmk1_commanderIn.rtm";
        };
        class RHS_KIA_BMP2_Cargo01: KIA_rhs_BMP2_Driver {
            file = "\rhsafrf\addons\rhs_BMP\anims\KIA_BMP2_Cargo01.rtm";
        };
        class rhs_BMP_Cargo01: Crew {
            file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V0.rtm";
            interpolateTo[] = {"RHS_KIA_BMP2_Cargo01", 0.1};
            connectTo[] = {
                "rhs_BMP_Cargo01",
                0.1,
                "rhs_BMP_Cargo01_V1",
                0.1,
                "rhs_BMP_Cargo01_V2",
                0.1,
                "rhs_BMP_Cargo01_V3",
                0.1,
                "rhs_BMP_Cargo01_V4",
                0.1
            };
            equivalentTo = "rhs_BMP_Cargo01";
            variantsAI[] = {
                "rhs_BMP_Cargo01",
                0.6,
                "rhs_BMP_Cargo01_V1",
                0.1,
                "rhs_BMP_Cargo01_V2",
                0.1,
                "rhs_BMP_Cargo01_V3",
                0.1,
                "rhs_BMP_Cargo01_V4",
                0.1
            };
            variantAfter[] = {5, 10, 20};
            speed = 0.3;
        };
        class rhs_BMP_Cargo01_V1: rhs_BMP_Cargo01 {
            file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V1.rtm";
            connectTo[] = {"rhs_BMP_Cargo01", 0.1};
            speed = 0.236;
            variantAfter[] = {4, 4, 4};
        };
        class rhs_BMP_Cargo01_V2: rhs_BMP_Cargo01 {
            file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V2.rtm";
            connectTo[] = {"rhs_BMP_Cargo01", 0.1};
            speed = 0.169;
            variantAfter[] = {6, 6, 6};
        };
        class rhs_BMP_Cargo01_V3: rhs_BMP_Cargo01 {
            file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V3.rtm";
            connectTo[] = {"rhs_BMP_Cargo01", 0.1};
            speed = 0.197;
            variantAfter[] = {5, 5, 5};
        };
        class rhs_BMP_Cargo01_V4: rhs_BMP_Cargo01 {
            file = "\rhsafrf\addons\rhs_BMP\anims\BMP2_Cargo01_V4.rtm";
            connectTo[] = {"rhs_BMP_Cargo01", 0.1};
            speed = 0.197;
            variantAfter[] = {5, 5, 5};
        };
        class rhs_bmp_cargostatic_01: Crew {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic01.rtm";
            interpolateTo[] = {"RHS_KIA_BMP2_Cargo01", 1};
            connectTo[] = {
                "rhs_bmp_cargostatic_01_var0",
                0.25,
                "rhs_bmp_cargostatic_01_var1",
                0.25,
                "rhs_bmp_cargostatic_01_var2",
                0.25,
                "rhs_bmp_cargostatic_01_var3",
                0.25
            };
            equivalentTo = "rhs_bmp_cargostatic_01";
            variantsPlayer[] = {
                "rhs_bmp_cargostatic_01_var0",
                0.25,
                "rhs_bmp_cargostatic_01_var1",
                0.25,
                "rhs_bmp_cargostatic_01_var2",
                0.25,
                "rhs_bmp_cargostatic_01_var3",
                0.25
            };
            variantsAI[] = {
                "rhs_bmp_cargostatic_01_var0",
                0.25,
                "rhs_bmp_cargostatic_01_var1",
                0.25,
                "rhs_bmp_cargostatic_01_var2",
                0.25,
                "rhs_bmp_cargostatic_01_var3",
                0.25
            };
            variantAfter[] = {0.0001, 0.0001, 0.0001};
        };
        class rhs_bmp_cargostatic_01_var0: rhs_bmp_cargostatic_01 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_01_var1: rhs_bmp_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic01_var1.rtm";
            speed = 0.074534;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_01_var2: rhs_bmp_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic01_var2.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_01_var3: rhs_bmp_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic01_var3.rtm";
            speed = 0.033;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_02: rhs_bmp_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic02.rtm";
            connectTo[] = {
                "rhs_bmp_cargostatic_02_var0",
                0.1,
                "rhs_bmp_cargostatic_02_var1",
                0.1,
                "rhs_bmp_cargostatic_02_var2",
                0.1
            };
            equivalentTo = "rhs_bmp_cargostatic_02";
            variantsPlayer[] = {
                "rhs_bmp_cargostatic_02_var0",
                0.3,
                "rhs_bmp_cargostatic_02_var1",
                0.3,
                "rhs_bmp_cargostatic_02_var2",
                0.3
            };
            variantsAI[] = {
                "rhs_bmp_cargostatic_02_var0",
                0.3,
                "rhs_bmp_cargostatic_02_var1",
                0.3,
                "rhs_bmp_cargostatic_02_var2",
                0.3
            };
            variantAfter[] = {0.0001, 0.0001, 0.0001};
        };
        class rhs_bmp_cargostatic_02_var0: rhs_bmp_cargostatic_02 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_02_var1: rhs_bmp_cargostatic_02 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic02_var1.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_02_var2: rhs_bmp_cargostatic_02 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic02_var2.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_03: rhs_bmp_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic03.rtm";
            connectTo[] = {
                "rhs_bmp_cargostatic_03_var0",
                0.25,
                "rhs_bmp_cargostatic_03_var1",
                0.25,
                "rhs_bmp_cargostatic_03_var2",
                0.25,
                "rhs_bmp_cargostatic_03_var3",
                0.25
            };
            equivalentTo = "rhs_bmp_cargostatic_03";
            variantsPlayer[] = {
                "rhs_bmp_cargostatic_03_var0",
                0.25,
                "rhs_bmp_cargostatic_03_var1",
                0.25,
                "rhs_bmp_cargostatic_03_var2",
                0.25,
                "rhs_bmp_cargostatic_03_var3",
                0.25
            };
            variantsAI[] = {
                "rhs_bmp_cargostatic_03_var0",
                0.25,
                "rhs_bmp_cargostatic_03_var1",
                0.25,
                "rhs_bmp_cargostatic_03_var2",
                0.25,
                "rhs_bmp_cargostatic_03_var3",
                0.25
            };
            variantAfter[] = {0.0001, 0.0001, 0.0001};
        };
        class rhs_bmp_cargostatic_03_var0: rhs_bmp_cargostatic_03 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_03_var1: rhs_bmp_cargostatic_03 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic03_var1.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_03_var2: rhs_bmp_cargostatic_03 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic03_var2.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
            speed = 0.088235;
        };
        class rhs_bmp_cargostatic_03_var3: rhs_bmp_cargostatic_03 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic03_var3.rtm";
            speed = 0.059701;
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_04: rhs_bmp_cargostatic_01 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic04.rtm";
            connectTo[] = {
                "rhs_bmp_cargostatic_04_var0",
                0.1,
                "rhs_bmp_cargostatic_04_var1",
                0.1,
                "rhs_bmp_cargostatic_04_var2",
                0.1
            };
            equivalentTo = "rhs_bmp_cargostatic_04";
            variantsPlayer[] = {
                "rhs_bmp_cargostatic_04_var0",
                0.3,
                "rhs_bmp_cargostatic_04_var1",
                0.3,
                "rhs_bmp_cargostatic_04_var2",
                0.3
            };
            variantsAI[] = {
                "rhs_bmp_cargostatic_04_var0",
                0.3,
                "rhs_bmp_cargostatic_04_var1",
                0.3,
                "rhs_bmp_cargostatic_04_var2",
                0.3
            };
            variantAfter[] = {0.0001, 0.0001, 0.0001};
        };
        class rhs_bmp_cargostatic_04_var0: rhs_bmp_cargostatic_04 {
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_04_var1: rhs_bmp_cargostatic_04 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic04_var1.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
        class rhs_bmp_cargostatic_04_var2: rhs_bmp_cargostatic_04 {
            file = "\rhsafrf\addons\rhs_bmp\anims\BMP2_CargoStatic04_var2.rtm";
            variantsPlayer[] = {};
            variantsAI[] = {};
            variantAfter[] = {0, 0, 0};
            connectTo[] = {};
        };
    };
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class DefaultEventHandlers;
class RCWSOptics;
class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
        class Sounds;
        class HitPoints;
        class CommanderOptics;
    };
    class Tank_F: Tank {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
                class ViewGunner;
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
    class rhs_bmp1tank_base: Tank_F {
        dlc = "RHS_AFRF";
        rhs_habarType = 2;
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
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        vehicleClass = "rhs_vehclass_ifv";
        editorSubcategory = "rhs_EdSubcat_ifv";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMP1_Name";
        accuracy = 0.3;
        viewCargoShadow = 1;
        tf_range_api = 17000;
        enableGPS = 0;
        model = "\rhsafrf\addons\rhs_bmp\BMP1.p3d";
        picture = "\rhsafrf\addons\rhs_bmp\pictures\rhs_bmp1_pic_ca.paa";
        Icon = "\A3\armor_f_beta\APC_Tracked_01\Data\UI\map_APC_Tracked_01_ca.paa";
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
        class DriverOpticsIn {
            class OpticView: ViewPilot {
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
                hitpoint = "HitPeriscope13";
                initFov = 0.7;
                minFov = 0.7;
                maxFov = 0.7;
            };
        };
        typicalCargo[] = {};
        side = 0;
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',11]", "['Label', cBMPLeftBack, 'Army', 2]"};
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_APC_s"};
                speechPlural[] = {"veh_vehicle_APC_p"};
            };
        };
        textSingular = "BMP";
        textPlural = "BMPs";
        nameSound = "veh_vehicle_APC_s";
        getInAction = "GetInMedium";
        getOutAction = "GetOutMedium";
        cargoDoors[] = {
            "DoorL",
            "DoorR",
            "DoorL",
            "DoorR",
            "DoorL",
            "DoorR",
            "DoorL"
        };
        memoryPointsGetInCargo[] = {
            "pos cargo L",
            "pos cargo R",
            "pos cargo L",
            "pos cargo R",
            "pos cargo L",
            "pos cargo R",
            "pos cargo L"
        };
        memoryPointsGetInCargoDir[] = {
            "pos cargo L dir",
            "pos cargo R dir",
            "pos cargo L dir",
            "pos cargo R dir",
            "pos cargo L dir",
            "pos cargo R dir",
            "pos cargo L dir"
        };
        cargoGetInAction[] = {
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInMedium"
        };
        cargoGetOutAction[] = {
            "GetOutLow",
            "GetOutLow",
            "GetOutLow",
            "GetOutLow",
            "GetOutLow",
            "GetOutLow",
            "GetOutMedium"
        };
        cargoAction[] = {"RHS_BMP_Cargo"};
        driverAction = "driver_apcwheeled2_out";
        driverInAction = "rhs_BMP2_Driver";
        LODDriverTurnedOut = 0;
        viewDriverInExternal = 1;
        simulation = "tankX";
        maxSpeed = 60;
        normalSpeedForwardCoef = 0.73;
        slowSpeedForwardCoef = 0.35;
        brakeIdleSpeed = 0;
        fuelCapacity = 29.5;
        RHS_fuelCapacity = 462;
        tankTurnForce = 450000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.92;
        accelAidForceCoef = 4.3;
        accelAidForceYOffset = -3.9;
        accelAidForceSpd = 2.23;
        canFloat = 1;
        waterLeakiness = 250;
        maxFordingDepth = 0.05;
        waterResistance = 1;
        waterDamageEngine = 0.9;
        engineShiftY = -0.8;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 3.2;
        waterResistanceCoef = 0.015;
        waterEffectSpeed = 5;
        engineEffectSpeed = 5;
        waterFastEffectSpeed = 28;
        torqueCurve[] = {
            {0.0350877, 0},
            {0.315789, 0.953109},
            {0.526316, 1},
            {0.561404, 1},
            {0.631579, 0.953109},
            {0.77193, 0.897044},
            {0.912281, 0.826707},
            {1.08807, 0}
        };
        engineMOI = 8;
        enginePower = 224;
        peakTorque = 981;
        minOmega = 75;
        maxOmega = 298.45;
        idleRPM = 700;
        redRPM = 2850;
        thrustDelay = 0.3;
        dampingRateFullThrottle = 0.3;
        dampingRateZeroThrottleClutchEngaged = 3;
        dampingRateZeroThrottleClutchDisengaged = 0.25;
        engineLosses = 25;
        transmissionLosses = 15;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        clutchStrength = 20;
        latency = 1.3;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.350877,
            0.350877,
            0,
            0.835088,
            0.350877,
            0.894737,
            0.666667,
            0.912281,
            0.666667,
            0.912281,
            0.666667,
            1,
            0.666667
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -7.25,
                "N",
                0,
                "D1",
                5.25,
                "D2",
                2.842,
                "D3",
                1.912,
                "D4",
                1.28,
                "D5",
                0.858
            };
            AmphibiousRatios[] = {"R1", -14.5, "N", 0, "D1", 14.5};
            TransmissionRatios[] = {"High", 12.6};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.3;
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                steering = 0;
                width = 0.288;
                mass = 120;
                MOI = 7.5615;
                maxBrakeTorque = 2000;
                sprungMass = 1208.33;
                springStrength = 127500;
                springDamperRate = 7000;
                maxDroop = 0.18;
                maxCompression = 0.18;
                dampingRate = 344;
                dampingRateInAir = 344;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 2;
                latStiffY = 30;
                longitudinalStiffnessPerUnitGravity = 32000;
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
        soundEngineOnInt[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_start", 2.7879457, 1};
        soundEngineOnExt[] = {
            "\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
            2.7309573,
            1,
            300
        };
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop", 0.78794575, 1};
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
            0.7309574,
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
                frequency = "0.95	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
                volume = "(thrust factor [0.1,0])*engineOn*camPos*(rpm interpolate [700,900,1,0])";
            };
            class Engine {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
                    1.2,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(600/	2850),(1000/	2850)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
                    0.9943282,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
            };
            class Engine1_ext_thrust_extra {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
                    1.9943281,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
                volume = "(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
            };
            class Engine1_ext_thrust_extra2 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
                    2.394328,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
                volume = "(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
            };
            class Engine2_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
                    1.1912509,
                    1,
                    850
                };
                frequency = "0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
                    1.2,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
                    1.4220185,
                    1,
                    840
                };
                frequency = "0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
                    1.6125376,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
                volume = "engineOn*camPos*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
            };
            class IdleThrust {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
                    1.5912509,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
            };
            class EngineThrust {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
                    1.4220185,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
                    1.5589254,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
                    1.7125376,
                    1,
                    850
                };
                frequency = "0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
                    1.8848932,
                    1,
                    950
                };
                frequency = "0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
                    1.9782794,
                    1,
                    1000
                };
                frequency = "0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
                    3.1952624,
                    1,
                    1050
                };
                frequency = "0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
            };
            class Idle_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap", 0.81622773, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
            };
            class Engine_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.5548134, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
            };
            class Engine1_int_thrust_extra {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
                    0.9943282,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
                volume = "(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
            };
            class Engine1_int_thrust_extra2 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
                    1.3943282,
                    1,
                    800
                };
                frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
                volume = "(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
            };
            class Engine1_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.59810716, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
            };
            class Engine2_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.6466836, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
            };
            class Engine3_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.7011872, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
            };
            class Engine4_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.7623413, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
            };
            class Engine5_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.83095735, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
            };
            class IdleThrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap", 0.65481335, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
            };
            class EngineThrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1", 0.6981072, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2", 0.7466836, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 0.7466836, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 0.8011872, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 0.86234134, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 1.1, 1};
                frequency = "0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
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
                    0.19810717,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsOutH1 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.1466836,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsOutH2 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
                    0.1011872,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsOutH3 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
                    0.16234133,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsOutH4 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
                    0.26234132,
                    1,
                    220
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
            class ThreadsOutS0 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.11622776,
                    1,
                    120
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsOutS1 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.15481336,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsOutS2 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
                    0.19810717,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsOutS3 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
                    0.1466836,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsOutS4 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
                    0.2011872,
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
        wheelCircumference = 1.922;
        attenuationEffectType = "TankAttenuation";
        extCameraPosition[] = {0, 2, -8};
        unitInfoType = "RHS_RscUnitInfoEastTank";
        cost = 1500000;
        damageResistance = 0.02;
        crewVulnerable = 0;
        transportSoldier = 8;
        unloadInCombat = 1;
        enableManualFire = 0;
        incomingMissileDetectionSystem = 0;
        armor = 200;
        armorStructural = 600;
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
        class UserActions {
            class Snorkel_1 {
                displayName = "$STR_RHS_SnorkelOn";
                position = "MainTurret";
                onlyforplayer = 0;
                showWindow = 0;
                radius = 3.5;
                condition = "((this animationSourcePhase 'Snorkel' == 0) && (player == driver this))";
                statement = "this animateSource ['snorkel',1]";
            };
            class Snorkel_2: Snorkel_1 {
                displayName = "$STR_RHS_SnorkelOff";
                condition = "((this animationSourcePhase 'Snorkel' == 1) && (player == driver this))";
                statement = "this animateSource ['snorkel',0]";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "MainTurret";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cabinlights_hide',[2]] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
        };
        class AnimationSources {
            class maljutka_hide {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0;
            };
            class maljutka_reload: maljutka_hide {
                animPeriod = 7.1;
            };
            class maljutka_reload_fins: maljutka_hide {
                animPeriod = 1.25;
            };
            class maljutka_reload_hide {
                source = "ammo";
                weapon = "rhs_weap_9k11";
            };
            class MainGun_fix: maljutka_reload {
                animPeriod = 8.6;
            };
            class recoil_source_2a28 {
                source = "reload";
                weapon = "rhs_weap_2a28";
            };
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class recoil_source_2a42 {
                source = "reload";
                weapon = "rhs_weap_2a42";
            };
            class muzzle_hide_hmg: recoil_source_2a42 {};
            class muzzle_rot_hmg: recoil_source_2a42 {
                source = "ammorandom";
            };
            class muzzleMG {
                source = "ammorandom";
                weapon = "rhs_weap_pkt";
            };
            class Snorkel {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class crate_l1_unhide {
                source = "user";
                displayName = "hide l1 crate";
                mass = 1;
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class crate_l2_unhide: crate_l1_unhide {
                displayName = "hide l2 crate";
            };
            class crate_l3_unhide: crate_l1_unhide {
                displayName = "hide l3 crate";
            };
            class crate_r1_unhide: crate_l1_unhide {
                displayName = "hide r1 crate";
            };
            class crate_r2_unhide: crate_l1_unhide {
                displayName = "hide r2 crate";
            };
            class crate_r3_unhide: crate_l1_unhide {
                displayName = "hide r3 crate";
            };
            class wood_1_unhide: crate_l1_unhide {
                displayName = "hide wood log 1";
            };
            class maljutka_hide_source {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0;
                useSource = 1;
                displayName = "remove maljutka";
                onPhaseChanged = "params['_v','_p'];if(_p isEqualTo 1)then{_v removeWeaponTurret ['rhs_weap_9k11',[0]];}else{ _v addWeaponTurret ['rhs_weap_9k11',[0]]};";
            };
            class cabinlights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class HatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: HatchC {};
            class HatchD: HatchC {};
            class HatchC2: HatchC {};
            class DoorL: HatchC {
                animPeriod = 1;
            };
            class DoorR: DoorL {};
            class cargoHandler1: DoorL {
                initPhase = 1;
            };
            class s_2p130_load {
                source = "user";
                animPeriod = 1.5;
                initPhase = 0;
            };
            class s_2p130_load_shell {
                source = "door";
                animPeriod = 0.75;
                initPhase = 0;
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
            class HitPeriscope11: HitPeriscope1 {
                hitpoint = "HitPeriscope11";
            };
            class HitPeriscope10: HitPeriscope1 {
                hitpoint = "HitPeriscope10";
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
            class HitPeriscopeCom1: HitPeriscope1 {
                hitpoint = "HitPeriscopeCom1";
            };
            class HitPeriscopeCom2: HitPeriscope1 {
                hitpoint = "HitPeriscopeCom2";
            };
            class HitPeriscopeGun1: HitPeriscope1 {
                hitpoint = "HitPeriscopeGun1";
            };
            class HitPeriscopeGun2: HitPeriscope1 {
                hitpoint = "HitPeriscopeGun2";
            };
            class HitPeriscopeGun3: HitPeriscope1 {
                hitpoint = "HitPeriscopeGun3";
            };
            class HitPeriscopeGun4: HitPeriscope1 {
                hitpoint = "HitPeriscopeGun4";
            };
            class HitMainSight: HitPeriscope1 {
                hitpoint = "HitMainSight";
            };
            class HitComSight: HitPeriscope1 {
                hitpoint = "HitComSight";
            };
        };
        class HitPoints: HitPoints {
            class Hit_Ammo {
                armor = -80;
                minimalHit = "- 0.4";
                explosionShielding = 0;
                name = "Hit_Ammo";
                visual = "-";
                armorComponent = "Hit_Ammo";
                passThrough = 0;
            };
            class HitHull: HitHull {
                armor = 0.4;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.54;
                explosionShielding = 0.15;
                radius = 0.15;
                depends = "Hit_Ammo factor [0.5,1]";
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
                        position = "vyfuk start";
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
                explosionShielding = 1;
                material = -1;
                passThrough = 1;
                name = "palivo";
                visual = "-";
                radius = 0.11;
            };
            class HitPeriscope1 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope1";
                visual = "periscope1";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope2 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope2";
                visual = "periscope2";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope3 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope3";
                visual = "periscope3";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope4 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope4";
                visual = "periscope4";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope5 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope5";
                visual = "periscope5";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope6 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope6";
                visual = "periscope6";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope7 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope7";
                visual = "periscope7";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope8 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope8";
                visual = "periscope8";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope9 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope9";
                visual = "periscope9";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope10 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope10";
                visual = "periscope10";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope11 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope11";
                visual = "periscope11";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope12 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope12";
                visual = "periscope12";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope13 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope13";
                visual = "periscope13";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope14 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscope14";
                visual = "periscope14";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscopeCom1 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscopeCom1";
                visual = "periscopeCom1";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscopeCom2 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscopeCom2";
                visual = "periscopeCom2";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscopeGun1 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscopeGun1";
                visual = "periscopeGun1";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscopeGun2 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscopeGun2";
                visual = "periscopeGun2";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscopeGun3 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscopeGun3";
                visual = "periscopeGun3";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscopeGun4 {
                armor = -20;
                material = -1;
                passThrough = 0;
                name = "periscopeGun4";
                visual = "periscopeGun4";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitMainSight: HitPeriscope1 {
                armor = -40;
                minimalHit = -0.1;
                explosionShielding = 0.3;
                name = "mainSight";
                visual = "mainSight";
                radius = 0.05;
            };
            class HitComSight: HitMainSight {
                name = "comSight";
                visual = "comSight";
            };
        };
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerDoor = "hatchG";
                isPersonTurret = 1;
                gunnerAction = "RHS_passenger_inside_6";
                gunnerInAction = "rhs_bmp1_gunnerIn";
                personTurretAction = "RHS_passenger_inside_6";
                soundServo[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\turret1.wss",
                    4,
                    1,
                    10
                };
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
                gunnerOutForceOptics = 0;
                gunnerForceoptics = 1;
                weapons[] = {"rhs_weap_2a28", "rhs_weap_pkt", "rhs_weap_9k11"};
                magazines[] = {
                    "rhs_mag_pg15v_20",
                    "rhs_mag_og15v_20",
                    "rhs_mag_9m14m",
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
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                hasGunner = 1;
                forcehidegunner = 0;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                nightVision = 1;
                viewGunnerInExternal = 1;
                canUseScanners = 0;
                allowTabLock = 0;
                turretInfoType = "RHS_RscWeapon1PN22M_FCS";
                animationSourceHatch = "HatchGunner";
                animationSourceBody = "MainTurret";
                animationSourceGun = "MainGun";
                memoryPointGun = "machinegun";
                selectionFireAnim = "zasleh_1";
                lockWhenDriverOut = 1;
                primaryGunner = 1;
                primaryObserver = 0;
                minElev = -24;
                maxElev = 35;
                initElev = 0;
                minOutElev = -45;
                maxOutElev = 45;
                startEngine = 0;
                stabilizedInAxes = 0;
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                maxHorizontalRotSpeed = 0.54;
                maxVerticalRotSpeed = 0.24;
                class HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -1;
                        name = "vez";
                        visual = "MainTurret";
                        passThrough = 0;
                        minimalHit = 0.14;
                        explosionShielding = 0.001;
                        radius = 0.15;
                    };
                    class HitGun {
                        armor = 0.6;
                        material = -1;
                        name = "zbran";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.13;
                        explosionShielding = 0.001;
                        radius = 0.15;
                    };
                };
                gunBeg = "Gun_start";
                gunEnd = "Gun_end";
                body = "RHS_BMP1_MainTurret";
                gun = "RHS_BMP1_MainGun";
                class Turrets {};
                gunnerOutOpticsModel = "";
                class OpticsIn {
                    class Periscope {
                        hitpoint = "HitPeriscopeGun3";
                        camPos = "view_periscope";
                        opticsDisplayName = "PERISCOPE";
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
                        initFov = 0.47;
                        minFov = 0.47;
                        maxFov = 0.47;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                    };
                    class pn22m1 {
                        hitpoint = "HitMainSight";
                        camPos = "gunnerview";
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
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m2";
                    };
                    class pn22m1n {
                        hitpoint = "HitMainSight";
                        camPos = "gunnerview";
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
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m1n";
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
                class TurnIn {
                    limitsArrayTop[] = {{15, -180}, {15, 180}};
                    limitsArrayBottom[] = {
                        {-4, -180},
                        {-4, 17},
                        {10.3683, 18},
                        {10.7173, 36},
                        {-4, 37},
                        {-4, 180}
                    };
                };
                class TurnOut {
                    limitsArrayTop[] = {{45, -170}, {45, 170}};
                    limitsArrayBottom[] = {{-24, -170}, {-24, 170}};
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
            class Com_BMP1: NewTurret {
                dontCreateAI = 1;
                gunnerDoor = "hatchC";
                gunnerName = "$STR_POSITION_COMMANDER";
                body = "RHS_BMP1_com_coppula_BMP1";
                gun = "RHS_BMP1_OU3_BMP1";
                gunnerOutForceOptics = 0;
                gunnerForceoptics = 1;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                weapons[] = {};
                magazines[] = {};
                animationSourceHatch = "HatchCommander";
                animationSourceBody = "obsturret";
                animationSourceGun = "obsGun";
                memoryPointGunnerOptics = "commanderview";
                memoryPointGunnerOutOptics = "commander_out_view";
                proxyType = "CPCommander";
                proxyIndex = 1;
                lockWhenDriverOut = 0;
                primaryGunner = 0;
                primaryObserver = 0;
                hasCommander = 0;
                gunBeg = "Mgun_end";
                gunEnd = "Mgun_start";
                isPersonTurret = 1;
                gunnerInAction = "rhs_bmp1_commanderIn";
                gunnerAction = "RHS_VehicleTurnout_BMP1_1";
                personTurretAction = "RHS_VehicleTurnout_BMP1_1";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                stabilizedInAxes = 3;
                minElev = -4;
                maxElev = 12;
                initElev = 0;
                minTurn = -135;
                maxTurn = 135;
                initTurn = 0;
                gunnerOutOpticsModel = "";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                soundServo[] = {};
                outGunnerMayFire = 0;
                inGunnerMayFire = 1;
                startEngine = 0;
                viewGunnerInExternal = 1;
                canUseScanners = 0;
                allowTabLock = 0;
                class OpticsIn {
                    class Wide: ViewOptics {
                        hitpoint = "HitComSight";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                    };
                    class Night: Wide {
                        initFov = 0.166667;
                        minFov = 0.166667;
                        maxFov = 0.166667;
                        visionMode[] = {"NVG"};
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
                gunnerName = "Passenger (Left Rear)";
                gunnerCompartments = "Compartment3";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                memoryPointGunnerOptics = "";
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                CanHideGunner = 0;
                commanding = -2;
                weapons[] = {"rhs_weap_DummyLauncher"};
                gunnerAction = "passenger_inside_1";
                memoryPointsGetInGunner = "cargo8";
                memoryPointsGetInGunnerDir = "cargo8_dir";
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                proxyIndex = 14;
                class Reflectors {
                    class cabin {
                        color[] = {40, 350, 960};
                        ambient[] = {5, 0, 0};
                        intensity = 4;
                        size = 1;
                        innerAngle = 60;
                        outerAngle = 145;
                        coneFadeCoef = 1;
                        position = "cabin_light";
                        direction = "cabin_light_dir";
                        hitpoint = "cabin_light";
                        selection = "cabin_light";
                        useFlare = 0;
                        flareSize = 1;
                        flareMaxDistance = 5;
                        dayLight = 1;
                        blinking = 0;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 50;
                            hardLimitStart = 0.7;
                            hardLimitEnd = 1.2;
                        };
                    };
                    class cargo_light_1: cabin {
                        position = "cargo_light_1";
                        direction = "cargo_light_1_dir";
                        hitpoint = "cargo_light_1";
                        intensity = 5;
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
                    class cargo_light_2: cargo_light_1 {
                        position = "cargo_light_2";
                        direction = "cargo_light_2_dir";
                        hitpoint = "cargo_light_2";
                        intensity = 9;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 70;
                            hardLimitStart = 1;
                            hardLimitEnd = 1.5;
                        };
                    };
                };
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerAction = "passenger_flatground_2";
                gunnerName = "Passenger (Left Middle)";
                memoryPointsGetInGunner = "cargo9";
                memoryPointsGetInGunnerDir = "cargo9_dir";
                proxyIndex = 9;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerAction = "passenger_flatground_3";
                gunnerName = "Passenger (Right Rear)";
                memoryPointsGetInGunner = "cargo10";
                memoryPointsGetInGunnerDir = "cargo10_dir";
                proxyIndex = 10;
            };
            class CargoTurret_04: CargoTurret_01 {
                gunnerAction = "passenger_flatground_4";
                gunnerName = "Passenger (Right Middle)";
                memoryPointsGetInGunner = "cargo11";
                memoryPointsGetInGunnerDir = "cargo11_dir";
                proxyIndex = 11;
            };
            class CargoTurret_05: CargoTurret_01 {
                gunnerAction = "passenger_boat_3";
                gunnerName = "Passenger (Center)";
                memoryPointsGetInGunner = "cargo12";
                memoryPointsGetInGunnerDir = "cargo12_dir";
                maxElev = 45;
                minElev = -15;
                maxTurn = 81;
                minTurn = -25;
                proxyIndex = 12;
            };
            class CargoTurret_06: CargoTurret_01 {
                gunnerAction = "rhs_bmp_cargostatic_01";
                gunnerName = "Passenger (Rear)";
                memoryPointsGetInGunner = "cargo13";
                memoryPointsGetInGunnerDir = "cargo13_dir";
                proxyIndex = 13;
                ejectDeadGunner = 1;
                maxElev = 0.001;
                minElev = 0;
                maxTurn = 0.001;
                minTurn = 0;
                enabledByAnimationSource = "cargoHandler1";
            };
            class CargoTurret_07: CargoTurret_06 {
                gunnerAction = "rhs_bmp_cargostatic_04";
                gunnerName = "Passenger (Left Front)";
                memoryPointsGetInGunner = "cargo14";
                memoryPointsGetInGunnerDir = "cargo14_dir";
                proxyIndex = 18;
            };
            class CargoTurret_08: CargoTurret_06 {
                gunnerAction = "rhs_bmp_cargostatic_02";
                gunnerName = "Passenger (Right Front)";
                memoryPointsGetInGunner = "cargo15";
                memoryPointsGetInGunnerDir = "cargo15_dir";
                proxyIndex = 15;
            };
            class CargoTurret_09: CargoTurret_06 {
                gunnerAction = "rhs_bmp_cargostatic_03";
                gunnerName = "Passenger (Front)";
                memoryPointsGetInGunner = "cargo16";
                memoryPointsGetInGunnerDir = "cargo16_dir";
                proxyIndex = 16;
            };
            class CargoTurret_10: CargoTurret_01 {
                gunnerAction = "passenger_flatground_4";
                gunnerName = "Passenger (Front Center)";
                memoryPointsGetInGunner = "cargo17";
                memoryPointsGetInGunnerDir = "cargo17_dir";
                proxyIndex = 17;
            };
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
            16,
            17,
            18
        };
        rhs_topPositions[] = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3",
            "i4",
            "i5"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"
                };
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv",
                    "rhs_faction_tv"
                };
            };
            class chedaki {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmp\textures\bmp_1_chdkz_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_2_chdkz_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_3_chdkz_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_4_chdkz_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_5_chdkz_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_6_chdkz_co.paa"
                };
                factions[] = {"rhs_faction_insurgents"};
            };
            class rhs_sand {
                displayName = "Sand";
                author = "beaar";
                textures[] = {
                    "rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa",
                    "rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa",
                    "rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa",
                    "rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa",
                    "rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa",
                    "rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"
                };
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cBMP3NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBMP3NumberPlaces}else{[_this, [['Number', cBMP3NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
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
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPPlatoon,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalArmy_type: rhs_decalPlatoon_type {
                displayName = "Define left back symbol type";
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
                displayName = "Set left back symbol";
                tooltip = "Define symbol located on left back side of vehicle. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalArmy";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPLeftBack,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalRightTurret_type: rhs_decalArmy_type {
                displayName = "Define right turret symbol type";
                property = "rhs_decalRightTurret_type";
            };
            class rhs_decalRightTurret: rhs_decalPlatoon {
                displayName = "Set right turret symbol";
                tooltip = "Define symbol located on right side of vehicle turret. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalRightTurret";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPRightTurret,  _this getVariable ['rhs_decalRightTurret_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalLeftTurret_type: rhs_decalArmy_type {
                displayName = "Define left turret symbol type";
                property = "rhs_decalLeftTurret_type";
            };
            class rhs_decalLeftTurret: rhs_decalPlatoon {
                displayName = "Set left turret symbol";
                tooltip = "Define symbol located on left side of vehicle turret. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalLeftTurret";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPLeftTurret,  _this getVariable ['rhs_decalLeftTurret_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalFront_type: rhs_decalArmy_type {
                displayName = "Define front symbol type";
                property = "rhs_decalFront_type";
            };
            class rhs_decalFront: rhs_decalPlatoon {
                displayName = "Set front symbol";
                tooltip = "Define symbol located on front of vehicle hull. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalFront";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPFront,  _this getVariable ['rhs_decalFront_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
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
            class wood_1_unhide: crate_l1_unhide {
                displayName = "Hide wood log 1";
                property = "wood_1_unhide";
            };
            class wood_2_unhide: crate_l1_unhide {
                displayName = "Hide wood log 2";
                property = "wood_2_unhide";
            };
            class rhs_disableHabar: crate_l1_unhide {
                displayName = "Disable habar";
                property = "rhs_disableHabar";
                expression = "[_this,_value,'%s',_value] call rhs_fnc_setHabarEden";
                defaultValue = "0";
            };
            class rhs_snorkel: rhs_disableHabar {
                displayName = "Rise Snorkel";
                property = "rhs_snorkel";
                expression = "_this animateSource ['Snorkel',_value,true]";
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
            "crate_r1_unhide",
            "crate_r2_unhide",
            "crate_r3_unhide",
            "wood_1_unhide",
            "wood_2_unhide"
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_bmp\textures\BMP_1.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_1_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_1_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_2.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_2_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_2_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_3.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_3_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_3_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_4.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_4_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_4_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_5.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_5_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_5_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_6.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_6_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_6_des.rvmat",
                "rhsafrf\addons\rhs_btr70\data\scope_glass.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_6_des.rvmat"
            };
        };
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
        };
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
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
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_bmp_init;";
                postInit = "_this call rhs_fnc_reapplyTextures";
                getout = "_this call rhs_fnc_bmp_doors;_this call rhs_fnc_hatchAbandon";
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
    class rhs_bmp_base: rhs_bmp1tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp_base.paa";
    };
    class rhs_bmp1_vdv: rhs_bmp_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1_vdv.paa";
        scope = 2;
        Icon = "\rhsafrf\addons\rhs_bmp\icons\icomap_bmp1_CA.paa";
        mapsize = 6.7;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1_tv: rhs_bmp1_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1_tv.paa";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1_msv: rhs_bmp1_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1_vmf: rhs_bmp1_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1_vv: rhs_bmp1_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1p_vdv: rhs_bmp1_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1p_vdv.paa";
        model = "\rhsafrf\addons\rhs_bmp\BMP1p.p3d";
        picture = "\rhsafrf\addons\rhs_bmp\pictures\rhs_bmp1p_pic_ca.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMP1P_Name";
        forceIngarage = 0;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_2a28", "rhs_weap_pkt", "rhs_weap_902a"};
                magazines[] = {
                    "rhs_mag_og15v_20",
                    "rhs_mag_pg15v_20",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17_6"
                };
                LODTurnedIn = 1200;
                class Turrets: Turrets {
                    class Launcher: CommanderOptics {
                        gunnername = "9P135 Launcher";
                        proxyType = "CPGunner";
                        primaryObserver = 0;
                        proxyindex = 2;
                        dontCreateAi = 1;
                        cantCreateAI = 1;
                        gunnercompartments = "Compartment4";
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
                                hitpoint = "HitAtgmSight";
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
                                hitpoint = "HitAtgmSight";
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
                                isTurret = 1;
                                armor = 0.5;
                                material = -1;
                                name = "launcher_base_hit";
                                visual = "launcher_base_hit";
                                passThrough = 0;
                                minimalHit = 0.14;
                                explosionShielding = 0.001;
                                radius = 0.25;
                            };
                            class HitGunLauncher {
                                isGun = 1;
                                armor = 0.6;
                                material = -1;
                                name = "launcher_hit";
                                visual = "launcher_hit";
                                passThrough = 0;
                                minimalHit = 0.13;
                                explosionShielding = 0.001;
                                radius = 0.25;
                            };
                        };
                    };
                };
            };
            class Com_BMP1: Com_BMP1 {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
            class CargoTurret_07: CargoTurret_07 {};
            class CargoTurret_08: CargoTurret_08 {};
            class CargoTurret_09: CargoTurret_09 {};
            class CargoTurret_10: CargoTurret_10 {};
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
            class HitAtgmSight: HitPeriscope1 {
                hitpoint = "HitAtgmSight";
            };
        };
        class HitPoints: HitPoints {
            class HitAtgmSight: HitMainSight {
                name = "atgmSight";
                visual = "atgmSight";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_bmp\textures\BMP_1.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_1_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_1_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_2.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_2_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_2_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_3.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_3_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_3_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_4.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_4_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_4_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_5.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_5_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_5_des.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_6.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_6_dam.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_6_des.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\atgm\data\rhs_9p135.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\atgm\data\rhs_9p135_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\atgm\data\rhs_9p135_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\atgm\data\rhs_9p135_1.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\atgm\data\rhs_9p135_1_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\atgm\data\rhs_9p135_1_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\scope_glass.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\periscope_int_damage.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "rhsafrf\addons\rhs_bmp\textures\BMP_6_des.rvmat"
            };
        };
        class Library {
            libTextDesc = "Improved variant of the BMP-1. Weight: 13,4t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (40 rounds) penetration:	PG-15V HEAT	350mm RHA, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                getOut = "if((_this select 3) isEqualTo [0,0])then{[(_this select 0),[[0],false]] remoteExecCall ['lockTurret']}";
                reloaded = "[_this select 0,_this select 1,_this select 4,'rhs_weap_9m111','rhs_weap_9m113_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
            };
            class RHS_BMP1P_Lock {
                init = "(_this select 0) lockTurret [[0,0],true]";
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
                condition = "((call rhs_fnc_findPlayer) == gunner this) && (this animationSourcePhase '9p135_hide_source' isEqualTo 0)";
                statement = "[this,0] call rhs_fnc_9p135_hatch";
            };
            class LeaveLauncher: UseLauncher {
                displayName = "Leave launcher";
                condition = "vehicle (call rhs_fnc_findPlayer) turretUnit [0,0] == (call rhs_fnc_findPlayer)";
                statement = "[this,1] call rhs_fnc_9p135_hatch";
            };
        };
    };
    class rhs_bmp1p_tv: rhs_bmp1p_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1p_tv.paa";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1p_msv: rhs_bmp1p_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1p_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1p_vmf: rhs_bmp1p_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1p_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1p_vv: rhs_bmp1p_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1p_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1k_vdv: rhs_bmp1_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1k_vdv.paa";
        model = "\rhsafrf\addons\rhs_bmp\BMP1K.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMP1K_Name";
        transportsoldier = 3;
        tf_range_api = 35000;
        typicalCargo[] = {"rhs_msv_armoredcrew", "rhs_msv_armoredcrew", "rhs_msv_armoredcrew"};
        class Library {
            libTextDesc = "Command variant of the BMP-1. Weight: 13,2t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (40 rounds) penetration:	PG-15V HEAT	350mm RHA, 9M14M Maljutka-M ATGM  400mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
        };
    };
    class rhs_bmp1k_tv: rhs_bmp1k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1k_tv.paa";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1k_msv: rhs_bmp1k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1k_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1k_vmf: rhs_bmp1k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1k_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1k_vv: rhs_bmp1k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1k_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1d_vdv: rhs_bmp1_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1d_vdv.paa";
        model = "\rhsafrf\addons\rhs_bmp\BMP1D.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMP1D_Name";
        armor = 300;
        canFloat = 0;
        class UserActions {};
        class Library {
            libTextDesc = "Uparmored variant of the BMP-1. Weight: 13,5t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18+10mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (40 rounds) penetration:	PG-15V HEAT	350mm RHA, 9M14M Maljutka-M ATGM  400mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
        };
    };
    class rhs_bmp1d_tv: rhs_bmp1d_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1d_tv.paa";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1d_msv: rhs_bmp1d_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1d_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1d_vmf: rhs_bmp1d_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1d_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp1d_vv: rhs_bmp1d_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp1d_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_prp3_vdv: rhs_bmp1_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_prp3_vdv.paa";
        class Wheels: Wheels {
            class L2: L2 {
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                dampingRate = 328;
                dampingRateInAir = 328;
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
        model = "\rhsafrf\addons\rhs_bmp\PRP3.p3d";
        picture = "\rhsafrf\addons\rhs_bmp\pictures\rhs_bmp1_pic_ca.paa";
        Icon = "\rhsafrf\addons\rhs_bmp\icons\icomap_prp3_ca.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_PRP3_Name";
        typicalCargo[] = {
            "rhs_msv_armoredcrew",
            "rhs_msv_armoredcrew",
            "rhs_msv_armoredcrew",
            "rhs_msv_armoredcrew",
            "rhs_msv_armoredcrew"
        };
        transportSoldier = 0;
        animationSourceHatch = "Hatchdriver";
        class Library {
            libTextDesc = "Artillery reconnaissance vehicle. Equipment consists of an 1RL126 counterbattery/surveillance radar, 1V44/1G13M/1G25-1 navigational systems, a 1D6M1 laser rangefinder, a 1PN29 night vision device and a 90 mm 2P130-1 launcher with 20 9M41 illumination missiles.  Weight: 13,2t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 7.62 mm PKT coaxial general purpose machine gun (1000 rounds)";
        };
        artilleryScanner = 1;
        class Turrets: Turrets {
            class reconTurret: MainTurret {
                weapons[] = {"rhs_weap_pkt"};
                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250"
                };
                gunnerName = "$STR_RHS_OPERATORRECON";
                gunnerAction = "rhs_bmp2_gunner";
                gunnerInAction = "rhs_bmp2_gunnerin";
                soundServo[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\turret1.wss",
                    4,
                    1,
                    10
                };
                gunnerOutForceOptics = 0;
                gunnerForceoptics = 1;
                memoryPointGunnerOptics = "gunnerview";
                hasGunner = 1;
                nightVision = 1;
                animationSourceHatch = "hatchgunner";
                animationSourceBody = "MainTurret";
                animationSourceGun = "MainGun";
                memoryPointGun = "machinegun";
                selectionFireAnim = "zasleh_1";
                lockWhenDriverOut = 1;
                maxHorizontalRotSpeed = 0.54;
                maxVerticalRotSpeed = 0.24;
                commanding = 4;
                primaryGunner = 0;
                primaryObserver = 0;
                minElev = -5;
                maxElev = 15;
                initElev = 0;
                startEngine = 0;
                stabilizedInAxes = 3;
                forceHidegunner = 0;
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
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142";
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
                };
                class TurnIn {};
                class Reflectors {};
                class Turrets: Turrets {
                    class CommanderOptics: NewTurret {
                        gunnerName = "$STR_POSITION_COMMANDER";
                        body = "cseat_turret";
                        gun = "cseat_gun";
                        gunnerOutForceOptics = 0;
                        gunnerForceoptics = 1;
                        weapons[] = {};
                        magazines[] = {};
                        animationSourceHatch = "hatch_commander_prp";
                        animationSourceBody = "cseat_Turret";
                        animationSourceGun = "cseat_Gun";
                        memoryPointGunnerOptics = "cseat_view";
                        memoryPointGunnerOutOptics = "";
                        nightVision = 1;
                        proxyType = "CPCommander";
                        proxyIndex = 1;
                        lockWhenDriverOut = 0;
                        primaryGunner = 0;
                        primaryObserver = 1;
                        hasCommander = 1;
                        commanding = 6;
                        gunBeg = "";
                        gunEnd = "";
                        gunnerAction = "rhs_bmp2_gunner";
                        gunnerInAction = "rhs_bmp2_gunnerIn";
                        stabilizedInAxes = 3;
                        minElev = -4;
                        maxElev = 10;
                        initElev = 0;
                        minTurn = -10;
                        maxTurn = 10;
                        initTurn = 0;
                        gunnerOutOpticsModel = "";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpku2b.p3d";
                        soundServo[] = {};
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 0;
                        startEngine = 0;
                        class Hitpoints {};
                    };
                };
            };
            class operatorCalculatorTurret: Com_BMP1 {
                proxyType = "CPGunner";
                proxyIndex = 2;
                primaryGunner = 0;
                primaryObserver = 0;
                hasGunner = 1;
                commanding = 5;
                gunnerName = "$STR_RHS_OPERATORCALC";
                memoryPointGunnerOptics = "operatorview";
                animationSourceHatch = "hatch_calc_prp";
                gunnerInAction = "rhs_bmp1_commanderIn";
                class Hitpoints {};
            };
            class radioOperatorTurret: NewTurret {
                class ViewGunner;
                proxyType = "CPGunner";
                proxyIndex = 3;
                gunnerName = "$STR_RHS_OPERATORRADIO";
                gunnerOutForceOptics = 0;
                animationSourceHatch = "";
                memoryPointGunnerOptics = "lseat_view";
                memoryPointGunnerOutOptics = "";
                nightVision = 1;
                forceHidegunner = 1;
                lockWhenDriverOut = 1;
                primaryGunner = 1;
                primaryObserver = 0;
                hasGunner = 1;
                commanding = 3;
                gunnerAction = "rhs_bmp1_commander";
                gunnerInAction = "rhs_bmp1_commanderin";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerForceOptics = 1;
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
                soundServo[] = {};
                outGunnerMayFire = 0;
                inGunnerMayFire = 1;
                startEngine = 0;
                animationSourceBody = "s_2P130_turret";
                animationSourceGun = "s_2P130_gun";
                body = "RHS_BMP1_2P130_turret";
                gun = "RHS_BMP1_2P130_mortar_gun";
                gunBeg = "2p130_start";
                gunEnd = "2p130_end";
                turretInfoType = "rhs_gui_optic_2p130";
                weapons[] = {"rhs_weap_2p130"};
                magazines[] = {"rhs_mag_9m41_20"};
                lockWhenVehicleSpeed = 1;
                cameraDir = "lseat_view_dir";
                elevationMode = 1;
                initCamElev = 0;
                minCamElev = 0;
                maxCamElev = 75;
                initElev = 35;
                initTurn = -90;
                minElev = 35;
                maxElev = 80;
                minTurn = -180;
                maxTurn = 180;
                class Hitpoints {};
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_bmp_init; _this spawn rhs_fnc_psnr5k_init;";
                fired = "_this call rhs_fnc_prp3_autoloader;";
                reloaded = "";
            };
        };
        class AnimationSources: AnimationSources {
            class PSzNR_5_s {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions: UserActions {
            class PSzNR_1 {
                displayName = "$STR_RHS_PSNR5RADARON_NAME";
                position = "MainTurret";
                onlyforplayer = 0;
                radius = 3.5;
                showWindow = 0;
                condition = "((call rhs_fnc_findPlayer) == commander this) AND {(this animationSourcePhase 'PSzNR_5_s' == 0) AND (this getVariable ['RHS_Radar_Enabled', true])}";
                statement = "[this] call RHS_fnc_psnr5k_deploy;;";
            };
            class PSzNR_2 {
                displayName = "$STR_RHS_PSNR5RADAROFF_NAME";
                position = "MainTurret";
                onlyforplayer = 0;
                radius = 3.5;
                showWindow = 0;
                condition = "((call rhs_fnc_findPlayer) == commander this) AND {(this animationSourcePhase 'PSzNR_5_s' == 1)}";
                statement = "[this] call RHS_fnc_psnr5k_deploy;;";
            };
        };
    };
    class rhs_prp3_tv: rhs_prp3_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_prp3_tv.paa";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_prp3_msv: rhs_prp3_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_prp3_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_prp3_vmf: rhs_prp3_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_prp3_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_prp3_vv: rhs_prp3_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_prp3_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2e_vdv: rhs_bmp1_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2e_vdv.paa";
        class Wheels: Wheels {
            class L2: L2 {
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                dampingRate = 328;
                dampingRateInAir = 328;
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
        model = "\rhsafrf\addons\rhs_bmp\BMP2.p3d";
        picture = "\rhsafrf\addons\rhs_bmp\pictures\rhs_bmp2_pic_ca.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMP2e_Name";
        Icon = "\rhsafrf\addons\rhs_bmp\data\icomap_bmp2_CA.paa";
        weaponsGroup1 = 128;
        weaponsGroup4 = 64;
        driverCanSee = "2+4+8";
        gunnerCanSee = "2+4+8";
        commanderCanSee = "2+4+8";
        unitInfoType = "RHS_RscInfoBMP2";
        enableManualFire = 1;
        typicalCargo[] = {"rhs_msv_armoredcrew", "rhs_msv_armoredcrew", "rhs_msv_armoredcrew"};
        armor = 260;
        cost = 10000;
        transportSoldier = 7;
        cargoDoors[] = {
            "DoorL",
            "DoorR",
            "DoorL",
            "DoorR",
            "DoorL",
            "DoorR",
            "HatchF"
        };
        memoryPointsGetInCargo[] = {
            "pos cargo L",
            "pos cargo R",
            "pos cargo L",
            "pos cargo R",
            "pos cargo L",
            "pos cargo R",
            "pos cargo F"
        };
        memoryPointsGetInCargoDir[] = {
            "pos cargo L dir",
            "pos cargo R dir",
            "pos cargo L dir",
            "pos cargo R dir",
            "pos cargo L dir",
            "pos cargo R dir",
            "pos cargo F dir"
        };
        cargoGetInAction[] = {
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInAMV_cargo",
            "GetInMedium"
        };
        cargoGetOutAction[] = {
            "GetOutLow",
            "GetOutLow",
            "GetOutLow",
            "GetOutLow",
            "GetOutLow",
            "GetOutLow",
            "GetOutMedium"
        };
        class AnimationSources: AnimationSources {
            class 1PZ3_Use {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
            class TCOverrideTurret {
                source = "user";
                animPeriod = 4;
                initPhase = 0;
            };
            class TCOverrideGun: TCOverrideTurret {};
            class maljutka_hide_source: maljutka_hide_source {
                displayName = "";
            };
            class konkurs_hide_source: maljutka_hide_source {
                displayName = "remove ATGM launcher";
                onPhaseChanged = "params['_v','_p'];if(_p isEqualTo 1)then{_v removeWeaponTurret ['rhs_weap_9m113',[0]];}else{ _v addWeaponTurret ['rhs_weap_9m113',[0]]};";
            };
            class caps_hide {
                source = "ammo";
                weapon = "rhs_weap_9m113";
            };
            class launcher_reload {
                source = "user";
                animPeriod = 10;
                initPhase = 0;
            };
            class HatchF: HatchC {};
            class HitAtgmSight: HitPeriscope1 {
                hitpoint = "HitAtgmSight";
            };
            class HitAASight: HitPeriscope1 {
                hitpoint = "HitAASight";
            };
        };
        class HitPoints: HitPoints {
            class HitAtgmSight: HitMainSight {
                name = "atgmSight";
                visual = "atgmSight";
            };
            class HitAASight: HitMainSight {
                name = "AASight";
                armorComponent = "HitAASight";
                visual = "AASight";
            };
        };
        class Library {
            libTextDesc = "The BMP-2 is a second-generation, amphibious infantry fighting vehicle introduced in the 1980s in the Soviet Union, following the BMP-1 of the 1960s. Weight: 14,3t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 30 mm Shipunov 2A42 Autocannon (500 rounds) penetration:	3UBR6 APBC	18mm RHA @60 degrees @1500m, 3UBR8 APDS	25mm RHA @60 degrees @1500m, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerDoor = "hatchG";
                gunnerAction = "rhs_bmp2_gunner";
                gunnerInAction = "rhs_bmp2_gunnerin";
                soundServo[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\turret1.wss",
                    4,
                    1,
                    10
                };
                gunnerOutForceOptics = 0;
                gunnerForceoptics = 1;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                weapons[] = {
                    "rhs_weap_2a42",
                    "rhs_weap_pkt",
                    "rhs_weap_9m113",
                    "rhs_weap_902a"
                };
                magazines[] = {
                    "rhs_mag_3uof8_340",
                    "rhs_mag_3ubr6_160",
                    "rhs_mag_9m113",
                    "rhs_mag_9m113",
                    "rhs_mag_9m113",
                    "rhs_mag_9m113",
                    "rhs_mag_762x54mm_2000",
                    "rhs_mag_3d17_6"
                };
                memoryPointGunnerOptics = "view_bpk42";
                memoryPointGunnerOutOptics = "view_bpk42";
                hasGunner = 1;
                forcehidegunner = 0;
                viewGunnerInExternal = 1;
                nightVision = 1;
                animationSourceHatch = "HatchGunner";
                animationSourceBody = "MainTurret";
                animationSourceGun = "MainGun";
                memoryPointGun = "machinegun";
                selectionFireAnim = "zasleh_1";
                lockWhenDriverOut = 1;
                primaryGunner = 1;
                primaryObserver = 0;
                minElev = -5;
                maxElev = 74;
                initElev = 0;
                startEngine = 0;
                stabilizedInAxes = 3;
                gunnerOutOpticsModel = "";
                maxhorizontalrotspeed = 0.61;
                maxverticalrotspeed = 0.104;
                turretInfoType = "RHS_RscWeaponBPK42_FCS";
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                canUseScanners = 0;
                allowTabLock = 0;
                class OpticsIn {
                    class bpk142 {
                        opticsDisplayName = "DAY";
                        hitpoint = "HitMainSight";
                        camPos = "view_bpk42";
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
                    };
                    class 9sh119m1: bpk142 {
                        opticsDisplayName = "ATGM";
                        hitpoint = "HitAtgmSight";
                        camPos = "view_sh119m1";
                        initFov = 0.07;
                        minFov = 0.07;
                        maxFov = 0.07;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
                    };
                    class bpk142n {
                        opticsDisplayName = "NIGHT";
                        hitpoint = "HitMainSight";
                        camPos = "view_bpk42";
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
                    };
                };
                gunBeg = "Gun_start";
                gunEnd = "Gun_end";
                body = "RHS_BMP1_MainTurret";
                gun = "RHS_BMP1_MainGun";
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
                        dontCreateAI = 1;
                        gunnerDoor = "hatchC";
                        gunnerName = "$STR_POSITION_COMMANDER";
                        body = "RHS_BMP1_com_coppula_BMP2";
                        gun = "RHS_BMP1_OU3_BMP2";
                        gunnerOutForceOptics = 0;
                        gunnerForceoptics = 1;
                        weapons[] = {};
                        magazines[] = {};
                        animationSourceHatch = "HatchCommander_BMP2";
                        animationSourceBody = "obsturret";
                        animationSourceGun = "obsGun";
                        memoryPointGunnerOptics = "commanderview";
                        memoryPointGunnerOutOptics = "commander_out_view";
                        proxyType = "CPCommander";
                        proxyIndex = 1;
                        lockWhenDriverOut = 0;
                        primaryGunner = 0;
                        primaryObserver = 0;
                        hasCommander = 1;
                        viewGunnerInExternal = 1;
                        LodOpticsIn = 0;
                        LodOpticsOut = 0;
                        gunBeg = "Mgun_end";
                        gunEnd = "Mgun_start";
                        isPersonTurret = 1;
                        gunnerAction = "RHS_passenger_inside_6";
                        gunnerInAction = "rhs_bmp2_commanderIn";
                        personTurretAction = "RHS_passenger_inside_6";
                        stabilizedInAxes = 3;
                        selectionFireAnim = "";
                        minElev = -4;
                        maxElev = 60;
                        initElev = 0;
                        minTurn = -135;
                        maxTurn = 135;
                        initTurn = 0;
                        gunnerOutOpticsModel = "";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpku2b.p3d";
                        turretInfoType = "RHS_RscWeaponBMP2_TKN3_FCS";
                        class OpticsIn {
                            class AA1 {
                                opticsDisplayName = "AA1";
                                hitpoint = "HitAASight";
                                camPos = "view_1pz3";
                                camDir = "view_1pz3_dir";
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
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                            };
                            class AA2: AA1 {
                                opticsDisplayName = "AA2";
                                initFov = 0.175;
                                minFov = 0.175;
                                maxFov = 0.175;
                            };
                            class DAY {
                                hitpoint = "HitComSight";
                                camPos = "view_tkn3";
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
                                opticsDisplayName = "TKN3";
                                initFov = 0.14;
                                minFov = 0.14;
                                maxFov = 0.14;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3";
                            };
                            class NIGHT: DAY {
                                opticsDisplayName = "NIGHT";
                                initFov = 0.166667;
                                minFov = 0.166667;
                                maxFov = 0.166667;
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
                                visionMode[] = {"NVG"};
                            };
                        };
                        soundServo[] = {};
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        startEngine = 0;
                        canUseScanners = 0;
                        allowTabLock = 0;
                        class Hitpoints {};
                    };
                };
                class TurnIn {};
            };
            class CargoTurret_01: CargoTurret {
                gunnerName = "Passenger (Left Rear)";
                gunnerCompartments = "Compartment3";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                memoryPointGunnerOptics = "";
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                CanHideGunner = 0;
                commanding = -2;
                weapons[] = {"rhs_weap_DummyLauncher"};
                gunnerAction = "passenger_inside_1";
                memoryPointsGetInGunner = "cargo8";
                memoryPointsGetInGunnerDir = "cargo8_dir";
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                proxyIndex = 8;
                class Reflectors {
                    class cabin {
                        color[] = {40, 350, 960};
                        ambient[] = {5, 0, 0};
                        intensity = 4;
                        size = 1;
                        innerAngle = 60;
                        outerAngle = 145;
                        coneFadeCoef = 1;
                        position = "cabin_light";
                        direction = "cabin_light_dir";
                        hitpoint = "cabin_light";
                        selection = "cabin_light";
                        useFlare = 0;
                        flareSize = 1;
                        flareMaxDistance = 5;
                        dayLight = 1;
                        blinking = 0;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 50;
                            hardLimitStart = 0.7;
                            hardLimitEnd = 1.2;
                        };
                    };
                    class cargo_light_1: cabin {
                        position = "cargo_light_1";
                        direction = "cargo_light_1_dir";
                        hitpoint = "cargo_light_1";
                        intensity = 5;
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
                    class cargo_light_2: cargo_light_1 {
                        position = "cargo_light_2";
                        direction = "cargo_light_2_dir";
                        hitpoint = "cargo_light_2";
                        intensity = 9;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 70;
                            hardLimitStart = 1;
                            hardLimitEnd = 1.5;
                        };
                    };
                };
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerAction = "passenger_flatground_2";
                gunnerName = "Passenger (Left Middle)";
                memoryPointsGetInGunner = "cargo9";
                memoryPointsGetInGunnerDir = "cargo9_dir";
                proxyIndex = 9;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerAction = "passenger_flatground_3";
                gunnerName = "Passenger (Right Rear)";
                memoryPointsGetInGunner = "cargo10";
                memoryPointsGetInGunnerDir = "cargo10_dir";
                proxyIndex = 10;
            };
            class CargoTurret_04: CargoTurret_01 {
                gunnerAction = "passenger_flatground_4";
                gunnerName = "Passenger (Right Middle)";
                memoryPointsGetInGunner = "cargo11";
                memoryPointsGetInGunnerDir = "cargo11_dir";
                proxyIndex = 11;
            };
            class CargoTurret_05: CargoTurret_01 {
                gunnerAction = "passenger_boat_3";
                gunnerName = "Passenger (Center)";
                memoryPointsGetInGunner = "cargo12";
                memoryPointsGetInGunnerDir = "cargo12_dir";
                maxElev = 45;
                minElev = -15;
                maxTurn = 81;
                minTurn = -25;
                proxyIndex = 12;
            };
            class CargoTurret_06: CargoTurret_01 {
                gunnerAction = "rhs_bmp_cargostatic_01";
                gunnerName = "Passenger (Rear)";
                memoryPointsGetInGunner = "cargo13";
                memoryPointsGetInGunnerDir = "cargo13_dir";
                proxyIndex = 13;
                ejectDeadGunner = 1;
                maxElev = 0.001;
                minElev = 0;
                maxTurn = 0.001;
                minTurn = 0;
                enabledByAnimationSource = "cargoHandler1";
            };
            class CargoTurret_07: CargoTurret_06 {
                gunnerAction = "rhs_bmp_cargostatic_04";
                gunnerName = "Passenger (Left Front)";
                memoryPointsGetInGunner = "cargo14";
                memoryPointsGetInGunnerDir = "cargo14_dir";
                proxyIndex = 14;
            };
            class CargoTurret_08: CargoTurret_06 {
                gunnerAction = "rhs_bmp_cargostatic_02";
                gunnerName = "Passenger (Right Front)";
                memoryPointsGetInGunner = "cargo15";
                memoryPointsGetInGunnerDir = "cargo15_dir";
                proxyIndex = 15;
            };
            class CargoTurret_09: CargoTurret_06 {
                gunnerAction = "rhs_bmp_cargostatic_03";
                gunnerName = "Passenger (Front)";
                memoryPointsGetInGunner = "cargo16";
                memoryPointsGetInGunnerDir = "cargo16_dir";
                proxyIndex = 16;
            };
            class CargoTurret_10: CargoTurret_01 {
                gunnerAction = "passenger_flatground_4";
                gunnerName = "Passenger (Front Center)";
                memoryPointsGetInGunner = "cargo17";
                memoryPointsGetInGunnerDir = "cargo17_dir";
                proxyIndex = 17;
            };
        };
        cargoProxyIndexes[] = {1, 4, 2, 5, 3, 6, 7};
        getInProxyOrder[] = {
            1,
            4,
            2,
            5,
            3,
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
            16,
            17
        };
        rhs_topPositions[] = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                reloaded = "_this call rhs_fnc_bmp_konkurs_reload";
            };
        };
    };
    class rhs_bmp2e_tv: rhs_bmp2e_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2e_tv.paa";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2e_msv: rhs_bmp2e_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2e_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2e_vmf: rhs_bmp2e_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2e_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2e_vv: rhs_bmp2e_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2e_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2_vdv: rhs_bmp2e_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2_vdv.paa";
        model = "\rhsafrf\addons\rhs_bmp\BMP2_2.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMP2_Name";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "rhs_mag_3uof8_340",
                    "rhs_mag_3ubr8_160",
                    "rhs_mag_9m113M",
                    "rhs_mag_9m113M",
                    "rhs_mag_9m113M",
                    "rhs_mag_9m113M",
                    "rhs_mag_762x54mm_2000",
                    "rhs_mag_3d17_6"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
            class CargoTurret_07: CargoTurret_07 {};
            class CargoTurret_08: CargoTurret_08 {};
            class CargoTurret_09: CargoTurret_09 {};
            class CargoTurret_10: CargoTurret_10 {};
        };
    };
    class rhs_bmp2_tv: rhs_bmp2_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2_tv.paa";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2_msv: rhs_bmp2_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2_vmf: rhs_bmp2_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2_vv: rhs_bmp2_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2k_vdv: rhs_bmp2_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2k_vdv.paa";
        model = "\rhsafrf\addons\rhs_bmp\BMP2K.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMP2K_Name";
        transportsoldier = 3;
        typicalCargo[] = {"rhs_msv_armoredcrew", "rhs_msv_armoredcrew", "rhs_msv_armoredcrew"};
        tf_range_api = 35000;
        class Library {
            libTextDesc = "Command variant of the BMP-2. Weight: 14,3t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 30 mm Shipunov 2A42 Autocannon (500 rounds) penetration:	3UBR6 APBC	18mm RHA @60 degrees @1500m, 3UBR8 APDS	25mm RHA @60 degrees @1500m, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        dontCreateAI = 0;
                        primaryObserver = 1;
                    };
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
            class CargoTurret_07: CargoTurret_07 {};
            class CargoTurret_08: CargoTurret_08 {};
            class CargoTurret_09: CargoTurret_09 {};
            class CargoTurret_10: CargoTurret_10 {};
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmp\textures\bmp_1k_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_4k_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
            "rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmp\textures\bmp_1k_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_4k_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
                    "rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"
                };
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv",
                    "rhs_faction_tv"
                };
            };
        };
        cargoDoors[] = {"DoorL", "DoorR", "HatchF"};
        memoryPointsGetInCargo[] = {"pos cargo L", "pos cargo R", "pos cargo F"};
        memoryPointsGetInCargoDir[] = {"pos cargo L dir", "pos cargo R dir", "pos cargo F dir"};
        cargoGetInAction[] = {"GetInAMV_cargo", "GetInAMV_cargo", "GetInMedium"};
        cargoGetOutAction[] = {"GetOutLow", "GetOutLow", "GetOutMedium"};
        cargoProxyIndexes[] = {1, 4, 7};
        getInProxyOrder[] = {1, 4, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    };
    class rhs_bmp2k_tv: rhs_bmp2k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2k_tv.paa";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2k_msv: rhs_bmp2k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2k_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
    };
    class rhs_bmp2k_vmf: rhs_bmp2k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2k_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
    };
    class rhs_bmp2k_vv: rhs_bmp2k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2k_vv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
    };
    class rhs_bmp2d_vdv: rhs_bmp2_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2d_vdv.paa";
        model = "\rhsafrf\addons\rhs_bmp\BMP2D.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BMP2D_Name";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',11]", "['Label', cBMPLeftBack, 'Army', 2]"};
        armor = 300;
        canFloat = 0;
        class UserActions {
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "MainTurret";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cabinlights_hide',[2]] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
        };
        class Library {
            libTextDesc = "Uparmored variant of the BMP-2. Weight: 14,5t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13+10mm rear Hull:  7-19mm front, 16-18+10mm sides, 16mm rear Primary armament: 30 mm Shipunov 2A42 Autocannon (500 rounds) penetration:	3UBR6 APBC	18mm RHA @60 degrees @1500m, 3UBR8 APDS	25mm RHA @60 degrees @1500m, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
        };
    };
    class rhs_bmp2d_tv: rhs_bmp2d_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2d_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
    };
    class rhs_bmp2d_msv: rhs_bmp2d_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2d_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
    };
    class rhs_bmp2d_vmf: rhs_bmp2d_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2d_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_bmp2d_vv: rhs_bmp2d_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2d_vv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
    };
    class rhs_Ob_681_2: rhs_bmp2e_msv {
        model = "\rhsafrf\addons\rhs_bmp\Ob_681_2.p3d";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "Obyekt-681-2";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    "rhs_weap_2a41",
                    "rhs_weap_pkt",
                    "rhs_weap_nsvt_obj681",
                    "rhs_weap_9m113"
                };
                magazines[] = {
                    "rhs_mag_pg15v_20",
                    "rhs_mag_og15v_20",
                    "rhs_mag_9m113",
                    "rhs_mag_9m113",
                    "rhs_mag_9m113",
                    "rhs_mag_9m113",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_127x108mm_100",
                    "rhs_mag_127x108mm_100",
                    "rhs_mag_127x108mm_100",
                    "rhs_mag_127x108mm_100",
                    "rhs_mag_127x108mm_100"
                };
                minElev = -5;
                maxElev = 15;
                initElev = 0;
                turretInfoType = "RHS_RscWeaponOb681_FCS";
                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                class OpticsIn {
                    class pn22m1 {
                        hitpoint = "HitMainSight";
                        camPos = "gunnerview";
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
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m2";
                    };
                    class 9sh119m1: pn22m1 {
                        hitpoint = "HitAtgmSight";
                        camPos = "view_sh119m1";
                        opticsDisplayName = "ATGM";
                        initFov = 0.07;
                        minFov = 0.07;
                        maxFov = 0.07;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
                    };
                    class pn22m1n: pn22m1 {
                        opticsDisplayName = "NVG";
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m1n";
                    };
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        turretInfoType = "RHS_RscWeaponBMP2_TKN3_FCS";
                        class OpticsIn {
                            class DAY {
                                hitpoint = "HitComSight";
                                camPos = "view_tkn3";
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
                                opticsDisplayName = "TKN3";
                                initFov = 0.14;
                                minFov = 0.14;
                                maxFov = 0.14;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3";
                            };
                            class NIGHT: DAY {
                                opticsDisplayName = "NIGHT";
                                initFov = 0.166667;
                                minFov = 0.166667;
                                maxFov = 0.166667;
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
                                visionMode[] = {"NVG"};
                            };
                        };
                    };
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
            class CargoTurret_07: CargoTurret_07 {};
            class CargoTurret_08: CargoTurret_08 {};
            class CargoTurret_09: CargoTurret_09 {};
            class CargoTurret_10: CargoTurret_10 {};
        };
        class Library {
            libTextDesc = "Experimental IFV. Weight: 13,6t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm Zarnitsa low-pressure smoothbore gun (40 rounds) penetration:	PG-15V HEAT	350mm RHA, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 12.7mm NSVT coaxial heavy machine gun (500 rounds), 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
        };
        class AnimationSources: AnimationSources {
            class recoil_source_2a28 {
                source = "reload";
                weapon = "rhs_weap_2a41";
            };
            class muzzle_hide_hmg {
                source = "reload";
                weapon = "rhs_weap_nsvt_obj681";
            };
            class muzzle_rot_hmg: muzzle_hide_hmg {
                source = "ammorandom";
            };
        };
    };
    class rhs_brm1k_base: rhs_bmp2e_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_brm1k_base.paa";
        scope = 0;
        model = "\rhsafrf\addons\rhs_bmp\BRM1K.p3d";
        picture = "\rhsafrf\addons\rhs_bmp\pictures\rhs_bmp1_pic_ca.paa";
        Icon = "\rhsafrf\addons\rhs_bmp\icons\icomap_brm1k_CA.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_BRM1K_Name";
        armor = 160;
        cost = 10000;
        transportSoldier = 0;
        class Library {
            libTextDesc = "Reconnaissance vehicle, based on BMP-1. Weight: 13,3t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (20 rounds) penetration:	PG-15V HEAT	350mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 7000;
                            maxRange = 7000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 7000;
                            maxRange = 7000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        animDirection = "RHS_BMP1_MainTurret";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 50;
                        typeRecognitionDistance = 500;
                        maxFogSeeThrough = 1;
                        maxTrackableATL = 100;
                        minTrackableSpeed = 2;
                        maxTrackableSpeed = 30;
                    };
                    class ManSensorComponent: SensorTemplateMan {
                        class AirTarget {
                            minRange = 2000;
                            maxRange = 2000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 2000;
                            maxRange = 2000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        animDirection = "RHS_BMP1_MainTurret";
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 50;
                        typeRecognitionDistance = 1;
                        maxFogSeeThrough = 1;
                        maxTrackableATL = 100;
                        minTrackableSpeed = 1;
                        maxTrackableSpeed = 30;
                    };
                };
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                minElev = -4;
                maxElev = 15;
                initElev = 0;
                startEngine = 0;
                stabilizedInAxes = 0;
                weapons[] = {"rhs_weap_2a28", "rhs_weap_pkt", "rhs_weap_902a"};
                magazines[] = {
                    "rhs_mag_pg15v_12",
                    "rhs_mag_og15v_8",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17_6"
                };
                maxHorizontalRotSpeed = 0.54;
                maxVerticalRotSpeed = 0.24;
                gunnerInAction = "rhs_bmp2_gunnerIn";
                turretInfoType = "RscWeaponZeroing";
                class HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -1;
                        name = "vez";
                        visual = "MainTurret";
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
                gunBeg = "Gun_start";
                gunEnd = "Gun_end";
                body = "RHS_BMP1_MainTurret";
                gun = "RHS_BMP1_MainGun";
                memoryPointGunnerOptics = "gunnerview";
                class OpticsIn {
                    class pn22m1 {
                        hitpoint = "HitMainSight";
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
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m2";
                    };
                    class pn22m1n: pn22m1 {
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn22m1n";
                    };
                };
                class Reflectors {};
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerDoor = "hatchC";
                        gunnerName = "$STR_POSITION_COMMANDER";
                        body = "RHS_BMP1_com_coppula_BMP2";
                        gun = "RHS_BMP1_OU3_BMP2";
                        gunnerOutForceOptics = 0;
                        gunnerForceoptics = 1;
                        weapons[] = {};
                        magazines[] = {};
                        animationSourceHatch = "HatchCommander_BMP2";
                        animationSourceBody = "obsturret";
                        animationSourceGun = "obsGun";
                        memoryPointGunnerOptics = "commanderview";
                        memoryPointGunnerOutOptics = "commander_out_view";
                        nightVision = 1;
                        proxyType = "CPCommander";
                        proxyIndex = 1;
                        lockWhenDriverOut = 0;
                        primaryGunner = 0;
                        primaryObserver = 1;
                        hasCommander = 1;
                        gunBeg = "Mgun_end";
                        gunEnd = "Mgun_start";
                        gunnerInAction = "rhs_bmp2_commanderin";
                        stabilizedInAxes = 3;
                        minElev = -4;
                        maxElev = 12;
                        initElev = 0;
                        minTurn = -135;
                        maxTurn = 135;
                        initTurn = 0;
                        gunnerOutOpticsModel = "";
                        turretInfoType = "rhs_gui_optic_1d13";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1d13.p3d";
                        soundServo[] = {};
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        startEngine = 0;
                        class OpticsIn {
                            class DAY {
                                hitpoint = "HitComSight";
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
                                opticsDisplayName = "1D13";
                                initFov = 0.14;
                                minFov = 0.14;
                                maxFov = 0.14;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1d13";
                            };
                            class NIGHT: DAY {
                                opticsDisplayName = "NIGHT";
                                initFov = 0.166667;
                                minFov = 0.166667;
                                maxFov = 0.166667;
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
                                visionMode[] = {"NVG"};
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
                            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
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
                                        range[] = {1000, 3500, 7000};
                                        resource = "RscCustomInfoSensors";
                                    };
                                };
                            };
                            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
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
                                        range[] = {1000, 3500, 7000};
                                        resource = "RscCustomInfoSensors";
                                    };
                                };
                            };
                        };
                        class Hitpoints {};
                    };
                };
            };
            class NavTurret: NewTurret {
                class ViewGunner;
                gunnerName = "$STR_RHS_NAVIGATOR";
                body = "RHS_BMP1_Nav_p";
                gun = "";
                gunnerOutForceOptics = 0;
                gunnerForceoptics = 1;
                weapons[] = {};
                magazines[] = {};
                animationSourceHatch = "Hatch_nav";
                animationSourceBody = "s_nav_p";
                animationSourceGun = "s_nav_p_vert";
                memoryPointGunnerOptics = "view_nav";
                memoryPointGunnerOutOptics = "";
                nightVision = 1;
                proxyType = "CPGunner";
                proxyIndex = 2;
                lockWhenDriverOut = 0;
                primaryGunner = 0;
                primaryObserver = 0;
                hasCommander = 1;
                gunBeg = "Mgun_end";
                gunEnd = "Mgun_start";
                gunnerAction = "rhs_bmp1_commander";
                gunnerInAction = "rhs_brmk1_commanderin";
                stabilizedInAxes = 0;
                minElev = -4;
                maxElev = 12;
                initElev = 0;
                minTurn = -85;
                maxTurn = 85;
                initTurn = 0;
                gunnerOutOpticsModel = "";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpp220a";
                gunnerOpticsColor[] = {1, 1, 1, 1};
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
                class OpticsIn {
                    class DAY {
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
                        opticsDisplayName = "PERISCOPE";
                        initFov = "0.7/1";
                        minFov = "0.7/1";
                        maxFov = "0.7/1";
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpk240a";
                    };
                    class NIGHT: DAY {
                        opticsDisplayName = "ZOOM";
                        initFov = "0.7/8";
                        minFov = "0.7/8";
                        maxFov = "0.7/8";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpk240a_x8.p3d";
                    };
                };
                soundServo[] = {};
                outGunnerMayFire = 0;
                inGunnerMayFire = 1;
                startEngine = 0;
                class Hitpoints {};
            };
            class LeftBack: NewTurret {
                body = "lseat_turret";
                gun = "lseat_gun";
                animationSourceBody = "lseat_Turret";
                animationSourceGun = "lseat_Gun";
                animationSourceHatch = "";
                selectionFireAnim = "";
                minElev = -5;
                maxElev = 5;
                initTurn = 120;
                minTurn = 0;
                maxTurn = 240;
                maxHorizontalRotSpeed = 0.55;
                maxVerticalRotSpeed = 0.25;
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "$STR_CargoBackLeft";
                commanding = 3;
                gunBeg = "";
                gunEnd = "";
                memoryPointGun = "";
                memoryPointGunnerOptics = "lseat_view";
                gunnerAction = "";
                gunnerInAction = "rhs_BMP2_Gunnerin";
                weapons[] = {};
                magazines[] = {};
                forceHideGunner = 1;
                hasGunner = 0;
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
                class Hitpoints {};
            };
            class RightBack: LeftBack {
                body = "rseat_turret";
                gun = "rseat_gun";
                animationSourceBody = "rseat_Turret";
                animationSourceGun = "rseat_Gun";
                initTurn = -120;
                minTurn = -240;
                maxTurn = 0;
                gunnerName = "$STR_CargoBackRight";
                memoryPointGunnerOptics = "rseat_view";
                hasGunner = 0;
                commanding = 2;
            };
        };
        class AnimationSources: AnimationSources {
            class PSzNR_5_s {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
                sound = "RHS_PSzNR5";
                soundPosition = "psnr_begin";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_bmp_init; _this call rhs_fnc_psnr5k_init;";
                fired = "";
                reloaded = "";
            };
        };
        class UserActions: UserActions {
            class PSzNR_1 {
                displayName = "$STR_RHS_PSNR5RADARON_NAME";
                position = "MainTurret";
                onlyforplayer = 0;
                radius = 3.5;
                showWindow = 0;
                condition = "((call rhs_fnc_findPlayer) == commander this) AND (this animationSourcePhase 'PSzNR_5_s' == 0)";
                statement = "[this] call RHS_fnc_psnr5k_deploy;";
            };
            class PSzNR_2 {
                displayName = "$STR_RHS_PSNR5RADAROFF_NAME";
                position = "MainTurret";
                onlyforplayer = 0;
                radius = 3.5;
                showWindow = 0;
                condition = "((call rhs_fnc_findPlayer) == commander this) AND (this animationSourcePhase 'PSzNR_5_s' == 1)";
                statement = "[this] call RHS_fnc_psnr5k_deploy;";
            };
        };
    };
    class rhs_brm1k_vdv: rhs_brm1k_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_brm1k_vdv.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_brm1k_tv: rhs_brm1k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_brm1k_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_tv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Platoon',8]"};
    };
    class rhs_brm1k_msv: rhs_brm1k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_brm1k_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'DefaultRed']", "['Label', cBMPPlatoon, 'Platoon',12]"};
    };
    class rhs_brm1k_vmf: rhs_brm1k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_brm1k_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_crew";
        rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']", "['Label', cBMPPlatoon, 'Army',[3,1]]", "['Label', cBMPLeftBack, 'Army', [3,1]]"};
    };
    class rhs_brm1k_vv: rhs_brm1k_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_brm1k_vv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {
            "['Number', cBMP3NumberPlaces, 'Default']",
            "['Label', cBMPPlatoon, 'Platoon',13]",
            "['Label', cBMPLeftBack, 'Army',[6,1]]",
            "['Label', cBMPFront, 'Army',10]"
        };
    };
};
