class CfgPatches {
    class rhsusf_vehicles {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {};
    };
    class rhsusf_c_hmmwv {
        units[] = {
            "rhsusf_m998_w_2dr",
            "rhsusf_m998_w_2dr_halftop",
            "rhsusf_m998_w_2dr_fulltop",
            "rhsusf_m998_w_s_2dr",
            "rhsusf_m998_w_s_2dr_halftop",
            "rhsusf_m998_w_s_2dr_fulltop",
            "rhsusf_m998_d_2dr",
            "rhsusf_m998_d_2dr_halftop",
            "rhsusf_m998_d_2dr_fulltop",
            "rhsusf_m998_d_s_2dr",
            "rhsusf_m998_d_s_2dr_halftop",
            "rhsusf_m998_d_s_2dr_fulltop",
            "rhsusf_m998_w_4dr",
            "rhsusf_m998_w_4dr_halftop",
            "rhsusf_m998_w_4dr_fulltop",
            "rhsusf_m998_w_s_4dr",
            "rhsusf_m998_w_s_4dr_halftop",
            "rhsusf_m998_w_s_4dr_fulltop",
            "rhsusf_m998_d_4dr",
            "rhsusf_m998_d_4dr_halftop",
            "rhsusf_m998_d_4dr_fulltop",
            "rhsusf_m998_d_s_4dr",
            "rhsusf_m998_d_s_4dr_halftop",
            "rhsusf_m998_d_s_4dr_fulltop",
            "rhsusf_m1025_w",
            "rhsusf_m1025_w_s",
            "rhsusf_m1025_d",
            "rhsusf_m1025_d_s",
            "rhsusf_m1025_w_m2",
            "rhsusf_m1025_w_s_m2",
            "rhsusf_m1025_d_m2",
            "rhsusf_m1025_d_s_m2",
            "rhsusf_m1025_w_mk19",
            "rhsusf_m1025_w_s_mk19",
            "rhsusf_m1025_d_mk19",
            "rhsusf_m1025_d_s_mk19",
            "rhsusf_m966_w",
            "rhsusf_m966_d",
            "rhsusf_m1043_w",
            "rhsusf_m1043_d",
            "rhsusf_m1043_w_s",
            "rhsusf_m1043_d_s",
            "rhsusf_m1043_w_m2",
            "rhsusf_m1043_d_m2",
            "rhsusf_m1043_w_s_m2",
            "rhsusf_m1043_d_s_m2",
            "rhsusf_m1043_w_mk19",
            "rhsusf_m1043_d_mk19",
            "rhsusf_m1043_w_s_mk19",
            "rhsusf_m1043_d_s_mk19",
            "rhsusf_m1045_w",
            "rhsusf_m1045_d",
            "rhsusf_m1045_w_s",
            "rhsusf_m1045_d_s"
        };
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops", "rhsusf_c_heavyweapons"};
        name = "M998, M1025, M1043 & M1045 Vehicles";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_HMMWV_Cargo = "RHS_HMMWV_Cargo";
        RHS_HMMWV_Cargo01 = "RHS_HMMWV_Cargo01";
        RHS_HMMWV_Cargo02 = "RHS_HMMWV_Cargo02";
        RHS_HMMWV_Cargo03 = "RHS_HMMWV_Cargo03";
        RHS_HMMWV_Cargo04 = "RHS_HMMWV_Cargo04";
        RHS_HMMWV_Driver = "RHS_HMMWV_Driver";
        RHS_HMMWV_Gunner = "RHS_HMMWV_Gunner";
        RHS_HMMWV_Gunner02 = "RHS_HMMWV_Gunner02";
        RHS_HMMWV_Gunner03 = "RHS_HMMWV_Gunner03";
        RHS_HMMWV_Gunner03_in = "RHS_HMMWV_Gunner03_in";
        RHS_HMMWV_Gunner03a_in = "RHS_HMMWV_Gunner03a_in";
        RHS_HMMWV_Gunner03_GPK_in = "RHS_HMMWV_Gunner03_GPK_in";
        RHS_HMMWV_Gunner04 = "RHS_HMMWV_Gunner04";
        RHS_HMMWV_Gunner_TOW = "RHS_HMMWV_Gunner_TOW";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_HMMWV_Cargo: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo";
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo", 0.1};
            connectTo[] = {
                "RHS_HMMWV_Cargo",
                0.1,
                "RHS_HMMWV_Cargo_V1",
                0.1,
                "RHS_HMMWV_Cargo_V2",
                0.1,
                "RHS_HMMWV_Cargo_V3",
                0.1,
                "RHS_HMMWV_Cargo_V4",
                0.1,
                "RHS_HMMWV_Cargo_V5",
                0.1
            };
            equivalentTo = "RHS_HMMWV_Cargo";
            variantsAI[] = {
                "RHS_HMMWV_Cargo",
                0.5,
                "RHS_HMMWV_Cargo_V1",
                0.12,
                "RHS_HMMWV_Cargo_V2",
                0.11,
                "RHS_HMMWV_Cargo_V3",
                0.1,
                "RHS_HMMWV_Cargo_V4",
                0.09,
                "RHS_HMMWV_Cargo_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_HMMWV_Cargo_V1: RHS_HMMWV_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V1.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo", 0.1};
            speed = 0.37037;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo", 0.1};
        };
        class RHS_HMMWV_Cargo_V2: RHS_HMMWV_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V2.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo", 0.1};
            speed = 0.29703;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo", 0.1};
        };
        class RHS_HMMWV_Cargo_V3: RHS_HMMWV_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V3.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo", 0.1};
            speed = 0.625;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo", 0.1};
        };
        class RHS_HMMWV_Cargo_V4: RHS_HMMWV_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V4.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo", 0.1};
        };
        class RHS_HMMWV_Cargo_V5: RHS_HMMWV_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo_V5.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo", 0.1};
            speed = 0.333333;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo", 0.1};
        };
        class RHS_HMMWV_KIA_Cargo: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_HMMWV_Cargo01: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo01";
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01", 0.1};
            connectTo[] = {
                "RHS_HMMWV_Cargo01",
                0.1,
                "RHS_HMMWV_Cargo01_V1",
                0.1,
                "RHS_HMMWV_Cargo01_V2",
                0.1,
                "RHS_HMMWV_Cargo01_V3",
                0.1,
                "RHS_HMMWV_Cargo01_V4",
                0.1,
                "RHS_HMMWV_Cargo01_V5",
                0.1
            };
            equivalentTo = "RHS_HMMWV_Cargo01";
            variantsAI[] = {
                "RHS_HMMWV_Cargo01",
                0.5,
                "RHS_HMMWV_Cargo01_V1",
                0.12,
                "RHS_HMMWV_Cargo01_V2",
                0.11,
                "RHS_HMMWV_Cargo01_V3",
                0.1,
                "RHS_HMMWV_Cargo01_V4",
                0.09,
                "RHS_HMMWV_Cargo01_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_HMMWV_Cargo01_V1: RHS_HMMWV_Cargo01 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V1.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo01", 0.1};
            speed = 0.245902;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01", 0.1};
        };
        class RHS_HMMWV_Cargo01_V2: RHS_HMMWV_Cargo01 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V2.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo01", 0.1};
            speed = 0.29703;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01", 0.1};
        };
        class RHS_HMMWV_Cargo01_V3: RHS_HMMWV_Cargo01 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V3.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo01", 0.1};
            speed = 0.337079;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01", 0.1};
        };
        class RHS_HMMWV_Cargo01_V4: RHS_HMMWV_Cargo01 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V4.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo01", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01", 0.1};
        };
        class RHS_HMMWV_Cargo01_V5: RHS_HMMWV_Cargo01 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo01_V5.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo01", 0.1};
            speed = 0.177515;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo01", 0.1};
        };
        class RHS_HMMWV_KIA_Cargo01: RHS_HMMWV_KIA_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo01";
        };
        class RHS_HMMWV_Cargo02: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo02";
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02", 0.1};
            connectTo[] = {
                "RHS_HMMWV_Cargo02",
                0.1,
                "RHS_HMMWV_Cargo02_V1",
                0.1,
                "RHS_HMMWV_Cargo02_V2",
                0.1,
                "RHS_HMMWV_Cargo02_V3",
                0.1,
                "RHS_HMMWV_Cargo02_V4",
                0.1,
                "RHS_HMMWV_Cargo02_V5",
                0.1
            };
            equivalentTo = "RHS_HMMWV_Cargo02";
            variantsAI[] = {
                "RHS_HMMWV_Cargo02",
                0.5,
                "RHS_HMMWV_Cargo02_V1",
                0.12,
                "RHS_HMMWV_Cargo02_V2",
                0.11,
                "RHS_HMMWV_Cargo02_V3",
                0.1,
                "RHS_HMMWV_Cargo02_V4",
                0.09,
                "RHS_HMMWV_Cargo02_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_HMMWV_Cargo02_V1: RHS_HMMWV_Cargo02 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V1.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo02", 0.1};
            speed = 0.37037;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02", 0.1};
        };
        class RHS_HMMWV_Cargo02_V2: RHS_HMMWV_Cargo02 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V2.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo02", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02", 0.1};
        };
        class RHS_HMMWV_Cargo02_V3: RHS_HMMWV_Cargo02 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V3.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo02", 0.1};
            speed = 0.337079;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02", 0.1};
        };
        class RHS_HMMWV_Cargo02_V4: RHS_HMMWV_Cargo02 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V4.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo02", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02", 0.1};
        };
        class RHS_HMMWV_Cargo02_V5: RHS_HMMWV_Cargo02 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo02_V5.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo02", 0.1};
            speed = 0.177515;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo02", 0.1};
        };
        class RHS_HMMWV_KIA_Cargo02: RHS_HMMWV_KIA_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo02";
        };
        class RHS_HMMWV_Cargo03: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo03";
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03", 0.1};
            connectTo[] = {
                "RHS_HMMWV_Cargo03",
                0.1,
                "RHS_HMMWV_Cargo03_V1",
                0.1,
                "RHS_HMMWV_Cargo03_V2",
                0.1,
                "RHS_HMMWV_Cargo03_V3",
                0.1,
                "RHS_HMMWV_Cargo03_V4",
                0.1,
                "RHS_HMMWV_Cargo03_V5",
                0.1
            };
            equivalentTo = "RHS_HMMWV_Cargo03";
            variantsAI[] = {
                "RHS_HMMWV_Cargo03",
                0.5,
                "RHS_HMMWV_Cargo03_V1",
                0.12,
                "RHS_HMMWV_Cargo03_V2",
                0.11,
                "RHS_HMMWV_Cargo03_V3",
                0.1,
                "RHS_HMMWV_Cargo03_V4",
                0.09,
                "RHS_HMMWV_Cargo03_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_HMMWV_Cargo03_V1: RHS_HMMWV_Cargo03 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V1.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo03", 0.1};
            speed = 0.3125;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03", 0.1};
        };
        class RHS_HMMWV_Cargo03_V2: RHS_HMMWV_Cargo03 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V2.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo03", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03", 0.1};
        };
        class RHS_HMMWV_Cargo03_V3: RHS_HMMWV_Cargo03 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V3.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo03", 0.1};
            speed = 0.625;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03", 0.1};
        };
        class RHS_HMMWV_Cargo03_V4: RHS_HMMWV_Cargo03 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V4.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo03", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03", 0.1};
        };
        class RHS_HMMWV_Cargo03_V5: RHS_HMMWV_Cargo03 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo03_V5.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo03", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo03", 0.1};
        };
        class RHS_HMMWV_KIA_Cargo03: RHS_HMMWV_KIA_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo03";
        };
        class RHS_HMMWV_Cargo04: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Cargo04";
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04", 0.1};
            connectTo[] = {
                "RHS_HMMWV_Cargo04",
                0.1,
                "RHS_HMMWV_Cargo04_V1",
                0.1,
                "RHS_HMMWV_Cargo04_V2",
                0.1,
                "RHS_HMMWV_Cargo04_V3",
                0.1,
                "RHS_HMMWV_Cargo04_V4",
                0.1,
                "RHS_HMMWV_Cargo04_V5",
                0.1
            };
            equivalentTo = "RHS_HMMWV_Cargo04";
            variantsAI[] = {
                "RHS_HMMWV_Cargo04",
                0.5,
                "RHS_HMMWV_Cargo04_V1",
                0.12,
                "RHS_HMMWV_Cargo04_V2",
                0.11,
                "RHS_HMMWV_Cargo04_V3",
                0.1,
                "RHS_HMMWV_Cargo04_V4",
                0.09,
                "RHS_HMMWV_Cargo04_V5",
                0.08
            };
            variantAfter[] = {5, 10, 20};
            speed = 10000000000;
        };
        class RHS_HMMWV_Cargo04_V1: RHS_HMMWV_Cargo04 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V1.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo04", 0.1};
            speed = 0.29703;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04", 0.1};
        };
        class RHS_HMMWV_Cargo04_V2: RHS_HMMWV_Cargo04 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V2.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo04", 0.1};
            speed = 0.245902;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04", 0.1};
        };
        class RHS_HMMWV_Cargo04_V3: RHS_HMMWV_Cargo04 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V3.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo04", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04", 0.1};
        };
        class RHS_HMMWV_Cargo04_V4: RHS_HMMWV_Cargo04 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V4.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo04", 0.1};
            speed = 0.177515;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04", 0.1};
        };
        class RHS_HMMWV_Cargo04_V5: RHS_HMMWV_Cargo04 {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMMWV_Cargo04_V5.rtm";
            connectTo[] = {"RHS_HMMWV_Cargo04", 0.1};
            speed = 0.333333;
            variantAfter[] = {5, 5, 5};
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo04", 0.1};
        };
        class RHS_HMMWV_KIA_Cargo04: RHS_HMMWV_KIA_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Cargo04";
        };
        class RHS_HMMWV_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Driver";
            interpolateTo[] = {"RHS_HMMWV_KIA_Driver", 1};
            speed = 10000000000;
        };
        class RHS_HMMWV_KIA_Driver: RHS_HMMWV_KIA_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Driver";
        };
        class RHS_HMMWV_Gunner: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_HMMWV_KIA_Gunner: RHS_HMMWV_KIA_Cargo {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Gunner";
        };
        class RHS_HMMWV_Gunner02: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner02";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_HMMWV_Gunner03: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner03";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_HMMWV_Gunner03_in: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner03_in";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            boundingSphere = 2.5;
            leftHandIKEnd = 0;
            leftHandIKBeg = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {0};
            leftHandIKCurve[] = {0};
            rightLegIKCurve[] = {0};
            leftLegIKCurve[] = {0};
        };
        class KIA_RHS_HMMWV_Gunner03a_in: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_KIA_Gunner03a_in";
            speed = 1;
            looped = "false";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
            boundingSphere = 2.5;
        };
        class RHS_HMMWV_Gunner03a_in: RHS_HMMWV_Gunner03_in {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner03a_in";
            speed = 0.037975;
            interpolateTo[] = {"KIA_RHS_HMMWV_Gunner03a_in", 1};
        };
        class RHS_HMMWV_Gunner03_GPK_in: RHS_HMMWV_Gunner03_in {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner03_GPK_in";
            speed = 0.037975;
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
        };
        class RHS_HMMWV_Gunner04: Crew {
            file = "\rhsusf\addons\rhsusf_hmmwv\anims\HMWVW_Gunner04";
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_HMMWV_Gunner_TOW: RHS_HMMWV_Gunner03 {
            file = "\rhsusf\addons\rhsusf_c_hmmwv\anims\rhs_hmmwv_gunner_tow";
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class m1025_windowHandler {
                file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\windowHandler.sqf";
                description = "M1025 window handler";
            };
            class m1025_doorHandler {
                file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\doorHandler.sqf";
                description = "M1025 door handler";
            };
            class m1025_doorToggle {
                file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\doorToggle.sqf";
                description = "M1025 door toggle";
            };
            class hmmwv_setDecal {
                file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\setDecal.sqf";
                description = "Decal handler for M1025";
            };
        };
    };
    class RHSUSF {
        tag = "RHSUSF";
        class functions {
            class carLightToggle {
                file = "\rhsusf\addons\rhsusf_c_hmmwv\scripts\rhs_lightToggle.sqf";
                description = "Car Light Toggle";
            };
        };
    };
};
class DefaultEventhandlers;
class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class NewTurret;
    };
    class Car_F: Car {
        class AnimationSources;
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
            };
        };
        class HitPoints {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
            class HitHull;
        };
    };
    class MRAP_01_base_F: Car_F {
        class Sounds;
        class EventHandlers;
        class Components;
    };
    class rhsusf_hmmwe_base: MRAP_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        insideSoundCoef = 0.4;
        tf_hasLRradio_api = 1;
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",
                    0.39810717,
                    1,
                    150
                };
                frequency = "0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
                volume = "engineOn*camPos*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
            };
            class Engine {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",
                    0.4466836,
                    1,
                    250
                };
                frequency = "0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",
                    0.56234133,
                    1,
                    300
                };
                frequency = "0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",
                    0.70794576,
                    1,
                    350
                };
                frequency = "0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(2569/	3400),(2796/	3400)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",
                    1,
                    1,
                    400
                };
                frequency = "0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
                volume = "engineOn*camPos*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
            };
            class IdleThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",
                    0.56234133,
                    1,
                    200
                };
                frequency = "0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
            };
            class EngineThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",
                    0.70794576,
                    1,
                    350
                };
                frequency = "0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",
                    0.8912509,
                    1,
                    400
                };
                frequency = "0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",
                    1.1220185,
                    1,
                    425
                };
                frequency = "0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",
                    1.2589254,
                    1,
                    450
                };
                frequency = "0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
            };
            class Idle_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle", 0.25118864, 1};
                frequency = "0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
            };
            class Engine_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1", 0.31622776, 1};
                frequency = "0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
            };
            class Engine1_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2", 0.39810717, 1};
                frequency = "0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
            };
            class Engine2_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid", 0.5011872, 1};
                frequency = "0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
            };
            class Engine3_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high", 0.63095737, 1};
                frequency = "0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
            };
            class IdleThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle", 0.3548134, 1};
                frequency = "0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
            };
            class EngineThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1", 0.4466836, 1};
                frequency = "0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2", 0.56234133, 1};
                frequency = "0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid", 0.70794576, 1};
                frequency = "0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high", 0.7943282, 1};
                frequency = "0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3400) factor[(2116/	3400),(3400/	3400)])";
            };
            class TiresRockOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
                    1.4125376,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*rock*(speed factor[2, 20])";
            };
            class TiresSandOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
                    1.4125376,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*sand*(speed factor[2, 20])";
            };
            class TiresGrassOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
                    1.2589254,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*grass*(speed factor[2, 20])";
            };
            class TiresMudOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
                    1.1220185,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*mud*(speed factor[2, 20])";
            };
            class TiresGravelOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
                    1.2589254,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
                    1.1220185,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*asphalt*(speed factor[2, 20])";
            };
            class NoiseOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
                    1.1220185,
                    1,
                    90
                };
                frequency = "1";
                volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
            };
            class TiresRockIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.56234133, 1};
                frequency = "1";
                volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
            };
            class breaking_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
                    0.70794576,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.70794576,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.70794576,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.70794576,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
                    0.70794576,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
                    0.70794576,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    0.70794576,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    0.70794576,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
        };
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
            class RHS_EventHandlers {
                engine = "_this call rhs_fnc_engineCheckDamage";
                postInit = "_this call rhs_fnc_reapplyTextures";
            };
        };
        fireResistance = 5;
        crewVulnerable = 1;
        armor = 80;
        minTotalDamageThreshold = 0.21;
        fuelExplosionPower = 0.1;
        secondaryExplosion = 0;
        camShakeCoef = 0.4;
        class HitPoints: HitPoints {
            class hitwindshield_1 {
                armor = 0.03;
                material = -1;
                name = "windshield_1";
                armorComponent = "windshield_1";
                visual = "windshield_1";
                passThrough = 0;
                radius = 0.4;
            };
            class hitwindshield_2 {
                armor = 0.03;
                material = -1;
                name = "windshield_2";
                armorComponent = "windshield_2";
                visual = "windshield_2";
                passThrough = 0;
                radius = 0.4;
            };
            class HitGlass1 {
                armor = 0.09;
                material = -1;
                name = "glass1";
                armorComponent = "glass1";
                visual = "glass1";
                passThrough = 0;
                radius = 0.4;
            };
            class HitGlass2: HitGlass1 {
                name = "glass2";
                armorComponent = "glass2";
                visual = "glass2";
                radius = 0.4;
            };
            class HitGlass3: HitGlass1 {
                name = "glass3";
                armorComponent = "glass3";
                visual = "glass3";
                radius = 0.4;
            };
            class HitGlass4: HitGlass1 {
                name = "glass4";
                armorComponent = "glass4";
                visual = "glass4";
                radius = 0.4;
            };
            class HitGlass5: HitGlass1 {
                name = "glass5";
                armorComponent = "glass5";
                visual = "glass5";
                radius = 0.4;
            };
            class HitGlass6: HitGlass1 {
                name = "glass6";
                armorComponent = "glass6";
                visual = "glass6";
                radius = 0.4;
            };
            class HitBody {
                armor = 4.6;
                material = -1;
                passThrough = 1;
                radius = 0.2;
                name = "vehicle";
                visual = "damage";
            };
            class hitfuel {
                armor = -150;
                passThrough = 0.5;
                explosionShielding = 0.5;
                radius = 0.2;
                name = "fuel";
                visual = "-";
            };
            class HitLFWheel: HitLFWheel {
                radius = 0.2;
                visual = "wheel_1_tire";
                name = "wheel_1";
                armorComponent = "wheel_1_tire";
                armor = -150;
                minimalHit = -0.045;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitRFWheel: HitRFWheel {
                radius = 0.2;
                visual = "wheel_2_tire";
                name = "wheel_2";
                armorComponent = "wheel_2_tire";
                armor = -150;
                minimalHit = -0.045;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitLF2Wheel: HitLF2Wheel {
                radius = 0.2;
                visual = "wheel_3_tire";
                name = "wheel_3";
                armorComponent = "wheel_3_tire";
                armor = -150;
                minimalHit = -0.045;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitRF2Wheel: HitRF2Wheel {
                radius = 0.2;
                visual = "wheel_4_tire";
                name = "wheel_4";
                armorComponent = "wheel_4_tire";
                armor = -150;
                minimalHit = -0.045;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitEngine {
                armor = -100;
                minimalhit = -0.1;
                passThrough = 0.2;
                radius = 0.15;
                name = "engine";
                visual = "damage";
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
        };
        selectionDamage = "damage";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        driverLeftHandAnimName = "steeringwheel";
        driverRightHandAnimName = "steeringwheel";
        driverRightLegAnimName = "pedalR";
        driverLeftLegAnimName = "pedalL";
        showNVGGunner = 1;
        showNVGDriver = 1;
        showNVGCargo[] = {1};
        viewDriverInExternal = 1;
        gunnerHasFlares = 0;
        mapSize = 5.5;
        extCameraPosition[] = {0.5, 2, -10};
        supplyRadius = 2;
        hideUnitInfo = 0;
        class Exhausts {
            class exhaust1 {
                position = "exhaust1_1";
                direction = "exhaust1_2";
                effect = "ExhaustsEffect";
            };
        };
        class Components: Components {
            class AICarSteeringComponent {
                steeringPIDWeights[] = {3.1, 0.1, 0.4};
                speedPIDWeights[] = {0.7, 0.2, 0};
                convoyPIDWeights[] = {1, 0.01, 0.01};
                doRemapSpeed = 1;
                remapSpeedRange[] = {30, 70};
                remapSpeedScalar[] = {1, 0.35};
                doPredictForward = 1;
                predictForwardRange[] = {1, 20};
                steerAheadSaturation[] = {0.01, 0.4};
                speedPredictionMethod = 2;
                wheelAngleCoef = 0.7;
                forwardAngleCoef = 0.7;
                steeringAngleCoef = 1.2;
                differenceAngleCoef = 0.4;
                stuckMaxTime = 3;
                allowOvertaking = 1;
                allowDrifting = 0;
                allowCollisionAvoidance = 1;
                maxWheelAngleDiff = 0.2616;
                minSpeedToKeep = 0.1;
                commandTurnFactor = 1;
            };
        };
        castDriverShadow = 0;
        castCargoShadow = 0;
        class AnimationSources {
            class HitLFWheel {
                source = "Hit";
                hitpoint = "HitLFWheel";
                raw = 1;
            };
            class HitRFWheel: HitLFWheel {
                hitpoint = "HitRFWheel";
            };
            class HitLBWheel: HitLFWheel {
                hitpoint = "HitLF2Wheel";
            };
            class HitRBWheel: HitLFWheel {
                hitpoint = "HitRF2Wheel";
            };
            class HitGlass1 {
                source = "Hit";
                hitpoint = "HitGlass1";
                raw = 1;
            };
            class HitGlass2: HitGlass1 {
                hitpoint = "HitGlass2";
            };
            class HitGlass3: HitGlass1 {
                hitpoint = "HitGlass3";
            };
            class HitGlass4: HitGlass1 {
                hitpoint = "HitGlass4";
            };
            class HitGlass5: HitGlass1 {
                hitpoint = "HitGlass5";
            };
            class HitGlass6: HitGlass1 {
                hitpoint = "HitGlass6";
            };
            class Hitwindshield_1: HitGlass1 {
                hitpoint = "Hitwindshield_1";
            };
            class Hitwindshield_2: HitGlass1 {
                hitpoint = "Hitwindshield_2";
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_decalMask {
                displayName = "Define 1st decal";
                tooltip = "Define decal located on mask & rear of vehicle";
                property = "rhs_decalMask";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ [_this,'unitdecals_1',_value] call rhs_fnc_hmmwv_setDecal}";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class NoChange {
                        name = "Default defined";
                        value = "NoChange";
                    };
                    class blankdecal_ca {
                        name = "Empty";
                        value = "82ndab_505reg_1stbn_e25_w_ca";
                    };
                    class 82ndab_505reg_1stbn_e25_w_ca {
                        name = "82nd AB 505 regiment, 1st BN, E25 - Woodland";
                        value = "82ndab_505reg_1stbn_e25_w_ca";
                    };
                    class 82ndab_505reg_1stbn_e25_d_ca {
                        name = "82nd AB 505 regiment, 1st BN, E25 - Desert";
                        value = "82ndab_505reg_1stbn_e25_d_ca";
                    };
                    class test_1stbn_e25_w_ca {
                        name = "82nd AB 505 regiment, 1st BN, E25";
                        value = "test_1stbn_e25_w_ca";
                    };
                    class 101stab_502reg_2ndbn_a12_w_co {
                        name = "101st AB 502 regiment, 2nd BN, A12 - Woodland";
                        value = "82ndab_505reg_1stbn_e25_w_ca";
                        defaultValue = "101stab_502reg_2ndbn_a12_w_co";
                    };
                    class 101stab_502reg_2ndbn_a12_d_co {
                        name = "101st AB 502 regiment, 2nd BN, A12 - Desert";
                        value = "101stab_502reg_2ndbn_a12_d_co";
                    };
                    class 1stcav_1stbn_12th_e25_w_ca {
                        name = "1st Cavalry Div, 2nd Battalion, 12th Cavalry 'Thunder Horse' - Woodland";
                        value = "1stcav_1stbn_12th_e25_w_ca";
                    };
                    class 1stcav_1stbn_12th_e25_d_ca {
                        name = "1st Cavalry Div, 2nd Battalion, 12th Cavalry 'Thunder Horse' - Desert";
                        value = "1stcav_1stbn_12th_e25_d_ca";
                    };
                    class usmc_210321_ca {
                        name = "USMC 210321";
                        value = "usmc_210321_ca";
                    };
                };
            };
            class rhs_decalDoors: rhs_decalMask {
                displayName = "Define 2nd decal";
                tooltip = "Define decals located on doors & vehicle rear";
                property = "rhs_decalDoors";
                expression = "if(_value != 'NoChange')then{ [_this,'unitdecals_2',_value] call rhs_fnc_hmmwv_setDecal}";
                class values {
                    class NoChange {
                        name = "Default defined";
                        value = "NoChange";
                    };
                    class blankdecal_ca {
                        name = "Empty";
                        value = "blankdecal_ca";
                    };
                    class militarypolice_b_ca {
                        name = "Military Police";
                        value = "militarypolice_b_ca";
                    };
                    class e25_ca {
                        name = "E25^";
                        value = "e25arr_ca";
                    };
                    class e23_ca {
                        name = "E23^";
                        value = "e23arr_ca";
                    };
                    class a12_co {
                        name = "A12^";
                        value = "a12arr_co";
                    };
                    class 55_co {
                        name = "55^";
                        value = "55arr_ca";
                    };
                    class 05_co {
                        name = "05^";
                        value = "05arr_ca";
                    };
                    class arr_co {
                        name = "^";
                        value = "arr_ca";
                    };
                    class down_ca {
                        name = "Arrow down";
                        value = "downarr_ca";
                    };
                    class pol_isaf_v1_ca {
                        name = "Polish - ISAF v1";
                        value = "pol_isaf_v1_ca";
                    };
                    class pol_isaf_v2_ca {
                        name = "Polish - ISAF v2";
                        value = "pol_isaf_v2_ca";
                    };
                    class pol_isaf_v3_ca {
                        name = "Polish - ISAF v3";
                        value = "pol_isaf_v3_ca";
                    };
                };
            };
            class rhs_hideCIP {
                displayName = "Hide CIP";
                property = "rhs_hideCIP";
                control = "CheckboxNumber";
                expression = "_this animate ['hide_CIP',_value,true]";
                defaultValue = "0";
            };
            class rhs_hideBFT: rhs_hideCIP {
                displayName = "Hide BFT";
                property = "rhs_hideBFT";
                expression = "_this animate ['hide_BFT',_value,true]";
            };
            class rhs_hideAntennas: rhs_hideCIP {
                displayName = "Hide antennas";
                property = "rhs_hideBFT";
                expression = "_this animate ['hide_Antenna',_value,true]";
            };
            class rhs_hideA2Parts: rhs_hideCIP {
                displayName = "Hide A2 parts";
                property = "rhs_hideA2Parts";
                expression = "_this animate ['hide_A2_Parts',_value,true]";
            };
            class rhs_HideA2Bumper: rhs_hideCIP {
                displayName = "switch to old bumper";
                property = "rhs_HideA2Bumper";
                expression = "_this animateSource ['Hide_A2Bumper',_value,true]";
            };
            class Door_LF: rhs_hideCIP {
                displayName = "Open front left door";
                property = "Door_LF";
                expression = "_this animateDoor ['%s',_value,true]";
            };
            class Door_RF: Door_LF {
                displayName = "Open front right door";
                property = "Door_RF";
            };
            class Door_LB: Door_LF {
                displayName = "Open back left door";
                property = "Door_LB";
            };
            class Door_RB: Door_LF {
                displayName = "Open back right door";
                property = "Door_RB";
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 1500;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {0, -2.35, -1.15};
            };
        };
    };
    class rhsusf_m998_w_2dr: rhsusf_hmmwe_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_2dr.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        side = 1;
        scope = 2;
        normalSpeedForwardCoef = 0.7;
        slownSpeedForwardCoef = 0.55;
        turnCoef = 3;
        terrainCoef = 0.5;
        simulation = "carx";
        dampersBumpCoef = 0;
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 109;
        fuelCapacity = 24;
        wheelCircumference = 2.95;
        brakeIdleSpeed = 2.5;
        canFloat = 0;
        maxFordingDepth = -0.6;
        waterSpeedFactor = 0.3;
        waterResistance = 1;
        waterResistanceCoef = 0.2;
        waterLeakiness = 20;
        switchTime = 0.5;
        latency = 1;
        changeGearType = "effective";
        changeGearOmegaRatios[] = {
            1,
            0.294118,
            0.205882,
            0.147059,
            0.926471,
            0.470588,
            0.764706,
            0.352941,
            0.852941,
            0.5,
            1,
            0.647059
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -3.07,
                "N",
                0,
                "D1",
                2.48,
                "D2",
                1.48,
                "D3",
                1,
                "D4",
                0.75
            };
            TransmissionRatios[] = {"High", 6};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 2.7;
        rearBias = 1.9;
        centreBias = 1.5;
        clutchStrength = 85;
        transmissionLosses = 20;
        dampingRateFullThrottle = 0.15;
        dampingRateZeroThrottleClutchEngaged = 2.8;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.191176, 0.703518},
            {0.294118, 0.778894},
            {0.411765, 0.911223},
            {0.529412, 1},
            {0.705882, 0.976549},
            {0.764706, 0.835846},
            {0.941176, 0.79062},
            {1.05971, 0}
        };
        engineMOI = 7;
        enginePower = 160;
        peakTorque = 597;
        minOmega = 41;
        maxOmega = 356.05;
        idleRPM = 650;
        redRPM = 3400;
        engineLosses = 12;
        thrustDelay = 0.8;
        engineBrakeCoef = 0.8;
        antiRollbarForceCoef = 20;
        antiRollbarForceLimit = 5.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 80;
        accelAidForceYOffset = -1.25;
        class Wheels {
            class LF {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "axis_wheel_1_1";
                boundary = "bound_wheel_1_1";
                suspForceAppPointOffset = "axis_wheel_1_1";
                tireForceAppPointOffset = "axis_wheel_1_1";
                suspTravelDirection[] = {-0.125, -1, 0};
                steering = 1;
                width = 0.25;
                mass = 80;
                MOI = 10;
                dampingRate = 0.1;
                maxBrakeTorque = 7000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.1;
                maxDroop = 0.1;
                sprungMass = -1;
                springStrength = 45000;
                springDamperRate = 9157;
                longitudinalStiffnessPerUnitGravity = 7500;
                latStiffX = 40;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 2.5}, {0.5, 2.3}, {1, 2}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "axis_wheel_3_1";
                boundary = "bound_wheel_3_1";
                suspForceAppPointOffset = "axis_wheel_3_1";
                tireForceAppPointOffset = "axis_wheel_3_1";
                maxHandBrakeTorque = 30000;
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "axis_wheel_2_1";
                boundary = "bound_wheel_2_1";
                suspForceAppPointOffset = "axis_wheel_2_1";
                tireForceAppPointOffset = "axis_wheel_2_1";
                steering = 1;
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                steering = 0;
                center = "axis_wheel_4_1";
                boundary = "bound_wheel_4_1";
                suspForceAppPointOffset = "axis_wheel_4_1";
                tireForceAppPointOffset = "axis_wheel_4_1";
                maxHandBrakeTorque = 30000;
            };
        };
        typicalCargo[] = {"rhsusf_army_ocp_driver"};
        nameSound = "Car";
        attenuationEffectType = "OpenCarAttenuation";
        soundAttenuationCargo[] = {0};
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_2dr";
        displayname = "M1097A2 (2D/Open)";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m998_2dr_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_2dr_open.paa";
        class Library {
            libTextDesc = "M998, 1-1/4 ton, cargo carrier, wood (open)";
        };
        damperSize = 0.15;
        damperForce = 1;
        damperDamping = 1;
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "2drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
            ""
        };
        driverAction = "RHS_HMMWV_Driver";
        driverInAction = "RHS_HMMWV_Driver";
        cargoAction[] = {
            "RHS_HMMWV_Cargo",
            "Truck_Cargo01",
            "Truck_Cargo02",
            "Truck_Cargo03",
            "Truck_Cargo01",
            "Truck_Cargo02",
            "RHS_HMMWV_Cargo"
        };
        cargoDoors[] = {};
        driverDoor = "";
        memoryPointsGetInCargo[] = {"pos_cargo_RF", "pos_cargo"};
        memoryPointsGetInCargoDir[] = {"pos_cargo_RF_dir", "pos_cargo_dir"};
        memoryPointsGetInCoDriver = "pos_codriver";
        memoryPointsGetInCoDriverDir = "pos_codriver_dir";
        memoryPointsGetInDriver = "pos_driver";
        memoryPointsGetInDriverDir = "pos_driver_dir";
        cargoCompartments[] = {1, 2};
        transportMaxBackpacks = 7;
        threat[] = {0, 0, 0};
        castDriverShadow = 1;
        castCargoShadow = 1;
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 12;
            };
            class _xx_rhs_mag_M441_HE {
                magazine = "rhs_mag_M441_HE";
                count = 8;
            };
            class _xx_rhs_mag_m67 {
                magazine = "rhs_mag_m67";
                count = 4;
            };
            class _xx_rhs_mag_m18_green {
                magazine = "rhs_mag_m18_green";
                count = 2;
            };
            class _xx_rhs_mag_m18_red {
                magazine = "rhs_mag_m18_red";
                count = 2;
            };
            class _xx_rhs_mag_an_m8hc {
                magazine = "rhs_mag_an_m8hc";
                count = 4;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 4;
            };
        };
        class TransportWeapons {};
        crewExplosionProtection = 0.55;
        transportSoldier = 4;
        cargoProxyIndexes[] = {2, 3, 5, 6};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7};
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                gunnerGetInAction = "GetInOffroadBack";
                gunnerGetOutAction = "GetOutHelicopterCargo";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                gunnerName = "Passenger (Left Seat)";
                gunnerCompartments = "Compartment2";
                proxyIndex = 7;
                maxElev = 55;
                minElev = -45;
                maxTurn = -10;
                minTurn = -105;
                isPersonTurret = 1;
                selectionFireAnim = "";
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Right Seat)";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                proxyIndex = 4;
                maxTurn = 105;
                minTurn = 20;
                minElev = -45;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerName = "Passenger (Right Front)";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                memoryPointsGetInGunner = "pos_cargo_RF";
                memoryPointsGetInGunnerDir = "pos_cargo_RF_dir";
                proxyIndex = 1;
                maxTurn = -34;
                minTurn = -95;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_half_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_half_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_half_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m1025.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_chassis.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_chassis.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_half_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_half_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_full_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_tire.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_tire_half_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_tire_full_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_windows.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_windows_half_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_windows_half_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_tarpwindows.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_tarpwindows_half_d.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_tarpwindows_half_d.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\rhs_destr_hmmwv.rvmat"
            };
        };
        class AnimationSources: AnimationSources {
            class longlights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
            class shortlights_hide: longlights_hide {
                initPhase = 0;
            };
            class lights_hide: longlights_hide {
                initPhase = 0;
            };
            class light_bo {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class light_stop: light_bo {
                initPhase = 0;
            };
            class hide_backTop: light_bo {
                initPhase = 1;
                mass = -80;
                displayName = "hide back top";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                forceAnimatePhase = 0;
                forceAnimate[] = {"hide_middleTop", 0};
            };
            class hide_frontTop: hide_backTop {
                displayName = "hide front top";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                forceAnimate[] = {};
            };
            class hide_snorkel: hide_backTop {
                initPhase = 1;
                displayName = "hide snorkel";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                forceAnimate[] = {};
            };
            class hide_middleTop: light_bo {
                useSource = 1;
                displayName = "unhide middle top";
                author = "$STR_RHSUSF_AUTHOR_FULL";
            };
            class hide_CIP: light_bo {
                displayName = "hide CIP";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                initPhase = 0;
            };
            class hide_BFT: light_bo {
                displayName = "hide BFT";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                initPhase = 0;
            };
            class hide_Antenna: light_bo {
                displayName = "hide Antennas";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                initPhase = 0;
                useSource = 1;
            };
            class hide_A2_Parts: light_bo {
                displayName = "hide A2 Parts";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                initPhase = 0;
            };
            class A1_bumper: light_bo {
                initPhase = 0;
            };
            class Hide_A2Bumper: light_bo {
                displayName = "switch to old bumper";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                initPhase = 0;
                forceAnimatePhase = 1;
                forceAnimate[] = {"A1_bumper", 1};
                forceAnimate2[] = {"A1_bumper", 0};
            };
            class Hide_Brushguard: light_bo {
                initPhase = 1;
                displayName = "hide brushguard";
                author = "$STR_RHSUSF_AUTHOR_FULL";
            };
            class Door_LF {
                source = "door";
                animPeriod = 0.8;
                sound = "RHS_HMMWV_Door";
                soundPosition = "door_1_axis";
            };
            class Door_RF: Door_LF {
                soundPosition = "door_2_axis";
            };
            class Door_LB: Door_LF {
                soundPosition = "door_3_axis";
            };
            class Door_RB: Door_LF {
                soundPosition = "door_4_axis";
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalMask: rhs_decalMask {};
            class rhs_decalDoors: rhs_decalDoors {};
            class rhs_hideCIP: rhs_hideCIP {};
            class rhs_hideBFT: rhs_hideBFT {};
            class rhs_hideAntennas: rhs_hideAntennas {};
            class rhs_hideA2Parts: rhs_hideA2Parts {};
            class Door_LF: Door_LF {};
            class Door_RF: Door_RF {};
        };
        class RenderTargets {
            class LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "m1p";
                    pointDirection = "m1d";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
            class RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "m2p";
                    pointDirection = "m2d";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
        };
        class Reflectors {
            class Left {
                color[] = {800, 900, 650};
                ambient[] = {2, 2, 2};
                position = "light_hd_1";
                direction = "light_hd_1_dir";
                hitpoint = "light_hd_1";
                selection = "light_hd_1";
                size = 1;
                innerAngle = 30;
                outerAngle = 100;
                coneFadeCoef = 5;
                intensity = 2.5;
                useFlare = 0;
                dayLight = 0;
                flareSize = 0.85;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Left_Flare: Left {
                useFlare = 1;
                innerAngle = 50;
                outerAngle = 179;
                coneFadeCoef = 51;
                intensity = 1;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
            class Right: Left {
                position = "light_hd_2";
                direction = "light_hd_2_dir";
                hitpoint = "light_hd_2";
                selection = "light_hd_2";
            };
            class Right_Flare: Right {
                useFlare = 1;
                innerAngle = 50;
                outerAngle = 179;
                coneFadeCoef = 51;
                intensity = 1;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
            class Long_Left {
                color[] = {800, 900, 650};
                ambient[] = {5, 5, 5};
                position = "Light_L_Long";
                direction = "Light_L_Long_end";
                hitpoint = "light_hd_1";
                selection = "light_hd_1";
                size = 1;
                innerAngle = 22;
                outerAngle = 29;
                coneFadeCoef = 1;
                intensity = 100;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1.5;
                flareMaxDistance = 750;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0.1;
                    quadratic = 0;
                    hardLimitStart = 500;
                    hardLimitEnd = 750;
                };
            };
            class Long_Right: Long_Left {
                position = "Light_R_Long";
                direction = "Light_R_Long_end";
                hitpoint = "light_hd_2";
                selection = "light_hd_2";
            };
            class Long_Right2: Long_Right {
                useFlare = 1;
                position = "light_R_Long_flare";
                innerAngle = 50;
                outerAngle = 179;
                coneFadeCoef = 51;
                intensity = 1;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
            class Long_Left2: Long_Left {
                useFlare = 1;
                position = "light_L_Long_flare";
                innerAngle = 50;
                outerAngle = 179;
                coneFadeCoef = 51;
                intensity = 1;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
        };
        aggregateReflectors[] = {{"Left", "Right"}};
        class NVGMarkers {
            class NVGMarker01 {
                name = "nvg_marker";
                color[] = {0.03, 0.003, 0.003, 1};
                ambient[] = {0.003, 0.0003, 0.0003, 1};
                brightness = 0.001;
                blinking = 1;
            };
        };
        class UserActions {
            class light_bo_off {
                displayName = "B.O. Light off";
                position = "pos_driverpos";
                radius = 2;
                onlyForplayer = 0;
                condition = "(player == driver this) && this animationPhase 'light_bo'<0.5;";
                statement = "this animate ['light_bo', 1];this animate ['light_brake_bo', 1]";
            };
            class light_bo_on: light_bo_off {
                displayName = "B.O. Light on";
                condition = "(player == driver this) && this animationPhase 'light_bo'==1;";
                statement = "this animate ['light_bo', 0];this animate ['light_brake_bo', 0]";
            };
            class light_stop_off: light_bo_off {
                displayName = "Stop Light off";
                condition = "(player == driver this) && this animationPhase 'light_stop'<0.5";
                statement = "this animate ['light_stop', 1]";
            };
            class light_stop_on: light_bo_off {
                displayName = "Stop Light on";
                condition = "(player == driver this) && this animationPhase 'light_stop'==1";
                statement = "this animate ['light_stop', 0]";
            };
            class lights_toggle {
                displayName = "Toggle short/long lights";
                position = "";
                shortcut = "vehLockTargets";
                radius = 12;
                priority = 1.5;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "(player == driver this) AND (isLightOn this)";
                statement = "[this,2] call rhsusf_fnc_carLightToggle";
            };
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        textureList[] = {};
    };
    class rhsusf_m998_d_2dr: rhsusf_m998_w_2dr {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_2dr.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m998_w_s_2dr: rhsusf_m998_w_2dr {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_s_2dr.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1123 (2D/Open/Snorkel)";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_d_s_2dr: rhsusf_m998_w_s_2dr {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_s_2dr.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_w_2dr_halftop: rhsusf_m998_w_2dr {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_2dr_halftop.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1097A2 (2D/Half)";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_2dr_hopen.paa";
        soundAttenuationCargo[] = {1, 0};
        transportSoldier = 5;
        cargoProxyIndexes[] = {8, 2, 3, 5, 6};
        getInProxyOrder[] = {8, 2, 3, 4, 5, 6, 7};
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", ""};
        class AnimationSources: AnimationSources {
            class hide_frontTop: light_bo {
                initPhase = 0;
            };
        };
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
        };
    };
    class rhsusf_m998_d_2dr_halftop: rhsusf_m998_w_2dr_halftop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_2dr_halftop.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m998_w_s_2dr_halftop: rhsusf_m998_w_2dr_halftop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_s_2dr_halftop.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1123 (2D/Half/Snorkel)";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_d_s_2dr_halftop: rhsusf_m998_w_s_2dr_halftop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_s_2dr_halftop.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_w_2dr_fulltop: rhsusf_m998_w_2dr_halftop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_2dr_fulltop.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1097A2 (2D)";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_2dr.paa";
        attenuationEffectType = "RHS_CarAttenuation";
        soundAttenuationCargo[] = {1};
        insideSoundCoef = 0.6;
        class AnimationSources: AnimationSources {
            class hide_backTop: light_bo {
                initPhase = 0;
            };
        };
        class Sounds: Sounds {
            class RainIn {
                sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*(1-camPos)";
            };
            class RainExt {
                sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*camPos";
            };
        };
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                maxElev = 15;
            };
            class CargoTurret_02: CargoTurret_02 {
                maxElev = 15;
            };
        };
    };
    class rhsusf_m998_d_2dr_fulltop: rhsusf_m998_w_2dr_fulltop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_2dr_fulltop.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m998_w_s_2dr_fulltop: rhsusf_m998_w_2dr_fulltop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_s_2dr_fulltop.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1123 (2D/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_d_s_2dr_fulltop: rhsusf_m998_w_s_2dr_fulltop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_s_2dr_fulltop.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_4dr.paa";
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_4dr";
        displayname = "M1097A2 (4D/Open)";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_4dr_open.paa";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m998_4dr_ca.paa";
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "4drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
            ""
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        textureList[] = {};
        transportSoldier = 0;
        cargoAction[] = {"RHS_HMMWV_Cargo", "RHS_HMMWV_Cargo", "RHS_HMMWV_Cargo"};
        memoryPointsGetInCargo[] = {"pos_cargo_RF", "pos_cargo_RB", "pos_cargo_LB"};
        memoryPointsGetInCargoDir[] = {"pos_cargo_RF_dir", "pos_cargo_RB_dir", "pos_cargo_LB_dir"};
        cargoProxyIndexes[] = {};
        getInProxyOrder[] = {1, 2, 3, 4, 5};
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_1";
                gunnerGetInAction = "GetInOffroadBack";
                gunnerGetOutAction = "GetOutHelicopterCargo";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                gunnerName = "Passenger (Left Back Seat)";
                gunnerCompartments = "Compartment2";
                proxyIndex = 5;
                maxElev = 55;
                minElev = -45;
                maxTurn = 80;
                minTurn = -105;
                isPersonTurret = 1;
                class dynamicViewLimits {
                    CargoTurret_02[] = {-105, -20};
                };
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Right Back Seat)";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                proxyIndex = 4;
                maxTurn = 105;
                minTurn = -80;
                minElev = -45;
                class dynamicViewLimits {
                    CargoTurret_01[] = {20, 105};
                };
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerAction = "passenger_inside_2";
                gunnerName = "Passenger (Right Front)";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                memoryPointsGetInGunner = "pos_cargo_RF";
                memoryPointsGetInGunnerDir = "pos_cargo_RF_dir";
                proxyIndex = 1;
                maxTurn = -34;
                minTurn = -95;
                class dynamicViewLimits {};
            };
            class CargoTurret_04: CargoTurret_03 {
                gunnerName = "Passenger (Right Middle)";
                memoryPointsGetInGunner = "pos_cargo_RB";
                memoryPointsGetInGunnerDir = "pos_cargo_RB_dir";
                proxyIndex = 2;
                maxTurn = -20;
                minTurn = -95;
            };
            class CargoTurret_05: CargoTurret_03 {
                gunnerName = "Passenger (Left Middle)";
                memoryPointsGetInGunner = "pos_cargo_LB";
                memoryPointsGetInGunnerDir = "pos_cargo_LB_dir";
                proxyIndex = 3;
                maxTurn = 95;
                minTurn = 38;
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalMask: rhs_decalMask {};
            class rhs_decalDoors: rhs_decalDoors {};
            class rhs_hideCIP: rhs_hideCIP {};
            class rhs_hideBFT: rhs_hideBFT {};
            class rhs_hideAntennas: rhs_hideAntennas {};
            class rhs_hideA2Parts: rhs_hideA2Parts {};
            class Door_LF: Door_LF {};
            class Door_RF: Door_RF {};
            class Door_LB: Door_LB {};
            class Door_RB: Door_RB {};
        };
    };
    class rhsusf_m998_d_4dr: rhsusf_m998_w_4dr {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_4dr.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m998_w_s_4dr: rhsusf_m998_w_4dr {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_s_4dr.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1123 (4D/Open/Snorkel)";
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "4drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_d_s_4dr: rhsusf_m998_w_s_4dr {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_s_4dr.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_4dr_halftop.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1097A2 (4D/Half)";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_4dr_hopen.paa";
        soundAttenuationCargo[] = {1, 0};
        class AnimationSources: AnimationSources {
            class hide_frontTop: light_bo {
                initPhase = 0;
            };
            class hide_middleTop: light_bo {
                initPhase = 1;
            };
        };
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", "Door_RB", "Door_LB"};
        transportSoldier = 3;
        cargoProxyIndexes[] = {6, 7, 8};
        getInProxyOrder[] = {6, 7, 8, 4, 5};
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
        };
    };
    class rhsusf_m998_d_4dr_halftop: rhsusf_m998_w_4dr_halftop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_4dr_halftop.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m998_w_s_4dr_halftop: rhsusf_m998_w_4dr_halftop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_s_4dr_halftop.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1123 (4D/Half/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_d_s_4dr_halftop: rhsusf_m998_w_s_4dr_halftop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_s_4dr_halftop.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_4dr_fulltop.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1097A2 (4D)";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_4dr.paa";
        attenuationEffectType = "RHS_CarAttenuation";
        soundAttenuationCargo[] = {1};
        class AnimationSources: AnimationSources {
            class hide_backTop: light_bo {
                initPhase = 0;
            };
            class hide_middleTop: light_bo {
                initPhase = 0;
            };
        };
        class Sounds: Sounds {
            class RainIn {
                sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*(1-camPos)";
            };
            class RainExt {
                sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*camPos";
            };
        };
        cargoProxyIndexes[] = {6, 7, 8};
        getInProxyOrder[] = {6, 7, 8};
        class CargoTurret;
        class Turrets: Turrets {};
    };
    class rhsusf_m998_d_4dr_fulltop: rhsusf_m998_w_4dr_fulltop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_4dr_fulltop.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m998_w_s_4dr_fulltop: rhsusf_m998_d_4dr_fulltop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_w_s_4dr_fulltop.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1123 (4D/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m998_d_s_4dr_fulltop: rhsusf_m998_w_s_4dr_fulltop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m998_d_s_4dr_fulltop.paa";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: light_bo {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_w.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        normalSpeedForwardCoef = 0.7;
        slownSpeedForwardCoef = 0.55;
        turnCoef = 3;
        terrainCoef = 0.5;
        simulation = "carx";
        dampersBumpCoef = 0;
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 109;
        fuelCapacity = 22.5;
        wheelCircumference = 2.95;
        brakeIdleSpeed = 1.8;
        canFloat = 0;
        maxFordingDepth = -0.7;
        waterSpeedFactor = 0.3;
        waterResistance = 1;
        waterResistanceCoef = 0.2;
        waterLeakiness = 20;
        switchTime = 0.5;
        latency = 1;
        changeGearType = "effective";
        changeGearOmegaRatios[] = {
            1,
            0.294118,
            0.205882,
            0.147059,
            0.926471,
            0.470588,
            0.764706,
            0.352941,
            0.852941,
            0.5,
            1,
            0.647059
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -3.07,
                "N",
                0,
                "D1",
                2.78,
                "D2",
                1.48,
                "D3",
                1,
                "D4",
                0.75
            };
            TransmissionRatios[] = {"High", 6};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 2.7;
        rearBias = 1.9;
        centreBias = 1.5;
        clutchStrength = 85;
        transmissionLosses = 20;
        dampingRateFullThrottle = 0.15;
        dampingRateZeroThrottleClutchEngaged = 2.8;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.191176, 0.703518},
            {0.294118, 0.778894},
            {0.411765, 0.911223},
            {0.529412, 1},
            {0.705882, 0.976549},
            {0.764706, 0.835846},
            {0.941176, 0.79062},
            {1.05971, 0}
        };
        engineMOI = 7;
        enginePower = 160;
        peakTorque = 597;
        minOmega = 41;
        maxOmega = 356.05;
        idleRPM = 650;
        redRPM = 3400;
        engineLosses = 12;
        thrustDelay = 0.8;
        engineBrakeCoef = 0.8;
        antiRollbarForceCoef = 20;
        antiRollbarForceLimit = 5.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 80;
        accelAidForceYOffset = -1.25;
        class Wheels {
            class LF {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "axis_wheel_1_1";
                boundary = "bound_wheel_1_1";
                suspForceAppPointOffset = "axis_wheel_1_1";
                tireForceAppPointOffset = "axis_wheel_1_1";
                suspTravelDirection[] = {-0.125, -1, 0};
                steering = 1;
                width = 0.25;
                mass = 40;
                MOI = 10;
                dampingRate = 0.1;
                maxBrakeTorque = 9000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.1;
                maxDroop = 0.1;
                sprungMass = -1;
                springStrength = 58550;
                springDamperRate = 7500;
                longitudinalStiffnessPerUnitGravity = 7500;
                latStiffX = 40;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 2.5}, {0.5, 2.3}, {1, 2}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "axis_wheel_3_1";
                boundary = "bound_wheel_3_1";
                suspForceAppPointOffset = "axis_wheel_3_1";
                tireForceAppPointOffset = "axis_wheel_3_1";
                maxHandBrakeTorque = 30000;
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "axis_wheel_2_1";
                boundary = "bound_wheel_2_1";
                suspForceAppPointOffset = "axis_wheel_2_1";
                tireForceAppPointOffset = "axis_wheel_2_1";
                steering = 1;
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                steering = 0;
                center = "axis_wheel_4_1";
                boundary = "bound_wheel_4_1";
                suspForceAppPointOffset = "axis_wheel_4_1";
                tireForceAppPointOffset = "axis_wheel_4_1";
                maxHandBrakeTorque = 30000;
            };
        };
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025.paa";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1025_ca.paa";
        displayname = "M1025A2 (Unarmed)";
        forceHideDriver = 1;
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "camo1",
            "camo2",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
            ""
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        textureList[] = {};
        crewExplosionProtection = 0.95;
        attenuationEffectType = "RHS_CarAttenuation";
        class AnimationSources: AnimationSources {
            class trunk {
                source = "user";
                animPeriod = 1.1;
                initPhase = 0;
            };
            class ani_window_1 {
                source = "door";
                animPeriod = 1.1;
                initPhase = 0;
            };
            class ani_window_2: ani_window_1 {};
            class ani_window_3: ani_window_1 {};
            class ani_window_4: ani_window_1 {};
        };
        class UserActions: UserActions {
            class trunk_open {
                displayName = "Open Trunk";
                position = "trunk_action";
                radius = 2;
                onlyForplayer = 0;
                condition = "this animationPhase 'ani_trunk_1'<0.5";
                statement = "this animate ['ani_trunk_1', 1];";
            };
            class trunk_close: trunk_open {
                displayName = "Close Trunk";
                condition = "this animationPhase 'ani_trunk_1'==1";
                statement = "this animate ['ani_trunk_1', 0]";
            };
            class window_action {
                userActionID = 101;
                displayName = "Raise/Lower window";
                position = "pos_driverpos";
                radius = 14;
                onlyForplayer = 0;
                condition = "((call rhsusf_fnc_findPlayer) in this) AND ((gunner this) != (call rhsusf_fnc_findPlayer) )";
                statement = "this call rhs_fnc_m1025_windowHandler";
            };
            class door_action: window_action {
                userActionID = 102;
                displayName = "Door toggle";
                condition = "((call rhsusf_fnc_findPlayer) in this)";
                statement = "call rhs_fnc_m1025_doorToggle";
            };
        };
        class HitPoints: HitPoints {
            class hitwindshield_1: hitwindshield_1 {
                armor = 2.29;
            };
            class hitwindshield_2: hitwindshield_2 {
                armor = 2.29;
            };
            class HitGlass1: HitGlass1 {
                armor = 2.09;
            };
            class HitGlass2: HitGlass2 {
                armor = 2.09;
            };
            class HitGlass3: HitGlass3 {
                armor = 2.09;
            };
            class HitGlass4: HitGlass4 {
                armor = 2.09;
            };
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 2;
            };
        };
        class TransportMagazines {
            class _xx_rhs_m136_hedp_mag {
                magazine = "rhs_m136_hedp_mag";
                count = 2;
            };
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 20;
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
                count = 8;
            };
            class _xx_rhs_mag_M441_HE {
                magazine = "rhs_mag_M441_HE";
                count = 16;
            };
            class _xx_rhs_mag_M714_white {
                magazine = "rhs_mag_M714_white";
                count = 4;
            };
            class _xx_rhs_mag_M662_red {
                magazine = "rhs_mag_M662_red";
                count = 2;
            };
            class _xx_rhs_mag_m67 {
                magazine = "rhs_mag_m67";
                count = 4;
            };
            class _xx_rhs_mag_m18_green {
                magazine = "rhs_mag_m18_green";
                count = 2;
            };
            class _xx_rhs_mag_m18_red {
                magazine = "rhs_mag_m18_red";
                count = 2;
            };
            class _xx_rhs_mag_an_m8hc {
                magazine = "rhs_mag_an_m8hc";
                count = 4;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 4;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4_carryhandle {
                weapon = "rhs_weap_m4_carryhandle";
                count = 2;
            };
            class _xx_rhs_weap_M136_hedp {
                weapon = "rhs_weap_M136_hedp";
                count = 2;
            };
        };
        transportSoldier = 0;
        cargoAction[] = {"RHS_HMMWV_Cargo", "RHS_HMMWV_Cargo", "RHS_HMMWV_Cargo"};
        memoryPointsGetInCargo[] = {"pos_cargo_RF", "pos_cargo_RB", "pos_cargo_LB"};
        memoryPointsGetInCargoDir[] = {"pos_cargo_RF_dir", "pos_cargo_RB_dir", "pos_cargo_LB_dir"};
        cargoProxyIndexes[] = {};
        getInProxyOrder[] = {1, 2, 3};
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                weapons[] = {"rhsusf_weap_DummyLauncher"};
                gunnerAction = "passenger_inside_1";
                gunnerName = "Passenger (Right Front)";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                memoryPointsGetInGunner = "pos_cargo_RF";
                memoryPointsGetInGunnerDir = "pos_cargo_RF_dir";
                memoryPointGunnerOptics = "";
                gunnerDoor = "Door_RF";
                proxyIndex = 1;
                maxTurn = -34;
                minTurn = -75;
                maxElev = 15;
                minElev = -7;
                class dynamicViewLimits {};
                enabledByAnimationSource = "ani_window_2";
                selectionFireAnim = "";
                class Hitpoints {};
                showAsCargo = 1;
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerAction = "passenger_inside_2";
                gunnerName = "Passenger (Right Back)";
                memoryPointsGetInGunner = "pos_cargo_RB";
                memoryPointsGetInGunnerDir = "pos_cargo_RB_dir";
                proxyIndex = 2;
                enabledByAnimationSource = "ani_window_4";
                gunnerDoor = "Door_RB";
                maxTurn = -37;
                minTurn = -65;
                maxElev = 9;
                minElev = -15;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerAction = "passenger_inside_2";
                gunnerName = "Passenger (Left Back)";
                memoryPointsGetInGunner = "pos_cargo_LB";
                memoryPointsGetInGunnerDir = "pos_cargo_LB_dir";
                proxyIndex = 3;
                maxTurn = 90;
                minTurn = 54;
                maxElev = 9;
                minElev = -15;
                enabledByAnimationSource = "ani_window_3";
                gunnerDoor = "Door_LB";
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalMask: rhs_decalMask {};
            class rhs_decalDoors: rhs_decalDoors {};
            class rhs_hideCIP: rhs_hideCIP {};
            class rhs_hideBFT: rhs_hideBFT {};
            class rhs_hideAntennas: rhs_hideAntennas {};
            class rhs_hideA2Parts: rhs_hideA2Parts {};
            class Door_LF: Door_LF {};
            class ani_window_1: Door_LF {
                displayName = "Open front left window";
                property = "ani_window_1";
            };
            class Door_RF: Door_RF {};
            class ani_window_2: Door_LF {
                displayName = "Open front right window";
                property = "ani_window_2";
            };
            class Door_LB: Door_LB {};
            class ani_window_3: Door_LF {
                displayName = "Open back left window";
                property = "ani_window_3";
            };
            class Door_RB: Door_RB {};
            class ani_window_4: Door_LF {
                displayName = "Open back right window";
                property = "ani_window_4";
            };
            class ani_trunk_1: Door_LF {
                displayName = "Open trunk";
                property = "ani_trunk_1";
                expression = "_this animate ['%s',_value,true]";
                control = "Slider";
            };
        };
        class EventHandlers: EventHandlers {
            class rhs_m1025_eh {
                getOut = "_this call rhs_fnc_m1025_doorHandler";
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.06, -2.45, -1.15};
            };
        };
    };
    class rhsusf_m1025_d: rhsusf_m1025_w {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_d.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m1025_w_s: rhsusf_m1025_w {
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: hide_snorkel {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_w_s.paa";
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1025A2 (Unarmed/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1025_d_s: rhsusf_m1025_w_s {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_d_s.paa";
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1025_w_m2: rhsusf_m1025_w {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_w_m2.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_m2";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_m2.paa";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1025_m2_ca.paa";
        displayname = "M1025A2 (M2)";
        attenuationEffectType = "RHS_CarAttenuation";
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_armedcar_s"};
                speechPlural[] = {"veh_vehicle_armedcar_p"};
            };
        };
        textSingular = "alpha victor (MRAP)";
        textPlural = "alpha victors";
        nameSound = "veh_vehicle_armedcar_s";
        class AnimationSources: AnimationSources {
            class GunnerAdjust_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.25;
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
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "RHS_M2";
            };
        };
        class HitPoints: HitPoints {};
        threat[] = {0.9, 0.3, 0.1};
        showNVGGunner = 1;
        class Turrets: Turrets {
            class M2_Turret: MainTurret {
                gunnerLeftHandAnimName = "OtocHlaven_Shake";
                gunnerRightHandAnimName = "OtocHlaven_Shake";
                gunnerLeftLegAnimName = "leg_left";
                gunnerRightLegAnimName = "leg_right";
                body = "mainTurret";
                gun = "mainGun";
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                turretInfoType = "RHS_RscWeaponZeroing_TurretAdjust";
                discreteDistance[] = {
                    100,
                    200,
                    300,
                    400,
                    500,
                    600,
                    800,
                    1000,
                    1200,
                    1500
                };
                discreteDistanceInitIndex = 2;
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
                minElev = -10;
                maxElev = 40;
                soundServo[] = {"A3\sounds_f\dummysound", 0.000001, 1};
                soundAttenuationTurret = "HeliAttenuationGunner";
                disableSoundAttenuation = 1;
                gunnerAction = "RHS_HMMWV_Gunner03";
                gunnerInAction = "RHS_HMMWV_Gunner03a_in";
                lodTurnedIn = 0;
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                canhideGunner = 1;
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerDoor = "Door_RB";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "";
                memoryPointGunnerOutOptics = "gunnerview";
                gunnerOpticsModel = "";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                memoryPointsGetInGunner = "pos_cargo_RB";
                memoryPointsGetInGunnerDir = "pos_cargo_RB_dir";
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "camo1",
            "camo2",
            "camo3",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
            ""
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        textureList[] = {};
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.06, -2.45, -1.4};
            };
        };
    };
    class rhsusf_m1025_d_m2: rhsusf_m1025_w_m2 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_d_m2.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m1025_w_s_m2: rhsusf_m1025_w_m2 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_w_s_m2.paa";
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: hide_snorkel {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        displayname = "M1025A2 (M2/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1025_d_s_m2: rhsusf_m1025_w_s_m2 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_d_s_m2.paa";
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_w_mk19.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_mk19";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_mk19.paa";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1025_mk19_ca.paa";
        displayname = "M1025A2 (Mk19)";
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {
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
                weapons[] = {"RHS_MK19"};
                magazines[] = {
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M1001"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
        class AnimationSources: AnimationSources {
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
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.06, -2.45, -1.25};
            };
        };
    };
    class rhsusf_m1025_d_Mk19: rhsusf_m1025_w_mk19 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_d_Mk19.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m1025_w_s_Mk19: rhsusf_m1025_w_mk19 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_w_s_Mk19.paa";
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: hide_snorkel {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        displayname = "M1025A2 (Mk19/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1025_d_s_Mk19: rhsusf_m1025_w_s_Mk19 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1025_d_s_Mk19.paa";
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m966_w: rhsusf_m1025_w {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m966_w.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_TOW";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_m2.paa";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m966_ca.paa";
        displayname = "M966A1 (M220A2)";
        attenuationEffectType = "RHS_CarAttenuation";
        class RenderTargets: RenderTargets {
            class Optic {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "gunnerview";
                    pointDirection = "gunnerview_dir";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.0538462;
                    turret[] = {0};
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
        };
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_armedcar_s"};
                speechPlural[] = {"veh_vehicle_armedcar_p"};
            };
        };
        textSingular = "alpha victor (MRAP)";
        textPlural = "alpha victors";
        nameSound = "veh_vehicle_armedcar_s";
        class AnimationSources: AnimationSources {
            class Revolving {
                source = "revolving";
                weapon = "rhs_weap_tow_launcher_static";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_tow_launcher_static";
            };
        };
        class HitPoints: HitPoints {
            class Hit_Ammo {
                armor = -100;
                minimalHit = -0.2;
                explosionShielding = 0;
                armorComponent = "Hit_Ammo";
                name = "Hit_Ammo";
                visual = "-";
                passThrough = 0.1;
                radius = 0.2;
            };
            class HitHull: HitHull {
                depends = "Hit_Ammo";
            };
        };
        threat[] = {0.9, 0.3, 0.1};
        showNVGGunner = 1;
        class Turrets: Turrets {
            class TOW_Turret: MainTurret {
                body = "mainTurret";
                gun = "maingun";
                minElev = -10;
                maxElev = 30;
                minturn = -180;
                maxturn = 180;
                weapons[] = {"rhs_weap_tow_launcher_static"};
                magazines[] = {
                    "rhs_mag_TOW2A",
                    "rhs_mag_TOW2A",
                    "rhs_mag_TOW2b",
                    "rhs_mag_TOW2b",
                    "rhs_mag_TOW2bb",
                    "rhs_mag_TOW2bb"
                };
                turretInfoType = "RscOptics_Offroad_01";
                gunnerAction = "RHS_HMMWV_Gunner_TOW";
                gunnerInAction = "RHS_HMMWV_Gunner03a_in";
                memoryPointsGetInGunner = "pos_cargo_RB";
                memoryPointsGetInGunnerDir = "pos_cargo_RB_dir";
                gunnerLeftHandAnimName = "handle_Elev2";
                gunnerRightHandAnimName = "handle_Horiz2";
                gunnerLeftLegAnimName = "leg_left";
                gunnerRightLegAnimName = "leg_right";
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                maxHorizontalRotSpeed = 0.25;
                maxVerticalRotSpeed = 0.15;
                viewGunnerInExternal = 1;
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                gunnerDoor = "Door_RB";
                soundServo[] = {"A3\sounds_f\dummysound", 0.000001, 1};
                soundAttenuationTurret = "HeliAttenuationGunner";
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                gunnerOpticsEffect[] = {"TankGunnerOptics2", "OpticsBlur1", "OpticsCHAbera1"};
                class OpticsIn {
                    class Wide: ViewOptics {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = "0.7/3";
                        minFov = "0.7/3";
                        maxFov = "0.7/3";
                        visionMode[] = {"Normal"};
                        thermalMode[] = {4};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_optic";
                    };
                    class Narrow: Wide {
                        initFov = "0.7/13";
                        minFov = "0.7/13";
                        maxFov = "0.7/13";
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_optic";
                    };
                    class Wide_TI: Wide {
                        initFov = "0.7/4";
                        minFov = "0.7/4";
                        maxFov = "0.7/4";
                        visionMode[] = {"TI"};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_TI";
                    };
                    class Narrow_TI: Wide_TI {
                        initFov = "0.7/12";
                        minFov = "0.7/12";
                        maxFov = "0.7/12";
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_TI_Narrow";
                    };
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "camo1",
            "camo2",
            "camo3",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
            ""
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        textureList[] = {};
        animationList[] = {"Hide_A2Bumper", 1, "Hide_Brushguard", 0.5};
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.06, -2.22, -1.25};
            };
        };
    };
    class rhsusf_m966_d: rhsusf_m966_w {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m966_d.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\a12^_co.paa"
        };
    };
    class rhsusf_m1043_w: rhsusf_m1025_w {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_w.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        normalSpeedForwardCoef = 0.7;
        slownSpeedForwardCoef = 0.55;
        turnCoef = 3;
        terrainCoef = 0.5;
        simulation = "carx";
        dampersBumpCoef = 0;
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 109;
        fuelCapacity = 22.5;
        wheelCircumference = 2.95;
        brakeIdleSpeed = 1.8;
        canFloat = 0;
        maxFordingDepth = -0.7;
        waterSpeedFactor = 0.3;
        waterResistance = 1;
        waterResistanceCoef = 0.2;
        waterLeakiness = 20;
        switchTime = 0.5;
        latency = 1;
        changeGearType = "effective";
        changeGearOmegaRatios[] = {
            1,
            0.294118,
            0.205882,
            0.147059,
            0.926471,
            0.470588,
            0.764706,
            0.352941,
            0.852941,
            0.5,
            1,
            0.647059
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -3.07,
                "N",
                0,
                "D1",
                2.78,
                "D2",
                1.48,
                "D3",
                1,
                "D4",
                0.75
            };
            TransmissionRatios[] = {"High", 6};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 2.7;
        rearBias = 1.9;
        centreBias = 1.5;
        clutchStrength = 85;
        transmissionLosses = 20;
        dampingRateFullThrottle = 0.15;
        dampingRateZeroThrottleClutchEngaged = 2.8;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.191176, 0.703518},
            {0.294118, 0.778894},
            {0.411765, 0.911223},
            {0.529412, 1},
            {0.705882, 0.976549},
            {0.764706, 0.835846},
            {0.941176, 0.79062},
            {1.05971, 0}
        };
        engineMOI = 7;
        enginePower = 160;
        peakTorque = 597;
        minOmega = 41;
        maxOmega = 356.05;
        idleRPM = 650;
        redRPM = 3400;
        engineLosses = 12;
        thrustDelay = 0.8;
        engineBrakeCoef = 0.8;
        antiRollbarForceCoef = 20;
        antiRollbarForceLimit = 5.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 80;
        accelAidForceYOffset = -1.25;
        class Wheels {
            class LF {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "axis_wheel_1_1";
                boundary = "bound_wheel_1_1";
                suspForceAppPointOffset = "axis_wheel_1_1";
                tireForceAppPointOffset = "axis_wheel_1_1";
                suspTravelDirection[] = {-0.125, -1, 0};
                steering = 1;
                width = 0.25;
                mass = 40;
                MOI = 10;
                dampingRate = 0.1;
                maxBrakeTorque = 9000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.1;
                maxDroop = 0.1;
                sprungMass = -1;
                springStrength = 58550;
                springDamperRate = 7500;
                longitudinalStiffnessPerUnitGravity = 7500;
                latStiffX = 40;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 2.5}, {0.5, 2.3}, {1, 2}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "axis_wheel_3_1";
                boundary = "bound_wheel_3_1";
                suspForceAppPointOffset = "axis_wheel_3_1";
                tireForceAppPointOffset = "axis_wheel_3_1";
                maxHandBrakeTorque = 30000;
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "axis_wheel_2_1";
                boundary = "bound_wheel_2_1";
                suspForceAppPointOffset = "axis_wheel_2_1";
                tireForceAppPointOffset = "axis_wheel_2_1";
                steering = 1;
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                steering = 0;
                center = "axis_wheel_4_1";
                boundary = "bound_wheel_4_1";
                suspForceAppPointOffset = "axis_wheel_4_1";
                tireForceAppPointOffset = "axis_wheel_4_1";
                maxHandBrakeTorque = 30000;
            };
        };
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1043";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025.paa";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1043_ca.paa";
        displayname = "M1043A2 (Unarmed)";
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "camo1",
            "camo2",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
            ""
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        textureList[] = {};
    };
    class rhsusf_m1043_d: rhsusf_m1043_w {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_d.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa"
        };
    };
    class rhsusf_m1043_w_s: rhsusf_m1043_w {
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: hide_snorkel {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_w_s.paa";
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1043A2 (Unarmed/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1043_d_s: rhsusf_m1043_w_s {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_d_s.paa";
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1043_w_m2: rhsusf_m1025_w_m2 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_w_m2.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1043A2 (M2)";
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1043_m2";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1043_m2_ca.paa";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
            ""
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
    };
    class rhsusf_m1043_d_m2: rhsusf_m1043_w_m2 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_d_m2.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
    };
    class rhsusf_m1043_w_s_m2: rhsusf_m1043_w_m2 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_w_s_m2.paa";
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: hide_snorkel {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        displayname = "M1043A2 (M2/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1043_d_s_m2: rhsusf_m1043_w_s_m2 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_d_s_m2.paa";
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1043_w_mk19: rhsusf_m1025_w_mk19 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_w_mk19.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1043A2 (Mk19)";
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1043_mk19";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1043_mk19_ca.paa";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
            ""
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
    };
    class rhsusf_m1043_d_mk19: rhsusf_m1043_w_mk19 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_d_mk19.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
    };
    class rhsusf_m1043_w_s_mk19: rhsusf_m1043_w_mk19 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_w_s_Mk19.paa";
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: hide_snorkel {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        displayname = "M1043A2 (Mk19/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1043_d_s_mk19: rhsusf_m1043_w_s_mk19 {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1043_d_s_Mk19.paa";
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1045_w: rhsusf_m966_w {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1045_w.paa";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ucp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayname = "M1045A2 (M220A2)";
        model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1045";
        Picture = "\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1045_ca.paa";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",
            ""
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        animationList[] = {};
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.06, -2.45, -1.25};
            };
        };
    };
    class rhsusf_m1045_d: rhsusf_m1045_w {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1045_d.paa";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_army_ocp_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
    };
    class rhsusf_m1045_w_s: rhsusf_m1045_w {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1045_w_s.paa";
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_snorkel: hide_snorkel {
                initPhase = 0;
            };
        };
        maxFordingDepth = 0;
        displayname = "M1045A2 (M220A2/Snorkel)";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
    class rhsusf_m1045_d_s: rhsusf_m1045_w_s {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1045_d_s.paa";
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_car";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
            ""
        };
    };
};
