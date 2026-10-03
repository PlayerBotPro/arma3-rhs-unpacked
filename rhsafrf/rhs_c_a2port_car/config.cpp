class DefaultEventhandlers;
class CfgPatches {
    class rhs_c_a2port_car {
        units[] = {
            "RHS_UAZ_MSV_01",
            "RHS_UAZ_Open_MSV_01",
            "RHS_Ural_MSV_01",
            "RHS_Ural_Open_MSV_01",
            "RHS_Ural_Flat_MSV_01",
            "RHS_Ural_Open_Flat_MSV_01",
            "RHS_BM21_MSV_01",
            "RHS_Ural_Fuel_MSV_01",
            "RHS_Ural_Zu23_MSV_01",
            "RHS_Ural_Repair_MSV_01",
            "RHS_Ural_Ammo_MSV_01",
            "RHS_UAZ_VDV",
            "RHS_UAZ_Open_VDV",
            "RHS_Ural_VDV_01",
            "RHS_Ural_Open_VDV_01",
            "RHS_Ural_Flat_VDV_01",
            "RHS_Ural_Open_Flat_VDV_01",
            "RHS_BM21_VDV_01",
            "RHS_Ural_Fuel_VDV_01",
            "RHS_Ural_Zu23_VDV_01",
            "RHS_Ural_Repair_VDV_01",
            "RHS_Ural_Ammo_VDV_01",
            "RHS_UAZ_vmf",
            "RHS_UAZ_Open_vmf",
            "RHS_Ural_vmf_01",
            "RHS_Ural_Open_vmf_01",
            "RHS_Ural_Flat_vmf_01",
            "RHS_Ural_Open_Flat_vmf_01",
            "RHS_BM21_vmf_01",
            "RHS_Ural_Fuel_vmf_01",
            "RHS_Ural_Zu23_vmf_01",
            "RHS_Ural_Repair_VMF_01",
            "RHS_Ural_Ammo_VMF_01",
            "RHS_UAZ_vv",
            "RHS_UAZ_Open_vv",
            "RHS_Ural_vv_01",
            "RHS_Ural_Open_vv_01",
            "RHS_Ural_Flat_vv_01",
            "RHS_Ural_Open_Flat_vv_01",
            "RHS_BM21_vv_01",
            "RHS_Ural_Fuel_vv_01",
            "RHS_Ural_Zu23_vv_01",
            "RHS_Ural_Repair_VV_01",
            "RHS_Ural_Ammo_VV_01",
            "RHS_Ural_Civ_01",
            "RHS_Ural_Civ_02",
            "RHS_Ural_Civ_03",
            "RHS_Ural_Open_Civ_01",
            "RHS_Ural_Open_Civ_02",
            "RHS_Ural_Open_Civ_03",
            "RHS_Civ_Truck_02_covered_F",
            "RHS_Civ_Truck_02_transport_F"
        };
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhs_main", "rhs_c_troops"};
        name = "A2 ported cars";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_UAZ_Driver = "RHS_UAZ_Driver";
        RHS_UAZ_Cargo01 = "RHS_UAZ_Cargo01";
        RHS_UAZ_Cargo02 = "RHS_UAZ_Cargo02";
        RHS_UAZ_Gunner01 = "RHS_UAZ_Gunner01";
        RHS_UAZ_Gunner02 = "RHS_UAZ_Gunner02";
        RHS_UAZ_Gunner03 = "RHS_UAZ_Gunner03";
        RHS_Ural_Driver = "RHS_Ural_Driver";
        RHS_Ural_Turnout01 = "RHS_Ural_Turnout01";
        rhs_passenger_apc_generic01 = "rhs_passenger_apc_generic01_settlein";
        rhs_passenger_apc_generic02 = "rhs_passenger_apc_generic02_settlein";
        rhs_passenger_apc_generic02b = "rhs_passenger_apc_generic02b_settlein";
        rhs_passenger_apc_generic03 = "rhs_passenger_apc_generic03_settlein";
        rhs_passenger_apc_generic03_low = "rhs_passenger_apc_generic03_low_settlein";
        rhs_passenger_apc_generic04 = "rhs_passenger_apc_generic04_settlein";
        rhs_passenger_apc_narrow_generic01 = "rhs_passenger_apc_narrow_generic01_settlein";
        rhs_passenger_apc_narrow_generic01_low = "rhs_passenger_apc_narrow_generic01_low_settlein";
        rhs_passenger_apc_narrow_generic02 = "rhs_passenger_apc_narrow_generic02_settlein";
        rhs_passenger_apc_narrow_generic02_low = "rhs_passenger_apc_narrow_generic02_low_settlein";
        rhs_passenger_apc_narrow_generic03 = "rhs_passenger_apc_narrow_generic03_settlein";
        rhs_passenger_apc_narrow_generic03still = "rhs_passenger_apc_narrow_generic03still_settlein";
        rhs_passenger_apc_generic01_ns = "rhs_passenger_apc_generic01";
        rhs_passenger_apc_generic02_ns = "rhs_passenger_apc_generic02";
        rhs_passenger_apc_generic02b_ns = "rhs_passenger_apc_generic02b";
        rhs_passenger_apc_generic03_ns = "rhs_passenger_apc_generic03";
        rhs_passenger_apc_generic04_ns = "rhs_passenger_apc_generic04";
        rhs_passenger_apc_narrow_generic01_ns = "rhs_passenger_apc_narrow_generic01";
        rhs_passenger_apc_narrow_generic02_ns = "rhs_passenger_apc_narrow_generic02";
        rhs_passenger_apc_narrow_generic03_ns = "rhs_passenger_apc_narrow_generic03";
        rhs_passenger_apc_narrow_generic03still_ns = "rhs_passenger_apc_narrow_generic03still";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_UAZ_Driver: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_driver.rtm";
            interpolateTo[] = {"RHS_KIA_UAZ_Driver", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
        class RHS_KIA_UAZ_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\KIA_UAZ_driver.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Ural_Driver: RHS_UAZ_Driver {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\Ural_driver.rtm";
            interpolateTo[] = {"KIA_RHS_Ural_Driver", 1};
        };
        class KIA_RHS_Ural_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\KIA_UAZ_driver.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class KIA_RHS_UAZ_Cargo01: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\KIA_UAZ_Cargo01.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
            soundEnabled = 0;
        };
        class RHS_UAZ_Cargo01: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V0.rtm";
            interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
            connectTo[] = {
                "RHS_UAZ_Cargo01",
                0.1,
                "RHS_UAZ_Cargo01_V1",
                0.1,
                "RHS_UAZ_Cargo01_V2",
                0.1,
                "RHS_UAZ_Cargo01_V3",
                0.1
            };
            equivalentTo = "RHS_UAZ_Cargo01";
            variantsAI[] = {
                "RHS_UAZ_Cargo01",
                0.6,
                "RHS_UAZ_Cargo01_V1",
                0.1,
                "RHS_UAZ_Cargo01_V2",
                0.15,
                "RHS_UAZ_Cargo01_V3",
                0.07
            };
            variantAfter[] = {5, 10, 20};
            speed = 0.3;
        };
        class RHS_UAZ_Cargo01_V1: RHS_UAZ_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V1.rtm";
            interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
            connectTo[] = {"RHS_UAZ_Cargo01", 0.1};
            variantAfter[] = {4, 4, 4};
            speed = 0.246;
        };
        class RHS_UAZ_Cargo01_V2: RHS_UAZ_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V2.rtm";
            interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
            connectTo[] = {"RHS_UAZ_Cargo01", 0.1};
            variantAfter[] = {2.5, 2.5, 2.5};
            speed = 0.39;
        };
        class RHS_UAZ_Cargo01_V3: RHS_UAZ_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V3.rtm";
            interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
            connectTo[] = {"RHS_UAZ_Cargo01", 0.1};
            variantAfter[] = {5, 5, 5};
            speed = 0.197;
        };
        class KIA_RHS_UAZ_Cargo02: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V0.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
            soundEnabled = 0;
        };
        class RHS_UAZ_Cargo02: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V0.rtm";
            interpolateTo[] = {"KIA_RHS_UAZ_Cargo02", 0.1};
        };
        class RHS_UAZ_Gunner01: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Gunner01.rtm";
            connectTo[] = {"Static_Dead", 1};
        };
        class RHS_UAZ_Gunner02: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Gunner02.rtm";
            connectTo[] = {"Static_Dead", 1};
        };
        class RHS_UAZ_Gunner03: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_spg9_gunner.rtm";
            connectTo[] = {"Static_Dead", 1};
        };
        class passenger_inside_2_Aim;
        class RHS_Ural_Turnout01: passenger_inside_2_Aim {
            actions = "passenger_inside_2Actions";
            file = "\A3\cargoposes_F_heli\anim\vehicle_passenger_stand_1aim_passenger_flatground_4aim.rtm";
            speed = -1.1;
            looped = 0;
            minplaytime = 0.95;
            InterpolateTo[] = {"passenger_inside_2_aim", 0.1};
            ConnectTo[] = {};
            variantsAI[] = {};
            variantsPlayer[] = {};
        };
        class RHS_Ural_Turnout01a: RHS_UAZ_Driver {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_turnout1.rtm";
            interpolateTo[] = {"KIA_RHS_Ural_Driver", 1};
        };
        class KIA_rhs_passenger_apc_generic01: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic01_KIA.rtm";
            speed = 1;
            looped = "false";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_generic01_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic01_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic01", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic01", 1};
            variantsAI[] = {"rhs_passenger_apc_generic01", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic01", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic01: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic01.rtm";
            speed = 0.037453;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic01", 1};
        };
        class KIA_rhs_passenger_apc_generic02: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02_KIA.rtm";
            speed = 1;
            looped = "false";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_generic02_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic02", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
            variantsAI[] = {"rhs_passenger_apc_generic02", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic02", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic02: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02.rtm";
            speed = 0.037453;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
        };
        class rhs_passenger_apc_generic02b_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic02b", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
            variantsAI[] = {"rhs_passenger_apc_generic02b", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic02b", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic02b: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic02.rtm";
            speed = 0.049917;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
        };
        class KIA_rhs_passenger_apc_generic03: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03_KIA.rtm";
            speed = 1;
            looped = "false";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_generic03_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic03", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_generic03", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic03", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic03: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03.rtm";
            speed = 0.037453;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
        };
        class rhs_passenger_apc_generic03_low_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03_low_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic03_low", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_generic03_low", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic03_low", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic03_low: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic03_low.rtm";
            speed = 0.037453;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
        };
        class KIA_rhs_passenger_apc_generic04: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic04_KIA.rtm";
            speed = 1;
            looped = "false";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_generic04_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic04_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic04", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic04", 1};
            variantsAI[] = {"rhs_passenger_apc_generic04", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic04", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic04: Crew {
            variantsAI[] = {
                "rhs_passenger_apc_generic04",
                0.2,
                "rhs_passenger_apc_generic04still",
                0.8
            };
            variantsPlayer[] = {
                "rhs_passenger_apc_generic04",
                0.1,
                "rhs_passenger_apc_generic04still",
                0.9
            };
            variantAfter[] = {33, 33, 33};
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic04.rtm";
            speed = -33;
            interpolateTo[] = {
                "rhs_passenger_apc_generic04still",
                1,
                "KIA_rhs_passenger_apc_generic04",
                1
            };
        };
        class rhs_passenger_apc_generic04still: rhs_passenger_apc_generic04 {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_generic04still.rtm";
            speed = -33;
            interpolateTo[] = {
                "rhs_passenger_apc_generic04",
                1,
                "KIA_rhs_passenger_apc_generic04",
                1
            };
        };
        class KIA_rhs_passenger_apc_narrow_generic01: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_KIA.rtm";
            speed = 1;
            looped = "false";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_narrow_generic01_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic01", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic01", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic01", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic01: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01.rtm";
            speed = 0.049917;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
        };
        class rhs_passenger_apc_narrow_generic01_low_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_low_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic01_low", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic01_low", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic01_low", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic01_low: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_low.rtm";
            speed = 0.049917;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
        };
        class KIA_rhs_passenger_apc_narrow_generic02: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_KIA.rtm";
            speed = 1;
            looped = "false";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_narrow_generic02_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic02", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic02", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic02", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic02: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02.rtm";
            speed = 0.027076;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
        };
        class rhs_passenger_apc_narrow_generic02_low_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_low_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic02_low", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic02_low", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic02_low", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic02_low: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_low.rtm";
            speed = 0.027076;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
        };
        class KIA_rhs_passenger_apc_narrow_generic03: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_KIA.rtm";
            speed = 1;
            looped = "false";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_narrow_generic03_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic03", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic03", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic03", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic03: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03.rtm";
            speed = 0.062893;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
        };
        class rhs_passenger_apc_narrow_generic03_low_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_low_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic03_low", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic03_low", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic03_low", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic03_low: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_low.rtm";
            speed = 0.062893;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
        };
        class rhs_passenger_apc_narrow_generic03still_settlein: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03still_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic03still", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic03still", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic03still", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic03still: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03still.rtm";
            speed = 0.062893;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class a2port_car_init {
                file = "\rhsafrf\addons\rhs_c_a2port_car\scripts\rhs_decal_init.sqf";
                description = "Decal init";
            };
            class gearSound {
                file = "\rhsafrf\addons\rhs_c_a2port_car\UAZ\gearSound.sqf";
                description = "Changing gears checker";
            };
            class gearChange {
                file = "\rhsafrf\addons\rhs_c_a2port_car\UAZ\gearChange.sqf";
                description = "Changing gears sound";
            };
            class fuelLeak {
                file = "\rhsafrf\addons\rhs_c_a2port_car\scripts\fuelLeak.sqf";
                description = "Fuel leak after hit";
            };
            class wipers {
                file = "\rhsafrf\addons\rhs_c_a2port_car\scripts\wipers.sqf";
                description = "Generic wipers function";
            };
        };
    };
};
class CfgSounds {
    class RHS_Gear {
        name = "Changing gear sound";
        sound[] = {
            "\rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change.wss",
            1584.8933,
            1,
            2.4
        };
        titles[] = {};
    };
    class rhs_rain {
        name = "Rain droplets sound inside car";
        sound[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\rain.wss",
            5011.873,
            1,
            2.8
        };
        titles[] = {0, ""};
    };
};
class CfgAnimationSourceSounds {
    class RHS_UAZ_Door {
        class DoorMovement {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "A3\Sounds_F\environment\structures\doors\GenericDoors\squeak1",
                1.9952624,
                1,
                60
            };
            sound1[] = {
                "A3\Sounds_F\environment\structures\doors\GenericDoors\squeak2",
                1.9952624,
                1,
                60
            };
            sound2[] = {
                "A3\Sounds_F\environment\structures\doors\GenericDoors\squeak3",
                1.9952624,
                1,
                60
            };
            sound3[] = {
                "A3\Sounds_F\environment\structures\doors\GenericDoors\squeak4",
                1.9952624,
                1,
                60
            };
            sound[] = {
                "sound0",
                0.25,
                "sound1",
                0.25,
                "sound2",
                0.25,
                "sound3",
                0.25
            };
        };
        class OpenTheDoor {
            loop = 0;
            terminate = 0;
            trigger = "direction * (phase factor[0.01,0.02])";
            sound0[] = {
                "\rhsafrf\addons\rhs_vehiclesounds\sounds\shared\rhs_uaz_door_open",
                3.9810717,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
        class SlamTheDoor {
            loop = 0;
            terminate = 0;
            trigger = "(1 - direction) * (phase factor[0.1,0.09])";
            sound0[] = {
                "\rhsafrf\addons\rhs_vehiclesounds\sounds\shared\rhs_uaz_door_close",
                3.9810717,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
    };
    class RHS_Ural_Door {
        class DoorMovement {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "A3\Sounds_F\environment\structures\doors\GenericDoors\squeak1",
                1.9952624,
                1,
                60
            };
            sound1[] = {
                "A3\Sounds_F\environment\structures\doors\GenericDoors\squeak2",
                1.9952624,
                1,
                60
            };
            sound2[] = {
                "A3\Sounds_F\environment\structures\doors\GenericDoors\squeak3",
                1.9952624,
                1,
                60
            };
            sound3[] = {
                "A3\Sounds_F\environment\structures\doors\GenericDoors\squeak4",
                1.9952624,
                1,
                60
            };
            sound[] = {
                "sound0",
                0.25,
                "sound1",
                0.25,
                "sound2",
                0.25,
                "sound3",
                0.25
            };
        };
        class OpenTheDoor {
            loop = 0;
            terminate = 0;
            trigger = "direction * (phase factor[0.01,0.02])";
            sound0[] = {
                "\rhsafrf\addons\rhs_vehiclesounds\sounds\shared\rhs_ural_door_open",
                3.9810717,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
        class SlamTheDoor {
            loop = 0;
            terminate = 0;
            trigger = "(1 - direction) * (phase factor[0.1,0.09])";
            sound0[] = {
                "\rhsafrf\addons\rhs_vehiclesounds\sounds\shared\rhs_ural_door_close",
                3.9810717,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
    };
    class RHS_Gearbox {
        class GearMovement {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "\rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change",
                5.0118723,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
    };
    class RHS_Wipers {
        class DoorMovement {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "\rhsafrf\addons\rhs_gaz66\data\sounds\wipers.wss",
                2.5118864,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
    };
};
class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class HitPoints;
        class NewTurret;
    };
    class Car_F: Car {
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
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class EventHandlers;
        class AnimationSources;
    };
    class Offroad_01_base_F: Car_F {};
    class Truck_F: Car_F {
        class ViewPilot;
        class HitPoints: HitPoints {
            class HitLFWheel;
            class HitLBWheel;
            class HitLMWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRBWheel;
            class HitRMWheel;
            class HitRF2Wheel;
        };
        class AnimationSources;
    };
    class RHS_UAZ_Base: Offroad_01_base_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']", "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"};
        category = "Car";
        insideSoundCoef = 0.2;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        model = "\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ.p3d";
        icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_uaz_ca.paa";
        picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_uaz_pic_ca.paa";
        mapsize = 4;
        displayName = "$STR_RHS_UAZ469_NAME";
        tf_hasLRradio_api = 0;
        hiddenSelections[] = {
            "camo1",
            "camo2g",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"};
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"};
                factions[] = {
                    "rhs_faction_msv",
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
            };
            class Camo1: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa"};
            };
            class Camo2: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_002_co.paa"};
            };
            class Camo3: standard {
                displayName = "Civil";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_civil_co.paa"};
            };
            class Camo4: standard {
                displayName = "UN";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_un_co.paa"};
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cDecals4CarsNumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                displayName = "Set plate number";
                tooltip = "Set plate number. 4 numbers are required. If 0, random number will be generated";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if(_value >= 0)then{[_this,[['Number', cDecals4CarsNumberPlaces, _this getVariable ['rhs_decalNumber_type','LicensePlate'], _value]]] call rhs_fnc_decalsInit};";
            };
            class rhs_decalArmy_type {
                displayName = "Define large door roundel type";
                tooltip = "Decal type";
                property = "rhs_decalArmy_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
                typeName = "STRING";
                class values {
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
                };
            };
            class rhs_decalArmy {
                displayName = "Set large door roundel symbol";
                tooltip = "Set large door roundel located on both sides. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalArmy";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightArmyPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalPlatoon_type: rhs_decalArmy_type {
                displayName = "Define small door roundel type";
                property = "rhs_decalPlatoon_type";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
            };
            class rhs_decalPlatoon: rhs_decalArmy {
                displayName = "Set small door roundel symbol";
                tooltip = "Define small door roundel located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightPlatoonPlaces,  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_hideLightCover {
                displayName = "Hide light covers";
                property = "rhs_hideLightCover";
                control = "CheckboxNumber";
                expression = "_this animate ['light_hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_hidespare: rhs_hideLightCover {
                displayName = "Remove spare wheel";
                property = "rhs_hidespare";
                expression = "_this animate ['spare_hide',_value,true]";
            };
            class Door_LF: rhs_hidespare {
                displayName = "Open front left door";
                property = "Door_LF";
                expression = "_this animateDoor ['%s',_value,true]";
            };
            class Door_RF: Door_LF {
                displayName = "Open front right door";
                property = "Door_RF";
            };
            class Door_LB: Door_LF {
                displayName = "Open left back door";
                property = "Door_LB";
            };
            class Door_RB: Door_LF {
                displayName = "Open right back door";
                property = "Door_RB";
            };
        };
        driverAction = "RHS_UAZ_driver";
        driverInAction = "RHS_UAZ_driver";
        hideProxyInCombat = 0;
        attenuationEffectType = "RHS_CarAttenuation";
        cost = 50000;
        transportMaxBackpacks = 6;
        transportSoldier = 6;
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "shift";
        driverRightLegAnimName = "pedalR";
        driverLeftLegAnimName = "pedalL";
        soundAttenuationCargo[] = {1};
        vehicleClass = "rhs_vehclass_car";
        editorSubcategory = "rhs_EdSubcat_car";
        soundGear[] = {"rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change", 2, 1};
        soundGetIn[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\ext-uaz-getin",
            1.5848932,
            1,
            9
        };
        soundGetOut[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\ext-uaz-getout",
            1.5848932,
            1,
            25
        };
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_start1", 1.5848932, 1};
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_start1",
            1.4125376,
            1,
            200
        };
        soundEngineOffInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_stop1", 1.5848932, 1};
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_stop1",
            1.4125376,
            1,
            200
        };
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle",
                    1.5848932,
                    1,
                    150
                };
                frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
            };
            class Engine {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_acceleration",
                    1.4125376,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1",
                    1.4125376,
                    1,
                    240
                };
                frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1",
                    1.2589254,
                    1,
                    280
                };
                frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1",
                    1.2589254,
                    1,
                    320
                };
                frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1",
                    1.1220185,
                    1,
                    360
                };
                frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1",
                    1.1220185,
                    1,
                    420
                };
                frequency = "0.95	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.15";
                volume = "engineOn*camPos*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
            };
            class IdleThrust {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle_exhaust",
                    1.2589254,
                    1,
                    200
                };
                frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
            };
            class EngineThrust {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust",
                    1.1220185,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust",
                    1.1220185,
                    1,
                    280
                };
                frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",
                    1.1220185,
                    1,
                    320
                };
                frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",
                    1.1220185,
                    1,
                    360
                };
                frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",
                    1,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.3";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",
                    1.2589254,
                    1,
                    450
                };
                frequency = "0.9	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
            };
            class Idle_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle", 1.2589254, 1};
                frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
            };
            class Engine_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_acceleration", 1.4125376, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
            };
            class Engine1_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1", 1.4125376, 1};
                frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
            };
            class Engine2_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
            };
            class Engine3_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
            };
            class Engine4_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
            };
            class Engine5_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", 1.2589254, 1};
                frequency = "0.95	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.15";
                volume = "engineOn*(1-camPos)*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
            };
            class IdleThrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust", 1.2589254, 1};
                frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
            };
            class EngineThrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", 1.4125376, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", 1.2589254, 1};
                frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 1.1220185, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 1.1220185, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.3";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 1.1220185, 1};
                frequency = "0.9	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
            };
            class RainIn {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*(1-camPos)";
            };
            class RainExt {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*camPos";
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
                    1.4125376,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*grass*(speed factor[2, 20])";
            };
            class TiresMudOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
                    1.4125376,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*mud*(speed factor[2, 20])";
            };
            class TiresGravelOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
                    1.4125376,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
                    1.4125376,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*asphalt*(speed factor[2, 20])";
            };
            class NoiseOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
                    1.5848932,
                    1,
                    90
                };
                frequency = "1";
                volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
            };
            class TiresRockIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 1, 1};
                frequency = "1";
                volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
            };
            class breaking_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
                    1.4125376,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class acceleration_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1.4125376,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
            };
            class turn_left_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1.4125376,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
            };
            class turn_right_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1.4125376,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class breaking_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
                    1.1220185,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
            };
            class acceleration_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
                    1.1220185,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
            };
            class turn_left_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    1.1220185,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
            };
            class turn_right_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    1,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
            };
            class breaking_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class acceleration_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
            };
            class turn_left_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
            };
            class turn_right_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class breaking_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class acceleration_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
            };
            class turn_left_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
            };
            class turn_right_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
        };
        class Turrets: Turrets {};
        memoryPointsGetInCargo[] = {
            "pos codriver",
            "pos cargo 2",
            "pos cargo 2",
            "pos cargo 1"
        };
        memoryPointsGetInCargoDir[] = {
            "pos codriver dir",
            "pos cargo dir 2",
            "pos cargo dir 2",
            "pos cargo dir 1"
        };
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", "Door_LB", "Door_LB", "Door_RB"};
        driverCompartments = "Compartment1";
        cargoCompartments[] = {
            "Compartment1",
            "Compartment2",
            "Compartment2",
            "Compartment2",
            "Compartment2",
            "Compartment2"
        };
        class AnimationSources {
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
            class searchlight_hide: longlights_hide {};
            class cabinlights_hide: longlights_hide {};
            class searchlight_rot {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
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
            class HitLF2Wheel: HitLFWheel {
                hitpoint = "HitLBWheel";
            };
            class HitRF2Wheel: HitLFWheel {
                hitpoint = "HitRBWheel";
            };
            class HitLMWheel: HitLFWheel {
                hitpoint = "HitLMWheel";
            };
            class HitRMWheel: HitLFWheel {
                hitpoint = "HitRMWheel";
            };
            class HitSpare: HitLFWheel {
                hitpoint = "HitSpare";
            };
            class UseSpare: HitLFWheel {
                hitpoint = "UseSpare";
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
            class HitDoor_1_1: HitGlass1 {
                hitpoint = "HitDoor_1_1";
            };
            class HitDoor_1_2: HitGlass1 {
                hitpoint = "HitDoor_1_2";
            };
            class HitDoor_2_1: HitGlass1 {
                hitpoint = "HitDoor_2_1";
            };
            class HitDoor_2_2: HitGlass1 {
                hitpoint = "HitDoor_2_2";
            };
            class HitHood: HitGlass1 {
                hitpoint = "HitHood";
            };
            class Door_LF {
                source = "door";
                animPeriod = 0.8;
                sound = "RHS_UAZ_Door";
                soundPosition = "osa_dvere_lp";
            };
            class Door_RF: Door_LF {
                soundPosition = "osa_dvere_pp";
            };
            class Door_LB: Door_LF {
                soundPosition = "osa_dvere_lz";
            };
            class Door_RB: Door_LF {
                soundPosition = "osa_dvere_pz";
            };
            class gearbox: Door_LF {
                sound = "RHS_gearbox";
                soundPosition = "gear_axis";
            };
            class wiper {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class spare_hide: wiper {
                mass = 1;
                animPeriod = 0.00000000001;
                displayName = "hide spare wheel";
            };
            class light_hide: spare_hide {
                displayName = "hide light covers";
                onPhaseChanged = "(_this select 0) animateSource ['light_hide',(_this select 1),true];";
            };
            class wipers: Door_LF {
                animPeriod = 1;
                sound = "RHS_Wipers";
                soundPosition = "wiper_1_axis";
            };
        };
        armor = 52;
        minTotalDamageThreshold = 0.21;
        wheelDamageRadiusCoef = 0.9;
        wheelDestroyRadiusCoef = 0.4;
        crewCrashProtection = 0.25;
        fuelExplosionPower = 0.1;
        class HitPoints: HitPoints {
            class HitLFWheel: HitLFWheel {
                radius = 0.15;
                armor = 0.175;
                passThrough = 0.3;
            };
            class HitLF2Wheel: HitLF2Wheel {
                radius = 0.15;
                armor = 0.175;
                passThrough = 0.3;
            };
            class HitRFWheel: HitRFWheel {
                radius = 0.15;
                armor = 0.175;
                passThrough = 0.3;
            };
            class HitRF2Wheel: HitRF2Wheel {
                radius = 0.15;
                armor = 0.175;
                passThrough = 0.3;
            };
            class HitSpare: HitRF2Wheel {
                name = "spare1";
                visual = "-";
            };
            class UseSpare: HitSpare {
                name = "";
                visual = "-";
                armor = 1;
            };
            class HitLightL {
                armor = 0.02;
                minimalHit = 0.1;
                material = -1;
                name = "L svetlo";
                visual = "-";
                passThrough = 0;
                radius = 0.1;
            };
            class HitLightR: HitLightL {
                name = "P svetlo";
            };
            class HitSearchlight: HitLightL {
                name = "searchlight";
            };
            class HitHull {
                armor = 0.5;
                material = -1;
                name = "hull";
                visual = "-";
                passThrough = 0.2;
                radius = 0.1;
            };
            class HitFuel {
                armor = 0.5;
                material = -1;
                name = "Hit_Fuel";
                visual = "-";
                passThrough = 0.2;
                radius = 0.1;
            };
            class HitEngine {
                armor = 0.5;
                material = -1;
                name = "Hit_Engine";
                armorComponent = "Hit_Engine";
                visual = "zbytek";
                passThrough = 0.2;
                radius = 0.16;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Engine_Smoke {
                        simulation = "particles";
                        type = "SmallWreckSmoke";
                        position = "engine_smoke";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                    };
                    class RHS_Engine_Smoke_small1: RHS_Engine_Smoke {
                        type = "WeaponWreckSmoke";
                        position = "engine_smoke2";
                    };
                    class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1 {
                        position = "engine_smoke3";
                    };
                    class RHS_Engine_Sounds: RHS_Engine_Smoke {
                        simulation = "sound";
                        type = "SmokeWreck1";
                    };
                };
            };
            class HitBody: HitBody {
                name = "karoserie";
                visual = "camo1";
                passThrough = 1;
                radius = 0.1;
            };
            class HitGlass1: HitGlass1 {
                armor = 0.1;
                radius = 0.2;
            };
            class HitGlass2: HitGlass2 {
                armor = 0.05;
                radius = 0.2;
            };
            class HitGlass3: HitGlass3 {
                armor = 0.05;
                radius = 0.2;
            };
            class HitGlass4: HitGlass4 {
                visual = "glass4";
                armor = 0.05;
                radius = 0.2;
            };
            class HitGlass5: HitGlass5 {
                armor = 0.05;
                radius = 0.2;
            };
            class HitGlass6: HitGlass6 {
                armor = 0.05;
                radius = 0.2;
            };
            class HitDoor_1_1 {
                armor = 0.2;
                minimalHit = 0.075;
                material = -1;
                name = "door11";
                visual = "-";
                passThrough = 0.1;
                radius = 0.17;
                explosionShielding = 0.5;
            };
            class HitDoor_1_2: HitDoor_1_1 {
                name = "door12";
            };
            class HitDoor_2_1: HitDoor_1_1 {
                name = "door21";
            };
            class HitDoor_2_2: HitDoor_1_1 {
                name = "door22";
            };
            class Hithood: HitDoor_1_1 {
                armor = 0.3;
                name = "hood1";
            };
        };
        cargoaction[] = {
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo02"
        };
        getInAction = "GetInOffroad";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        memoryPointTrackFLL = "TrackFLL";
        memoryPointTrackFLR = "TrackFLR";
        memoryPointTrackBLL = "TrackBLL";
        memoryPointTrackBLR = "TrackBLR";
        memoryPointTrackFRL = "TrackFRL";
        memoryPointTrackFRR = "TrackFRR";
        memoryPointTrackBRL = "TrackBRL";
        memoryPointTrackBRR = "TrackBRR";
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_skla.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_skla_in.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_main_metal_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_other_metal_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\data\drziaky.rvmat",
                "rhsafrf\addons\rhs_a2port_car\data\drziaky.rvmat",
                "rhsafrf\addons\rhs_a2port_car\data\drziaky_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_mount.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_mount_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_mount_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\rhs_uaz_wheels.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\rhs_uaz_wheels_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\UAZ\Data\rhs_uaz_wheels_damage.rvmat"
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustEffectOffroad";
            };
        };
        class Reflectors {
            class LSvetla {
                color[] = {800, 900, 650};
                ambient[] = {2, 2, 2};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                hitPointClass = "HitLightL";
                selection = "L svetlo";
                size = 1;
                innerAngle = 30;
                outerAngle = 100;
                coneFadeCoef = 10;
                intensity = 1.5;
                useFlare = 1;
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
            class RSvetla: LSvetla {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                hitPointClass = "HitLightR";
                selection = "P svetlo";
                innerAngle = 40;
                outerAngle = 120;
                intensity = 2.5;
            };
            class Right2: RSvetla {
                position = "Light_R_Flare";
                direction = "Light_R_Flare_end";
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
            class Left2: LSvetla {
                position = "Light_L_Flare";
                direction = "Light_L_Flare_end";
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
            class Searchlight: LSvetla {
                position = "Searchlight_pos";
                direction = "Searchlight_dir";
                hitpoint = "Searchlight";
                hitPointClass = "HitSearchlight";
                selection = "Searchlight";
                useFlare = 1;
                innerAngle = 35;
                outerAngle = 179;
            };
            class Long_Left {
                color[] = {800, 900, 650};
                ambient[] = {5, 5, 5};
                position = "Light_L_Long";
                direction = "Light_L_Long_end";
                hitpoint = "L svetlo";
                hitPointClass = "HitLightL";
                selection = "L svetlo";
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
                hitpoint = "P svetlo";
                hitPointClass = "HitLightR";
                selection = "P svetlo";
            };
            class Long_Right2: Long_Right {
                useFlare = 1;
                position = "light_R_Long_flare";
                innerAngle = 50;
                outerAngle = 139;
                coneFadeCoef = 51;
                flareSize = 1;
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
                outerAngle = 139;
                coneFadeCoef = 51;
                flareSize = 1;
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
        aggregateReflectors[] = {
            {"LSvetla"},
            {"Left2"},
            {"RSvetla"},
            {"Right2"},
            {"Long_Left2", "Long_Right2"}
        };
        armorLights = 0.05;
        class RenderTargets {
            class LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "m1p";
                    pointDirection = "m1d";
                    renderQuality = 1;
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
                    renderQuality = 1;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
            class BackMirror {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "m3p";
                    pointDirection = "m3d";
                    renderQuality = 0;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
        };
        class UserActions {
            class wiperson {
                displayName = "$STR_RHS_WIPERSON";
                position = "";
                radius = 2;
                priority = 1.5;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "(player == driver this) AND isengineon (this) AND this animationPhase 'wipers' < 0.5";
                statement = "[this,0] spawn rhs_fnc_wipers";
            };
            class wipersoff: wiperson {
                displayName = "$STR_RHS_WIPERSOFF";
                condition = "(player == driver this) AND this animationPhase 'wipers' > 0.5";
                statement = "[this,1] spawn rhs_fnc_wipers";
            };
            class lights_toggle {
                displayName = "Toggle short/long lights";
                position = "";
                shortcut = "vehLockTargets";
                radius = 12;
                priority = 1.5;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this)";
                statement = "[this,2] call rhs_fnc_carLightToggle";
            };
            class searchlight_toggle: lights_toggle {
                shortcut = "lockTarget";
                displayName = "Toggle searchlight";
                statement = "[this,3] call rhs_fnc_carLightToggle";
            };
            class searchlight_adjust: lights_toggle {
                shortcut = "";
                displayName = "Adjust searchlight";
                condition = "((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this) AND (this animationPhase 'searchlight_hide' == 0)";
                statement = "[this] spawn rhs_fnc_adjustSearchlight";
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 800;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {0, -1.85, -0.55};
            };
        };
        normalSpeedForwardCoef = 0.8;
        slowSpeedForwardCoef = 0.45;
        turnCoef = 2.5;
        terrainCoef = 0.4;
        waterSpeedFactor = 0.4;
        simulation = "carx";
        dampersBumpCoef = 4;
        precision = 10;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 120;
        fuelCapacity = 30;
        RHS_fuelCapacity = 78;
        wheelCircumference = 2.45;
        brakeIdleSpeed = 0.5;
        maxFordingDepth = 0;
        waterResistance = 1;
        waterResistanceCoef = 0.2;
        waterLeakiness = 10;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -5.224,
                "N",
                0,
                "D1",
                3.78,
                "D2",
                2.6,
                "D3",
                1.55,
                "D4",
                1
            };
            TransmissionRatios[] = {"High", 5.125};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0.15, 0.85, 0.95, 0.95, 0.95};
        switchTime = 0.51;
        latency = 1;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.5;
        rearBias = 1.5;
        centreBias = 1.3;
        clutchStrength = 15;
        transmissionLosses = 20;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.15, 0.289017},
            {0.3, 0.895954},
            {0.48, 1},
            {0.52, 1},
            {0.7, 0.953757},
            {0.8, 0.895954},
            {0.9, 0.809249},
            {1, 0.693642}
        };
        enginePower = 67;
        engineMOI = 1.1;
        peakTorque = 173;
        maxOmega = 523.6;
        minOmega = 20;
        idleRPM = 750;
        redRPM = 5000;
        engineLosses = 14;
        thrustDelay = 0.2;
        engineBrakeCoef = 0.9;
        accelAidForceYOffset = -0.85;
        accelAidForceCoef = 5;
        accelAidForceSpd = 4.23;
        antiRollbarForceCoef = 0.5;
        antiRollbarForceLimit = 0.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 80;
        class Wheels {
            class LF {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {-0.125, -1, 0};
                steering = 1;
                width = 0.16;
                mass = 20;
                MOI = 24;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 2000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.2;
                maxDroop = 0.1;
                sprungMass = -1;
                springStrength = 14000;
                springDamperRate = 2400;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1.2}, {0.5, 1.13}, {1, 1}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                maxHandBrakeTorque = 3000;
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
                steering = 0;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                maxHandBrakeTorque = 3000;
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_a2port_car_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                engine = "if(_this select 1)then{_this call RHS_fnc_gearSound};_this call rhs_fnc_engineCheckDamage;";
                dammaged = "_this call rhs_fnc_wheelDamaged";
            };
        };
    };
    class rhs_uaz_open_Base: RHS_UAZ_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_uaz_open_Base.paa";
        model = "\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ_open.p3d";
        picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_uaz_open_pic_ca.paa";
        displayName = "$STR_RHS_UAZ469OPEN_NAME";
        attenuationEffectType = "OpenCarAttenuation";
        insideSoundCoef = 0.1;
        transportSoldier = 1;
        memoryPointsGetInCargo[] = {"pos cargo 1"};
        memoryPointsGetInCargoDir[] = {"pos cargo dir 1"};
        cargoDoors[] = {"Door_RB"};
        showNVGGunner = 1;
        showNVGDriver = 1;
        showNVGCargo[] = {1};
        cargoProxyIndexes[] = {5};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6};
        class CargoTurret;
        class Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                gunnerName = "Passenger (Back Left Seat)";
                gunnerCompartments = "Compartment2";
                LODTurnedIn = 1200;
                LODTurnedOut = 1200;
                proxyIndex = 3;
                maxElev = 45;
                minElev = -35;
                maxTurn = 10;
                minTurn = -105;
                isPersonTurret = 1;
                gunnerUsesPilotView = 0;
                class dynamicViewLimits {
                    CargoTurret_02[] = {-105, -40};
                };
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Back Right Seat)";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                proxyIndex = 6;
                maxTurn = 105;
                minTurn = -10;
                class dynamicViewLimits {
                    CargoTurret_01[] = {40, 105};
                };
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerName = "Passenger (Front Right Seat)";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                proxyIndex = 1;
                gunnerDoor = "Door_RF";
                maxTurn = -41;
                minTurn = -95;
                class dynamicViewLimits {};
            };
            class CargoTurret_04: CargoTurret_01 {
                memoryPointsGetInGunner = "pos cargo 2";
                memoryPointsGetInGunnerDir = "pos cargo dir 2";
                gunnerName = "Passenger (Left Seat)";
                proxyIndex = 2;
                gunnerDoor = "Door_LB";
                maxTurn = 95;
                minTurn = 18;
                class dynamicViewLimits {};
            };
            class CargoTurret_05: CargoTurret_01 {
                gunnerName = "Passenger (Right Seat)";
                memoryPointsGetInGunner = "pos cargo 1";
                memoryPointsGetInGunnerDir = "pos cargo dir 1";
                proxyIndex = 4;
                gunnerDoor = "Door_RB";
                maxTurn = -11;
                minTurn = -95;
                class dynamicViewLimits {};
            };
        };
    };
    class RHS_UAZ_DShKM_Base: RHS_UAZ_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_UAZ_DShKM_Base.paa";
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_armedcar_s"};
                speechPlural[] = {"veh_vehicle_armedcar_p"};
            };
        };
        textSingular = "alpha victor (MRAP)";
        textPlural = "alpha victors";
        nameSound = "veh_vehicle_armedcar_s";
        displayName = "UAZ-3151 (DShKM)";
        model = "\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ_mg.p3d";
        attenuationEffectType = "OpenCarAttenuation";
        insideSoundCoef = 0.1;
        threat[] = {0.9, 0.3, 0.1};
        Icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_Uaz_mg_CA.paa";
        transportSoldier = 0;
        cargoProxyIndexes[] = {};
        getInProxyOrder[] = {1};
        memoryPointsGetInCargo[] = {};
        memoryPointsGetInCargoDir[] = {};
        cargoDoors[] = {};
        showNVGGunner = 1;
        showNVGDriver = 1;
        showNVGCargo[] = {1};
        unitInfoType = "RscUnitInfo";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa", "rhsafrf\addons\rhs_a2port_car\UAZ\Data\uaz_mount_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa", "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa", "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa"};
            };
            class Camo1: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_001_co.paa", "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
            };
            class Camo2: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_002_co.paa", "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_002_co.paa"};
            };
            class Camo4: standard {
                displayName = "UN";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_un_co.paa", "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_co.paa"};
            };
        };
        textureList[] = {};
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                body = "mainTurret";
                gun = "mainGun";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                gunnerLeftHandAnimName = "otochlaven_shake";
                gunnerRightHandAnimName = "otochlaven_shake";
                gunnerLeftLegAnimName = "leg_left";
                gunnerRightLegAnimName = "leg_right";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                usePip = 2;
                outGunnerMayFire = 1;
                forceHideGunner = 0;
                castGunnerShadow = 1;
                viewGunnerInExternal = 1;
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                gunnerForceOptics = 0;
                turretInfoType = "RHS_RscWeaponZeroing";
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
                weapons[] = {"rhs_weap_DSHKM"};
                magazines[] = {
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50"
                };
                gunnerAction = "RHS_UAZ_Gunner01";
                gunnerInAction = "RHS_UAZ_Gunner01";
                selectionFireAnim = "zasleh";
                ejectDeadGunner = 1;
                soundAttenuationTurret = "HeliAttenuationGunner";
                disableSoundAttenuation = 1;
                minElev = -25;
                maxElev = 60;
                stabilizedInAxes = 0;
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.35;
                    maxFov = 1;
                };
                class OpticsIn {
                    class Sight: ViewOptics {
                        gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        initFov = 0.7;
                        minFov = 0.35;
                        maxFov = 0.7;
                    };
                };
                class Hitpoints {
                    class HitTurret {
                        armor = -40;
                        material = -1;
                        name = "Hit_Turret";
                        armorComponent = "Hit_Turret";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = 0.01;
                        explosionShielding = 0.009;
                        radius = 0.15;
                    };
                    class HitGun {
                        armor = -30;
                        material = -1;
                        name = "Hit_Gun";
                        armorComponent = "Hit_Gun";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.01;
                        explosionShielding = 0.001;
                        radius = 0.12;
                    };
                };
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                gunnerCompartments = "Compartment1";
                gunnerName = "Passenger (Front Right Seat)";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                proxyIndex = 1;
                gunnerDoor = "Door_RF";
                maxTurn = 55;
                minTurn = -95;
                selectionFireAnim = "";
                LODTurnedIn = 1200;
                LODTurnedOut = 1200;
                maxElev = 45;
                minElev = -35;
                isPersonTurret = 1;
                gunnerUsesPilotView = 0;
                class dynamicViewLimits {};
            };
        };
        class AnimationSources: AnimationSources {
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_DSHKM";
            };
            class ReloadMagazine: ReloadAnim {
                source = "reloadmagazine";
            };
            class Revolving: ReloadAnim {
                source = "revolving";
            };
            class muzzle_rot_MG: ReloadAnim {
                source = "ammorandom";
            };
        };
        class RenderTargets {};
        class UserActions {
            class lights_toggle {
                displayName = "Toggle short/long lights";
                position = "";
                shortcut = "vehLockTargets";
                radius = 12;
                priority = 1.5;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "(player == driver this) AND (isLightOn this)";
                statement = "[this,2] call rhs_fnc_carLightToggle";
            };
            class searchlight_toggle: lights_toggle {
                shortcut = "lockTarget";
                displayName = "Toggle searchlight";
                statement = "[this,3] call rhs_fnc_carLightToggle";
            };
            class searchlight_adjust: lights_toggle {
                shortcut = "";
                displayName = "Adjust searchlight";
                condition = "((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this) AND (this animationPhase 'searchlight_hide' == 0)";
                statement = "[this] spawn rhs_fnc_adjustSearchlight";
            };
        };
    };
    class RHS_UAZ_AGS30_Base: RHS_UAZ_DShKM_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_UAZ_AGS30_Base.paa";
        displayName = "UAZ-3151 (AGS-30)";
        model = "\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ_ags.p3d";
        attenuationEffectType = "OpenCarAttenuation";
        insideSoundCoef = 0.1;
        threat[] = {0.9, 0.3, 0.1};
        Icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_Uaz_gl_CA.paa";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerLeftHandAnimName = "otochlaven";
                gunnerRightHandAnimName = "otochlaven";
                gunnerLeftLegAnimName = "leg_left";
                gunnerRightLegAnimName = "leg_right";
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\optika_AGS30";
                weapons[] = {"RHS_weap_AGS30"};
                magazines[] = {
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30"
                };
                gunnerAction = "RHS_UAZ_Gunner02";
                gunnerInAction = "RHS_UAZ_Gunner02";
                class OpticsIn {
                    class Sight: ViewOptics {
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\optika_AGS30";
                        initFov = 0.25;
                        minFov = 0.25;
                        maxFov = 0.25;
                    };
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
        };
        class AnimationSources: AnimationSources {
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_weap_AGS30";
            };
            class muzzle_rot_MG: ReloadMagazine {
                source = "ammorandom";
            };
        };
    };
    class RHS_UAZ_SPG9_Base: RHS_UAZ_DShKM_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_UAZ_SPG9_Base.paa";
        displayName = "UAZ-3151 (SPG-9)";
        model = "\rhsafrf\addons\rhs_a2port_car\UAZ\UAZ_spg9.p3d";
        threat[] = {0.9, 0.6, 0.1};
        Icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_Uaz_spg9_CA.paa";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerLeftHandAnimName = "";
                gunnerRightHandAnimName = "";
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                weapons[] = {"rhs_weap_SPG9"};
                magazines[] = {
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V"
                };
                gunnerAction = "RHS_UAZ_Gunner03";
                gunnerInAction = "RHS_UAZ_Gunner03";
                minElev = -10;
                maxElev = 30;
                initElev = 0;
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
                class OpticsIn {
                    class Sight: ViewOptics {
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgo9_scope";
                        initFov = 0.111;
                        minFov = 0.111;
                        maxFov = 0.111;
                    };
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
        };
        class AnimationSources: AnimationSources {
            class ReloadAnim {
                source = "reloadmagazine";
                weapon = "rhs_weap_SPG9";
            };
        };
    };
    class RHS_UAZ_MSV_Base: RHS_UAZ_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_UAZ_MSV_Base.paa";
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        typicalCargo[] = {"rhs_msv_driver"};
    };
    class rhs_uaz_open_MSV_Base: rhs_uaz_open_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_uaz_open_MSV_Base.paa";
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        typicalCargo[] = {"rhs_msv_driver"};
    };
    class RHS_UAZ_MSV_01: RHS_UAZ_MSV_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_UAZ_MSV_01.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_uaz_vdv: RHS_UAZ_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_uaz_vdv.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_uaz_vmf: RHS_UAZ_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_uaz_vmf.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_uaz_vv: RHS_UAZ_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_uaz_vv.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_uaz_open_MSV_01: rhs_uaz_open_MSV_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_uaz_open_MSV_01.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_uaz_open_vdv: rhs_uaz_open_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_uaz_open_vdv.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_uaz_open_vmf: rhs_uaz_open_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_uaz_open_vmf.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_uaz_open_vv: rhs_uaz_open_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_uaz_open_vv.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_BaseTurret: Truck_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
        category = "Car";
        model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural.p3d";
        icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_ural_ca.paa";
        picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_bm21_pic_ca.paa";
        mapsize = 7;
        insideSoundCoef = 0.2;
        displayName = "$STR_RHS_URAL4320_NAME";
        tf_hasLRradio_api = 0;
        viewDriverInExternal = 1;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        class textureSources {
            class standard {
                displayName = "Khaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"};
            };
            class Camo: standard {
                displayName = "Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"};
            };
            class Camo1: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_chdkz_co.paa"};
            };
            class Camo2: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_camo_co.paa"};
            };
            class Camo3: standard {
                displayName = "Civil Blue";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"};
            };
            class Camo4: standard {
                displayName = "Civil Yellow";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civ1_co.paa"};
            };
            class Camo5: standard {
                displayName = "Civil Worker";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ2_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"};
            };
            class Camo6: standard {
                displayName = "UN";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_un_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_un_co.paa"};
            };
            class Camo7: standard {
                displayName = "Takistan";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_tka_co.paa"};
            };
            class rhs_sand: standard {
                displayName = "Sand";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa", "rhsafrf\addons\rhs_a2port_car_camo\data\ural_plachta_sand_co.paa"};
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cDecals4CarsNumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                displayName = "Set plate number";
                tooltip = "Set plate number. 4 numbers are required. If 0, random number will be generated";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{[_this,[['Number', cDecals4CarsNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value]]] call rhs_fnc_decalsInit};";
            };
            class rhs_decalArmy_type {
                displayName = "Define large door roundel type";
                tooltip = "Decal type";
                property = "rhs_decalArmy_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
                typeName = "STRING";
                class values {
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
                };
            };
            class rhs_decalArmy {
                displayName = "Set large door roundel symbol";
                tooltip = "Set large door roundel located on both sides. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalArmy";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightArmyPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalPlatoon_type: rhs_decalArmy_type {
                displayName = "Define small door roundel type";
                property = "rhs_decalPlatoon_type";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
            };
            class rhs_decalPlatoon: rhs_decalArmy {
                displayName = "Set small door roundel symbol";
                tooltip = "Define small door roundel located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightPlatoonPlaces,  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_hideLightCover {
                displayName = "Hide light covers";
                property = "rhs_hideLightCover";
                control = "CheckboxNumber";
                expression = "_this animate ['light_hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_hidespare: rhs_hideLightCover {
                displayName = "Remove spare wheel";
                property = "rhs_hidespare";
                expression = "_this animate ['spare_hide',_value,true]";
            };
            class Door_LF: rhs_hidespare {
                displayName = "Open front left door";
                property = "Door_LF";
                expression = "_this animateDoor ['%s',_value,true]";
            };
            class Door_RF: Door_LF {
                displayName = "Open front right door";
                property = "Door_RF";
            };
        };
        driverAction = "RHS_URAL_driver";
        driverInAction = "RHS_URAL_driver";
        attenuationEffectType = "RHS_CarAttenuation";
        soundAttenuationCargo[] = {1, 1, 0.3};
        cost = 50000;
        transportMaxBackpacks = 6;
        transportSoldier = 14;
        vehicleClass = "rhs_vehclass_truck";
        editorSubcategory = "rhs_EdSubcat_truck";
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "shift";
        driverRightLegAnimName = "pedalR";
        driverLeftLegAnimName = "pedalL";
        weapons[] = {"TruckHorn3"};
        supplyRadius = 5.5;
        soundGear[] = {"rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change", 2, 1};
        soundGetIn[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-getout",
            1.7782794,
            1,
            9
        };
        soundGetOut[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-getout",
            2.5118864,
            1,
            25
        };
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-start", 1.4125376, 1};
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-start",
            1.4125376,
            1,
            200
        };
        soundEngineOffInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-stop", 1.4125376, 1};
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-stop",
            1.4125376,
            1,
            200
        };
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-idle",
                    1.5848932,
                    1,
                    150
                };
                frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(950/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(100/	4000),(300/	4000)])	*	((rpm/	4000) factor[(800/	4000),(500/	4000)]))";
            };
            class Engine {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-acceleration",
                    1.4125376,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	4000) factor[(800/	4000),(1300/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(650/	4000),(750/	4000)])	*	((rpm/	4000) factor[(900/	4000),(800/	4000)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-low",
                    1.2589254,
                    1,
                    240
                };
                frequency = "0.8	+	((rpm/	4000) factor[(1200/	4000),(1600/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(850/	4000),(950/	4000)])	*	((rpm/	4000) factor[(1400/	4000),(1200/	4000)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high",
                    1.2589254,
                    1,
                    280
                };
                frequency = "0.8	+	((rpm/	4000) factor[(1400/	4000),(2100/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(1200/	4000),(1350/	4000)])	*	((rpm/	4000) factor[(1800/	4000),(1400/	4000)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high",
                    1.1220185,
                    1,
                    320
                };
                frequency = "0.8	+	((rpm/	4000) factor[(1300/	4000),(2900/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(1450/	4000),(1650/	4000)])	*	((rpm/	4000) factor[(2670/	4000),(2200/	4000)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high",
                    1.1220185,
                    1,
                    360
                };
                frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4200/	4000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	4000) factor[(2350/	4000),(2800/	4000)])	*	((rpm/	4000) factor[(3150/	4000),(3050/	4000)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high",
                    1.1220185,
                    1,
                    420
                };
                frequency = "0.95	+	((rpm/	4000) factor[(3100/	4000),(4900/	4000)])*0.15";
                volume = "engineOn*camPos*((rpm/	4000) factor[(3100/	4000),(4100/	4000)])";
            };
            class IdleThrust {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle_exhaust",
                    1.1220185,
                    1,
                    200
                };
                frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(950/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(100/	4000),(300/	4000)])	*	((rpm/	4000) factor[(800/	4000),(500/	4000)]))";
            };
            class EngineThrust {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust",
                    1.1220185,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	4000) factor[(800/	4000),(1300/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(650/	4000),(750/	4000)])	*	((rpm/	4000) factor[(900/	4000),(800/	4000)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust",
                    1.1220185,
                    1,
                    280
                };
                frequency = "0.8	+	((rpm/	4000) factor[(1200/	4000),(1600/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(850/	4000),(950/	4000)])	*	((rpm/	4000) factor[(1400/	4000),(1200/	4000)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",
                    1,
                    1,
                    320
                };
                frequency = "0.8	+	((rpm/	4000) factor[(1400/	4000),(2100/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1200/	4000),(1350/	4000)])	*	((rpm/	4000) factor[(1800/	4000),(1400/	4000)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",
                    1,
                    1,
                    360
                };
                frequency = "0.8	+	((rpm/	4000) factor[(1300/	4000),(2900/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1450/	4000),(1650/	4000)])	*	((rpm/	4000) factor[(2670/	4000),(2200/	4000)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",
                    1,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4200/	4000)])*0.3";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2350/	4000),(2800/	4000)])	*	((rpm/	4000) factor[(3150/	4000),(3050/	4000)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",
                    1.2589254,
                    1,
                    450
                };
                frequency = "0.9	+	((rpm/	4000) factor[(3100/	4000),(4900/	4000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(3100/	4000),(4100/	4000)])";
            };
            class Idle_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-idle", 1.4125376, 1};
                frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(950/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(100/	4000),(300/	4000)])	*	((rpm/	4000) factor[(800/	4000),(500/	4000)]))";
            };
            class Engine_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-acceleration", 1.4125376, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(800/	4000),(1300/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(650/	4000),(750/	4000)])	*	((rpm/	4000) factor[(900/	4000),(800/	4000)]))";
            };
            class Engine1_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-low", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(1200/	4000),(1600/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(850/	4000),(950/	4000)])	*	((rpm/	4000) factor[(1400/	4000),(1200/	4000)]))";
            };
            class Engine2_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(1400/	4000),(2100/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(1200/	4000),(1350/	4000)])	*	((rpm/	4000) factor[(1800/	4000),(1400/	4000)]))";
            };
            class Engine3_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(1300/	4000),(2900/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(1450/	4000),(1650/	4000)])	*	((rpm/	4000) factor[(2670/	4000),(2200/	4000)]))";
            };
            class Engine4_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4200/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(2350/	4000),(2800/	4000)])	*	((rpm/	4000) factor[(3150/	4000),(3050/	4000)]))";
            };
            class Engine5_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high", 1.2589254, 1};
                frequency = "0.95	+	((rpm/	4000) factor[(3100/	4000),(4900/	4000)])*0.15";
                volume = "engineOn*(1-camPos)*((rpm/	4000) factor[(3100/	4000),(4100/	4000)])";
            };
            class IdleThrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust", 1.4125376, 1};
                frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(950/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(100/	4000),(300/	4000)])	*	((rpm/	4000) factor[(800/	4000),(500/	4000)]))";
            };
            class EngineThrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(800/	4000),(1300/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(650/	4000),(750/	4000)])	*	((rpm/	4000) factor[(900/	4000),(800/	4000)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", 1.2589254, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(1200/	4000),(1600/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(850/	4000),(950/	4000)])	*	((rpm/	4000) factor[(1400/	4000),(1200/	4000)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 1.1220185, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(1400/	4000),(2100/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1200/	4000),(1350/	4000)])	*	((rpm/	4000) factor[(1800/	4000),(1400/	4000)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 1.1220185, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(1300/	4000),(2900/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1450/	4000),(1650/	4000)])	*	((rpm/	4000) factor[(2670/	4000),(2200/	4000)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 1.1220185, 1};
                frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4200/	4000)])*0.3";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2350/	4000),(2800/	4000)])	*	((rpm/	4000) factor[(3150/	4000),(3050/	4000)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 1.1220185, 1};
                frequency = "0.9	+	((rpm/	4000) factor[(3100/	4000),(4900/	4000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(3100/	4000),(4100/	4000)])";
            };
            class Movement {
                sound = "soundEnviron";
                frequency = "1";
                volume = "0";
            };
            class RainIn {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*(1-camPos)";
            };
            class RainExt {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*camPos";
            };
            class TiresRockOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
                    1.1220185,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*rock*(speed factor[2, 20])";
            };
            class TiresSandOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
                    1.1220185,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*sand*(speed factor[2, 20])";
            };
            class TiresGrassOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
                    1.1220185,
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
                    1.1220185,
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
                    1,
                    1,
                    90
                };
                frequency = "1";
                volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
            };
            class TiresRockIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", 1.1220185, 1};
                frequency = "1";
                volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 1, 1};
                frequency = "1";
                volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
            };
            class breaking_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
                    1.4125376,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class acceleration_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1.4125376,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
            };
            class turn_left_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1.4125376,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
            };
            class turn_right_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    1.4125376,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class breaking_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
                    1.4125376,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
            };
            class acceleration_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
                    1.4125376,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
            };
            class turn_left_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    1.4125376,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
            };
            class turn_right_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    1.4125376,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
            };
            class breaking_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class acceleration_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
            };
            class turn_left_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
            };
            class turn_right_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class breaking_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
            class acceleration_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
            };
            class turn_left_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
            };
            class turn_right_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 3.1622777, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
        };
        class Turrets {
            class MainTurret: NewTurret {
                disableSoundAttenuation = 0;
                class ViewOptics;
            };
        };
        memoryPointsGetInCargo[] = {"pos codriver", "pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos codriver dir", "pos cargo dir"};
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", "Door_RF", ""};
        driverCompartments = "Compartment1";
        cargoCompartments[] = {
            "Compartment1",
            "Compartment1",
            "Compartment2",
            "Compartment2",
            "Compartment2",
            "Compartment2"
        };
        class AnimationSources: AnimationSources {
            class Door_LF {
                source = "door";
                animPeriod = 0.8;
                sound = "RHS_Ural_Door";
                soundPosition = "osa_dvere_lp";
            };
            class Door_RF: Door_LF {
                soundPosition = "osa_dvere_pp";
            };
            class gearbox: Door_LF {
                sound = "RHS_gearbox";
                soundPosition = "gear_axis";
            };
            class HitSpare {
                source = "Hit";
                hitpoint = "HitSpare";
                raw = 1;
            };
            class UseSpare: HitSpare {
                hitpoint = "UseSpare";
            };
            class ammo_cargo_hide {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class spare_hide {
                mass = 1;
                source = "user";
                useSource = 1;
                displayName = "hide spare wheel";
                animPeriod = 0.1;
                initPhase = 0;
            };
            class bench_hide: spare_hide {
                displayName = "hide cargo bench";
                lockCargo[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 23, 24};
                lockCargoAnimationPhase = 1;
            };
            class people_tag_hide: spare_hide {
                displayName = "hide cargo label";
            };
            class rear_numplate_hide: spare_hide {
                displayName = "hide rear registration numbers";
                initPhase = 1;
            };
            class light_hide: spare_hide {
                displayName = "hide light covers";
            };
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
            class searchlight_hide: longlights_hide {};
            class cabinlights_hide: longlights_hide {};
            class searchlight_rot {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        armor = 52;
        minTotalDamageThreshold = 0.13;
        wheelDamageRadiusCoef = 0.9;
        wheelDestroyRadiusCoef = 0.4;
        crewCrashProtection = 0.25;
        fuelExplosionPower = 0.1;
        class HitPoints: HitPoints {
            class HitLFWheel: HitLFWheel {
                radius = 0.25;
                visual = "wheel_1_1_damage";
                armorComponent = "wheel_1_1_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitLF2Wheel: HitLF2Wheel {
                radius = 0.25;
                visual = "wheel_1_2_damage";
                armorComponent = "wheel_1_2_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitLMWheel: HitLMWheel {
                radius = 0.25;
                visual = "wheel_1_3_damage";
                armorComponent = "wheel_1_3_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitLBWheel: HitLBWheel {
                radius = 0.25;
                visual = "wheel_1_4_damage";
                armorComponent = "wheel_1_4_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitRFWheel: HitRFWheel {
                radius = 0.25;
                visual = "wheel_2_1_damage";
                armorComponent = "wheel_2_1_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitRF2Wheel: HitRF2Wheel {
                radius = 0.25;
                visual = "wheel_2_2_damage";
                armorComponent = "wheel_2_2_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitRMWheel: HitRMWheel {
                radius = 0.25;
                visual = "wheel_2_3_damage";
                armorComponent = "wheel_2_3_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitRBWheel: HitRBWheel {
                radius = 0.25;
                visual = "wheel_2_4_damage";
                armorComponent = "wheel_2_4_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitSpare: HitRF2Wheel {
                name = "spare1";
            };
            class UseSpare: HitSpare {
                name = "";
                visual = "-";
                armor = 1;
            };
            class HitFuel {
                armor = 0.5;
                radius = 0.2;
                name = "Hit_Fuel";
                armorComponent = "Hit_Fuel";
                visual = "-";
                passThrough = 0.2;
            };
            class HitEngine {
                armor = 0.5;
                radius = 0.2;
                name = "Hit_Engine";
                armorComponent = "Hit_Engine";
                visual = "zbytek";
                passThrough = 0.2;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Engine_Smoke {
                        simulation = "particles";
                        type = "SmallWreckSmoke";
                        position = "engine_smoke";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                    };
                    class RHS_Engine_Smoke_small1: RHS_Engine_Smoke {
                        type = "WeaponWreckSmoke";
                        position = "engine_smoke2";
                    };
                    class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1 {
                        position = "engine_smoke3";
                    };
                    class RHS_Engine_Sounds: RHS_Engine_Smoke {
                        simulation = "sound";
                        type = "SmokeWreck1";
                    };
                };
            };
            class HitBody: HitBody {
                name = "karoserie";
                visual = "zbytek";
                passThrough = 1;
                radius = 0.2;
            };
            class HitGlass1: HitGlass1 {
                armor = 0.1;
            };
            class HitGlass2: HitGlass2 {
                armor = 0.05;
            };
            class HitGlass3: HitGlass3 {
                armor = 0.05;
            };
            class HitGlass4: HitGlass4 {
                visual = "glass4";
                armor = 0.05;
            };
        };
        cargoAction[] = {
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic03still",
            "rhs_passenger_apc_narrow_generic03",
            "passenger_generic01_leanright",
            "rhs_passenger_apc_generic01",
            "rhs_passenger_apc_generic01",
            "rhs_passenger_apc_generic03",
            "rhs_passenger_apc_narrow_generic01",
            "passenger_generic01_leanleft",
            "rhs_passenger_apc_generic03",
            "rhs_passenger_apc_narrow_generic02",
            "rhs_passenger_apc_generic02",
            "rhs_passenger_apc_generic01",
            "passenger_generic01_foldhands",
            "rhs_passenger_apc_generic04",
            "passenger_generic01_leanleft"
        };
        getInAction = "GetInMantis";
        getOutAction = "GetOutMedium";
        cargoGetInAction[] = {"GetInMantis", "GetInMantis", "GetInHemttBack"};
        cargoGetOutAction[] = {"GetOutMedium", "GetOutMedium", "GetOutHighZamak"};
        memorypointtrackbll = "Stopa ZLL";
        memorypointtrackblr = "Stopa ZLP";
        memorypointtrackbrl = "Stopa ZPL";
        memorypointtrackbrr = "Stopa ZPP";
        memorypointtrackfll = "Stopa PLL";
        memorypointtrackflr = "Stopa PLP";
        memorypointtrackfrl = "Stopa PPL";
        memorypointtrackfrr = "Stopa PPP";
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama_damage.rvmat",
                "rhsafrf\addons\rhs_tigr\data\glass.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_int.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21.rvmat",
                "rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustEffectHTruck";
            };
        };
        class Reflectors {
            class LSvetla {
                color[] = {800, 900, 650};
                ambient[] = {2, 2, 2};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 30;
                outerAngle = 100;
                coneFadeCoef = 10;
                intensity = 1.5;
                useFlare = 1;
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
            class RSvetla: LSvetla {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
                innerAngle = 40;
                outerAngle = 120;
                intensity = 2.5;
            };
            class Right2: RSvetla {
                position = "Light_R_Flare";
                direction = "Light_R_Flare_end";
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
            class Left2: LSvetla {
                position = "Light_L_Flare";
                direction = "Light_L_Flare_end";
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
            class Searchlight: LSvetla {
                position = "Searchlight_pos";
                direction = "Searchlight_dir";
                hitpoint = "Searchlight";
                selection = "Searchlight";
                useFlare = 1;
                innerAngle = 35;
                outerAngle = 179;
            };
            class Long_Left {
                color[] = {800, 900, 650};
                ambient[] = {5, 5, 5};
                position = "Light_L_Long";
                direction = "Light_L_Long_end";
                hitpoint = "L svetlo";
                selection = "L svetlo";
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
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
            class Long_Right2: Long_Right {
                useFlare = 1;
                position = "light_R_Long_flare";
                innerAngle = 50;
                outerAngle = 139;
                coneFadeCoef = 51;
                flareSize = 1;
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
                outerAngle = 139;
                coneFadeCoef = 51;
                flareSize = 1;
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
            class cabin {
                color[] = {800, 900, 650};
                ambient[] = {5, 0, 0};
                intensity = 4;
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
                dayLight = 0;
                blinking = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 1.5;
                    hardLimitEnd = 2;
                };
            };
        };
        aggregateReflectors[] = {
            {"LSvetla"},
            {"Left2"},
            {"RSvetla"},
            {"Right2"},
            {"Long_Left2", "Long_Right2"}
        };
        armorLights = 0.05;
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
        class UserActions {
            class lights_toggle {
                displayName = "Toggle short/long lights";
                position = "";
                shortcut = "vehLockTargets";
                radius = 12;
                priority = 1.5;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "(player == driver this) AND (isLightOn this)";
                statement = "[this,0] call rhs_fnc_carLightToggle";
            };
            class cabinlights_toggle: lights_toggle {
                shortcut = "lockTarget";
                displayName = "Toggle cabin lights";
                statement = "[this,1] call rhs_fnc_carLightToggle";
            };
            class searchlight_toggle: lights_toggle {
                shortcut = "";
                displayName = "Toggle searchlight";
                statement = "[this,3] call rhs_fnc_carLightToggle";
            };
            class searchlight_adjust: lights_toggle {
                shortcut = "";
                displayName = "Adjust searchlight";
                condition = "((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this) AND (this animationPhase 'searchlight_hide' == 0)";
                statement = "[this] spawn rhs_fnc_adjustSearchlight";
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 2000;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {0, -3.3, -0.7};
            };
        };
        normalSpeedForwardCoef = 0.6;
        slowSpeedForwardCoef = 0.45;
        turnCoef = 4;
        terrainCoef = 0.7;
        waterSpeedFactor = 0.4;
        simulation = "carx";
        dampersBumpCoef = 6;
        precision = 10;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 76;
        fuelCapacity = 40;
        RHS_fuelCapacity = 300;
        wheelCircumference = 3.87;
        brakeIdleSpeed = 1.25;
        maxFordingDepth = 0;
        waterResistance = 1;
        waterResistanceCoef = 0.2;
        waterLeakiness = 10;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -5.3,
                "N",
                0,
                "D1",
                5.62,
                "D2",
                2.89,
                "D3",
                1.64,
                "D4",
                1,
                "D5",
                0.724
            };
            TransmissionRatios[] = {"High", 5.82};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.8, 0.85, 0.85, 0.95, 0.85};
        switchTime = 0.31;
        latency = 1.5;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 0.6;
        centreBias = 1.3;
        clutchStrength = 75;
        transmissionLosses = 12;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0, 0},
            {0.428571, 0.917327},
            {0.52381, 0.934315},
            {0.595238, 1},
            {0.690476, 1},
            {0.761905, 0.956965},
            {0.857143, 0.928652},
            {1, 0.509626}
        };
        enginePower = 179;
        engineMOI = 2;
        peakTorque = 1059.6;
        maxOmega = 219.91;
        minOmega = 65;
        idleRPM = 650;
        redRPM = 2100;
        engineLosses = 14;
        thrustDelay = 2.4;
        engineBrakeCoef = 0.3;
        antiRollbarForceCoef = 25;
        antiRollbarForceLimit = 45.5;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 60;
        class Wheels {
            class LF {
                width = "0.37";
                steering = 1;
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                mass = 90;
                MOI = 18;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 12500;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {-0.125, -1, 0};
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                maxCompression = 0.27;
                maxDroop = 0.2;
                sprungMass = -1;
                springStrength = 171813;
                springDamperRate = 15872;
                longitudinalStiffnessPerUnitGravity = 14582;
                latStiffX = 3.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1.2}, {0.5, 1.13}, {1, 1}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                maxHandBrakeTorque = 20000;
            };
            class LR2: LR {
                boneName = "wheel_1_3_damper";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
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
                steering = 0;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                maxHandBrakeTorque = 20000;
            };
            class RR2: RR {
                boneName = "wheel_2_3_damper";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_a2port_car_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                engine = "if(_this select 1)then{_this call RHS_fnc_gearSound};_this call rhs_fnc_engineCheckDamage;";
                dammaged = " _this call rhs_fnc_wheelDamaged";
            };
        };
        class Components;
    };
    class RHS_Ural_Base: RHS_Ural_BaseTurret {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Base.paa";
        picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_pic_ca.paa";
        transportSoldier = 12;
        insideSoundCoef = 0.2;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 14};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        class CargoTurret;
        class Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                gunnerInAction = "passenger_inside_2";
                gunnerGetInAction = "GetInHemttBack";
                gunnerGetOutAction = "GetOutHighZamak";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                gunnerName = "Passenger (Left Seat)";
                gunnerCompartments = "Compartment2";
                proxyIndex = 12;
                maxElev = 15;
                minElev = -15;
                maxTurn = -40;
                minTurn = -115;
                isPersonTurret = 1;
                commanding = -2;
                forceHideGunner = 1;
                ViewGunnerInExternal = 1;
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Right Seat)";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                proxyIndex = 11;
                maxTurn = 95;
                minTurn = 20;
                minElev = -45;
            };
        };
    };
    class RHS_Ural_MSV_Base: RHS_Ural_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_MSV_Base.paa";
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        typicalCargo[] = {"rhs_msv_driver"};
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"};
    };
    class RHS_Ural_MSV_01: RHS_Ural_MSV_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_MSV_01.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_VDV_01: RHS_Ural_MSV_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_VDV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        scope = 2;
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_VMF_01: RHS_Ural_MSV_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_VMF_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        scope = 2;
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_VV_01: RHS_Ural_MSV_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_VV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        scope = 2;
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Flat_MSV_01: RHS_Ural_MSV_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Flat_MSV_01.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "Ural-4320 (Flatbed)";
        class AnimationSources: AnimationSources {
            class bench_hide: bench_hide {
                initPhase = 1;
            };
        };
        transportSoldier = 2;
        cargoProxyIndexes[] = {1, 2};
        class Turrets {};
    };
    class RHS_Ural_Flat_VDV_01: RHS_Ural_Flat_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Flat_VDV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Flat_VMF_01: RHS_Ural_Flat_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Flat_VMF_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Flat_VV_01: RHS_Ural_Flat_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Flat_VV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Open_MSV_01: RHS_Ural_MSV_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_MSV_01.paa";
        scope = 2;
        displayName = "$STR_RHS_URAL4320OPEN_NAME";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open2.p3d";
        picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_open_pic_ca.paa";
        soundAttenuationCargo[] = {1, 1, 0};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        hideProxyInCombat = 1;
        canHideDriver = 0;
        class textureSources {
            class standard {
                displayName = "Khaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa"};
            };
            class Camo1: standard {
                displayName = "Takistan";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_tka_co.paa"};
            };
            class Camo2: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_chdkz_co.paa"};
            };
            class rhs_sand: standard {
                displayName = "Sand";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa", "rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa"};
            };
        };
        textureList[] = {};
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_02 {
                gunnerInAction = "RHS_Ural_Turnout01";
                gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
                animationSourceHatch = "turnout1";
                gunnerGetInAction = "GetInHemttBack";
                gunnerGetOutAction = "GetOutHighZamak";
                gunnerName = "Passenger (Right Front Seat)";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                gunnerCompartments = "Compartment2";
                proxyIndex = 23;
                maxElev = 45;
                minElev = -25;
                maxTurn = 60;
                minTurn = -85;
                isPersonTurret = 2;
                canHideGunner = 1;
                allowLauncherOut = 1;
                commanding = -2;
                forceHideGunner = 0;
                class TurnIn {
                    limitsArrayTop[] = {{45, -85}, "", {35, -17}, {15, -7}};
                    limitsArrayBottom[] = {{12, -85}, {2, -17}, {0.5, -7}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{35, -85}, {35, 60}};
                    limitsArrayBottom[] = {
                        {-15, -65},
                        {-25, -49},
                        {-45, -36},
                        {-19, -18},
                        {-9, -7},
                        {-9, 32},
                        {-15, 52},
                        {-25, 60},
                        {-15, 76}
                    };
                    turnOffset = -90;
                };
            };
            class CargoTurret_04: CargoTurret_03 {
                gunnerName = "Passenger (Left Front Seat)";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                animationSourceHatch = "turnout2";
                proxyIndex = 24;
                maxTurn = 25;
                minTurn = -60;
                class TurnIn {
                    limitsArrayTop[] = {{25, 15}, {55, 94}};
                    limitsArrayBottom[] = {{0, 15}, {0, 35}, {12, 94}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{35, -60}, {35, 95}};
                    limitsArrayBottom[] = {
                        {-19, -60},
                        {-22, -57},
                        {-22, -47},
                        {-12, -42},
                        {-9, -28},
                        {-11, 10},
                        {-15, 25},
                        {-45, 55},
                        {-15, 95}
                    };
                    turnOffset = -90;
                };
            };
        };
        transportSoldier = 10;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 23, 24};
    };
    class RHS_Ural_Open_VDV_01: RHS_Ural_Open_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_VDV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Open_VMF_01: RHS_Ural_Open_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_VMF_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Open_VV_01: RHS_Ural_Open_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_VV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Open_Flat_MSV_01: RHS_Ural_Open_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_Flat_MSV_01.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "Ural-4320 (Open/Flatbed)";
        class AnimationSources: AnimationSources {
            class bench_hide: bench_hide {
                initPhase = 1;
            };
        };
        transportSoldier = 2;
        cargoProxyIndexes[] = {1, 2};
        class Turrets {};
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
    };
    class RHS_Ural_Open_Flat_VDV_01: RHS_Ural_Open_Flat_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_Flat_VDV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Open_Flat_VMF_01: RHS_Ural_Open_Flat_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_Flat_VMF_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Open_Flat_VV_01: RHS_Ural_Open_Flat_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_Flat_VV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Support_MSV_Base_01.paa";
        transportSoldier = 2;
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2};
        class Turrets {};
    };
    class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Fuel_MSV_01.paa";
        scope = 2;
        displayName = "$STR_RHS_URAL4320FUEL_NAME";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural_refuel.p3d";
        icon = "\A3\soft_f_gamma\Truck_02\data\UI\Map_Truck_02_fuel_CA.paa";
        picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_fuel_pic_ca.paa";
        transportfuel = 10000;
        supplyRadius = 9.5;
        class Hitpoints: HitPoints {
            class HitFuelTank {
                armor = 0.5;
                material = -1;
                name = "Hit_FuelTank";
                armorComponent = "Hit_FuelTank";
                visual = "-";
                passThrough = 0.2;
                class DestructionEffects {};
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4",
            "camo3"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
            "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Khaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"
                };
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_cdf_co.paa"
                };
            };
            class Camo1: standard {
                displayName = "Takistan";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa",
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_tka_co.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_tka_co.paa"
                };
            };
            class Camo2: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_chdkz_co.paa"
                };
            };
            class rhs_sand: standard {
                displayName = "Sand";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa",
                    "rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
                    "rhsafrf\addons\rhs_a2port_car_camo\data\ural_fuel_sand_co.paa"
                };
            };
        };
        textureList[] = {};
    };
    class RHS_Ural_Fuel_VDV_01: RHS_Ural_Fuel_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Fuel_VDV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Fuel_VMF_01: RHS_Ural_Fuel_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Fuel_VMF_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Fuel_VV_01: RHS_Ural_Fuel_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Fuel_VV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Repair_MSV_01: RHS_Ural_Support_MSV_Base_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Repair_MSV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"};
        scope = 2;
        displayName = "$STR_RHS_URAL4320Repair_NAME";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural_repair.p3d";
        icon = "\A3\soft_f_beta\Truck_02\data\UI\Map_truck_02_repair_CA.paa";
        picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_repair_pic_ca.paa";
        transportRepair = 2000000000;
        supplyRadius = 9.5;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_tigr\data\glass.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_int.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_repair.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_repair_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_repair_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class textureSources {
            class standard {
                displayName = "Khaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "3-Color Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"};
            };
            class Camo1: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"};
            };
            class Camo2: standard {
                displayName = "Takistan";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"};
            };
            class Camo3: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"};
            };
            class rhs_sand: standard {
                displayName = "Sand";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"};
            };
        };
        textureList[] = {};
    };
    class RHS_Ural_Repair_VDV_01: RHS_Ural_Repair_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Repair_VDV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Repair_VMF_01: RHS_Ural_Repair_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Repair_VMF_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Repair_VV_01: RHS_Ural_Repair_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Repair_VV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Ammo_Base: RHS_Ural_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_MSV_01.paa";
        accuracy = 0.5;
        side = 0;
        transportAmmo = 60000;
        supplyRadius = 9.5;
        transportSoldier = 2;
        displayName = "Ural-4320 (Ammo)";
        class AnimationSources: AnimationSources {
            class ammo_cargo_hide {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class bench_hide: bench_hide {
                initPhase = 1;
            };
        };
        class Turrets {};
    };
    class RHS_Ural_Ammo_MSV_01: RHS_Ural_Ammo_Base {
        scope = 2;
        forceingarage = 1;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        typicalCargo[] = {"rhs_msv_driver"};
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Ammo_VDV_01: RHS_Ural_Ammo_Base {
        scope = 2;
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Ammo_VMF_01: RHS_Ural_Ammo_Base {
        scope = 2;
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Ammo_VV_01: RHS_Ural_Ammo_Base {
        scope = 2;
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_BM21_MSV_01: RHS_Ural_BaseTurret {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\RHS_BM21_MSV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"};
        scope = 2;
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        typicalCargo[] = {"rhs_msv_driver"};
        editorSubcategory = "rhs_EdSubcat_artillery";
        displayName = "$STR_RHS_BM21_NAME";
        author = "$STR_RHS_AUTHOR_FULL";
        transportSoldier = 1;
        model = "\rhsafrf\addons\rhs_a2port_car\Ural\bm21.p3d";
        icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_BM21_CA.paa";
        mapsize = 8;
        gunnerCompartments = "Compartment2";
        unitInfoType = "RscUnitInfoArtillery";
        availableforsupporttypes[] = {"Artillery"};
        artilleryscanner = 1;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                commanding = 1;
                body = "mainTurret";
                gun = "mainGun";
                minElev = 0;
                maxElev = 65;
                initElev = 11.5;
                weapons[] = {};
                magazines[] = {};
                gunnerAction = "passenger_apc_narrow_generic03still";
                gunnerOpticsModel = "";
                gunnergetInAction = "GetInHigh";
                gunnergetOutAction = "GetOutHigh";
                stabilizedInAxes = 0;
                outGunnerMayFire = 1;
                turretInfoType = "RscWeaponRangeArtilleryAuto";
                usePiP = 1;
                inGunnerMayFire = 1;
                gunnerForceOptics = 0;
                gunnerOutForceOptics = 0;
                startEngine = 0;
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.093;
                    minFov = 0.093;
                    maxFov = 0.093;
                };
                lockWhenVehicleSpeed = 1;
                elevationMode = 3;
                class Hitpoints {
                    class HitLauncher {
                        isGun = 1;
                        armor = -80;
                        explosionShielding = 0.25;
                        passThrough = 0.2;
                        minimalHit = 0.01;
                        radius = 0.07;
                        name = "Hit_Launcher";
                        armorComponent = "Hit_Launcher";
                        visual = "Vis_Launcher";
                    };
                    class HitTurret {
                        isTurret = 1;
                        armor = -80;
                        explosionShielding = 0.25;
                        passThrough = 0.2;
                        minimalHit = 0.01;
                        radius = 0.07;
                        name = "Hit_Turret";
                        armorComponent = "Hit_Turret";
                        visual = "Vis_Turret";
                    };
                };
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_car\data\loadouts\RHS_BM21_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {"RHS_HP_BM21"};
                        priority = 1;
                        maxweight = 200;
                        UIposition[] = {0.12, 0.1};
                        bay = 1;
                        attachment = "rhs_mag_m21of_1";
                        turret[] = {0};
                        hitpoint = "HitLauncher";
                    };
                    class pylon2: pylon1 {
                        priority = 2;
                        UIposition[] = {0.12, 0.14};
                    };
                    class pylon3: pylon1 {
                        priority = 3;
                        UIposition[] = {0.12, 0.18};
                    };
                    class pylon4: pylon1 {
                        priority = 4;
                        UIposition[] = {0.12, 0.22};
                    };
                    class pylon5: pylon1 {
                        priority = 5;
                        UIposition[] = {0.12, 0.26};
                    };
                    class pylon6: pylon1 {
                        priority = 6;
                        UIposition[] = {0.12, 0.3};
                    };
                    class pylon7: pylon1 {
                        priority = 7;
                        UIposition[] = {0.12, 0.34};
                    };
                    class pylon8: pylon1 {
                        priority = 8;
                        UIposition[] = {0.12, 0.38};
                    };
                    class pylon9: pylon1 {
                        priority = 9;
                        UIposition[] = {0.12, 0.42};
                    };
                    class pylon10: pylon1 {
                        priority = 10;
                        UIposition[] = {0.12, 0.46};
                    };
                    class pylon11: pylon1 {
                        priority = 11;
                        UIposition[] = {0.31, 0.1};
                    };
                    class pylon12: pylon1 {
                        priority = 12;
                        UIposition[] = {0.31, 0.14};
                    };
                    class pylon13: pylon1 {
                        priority = 13;
                        UIposition[] = {0.31, 0.18};
                    };
                    class pylon14: pylon1 {
                        priority = 14;
                        UIposition[] = {0.31, 0.22};
                    };
                    class pylon15: pylon1 {
                        priority = 15;
                        UIposition[] = {0.31, 0.26};
                    };
                    class pylon16: pylon1 {
                        priority = 16;
                        UIposition[] = {0.31, 0.3};
                    };
                    class pylon17: pylon1 {
                        priority = 17;
                        UIposition[] = {0.31, 0.34};
                    };
                    class pylon18: pylon1 {
                        priority = 18;
                        UIposition[] = {0.31, 0.38};
                    };
                    class pylon19: pylon1 {
                        priority = 19;
                        UIposition[] = {0.31, 0.42};
                    };
                    class pylon20: pylon1 {
                        priority = 20;
                        UIposition[] = {0.31, 0.46};
                    };
                    class pylon21: pylon1 {
                        priority = 21;
                        UIposition[] = {0.5, 0.1};
                    };
                    class pylon22: pylon1 {
                        priority = 22;
                        UIposition[] = {0.5, 0.14};
                    };
                    class pylon23: pylon1 {
                        priority = 23;
                        UIposition[] = {0.5, 0.18};
                    };
                    class pylon24: pylon1 {
                        priority = 24;
                        UIposition[] = {0.5, 0.22};
                    };
                    class pylon25: pylon1 {
                        priority = 25;
                        UIposition[] = {0.5, 0.26};
                    };
                    class pylon26: pylon1 {
                        priority = 26;
                        UIposition[] = {0.5, 0.3};
                    };
                    class pylon27: pylon1 {
                        priority = 27;
                        UIposition[] = {0.5, 0.34};
                    };
                    class pylon28: pylon1 {
                        priority = 28;
                        UIposition[] = {0.5, 0.38};
                    };
                    class pylon29: pylon1 {
                        priority = 29;
                        UIposition[] = {0.5, 0.42};
                    };
                    class pylon30: pylon1 {
                        priority = 30;
                        UIposition[] = {0.5, 0.46};
                    };
                    class pylon31: pylon1 {
                        priority = 31;
                        UIposition[] = {0.69, 0.1};
                    };
                    class pylon32: pylon1 {
                        priority = 32;
                        UIposition[] = {0.69, 0.14};
                    };
                    class pylon33: pylon1 {
                        priority = 33;
                        UIposition[] = {0.69, 0.18};
                    };
                    class pylon34: pylon1 {
                        priority = 34;
                        UIposition[] = {0.69, 0.22};
                    };
                    class pylon35: pylon1 {
                        priority = 35;
                        UIposition[] = {0.69, 0.26};
                    };
                    class pylon36: pylon1 {
                        priority = 36;
                        UIposition[] = {0.69, 0.3};
                    };
                    class pylon37: pylon1 {
                        priority = 37;
                        UIposition[] = {0.69, 0.34};
                    };
                    class pylon38: pylon1 {
                        priority = 38;
                        UIposition[] = {0.69, 0.38};
                    };
                    class pylon39: pylon1 {
                        priority = 39;
                        UIposition[] = {0.69, 0.42};
                    };
                    class pylon40: pylon1 {
                        priority = 40;
                        UIposition[] = {0.69, 0.46};
                    };
                };
                class Presets {
                    class M21OF {
                        attachment[] = {
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1",
                            "rhs_mag_m21of_1"
                        };
                        displayname = "M-21OF High Explosive";
                    };
                    class 9M28F {
                        attachment[] = {
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1",
                            "rhs_mag_9m28f_1"
                        };
                        displayname = "9M28 High Explosive Fragmentation";
                    };
                    class 9M28K {
                        attachment[] = {
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1",
                            "rhs_mag_9m28k_1"
                        };
                        displayname = "9M28K Cluster Anti Tank Mines";
                    };
                    class 9M218 {
                        attachment[] = {
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1",
                            "rhs_mag_9m218_1"
                        };
                        displayname = "9M218 Cluster HEAT";
                    };
                    class 9M521 {
                        attachment[] = {
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1",
                            "rhs_mag_9m521_1"
                        };
                        displayname = "9M521 High Explosive Extended Range";
                    };
                    class 9M522 {
                        attachment[] = {
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1",
                            "rhs_mag_9m522_1"
                        };
                        displayname = "9M522 High Explosive Fragmentation Extended Range";
                    };
                };
                class Bays {
                    class MainBay {
                        bayOpenTime = 5.5;
                        openBayWhenWeaponSelected = 0.5;
                        autoCloseWhenEmptyDelay = 1;
                    };
                };
            };
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        class textureSources {
            class standard {
                displayName = "Khaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "3-Color Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_rus_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_rus_co.paa"};
            };
            class Camo1: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_chdkz_co.paa"};
            };
            class Camo2: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_cdf_co.paa"};
            };
            class Camo4: standard {
                displayName = "Takistan";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_tka_co.paa"};
            };
            class rhs_sand: standard {
                displayName = "Sand";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa", "rhsafrf\addons\rhs_a2port_car_camo\data\ural_bm21_sand_co.paa"};
            };
        };
        textureList[] = {};
    };
    class RHS_BM21_VDV_01: RHS_BM21_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_BM21_VDV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_BM21_VMF_01: RHS_BM21_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_BM21_VMF_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_BM21_VV_01: RHS_BM21_MSV_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_BM21_VV_01.paa";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Ural_Zu23_Base: RHS_Ural_BaseTurret {
        displayName = "$STR_RHS_URAL4320_ZU23_NAME";
        model = "\rhsafrf\addons\rhs_a2port_car\Ural\ural_zu23.p3d";
        icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_zu23_CA.paa";
        picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_zu23_pic_ca.paa";
        mapsize = 8;
        unitInfoType = "RscUnitInfo";
        hideProxyInCombat = 1;
        forceHideDriver = 1;
        threat[] = {0.6, 0.1, 0.6};
        transportSoldier = 2;
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2, 3, 4};
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                body = "mainTurret";
                gun = "mainGun";
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
                minElev = -10;
                maxElev = 85;
                initElev = 10;
                maxHorizontalRotSpeed = 0.55;
                maxVerticalRotSpeed = 0.35;
                weapons[] = {"rhs_weap_2A14"};
                magazines[] = {
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh"
                };
                gunnerAction = "RHS_Zu23_Gunner";
                gunnerInAction = "RHS_Zu23_Gunner";
                gunnerGetInAction = "GetInHemttBack";
                gunnerGetOutAction = "GetOutHighZamak";
                gunnerLeftHandAnimName = "handle_elev_hand";
                gunnerRightHandAnimName = "handle_trav_hand";
                gunnerLeftLegAnimName = "otocVez";
                gunnerRightLegAnimName = "otocVez";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                ViewGunnerInExternal = 1;
                selectionFireAnim = "zasleh";
                gunnerCompartments = "Compartment2";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope";
                soundServo[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret",
                    2.4,
                    1,
                    30
                };
                soundServoVertical[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret_elev",
                    3,
                    1,
                    30
                };
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                forceHideGunner = 1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                gunnerForceOptics = 0;
                allowTabLock = 0;
                canUseScanner = 0;
                startEngine = 0;
                stabilizedInAxes = 0;
                memoryPointGun[] = {"muzzle_1", "muzzle_2"};
                lodTurnedIn = 0;
                lodTurnedOut = 0;
                turretInfoType = "RHS_RscWeaponZU23_T3_Optic";
                class ViewGunner {
                    initAngleX = 0;
                    initAngleY = -9;
                    minAngleX = -30;
                    maxAngleX = 30;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.093;
                    minFov = 0.093;
                    maxFov = 0.093;
                };
                class OpticsIn {
                    class Collimator: ViewOptics {
                        opticsDisplayName = "COLLIMATOR";
                        initFov = 0.636364;
                        minFov = 0.636364;
                        maxFov = 0.636364;
                        gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                    };
                    class CollimatorZoom: Collimator {
                        initFov = 0.35;
                        minFov = 0.35;
                        maxFov = 0.35;
                    };
                    class T3_Optic {
                        opticsDisplayName = "T3";
                        camPos = "commanderview";
                        camDir = "view_t3_dir";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.2;
                        minFov = 0.2;
                        maxFov = 0.2;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope.p3d";
                    };
                };
                class TurnIn {
                    limitsArrayTop[] = {{85, -180}, {85, 180}};
                    limitsArrayBottom[] = {
                        {-10, -180},
                        {-8, -35.6867},
                        {9.3683, -32.6867},
                        {10, 0},
                        {9.7173, 32.6372},
                        {-8, 36.6867},
                        {-10, 134},
                        {-6, 134.5},
                        {-6, 178},
                        {-10, 180}
                    };
                };
                disableSoundAttenuation = 1;
                class HitPoints {
                    class HitTurret {
                        armor = -100;
                        material = -1;
                        name = "Hit_Turret";
                        armorComponent = "Hit_Turret";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.1;
                        radius = 0.1;
                    };
                    class HitGun {
                        armor = -100;
                        material = -1;
                        name = "Hit_Gun";
                        armorComponent = "Hit_Gun";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.1;
                        radius = 0.1;
                    };
                    class Hit_Optic_Collimator {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optic_TPN4";
                        armorComponent = "Hit_Optic_ESSA";
                        passThrough = 0;
                    };
                    class Hit_Optic_T3 {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optic_TPN4";
                        armorComponent = "Hit_Optic_ESSA";
                        passThrough = 0;
                    };
                };
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "vehicle_coshooter_1";
                gunnerInAction = "vehicle_coshooter_1";
                gunnerGetInAction = "GetInHemttBack";
                gunnerGetOutAction = "GetOutHighZamak";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "Loader";
                primaryObserver = 0;
                dontCreateAI = 0;
                commanding = 4;
                gunnerCompartments = "Compartment2";
                proxyIndex = 3;
                maxElev = 45;
                minElev = -15;
                maxTurn = 84;
                minTurn = -65;
                gunnerUsesPilotView = 1;
                memorypointgunneroptics = "";
                selectionFireAnim = "";
                isPersonTurret = 1;
                forceHideGunner = 1;
                playerPosition = 2;
                soundAttenuationTurret = "HeliAttenuationRamp";
                disableSoundAttenuation = 0;
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                playerPosition = 1;
                commanding = 2;
                primaryObserver = 0;
                gunnerName = "Passenger (front)";
                proxyIndex = 4;
                isPersonTurret = 2;
                gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
                gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
                animationSourceHatch = "gunner_rf_turn";
                allowLauncherOut = 1;
                canHideGunner = 1;
                forceHideGunner = 0;
                dontCreateAI = 1;
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                minElev = -45;
                class TurnIn {
                    limitsArrayTop[] = {{45, -65}, {45, 84}};
                    limitsArrayBottom[] = {
                        {-7, -65},
                        {-7, -45.6867},
                        {-2, -35.6867},
                        {5, -22.6867},
                        {5, -12.6867},
                        {-3, -8.6867},
                        {-3, 2.6867},
                        {-7, 14},
                        {4, 44},
                        {4, 64},
                        {-7, 74}
                    };
                };
                class TurnOut {
                    limitsArrayTop[] = {{45, -180}, {45, 180}};
                    limitsArrayBottom[] = {
                        {-45, -65},
                        {-42, -45.6867},
                        {-34, -22.6867},
                        {-12, 12.6867},
                        {-8, 44},
                        {-11, 74},
                        {-25, 84}
                    };
                    turnOffset = -180;
                };
            };
            class CargoTurret_03: CargoTurret_02 {
                isPersonTurret = 1;
                canHideGunner = 0;
                gunnerName = "Passenger (rear)";
                allowLauncherOut = 0;
                proxyIndex = 5;
                gunnerAction = "passenger_flatground_2";
                animationSourceHatch = "";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                minTurn = -65;
                class TurnIn {
                    limitsArrayTop[] = {{45, -65}, {45, 84}};
                    limitsArrayBottom[] = {
                        {-4, -65},
                        {-8, -45.6867},
                        {-15, -22.6867},
                        {-11, 24},
                        {-12, 84}
                    };
                };
            };
        };
        class AnimationSources: AnimationSources {
            class muzzle_source {
                source = "reload";
                weapon = "rhs_weap_2A14";
            };
            class fire_anim: muzzle_source {
                source = "revolving";
            };
            class muzzleHMG_ROT: muzzle_source {
                source = "ammorandom";
            };
            class Elevation {
                source = "user";
                animPeriod = 0.1;
                initPhase = 5;
            };
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_tigr\data\glass.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_int.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_open_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_interier_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class textureSources {
            class standard {
                displayName = "Khaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa"};
            };
            class Camo1: standard {
                displayName = "Takistan";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_tka_co.paa"};
            };
            class Camo2: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_chdkz_co.paa"};
            };
        };
        textureList[] = {};
    };
    class RHS_Ural_Zu23_MSV_01: RHS_Ural_Zu23_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Zu23_MSV_01.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"};
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        typicalCargo[] = {"rhs_msv_driver"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_msv_rifleman";
            };
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_msv_sergeant";
            };
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
    };
    class RHS_Ural_Zu23_VDV_01: RHS_Ural_Zu23_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Zu23_VDV_01.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]", "['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"};
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        typicalCargo[] = {"rhs_msv_driver"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_vdv_rifleman";
            };
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_vdv_sergeant";
            };
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
    };
    class RHS_Ural_Zu23_VMF_01: RHS_Ural_Zu23_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Zu23_VDV_01.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"};
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_vmf_flora_rifleman";
            };
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_vmf_flora_sergeant";
            };
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
    };
    class RHS_Ural_Zu23_VV_01: RHS_Ural_Zu23_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Zu23_VDV_01.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']", "['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"};
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_vv";
        crew = "rhs_mvd_izlom_rifleman";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_mvd_izlom_rifleman";
            };
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_mvd_izlom_sergeant";
            };
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
    };
    class RHS_Ural_Civ_Base: RHS_Ural_Base {
        accuracy = 0.5;
        crew = "C_man_1";
        faction = "CIV_F";
        side = 3;
        rhs_decalParameters[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "numplate",
            "numplate2",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4"
        };
    };
    class RHS_Ural_Civ_01: RHS_Ural_Civ_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Civ_01.paa";
        scope = 2;
        displayName = "$STR_RHS_URAL4320BLUE_NAME";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_civil_co.paa", "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_civil_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
    };
    class RHS_Ural_Civ_02: RHS_Ural_Civ_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Civ_02.paa";
        displayName = "$STR_RHS_URAL4320YELLOW_NAME";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_civ1_co.paa", "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_civ1_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
    };
    class RHS_Ural_Civ_03: RHS_Ural_Civ_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Civ_03.paa";
        displayName = "$STR_RHS_URAL4320WORKER_NAME";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_kabina_civ2_co.paa", "rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
    };
    class RHS_Ural_Open_Civ_01: RHS_Ural_Civ_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_Civ_01.paa";
        scope = 2;
        model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
        picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\rhs_ural4320_open_pic_ca.paa";
        displayName = "$STR_RHS_URAL4320BLUEOPEN_NAME";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civil_co.paa", "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_civil_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
    };
    class RHS_Ural_Open_Civ_02: RHS_Ural_Open_Civ_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_Civ_02.paa";
        displayName = "$STR_RHS_URAL4320YELLOWOPEN_NAME";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ1_co.paa", "rhsafrf\addons\rhs_a2port_car\Ural\Data\ural_plachta_civ1_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
    };
    class RHS_Ural_Open_Civ_03: RHS_Ural_Open_Civ_01 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ural_Open_Civ_03.paa";
        displayName = "$STR_RHS_URAL4320WORKEROPEN_NAME";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa", "rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa", "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
    };
    class Truck_02_base_F;
    class RHS_Civ_Truck_02_covered_F: Truck_02_base_F {
        mapSize = 9.45;
        author = "$STR_A3_Bohemia_Interactive";
        crew = "C_man_1";
        faction = "CIV_F";
        side = 3;
        scope = 1;
        hiddenSelectionsTextures[] = {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_co.paa", "\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_co.paa"};
    };
    class RHS_Civ_Truck_02_transport_F: Truck_02_base_F {
        mapSize = 9.45;
        author = "$STR_A3_Bohemia_Interactive";
        crew = "C_man_1";
        faction = "CIV_F";
        side = 3;
        scope = 1;
        displayName = "$STR_A3_CfgVehicles_C_Truck_02_Dump0";
        model = "\A3\soft_f_beta\Truck_02\Truck_02_transport_F";
        picture = "\A3\soft_f_beta\Truck_02\data\UI\Truck_02_transport_CA.paa";
        Icon = "\A3\soft_f_beta\Truck_02\data\UI\Map_Truck_02_dump_CA.paa";
        castCargoShadow = 1;
        hiddenSelectionsTextures[] = {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_co.paa", "\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_co.paa"};
    };
};
class CfgSoundEffects {
    class AttenuationsEffects {
        class RHS_CarAttenuation {
            class Equalizer0 {
                center[] = {100, 250, 1000, 5000};
                bandwidth[] = {2, 2, 2, 2};
                gain[] = {0.9, 0.8, 0.7, 0.6};
            };
            class Equalizer1 {
                center[] = {60, 500, 3000, 8000};
                bandwidth[] = {2, 2, 2, 2};
                gain[] = {0.9, 0.8, 0.6, 0.5};
            };
            class Echo {
                WetDryMix = 0.1;
                Feedback = 0.1;
                Delay = 1;
            };
        };
    };
};
